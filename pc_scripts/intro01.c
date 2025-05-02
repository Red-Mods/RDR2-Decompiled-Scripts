//Decompiled with MagicRDR v1.0
//Function Count : 574
//Statics Count : 1967
//Natives Count : 788
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	bool bLocal_4 = false;
	var uLocal_5 = 0;
	var uLocal_6 = 22;
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
	int iLocal_69 = 0;
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
	var uLocal_96 = 7;
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
	var uLocal_126 = 3;
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
	var uLocal_142 = 1;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 1;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 7;
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
	var uLocal_186 = 1;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 1;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 2;
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
	var uLocal_220 = 1;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 3;
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
	var uLocal_244 = 4;
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
	var uLocal_264 = 1;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 3;
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
	var uLocal_294 = 4;
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
	var uLocal_306 = 2;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 4;
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
	var uLocal_326 = 4;
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
	var uLocal_338 = 2;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 1;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 6;
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
	var uLocal_370 = 8;
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
	var uLocal_390 = 2;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 5;
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
	var uLocal_412 = 3;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 3;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 1;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
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
	var uLocal_452 = 3;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 1;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 5;
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
	var uLocal_482 = 1;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 7;
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
	var uLocal_506 = 1;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 1;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 1;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 2;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 4;
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
	var uLocal_544 = 2;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 8;
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
	var uLocal_572 = 3;
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
	int iLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 7;
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
	var uLocal_624 = 7;
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
	var uLocal_656 = 13;
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
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 7;
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
	var uLocal_730 = 8;
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
	int iLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 1;
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
	int iLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	struct<6> Local_829 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	int iLocal_841 = 26;
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
	int iLocal_947 = 2;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	int iLocal_957 = 7;
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
	int iLocal_987 = 12;
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
	int iLocal_1037 = 13;
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
	int iLocal_1091 = 7;
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
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	int iLocal_1129 = 0;
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
	bool bLocal_1141 = false;
	int iLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 13;
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
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
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
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	struct<15> Local_1200[3];
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 5;
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
	var uLocal_1280 = 5;
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
	int iLocal_1300[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_1322 = false;
	int iLocal_1323 = 0;
	bool bLocal_1324 = false;
	bool bLocal_1325 = false;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	struct<2> Local_1331 = { 0, 0 } ;
	var uLocal_1333 = 0;
	bool bLocal_1334 = false;
	bool bLocal_1335 = false;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	bool bLocal_1342 = false;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	int iLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	int iLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	int iLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	int iLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	int iLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	int iLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	int iLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	int iLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	int iLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	int iLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	int iLocal_1390 = 0;
	var uLocal_1391 = 0;
	int iLocal_1392 = 0;
	var uLocal_1393 = 0;
	int iLocal_1394 = 0;
	var uLocal_1395 = 0;
	char* cLocal_1396[32] = "";
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	float fLocal_1406 = 0.0f;
	float fLocal_1407 = 0.0f;
	var uLocal_1408 = 0;
	struct<2> Local_1409 = { 0, 0 } ;
	var uLocal_1411 = 0;
	struct<2> Local_1412 = { 0, 0 } ;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	char[] cLocal_1417[4] = 0;
	var uLocal_1418 = 0;
	bool bLocal_1419 = false;
	var uLocal_1420 = 0;
	var uLocal_1421[3] = { 0, 0, 0 };
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	bool bLocal_1429 = false;
	var uLocal_1430 = 0;
	bool bLocal_1431 = false;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	int iLocal_1437 = 0;
	int iLocal_1438 = 0;
	int iLocal_1439 = 0;
	int iLocal_1440 = 0;
	int iLocal_1441 = 0;
	int iLocal_1442 = 0;
	int iLocal_1443 = 0;
	int iLocal_1444 = 0;
	int iLocal_1445 = 0;
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
	int iLocal_1456 = 0;
	vector3 vLocal_1457[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	struct<12> Local_1471[7];
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
	int iLocal_1641 = 0;
	struct<13> Local_1642[7];
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	int iLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	int iLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841 = 0;
	int iLocal_1842[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	int iLocal_1862 = 0;
	int iLocal_1863 = 0;
	int iLocal_1864[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	int iLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 2;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	int iLocal_1922 = 0;
	int iLocal_1923 = 0;
	int iLocal_1924 = 0;
	int iLocal_1925 = 0;
	int iLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	bool bLocal_1945 = false;
	bool bLocal_1946 = false;
	float fLocal_1947 = 0.0f;
	float fLocal_1948 = 0.0f;
	float fLocal_1949 = 0.0f;
	bool bLocal_1950 = false;
	int iLocal_1951 = 0;
	var uLocal_1952 = 0;
	float fLocal_1953 = 0.0f;
	int iLocal_1954 = 0;
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
	iLocal_826 = 0;
	bLocal_1325 = false;
	uLocal_1328 = Vector(736,489f, 90,334f, 1199,335f);
	Local_1331 = Vector(-2208,91f, 16,5062f, 2605,41f);
	bLocal_1334 = 259,75f;
	iLocal_1445 = 4294967295;
	iLocal_1641 = 2;
	iLocal_1826 = 3;
	iLocal_1827 = 2;
	iLocal_1828 = 2;
	iLocal_1829 = 3;
	iLocal_1830 = 4;
	iLocal_1831 = 5;
	iLocal_1832 = 5;
	iLocal_1835 = 7;
	iLocal_1836 = 3;
	iLocal_1837 = 7;
	iLocal_1838 = 4;
	iLocal_1839 = 2;
	iLocal_1840 = 3;
	iLocal_1841 = 8;
	iLocal_1862 = 4;
	iLocal_1863 = 18;
	iLocal_1954 = 0;
	Local_829 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_1141 = 99;
	iLocal_1142 = 6;
	iLocal_1129 = 1000;
	Function_573(0);
	while (Function_276())
	{
		Function_229();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0xCA / 202
{
	Global_47151[3] = 0;
	if (IS_SOUND_ID_VALID(&uLocal_1452))
	{
		RELEASE_SOUND_ID(&uLocal_1452);
	}
	if (!iLocal_1444)
	{
		Function_228(1);
		iLocal_1444 = 1;
	}
	ENABLE_CHILD_SECTOR("arm_trainstation01props02x");
	if (UI_ISACTIVE("IntroCredits"))
	{
		UI_EXIT("IntroCredits");
	}
	if (iLocal_1441)
	{
		STREAMING_ENABLE_BOUNDS(1);
		iLocal_1441 = 0;
	}
	if (iLocal_1445 == 4294967295 || IS_OBJECT_VALID(&bLocal_1429))
	{
		TRAIN_DESTROY_TRAIN(iLocal_1445);
	}
	DESTROY_OBJECT(&uLocal_1454);
	_SET_SKY_IS_INTRO_RUNNING(0);
	Function_223();
	Function_222(0x4000000);
	Function_221(&uLocal_827);
	Function_221(&bLocal_4);
	Function_220();
	Function_192(iLocal_1323, 1, 1, 1, 1, 1, 1, 1);
	Function_188(&iLocal_841);
	Function_188(&iLocal_947);
	Function_188(&iLocal_1091);
	Function_188(&iLocal_957);
	Function_188(&iLocal_987);
	Function_188(&iLocal_1037);
	Function_176();
	if (IS_ITERATOR_VALID(&uLocal_1143))
	{
		DESTROY_ITERATOR(&uLocal_1143);
	}
	RELEASE_LAYOUT_REF(&uLocal_827);
	if (bLocal_1322)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-842,66f, 93,936f, 2365,025f), -143,816f, 1, 1, 1);
		Function_27(Local_829, 1, 0, 1, 0);
	}
	else if (iLocal_1323)
	{
		Function_23(Local_829);
	}
	else
	{
		Function_4(Local_829);
	}
	Global_47151[3] = 0;
	if (Global_98250)
	{
		Global_99146 = 0;
		Global_99147 = 0;
		Function_2(114688);
		STREAMING_SET_CUTSCENE_MODE(1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-842,66f, 93,936f, 2365,025f), -143,816f, 1, 1, 1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(bool bParam0) //Position: 0x265 / 613
{
	if (Function_3(bParam0, 1) && !Function_3(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_3(bool bParam0, bool bParam1) //Position: 0x292 / 658
{
	return (bParam0 && bParam1) == 0;
}

void Function_4(int iParam0) //Position: 0x29F / 671
{
	Function_12(iParam0);
	Function_11();
	Function_8(2);
	Function_6((15 - Function_7(105)));
	Function_5(12);
	return;
}

void Function_5(int iParam0) //Position: 0x2C0 / 704
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_6(int iParam0) //Position: 0x2DD / 733
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_7(105)), 0);
	return;
}

int Function_7(int iParam0) //Position: 0x300 / 768
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_8(int iParam0) //Position: 0x317 / 791
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_10(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_10(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_10(&Global_21369 + 48);
	PRINTNL();
	Function_9(&iParam0);
	return;
}

void Function_9(int iParam0) //Position: 0x3B9 / 953
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_7(90)), 0);
	return;
}

void Function_10(var uParam0) //Position: 0x3DC / 988
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

void Function_11() //Position: 0x426 / 1062
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_12(int iParam0) //Position: 0x43F / 1087
{
	int iVar0;
	
	if (!Function_21(iParam0))
	{
		Function_19();
		return;
	}
	iVar0 = Function_18(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_13("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x492 / 1170
{
	struct<4> Var0;
	
	if (!Function_21(iParam1))
	{
		return;
	}
	switch (Function_18(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_14(Function_16(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_18(iParam1), Function_16(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_14(int iParam0) //Position: 0x5BC / 1468
{
	char* cVar0[16];
	
	if (!Function_15())
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

bool Function_15() //Position: 0x5F6 / 1526
{
	if (Function_3(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_16(int iParam0) //Position: 0x611 / 1553
{
	if (!Function_17(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_17(int iParam0) //Position: 0x631 / 1585
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_18(int iParam0) //Position: 0x648 / 1608
{
	if (!Function_17(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_19() //Position: 0x663 / 1635
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
			Function_20(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_20(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8AA / 2218
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_21(int iParam0) //Position: 0x8D6 / 2262
{
	if (!Function_17(iParam0))
	{
		return 0;
	}
	if (!Function_22(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_22(int iParam0) //Position: 0x8FA / 2298
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_23(int iParam0) //Position: 0x90F / 2319
{
	Function_24(iParam0);
	Function_8(2);
	Function_5(12);
	Function_6((15 - Function_7(105)));
	return;
}

void Function_24(int iParam0) //Position: 0x92D / 2349
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_21(iParam0))
	{
		return;
	}
	iVar0 = Function_18(iParam0);
	if (StackVal == 2)
	{
		Function_13("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_25(int iParam0) //Position: 0x9D3 / 2515
{
	char* cVar0[16];
	
	if (!Function_15())
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

struct<24> Function_26(char* cParam0) //Position: 0xA12 / 2578
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

void Function_27(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC68 / 3176
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_5(12);
	Function_8(2);
	Function_6((15 - Function_7(105)));
	if (Function_18(iParam0) == 1)
	{
		iVar2 = Function_16(iParam0);
		Function_171(&(Global_6667[iVar228]));
		Function_170(4194304);
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
			Function_99(iVar2, iParam0, bVar1);
			Function_98();
		}
	}
	Function_40(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_18(iParam0) == 1)
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
		if (Function_18(iParam0) == 1)
		{
			iVar2 = Function_16(iParam0);
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

void Function_28() //Position: 0xD5C / 3420
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

int Function_29(int iParam0, bool bParam1) //Position: 0xD8E / 3470
{
	int iVar0;
	
	iVar0 = Function_30(iParam0);
	if (!Function_17(iVar0))
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

int Function_30(int iParam0) //Position: 0xDCC / 3532
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_31(int iParam0) //Position: 0xDE6 / 3558
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1) //Position: 0xDFC / 3580
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

void Function_33(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10F9 / 4345
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

void Function_34(char* cParam0) //Position: 0x116E / 4462
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

bool Function_35(int iParam0, var uParam1, int iParam2) //Position: 0x11A8 / 4520
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

bool Function_36(var uParam0, int iParam1) //Position: 0x1224 / 4644
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_37(char* cParam0) //Position: 0x1237 / 4663
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

int Function_38(int iParam0) //Position: 0x12D8 / 4824
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

void Function_39(bool bParam0, bool bParam1) //Position: 0x1315 / 4885
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x132B / 4907
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_21(iParam0))
	{
		Function_19();
		return;
	}
	bVar0 = Function_18(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_97())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_16(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_93();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_97())
	{
		Function_92();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_13("DEED_COMPLETE", iParam0);
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
			Function_85(iParam0);
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
						switch (Function_16(iParam0))
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
			Function_41(iParam0, &Var14);
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

void Function_41(int iParam0, struct<41> Param1) //Position: 0x1589 / 5513
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x15C7 / 5575
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

void Function_43(bool bParam0) //Position: 0x1606 / 5638
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

void Function_44() //Position: 0x165B / 5723
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

void Function_45() //Position: 0x16A6 / 5798
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

void Function_46() //Position: 0x17AC / 6060
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

void Function_47() //Position: 0x17DF / 6111
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

void Function_48() //Position: 0x1972 / 6514
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

void Function_49() //Position: 0x1B2B / 6955
{
	Function_50(&Global_42918, 1, 0);
	return;
}

void Function_50(struct<2317> Param0) //Position: 0x1B39 / 6969
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

var Function_51() //Position: 0x1D56 / 7510
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_52(int iParam0) //Position: 0x1D6B / 7531
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

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E12 / 7698
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

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20AE / 8366
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

var Function_55() //Position: 0x26EC / 9964
{
	int iVar0;
	
	return &iVar0;
}

var Function_56(int iParam0) //Position: 0x26F5 / 9973
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2706 / 9990
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

struct<32> Function_58(char* cParam0) //Position: 0x27FD / 10237
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2818 / 10264
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_61(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_60(Function_61(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x287F / 10367
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_61(int iParam0, bool bParam1) //Position: 0x2891 / 10385
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_62(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28A3 / 10403
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

int Function_63(int iParam0) //Position: 0x29D7 / 10711
{
	return Global_55480[iParam016].f_96;
}

float Function_64(int iParam0) //Position: 0x29E6 / 10726
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_65(int iParam0) //Position: 0x2A1F / 10783
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_66(int iParam0) //Position: 0x2A5C / 10844
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

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BF6 / 11254
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

int Function_68(bool bParam0) //Position: 0x2E3A / 11834
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_69() //Position: 0x2E7B / 11899
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

struct<8> Function_70() //Position: 0x2F04 / 12036
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

struct<8> Function_71() //Position: 0x2F9B / 12187
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

void Function_72() //Position: 0x301A / 12314
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

int Function_73(int iParam0, bool bParam1, int iParam2) //Position: 0x3057 / 12375
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

void Function_74() //Position: 0x3263 / 12899
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_15())
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

bool Function_75(char* cParam0) //Position: 0x331A / 13082
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_76(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3332 / 13106
{
	int iVar0;
	
	iVar0 = Function_80(&uParam2, &fParam3);
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

struct<8> Function_77() //Position: 0x342A / 13354
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_78(bool bParam0, bool bParam1) //Position: 0x3434 / 13364
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_79(int iParam0) //Position: 0x3445 / 13381
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x345B / 13403
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

float Function_81(struct<2> Param0, struct<2> Param2) //Position: 0x3527 / 13607
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_82(float fParam0, int iParam1) //Position: 0x3544 / 13636
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

bool Function_83(int iParam0) //Position: 0x3D70 / 15728
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_3(bVar0, 0x1000000) || Function_3(bVar0, 0x2000000)) || Function_3(bVar0, 0x4000000)) || !Function_3(bVar0, 0x10000000));
}

void Function_84(var uParam0, int iParam1) //Position: 0x3DAB / 15787
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_85(int iParam0) //Position: 0x3DBA / 15802
{
	int iVar0;
	int iVar1;
	
	if (!Function_17(iParam0))
	{
		return;
	}
	switch (Function_18(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_16(iParam0);
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
			switch (Function_16(iParam0))
			{
				case 0x00000000:
					if (Function_88(iParam0) == 1)
					{
						iVar0 = Function_87(iParam0);
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
			if (Function_87(iParam0) == 0)
			{
				if (Function_88(iParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_16(iParam0);
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
			if (Function_88(iParam0) == 1)
			{
				Function_90(400, 1, 0, 0);
			}
			switch (Function_16(iParam0))
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

bool Function_86(int iParam0) //Position: 0x4296 / 17046
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(int iParam0) //Position: 0x42AC / 17068
{
	if (!Function_17(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_88(int iParam0) //Position: 0x42CB / 17099
{
	if (!Function_17(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_89(int iParam0, int iParam1) //Position: 0x42E5 / 17125
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

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x434F / 17231
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

void Function_91(int iParam0) //Position: 0x4577 / 17783
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

void Function_92() //Position: 0x4615 / 17941
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

void Function_93() //Position: 0x4777 / 18295
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

int Function_94(int iParam0, char* cParam1) //Position: 0x47F7 / 18423
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

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B4E / 19278
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

int Function_96(int iParam0) //Position: 0x4BD6 / 19414
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_97() //Position: 0x4BF0 / 19440
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_98() //Position: 0x4C1B / 19483
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x4C49 / 19529
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
			cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
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
			Var16 = { StackVal, StackVal, StackVal, Function_25(iParam0) };
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x4EE5 / 20197
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

void Function_101(int iParam0, int iParam1) //Position: 0x50B9 / 20665
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

int Function_102(int iParam0, char* cParam1) //Position: 0x5323 / 21283
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

int Function_103() //Position: 0x54B3 / 21683
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

void Function_104() //Position: 0x5554 / 21844
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

void Function_105(int iParam0) //Position: 0x5612 / 22034
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

var Function_106(int iParam0) //Position: 0x5678 / 22136
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

int Function_107(int iParam0, bool bParam1) //Position: 0x5707 / 22279
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

var Function_108(int iParam0, int iParam1) //Position: 0x58B3 / 22707
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

void Function_109() //Position: 0x58F8 / 22776
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x590E / 22798
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x594E / 22862
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_112(int iParam0) //Position: 0x598E / 22926
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x599D / 22941
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

int Function_114(int iParam0) //Position: 0x5B65 / 23397
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

var Function_115() //Position: 0x5BFA / 23546
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x5C1F / 23583
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

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0x60EE / 24814
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

var Function_118(int iParam0) //Position: 0x6415 / 25621
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x64B8 / 25784
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

int Function_120(int iParam0, bool bParam1) //Position: 0x66B5 / 26293
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

int Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6860 / 26720
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

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x6932 / 26930
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
			Function_168(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_46760[0]);
			Function_165(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_165(Global_46816[0]);
			Function_155(0);
			Function_153(2, 1);
			Function_153(0, 1);
			Function_153(1, 1);
			break;
		
		case 0x00000003:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_165(Global_46816[0]);
			Function_165(Global_46760[0]);
			Function_151(0, 1);
			Function_151(15, 1);
			Function_151(9, 1);
			Function_151(12, 1);
			Function_151(16, 1);
			Function_153(3, 1);
			break;
		
		case 0x00000005:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_163(21, &bParam2, 4);
			Function_165(Global_46816[0]);
			Function_153(39, 1);
			break;
		
		case 0x00000007:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_150())
				{
					if (!Function_149(4))
					{
						Function_139(4, 0, 0, 1, 0);
					}
				}
			}
			Function_165(Global_46760[0]);
			Function_165(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_165(Global_46760[0]);
			Function_165(Global_46816[2]);
			Function_138(&(Global_43791[Global_46816[2]]), 32768);
			Function_137(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_163(9, &bParam2, 4);
			Function_165(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_165(Global_46760[0]);
			Function_165(Global_46796[0]);
			Function_138(&(Global_43791[Global_46796[0]]), 32768);
			Function_137(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_165(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_46760[0]);
			Function_165(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_165(Global_46760[1]);
			Function_165(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_165(Global_46838[0]);
			Function_165(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_165(Global_46796[5]);
			Function_165(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_163(21, &bParam2, 4);
			Function_165(Global_46760[4]);
			Function_165(Global_46796[4]);
			Function_136(&Global_119935, 0x2000000);
			Function_136(&Global_119935, 0x4000000);
			Function_136(&Global_119935, 4096);
			Function_136(&Global_119935, 8);
			Function_136(&Global_119935, 8388608);
			Function_136(&Global_119935, 524288);
			Function_136(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_165(Global_46760[4]);
			Function_165(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_137(&(Global_43791[Global_46760[4]]), 256);
			Function_165(Global_46760[4]);
			Function_165(Global_46796[0]);
			Function_138(&(Global_43791[Global_46796[0]]), 32768);
			Function_137(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_165(Global_46760[0]);
			Function_165(Global_46760[5]);
			Function_163(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_165(Global_46796[3]);
			Function_138(&(Global_43791[Global_46796[3]]), 32768);
			Function_137(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_163(9, &bParam2, 4);
			Function_165(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_138(&(Global_43791[Global_46838[1]]), 32768);
			Function_165(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_163(12, &bParam2, 4);
			Function_137(&(Global_43791[Global_46838[1]]), 256);
			Function_165(Global_46816[3]);
			Function_165(Global_46866[0]);
			Function_165(Global_46850[0]);
			Function_155(4);
			Function_151(13, 1);
			Function_151(1, 1);
			Function_151(18, 1);
			Function_153(34, 1);
			Function_153(44, 1);
			Function_153(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_163(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_165(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_165(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_165(Global_46866[0]);
			Function_165(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_165(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_165(Global_46850[0]);
			Function_165(Global_46866[0]);
			Function_165(Global_46866[1]);
			Function_165(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_163(23, &bParam2, 3);
			Function_151(23, 1);
			Function_165(Global_46850[0]);
			Function_165(Global_46850[2]);
			Function_138(&(Global_43791[Global_46850[2]]), 32768);
			Function_137(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_163(19, &bParam2, 4);
			Function_165(Global_46850[0]);
			Function_165(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_163(24, &bParam2, 3);
			Function_151(24, 1);
			Function_165(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_165(Global_46850[0]);
			Function_165(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_165(Global_46866[12]);
			Function_165(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_165(Global_46866[12]);
			Function_165(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_163(25, &bParam2, 10);
			Function_165(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_165(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_165(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_163(13, &bParam2, 4);
			Function_165(Global_46866[2]);
			Function_165(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_149(8))
				{
					Function_139(8, 0, 0, 1, 0);
				}
			}
			Function_165(Global_46850[0]);
			Function_155(9);
			Function_151(7, 1);
			Function_151(11, 1);
			Function_151(3, 1);
			Function_151(20, 1);
			Function_153(57, 1);
			break;
		
		case 0x0000002A:
			Function_163(2, &bParam2, 4);
			Function_165(Global_46914[0]);
			Function_165(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_165(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_165(Global_46914[0]);
			Function_165(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_165(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_165(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_165(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_163(17, &bParam2, 4);
			Function_165(Global_46926[0]);
			Function_165(Global_46914[0]);
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
			Function_137(&(Global_43791[Global_46914[1]]), 256);
			Function_155(11);
			Function_165(Global_46914[1]);
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_165(Global_46914[1]);
			Function_165(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_165(Global_46914[1]);
			Function_123(11);
			Function_155(12);
			Global_26200[1114].f_40 = 0;
			Function_153(56, 1);
			if (!&bParam2)
			{
				if (!Function_149(9))
				{
					Function_139(9, 0, 0, 0, 0);
				}
				if (!Function_149(10))
				{
					Function_139(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(int iParam0) //Position: 0x724D / 29261
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73CA / 29642
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

bool Function_125(struct<2> Param0, struct<2> Param2) //Position: 0x74D5 / 29909
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_126(int iParam0) //Position: 0x7501 / 29953
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

var Function_127(vector3 vParam0) //Position: 0x7558 / 30040
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

void Function_128(char* cParam0, int iParam1) //Position: 0x75A6 / 30118
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

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7601 / 30209
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
		if (!Function_149(bParam0))
		{
			Function_139(bParam0, 1, 0, 0, 1);
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

void Function_130() //Position: 0x77A2 / 30626
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77A8 / 30632
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

void Function_132(bool bParam0, int iParam1) //Position: 0x7857 / 30807
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0x78AC / 30892
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x78C2 / 30914
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

bool Function_135(int iParam0, int iParam1) //Position: 0x7913 / 30995
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

void Function_136(var uParam0, int iParam1) //Position: 0x7940 / 31040
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7951 / 31057
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x796B / 31083
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x797C / 31100
{
	struct<8> Var0;
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_148(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_149(bParam0))
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
		Function_142(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_141() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_141() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_140(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_15())
		{
			if (!Function_36(Global_119934, 2))
			{
				Function_33(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7AD8 / 31448
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_141() //Position: 0x7B63 / 31587
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_142(bool bParam0) //Position: 0x7B90 / 31632
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_145(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_144(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_143(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_143(int iParam0) //Position: 0x7D40 / 32064
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

void Function_144(char* cParam0, int iParam1) //Position: 0x7D97 / 32151
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

var Function_145(int iParam0) //Position: 0x7DBC / 32188
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

bool Function_146(bool bParam0, bool bParam1) //Position: 0x7E12 / 32274
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

bool Function_147(bool bParam0) //Position: 0x7E71 / 32369
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_148(int iParam0) //Position: 0x7E7D / 32381
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_149(int iParam0) //Position: 0x7E99 / 32409
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

bool Function_150() //Position: 0x7EEB / 32491
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_3(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7F1B / 32539
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_152(iParam0, iParam1);
	Function_33(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7F90 / 32656
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7FED / 32749
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_154(iParam0, iParam1);
	Function_33(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x8068 / 32872
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0x80C3 / 32963
{
	var uVar0;
	var uVar1;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_162(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_162(&Global_26200[iParam014] + 88, 0);
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
			Function_140("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_124(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_139(14, 1, 0, 0, 0);
				Function_156(14, 1, 0, 0, 0);
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
			Function_140("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_90(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_89(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8383 / 33667
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_148(3) || uParam3)
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
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_140(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_146(bParam0, bParam1))
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
		Function_142(bParam0);
		if (StackVal && !Function_3(((((!Function_141() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_3((((Function_141() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_15())
		{
			if (!Function_36(Global_119934, 2))
			{
				Function_33(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_158();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_157(3, bParam1);
				break;
			
			case 0x00000005:
				Function_157(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_157(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_157(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_157(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_157(2, SHIFT_LEFT(bParam1, 18));
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

void Function_157(int iParam0, bool bParam1) //Position: 0x8622 / 34338
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

void Function_158() //Position: 0x8691 / 34449
{
	if (Function_133(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_161(Global_42827);
			(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_161(Global_42827);
			*(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_159(int iParam0, int iParam1) //Position: 0x8711 / 34577
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
					if (Function_160(13) && iVar14)
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
					if (Function_160(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_160(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_160(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_160(23) && iVar15)
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
					if (Function_160(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_160(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_160(27) && iVar16)
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
					if (Function_160(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_160(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_160(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_160(49) && iVar13)
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
					if (Function_160(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_29(6, 0) && Function_160(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_160(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_29(9, 0) && Function_160(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_160(15) && iVar17)
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

int Function_160(int iParam0) //Position: 0x9374 / 37748
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0) //Position: 0x9389 / 37769
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

void Function_162(var uParam0, int iParam1) //Position: 0x93D8 / 37848
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

void Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0x9430 / 37936
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_164(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_168(bParam0, 0, 0);
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

bool Function_164(int iParam0, int iParam1) //Position: 0x94A3 / 38051
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_165(int iParam0) //Position: 0x94B7 / 38071
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_167(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_138(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_90(473, 1, 0, 0);
		iVar0 = Function_166(iParam0);
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

var Function_166(int iParam0) //Position: 0x95A8 / 38312
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

bool Function_167(var uParam0, int iParam1) //Position: 0x9600 / 38400
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_168(bool bParam0, bool bParam1, int iParam2) //Position: 0x961D / 38429
{
	if (!Function_169(bParam0))
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

bool Function_169(int iParam0) //Position: 0x9677 / 38519
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_170(bool bParam0) //Position: 0x9689 / 38537
{
	bool bVar0;
	
	if (Function_3(bParam0, 1) && Function_3(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_171(struct<185> Param0) //Position: 0x96BD / 38589
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
			Function_172(4, 0, 0);
		}
	}
	return;
}

void Function_172(int iParam0, int iParam1, int iParam2) //Position: 0x9728 / 38696
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
		Function_173(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_173(bool bParam0, int iParam1, bool bParam2) //Position: 0x9812 / 38930
{
	int iVar0;
	
	Function_175(bParam0);
	Function_10(&iParam1);
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
	Function_174();
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

void Function_174() //Position: 0x9991 / 39313
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_175(int iParam0) //Position: 0x999D / 39325
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

void Function_176() //Position: 0x99E3 / 39395
{
	Function_179();
	Function_178();
	if (IS_LAYOUTREF_VALID(&iLocal_780))
	{
		Function_177();
	}
	return;
}

void Function_177() //Position: 0x99FC / 39420
{
	Function_188(&iLocal_780 + 8);
	RELEASE_LAYOUT_REF(&iLocal_780);
	return;
}

void Function_178() //Position: 0x9A11 / 39441
{
	Function_188(&iLocal_592 + 8);
	RELEASE_LAYOUT_REF(&iLocal_592);
	return;
}

void Function_179() //Position: 0x9A26 / 39462
{
	Function_188(&bLocal_4 + 8);
	Function_188(&bLocal_4 + 368);
	Function_180(&Global_11014, &Global_12796, 2, 0);
	Function_180(&Global_11014, &Global_12796, 8, 0);
	RELEASE_LAYOUT_REF(&bLocal_4);
	return;
}

void Function_180(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x9A58 / 39512
{
	int iVar0;
	
	iVar0 = bParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_187(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_187(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_187(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_186(&(Param0[iVar02]), 8);
	}
	Function_186(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_185(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_181(&Param0, &vParam1, bParam2, 0);
	}
}

void Function_181(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x9B00 / 39680
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_184(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_183(Global_43790), Function_182(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_187(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_187(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_184(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_183(Global_43790), Function_182(Global_43790), false, 0);
	}
}

int Function_182(int iParam0) //Position: 0x9C66 / 40038
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

int Function_183(int iParam0) //Position: 0x9C91 / 40081
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

void Function_184(int iParam0, int iParam1) //Position: 0x9CC5 / 40133
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_185(int iParam0) //Position: 0x9CD6 / 40150
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

void Function_186(var uParam0, int iParam1) //Position: 0x9D7F / 40319
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_187(var uParam0, int iParam1) //Position: 0x9D99 / 40345
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_188(int iParam0) //Position: 0x9DB6 / 40374
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_189(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_189(struct<2>[] Param0, int iParam1) //Position: 0x9DDE / 40414
{
	if (Function_191(&(Param0[iParam12]), 4))
	{
		if (Function_191(&(Param0[iParam12]), 1))
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
			Function_190(&(Param0[iParam12]), 1);
			Function_190(&(Param0[iParam12]), 2);
			Function_190(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_190(struct<13> Param0) //Position: 0x9F29 / 40745
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_191(struct<13> Param0) //Position: 0x9F46 / 40774
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_192(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9F64 / 40804
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_219());
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
	Function_218();
	CLEAR_PRINTED_OBJECTIVE();
	Function_217();
	Function_215(0);
	Function_214();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_213();
	Function_212();
	Function_218();
	ENABLE_JOURNAL_REPLAY(1);
	Function_211(1);
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
		Function_210(&Global_54076);
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
	Function_207(Global_42825);
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
	Function_206();
	Function_2(1178687);
	Function_204(33039);
	Function_203(0x218003f);
	Function_222(4194560);
	Function_202();
	Function_201();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_198(0, 1, 1);
	}
	else
	{
		Function_198(0, 1, 1);
	}
	Function_197();
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
	Function_193();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_39(&Global_21369 + 72 + 32, 16);
}

void Function_193() //Position: 0xA170 / 41328
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
		if (Function_196() > 3)
		{
			bVar0 *= 2;
		}
		Function_194(StackVal, 0, 0, Function_7(bVar0), 0);
	}
	return;
}

void Function_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA1C7 / 41415
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_195(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_195(bool bParam0) //Position: 0xA217 / 41495
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_196() //Position: 0xA240 / 41536
{
	return Global_21369.f_248;
}

void Function_197() //Position: 0xA24B / 41547
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_137(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_198(int iParam0, bool bParam1, int iParam2) //Position: 0xA275 / 41589
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
			Function_138(&(Global_43791[Global_43789]), 131072);
			Function_137(&(Global_43791[Global_43789]), 2097152);
			Function_199(Global_43789);
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
				if (Function_167(&(Global_43791[iVar0]), 4) || Function_167(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_137(&(Global_43791[iVar0]), 2097155);
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

void Function_199(int iParam0) //Position: 0xA381 / 41857
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_200())
			{
				return;
			}
		}
		if (!Function_167(&(Global_43791[iParam0]), 2048))
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

bool Function_200() //Position: 0xA400 / 41984
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_167(&(Global_43791[iVar0]), 4) || Function_167(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_201() //Position: 0xA469 / 42089
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

void Function_202() //Position: 0xA48F / 42127
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

void Function_203(int iParam0) //Position: 0xA4B5 / 42165
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_204(int iParam0) //Position: 0xA4C8 / 42184
{
	Function_205(&Global_43580, iParam0);
	return;
}

void Function_205(var uParam0, var uParam1) //Position: 0xA4D6 / 42198
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_206() //Position: 0xA4F5 / 42229
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

void Function_207(int iParam0) //Position: 0xA56D / 42349
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
		Function_208(78, 1, 1);
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

int Function_208(bool bParam0, bool bParam1, int iParam2) //Position: 0xA6A3 / 42659
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_209(bParam0), Function_51()) == 0)
		{
			ADD_ITEM(Function_209(bParam0), Function_51(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_209(bParam0), Function_51(), &iParam2);
	return 1;
}

var Function_209(bool bParam0) //Position: 0xA6F1 / 42737
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

void Function_210(int iParam0) //Position: 0xA7E5 / 42981
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

void Function_211(bool bParam0) //Position: 0xA868 / 43112
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

void Function_212() //Position: 0xA8DF / 43231
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

void Function_213() //Position: 0xA923 / 43299
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

void Function_214() //Position: 0xA967 / 43367
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_215(int iParam0) //Position: 0xA97D / 43389
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_216())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_216() //Position: 0xA9BD / 43453
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

void Function_217() //Position: 0xA9E2 / 43490
{
	Global_15862 = 0.0f;
	return;
}

void Function_218() //Position: 0xA9EC / 43500
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

int Function_219() //Position: 0xAA17 / 43543
{
	var uVar0;
	
	uVar0 = Function_51();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_220() //Position: 0xAA34 / 43572
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_221(int iParam0) //Position: 0xAA3D / 43581
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

void Function_222(int iParam0) //Position: 0xAAA5 / 43685
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_223() //Position: 0xAAC2 / 43714
{
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
	Function_172(0, 60, 0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	Function_2(12);
	Function_204(9);
	Function_227(&bLocal_4 + 1736[2]);
	Function_224(StackVal, Function_227(&bLocal_4 + 1736[2]), 1, 0);
	bLocal_1335 = 976;
	while (bLocal_1335 < 1007)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bLocal_1335);
		bLocal_1335++;
	}
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1089);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1090);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1061);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1062);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1063);
	return;
}

int Function_224(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0xAB58 / 43864
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

var Function_225(bool bParam0, int iParam1) //Position: 0xACD5 / 44245
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&bParam0, &iParam1);
}

void Function_226(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xACE4 / 44260
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_15())
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

struct<8> Function_227(bool bParam0) //Position: 0xAE2E / 44590
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

void Function_228(bool bParam0) //Position: 0xAE57 / 44631
{
	if (!bParam0)
	{
		ENABLE_WORLD_SECTOR("morningStar");
		ENABLE_CHILD_SECTOR("blk_barge01Props01x");
		ENABLE_CHILD_SECTOR("blk_barge01x");
		DISABLE_WORLD_SECTOR("tannersSpanBefore");
		ENABLE_WORLD_SECTOR("tannersSpanAfter");
		DISABLE_WORLD_SECTOR("unionPacific");
		DISABLE_WORLD_SECTOR("ntwinRocks");
		DISABLE_WORLD_SECTOR("hennigansRanch");
		DISABLE_CHILD_SECTOR("blk_saloon_int_01x");
		DISABLE_CHILD_SECTOR("blk_theatre_int_01x");
		DISABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
		DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
		DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_forgeMill_int_01x");
		DISABLE_CHILD_SECTOR("blk_sawMill_int_01x");
		DISABLE_CHILD_SECTOR("blk_bank_int_01x");
		DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_church_int_01x");
		DISABLE_CHILD_SECTOR("blk_policeStation_int_01x");
		DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_trainstation_int_01x");
		DISABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
		DISABLE_CHILD_SECTOR("blk_forgeMill01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_blacksmith01x");
		DISABLE_CHILD_SECTOR("blk_blacksmith01Props01x");
		DISABLE_CHILD_SECTOR("blk_bank01x");
		DISABLE_CHILD_SECTOR("blk_bank_int_01x");
		DISABLE_CHILD_SECTOR("blk_cemetary01x");
		DISABLE_CHILD_SECTOR("blk_corral01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse04x");
		DISABLE_CHILD_SECTOR("blk_slumHouse08x");
		DISABLE_CHILD_SECTOR("blk_bank_int_02x");
		DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
		DISABLE_CHILD_SECTOR("blk_bank01Props01x");
		DISABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
		DISABLE_CHILD_SECTOR("blk_underConstruction01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction01Props01x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding17x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding17Props01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction04x");
		DISABLE_CHILD_SECTOR("blk_underConstruction04Props01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction05x");
		DISABLE_CHILD_SECTOR("blk_underConstruction05Props01x");
		DISABLE_CHILD_SECTOR("blk_alleyClotheslines01x");
		DISABLE_CHILD_SECTOR("blk_photography01x");
		DISABLE_CHILD_SECTOR("blk_photography01Props01x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding07Props01x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding08x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding08Props01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction03x");
		DISABLE_CHILD_SECTOR("blk_underConstruction03Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse02x");
		DISABLE_CHILD_SECTOR("blk_slumHouse02Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse04Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse06x");
		DISABLE_CHILD_SECTOR("blk_slumHouse06Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse07x");
		DISABLE_CHILD_SECTOR("blk_slumHouse07Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse08Props01x");
		DISABLE_CHILD_SECTOR("blk_freightstation01Props01x");
		DISABLE_CHILD_SECTOR("blk_furnitureStore01x");
		DISABLE_CHILD_SECTOR("blk_furnitureStore01Props01x");
		DISABLE_CHILD_SECTOR("blk_barn01Props01x");
		DISABLE_CHILD_SECTOR("blk_cemetary01Props01x");
	}
	else
	{
		ENABLE_CHILD_SECTOR("morningStar");
		ENABLE_CHILD_SECTOR("blk_barge01Props01x");
		ENABLE_CHILD_SECTOR("blk_barge01x");
		ENABLE_WORLD_SECTOR("tannersSpanBefore");
		DISABLE_WORLD_SECTOR("tannersSpanAfter");
		ENABLE_WORLD_SECTOR("unionPacific");
		ENABLE_WORLD_SECTOR("ntwinRocks");
		ENABLE_WORLD_SECTOR("hennigansRanch");
		ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
		ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
		ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
		ENABLE_CHILD_SECTOR("mor_morningStar_int_01x");
		ENABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_forgeMill_int_01x");
		ENABLE_CHILD_SECTOR("blk_sawMill_int_01x");
		ENABLE_CHILD_SECTOR("blk_bank_int_01x");
		ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_church_int_01x");
		ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
		ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
		ENABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
		ENABLE_CHILD_SECTOR("blk_forgeMill01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_blacksmith01x");
		ENABLE_CHILD_SECTOR("blk_blacksmith01Props01x");
		ENABLE_CHILD_SECTOR("blk_bank01x");
		ENABLE_CHILD_SECTOR("blk_bank_int_01x");
		ENABLE_CHILD_SECTOR("blk_cemetary01x");
		ENABLE_CHILD_SECTOR("blk_corral01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse04x");
		ENABLE_CHILD_SECTOR("blk_slumHouse08x");
		ENABLE_CHILD_SECTOR("blk_bank_int_02x");
		ENABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
		ENABLE_CHILD_SECTOR("blk_bank01Props01x");
		ENABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
		ENABLE_CHILD_SECTOR("blk_underConstruction01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction01Props01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding17x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding17Props01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction04x");
		ENABLE_CHILD_SECTOR("blk_underConstruction04Props01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction05x");
		ENABLE_CHILD_SECTOR("blk_underConstruction05Props01x");
		ENABLE_CHILD_SECTOR("blk_alleyClotheslines01x");
		ENABLE_CHILD_SECTOR("blk_photography01x");
		ENABLE_CHILD_SECTOR("blk_photography01Props01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding07Props01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding08x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding08Props01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction03x");
		ENABLE_CHILD_SECTOR("blk_underConstruction03Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse02x");
		ENABLE_CHILD_SECTOR("blk_slumHouse02Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse04Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse06x");
		ENABLE_CHILD_SECTOR("blk_slumHouse06Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse07x");
		ENABLE_CHILD_SECTOR("blk_slumHouse07Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse08Props01x");
		ENABLE_CHILD_SECTOR("blk_freightstation01Props01x");
		ENABLE_CHILD_SECTOR("blk_furnitureStore01x");
		ENABLE_CHILD_SECTOR("blk_furnitureStore01Props01x");
		ENABLE_CHILD_SECTOR("blk_barn01Props01x");
		ENABLE_CHILD_SECTOR("blk_cemetary01Props01x");
		ENABLE_CHILD_SECTOR("Blk_swTrainstation_east01x");
		ENABLE_CHILD_SECTOR("Blk_watertower01x");
		ENABLE_CHILD_SECTOR("Blk_hotel01x");
		ENABLE_CHILD_SECTOR("Blk_theatre01x");
		ENABLE_CHILD_SECTOR("Blk_saloon01x");
		ENABLE_CHILD_SECTOR("Blk_cityHall01x");
		ENABLE_CHILD_SECTOR("Blk_policestation01x");
		ENABLE_CHILD_SECTOR("blk_theatre01Props01x");
		ENABLE_CHILD_SECTOR("blk_archeologist01x");
		ENABLE_CHILD_SECTOR("blk_swBlacksmith_south01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding05x");
		ENABLE_CHILD_SECTOR("blk_inn01x");
	}
	iLocal_1444 = bParam0;
	return;
}

void Function_229() //Position: 0xBD4F / 48463
{
	var uVar0[6];
	int iVar7;
	
	if (Function_275())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Saloon";
		uVar0[3] = "Hilltop";
		uVar0[4] = "Fort Mercer";
		uVar0[5] = "Force Stage 2 fail";
		iVar7 = Function_261(&uLocal_1121, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_260(&iVar7, &bLocal_1141, &iLocal_1142, &iLocal_1129))
		{
			Function_253();
			Function_252();
		}
		if (iVar7 == 0)
		{
			Function_253();
			Function_252();
			Function_251(&bLocal_1322, 8);
		}
		else if (iVar7 == 1)
		{
			Function_253();
			Function_252();
			Function_249(bLocal_1141);
			Function_241(StackVal, 5, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
		}
		else if (iVar7 == 2)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1141 = true;
			iLocal_1142 = 0;
			iLocal_1129 = 1000;
		}
		else if (iVar7 == 3)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1141 = 2;
			iLocal_1142 = 0;
			iLocal_1129 = 1000;
		}
		else if (iVar7 == 4)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1141 = 101;
			iLocal_1142 = 0;
			iLocal_1129 = 1000;
		}
		else if (iVar7 == 5)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1141 = true;
			iLocal_1142 = 0;
			iLocal_1129 = 1000;
			Function_239(bLocal_1141);
			Function_230(StackVal, Function_239(bLocal_1141), bLocal_1141, Global_46736[3], Function_238(bLocal_1141), 0);
			iLocal_1323 = 1;
		}
	}
	return;
}

void Function_230(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0xBEEE / 48878
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
	if (bParam2 != Global_53524.f_48 && !Function_237())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_236(0);
	Function_235();
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
		Function_233(bParam2);
	}
	Function_232(uParam3, iVar0, iVar1);
	Function_231();
}

void Function_231() //Position: 0xBF97 / 49047
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

void Function_232(int iParam0, bool bParam1, bool bParam2) //Position: 0xBFD8 / 49112
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

void Function_233(bool bParam0) //Position: 0xC143 / 49475
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_234() };
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

struct<16> Function_234() //Position: 0xC2DB / 49883
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

void Function_235() //Position: 0xC321 / 49953
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_236(bool bParam0) //Position: 0xC345 / 49989
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

bool Function_237() //Position: 0xC374 / 50036
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_238(bool bParam0) //Position: 0xC38F / 50063
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&bLocal_4 + 1464[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&bLocal_4 + 1464[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&bLocal_4 + 1464[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&bLocal_4 + 1464[0]);
			break;
	}
	return GET_OBJECT_HEADING(&bLocal_4 + 1632[0]);
}

struct<8> Function_239(bool bParam0) //Position: 0xC3FA / 50170
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_227(&bLocal_4 + 1464[0]);
			return StackVal, Function_227(&bLocal_4 + 1464[0]);
			break;
		
		case 0x00000001:
			Function_227(&bLocal_4 + 1464[0]);
			return StackVal, Function_227(&bLocal_4 + 1464[0]);
			break;
		
		case 0x00000002:
			Function_227(&bLocal_4 + 1464[0]);
			return StackVal, Function_227(&bLocal_4 + 1464[0]);
			break;
		
		case 0x00000065:
			Function_227(&bLocal_4 + 1464[1]);
			return StackVal, Function_227(&bLocal_4 + 1464[1]);
			break;
	}
	Function_227(&bLocal_4 + 1464[0]);
	return StackVal, Function_227(&bLocal_4 + 1464[0]);
}

void Function_240(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC46B / 50283
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

void Function_241(int iParam0, bool bParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xC495 / 50325
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_246(StackVal, Param4, uParam3, &iParam6);
		Function_242(iParam0);
		bParam1 = 1;
		bParam2 = 100;
	}
}

void Function_242(int iParam0) //Position: 0xC4D6 / 50390
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_245("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_244(2) || Function_244(8)) || Function_244(9)) || Function_244(10))
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
		Function_245("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_245("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_245("");
	}
	else if (iParam0 == 8)
	{
		Function_243();
		Function_11();
	}
	else if (iParam0 == 4)
	{
		Function_243();
	}
	return;
}

void Function_243() //Position: 0xC5CD / 50637
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_244(int iParam0) //Position: 0xC5D9 / 50649
{
	int iVar0;
	
	if (!Function_31(iParam0))
	{
		return 0;
	}
	iVar0 = Function_30(iParam0);
	if (!Function_21(Function_30(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_245(char* cParam0) //Position: 0xC60F / 50703
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_246(struct<2> Param0, var uParam2, var uParam3) //Position: 0xC67B / 50811
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_248(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_247(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_247(int iParam0) //Position: 0xC6FD / 50941
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

var Function_248(struct<2> Param0, bool bParam2) //Position: 0xCBAB / 52139
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

struct<8> Function_249(bool bParam0) //Position: 0xCC17 / 52247
{
	Function_239(bParam0 + 1);
	return StackVal, Function_239(bParam0 + 1);
}

int Function_250(bool bParam0) //Position: 0xCC24 / 52260
{
	return Function_238(bParam0 + 1);
}

void Function_251(bool bParam0, int iParam1) //Position: 0xCC31 / 52273
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242(&iParam1);
	bParam0 = 1;
	return;
}

void Function_252() //Position: 0xCC56 / 52310
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_253() //Position: 0xCC6B / 52331
{
	Function_255();
	Function_254(10, 3);
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xCC7A / 52346
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

void Function_255() //Position: 0xCDC7 / 52679
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_259())
	{
		Function_258(10, 3);
	}
	else
	{
		Function_256();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_51(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_51());
	UI_POP("nDebugMenu");
	return;
}

void Function_256() //Position: 0xCE12 / 52754
{
	Function_257(25, 2);
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0xCE1E / 52766
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

void Function_258(int iParam0, int iParam1) //Position: 0xD04A / 53322
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

bool Function_259() //Position: 0xD197 / 53655
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
				if (!Function_3(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_260(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD1FF / 53759
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_253();
			Function_252();
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
		Function_245("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_261(struct<17> Param0) //Position: 0xD2AE / 53934
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_274(&Var12, &Var0);
	uVar15 = Function_273(uParam1, &Var12);
	Function_272(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_271(&Param0, uVar15);
	Function_269(StackVal, &Param0, Var12.f_12);
	Function_267(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_266(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_263(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_262(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_262(int iParam0, int iParam1, int iParam2) //Position: 0xD3A2 / 54178
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

bool Function_263(struct<17> Param0) //Position: 0xD402 / 54274
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
				Function_265(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_265(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_262(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_264(Param1.f_64);
	}
	else
	{
		Function_264(Param1.f_64);
	}
	return 0;
}

void Function_264(bool bParam0) //Position: 0xD595 / 54677
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

void Function_265(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xD5D3 / 54739
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

var Function_266(int iParam0, struct<21> Param1) //Position: 0xD689 / 54921
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_267(vector3 vParam0) //Position: 0xD6B0 / 54960
{
	switch (Function_268())
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

int Function_268() //Position: 0xD75C / 55132
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

void Function_269(vector3 vParam0) //Position: 0xD798 / 55192
{
	switch (Function_270(&vParam0))
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

int Function_270(bool bParam0) //Position: 0xD841 / 55361
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_3(bParam0, 0x40000000))
		{
			Function_78(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_3(bParam0, 0x40000000))
		{
			Function_78(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_39(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_3(bParam0, 0x20000000))
		{
			Function_78(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_3(bParam0, 0x20000000))
		{
			Function_78(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_39(&bParam0, 0x20000000);
	return 0;
}

var Function_271(struct<21> Param0) //Position: 0xD961 / 55649
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

void Function_272(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xDB1B / 56091
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

var Function_273(int iParam0, struct<13> Param1) //Position: 0xDBB7 / 56247
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_274(struct<17> Param0) //Position: 0xDBD3 / 56275
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

bool Function_275() //Position: 0xDC2D / 56365
{
	return Global_47307;
}

bool Function_276() //Position: 0xDC36 / 56374
{
	if (IS_EXITFLAG_SET())
	{
		Function_249(bLocal_1141);
		Function_241(StackVal, 4, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
		return 0;
	}
	Function_572(StackVal, StackVal, StackVal, StackVal, StackVal, Local_829, bLocal_1141, iLocal_1142, &bLocal_1324, &bLocal_1322, &iLocal_1323);
	if (bLocal_1141 == 99 && bLocal_1141 == 100)
	{
		if (Function_571(Global_46760[0]))
		{
			Function_570();
		}
		if (!SQUAD_IS_VALID(&bLocal_4 + 888))
		{
			if (bLocal_1141 != 0 || bLocal_1141 != 1)
			{
				if (IS_OBJECT_VALID(TRAIN_GET_CAR(iLocal_1445, false)))
				{
					if (Function_569(TRAIN_GET_CAR(iLocal_1445, false)))
					{
						Function_568();
					}
				}
			}
		}
		else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_4 + 864[02])))
		{
			SNAP_ACTOR_TO_GRINGO(&bLocal_4 + 864[02], &iLocal_780 + 176, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&bLocal_4 + 864[02], GET_GRINGO_FROM_OBJECT(&iLocal_780 + 176), "UseCase1", 1, 1);
		}
		if (Function_548(&Local_1200, &uLocal_1146, &uLocal_1292, &uLocal_1143, uLocal_1145))
		{
			if (Function_546(&uLocal_1292))
			{
				Function_249(bLocal_1141);
				Function_241(StackVal, 5, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_249(bLocal_1141);
			Function_241(StackVal, 1, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_249(bLocal_1141);
			Function_241(StackVal, 2, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&iLocal_1390))
		{
			Function_245("INTRO01_COMPANION_DEAD");
			Function_249(bLocal_1141);
			Function_241(StackVal, 5, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
			return 1;
		}
		Function_545();
	}
	switch (bLocal_1141)
	{
		case 0x00000063:
			Function_481();
			break;
		
		case 0x00000000:
			Function_453();
			break;
		
		case 0x00000001:
			Function_365();
			break;
		
		case 0x00000002:
			Function_317();
			break;
		
		case 0x00000065:
			Function_280();
			break;
		
		case 0x00000064:
			if (Function_279(&iLocal_1323))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_278(&bLocal_1141, &iLocal_1142, &iLocal_1129))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1322)
	{
		Function_251(&bLocal_1322, 8);
		Function_1();
		return 0;
	}
	if (iLocal_1323 && bLocal_1141 == 100)
	{
		Function_249(bLocal_1141);
		Function_241(StackVal, 5, &iLocal_1323, &bLocal_1141, Function_250(bLocal_1141), Function_249(bLocal_1141), 0);
	}
	if (bLocal_1324)
	{
		Function_277(&bLocal_1324, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_277(var uParam0, int iParam1) //Position: 0xDE9F / 56991
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_278(var uParam0, var uParam1, int iParam2) //Position: 0xDEC4 / 57028
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

bool Function_279(int iParam0) //Position: 0xDF0D / 57101
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_280() //Position: 0xDF21 / 57121
{
	switch (iLocal_1142)
	{
		case 0x00000000:
			Function_313(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_227(&bLocal_4 + 1632[1]);
				Local_1409 = Function_227(&bLocal_4 + 1632[1]);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1632[1]), 1, 1, 1);
				iLocal_1142 = 1;
			}
			else
			{
				iLocal_1142 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_571(Global_46838[1]))
			{
				iLocal_1142 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			iLocal_1142 = 3;
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/INTRO_B_seq/INTRO_B_seq", &iLocal_1129, &Local_829, &bLocal_1141, 62483, 62381, 61655, 60766, 60538, 60531, 0, 1, 1, 2, 2, 0, 1))
			{
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_1142 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			if (HUD_IS_FADED())
			{
				bLocal_1322 = true;
			}
			break;
	}
	return;
}

bool Function_281(var uParam0, int iParam1, struct<41> Param2) //Position: 0xE05D / 57437
{
	if (!&bParam15)
	{
		Function_296(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (bParam3 != 99 && (Function_295(&Param2) || Param2.f_40 < 1))
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
				Function_293(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_292())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_291(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
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
					Function_291(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_288(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_288(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_286(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_291(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
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
						Function_285(1.0f);
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
						Function_283();
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
					Function_282(1, 1);
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
			if ((HUD_IS_FADED() && bParam3 == 99) && !Function_295(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_282(int iParam0, bool bParam1) //Position: 0xE6BF / 59071
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
		Function_206();
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

void Function_283() //Position: 0xE78E / 59278
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_284();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_284() //Position: 0xE7D3 / 59347
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_285(bool bParam0) //Position: 0xE7E5 / 59365
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

void Function_286(var uParam0, int iParam1) //Position: 0xE802 / 59394
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
			if ((&iVar3 == &Global_54076 && !Function_287(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_287(int iParam0) //Position: 0xE894 / 59540
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

float Function_288(vector3 vParam0) //Position: 0xE8C5 / 59589
{
	if (Function_290(&vParam0))
	{
		if (Function_289(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_289(int iParam0) //Position: 0xE992 / 59794
{
	return Function_3(iParam0, 2);
}

bool Function_290(int iParam0) //Position: 0xE9A0 / 59808
{
	return Function_3(iParam0, 1);
}

int Function_291(bool bParam0) //Position: 0xE9AE / 59822
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

bool Function_292() //Position: 0xEA71 / 60017
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

void Function_293(int iParam0) //Position: 0xEAAE / 60078
{
	Function_294(&iParam0, 0.0f);
	return;
}

void Function_294(vector3 vParam0) //Position: 0xEABB / 60091
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_78(&vParam0, 1);
	Function_39(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_295(struct<37> Param0) //Position: 0xEAE0 / 60128
{
	return Param0.f_36;
}

void Function_296(var uParam0, bool bParam1) //Position: 0xEAEB / 60139
{
	Function_297(&uParam0, &bParam1, 0);
	return;
}

void Function_297(var uParam0, bool bParam1, int iParam2) //Position: 0xEAFB / 60155
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
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_298() //Position: 0xEC73 / 60531
{
	return 1;
}

int Function_299() //Position: 0xEC7A / 60538
{
	Function_300(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_300(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xEC8F / 60559
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
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
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
		Function_252();
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
	Function_282(&iParam9, &iParam10);
}

int Function_301() //Position: 0xED5E / 60766
{
	switch (bLocal_1141)
	{
		case 0x00000063:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2208,86f, 16,5063f, 2605,4f), 276,8049f, 1, 1, 1);
			CAMERA_RESET(0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			bLocal_1335 = 4;
			while (bLocal_1335 < 5)
			{
				ACTOR_POP_NEXT_GAIT(&iLocal_592 + 128[bLocal_13352], 1, 0);
				AI_ACTOR_FORCE_SPEED(&iLocal_592 + 128[bLocal_13352], 1);
				bLocal_1335++;
			}
			return 1;
			break;
		
		case 0x00000000:
			RESET_ANIM_SET_FOR_ACTOR(&cLocal_1398, 1);
			Function_227(&bLocal_4 + 1464[7]);
			TELEPORT_ACTOR_WITH_HEADING(&cLocal_1398, Function_227(&bLocal_4 + 1464[7]), GET_OBJECT_HEADING(&bLocal_4 + 1464[7]), 1, 1, 1);
			Function_227(&bLocal_4 + 2008[0]);
			Local_1409 = Function_227(&bLocal_4 + 2008[0]);
			uLocal_1446 = LOCATE_GRINGO_OF_TYPE("lie_sleep_on_bed_l", &Local_1409, 1.0f, 1);
			if (IS_GRINGO_VALID(&uLocal_1446))
			{
				TASK_USE_GRINGO(&cLocal_1398, &uLocal_1446, "usecase1", 4294967295, 1);
			}
			ACTOR_POP_NEXT_GAIT(&cLocal_1398, 1, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&cLocal_1398, 1);
			iLocal_1826 = 1;
			Function_227(&bLocal_4 + 1464[4]);
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Function_227(&bLocal_4 + 1464[4]), GET_OBJECT_HEADING(&bLocal_4 + 1464[4]), 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.0f, 0);
			RESET_ANIM_SET_FOR_ACTOR(&uLocal_1404, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_1404, Vector(-2181,611f, 16,4f, 2608,968f), 0.0f, 1, 1, 1);
			TASK_WANDER_IN_VOLUME(&uLocal_1404, &bLocal_4 + 1336[1], -1f);
			SET_ACTOR_DRUNK(&uLocal_1404, 1);
			iLocal_1829 = 2;
			if (IS_PHYSINST_VALID(&uLocal_1338))
			{
				SHOW_PHYSINST(&uLocal_1338);
			}
			if (IS_PHYSINST_VALID(&uLocal_1340))
			{
				SHOW_PHYSINST(&uLocal_1340);
			}
			Function_227(&bLocal_4 + 1464[5]);
			TELEPORT_ACTOR_WITH_HEADING(&iLocal_1390, Function_227(&bLocal_4 + 1464[5]), GET_OBJECT_HEADING(&bLocal_4 + 1464[5]), 1, 1, 1);
			SET_ACTOR_MAX_SPEED(&iLocal_1390, true);
			bLocal_1335 = TASK_SEQUENCE_OPEN();
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_1390, &bLocal_4 + 1392[5], 1, 1);
			AI_SET_NAV_SUBGRID_CELL_SIZE(&iLocal_1390, 0,5f);
			GET_PATH_POINT(&bLocal_4 + 2344, false, &Local_1409);
			TASK_GO_NEAR_OBJECT(0, &bLocal_4 + 1672[1], 1.0f, 1, 1, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &bLocal_4 + 2344, 1, 0, 0, 1, false);
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
			TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
			ACTOR_POP_NEXT_GAIT(&iLocal_1390, 1, 0);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 30, 0));
			return 1;
			break;
		
		case 0x00000002:
			Function_227(&bLocal_4 + 1576[3]);
			Function_302(StackVal, &iLocal_1390, Function_227(&bLocal_4 + 1576[3]), GET_OBJECT_HEADING(&bLocal_4 + 1576[3]), 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 1;
}

void Function_302(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xF008 / 61448
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

int Function_303() //Position: 0xF0D7 / 61655
{
	switch (bLocal_1141)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&uLocal_1404, &bLocal_4 + 1368[0]) && !DECOR_CHECK_EXIST(&uLocal_1404, "cs01hidden"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uLocal_1404, Vector(-2181,611f, 16,4f, 2608,968f), GET_OBJECT_HEADING(&bLocal_4 + 2160[0]), 1, 1, 1);
				CUTSCENE_MANAGER_HIDE_ACTOR(&uLocal_1404);
				DECOR_SET_BOOL(&uLocal_1404, "cs01hidden", 1);
			}
			if (!DECOR_CHECK_EXIST(&uLocal_827, "hideswingingdoors"))
			{
				if (IS_PHYSINST_VALID(&uLocal_1338))
				{
					HIDE_PHYSINST(&uLocal_1338);
				}
				if (IS_PHYSINST_VALID(&uLocal_1340))
				{
					HIDE_PHYSINST(&uLocal_1340);
				}
				DECOR_SET_BOOL(&uLocal_827, "hideswingingdoors", 1);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(&uLocal_827, "cs03pastoral"))
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(&uLocal_827, "cs03pastoral", 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&bLocal_4 + 1040[02]))
			{
				if (!DECOR_CHECK_EXIST(&uLocal_827, "lastcutscenefade"))
				{
					if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						if (IS_ACTOR_VALID(&bLocal_4 + 1040[02]))
						{
							CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_4 + 1040[02]);
						}
						Function_252();
						SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(6, 0, 0));
						ACTOR_RESET_ANIMS(&bLocal_4 + 1040[02], 1);
						SNAP_ACTOR_TO_GRINGO(&bLocal_4 + 1040[02], &bLocal_4 + 2328, "UseCase1", false, 1, 0);
						TASK_USE_GRINGO(&bLocal_4 + 1040[02], GET_GRINGO_FROM_OBJECT(&bLocal_4 + 2328), "UseCase1", 1, 1);
						DECOR_SET_FLOAT(&uLocal_827, "lastcutscenefade", GET_CURRENT_GAME_TIME());
						CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "lastcutscenefade")) < 20.0f)
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_4 + 1040[02]);
					DESTROY_ACTOR(&bLocal_4 + 1040[02]);
					DECOR_REMOVE(&uLocal_827, "lastcutscenefade");
				}
			}
			if (IS_ACTOR_VALID(&iLocal_1392))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_1392);
				DESTROY_ACTOR(&iLocal_1392);
			}
			if (!DECOR_CHECK_EXIST(&uLocal_827, "hidevulture"))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_4 + 1040[02]);
				DECOR_SET_BOOL(&uLocal_827, "hidevulture", 1);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_304() //Position: 0xF3AD / 62381
{
	switch (bLocal_1141)
	{
		case 0x00000000:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-2612,067f, 73,87f, 3355,972f), Vector(-2,979f, -175,569f, 0.0f));
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_4 + 1040[02]);
			return 1;
			break;
	}
	return 1;
}

int Function_305() //Position: 0xF413 / 62483
{
	Function_309(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	switch (bLocal_1141)
	{
		case 0x00000000:
			Function_227(&bLocal_4 + 1464[1]);
			Function_307(StackVal, &uLocal_827, Function_227(&bLocal_4 + 1464[1]), &bLocal_4 + 1240[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_227(&bLocal_4 + 1576[0]);
			Function_307(StackVal, &uLocal_827, Function_227(&bLocal_4 + 1576[0]), &bLocal_4 + 1288[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_227(&bLocal_4 + 1632[1]);
			Function_307(StackVal, &uLocal_827, Function_227(&bLocal_4 + 1632[1]), &bLocal_4 + 1288[0], 0, 0, 0, 0, 1, 1);
			Function_306();
			SET_MOVER_FROZEN(&bLocal_4 + 1040[02], 1);
			return 1;
			break;
		
		default:
			Function_309(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			break;
	}
	return 1;
}

void Function_306() //Position: 0xF4E3 / 62691
{
	*(&bLocal_4 + 1064) = CREATE_ACTORSET_IN_LAYOUT(&bLocal_4, "Vulturesset", 0);
	*(&bLocal_4 + 1040[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nVulture01", 1128, Vector(-2612,571f, 71,86781f, 3385,739f), Vector(0.0f, 79,95864f, 0.0f));
	ADD_ACTORSET_MEMBER(&bLocal_4 + 1064, &bLocal_4 + 1040[02]);
	TASK_STAND_STILL(&bLocal_4 + 1040[02], -1.0f, 0, 0);
	return;
}

void Function_307(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xF55C / 62812
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
				Function_308(&uVar1, &uParam0);
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

void Function_308(var uParam0, float fParam1) //Position: 0xF7FC / 63484
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

void Function_309(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xF87E / 63614
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
	Function_252();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_51();
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
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
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
				Function_312(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_55(), 2,802597E-45f, Function_312(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if (iParam10 && !Function_15())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_311()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_311()));
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
	if (Function_310(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_170(0x4000000);
	}
	if (Function_310(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_170(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_310(int iParam0) //Position: 0xFB30 / 64304
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_311() //Position: 0xFB4C / 64332
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

struct<8> Function_312(int iParam0) //Position: 0xFBDA / 64474
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_313(bool bParam0) //Position: 0xFBEC / 64492
{
	Function_314(0, 0x40400000);
	Function_213();
	Function_212();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_314(float fParam0, float fParam1) //Position: 0xFC22 / 64546
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
	Function_316();
	Function_315();
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

void Function_315() //Position: 0xFD33 / 64819
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_316() //Position: 0xFD67 / 64871
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

void Function_317() //Position: 0xFE6D / 65133
{
	if (iLocal_1142 < 5 && iLocal_1142 > 105)
	{
		Function_364(18, 15, 0, 23, 59, 59);
		Function_363();
		Function_362();
		Function_349();
		if (Function_346(&Global_54076, &iLocal_1390, 30.0f))
		{
			Function_344();
		}
	}
	switch (iLocal_1142)
	{
		case 0x00000000:
			if (Function_342())
			{
				if (!iLocal_1300[1])
				{
					iLocal_1142 = 1;
				}
				else
				{
					iLocal_1142 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_335())
				{
					Function_333();
					iLocal_1142 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_330())
			{
				if (Function_328(StackVal, StackVal, StackVal, StackVal, StackVal, Local_829, bLocal_1141))
				{
					iLocal_1142 = 3;
				}
				else
				{
					iLocal_1142 = 4;
				}
				Function_239(bLocal_1141);
				Function_230(StackVal, Function_239(bLocal_1141), bLocal_1141, Global_46736[3], Function_238(bLocal_1141), 2);
			}
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/intro01_cs02/intro01_cs02", &iLocal_1129, &Local_829, &bLocal_1141, 62483, 62381, 61655, 60766, 68395, 60531, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_1142 = 4;
			}
			break;
		
		case 0x00000004:
			Function_285(1.0f);
			Function_165(Global_46838[1]);
			Function_326(&(Local_1200[215]));
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			HUD_ENABLE(1);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1390));
			}
			iLocal_1142 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				iLocal_1840 = 0;
				iLocal_1839 = 0;
				iLocal_1142 = 7;
			}
			break;
		
		case 0x00000007:
			Function_227(&bLocal_4 + 1576[2]);
			Function_318(StackVal, "$/cutscene/INTRO_B_seq/INTRO_B_seq", &uLocal_1326, Function_227(&bLocal_4 + 1576[2]), 66726, 0, 100.0f, 150.0f, 2, 2, 1, 2, 0, 1);
			if (iLocal_1433 == 1)
			{
				Function_293(&iLocal_1354);
				iLocal_1142 = 106;
			}
			break;
		
		case 0x0000006A:
			if (GET_TASK_STATUS(&Global_54076, 12) != 1)
			{
				Function_293(&iLocal_1354);
			}
			if (Function_288(&iLocal_1354) < 0,5f || !IS_ACTOR_RIDING(&Global_54076))
			{
				RESET_ACTOR_GAITS(GET_MOST_RECENT_MOUNT(&Global_54076), 1);
				Function_326(&(Local_1200[215]));
				iLocal_1300[2] = 1;
				bLocal_1141 = 101;
				iLocal_1142 = 2;
			}
			break;
	}
	return;
}

bool Function_318(var uParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x100C0 / 65728
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_319(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_321()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
	else if ((!Function_319(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_321()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_319(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_319(int iParam0, struct<2> Param1, float fParam3) //Position: 0x1039F / 66463
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_320(&iParam0);
		if (VDIST(Function_320(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_320(var uParam0) //Position: 0x1042B / 66603
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

int Function_321() //Position: 0x10497 / 66711
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_322() //Position: 0x104A6 / 66726
{
	struct<2> Var0;
	struct<5> Var2;
	bool bVar8;
	
	switch (bLocal_1141)
	{
		case 0x00000063:
			bLocal_1335 = false;
			while (bLocal_1335 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bLocal_1335, &Var0, &Var2))
				{
					bVar8 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bLocal_1335);
					if (Function_325(bVar8))
					{
						if (bVar8 == 717)
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, &iLocal_592 + 128[42], (Var0 + 180.0f), 1, 1, 1);
							TASK_STAND_STILL(&iLocal_592 + 128[42], -1.0f, 0, 0);
						}
						if (bVar8 == 719)
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, &iLocal_592 + 128[52], (Var0 + 180.0f), 1, 1, 1);
							TASK_STAND_STILL(&iLocal_592 + 128[52], -1.0f, 0, 0);
						}
					}
					Function_324(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), (Var4 + 180.0f), (Var0 + 180.0f));
				}
				bLocal_1335++;
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_323();
			bLocal_1335 = false;
			while (bLocal_1335 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bLocal_1335, &Var0, &Var2))
				{
					bVar8 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bLocal_1335);
					if (Function_325(bVar8))
					{
						if (bVar8 == GET_ACTOR_ENUM(&iLocal_1390))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), &bLocal_4 + 1072[02]);
						}
						if (bVar8 == 976)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), &iLocal_1392);
						}
						if (bVar8 == 979)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), &bLocal_4 + 1072[12]);
						}
					}
				}
				Function_324(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), (Var4 + 180.0f), (Var0 + 180.0f));
				bLocal_1335++;
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!SQUAD_IS_VALID(&bLocal_4 + 1128))
			{
				Function_323();
			}
			bLocal_1335 = false;
			while (bLocal_1335 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bLocal_1335, &Var0, &Var2))
				{
					bVar8 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bLocal_1335);
					if (Function_325(bVar8))
					{
						if (bVar8 == 980)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), &bLocal_4 + 1072[22]);
						}
						if (bVar8 == 976)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), &bLocal_4 + 1072[12]);
						}
					}
				}
				Function_324(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_1335), (Var4 + 180.0f), (Var0 + 180.0f));
				bLocal_1335++;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

void Function_323() //Position: 0x106E3 / 67299
{
	*(&bLocal_4 + 1128) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "GuideGroupCloned"));
	*(&bLocal_4 + 1072[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nJakeClone", 600, Vector(-2660.0f, 67,26273f, 3425,747f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 1072[02], &bLocal_4 + 1128);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 1072[02], false);
	SET_ACTOR_FACTION(&bLocal_4 + 1072[02], 20);
	RESET_ACTOR_GAITS(&bLocal_4 + 1072[02], 0);
	SET_ACTOR_IS_COMPANION(&bLocal_4 + 1072[02], 1);
	SET_ACTOR_MAX_HEALTH(&bLocal_4 + 1072[02], 50.0f);
	SET_ACTOR_HEALTH(&bLocal_4 + 1072[02], GET_ACTOR_MAX_HEALTH(&bLocal_4 + 1072[02]));
	SET_CRIPPLE_ENABLE(&bLocal_4 + 1072[02], 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_4 + 1072[02], 0, 0);
	UNK_0x99AFD2D1(&bLocal_4 + 1072[02], 1, 0);
	TASK_STAND_STILL(&bLocal_4 + 1072[02], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 1072[02], 2);
	*(&bLocal_4 + 1072[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakesHorseClone", 976, Vector(-2660.0f, 67,26273f, 3429,333f), Vector(0.0f, -5,74953f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 1072[12], &bLocal_4 + 1128);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 1072[12], false);
	SET_ACTOR_FACTION(&bLocal_4 + 1072[12], 20);
	SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 1072[12], 0);
	ACCESSORIZE_HORSE(&bLocal_4 + 1072[12], 3);
	TASK_STAND_STILL(&bLocal_4 + 1072[12], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 1072[12], 2);
	*(&bLocal_4 + 1072[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayersHorseClone", 981, Vector(-2662,736f, 67,26273f, 3429,264f), Vector(0.0f, 28,5028f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 1072[22], &bLocal_4 + 1128);
	SET_ACTOR_FACTION(&bLocal_4 + 1072[22], 20);
	SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 1072[22], 0);
	ACCESSORIZE_HORSE(&bLocal_4 + 1072[22], 3);
	TASK_STAND_STILL(&bLocal_4 + 1072[22], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 1072[22], 2);
	return;
}

void Function_324(struct<16> Param0) //Position: 0x1092B / 67883
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &Param0, 64);
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

bool Function_325(bool bParam0) //Position: 0x10A54 / 68180
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_326(struct<69> Param0) //Position: 0x10A6B / 68203
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

int Function_327() //Position: 0x10B2B / 68395
{
	Function_300(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

bool Function_328(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x10B40 / 68416
{
	if (Function_329(&iParam0) == iParam6 || Function_237())
	{
		return 1;
	}
	return 0;
}

int Function_329(int iParam0) //Position: 0x10B5F / 68447
{
	if (Function_295(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_330() //Position: 0x10B78 / 68472
{
	switch (iLocal_1834)
	{
		case 0x00000000:
			if (iLocal_1300[1] == 0)
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_1390);
				iLocal_1834 = 1;
			}
			else
			{
				iLocal_1834 = 2;
			}
			break;
		
		case 0x00000001:
			bLocal_1335 = false;
			while (bLocal_1335 < 1)
			{
				SET_ALLOW_RIDE_BY_PLAYER(&(vLocal_1457[bLocal_13353]), 1);
				bLocal_1335++;
			}
			if (iLocal_1300[1] == 0)
			{
				Function_227(&bLocal_4 + 1576[0]);
				Local_1409 = Function_227(&bLocal_4 + 1576[0]);
				TELEPORT_ACTOR_WITH_HEADING(&iLocal_1392, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1576[0]), 1, 1, 1);
				Function_227(&bLocal_4 + 1576[3]);
				Local_1409 = Function_227(&bLocal_4 + 1576[3]);
				TELEPORT_ACTOR_WITH_HEADING(&iLocal_1394, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1576[3]), 1, 1, 1);
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &iLocal_1392);
				}
				if (!IS_ACTOR_RIDING(&iLocal_1390))
				{
					ACTOR_MOUNT_ACTOR(&iLocal_1390, &iLocal_1394);
				}
				if (!SQUAD_IS_VALID(&bLocal_4 + 1032))
				{
					Function_332();
					Function_331(&bLocal_4 + 960[02], &bLocal_4 + 2192[0]);
					Function_331(&bLocal_4 + 960[12], &bLocal_4 + 2192[1]);
					Function_331(&bLocal_4 + 960[22], &bLocal_4 + 2192[2]);
					Function_331(&bLocal_4 + 960[32], &bLocal_4 + 2192[3]);
				}
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_1834 = 2;
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

void Function_331(var uParam0, bool bParam1) //Position: 0x10CF2 / 68850
{
	var uVar0;
	bool bVar2;
	
	Function_227(&bParam1);
	uVar0 = Function_227(&bParam1);
	bVar2 = TASK_SEQUENCE_OPEN();
	TASK_BIRD_LAND_AT_COORD(false, &uVar0);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar2);
	TASK_SEQUENCE_RELEASE(bVar2, 1);
	TASK_PRIORITY_SET(&uParam0, 2);
	return;
}

void Function_332() //Position: 0x10D2B / 68907
{
	(&bLocal_4 + 1032) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Crows"));
	*(&bLocal_4 + 960[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Crow01", 1132, Vector(-2648,278f, 82,86061f, 3418,383f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 960[02], &bLocal_4 + 1032);
	*(&bLocal_4 + 960[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Crow02", 1133, Vector(-2649,356f, 82,74908f, 3417,092f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 960[12], &bLocal_4 + 1032);
	*(&bLocal_4 + 960[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Crow03", 1131, Vector(-2650,333f, 82,65009f, 3416,226f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 960[22], &bLocal_4 + 1032);
	*(&bLocal_4 + 960[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Crow04", 1132, Vector(-2650,987f, 82,52263f, 3415,634f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 960[32], &bLocal_4 + 1032);
	return;
}

void Function_333() //Position: 0x10E4C / 69196
{
	Function_334();
	iLocal_1390 = &bLocal_4 + 488[02];
	SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_1390, false);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&iLocal_1390, 1);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&iLocal_1390, 8, "FASTWALK");
	TASK_STAND_STILL(&iLocal_1390, -1.0f, 0, 0);
	iLocal_1392 = &bLocal_4 + 488[22];
	vLocal_1457[13] = &bLocal_4 + 488[22];
	Function_227(&bLocal_4 + 1736[4]);
	*(&vLocal_1457[13] + 8) = Function_227(&bLocal_4 + 1736[4]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_1392, 0.0f);
	iLocal_1394 = &bLocal_4 + 488[12];
	vLocal_1457[03] = &bLocal_4 + 488[12];
	Function_227(&bLocal_4 + 1736[3]);
	*(&vLocal_1457[03] + 8) = Function_227(&bLocal_4 + 1736[3]);
	DECOR_SET_BOOL(&iLocal_1394, "bNoInjuryEjection", 1);
	bLocal_1335 = false;
	while (bLocal_1335 < 1)
	{
		SET_ALLOW_RIDE_BY_PLAYER(&(vLocal_1457[bLocal_13353]), 0);
		TASK_STAND_STILL(&(vLocal_1457[bLocal_13353]), -1.0f, 0, 0);
		vLocal_1457[bLocal_13353].f_20 = 1;
		bLocal_1335++;
	}
	return;
}

void Function_334() //Position: 0x10F56 / 69462
{
	*(&bLocal_4 + 544) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "GuideGroup"));
	*(&bLocal_4 + 488[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Jake", 600, Vector(-2165,607f, 16,90563f, 2588,965f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 488[02], &bLocal_4 + 544);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 488[02], false);
	SET_ACTOR_FACTION(&bLocal_4 + 488[02], 20);
	RESET_ACTOR_GAITS(&bLocal_4 + 488[02], 0);
	SET_ACTOR_IS_COMPANION(&bLocal_4 + 488[02], 1);
	SET_ACTOR_MAX_HEALTH(&bLocal_4 + 488[02], 50.0f);
	SET_ACTOR_HEALTH(&bLocal_4 + 488[02], GET_ACTOR_MAX_HEALTH(&bLocal_4 + 488[02]));
	SET_CRIPPLE_ENABLE(&bLocal_4 + 488[02], 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_4 + 488[02], 0, 0);
	UNK_0x99AFD2D1(&bLocal_4 + 488[02], 1, 0);
	TASK_STAND_STILL(&bLocal_4 + 488[02], -1.0f, 0, 0);
	*(&bLocal_4 + 488[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakesHorse", 976, Vector(-2162,2f, 16,368f, 2608,313f), Vector(0.0f, -5,74953f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 488[12], &bLocal_4 + 544);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 488[12], true);
	SET_ACTOR_FACTION(&bLocal_4 + 488[12], 20);
	SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 488[12], 0);
	ACCESSORIZE_HORSE(&bLocal_4 + 488[12], 3);
	TASK_STAND_STILL(&bLocal_4 + 488[12], -1.0f, 0, 0);
	*(&bLocal_4 + 488[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayersHorse", 981, Vector(-2159,783f, 16,35791f, 2608,148f), Vector(0.0f, 28,5028f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 488[22], &bLocal_4 + 544);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 488[22], true);
	SET_ACTOR_FACTION(&bLocal_4 + 488[22], 20);
	SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 488[22], 0);
	ACCESSORIZE_HORSE(&bLocal_4 + 488[22], 3);
	TASK_STAND_STILL(&bLocal_4 + 488[22], -1.0f, 0, 0);
	return;
}

bool Function_335() //Position: 0x1116F / 69999
{
	Function_341(&bLocal_4 + 368, 1050, 2, 0);
	Function_341(&bLocal_4 + 368, 1052, 2, 0);
	Function_341(&bLocal_4 + 368, 1051, 2, 0);
	Function_341(&bLocal_4 + 368, 1132, 2, 0);
	Function_341(&bLocal_4 + 368, 1133, 2, 0);
	Function_341(&bLocal_4 + 368, 1131, 2, 0);
	Function_341(&bLocal_4 + 368, 1128, 2, 0);
	if (Function_336(&bLocal_4 + 368))
	{
		return 1;
	}
	return 0;
}

bool Function_336(struct<2>[] Param0) //Position: 0x111E5 / 70117
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_340();
	iVar1 = 0;
	if (!Function_191(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_339(&(Param0[iVar02]), 8);
		}
		else if (Function_338())
		{
			iVar1 = 1;
			Function_339(&(Param0[iVar02]), 8);
		}
		Function_339(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_191(&(Param0[iVar02]), 4))
		{
			if (!Function_191(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_191(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_191(&(Param0[02]), 8) || iVar1));
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
				Function_339(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_191(&(Param0[iVar02]), 4))
		{
			if (!Function_191(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_339(&(Param0[iVar02]), 2);
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
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_339(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_339(&(Param0[iVar02]), 2);
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
	Function_337();
	return 1;
}

void Function_337() //Position: 0x115A7 / 71079
{
	if (!Function_310(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_338() //Position: 0x115E7 / 71143
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

void Function_339(struct<13> Param0) //Position: 0x11615 / 71189
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_340() //Position: 0x11628 / 71208
{
	if (!Function_310(128))
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

var Function_341(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1166A / 71274
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_191(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_339(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_339(&(Param0[iVar02]), 8);
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

bool Function_342() //Position: 0x11746 / 71494
{
	Function_313(0);
	SET_ACTOR_HEALTH(&iLocal_1390, GET_ACTOR_MAX_HEALTH(&iLocal_1390));
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
	if (iLocal_1300[1] == 0)
	{
		Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
		FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
		Function_227(&bLocal_4 + 1576[0]);
		Local_1409 = Function_227(&bLocal_4 + 1576[0]);
		TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1576[0]), 1, 1, 1);
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, 0, 0));
		Function_343(&iLocal_1390);
	}
	return 1;
}

void Function_343(int iParam0) //Position: 0x117B7 / 71607
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
			uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_344() //Position: 0x117EA / 71658
{
	if (!DECOR_CHECK_EXIST(&uLocal_827, "saidsomething"))
	{
		if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &iLocal_1390)
		{
			if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_gunJake_V1"))
			{
				DECOR_SET_FLOAT(&uLocal_827, "Intro01_gunJake_V1", GET_CURRENT_GAME_TIME());
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_gunJake_V1")) < 1.0f)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_gunJake_V1", "Intro01_gunJake_V1", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_827, "Intro01_gunJake_V1", -1.0f);
				DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
			}
		}
		else if (DECOR_CHECK_EXIST(&uLocal_827, "Intro01_gunJake_V1"))
		{
			DECOR_REMOVE(&uLocal_827, "Intro01_gunJake_V1");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_gunChar"))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
			{
				if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iLocal_1390)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_gunChar", "Intro01_gunChar", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(&uLocal_827, "Intro01_gunChar", GET_CURRENT_GAME_TIME());
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_gunChar")) < 15.0f)
		{
			DECOR_REMOVE(&uLocal_827, "Intro01_gunChar");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_assaultChar"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
			{
				if (GET_LAST_ATTACK_TARGET(&Global_54076) != &iLocal_1390)
				{
					if (!IS_WEAPON_DRAWN(&Global_54076))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_assaultChar", "Intro01_assaultChar", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					else if (Function_345(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_shootChar", "Intro01_shootChar", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					DECOR_SET_FLOAT(&uLocal_827, "Intro01_assaultChar", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
					CLEAR_LAST_ATTACK(&Global_54076);
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_assaultChar")) < 15.0f)
		{
			DECOR_REMOVE(&uLocal_827, "Intro01_assaultChar");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_shootRand"))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076) && !IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_shootRand", "Intro01_shootRand", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_827, "Intro01_shootRand", GET_CURRENT_GAME_TIME());
				DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_shootRand")) < 15.0f)
		{
			DECOR_REMOVE(&uLocal_827, "Intro01_shootRand");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_shootJakeHorse"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)) && Function_345(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				if (GET_LAST_ATTACK_TARGET(&Global_54076) == &iLocal_1394)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_shootJakeHorse", "Intro01_shootJakeHorse", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_827, "Intro01_shootJakeHorse", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
					CLEAR_LAST_ATTACK(&Global_54076);
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_shootJakeHorse")) < 15.0f)
		{
			DECOR_REMOVE(&uLocal_827, "Intro01_shootJakeHorse");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_assaultJake_V1"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
			{
				if (!IS_WEAPON_DRAWN(&Global_54076))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_assaultJake_V1", "Intro01_assaultJake_V1", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				}
				else if (Function_345(GET_WEAPON_IN_HAND(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_shootJake_V1", "Intro01_shootJake_V1", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				}
				DECOR_SET_FLOAT(&uLocal_827, "Intro01_assaultJake_V1", GET_CURRENT_GAME_TIME());
				DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
				CLEAR_LAST_HIT(&Global_54076);
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_assaultJake_V1")) < 15.0f)
		{
			DECOR_REMOVE(&uLocal_827, "Intro01_assaultJake_V1");
		}
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1392[2]))
		{
			if (!DECOR_CHECK_EXIST(&uLocal_827, "Intro01_weapon_V1"))
			{
				if (IS_WEAPON_DRAWN(&Global_54076) || IS_ACTOR_VALID(GET_LAST_ATTACKER(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_weapon_V1", "Intro01_weapon_V1", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_827, "Intro01_weapon_V1", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(&uLocal_827, "saidsomething", GET_CURRENT_GAME_TIME());
					CLEAR_LAST_ATTACK(&Global_54076);
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "Intro01_weapon_V1")) < 15.0f)
			{
				DECOR_REMOVE(&uLocal_827, "Intro01_weapon_V1");
			}
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "saidsomething")) < 15.0f)
	{
		DECOR_REMOVE(&uLocal_827, "saidsomething");
	}
	return;
}

bool Function_345(bool bParam0) //Position: 0x12055 / 73813
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

bool Function_346(var uParam0, int iParam1, float fParam2) //Position: 0x1209B / 73883
{
	float fVar0;
	
	fVar0 = Function_347(&uParam0, &iParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_347(var uParam0, int iParam1) //Position: 0x120BA / 73914
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_348(&uVar0, &uVar2);
	return iVar4;
}

var Function_348(struct<2> Param0) //Position: 0x120DB / 73947
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_349() //Position: 0x120FA / 73978
{
	switch (iLocal_1840)
	{
		case 0x00000000:
			Function_361("INTRO01_OBJ06", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_227(&bLocal_4 + 1576[2]);
			Local_1409 = Function_227(&bLocal_4 + 1576[2]);
			cLocal_1417 = Function_360(StackVal, StackVal, &uLocal_827, Function_55(), Local_1409, Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(&cLocal_1417), 1, 1, 7.0f);
			iLocal_1840 = 1;
			break;
		
		case 0x00000001:
			Function_351(&bLocal_1342, 100.0f, 250.0f, &cLocal_1417, "INTRO01_RETURN_TO_GATE", "INTRO01_ABANDONEDFORT", &iLocal_1323, 1, 0, 0, 4294967295, 1, 0);
			if (GATEWAY_UPDATE(&cLocal_1417) || IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1288[1]))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 960[02], &bLocal_4 + 1288[1]))
				{
					TASK_BIRD_SOAR(&bLocal_4 + 960[02], -1.0f, 1106247680);
				}
				if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 960[12], &bLocal_4 + 1288[1]))
				{
					TASK_BIRD_SOAR(&bLocal_4 + 960[12], -1.0f, 1106247680);
				}
				if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 960[22], &bLocal_4 + 1288[1]))
				{
					TASK_BIRD_SOAR(&bLocal_4 + 960[22], -1.0f, 1106247680);
				}
				if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 960[32], &bLocal_4 + 1288[1]))
				{
					TASK_BIRD_SOAR(&bLocal_4 + 960[32], -1.0f, 1106247680);
				}
				if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					iLocal_1392 = GET_MOUNT(&Global_54076);
				}
				if (Function_350(&Global_54076, 0) < 12.0f && IS_ACTOR_RIDING(&Global_54076))
				{
					DECOR_SET_BOOL(&iLocal_1392, "hideme", 1);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_1392, "horse_Main/Melee/RearUp/scripted/canned_rear_up");
					iLocal_1840 = 2;
				}
				else
				{
					bLocal_1335 = TASK_SEQUENCE_OPEN();
					TASK_DISMOUNT(0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1335);
					TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
					iLocal_1433 = 1;
					iLocal_1840 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_1392, "canned_rear_up"))
			{
				bLocal_1335 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1335);
				TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
				iLocal_1433 = 1;
				iLocal_1840 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

float Function_350(var uParam0, bool bParam1) //Position: 0x123B2 / 74674
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

int Function_351(struct<2> Param0, bool bParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x123D3 / 74707
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_358(&Global_54076, &iParam3, bParam2))
	{
		Function_245(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_358(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_357(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_356(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_355(&iParam9, 0, 15, 1, &iParam3);
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
	if (Function_357(1))
	{
		Function_354(1);
		if (!Function_353())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_355(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_352() //Position: 0x1257C / 75132
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

bool Function_353() //Position: 0x125AA / 75178
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

void Function_354(bool bParam0) //Position: 0x125F1 / 75249
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

void Function_355(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12658 / 75352
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

void Function_356(bool bParam0) //Position: 0x12713 / 75539
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

bool Function_357(bool bParam0) //Position: 0x1277A / 75642
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_3(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_358(var uParam0, var uParam1, float fParam2) //Position: 0x127C4 / 75716
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_320(&uParam0);
			Function_359(&uParam1);
			if (VDIST(Function_320(&uParam0), Function_359(&uParam1)) >= fParam2)
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

struct<8> Function_359(float fParam0) //Position: 0x128E2 / 76002
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		GET_OBJECT_POSITION(&fParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

var Function_360(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x12950 / 76112
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

void Function_361(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x12A3B / 76347
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
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_362() //Position: 0x12AD0 / 76496
{
	switch (iLocal_1839)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1390))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_1390);
				bLocal_1335 = TASK_SEQUENCE_OPEN();
				Function_227(&bLocal_4 + 1792[0]);
				Local_1409 = Function_227(&bLocal_4 + 1792[0]);
				TASK_FACE_COORD(0, &Local_1409, 0);
				Function_227(&bLocal_4 + 1792[0]);
				Local_1409 = Function_227(&bLocal_4 + 1792[0]);
				TASK_GO_TO_COORD_USING_MATERIAL(0, &Local_1409, 4, 32, 0);
				Function_227(&bLocal_4 + 1792[1]);
				Local_1409 = Function_227(&bLocal_4 + 1792[1]);
				TASK_GO_TO_COORD_USING_MATERIAL(0, &Local_1409, 4, 32, 0);
				Function_227(&bLocal_4 + 1792[2]);
				Local_1409 = Function_227(&bLocal_4 + 1792[2]);
				TASK_GO_TO_COORD_USING_MATERIAL(0, &Local_1409, 4, 32, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
				TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
				iLocal_1839 = 1;
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&iLocal_1390, 6) == 1)
			{
				RELEASE_ACTOR(&iLocal_1390);
				iLocal_1839 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_363() //Position: 0x12BAF / 76719
{
	if (!iLocal_1434)
	{
		if (Function_571(Global_46838[1]))
		{
			Function_227(&bLocal_4 + 1832[0]);
			uLocal_1336 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_227(&bLocal_4 + 1832[0]), 5.0f, "RIGHTWING01_CRATE", 1);
			if (IS_PHYSINST_VALID(&uLocal_1336))
			{
				bLocal_1419 = GET_OBJECT_FROM_PHYSINST(&uLocal_1336);
				if (IS_OBJECT_VALID(&bLocal_1419))
				{
					DESTROY_OBJECT(&bLocal_1419);
					iLocal_1434 = 1;
				}
			}
		}
	}
	return;
}

int Function_364(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5) //Position: 0x12C1B / 76827
{
	int iVar0;
	int iVar1;
	
	if (((((iParam0 > 0 || &iParam1 > 0) || &bParam2 > 0) || &iParam3 > 0) || &bParam4 > 0) || &iParam5 > 0)
	{
		return 0;
	}
	iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &bParam2);
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

void Function_365() //Position: 0x12CB1 / 76977
{
	var uVar0;
	var uVar2;
	
	if (iLocal_1142 < 5 && iLocal_1142 > 105)
	{
		Function_364(18, 0, 0, 23, 59, 59);
		Function_451();
		Function_446();
		Function_423();
		if (Function_571(Global_46760[0]))
		{
			Function_421();
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1392[2]))
			{
				if (Function_288(&iLocal_1378) < 1.0f)
				{
					if (!DECOR_CHECK_EXIST(&uLocal_827, "disabledstacker"))
					{
						if (Function_571(Global_46760[0]))
						{
							uVar0 = Vector(-2204,577f, 16,58f, 2602,359f);
							uVar2 = LOCATE_GRINGO_OF_TYPE("factory_lumber_stacker", &uVar0, 2.0f, 1);
							if (IS_GRINGO_VALID(&uVar2))
							{
								GRINGO_ALLOW_ACTIVATION(&uVar2, false);
								DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uVar2));
								DECOR_SET_BOOL(&uLocal_827, "disabledstacker", 1);
							}
						}
					}
					bLocal_1335 = false;
					while (bLocal_1335 < 6)
					{
						Function_420(&(Local_1642[bLocal_133513]));
						bLocal_1335++;
					}
					bLocal_1335 = false;
					while (bLocal_1335 < 1)
					{
						Function_419(&(vLocal_1457[bLocal_13353]));
						bLocal_1335++;
					}
					Function_418();
					Function_417();
					Function_416();
					Function_363();
					Function_409();
					Function_293(&iLocal_1378);
				}
			}
		}
		else if (Function_571(Global_46838[1]))
		{
			if (Function_288(&iLocal_1378) < 1.0f)
			{
				Function_407();
				Function_293(&iLocal_1378);
			}
		}
		else if (Function_288(&iLocal_1378) < 1.0f)
		{
			if (!IS_ACTOR_ALIVE(&iLocal_1392))
			{
				Function_245("Horse_dead");
				iLocal_1323 = 1;
			}
			Function_293(&iLocal_1378);
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "beingbucked"))
		{
			iLocal_1440 = 1;
		}
		if (Function_346(&Global_54076, &iLocal_1390, 30.0f))
		{
			Function_344();
		}
	}
	switch (iLocal_1142)
	{
		case 0x00000000:
			if (Function_406())
			{
				Function_239(bLocal_1141);
				Function_230(StackVal, Function_239(bLocal_1141), bLocal_1141, Global_46736[3], Function_238(bLocal_1141), 0);
				if (!iLocal_1300[0])
				{
					iLocal_1142 = 1;
				}
				else
				{
					iLocal_1142 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_571(Global_46760[0]))
			{
				Function_333();
				Function_383();
				iLocal_1142 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_369())
			{
				iLocal_1142 = 5;
			}
			break;
		
		case 0x00000005:
			Function_285(1.0f);
			iLocal_1837 = 0;
			iLocal_1838 = 0;
			iLocal_1863 = 0;
			iLocal_1862 = 4;
			if (!iLocal_1300[0])
			{
				iLocal_1832 = 0;
			}
			if (iLocal_826 == 1)
			{
			}
			TASK_STAND_STILL(&iLocal_1392, -1.0f, 0, 0);
			Function_293(&iLocal_1354);
			iLocal_1142 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				iLocal_1142 = 7;
			}
			break;
		
		case 0x00000007:
			Function_227(&bLocal_4 + 1576[1]);
			Function_367(StackVal, "$/cutscene/intro01_cs02/intro01_cs02", &uLocal_1326, Function_227(&bLocal_4 + 1576[1]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (iLocal_1432 == 1)
			{
				if (IS_OBJECT_VALID(&uLocal_1450))
				{
					DESTROY_OBJECT(&uLocal_1450);
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1390));
				}
				MEMORY_PREFER_RIDING(&iLocal_1390, true);
				bLocal_1335 = TASK_SEQUENCE_OPEN();
				Function_227(&bLocal_4 + 1576[1]);
				Local_1409 = Function_227(&bLocal_4 + 1576[1]);
				TASK_GO_NEAR_COORD(false, &Local_1409, 2.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
				TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_1390);
				HUD_ENABLE(0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				bLocal_1335 = TASK_SEQUENCE_OPEN();
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1288[0]))
				{
					if (!Function_366())
					{
						Function_227(&bLocal_4 + 1576[0]);
						Local_1409 = Function_227(&bLocal_4 + 1576[0]);
						TASK_GO_TO_COORD(0, &Local_1409, 2);
					}
					else
					{
						Function_227(&bLocal_4 + 1576[4]);
						Local_1409 = Function_227(&bLocal_4 + 1576[4]);
						TASK_GO_TO_COORD(0, &Local_1409, 2);
					}
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1335);
				TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
				Function_331(&bLocal_4 + 960[02], &bLocal_4 + 2192[0]);
				Function_331(&bLocal_4 + 960[12], &bLocal_4 + 2192[1]);
				Function_331(&bLocal_4 + 960[22], &bLocal_4 + 2192[2]);
				Function_331(&bLocal_4 + 960[32], &bLocal_4 + 2192[3]);
				Function_293(&iLocal_1354);
				iLocal_1142 = 8;
			}
			break;
		
		case 0x00000008:
			Function_227(&bLocal_4 + 1576[1]);
			if ((StackVal || Function_319(GET_TASK_STATUS(&iLocal_1390, 6) != 1, &iLocal_1390, Function_227(&bLocal_4 + 1576[1]), 1.0f)) || Function_288(&iLocal_1354) < 10.0f)
			{
				iLocal_1142 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1300[1] = 1;
			bLocal_1141 = 2;
			iLocal_1142 = 2;
			break;
	}
	return;
}

bool Function_366() //Position: 0x1314D / 78157
{
	float fVar0;
	
	Function_320(&Global_54076);
	GET_OBJECT_RELATIVE_OFFSET(&iLocal_1390, Function_320(&Global_54076), &fVar0);
	if (fVar0 > 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_367(bool bParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1316E / 78190
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_319(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_321()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&bParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_368();
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
	else if ((!Function_319(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_321()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_319(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_368() //Position: 0x133D6 / 78806
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
			Function_324(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

bool Function_369() //Position: 0x1342A / 78890
{
	switch (iLocal_1833)
	{
		case 0x00000000:
			if (iLocal_1300[0] == 0)
			{
				Local_1409 = (&iLocal_592 + 552[23]);
				Function_382(StackVal, StackVal, Local_1409);
				Function_370();
				iLocal_1830 = 0;
				iLocal_1833 = 1;
			}
			else
			{
				iLocal_1833 = 2;
			}
			break;
		
		case 0x00000001:
			Function_227(&bLocal_4 + 1544[0]);
			Local_1409 = Function_227(&bLocal_4 + 1544[0]);
			TELEPORT_ACTOR_WITH_HEADING(&iLocal_1392, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1544[0]), 1, 1, 1);
			Function_227(&bLocal_4 + 1544[1]);
			Local_1409 = Function_227(&bLocal_4 + 1544[1]);
			TELEPORT_ACTOR_WITH_HEADING(&iLocal_1394, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1544[1]), 1, 1, 1);
			bLocal_1335 = false;
			while (bLocal_1335 < 1)
			{
				SET_ALLOW_RIDE_BY_PLAYER(&(vLocal_1457[bLocal_13353]), 1);
				bLocal_1335++;
			}
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &iLocal_1392);
			}
			if (!IS_ACTOR_RIDING(&iLocal_1390))
			{
				ACTOR_MOUNT_ACTOR(&iLocal_1390, &iLocal_1394);
			}
			MEMORY_PREFER_RIDING(&iLocal_1390, true);
			iLocal_1833 = 2;
			break;
		
		case 0x00000002:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_370() //Position: 0x13550 / 79184
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	if (iLocal_1445 < 4294967295 && Function_381(&(Global_46972[1]), 0, 4294967295, 0))
	{
		bVar0 = Function_379(iLocal_1445);
		if (IS_ACTOR_VALID(&bVar0))
		{
			ENABLE_VEHICLE_SEAT(&bVar0, 14, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 15, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 16, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 17, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 18, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 19, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 20, 0);
			ENABLE_VEHICLE_SEAT(&bVar0, 21, 0);
			bLocal_1335 = false;
			while (bLocal_1335 <= 3)
			{
				bVar1 = Function_372(&(Global_46972[1]), 1, 0, 4294967295, 0);
				if (Function_325(bVar1))
				{
					Function_227(&bVar0);
					Function_371(&bVar0);
					uVar2 = CREATE_ACTOR_IN_LAYOUT(&uLocal_827, Function_55(), bVar1, Function_227(&bVar0), Function_371(&bVar0));
					if (IS_ACTOR_VALID(&uVar2))
					{
						TASK_STAND_STILL(&uVar2, -1.0f, 0, 0);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, 1);
						TASK_PRIORITY_SET(&uVar2, 2);
						bVar3 = RAND_INT_RANGE(0, 13);
						while (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(&bVar0, bVar3)))
						{
							bVar3 = RAND_INT_RANGE(0, 13);
						}
						SET_ACTOR_IN_VEHICLE(&uVar2, &bVar0, bVar3);
						SET_ACTOR_UPDATE_PRIORITY(&uVar2, 2);
					}
				}
				bLocal_1335++;
			}
		}
	}
	return;
}

struct<8> Function_371(int iParam0) //Position: 0x1366B / 79467
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

var Function_372(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x13694 / 79508
{
	return Function_373(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_373(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x136B2 / 79538
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_378();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_325(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_377(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_377(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_376(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_325(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_376(bVar0))
				{
					Function_375();
				}
				Function_374(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_325(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_374(int iParam0) //Position: 0x139AB / 80299
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_375() //Position: 0x13A5F / 80479
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_376(bool bParam0) //Position: 0x13A9A / 80538
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_377(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x13AC7 / 80583
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_378() //Position: 0x13C22 / 80930
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_375();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_375();
	return;
}

var Function_379(int iParam0) //Position: 0x13C6E / 81006
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 4294967295)
	{
		return "";
	}
	bVar0 = true;
	iVar1 = TRAIN_GET_NUM_CARS(iParam0);
	if (iVar1 > 1)
	{
		bVar0 = true;
		while (bVar0 < (iVar1 - 1))
		{
			iVar2 = TRAIN_GET_CAR(iParam0, bVar0);
			if (IS_OBJECT_VALID(&iVar2))
			{
				if (Function_380(&iVar2) != 1165 || Function_380(&iVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iParam0, bVar0));
				}
			}
			bVar0++;
		}
	}
	return "";
}

int Function_380(int iParam0) //Position: 0x13CDA / 81114
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

int Function_381(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x13CF7 / 81143
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

void Function_382(var uParam0, var uParam1, bool bParam2) //Position: 0x13D23 / 81187
{
	var uVar0;
	
	UNK_0x44986367(&uVar0, bParam2);
	TRAIN_SET_POSITION_DIRECTION(iLocal_1445, &uParam0, &uVar0);
	TRAIN_SET_TARGET_POS(iLocal_1445, &uParam0);
	TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1445, 0);
	TRAIN_SET_SPEED(iLocal_1445, 0.0f);
	TRAIN_SET_TARGET_SPEED(iLocal_1445, 0.0f);
	return;
}

void Function_383() //Position: 0x13D57 / 81239
{
	Function_2(9);
	Function_204(1);
	if (!SQUAD_IS_VALID(&iLocal_592 + 248))
	{
		Function_405();
		Function_404();
		Function_403();
	}
	Function_402();
	if (Function_295(&Local_829) || HUD_IS_FADED())
	{
		Local_1409 = (&iLocal_592 + 552[13]);
		Function_382(StackVal, StackVal, Local_1409);
	}
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 0);
	Function_401();
	Function_400();
	Function_399();
	Function_398();
	Function_397();
	cLocal_1398 = &bLocal_4 + 552[02];
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&cLocal_1398, 0);
	cLocal_1396 = &bLocal_4 + 576[02];
	bLocal_1335 = false;
	while (bLocal_1335 < 6)
	{
		Local_1642[bLocal_133513] = &bLocal_4 + 600[bLocal_13352];
		Function_227(&bLocal_4 + 1936[bLocal_1335]);
		*(&Local_1642[bLocal_133513] + 72) = Function_227(&bLocal_4 + 1936[bLocal_1335]);
		TASK_STAND_STILL(&(Local_1642[bLocal_133513]), -1.0f, 0, 0);
		Local_1642[bLocal_133513].f_84 = 2;
		bLocal_1335++;
	}
	strcpy(&Local_1642[013] + 8, "chair_sit_table_attach", 32);
	strcpy(&Local_1642[113] + 8, "chair_sit_table_attach", 32);
	strcpy(&Local_1642[213] + 8, "mex_drunk_sittable", 32);
	strcpy(&Local_1642[313] + 8, "leaning_stand", 32);
	strcpy(&Local_1642[413] + 8, "bar_drink_serve", 32);
	strcpy(&Local_1642[513] + 8, "chair_sit_table_attach", 32);
	strcpy(&Local_1642[613] + 8, "mex_drunk_sittable", 32);
	uLocal_1400 = &bLocal_4 + 728[02];
	uLocal_1402 = &bLocal_4 + 752[02];
	Function_170(12);
	Function_395(9);
	Function_227(&bLocal_4 + 1736[2]);
	Function_224(StackVal, Function_227(&bLocal_4 + 1736[2]), 0, 0);
	bLocal_1335 = 976;
	while (bLocal_1335 < 1007)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bLocal_1335);
		bLocal_1335++;
	}
	bLocal_1335 = false;
	while (bLocal_1335 < 15)
	{
		Function_394(bLocal_1335, 0);
		bLocal_1335++;
	}
	Function_211(0);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1089);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1090);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1061);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1062);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1063);
	Function_392(&uLocal_1146, &uLocal_827);
	Function_388(&(Local_1200[015]), &iLocal_1390, "guide", 0, 0x5f5e100, 1);
	Function_388(&(Local_1200[115]), &iLocal_1394, "guide_horse", 0, 0x5f5e100, 1);
	Function_385(&(Local_1200[115]), 256, 1);
	Function_388(&(Local_1200[215]), &iLocal_1392, "Horse", 0, 0x5f5e100, 1);
	Function_384(&iLocal_1354);
	Function_384(&iLocal_1378);
	return;
}

void Function_384(int iParam0) //Position: 0x1405F / 82015
{
	if (!Function_290(&iParam0))
	{
		Function_294(&iParam0, 0.0f);
	}
	return;
}

void Function_385(var uParam0, int iParam1, int iParam2) //Position: 0x14076 / 82038
{
	if (iParam1 != 100000000)
	{
		Function_387(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_386(&uParam0, &iParam2);
	}
	return;
}

void Function_386(struct<69> Param0) //Position: 0x1409D / 82077
{
	Param0.f_68 = 0;
	Function_387(&Param0, 2, &bParam1);
	Function_387(&Param0, 4, &bParam1);
	Function_387(&Param0, 8, &bParam1);
	Function_387(&Param0, 16, &bParam1);
	Function_387(&Param0, 32, &bParam1);
	Function_387(&Param0, 64, &bParam1);
	Function_387(&Param0, 128, &bParam1);
	Function_387(&Param0, 256, &bParam1);
	Function_387(&Param0, 512, &bParam1);
	Function_387(&Param0, 1024, &bParam1);
	return;
}

void Function_387(int iParam0, int iParam1, bool bParam2) //Position: 0x14118 / 82200
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

int Function_388(struct<69> Param0) //Position: 0x14157 / 82263
{
	if (!Function_391(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_390(&Param0, &uParam2))
	{
		return 0;
	}
	Function_389(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_385(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_389(struct<65> Param0) //Position: 0x1419D / 82333
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_390(int iParam0, char* cParam1) //Position: 0x141AA / 82346
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

bool Function_391(struct<61> Param0) //Position: 0x14237 / 82487
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

int Function_392(struct<2>[] Param0) //Position: 0x143EA / 82922
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_393(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_393(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_393(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_393(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_393(struct<13> Param0) //Position: 0x14AC3 / 84675
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

void Function_394(int iParam0, int iParam1) //Position: 0x14B92 / 84882
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_395(int iParam0) //Position: 0x14BB0 / 84912
{
	Function_396(&Global_43580, iParam0);
	return;
}

void Function_396(var uParam0, var uParam1) //Position: 0x14BBE / 84926
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_397() //Position: 0x14BE6 / 84966
{
	*(&bLocal_4 + 752[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "OnThePhone", 60, Vector(-2172,653f, 16,877f, 2597,869f), Vector(0.0f, 135.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 752[02], true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 752[02], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 752[02], 2);
	TASK_STAND_STILL(&bLocal_4 + 752[02], -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_4 + 752[02], -1.0f, 0, 0);
	return;
}

void Function_398() //Position: 0x14C67 / 85095
{
	*(&bLocal_4 + 728[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "StairsWhore", 65, Vector(-2172,807f, 17,77728f, 2586,491f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 728[02], true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 728[02], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 728[02], 2);
	TASK_STAND_STILL(&bLocal_4 + 728[02], -1.0f, 0, 0);
	return;
}

void Function_399() //Position: 0x14CD6 / 85206
{
	*(&bLocal_4 + 720) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "GringoDrinkers"));
	*(&bLocal_4 + 600[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker01", 235, Vector(-2166,646f, 16,877f, 2594,049f), Vector(0.0f, 70.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[02], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[02], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[02], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[02], -1.0f, 0, 0);
	*(&bLocal_4 + 600[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker02", 206, Vector(-2169,563f, 16,877f, 2592,759f), Vector(0.0f, 247.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[12], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[12], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[12], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[12], -1.0f, 0, 0);
	*(&bLocal_4 + 600[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker03", 36, Vector(-2172,576f, 16,88545f, 2595,087f), Vector(0.0f, 215.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[22], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[22], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[22], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[22], -1.0f, 0, 0);
	*(&bLocal_4 + 600[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker04", 311, Vector(-2166,186f, 16,877f, 2598,138f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[32], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[32], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[32], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[32], -1.0f, 0, 0);
	*(&bLocal_4 + 600[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker05", 204, Vector(-2166,186f, 16,877f, 2596,007f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[42], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[42], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[42], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[42], -1.0f, 0, 0);
	*(&bLocal_4 + 600[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker06", 34, Vector(-2166,186f, 16,877f, 2600,637f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[52], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[52], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[52], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[52], -1.0f, 0, 0);
	*(&bLocal_4 + 600[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nDrinker07", 140, Vector(-2169,028f, 16,877f, 2600,741f), Vector(0.0f, 271,4224f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 600[62], &bLocal_4 + 720);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 600[62], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 600[62], 2);
	TASK_STAND_STILL(&bLocal_4 + 600[62], -1.0f, 0, 0);
	return;
}

void Function_400() //Position: 0x1500D / 86029
{
	*(&bLocal_4 + 576[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PianoPlayer", 180, Vector(-2170,383f, 16,877f, 2589,803f), Vector(0.0f, 0.0f, 0.0f));
	TASK_STAND_STILL(&bLocal_4 + 576[02], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 576[02], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 576[02], 2);
	return;
}

void Function_401() //Position: 0x1506F / 86127
{
	*(&bLocal_4 + 552[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakesWhore", 697, Vector(-2167,272f, 16,87653f, 2588,965f), Vector(0.0f, 180.0f, 0.0f));
	SET_ACTOR_FACTION(&bLocal_4 + 552[02], 20);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 552[02], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 552[02], 2);
	TASK_STAND_STILL(&bLocal_4 + 552[02], -1.0f, 0, 0);
	SET_AMBIENT_VOICE_NAME(&bLocal_4 + 552[02], "CAUCASIAN_FEMALE_Prostitute01");
	return;
}

void Function_402() //Position: 0x1510F / 86287
{
	bLocal_1335 = false;
	while (bLocal_1335 < 12)
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_592 + 256[bLocal_1335]))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_592 + 256[bLocal_1335]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_592 + 256[bLocal_1335]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_592 + 256[bLocal_1335], 15);
		}
		bLocal_1335++;
	}
	return;
}

void Function_403() //Position: 0x1516E / 86382
{
	var uVar0;
	
	SET_AMBIENT_VOICE_NAME(&iLocal_592 + 128[42], "CAUCASIAN_MALE_Traveler05");
	SET_AMBIENT_VOICE_NAME(&iLocal_592 + 128[52], "CAUCASIAN_MALE_Traveler06");
	bLocal_1335 = false;
	while (bLocal_1335 < 5)
	{
		uVar0 = LOCATE_GRINGO_OF_TYPE(&Local_1471[bLocal_133512] + 8, &Local_1471[bLocal_133512] + 72, 1.0f, 1);
		if (IS_GRINGO_VALID(&uVar0))
		{
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&(Local_1471[bLocal_133512]))))
			{
				if (bLocal_1335 == 4 && bLocal_1335 == 5)
				{
					SNAP_ACTOR_TO_GRINGO(&(Local_1471[bLocal_133512]), GET_OBJECT_FROM_GRINGO(&uVar0), "usecase1", true, 0, 0);
					TASK_USE_GRINGO(&(Local_1471[bLocal_133512]), &uVar0, "usecase1", 4294967295, 1);
				}
				else
				{
					AI_ACTOR_FORCE_SPEED(&iLocal_592 + 128[bLocal_13352], 1);
					TASK_USE_GRINGO(&(Local_1471[bLocal_133512]), &uVar0, "usecase1", 4294967295, 1);
				}
			}
		}
		bLocal_1335++;
	}
	return;
}

void Function_404() //Position: 0x15291 / 86673
{
	bLocal_1335 = false;
	while (bLocal_1335 < 6)
	{
		Local_1471[bLocal_133512] = &iLocal_592 + 128[bLocal_13352];
		*(&Local_1471[bLocal_133512] + 72) = *(&iLocal_592 + 376[bLocal_13353]);
		Local_1471[bLocal_133512].f_84 = 0;
		Local_1471[bLocal_133512].f_88 = 3;
		TASK_STAND_STILL(&(Local_1471[bLocal_133512]), -1.0f, 0, 0);
		bLocal_1335++;
	}
	strcpy(&Local_1471[012] + 8, "chair_sit_newspaper", 32);
	strcpy(&Local_1471[112] + 8, "bench_chair", 32);
	strcpy(&Local_1471[212] + 8, "look_distance_binocs", 32);
	strcpy(&Local_1471[312] + 8, "nsit_docks", 32);
	strcpy(&Local_1471[412] + 8, "bench_chair", 32);
	strcpy(&Local_1471[512] + 8, "nlean_rail", 32);
	strcpy(&Local_1471[612] + 8, "rand_idle_nearwall", 32);
	Local_1471[412].f_84 = 1;
	Local_1471[512].f_84 = 1;
	bLocal_1335 = false;
	while (bLocal_1335 < 6)
	{
		if (Local_1471[bLocal_133512].f_84 == 0)
		{
			Local_1471[bLocal_133512].f_88 = 1;
		}
		else
		{
			Local_1471[bLocal_133512].f_88 = 0;
		}
		bLocal_1335++;
	}
	return;
}

void Function_405() //Position: 0x15409 / 87049
{
	*(&iLocal_592 + 248) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_592, "GringoTrainStation"));
	*(&iLocal_592 + 128[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "Sitting01wf", 87, Vector(-2198,367f, 16,9556f, 2610,512f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[02], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[02], true);
	TASK_STAND_STILL(&iLocal_592 + 128[02], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[02], false);
	TASK_STAND_STILL(&iLocal_592 + 128[02], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[02], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[02], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[02], 2);
	*(&iLocal_592 + 128[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "nSitting02", 79, Vector(-2192,573f, 16,96881f, 2608,164f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[12], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[12], true);
	TASK_STAND_STILL(&iLocal_592 + 128[12], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[12], false);
	TASK_STAND_STILL(&iLocal_592 + 128[12], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[12], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[12], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[12], 2);
	*(&iLocal_592 + 128[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "UsingBinoculars", 195, Vector(-2208,033f, 19,75f, 2616,455f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[22], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[22], true);
	TASK_STAND_STILL(&iLocal_592 + 128[22], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[22], false);
	TASK_STAND_STILL(&iLocal_592 + 128[22], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[22], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[22], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[22], 2);
	*(&iLocal_592 + 128[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "SittingOnLedge", 308, Vector(-2205,345f, 19,75f, 2619,271f), Vector(0.0f, 270.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[32], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[32], true);
	TASK_STAND_STILL(&iLocal_592 + 128[32], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[32], false);
	TASK_STAND_STILL(&iLocal_592 + 128[32], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[32], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[32], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[32], 2);
	*(&iLocal_592 + 128[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "OffTrain01", 705, Vector(-2203,758f, 16,52159f, 2607,877f), Vector(0.0f, 270.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[42], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[42], true);
	TASK_STAND_STILL(&iLocal_592 + 128[42], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[42], false);
	TASK_STAND_STILL(&iLocal_592 + 128[42], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[42], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[42], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[42], 2);
	*(&iLocal_592 + 128[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "OffTrain02", 714, Vector(-2200,303f, 16,506f, 2614,713f), Vector(0.0f, 260.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[52], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[52], true);
	TASK_STAND_STILL(&iLocal_592 + 128[52], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[52], false);
	TASK_STAND_STILL(&iLocal_592 + 128[52], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[52], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[52], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[52], 2);
	*(&iLocal_592 + 128[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_592, "LeaningLeft", 95, Vector(-2198,367f, 16,9556f, 2610,512f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&iLocal_592 + 128[62], &iLocal_592 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[62], true);
	TASK_STAND_STILL(&iLocal_592 + 128[62], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_592 + 128[62], false);
	TASK_STAND_STILL(&iLocal_592 + 128[62], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_592 + 128[62], 1);
	TASK_PRIORITY_SET(&iLocal_592 + 128[62], 2);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_592 + 128[62], 2);
	return;
}

bool Function_406() //Position: 0x158D1 / 88273
{
	Function_313(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
	Function_335();
	if (iLocal_1300[0] == 0)
	{
		Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
		SET_ACTOR_HEALTH(&iLocal_1390, GET_ACTOR_MAX_HEALTH(&iLocal_1390));
		FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
		Function_227(&bLocal_4 + 1544[0]);
		Local_1409 = Function_227(&bLocal_4 + 1544[0]);
		TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1409, GET_OBJECT_HEADING(&bLocal_4 + 1544[0]), 1, 1, 1);
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 30, 0));
	}
	return 1;
}

void Function_407() //Position: 0x1593F / 88383
{
	int iVar0;
	
	iVar0 = Function_408(Global_46838[1], "fortmercer", "corralprops", 1);
	if (IS_DOOR_VALID(&iVar0))
	{
		if (IS_DOOR_OPENED(&iVar0))
		{
			CLOSE_DOOR_FAST(&iVar0);
		}
		if (!IS_DOOR_LOCKED(&iVar0))
		{
			Function_128(&iVar0, 1);
		}
	}
	iVar0 = Function_408(Global_46838[1], "fortmercer", "corralprops", 2);
	if (IS_DOOR_VALID(&iVar0))
	{
		if (IS_DOOR_OPENED(&iVar0))
		{
			CLOSE_DOOR_FAST(&iVar0);
		}
		if (!IS_DOOR_LOCKED(&iVar0))
		{
			Function_128(&iVar0, 1);
		}
	}
	iVar0 = Function_408(Global_46838[1], "fortmercer", "guardTowerProps", 7);
	if (IS_DOOR_VALID(&iVar0))
	{
		if (IS_DOOR_OPENED(&iVar0))
		{
			CLOSE_DOOR_FAST(&iVar0);
		}
		if (!IS_DOOR_LOCKED(&iVar0))
		{
			Function_128(&iVar0, 1);
		}
	}
	iVar0 = Function_408(Global_46838[1], "fortmercer", "guardTowerProps", 8);
	if (IS_DOOR_VALID(&iVar0))
	{
		if (IS_DOOR_OPENED(&iVar0))
		{
			CLOSE_DOOR_FAST(&iVar0);
		}
		if (!IS_DOOR_LOCKED(&iVar0))
		{
			Function_128(&iVar0, 1);
		}
	}
	return;
}

int Function_408(int iParam0, char* cParam1, bool bParam3) //Position: 0x15A9E / 88734
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

void Function_409() //Position: 0x15B43 / 88899
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	if (Function_571(Global_46760[0]) && IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1392[2]))
	{
		if (!SQUAD_IS_VALID(&bLocal_4 + 856))
		{
			Function_411();
			Function_410(&bLocal_4 + 856, 2);
		}
		else
		{
			if (IS_ACTOR_VALID(&bLocal_4 + 808[02]))
			{
				Function_227(&bLocal_4 + 2112[2]);
				Local_1409 = Function_227(&bLocal_4 + 2112[2]);
				iVar0 = LOCATE_GRINGO_OF_TYPE("nuse_shelf", &Local_1409, 1.0f, 1);
				Function_227(&bLocal_4 + 2112[3]);
				Local_1409 = Function_227(&bLocal_4 + 2112[3]);
				uVar1 = LOCATE_GRINGO_OF_TYPE("nbartender", &Local_1409, 1.0f, 1);
				if (GET_TASK_STATUS(&bLocal_4 + 808[02], 0) != 1)
				{
					bVar2 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(&iVar0))
					{
						TASK_USE_GRINGO(false, &iVar0, "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&(Local_1642[413]))))
					{
						TASK_USE_GRINGO(false, GET_CURRENT_GRINGO(&(Local_1642[413])), "Barman", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 808[02], bVar2);
					TASK_SEQUENCE_RELEASE(bVar2, 1);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 808[12]))
			{
				Function_227(&bLocal_4 + 2112[1]);
				Local_1409 = Function_227(&bLocal_4 + 2112[1]);
				iVar0 = LOCATE_GRINGO_OF_TYPE("browse_table", &Local_1409, 1.0f, 1);
				Function_227(&bLocal_4 + 2112[0]);
				Local_1409 = Function_227(&bLocal_4 + 2112[0]);
				uVar1 = LOCATE_GRINGO_OF_TYPE("cooking", &Local_1409, 1.0f, 1);
				if (GET_TASK_STATUS(&bLocal_4 + 808[12], 0) != 1)
				{
					bVar3 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(&uVar1))
					{
						TASK_USE_GRINGO(false, &uVar1, "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&iVar0))
					{
						TASK_USE_GRINGO(false, &iVar0, "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 808[12], bVar3);
					TASK_SEQUENCE_RELEASE(bVar3, 1);
				}
			}
		}
	}
	return;
}

void Function_410(var uParam0, bool bParam1) //Position: 0x15D21 / 89377
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_411() //Position: 0x15D62 / 89442
{
	(&bLocal_4 + 848) = CREATE_ACTORSET_IN_LAYOUT(&bLocal_4, "BehindTheBarset", 0);
	*(&bLocal_4 + 856) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "BehindTheBar"));
	*(&bLocal_4 + 808[02]) = Function_412(StackVal, StackVal, &Global_11014, &Global_12796, 2, Vector(-2162,888f, 16,44941f, 2596.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&bLocal_4 + 848, &bLocal_4 + 808[02]);
	SQUAD_JOIN(&bLocal_4 + 808[02], &bLocal_4 + 856);
	TASK_STAND_STILL(&bLocal_4 + 808[02], -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_4 + 808[02], -1.0f, 0, 0);
	*(&bLocal_4 + 808[12]) = Function_412(StackVal, StackVal, &Global_11014, &Global_12796, 8, Vector(-2162,639f, 16,87441f, 2599,806f), Vector(0.0f, 0.0f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&bLocal_4 + 848, &bLocal_4 + 808[12]);
	SQUAD_JOIN(&bLocal_4 + 808[12], &bLocal_4 + 856);
	TASK_STAND_STILL(&bLocal_4 + 808[12], -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_4 + 808[12], -1.0f, 0, 0);
	return;
}

int Function_412(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x15E7C / 89724
{
	var uVar0;
	var uVar1;
	
	uVar0 = fParam2;
	uVar1 = Function_413(&iParam0, &fParam1, uVar0, &iParam7, 0, 1);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		LOG_ERROR("CREATE_ACTOR_AS_REGIONAL got NULL when it tried to steal the character");
		return "";
	}
	PRINTSTRING("Spawning Regional Character at ");
	PRINTVECTOR(Param3);
	PRINTNL();
	SET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&uVar1), Param3);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar1), Param5);
	GET_POSITION(&uVar1, &Param3);
	PRINTSTRING("New position is ");
	PRINTVECTOR(Param3);
	PRINTNL();
	return &uVar1;
}

var Function_413(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x15F6C / 89964
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_187(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_187(&(Param0[iVar02]), 2))
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
			if (!Function_187(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_184(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_415(StackVal, &Global_10996, Function_55(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_187(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_184(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_184(&(Param0[iVar02]), 1);
	Function_414(&vParam1[iVar03] + 16, 1);
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

int Function_414(int iParam0, bool bParam1) //Position: 0x16133 / 90419
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

var Function_415(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x161E5 / 90597
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_55(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_416() //Position: 0x1630C / 90892
{
	var uVar0;
	
	switch (iLocal_1828)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&uLocal_1402, 19) != 1)
			{
				Function_227(&bLocal_4 + 2056[0]);
				Local_1409 = Function_227(&bLocal_4 + 2056[0]);
				uVar0 = LOCATE_GRINGO_OF_TYPE("wall_phone", &Local_1409, 2.0f, 1);
				if (IS_GRINGO_VALID(&uVar0))
				{
					SNAP_ACTOR_TO_GRINGO(&uLocal_1402, GET_OBJECT_FROM_GRINGO(&uVar0), "usecase1", true, 1, 1);
					TASK_USE_GRINGO(&uLocal_1402, &uVar0, "usecase1", 4294967295, 1);
				}
			}
			else
			{
				iLocal_1828 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&uLocal_1402)))
			{
				if (iLocal_1835 >= 2 || bLocal_1141 == 0)
				{
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uLocal_1402)))
					{
						if (!DECOR_CHECK_EXIST(&uLocal_1402, "lowpriority"))
						{
							SET_ACTOR_UPDATE_PRIORITY(&uLocal_1402, 2);
							DECOR_SET_BOOL(&uLocal_1402, "lowpriority", 1);
						}
					}
					else
					{
						if (DECOR_CHECK_EXIST(&uLocal_1402, "lowpriority"))
						{
							DECOR_REMOVE(&uLocal_1402, "lowpriority");
							SET_ACTOR_UPDATE_PRIORITY(&uLocal_1402, true);
						}
						iLocal_1828 = 0;
					}
				}
				else if (GET_TASK_STATUS(&uLocal_1402, 10) != 1)
				{
					TASK_WANDER(&uLocal_1402, -1.0f);
					iLocal_1828 = 2;
				}
			}
			else
			{
				TASK_CLEAR(&uLocal_1402);
				TASK_FLEE_ACTOR(&uLocal_1402, GET_LAST_ATTACKER(&uLocal_1402), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1828 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_1835 < 2 || bLocal_1141 == 0)
			{
				if (GET_TASK_STATUS(&uLocal_1402, 10) != 1)
				{
					TASK_WANDER(&uLocal_1402, -1.0f);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_1402, &iLocal_592 + 256[1], 1, 2);
					RELEASE_ACTOR(&uLocal_1402);
				}
			}
			break;
	}
	return;
}

void Function_417() //Position: 0x164C5 / 91333
{
	switch (iLocal_1827)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&uLocal_1400, 19) != 1)
			{
				SNAP_ACTOR_TO_GRINGO(&uLocal_1400, &bLocal_4 + 2312, "usecase1", true, 1, 1);
				TASK_USE_GRINGO(&uLocal_1400, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 2312), "usecase1", 4294967295, 1);
			}
			else
			{
				iLocal_1827 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&uLocal_1400)))
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uLocal_1400)))
				{
					if (!DECOR_CHECK_EXIST(&uLocal_1400, "lowpriority"))
					{
						SET_ACTOR_UPDATE_PRIORITY(&uLocal_1400, 2);
						DECOR_SET_BOOL(&uLocal_1400, "lowpriority", 1);
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uLocal_1400, "lowpriority"))
					{
						DECOR_REMOVE(&uLocal_1400, "lowpriority");
						SET_ACTOR_UPDATE_PRIORITY(&uLocal_1400, true);
					}
					iLocal_1827 = 0;
				}
			}
			else
			{
				TASK_CLEAR(&uLocal_1400);
				TASK_FLEE_ACTOR(&uLocal_1400, GET_LAST_ATTACKER(&uLocal_1400), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1827 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_418() //Position: 0x165EC / 91628
{
	var uVar0;
	
	if (bLocal_1141 != 0 || (iLocal_1830 >= 0 && bLocal_1141 != 1))
	{
		switch (iLocal_1641)
		{
			case 0x00000000:
				if (GET_TASK_STATUS(&cLocal_1396, 19) != 1)
				{
					Function_227(&bLocal_4 + 1912[0]);
					Local_1409 = Function_227(&bLocal_4 + 1912[0]);
					uVar0 = LOCATE_GRINGO_OF_TYPE("sit_piano_w_piano", &Local_1409, 1.0f, 1);
					if (IS_GRINGO_VALID(&uVar0))
					{
						SNAP_ACTOR_TO_GRINGO(&cLocal_1396, GET_OBJECT_FROM_GRINGO(&uVar0), "usecase1", true, 1, 1);
						TASK_USE_GRINGO(&cLocal_1396, &uVar0, "usecase1", 4294967295, 1);
					}
				}
				else
				{
					iLocal_1641 = 1;
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&cLocal_1396)))
				{
					if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&cLocal_1396)))
					{
						iLocal_1641 = 0;
					}
				}
				else
				{
					TASK_CLEAR(&cLocal_1396);
					TASK_FLEE_ACTOR(&cLocal_1396, GET_LAST_ATTACKER(&cLocal_1396), -1.0f, -1.0f, 0, 0, 0);
					iLocal_1641 = 2;
				}
				break;
			
			case 0x00000002:
				break;
		}
	}
	else if ((iLocal_1830 < 0 && bLocal_1141 != 1) && !DECOR_CHECK_EXIST(&cLocal_1396, "taskcleared"))
	{
		TASK_CLEAR(&cLocal_1396);
		DECOR_SET_BOOL(&cLocal_1396, "taskcleared", 1);
	}
	return;
}

void Function_419(int iParam0) //Position: 0x1672F / 91951
{
	int iVar0;
	
	iVar0 = LOCATE_ACTOR_OF_TYPE(*(&iParam0 + 8), 5.0f, 23, 4294967295);
	if ((((IS_ACTOR_VALID(&iVar0) && &iVar0 == &iLocal_1392) && &iVar0 == &iLocal_1394) && GET_MOUNT(&Global_54076) == &iVar0) && GET_MOST_RECENT_MOUNT(&Global_54076) == &iVar0)
	{
		DESTROY_ACTOR(&iVar0);
	}
	return;
}

void Function_420(struct<85> Param0) //Position: 0x1677F / 92031
{
	var uVar0;
	
	if (!IS_ACTOR_VALID(&Param0))
	{
		return;
	}
	switch (Param0.f_84)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&Param0, 19) != 1)
			{
				uVar0 = LOCATE_GRINGO_OF_TYPE(&Param0 + 8, &Param0 + 72, 2.0f, 1);
				if (IS_GRINGO_VALID(&uVar0))
				{
					SNAP_ACTOR_TO_GRINGO(&Param0, GET_OBJECT_FROM_GRINGO(&uVar0), "usecase1", true, 1, 1);
					TASK_USE_GRINGO(&Param0, &uVar0, "usecase1", 4294967295, 1);
				}
				else if (!Function_290(&Param0 + 88))
				{
					Function_384(&Param0 + 88);
				}
				else if (Function_288(&Param0 + 88) < 6.0f)
				{
					DESTROY_ACTOR(&Param0);
				}
			}
			else
			{
				Param0.f_84 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&Param0)))
			{
				TASK_CLEAR(&Param0);
				TASK_FLEE_ACTOR(&Param0, GET_LAST_ATTACKER(&Param0), -1.0f, -1.0f, 0, 0, 0);
				Param0.f_84 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_421() //Position: 0x16875 / 92277
{
	switch (iLocal_1830)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1200))
				{
					HUD_CLEAR_HELP_QUEUE();
					Function_140("Intro01_Stop_Horse_v2", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_1830 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_290(&iLocal_1350))
			{
				Function_384(&iLocal_1350);
			}
			if (Function_288(&iLocal_1350) < 3.0f)
			{
				TRAIN_SET_MAX_ACCEL(iLocal_1445, 3,5f);
				TRAIN_SET_TARGET_SPEED(iLocal_1445, 8,75f);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1445, 1);
				TRAIN_SET_TARGET_POS(iLocal_1445, &iLocal_592 + 552[43]);
				Function_293(&iLocal_1354);
				Function_293(&iLocal_1350);
				iLocal_1830 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_288(&iLocal_1350) < 2.0f)
			{
				if (Function_422(StackVal, &iLocal_1390, *(&iLocal_592 + 552[53])) > 20.0f)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_1394, "horse_main/melee/rearup");
				}
				Function_293(&iLocal_1350);
				iLocal_1830 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_288(&iLocal_1350) < 7.0f)
			{
				Function_293(&iLocal_1350);
				iLocal_1435 = 1;
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "PASTORAL", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_1863 = 12;
				iLocal_1832 = 2;
				iLocal_1837 = 0;
				iLocal_1830 = 4;
				Function_293(&iLocal_1350);
			}
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

float Function_422(var uParam0, struct<2> Param1) //Position: 0x169FD / 92669
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_320(&uParam0);
		Var0 = Function_320(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_423() //Position: 0x16A74 / 92788
{
	switch (iLocal_1862)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&iLocal_1390, &bLocal_4 + 1240[3]))
			{
				iLocal_1863 = 10;
				iLocal_1862 = 1;
			}
			break;
		
		case 0x00000001:
			Function_227(&bLocal_4 + 1856[3]);
			Local_1409 = Function_227(&bLocal_4 + 1856[3]);
			STREAMING_LOAD_BOUNDS_EXT(0, Local_1409, 5.0f, 1);
			if (IS_ACTOR_RIDING(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				if (STREAMING_ARE_BOUNDS_LOADED(Local_1409, 5.0f))
				{
					Function_227(&bLocal_4 + 1856[4]);
					Local_1409 = Function_227(&bLocal_4 + 1856[4]);
					if (Function_319(StackVal, &Global_54076, Local_1409, 100.0f))
					{
						Function_227(&bLocal_4 + 1856[3]);
						Local_1409 = Function_227(&bLocal_4 + 1856[3]);
						Function_371(&bLocal_4 + 1856[3]);
						Local_1412 = Function_371(&bLocal_4 + 1856[3]);
						CREATE_CORPSE_IN_LAYOUT_RANDOM(&uLocal_827, "Deer", 1,566652E-42f, Local_1409, Local_1412, "dead_ground_deer");
						CLEAR_AREA_OF_GRASS(Local_1409, 2.0f);
						CREATE_DECAL(0, Local_1409, 1.0f, 1, 1);
						Function_445();
						bLocal_1335 = false;
						while (bLocal_1335 < 2)
						{
							Function_227(&bLocal_4 + 1856[bLocal_1335]);
							Local_1409 = Function_227(&bLocal_4 + 1856[bLocal_1335]);
							Function_371(&bLocal_4 + 1856[bLocal_1335]);
							Local_1409 = Function_371(&bLocal_4 + 1856[bLocal_1335]);
							uLocal_1421[bLocal_1335] = CREATE_GRINGO_IN_LAYOUT(&uLocal_827, Function_55(), "coyote_eating", Local_1409, Local_1412);
							GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&(uLocal_1421[bLocal_1335])), 0);
							TASK_USE_GRINGO(&bLocal_4 + 896[bLocal_13352], GET_GRINGO_FROM_OBJECT(&(uLocal_1421[bLocal_1335])), "usecase1", 4294967295, 1);
							bLocal_1335++;
						}
						iLocal_1862 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_227(&bLocal_4 + 1856[3]);
			Local_1409 = Function_227(&bLocal_4 + 1856[3]);
			if (Function_319(StackVal, &Global_54076, Local_1409, 25.0f) && !DECOR_CHECK_EXIST(&uLocal_827, "bark"))
			{
				uLocal_1452 = GET_SOUND_ID();
				PLAY_SOUND_FROM_ACTOR(&bLocal_4 + 896[02], "COYOTE_BARK_MASTER", &Global_54076);
				DECOR_SET_BOOL(&uLocal_827, "bark", 1);
			}
			if ((IS_ACTOR_RIDING(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_4 + 952) < 0)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1240[0]) || IS_ACTOR_IN_VOLUME(&iLocal_1390, &bLocal_4 + 1240[0]))
				{
					if (!DECOR_CHECK_EXIST(&uLocal_827, "bark"))
					{
						uLocal_1452 = GET_SOUND_ID();
						PLAY_SOUND_FROM_ACTOR(&bLocal_4 + 896[02], "COYOTE_BARK_MASTER", &Global_54076);
					}
					STREAMING_UNLOAD_BOUNDS();
					Function_140("help_poi_focus", 0x41200000, 1, 0, 2, 1, 0);
					Function_227(&bLocal_4 + 1856[4]);
					Local_1409 = Function_227(&bLocal_4 + 1856[4]);
					uLocal_1450 = CREATE_CAMERA_FOCUS_POINT(&uLocal_827, "camfoc", Local_1409, 50.0f, 60.0f);
					SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1450, 1);
					SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1450, "Intro01_look_coyotes");
					Function_332();
					Function_227(&bLocal_4 + 2192[4]);
					Local_1409 = Function_227(&bLocal_4 + 2192[4]);
					TASK_BIRD_SOAR_AT_COORD(&bLocal_4 + 960[02], &Local_1409, -1.0f, 60.0f);
					Function_227(&bLocal_4 + 2192[5]);
					Local_1409 = Function_227(&bLocal_4 + 2192[5]);
					TASK_BIRD_SOAR_AT_COORD(&bLocal_4 + 960[12], &Local_1409, -1.0f, 60.0f);
					Function_227(&bLocal_4 + 2192[6]);
					Local_1409 = Function_227(&bLocal_4 + 2192[6]);
					TASK_BIRD_SOAR_AT_COORD(&bLocal_4 + 960[22], &Local_1409, -1.0f, 60.0f);
					Function_227(&bLocal_4 + 2192[7]);
					Local_1409 = Function_227(&bLocal_4 + 2192[7]);
					TASK_BIRD_SOAR_AT_COORD(&bLocal_4 + 960[32], &Local_1409, -1.0f, 60.0f);
					iLocal_1862 = 3;
					iLocal_1863 = 16;
				}
			}
			else
			{
				iLocal_1862 = 3;
				iLocal_1863 = 18;
			}
			break;
		
		case 0x00000003:
			if (!DECOR_CHECK_EXIST(&bLocal_4 + 952, "fleeing"))
			{
				if (Function_443(&bLocal_4 + 952, &Global_54076, 20.0f, 1))
				{
					bLocal_1335 = false;
					while (bLocal_1335 < 2)
					{
						if (IS_ACTOR_VALID(&bLocal_4 + 896[bLocal_13352]))
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1240[0]))
							{
								TASK_FLEE_ACTOR(&bLocal_4 + 896[bLocal_13352], &Global_54076, 100.0f, -1.0f, 0, 0, 0);
							}
							else
							{
								TASK_FLEE_ACTOR(&bLocal_4 + 896[bLocal_13352], &iLocal_1390, 100.0f, -1.0f, 0, 0, 0);
							}
							RELEASE_ACTOR(&bLocal_4 + 896[bLocal_13352]);
						}
						bLocal_1335++;
					}
					DECOR_SET_BOOL(&bLocal_4 + 952, "fleeing", 1);
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1240[1]))
				{
					iLocal_1862 = 4;
					iLocal_1863 = 14;
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	switch (iLocal_1863)
	{
		case 0x00000000:
			switch (Function_442())
			{
				case 0x00000000:
					Function_441();
					break;
				
				default:
					Function_441();
					break;
			}
			iLocal_1832 = 0;
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
			{
				ADD_BLIP_FOR_ACTOR(&iLocal_1390, 325, 0, 2, 0);
			}
			iLocal_1863 = 1;
			break;
		
		case 0x00000001:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "horsecontroltut")) < 4.0f)
			{
				iLocal_1842[0] = 1;
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_361("INTRO01_OBJ04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				DECOR_REMOVE(&uLocal_827, "horsecontroltut");
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					ADD_BLIP_FOR_ACTOR(&iLocal_1390, 325, 0, 2, 0);
				}
				iLocal_1863 = 18;
			}
			break;
		
		case 0x00000002:
			if (iLocal_1440 == 0)
			{
				switch (Function_442())
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_offHorse_v1", "Intro01_offHorse_v1", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					case 0x00000001:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_offHorse_v2", "Intro01_offHorse_v2", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					default:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_offHorse_v1", "Intro01_offHorse_v1", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_thrownHorse", "Intro01_thrownHorse", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				iLocal_1440 = 0;
			}
			iLocal_1863 = 3;
			break;
		
		case 0x00000003:
			iLocal_1864[2] = 1;
			if (iLocal_1864[14] == 0)
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
				}
			}
			iLocal_1863 = 18;
			break;
		
		case 0x00000004:
			if (iLocal_1437 == 0)
			{
				switch (Function_442())
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_FarAhead", "Intro01_FarAhead", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					default:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_FarAhead", "Intro01_FarAhead", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					}
			}
			iLocal_1863 = 5;
			break;
		
		case 0x00000005:
			iLocal_1864[4] = 1;
			if (iLocal_1436 == 0)
			{
				Function_252();
				Function_361("GUIDE_RETURN", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			iLocal_1863 = 18;
			break;
		
		case 0x00000006:
			if (iLocal_1437 == 0)
			{
				switch (Function_442())
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_FarBehind", "Intro01_FarBehind", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					default:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_FarBehind", "Intro01_FarBehind", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					}
			}
			iLocal_1863 = 7;
			break;
		
		case 0x00000007:
			iLocal_1864[6] = 1;
			if (iLocal_1436 == 0)
			{
				Function_252();
				Function_361("GUIDE_RETURN", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			iLocal_1863 = 18;
			break;
		
		case 0x00000008:
			switch (Function_442())
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_ComesBack", "Intro01_ComesBack", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					break;
				
				default:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1390, "Intro01_ComesBack", "Intro01_ComesBack", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					break;
			}
			iLocal_1863 = 9;
			break;
		
		case 0x00000009:
			iLocal_1864[8] = 1;
			if (iLocal_1436 == 0)
			{
				if (Function_440(&Global_54076, &iLocal_1390, 60.0f))
				{
					Function_252();
					Function_361("INTRO01_OBJ04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			iLocal_1863 = 10;
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_288(&iLocal_1354) < 5.0f)
			{
				if (!iLocal_1438)
				{
					if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_longbanter_v1_AA"))
					{
						Function_439();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_ride_V1_AA"))
					{
						Function_438();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_ride_V2_AA"))
					{
						Function_437();
					}
					else
					{
						Function_436();
						DECOR_SET_BOOL(&uLocal_827, "playednotalk", 1);
					}
				}
				iLocal_1438 = 1;
				iLocal_1862 = 0;
				iLocal_1863 = 13;
			}
			break;
		
		case 0x0000000D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1864[12] = 1;
				iLocal_1863 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!Function_290(&iLocal_1386))
			{
				Function_384(&iLocal_1386);
			}
			Function_227(&bLocal_4 + 1856[4]);
			Local_1409 = Function_227(&bLocal_4 + 1856[4]);
			if (!Function_319(StackVal, &Global_54076, Local_1409, 100.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_288(&iLocal_1386) < 10.0f)
					{
						if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V5_AA"))
						{
							Function_435();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V1_AA"))
						{
							Function_434();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V2_AA"))
						{
							Function_433();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V3_AA"))
						{
							Function_432();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V4_AA"))
						{
							Function_431();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V6_AA"))
						{
							Function_430();
						}
						else if (!DECOR_CHECK_EXIST(&uLocal_827, "playednotalk"))
						{
							Function_436();
							iLocal_1439 = 1;
							iLocal_1863 = 11;
						}
						else
						{
							iLocal_1439 = 1;
							iLocal_1863 = 11;
						}
					}
				}
				else
				{
					Function_293(&iLocal_1386);
				}
			}
			else
			{
				iLocal_1439 = 1;
				iLocal_1863 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1439 = 0;
				iLocal_1864[10] = 1;
				iLocal_1863 = 18;
			}
			break;
		
		case 0x00000010:
			switch (Function_442())
			{
				case 0x00000000:
					Function_429();
					break;
				
				case 0x00000001:
					Function_428();
					break;
				
				default:
					Function_429();
					break;
			}
			STOP_SOUND(&uLocal_1452);
			iLocal_1863 = 17;
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1864[16] = 1;
				iLocal_1863 = 18;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				switch (Function_442())
				{
					case 0x00000001:
						Function_427();
						break;
					
					default:
						Function_424();
						break;
				}
				iLocal_1437 = 1;
				iLocal_1863 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1864[14] = 1;
				iLocal_1863 = 18;
			}
			break;
		
		case 0x00000012:
			break;
	}
	return;
}

void Function_424() //Position: 0x17766 / 96102
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_near_V1", "Intro01_near_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_425(int iParam0) //Position: 0x177AD / 96173
{
	Function_426(0, &Global_54076, iParam0, 0);
	Function_426(1, &iLocal_1390, iParam0, 0);
	return;
}

void Function_426(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x177C9 / 96201
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_3(uParam2, Function_147(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_427() //Position: 0x177F1 / 96241
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_near_V2", "Intro01_near_V2", 0, 2, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_428() //Position: 0x17838 / 96312
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_deadbody_V1", "Intro01_deadbody_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x17887 / 96391
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_deaddeer_V1", "Intro01_deaddeer_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x178D6 / 96470
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V6_AA", "Intro01_shortbanter_V6_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V6_AB", "Intro01_shortbanter_V6_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V6_AC", "Intro01_shortbanter_V6_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V6_AD", "Intro01_shortbanter_V6_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V6_AE", "Intro01_shortbanter_V6_AE", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x17A35 / 96821
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V4_AA", "Intro01_shortbanter_V4_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V4_AB", "Intro01_shortbanter_V4_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V4_AC", "Intro01_shortbanter_V4_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V4_AD", "Intro01_shortbanter_V4_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x17B53 / 97107
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V3_AA", "Intro01_shortbanter_V3_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V3_AB", "Intro01_shortbanter_V3_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V3_AC", "Intro01_shortbanter_V3_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V3_AD", "Intro01_shortbanter_V3_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x17C71 / 97393
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V2_AA", "Intro01_shortbanter_V2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V2_AB", "Intro01_shortbanter_V2_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V2_AC", "Intro01_shortbanter_V2_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V2_AD", "Intro01_shortbanter_V2_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x17D8F / 97679
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V1_AA", "Intro01_shortbanter_V1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V1_AB", "Intro01_shortbanter_V1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V1_AC", "Intro01_shortbanter_V1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V1_AD", "Intro01_shortbanter_V1_AD", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V1_AE", "Intro01_shortbanter_V1_AE", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_435() //Position: 0x17EEE / 98030
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AA", "Intro01_shortbanter_V5_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V5_AB", "Intro01_shortbanter_V5_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AC1", "Intro01_shortbanter_V5_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AC2", "Intro01_shortbanter_V5_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AD", "Intro01_shortbanter_V5_AD", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V5_AE", "Intro01_shortbanter_V5_AE", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AF", "Intro01_shortbanter_V5_AF", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_436() //Position: 0x180D4 / 98516
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_notalk_V1", "Intro01_notalk_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_437() //Position: 0x1811F / 98591
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V2_AA", "Intro01_ride_V2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V2_AB", "Intro01_ride_V2_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V2_AC", "Intro01_ride_V2_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V2_AD", "Intro01_ride_V2_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V2_AE", "Intro01_ride_V2_AE", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438() //Position: 0x18238 / 98872
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V1_AA", "Intro01_ride_V1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V1_AB", "Intro01_ride_V1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V1_AC", "Intro01_ride_V1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V1_AD", "Intro01_ride_V1_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x1831E / 99102
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AA", "Intro01_longbanter_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AB", "Intro01_longbanter_v1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AC1", "Intro01_longbanter_v1_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AC2", "Intro01_longbanter_v1_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AD", "Intro01_longbanter_v1_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AE1", "Intro01_longbanter_v1_AE1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AE2", "Intro01_longbanter_v1_AE2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AF", "Intro01_longbanter_v1_AF", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AG1", "Intro01_longbanter_v1_AG1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AG2", "Intro01_longbanter_v1_AG2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1200", "", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AH", "Intro01_longbanter_v1_AH", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AI", "Intro01_longbanter_v1_AI", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AJ1", "Intro01_longbanter_v1_AJ1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AJ2", "Intro01_longbanter_v1_AJ2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AJ3", "Intro01_longbanter_v1_AJ3", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_3760", "", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AK", "Intro01_longbanter_v1_AK", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_440(var uParam0, int iParam1, bool bParam2) //Position: 0x18776 / 100214
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &iParam1, bParam2))
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

void Function_441() //Position: 0x1888B / 100491
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_leave", "Intro01_leave", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_442() //Position: 0x188CE / 100558
{
	return Global_53524.f_68;
}

bool Function_443(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x188D9 / 100569
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
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_444(&uVar1, 1) || uParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_444(int iParam0, int iParam1) //Position: 0x1897E / 100734
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

void Function_445() //Position: 0x189D0 / 100816
{
	*(&bLocal_4 + 952) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Coyotes"));
	*(&bLocal_4 + 896[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Coyote01", 1050, Vector(-2578,598f, 60,63029f, 3254,588f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 896[02], &bLocal_4 + 952);
	CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(&bLocal_4 + 896[02]), "Coyote01gringo", "$/content/scripting/gringo/SimpleGringo/coyote_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	TASK_STAND_STILL(&bLocal_4 + 896[02], -1.0f, 0, 0);
	*(&bLocal_4 + 896[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Coyote02", 1052, Vector(-2576,053f, 60,45244f, 3253,12f), Vector(0.0f, 90.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 896[12], &bLocal_4 + 952);
	CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(&bLocal_4 + 896[12]), "Coyote02gringo", "$/content/scripting/gringo/SimpleGringo/coyote_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	TASK_STAND_STILL(&bLocal_4 + 896[12], -1.0f, 0, 0);
	*(&bLocal_4 + 896[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Coyote03", 1051, Vector(-2579,852f, 60,35077f, 3252,134f), Vector(0.0f, -90.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 896[22], &bLocal_4 + 952);
	CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(&bLocal_4 + 896[22]), "Coyote03gringo", "$/content/scripting/gringo/SimpleGringo/coyote_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	TASK_STAND_STILL(&bLocal_4 + 896[22], -1.0f, 0, 0);
	return;
}

void Function_446() //Position: 0x18C10 / 101392
{
	Function_450();
	switch (iLocal_1838)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (Function_448(&bLocal_1342, 36.0f, 200.0f, &iLocal_1390, "", "GUIDE_ABANDONED", &iLocal_1323, 0, 0, 0, 325, 1))
				{
					GET_OBJECT_POSITION(&Global_54076, &Local_1409);
					GET_OBJECT_POSITION(&iLocal_1390, &Local_1412);
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(&bLocal_4 + 2336, &Local_1409, &Local_1412, &fLocal_1406, &fLocal_1407, &uLocal_1408);
					if (fLocal_1406 <= fLocal_1407)
					{
						iLocal_1863 = 4;
					}
					else
					{
						iLocal_1863 = 6;
					}
					if (iLocal_1436 == 1)
					{
						Function_252();
						Function_361("GUIDE_RETURN", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					iLocal_1838 = 1;
				}
				if (iLocal_1864[14] == 1)
				{
					if (!Function_440(&Global_54076, &iLocal_1390, 15.0f))
					{
						if (iLocal_1436 == 0)
						{
							if (GET_TASK_STATUS(&iLocal_1390, 6) == 1)
							{
								Function_252();
								Function_361("INTRO01_STOP_NEXT_TO_JAKE", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iLocal_1436 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1838 = 2;
			}
			break;
		
		case 0x00000001:
			Function_448(&bLocal_1342, 36.0f, 200.0f, &iLocal_1390, "", "GUIDE_ABANDONED", &iLocal_1323, 0, 0, 0, 325, 1);
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (Function_440(&Global_54076, &iLocal_1390, 24.0f))
				{
					if (iLocal_1864[14] == 0)
					{
						if (iLocal_1437 == 0)
						{
							iLocal_1863 = 8;
						}
					}
					else
					{
						iLocal_1436 = 0;
					}
					iLocal_1838 = 0;
				}
			}
			else
			{
				iLocal_1838 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_1437 == 0)
			{
				iLocal_1863 = 2;
			}
			iLocal_1838 = 3;
			break;
		
		case 0x00000003:
			if (!Function_447(&bLocal_1342, 200.0f, &iLocal_1392, "INTRO01_RETURN_TO_HORSE", "INTRO01_ABANDONED_HORSE", &iLocal_1323, 1, 0, 0, 334, 1))
			{
				if (iLocal_1437 == 0)
				{
					if (!iLocal_1438)
					{
						if (iLocal_1864[12] == 0)
						{
							iLocal_1863 = 12;
						}
					}
					if (iLocal_1438)
					{
						if (iLocal_1864[12] == 0)
						{
							iLocal_1863 = 12;
						}
					}
					if (iLocal_1439)
					{
						if (iLocal_1864[10] == 0)
						{
							iLocal_1863 = 10;
							LOG_ERROR("going back to short banter");
						}
					}
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					ADD_BLIP_FOR_ACTOR(&iLocal_1390, 325, 0, 2, 0);
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1392)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1392));
				}
				iLocal_1838 = 0;
			}
			else
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1390));
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1392)))
				{
					ADD_BLIP_FOR_ACTOR(&iLocal_1392, 334, 0, 2, 0);
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

bool Function_447(struct<2> Param0, int iParam2, int iParam3, char* cParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x18F17 / 102167
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_245(&cParam4);
		uParam5 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_357(8))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(&iParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_356(8);
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_355(&uParam7, 0, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_355(&uParam8, 0, 4294967295, 0, &iParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam2, &uParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam2, "MHDR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(8))
	{
		Function_354(8);
		if (!Function_353())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8))) && DECOR_CHECK_EXIST(&iParam2, "MHDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam2));
				DECOR_REMOVE(&iParam2, "MHDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_355(&uParam7, 1, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_355(&uParam8, 1, 4294967295, 0, &iParam2);
			}
		}
	}
	return 0;
}

bool Function_448(struct<2> Param0, bool bParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11) //Position: 0x190A8 / 102568
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_440(&Global_54076, &iParam3, bParam2))
	{
		Function_245(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_440(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_357(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_361(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_356(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_355(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &bParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(2))
	{
		Function_354(2);
		if (!Function_353())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_343(&iParam3);
				Function_449(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_355(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_449(var uParam0) //Position: 0x19266 / 103014
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

void Function_450() //Position: 0x19299 / 103065
{
	if (((IS_ACTOR_RIDING(&iLocal_1390) && IS_ACTOR_RIDING(&Global_54076)) && !DECOR_CHECK_EXIST(&uLocal_827, "horsefollow")) && iLocal_1435)
	{
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_1390, -1.0f, -1.0f, 4, 1, 0);
		DECOR_SET_BOOL(&uLocal_827, "horsefollow", 1);
	}
	if (!Function_290(&iLocal_1346))
	{
		Function_384(&iLocal_1346);
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_ACTOR_HORSE(GET_MOUNT(&Global_54076)))
		{
			switch (iLocal_1832)
			{
				case 0x00000000:
					DECOR_SET_FLOAT(&uLocal_827, "horsecontroltut", GET_CURRENT_GAME_TIME());
					Function_140("Intro01_horse_walk_tut_1", 6.0f, 1, 0, 2, 1, 0);
					Function_293(&iLocal_1346);
					iLocal_1832 = 1;
					break;
				
				case 0x00000001:
					if ((Function_288(&iLocal_1346) < 6.0f && !HUD_IS_SHOWING_OBJECTIVE()) && !DECOR_CHECK_EXIST(&uLocal_827, "horsecontroltut"))
					{
						Function_140("INTRO01_HORSE_RUN_TUT_1", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_1346);
						iLocal_1832 = 5;
					}
					break;
				
				case 0x00000002:
					Function_140("horse_help_matchspeed", 0x41200000, 1, 0, 2, 1, 0);
					Function_293(&iLocal_1346);
					iLocal_1832 = 4;
					break;
				
				case 0x00000004:
					if (Function_288(&iLocal_1346) < 6.0f)
					{
						Function_140("INTRO01_HORSE_RUN_TUT_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_1346);
						iLocal_1832 = 3;
					}
					break;
				
				case 0x00000003:
					if (Function_288(&iLocal_1346) < 6.0f)
					{
						SET_STAMINA_BLINK(7.0f);
						Function_140("INTRO01_HORSE_RUN_TUT_4", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_1346);
						iLocal_1832 = 5;
					}
					break;
				
				case 0x00000005:
					break;
				}
			}
	}
	return;
}

void Function_451() //Position: 0x194A7 / 103591
{
	switch (iLocal_1837)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				TASK_CLEAR(&iLocal_1390);
				CLEAR_ACTOR_MAX_SPEED(&iLocal_1390);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_1390, &bLocal_4 + 2336, 4, 0, 0, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1390, true);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					ADD_BLIP_FOR_ACTOR(&iLocal_1390, 325, 0, 2, 0);
				}
				iLocal_1837 = 1;
			}
			break;
		
		case 0x00000001:
			GET_OBJECT_POSITION(&Global_54076, &Local_1409);
			GET_OBJECT_POSITION(&iLocal_1390, &Local_1412);
			ESTIMATE_TWO_DISTANCES_ALONG_PATH(&bLocal_4 + 2336, &Local_1409, &Local_1412, &fLocal_1406, &fLocal_1407, &uLocal_1408);
			if (!IS_ACTOR_RIDING(&iLocal_1390))
			{
				TASK_MOUNT(&iLocal_1390, &iLocal_1394, 0, 1, 2, 2147483647);
			}
			else if (!GET_TASK_STATUS(&iLocal_1390, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_1390, &bLocal_4 + 2336, 4, 0, 0, 1, false);
			}
			if (iLocal_1435 == 0)
			{
				if (IS_ACTOR_RIDING(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
				{
					if (IS_ACTOR_IN_VOLUME(&iLocal_1390, &bLocal_4 + 1160[0]))
					{
						TASK_CLEAR(&iLocal_1390);
						TASK_STAND_STILL(&iLocal_1390, -1.0f, 0, 0);
						iLocal_1837 = 7;
					}
				}
			}
			if (!Function_440(&Global_54076, &iLocal_1390, 30.0f) && fLocal_1407 < fLocal_1406)
			{
				iLocal_1837 = 2;
			}
			if (Function_452(&iLocal_1390, &bLocal_4 + 2336) > 10.0f)
			{
				iLocal_1837 = 4;
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(&iLocal_1390);
			TASK_STAND_STILL(&iLocal_1390, -1.0f, 0, 0);
			TASK_FACE_ACTOR(&iLocal_1390, &Global_54076, 1, 3212836864);
			iLocal_1837 = 3;
			break;
		
		case 0x00000003:
			if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1390, 24.0f))
			{
				iLocal_1837 = 0;
			}
			break;
		
		case 0x00000004:
			bLocal_1335 = TASK_SEQUENCE_OPEN();
			Function_227(&bLocal_4 + 1576[1]);
			Local_1409 = Function_227(&bLocal_4 + 1576[1]);
			TASK_GO_NEAR_COORD(false, &Local_1409, 2.0f, 2);
			Function_227(&bLocal_4 + 1576[2]);
			Local_1409 = Function_227(&bLocal_4 + 1576[2]);
			TASK_FACE_COORD(0, &Local_1409, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
			TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
			Function_384(&iLocal_1358);
			iLocal_1837 = 5;
			break;
		
		case 0x00000005:
			if (iLocal_1864[14] == 1)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
				{
					if (Function_440(&Global_54076, &iLocal_1390, 15.0f))
					{
						Function_252();
						iLocal_1837 = 7;
						iLocal_1432 = 1;
					}
					else
					{
						if (iLocal_1436 == 0)
						{
							Function_252();
							Function_361("INTRO01_STOP_NEXT_TO_JAKE", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iLocal_1436 = 1;
						}
						iLocal_1837 = 6;
					}
				}
			}
			else if (iLocal_1437 != 1 && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1837 = 6;
			}
			else if (Function_288(&iLocal_1358) < 20.0f)
			{
				Function_252();
				iLocal_1837 = 7;
				iLocal_1432 = 1;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				if (Function_440(&Global_54076, &iLocal_1390, 8.0f))
				{
					Function_252();
					iLocal_1837 = 7;
					iLocal_1432 = 1;
				}
			}
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

float Function_452(var uParam0, float fParam1) //Position: 0x197CA / 104394
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	
	bVar2 = (GET_PATH_NUM_POINTS(&fParam1) - 1);
	GET_PATH_POINT(&fParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_320(&uParam0);
		Var3 = Function_320(&uParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_453() //Position: 0x1985A / 104538
{
	if (iLocal_1142 < 2 && iLocal_1142 > 105)
	{
		bLocal_1335 = false;
		while (bLocal_1335 < 6)
		{
			Function_480(&(Local_1471[bLocal_133512]));
			bLocal_1335++;
		}
	}
	if (iLocal_1142 < 5 && iLocal_1142 > 105)
	{
		Function_364(17, 30, 0, 23, 59, 59);
		Function_473();
		Function_469();
		Function_465();
		if (iLocal_1836 != 0 && iLocal_1835 > 2)
		{
			Function_464(&bLocal_4 + 1368[0]);
			Function_367(StackVal, "$/cutscene/INTRO_01/INTRO_01", &uLocal_1326, Function_464(&bLocal_4 + 1368[0]), 0, 75.0f, 150.0f, 2, 2, 2, 2, 0, 1);
		}
		if (Function_288(&iLocal_1378) < 1.0f)
		{
			bLocal_1335 = false;
			while (bLocal_1335 < 1)
			{
				Function_462(&(vLocal_1457[bLocal_13353]));
				Function_419(&(vLocal_1457[bLocal_13353]));
				bLocal_1335++;
			}
			bLocal_1335 = false;
			while (bLocal_1335 < 6)
			{
				Function_420(&(Local_1642[bLocal_133513]));
				bLocal_1335++;
			}
			if (!IS_ACTOR_ALIVE(&iLocal_1392))
			{
				Function_245("Horse_dead");
				iLocal_1323 = 1;
			}
			Function_461();
			Function_418();
			Function_417();
			Function_416();
			Function_459();
			Function_409();
			Function_293(&iLocal_1378);
		}
	}
	switch (iLocal_1142)
	{
		case 0x00000000:
			Function_313(0);
			SET_ACTOR_HEALTH(&iLocal_1390, GET_ACTOR_MAX_HEALTH(&iLocal_1390));
			GET_VOLUME_CENTER(&bLocal_4 + 1392[3], &Local_1409);
			STREAMING_LOAD_BOUNDS_EXT(0, Local_1409, 75.0f, 1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_239(bLocal_1141);
			Function_230(StackVal, Function_239(bLocal_1141), bLocal_1141, Global_46736[0], Function_238(bLocal_1141), 0);
			Function_293(&iLocal_1354);
			if (HUD_IS_FADED())
			{
				iLocal_1142 = 1;
			}
			else
			{
				iLocal_1142 = 4;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_295(&Local_829) || iLocal_1442)
				{
					Function_333();
					Function_383();
				}
				Function_293(&iLocal_1354);
				Function_384(&iLocal_1382);
				iLocal_1142 = 4;
			}
			break;
		
		case 0x00000004:
			if (!Function_458() && !Function_288(&iLocal_1382) < 4.0f)
			{
				Function_293(&iLocal_1354);
			}
			else if (Function_288(&iLocal_1354) < 1.0f || !HUD_IS_FADED())
			{
				Function_285(1.0f);
				STREAMING_UNLOAD_BOUNDS();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_227(&bLocal_4 + 2272[1]);
				Local_1409 = Function_227(&bLocal_4 + 2272[1]);
				uLocal_1338 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Local_1409, 0,5f, "doorSaloon01x", 1);
				if (IS_PHYSINST_VALID(&uLocal_1338))
				{
				}
				Function_227(&bLocal_4 + 2272[2]);
				Local_1409 = Function_227(&bLocal_4 + 2272[2]);
				uLocal_1340 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Local_1409, 0,5f, "doorSaloon01x", 1);
				if (IS_PHYSINST_VALID(&uLocal_1340))
				{
				}
				Function_457();
				uLocal_1404 = &bLocal_4 + 776[02];
				TASK_STAND_STILL(&uLocal_1404, -1.0f, 0, 0);
				bLocal_1335 = false;
				while (bLocal_1335 < 1)
				{
					vLocal_1457[bLocal_13353].f_20 = 0;
					bLocal_1335++;
				}
				bLocal_1335 = false;
				while (bLocal_1335 < 6)
				{
					Local_1642[bLocal_133513].f_84 = 0;
					bLocal_1335++;
				}
				Function_370();
				Function_456(2);
				Function_454();
				iLocal_1641 = 0;
				iLocal_1826 = 0;
				iLocal_1827 = 0;
				iLocal_1828 = 0;
				iLocal_1829 = 0;
				iLocal_1835 = 0;
				iLocal_1836 = 0;
				iLocal_1142 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_252();
				Function_361("INTRO01_OBJ00", 7,5f, 1, 2, 0, 0, 0, 0);
				iLocal_1831 = 0;
				DECOR_SET_FLOAT(&uLocal_827, "movementtuttime", GET_CURRENT_GAME_TIME());
				iLocal_1142 = 7;
			}
			break;
		
		case 0x00000007:
			if (bLocal_1431)
			{
				iLocal_1142 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1300[0] = 1;
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1394)))
				{
					if (DECOR_CHECK_EXIST(&iLocal_1394, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(&iLocal_1394, "HorseLeash"));
						DECOR_REMOVE(&iLocal_1394, "HorseLeash");
					}
					MAKE_ACTOR_READY_FOR_ACTION(&iLocal_1394, 1);
				}
				TASK_STAND_STILL(&iLocal_1394, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_1392, -1.0f, 0, 0);
				bLocal_1141 = true;
				iLocal_1142 = 0;
			}
			break;
	}
	return;
}

void Function_454() //Position: 0x19C81 / 105601
{
	Function_455(&(Global_11014[182]), &(Global_12796[183]), 1);
	Function_181(&Global_11014, &Global_12796, 18, 1);
	Function_455(&(Global_11014[02]), &(Global_12796[03]), 1);
	Function_181(&Global_11014, &Global_12796, 0, 1);
	Function_455(&(Global_11014[12]), &(Global_12796[13]), 1);
	Function_181(&Global_11014, &Global_12796, 1, 1);
	Function_455(&(Global_11014[32]), &(Global_12796[33]), 1);
	Function_181(&Global_11014, &Global_12796, 3, 1);
	Function_455(&(Global_11014[42]), &(Global_12796[43]), 1);
	Function_181(&Global_11014, &Global_12796, 4, 1);
	Function_455(&(Global_11014[52]), &(Global_12796[53]), 1);
	Function_181(&Global_11014, &Global_12796, 5, 1);
	Function_455(&(Global_11014[132]), &(Global_12796[133]), 1);
	Function_181(&Global_11014, &Global_12796, 13, 1);
	Function_455(&(Global_11014[132]), &(Global_12796[153]), 1);
	Function_181(&Global_11014, &Global_12796, 15, 1);
	Function_455(&(Global_11014[132]), &(Global_12796[63]), 1);
	Function_181(&Global_11014, &Global_12796, 6, 1);
	Function_455(&(Global_11014[132]), &(Global_12796[103]), 1);
	Function_181(&Global_11014, &Global_12796, 10, 1);
	return;
}

void Function_455(int iParam0, int iParam1, int iParam2) //Position: 0x19DA2 / 105890
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&iVar0, Function_183(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&iVar0, &iParam2, 0, false, 0);
	}
	*(&iParam0 + 8) = &iVar0;
	Function_184(&iParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

void Function_456(bool bParam0) //Position: 0x19E02 / 105986
{
	if (iLocal_1445 >= 4294967295)
	{
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(&bLocal_1429), bParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1445, true)), bParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1445, 2)), bParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1445, 3)), bParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1445, 4)), bParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1445, 5)), bParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1445, 6)), bParam0);
	}
	return;
}

void Function_457() //Position: 0x19E75 / 106101
{
	*(&bLocal_4 + 800) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "GringoDrunk"));
	*(&bLocal_4 + 776[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Drunk", 236, Vector(-2157,888f, 19,89145f, 2597,504f), Vector(0.0f, 135.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 776[02], &bLocal_4 + 800);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_4 + 776[02], 1);
	TASK_PRIORITY_SET(&bLocal_4 + 776[02], 2);
	TASK_STAND_STILL(&bLocal_4 + 776[02], -1.0f, 0, 0);
	return;
}

bool Function_458() //Position: 0x19F04 / 106244
{
	bLocal_1335 = false;
	while (bLocal_1335 < 3)
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&(Local_1471[bLocal_133512]))))
		{
			return 0;
		}
		bLocal_1335++;
	}
	return 1;
}

void Function_459() //Position: 0x19F36 / 106294
{
	switch (iLocal_1829)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&uLocal_1404)))
			{
				if (Function_460(&Global_54076, &uLocal_1404) > 10.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1336[0]))
				{
					Function_227(&bLocal_4 + 2160[0]);
					TELEPORT_ACTOR_WITH_HEADING(&uLocal_1404, Function_227(&bLocal_4 + 2160[0]), GET_OBJECT_HEADING(&bLocal_4 + 2160[0]), 1, 1, 1);
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uLocal_1404, &bLocal_4 + 1336[0]);
					RESET_ANIM_SET_FOR_ACTOR(&uLocal_1404, 1);
					SET_ANIM_SET_FOR_ACTOR(&uLocal_1404, "Intro01_drunk_jake_falls", 0);
					SET_ACTION_NODE_FOR_ACTOR(&uLocal_1404, "Intro01_drunk_jake_falls/Falls_down");
					SET_AMBIENT_VOICE_NAME(&uLocal_1404, "GANG_CRAZYMINER_MEDIUM03");
					SAY_SINGLE_LINE_CONTEXT(&uLocal_1404, 20, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_1829 = 1;
				}
			}
			else
			{
				TASK_CLEAR(&uLocal_1404);
				TASK_FLEE_ACTOR(&uLocal_1404, GET_LAST_ATTACKER(&uLocal_1404), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1829 = 3;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&uLocal_1404)))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&uLocal_1404, "fallen"))
				{
					TASK_WANDER_IN_VOLUME(&uLocal_1404, &bLocal_4 + 1336[1], -1f);
					SET_ACTOR_DRUNK(&uLocal_1404, 1);
					iLocal_1829 = 2;
				}
			}
			else
			{
				TASK_CLEAR(&uLocal_1404);
				TASK_FLEE_ACTOR(&uLocal_1404, GET_LAST_ATTACKER(&uLocal_1404), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1829 = 3;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&uLocal_1404)))
			{
				if (((!DECOR_CHECK_EXIST(&uLocal_1404, "drunkcontext") && Function_346(&uLocal_1404, &Global_54076, 15.0f)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&uLocal_1404, "Falls_down")) && !IS_ACTOR_RAGDOLL(&uLocal_1404))
				{
					SAY_SINGLE_LINE_CONTEXT(&uLocal_1404, 20, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0, 1);
					DECOR_SET_BOOL(&uLocal_1404, "drunkcontext", 1);
				}
				if (GET_TASK_STATUS(&uLocal_1404, 57) == 0)
				{
					TASK_WANDER_IN_VOLUME(&uLocal_1404, &bLocal_4 + 1336[1], -1f);
					iLocal_1829 = 3;
				}
			}
			else
			{
				TASK_CLEAR(&uLocal_1404);
				TASK_FLEE_ACTOR(&uLocal_1404, GET_LAST_ATTACKER(&uLocal_1404), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1829 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

float Function_460(float fParam0, bool bParam1) //Position: 0x1A1B0 / 106928
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

void Function_461() //Position: 0x1A2A5 / 107173
{
	var uVar0;
	
	switch (iLocal_1826)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&cLocal_1398, 19) != 1)
			{
				SNAP_ACTOR_TO_GRINGO(&cLocal_1398, &bLocal_4 + 2304, "usecase1", true, 1, 1);
				TASK_USE_GRINGO(&cLocal_1398, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 2304), "usecase1", 4294967295, 1);
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&cLocal_1398, 19) != 1)
			{
				Function_227(&bLocal_4 + 2008[0]);
				Local_1409 = Function_227(&bLocal_4 + 2008[0]);
				uVar0 = LOCATE_GRINGO_OF_TYPE("lie_sleep_on_bed_l", &Local_1409, 1.0f, 1);
				if (IS_GRINGO_VALID(&uVar0))
				{
					TASK_USE_GRINGO(&cLocal_1398, &uVar0, "usecase1", 4294967295, 1);
				}
			}
			else
			{
				iLocal_1826 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&cLocal_1398)))
			{
				if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&cLocal_1398)))
				{
					iLocal_1826 = 1;
				}
			}
			else
			{
				TASK_CLEAR(&cLocal_1398);
				TASK_FLEE_ACTOR(&cLocal_1398, GET_LAST_ATTACKER(&cLocal_1398), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1826 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_462(struct<21> Param0) //Position: 0x1A3C2 / 107458
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	switch (Param0.f_20)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&Param0, 19) != 1)
			{
				Function_224(StackVal, *(&Param0 + 8), 0, 0);
				uVar6 = LOCATE_GRINGO_OF_NAME("horsehitch", &Param0 + 8, 1.0f, 1);
				if (&Param0 == &iLocal_1392)
				{
					if (!IS_GRINGO_VALID(&uLocal_1448))
					{
						GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar6), &Var0);
						GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_GRINGO(&uVar6), &Var4);
						uLocal_1448 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_827, "turnlefthitch", "horseHitchTurnLeft", Var0, Var4));
						GRINGO_ALLOW_ACTIVATION(&uVar6, false);
					}
					uVar6 = &uLocal_1448;
				}
				if (IS_GRINGO_VALID(&uVar6))
				{
					TASK_USE_GRINGO(&Param0, &uVar6, "usecase1", 4294967295, 1);
				}
			}
			else
			{
				Param0.f_20 = 1;
			}
			break;
		
		case 0x00000001:
			if (&Param0 == &iLocal_1392)
			{
				uVar7 = &uLocal_1448;
			}
			else
			{
				uVar7 = LOCATE_GRINGO_OF_NAME("horsehitch", &Param0 + 8, 1.0f, 1);
			}
			if (IS_GRINGO_VALID(&uVar7))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(&uVar7, "usecase1", &Var2);
				Function_312(&Param0);
				if (VDIST(Var2, Function_312(&Param0)) < 1.0f && !IS_ACTOR_VALID(GET_RIDER(&Param0)))
				{
					if (&Param0 == &iLocal_1392 && GET_TASK_STATUS(&iLocal_1390, 11) == 1)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, &Param0, Function_463(Var2, &Param0, *(&Param0 + 8)), 1, 1, 1);
					}
					if (GET_TASK_STATUS(&Param0, 19) != 1)
					{
						if (&Param0 == &iLocal_1392)
						{
							TASK_USE_GRINGO(&Param0, &uLocal_1448, "usecase1", 4294967295, 1);
						}
						else
						{
							TASK_USE_GRINGO(&Param0, &uVar7, "usecase1", 4294967295, 1);
						}
					}
				}
			}
			break;
	}
	return;
}

var Function_463(int iParam0, struct<2> Param1) //Position: 0x1A5A4 / 107940
{
	struct<2> Var0;
	
	Function_312(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_312(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_464(var uParam0) //Position: 0x1A625 / 108069
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_465() //Position: 0x1A637 / 108087
{
	switch (iLocal_1841)
	{
		case 0x00000000:
			Function_468(&iLocal_1366);
			iLocal_1841 = 1;
			break;
		
		case 0x00000001:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_288(&iLocal_1366) < 3.0f)
			{
				iLocal_1842[0] = 1;
				iLocal_1841 = 2;
			}
			break;
		
		case 0x00000002:
			Function_468(&iLocal_1366);
			iLocal_1841 = 3;
			break;
		
		case 0x00000003:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_288(&iLocal_1366) < 3.0f)
			{
				iLocal_1842[2] = 1;
				iLocal_1841 = 8;
			}
			break;
		
		case 0x00000004:
			if (!Function_440(&Global_54076, &iLocal_1390, 22,5f))
			{
				Function_467();
			}
			iLocal_1841 = 5;
			break;
		
		case 0x00000005:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1841 = 8;
			}
			break;
		
		case 0x00000006:
			switch (Function_442())
			{
				case 0x00000000:
					Function_466();
					break;
				
				default:
					Function_466();
					break;
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1392)))
			{
				ADD_BLIP_FOR_ACTOR(&iLocal_1392, 334, 0, 2, 0);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1390));
			}
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1392, 1);
			iLocal_1841 = 7;
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1842[6] = 1;
				Function_252();
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					Function_361("INTRO01_OBJ03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				iLocal_1841 = 8;
			}
			break;
		
		case 0x00000008:
			break;
	}
	return;
}

void Function_466() //Position: 0x1A7A0 / 108448
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_mount", "Intro01_mount", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467() //Position: 0x1A7E3 / 108515
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_wondersOff", "Intro01_wondersOff", 0, 2, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_468(int iParam0) //Position: 0x1A830 / 108592
{
	if (!Function_290(&iParam0))
	{
		Function_384(&iParam0);
	}
	else
	{
		Function_293(&iParam0);
	}
	return;
}

void Function_469() //Position: 0x1A84F / 108623
{
	if (iLocal_1835 != 2)
	{
		Function_471();
	}
	if (bLocal_1431 == 0)
	{
		switch (iLocal_1836)
		{
			case 0x00000000:
				Function_470(&bLocal_1342, &bLocal_4 + 1392[1], &bLocal_4 + 1392[2], "Intro01_obj00_return", "Intro01_obj00_fail", &iLocal_1323, 1, 0, 0, 330, 1);
				break;
			
			case 0x00000001:
				Function_448(&bLocal_1342, 60.0f, 200.0f, &iLocal_1390, "GUIDE_RETURN", "GUIDE_ABANDONED", &iLocal_1323, 1, 0, 0, 325, 1);
				break;
			
			case 0x00000002:
				Function_351(&bLocal_1342, 60.0f, 200.0f, &iLocal_1392, "INTRO01_RETURN_TO_HORSE", "INTRO01_ABANDONED_HORSE", &iLocal_1323, 1, 0, 0, 4294967295, 1, 0);
				break;
			
			case 0x00000003:
				break;
		}
	}
	else
	{
		iLocal_1836 = 3;
	}
	return;
}

int Function_470(struct<2> Param0, var uParam2, var uParam3, char* cParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x1A97A / 108922
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&uParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &uParam2))
	{
		Function_245(&cParam4);
		uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_357(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_356(64);
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_355(&uParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_355(&uParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &uParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(64))
	{
		Function_354(64);
		if (!Function_353())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_355(&uParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_355(&uParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_471() //Position: 0x1AB15 / 109333
{
	if (!Function_290(&iLocal_1346))
	{
		Function_472(&iLocal_1346, 10,5f);
	}
	if (DECOR_CHECK_EXIST(&uLocal_827, "movementtuttime"))
	{
		if (((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "movementtuttime")) < 2.0f && Function_288(&iLocal_1346) < 10,5f) && !Global_99146)
		{
			switch (iLocal_1831)
			{
				case 0x00000000:
					Function_140("help_move_look", 0x41200000, 1, 0, 2, 1, 0);
					Function_293(&iLocal_1346);
					iLocal_1831 = 3;
					break;
				
				case 0x00000003:
					if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						if (UNK_0x968F0317())
						{
							Function_140("intro01_first_tut_2_hold", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_140("intro01_first_tut_2", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					else
					{
						Function_140("intro01_first_tut_2", 0x41200000, 1, 0, 2, 1, 0);
					}
					Function_293(&iLocal_1346);
					iLocal_1831 = 1;
					break;
				
				case 0x00000001:
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1415)))
					{
						SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(&uLocal_1415), 1, 1, 7.0f);
						Function_140("Intro01_Gateway_Help", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_1346);
						iLocal_1831 = 2;
					}
					break;
				
				case 0x00000005:
					break;
				}
			}
	}
	return;
}

void Function_472(int iParam0, float fParam1) //Position: 0x1ACA7 / 109735
{
	if (!Function_290(&iParam0))
	{
		Function_294(&iParam0, fParam1);
	}
	return;
}

void Function_473() //Position: 0x1ACBF / 109759
{
	var uVar0;
	
	if (iLocal_1835 < 2 && Function_346(&Global_54076, &iLocal_1390, 30.0f))
	{
		Function_344();
	}
	switch (iLocal_1835)
	{
		case 0x00000000:
			SNAP_ACTOR_TO_GRINGO(&iLocal_1390, &bLocal_4 + 2304, "jake", true, 1, 1);
			TASK_USE_GRINGO(&iLocal_1390, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 2304), "jake", 4294967295, 1);
			uLocal_1415 = Function_479(&uLocal_827, Function_55(), &bLocal_4 + 1368[0], &Global_54076, 1, 330, 1, 0, 0, 1);
			iLocal_1835 = 1;
			break;
		
		case 0x00000001:
			if (GATEWAY_UPDATE(&uLocal_1415))
			{
				Function_478(&uLocal_1415);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				TRAIN_SET_MAX_ACCEL(iLocal_1445, 3,5f);
				TRAIN_SET_TARGET_SPEED(iLocal_1445, 8,75f);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1445, 1);
				TRAIN_SET_TARGET_POS(iLocal_1445, &iLocal_592 + 552[23]);
				Function_252();
				iLocal_1835 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_281("$/cutscene/intro_01/intro_01", &iLocal_1129, &Local_829, &bLocal_1141, 62483, 62381, 61655, 60766, 60538, 111437, 0, 1, 1, 2, 2, 0, 1))
			{
				if (!GET_TASK_STATUS(&iLocal_1390, 0) != 1)
				{
					bLocal_1335 = TASK_SEQUENCE_OPEN();
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_1390, &bLocal_4 + 1392[5], 1, 1);
					AI_SET_NAV_SUBGRID_CELL_SIZE(&iLocal_1390, 0,5f);
					GET_PATH_POINT(&bLocal_4 + 2344, false, &Local_1409);
					TASK_GO_NEAR_OBJECT(0, &bLocal_4 + 1672[1], 1.0f, 1, 1, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &bLocal_4 + 2344, 1, 0, 0, 1, false);
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
					TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
				}
				Function_343(&iLocal_1390);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					ADD_BLIP_FOR_ACTOR(&iLocal_1390, 325, 0, 2, 0);
				}
				if (IS_ACTOR_VALID(&iLocal_1394) && !IS_ACTOR_IN_VOLUME(&iLocal_1394, &bLocal_4 + 1136[0]))
				{
					Function_227(&bLocal_4 + 1736[0]);
					TELEPORT_ACTOR_WITH_HEADING(&iLocal_1394, Function_227(&bLocal_4 + 1736[0]), 354,25f, 1, 0, 1);
				}
				if (IS_ACTOR_VALID(&iLocal_1392) && !IS_ACTOR_IN_VOLUME(&iLocal_1392, &bLocal_4 + 1136[0]))
				{
					Function_227(&bLocal_4 + 1736[1]);
					TELEPORT_ACTOR_WITH_HEADING(&iLocal_1392, Function_227(&bLocal_4 + 1736[1]), 358,5f, 1, 0, 1);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1841 = 2;
				iLocal_1835 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_1842[2] == 1)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1390)))
				{
					ADD_BLIP_FOR_ACTOR(&iLocal_1390, 325, 0, 2, 0);
				}
				Function_361("INTRO01_OBJ02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1836 = 1;
				iLocal_1835 = 4;
			}
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1392, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1136[0]))
			{
				if (GET_TASK_STATUS(&iLocal_1390, 43) != 0 || GET_TASK_STATUS(&iLocal_1390, 0) != 1)
				{
					SET_ALLOW_RIDE_BY_AI(&iLocal_1394, 1);
					GET_PATH_POINT(&bLocal_4 + 2336, false, &uVar0);
					bLocal_1335 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_MOUNT(false, &iLocal_1394, 0, 1, 1, 2);
					TASK_GO_TO_COORD_NONSTOP(0, &uVar0, 1, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
					TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
					MEMORY_PREFER_RIDING(&iLocal_1390, true);
					iLocal_1836 = 2;
					iLocal_1841 = 6;
					iLocal_1835 = 5;
				}
			}
			else if (iLocal_1842[4] == 0)
			{
				if (GET_TASK_STATUS(&iLocal_1390, 22) == 1)
				{
					iLocal_1842[4] = 1;
					iLocal_1841 = 4;
				}
			}
			else
			{
				iLocal_1442 = 0;
				if (DECOR_CHECK_EXIST(&uLocal_827, "jakewaittime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_827, "jakewaittime")) <= 30.0f)
					{
						iLocal_1442 = 1;
					}
				}
				else
				{
					iLocal_1442 = 1;
				}
				if ((MEMORY_GET_IS_VISIBLE(&iLocal_1390, &Global_54076) && Function_440(&Global_54076, &iLocal_1390, 22,5f)) && iLocal_1442)
				{
					RESET_ANIM_SET_FOR_ACTOR(&iLocal_1390, 1);
					SET_ANIM_SET_FOR_ACTOR(&iLocal_1390, "one_handed_wave", 0);
					bLocal_1335 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_ACTION_PERFORM(false, "one_handed_wave/wave");
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_1390, bLocal_1335);
					TASK_SEQUENCE_RELEASE(bLocal_1335, 1);
					DECOR_SET_FLOAT(&uLocal_827, "jakewaittime", GET_CURRENT_GAME_TIME());
					DECOR_SET_BOOL(&uLocal_827, "jakeshouldwave", 1);
				}
				if ((IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_1390, "wave") && !IS_SCRIPTED_CONVERSATION_ONGOING()) && DECOR_CHECK_EXIST(&uLocal_827, "jakeshouldwave"))
				{
					Function_475();
					DECOR_REMOVE(&uLocal_827, "jakeshouldwave");
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				Function_252();
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1392)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1392));
				}
				iLocal_1830 = 0;
				iLocal_1835 = 7;
				bLocal_1431 = true;
			}
			else if (GET_TASK_STATUS(&iLocal_1390, 6) == 1)
			{
				if (!Function_290(&iLocal_1362))
				{
					Function_384(&iLocal_1362);
				}
				if (Function_288(&iLocal_1362) < 15.0f)
				{
					TASK_FACE_ACTOR(&iLocal_1390, &Global_54076, 0, 3212836864);
					Function_474(&iLocal_1362);
					iLocal_1835 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && GET_RIDER(&iLocal_1392) != &Global_54076)
			{
				Function_252();
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1392)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1392));
				}
				TASK_STAND_STILL(&iLocal_1392, -1.0f, 0, 0);
				iLocal_1830 = 0;
				iLocal_1835 = 7;
				iLocal_1832 = 0;
				bLocal_1431 = true;
			}
			else if (GET_TASK_STATUS(&iLocal_1390, 22) == 0)
			{
				if (MEMORY_GET_IS_VISIBLE(&iLocal_1390, &Global_54076))
				{
					Function_475();
					iLocal_1835 = 5;
				}
			}
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

void Function_474(vector3 vParam0) //Position: 0x1B2EF / 111343
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_475() //Position: 0x1B306 / 111366
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_noHorse", "Intro01_noHorse", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_476() //Position: 0x1B34D / 111437
{
	switch (bLocal_1141)
	{
		case 0x00000000:
			Function_477(&iLocal_1390, &bLocal_4 + 1464[5], 1, 1, 1);
			Function_227(&bLocal_4 + 1464[4]);
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Function_227(&bLocal_4 + 1464[4]), GET_OBJECT_HEADING(&bLocal_4 + 1464[4]), 1, 1, 0);
			return 1;
			break;
	}
	return 1;
}

void Function_477(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1B39C / 111516
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

void Function_478(bool bParam0) //Position: 0x1B4AC / 111788
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
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
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

var Function_479(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x1B542 / 111938
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &uParam6, &uParam7, &uParam8, &uParam9, 1);
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
		DECOR_SET_BOOL(&uVar0, "voldestroy", &uParam8);
	}
	return &uVar0;
}

void Function_480(struct<89> Param0) //Position: 0x1B5D3 / 112083
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (Function_571(Global_46760[0]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_4 + 1392[3]) && !DECOR_CHECK_EXIST(&bLocal_4 + 1392[3], "nsaidhowdy"))
		{
			Function_227(&bLocal_4 + 2272[0]);
			Local_1409 = Function_227(&bLocal_4 + 2272[0]);
			uVar0 = LOCATE_GRINGO_OF_TYPE("counter", &Local_1409, 1.0f, 1);
			if (IS_GRINGO_VALID(&uVar0))
			{
				uVar1 = Function_225(&uVar0, "UseCase1");
				if (IS_OBJECT_VALID(&uVar1))
				{
					uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
					if (IS_ACTOR_VALID(&uVar2))
					{
						SAY_SINGLE_LINE_CONTEXT(&uVar2, 43, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0, 1);
						DECOR_SET_BOOL(&bLocal_4 + 1392[3], "nsaidhowdy", 1);
					}
				}
			}
		}
		if (!DECOR_CHECK_EXIST(&uLocal_827, "disabledstacker"))
		{
			uVar3 = Vector(-2204,577f, 16,58f, 2602,359f);
			uVar5 = LOCATE_GRINGO_OF_TYPE("factory_lumber_stacker", &uVar3, 2.0f, 1);
			if (IS_GRINGO_VALID(&uVar5))
			{
				GRINGO_ALLOW_ACTIVATION(&uVar5, false);
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uVar5));
				DECOR_SET_BOOL(&uLocal_827, "disabledstacker", 1);
			}
		}
		switch (Param0.f_88)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&Param0)))
				{
					if (GET_TASK_STATUS(&Param0, 19) != 1)
					{
						uVar6 = LOCATE_GRINGO_OF_TYPE(&Param0 + 8, &Param0 + 72, 1.0f, 1);
						if (IS_GRINGO_VALID(&uVar6))
						{
							TASK_USE_GRINGO(&Param0, &uVar6, "usecase1", 4294967295, 1);
						}
					}
					else
					{
						Param0.f_88 = 2;
					}
				}
				else
				{
					TASK_CLEAR(&Param0);
					TASK_FLEE_ACTOR(&Param0, GET_LAST_ATTACKER(&Param0), -1.0f, -1.0f, 0, 0, 0);
					Param0.f_88 = 3;
				}
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS(&Param0, 19) != 1)
				{
					uVar7 = LOCATE_GRINGO_OF_TYPE(&Param0 + 8, &Param0 + 72, 10.0f, 1);
					if (IS_GRINGO_VALID(&uVar7))
					{
						if (IS_ACTOR_ANIMAL(&Param0))
						{
							SNAP_ACTOR_TO_GRINGO(&Param0, GET_OBJECT_FROM_GRINGO(&uVar7), "usecase1", true, 1, 1);
							TASK_USE_GRINGO(&Param0, &uVar7, "usecase1", 1, 1);
						}
						else
						{
							SNAP_ACTOR_TO_GRINGO(&Param0, GET_OBJECT_FROM_GRINGO(&uVar7), "usecase1", true, 1, 1);
							TASK_USE_GRINGO(&Param0, &uVar7, "usecase1", 4294967295, 1);
						}
					}
				}
				else
				{
					Param0.f_88 = 2;
				}
				break;
			
			case 0x00000002:
				if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(&Param0)))
				{
					if (GET_TASK_STATUS(&Param0, 19) != 1)
					{
						RELEASE_ACTOR(&Param0);
						Param0.f_88 = 3;
					}
				}
				else
				{
					TASK_CLEAR(&Param0);
					TASK_FLEE_ACTOR(&Param0, GET_LAST_ATTACKER(&Param0), -1.0f, -1.0f, 0, 0, 0);
					Param0.f_88 = 3;
				}
				break;
			
			case 0x00000003:
				break;
			}
	}
	return;
}

void Function_481() //Position: 0x1B8BD / 112829
{
	switch (iLocal_1142)
	{
		case 0x00000006:
			if (!Function_295(&Local_829))
			{
				STREAMING_ENABLE_BOUNDS(0);
				iLocal_1441 = 1;
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 24.0f, 1);
				if (!Global_6606)
				{
					TELEPORT_ACTOR(&Global_54076, &uLocal_1328, 1, 1, 1);
					Global_99147 = 1;
					Function_198(1, 0, 1);
				}
			}
			Function_537(&Local_829, 1);
			_SET_SKY_IS_INTRO_RUNNING(1);
			uLocal_827 = CREATE_LAYOUT("INTRO01_DYNAMICLAYOUT");
			Function_203(0x4000000);
			Function_170(114696);
			Function_395(1);
			Function_165(Global_46760[0]);
			DISABLE_CHILD_SECTOR("arm_trainstation01props02x");
			Function_536();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 12);
			Function_535(20, 0);
			Function_534(1, 0);
			Function_534(3, 0);
			Function_533(0, 0);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 22, 0.0f, 0, 1);
			Function_208(15, 1, 0);
			Function_211(0);
			iLocal_1142 = 7;
			break;
		
		case 0x00000007:
			if (((!Function_295(&Local_829) || bLocal_1325) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/CUTSCENE/INTRO_Sequence_1/INTRO_Sequence_1")) && iLocal_826 != 0)
			{
				if (!UI_ISACTIVE("IntroCredits"))
				{
					UI_ACTIVATE("IntroCredits");
				}
				Function_228(0);
				iLocal_1142 = 8;
			}
			else if (Function_524() && Function_521())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/CUTSCENE/INTRO_Sequence_1/INTRO_Sequence_1"))
				{
					LOG_ERROR("intro_sequence does not exist!!!");
				}
				if (iLocal_1441)
				{
					STREAMING_ENABLE_BOUNDS(1);
					iLocal_1441 = 0;
				}
				Global_99147 = 0;
				Function_518();
				Function_517();
				uLocal_1143 = CREATE_OBJECT_ITERATOR(&bLocal_4);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1331, bLocal_1334, 1, 1, 1);
				STREAMING_RELEASE_MAIN_POI();
				STREAMING_SET_CUTSCENE_MODE(0);
				if (Global_99145)
				{
					iLocal_1142 = 8;
				}
				else
				{
					iLocal_1142 = 9;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_487())
			{
				Function_228(1);
				UI_DEACTIVATE("IntroCredits");
				if (iLocal_1441)
				{
					STREAMING_ENABLE_BOUNDS(1);
					iLocal_1441 = 0;
				}
				if (!iLocal_1442)
				{
					Function_333();
					Function_383();
					iLocal_1142 = 10;
				}
				else
				{
					iLocal_1142 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_524() && Function_521())
			{
				iLocal_1142 = 10;
			}
			break;
		
		case 0x0000000A:
			if (iLocal_1441)
			{
				STREAMING_ENABLE_BOUNDS(1);
				iLocal_1441 = 0;
			}
			if (!IS_LAYOUTREF_VALID(&bLocal_4))
			{
				Function_518();
			}
			if (!IS_LAYOUTREF_VALID(&iLocal_592))
			{
				Function_517();
			}
			bLocal_1141 = iLocal_826;
			iLocal_1142 = 0;
			Function_485(&Local_829, &bLocal_1141, &iLocal_1142);
			Function_484(StackVal, StackVal, StackVal, Function_518(), Function_518(), Local_829);
			switch (bLocal_1141)
			{
				case 0x00000000:
					if (Function_295(&Local_829) || HUD_IS_FADED())
					{
						SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 0, 0));
						Function_482(2, 1);
					}
					break;
				
				case 0x00000001:
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 30, 0));
					Function_482(2, 1);
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					break;
				
				case 0x00000002:
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, 0, 0));
					Function_482(2, 1);
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					break;
				
				case 0x00000065:
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					break;
			}
			break;
	}
	return;
}

void Function_482(int iParam0, int iParam1) //Position: 0x1BC8D / 113805
{
	Function_175(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_483(StackVal, &iParam1);
	}
	return;
}

void Function_483(int iParam0, bool bParam1) //Position: 0x1BCBF / 113855
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_175(iParam0);
	Function_10(&uVar0);
	PRINTNL();
	Function_173(iParam0, &uVar0, &bParam1);
	return;
}

void Function_484(struct<41> Param0) //Position: 0x1BCE8 / 113896
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_1141 = false;
			break;
		
		case 0x00000002:
			bLocal_1141 = true;
			break;
		
		case 0x00000003:
			bLocal_1141 = 2;
			break;
		
		case 0x00000004:
			bLocal_1141 = 101;
			break;
	}
}

void Function_485(int iParam0, var uParam1, var uParam2) //Position: 0x1BD2E / 113966
{
	if (Function_295(&iParam0))
	{
		uParam1 = Function_329(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			uParam2 = 0;
		}
		Function_486();
	}
	return;
}

void Function_486() //Position: 0x1BD6A / 114026
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

bool Function_487() //Position: 0x1BDBB / 114107
{
	Function_297(&iLocal_1129, 1, "Intro01");
	switch (iLocal_1129)
	{
		case 0x000003E8:
			Function_227(&Global_54076);
			Function_367(StackVal, "$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1", &uLocal_1326, Function_227(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
			if ((bLocal_1141 != 99 && (Function_295(&Local_829) || Local_829.f_40 < 1)) && !bLocal_1325)
			{
				iLocal_1129 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				iLocal_1129 = 1106;
				return 0;
			}
			Function_515(&iLocal_1091, "dockWorker_signaling", 5, 0);
			Function_515(&iLocal_1091, "custom/dockWorker_signaling", 8, 0);
			Function_515(&iLocal_1091, "p_gen_craneDockCutscene01x", 0, 0);
			Function_341(&iLocal_1091, 96, 2, 0);
			Function_515(&iLocal_1091, "intro01_crane_worker", 5, 0);
			Function_515(&iLocal_1091, "custom/intro01_crane_worker", 8, 0);
			Function_341(&iLocal_1091, 97, 2, 0);
			Function_341(&iLocal_987, 2, 2, 1);
			Function_341(&iLocal_987, 576, 2, 1);
			Function_341(&iLocal_987, 642, 2, 1);
			Function_341(&iLocal_987, 605, 2, 1);
			Function_341(&iLocal_987, 75, 2, 1);
			Function_341(&iLocal_987, 87, 2, 1);
			Function_341(&iLocal_987, 716, 2, 1);
			Function_341(&iLocal_987, 718, 2, 1);
			Function_341(&iLocal_987, 720, 2, 1);
			Function_341(&iLocal_987, 726, 2, 1);
			Function_341(&iLocal_987, 728, 2, 1);
			Function_341(&iLocal_987, 730, 2, 1);
			Function_515(&iLocal_1037, "p_blk_cityhall_clock01x", 0, 0);
			Function_341(&iLocal_1037, 2, 2, 1);
			Function_341(&iLocal_1037, 637, 2, 1);
			Function_341(&iLocal_1037, 635, 2, 1);
			Function_341(&iLocal_1037, 632, 2, 1);
			Function_341(&iLocal_1037, 649, 2, 1);
			Function_341(&iLocal_1037, 570, 2, 1);
			Function_341(&iLocal_1037, 706, 2, 1);
			Function_341(&iLocal_1037, 708, 2, 1);
			Function_341(&iLocal_1037, 709, 2, 1);
			Function_341(&iLocal_1037, 710, 2, 1);
			Function_341(&iLocal_1037, 714, 2, 1);
			Function_341(&iLocal_1037, 712, 2, 1);
			Function_573(1);
			AUDIO_MUSIC_ONE_SHOT("CUTSCENE_INTRO_SEQUENCE_MUSIC_01", "IDLE", 0.0f, 0.0f, 1, 0);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			SET_RADAR_STREAMING(0);
			STREAMING_SET_CUTSCENE_MODE(1);
			Function_293(&iLocal_1129 + 4);
			iLocal_1129 = 1002;
			break;
		
		case 0x000003EA:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_1129 = 1105;
				return 0;
			}
			Function_227(&Global_54076);
			Function_367(StackVal, "$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1", &uLocal_1326, Function_227(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
			Function_336(&iLocal_1091);
			Function_336(&iLocal_987);
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (AUDIO_MUSIC_IS_PREPARED())
				{
					Function_227(&Global_54076);
					if (StackVal && Function_367(Function_288(&iLocal_1129 + 4) < 2,5f, "$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1", &uLocal_1326, Function_227(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
					{
						Function_309(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
						Global_99147 = 1;
						STREAMING_RELEASE_MAIN_POI();
						*(&iLocal_1129 + 24) = Function_511(&uLocal_827, 0, &Global_54076, 1, 0, 0);
						if (IS_OBJECT_VALID(&iLocal_1129 + 24))
						{
						}
						else
						{
							LOG_ERROR("Marshal01_Outro - Failed to CREATE_INTRO01_CS01_SHIP_CUTSCENE Marshal01_Outro_cutscene");
						}
						CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_1129 + 24, 1);
						DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
						SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1129 + 24, 0);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_ACTIVATE("nCutscenes");
						}
						SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(10, 0, 0));
						Function_482(1, 1);
						HUD_FADE_IN(1.0f, 1065353216);
						AUDIO_MUSIC_PLAY_PREPARED();
						fLocal_1953 = GET_CURRENT_GAME_TIME();
						Function_293(&iLocal_1129 + 4);
						iLocal_1129 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			if (!iLocal_1954)
			{
				iLocal_1954 = 1;
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_drugStore01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_undertaker01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_butcher01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_tailor01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_laundry01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_hardwareStore01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_gunshop01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_feedStore01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_LOW_LOD("blackwater05");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_generalStore01x");
			}
			if (!Function_336(&iLocal_987))
			{
			}
			if (Function_336(&iLocal_1091))
			{
				if (!IS_PHYSINST_VALID(&uLocal_1929))
				{
					uLocal_1929 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(813,31f, 78,466f, 1280,793f), 20.0f, "ncranedock", 1);
				}
				else if (!IS_OBJECT_VALID(&uLocal_1931))
				{
					Function_504();
				}
			}
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_1953) <= 5,5f)
				{
					CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(825,026f, 80,742f, 1287,21f), Vector(2,396f, 75,979f, 0,001f));
					if (IS_OBJECT_VALID(&iLocal_1951))
					{
						UNK_0x6745191B(StackVal, &iLocal_1951, Vector(0.0f, 0.0f, 0.0f));
					}
					else
					{
						LOG_ERROR("Crane smoke emitter couldn't be created!");
					}
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_1922 = 1;
					Function_293(&iLocal_1129 + 4);
					iLocal_1129 = 1005;
				}
			}
			break;
		
		case 0x000003ED:
			if (Function_336(&iLocal_1091))
			{
				if (!IS_PHYSINST_VALID(&uLocal_1929))
				{
					uLocal_1929 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(813,31f, 78,466f, 1280,793f), 20.0f, "ncranedock", 1);
				}
				else if (!IS_OBJECT_VALID(&uLocal_1931))
				{
					Function_504();
				}
			}
			if (!Function_336(&iLocal_987))
			{
			}
			if (iLocal_1922 && CUTSCENE_MANAGER_GET_CURRENT_TIME() < 0,5f)
			{
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1129 + 24, 0);
				DESTROY_OBJECT(&iLocal_1129 + 24);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				iLocal_1922 = 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_293(&iLocal_1129 + 4);
				iLocal_1129 = 1006;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				*(&iLocal_1129 + 24) = Function_498(&uLocal_827, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_1129 + 24))
				{
				}
				else
				{
					LOG_ERROR("Marshal01_Outro - Failed to CREATE_INTRO01_CS01_DOCKS_CUTSCENE Marshal01_Outro_cutscene");
				}
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_1129 + 24, 1);
				DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1129 + 24, 0);
				PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1931, "p_gen_craneDockCutscene01x_swing", 0, 0, 1f, 0);
				fLocal_1953 = GET_CURRENT_GAME_TIME();
				iLocal_1925 = 0;
			}
			break;
		
		case 0x000003EE:
			if (iLocal_1954)
			{
				iLocal_1954 = 0;
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_drugStore01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_undertaker01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_butcher01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_tailor01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_laundry01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_hardwareStore01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_gunshop01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_feedStore01x");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_LOW_LOD("blackwater05");
				STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_generalStore01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_trainstation01x");
				STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("blk_trainstation01Props01x");
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_2/INTRO_Sequence_2"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_1129 = 1105;
				return 0;
			}
			Function_227(&Global_54076);
			Function_367(StackVal, "$/cutscene/INTRO_Sequence_2/INTRO_Sequence_2", &uLocal_1326, Function_227(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			Function_521();
			Function_497();
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_1925)
			{
				UI_PUSH("nCutscenes");
				iLocal_1925 = 1;
			}
			if (!IS_LAYOUTREF_VALID(&iLocal_592))
			{
				if (Function_521())
				{
					Function_517();
				}
			}
			else if (iLocal_1445 == 4294967295)
			{
				if (Function_497())
				{
					Function_496(StackVal, StackVal, *(&iLocal_592 + 552[63]));
				}
			}
			else
			{
				Function_227(&Global_54076);
				if (Function_367(StackVal, "$/cutscene/INTRO_Sequence_2/INTRO_Sequence_2", &uLocal_1326, Function_227(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - fLocal_1953) <= 10.0f)
					{
						CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(659,3299f, 87,63741f, 1277,209f), Vector(-14,076f, 158,827f, 0.0f));
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						iLocal_1922 = 1;
						Function_293(&iLocal_1129 + 4);
						iLocal_1129 = 1007;
					}
				}
			}
			break;
		
		case 0x000003EF:
			if (!Function_336(&iLocal_1037))
			{
			}
			if (iLocal_1922 && CUTSCENE_MANAGER_GET_CURRENT_TIME() < 0,5f)
			{
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1129 + 24, 0);
				DESTROY_OBJECT(&iLocal_1129 + 24);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				iLocal_1922 = 0;
			}
			if (!iLocal_1926 && CUTSCENE_MANAGER_GET_CURRENT_FRAME() < 0)
			{
				UI_ENTER("IntroCredits");
				iLocal_1926 = 1;
			}
			if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 10.0f && IS_OBJECT_VALID(&uLocal_1931))
			{
				DESTROY_ACTOR(&uLocal_1933);
				DESTROY_ACTOR(&uLocal_1935);
				DESTROY_OBJECT(&uLocal_1931);
				SHOW_PHYSINST(&uLocal_1929);
				DESTROY_OBJECT(&iLocal_1951);
				Function_188(&iLocal_1091);
				Function_188(&iLocal_987);
			}
			if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 20.0f)
			{
				if (!IS_OBJECT_VALID(&uLocal_1939))
				{
					uLocal_1939 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(736,905f, 92,989f, 1205,097f), 10.0f, "p_blk_cityhall_clock01x", 1));
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&uLocal_1939);
				}
				else if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_1941))
				{
					uLocal_1941 = CREATE_OBJECT_ANIMATOR(&uLocal_1939, &uLocal_827, Function_55(), Function_55(), Function_55());
					uLocal_1943 = CREATE_OBJECT_ANIMATOR(&uLocal_1939, &uLocal_827, Function_55(), Function_55(), Function_55());
					fLocal_1949 = GET_CURRENT_GAME_TIME();
				}
				else if (IS_OBJECT_ANIMATOR_READY(&uLocal_1941) && IS_OBJECT_ANIMATOR_READY(&uLocal_1943))
				{
					if (!DECOR_CHECK_EXIST(&uLocal_827, "clocksetup"))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_1949) < 1.0f)
						{
							SET_OBJECT_ANIMATOR_BONE_RANGE(&uLocal_1941, 2, 2, 4, 4);
							SET_OBJECT_ANIMATOR_BONE_RANGE(&uLocal_1943, 1, 1, 3, 3);
							SET_OBJECT_ANIMATOR_ANIMATION(&uLocal_1941, "clock_time", 1);
							SET_OBJECT_ANIMATOR_ANIMATION(&uLocal_1943, "clock_time", 1);
							SET_OBJECT_ANIMATOR_RATE(&uLocal_1941, 0.0f);
							SET_OBJECT_ANIMATOR_RATE(&uLocal_1943, 0.0f);
							DECOR_SET_BOOL(&uLocal_827, "clocksetup", 1);
						}
					}
					else
					{
						iLocal_1945 = GET_HOUR(0);
						iLocal_1946 = GET_MINUTE(0);
						fLocal_1947 = (TO_FLOAT(iLocal_1945) / 12.0f);
						fLocal_1948 = (TO_FLOAT(iLocal_1946) / 60.0f);
						SET_OBJECT_ANIMATOR_PHASE(&uLocal_1941, (fLocal_1947 + (fLocal_1948 / 12.0f)));
						SET_OBJECT_ANIMATOR_PHASE(&uLocal_1943, fLocal_1948);
					}
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_293(&iLocal_1129 + 4);
				iLocal_1129 = 1009;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				*(&iLocal_1129 + 24) = Function_490(&uLocal_827, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_1129 + 24))
				{
				}
				else
				{
					LOG_ERROR("Marshal01_Outro - Failed to CREATE_INTRO01_CS01_TRAIN_CUTSCENE Marshal01_Outro_cutscene");
				}
				fLocal_1953 = GET_CURRENT_GAME_TIME();
				DISABLE_CHILD_SECTOR("Blk_swTrainstation_east01x");
				DISABLE_CHILD_SECTOR("Blk_watertower01x");
				DISABLE_CHILD_SECTOR("Blk_hotel01x");
				DISABLE_CHILD_SECTOR("Blk_theatre01x");
				DISABLE_CHILD_SECTOR("Blk_saloon01x");
				DISABLE_CHILD_SECTOR("Blk_cityHall01x");
				DISABLE_CHILD_SECTOR("Blk_policestation01x");
				DISABLE_CHILD_SECTOR("blk_theatre01Props01x");
				DISABLE_CHILD_SECTOR("blk_archeologist01x");
				DISABLE_CHILD_SECTOR("blk_swBlacksmith_south01x");
				DISABLE_CHILD_SECTOR("blk_generalBuilding05x");
				DISABLE_CHILD_SECTOR("blk_inn01x");
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_1129 + 24, 1);
				DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1129 + 24, 0);
				TRAIN_SET_SPEED(iLocal_1445, 1.0f);
				TRAIN_SET_TARGET_SPEED(iLocal_1445, 10.0f);
				TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iLocal_1445, 4294967295, 1);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1445, 0);
				iLocal_1925 = 0;
				if (IS_OBJECT_VALID(&uLocal_1931))
				{
					DESTROY_ACTOR(&uLocal_1933);
					DESTROY_OBJECT(&uLocal_1931);
					SHOW_PHYSINST(&uLocal_1929);
					Function_188(&iLocal_1091);
				}
			}
			break;
		
		case 0x000003F1:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_3/INTRO_Sequence_3"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_1129 = 1105;
				return 0;
			}
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_1925)
			{
				UI_PUSH("nCutscenes");
				iLocal_1925 = 1;
			}
			Function_227(&Global_54076);
			if (Function_318(StackVal, "$/cutscene/INTRO_Sequence_3/INTRO_Sequence_3", &uLocal_1326, Function_227(&Global_54076), 66726, 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_1953) <= 12.0f)
				{
					CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-2209,534f, 18,137f, 2605,5f), Vector(-2,98f, -100,136f, 0.0f));
					CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_1922 = 1;
					iLocal_1927 = 0;
					Function_293(&iLocal_1129 + 4);
					iLocal_1129 = 1010;
				}
			}
			break;
		
		case 0x000003F2:
			if (iLocal_1922 && CUTSCENE_MANAGER_GET_CURRENT_TIME() < 5.0f)
			{
				Function_456(2);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1429);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, true));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 2));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 3));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 4));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 5));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 6));
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1331, bLocal_1334, 1, 1, 0);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1129 + 24, 0);
				DESTROY_OBJECT(&iLocal_1129 + 24);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				iLocal_1922 = 0;
			}
			if (!iLocal_1927)
			{
				Function_489(2, 7, 0, 0, 1);
				iLocal_1927 = 1;
				iLocal_1928 = 0;
				bLocal_1950 = (CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - CUTSCENE_MANAGER_GET_CURRENT_FRAME());
			}
			else if (!iLocal_1928)
			{
				fLocal_1949 = (TO_FLOAT(CUTSCENE_MANAGER_GET_CURRENT_FRAME()) / TO_FLOAT(bLocal_1950));
				bLocal_1945 = false;
				bLocal_1946 = FLOOR((((TO_FLOAT(17) - TO_FLOAT(10)) * 60.0f) * fLocal_1949));
				while (bLocal_1946 >= 60)
				{
					bLocal_1945++;
					bLocal_1946 = (bLocal_1946 - 60);
				}
				bLocal_1945 += 10;
				if (bLocal_1945 <= 0 && bLocal_1946 <= 0)
				{
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(bLocal_1945, bLocal_1946, 0));
				}
			}
			if ((CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - CUTSCENE_MANAGER_GET_CURRENT_FRAME()) <= 900)
			{
				if (Global_99147)
				{
					Global_99147 = 0;
					SET_RADAR_STREAMING(1);
				}
				GET_VOLUME_CENTER(&bLocal_4 + 1392[3], &Local_1409);
				STREAMING_LOAD_BOUNDS_EXT(0, Local_1409, 150.0f, 1);
			}
			else if (!Global_99147)
			{
				Global_99147 = 1;
			}
			if (Function_571(Global_46760[0]))
			{
				if (!IS_LAYOUTREF_VALID(&bLocal_4))
				{
					if (Function_524())
					{
						Global_99147 = 0;
						if (iLocal_1441)
						{
							STREAMING_ENABLE_BOUNDS(1);
							iLocal_1441 = 0;
						}
						Function_518();
						Function_2(1);
						Function_402();
						Function_404();
						if (IS_LAYOUTREF_VALID(&bLocal_4))
						{
							uLocal_1143 = CREATE_OBJECT_ITERATOR(&bLocal_4);
						}
						Local_1409 = *(&iLocal_592 + 552[03]);
						Function_382(StackVal, Function_518(), Local_1409);
					}
				}
				else if (!SQUAD_IS_VALID(&iLocal_592 + 248))
				{
					if (Function_521())
					{
						GET_VOLUME_CENTER(&bLocal_4 + 1392[3], &Local_1409);
						STREAMING_LOAD_BOUNDS_EXT(0, Local_1409, 40.0f, 1);
						if (!DECOR_CHECK_EXIST(&bLocal_4 + 1392[3], "oneframe"))
						{
							DECOR_SET_BOOL(&bLocal_4 + 1392[3], "oneframe", 1);
						}
						else if (STREAMING_ARE_BOUNDS_LOADED(Local_1409, 30.0f))
						{
							if (!IS_LAYOUTREF_VALID(&iLocal_592))
							{
								Function_517();
							}
							Function_405();
							Function_404();
							Function_488(1);
						}
					}
				}
				else if (!Function_290(&iLocal_1374))
				{
					Function_384(&iLocal_1374);
				}
				else if (Function_288(&iLocal_1374) < 1.0f)
				{
					bLocal_1335 = false;
					while (bLocal_1335 < 6)
					{
						Function_480(&(Local_1471[bLocal_133512]));
						bLocal_1335++;
					}
					Function_293(&iLocal_1374);
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!IS_LAYOUTREF_VALID(&bLocal_4))
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(0.0f, 1f, 1);
						LOG_ERROR("Cutscene was missing assets (check TTY)! Skipping...");
					}
					Function_293(&iLocal_1129 + 4);
					iLocal_1129 = 1105;
				}
				else
				{
					Function_293(&iLocal_1129 + 4);
					iLocal_1129 = 1104;
				}
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_403();
				Local_1409 = *(&iLocal_592 + 552[13]);
				Function_382(StackVal, StackVal, Local_1409);
				iLocal_1928 = 1;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				AI_STOP_IGNORING_ACTORS();
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_1129 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_1129 + 32);
				DESTROY_VOLUME(&iLocal_1129 + 32);
				Function_488(0);
				STREAMING_SET_CUTSCENE_MODE(0);
				Function_188(&iLocal_957);
				Function_188(&iLocal_987);
				Function_188(&iLocal_1037);
				Function_188(&iLocal_1091);
				Function_300(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				if (UI_ISACTIVE("nCutscenes"))
				{
					UI_POP("nCutscenes");
				}
				UI_DEACTIVATE("IntroCredits");
				UI_EXIT("IntroCredits");
				if (IS_OBJECT_VALID(&uLocal_1937))
				{
					DESTROY_OBJECT(&uLocal_1937);
				}
				ENABLE_WORLD_SECTOR("hennigansRanch");
				ENABLE_WORLD_SECTOR("ntwinRocks");
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				SET_RADAR_STREAMING(1);
				Global_99147 = 0;
				iLocal_1129 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!iLocal_1923)
			{
				AUDIO_MUSIC_SUSPEND(500);
				UI_DEACTIVATE("IntroCredits");
				UI_EXIT("IntroCredits");
				iLocal_1923 = 1;
			}
			if (!iLocal_1924 && HUD_IS_FADED())
			{
				Function_188(&iLocal_1091);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1331, bLocal_1334, 1, 1, 1);
				if (iLocal_1441)
				{
					STREAMING_ENABLE_BOUNDS(1);
					iLocal_1441 = 0;
				}
				Function_482(2, 1);
				iLocal_1924 = 1;
			}
			if (!HUD_IS_FADING())
			{
				if (IS_OBJECT_VALID(&iLocal_1129 + 24))
				{
					DESTROY_OBJECT(&iLocal_1129 + 24);
					if (DECOR_CHECK_EXIST(&Global_54076, "__CameraReady"))
					{
						DECOR_REMOVE(&Global_54076, "__CameraReady");
					}
				}
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else if (IS_LAYOUTREF_VALID(&bLocal_4))
				{
					Global_99147 = 0;
					iLocal_1129 = 1104;
				}
				else if (Function_524() && Function_521())
				{
					if (!IS_LAYOUTREF_VALID(&iLocal_592))
					{
						Function_517();
					}
					if (!IS_LAYOUTREF_VALID(&bLocal_4))
					{
						Function_518();
					}
					Function_402();
					if (IS_LAYOUTREF_VALID(&bLocal_4))
					{
						uLocal_1143 = CREATE_OBJECT_ITERATOR(&bLocal_4);
					}
					if (iLocal_1441)
					{
						STREAMING_ENABLE_BOUNDS(1);
						iLocal_1441 = 0;
					}
					STREAMING_SET_CUTSCENE_MODE(0);
					Function_2(1);
					iLocal_1442 = 1;
					Function_188(&iLocal_1091);
					CAMERA_RESET(-3.0f);
					Global_99147 = 0;
					iLocal_1129 = 1104;
				}
			}
			break;
		
		case 0x00000452:
			iLocal_1129 = 1105;
			return 0;
			break;
	}
	return 0;
}

void Function_488(bool bParam0) //Position: 0x1D548 / 120136
{
	bLocal_1335 = false;
	while (bLocal_1335 < 5)
	{
		if (IS_ACTOR_VALID(&(Local_1471[bLocal_133512])))
		{
			ACTOR_SET_GRABBED_BY_CUTSCENE(&(Local_1471[bLocal_133512]), bParam0);
		}
		bLocal_1335++;
	}
	return;
}

void Function_489(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1D581 / 120193
{
	int iVar0;
	bool bVar1;
	
	Function_175(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_483(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_173(StackVal, &bVar1, &bParam4);
		}
	}
}

var Function_490(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1D5FB / 120315
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Intro01_CS01_Train", 4, 1);
	}
	Function_491(&uVar0, &uParam2);
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

void Function_491(var uParam0, int iParam1) //Position: 0x1D68A / 120458
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_495(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_494(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_493(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_492(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 8,5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1.0f, 3);
	return;
}

void Function_492(int iParam0) //Position: 0x1D724 / 120612
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,2837f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(655,5104f, 79,75709f, 1327,081f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,19627f, 1,00351f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_493(int iParam0) //Position: 0x1D799 / 120729
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,2837f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(655,9943f, 79,76595f, 1326,426f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,042318f, 0,674965f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_494(int iParam0) //Position: 0x1D80E / 120846
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,16f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(657,5083f, 87,62548f, 1282,128f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,005485f, 2,747144f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_495(int iParam0) //Position: 0x1D87B / 120955
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,16f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(659,7367f, 85,23819f, 1282,028f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,106558f, 2,808608f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_496(int iParam0, var uParam1, bool bParam2) //Position: 0x1D8E8 / 121064
{
	var uVar0;
	
	if (!iLocal_1456)
	{
		uLocal_1454 = CREATE_WORLD_SECTOR(&uLocal_827, "swRailRoad");
		iLocal_1456 = 1;
	}
	else if (IS_WORLD_SECTOR_LOADED(&uLocal_1454))
	{
		if (iLocal_1445 == 4294967295)
		{
			iLocal_1445 = TRAIN_CREATE_NEW_TRAIN(8, "rail__rrtrack_02x", 0);
			TRAIN_SET_MAX_ACCEL(iLocal_1445, 1,25f);
			TRAIN_SET_MAX_DECEL(iLocal_1445, -0,75f);
			TRAIN_SET_TARGET_SPEED(iLocal_1445, 0.0f);
			UNK_0x44986367(&uVar0, bParam2);
			TRAIN_SET_POSITION_DIRECTION_PRECISELY(iLocal_1445, &iParam0, &uVar0, 16);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1166);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1167);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1165);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1156);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1157);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1158);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1445, 1162);
			bLocal_1429 = TRAIN_GET_CAR(iLocal_1445, false);
			if (bLocal_1141 == 99)
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1429);
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, true));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 2));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 3));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 4));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 5));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_1445, 6));
			}
		}
	}
	return;
}

bool Function_497() //Position: 0x1DA07 / 121351
{
	if (Function_336(&iLocal_957))
	{
		return 1;
	}
	return 0;
}

var Function_498(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1DA19 / 121369
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Intro01_CS01_Docks", 4, 1);
	}
	Function_499(&uVar0, &uParam2);
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

void Function_499(var uParam0, int iParam1) //Position: 0x1DAA8 / 121512
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_503(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_502(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_501(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_500(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 7,5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 3, 1.0f, 3);
	return;
}

void Function_500(int iParam0) //Position: 0x1DB42 / 121666
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 39,46078f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(824,9392f, 84,40737f, 1285,706f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,491826f, 1,797878f, -0,004677f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_501(int iParam0) //Position: 0x1DBBB / 121787
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 39,46078f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(826,1029f, 84,97172f, 1285,981f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,554804f, 1,113171f, -0,00485f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_502(int iParam0) //Position: 0x1DC34 / 121908
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,38179f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(811,5414f, 79,89253f, 1285,677f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,312616f, -0,410258f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_503(var uParam0) //Position: 0x1DCA1 / 122017
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 47,38179f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(810,8913f, 79,81506f, 1285,717f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,304031f, -0,328468f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_504() //Position: 0x1DD0E / 122126
{
	var uVar0;
	
	HIDE_PHYSINST(&uLocal_1929);
	Function_227(GET_OBJECT_FROM_PHYSINST(&uLocal_1929));
	uLocal_1931 = CREATE_PROP_IN_LAYOUT(StackVal, &uLocal_827, Function_55(), "p_gen_craneDockCutscene01x", Function_227(GET_OBJECT_FROM_PHYSINST(&uLocal_1929)), Vector(0.0f, -90.0f, 0.0f), 1);
	uLocal_1933 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_827, Function_55(), 96, Vector(804,4845f, 78,21268f, 1286,207f), Vector(0.0f, -90.0f, 0.0f));
	SUSPEND_MOVER(&uLocal_1933);
	SET_OBJECT_POSITION(StackVal, &uLocal_1933, Vector(804,4845f, 78,475f, 1286,207f));
	SET_OBJECT_ORIENTATION(StackVal, &uLocal_1933, Vector(0.0f, -90.0f, 0.0f));
	SET_ANIM_SET_FOR_ACTOR(&uLocal_1933, "dockWorker_signaling", 0);
	SET_ACTION_NODE_FOR_ACTOR(&uLocal_1933, "dockWorker_signaling");
	Function_505(&uLocal_1931);
	uLocal_1935 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_827, Function_55(), 97, Vector(806,4845f, 78,21268f, 1286,207f), Vector(0.0f, 0.0f, 0.0f));
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1931, &uLocal_1935, 0);
	Function_477(&uLocal_1935, GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_1904 + 8), 1, 1, 1);
	uVar0 = ATTACH_OBJECTS_USING_LOCATOR(&uLocal_1935, &uLocal_1931, Function_55(), "attach", 4294967295);
	SET_ATTACHMENT_LOCAL_ROTATION(StackVal, &uVar0, Vector(0.0f, 180.0f, 0.0f));
	SET_ANIM_SET_FOR_ACTOR(&uLocal_1935, "intro01_crane_worker", 0);
	SET_ACTION_NODE_FOR_ACTOR(&uLocal_1935, "intro01_crane_worker/crane_worker");
	iLocal_1951 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_827, Function_55(), "amb_industrial_smoke_01", *(&iLocal_1904 + 16[13]));
	return;
}

int Function_505(var uParam0) //Position: 0x1DEE2 / 122594
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_510(3, 2);
	uVar0 = &uVar0;
	iLocal_1904 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_1904 + 8) = CREATE_OBJECTSET_IN_LAYOUT("CraneSet", &iLocal_1904, 8, 0);
	*(&iLocal_1904 + 16[03]) = Vector(-0,1578306f, 1,614221f, 1,937101f);
	*(&iLocal_1904 + 16[03] + 12) = Vector(0.0f, 132,282f, 0.0f);
	Function_507(&uParam0, &iLocal_1904 + 16[03]);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1904, "Worker", Vector(-0,1578306f, 1,614221f, 1,937101f), Vector(0.0f, 132,282f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_1904 + 8);
	*(&iLocal_1904 + 16[13]) = Vector(-0,002865702f, 4,939071f, -0,003954853f);
	*(&iLocal_1904 + 16[13] + 12) = Vector(0.0f, 132,282f, 0.0f);
	Function_507(&uParam0, &iLocal_1904 + 16[13]);
	iVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1904, "Smoke", Vector(-0,002865702f, 4,939071f, -0,003954853f), Vector(0.0f, 132,282f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar2, &iLocal_1904 + 8);
	Function_506(&iLocal_1904, &uParam0);
	return 1;
}

void Function_506(int iParam0, var uParam1) //Position: 0x1E009 / 122889
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

void Function_507(var uParam0, int iParam1) //Position: 0x1E054 / 122964
{
	Function_508(&uParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_508(var uParam0, bool bParam1, struct<2> Param2) //Position: 0x1E069 / 122985
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_509(&Var0, &Param2))
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

bool Function_509(vector3 vParam0) //Position: 0x1E196 / 123286
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

void Function_510(int iParam0, bool bParam1) //Position: 0x1E20C / 123404
{
	switch (&bParam1)
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

var Function_511(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1E256 / 123478
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Intro01_CS01_Ship", 2, 1);
	}
	Function_512(&uVar0, &uParam2);
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

void Function_512(var uParam0, int iParam1) //Position: 0x1E2E4 / 123620
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_514(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_513(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 6,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1.0f, 2);
	return;
}

void Function_513(int iParam0) //Position: 0x1E351 / 123729
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,30683f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(916,0314f, 82,4565f, 1328,127f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,055416f, 1,00069f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_514(int iParam0) //Position: 0x1E3BE / 123838
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,30683f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(917,5576f, 81,94563f, 1347,476f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,041732f, 0,900774f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_515(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1E42B / 123947
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_516(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_339(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_516(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1E469 / 124009
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_191(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_339(&(Param0[iVar02]), 4);
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

void Function_517() //Position: 0x1E538 / 124216
{
	var uVar0;
	
	Function_510(4, 1);
	uVar0 = &uVar0;
	iLocal_592 = CREATE_LAYOUT("Intro01Pre_layout");
	*(&iLocal_592 + 368) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_592, "RestrictVolumes_set");
	*(&iLocal_592 + 256[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "JakeRestrict", 2,802597E-45f, Vector(-2166,8f, 16,8768f, 2587,21f), Vector(0.0f, 0.0f, 0.0f), Vector(4,930397f, 3,899989f, 3,792048f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[0]);
	*(&iLocal_592 + 256[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "SaloonRestrict", 2,802597E-45f, Vector(-2169,482f, 16,8768f, 2594,096f), Vector(0.0f, 0.0f, 0.0f), Vector(8,95f, 6,05f, 17,7f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[1]);
	*(&iLocal_592 + 256[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "HorseSpotRestrict", 2,802597E-45f, Vector(-2163,072f, 17,68633f, 2608,857f), Vector(0.0f, 0.0f, 0.0f), Vector(13,08077f, 3,400629f, 5,382564f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[2]);
	*(&iLocal_592 + 256[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "FortMercerAmbientRestrict", 2,802597E-45f, Vector(-2669,671f, 68,74281f, 3404,42f), Vector(0.0f, 14,25149f, 0.0f), Vector(400.0f, 100.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[3]);
	*(&iLocal_592 + 256[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict01", 2,802597E-45f, Vector(-2191,38f, 17,68633f, 2607,735f), Vector(0.0f, 0.0f, 0.0f), Vector(11,76965f, 3,400629f, 2,856029f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[4]);
	*(&iLocal_592 + 256[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict02", 2,802597E-45f, Vector(-2199,611f, 17,68633f, 2607,179f), Vector(0.0f, 0.0f, 0.0f), Vector(4,85f, 3,400629f, 10,25f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[5]);
	*(&iLocal_592 + 256[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict03", 2,802597E-45f, Vector(-2206,898f, 20,86679f, 2618,092f), Vector(0.0f, 0.0f, 0.0f), Vector(7,0142f, 3,400629f, 6,308893f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[6]);
	*(&iLocal_592 + 256[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict04", 2,802597E-45f, Vector(-2205,59f, 17,68633f, 2607,437f), Vector(0.0f, 0.0f, 0.0f), Vector(7,1f, 3,400629f, 5,8f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[7]);
	*(&iLocal_592 + 256[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict05", 2,802597E-45f, Vector(-2190,832f, 17,71783f, 2607,471f), Vector(0.0f, 0.0f, 0.0f), Vector(2,391382f, 3,400629f, 11,5f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[8]);
	*(&iLocal_592 + 256[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict06", 2,802597E-45f, Vector(-2198,068f, 17,90025f, 2611,72f), Vector(0.0f, 0.0f, 0.0f), Vector(3,163388f, 3,400629f, 5,144849f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[9]);
	*(&iLocal_592 + 256[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "TrainStationRestrict07", 2,802597E-45f, Vector(-2155,607f, 16,449f, 2621,12f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 3,400629f, 2.0f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[10]);
	*(&iLocal_592 + 256[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "DrunkRestrict", 2,802597E-45f, Vector(-2176,535f, 16,38058f, 2605,471f), Vector(0.0f, 135.0f, 0.0f), Vector(2,21704f, 4,464825f, 2,677096f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[11]);
	*(&iLocal_592 + 256[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_592, "SaloonStepsRestrict", 2,802597E-45f, Vector(-2175,313f, 16,38058f, 2603,93f), Vector(0.0f, 135.0f, 0.0f), Vector(5,3f, 4,464825f, 1,238037f));
	ADD_TO_VOLUME_SET(&iLocal_592 + 368, &iLocal_592 + 256[12]);
	*(&iLocal_592 + 376[03]) = Vector(-2198,075f, 16,951f, 2610,127f);
	*(&iLocal_592 + 376[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_592 + 376[13]) = Vector(-2192,178f, 16,951f, 2608,433f);
	*(&iLocal_592 + 376[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_592 + 376[23]) = Vector(-2208,025f, 19,789f, 2616,235f);
	*(&iLocal_592 + 376[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_592 + 376[33]) = Vector(-2204,946f, 19,652f, 2619,306f);
	*(&iLocal_592 + 376[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_592 + 376[43]) = Vector(-2190,529f, 16,972f, 2603,487f);
	*(&iLocal_592 + 376[43] + 12) = Vector(0.0f, 90.0f, 0.0f);
	*(&iLocal_592 + 376[53]) = Vector(-2187,582f, 17,067f, 2611,432f);
	*(&iLocal_592 + 376[53] + 12) = Vector(0.0f, 270.0f, 0.0f);
	*(&iLocal_592 + 376[63]) = Vector(-2196,893f, 16,573f, 2595,137f);
	*(&iLocal_592 + 376[63] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_592 + 552[03]) = Vector(-2263,896f, 15,84019f, 2817,863f);
	*(&iLocal_592 + 552[03] + 12) = Vector(0.0f, 113,7974f, 0.0f);
	*(&iLocal_592 + 552[13]) = Vector(-2213,25f, 16,33f, 2634,993f);
	*(&iLocal_592 + 552[13] + 12) = Vector(0.0f, 180,6443f, 0.0f);
	*(&iLocal_592 + 552[23]) = Vector(-2213,25f, 16,33f, 2695,965f);
	*(&iLocal_592 + 552[23] + 12) = Vector(0.0f, 180.0f, 0.0f);
	*(&iLocal_592 + 552[33]) = Vector(-2213,25f, 16,33f, 2708,261f);
	*(&iLocal_592 + 552[33] + 12) = Vector(0.0f, 180.0f, 0.0f);
	*(&iLocal_592 + 552[43]) = Vector(-3700,739f, 9,199f, 3494,81f);
	*(&iLocal_592 + 552[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_592 + 552[53]) = Vector(-2213,25f, 16,33f, 2678,059f);
	*(&iLocal_592 + 552[53] + 12) = Vector(0.0f, 180.0f, 0.0f);
	*(&iLocal_592 + 552[63]) = Vector(651,8801f, 77,95693f, 1318,641f);
	*(&iLocal_592 + 552[63] + 12) = Vector(0.0f, 186,4897f, 0.0f);
	*(&iLocal_592 + 552[73]) = Vector(651,8801f, 77,95693f, 1319,3f);
	*(&iLocal_592 + 552[73] + 12) = Vector(0.0f, 186,4897f, 0.0f);
	return;
}

vector3 Function_518() //Position: 0x1ED17 / 126231
{
	var uVar0;
	
	Function_510(4, 1);
	uVar0 = &uVar0;
	bLocal_4 = CREATE_LAYOUT("Intro01_layout");
	*(&bLocal_4 + 1152) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "HorseSpotVolume_set");
	*(&bLocal_4 + 1136[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "nHorseSpot", 2,802597E-45f, Vector(-2161,441f, 16,36596f, 2609,225f), Vector(0.0f, 90,49566f, 0.0f), Vector(8,556637f, 6,447287f, 16,02413f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1152, &bLocal_4 + 1136[0]);
	*(&bLocal_4 + 1200) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "TrainStopVolumes_set");
	*(&bLocal_4 + 1160[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "JakeTrainStop", 2,802597E-45f, Vector(-2201,793f, 18,57967f, 2661,567f), Vector(0.0f, 146,778f, 0.0f), Vector(19,75f, 14,16018f, 2,228138f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1200, &bLocal_4 + 1160[0]);
	*(&bLocal_4 + 1160[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "PlayerStop01", 2,802597E-45f, Vector(-2203,847f, 15,66608f, 2661,894f), Vector(0.0f, 146,778f, 0.0f), Vector(19,75f, 14,16018f, 14,33333f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1200, &bLocal_4 + 1160[1]);
	*(&bLocal_4 + 1160[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "PlayerStop02", 2,802597E-45f, Vector(-2205,439f, 18,604f, 2667,014f), Vector(0.0f, 146,7781f, 0.0f), Vector(10.0f, 14,16018f, 9,387523f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1200, &bLocal_4 + 1160[2]);
	*(&bLocal_4 + 1160[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "PlayerStop03", 2,802597E-45f, Vector(-2208,054f, 18,604f, 2679,766f), Vector(0.0f, 146,788f, 0.0f), Vector(0,42f, 14,16018f, 14,8f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1200, &bLocal_4 + 1160[3]);
	*(&bLocal_4 + 1232) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "WaitForJakeVolumes_set");
	*(&bLocal_4 + 1208[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "WaitForJake01", 2,802597E-45f, Vector(-2223,487f, 18,60445f, 2688,345f), Vector(0.0f, 131,8192f, 0.0f), Vector(9,682468f, 14,16018f, 15,66878f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1232, &bLocal_4 + 1208[0]);
	*(&bLocal_4 + 1208[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "WaitForJake02", 2,802597E-45f, Vector(-2217,629f, 18,53156f, 2676,888f), Vector(0.0f, 131,819f, 0.0f), Vector(0,42f, 14,16018f, 8,4f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1232, &bLocal_4 + 1208[1]);
	*(&bLocal_4 + 1280) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "ConversationVolumes_set");
	*(&bLocal_4 + 1240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "Coyote", 2,802597E-45f, Vector(-2598,479f, 59,89162f, 3243,048f), Vector(0.0f, -29,21338f, 0.0f), Vector(5.0f, 27,72563f, 86,03275f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1280, &bLocal_4 + 1240[0]);
	*(&bLocal_4 + 1240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "JakeOnHill", 2,802597E-45f, Vector(-2568,517f, 62,14413f, 3273,919f), Vector(0.0f, 11,11793f, 0.0f), Vector(24,34595f, 23,91672f, 34,17891f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1280, &bLocal_4 + 1240[1]);
	*(&bLocal_4 + 1240[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "ShortBanter02", 2,802597E-45f, Vector(-2743,597f, 23,48523f, 3113,356f), Vector(0.0f, -66,23711f, 0.0f), Vector(44,11405f, 23,21768f, 5.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1280, &bLocal_4 + 1240[2]);
	*(&bLocal_4 + 1240[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "ShortBanter01", 2,802597E-45f, Vector(-2476,728f, 19,92163f, 3104,504f), Vector(0.0f, -66,23711f, 0.0f), Vector(44,11405f, 23,21768f, 5.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1280, &bLocal_4 + 1240[3]);
	*(&bLocal_4 + 1328) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "CutsceneVols_set");
	*(&bLocal_4 + 1288[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "CutsceneVolLast", 2,802597E-45f, Vector(-2620.0f, 71,60936f, 3382,943f), Vector(0.0f, -36,12581f, 0.0f), Vector(41,55433f, 14,44347f, 45,19946f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1328, &bLocal_4 + 1288[0]);
	*(&bLocal_4 + 1288[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "CutsceneVolLastTrigger", 2,802597E-45f, Vector(-2645,154f, 69,71942f, 3414,846f), Vector(0.0f, -50,00912f, 0.0f), Vector(20,44689f, 16,77609f, 15,56556f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1328, &bLocal_4 + 1288[1]);
	*(&bLocal_4 + 1288[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "CutsceneVolLastTriggerFast", 2,802597E-45f, Vector(-2638,996f, 69,71942f, 3409,516f), Vector(0.0f, -50,00912f, 0.0f), Vector(20,44689f, 14,44347f, 31,23452f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1328, &bLocal_4 + 1288[2]);
	*(&bLocal_4 + 1288[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "CutsceneVolLastHideHorse", 2,802597E-45f, Vector(-2645,991f, 67,26273f, 3415,07f), Vector(0.0f, -50,00912f, 0.0f), Vector(20,44689f, 14,44347f, 15,14331f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1328, &bLocal_4 + 1288[3]);
	*(&bLocal_4 + 1360) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "DrunkTriggerVols_set");
	*(&bLocal_4 + 1336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "DrunkTrigger", 2,802597E-45f, Vector(-2176,45f, 16,38194f, 2606,884f), Vector(0.0f, 0.0f, 0.0f), Vector(27,25332f, 11,68009f, 23,84996f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1360, &bLocal_4 + 1336[0]);
	*(&bLocal_4 + 1336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "DrunkWander", 2,802597E-45f, Vector(-2182,243f, 16,38194f, 2606,884f), Vector(0.0f, 0.0f, 0.0f), Vector(13,66703f, 11,68009f, 16,70909f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1360, &bLocal_4 + 1336[1]);
	*(&bLocal_4 + 1384) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "SaloonDoorway_set");
	*(&bLocal_4 + 1368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "Front", 2,802597E-45f, Vector(-2172,831f, 17,78759f, 2602,064f), Vector(0.0f, 45.0f, 0.0f), Vector(3,93354f, 3,825849f, 2,520841f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1384, &bLocal_4 + 1368[0]);
	*(&bLocal_4 + 1448) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "MiscVols_set");
	*(&bLocal_4 + 1392[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "BehindTheBarVol", 2,802597E-45f, Vector(-2163,156f, 17,79894f, 2596,748f), Vector(0.0f, 0.0f, 0.0f), Vector(3,252607f, 3,955355f, 12,45832f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1448, &bLocal_4 + 1392[0]);
	*(&bLocal_4 + 1392[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "WarnBarVol", 2,802597E-45f, Vector(-2182,884f, 16,30968f, 2607,419f), Vector(0.0f, 0.0f, 0.0f), Vector(69,72227f, 23,57924f, 60,54882f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1448, &bLocal_4 + 1392[1]);
	*(&bLocal_4 + 1392[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "FailBarVol", 2,802597E-45f, Vector(-2181,182f, 16,30968f, 2607,419f), Vector(0.0f, 0.0f, 0.0f), Vector(139,5159f, 45,67779f, 117,2954f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1448, &bLocal_4 + 1392[2]);
	*(&bLocal_4 + 1392[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "TrainHowdyVol", 2,802597E-45f, Vector(-2193,342f, 18,28693f, 2607,193f), Vector(0.0f, 0.0f, 0.0f), Vector(3,113077f, 3,174761f, 11,55778f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1448, &bLocal_4 + 1392[3]);
	*(&bLocal_4 + 1392[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "BarVol", 2,802597E-45f, Vector(-2165,902f, 16,56468f, 2593,829f), Vector(0.0f, -90,35257f, 0.0f), Vector(17,84109f, 6,196088f, 16,79249f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1448, &bLocal_4 + 1392[4]);
	*(&bLocal_4 + 1392[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "nJakeAvoid", 2,802597E-45f, Vector(-2165,405f, 17,795f, 2602,898f), Vector(0.0f, -90,35257f, 0.0f), Vector(2,274983f, 3,24213f, 2,497485f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 1448, &bLocal_4 + 1392[5]);
	*(&bLocal_4 + 1456) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1464[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart01", Vector(-2208.0f, 16,5f, 2607,17f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[0], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStartMiniCut01", Vector(-2172,214f, 16,89265f, 2601,401f), Vector(0.0f, 315.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[1], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerGoToMiniCut01", Vector(-2170,698f, 16,87441f, 2599,808f), Vector(0.0f, 315.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[2], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStartMiniCut02", Vector(-2166,514f, 16,98164f, 2590,69f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[3], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerEnd01", Vector(-2168,982f, 16,56472f, 2596,703f), Vector(0.0f, -210,7744f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[4], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionEnd01", Vector(-2169,528f, 16,78111f, 2598,747f), Vector(-1,033538f, -224,6039f, -0,2710724f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[5], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerFacePos01", Vector(-2197,25f, 16,9986f, 2607,523f), Vector(0.0f, -222,7606f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[6], &bLocal_4 + 1456);
	*(&bLocal_4 + 1464[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "WhoreEnd01", Vector(-2166,01f, 16,88f, 2596,82f), Vector(0.0f, 371,45f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1464[7], &bLocal_4 + 1456);
	*(&bLocal_4 + 1536) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1544[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart02", Vector(-2160f, 16,22081f, 2610,73f), Vector(0.0f, -258,3431f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1544[0], &bLocal_4 + 1536);
	*(&bLocal_4 + 1544[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart02", Vector(-2165,369f, 16,21359f, 2610,584f), Vector(0.0f, 100.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1544[1], &bLocal_4 + 1536);
	*(&bLocal_4 + 1568) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1576[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart03", Vector(-2611,966f, 71,22f, 3360,083f), Vector(0.0f, 139,4734f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1576[0], &bLocal_4 + 1568);
	*(&bLocal_4 + 1576[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart03", Vector(-2610,28f, 71,29f, 3361,24f), Vector(0.0f, 139,701f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1576[1], &bLocal_4 + 1568);
	*(&bLocal_4 + 1576[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "FortMercerGateway", Vector(-2639,019f, 67,2146f, 3407,012f), Vector(0.0f, 124,2737f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1576[2], &bLocal_4 + 1568);
	*(&bLocal_4 + 1576[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionEnd03", Vector(-2601,644f, 71,77907f, 3357,897f), Vector(-1,928587f, 320,2861f, 1,758398f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1576[3], &bLocal_4 + 1568);
	*(&bLocal_4 + 1576[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart03Left", Vector(-2608,669f, 71,35213f, 3362,751f), Vector(0.0f, 149,0257f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1576[4], &bLocal_4 + 1568);
	*(&bLocal_4 + 1624) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1632[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerGoToLast", Vector(-2644,732f, 67,254f, 3411,034f), Vector(0.0f, 136,5f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1632[0], &bLocal_4 + 1624);
	*(&bLocal_4 + 1632[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStartLast", Vector(-2648,605f, 67,25536f, 3416,891f), Vector(0.0f, 136,5f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1632[1], &bLocal_4 + 1624);
	*(&bLocal_4 + 1632[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseGotoLast", Vector(-2656.0f, 67,26274f, 3397,599f), Vector(0.0f, 41,22108f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1632[2], &bLocal_4 + 1624);
	*(&bLocal_4 + 1664) = CREATE_OBJECTSET_IN_LAYOUT("JakeGoToSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1672[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nJakeStart", Vector(-2166,388f, 16,89768f, 2588,769f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1672[0], &bLocal_4 + 1664);
	*(&bLocal_4 + 1672[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakeLeaveSaloon", Vector(-2173,79f, 16,89265f, 2602,745f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1672[1], &bLocal_4 + 1664);
	*(&bLocal_4 + 1672[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakeGoToHorses", Vector(-2163,777f, 16,214f, 2608,544f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1672[2], &bLocal_4 + 1664);
	*(&bLocal_4 + 1704) = CREATE_OBJECTSET_IN_LAYOUT("WhoreGoToSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "WhoreWalkAway", Vector(-2156,845f, 16,877f, 2589,68f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1712[0], &bLocal_4 + 1704);
	*(&bLocal_4 + 1728) = CREATE_OBJECTSET_IN_LAYOUT("HorseRespotSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1736[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HorseRespot01", Vector(-2162,2f, 16,368f, 2608,313f), Vector(0.0f, 354,25f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1736[0], &bLocal_4 + 1728);
	*(&bLocal_4 + 1736[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HorseRespot02", Vector(-2159,768f, 16,35543f, 2608,174f), Vector(0.0f, 24,46354f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1736[1], &bLocal_4 + 1728);
	*(&bLocal_4 + 1736[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HitchingPost", Vector(-2161,084f, 16,32751f, 2606,363f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1736[2], &bLocal_4 + 1728);
	*(&bLocal_4 + 1736[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Hitch01", Vector(-2162,05f, 17,11981f, 2606,2f), Vector(0.0f, -1,516f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1736[3], &bLocal_4 + 1728);
	*(&bLocal_4 + 1736[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Hitch02", Vector(-2160,255f, 17,11981f, 2606,2f), Vector(0.0f, -1,516f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1736[4], &bLocal_4 + 1728);
	*(&bLocal_4 + 1784) = CREATE_OBJECTSET_IN_LAYOUT("JakeReturnPathSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1792[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Path01", Vector(-2591,871f, 72,02518f, 3342,656f), Vector(0.0f, 168,399f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1792[0], &bLocal_4 + 1784);
	*(&bLocal_4 + 1792[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Path02", Vector(-2731,621f, 50,99201f, 3229,624f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1792[1], &bLocal_4 + 1784);
	*(&bLocal_4 + 1792[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Path03", Vector(-2749,767f, 26,62626f, 3106,26f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1792[2], &bLocal_4 + 1784);
	*(&bLocal_4 + 1824) = CREATE_OBJECTSET_IN_LAYOUT("FortMercerSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1832[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "FortMercerCrates", Vector(-2653,55f, 67,25705f, 3408,5f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1832[0], &bLocal_4 + 1824);
	*(&bLocal_4 + 1848) = CREATE_OBJECTSET_IN_LAYOUT("CoyoteFlagsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1856[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CoyoteEating03", Vector(-2578,369f, 60,39521f, 3252,177f), Vector(0.0f, 234,295f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1856[0], &bLocal_4 + 1848);
	*(&bLocal_4 + 1856[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CoyoteEating02", Vector(-2578,001f, 60,38816f, 3252,334f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1856[1], &bLocal_4 + 1848);
	*(&bLocal_4 + 1856[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CoyoteEating01", Vector(-2578,345f, 60,403f, 3252,864f), Vector(0.0f, -36,963f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1856[2], &bLocal_4 + 1848);
	*(&bLocal_4 + 1856[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DeadObj", Vector(-2578,32f, 60,3936f, 3252,916f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1856[3], &bLocal_4 + 1848);
	*(&bLocal_4 + 1856[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nBloodPool", Vector(-2578,433f, 60,42074f, 3252,238f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1856[4], &bLocal_4 + 1848);
	*(&bLocal_4 + 1904) = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsPianoSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1912[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Piano", Vector(-2170,367f, 16,877f, 2589,145f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1912[0], &bLocal_4 + 1904);
	*(&bLocal_4 + 1928) = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsDrinkersSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1936[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair01", Vector(-2168,029f, 16,95497f, 2593,55f), Vector(0.0f, 250.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[0], &bLocal_4 + 1928);
	*(&bLocal_4 + 1936[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair02", Vector(-2167,368f, 16,9353f, 2592,859f), Vector(0.0f, 65.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[1], &bLocal_4 + 1928);
	*(&bLocal_4 + 1936[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair03", Vector(-2172,095f, 16,8792f, 2595,644f), Vector(0.0f, 40.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[2], &bLocal_4 + 1928);
	*(&bLocal_4 + 1936[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair04", Vector(-2165,326f, 16,877f, 2598,138f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[3], &bLocal_4 + 1928);
	*(&bLocal_4 + 1936[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair05", Vector(-2165,326f, 16,877f, 2596,007f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[4], &bLocal_4 + 1928);
	*(&bLocal_4 + 1936[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair06", Vector(-2166,66f, 16,877f, 2600,631f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[5], &bLocal_4 + 1928);
	*(&bLocal_4 + 1936[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Chair07", Vector(-2168,328f, 16,877f, 2600,731f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1936[6], &bLocal_4 + 1928);
	*(&bLocal_4 + 2000) = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsJakesWhoreSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2008[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Bed", Vector(-2156,453f, 16,893f, 2590,499f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2008[0], &bLocal_4 + 2000);
	*(&bLocal_4 + 2024) = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsStairsWhoreSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2032[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Banister", Vector(-2171,945f, 17,76849f, 2588,207f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2032[0], &bLocal_4 + 2024);
	*(&bLocal_4 + 2048) = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsOnThePhoneSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Phone", Vector(-2173,401f, 18,036f, 2598,594f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2056[0], &bLocal_4 + 2048);
	*(&bLocal_4 + 2072) = CREATE_OBJECTSET_IN_LAYOUT("DebugSkipsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2080[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakeFortMercer", Vector(-2709,759f, 53,24397f, 3251,42f), Vector(0.0f, 290,7965f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2080[0], &bLocal_4 + 2072);
	*(&bLocal_4 + 2080[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerFortMercer", Vector(-2717,637f, 52,61207f, 3248,181f), Vector(0.0f, 300.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2080[1], &bLocal_4 + 2072);
	*(&bLocal_4 + 2104) = CREATE_OBJECTSET_IN_LAYOUT("BehindTheBarFlagsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2112[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Cooking", Vector(-2161,636f, 16,875f, 2601,622f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2112[0], &bLocal_4 + 2104);
	*(&bLocal_4 + 2112[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "BrowseTable", Vector(-2162,418f, 16,875f, 2599,709f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2112[1], &bLocal_4 + 2104);
	*(&bLocal_4 + 2112[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "UseShelf", Vector(-2162,571f, 16,88017f, 2596,271f), Vector(0.0f, -89,02268f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2112[2], &bLocal_4 + 2104);
	*(&bLocal_4 + 2112[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "StandBartend", Vector(-2163,639f, 16,875f, 2595,229f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2112[3], &bLocal_4 + 2104);
	*(&bLocal_4 + 2152) = CREATE_OBJECTSET_IN_LAYOUT("DrunkFlagsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2160[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "TeleportDrunk", Vector(-2171,131f, 16,85605f, 2599,614f), Vector(0.0f, 136,1084f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2160[0], &bLocal_4 + 2152);
	*(&bLocal_4 + 2160[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "TeleportDrunkCS", Vector(-2173,948f, 16,89265f, 2603,088f), Vector(0.0f, 128,6331f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2160[1], &bLocal_4 + 2152);
	*(&bLocal_4 + 2184) = CREATE_OBJECTSET_IN_LAYOUT("CrowFlagsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2192[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowLand01", Vector(-2647,647f, 75,50234f, 3419,166f), Vector(0.0f, -52,15945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[0], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowLand02", Vector(-2648,627f, 76,46051f, 3417,97f), Vector(0.0f, 82,95956f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[1], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowLand03", Vector(-2650,297f, 76,41579f, 3415,985f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[2], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowLand04", Vector(-2649,669f, 76,49114f, 3416,726f), Vector(0.0f, -82,33784f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[3], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowSoar01", Vector(-2653,268f, 83,27417f, 3423,819f), Vector(0.0f, -82,33784f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[4], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowSoar02", Vector(-2649,057f, 81,94878f, 3417,406f), Vector(0.0f, -82,33784f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[5], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowSoar03", Vector(-2655,75f, 81,05624f, 3411,925f), Vector(0.0f, -82,33784f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[6], &bLocal_4 + 2184);
	*(&bLocal_4 + 2192[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CrowSoar04", Vector(-2655,102f, 83,48977f, 3418,762f), Vector(0.0f, -82,33784f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2192[7], &bLocal_4 + 2184);
	*(&bLocal_4 + 2264) = CREATE_OBJECTSET_IN_LAYOUT("MiscFlagsSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 2272[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "TendCounterLocate", Vector(-2193,059f, 18,02892f, 2601,667f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2272[0], &bLocal_4 + 2264);
	*(&bLocal_4 + 2272[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "SaloonDoorLocate01", Vector(-2172,16f, 16,87441f, 2600,29f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2272[1], &bLocal_4 + 2264);
	*(&bLocal_4 + 2272[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "SaloonDoorLocate02", Vector(-2170,931f, 16,87441f, 2601,335f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 2272[2], &bLocal_4 + 2264);
	*(&bLocal_4 + 2304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "JakeFlirting", "jake_flirting", Vector(-2167,2f, 16,8744f, 2588,364f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&bLocal_4 + 2304), 0);
	*(&bLocal_4 + 2312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "OnStairs", "mex_flirt_stand_link", Vector(-2172,811f, 17,78f, 2585,968f), Vector(0.0f, 180.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&bLocal_4 + 2312), 0);
	*(&bLocal_4 + 2320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "DogSleeping", "dog_sleeping", Vector(-2201,296f, 16,9f, 2605,847f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 2328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nIntro01_v", "nIntro01_v", Vector(-2612,64f, 71,91824f, 3385,733f), Vector(0.0f, 73,73223f, 0.0f));
}

vector3 E)Ò>ÅÒAfÚ¬E*N4ÅAd§E*ÏÅ·AfP°E+\4ÅXºAdèçE,1ØÅºÿAdèäE,ø ÅÜ.AdèãE-½ÅâAdèùE.Åâ>AdèùE/?ÌÅâBAãÑE0yÂÅäSAwE1Åì(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x20D63 / 134499
{
	int iVar130;
	
	Unknown_Function();
	return StackVal, StackVal, (StackVal - (StackVal * 28860 * 12757)) * 13116;
	Unknown_Function();
	return;
	(((StackVal - (StackVal * (StackVal * StackVal) - 4543 * 13499)) * 23776 * 13815))->f_65 = StackVal;
	Unknown_Function();
	straddi("SoA`×E7‚³Å©GA^[óE7°rÅ†FA\\ààE7ì@Å„KA\\ààE8#ÅI·A\\ààE8gŽÅÌA\\ààE8™Å`1A\\ààE8ü¥Å¼ŒA\\ààE9P«Åò,A]P°E9¶…ÅHŽAxÏáE;{ÝÅ’AŠÀE=9¨ÅðäAŒÒE>„Å†ëAŽåsE?ÉÅú$A.E@‘ëÅ|1A–³ EA%fÅ,QAš‚EA«×ÅÎHA", &uParam45, 181);
}

var ¿Å ØuBMEOW~Å!vBSEPN¯Å"BãBWÈEQ9\Å#ÍBAEQüÇ,ã:B	 °:¯oJakePathToHitchingPost   p   `ÅÊÀA(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, int iParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166) //Position: 0x21186 / 135558
{
	float fVar17530;
	
	PatchTrap8();
	Unknown_Function();
	itos(4294935522, Stack.Peek(), 69);
	Unknown_Function();
	return 6 != 4294935375 * 8964;
	Unknown_Function();
	return StackVal, StackVal, -Vector(StackVal, StackVal, -IntToFloat(-StackVal < Vector(StackVal, StackVal, StackVal) - Vector(4294936029, Vector(StackVal, StackVal, -1159897128), StackVal) * 8880 < 4294935664 * 8902)) >= 4294935443 * 8944;
	*(&bLocal_4 + 2344) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, -(StackVal && (StackVal - &fVar17530)), (iParam42 * (4294934987 + &Global_17699)));
	return;
}

bool Function_521() //Position: 0x21252 / 135762
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_523(0))
		{
			iVar0 = 0;
		}
		if (!Function_522())
		{
			iVar0 = 0;
		}
		if (!Function_336(&iLocal_947))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool Function_522() //Position: 0x21286 / 135814
{
	Function_341(&iLocal_592 + 8, 87, 2, 0);
	Function_341(&iLocal_592 + 8, 79, 2, 0);
	Function_341(&iLocal_592 + 8, 195, 2, 0);
	Function_341(&iLocal_592 + 8, 308, 2, 0);
	Function_341(&iLocal_592 + 8, 705, 2, 0);
	Function_341(&iLocal_592 + 8, 714, 2, 0);
	Function_341(&iLocal_592 + 8, 95, 2, 0);
	if (Function_336(&iLocal_592 + 8))
	{
		return 1;
	}
	return 0;
}

bool Function_523(bool bParam0) //Position: 0x212F8 / 135928
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

bool Function_524() //Position: 0x21328 / 135976
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_532())
		{
			iVar0 = 0;
		}
		if (!Function_336(&iLocal_841))
		{
			iVar0 = 0;
		}
		else if (iLocal_1445 == 4294967295)
		{
			Function_496(StackVal, StackVal, *(&iLocal_592 + 552[13]));
			iVar0 = 0;
		}
		else if (!IS_OBJECT_VALID(&bLocal_1429))
		{
			iVar0 = 0;
		}
		if (!Global_6606)
		{
			if (!iLocal_1443)
			{
				if (!IS_ACTOR_VALID(&iLocal_1392))
				{
					iLocal_1392 = Function_525(1, 1, 0, 0, 0, 0, 1, 0);
					iVar0 = 0;
					iLocal_1443 = 0;
				}
				else
				{
					DESTROY_ACTOR(&iLocal_1392);
					iLocal_1443 = 1;
				}
			}
		}
	}
	return iVar0;
}

int Function_525(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x213C7 / 136135
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
		Function_531(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_530())
		{
			return "";
		}
	}
	if (!Function_528())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_206();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_227(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_227(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_227(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_227(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_527(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_527(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_75(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_526(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_526(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x21724 / 136996
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

var Function_527(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2176E / 137070
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

bool Function_528() //Position: 0x2180E / 137230
{
	if (Function_529() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_529() //Position: 0x21824 / 137252
{
	return Global_21369.f_244;
}

bool Function_530() //Position: 0x2182F / 137263
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_531(var uParam0, bool bParam1, bool bParam2) //Position: 0x2184F / 137295
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

bool Function_532() //Position: 0x2187E / 137342
{
	Function_341(&bLocal_4 + 8, 600, 2, 0);
	Function_341(&bLocal_4 + 8, 976, 2, 0);
	Function_341(&bLocal_4 + 8, 981, 2, 0);
	Function_341(&bLocal_4 + 8, 697, 2, 0);
	Function_341(&bLocal_4 + 8, 180, 2, 0);
	Function_341(&bLocal_4 + 8, 235, 2, 0);
	Function_341(&bLocal_4 + 8, 206, 2, 0);
	Function_341(&bLocal_4 + 8, 36, 2, 0);
	Function_341(&bLocal_4 + 8, 311, 2, 0);
	Function_341(&bLocal_4 + 8, 204, 2, 0);
	Function_341(&bLocal_4 + 8, 34, 2, 0);
	Function_341(&bLocal_4 + 8, 140, 2, 0);
	Function_341(&bLocal_4 + 8, 65, 2, 0);
	Function_341(&bLocal_4 + 8, 60, 2, 0);
	Function_341(&bLocal_4 + 8, 236, 2, 0);
	Function_341(&bLocal_4 + 8, 201, 2, 0);
	Function_341(&bLocal_4 + 8, Global_12796[23], 2, 0);
	Function_341(&bLocal_4 + 8, Global_12796[83], 2, 0);
	Function_515(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/jake_flirting", 1, 0);
	Function_515(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_515(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_515(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/intro01_v", 1, 0);
	if (Function_336(&bLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

void Function_533(var uParam0, bool bParam1) //Position: 0x21A81 / 137857
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	uVar1 = GET_PLAYER_ACTOR(&uParam0);
	if (IS_ACTOR_VALID(&uVar1))
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			DELETE_WEAPON_FROM_ACTOR(&uVar1, GET_WEAPON_EQUIPPED(&uVar1, iVar0));
			iVar0++;
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

void Function_534(int iParam0, bool bParam1) //Position: 0x21B88 / 138120
{
	switch (iParam0)
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

int Function_535(bool bParam0, bool bParam1) //Position: 0x21D0E / 138510
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_209(bParam0), Function_51()) >= 0)
		{
			DELETE_ITEM(Function_209(bParam0), Function_51(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_209(bParam0), Function_51(), 1);
	return 1;
}

void Function_536() //Position: 0x21D56 / 138582
{
	Function_515(&iLocal_841, "jake_flirting", 5, 0);
	Function_515(&iLocal_841, "custom/jake_flirting", 8, 0);
	Function_515(&iLocal_841, "one_handed_wave", 5, 0);
	Function_515(&iLocal_841, "custom/one_handed_wave", 8, 0);
	Function_515(&iLocal_841, "Intro01_drunk_jake_falls", 5, 0);
	Function_515(&iLocal_841, "custom/Intro01_drunk_jake_falls", 8, 0);
	Function_515(&iLocal_841, "dead_ground_deer", 5, 0);
	Function_515(&iLocal_841, "intro01", 10, 0);
	Function_515(&iLocal_841, "$/content/scripting/gringo/simplegringo/coyote_eating", 1, 0);
	Function_515(&iLocal_841, "$/content/scripting/gringo/simplegringo/horseHitchTurnLeft", 1, 0);
	Function_341(&iLocal_841, 1118, 2, 0);
	Function_341(&iLocal_841, 1166, 2, 1);
	Function_341(&iLocal_841, 1167, 2, 1);
	Function_341(&iLocal_841, 1156, 2, 1);
	Function_341(&iLocal_841, 1165, 2, 1);
	Function_341(&iLocal_841, 1157, 2, 1);
	Function_341(&iLocal_841, 1158, 2, 1);
	Function_341(&iLocal_841, 1162, 2, 1);
	Function_341(&iLocal_947, 12, 2, 0);
	Function_341(&iLocal_957, 1166, 2, 1);
	Function_341(&iLocal_957, 1167, 2, 1);
	Function_341(&iLocal_957, 1156, 2, 1);
	Function_341(&iLocal_957, 1165, 2, 1);
	Function_341(&iLocal_957, 1157, 2, 1);
	Function_341(&iLocal_957, 1158, 2, 1);
	Function_341(&iLocal_957, 1162, 2, 1);
	return;
}

void Function_537(int iParam0, bool bParam1) //Position: 0x21F9A / 139162
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_543(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_295(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_98();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_16(iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_25(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_295(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_220();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_252();
	Function_284();
	Function_245("");
	Function_542(0);
	Function_541();
	Function_213();
	Function_212();
	ENABLE_JOURNAL_REPLAY(0);
	Function_540();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_525(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_314(0, 0x40400000);
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
	Function_539(13);
	Function_539(14);
	Function_539(25);
	Function_539(24);
	Function_539(12);
	Function_539(27);
	Function_539(26);
	Function_539(15);
	Function_538();
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
	Var1 = { StackVal, StackVal, StackVal, Function_14(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_538() //Position: 0x223DA / 140250
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

void Function_539(int iParam0) //Position: 0x2245F / 140383
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_540() //Position: 0x2247F / 140415
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

void Function_541() //Position: 0x224C5 / 140485
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_542(int iParam0) //Position: 0x224DB / 140507
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_216())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_543(int iParam0, int iParam1) //Position: 0x22514 / 140564
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
			Function_544(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_544(struct<113> Param0) //Position: 0x2259B / 140699
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

void Function_545() //Position: 0x225F9 / 140793
{
	return;
}

bool Function_546(struct<25> Param0) //Position: 0x225FF / 140799
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
			Function_547(&Param0, 1);
			return 1;
		}
	}
	Function_547(&Param0, 0);
	return 0;
}

void Function_547(struct<25> Param0) //Position: 0x2268B / 140939
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

bool Function_548(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x226B6 / 140982
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
		Function_547(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_567(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_566(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_566(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_552(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_3(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_547(&Param2, 0);
														return 0;
													}
													if (Function_3(bVar17, 2))
													{
														Function_551(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_550(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_3(bVar17, 4))
													{
														Function_551(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_549(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_245(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_550(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_547(&Param2, 0);
	return 0;
}

void Function_549(char* cParam0) //Position: 0x22ACC / 142028
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

void Function_550(struct<25> Param0) //Position: 0x22BC0 / 142272
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

void Function_551(bool bParam0) //Position: 0x22C38 / 142392
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_39(&iVar0, 1);
	Function_39(&iVar0, 2);
	Function_39(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_552(struct<57> Param0) //Position: 0x22C5C / 142428
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
			return Function_563(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_556(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_563(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_553(&Param0, bVar2);
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
						bVar2 = Function_563(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_553(&Param0, bVar2);
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

var Function_553(int iParam0, bool bParam1) //Position: 0x22DCD / 142797
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_3(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_555(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_554(16);
			}
		}
	}
	else if (Function_3(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_555(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_554(256);
			}
		}
	}
	return bParam1;
}

bool Function_554(int iParam0) //Position: 0x22F09 / 143113
{
	return 2 | iParam0;
}

int Function_555(int iParam0) //Position: 0x22F13 / 143123
{
	return 4 | iParam0;
}

int Function_556(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x22F1D / 143133
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
				iParam3 = Function_562(&iParam0, &iParam1, bParam4);
				if (Function_3(iParam3, 4))
				{
					Function_78(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_554(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_557(&iParam0, &iParam1, 0, bParam4);
				if (Function_3(iParam3, 4))
				{
					Function_78(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_554(16);
		}
	}
	return 0;
}

int Function_557(int iParam0, vector3 vParam1) //Position: 0x22FD8 / 143320
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_561(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_560(iVar0, 3, 1, bParam3))
			{
				if (!Function_566(&iParam0, 8, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_560(iVar0, 2, 1, bParam3))
			{
				if (!Function_566(&iParam0, 32, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_560(iVar0, 1, 1, bParam3))
			{
				if (!Function_566(&iParam0, 64, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_560(iVar0, 3, 1, bParam3))
			{
				if (!Function_566(&iParam0, 128, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_560(iVar0, 1, 1, bParam3))
			{
				if (!Function_566(&iParam0, 1024, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_560(iVar0, 1, 1, bParam3))
			{
				if (!Function_566(&iParam0, 1024, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_558(int iParam0, int iParam1, bool bParam2) //Position: 0x231A0 / 143776
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_559(int iParam0, int iParam1, bool bParam2) //Position: 0x231B5 / 143797
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_560(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x231CA / 143818
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_561(int iParam0) //Position: 0x231E7 / 143847
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

int Function_562(var uParam0, vector3 vParam1) //Position: 0x2325A / 143962
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_561(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_560(iVar0, 3, 1, bParam2))
			{
				if (!Function_566(&uParam0, 8, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000009:
			if (Function_560(iVar0, 3, 1, bParam2))
			{
				if (!Function_566(&uParam0, 8, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x0000006E:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(&uParam0, 16, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x0000005B:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(&uParam0, 32, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000031:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&uParam0, 64, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000007:
			if (Function_560(iVar0, 3, 1, bParam2))
			{
				if (!Function_566(&uParam0, 128, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000008:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(&uParam0, 256, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000014:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&uParam0, 512, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000018:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&uParam0, 512, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000057:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&uParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000058:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&uParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_563(struct<65> Param0) //Position: 0x23483 / 144515
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
						return Function_562(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_566(&Param0, 2, 1))
					{
						return Function_555(8);
					}
					return Function_554(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_566(&Param0, 4, 1))
					{
						return Function_555(16);
					}
					return Function_554(16);
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
							return Function_557(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_566(&Param0, 2, 1))
						{
							return Function_555(128);
						}
						return Function_554(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_566(&Param0, 4, 1))
						{
							return Function_555(256);
						}
						return Function_554(256);
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
						return Function_557(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_566(&Param0, 2, 1))
					{
						return Function_555(8);
					}
					return Function_554(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_566(&Param0, 4, 1))
					{
						return Function_555(16);
					}
					return Function_554(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_565(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_566(&Param0, 2, 1))
					{
						return Function_555(8);
					}
					return Function_554(8);
				}
				if (!Function_566(&Param0, 4, 1))
				{
					return Function_555(16);
				}
				return Function_554(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_557(&Param0, &uParam1, 1, bParam5);
							if (Function_3(iParam4, 4))
							{
								Function_78(&iParam4, 2);
								Function_39(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_564(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_554(128);
							}
							if (!Function_566(&Param0, 2, 1))
							{
								return Function_555(8);
							}
							return Function_554(8);
						}
						if (iParam4 == 2)
						{
							if (Function_564(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_554(256);
							}
							if (!Function_566(&Param0, 4, 1))
							{
								return Function_555(16);
							}
							return Function_554(16);
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

bool Function_564(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x23769 / 145257
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

int Function_565(int iParam0, vector3 vParam1) //Position: 0x23837 / 145463
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_561(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(&iParam0, 16, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x0000005B:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(&iParam0, 32, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000057:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&iParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000058:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(&iParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_566(struct<69> Param0) //Position: 0x23959 / 145753
{
	if (bParam2)
	{
		if (!Function_3(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_3(Param0.f_68, bParam1);
}

int Function_567(int iParam0) //Position: 0x23983 / 145795
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

void Function_568() //Position: 0x239B9 / 145849
{
	*(&bLocal_4 + 888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "TrainEngiGroup"));
	*(&bLocal_4 + 864[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "nTrainEngi", 201, Vector(-2165,607f, 16,90563f, 2588,965f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 864[02], &bLocal_4 + 888);
	SET_ACTOR_FACTION(&bLocal_4 + 864[02], 20);
	TASK_STAND_STILL(&bLocal_4 + 864[02], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_4 + 864[02], 2);
	return;
}

bool Function_569(int iParam0) //Position: 0x23A50 / 146000
{
	var uVar0;
	
	Function_510(3, 2);
	uVar0 = &uVar0;
	Function_515(&iLocal_780 + 8, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_336(&iLocal_780 + 8))
	{
		return 0;
	}
	iLocal_780 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_780 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_780, "TrainCarSteamer_pop", 2,802597E-45f, Vector(0.0f, 2,07893f, 4,06201f), Vector(0.0f, 0.0f, 0.0f), Vector(1,751237f, 1,956251f, 2,196033f));
	*(&iLocal_780 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_780, "v_collision", 2,802597E-45f, Vector(0.0f, 0,7040083f, -4,30831f), Vector(0.0f, 0.0f, 0.0f), Vector(2,061226f, 1.0f, 1,432657f));
	*(&iLocal_780 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_780, "v_body", 4,203895E-45f, Vector(0.0f, 2,058589f, -0,6215568f), Vector(90.0f, 0.0f, 0.0f), Vector(0,8470065f, 3,11252f, 0,8470065f));
	*(&iLocal_780 + 56) = Vector(0.0f, 2,809686f, -0,540985f);
	*(&iLocal_780 + 56 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_507(&iParam0, &iLocal_780 + 56);
	*(&iLocal_780 + 80) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_780, "f_explodeCenter", Vector(0.0f, 2,809686f, -0,540985f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_780 + 88) = Vector(0,9049232f, 3,265046f, -2,436195f);
	*(&iLocal_780 + 88 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_507(&iParam0, &iLocal_780 + 88);
	*(&iLocal_780 + 112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_780, "f_frontcamerapos", Vector(0,9049232f, 3,265046f, -2,436195f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_780 + 120) = Vector(0.0f, 0,323201f, -9,766208f);
	*(&iLocal_780 + 120 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_507(&iParam0, &iLocal_780 + 120);
	*(&iLocal_780 + 144) = Vector(-1,593886f, 3,654323f, -0,705147f);
	*(&iLocal_780 + 144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_507(&iParam0, &iLocal_780 + 144);
	*(&iLocal_780 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_780, "f_frontcamerapos1", Vector(-1,593886f, 3,654323f, -0,705147f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_780 + 176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_780, "train_engineer", "train_engineer", Vector(-0,374f, 1,143f, 3,992f), Vector(0.0f, 0.0f, 0.0f));
	Function_506(&iLocal_780, &iParam0);
	return 1;
}

void Function_570() //Position: 0x23D09 / 146697
{
	var uVar0;
	var uVar1;
	
	if (!Function_290(&uLocal_1370))
	{
		Function_384(&uLocal_1370);
	}
	if (Function_288(&uLocal_1370) < 1.0f)
	{
		if (bLocal_1141 != 0 && iLocal_1835 > 2)
		{
			uVar0 = Function_408(Global_46760[0], "narmadillo", "saloon01", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (!DECOR_CHECK_EXIST(&uVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(&uVar0))
					{
						CLOSE_DOOR_FAST(&uVar0);
					}
					if (!IS_DOOR_LOCKED(&uVar0))
					{
						Function_128(&uVar0, 1);
						DECOR_SET_BOOL(&uVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(&uVar0))
				{
					DECOR_REMOVE(&uVar0, "intro01locked");
				}
			}
			uVar0 = Function_408(Global_46760[0], "narmadillo", "saloon01", 3);
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (!DECOR_CHECK_EXIST(&uVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(&uVar0))
					{
						CLOSE_DOOR_FAST(&uVar0);
					}
					if (!IS_DOOR_LOCKED(&uVar0))
					{
						Function_128(&uVar0, 1);
						DECOR_SET_BOOL(&uVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(&uVar0))
				{
					DECOR_REMOVE(&uVar0, "intro01locked");
				}
			}
			uVar0 = Function_408(Global_46760[0], "narmadillo", "saloon01", 4);
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (!DECOR_CHECK_EXIST(&uVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(&uVar0))
					{
						CLOSE_DOOR_FAST(&uVar0);
					}
					if (!IS_DOOR_LOCKED(&uVar0))
					{
						Function_128(&uVar0, 1);
						DECOR_SET_BOOL(&uVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(&uVar0))
				{
					DECOR_REMOVE(&uVar0, "intro01locked");
				}
			}
			uVar0 = Function_408(Global_46760[0], "narmadillo", "saloon01", 5);
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (!DECOR_CHECK_EXIST(&uVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(&uVar0))
					{
						CLOSE_DOOR_FAST(&uVar0);
					}
					if (!IS_DOOR_LOCKED(&uVar0))
					{
						Function_128(&uVar0, 1);
						DECOR_SET_BOOL(&uVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(&uVar0))
				{
					DECOR_REMOVE(&uVar0, "intro01locked");
				}
			}
		}
		else if (IS_ACTOR_VALID(&iLocal_1390))
		{
			if (!IS_ACTOR_IN_VOLUME(&iLocal_1390, &bLocal_4 + 1392[4]))
			{
				uVar1 = Function_408(Global_46760[0], "narmadillo", "saloon01", 1);
				if (IS_OBJECT_VALID(&uVar1))
				{
					if (DECOR_CHECK_EXIST(&uVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(&uVar1))
						{
							Function_162(&uVar1, 0);
						}
						DECOR_REMOVE(&uVar1, "intro01locked");
					}
				}
				uVar1 = Function_408(Global_46760[0], "narmadillo", "saloon01", 3);
				if (IS_OBJECT_VALID(&uVar1))
				{
					if (DECOR_CHECK_EXIST(&uVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(&uVar1))
						{
							Function_162(&uVar1, 0);
						}
						DECOR_REMOVE(&uVar1, "intro01locked");
					}
				}
				uVar1 = Function_408(Global_46760[0], "narmadillo", "saloon01", 4);
				if (IS_OBJECT_VALID(&uVar1))
				{
					if (DECOR_CHECK_EXIST(&uVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(&uVar1))
						{
							Function_162(&uVar1, 0);
						}
						DECOR_REMOVE(&uVar1, "intro01locked");
					}
				}
				uVar1 = Function_408(Global_46760[0], "narmadillo", "saloon01", 5);
				if (IS_OBJECT_VALID(&uVar1))
				{
					if (DECOR_CHECK_EXIST(&uVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(&uVar1))
						{
							Function_162(&uVar1, 0);
						}
						DECOR_REMOVE(&uVar1, "intro01locked");
					}
				}
			}
		}
	}
	return;
}

bool Function_571(bool bParam0) //Position: 0x241A3 / 147875
{
	if (!Function_86(bParam0))
	{
		return 1;
	}
	return Function_167(&(Global_43791[bParam0]), 4);
}

void Function_572(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x241BF / 147903
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_573(int iParam0) //Position: 0x241EC / 147948
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

