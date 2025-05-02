//Decompiled with MagicRDR v1.0
//Function Count : 624
//Statics Count : 1584
//Natives Count : 782
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 12;
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
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
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
	var uLocal_84 = 8;
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
	var uLocal_118 = 9;
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
	var uLocal_156 = 9;
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
	var uLocal_194 = 9;
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
	var uLocal_232 = 2;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 5;
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
	var uLocal_266 = 1;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 5;
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
	var uLocal_302 = 6;
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
	var uLocal_330 = 1;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 7;
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
	var uLocal_354 = 13;
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
	var uLocal_384 = 8;
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
	var uLocal_404 = 4;
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
	var uLocal_426 = 2;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 5;
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
	var uLocal_454 = 16;
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
	var uLocal_490 = 8;
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
	var uLocal_510 = 13;
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
	var uLocal_540 = 31;
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
	var uLocal_606 = 28;
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
	var uLocal_660 = 0;
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
	var uLocal_674 = 0;
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
	var uLocal_698 = 22;
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
	int iLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	struct<6> Local_819 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	int iLocal_831 = 8;
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
	int iLocal_865 = 0;
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
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 4;
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
	int iLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	bool bLocal_925 = false;
	var uLocal_926 = 0;
	bool bLocal_927 = false;
	var uLocal_928 = 0;
	bool bLocal_929 = false;
	var uLocal_930 = 0;
	int iLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	int iLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	int iLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	int iLocal_943[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_965 = false;
	bool bLocal_966 = false;
	bool bLocal_967 = false;
	struct<5> Local_968 = { 0, 0, 0, 0, 0 } ;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	bool bLocal_977 = false;
	int iLocal_978 = 0;
	var uLocal_979 = 0;
	int iLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	int iLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	int iLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	bool bLocal_996 = false;
	var uLocal_997 = 0;
	bool bLocal_998 = false;
	var uLocal_999 = 0;
	bool bLocal_1000 = false;
	var uLocal_1001 = 0;
	bool bLocal_1002 = false;
	var uLocal_1003 = 0;
	int iLocal_1004 = 0;
	var uLocal_1005 = 0;
	bool bLocal_1006 = false;
	var uLocal_1007 = 0;
	bool bLocal_1008 = false;
	var uLocal_1009 = 0;
	bool bLocal_1010 = false;
	var uLocal_1011 = 0;
	bool bLocal_1012 = false;
	var uLocal_1013 = 0;
	bool bLocal_1014 = false;
	var uLocal_1015 = 0;
	bool bLocal_1016 = false;
	var uLocal_1017 = 0;
	bool bLocal_1018 = false;
	var uLocal_1019 = 0;
	bool bLocal_1020 = false;
	var uLocal_1021 = 0;
	bool bLocal_1022 = false;
	var uLocal_1023 = 0;
	bool bLocal_1024 = false;
	var uLocal_1025 = 0;
	bool bLocal_1026 = false;
	var uLocal_1027 = 0;
	bool bLocal_1028 = false;
	var uLocal_1029 = 0;
	bool bLocal_1030 = false;
	var uLocal_1031 = 0;
	int iLocal_1032 = 0;
	var uLocal_1033 = 0;
	int iLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	int iLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	int iLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	int iLocal_1052 = 0;
	var uLocal_1053 = 0;
	bool bLocal_1054 = false;
	var uLocal_1055 = 0;
	bool bLocal_1056 = false;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	bool bLocal_1060 = false;
	bool bLocal_1061 = false;
	int iLocal_1062 = 0;
	bool bLocal_1063 = false;
	var uLocal_1064 = 0;
	bool bLocal_1065 = false;
	var uLocal_1066 = 0;
	bool bLocal_1067 = false;
	var uLocal_1068 = 0;
	bool bLocal_1069 = false;
	var uLocal_1070 = 0;
	int iLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 2;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	int iLocal_1079 = 0;
	bool bLocal_1080 = false;
	var uLocal_1081 = 0;
	int iLocal_1082 = 0;
	int iLocal_1083 = 0;
	int iLocal_1084 = 0;
	int iLocal_1085 = 0;
	bool bLocal_1086 = false;
	int iLocal_1087 = 0;
	int iLocal_1088 = 0;
	bool bLocal_1089 = false;
	int iLocal_1090 = 0;
	int iLocal_1091 = 0;
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	var uLocal_1094 = 6;
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
	int iLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	int iLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	int iLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	int iLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	bool bLocal_1178 = false;
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
	int iLocal_1192 = 0;
	var uLocal_1193 = 0;
	struct<2> Local_1194 = { 0, 0 } ;
	var uLocal_1196 = 0;
	struct<2> Local_1197 = { 0, 0 } ;
	var uLocal_1199 = 0;
	struct<2> Local_1200 = { 0, 0 } ;
	var uLocal_1202 = 0;
	struct<2> Local_1203 = { 0, 0 } ;
	var uLocal_1205 = 0;
	bool bLocal_1206 = false;
	int iLocal_1207 = 0;
	float fLocal_1208 = 0.0f;
	var uLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	int iLocal_1222 = 0;
	int iLocal_1223 = 0;
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	var uLocal_1231 = 0;
	int iLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	int iLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	bool bLocal_1240 = false;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	int iLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	bool bLocal_1248 = false;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 13;
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
	struct<15> Local_1309[8];
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
	var uLocal_1449 = 5;
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
	var uLocal_1479 = 5;
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
	var uLocal_1509 = 5;
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
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 5;
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
	int iLocal_1559 = 0;
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562 = 0;
	int iLocal_1563 = 0;
	int iLocal_1564 = 0;
	int iLocal_1565 = 0;
	int iLocal_1566 = 0;
	int iLocal_1567 = 0;
	int iLocal_1568 = 0;
	int iLocal_1569 = 0;
	int iLocal_1570 = 0;
	int iLocal_1571 = 0;
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
	iLocal_816 = 0;
	iLocal_995 = 0;
	iLocal_1559 = 0;
	iLocal_1560 = 0;
	iLocal_1561 = 0;
	iLocal_1562 = 0;
	iLocal_1563 = 0;
	iLocal_1564 = 0;
	iLocal_1565 = 0;
	iLocal_1566 = 0;
	iLocal_1567 = 0;
	iLocal_1568 = 0;
	iLocal_1569 = 0;
	Local_819 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_877 = 99;
	iLocal_878 = 0;
	iLocal_865 = 1000;
	while (Function_228())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x71 / 113
{
	if (IS_ACTOR_VALID(&bLocal_925))
	{
		CLEAR_LINKED_ANIM_TARGET(&bLocal_925);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_925, 1);
	}
	STREAMING_UNLOAD_BOUNDS();
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	if (DECOR_CHECK_EXIST(&Global_54076, "herding"))
	{
		DECOR_REMOVE(&Global_54076, "herding");
	}
	DECOR_REMOVE(&Global_54076, "Ranch06DisablePrint");
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	Function_227(&bLocal_927);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_927);
	if (!bLocal_965)
	{
		Function_225(3, 1, 0, 1, 1);
	}
	else
	{
		Function_225(3, 1, 0, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1024))
	{
		DESTROY_ACTOR(&bLocal_1024);
		DESTROY_ACTOR(&bLocal_1026);
	}
	Function_224();
	Function_223();
	Function_222();
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	Function_217();
	Function_212();
	Function_211(&uLocal_817);
	Function_211(&iLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_210();
	Function_180(bLocal_966, 1, 0, 1, 1, 1, 1, 1);
	Function_176(&iLocal_831);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_923))
	{
		DESTROY_ITERATOR(&uLocal_923);
	}
	RELEASE_LAYOUT_REF(&uLocal_817);
	if (bLocal_965)
	{
		Function_26(Local_819, 1, 1, 1, 0);
	}
	else if (bLocal_966)
	{
		Function_22(Local_819);
	}
	else
	{
		Function_2(Local_819);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x1BF / 447
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x1E0 / 480
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1FD / 509
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x220 / 544
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x237 / 567
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

void Function_7(int iParam0) //Position: 0x2D9 / 729
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x2FC / 764
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

void Function_9() //Position: 0x346 / 838
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x35F / 863
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

void Function_11(var uParam0, bool bParam1) //Position: 0x3B2 / 946
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

struct<16> Function_12(int iParam0) //Position: 0x4DC / 1244
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

bool Function_13() //Position: 0x516 / 1302
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x531 / 1329
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x53E / 1342
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x55E / 1374
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x575 / 1397
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x590 / 1424
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7D7 / 2007
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x803 / 2051
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

bool Function_21(int iParam0) //Position: 0x827 / 2087
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x83C / 2108
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x85A / 2138
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

struct<16> Function_24(int iParam0) //Position: 0x900 / 2304
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

struct<24> Function_25(char* cParam0) //Position: 0x93F / 2367
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB95 / 2965
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
			Function_98(iVar2, bParam0, bVar1);
			Function_97();
		}
	}
	Function_39(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(bParam0) == 1)
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
	Function_27();
}

void Function_27() //Position: 0xC89 / 3209
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

int Function_28(int iParam0, bool bParam1) //Position: 0xCBB / 3259
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

int Function_29(int iParam0) //Position: 0xCF9 / 3321
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xD13 / 3347
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xD29 / 3369
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1026 / 4134
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

void Function_33(char* cParam0) //Position: 0x109B / 4251
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x10D5 / 4309
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1151 / 4433
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1164 / 4452
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

int Function_37(int iParam0) //Position: 0x1205 / 4613
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1242 / 4674
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1258 / 4696
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
		if (Function_96())
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
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_96())
	{
		Function_91();
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
			Function_84(bParam0);
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
			Function_40(bParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x14B6 / 5302
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x14F4 / 5364
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

void Function_42(bool bParam0) //Position: 0x1533 / 5427
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

void Function_43() //Position: 0x1588 / 5512
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

void Function_44() //Position: 0x15D3 / 5587
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

void Function_45() //Position: 0x16D9 / 5849
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

void Function_46() //Position: 0x170C / 5900
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

void Function_47() //Position: 0x189F / 6303
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

void Function_48() //Position: 0x1A58 / 6744
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1A66 / 6758
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

bool Function_50() //Position: 0x1C83 / 7299
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1C98 / 7320
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D3F / 7487
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1FDB / 8155
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

int Function_54() //Position: 0x2619 / 9753
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2622 / 9762
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2633 / 9779
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

struct<32> Function_57(char* cParam0) //Position: 0x272A / 10026
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2745 / 10053
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x27AC / 10156
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x27BE / 10174
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x27D0 / 10192
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

int Function_62(int iParam0) //Position: 0x2904 / 10500
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2913 / 10515
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x294C / 10572
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2989 / 10633
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B23 / 11043
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

int Function_67(bool bParam0) //Position: 0x2D67 / 11623
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2DA8 / 11688
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

struct<8> Function_69() //Position: 0x2E31 / 11825
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

struct<8> Function_70() //Position: 0x2EC8 / 11976
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

void Function_71() //Position: 0x2F47 / 12103
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2F84 / 12164
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

void Function_73() //Position: 0x3190 / 12688
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

bool Function_74(char* cParam0) //Position: 0x3247 / 12871
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x325F / 12895
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

struct<8> Function_76() //Position: 0x3357 / 13143
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3361 / 13153
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3372 / 13170
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3388 / 13192
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3454 / 13396
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3471 / 13425
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

bool Function_82(int iParam0) //Position: 0x3C9D / 15517
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3CD8 / 15576
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3CE7 / 15591
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
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_87(bParam0) == 1)
					{
						iVar0 = Function_86(bParam0);
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
			if (Function_86(bParam0) == 0)
			{
				if (Function_87(bParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
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
			if (Function_87(bParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
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

bool Function_85(int iParam0) //Position: 0x41C4 / 16836
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x41DA / 16858
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x41F9 / 16889
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4213 / 16915
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x427D / 17021
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

void Function_90(int iParam0) //Position: 0x44A5 / 17573
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

void Function_91() //Position: 0x4543 / 17731
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

void Function_92() //Position: 0x46A5 / 18085
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4725 / 18213
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4A7C / 19068
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

int Function_95(int iParam0) //Position: 0x4B04 / 19204
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4B1E / 19230
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4B49 / 19273
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4B77 / 19319
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4E13 / 19987
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

void Function_100(int iParam0, int iParam1) //Position: 0x4FE7 / 20455
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5251 / 21073
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

int Function_102() //Position: 0x53E1 / 21473
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

void Function_103() //Position: 0x5482 / 21634
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

void Function_104(int iParam0) //Position: 0x5540 / 21824
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

var Function_105(int iParam0) //Position: 0x55A6 / 21926
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5635 / 22069
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

var Function_107(int iParam0, int iParam1) //Position: 0x57E1 / 22497
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

void Function_108() //Position: 0x5826 / 22566
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x583C / 22588
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x587C / 22652
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x58BC / 22716
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x58CB / 22731
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

int Function_113(int iParam0) //Position: 0x5A93 / 23187
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

var Function_114() //Position: 0x5B28 / 23336
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5B4D / 23373
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x601C / 24604
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

var Function_117(int iParam0) //Position: 0x6343 / 25411
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x63E6 / 25574
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

int Function_119(int iParam0, bool bParam1) //Position: 0x65E3 / 26083
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x678E / 26510
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6860 / 26720
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

void Function_122(int iParam0) //Position: 0x717B / 29051
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
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
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
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x72F8 / 29432
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7403 / 29699
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x742F / 29743
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

var Function_126(vector3 vParam0) //Position: 0x7486 / 29830
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

void Function_127(var uParam0, int iParam1) //Position: 0x74D4 / 29908
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x752F / 29999
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
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

void Function_129() //Position: 0x76D0 / 30416
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x76D6 / 30422
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7785 / 30597
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x77DA / 30682
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x77F0 / 30704
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7841 / 30785
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

void Function_135(var uParam0, int iParam1) //Position: 0x786E / 30830
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x787F / 30847
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7899 / 30873
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x78AA / 30890
{
	struct<8> Var0;
	
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
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
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
			stradd(&Var0, "_tip", 32);
			Function_139(&Var0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_139(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7A06 / 31238
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
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7A91 / 31377
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7ABE / 31422
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

int Function_142(int iParam0) //Position: 0x7C6E / 31854
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7CC5 / 31941
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

var Function_144(int iParam0) //Position: 0x7CEA / 31978
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7D40 / 32064
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

bool Function_146(bool bParam0) //Position: 0x7D9F / 32159
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7DAB / 32171
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7DC7 / 32199
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

bool Function_149() //Position: 0x7E19 / 32281
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7E49 / 32329
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

int Function_151(int iParam0, int iParam1) //Position: 0x7EBE / 32446
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7F1B / 32539
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

int Function_153(int iParam0, int iParam1) //Position: 0x7F8E / 32654
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7FE9 / 32745
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
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
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
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x82AA / 33450
{
	char* cVar0[32];
	struct<8> Var8;
	
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
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_139(&Var8, 10.0f, 1, 0, 0, 1, 0);
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8549 / 34121
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

void Function_157() //Position: 0x85B8 / 34232
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

int Function_158(int iParam0, int iParam1) //Position: 0x8638 / 34360
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

int Function_159(int iParam0) //Position: 0x929B / 37531
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x92B0 / 37552
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

void Function_161(var uParam0, int iParam1) //Position: 0x92FF / 37631
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9357 / 37719
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

bool Function_163(int iParam0, int iParam1) //Position: 0x93CA / 37834
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x93DE / 37854
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

var Function_165(int iParam0) //Position: 0x94CF / 38095
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9527 / 38183
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9544 / 38212
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

bool Function_168(int iParam0) //Position: 0x959E / 38302
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x95B0 / 38320
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

void Function_170(struct<185> Param0) //Position: 0x95E4 / 38372
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

void Function_171(bool bParam0, var uParam1, int iParam2) //Position: 0x964F / 38479
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

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9739 / 38713
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

void Function_173() //Position: 0x98B8 / 39096
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x98C4 / 39108
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

void Function_175() //Position: 0x990A / 39178
{
	Function_224();
	Function_223();
	Function_222();
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	return;
}

void Function_176(int iParam0) //Position: 0x9925 / 39205
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

void Function_177(struct<2>[] Param0, int iParam1) //Position: 0x994D / 39245
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

void Function_178(struct<13> Param0) //Position: 0x9A98 / 39576
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_179(struct<13> Param0) //Position: 0x9AB5 / 39605
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_180(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9AD3 / 39635
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_209());
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
	Function_208();
	CLEAR_PRINTED_OBJECTIVE();
	Function_207();
	Function_205(0);
	Function_204();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_203();
	Function_202();
	Function_208();
	ENABLE_JOURNAL_REPLAY(1);
	Function_201(1);
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
		Function_200(&Global_54076);
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
	Function_197(Global_42825);
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
	Function_196();
	Function_195(1178687);
	Function_193(33039);
	Function_192(0x218003f);
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

void Function_181() //Position: 0x9CDF / 40159
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
		if (Function_184() > 3)
		{
			bVar0 *= 2;
		}
		Function_182(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_182(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9D36 / 40246
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_183(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_183(bool bParam0) //Position: 0x9D86 / 40326
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_184() //Position: 0x9DAF / 40367
{
	return Global_21369.f_248;
}

void Function_185() //Position: 0x9DBA / 40378
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

void Function_186(int iParam0, bool bParam1, int iParam2) //Position: 0x9DE4 / 40420
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

void Function_187(int iParam0) //Position: 0x9EF0 / 40688
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

bool Function_188() //Position: 0x9F6F / 40815
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

void Function_189() //Position: 0x9FD8 / 40920
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

void Function_190() //Position: 0x9FFE / 40958
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

void Function_191(int iParam0) //Position: 0xA024 / 40996
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_192(int iParam0) //Position: 0xA041 / 41025
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_193(int iParam0) //Position: 0xA054 / 41044
{
	Function_194(&Global_43580, iParam0);
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0xA062 / 41058
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_195(bool bParam0) //Position: 0xA081 / 41089
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_196() //Position: 0xA0AE / 41134
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

void Function_197(int iParam0) //Position: 0xA126 / 41254
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
		Function_198(78, 1, 1);
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

int Function_198(bool bParam0, bool bParam1, int iParam2) //Position: 0xA25C / 41564
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_199(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_199(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_199(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_199(bool bParam0) //Position: 0xA2AA / 41642
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

void Function_200(int iParam0) //Position: 0xA39E / 41886
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

void Function_201(bool bParam0) //Position: 0xA421 / 42017
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

void Function_202() //Position: 0xA498 / 42136
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

void Function_203() //Position: 0xA4DC / 42204
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

void Function_204() //Position: 0xA520 / 42272
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_205(int iParam0) //Position: 0xA536 / 42294
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_206())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_206() //Position: 0xA576 / 42358
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

void Function_207() //Position: 0xA59B / 42395
{
	Global_15862 = 0.0f;
	return;
}

void Function_208() //Position: 0xA5A5 / 42405
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

int Function_209() //Position: 0xA5D0 / 42448
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_210() //Position: 0xA5ED / 42477
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_211(int iParam0) //Position: 0xA5F6 / 42486
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

void Function_212() //Position: 0xA65E / 42590
{
	Function_216(&bLocal_1065);
	Function_216(&bLocal_1067);
	Function_214(3, 0, 1);
	if (IS_BLIP_VALID(&bLocal_1178))
	{
		REMOVE_BLIP(&bLocal_1178);
	}
	if (IS_OBJECT_VALID(&iLocal_1071))
	{
		Function_213(&iLocal_1071);
		Function_208();
	}
	if (IS_BLIP_VALID(&uLocal_1180))
	{
		REMOVE_BLIP(&uLocal_1180);
	}
	if (IS_BLIP_VALID(&uLocal_1182))
	{
		REMOVE_BLIP(&uLocal_1182);
	}
	return;
}

void Function_213(int iParam0) //Position: 0xA6BF / 42687
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

void Function_214(int iParam0, bool bParam1, bool bParam2) //Position: 0xA755 / 42837
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
						Function_227(&uVar1);
					}
				}
				Function_215(&uVar0);
			}
		}
	}
	return;
}

void Function_215(bool bParam0) //Position: 0xA864 / 43108
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

void Function_216(bool bParam0) //Position: 0xA897 / 43159
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_227(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_217() //Position: 0xA8D3 / 43219
{
	(&Global_21369 + 128) = "";
	return;
}

void Function_218() //Position: 0xA8E1 / 43233
{
	Function_176(&iLocal_4 + 760);
	return;
}

void Function_219() //Position: 0xA8EF / 43247
{
	Function_176(&iLocal_4 + 608);
	return;
}

void Function_220() //Position: 0xA8FD / 43261
{
	Function_176(&iLocal_4 + 456);
	return;
}

void Function_221() //Position: 0xA90B / 43275
{
	Function_176(&iLocal_4 + 320);
	return;
}

void Function_222() //Position: 0xA919 / 43289
{
	Function_176(&iLocal_4 + 264);
	return;
}

void Function_223() //Position: 0xA927 / 43303
{
	Function_176(&iLocal_4 + 208);
	return;
}

void Function_224() //Position: 0xA934 / 43316
{
	Function_176(&iLocal_4 + 8);
	Function_176(&iLocal_4 + 208);
	Function_176(&iLocal_4 + 264);
	Function_176(&iLocal_4 + 320);
	Function_176(&iLocal_4 + 456);
	Function_176(&iLocal_4 + 608);
	Function_176(&iLocal_4 + 760);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

int Function_225(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA976 / 43382
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
		Function_226(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_227(&Global_15402[iParam014] + 8);
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
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", true);
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

void Function_226(int iParam0) //Position: 0xACB8 / 44216
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_227(bool bParam0) //Position: 0xACCF / 44239
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		uVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
			uVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

bool Function_228() //Position: 0xAD02 / 44290
{
	if (IS_EXITFLAG_SET())
	{
		Function_622(iLocal_877);
		Function_618(StackVal, 4, &bLocal_966, &iLocal_877, Function_623(iLocal_877), Function_622(iLocal_877), 0);
		return 0;
	}
	Function_617(StackVal, StackVal, StackVal, StackVal, StackVal, Local_819, iLocal_877, iLocal_878, &bLocal_967, &bLocal_965, &bLocal_966);
	Function_613();
	if (iLocal_877 == 99 && iLocal_877 == 100)
	{
		Function_612();
		Function_611();
		Function_604(&uLocal_1158, &uLocal_1094, &uLocal_1058, uLocal_1059, 1.0f, uLocal_1081);
		if (Function_584(&Local_1309, &uLocal_1255, &uLocal_1551, &uLocal_923, uLocal_1254))
		{
			if (Function_575(&uLocal_1551))
			{
				Function_622(iLocal_877);
				Function_618(StackVal, 5, &bLocal_966, &iLocal_877, Function_623(iLocal_877), Function_622(iLocal_877), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_622(iLocal_877);
			Function_618(StackVal, 1, &bLocal_966, &iLocal_877, Function_623(iLocal_877), Function_622(iLocal_877), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_622(iLocal_877);
			Function_618(StackVal, 2, &bLocal_966, &iLocal_877, Function_623(iLocal_877), Function_622(iLocal_877), 0);
			return 1;
		}
		Function_574();
	}
	switch (iLocal_877)
	{
		case 0x00000063:
			Function_552();
			break;
		
		case 0x00000000:
			Function_523();
			break;
		
		case 0x00000001:
			Function_490();
			break;
		
		case 0x00000002:
			Function_470();
			break;
		
		case 0x00000003:
			Function_429();
			break;
		
		case 0x00000004:
			Function_344();
			break;
		
		case 0x00000065:
			Function_237();
			break;
		
		case 0x00000064:
			if (Function_236(&bLocal_966))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_235(&iLocal_877, &iLocal_878, &iLocal_865))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_965)
	{
		Function_234(&bLocal_965, 8);
		Function_1();
		return 0;
	}
	if (bLocal_966 && iLocal_877 == 100)
	{
		Function_622(iLocal_877);
		Function_618(StackVal, 5, &bLocal_966, &iLocal_877, Function_623(iLocal_877), Function_622(iLocal_877), 0);
	}
	if (bLocal_967)
	{
		Function_229(&bLocal_967, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_229(var uParam0, int iParam1) //Position: 0xAEC1 / 44737
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(&iParam1);
	uParam0 = 1;
	return;
}

void Function_230(int iParam0) //Position: 0xAEE6 / 44774
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_233("missionFail_playerDead");
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
		Function_233("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_233("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_233("");
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

void Function_231() //Position: 0xAFDD / 45021
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_232(int iParam0) //Position: 0xAFE9 / 45033
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

void Function_233(char* cParam0) //Position: 0xB01F / 45087
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_234(var uParam0, int iParam1) //Position: 0xB08B / 45195
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_235(var uParam0, var uParam1, int iParam2) //Position: 0xB0B0 / 45232
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

bool Function_236(int iParam0) //Position: 0xB0F9 / 45305
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_237() //Position: 0xB10D / 45325
{
	switch (iLocal_878)
	{
		case 0x00000000:
			if (Function_342(iLocal_877))
			{
				Function_340();
				Function_338(&iLocal_931);
				iLocal_878 = 1;
				iLocal_1229 = 6;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_337(iLocal_922) || iLocal_922 != 4294967295)) && Function_336())
			{
				Function_334(&iLocal_994, 0, 0, 4294967295, 4294967295);
				Function_330();
				Function_338(&iLocal_931);
				iLocal_878 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_322())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_238("$/cutscene/RANCH06_CS05/RANCH06_CS05", &iLocal_865, &Local_819, &iLocal_877, 78971, 57680, 55366, 54688, 48872, 48790, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_338(&iLocal_931);
				iLocal_878 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_ACTOR_INVULNERABILITY(&bLocal_927, false);
			SET_ACTOR_RIDEABLE(&bLocal_927, 1);
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_927, 1);
			Function_338(&iLocal_931);
			iLocal_878 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_218();
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_139("Ranch06_stallion_broken_help", 0x41200000, 1, 0, 2, 1, 0);
				Function_89(356, 6, 1, 0);
				bLocal_965 = true;
			}
			break;
	}
	return;
}

bool Function_238(int iParam0, int iParam1, struct<41> Param2) //Position: 0xB288 / 45704
{
	if (!&bParam15)
	{
		Function_251(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_250(&Param2) || Param2.f_40 < 1))
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
				Function_338(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_249())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_248(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_338(&iParam1 + 4);
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
					Function_248(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_245(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_245(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_243(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_248(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_338(&iParam1 + 4);
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
						Function_242(1.0f);
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
						Function_240();
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
					Function_239(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_250(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_239(var uParam0, bool bParam1) //Position: 0xB8EA / 47338
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
		Function_196();
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

void Function_240() //Position: 0xB9B9 / 47545
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_241();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_241() //Position: 0xB9FE / 47614
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_242(bool bParam0) //Position: 0xBA10 / 47632
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

void Function_243(var uParam0, int iParam1) //Position: 0xBA2D / 47661
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
			if ((&iVar3 == &Global_54076 && !Function_244(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_244(int iParam0) //Position: 0xBABF / 47807
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

float Function_245(vector3 vParam0) //Position: 0xBAF0 / 47856
{
	if (Function_247(&vParam0))
	{
		if (Function_246(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_246(int iParam0) //Position: 0xBBBD / 48061
{
	return Function_14(iParam0, 2);
}

bool Function_247(int iParam0) //Position: 0xBBCB / 48075
{
	return Function_14(iParam0, 1);
}

int Function_248(bool bParam0) //Position: 0xBBD9 / 48089
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

bool Function_249() //Position: 0xBC9C / 48284
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

bool Function_250(struct<37> Param0) //Position: 0xBCD9 / 48345
{
	return Param0.f_36;
}

void Function_251(var uParam0, int iParam1) //Position: 0xBCE4 / 48356
{
	Function_252(&uParam0, &iParam1, 0);
	return;
}

void Function_252(int iParam0, bool bParam1, bool bParam2) //Position: 0xBCF4 / 48372
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
			Function_253(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		iParam0 = 1105;
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
				if (((((((iParam0 == 1000 && iParam0 == 1001) && iParam0 == 1002) && iParam0 == 1003) && iParam0 == 1103) && iParam0 == 1104) && iParam0 == 1105) && iParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_253(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
					iParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_253(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xBE6C / 48748
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

int Function_254() //Position: 0xBE96 / 48790
{
	switch (iLocal_877)
	{
		case 0x00000063:
			if (Function_292())
			{
				if (Function_281())
				{
					iLocal_1093 = 1;
					return 1;
				}
				return 0;
			}
			return 0;
			break;
		
		case 0x00000002:
			iLocal_1093 = 1;
			return 1;
			break;
		
		case 0x00000065:
			iLocal_1093 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_255() //Position: 0xBEE8 / 48872
{
	switch (iLocal_877)
	{
		case 0x00000063:
			if (!iLocal_1092)
			{
				Function_279(&Global_54076, &iLocal_4 + 1800[11], 0, 0, 0);
				Function_279(&bLocal_929, &iLocal_4 + 1800[15], 1, 1, 1);
				Function_279(&bLocal_925, &iLocal_4 + 1800[13], 1, 1, 1);
				TASK_PRIORITY_SET(&bLocal_925, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
				TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
				TASK_PRIORITY_SET(&bLocal_929, true);
				SET_ACTOR_MAX_SPEED(&bLocal_929, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_929, 2);
				ACTOR_POP_NEXT_GAIT(&bLocal_929, 1, 0);
				TASK_CLEAR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
				Function_279(&bLocal_927, &iLocal_4 + 1800[6], 1, 1, 1);
				iLocal_1092 = 1;
			}
			Function_277(1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			Function_270();
			iLocal_877 = 0;
			iLocal_878 = 2;
			Function_267(&Local_819, &iLocal_877, &iLocal_878);
			Function_266(StackVal, StackVal, StackVal, StackVal, StackVal, Local_819);
			iLocal_1224 = 6;
			return 1;
			break;
		
		case 0x00000002:
			if (!iLocal_1092)
			{
				Function_265();
				TASK_PRIORITY_SET(&bLocal_929, 2);
				SET_ACTOR_FACTION(&bLocal_929, 20);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_929, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_929, 1);
				TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_996, -1.0f, 0, 0);
				Function_279(&bLocal_927, &iLocal_4 + 2024[1], 1, 1, 1);
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
				}
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 2, 0);
				Function_279(&bLocal_996, &iLocal_4 + 2024[3], 1, 1, 1);
				if (!IS_ACTOR_RIDING(&bLocal_925))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
				}
				ACTOR_POP_NEXT_GAIT(&bLocal_925, 2, 0);
				iLocal_1092 = 1;
				return 1;
			}
			Function_277(1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (Function_256())
			{
				if (!iLocal_1092)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_927);
					TASK_CLEAR(&bLocal_927);
					TASK_CLEAR(&Global_54076);
					ANIMAL_ACTOR_SET_DOCILE(&bLocal_927, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_927, false);
					TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Global_54076, &iLocal_4 + 2776[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
					TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &bLocal_927, &iLocal_4 + 2776[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
					if (IS_ACTOR_VALID(&bLocal_996))
					{
						DESTROY_ACTOR(&bLocal_996);
					}
					if (IS_ACTOR_VALID(&bLocal_925))
					{
						Function_225(3, 1, 0, 1, 1);
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
					iLocal_1092 = 1;
				}
				Function_277(1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_256() //Position: 0xC18F / 49551
{
	if (iLocal_1093)
	{
		return 1;
	}
	switch (iLocal_995)
	{
		case 0x00000000:
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			if (IS_OBJECT_VALID(&iLocal_865 + 24))
			{
				DESTROY_OBJECT(&iLocal_865 + 24);
			}
			*(&iLocal_865 + 24) = Function_261(&iLocal_4, 0, 1, 0, 0);
			Function_260(&Global_54076, 1, 1);
			Function_279(&bLocal_927, &iLocal_4 + 2776[0], 1, 1, 1);
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
			}
			TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
			if (!IS_ACTOR_VALID(&bLocal_996))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2776[21], &Local_1203);
				bLocal_996 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_817, "lastscenehorse", 980, Local_1203, Vector(0.0f, 50,44261f, 0.0f));
				SET_ACTOR_FACTION(&bLocal_996, 20);
				ACCESSORIZE_HORSE(&bLocal_996, false);
				DECOR_SET_BOOL(&bLocal_996, "CanBeLasso", false);
				AI_SET_NAV_ACTOR_WIDTH(&bLocal_996, 0,5f);
			}
			else if (!IS_ACTOR_ALIVE(&bLocal_996))
			{
				DESTROY_ACTOR(&bLocal_996);
				GET_OBJECT_POSITION(&iLocal_4 + 2776[21], &Local_1203);
				bLocal_996 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_817, "lastscenehorse", 980, Local_1203, Vector(0.0f, 50,44261f, 0.0f));
				SET_ACTOR_FACTION(&bLocal_996, 20);
				ACCESSORIZE_HORSE(&bLocal_996, false);
				DECOR_SET_BOOL(&bLocal_996, "CanBeLasso", false);
				AI_SET_NAV_ACTOR_WIDTH(&bLocal_996, 0,5f);
			}
			Function_260(&bLocal_925, 1, 1);
			Function_279(&bLocal_996, &iLocal_4 + 2776[21], 1, 1, 1);
			if (!IS_ACTOR_RIDING(&bLocal_925) || GET_MOUNT(&bLocal_925) == &bLocal_996)
			{
				ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
			}
			TASK_FOLLOW_PATH(&bLocal_925, &iLocal_4 + 3168, 3, 1, 0, 1, false);
			AI_ACTOR_FORCE_SPEED(&bLocal_925, 3);
			AI_ACTOR_FORCE_SPEED(&bLocal_996, 3);
			ACTOR_POP_NEXT_GAIT(&bLocal_925, 4, 0);
			ACTOR_POP_NEXT_GAIT(&bLocal_996, 4, 0);
			iLocal_995 = 6;
			Function_338(&iLocal_931);
			return 0;
			break;
		
		case 0x00000006:
			if (Function_245(&iLocal_931) < 5.0f)
			{
				Function_257();
				iLocal_995 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_245(&iLocal_931) < 7.0f)
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				if (IS_OBJECT_VALID(&iLocal_865 + 24))
				{
					DESTROY_OBJECT(&iLocal_865 + 24);
				}
				Function_260(&Global_54076, 0, 1);
				Function_260(&bLocal_925, 0, 1);
				Function_225(3, 1, 0, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_996))
				{
					DESTROY_ACTOR(&bLocal_996);
				}
				iLocal_995 = 106;
				Function_338(&iLocal_931);
				return 1;
			}
			break;
		
		case 0x0000006A:
			return 1;
			break;
	}
	return 0;
}

void Function_257() //Position: 0xC431 / 50225
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_bonShoutsHerd", "Ranch06_bonShoutsHerd", false, 2, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_258(int iParam0) //Position: 0xC484 / 50308
{
	Function_259(0, &Global_54076, iParam0, 0);
	Function_259(1, &bLocal_925, iParam0, 0);
	Function_259(2, &bLocal_929, iParam0, 0);
	Function_259(3, &bLocal_1024, iParam0, 0);
	Function_259(4, &bLocal_1024, iParam0, 0);
	return;
}

void Function_259(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xC4C1 / 50369
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

void Function_260(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC4E9 / 50409
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
		{
			FIRE_STOP_ON_ACTOR(&bParam0);
		}
		SET_ACTOR_INVULNERABILITY(&bParam0, true);
		CLEAR_ACTOR_MIN_SPEED(&bParam0);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam0);
		RESET_ACTOR_GAITS(&bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&bParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&bParam0);
		SET_ACTOR_INVULNERABILITY(&bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
	}
	return;
}

var Function_261(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC599 / 50585
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch06_Depart", 2, 1);
	}
	Function_262(&uVar0);
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

void Function_262(int iParam0) //Position: 0xC621 / 50721
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_264(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_263(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 7,5f, 0, 0);
	return;
}

void Function_263(int iParam0) //Position: 0xC660 / 50784
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1882,322f, 25,2635f, 2176,62f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,020996f, 0,097065f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 60.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_264(var uParam0) //Position: 0xC717 / 50967
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-1888,529f, 25,14956f, 2175,966f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,053896f, 0,256147f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 60.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

void Function_265() //Position: 0xC7CE / 51150
{
	TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
	Function_279(&bLocal_929, &iLocal_4 + 2024[8], 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_929, 0);
	SET_ANIM_SET_FOR_ACTOR(&bLocal_929, "ranch06_drew_idle", 0);
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_929, "ranch06_drew_idle/drew_walk");
	return;
}

void Function_266(struct<41> Param0) //Position: 0xC83D / 51261
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_877 = 0;
			break;
		
		case 0x00000002:
			iLocal_877 = 1;
			break;
		
		case 0x00000003:
			iLocal_877 = 2;
			break;
		
		case 0x00000004:
			iLocal_877 = 3;
			break;
		
		case 0x00000005:
			iLocal_877 = 4;
			break;
		
		case 0x00000006:
			iLocal_877 = 101;
			break;
	}
}

void Function_267(int iParam0, int iParam1, int iParam2) //Position: 0xC89D / 51357
{
	if (Function_250(&iParam0))
	{
		iParam1 = Function_269(&iParam0);
		if (iParam1 == 4294967295)
		{
			iParam1 = 0;
		}
		if (iParam1 == 99)
		{
			iParam1 = 0;
			iParam2 = 0;
		}
		Function_268();
	}
	return;
}

void Function_268() //Position: 0xC8D9 / 51417
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

int Function_269(int iParam0) //Position: 0xC92A / 51498
{
	if (Function_250(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_270() //Position: 0xC943 / 51523
{
	if (IS_LAYOUTREF_VALID(&iLocal_4))
	{
		uLocal_923 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	}
	Function_274();
	Function_214(3, 1, 1);
	SET_CRIPPLE_ENABLE(&bLocal_925, 0);
	SET_ACTOR_FACTION(&bLocal_925, 20);
	TASK_PRIORITY_SET(&bLocal_925, true);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_925, 0, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_925, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_925, 100.0f);
	GIVE_WEAPON_TO_ACTOR(&bLocal_925, 21, false, 1, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_925, 1);
	RESET_ACTOR_GAITS(&bLocal_927, 0);
	TASK_PRIORITY_SET(&bLocal_927, 2);
	TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_927, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_927, GET_ACTOR_MAX_HEALTH(&bLocal_927));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_927, 1);
	DECOR_SET_BOOL(&Global_54076, "Ranch06DisablePrint", true);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	Local_968 = Vector(0.0f, 0.0f, 0.0f);
	ATTACH_OBJECTS(&iLocal_4 + 1600[0], &Global_54076, Function_54(), Local_968, Local_968, 4294967295);
	ATTACH_OBJECTS(&iLocal_4 + 1600[1], &Global_54076, Function_54(), Local_968, Local_968, 4294967295);
	ATTACH_OBJECTS(&iLocal_4 + 1600[2], &bLocal_925, Function_54(), Local_968, Local_968, 4294967295);
	iLocal_1230 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_817, "oHerdCenter", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	Function_272(&uLocal_1255, &uLocal_817);
	if (iLocal_1091)
	{
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3176));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3184));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3192));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3200));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3208));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3216));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3224));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3232));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3240));
	}
	GET_OBJECT_POSITION(&iLocal_4 + 1800[9], &Local_968);
	Function_271(StackVal, "p_gen_glass04x", Local_968, 1.0f);
	DESTROY_OBJECT(&iLocal_4 + 2992);
	Function_338(&iLocal_931);
	Function_338(&iLocal_935);
	Function_338(&iLocal_939);
	Function_338(&iLocal_1042);
	Function_338(&iLocal_1038);
	return;
}

void Function_271(var uParam0, struct<2> Param1, bool bParam3) //Position: 0xCB7D / 52093
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, bParam3, &uParam0, 1));
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
		iVar1++;
	}
}

int Function_272(struct<2>[] Param0) //Position: 0xCBBC / 52156
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_273(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_273(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_273(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_273(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_273(struct<13> Param0) //Position: 0xD295 / 53909
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

void Function_274() //Position: 0xD364 / 54116
{
	Function_169(51212);
	Function_275(9);
	return;
}

void Function_275(int iParam0) //Position: 0xD376 / 54134
{
	Function_276(&Global_43580, iParam0);
	return;
}

void Function_276(var uParam0, bool bParam1) //Position: 0xD384 / 54148
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_277(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xD3AC / 54188
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
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
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
		Function_278();
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
	Function_239(&iParam9, &bParam10);
}

void Function_278() //Position: 0xD47B / 54395
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_279(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xD490 / 54416
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

int Function_280() //Position: 0xD5A0 / 54688
{
	switch (iLocal_877)
	{
		case 0x00000063:
			Function_279(&Global_54076, &iLocal_4 + 1800[11], 0, 0, 0);
			Function_279(&bLocal_929, &iLocal_4 + 1800[15], 1, 1, 1);
			Function_279(&bLocal_925, &iLocal_4 + 1800[13], 1, 1, 1);
			TASK_PRIORITY_SET(&bLocal_925, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
			TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
			TASK_PRIORITY_SET(&bLocal_929, true);
			SET_ACTOR_MAX_SPEED(&bLocal_929, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_929, 2);
			ACTOR_POP_NEXT_GAIT(&bLocal_929, 1, 0);
			TASK_CLEAR(&Global_54076);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
			Function_279(&bLocal_927, &iLocal_4 + 1800[6], 1, 1, 1);
			iLocal_1092 = 1;
			return 1;
			break;
		
		case 0x00000002:
			Function_265();
			TASK_PRIORITY_SET(&bLocal_929, 2);
			SET_ACTOR_FACTION(&bLocal_929, 20);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_929, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_929, 1);
			TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_996, -1.0f, 0, 0);
			TASK_FOLLOW_PATH(&bLocal_925, &iLocal_4 + 3024, 4, 0, 0, 1, false);
			TASK_FOLLOW_PATH(&Global_54076, &iLocal_4 + 3024, 4, 0, 0, 1, false);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_279(&bLocal_927, &iLocal_4 + 2024[1], 1, 1, 1);
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
			}
			AI_ACTOR_FORCE_SPEED(&Global_54076, 4);
			AI_ACTOR_FORCE_SPEED(&bLocal_927, 4);
			SIMULATE_PLAYER_INPUT_GAIT(0, 3, 1073741824, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 3, 0);
			ACTOR_POP_NEXT_GAIT(&bLocal_927, 3, 0);
			Function_279(&bLocal_996, &iLocal_4 + 2024[3], 1, 1, 1);
			if (!IS_ACTOR_RIDING(&bLocal_925))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
			}
			AI_ACTOR_FORCE_SPEED(&bLocal_925, 4);
			AI_ACTOR_FORCE_SPEED(&bLocal_996, 4);
			ACTOR_POP_NEXT_GAIT(&bLocal_925, 3, 0);
			ACTOR_POP_NEXT_GAIT(&bLocal_996, 3, 0);
			iLocal_1092 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (Function_256())
			{
				if (!iLocal_1092)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_927);
					TASK_CLEAR(&bLocal_927);
					TASK_CLEAR(&Global_54076);
					ANIMAL_ACTOR_SET_DOCILE(&bLocal_927, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_927, false);
					TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Global_54076, &iLocal_4 + 2776[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
					TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &bLocal_927, &iLocal_4 + 2776[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
					if (IS_ACTOR_VALID(&bLocal_996))
					{
						DESTROY_ACTOR(&bLocal_996);
					}
					if (IS_ACTOR_VALID(&bLocal_925))
					{
						Function_225(3, 1, 0, 1, 1);
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
					iLocal_1092 = 1;
				}
			}
			return 1;
			break;
	}
	return 0;
}

bool Function_281() //Position: 0xD846 / 55366
{
	switch (iLocal_877)
	{
		case 0x00000063:
			if (!Function_288())
			{
			}
			if (!Function_282(&iLocal_831))
			{
			}
			if (Function_288() && Function_282(&iLocal_831))
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_288();
			Function_282(&iLocal_831);
			return 1;
			break;
		
		case 0x00000065:
			Function_288();
			Function_282(&iLocal_831);
			return 1;
			break;
	}
	return 0;
}

bool Function_282(struct<2>[] Param0) //Position: 0xD8AC / 55468
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_287();
	iVar1 = 0;
	if (!Function_179(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_286(&(Param0[iVar02]), 8);
		}
		else if (Function_285())
		{
			iVar1 = 1;
			Function_286(&(Param0[iVar02]), 8);
		}
		Function_286(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_179(&(Param0[02]), 8) || iVar1));
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
				Function_286(&(Param0[iVar02]), 1);
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
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_286(&(Param0[iVar02]), 2);
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
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_286(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_286(&(Param0[iVar02]), 2);
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
	Function_283();
	return 1;
}

void Function_283() //Position: 0xDC6E / 56430
{
	if (!Function_284(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_284(int iParam0) //Position: 0xDCAE / 56494
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_285() //Position: 0xDCCA / 56522
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

void Function_286(struct<13> Param0) //Position: 0xDCF8 / 56568
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_287() //Position: 0xDD0B / 56587
{
	if (!Function_284(128))
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

bool Function_288() //Position: 0xDD4D / 56653
{
	Function_291(&iLocal_4 + 8, 980, 2, 0);
	Function_291(&iLocal_4 + 8, 981, 2, 0);
	Function_289(&iLocal_4 + 8, "p_gen_saucer01x", 0, 0);
	Function_289(&iLocal_4 + 8, "p_gen_teaCup01x", 0, 0);
	Function_289(&iLocal_4 + 8, "p_gen_book03x", 0, 0);
	Function_289(&iLocal_4 + 8, "p_gen_teaPot02x", 0, 0);
	Function_289(&iLocal_4 + 8, "p_gen_teaTray01x", 0, 0);
	Function_289(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_289(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_289(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit", 1, 0);
	Function_289(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_289(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/give_lasso", 1, 0);
	if (Function_282(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_289(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xDF67 / 57191
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_290(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_286(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_290(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xDFA5 / 57253
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_179(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_286(&(Param0[iVar02]), 4);
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

var Function_291(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE074 / 57460
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
			Function_286(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_286(&(Param0[iVar02]), 8);
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

bool Function_292() //Position: 0xE150 / 57680
{
	switch (iLocal_877)
	{
		case 0x00000063:
			if (!Function_288())
			{
			}
			else if (!Function_311())
			{
			}
			else if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				Function_307();
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2992), false);
			}
			else if (!IS_ACTOR_VALID(&bLocal_927))
			{
				if (Function_306())
				{
					bLocal_927 = Function_299(1, 1, 0, 0, 0, 0, 1, 0);
				}
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_927, 1))
			{
				return 0;
			}
			if (!IS_ACTOR_VALID(&bLocal_996))
			{
				Function_298();
				bLocal_996 = &iLocal_4 + 912[02];
				bLocal_998 = &iLocal_4 + 912[12];
			}
			else if (!IS_ACTOR_VALID(&bLocal_929))
			{
				Function_297();
				bLocal_929 = &iLocal_4 + 1304[02];
				SET_CRIPPLE_ENABLE(&bLocal_929, 0);
				SET_ACTOR_FACTION(&bLocal_929, 20);
				TASK_PRIORITY_SET(&bLocal_929, true);
				TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_929, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_929, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_929, GET_ACTOR_MAX_HEALTH(&bLocal_929));
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_929, 100.0f);
				GIVE_WEAPON_TO_ACTOR(&bLocal_929, 21, false, 1, 1);
			}
			else if (!iLocal_1091)
			{
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3176));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3184));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3192));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3200));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3208));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3216));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3224));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3232));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 3240));
				TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
				Function_279(&Global_54076, &iLocal_4 + 1800[1], 1, 1, 1);
				Function_279(&bLocal_927, &iLocal_4 + 1800[6], 1, 1, 1);
				Function_279(&bLocal_929, &iLocal_4 + 1800[5], 1, 1, 1);
				Function_279(&bLocal_996, &iLocal_4 + 1800[8], 1, 1, 1);
				Function_279(&bLocal_998, &iLocal_4 + 1800[7], 1, 1, 1);
				iLocal_1091 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000065:
			Function_296();
			Function_293();
			return 1;
			break;
	}
	return 0;
}

void Function_293() //Position: 0xE37E / 58238
{
	SET_ACTOR_INVULNERABILITY(&bLocal_1008, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1012, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1016, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1020, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1028, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1026, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1006, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1010, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1014, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1018, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1022, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_1024, false);
	if (IS_ACTOR_VALID(&bLocal_1006))
	{
		if (!SQUAD_GET(&bLocal_1006) != &iLocal_4 + 1296)
		{
			SQUAD_JOIN(&bLocal_1006, &iLocal_4 + 1296);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1010))
	{
		if (!SQUAD_GET(&bLocal_1010) != &iLocal_4 + 1296)
		{
			SQUAD_JOIN(&bLocal_1010, &iLocal_4 + 1296);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1014))
	{
		if (!SQUAD_GET(&bLocal_1014) != &iLocal_4 + 1296)
		{
			SQUAD_JOIN(&bLocal_1014, &iLocal_4 + 1296);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1018))
	{
		if (!SQUAD_GET(&bLocal_1018) != &iLocal_4 + 1296)
		{
			SQUAD_JOIN(&bLocal_1018, &iLocal_4 + 1296);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1022))
	{
		if (!SQUAD_GET(&bLocal_1022) != &iLocal_4 + 1296)
		{
			SQUAD_JOIN(&bLocal_1022, &iLocal_4 + 1296);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1024))
	{
		if (!SQUAD_GET(&bLocal_1024) != &iLocal_4 + 1296)
		{
			SQUAD_JOIN(&bLocal_1024, &iLocal_4 + 1296);
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1296))
	{
		Function_295(&iLocal_4 + 1296);
		DESTROY_OBJECT(&iLocal_4 + 1296);
	}
	if (SQUAD_IS_VALID(&bLocal_1065))
	{
		Function_294(&bLocal_1065);
		DESTROY_OBJECT(&bLocal_1065);
	}
	if (SQUAD_IS_VALID(&bLocal_1067))
	{
		Function_294(&bLocal_1067);
		DESTROY_OBJECT(&bLocal_1067);
	}
	return;
}

void Function_294(bool bParam0) //Position: 0xE525 / 58661
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

void Function_295(bool bParam0) //Position: 0xE573 / 58739
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
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				uVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				uVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
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

int Function_296() //Position: 0xE603 / 58883
{
	if (IS_ACTOR_VALID(GET_MOUNT(&bLocal_925)))
	{
		bLocal_996 = GET_MOUNT(&bLocal_925);
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse05", &bLocal_996);
	}
	else if (IS_ACTOR_VALID(&bLocal_996))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse05", &bLocal_996);
	}
	if (IS_ACTOR_VALID(&bLocal_927))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", &bLocal_927);
	}
	else if (IS_ACTOR_VALID(&bLocal_1030))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", &bLocal_1030);
	}
	else if (IS_ACTOR_VALID(&iLocal_4 + 1048[02]))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", &iLocal_4 + 1048[02]);
	}
	return 1;
}

void Function_297() //Position: 0xE702 / 59138
{
	*(&iLocal_4 + 1304[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 608, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 1304[02], 20);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1304[02], 1);
	return;
}

void Function_298() //Position: 0xE740 / 59200
{
	*(&iLocal_4 + 912[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 980, Vector(-812,2147f, 93,36469f, 2427,071f), Vector(0.0f, 50,44261f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 912[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 912[02], 20);
	ACCESSORIZE_HORSE(&iLocal_4 + 912[02], false);
	DECOR_SET_BOOL(&iLocal_4 + 912[02], "CanBeLasso", false);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 912[02], 0,5f);
	*(&iLocal_4 + 912[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 981, Vector(-811,9912f, 93,06895f, 2430,392f), Vector(0.0f, 90,77387f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 912[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 912[12], 20);
	ACCESSORIZE_HORSE(&iLocal_4 + 912[12], false);
	DECOR_SET_BOOL(&iLocal_4 + 912[12], "CanBeLasso", false);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 912[12], 0,5f);
	return;
}

var Function_299(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xE84E / 59470
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
		Function_305(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_306())
		{
			return "";
		}
	}
	if (!Function_303())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_196();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_302(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_302(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_302(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_302(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_301(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_301(StackVal, Var4, 0, 1, 1);
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
		Function_300(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_300(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xEBAB / 60331
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

var Function_301(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xEBF5 / 60405
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

struct<8> Function_302(bool bParam0) //Position: 0xEC95 / 60565
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

bool Function_303() //Position: 0xECBE / 60606
{
	if (Function_304() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_304() //Position: 0xECD4 / 60628
{
	return Global_21369.f_244;
}

void Function_305(var uParam0, bool bParam1, bool bParam2) //Position: 0xECDF / 60639
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

bool Function_306() //Position: 0xED0E / 60686
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

struct<8> Function_307() //Position: 0xED2E / 60718
{
	var uVar0;
	
	Function_310(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Ranch06_layout");
	*(&iLocal_4 + 1392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1328[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-792,9257f, 93,313f, 2411,716f), Vector(0.0f, 55,77376f, 0.0f), Vector(32,59972f, 18,00742f, 24,15807f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[0]);
	*(&iLocal_4 + 1328[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1117,623f, 101,8034f, 2700.0f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 6.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[1]);
	*(&iLocal_4 + 1328[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-882,1529f, 91,35687f, 2405,048f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[2]);
	*(&iLocal_4 + 1328[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-882,1529f, 91,35687f, 2405,048f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[3]);
	*(&iLocal_4 + 1328[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-882,1466f, 91,35687f, 2404,981f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[4]);
	*(&iLocal_4 + 1328[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-884,8926f, 91,35687f, 2379,127f), Vector(0.0f, 0.0f, 0.0f), Vector(23,31192f, 7,200333f, 52,45055f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[5]);
	*(&iLocal_4 + 1328[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-884,8926f, 91,35687f, 2379,127f), Vector(0.0f, 0.0f, 0.0f), Vector(23,31192f, 7,200333f, 52,45055f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1328[6]);
	*(&iLocal_4 + 1512) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1400[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1015,343f, 101,3961f, 2904,656f), Vector(0.0f, 45.0f, 0.0f), Vector(187,9258f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[0]);
	*(&iLocal_4 + 1400[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1143,453f, 101,2674f, 2423,791f), Vector(0.0f, 45.0f, 0.0f), Vector(204,4703f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[1]);
	*(&iLocal_4 + 1400[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-970,4504f, 100,3922f, 2698,22f), Vector(0.0f, 90.0f, 0.0f), Vector(277,6032f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[2]);
	*(&iLocal_4 + 1400[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1037,133f, 100,3922f, 2480,48f), Vector(0.0f, 135.0f, 0.0f), Vector(182,0945f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[3]);
	*(&iLocal_4 + 1400[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1212,05f, 91,49343f, 2746,837f), Vector(0.0f, 90.0f, 0.0f), Vector(516,4927f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[4]);
	*(&iLocal_4 + 1400[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1116,241f, 97,03271f, 2963,037f), Vector(0.0f, 0.0f, 0.0f), Vector(123,1054f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[5]);
	*(&iLocal_4 + 1400[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1726,639f, 49,64859f, 2280,728f), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 436,0822f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[6]);
	*(&iLocal_4 + 1400[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-2138,501f, 49,64859f, 2050,675f), Vector(0.0f, 90,2328f, 0.0f), Vector(91,25451f, 100.0f, 475.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[7]);
	*(&iLocal_4 + 1400[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-2210,629f, 49,64859f, 2176,199f), Vector(0.0f, -9,406216f, 0.0f), Vector(100.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[8]);
	*(&iLocal_4 + 1400[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-2049,417f, 49,64859f, 2586,29f), Vector(0.0f, 70.0f, 0.0f), Vector(100.0f, 100.0f, 397,4682f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[9]);
	*(&iLocal_4 + 1400[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1839,675f, 30,93591f, 2573,283f), Vector(0.0f, 136,6737f, 0.0f), Vector(100.0f, 100.0f, 306,7363f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[10]);
	*(&iLocal_4 + 1400[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-2232,908f, 49,64859f, 2410,143f), Vector(0.0f, 6,742026f, 0.0f), Vector(100.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[11]);
	*(&iLocal_4 + 1400[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1766,417f, 41,16077f, 2141,86f), Vector(0.0f, 40,20626f, 0.0f), Vector(100.0f, 100.0f, 159,2307f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1400[12]);
	*(&iLocal_4 + 1592) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1520[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1874,411f, 25,45407f, 2079,854f), Vector(0.0f, 69,34929f, 0.0f), Vector(48,2873f, 25.0f, 74,19438f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[0]);
	*(&iLocal_4 + 1520[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1819,26f, 24,9136f, 2025,608f), Vector(0.0f, -44,90702f, 0.0f), Vector(30,95195f, 22.0f, 53,92882f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[1]);
	*(&iLocal_4 + 1520[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1964f, 27,1059f, 2126,027f), Vector(0.0f, 0.0f, 0.0f), Vector(50.0f, 25.0f, 50.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[2]);
	*(&iLocal_4 + 1520[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1852f, 35,13725f, 2076.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[3]);
	*(&iLocal_4 + 1520[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1878,807f, 28,45662f, 2085,32f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[4]);
	*(&iLocal_4 + 1520[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1960,473f, 28,1098f, 2081,119f), Vector(0.0f, -32,94701f, 0.0f), Vector(78,20216f, 58,59838f, 90,4452f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[5]);
	*(&iLocal_4 + 1520[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1799,487f, 24,9136f, 2002,48f), Vector(0.0f, -29,96945f, 0.0f), Vector(4,05956f, 22.0f, 40,31588f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[6]);
	*(&iLocal_4 + 1520[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1797,276f, 25,46958f, 2006,447f), Vector(0.0f, -43,62702f, 0.0f), Vector(48,54346f, 115,7446f, 122,4483f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1592, &iLocal_4 + 1520[7]);
	*(&iLocal_4 + 1640) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1600[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1600[0]);
	*(&iLocal_4 + 1600[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1600[1]);
	*(&iLocal_4 + 1600[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1600[2]);
	*(&iLocal_4 + 1600[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(0.0f, 0.0f, 10.0f), Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 50.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1600[3]);
	*(&iLocal_4 + 1680) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1648[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1704,604f, 38,903f, 2602,412f), Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 15.0f, 25.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1680, &iLocal_4 + 1648[0]);
	*(&iLocal_4 + 1648[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1703,927f, 38,34473f, 2600,79f), Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 15.0f, 25.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1680, &iLocal_4 + 1648[1]);
	*(&iLocal_4 + 1648[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1882,504f, 24,41415f, 2124,219f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1680, &iLocal_4 + 1648[2]);
	*(&iLocal_4 + 1712) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1688[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1047,169f, 100,9823f, 2510,391f), Vector(0.0f, 116,6054f, 0.0f), Vector(605,6017f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1712, &iLocal_4 + 1688[0]);
	*(&iLocal_4 + 1688[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-813,5923f, 93,43295f, 2432f), Vector(0.0f, 77,20818f, 0.0f), Vector(14,18331f, 12,74408f, 8,644003f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1712, &iLocal_4 + 1688[1]);
	*(&iLocal_4 + 1768) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1720[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1047,169f, 100,9823f, 2510,391f), Vector(0.0f, 116,6054f, 0.0f), Vector(605,6017f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1768, &iLocal_4 + 1720[0]);
	*(&iLocal_4 + 1720[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1571,683f, 50,33349f, 2656,292f), Vector(1,767708f, 29,11302f, 0,8602584f), Vector(181,0275f, 19,90147f, 17,01476f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1768, &iLocal_4 + 1720[1]);
	*(&iLocal_4 + 1720[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1602,717f, 42,39232f, 2621,942f), Vector(-6,390999f, -116,1065f, 3,180882f), Vector(188,8489f, 20,76132f, 17,74989f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1768, &iLocal_4 + 1720[2]);
	*(&iLocal_4 + 1720[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1608,634f, 41,65779f, 2620,834f), Vector(-3,917096f, -113,2355f, 3,600258f), Vector(188,8489f, 43,54361f, 17,74989f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1768, &iLocal_4 + 1720[3]);
	*(&iLocal_4 + 1720[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1624,965f, 39,65584f, 2609,654f), Vector(-85,57989f, -91,54893f, 85,57828f), Vector(188,8489f, 43,54361f, 17,74989f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1768, &iLocal_4 + 1720[4]);
	*(&iLocal_4 + 1776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1084f, 100,3922f, 2749,416f), Vector(0.0f, 0.0f, 0.0f), Vector(186,6131f, 128,7477f, 309,1529f));
	*(&iLocal_4 + 1784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-870,7624f, 90,10292f, 2430,515f), Vector(0.0f, 20,39046f, 0.0f), Vector(190,507f, 44,31432f, 85,65087f));
	*(&iLocal_4 + 1792) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1800[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-794,0436f, 92,20637f, 2418,532f), Vector(0.0f, 142,9135f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[0], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-794,0536f, 92,20635f, 2418,546f), Vector(0.0f, 142,9135f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[1], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-789,0842f, 93,34946f, 2411,897f), Vector(0.0f, -221,6629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[2], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-789,0438f, 93,34946f, 2411,931f), Vector(0.0f, -578,801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[3], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-795,9257f, 92,19131f, 2419,149f), Vector(0.0f, -217,7596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[4], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-795,9257f, 92,19131f, 2419,149f), Vector(0.0f, -217,7596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[5], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,9315f, 93,42333f, 2434,447f), Vector(0.0f, 68,4753f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[6], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-811,9912f, 93,06895f, 2430,392f), Vector(0.0f, 90,77387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[7], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-812,2147f, 93,36469f, 2427,071f), Vector(0.0f, 50,44261f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[8], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-791,7506f, 94,2957f, 2399,758f), Vector(0.0f, 50,44261f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[9], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-787,0349f, 93,62809f, 2408,852f), Vector(0.0f, 142,9135f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[10], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-794,0437f, 92,20637f, 2418,532f), Vector(0.0f, 142,9135f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[11], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-786,4108f, 93,62809f, 2407,964f), Vector(0.0f, -221,6629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[12], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-795,8934f, 92,20295f, 2421,408f), Vector(0.0f, -578,801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[13], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-788,2632f, 93,45126f, 2410,632f), Vector(0.0f, -217,7596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[14], &iLocal_4 + 1792);
	*(&iLocal_4 + 1800[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-800,0776f, 92,27276f, 2423,61f), Vector(0.0f, -227,2474f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1800[15], &iLocal_4 + 1792);
	*(&iLocal_4 + 1936) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1944[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1117,705f, 101,8242f, 2701,706f), Vector(0.0f, 54,19597f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[0], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1117,741f, 101,8331f, 2701,741f), Vector(0.0f, -15,80709f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[1], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1120,978f, 102,5396f, 2699,021f), Vector(0.0f, -87,97518f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[2], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1120,922f, 102,5315f, 2699,078f), Vector(0.0f, -47,64799f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[3], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1116f, 101,3961f, 2698,364f), Vector(0.0f, -265,6383f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[4], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-883,6484f, 91,27023f, 2403,87f), Vector(0.0f, -265,6383f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[5], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1113,549f, 101,3961f, 2700.0f), Vector(0.0f, -300,4377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[6], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-891,094f, 91,35687f, 2391,094f), Vector(0.0f, -300,4377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[7], &iLocal_4 + 1936);
	*(&iLocal_4 + 2016) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2024[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-883,5587f, 91,07737f, 2407,334f), Vector(0.0f, 2,010403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[0], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-870,496f, 91,28965f, 2406,694f), Vector(0.0f, 167,4846f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[1], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-881,2505f, 91,14787f, 2405,549f), Vector(0.0f, 30,03304f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[2], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-871,6049f, 90,77592f, 2410,153f), Vector(0.0f, 146,0152f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[3], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1780f, 35,13724f, 2672.0f), Vector(0.0f, 11,61801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[4], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1828,785f, 32,98904f, 2484,184f), Vector(0.0f, 11,61801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[5], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1816f, 30,11763f, 2576.0f), Vector(0.0f, 11,61801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[6], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-884,8414f, 91,33109f, 2400,612f), Vector(0.0f, 395,9993f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[7], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-884,8414f, 91,33109f, 2400,612f), Vector(0.0f, 33,4291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[8], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-883,1021f, 91,30711f, 2401,92f), Vector(0.0f, 164,2104f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[9], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-883,1021f, 91,30711f, 2401,92f), Vector(0.0f, 164,2104f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[10], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-887,2318f, 91,33109f, 2401,356f), Vector(0.0f, 395,9993f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[11], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-882,9f, 91,33109f, 2398,786f), Vector(0.0f, 395,9993f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[12], &iLocal_4 + 2016);
	*(&iLocal_4 + 2136) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2144[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1708,034f, 38,05449f, 2608,568f), Vector(0.0f, 123,3466f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[0], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1795,801f, 28,10635f, 2644,133f), Vector(0.0f, 92,77558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[1], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1708,518f, 37,92393f, 2607,836f), Vector(0.0f, 117,2255f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[2], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1793,654f, 28,3938f, 2640,974f), Vector(0.0f, 91,43393f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[3], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1956.0f, 17,06666f, 2524.0f), Vector(-2,158328f, 246,0727f, 0,5248157f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[4], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1895,964f, 24,50791f, 2448,022f), Vector(46,66745f, -88,79675f, -48,10932f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[5], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1788,269f, 28,97482f, 2640,404f), Vector(0.0f, -228,5982f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[6], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1780,543f, 30,00591f, 2642,318f), Vector(0.0f, 111,2132f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[7], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1783,764f, 29,64814f, 2643,629f), Vector(0.0f, -237,392f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[8], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1787,828f, 28,98965f, 2643,773f), Vector(0.0f, 121,7085f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[9], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1784,357f, 29,64814f, 2639,032f), Vector(0.0f, 122,9342f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[10], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1780,261f, 30,10578f, 2639,298f), Vector(0.0f, 116,537f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[11], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1964.0f, 17,06666f, 2524.0f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[12], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1960.0f, 17,22752f, 2520.0f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[13], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1960.0f, 17,06666f, 2524.0f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[14], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1960.0f, 17,06666f, 2528.0f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[15], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1964.0f, 17,06666f, 2528.0f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[16], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1956.0f, 17,06666f, 2528.0f), Vector(0.0f, 45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[17], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1708f, 38,14902f, 2624.0f), Vector(0.0f, 249,4697f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[18], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1788,269f, 28,97482f, 2640,404f), Vector(0.0f, -265,0558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[19], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1784,357f, 29,64814f, 2639,032f), Vector(0.0f, -265,0558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[20], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1780,261f, 30,10578f, 2639,298f), Vector(0.0f, -265,0558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[21], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1787,828f, 28,98965f, 2643,773f), Vector(0.0f, -265,0558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[22], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1783,764f, 29,64814f, 2643,629f), Vector(0.0f, -265,0558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[23], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1780,543f, 30,00591f, 2642,318f), Vector(0.0f, -265,0558f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[24], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1667,745f, 39,15346f, 2587,919f), Vector(0.0f, -228,5982f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[25], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[26]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1669,481f, 39,15664f, 2585,263f), Vector(0.0f, -228,5982f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[26], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[27]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1654,874f, 40,02052f, 2610,874f), Vector(0.0f, -284,0618f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[27], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[28]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1654,164f, 39,15292f, 2608.0f), Vector(-1,391641f, -285,6248f, -2,239668f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[28], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[29]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1664f, 41,22569f, 2608.0f), Vector(-1,391641f, -285,6248f, -2,239668f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[29], &iLocal_4 + 2136);
	*(&iLocal_4 + 2144[30]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1664f, 40,71531f, 2604.0f), Vector(-1,391641f, -285,6248f, -2,239668f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2144[30], &iLocal_4 + 2136);
	*(&iLocal_4 + 2400) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2408[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1854,329f, 24,63155f, 2056,999f), Vector(0.0f, -41,18964f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[0], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1842,749f, 24,95713f, 2044,531f), Vector(0.0f, -54,96458f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[1], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1823,377f, 24,84795f, 2027,847f), Vector(0.0f, -38,21621f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[2], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1855,809f, 24,44505f, 2055,001f), Vector(0.0f, -10,64959f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[3], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1841,965f, 24,99035f, 2045,234f), Vector(-4,814044f, -48,726f, 2,09958f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[4], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1822,372f, 24,85507f, 2028,563f), Vector(0.0f, -54,18762f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[5], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1803,485f, 25,1771f, 2002,489f), Vector(0.0f, 290,7244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[6], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1798,97f, 25,09655f, 1993,416f), Vector(0.0f, 182,105f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[7], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1795,448f, 25,78157f, 2000,365f), Vector(0.0f, 118,2913f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[8], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1794,914f, 25,78991f, 2004,483f), Vector(-2,647841f, 114,8673f, -2,180698f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[9], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1793,881f, 25,25726f, 1997,619f), Vector(0.0f, 135,121f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[10], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1791,531f, 25,52722f, 1996,423f), Vector(0.0f, 115,9662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[11], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1805,628f, 25,04616f, 2016,437f), Vector(0.0f, 108,4979f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[12], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1808,037f, 25,01494f, 2009,817f), Vector(0.0f, -169,2195f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[13], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1801,643f, 25,23266f, 2011,429f), Vector(0.0f, 16,42324f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[14], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1806,699f, 25,15426f, 2007,334f), Vector(0.0f, -45,91245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[15], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1803,879f, 25,1062f, 2014,857f), Vector(0.0f, -25,4872f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[16], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1808,79f, 24,81205f, 2014,584f), Vector(0.0f, -39,2089f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[17], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1792,066f, 24,44232f, 1982,987f), Vector(0.0f, -19,16742f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[18], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1864,584f, 31,73415f, 2086,785f), Vector(0.0f, 88,5146f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[19], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1883,861f, 28,93203f, 2062,141f), Vector(0.0f, 182,2251f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[20], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1799,746f, 25,04407f, 2003,091f), Vector(0.0f, -19,16742f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[21], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1845,798f, 25,07938f, 2047,074f), Vector(0.0f, -56,62883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[22], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1846,52f, 24,93593f, 2049,428f), Vector(0.0f, -56,62883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[23], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1847,938f, 25,08555f, 2047,568f), Vector(0.0f, -56,62883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[24], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1849,01f, 24,8107f, 2050,401f), Vector(0.0f, -56,62883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[25], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[26]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1850,477f, 24,86396f, 2049,837f), Vector(0.0f, -56,62883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[26], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[27]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1849,56f, 24,69223f, 2052,129f), Vector(0.0f, -56,62883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[27], &iLocal_4 + 2400);
	*(&iLocal_4 + 2640) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2648[03]) = Vector(-1885,48f, 24,28943f, 2131,324f);
	*(&iLocal_4 + 2648[03] + 12) = Vector(0.0f, 147,9673f, 0.0f);
	*(&iLocal_4 + 2704[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1885,48f, 24,28943f, 2131,324f), Vector(0.0f, 147,9673f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2704[0], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[13]) = Vector(-1808.0f, 23,09019f, 1936f);
	*(&iLocal_4 + 2648[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2704[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1808.0f, 23,09019f, 1936f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2704[1], &iLocal_4 + 2640);
	*(&iLocal_4 + 2728) = CREATE_OBJECTSET_IN_LAYOUT("PlayerSquadPosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2736[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(3.0f, 0.0f, 1,8f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[0], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 3.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[1], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3.0f, 0.0f, 1,8f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[2], &iLocal_4 + 2728);
	*(&iLocal_4 + 2768) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2776[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1883,266f, 24,30063f, 2116,666f), Vector(0.0f, -186,6825f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[0], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1883,145f, 24,30477f, 2116,302f), Vector(0.0f, -193,5071f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[1], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1880,592f, 24,44632f, 2117,32f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[2], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1883,043f, 24,26879f, 2118,579f), Vector(0.0f, -20,14292f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[3], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1858,937f, 24,38991f, 2057,462f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[4], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1859,708f, 24,38991f, 2056,175f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[5], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1851,893f, 24,57966f, 2053,899f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[6], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1852,816f, 24,57966f, 2052,129f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[7], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1845,075f, 25,08248f, 2047,959f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[8], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1846,364f, 25,07695f, 2046,38f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[9], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1855,413f, 24,44505f, 2055,978f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[10], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1856,118f, 24,44505f, 2054,242f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[11], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1848,469f, 24,75199f, 2051,2f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[12], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1849,345f, 24,84705f, 2049,907f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[13], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1842,749f, 24,95713f, 2044,531f), Vector(0.0f, -230,1409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[14], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1886,677f, 24,11441f, 2151,479f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[15], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1882,646f, 24,30276f, 2149,091f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[16], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1887,928f, 24,28957f, 2146,269f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[17], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1887,641f, 24,20528f, 2142,191f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[18], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1885,896f, 24,08564f, 2159,586f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[19], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1885,947f, 24,11824f, 2163,418f), Vector(0.0f, 66,80524f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[20], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1885,312f, 24,27216f, 2134,89f), Vector(0.0f, -178,4098f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2776[21], &iLocal_4 + 2768);
	*(&iLocal_4 + 2960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GCowboy4", "Sit_Ground_Smoke_Pipe", Vector(-1657,778f, 40,0746f, 2608.0f), Vector(0.0f, 150,2448f, 0.0f));
	*(&iLocal_4 + 2968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GCowboy3", "sit_ground_play_harmonica", Vector(-1660f, 40,7295f, 2606,023f), Vector(0.0f, 142,0114f, 0.0f));
	*(&iLocal_4 + 2976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GCowboy2", "stand_eat_fruit", Vector(-1652f, 39,72658f, 2590,424f), Vector(0.0f, -159,7037f, 0.0f));
	*(&iLocal_4 + 2984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GCowboy1", "stand_peeing_b_any", Vector(-1656.0f, 39,72988f, 2586,647f), Vector(0.0f, -13,37707f, 0.0f));
	*(&iLocal_4 + 2992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "give_lasso", "give_lasso", Vector(-794,2725f, 92,20924f, 2418,455f), Vector(0.0f, -43,93177f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 3000) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
}

void ÌE+ÄÄ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x11DEA / 73194
{
	int iVar169;
	
	PatchTrapF();
	return;
	return StackVal, StackVal != StackVal - 12864 * 10795;
	((StackVal - StackVal))->f_66 = StackVal;
	PatchTrap1();
	*(-Vector(StackVal, StackVal, StackVal) != 1 * 10668 - 15228 - 12678) = StackVal;
}

void ÿDúïu,Gõ:B°:¯R&p   ÄàÉõAÌ¸DúÇÄà¹AËWëDúk(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69) //Position: 0x12B52 / 76626
{
	int iVar124;
	
	Global_4311617 = 0.0f;
	(StackVal != StackVal)->f_64066 = StackVal;
	PatchTrap3();
	4294953008->f_64036 = 3;
	return;
	Unknown_Function();
	4294953001->f_63975 = 4294953001;
	PatchTrapD();
}

void Function_310(int iParam0, int iParam1) //Position: 0x133F7 / 78839
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

bool Function_311() //Position: 0x13441 / 78913
{
	Function_291(&iLocal_4 + 208, 976, 2, 0);
	Function_291(&iLocal_4 + 208, 977, 2, 0);
	Function_291(&iLocal_4 + 208, 608, 2, 0);
	if (Function_282(&iLocal_4 + 208))
	{
		return 1;
	}
	return 0;
}

int Function_312() //Position: 0x1347B / 78971
{
	switch (iLocal_877)
	{
		case 0x00000063:
			Function_318(0);
			Function_315(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			bLocal_1248 = &iLocal_4 + 1328[0];
			GET_OBJECT_POSITION(&iLocal_4 + 1800[0], &Local_1203);
			Function_313(StackVal, &uLocal_817, Local_1203, &bLocal_1248, 0, 0, 0, 0, 1, 1);
			Function_334(&iLocal_994, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000002:
			iLocal_1093 = 0;
			iLocal_1092 = 0;
			Function_315(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			TASK_STAND_STILL(&bLocal_996, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
			GET_OBJECT_POSITION(&iLocal_4 + 2024[0], &Local_1203);
			Function_313(StackVal, &uLocal_817, Local_1203, &bLocal_1248, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			RESET_ACTOR_GAITS(&Global_54076, 0);
			RESET_ACTOR_GAITS(GET_MOUNT(&Global_54076), 0);
			Function_315(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			iLocal_1093 = 0;
			iLocal_995 = 0;
			iLocal_1092 = 0;
			GET_OBJECT_POSITION(&iLocal_4 + 2776[0], &Local_1203);
			Function_313(StackVal, &uLocal_817, Local_1203, &bLocal_1248, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_313(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x135AF / 79279
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
				Function_314(&uVar1, &uParam0);
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

void Function_314(var uParam0, float fParam1) //Position: 0x1384F / 79951
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

void Function_315(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x138D1 / 80081
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
	Function_278();
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
				Function_317(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_317(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_316()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_316()));
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
	if (Function_284(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_284(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_316() //Position: 0x13B83 / 80771
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

struct<8> Function_317(bool bParam0) //Position: 0x13C11 / 80913
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_318(bool bParam0) //Position: 0x13C23 / 80931
{
	Function_319(0, 0x40400000);
	Function_203();
	Function_202();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_319(float fParam0, float fParam1) //Position: 0x13C59 / 80985
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
	Function_321();
	Function_320();
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

void Function_320() //Position: 0x13D6A / 81258
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_321() //Position: 0x13D9E / 81310
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

bool Function_322() //Position: 0x13EA4 / 81572
{
	switch (iLocal_1229)
	{
		case 0x00000006:
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_927)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_927));
			}
			if (!IS_ACTOR_VALID(&bLocal_996))
			{
				Function_298();
				bLocal_996 = &iLocal_4 + 912[02];
				DECOR_SET_BOOL(&bLocal_996, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
				TASK_PRIORITY_SET(&bLocal_996, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_996, 1);
				SET_ACTOR_FACTION(&bLocal_996, 21);
				bLocal_998 = &iLocal_4 + 912[12];
				TASK_PRIORITY_SET(&bLocal_998, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_998, 1);
				SET_ACTOR_FACTION(&bLocal_998, 21);
			}
			if (!iLocal_943[4])
			{
				Function_279(&bLocal_927, &iLocal_4 + 2776[0], 1, 1, 1);
				Function_279(&bLocal_925, &iLocal_4 + 2776[2], 1, 1, 1);
				Function_279(&bLocal_996, &iLocal_4 + 2776[2], 1, 1, 1);
			}
			iLocal_1229 = 7;
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(&iLocal_4 + 1048[02]))
			{
				Function_328();
				if (IS_ACTOR_VALID(&bLocal_927))
				{
					DESTROY_ACTOR(&bLocal_927);
				}
				bLocal_927 = &iLocal_4 + 1048[02];
				Function_326(&bLocal_927, 0);
				if (!GET_ACTOR_ENUM(&bLocal_927) != 992)
				{
					Function_77(&Global_21369 + 72 + 32, 2);
					Function_325(&bLocal_927, 0);
				}
				Function_279(&bLocal_927, &iLocal_4 + 2776[0], 1, 1, 1);
				ANIMAL_ACTOR_SET_DOCILE(&bLocal_927, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_927, false);
			}
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
			}
			if (!IS_ACTOR_RIDING(&bLocal_925))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
			}
			iLocal_1229 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_943[4])
			{
				Function_323(&Global_54076, &iLocal_4 + 2776[0], 1, 1, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2776[2], 1, 1, 1);
			}
			TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
			iLocal_1229 = 9;
			break;
		
		case 0x00000009:
			iLocal_1229 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_323(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x140B7 / 82103
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
				Function_324(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_324(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x141D7 / 82391
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

void Function_325(bool bParam0, int iParam1) //Position: 0x142A6 / 82598
{
	DECOR_SET_OBJECT(&Global_54076, "SettingPlayerHorse", &bParam0);
	DECOR_SET_BOOL(&Global_54076, "NewPlayerHorse_Wipe", &iParam1);
	return;
}

void Function_326(bool bParam0, int iParam1) //Position: 0x142ED / 82669
{
	Function_327(&iParam1);
	*(&Global_21369 + 128) = &bParam0;
	return;
}

void Function_327(float fParam0) //Position: 0x14302 / 82690
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

void Function_328() //Position: 0x144D1 / 83153
{
	*(&iLocal_4 + 1072) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "herdHorseWild02set", 0);
	*(&iLocal_4 + 1080) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "herdHorseWild02"));
	*(&iLocal_4 + 1048[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 978, Vector(-1832f, 26,10194f, 2676.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1072, &iLocal_4 + 1048[02]);
	SQUAD_JOIN(&iLocal_4 + 1048[02], &iLocal_4 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1048[02], false);
	SET_ACTOR_RIDEABLE(&iLocal_4 + 1048[02], 0);
	DECOR_SET_FLOAT(&iLocal_4 + 1048[02], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL(&iLocal_4 + 1048[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1048[02], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1048[02], true);
	Function_329(&iLocal_4 + 1048[02]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 1048[02], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1048[02], 1);
	return;
}

void Function_329(var uParam0) //Position: 0x145FE / 83454
{
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&uParam0, "nocrime", true);
	}
	return;
}

int Function_330() //Position: 0x14635 / 83509
{
	switch (iLocal_877)
	{
		case 0x00000063:
			Function_333(&iLocal_879);
			if (IS_ACTOR_VALID(&bLocal_925))
			{
				Function_331(&bLocal_925, &iLocal_879);
			}
			Function_331(&Global_54076, &iLocal_879);
			return 1;
			break;
		
		case 0x00000001:
			Function_333(&iLocal_879);
			if (IS_ACTOR_VALID(&bLocal_925))
			{
				Function_331(&bLocal_925, &iLocal_879);
			}
			if (IS_ACTOR_VALID(&bLocal_996))
			{
				Function_331(&bLocal_996, &iLocal_879);
			}
			if (IS_ACTOR_VALID(&bLocal_927))
			{
				Function_331(&bLocal_927, &iLocal_879);
				ANIMAL_ACTOR_SET_DOCILE(&bLocal_927, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_927, false);
			}
			if (IS_ACTOR_VALID(&bLocal_1054))
			{
				Function_331(&bLocal_1054, &iLocal_879);
				ANIMAL_ACTOR_SET_DOCILE(&bLocal_1054, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1054, false);
			}
			Function_331(&Global_54076, &iLocal_879);
			break;
	}
	return 0;
}

void Function_331(bool bParam0, struct<5>[] Param1) //Position: 0x146FC / 83708
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		bVar0 = Function_332(&bParam0, &Param1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= Param1)
			{
				if (!IS_ACTOR_VALID(&(Param1[iVar15])))
				{
					Param1[iVar15] = &bParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_332(int iParam0, struct<5>[] Param1) //Position: 0x1474B / 83787
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param1)
	{
		if (IS_ACTOR_VALID(&(Param1[iVar05])))
		{
			if (&iParam0 == &Param1[iVar05])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_333(struct<5>[] Param0) //Position: 0x14785 / 83845
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar05] = "";
		(&Param0[iVar05] + 8) = Vector(0.0f, 0.0f, 0.0f);
		Param0[iVar05].f_20 = 0.0f;
		*(&Param0[iVar05] + 24) = Vector(0.0f, 0.0f, 0.0f);
		Param0[iVar05].f_36 = 0.0f;
		iVar0++;
	}
	return;
}

void Function_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x147DA / 83930
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_335(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_335(int iParam0) //Position: 0x14804 / 83972
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

int Function_336() //Position: 0x14D59 / 85337
{
	Function_291(&iLocal_4 + 760, 978, 2, 0);
	Function_291(&iLocal_4 + 760, 976, 2, 0);
	Function_291(&iLocal_4 + 760, 977, 2, 0);
	Function_291(&iLocal_4 + 760, 170, 2, 0);
	Function_291(&iLocal_4 + 760, 171, 2, 0);
	Function_291(&iLocal_4 + 760, 172, 2, 0);
	Function_291(&iLocal_4 + 760, 173, 2, 0);
	Function_291(&iLocal_4 + 760, 174, 2, 0);
	Function_291(&iLocal_4 + 760, 175, 2, 0);
	if (Function_282(&iLocal_4 + 760))
	{
		return 1;
	}
	return 0;
}

bool Function_337(int iParam0) //Position: 0x14DE5 / 85477
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

void Function_338(int iParam0) //Position: 0x14E01 / 85505
{
	Function_339(&iParam0, 0.0f);
	return;
}

void Function_339(vector3 vParam0) //Position: 0x14E0E / 85518
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_340() //Position: 0x14E33 / 85555
{
	Function_341(&(Local_1309[015]));
	Function_341(&(Local_1309[115]));
	Function_341(&(Local_1309[215]));
	Function_341(&(Local_1309[315]));
	Function_341(&(Local_1309[415]));
	Function_341(&(Local_1309[515]));
	return;
}

void Function_341(struct<69> Param0) //Position: 0x14E6F / 85615
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

bool Function_342(int iParam0) //Position: 0x14F2F / 85807
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_318(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_274();
			iLocal_922 = Global_46736[2];
			if (!Function_337(iLocal_922))
			{
				Function_343(&Local_819);
			}
			Function_279(&Global_54076, &iLocal_4 + 1800[0], 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			if (!iLocal_943[0])
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				iLocal_922 = Global_46736[2];
				if (!Function_337(iLocal_922))
				{
					Function_343(&Local_819);
				}
				Function_279(&Global_54076, &iLocal_4 + 1944[1], 1, 1, 1);
			}
			Function_318(0);
			SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_274();
			return 1;
			break;
		
		case 0x00000002:
			if (!iLocal_943[1])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_922 = Global_46736[2];
				if (!Function_337(iLocal_922))
				{
					Function_343(&Local_819);
				}
				Function_279(&Global_54076, &iLocal_4 + 2024[0], 1, 1, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_274();
			return 1;
			break;
		
		case 0x00000003:
			SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_274();
			iLocal_922 = Global_46736[0];
			if (!Function_337(iLocal_922))
			{
				Function_343(&Local_819);
			}
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (!iLocal_943[2])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_279(&Global_54076, &iLocal_4 + 2144[0], 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			iLocal_922 = Global_46736[0];
			if (!Function_337(iLocal_922))
			{
				Function_343(&Local_819);
			}
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_274();
			if (!iLocal_943[3])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Function_323(&Global_54076, &iLocal_4 + 2408[2], 1, 1, 1);
			}
			Function_338(&iLocal_931);
			iLocal_878 = 1;
			return 1;
			break;
		
		case 0x00000065:
			Function_318(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_925, GET_ACTOR_MAX_HEALTH(&bLocal_925));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_274();
			iLocal_922 = Global_46736[0];
			if (!Function_337(iLocal_922))
			{
				Function_343(&Local_819);
			}
			if (!iLocal_943[4])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Function_323(&Global_54076, &iLocal_4 + 2776[0], 1, 1, 1);
			}
			Function_338(&iLocal_931);
			iLocal_878 = 1;
			return 1;
			break;
		
		case 0x00000062:
			return 0;
			break;
	}
	return 0;
}

void Function_343(int iParam0) //Position: 0x1525F / 86623
{
	if (!Function_250(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_186(1, 0, 1);
		}
	}
	return;
}

void Function_344() //Position: 0x1527B / 86651
{
	if (iLocal_878 < 3 && iLocal_878 > 105)
	{
		Function_420(&iLocal_939, 100.0f, 180.0f, &bLocal_1030, "Stallion_return", "Stallion_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
		if (iLocal_1212)
		{
			Function_418();
		}
		Function_417();
		if (iLocal_878 >= 7)
		{
			Function_416();
		}
	}
	switch (iLocal_878)
	{
		case 0x00000000:
			if (Function_342(iLocal_877))
			{
				Function_334(&iLocal_994, 56, 0, 4294967295, 4294967295);
				Function_338(&iLocal_931);
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
				iLocal_878 = 1;
				iLocal_1228 = 6;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_943[3])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_337(iLocal_922) || iLocal_922 != 4294967295)) && Function_414())
				{
					Function_338(&iLocal_931);
					iLocal_878 = 2;
				}
			}
			else if (Function_414())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_404())
			{
				if (Function_403(StackVal, StackVal, StackVal, StackVal, StackVal, Local_819, iLocal_877))
				{
					Function_338(&iLocal_931);
					iLocal_878 = 3;
				}
				else
				{
					bLocal_1061 = false;
					while (bLocal_1061 <= SQUAD_GET_SIZE(&iLocal_4 + 1296))
					{
						bLocal_1056 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1296, bLocal_1061);
						if (IS_ACTOR_RIDING(&bLocal_1056))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1056, 1);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1056, "Ranch06_stop_horses", 0);
							bLocal_977 = TASK_SEQUENCE_OPEN();
							TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 1.0f), 0, 0);
							if (Function_402())
							{
								TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
							}
							else
							{
								TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
							}
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1056, bLocal_977);
							TASK_SEQUENCE_RELEASE(bLocal_977, 1);
							TASK_PRIORITY_SET(&bLocal_1056, true);
						}
						bLocal_1061++;
					}
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1014, 0);
					SET_CRIPPLE_FLAG(&bLocal_1014, 2);
					TASK_MOUNT(&bLocal_1014, &bLocal_1016, 0, 1, 2, 2147483647);
					if (IS_ACTOR_RIDING(&bLocal_1014))
					{
						ACTOR_DISMOUNT_NOW(&bLocal_1014);
					}
					Function_334(&iLocal_994, 17, 0, 4294967295, 4294967295);
					Function_338(&iLocal_931);
					iLocal_878 = 4;
				}
				Function_401(iLocal_877);
				Function_392(StackVal, Function_401(iLocal_877), iLocal_877, Global_46736[0], Function_400(iLocal_877), 2);
			}
			break;
		
		case 0x00000003:
			Function_391();
			if (Function_373())
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1014, 0);
				SET_CRIPPLE_FLAG(&bLocal_1014, 2);
				TASK_MOUNT(&bLocal_1014, &bLocal_1016, 0, 1, 2, 2147483647);
				Function_338(&iLocal_931);
				iLocal_878 = 4;
			}
			break;
		
		case 0x00000004:
			Function_334(&iLocal_994, 17, 0, 4294967295, 4294967295);
			if (!IS_ACTOR_VALID(&bLocal_1030))
			{
				if (IS_ACTOR_ALIVE(&iLocal_4 + 1048[02]))
				{
					bLocal_1030 = &iLocal_4 + 1048[02];
				}
				else
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1048[02]))
					{
						DESTROY_ACTOR(&iLocal_4 + 1048[02]);
					}
					Function_328();
					bLocal_1030 = &iLocal_4 + 1048[02];
				}
			}
			SQUAD_LEAVE(&bLocal_1030);
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			DECOR_SET_FLOAT(&bLocal_1030, "HorseCaptureBoltTime", 3,5f);
			DECOR_SET_BOOL(&bLocal_1030, "BeLassoBounceOff", true);
			DECOR_SET_BOOL(&bLocal_1030, "CanBeLasso", true);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_1030);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1030);
			TASK_STAND_STILL(&bLocal_1030, -1.0f, 0, 0);
			RESET_ACTOR_GAITS(&bLocal_1030, 0);
			Function_279(&bLocal_1030, &iLocal_4 + 2408[18], 1, 1, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1030, 2);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_1030, &Global_54076, 1);
			DECOR_SET_FLOAT(&bLocal_1030, "fHowLong", 30.0f);
			Function_372(&iLocal_4 + 1080);
			Function_214(3, 0, 1);
			Function_212();
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			iLocal_1215 = 0;
			Function_362();
			Function_360();
			SET_ACTOR_INVULNERABILITY(&Global_54076, false);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1030, &iLocal_4 + 3040, 2, 0, 0, 1, false);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1030, true);
			AI_AVOID_IGNORE_ACTOR(&bLocal_1030, &Global_54076);
			Function_338(&iLocal_931);
			iLocal_878 = 6;
			break;
		
		case 0x00000006:
			if (Function_245(&iLocal_931) < 2.0f)
			{
				if (HUD_IS_FADED())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (!HUD_IS_FADING())
				{
					DECOR_SET_FLOAT(&bLocal_1030, "HorseCaptureBoltTime", 3,5f);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_1030);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1030);
					Function_279(&bLocal_1030, &iLocal_4 + 2408[18], 1, 1, 1);
					MEMORY_REPORT_POSITION_AUTO(&bLocal_1030, &Global_54076, 1);
					DECOR_SET_FLOAT(&bLocal_1030, "fHowLong", 30.0f);
					Function_372(&iLocal_4 + 1080);
					Function_214(3, 0, 1);
					Function_212();
					bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1030, &iLocal_4 + 3040, 3, 0, 0, 1, false);
					DECOR_SET_BOOL(&bLocal_1030, "CanBeLasso", false);
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1080);
					SET_ACTOR_MAX_SPEED(&bLocal_1030, 3);
					SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
					SET_ACTOR_MIN_SPEED(&bLocal_1030, 2);
					DECOR_SET_BOOL(&bLocal_1030, "DisableBuckOff", true);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925);
					if (!IS_ACTOR_RIDEABLE(&bLocal_1030))
					{
						SET_ACTOR_RIDEABLE(&bLocal_1030, 1);
					}
					Function_359();
					if (SQUAD_IS_VALID(&iLocal_4 + 1184))
					{
						bLocal_1061 = false;
						while (bLocal_1061 <= SQUAD_GET_SIZE(&iLocal_4 + 1184))
						{
							bLocal_1056 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1184, bLocal_1061);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1056, &iLocal_4 + 1520[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056, &iLocal_4 + 1520[7]);
							SET_ACTOR_VOLUME_PARAMETERS(&bLocal_1056, 4, 1);
							bLocal_1061++;
						}
					}
					if (SQUAD_IS_VALID(&bLocal_1065))
					{
						bLocal_1061 = false;
						while (bLocal_1061 <= SQUAD_GET_SIZE(&bLocal_1065))
						{
							bLocal_1056 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, bLocal_1061);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1056, &iLocal_4 + 1520[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056, &iLocal_4 + 1520[7]);
							SET_ACTOR_VOLUME_PARAMETERS(&bLocal_1056, 4, 1);
							bLocal_1061++;
						}
					}
					if (SQUAD_IS_VALID(&bLocal_1067))
					{
						bLocal_1061 = false;
						while (bLocal_1061 <= SQUAD_GET_SIZE(&bLocal_1067))
						{
							bLocal_1056 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1067, bLocal_1061);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1056, &iLocal_4 + 1520[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056, &iLocal_4 + 1520[7]);
							SET_ACTOR_VOLUME_PARAMETERS(&bLocal_1056, 4, 1);
							bLocal_1061++;
						}
					}
					if (SQUAD_IS_VALID(&iLocal_4 + 1296))
					{
						bLocal_1061 = false;
						while (bLocal_1061 <= SQUAD_GET_SIZE(&iLocal_4 + 1296))
						{
							bLocal_1056 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1296, bLocal_1061);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1056, &iLocal_4 + 1520[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1056, &iLocal_4 + 1520[7]);
							SET_ACTOR_VOLUME_PARAMETERS(&bLocal_1056, 4, 1);
							bLocal_1061++;
						}
					}
					if (Function_247(&iLocal_1034))
					{
						Function_415(&iLocal_1034);
					}
					iLocal_1062 = 0;
					Function_358();
					Function_338(&iLocal_931);
					iLocal_878 = 7;
				}
			}
			break;
		
		case 0x00000007:
			Function_357();
			Function_338(&iLocal_931);
			Function_338(&iLocal_935);
			Function_338(&iLocal_939);
			iLocal_878 = 8;
			break;
		
		case 0x00000008:
			Function_357();
			Function_355();
			if (Function_245(&iLocal_931) <= 4.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_354("Ranch06_obj04a");
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 9;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1030)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_927);
					TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_927, &iLocal_4 + 1600[0], 4, 1);
					Function_353();
					Function_334(&iLocal_994, 11, 0, 4294967295, 4294967295);
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
					iLocal_878 = 10;
				}
			}
			break;
		
		case 0x00000024:
			Function_357();
			Function_355();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_354("Ranch06_obj04a");
			Function_338(&iLocal_931);
			Function_338(&iLocal_935);
			Function_338(&iLocal_939);
			iLocal_878 = 9;
			break;
		
		case 0x00000009:
			Function_357();
			Function_355();
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1030)
				{
					Function_334(&iLocal_994, 11, 0, 4294967295, 4294967295);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_927);
					TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_927, &iLocal_4 + 1600[0], 4, 1);
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
					iLocal_878 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_357();
			Function_355();
			if (!IS_ACTOR_RIDEABLE(&bLocal_1030))
			{
				SET_ACTOR_RIDEABLE(&bLocal_1030, 1);
			}
			if (!Function_140())
			{
				if (!iLocal_1211)
				{
					Function_139("Ranch06_stallion_help_02", 10.0f, 1, 0, 2, 1, 0);
					iLocal_1211 = 1;
				}
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 11;
			}
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(&bLocal_927);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 36;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				GET_ACTOR_VELOCITY(GET_LASSO_TARGET(&Global_54076), &Local_1194);
				bLocal_1206 = VMAG(Local_1194);
				if (bLocal_1206 >= 6.0f)
				{
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
					iLocal_878 = 13;
				}
			}
			break;
		
		case 0x0000000B:
			Function_357();
			Function_355();
			if (!Function_140())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_354("Ranch06_obj04b");
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 12;
			}
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(&bLocal_927);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 36;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				GET_ACTOR_VELOCITY(GET_LASSO_TARGET(&Global_54076), &Local_1194);
				bLocal_1206 = VMAG(Local_1194);
				if (bLocal_1206 >= 4.0f)
				{
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
					iLocal_878 = 13;
				}
			}
			break;
		
		case 0x0000000C:
			Function_357();
			Function_355();
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				Function_334(&iLocal_994, 17, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(&bLocal_927);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 8;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				GET_ACTOR_VELOCITY(GET_LASSO_TARGET(&Global_54076), &Local_1194);
				bLocal_1206 = VMAG(Local_1194);
				if (bLocal_1206 >= 6.0f)
				{
					if (!iLocal_1210)
					{
						Function_139("Ranch06_stallion_help_03", 10.0f, 1, 0, 2, 1, 0);
						iLocal_1210 = 1;
					}
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
					iLocal_878 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			Function_357();
			Function_355();
			Function_354("Ranch06_obj04c");
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
			{
				Function_334(&iLocal_994, 17, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(&bLocal_927);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 8;
			}
			if (!Function_140())
			{
				if (!iLocal_1210)
				{
					Function_139("Ranch06_stallion_help_03", 10.0f, 1, 0, 2, 1, 0);
					iLocal_1210 = 1;
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
				}
			}
			break;
		
		case 0x0000000E:
			Function_352();
			Function_354("Ranch06_obj04c");
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!iLocal_1221)
				{
					iLocal_1221 = 1;
					Function_338(&iLocal_1232);
				}
				else if (Function_245(&iLocal_1232) > 3.0f)
				{
				}
				else
				{
					Function_334(&iLocal_994, 3, 0, 4294967295, 4294967295);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1030));
					}
					ANIMAL_ACTOR_SET_DOCILE(&bLocal_1030, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1030, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_1030);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_1030);
					SQUAD_LEAVE(&bLocal_1030);
					Function_326(&bLocal_1030, 0);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_927);
					TASK_FOLLOW_ACTOR(&bLocal_927, &Global_54076);
					Function_338(&iLocal_931);
					Function_338(&iLocal_935);
					Function_338(&iLocal_939);
					iLocal_878 = 16;
				}
			}
			else
			{
				DECOR_SET_BOOL(&bLocal_1030, "DisableBuckOff", true);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				Function_334(&iLocal_994, 17, 0, 4294967295, 4294967295);
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
				iLocal_878 = 8;
			}
			if (Global_6627)
			{
				Function_330();
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				Function_334(&iLocal_994, 11, 0, 4294967295, 4294967295);
				iLocal_878 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_352();
			Function_348(StackVal, "$/cutscene/RANCH06_CS05/RANCH06_CS05", &uLocal_921, Local_1203, 58883, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&bLocal_1030) == 0)
			{
				Function_334(&iLocal_994, 3, 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1030));
				}
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1030);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_1030);
				SQUAD_LEAVE(&bLocal_1030);
				Function_326(&bLocal_1030, 0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_927);
				TASK_FOLLOW_ACTOR(&bLocal_927, &Global_54076);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 16;
			}
			else if (!IS_ACTOR_RIDING(&Global_54076))
			{
				DECOR_SET_BOOL(&bLocal_1030, "DisableBuckOff", true);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
				Function_334(&iLocal_994, 17, 0, 4294967295, 4294967295);
				iLocal_878 = 8;
			}
			break;
		
		case 0x00000010:
			if (!iLocal_1212)
			{
				iLocal_1212 = 1;
				iLocal_1090 = 1;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1024);
			}
			iLocal_1218 = 0;
			Function_354("Ranch06_go_to_Bonnie");
			Function_347();
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bLocal_925, 0);
			iLocal_1207 = (Function_346(&Global_54076, &bLocal_925) + 10.0f);
			fLocal_1208 = (iLocal_1207 + 50.0f);
			Function_338(&iLocal_931);
			Function_338(&iLocal_935);
			Function_338(&iLocal_939);
			iLocal_878 = 17;
			break;
		
		case 0x00000011:
			GET_OBJECT_POSITION(&iLocal_4 + 2776[1], &Local_1203);
			Function_348(StackVal, "$/cutscene/RANCH06_CS05/RANCH06_CS05", &uLocal_921, Local_1203, 58883, 1, 150.0f, 250.0f, 2, 1, 2, 2, 0, 1);
			if (!iLocal_1212)
			{
				iLocal_1212 = 1;
				iLocal_1090 = 1;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1024);
			}
			Function_420(&iLocal_939, iLocal_1207, fLocal_1208, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
			Function_345();
			if (!iLocal_1218)
			{
				if (!IS_ACTOR_MOUNTED(&Global_54076) && !GET_MOUNT(&Global_54076) != &bLocal_1030)
				{
					Function_354("Stallion_mount");
					Function_212();
					bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
					iLocal_1218 = 1;
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_1178))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
					{
						bLocal_1178 = GET_BLIP_ON_ACTOR(&bLocal_1030);
					}
					else
					{
						bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
					}
				}
				if (IS_ACTOR_RIDING(&Global_54076) && GET_MOUNT(&Global_54076) != &bLocal_1030)
				{
					Function_354("Ranch06_go_to_Bonnie");
					Function_212();
					iLocal_1218 = 0;
					Function_347();
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 15.0f))
			{
				if (IS_ACTOR_RIDING(&Global_54076) && GET_MOUNT(&Global_54076) != &bLocal_1030)
				{
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 2776[1], 2, 0, 1);
					TASK_FACE_ACTOR(0, &bLocal_925, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 2776[3], 2, 0, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_925, true);
					AI_AVOID_IGNORE_ACTOR(&bLocal_925, &Global_54076);
					TASK_STAND_STILL(&bLocal_1030, -1.0f, 0, 0);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1030);
					DESTROY_ACTOR(&bLocal_927);
					SET_ACTOR_RIDEABLE(&bLocal_927, 1);
					bLocal_927 = &bLocal_1030;
					Function_326(&bLocal_927, 0);
					if (!StackVal + 976 != 992)
					{
						Function_77(&Global_21369 + 72 + 32, 2);
						Function_325(&bLocal_927, 0);
					}
					Function_338(&iLocal_931);
					SET_ACTOR_INVULNERABILITY(&bLocal_927, false);
					iLocal_878 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			GET_OBJECT_POSITION(&iLocal_4 + 2776[1], &Local_1203);
			Function_348(StackVal, "$/cutscene/RANCH06_CS05/RANCH06_CS05", &uLocal_921, Local_1203, 58883, 1, 150.0f, 250.0f, 2, 1, 2, 2, 0, 1);
			if (Function_245(&iLocal_931) < 3.0f || ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 3.0f))
			{
				AI_AVOID_CLEAR_IGNORE_ACTOR(&bLocal_925);
				Function_340();
				Function_219();
				iLocal_943[4] = 1;
				Function_338(&iLocal_931);
				iLocal_877 = 101;
				iLocal_878 = 0;
			}
			break;
	}
	return;
}

void Function_345() //Position: 0x1647F / 91263
{
	if (!iLocal_1087)
	{
		Function_279(&bLocal_1006, &iLocal_4 + 2776[4], 1, 1, 1);
		Function_279(&bLocal_1008, &iLocal_4 + 2776[4], 1, 1, 1);
		MEMORY_PREFER_RIDING(&bLocal_1006, true);
		Function_279(&bLocal_1010, &iLocal_4 + 2776[5], 1, 1, 1);
		Function_279(&bLocal_1012, &iLocal_4 + 2776[5], 1, 1, 1);
		MEMORY_PREFER_RIDING(&bLocal_1010, true);
		Function_279(&bLocal_1014, &iLocal_4 + 2776[6], 1, 1, 1);
		Function_279(&bLocal_1016, &iLocal_4 + 2776[6], 1, 1, 1);
		MEMORY_PREFER_RIDING(&bLocal_1014, true);
		Function_279(&bLocal_1018, &iLocal_4 + 2776[7], 1, 1, 1);
		Function_279(&bLocal_1020, &iLocal_4 + 2776[7], 1, 1, 1);
		MEMORY_PREFER_RIDING(&bLocal_1018, true);
		Function_279(&bLocal_1022, &iLocal_4 + 2776[8], 1, 1, 1);
		Function_279(&bLocal_1028, &iLocal_4 + 2776[8], 1, 1, 1);
		MEMORY_PREFER_RIDING(&bLocal_1022, true);
		iLocal_1087 = 1;
	}
	if (iLocal_1087 && !iLocal_1088)
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1006, &bLocal_1008);
		ACTOR_MOUNT_ACTOR(&bLocal_1010, &bLocal_1012);
		ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1016);
		ACTOR_MOUNT_ACTOR(&bLocal_1018, &bLocal_1020);
		ACTOR_MOUNT_ACTOR(&bLocal_1022, &bLocal_1028);
		Function_279(&iLocal_4 + 1088[02], &iLocal_4 + 2776[10], 1, 1, 1);
		Function_279(&iLocal_4 + 1088[12], &iLocal_4 + 2776[11], 1, 1, 1);
		Function_279(&iLocal_4 + 1088[22], &iLocal_4 + 2776[12], 1, 1, 1);
		Function_279(&iLocal_4 + 1088[32], &iLocal_4 + 2776[13], 1, 1, 1);
		Function_279(&iLocal_4 + 1088[42], &iLocal_4 + 2776[14], 1, 1, 1);
		ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[02], false);
		ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[12], false);
		ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[22], false);
		ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[32], false);
		ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[42], false);
		iLocal_1088 = 1;
	}
	if (iLocal_1088 && !bLocal_1089)
	{
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1088[02]))
		{
			if (!IS_OBJECT_VALID(&uLocal_1184))
			{
				uLocal_1184 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 1088[02]), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&uLocal_1184))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1184, &iLocal_4 + 1088[02], "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1184, &bLocal_1006, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&uLocal_1184);
					LEASH_RESTART(&uLocal_1184);
					LEASH_SET_CONSTRAINT_LENGTH(&uLocal_1184, 12.0f);
					LEASH_SET_LEASH_LENGTH(&uLocal_1184, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1088[12]))
		{
			if (!IS_OBJECT_VALID(&uLocal_1186))
			{
				uLocal_1186 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 1088[12]), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&uLocal_1186))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1186, &iLocal_4 + 1088[12], "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1186, &bLocal_1010, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&uLocal_1186);
					LEASH_RESTART(&uLocal_1186);
					LEASH_SET_CONSTRAINT_LENGTH(&uLocal_1186, 12.0f);
					LEASH_SET_LEASH_LENGTH(&uLocal_1186, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1088[22]))
		{
			if (!IS_OBJECT_VALID(&uLocal_1188))
			{
				uLocal_1188 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 1088[22]), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&uLocal_1188))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1188, &iLocal_4 + 1088[22], "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1188, &bLocal_1014, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&uLocal_1188);
					LEASH_RESTART(&uLocal_1188);
					LEASH_SET_CONSTRAINT_LENGTH(&uLocal_1188, 12.0f);
					LEASH_SET_LEASH_LENGTH(&uLocal_1188, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1088[32]))
		{
			if (!IS_OBJECT_VALID(&uLocal_1190))
			{
				uLocal_1190 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 1088[32]), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&uLocal_1190))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1190, &iLocal_4 + 1088[32], "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uLocal_1190, &bLocal_1018, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&uLocal_1190);
					LEASH_RESTART(&uLocal_1190);
					LEASH_SET_CONSTRAINT_LENGTH(&uLocal_1190, 12.0f);
					LEASH_SET_LEASH_LENGTH(&uLocal_1190, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1088[42]))
		{
			if (!IS_OBJECT_VALID(&iLocal_1192))
			{
				iLocal_1192 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 1088[42]), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_1192))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &iLocal_1192, &iLocal_4 + 1088[42], "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &iLocal_1192, &bLocal_1022, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&iLocal_1192);
					LEASH_RESTART(&iLocal_1192);
					LEASH_SET_CONSTRAINT_LENGTH(&iLocal_1192, 12.0f);
					LEASH_SET_LEASH_LENGTH(&iLocal_1192, 9.0f);
				}
			}
		}
		GET_OBJECT_POSITION(&iLocal_4 + 2776[15], &Local_968);
		bLocal_977 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &Local_968, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1006, bLocal_977);
		TASK_SEQUENCE_RELEASE(bLocal_977, 1);
		TASK_PRIORITY_SET(&bLocal_1006, true);
		GET_OBJECT_POSITION(&iLocal_4 + 2776[16], &Local_968);
		bLocal_977 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &Local_968, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1010, bLocal_977);
		TASK_SEQUENCE_RELEASE(bLocal_977, 1);
		TASK_PRIORITY_SET(&bLocal_1010, true);
		GET_OBJECT_POSITION(&iLocal_4 + 2776[17], &Local_968);
		bLocal_977 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &Local_968, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1014, bLocal_977);
		TASK_SEQUENCE_RELEASE(bLocal_977, 1);
		TASK_PRIORITY_SET(&bLocal_1014, true);
		GET_OBJECT_POSITION(&iLocal_4 + 2776[18], &Local_968);
		bLocal_977 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &Local_968, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1018, bLocal_977);
		TASK_SEQUENCE_RELEASE(bLocal_977, 1);
		TASK_PRIORITY_SET(&bLocal_1018, true);
		GET_OBJECT_POSITION(&iLocal_4 + 2776[19], &Local_968);
		bLocal_977 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &Local_968, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1022, bLocal_977);
		TASK_SEQUENCE_RELEASE(bLocal_977, 1);
		TASK_PRIORITY_SET(&bLocal_1022, true);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1006);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1010);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1014);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1018);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1022);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 1088[02]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 1088[12]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 1088[22]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 1088[32]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 1088[42]);
		Function_360();
		bLocal_1089 = true;
	}
	if (bLocal_1089)
	{
		if (IS_ACTOR_VALID(&bLocal_1006))
		{
			if (GET_TASK_STATUS(&bLocal_1006, 0) != 1)
			{
				if (GET_TASK_STATUS(&bLocal_1006, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(&bLocal_1006, false);
					SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1088[02], false);
					TASK_GO_NEAR_OBJECT(&bLocal_1006, &iLocal_4 + 2144[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR(&iLocal_4 + 1088[02], &bLocal_1006);
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_1010))
		{
			if (GET_TASK_STATUS(&bLocal_1010, 0) != 1)
			{
				if (GET_TASK_STATUS(&bLocal_1010, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(&bLocal_1010, false);
					SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1088[12], false);
					TASK_GO_NEAR_OBJECT(&bLocal_1010, &iLocal_4 + 2144[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR(&iLocal_4 + 1088[12], &bLocal_1010);
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_1014))
		{
			if (GET_TASK_STATUS(&bLocal_1014, 0) != 1)
			{
				if (GET_TASK_STATUS(&bLocal_1014, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(&bLocal_1014, false);
					SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1088[22], false);
					TASK_GO_NEAR_OBJECT(&bLocal_1014, &iLocal_4 + 2144[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR(&iLocal_4 + 1088[22], &bLocal_1014);
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_1018))
		{
			if (GET_TASK_STATUS(&bLocal_1018, 0) != 1)
			{
				if (GET_TASK_STATUS(&bLocal_1018, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(&bLocal_1018, false);
					SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1088[32], false);
					TASK_GO_NEAR_OBJECT(&bLocal_1018, &iLocal_4 + 2144[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR(&iLocal_4 + 1088[32], &bLocal_1018);
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_1022))
		{
			if (GET_TASK_STATUS(&bLocal_1022, 0) != 1)
			{
				if (GET_TASK_STATUS(&bLocal_1022, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(&bLocal_1022, false);
					SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1088[42], false);
					TASK_GO_NEAR_OBJECT(&bLocal_1022, &iLocal_4 + 2144[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR(&iLocal_4 + 1088[42], &bLocal_1022);
				}
			}
		}
	}
	return;
}

float Function_346(float fParam0, bool bParam1) //Position: 0x16E46 / 93766
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

void Function_347() //Position: 0x16F3B / 94011
{
	Function_214(3, 1, 1);
	if (IS_BLIP_VALID(&bLocal_1178))
	{
		REMOVE_BLIP(&bLocal_1178);
	}
	if (IS_OBJECT_VALID(&iLocal_1071))
	{
		Function_213(&iLocal_1071);
		Function_208();
	}
	if (IS_BLIP_VALID(&uLocal_1182))
	{
		REMOVE_BLIP(&uLocal_1182);
	}
	if (IS_BLIP_VALID(&uLocal_1180))
	{
		REMOVE_BLIP(&uLocal_1180);
	}
	return;
}

int Function_348(int iParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x16F8E / 94094
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_349(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_351()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0))
				{
					uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(&iParam0, 0, &iParam8, &iParam9, &iParam10, &iParam11);
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
	else if ((!Function_349(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_351()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_349(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_349(var uParam0, struct<2> Param1, float fParam3) //Position: 0x1726D / 94829
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_350(&uParam0);
		if (VDIST(Function_350(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_350(var uParam0) //Position: 0x172F9 / 94969
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

int Function_351() //Position: 0x17365 / 95077
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_352() //Position: 0x17374 / 95092
{
	if (IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
	}
	return;
}

void Function_353() //Position: 0x1738C / 95116
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_LassoStallion", "Ranch06_LassoStallion", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354(bool bParam0) //Position: 0x173DF / 95199
{
	if (!IS_STRING_VALID(&uLocal_1156))
	{
		if (!Function_247(&iLocal_1162))
		{
			Function_338(&iLocal_1162);
		}
		uLocal_1156 = &bParam0;
	}
	else if (!STRINGS_ARE_EQUAL(&uLocal_1156, &bParam0))
	{
		if (!Function_247(&iLocal_1162))
		{
			Function_338(&iLocal_1162);
		}
		uLocal_1156 = &bParam0;
	}
	return;
}

void Function_355() //Position: 0x1742F / 95279
{
	if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (GET_MOUNT(&Global_54076) == &bLocal_1030)
		{
			DECOR_SET_BOOL(&bLocal_1030, "DisableBuckOff", true);
			iLocal_1221 = 0;
			Function_356();
			Function_338(&iLocal_931);
			Function_338(&iLocal_935);
			Function_338(&iLocal_939);
			bLocal_977 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 2776[2], 4, 0, 1);
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
			TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			Function_334(&iLocal_994, 11, 0, 4294967295, 4294967295);
			iLocal_878 = 14;
		}
	}
	return;
}

void Function_356() //Position: 0x174D2 / 95442
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_restrainStallion", "Ranch06_restrainStallion", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_357() //Position: 0x1752B / 95531
{
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		if (!IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
		{
			Function_76();
			SET_CAMERA_FOCUS_OBJECT(&uLocal_1252, &bLocal_1030, Function_76(), 1.0f);
			SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Stallion");
			SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 1);
		}
	}
	else if (IS_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
	}
	return;
}

void Function_358() //Position: 0x1759C / 95644
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_getStallion", "Ranch06_getStallion", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_359() //Position: 0x175EB / 95723
{
	if (!IS_OBJECT_VALID(&uLocal_1252))
	{
		Function_76();
		uLocal_1252 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&uLocal_817, "cFocus", &bLocal_1030, Function_76(), 100.0f, 200.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Stallion");
	}
	else
	{
		Function_76();
		SET_CAMERA_FOCUS_OBJECT(&uLocal_1252, &bLocal_1030, Function_76(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Stallion");
	}
	return;
}

void Function_360() //Position: 0x1768F / 95887
{
	TASK_PRIORITY_SET(&bLocal_1006, 2);
	TASK_PRIORITY_SET(&bLocal_1010, 2);
	TASK_PRIORITY_SET(&bLocal_1014, 2);
	TASK_PRIORITY_SET(&bLocal_1018, 2);
	TASK_PRIORITY_SET(&bLocal_1022, 2);
	TASK_PRIORITY_SET(&bLocal_1024, 2);
	TASK_PRIORITY_SET(&bLocal_1008, 2);
	TASK_PRIORITY_SET(&bLocal_1012, 2);
	TASK_PRIORITY_SET(&bLocal_1016, 2);
	TASK_PRIORITY_SET(&bLocal_1020, 2);
	TASK_PRIORITY_SET(&bLocal_1028, 2);
	TASK_PRIORITY_SET(&bLocal_1026, 2);
	Function_361(&iLocal_4 + 1184, 2);
	return;
}

void Function_361(var uParam0, bool bParam1) //Position: 0x176FF / 95999
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

void Function_362() //Position: 0x17740 / 96064
{
	Function_340();
	if (IS_ACTOR_VALID(&bLocal_925))
	{
		Function_367(&(Local_1309[015]), &bLocal_925, "RanchersDaughter", 1, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(&bLocal_996))
		{
			SET_MOST_RECENT_MOUNT(&bLocal_925, &bLocal_996);
			SET_ACTORS_HORSE(&bLocal_925, &bLocal_996);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_929))
	{
		Function_367(&(Local_1309[115]), &bLocal_929, "Drew", 1, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(&bLocal_998))
		{
			SET_MOST_RECENT_MOUNT(&bLocal_929, &bLocal_998);
			SET_ACTORS_HORSE(&bLocal_929, &bLocal_998);
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1296))
	{
		Function_367(&(Local_1309[215]), &iLocal_4 + 1296, "Cowhand", 1, 0x5f5e100, 1);
		Function_363(&(Local_1309[215]), 2);
	}
	if (SQUAD_IS_VALID(&bLocal_1065))
	{
		Function_367(&(Local_1309[315]), &bLocal_1065, "Ranch06_horse", 0, 0x5f5e100, 1);
		Function_363(&(Local_1309[315]), 64);
		Function_363(&(Local_1309[315]), 2);
		Function_363(&(Local_1309[315]), 128);
		Function_363(&(Local_1309[315]), 8);
	}
	if (IS_ACTOR_VALID(&bLocal_1030))
	{
		Function_367(&(Local_1309[415]), &bLocal_1030, "Stallion", 0, 0x5f5e100, 1);
		Function_363(&(Local_1309[415]), 64);
	}
	else if (IS_ACTOR_VALID(&bLocal_1002))
	{
		Function_367(&(Local_1309[415]), &bLocal_1002, "Ranch06_horse", 0, 0x5f5e100, 1);
		Function_363(&(Local_1309[415]), 64);
		Function_363(&(Local_1309[415]), 128);
		Function_363(&(Local_1309[415]), 8);
	}
	if (SQUAD_IS_VALID(&bLocal_1067))
	{
		Function_367(&(Local_1309[515]), &bLocal_1067, "Ranch06_Horse", 0, 0x5f5e100, 1);
		Function_363(&(Local_1309[515]), 64);
		Function_363(&(Local_1309[515]), 2);
		Function_363(&(Local_1309[515]), 128);
		Function_363(&(Local_1309[515]), 8);
	}
	else if (IS_ACTOR_VALID(&bLocal_1054))
	{
		Function_367(&(Local_1309[515]), &bLocal_1054, "Ranch06_horse", 0, 0x5f5e100, 1);
		Function_363(&(Local_1309[515]), 64);
		Function_363(&(Local_1309[515]), 128);
		Function_363(&(Local_1309[515]), 8);
	}
	return;
}

void Function_363(int iParam0, int iParam1) //Position: 0x179A7 / 96679
{
	if (iParam1 != 100000000)
	{
		Function_366(&iParam0, iParam1);
	}
	else
	{
		Function_364(&iParam0, 1);
	}
	return;
}

void Function_364(struct<69> Param0) //Position: 0x179C9 / 96713
{
	Param0.f_68 = 0;
	Function_365(&Param0, 2, &bParam1);
	Function_365(&Param0, 4, &bParam1);
	Function_365(&Param0, 8, &bParam1);
	Function_365(&Param0, 16, &bParam1);
	Function_365(&Param0, 32, &bParam1);
	Function_365(&Param0, 64, &bParam1);
	Function_365(&Param0, 128, &bParam1);
	Function_365(&Param0, 256, &bParam1);
	Function_365(&Param0, 512, &bParam1);
	Function_365(&Param0, 1024, &bParam1);
	return;
}

void Function_365(int iParam0, int iParam1, bool bParam2) //Position: 0x17A44 / 96836
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

void Function_366(int iParam0, bool bParam1) //Position: 0x17A83 / 96899
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_367(struct<69> Param0) //Position: 0x17AB0 / 96944
{
	if (!Function_371(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_370(&Param0, &bParam2))
	{
		return 0;
	}
	Function_369(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_368(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_368(var uParam0, int iParam1, int iParam2) //Position: 0x17AF6 / 97014
{
	if (iParam1 != 100000000)
	{
		Function_365(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_364(&uParam0, &iParam2);
	}
	return;
}

void Function_369(struct<65> Param0) //Position: 0x17B1D / 97053
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_370(int iParam0, char* cParam1) //Position: 0x17B2A / 97066
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

bool Function_371(struct<61> Param0) //Position: 0x17BB7 / 97207
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

void Function_372(bool bParam0) //Position: 0x17D6A / 97642
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

bool Function_373() //Position: 0x17DBE / 97726
{
	var uVar0;
	
	if (iLocal_865 >= 1001)
	{
		if (Function_245(&iLocal_865 + 4) < 2.0f)
		{
			Function_252(&iLocal_865, 1, 0);
		}
	}
	switch (iLocal_865)
	{
		case 0x000003E8:
			Function_315(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_323(&bLocal_925, &iLocal_4 + 2408[3], 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &bLocal_925);
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 7, &bLocal_1030);
				(&iLocal_865 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				if (IS_OBJECT_VALID(&iLocal_865 + 24))
				{
					if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iLocal_865 + 24), "Ranch06_CS04_v2"))
					{
						PLAY_CUTSCENEOBJECT(&iLocal_865 + 24, false, 0f, 0,5f, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						DESTROY_OBJECT(&iLocal_865 + 24);
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_865 + 24))
				{
					*(&iLocal_865 + 24) = Function_378(&iLocal_4, 0, &Global_54076, &bLocal_927, &bLocal_996, 0, 0, 0);
					if (IS_OBJECT_VALID(&iLocal_865 + 24))
					{
					}
					else
					{
						LOG_ERROR("Ranch06_CS04 - Failed to create Ranch06_CS04_cutscene");
					}
				}
			}
			Function_377();
			iLocal_865 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_865 + 24), 0))
			{
				Function_260(&Global_54076, 1, 1);
				Function_260(&bLocal_925, 1, 1);
				Function_338(&iLocal_865 + 4);
				iLocal_865 = 1002;
			}
			break;
		
		case 0x000003EA:
			iLocal_865 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_245(&iLocal_865 + 4) < 0.0f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
					Function_338(&iLocal_865 + 4);
					iLocal_1570 = 15;
					iLocal_1571 = 15;
					iLocal_865 = 1004;
				}
			}
			else
			{
				Function_338(&iLocal_865 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_375() && Function_374())
			{
				Function_338(&iLocal_865 + 4);
				iLocal_865 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_260(&Global_54076, 0, 1);
				Function_260(&bLocal_925, 0, 1);
				SET_MOVER_FROZEN(&iLocal_4 + 1088[32], false);
				SET_MOST_RECENT_MOUNT(&bLocal_1014, &bLocal_1016);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_277(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_865 + 24))
				{
					DESTROY_OBJECT(&iLocal_865 + 24);
				}
				CAMERA_RESET(0);
				iLocal_865 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_323(&Global_54076, &iLocal_4 + 2408[2], 1, 1, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2408[5], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1030, -1.0f, 0, 0);
				Function_279(&bLocal_1030, &iLocal_4 + 2408[22], 1, 1, 1);
				RESET_ACTOR_GAITS(&bLocal_1030, 0);
				iLocal_865 = 1104;
			}
			break;
	}
	return 0;
}

int Function_374() //Position: 0x180D9 / 98521
{
	switch (iLocal_1571)
	{
		case 0x0000000F:
			if (Function_245(&iLocal_865 + 4) < 0.0f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(0,5f, 1065353216);
				}
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3152, 4, 1, 0, 0, 3.0f);
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[12], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_HORSE_ACTION(0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 1088[02], bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[02], true);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 1088[02], 4);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 1088[02], 3, 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3152, 4, 1, 0, 0, -1.0f);
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[13], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_HORSE_ACTION(0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 1088[12], bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[12], true);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 1088[12], 4);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 1088[12], 3, 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3152, 4, 1, 0, 0, false);
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[14], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 1088[22], bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[22], true);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 1088[22], 4);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 1088[22], 3, 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3152, 4, 1, 0, 0, 1.0f);
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[15], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_HORSE_ACTION(0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 1088[32], bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[32], true);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 1088[32], 4);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 1088[32], 3, 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3152, 4, 1, 0, 0, -3.0f);
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[16], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_HORSE_ACTION(0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 1088[42], bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[42], true);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 1088[42], 4);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 1088[42], 3, 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3152, 3, 1, 0, 0, false);
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 2.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,1f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1030, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1030, true);
				AI_ACTOR_FORCE_SPEED(&bLocal_1030, 4);
				ACTOR_POP_NEXT_GAIT(&bLocal_1030, 3, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1030, true);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1030, 15.0f);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1006, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1006, "Ranch06_stop_horses", 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,1f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1006, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1006, true);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1010, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1010, "Ranch06_stop_horses", 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,7f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1010, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1010, true);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1022, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1022, "Ranch06_stop_horses", 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1022, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1022, true);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1024, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1024, "Ranch06_stop_horses", 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1024, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1024, true);
				iLocal_1571 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_245(&iLocal_865 + 4) < 3.0f)
			{
				Function_279(&bLocal_927, &iLocal_4 + 2408[1], 1, 1, 1);
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
				}
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3056, 1, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&Global_54076, true);
				Function_279(&bLocal_996, &iLocal_4 + 2408[4], 1, 1, 1);
				if (!IS_ACTOR_RIDING(&bLocal_925))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
				}
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 3056, -1.0f, 0, 2.0f);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_925, true);
				iLocal_1571 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_245(&iLocal_865 + 4) < 8.0f)
			{
				iLocal_1571 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_245(&iLocal_865 + 4) < 16.0f)
			{
				Function_279(&bLocal_1030, &iLocal_4 + 2408[21], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1030);
				Function_279(&bLocal_1016, &iLocal_4 + 2408[12], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1016, -1.0f, 0, 0);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3040, 4, 1, 0, 0, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1030, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1030, true);
				Function_279(&iLocal_4 + 1088[02], &iLocal_4 + 2408[12], 0, 1, 1);
				Function_279(&iLocal_4 + 1088[12], &iLocal_4 + 2408[13], 0, 1, 1);
				Function_279(&iLocal_4 + 1088[22], &iLocal_4 + 2408[14], 0, 1, 1);
				Function_279(&iLocal_4 + 1088[32], &iLocal_4 + 2408[15], 0, 1, 1);
				Function_279(&iLocal_4 + 1088[42], &iLocal_4 + 2408[16], 0, 1, 1);
				iLocal_1571 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_245(&iLocal_865 + 4) < 19.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1030, 0);
				RESET_ACTOR_GAITS(&bLocal_1030, 0);
				AI_ACTOR_FORCE_SPEED(&bLocal_1030, 3);
				ACTOR_POP_NEXT_GAIT(&bLocal_1030, 4, 0);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1014, 0);
				SET_CRIPPLE_FLAG(&bLocal_1014, 2);
				TASK_MOUNT(&bLocal_1014, &bLocal_1016, 0, 1, 2, 2147483647);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 3040, 4, 1, 0, 0, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1030, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1030, true);
				iLocal_1571 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_245(&iLocal_865 + 4) < 22.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_375() //Position: 0x19ABA / 105146
{
	switch (iLocal_1570)
	{
		case 0x0000000F:
			if (Function_245(&iLocal_865 + 4) < 11.0f)
			{
				Function_376();
				iLocal_1570 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_245(&iLocal_865 + 4) < 22.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_376() //Position: 0x19B07 / 105223
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS04_v1_AA", "Ranch06_CS04_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1700", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS04_v1_AB", "Ranch06_CS04_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS04_v1_AC", "Ranch06_CS04_v1_AC", false, 4, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_377() //Position: 0x19BD7 / 105431
{
	TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1006, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1010, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1014, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1018, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1022, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1024, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1006, true);
	TASK_PRIORITY_SET(&bLocal_1010, true);
	TASK_PRIORITY_SET(&bLocal_1014, true);
	TASK_PRIORITY_SET(&bLocal_1018, true);
	TASK_PRIORITY_SET(&bLocal_1022, true);
	TASK_PRIORITY_SET(&bLocal_1024, true);
	TASK_STAND_STILL(&bLocal_1008, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1012, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1016, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1020, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1028, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1026, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1008, true);
	TASK_PRIORITY_SET(&bLocal_1012, true);
	TASK_PRIORITY_SET(&bLocal_1016, true);
	TASK_PRIORITY_SET(&bLocal_1020, true);
	TASK_PRIORITY_SET(&bLocal_1028, true);
	TASK_PRIORITY_SET(&bLocal_1026, true);
	bLocal_1056 = &bLocal_1008;
	TASK_STAND_STILL(&bLocal_1006, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1006, 0);
	TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1056, 0);
	Function_279(&bLocal_1056, &iLocal_4 + 2408[6], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&bLocal_1006, &bLocal_1056);
	bLocal_1056 = &bLocal_1012;
	TASK_STAND_STILL(&bLocal_1010, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1010, 0);
	TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1056, 0);
	Function_279(&bLocal_1056, &iLocal_4 + 2408[7], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&bLocal_1010, &bLocal_1056);
	bLocal_1056 = &bLocal_1016;
	TASK_STAND_STILL(&bLocal_1014, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1014, 0);
	TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1056, 0);
	Function_279(&bLocal_1056, &iLocal_4 + 2408[8], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1056);
	bLocal_1056 = &bLocal_1028;
	TASK_STAND_STILL(&bLocal_1022, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1022, 0);
	TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1056, 0);
	Function_279(&bLocal_1056, &iLocal_4 + 2408[10], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&bLocal_1022, &bLocal_1056);
	bLocal_1056 = &bLocal_1026;
	TASK_STAND_STILL(&bLocal_1024, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1024, 0);
	TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(&bLocal_1056, 0);
	Function_279(&bLocal_1056, &iLocal_4 + 2408[11], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&bLocal_1024, &bLocal_1056);
	Function_323(&Global_54076, &iLocal_4 + 2408[0], 1, 1, 1);
	Function_323(&bLocal_925, &iLocal_4 + 2408[3], 1, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 1088[02], -1.0f, 0, 0);
	Function_279(&iLocal_4 + 1088[02], &iLocal_4 + 2408[23], 1, 1, 1);
	RESET_ACTOR_GAITS(&iLocal_4 + 1088[02], 0);
	TASK_STAND_STILL(&iLocal_4 + 1088[12], -1.0f, 0, 0);
	Function_279(&iLocal_4 + 1088[12], &iLocal_4 + 2408[24], 1, 1, 1);
	RESET_ACTOR_GAITS(&iLocal_4 + 1088[12], 0);
	TASK_STAND_STILL(&iLocal_4 + 1088[22], -1.0f, 0, 0);
	Function_279(&iLocal_4 + 1088[22], &iLocal_4 + 2408[25], 1, 1, 1);
	RESET_ACTOR_GAITS(&iLocal_4 + 1088[22], 0);
	TASK_STAND_STILL(&iLocal_4 + 1088[32], -1.0f, 0, 0);
	Function_279(&iLocal_4 + 1088[32], &iLocal_4 + 2408[26], 1, 1, 1);
	RESET_ACTOR_GAITS(&iLocal_4 + 1088[32], 0);
	TASK_STAND_STILL(&iLocal_4 + 1088[42], -1.0f, 0, 0);
	Function_279(&iLocal_4 + 1088[42], &iLocal_4 + 2408[27], 1, 1, 1);
	RESET_ACTOR_GAITS(&iLocal_4 + 1088[42], 0);
	TASK_STAND_STILL(&bLocal_1030, -1.0f, 0, 0);
	Function_279(&bLocal_1030, &iLocal_4 + 2408[22], 1, 1, 1);
	RESET_ACTOR_GAITS(&bLocal_1030, 0);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1030);
	Function_279(&bLocal_1020, &iLocal_4 + 2776[7], 1, 1, 1);
	Function_279(&bLocal_1018, &iLocal_4 + 2408[9], 1, 1, 1);
	MEMORY_PREFER_WALKING(&bLocal_1018, 1);
	SET_MOVER_FROZEN(&iLocal_4 + 1088[32], true);
	return;
}

int Function_378(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x19FDB / 106459
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 11, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Ranch06_CS04_v2", 11, 1);
	}
	Function_379(&uVar0, &uParam2, &bParam3, &bParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_379(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1A06F / 106607
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_390(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_389(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_388(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_387(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_386(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_385(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 6);
	Function_384(&uVar0, &uParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 7);
	Function_383(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 8);
	Function_382(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 9);
	Function_381(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 10);
	Function_380(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 7, 8, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 5.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 9, 10, 3.0f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 4, 5, 6.0f, 5, 0);
}

void Function_380(int iParam0) //Position: 0x1A19E / 106910
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 21,21346f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1804,914f, 27,60277f, 2006,326f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,143058f, -0,803729f, 7,7E-05f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_381(int iParam0) //Position: 0x1A217 / 107031
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 21,21346f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1800,72f, 26,64337f, 2009,771f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,056719f, -0,204421f, 7,6E-05f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_382(int iParam0) //Position: 0x1A290 / 107152
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1791,922f, 27,36373f, 1994,517f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,053249f, 2,626746f, 0,005386f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_383(int iParam0) //Position: 0x1A309 / 107273
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1790,927f, 27,42102f, 1994,441f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,135918f, 2,49469f, 0,005428f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_384(int iParam0, int iParam1, var uParam2) //Position: 0x1A382 / 107394
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-2,27667f, 2,304085f, -1,947047f), Vector(-8,758289f, -116,4565f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,133085f, 1,610517f, 0,315723f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 55.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_385(int iParam0) //Position: 0x1A469 / 107625
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1805,636f, 26,65559f, 2015,636f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,012323f, -0,397974f, 0,005378f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_386(int iParam0) //Position: 0x1A4E2 / 107746
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1807,776f, 26,64947f, 2014,552f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,012323f, -0,776699f, 0,005378f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_387(int iParam0) //Position: 0x1A55B / 107867
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1829,41f, 26,68877f, 2031,96f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,079443f, -1,186447f, 0,005395f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_388(int iParam0) //Position: 0x1A612 / 108050
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1834,447f, 26,86067f, 2036,284f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,068374f, -1,284227f, 0,00539f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_389(int iParam0) //Position: 0x1A6C9 / 108233
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1822,611f, 27,46034f, 2026,617f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,001232f, -0,885517f, 0,005378f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_390(var uParam0) //Position: 0x1A742 / 108354
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-1828,563f, 27,53035f, 2033,77f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,039245f, -0,861182f, 0,005382f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_391() //Position: 0x1A7BB / 108475
{
	if (!Function_247(&iLocal_1236))
	{
		Function_338(&iLocal_1236);
	}
	if (bLocal_1240 > 0.0f || bLocal_1240 < 5.0f)
	{
		bLocal_1240 = RAND_FLOAT_RANGE(0,5f, 2.0f);
	}
	if (Function_245(&iLocal_1236) <= bLocal_1240)
	{
		bLocal_1061 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1061)
		{
			case 0x00000001:
				bLocal_1056 = &bLocal_1006;
				break;
			
			case 0x00000002:
				bLocal_1056 = &bLocal_1010;
				break;
			
			case 0x00000003:
				bLocal_1056 = &bLocal_1014;
				break;
			
			case 0x00000004:
				bLocal_1056 = &bLocal_1018;
				break;
			
			case 0x00000005:
				bLocal_1056 = &bLocal_1022;
				break;
			
			case 0x00000006:
				bLocal_1056 = &bLocal_1024;
				break;
		}
		if (IS_ACTOR_VALID(&bLocal_1056))
		{
			if (!IS_ANY_SPEECH_PLAYING(&bLocal_1056))
			{
				if (Function_402())
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_1056, 111, &bLocal_1030, 1, 1, 3, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_1056, 61, &bLocal_1030, 1, 1, 3, 4294967295, 4294967295, 0, 1);
				}
				PRINTSTRING(GET_ACTOR_ENUM_STRING(&bLocal_1056));
				PRINTSTRING(" saying WHOA!");
				PRINTNL();
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&bLocal_1056), "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				Function_338(&iLocal_1236);
				bLocal_1240 = RAND_FLOAT_RANGE(0,5f, 2.0f);
			}
		}
	}
	return;
}

void Function_392(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1A933 / 108851
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
	if (iParam2 != Global_53524.f_48 && !Function_399())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_398(0);
	Function_397();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_395(iParam2);
	}
	Function_394(uParam3, iVar0, iVar1);
	Function_393();
}

void Function_393() //Position: 0x1A9DC / 109020
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

void Function_394(int iParam0, bool bParam1, bool bParam2) //Position: 0x1AA1D / 109085
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

void Function_395(bool bParam0) //Position: 0x1AB86 / 109446
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_396() };
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

struct<16> Function_396() //Position: 0x1AD1E / 109854
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

void Function_397() //Position: 0x1AD64 / 109924
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_398(bool bParam0) //Position: 0x1AD88 / 109960
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

bool Function_399() //Position: 0x1ADB7 / 110007
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_400(int iParam0) //Position: 0x1ADD2 / 110034
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1800[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1944[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 2024[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 2144[1]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 2408[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 2776[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 1800[0]);
}

struct<8> Function_401(int iParam0) //Position: 0x1AECD / 110285
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_302(&iLocal_4 + 1800[0]);
			return StackVal, Function_302(&iLocal_4 + 1800[0]);
			break;
		
		case 0x00000001:
			Function_302(&iLocal_4 + 1944[0]);
			return StackVal, Function_302(&iLocal_4 + 1944[0]);
			break;
		
		case 0x00000002:
			Function_302(&iLocal_4 + 2024[0]);
			return StackVal, Function_302(&iLocal_4 + 2024[0]);
			break;
		
		case 0x00000003:
			Function_302(&iLocal_4 + 2144[0]);
			return StackVal, Function_302(&iLocal_4 + 2144[0]);
			break;
		
		case 0x00000004:
			Function_302(&iLocal_4 + 2408[0]);
			return StackVal, Function_302(&iLocal_4 + 2408[0]);
			break;
		
		default:
			Function_302(&iLocal_4 + 2776[0]);
			return StackVal, Function_302(&iLocal_4 + 2776[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_302(&iLocal_4 + 1800[0]);
	return StackVal, Function_302(&iLocal_4 + 1800[0]);
}

bool Function_402() //Position: 0x1AFC8 / 110536
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_403(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x1AFDB / 110555
{
	if (Function_269(&iParam0) == iParam6 || Function_399())
	{
		return 1;
	}
	return 0;
}

bool Function_404() //Position: 0x1AFFA / 110586
{
	switch (iLocal_1228)
	{
		case 0x00000006:
			if (!IS_ACTOR_VALID(&bLocal_927))
			{
				if (Function_306())
				{
					bLocal_927 = Function_299(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_927)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_927));
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1040))
				{
					Function_412(&iLocal_4 + 1040, 0, 0);
					DESTROY_OBJECT(&iLocal_4 + 1040);
				}
				if (!SQUAD_IS_VALID(&bLocal_1063))
				{
					bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
					SQUAD_JOIN(&bLocal_925, &bLocal_1063);
				}
				if (!iLocal_943[3])
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 1296))
					{
						Function_295(&iLocal_4 + 1296);
						DESTROY_OBJECT(&iLocal_4 + 1296);
					}
					if (!SQUAD_IS_VALID(&iLocal_4 + 1296))
					{
						Function_408();
					}
					if (SQUAD_IS_VALID(&bLocal_1065))
					{
						Function_294(&bLocal_1065);
						DESTROY_OBJECT(&bLocal_1065);
					}
					if (SQUAD_IS_VALID(&iLocal_4 + 1080))
					{
						Function_294(&iLocal_4 + 1080);
						DESTROY_OBJECT(&iLocal_4 + 1080);
					}
					if (SQUAD_IS_VALID(&iLocal_4 + 1184))
					{
						Function_294(&iLocal_4 + 1184);
						DESTROY_OBJECT(&iLocal_4 + 1184);
					}
					if (!SQUAD_IS_VALID(&bLocal_1065))
					{
						bLocal_1065 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildSquad"));
					}
					if (!SQUAD_IS_VALID(&iLocal_4 + 1080))
					{
						Function_328();
						bLocal_1030 = &iLocal_4 + 1048[02];
					}
					if (!SQUAD_IS_VALID(&iLocal_4 + 1184))
					{
						Function_407();
						bLocal_1065 = &iLocal_4 + 1184;
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_279(&bLocal_927, &iLocal_4 + 2408[2], 1, 1, 1);
					Function_279(&bLocal_925, &iLocal_4 + 2408[3], 1, 1, 1);
					Function_279(&iLocal_4 + 912[02], &iLocal_4 + 2408[3], 1, 1, 1);
				}
				if (!IS_ACTOR_VALID(&bLocal_996))
				{
					Function_298();
					bLocal_996 = &iLocal_4 + 912[02];
					DECOR_SET_BOOL(&bLocal_996, "bNoInjuryEjection", true);
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
					TASK_PRIORITY_SET(&bLocal_996, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_996, 1);
					SET_ACTOR_FACTION(&bLocal_996, 21);
					bLocal_998 = &iLocal_4 + 912[12];
					TASK_PRIORITY_SET(&bLocal_998, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_998, 1);
					SET_ACTOR_FACTION(&bLocal_998, 21);
				}
				if (!IS_ACTOR_VALID(&bLocal_1030))
				{
					if (IS_ACTOR_ALIVE(&iLocal_4 + 1048[02]))
					{
						bLocal_1030 = &iLocal_4 + 1048[02];
					}
					else
					{
						Function_328();
						bLocal_1030 = &iLocal_4 + 1048[02];
					}
				}
				SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
				DECOR_REMOVE(&bLocal_1030, "CanBeLasso");
				SET_ACTOR_CAN_BE_HARDLOCKED(&bLocal_1030, 1);
				iLocal_1228 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_RIDING(&bLocal_1006))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1006, &bLocal_1008);
			}
			if (!IS_ACTOR_RIDING(&bLocal_1010))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1010, &bLocal_1012);
			}
			if (!IS_ACTOR_RIDING(&bLocal_1014))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1016);
			}
			if (!IS_ACTOR_RIDING(&bLocal_1018))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1018, &bLocal_1020);
			}
			if (!IS_ACTOR_RIDING(&bLocal_1022))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1022, &bLocal_1028);
			}
			if (!IS_ACTOR_RIDING(&bLocal_1024))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1024, &bLocal_1026);
			}
			Function_406();
			if (!iLocal_943[3])
			{
				Function_323(&bLocal_1006, &iLocal_4 + 2408[6], 1, 1, 1);
				Function_323(&bLocal_1010, &iLocal_4 + 2408[7], 1, 1, 1);
				Function_323(&bLocal_1014, &iLocal_4 + 2408[8], 1, 1, 1);
				Function_323(&bLocal_1018, &iLocal_4 + 2408[9], 1, 1, 1);
				Function_323(&bLocal_1022, &iLocal_4 + 2408[10], 1, 1, 1);
				Function_323(&bLocal_1024, &iLocal_4 + 2408[11], 1, 1, 1);
				Function_279(&bLocal_1030, &iLocal_4 + 2408[21], 1, 1, 1);
				Function_279(&iLocal_4 + 1088[02], &iLocal_4 + 2408[12], 1, 1, 1);
				Function_279(&iLocal_4 + 1088[12], &iLocal_4 + 2408[13], 1, 1, 1);
				Function_279(&iLocal_4 + 1088[22], &iLocal_4 + 2408[14], 1, 1, 1);
				Function_279(&iLocal_4 + 1088[32], &iLocal_4 + 2408[15], 1, 1, 1);
				Function_279(&iLocal_4 + 1088[42], &iLocal_4 + 2408[16], 1, 1, 1);
			}
			SQUAD_GOALS_CLEAR(&bLocal_1065);
			Function_405(&bLocal_1065);
			TASK_STAND_STILL(&iLocal_4 + 1048[02], -1.0f, 0, 0);
			TASK_STAND_STILL(&iLocal_4 + 1088[02], -1.0f, 0, 0);
			TASK_STAND_STILL(&iLocal_4 + 1088[12], -1.0f, 0, 0);
			TASK_STAND_STILL(&iLocal_4 + 1088[22], -1.0f, 0, 0);
			TASK_STAND_STILL(&iLocal_4 + 1088[32], -1.0f, 0, 0);
			TASK_STAND_STILL(&iLocal_4 + 1088[42], -1.0f, 0, 0);
			SET_ACTOR_RIDEABLE(&iLocal_4 + 1048[02], 1);
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
			}
			if (!IS_ACTOR_RIDING(&bLocal_925))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
			}
			iLocal_1228 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_943[3])
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_323(&Global_54076, &iLocal_4 + 2408[2], 1, 1, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2408[3], 1, 1, 1);
				ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
			}
			TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
			DECOR_REMOVE(&Global_54076, "HorseBreak");
			if (ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
			{
				ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), 21, 1);
			}
			else if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
			{
				GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 21, false, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), 21, 1);
			}
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925);
			CLEAR_LINKED_ANIM_TARGET(&bLocal_925);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_925, 1);
			iLocal_1228 = 9;
			break;
		
		case 0x00000009:
			iLocal_1228 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 0;
			break;
	}
	return 0;
}

void Function_405(bool bParam0) //Position: 0x1B5DC / 112092
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

void Function_406() //Position: 0x1B611 / 112145
{
	if (IS_ACTOR_RIDING(&bLocal_1006))
	{
		bLocal_1008 = GET_MOUNT(&bLocal_1006);
		SET_ACTOR_INVULNERABILITY(&bLocal_1008, true);
		TASK_PRIORITY_SET(&bLocal_1008, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1008, 1);
		SET_ACTOR_FACTION(&bLocal_1008, 20);
	}
	if (IS_ACTOR_RIDING(&bLocal_1010))
	{
		bLocal_1012 = GET_MOUNT(&bLocal_1010);
		SET_ACTOR_INVULNERABILITY(&bLocal_1012, true);
		TASK_PRIORITY_SET(&bLocal_1012, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1012, 1);
		SET_ACTOR_FACTION(&bLocal_1012, 20);
	}
	if (IS_ACTOR_RIDING(&bLocal_1014))
	{
		bLocal_1016 = GET_MOUNT(&bLocal_1014);
		SET_ACTOR_INVULNERABILITY(&bLocal_1016, true);
		TASK_PRIORITY_SET(&bLocal_1016, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1016, 1);
		SET_ACTOR_FACTION(&bLocal_1016, 20);
	}
	if (IS_ACTOR_RIDING(&bLocal_1018))
	{
		bLocal_1020 = GET_MOUNT(&bLocal_1018);
		SET_ACTOR_INVULNERABILITY(&bLocal_1020, true);
		TASK_PRIORITY_SET(&bLocal_1020, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1020, 1);
		SET_ACTOR_FACTION(&bLocal_1020, 20);
	}
	if (IS_ACTOR_RIDING(&bLocal_1022))
	{
		bLocal_1028 = GET_MOUNT(&bLocal_1022);
		SET_ACTOR_INVULNERABILITY(&bLocal_1028, true);
		TASK_PRIORITY_SET(&bLocal_1028, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1028, 1);
		SET_ACTOR_FACTION(&bLocal_1028, 20);
	}
	if (IS_ACTOR_RIDING(&bLocal_1024))
	{
		bLocal_1026 = GET_MOUNT(&bLocal_1024);
		SET_ACTOR_INVULNERABILITY(&bLocal_1026, true);
		TASK_PRIORITY_SET(&bLocal_1026, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1026, 1);
		SET_ACTOR_FACTION(&bLocal_1026, 20);
	}
	return;
}

void Function_407() //Position: 0x1B76D / 112493
{
	*(&iLocal_4 + 1176) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "herdHorseWild03set", 0);
	*(&iLocal_4 + 1184) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "herdHorseWild03"));
	*(&iLocal_4 + 1088[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 976, Vector(-1828f, 26,10194f, 2680.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1176, &iLocal_4 + 1088[02]);
	SQUAD_JOIN(&iLocal_4 + 1088[02], &iLocal_4 + 1184);
	SET_ACTOR_RIDEABLE(&iLocal_4 + 1088[02], 0);
	DECOR_SET_FLOAT(&iLocal_4 + 1088[02], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL(&iLocal_4 + 1088[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1088[02], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[02], true);
	Function_329(&iLocal_4 + 1088[02]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 1088[02], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1088[02], 1);
	*(&iLocal_4 + 1088[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 977, Vector(-1824f, 27,10587f, 2680.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1176, &iLocal_4 + 1088[12]);
	SQUAD_JOIN(&iLocal_4 + 1088[12], &iLocal_4 + 1184);
	SET_ACTOR_RIDEABLE(&iLocal_4 + 1088[12], 0);
	DECOR_SET_FLOAT(&iLocal_4 + 1088[12], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL(&iLocal_4 + 1088[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1088[12], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[12], true);
	Function_329(&iLocal_4 + 1088[12]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 1088[12], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1088[12], 1);
	*(&iLocal_4 + 1088[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 980, Vector(-1832f, 25,09802f, 2680.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1176, &iLocal_4 + 1088[22]);
	SQUAD_JOIN(&iLocal_4 + 1088[22], &iLocal_4 + 1184);
	SET_ACTOR_RIDEABLE(&iLocal_4 + 1088[22], 0);
	DECOR_SET_FLOAT(&iLocal_4 + 1088[22], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL(&iLocal_4 + 1088[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1088[22], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[22], true);
	Function_329(&iLocal_4 + 1088[22]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 1088[22], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1088[22], 1);
	*(&iLocal_4 + 1088[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 981, Vector(-1836f, 25,09802f, 2680.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1176, &iLocal_4 + 1088[32]);
	SQUAD_JOIN(&iLocal_4 + 1088[32], &iLocal_4 + 1184);
	SET_ACTOR_RIDEABLE(&iLocal_4 + 1088[32], 0);
	DECOR_SET_FLOAT(&iLocal_4 + 1088[32], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL(&iLocal_4 + 1088[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1088[32], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[32], true);
	Function_329(&iLocal_4 + 1088[32]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 1088[32], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1088[32], 1);
	*(&iLocal_4 + 1088[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 976, Vector(-1828f, 26,10194f, 2684.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1176, &iLocal_4 + 1088[42]);
	SQUAD_JOIN(&iLocal_4 + 1088[42], &iLocal_4 + 1184);
	SET_ACTOR_RIDEABLE(&iLocal_4 + 1088[42], 0);
	DECOR_SET_FLOAT(&iLocal_4 + 1088[42], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL(&iLocal_4 + 1088[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1088[42], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 1088[42], true);
	Function_329(&iLocal_4 + 1088[42]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 1088[42], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1088[42], 1);
	return;
}

void Function_408() //Position: 0x1BBE9 / 113641
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 1296))
	{
		Function_409();
		Function_362();
	}
	bLocal_1006 = &iLocal_4 + 1192[02];
	GIVE_WEAPON_TO_ACTOR(&bLocal_1006, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&bLocal_1006, true);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1006, false);
	TASK_PRIORITY_SET(&bLocal_1006, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1006, 1);
	SET_ACTOR_FACTION(&bLocal_1006, 20);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1006, 2);
	DECOR_SET_BOOL(&bLocal_1006, "CanBeLasso", false);
	bLocal_1010 = &iLocal_4 + 1192[12];
	GIVE_WEAPON_TO_ACTOR(&bLocal_1010, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&bLocal_1010, true);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1010, false);
	TASK_PRIORITY_SET(&bLocal_1010, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1010, 1);
	SET_ACTOR_FACTION(&bLocal_1010, 20);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1010, 2);
	DECOR_SET_BOOL(&bLocal_1010, "CanBeLasso", false);
	bLocal_1014 = &iLocal_4 + 1192[22];
	GIVE_WEAPON_TO_ACTOR(&bLocal_1014, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&bLocal_1014, true);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1014, false);
	TASK_PRIORITY_SET(&bLocal_1014, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1014, 1);
	SET_ACTOR_FACTION(&bLocal_1014, 20);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1014, 2);
	DECOR_SET_BOOL(&bLocal_1014, "CanBeLasso", false);
	bLocal_1018 = &iLocal_4 + 1192[32];
	GIVE_WEAPON_TO_ACTOR(&bLocal_1018, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&bLocal_1018, true);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1018, false);
	TASK_PRIORITY_SET(&bLocal_1018, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1018, 1);
	SET_ACTOR_FACTION(&bLocal_1018, 20);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1018, 2);
	DECOR_SET_BOOL(&bLocal_1018, "CanBeLasso", false);
	bLocal_1022 = &iLocal_4 + 1192[42];
	GIVE_WEAPON_TO_ACTOR(&bLocal_1022, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&bLocal_1022, true);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1022, false);
	TASK_PRIORITY_SET(&bLocal_1022, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1022, 1);
	SET_ACTOR_FACTION(&bLocal_1022, 20);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1022, 2);
	DECOR_SET_BOOL(&bLocal_1022, "CanBeLasso", false);
	bLocal_1024 = &iLocal_4 + 1192[52];
	GIVE_WEAPON_TO_ACTOR(&bLocal_1024, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&bLocal_1024, true);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1024, false);
	TASK_PRIORITY_SET(&bLocal_1024, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1024, 1);
	SET_ACTOR_FACTION(&bLocal_1024, 20);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1024, 2);
	DECOR_SET_BOOL(&bLocal_1024, "CanBeLasso", false);
	iLocal_1564 = 0;
	iLocal_1565 = 0;
	iLocal_1566 = 0;
	iLocal_1567 = 0;
	iLocal_1568 = 0;
	iLocal_1569 = 0;
	return;
}

void Function_409() //Position: 0x1BE5A / 114266
{
	*(&iLocal_4 + 1296) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 1192[02]) = Function_410(StackVal, StackVal, &iLocal_4, Function_54(), 170, Function_54(), 976, Vector(-1668f, 39,15292f, 2584.0f), Vector(0.0f, 33,56617f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1192[02], &iLocal_4 + 1296);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1192[02], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1192[02], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1192[02]);
	SET_ACTOR_FACTION(&iLocal_4 + 1192[02], 20);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1192[02], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1192[02], 1);
	*(&iLocal_4 + 1192[12]) = Function_410(StackVal, StackVal, &iLocal_4, Function_54(), 171, Function_54(), 976, Vector(-1670,79f, 39,15992f, 2586,379f), Vector(0.0f, 54,31911f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1192[12], &iLocal_4 + 1296);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1192[12], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1192[12], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1192[12]);
	SET_ACTOR_FACTION(&iLocal_4 + 1192[12], 20);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1192[12], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1192[12], 1);
	*(&iLocal_4 + 1192[22]) = Function_410(StackVal, StackVal, &iLocal_4, Function_54(), 172, Function_54(), 976, Vector(-1652f, 39,15292f, 2608.0f), Vector(0.0f, 192,4064f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1192[22], &iLocal_4 + 1296);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1192[22], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1192[22], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1192[22]);
	SET_ACTOR_FACTION(&iLocal_4 + 1192[22], 20);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1192[22], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1192[22], 1);
	*(&iLocal_4 + 1192[32]) = Function_410(StackVal, StackVal, &iLocal_4, Function_54(), 173, Function_54(), 976, Vector(-1652f, 40,64886f, 2612.0f), Vector(0.0f, 217,2159f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1192[32], &iLocal_4 + 1296);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1192[32], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1192[32], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1192[32]);
	SET_ACTOR_FACTION(&iLocal_4 + 1192[32], 20);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1192[32], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1192[32], 1);
	*(&iLocal_4 + 1192[42]) = Function_410(StackVal, StackVal, &iLocal_4, Function_54(), 174, Function_54(), 976, Vector(-1664f, 40,71531f, 2604.0f), Vector(0.0f, 90,62232f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1192[42], &iLocal_4 + 1296);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1192[42], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1192[42], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1192[42]);
	SET_ACTOR_FACTION(&iLocal_4 + 1192[42], 20);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1192[42], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1192[42], 1);
	*(&iLocal_4 + 1192[52]) = Function_410(StackVal, StackVal, &iLocal_4, Function_54(), 175, Function_54(), 976, Vector(-1664f, 41,22569f, 2608.0f), Vector(0.0f, 95,7112f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1192[52], &iLocal_4 + 1296);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1192[52], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1192[52], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1192[52]);
	SET_ACTOR_FACTION(&iLocal_4 + 1192[52], 20);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1192[52], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 1192[52], 1);
	return;
}

int Function_410(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x1C20F / 115215
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_411(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_411(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &iParam1, bParam2, Param5, Param7);
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

bool Function_411(int iParam0) //Position: 0x1C347 / 115527
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_412(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C35E / 115550
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
			if (&bParam2)
			{
				if (!Function_413(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_413(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1C3E7 / 115687
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

bool Function_414() //Position: 0x1C407 / 115719
{
	Function_291(&iLocal_4 + 608, 978, 2, 0);
	Function_291(&iLocal_4 + 608, 976, 2, 0);
	Function_291(&iLocal_4 + 608, 977, 2, 0);
	Function_291(&iLocal_4 + 608, 170, 2, 0);
	Function_291(&iLocal_4 + 608, 171, 2, 0);
	Function_291(&iLocal_4 + 608, 172, 2, 0);
	Function_291(&iLocal_4 + 608, 173, 2, 0);
	Function_291(&iLocal_4 + 608, 174, 2, 0);
	Function_291(&iLocal_4 + 608, 175, 2, 0);
	if (Function_282(&iLocal_4 + 608))
	{
		return 1;
	}
	return 0;
}

void Function_415(vector3 vParam0) //Position: 0x1C493 / 115859
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_416() //Position: 0x1C4AA / 115882
{
	if (!IS_VOLUME_VALID(&iLocal_4 + 1520[5]))
	{
		(&iLocal_4 + 1520[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseBreaking_StayOutVolume", 2,802597E-45f, Vector(-1960,473f, 28,1098f, 2081,119f), Vector(0.0f, -32,94701f, 0.0f), Vector(78,20216f, 58,59838f, 90,4452f));
	}
	if (ANIMAL_ACTOR_GET_DOMESTICATION(&bLocal_1030) != 0)
	{
		if (!GET_MOUNT(&Global_54076) != &bLocal_1030)
		{
			if (!IS_BLIP_VALID(&bLocal_1178))
			{
				bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
			}
			else if (!IS_BLIP_VISIBLE(&bLocal_1178))
			{
				SET_BLIP_VISIBLE(&bLocal_1178, true);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
			{
				REMOVE_BLIP(&bLocal_1178);
				bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
			}
		}
		if (IS_ACTOR_MOUNTED(&bLocal_1030))
		{
			if (iLocal_1215)
			{
				if (GET_TASK_STATUS(&bLocal_1030, 25) == 1)
				{
					TASK_CLEAR(&bLocal_1030);
					iLocal_1215 = 0;
				}
			}
		}
		else if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1030)
		{
			if (GET_TASK_STATUS(&bLocal_1030, 0) != 1)
			{
				CLEAR_ACTOR_MIN_SPEED(&bLocal_1030);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1030, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				iLocal_1215 = 0;
			}
		}
		else
		{
			if (ACTOR_HAS_ANIM_SET(&bLocal_1030, "horse_breaking"))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1030, "standing"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1030, 0);
				}
			}
			if (IS_ACTOR_IN_VOLUME(&bLocal_1030, &iLocal_4 + 1520[5]))
			{
				if (!Function_247(&iLocal_1034))
				{
					Function_338(&iLocal_1034);
				}
				else if (Function_245(&iLocal_1034) < 15.0f)
				{
					TASK_CLEAR(&bLocal_1030);
					iLocal_1215 = 0;
					Function_338(&iLocal_1034);
					switch (iLocal_1062)
					{
						case 0x00000001:
							iLocal_1062++;
							TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1030, 4);
							break;
						
						case 0x00000003:
							iLocal_1062++;
							TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1030, 2);
							break;
						
						default:
							if (iLocal_1062 < 3)
							{
								iLocal_1062++;
							}
							break;
						}
				}
				if (DECOR_GET_BOOL(&bLocal_1030, "BeLassoBounceOff"))
				{
					DECOR_SET_BOOL(&bLocal_1030, "BeLassoBounceOff", false);
				}
				if (!iLocal_1215)
				{
					if (Function_402())
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1030, &iLocal_4 + 3104, 3, 0, 0, 1, false);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1030, &iLocal_4 + 3112, 3, 0, 0, 1, false);
					}
					CLEAR_ACTOR_MAX_SPEED(&bLocal_1030);
					SET_ACTOR_MIN_SPEED(&bLocal_1030, 2);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1030);
					ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1030, &iLocal_4 + 1520[5]);
					DECOR_SET_BOOL(&bLocal_1030, "CanBeLasso", true);
					DECOR_SET_BOOL(&bLocal_1030, "BeLassoBounceOff", false);
					iLocal_1215 = 1;
				}
			}
			else
			{
				Function_391();
				if (iLocal_1215)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1030, &iLocal_4 + 3040, 3, 0, 0, 1, false);
					iLocal_1215 = 0;
				}
				if (GET_TASK_STATUS(&bLocal_1030, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1030, &iLocal_4 + 3040, 3, 0, 0, 1, false);
				}
				if (DECOR_GET_BOOL(&bLocal_1030, "BeLassoBounceOff"))
				{
					if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1030, 20.0f))
					{
						if (GET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1030) == 17.0f)
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1030, 17.0f);
							TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1030, 17.0f);
						}
					}
					else
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1030, 22.0f);
						SET_ACTOR_SPEED(&bLocal_1030, 22.0f);
						if (GET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1030) == 22.0f)
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1030, 22.0f);
							TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1030, 22.0f);
						}
					}
				}
			}
		}
	}
	else if (GET_TASK_STATUS(&bLocal_1030, 43) != 1 || GET_TASK_STATUS(&bLocal_1030, 37) != 1)
	{
		TASK_CLEAR(&bLocal_1030);
	}
	return;
}

void Function_417() //Position: 0x1CBDE / 117726
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (GET_MOUNT(&Global_54076) != &bLocal_927)
		{
			bLocal_1056 = GET_MOUNT(&Global_54076);
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&bLocal_1056) == 0)
			{
				bLocal_1086 = true;
				if (IS_ACTOR_VALID(&bLocal_1002))
				{
					if (&bLocal_1056 == &bLocal_1002)
					{
						bLocal_1086 = false;
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1054))
				{
					if (&bLocal_1056 == &bLocal_1054)
					{
						bLocal_1086 = false;
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1030))
				{
					if (&bLocal_1056 == &bLocal_1030)
					{
						bLocal_1086 = false;
					}
				}
				if (IS_ACTOR_VALID(&bLocal_996))
				{
					if (&bLocal_1056 == &bLocal_996)
					{
						bLocal_1086 = false;
						SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Buck_eject"))
						{
							SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_998))
				{
					if (&bLocal_1056 == &bLocal_998)
					{
						bLocal_1086 = false;
						SET_ALLOW_RIDE_BY_PLAYER(&bLocal_998, 0);
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Buck_eject"))
						{
							SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
						}
					}
				}
				if (bLocal_1086)
				{
					if (IS_ACTOR_VALID(&bLocal_927))
					{
						Function_227(&bLocal_927);
						TASK_CLEAR(&bLocal_927);
					}
					bLocal_927 = &bLocal_1056;
					Function_326(&bLocal_927, 0);
				}
			}
		}
	}
	return;
}

void Function_418() //Position: 0x1CD9F / 118175
{
	if (iLocal_1090)
	{
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1024, 10.0f))
		{
			Function_419();
			iLocal_1090 = 0;
		}
	}
	if (IS_ACTOR_RIDING(&bLocal_1024) && GET_MOUNT(&bLocal_1024) != &bLocal_1026)
	{
		if (IS_ACTOR_VALID(&iLocal_1032))
		{
			if (IS_ACTOR_RIDEABLE(&iLocal_1032))
			{
				if (GET_LASSO_TARGET(&bLocal_1024) == &iLocal_1032)
				{
					SET_ACTOR_RIDEABLE(&iLocal_1032, 0);
				}
			}
			else if (!GET_LASSO_TARGET(&bLocal_1024) != &iLocal_1032)
			{
				SET_ACTOR_RIDEABLE(&iLocal_1032, 1);
			}
		}
		if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1030)
		{
			if (!GET_TASK_STATUS(&bLocal_1024, 67) != 1)
			{
				if (!IS_ACTOR_VALID(&iLocal_1032))
				{
					iLocal_1032 = &bLocal_927;
				}
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_1024, &iLocal_1032, 10.0f, 4);
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1024, &iLocal_1032, 25.0f, 10.0f, 20.0f);
			}
		}
		else if (GET_MOUNT(&Global_54076) == &bLocal_1030)
		{
			if (!GET_TASK_STATUS(&bLocal_1024, 0) != 1)
			{
				if (!IS_ACTOR_VALID(&iLocal_1032))
				{
					iLocal_1032 = &bLocal_927;
				}
				GET_OBJECT_POSITION(&iLocal_4 + 2776[20], &Local_968);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1024, 21, false, 1, 1);
				MEMORY_PREFER_RIDING(&bLocal_1024, true);
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1024, &iLocal_1032, 25.0f, 10.0f, 20.0f);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, &iLocal_1032, 10.0f, 4);
				TASK_USE_LASSO(0, &iLocal_1032, 1.0f, 2.0f, 1, 2);
				TASK_GO_TO_COORD(0, &Local_968, 4);
				TASK_FACE_ACTOR(0, &bLocal_925, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1024, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			}
		}
		else if (GET_TASK_STATUS(&bLocal_1024, 0) == 1)
		{
			if (!ANIMAL_ACTOR_GET_DOMESTICATION(&bLocal_1030) != 0)
			{
				DETACH_LASSO(&bLocal_1024);
				TASK_CLEAR(&bLocal_1024);
			}
		}
	}
	else if (!GET_TASK_STATUS(&bLocal_1024, 11) != 1)
	{
		TASK_MOUNT(&bLocal_1024, &bLocal_1026, 0, 1, 2, 2147483647);
	}
	return;
}

void Function_419() //Position: 0x1CF88 / 118664
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Ranch06_TakesHorse", "Ranch06_TakesHorse", false, 1, 1, 0, 1);
		Function_258(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_420(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1CFD6 / 118742
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_428(&Global_54076, &iParam3, iParam2))
	{
		Function_233(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_428(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_427(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_426(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_425(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_424(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_424(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_427(2))
	{
		Function_423(2);
		if (!Function_422())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_421();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_227(&iParam3);
				Function_215(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_424(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_424(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_421() //Position: 0x1D194 / 119188
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

bool Function_422() //Position: 0x1D1C2 / 119234
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

void Function_423(bool bParam0) //Position: 0x1D209 / 119305
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

void Function_424(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1D270 / 119408
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

void Function_425(bool bParam0) //Position: 0x1D32B / 119595
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

void Function_426(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1D392 / 119698
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

bool Function_427(bool bParam0) //Position: 0x1D427 / 119847
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

bool Function_428(var uParam0, var uParam1, bool bParam2) //Position: 0x1D471 / 119921
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

void Function_429() //Position: 0x1D586 / 120198
{
	if (iLocal_878 <= 6 && iLocal_878 > 105)
	{
		Function_417();
		Function_467(&bLocal_1065, &iLocal_1230);
		if (!iLocal_1085)
		{
			if (SQUAD_IS_VALID(&bLocal_1067))
			{
				Function_465(&bLocal_1065, &bLocal_1067, &bLocal_1030);
			}
			else
			{
				bLocal_1067 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildStraggle"));
				Function_362();
			}
			if (IS_ACTOR_VALID(&bLocal_1030))
			{
				Function_463(&bLocal_1065, &bLocal_1030);
				if (!iLocal_1245)
				{
					if (Function_461(&bLocal_1030, &iLocal_4 + 2408[22]) > 100.0f || Function_461(&Global_54076, &iLocal_4 + 2408[22]) > 100.0f)
					{
						Function_460();
						iLocal_1245 = 1;
					}
				}
			}
			else
			{
				bLocal_1030 = &iLocal_4 + 1048[02];
				Function_362();
				SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
			}
		}
	}
	switch (iLocal_878)
	{
		case 0x00000000:
			if (Function_342(iLocal_877))
			{
				Function_338(&iLocal_931);
				iLocal_878 = 1;
				iLocal_1227 = 6;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_943[2])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_337(iLocal_922) || iLocal_922 != 4294967295)) && Function_459())
				{
					Function_338(&iLocal_931);
					iLocal_878 = 2;
				}
			}
			else if (Function_459())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_458())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 4;
				Function_401(iLocal_877);
				Function_392(StackVal, Function_401(iLocal_877), iLocal_877, Global_46736[0], Function_400(iLocal_877), 2);
				Function_334(&iLocal_994, 6, 0, 4294967295, 4294967295);
				if (!SQUAD_IS_VALID(&bLocal_1063))
				{
					bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
				}
				if (SQUAD_GET(&bLocal_925) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_925, &bLocal_1063);
				}
				if (!SQUAD_GOAL_IS_VALID(&bLocal_1069))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1063);
					bLocal_1069 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&bLocal_1063, 0, 4294967295, &iLocal_4 + 3032, 2, 1, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_1063, &bLocal_1069, 8, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&bLocal_1063, &bLocal_1069, 1, 0);
				}
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&bLocal_1063, &bLocal_1069, 4);
				if (SQUAD_GET(&bLocal_1006) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_1006, &bLocal_1063);
				}
				if (SQUAD_GET(&bLocal_1010) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_1010, &bLocal_1063);
				}
				if (SQUAD_GET(&bLocal_1014) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_1014, &bLocal_1063);
				}
				if (SQUAD_GET(&bLocal_1018) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_1018, &bLocal_1063);
				}
				if (SQUAD_GET(&bLocal_1022) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_1022, &bLocal_1063);
				}
				if (SQUAD_GET(&bLocal_1024) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_1024, &bLocal_1063);
				}
				Function_405(&bLocal_1063);
				if (!HUD_IS_FADED())
				{
					SET_ACTOR_INVULNERABILITY(&Global_54076, true);
					Function_369(&(Local_1309[015]), 0);
					Function_369(&(Local_1309[215]), 0);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(&Global_54076);
			}
			break;
		
		case 0x00000004:
			Function_334(&iLocal_994, 6, 0, 4294967295, 4294967295);
			iLocal_1222 = 6;
			iLocal_1223 = 6;
			Function_279(&iLocal_4 + 1048[02], &iLocal_4 + 2144[12], 1, 1, 1);
			Function_279(&iLocal_4 + 1088[02], &iLocal_4 + 2144[13], 1, 1, 1);
			Function_279(&iLocal_4 + 1088[12], &iLocal_4 + 2144[14], 1, 1, 1);
			Function_279(&iLocal_4 + 1088[22], &iLocal_4 + 2144[15], 1, 1, 1);
			Function_279(&iLocal_4 + 1088[32], &iLocal_4 + 2144[16], 1, 1, 1);
			Function_279(&iLocal_4 + 1088[42], &iLocal_4 + 2144[17], 1, 1, 1);
			Function_457(&bLocal_1065, 4, 1);
			bLocal_1030 = &iLocal_4 + 1048[02];
			SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 1080);
			Function_405(&iLocal_4 + 1080);
			ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
			SQUAD_JOIN(&iLocal_4 + 1048[02], &bLocal_1065);
			iLocal_1052 = UNK_0x48588CCB(&bLocal_1065, 0, 4294967295, 1);
			Function_456(&bLocal_1065, &iLocal_1052);
			Function_405(&bLocal_1065);
			Function_455(&bLocal_1065, &iLocal_4 + 1400[6]);
			Function_455(&bLocal_1065, &iLocal_4 + 1400[7]);
			Function_455(&bLocal_1065, &iLocal_4 + 1400[8]);
			Function_455(&bLocal_1065, &iLocal_4 + 1400[9]);
			Function_455(&bLocal_1065, &iLocal_4 + 1400[10]);
			Function_455(&bLocal_1065, &iLocal_4 + 1400[11]);
			if (IS_BLIP_VALID(Function_454(3)))
			{
				Function_214(3, 0, 1);
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_925)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_925));
			}
			Function_354("Ranch06_obj03b");
			MEMORY_PREFER_RIDING(&bLocal_925, true);
			Function_338(&iLocal_1166);
			iLocal_1079 = 0;
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_362();
			if (HUD_IS_FADED())
			{
				Function_323(&Global_54076, &iLocal_4 + 2144[1], 1, 1, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2144[3], 1, 1, 1);
				Function_279(&bLocal_1008, &iLocal_4 + 2144[19], 1, 1, 1);
				Function_279(&bLocal_1012, &iLocal_4 + 2144[20], 1, 1, 1);
				Function_279(&bLocal_1016, &iLocal_4 + 2144[21], 1, 1, 1);
				Function_279(&bLocal_1020, &iLocal_4 + 2408[11], 1, 1, 1);
				Function_279(&bLocal_1028, &iLocal_4 + 2408[19], 1, 1, 1);
				Function_279(&bLocal_1026, &iLocal_4 + 2408[20], 1, 1, 1);
				if (!IS_ACTOR_RIDING(&bLocal_1006))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_1006, &bLocal_1008);
				}
				if (!IS_ACTOR_RIDING(&bLocal_1010))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_1010, &bLocal_1012);
				}
				if (!IS_ACTOR_RIDING(&bLocal_1014))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1016);
				}
				if (!IS_ACTOR_RIDING(&bLocal_1018))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_1018, &bLocal_1020);
				}
				if (!IS_ACTOR_RIDING(&bLocal_1022))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_1022, &bLocal_1028);
				}
				if (!IS_ACTOR_RIDING(&bLocal_1024))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_1024, &bLocal_1026);
				}
				TASK_STAND_STILL(&bLocal_1018, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1022, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1024, -1.0f, 0, 0);
			}
			Function_338(&iLocal_931);
			iLocal_878 = 6;
			break;
		
		case 0x00000006:
			if (Function_245(&iLocal_931) < 3.0f)
			{
				if (Function_453(&iLocal_4 + 1296) && Function_451(&iLocal_4 + 1296, 1))
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
						SET_ACTOR_INVULNERABILITY(&Global_54076, false);
						Function_369(&(Local_1309[015]), 1);
						Function_369(&(Local_1309[215]), 1);
					}
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&bLocal_1063, &bLocal_1069, 4);
					Function_450();
					Function_449();
					Function_338(&iLocal_931);
					iLocal_878 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_430())
			{
				if (IS_ACTOR_VALID(&uLocal_1246))
				{
					DETACH_LASSO(&Global_54076);
					TASK_CLEAR(&uLocal_1246);
					uLocal_1246 = "";
				}
				Function_334(&iLocal_994, 56, 0, 4294967295, 4294967295);
				SET_ACTOR_INVULNERABILITY(&Global_54076, true);
				Function_369(&(Local_1309[015]), 0);
				Function_369(&(Local_1309[215]), 0);
				Function_338(&iLocal_931);
				Function_338(&iLocal_935);
				Function_338(&iLocal_939);
				iLocal_878 = 106;
			}
			break;
		
		case 0x0000006A:
			if (DECOR_CHECK_EXIST(&Global_54076, "herding"))
			{
				DECOR_REMOVE(&Global_54076, "herding");
			}
			Function_340();
			STREAMING_UNLOAD_BOUNDS();
			Function_220();
			iLocal_943[3] = 1;
			Function_338(&iLocal_931);
			iLocal_877 = 4;
			iLocal_878 = 0;
			break;
	}
	return;
}

bool Function_430() //Position: 0x1DCCD / 122061
{
	Function_448();
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_447();
			if (!iLocal_1082)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						Function_212();
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
							Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						iLocal_1082 = 1;
						MEMORY_PREFER_RIDING(&bLocal_1006, true);
						MEMORY_PREFER_RIDING(&bLocal_1010, true);
						MEMORY_PREFER_RIDING(&bLocal_1014, true);
						MEMORY_PREFER_RIDING(&bLocal_1018, true);
						MEMORY_PREFER_RIDING(&bLocal_1022, true);
						MEMORY_PREFER_RIDING(&bLocal_1024, true);
						Function_338(&iLocal_931);
					}
				}
			}
			if (!iLocal_1083 && iLocal_1082)
			{
				if (Function_445(&bLocal_925, &iLocal_4 + 3032) > 10.0f)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&bLocal_1063, &bLocal_1069, 0, 0);
					Function_338(&iLocal_931);
					Function_444();
					iLocal_1083 = 1;
				}
			}
			if (iLocal_1083)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					Function_443();
					iLocal_1563 = 1;
					Function_338(&iLocal_1166);
					Function_338(&iLocal_931);
					bLocal_1060 = RAND_INT_RANGE(3, 7);
					Function_354("Ranch06_obj03b");
					if (!iLocal_1214)
					{
						Function_139("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_1214 = 1;
					}
					iLocal_1207 = (Function_346(&Global_54076, &bLocal_1030) + 20.0f);
					fLocal_1208 = (iLocal_1207 + 75.0f);
					iLocal_1082 = 0;
					iLocal_1083 = 0;
					iLocal_1084 = 0;
					Function_338(&iLocal_931);
				}
			}
			break;
		
		case 0x00000001:
			Function_442();
			Function_441();
			Function_447();
			Function_420(&iLocal_939, iLocal_1207, fLocal_1208, &bLocal_1030, "Ranch06_herd_return", "Herd_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
			Function_439();
			Function_438();
			if (Function_245(&iLocal_931) <= IntToFloat(bLocal_1060))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_461(&Global_54076, &iLocal_1230) > 20.0f)
					{
						if (!HUD_IS_SHOWING_OBJECTIVE())
						{
							Function_437();
							Function_338(&iLocal_931);
							bLocal_1060 = RAND_INT_RANGE(3, 7);
						}
					}
				}
			}
			if (Function_436(&bLocal_1065, &iLocal_4 + 1520[0]) || Function_436(&iLocal_4 + 1080, &iLocal_4 + 1520[0]))
			{
				iLocal_1085 = 1;
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&bLocal_1065, &iLocal_1052);
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&iLocal_4 + 1080, &uLocal_1050);
				SQUAD_GOALS_CLEAR(&bLocal_1065);
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1080);
				SQUAD_GOALS_CLEAR(&bLocal_1067);
				bLocal_977 = false;
				while (bLocal_977 <= SQUAD_GET_SIZE(&bLocal_1065))
				{
					iLocal_978 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, bLocal_977);
					if (IS_ACTOR_VALID(&iLocal_978))
					{
						if (IS_ACTOR_ALIVE(&iLocal_978))
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_978, 22.0f);
						}
					}
					bLocal_977++;
				}
				GET_OBJECT_POSITION(&iLocal_4 + 2408[13], &Local_968);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[02], &Local_968, 3);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[02], true);
				GET_OBJECT_POSITION(&iLocal_4 + 2408[14], &Local_968);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[12], &Local_968, 3);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[12], true);
				GET_OBJECT_POSITION(&iLocal_4 + 2408[15], &Local_968);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[22], &Local_968, 3);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[22], true);
				GET_OBJECT_POSITION(&iLocal_4 + 2408[16], &Local_968);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[32], &Local_968, 3);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[32], true);
				GET_OBJECT_POSITION(&iLocal_4 + 2408[17], &Local_968);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[42], &Local_968, 3);
				TASK_PRIORITY_SET(&iLocal_4 + 1088[42], true);
				bLocal_1030 = &iLocal_4 + 1048[02];
				Function_362();
				SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
				TASK_CLEAR(&bLocal_1030);
				GET_OBJECT_POSITION(&iLocal_4 + 2408[21], &Local_968);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_968, 3.0f, 3);
				TASK_HORSE_ACTION(0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1030, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1030, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1030, false);
				if (IS_BLIP_VALID(&bLocal_1178))
				{
					REMOVE_BLIP(&bLocal_1178);
				}
				Function_212();
				Function_216(&bLocal_1065);
				Function_434();
				iLocal_1085 = 1;
				Function_433();
				Function_354("Ranch06_obj03c");
				Function_338(&iLocal_931);
				iLocal_1563 = 3;
				return 1;
			}
			break;
		
		case 0x00000002:
			Function_441();
			Function_447();
			Function_438();
			Function_420(&iLocal_939, iLocal_1207, fLocal_1208, &bLocal_1030, "Ranch06_herd_return", "Herd_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
			if (!iLocal_1082)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						Function_432();
						Function_334(&iLocal_994, 56, 0, 4294967295, 4294967295);
						iLocal_1082 = 1;
						Function_338(&iLocal_931);
					}
				}
			}
			if (!iLocal_1083 && iLocal_1082)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						iLocal_1083 = 1;
						Function_257();
						Function_338(&iLocal_931);
					}
				}
			}
			if (iLocal_1083 && !iLocal_1084)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_437();
						iLocal_1084 = 1;
						Function_338(&iLocal_931);
					}
				}
			}
			if (!iLocal_1085)
			{
				Function_441();
				if (Function_436(&bLocal_1065, &iLocal_4 + 1520[0]) || Function_436(&iLocal_4 + 1080, &iLocal_4 + 1520[0]))
				{
					iLocal_1085 = 1;
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&bLocal_1065, &iLocal_1052);
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&iLocal_4 + 1080, &uLocal_1050);
					SQUAD_GOALS_CLEAR(&bLocal_1065);
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1080);
					SQUAD_GOALS_CLEAR(&bLocal_1067);
					bLocal_977 = false;
					while (bLocal_977 <= SQUAD_GET_SIZE(&bLocal_1065))
					{
						iLocal_978 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, bLocal_977);
						if (IS_ACTOR_VALID(&iLocal_978))
						{
							if (IS_ACTOR_ALIVE(&iLocal_978))
							{
								SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_978, 22.0f);
							}
						}
						bLocal_977++;
					}
					GET_OBJECT_POSITION(&iLocal_4 + 2408[13], &Local_968);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[02], &Local_968, 3);
					TASK_PRIORITY_SET(&iLocal_4 + 1088[02], true);
					GET_OBJECT_POSITION(&iLocal_4 + 2408[14], &Local_968);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[12], &Local_968, 3);
					TASK_PRIORITY_SET(&iLocal_4 + 1088[12], true);
					GET_OBJECT_POSITION(&iLocal_4 + 2408[15], &Local_968);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[22], &Local_968, 3);
					TASK_PRIORITY_SET(&iLocal_4 + 1088[22], true);
					GET_OBJECT_POSITION(&iLocal_4 + 2408[16], &Local_968);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[32], &Local_968, 3);
					TASK_PRIORITY_SET(&iLocal_4 + 1088[32], true);
					GET_OBJECT_POSITION(&iLocal_4 + 2408[17], &Local_968);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 1088[42], &Local_968, 3);
					TASK_PRIORITY_SET(&iLocal_4 + 1088[42], true);
					bLocal_1030 = &iLocal_4 + 1048[02];
					Function_362();
					SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
					TASK_CLEAR(&bLocal_1030);
					GET_OBJECT_POSITION(&iLocal_4 + 2408[21], &Local_968);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_968, 3.0f, 3);
					TASK_HORSE_ACTION(0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1030, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_1030, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1030, false);
					GET_OBJECT_POSITION(&iLocal_4 + 2408[5], &Local_968);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(0, &Local_968, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_925, true);
					if (IS_BLIP_VALID(&bLocal_1178))
					{
						REMOVE_BLIP(&bLocal_1178);
					}
					Function_212();
					Function_216(&bLocal_1065);
					Function_434();
					iLocal_1085 = 1;
					Function_433();
					Function_354("Ranch06_obj03c");
					Function_338(&iLocal_931);
					iLocal_1563 = 3;
					return 1;
				}
			}
			if (IS_OBJECT_VALID(&iLocal_1071))
			{
				if (GATEWAY_UPDATE(&iLocal_1071))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					return 1;
				}
			}
			if (Function_245(&iLocal_931) <= IntToFloat(bLocal_1060))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!Function_140())
					{
						if (Function_461(&Global_54076, &iLocal_1230) > 20.0f)
						{
							Function_437();
							Function_338(&iLocal_931);
							bLocal_1060 = RAND_INT_RANGE(3, 7);
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			Function_441();
			Function_431();
			if (!Function_420(&iLocal_939, iLocal_1207, fLocal_1208, &bLocal_1030, "Ranch06_obj03c", "Herd_abandoned", &bLocal_966, 0, 0, 0, 325, 1))
			{
				Function_354("Ranch06_obj03c");
			}
			if (Function_245(&iLocal_931) <= IntToFloat(bLocal_1060))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!Function_140())
					{
						if (Function_461(&Global_54076, &iLocal_1230) > 20.0f)
						{
							Function_437();
							Function_338(&iLocal_931);
							bLocal_1060 = RAND_INT_RANGE(3, 7);
						}
					}
				}
			}
			if (IS_OBJECT_VALID(&iLocal_1071))
			{
				if (GATEWAY_UPDATE(&iLocal_1071))
				{
					Function_213(&iLocal_1071);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					return 1;
				}
			}
			if (GET_TASK_STATUS(&bLocal_1030, 0) == 0)
			{
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1030, bLocal_977, 4294967295);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_1030, true);
				iLocal_1563 = 3;
			}
			return 0;
			break;
	}
	return 0;
}

void Function_431() //Position: 0x1E667 / 124519
{
	if (IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
	}
	return;
}

void Function_432() //Position: 0x1E67F / 124543
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_herdIntoTrap", "Ranch06_herdIntoTrap", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x1E6D0 / 124624
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_approachCanyon", "Ranch06_approachCanyon", true, 2, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x1E725 / 124709
{
	Function_214(3, 0, 1);
	if (IS_BLIP_VALID(&uLocal_1182))
	{
		REMOVE_BLIP(&uLocal_1182);
	}
	if (IS_BLIP_VALID(&uLocal_1180))
	{
		REMOVE_BLIP(&uLocal_1180);
	}
	if (!IS_BLIP_VALID(&bLocal_1178))
	{
		bLocal_1178 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2408[0], 330, 0f, 2, 0);
		if (IS_BLIP_VALID(&bLocal_1178))
		{
		}
	}
	if (!IS_OBJECT_VALID(&iLocal_1071))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 2408[0], &Local_1197);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 2408[0], &Local_1200);
		iLocal_1071 = Function_435(StackVal, StackVal, &uLocal_817, "HOME02_RANCH03GATEWAY01", Local_1197, Local_1200, &Global_54076, 7.0f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
		if (IS_OBJECT_VALID(&iLocal_1071))
		{
		}
	}
	if (IS_BLIP_VALID(&uLocal_1180))
	{
		REMOVE_BLIP(&uLocal_1180);
	}
	return;
}

float Function_435(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x1E810 / 124944
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

int Function_436(bool bParam0, int iParam1) //Position: 0x1E8FB / 125179
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_437() //Position: 0x1E989 / 125321
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_yellAtHorse", "Ranch06_yellAtHorse", true, 2, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438() //Position: 0x1E9D8 / 125400
{
	if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1030, 50.0f))
	{
		if (!DECOR_CHECK_EXIST(&Global_54076, "herding"))
		{
			DECOR_SET_BOOL(&Global_54076, "herding", true);
		}
		if (!IS_BLIP_VALID(&bLocal_1178))
		{
			bLocal_1178 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1520[0], 330, 0f, 2, 0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
		{
			ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
			Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		if (iLocal_1563 <= 2)
		{
			Function_354("Ranch06_obj03ca");
		}
		else
		{
			Function_354("Ranch06_obj03c");
		}
	}
	else if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1030, 75.0f))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "herding"))
		{
			DECOR_REMOVE(&Global_54076, "herding");
		}
		if (IS_BLIP_VALID(&bLocal_1178))
		{
			REMOVE_BLIP(&bLocal_1178);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1030)))
		{
			ADD_BLIP_FOR_ACTOR(&bLocal_1030, 418, 0, 2, 0);
			Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		Function_354("Ranch06_obj03b");
	}
	return;
}

void Function_439() //Position: 0x1EB3B / 125755
{
	if (!iLocal_1079)
	{
		STREAMING_LOAD_BOUNDS((&iLocal_4 + 2648[03]), 50.0f, 1);
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1030, 100.0f))
		{
			if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_925, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 50.0f))
			{
				SET_ACTOR_UPDATE_PRIORITY(&bLocal_925, false);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_925, &Global_54076, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2704[0], 1, 1, 1);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3096, 3, 1, 0, 1, false);
				TASK_GO_NEAR_ACTOR(0, &Global_54076, 15.0f, 3);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_925);
				GET_OBJECT_POSITION(&iLocal_1230, &Local_968);
				Local_971 = Vector(20.0f, 20.0f, 20.0f);
				Function_76();
				uLocal_1250 = CREATE_VOLUME_IN_LAYOUT(&uLocal_817, "BonnieAvoid", 2,802597E-45f, Local_968, Function_76(), Local_971);
				Function_76();
				Function_76();
				ATTACH_OBJECTS(&uLocal_1250, &iLocal_1230, Function_54(), Function_76(), Function_76(), 4294967295);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_925, &uLocal_1250, 4, 1);
				Function_338(&iLocal_1166);
				iLocal_1079 = 1;
			}
		}
	}
	else
	{
		Function_317(&bLocal_925);
		STREAMING_LOAD_BOUNDS(Function_317(&bLocal_925), 50.0f, 1);
		if (ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 30.0f))
		{
			Function_334(&iLocal_994, 56, 0, 4294967295, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 10.0f, 4);
			Function_440();
			if (Function_346(&Global_54076, &bLocal_1030) < 150.0f)
			{
				iLocal_1207 = (Function_346(&Global_54076, &bLocal_1030) + 20.0f);
				fLocal_1208 = (iLocal_1207 + 75.0f);
			}
			else
			{
				iLocal_1207 = 150.0f;
				fLocal_1208 = (iLocal_1207 + 75.0f);
			}
			Function_338(&iLocal_931);
			iLocal_1563 = 2;
		}
	}
	return;
}

void Function_440() //Position: 0x1ED09 / 126217
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_trapReady", "Ranch06_trapReady", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441() //Position: 0x1ED54 / 126292
{
	if (!DECOR_CHECK_EXIST(&bLocal_1006, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1006, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1006, 50.0f))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2408[6], &Local_1203);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_1203, 200.0f))
			{
				bLocal_1056 = GET_MOUNT(&bLocal_1006);
				TASK_STAND_STILL(&bLocal_1006, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1006, 0);
				TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1056, 0);
				Function_279(&bLocal_1056, &iLocal_4 + 2408[6], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1006, &bLocal_1056);
				DECOR_SET_BOOL(&bLocal_1006, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(&bLocal_1010, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1010, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1010, 50.0f))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2408[9], &Local_1203);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_1203, 200.0f))
			{
				bLocal_1056 = GET_MOUNT(&bLocal_1010);
				TASK_STAND_STILL(&bLocal_1010, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1010, 0);
				TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1056, 0);
				Function_279(&bLocal_1056, &iLocal_4 + 2408[9], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1010, &bLocal_1056);
				DECOR_SET_BOOL(&bLocal_1010, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(&bLocal_1014, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1014, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1014, 50.0f))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2408[10], &Local_1203);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_1203, 200.0f))
			{
				bLocal_1056 = GET_MOUNT(&bLocal_1014);
				TASK_STAND_STILL(&bLocal_1014, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1014, 0);
				TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1056, 0);
				Function_279(&bLocal_1056, &iLocal_4 + 2408[10], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1056);
				DECOR_SET_BOOL(&bLocal_1014, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(&bLocal_1018, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1018, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1018, 50.0f))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2408[11], &Local_1203);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_1203, 200.0f))
			{
				bLocal_1056 = GET_MOUNT(&bLocal_1018);
				TASK_STAND_STILL(&bLocal_1018, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1018, 0);
				TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1056, 0);
				Function_279(&bLocal_1056, &iLocal_4 + 2408[11], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1018, &bLocal_1056);
				DECOR_SET_BOOL(&bLocal_1018, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(&bLocal_1022, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1022, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1022, 50.0f))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2408[19], &Local_1203);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_1203, 200.0f))
			{
				bLocal_1056 = GET_MOUNT(&bLocal_1022);
				TASK_STAND_STILL(&bLocal_1022, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1022, 0);
				TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1056, 0);
				Function_279(&bLocal_1056, &iLocal_4 + 2408[19], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1022, &bLocal_1056);
				DECOR_SET_BOOL(&bLocal_1022, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(&bLocal_1024, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1024, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1024, 50.0f))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2408[20], &Local_1203);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_1203, 200.0f))
			{
				bLocal_1056 = GET_MOUNT(&bLocal_1024);
				TASK_STAND_STILL(&bLocal_1024, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1024, 0);
				TASK_STAND_STILL(&bLocal_1056, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&bLocal_1056, 0);
				Function_279(&bLocal_1056, &iLocal_4 + 2408[20], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1024, &bLocal_1056);
				DECOR_SET_BOOL(&bLocal_1024, "CowboyTeleported", true);
			}
		}
	}
	return;
}

void Function_442() //Position: 0x1F256 / 127574
{
	if (!GET_TASK_STATUS(&bLocal_1006, 0) != 1)
	{
		bLocal_1061 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1006, bLocal_1061);
		TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_1006, 3, 0);
	}
	if (!GET_TASK_STATUS(&bLocal_1010, 0) != 1)
	{
		bLocal_1061 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1010, bLocal_1061);
		TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_1010, 3, 0);
	}
	if (!GET_TASK_STATUS(&bLocal_1014, 0) != 1)
	{
		bLocal_1061 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1014, bLocal_1061);
		TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_1014, 3, 0);
	}
	if (!GET_TASK_STATUS(&bLocal_1018, 0) != 1)
	{
		bLocal_1061 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1018, bLocal_1061);
		TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_1018, 3, 0);
	}
	if (!GET_TASK_STATUS(&bLocal_1022, 0) != 1)
	{
		bLocal_1061 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1022, bLocal_1061);
		TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_1022, 3, 0);
	}
	if (!GET_TASK_STATUS(&bLocal_1024, 0) != 1)
	{
		bLocal_1061 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2408[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1024, bLocal_1061);
		TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_1024, 3, 0);
	}
	GET_OBJECT_POSITION(&iLocal_4 + 2408[5], &Local_968);
	bLocal_977 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(0, &Local_968, 4);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
	TASK_SEQUENCE_RELEASE(bLocal_977, 1);
	TASK_PRIORITY_SET(&bLocal_925, true);
	return;
}

void Function_443() //Position: 0x1F459 / 128089
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideAfterHorse", "Ranch06_rideAfterHorse", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_444() //Position: 0x1F4AE / 128174
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_herdTrap", "Ranch06_herdTrap", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_445(bool bParam0, bool bParam1) //Position: 0x1F4F7 / 128247
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	
	bVar2 = (GET_PATH_NUM_POINTS(&bParam1) - 1);
	GET_PATH_POINT(&bParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_350(&bParam0);
		Var3 = Function_350(&bParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_446(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x1F587 / 128391
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

void Function_447() //Position: 0x1F697 / 128663
{
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		if (!IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
		{
			Function_76();
			SET_CAMERA_FOCUS_OBJECT(&uLocal_1252, &bLocal_1030, Function_76(), 1.0f);
			SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Herd");
			SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 1);
		}
	}
	else if (IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
	}
	return;
}

void Function_448() //Position: 0x1F704 / 128772
{
	if (!IS_ACTOR_VALID(&uLocal_1246))
	{
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
		{
			if (IS_ACTOR_HORSE(GET_LASSO_TARGET(&Global_54076)))
			{
				uLocal_1246 = GET_LASSO_TARGET(&Global_54076);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM_REPEATEDLY(&uLocal_1246, bLocal_977, 4294967295);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			}
		}
	}
	else if (GET_LASSO_USER(&uLocal_1246) != &Global_54076)
	{
		TASK_CLEAR(&uLocal_1246);
		uLocal_1246 = "";
	}
	return;
}

void Function_449() //Position: 0x1FAC7 / 129735
{
	if (!IS_OBJECT_VALID(&uLocal_1252))
	{
		Function_76();
		uLocal_1252 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&uLocal_817, "cFocus", &bLocal_1030, Function_76(), 100.0f, 200.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Herd");
	}
	else
	{
		Function_76();
		SET_CAMERA_FOCUS_OBJECT(&uLocal_1252, &bLocal_1030, Function_76(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Herd");
	}
	return;
}

void Function_450() //Position: 0x1FB63 / 129891
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS03_v1_AA", "Ranch06_CS03_v1_AA", false, 4, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_451(int iParam0, int iParam1) //Position: 0x1FBB0 / 129968
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
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
				if (!Function_452(&uVar1, iParam1, 0x41700000))
				{
					return 0;
				}
			}
			return 0;
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_452(var uParam0, bool bParam1, float fParam2) //Position: 0x1FC16 / 130070
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&uParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&uParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&uParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&uParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

int Function_453(int iParam0) //Position: 0x1FCB8 / 130232
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (!IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var Function_454(int iParam0) //Position: 0x1FCF8 / 130296
{
	return &Global_15402[iParam014] + 104;
}

int Function_455(bool bParam0, int iParam1) //Position: 0x1FD08 / 130312
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_456(bool bParam0, int iParam1) //Position: 0x1FD66 / 130406
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (&iParam1 == "")
	{
		return;
	}
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 8, 0,75f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 19, 45.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 25, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 0, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 1, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 2, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 15, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 16, 12.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 17, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 18, 50.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 21, 3.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 20, 9,352f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 27, 0,1f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 28, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 1, 29, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 8, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 19, 65.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 25, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 0, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 1, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 2, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 15, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 16, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 17, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 18, 40.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 21, 6,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 20, 12.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 27, 0.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 28, 0,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&bParam0, &iParam1, 0, 29, 15.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&bParam0, &iParam1, 0, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&bParam0, &iParam1, 0, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&bParam0, &iParam1, 0, 12, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&bParam0, &iParam1, 1, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&bParam0, &iParam1, 1, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&bParam0, &iParam1, 1, 12, 0,5f);
	SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&bParam0, &iParam1, 1, 0,5f, 0,7f);
	SQUAD_FLOCK_ADD_EXTERNAL_ALERT(&bParam0, &iParam1, &Global_54076, 20.0f, 5.0f, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&bParam0, &iParam1, &Global_54076, 33.0f, 4.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&bParam0, &iParam1, &Global_54076, 33.0f, 1,5f, 33.0f, 10.0f, 1.0f);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&bParam0, &iParam1, &bLocal_925, 20.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&bParam0, &iParam1, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&bParam0, &iParam1, 1);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		SET_ACTOR_UPDATE_PRIORITY(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), false);
		SET_ACTOR_BASE_SCORE(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), 10000.0f, 1);
		SET_ACTOR_BASE_SCORE(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), 10000.0f, 0);
		SET_ACTOR_CAN_BUMP(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), 0);
		bVar0++;
	}
	return;
}

int Function_457(var uParam0, bool bParam1, int iParam2) //Position: 0x200C4 / 131268
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
			SET_ACTOR_VOLUME_PARAMETERS(&uVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return 1;
}

bool Function_458() //Position: 0x2010C / 131340
{
	switch (iLocal_1227)
	{
		case 0x00000006:
			if (!IS_ACTOR_VALID(&bLocal_927))
			{
				if (Function_306())
				{
					bLocal_927 = Function_299(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				Function_212();
				if (!iLocal_943[2])
				{
					Function_408();
				}
				Function_328();
				Function_407();
				bLocal_1030 = &iLocal_4 + 1048[02];
				SET_ACTOR_INVULNERABILITY(&bLocal_1030, true);
				if (!SQUAD_IS_VALID(&bLocal_1065))
				{
					bLocal_1065 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildSquad"));
				}
				bLocal_1065 = &iLocal_4 + 1184;
				if (!IS_ACTOR_VALID(&bLocal_996))
				{
					Function_298();
					bLocal_996 = &iLocal_4 + 912[02];
					DECOR_SET_BOOL(&bLocal_996, "bNoInjuryEjection", true);
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
					TASK_PRIORITY_SET(&bLocal_996, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_996, 1);
					SET_ACTOR_FACTION(&bLocal_996, 21);
					bLocal_998 = &iLocal_4 + 912[12];
					TASK_PRIORITY_SET(&bLocal_998, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_998, 1);
					SET_ACTOR_FACTION(&bLocal_998, 21);
				}
				if (!iLocal_943[2])
				{
					TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
					Function_279(&bLocal_927, &iLocal_4 + 2144[1], 1, 1, 1);
					Function_279(&bLocal_925, &iLocal_4 + 2144[3], 1, 1, 1);
					Function_279(&bLocal_996, &iLocal_4 + 2144[3], 1, 1, 1);
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(&Global_54076);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1040))
				{
					Function_412(&iLocal_4 + 1040, 0, 0);
					DESTROY_OBJECT(&iLocal_4 + 1040);
				}
				if (!SQUAD_IS_VALID(&bLocal_1063))
				{
					bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
					SQUAD_JOIN(&bLocal_925, &bLocal_1063);
				}
				Function_338(&iLocal_1042);
				iLocal_1227 = 7;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_943[2])
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
				}
				if (!IS_ACTOR_RIDING(&bLocal_925))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
				}
			}
			Function_406();
			Function_338(&iLocal_1042);
			iLocal_1227 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_943[2])
			{
				Function_323(&Global_54076, &iLocal_4 + 2144[1], 1, 1, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2144[3], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1006, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1010, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1014, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1018, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1022, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1024, -1.0f, 0, 0);
				ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
			}
			CLEAR_LINKED_ANIM_TARGET(&bLocal_925);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_925, 1);
			Function_338(&iLocal_1042);
			iLocal_1227 = 9;
			break;
		
		case 0x00000009:
			Function_338(&iLocal_1042);
			iLocal_1227 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

bool Function_459() //Position: 0x203FC / 132092
{
	Function_291(&iLocal_4 + 456, 978, 2, 0);
	Function_291(&iLocal_4 + 456, 976, 2, 0);
	Function_291(&iLocal_4 + 456, 977, 2, 0);
	Function_291(&iLocal_4 + 456, 170, 2, 0);
	Function_291(&iLocal_4 + 456, 171, 2, 0);
	Function_291(&iLocal_4 + 456, 172, 2, 0);
	Function_291(&iLocal_4 + 456, 173, 2, 0);
	Function_291(&iLocal_4 + 456, 174, 2, 0);
	Function_291(&iLocal_4 + 456, 175, 2, 0);
	if (Function_282(&iLocal_4 + 456))
	{
		return 1;
	}
	return 0;
}

void Function_460() //Position: 0x20488 / 132232
{
	if (IS_OBJECT_VALID(&iLocal_865 + 24))
	{
		if (!STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iLocal_865 + 24), "Ranch06_CS04_v2"))
		{
			DESTROY_OBJECT(&iLocal_865 + 24);
			(&iLocal_865 + 24) = Function_378(&iLocal_4, 0, &Global_54076, &bLocal_927, &bLocal_996, 0, 1, 0);
		}
	}
	else
	{
		Function_378(&iLocal_4, 0, &Global_54076, &bLocal_927, &bLocal_996, 0, 1, 0);
	}
	return;
}

float Function_461(var uParam0, int iParam1) //Position: 0x204FB / 132347
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_350(&uParam0);
			Var0 = Function_350(&uParam0);
			Function_462(&iParam1);
			Var2 = Function_462(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_462(int iParam0) //Position: 0x2059D / 132509
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

void Function_463(var uParam0, int iParam1) //Position: 0x2060B / 132619
{
	bool bVar0;
	int iVar1;
	
	switch (iLocal_1222)
	{
		case 0x00000006:
			if (SQUAD_GET_SIZE(&uParam0) > 3)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
				{
					iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						if (!&iVar1 != &bLocal_1030)
						{
							if (Function_464(&iParam1, &iVar1) < 80.0f)
							{
								TASK_CLEAR(&iVar1);
								SQUAD_LEAVE(&iVar1);
								SQUAD_JOIN(&iVar1, &bLocal_1067);
								SET_ACTOR_MAX_SPEED(&iVar1, 4);
							}
						}
					}
					bVar0++;
				}
			}
			break;
	}
	return;
}

float Function_464(int iParam0, int iParam1) //Position: 0x20692 / 132754
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_462(&iParam0);
			Var0 = Function_462(&iParam0);
			Function_462(&iParam1);
			Var2 = Function_462(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_465(float fParam0, float fParam1, int iParam2) //Position: 0x2072F / 132911
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_1223)
	{
		case 0x00000006:
			SQUAD_GOAL_ADD_GENERAL_TASK(&fParam1, true, 1, 4294967295);
			Local_968 = Vector(0.0f, 0.0f, 0.0f);
			TASK_FOLLOW_OBJECT(0, &iParam2, &Local_968, 0, 0, 0, 0, 0, 0, 1);
			iLocal_1223 = 7;
			break;
		
		case 0x00000007:
			if (SQUAD_GET_SIZE(&fParam1) >= 0)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&fParam1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&fParam1, bVar0);
					if (IS_ACTOR_VALID(&bVar1))
					{
						if (Function_466(&bVar1, &iParam2, 5.0f))
						{
							if (!IS_ACTOR_IN_VOLUME(&bVar1, &iLocal_4 + 1512))
							{
								TASK_CLEAR(&bVar1);
								SQUAD_LEAVE(&bVar1);
								SQUAD_JOIN(&bVar1, &fParam0);
								CLEAR_ACTOR_MAX_SPEED(&bVar1);
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

bool Function_466(bool bParam0, var uParam1, float fParam2) //Position: 0x207EC / 133100
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_350(&bParam0);
			Function_462(&uParam1);
			if (VDIST(Function_350(&bParam0), Function_462(&uParam1)) >= fParam2)
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

void Function_467(bool bParam0, var uParam1) //Position: 0x2090A / 133386
{
	struct<2> Var0;
	struct<2> Var2;
	struct<5> Var4;
	
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	if (SQUAD_GET_SIZE(&bParam0) > 1)
	{
		SQUAD_COMPUTE_CENTROID(&bParam0, &Var0);
		STREAMING_LOAD_BOUNDS(Var0, 200.0f, 0);
		Function_468(&bParam0);
		Var2 = Function_468(&bParam0);
		Var4 = Var4;
		Var4.f_4 = UNK_0x9C40E671(&Var2);
		SET_OBJECT_POSITION(&uParam1, Var0);
		SET_OBJECT_ORIENTATION(&uParam1, Var2);
		Local_968 = Vector(0.0f, 0.0f, 0.0f);
	}
	return;
}

struct<8> Function_468(int iParam0) //Position: 0x20970 / 133488
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
		UNK_0x44986367(&Var2, Function_469(&uVar1));
		Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var4, StackVal);
		bVar0++;
	}
	Var4 = (Var4 / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	Var4.f_4 = 0.0f;
	Var4.f_8 = (StackVal / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	return StackVal, Var4;
}

var Function_469(bool bParam0) //Position: 0x209D9 / 133593
{
	return GET_HEADING(&bParam0);
}

void Function_470() //Position: 0x209E5 / 133605
{
	float fVar0;
	
	if (iLocal_878 < 3 && iLocal_878 > 105)
	{
		Function_488();
		Function_417();
	}
	switch (iLocal_878)
	{
		case 0x00000000:
			if (Function_342(iLocal_877))
			{
				Function_338(&iLocal_931);
				iLocal_878 = 1;
				iLocal_1226 = 6;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_943[1])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_337(iLocal_922) || iLocal_922 != 4294967295)) && Function_487())
				{
					Function_338(&iLocal_931);
					iLocal_878 = 2;
				}
			}
			else if (Function_487())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_485())
			{
				if (Function_403(StackVal, StackVal, StackVal, StackVal, StackVal, Local_819, iLocal_877))
				{
					Function_334(&iLocal_994, 0, 0, 4294967295, 4294967295);
					Function_338(&iLocal_931);
					iLocal_878 = 3;
				}
				else
				{
					TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
					TASK_STAND_STILL(&bLocal_996, -1.0f, 0, 0);
					TASK_FOLLOW_PATH(&bLocal_925, &iLocal_4 + 3024, 4, 0, 0, 1, false);
					TASK_FOLLOW_PATH(&Global_54076, &iLocal_4 + 3024, 4, 0, 0, 1, false);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_279(&bLocal_927, &iLocal_4 + 2024[1], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&Global_54076))
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
					}
					AI_ACTOR_FORCE_SPEED(&Global_54076, 4);
					AI_ACTOR_FORCE_SPEED(&bLocal_927, 4);
					SIMULATE_PLAYER_INPUT_GAIT(0, 3, 1073741824, 0);
					ACTOR_POP_NEXT_GAIT(&Global_54076, 3, 0);
					ACTOR_POP_NEXT_GAIT(&bLocal_927, 3, 0);
					Function_279(&bLocal_996, &iLocal_4 + 2024[3], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&bLocal_925))
					{
						ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
					}
					AI_ACTOR_FORCE_SPEED(&bLocal_925, 4);
					AI_ACTOR_FORCE_SPEED(&bLocal_996, 4);
					ACTOR_POP_NEXT_GAIT(&bLocal_925, 3, 0);
					ACTOR_POP_NEXT_GAIT(&bLocal_996, 3, 0);
					Function_338(&iLocal_931);
					iLocal_878 = 4;
				}
				Function_401(iLocal_877);
				Function_392(StackVal, Function_401(iLocal_877), iLocal_877, Global_46736[2], Function_400(iLocal_877), 2);
			}
			break;
		
		case 0x00000003:
			if (Function_238("$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &iLocal_865, &Local_819, &iLocal_877, 78971, 57680, 55366, 54688, 48872, 48790, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_338(&iLocal_931);
				iLocal_878 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				CAMERA_RESET(0);
				HUD_FADE_IN(1.0f, 1065353216);
				SET_ACTOR_INVULNERABILITY(&Global_54076, false);
			}
			if (IS_ACTOR_VALID(&bLocal_929))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_929);
				GIVE_WEAPON_TO_ACTOR(&bLocal_929, 40, false, 1, 1);
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_929, "ranch06_drew_idle"))
				{
					Function_265();
				}
				TASK_PRIORITY_SET(&bLocal_929, 2);
				SET_ACTOR_FACTION(&bLocal_929, 20);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_929, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_929, 1);
				RELEASE_ACTOR_AS_AMBIENT(&bLocal_929);
			}
			if (IS_ACTOR_VALID(&bLocal_1054))
			{
				DESTROY_ACTOR(&bLocal_1054);
			}
			Function_334(&iLocal_994, 23, 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(&Global_54076);
			ACTOR_START_FORCE_HOLSTER(&bLocal_925, 1, 0);
			AI_ACTOR_FORCE_SPEED(&bLocal_925, 4);
			Function_362();
			Function_338(&iLocal_931);
			iLocal_878 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				AI_ACTOR_FORCE_SPEED(&bLocal_925, 4);
				TASK_PRIORITY_SET(&bLocal_925, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_925);
				DECOR_SET_BOOL(&uLocal_817, "PlayerControlStolen", true);
				Function_484();
				AI_RIDING_SET_ENABLED(&bLocal_925, 0);
				if (!SQUAD_IS_VALID(&bLocal_1063))
				{
					bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
				}
				if (SQUAD_GET(&bLocal_925) == &bLocal_1063)
				{
					SQUAD_LEAVE(&bLocal_925);
				}
				TASK_CLEAR(&bLocal_925);
				SQUAD_JOIN(&bLocal_925, &bLocal_1063);
				SQUAD_GOALS_CLEAR(&bLocal_1063);
				bLocal_1069 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&bLocal_1063, 0, 4294967295, &iLocal_4 + 3024, 2, 1, 1);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_1063, &bLocal_1069, 8, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&bLocal_1063, &bLocal_1069, 1, 0);
				Function_214(3, 1, 1);
				Function_338(&iLocal_931);
				iLocal_878 = 7;
			}
			break;
		
		case 0x00000007:
			AI_ACTOR_FORCE_SPEED(&bLocal_925, 4);
			Function_482();
			Function_354("Ranch06_obj02");
			Function_338(&iLocal_931);
			Function_338(&iLocal_935);
			Function_338(&iLocal_939);
			iLocal_1219 = 0;
			iLocal_878 = 9;
			break;
		
		case 0x00000009:
			if (DECOR_GET_BOOL(&uLocal_817, "PlayerControlStolen"))
			{
				if (GET_TASK_STATUS(&Global_54076, 0) != 2 || Function_245(&iLocal_931) <= 5.0f)
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(&Global_54076);
					DECOR_SET_BOOL(&uLocal_817, "PlayerControlStolen", false);
				}
			}
			Function_420(&iLocal_939, 120.0f, 200.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
			fVar0 = Function_346(&Global_54076, &bLocal_925);
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				if (GET_TASK_STATUS(&bLocal_925, 6) != 1)
				{
					TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_927)))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_927, 325, 0.0f, 2, 0);
				}
				Function_214(3, 0, 1);
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Horse_return");
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_927)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_927, 325, 0.0f, 2, 0);
					}
				}
				else
				{
					Function_354("Horse_find");
				}
			}
			else if (fVar0 < 30.0f)
			{
				if (!Function_480(&Global_54076, &bLocal_925, &iLocal_4 + 3024))
				{
					if (GET_TASK_STATUS(&bLocal_925, 6) != 1)
					{
						TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
						Function_227(&bLocal_927);
						ABORT_SCRIPTED_CONVERSATION(1);
					}
				}
				else if (GET_TASK_STATUS(&bLocal_925, 6) == 1)
				{
					TASK_CLEAR(&bLocal_925);
				}
				Function_214(3, 1, 1);
			}
			else
			{
				if (GET_TASK_STATUS(&bLocal_925, 6) == 1)
				{
					TASK_CLEAR(&bLocal_925);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1720[1]))
				{
					Function_474();
				}
				Function_227(&bLocal_927);
				Function_214(3, 1, 1);
			}
			if (IS_ACTOR_IN_VOLUME(&bLocal_925, &iLocal_4 + 1784))
			{
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&bLocal_1063, &bLocal_1069, 4);
			}
			else if (IS_VOLUME_VALID(&iLocal_4 + 1720[4]))
			{
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&bLocal_1063, &bLocal_1069, 3);
			}
			else
			{
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&bLocal_1063, &bLocal_1069, 4);
			}
			Function_471();
			if (Function_466(&bLocal_925, &iLocal_4 + 2144[0], 15.0f))
			{
				if (Function_466(&Global_54076, &iLocal_4 + 2144[0], 15.0f))
				{
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_PATH(&bLocal_1063, &bLocal_1069, &iLocal_4 + 3032);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_1063, &bLocal_1069, 8, 1);
					Function_213(&iLocal_1071);
					DESTROY_VOLUME(&iLocal_4 + 1648[1]);
					Function_212();
					Function_338(&iLocal_931);
					iLocal_878 = 106;
					if (!HUD_IS_FADED())
					{
						SET_ACTOR_INVULNERABILITY(&Global_54076, true);
						Function_369(&(Local_1309[015]), 0);
						Function_369(&(Local_1309[215]), 0);
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_340();
			Function_221();
			iLocal_943[2] = 1;
			Function_338(&iLocal_931);
			iLocal_877 = 3;
			iLocal_878 = 0;
			break;
	}
	return;
}

void Function_471() //Position: 0x2111C / 135452
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1720[0]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1720[0]))
		{
			Function_408();
			DESTROY_VOLUME(&iLocal_4 + 1720[0]);
		}
	}
	if ((((((IS_ACTOR_VALID(GET_MOUNT(&bLocal_1006)) && IS_ACTOR_VALID(GET_MOUNT(&bLocal_1010))) && IS_ACTOR_VALID(GET_MOUNT(&bLocal_1014))) && IS_ACTOR_VALID(GET_MOUNT(&bLocal_1018))) && IS_ACTOR_VALID(GET_MOUNT(&bLocal_1022))) && IS_ACTOR_VALID(GET_MOUNT(&bLocal_1024))) && iLocal_1564 != 0)
	{
		Function_406();
		Function_473();
		TASK_STAND_STILL(&bLocal_1008, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1012, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1016, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1020, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1028, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1026, -1.0f, 0, 0);
		iLocal_1564 = 1;
		iLocal_1565 = 1;
		iLocal_1566 = 1;
		iLocal_1567 = 1;
		iLocal_1568 = 1;
		iLocal_1569 = 1;
	}
	if (iLocal_1564 == 1)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 1720[1]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1720[1]))
			{
				TASK_CLEAR(&bLocal_1006);
				SQUAD_JOIN(&bLocal_1006, &bLocal_1063);
				TASK_PRIORITY_SET(&bLocal_1006, true);
				DESTROY_VOLUME(&iLocal_4 + 1720[1]);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_1006, 1.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1006, 30.0f);
				Function_472();
				iLocal_1564 = 2;
			}
		}
	}
	if (iLocal_1565 == 1)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 1720[2]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1720[2]))
			{
				TASK_CLEAR(&bLocal_1010);
				SQUAD_JOIN(&bLocal_1010, &bLocal_1063);
				TASK_PRIORITY_SET(&bLocal_1010, true);
				DESTROY_VOLUME(&iLocal_4 + 1720[2]);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_1010, 1.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1010, 30.0f);
				iLocal_1565 = 2;
			}
		}
	}
	if (iLocal_1566 != 1 && iLocal_1567 != 1)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 1720[3]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1720[3]))
			{
				TASK_CLEAR(&bLocal_1014);
				SQUAD_JOIN(&bLocal_1014, &bLocal_1063);
				TASK_PRIORITY_SET(&bLocal_1014, true);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_1014, 1.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1014, 30.0f);
				DESTROY_VOLUME(&iLocal_4 + 1720[3]);
				iLocal_1566 = 2;
				iLocal_1567 = 2;
			}
		}
	}
	if (iLocal_1568 != 1 && iLocal_1569 != 1)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 1720[4]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1720[4]))
			{
				DESTROY_VOLUME(&iLocal_4 + 1720[4]);
				iLocal_1568 = 3;
				iLocal_1569 = 3;
			}
		}
	}
	if (iLocal_1564 == 2)
	{
		if (IS_ACTOR_RIDING(&bLocal_1006))
		{
			MEMORY_PREFER_RIDING(&bLocal_1006, true);
			iLocal_1564 = 3;
		}
	}
	if (iLocal_1565 == 2)
	{
		if (IS_ACTOR_RIDING(&bLocal_1010))
		{
			MEMORY_PREFER_RIDING(&bLocal_1010, true);
			iLocal_1565 = 3;
		}
	}
	if (iLocal_1566 == 2)
	{
		if (IS_ACTOR_RIDING(&bLocal_1014))
		{
			MEMORY_PREFER_RIDING(&bLocal_1014, true);
			iLocal_1566 = 3;
		}
	}
	if (iLocal_1567 == 2)
	{
		if (IS_ACTOR_RIDING(&bLocal_1018))
		{
			MEMORY_PREFER_RIDING(&bLocal_1018, true);
			iLocal_1567 = 3;
		}
	}
	return;
}

void Function_472() //Position: 0x213F2 / 136178
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_seeRanchhands", "Ranch06_seeRanchhands", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x21445 / 136261
{
	TASK_STAND_STILL(&bLocal_1006, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1006, true);
	Function_279(&bLocal_1008, &iLocal_4 + 2144[25], 1, 1, 1);
	if (!IS_ACTOR_RIDING(&bLocal_1006))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1006, &bLocal_1008);
	}
	TASK_STAND_STILL(&bLocal_1010, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1010, true);
	Function_279(&bLocal_1012, &iLocal_4 + 2144[26], 1, 1, 1);
	if (!IS_ACTOR_RIDING(&bLocal_1010))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1010, &bLocal_1012);
	}
	TASK_STAND_STILL(&bLocal_1014, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1014, true);
	Function_279(&bLocal_1016, &iLocal_4 + 2144[27], 1, 1, 1);
	if (!IS_ACTOR_RIDING(&bLocal_1014))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1014, &bLocal_1016);
	}
	TASK_STAND_STILL(&bLocal_1018, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1018, true);
	Function_279(&bLocal_1020, &iLocal_4 + 2408[11], 1, 1, 1);
	if (!IS_ACTOR_RIDING(&bLocal_1018))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1018, &bLocal_1020);
	}
	TASK_STAND_STILL(&bLocal_1022, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1022, true);
	Function_279(&bLocal_1028, &iLocal_4 + 2408[19], 1, 1, 1);
	if (!IS_ACTOR_RIDING(&bLocal_1022))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1022, &bLocal_1028);
	}
	TASK_STAND_STILL(&bLocal_1024, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1024, true);
	Function_279(&bLocal_1026, &iLocal_4 + 2408[20], 1, 1, 1);
	if (!IS_ACTOR_RIDING(&bLocal_1024))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_1024, &bLocal_1026);
	}
	return;
}

void Function_474() //Position: 0x215B9 / 136633
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_247(&iLocal_980))
		{
			Function_415(&iLocal_980);
		}
	}
	else
	{
		if (iLocal_993)
		{
			iLocal_993 = 0;
		}
		if (!Function_247(&iLocal_980))
		{
			Function_338(&iLocal_980);
		}
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 15.0f))
		{
			if (Function_245(&iLocal_980) < 4.0f)
			{
				if (!Function_247(&iLocal_1162))
				{
					switch (iLocal_992)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_479();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_478();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_477();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 3;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (Function_402())
								{
									Function_476();
								}
								else
								{
									Function_475();
								}
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_475() //Position: 0x216B7 / 136887
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_noTalk3", "Ranch06_noTalk3", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476() //Position: 0x216FE / 136958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_noTalk2", "Ranch06_noTalk2", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_477() //Position: 0x21745 / 137029
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AA", "Ranch06_meetRanchhands_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v3_AB", "Ranch06_meetRanchhands_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AC1", "Ranch06_meetRanchhands_v3_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AC2", "Ranch06_meetRanchhands_v3_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AC3", "Ranch06_meetRanchhands_v3_AC3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v3_AD", "Ranch06_meetRanchhands_v3_AD", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_478() //Position: 0x21947 / 137543
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AA", "Ranch06_meetRanchhands_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AB", "Ranch06_meetRanchhands_v2_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AC", "Ranch06_meetRanchhands_v2_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AD", "Ranch06_meetRanchhands_v2_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_080", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AE", "Ranch06_meetRanchhands_v2_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AF", "Ranch06_meetRanchhands_v2_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AG1", "Ranch06_meetRanchhands_v2_AG1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AG2", "Ranch06_meetRanchhands_v2_AG2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AG3", "Ranch06_meetRanchhands_v2_AG3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AH", "Ranch06_meetRanchhands_v2_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AI", "Ranch06_meetRanchhands_v2_AI", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479() //Position: 0x21D00 / 138496
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AA", "Ranch06_meetRanchhands_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AB", "Ranch06_meetRanchhands_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AC", "Ranch06_meetRanchhands_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AD", "Ranch06_meetRanchhands_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AE", "Ranch06_meetRanchhands_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_080", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AF1", "Ranch06_meetRanchhands_v1_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_170", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AF2", "Ranch06_meetRanchhands_v1_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_070", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AF3", "Ranch06_meetRanchhands_v1_AF3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AG", "Ranch06_meetRanchhands_v1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH1", "Ranch06_meetRanchhands_v1_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_080", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH2", "Ranch06_meetRanchhands_v1_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_150", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH3", "Ranch06_meetRanchhands_v1_AH3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH4", "Ranch06_meetRanchhands_v1_AH4", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AI", "Ranch06_meetRanchhands_v1_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AJ", "Ranch06_meetRanchhands_v1_AJ", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_480(var uParam0, bool bParam1, bool bParam2) //Position: 0x22231 / 139825
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_481(&uParam0, &bParam2);
	iVar1 = Function_481(&bParam1, &bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
	return 0;
}

var Function_481(int iParam0, bool bParam1) //Position: 0x2225C / 139868
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
		Function_317(&iParam0);
		bVar5 = VDIST(Function_317(&iParam0), Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

void Function_482() //Position: 0x222B3 / 139955
{
	iLocal_993 = 0;
	Function_415(&iLocal_980);
	iLocal_992 = Function_483();
	return;
}

var Function_483() //Position: 0x222C9 / 139977
{
	return Global_53524.f_68;
}

void Function_484() //Position: 0x222D4 / 139988
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_otherHerd", "Ranch06_otherHerd", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_485() //Position: 0x2231F / 140063
{
	switch (iLocal_1226)
	{
		case 0x00000006:
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_927)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_927));
			}
			if (!IS_ACTOR_VALID(&bLocal_996))
			{
				Function_298();
				bLocal_996 = &iLocal_4 + 912[02];
				DECOR_SET_BOOL(&bLocal_996, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
				TASK_PRIORITY_SET(&bLocal_996, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_996, 1);
				SET_ACTOR_FACTION(&bLocal_996, 21);
				bLocal_998 = &iLocal_4 + 912[12];
				TASK_PRIORITY_SET(&bLocal_998, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_998, 1);
				SET_ACTOR_FACTION(&bLocal_998, 21);
			}
			if (!IS_ACTOR_VALID(&bLocal_929))
			{
				Function_297();
				bLocal_929 = &iLocal_4 + 1304[02];
				SET_CRIPPLE_ENABLE(&bLocal_929, 0);
				SET_ACTOR_FACTION(&bLocal_929, 20);
				TASK_PRIORITY_SET(&bLocal_929, true);
				TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_929, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_929, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_929, GET_ACTOR_MAX_HEALTH(&bLocal_929));
			}
			else
			{
				Function_227(&bLocal_929);
			}
			TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
			if (!SQUAD_IS_VALID(&bLocal_1065))
			{
				Function_486();
				if (!SQUAD_IS_VALID(&bLocal_1065))
				{
					bLocal_1065 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildSquad"));
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1040))
				{
					bLocal_1065 = &iLocal_4 + 1040;
				}
				SQUAD_GOALS_CLEAR(&bLocal_1065);
				Function_405(&bLocal_1065);
				bLocal_1000 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, true);
				SQUAD_LEAVE(&bLocal_1000);
				Function_372(&bLocal_1065);
				Function_412(&bLocal_1065, 0, 0);
				DESTROY_OBJECT(&bLocal_1065);
			}
			else
			{
				Function_372(&bLocal_1065);
				SQUAD_GOALS_CLEAR(&bLocal_1065);
				Function_405(&bLocal_1065);
				Function_412(&bLocal_1065, 0, 0);
				DESTROY_OBJECT(&bLocal_1065);
			}
			ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1000, false);
			if (SQUAD_IS_VALID(&iLocal_4 + 1040))
			{
				Function_412(&iLocal_4 + 1040, 0, 0);
				DESTROY_OBJECT(&iLocal_4 + 1040);
			}
			if (!SQUAD_IS_VALID(&bLocal_1063))
			{
				bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
				SQUAD_JOIN(&bLocal_925, &bLocal_1063);
			}
			SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
			iLocal_1226 = 7;
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(&bLocal_927))
			{
				if (Function_306())
				{
					bLocal_927 = Function_299(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				if (!iLocal_943[1])
				{
					Function_279(&Global_54076, &iLocal_4 + 2024[1], 1, 1, 1);
					Function_279(&bLocal_927, &iLocal_4 + 2024[1], 1, 1, 1);
					Function_279(&bLocal_925, &iLocal_4 + 2024[3], 1, 1, 1);
					Function_279(&bLocal_996, &iLocal_4 + 2024[3], 1, 1, 1);
					Function_279(&bLocal_929, &iLocal_4 + 2024[7], 1, 1, 1);
				}
				TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_929, true);
				iLocal_1226 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
			}
			if (!IS_ACTOR_RIDING(&bLocal_925))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
				MEMORY_PREFER_RIDING(&bLocal_925, true);
			}
			iLocal_1226 = 9;
			break;
		
		case 0x00000009:
			if (!iLocal_943[1])
			{
				Function_323(&Global_54076, &iLocal_4 + 2024[1], 1, 1, 1);
				Function_323(&bLocal_925, &iLocal_4 + 2024[3], 1, 1, 1);
				ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
			}
			TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
			CLEAR_LINKED_ANIM_TARGET(&bLocal_925);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_925, 1);
			iLocal_1226 = 10;
			break;
		
		case 0x0000000A:
			iLocal_1226 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_486() //Position: 0x226C1 / 140993
{
	*(&iLocal_4 + 1040) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "herdHorseWild01"));
	*(&iLocal_4 + 952[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 976, Vector(-1100f, 99,38824f, 2668.0f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 952[02], &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iLocal_4 + 952[02], 1);
	DECOR_SET_INT(&iLocal_4 + 952[02], "iStartingDifficulty", 7);
	DECOR_SET_INT(&iLocal_4 + 952[02], "iDiffStepSize", 2);
	DECOR_SET_INT(&iLocal_4 + 952[02], "iNumOfSets", true);
	DECOR_SET_INT(&iLocal_4 + 952[02], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 952[02], true);
	Function_329(&iLocal_4 + 952[02]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 952[02], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 952[02], 1);
	*(&iLocal_4 + 952[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 977, Vector(-1104.0f, 99,38824f, 2672.0f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 952[12], &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iLocal_4 + 952[12], 1);
	DECOR_SET_INT(&iLocal_4 + 952[12], "iStartingDifficulty", 7);
	DECOR_SET_INT(&iLocal_4 + 952[12], "iDiffStepSize", 2);
	DECOR_SET_INT(&iLocal_4 + 952[12], "iNumOfSets", true);
	DECOR_SET_INT(&iLocal_4 + 952[12], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 952[12], true);
	Function_329(&iLocal_4 + 952[12]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 952[12], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 952[12], 1);
	*(&iLocal_4 + 952[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 980, Vector(-1108f, 99,96338f, 2668.0f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 952[22], &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iLocal_4 + 952[22], 1);
	DECOR_SET_INT(&iLocal_4 + 952[22], "iStartingDifficulty", 7);
	DECOR_SET_INT(&iLocal_4 + 952[22], "iDiffStepSize", 2);
	DECOR_SET_INT(&iLocal_4 + 952[22], "iNumOfSets", true);
	DECOR_SET_INT(&iLocal_4 + 952[22], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 952[22], true);
	Function_329(&iLocal_4 + 952[22]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 952[22], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 952[22], 1);
	*(&iLocal_4 + 952[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 981, Vector(-1104f, 99,38824f, 2668.0f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 952[32], &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iLocal_4 + 952[32], 1);
	DECOR_SET_INT(&iLocal_4 + 952[32], "iStartingDifficulty", 7);
	DECOR_SET_INT(&iLocal_4 + 952[32], "iDiffStepSize", 2);
	DECOR_SET_INT(&iLocal_4 + 952[32], "iNumOfSets", true);
	DECOR_SET_INT(&iLocal_4 + 952[32], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 952[32], true);
	Function_329(&iLocal_4 + 952[32]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 952[32], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 952[32], 1);
	*(&iLocal_4 + 952[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 976, Vector(-1108f, 99,38824f, 2672.0f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 952[42], &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iLocal_4 + 952[42], 1);
	DECOR_SET_INT(&iLocal_4 + 952[42], "iStartingDifficulty", 7);
	DECOR_SET_INT(&iLocal_4 + 952[42], "iDiffStepSize", 2);
	DECOR_SET_INT(&iLocal_4 + 952[42], "iNumOfSets", true);
	DECOR_SET_INT(&iLocal_4 + 952[42], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 952[42], true);
	Function_329(&iLocal_4 + 952[42]);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 952[42], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 952[42], 1);
	return;
}

bool Function_487() //Position: 0x22BD9 / 142297
{
	Function_291(&iLocal_4 + 320, 170, 2, 0);
	Function_291(&iLocal_4 + 320, 976, 2, 0);
	Function_291(&iLocal_4 + 264, 977, 2, 0);
	Function_291(&iLocal_4 + 320, 171, 2, 0);
	Function_291(&iLocal_4 + 320, 172, 2, 0);
	Function_291(&iLocal_4 + 320, 173, 2, 0);
	Function_291(&iLocal_4 + 320, 174, 2, 0);
	Function_291(&iLocal_4 + 320, 175, 2, 0);
	Function_291(&iLocal_4 + 320, 608, 2, 0);
	if (Function_282(&iLocal_4 + 320))
	{
		return 1;
	}
	return 0;
}

void Function_488() //Position: 0x22C65 / 142437
{
	if (iLocal_877 == 1)
	{
		if (IS_ACTOR_VALID(&bLocal_929))
		{
			if (GET_TASK_STATUS(&bLocal_929, 0) == 0)
			{
				TASK_FACE_ACTOR(&bLocal_929, &Global_54076, 1, 3212836864);
				if (IS_ACTOR_VALID(&bLocal_998))
				{
					DESTROY_ACTOR(&bLocal_998);
				}
				if (IS_ACTOR_VALID(&bLocal_1002))
				{
					DESTROY_ACTOR(&bLocal_1002);
				}
				return;
			}
			if (IS_ACTOR_VALID(&bLocal_1002))
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_1002 && GET_TASK_STATUS(&bLocal_929, 0) != 1)
				{
					DETACH_LASSO(&bLocal_929);
					TASK_FOLLOW_ACTOR(&bLocal_929, &Global_54076);
				}
				else if (Function_489(&bLocal_929, &bLocal_1002))
				{
					AI_GOAL_LOOK_CLEAR(&bLocal_929);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3008, 4, 0, 0, 1, false);
					TASK_DISMOUNT(false, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_929, true);
				}
			}
		}
	}
	if (iLocal_877 > 2)
	{
		if (iLocal_878 > 6)
		{
			if (!iLocal_1216)
			{
				if (IS_ACTOR_VALID(&bLocal_929))
				{
					if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 75.0f))
					{
						if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_929, 1.0f, 200.0f, 1, 1, 0))
						{
							RELEASE_ACTOR(&bLocal_929);
							iLocal_1216 = 1;
						}
					}
				}
				else
				{
					iLocal_1216 = 1;
				}
			}
		}
	}
	return;
}

bool Function_489(bool bParam0, bool bParam1) //Position: 0x22D9C / 142748
{
	if (GET_LASSO_TARGET(&Global_54076) == &bParam1)
	{
		return 1;
	}
	if (GET_LASSO_TARGET(&bParam0) == &bParam1)
	{
		if (GET_TASK_STATUS(&bParam0, 68) == 1)
		{
			return 0;
		}
		DECOR_SET_BOOL(&bParam1, "CanHaveMultipleLassoAttached", false);
		return 1;
	}
	if (GET_TASK_STATUS(&bParam0, 68) == 1)
	{
		if (Function_247(&iLocal_1034))
		{
			if (Function_245(&iLocal_1034) <= 10.0f)
			{
				TASK_CLEAR(&bParam0);
				TASK_GO_NEAR_ACTOR(&bParam1, &bParam0, 10.0f, 1);
				return 0;
			}
		}
		return 0;
	}
	TASK_CLEAR(&bParam0);
	AI_GOAL_LOOK_CLEAR(&bParam0);
	MEMORY_REPORT_POSITION_AUTO(&bParam0, &bParam1, 1);
	TASK_USE_LASSO(&bParam0, &bParam1, 1.0f, 1.0f, 1, 2);
	Function_338(&iLocal_1034);
	return 0;
	return 0;
}

void Function_490() //Position: 0x22E66 / 142950
{
	if (iLocal_878 < 3 && iLocal_878 > 105)
	{
		Function_488();
		if (SQUAD_IS_VALID(&bLocal_1065))
		{
			Function_467(&bLocal_1065, &iLocal_1230);
		}
	}
	switch (iLocal_878)
	{
		case 0x00000000:
			if (Function_342(iLocal_877))
			{
				iLocal_1225 = 6;
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
				Function_338(&iLocal_931);
				iLocal_878 = 1;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_943[0])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_337(Global_46736[2]) || iLocal_922 != 4294967295)) && Function_522())
				{
					Function_338(&iLocal_931);
					iLocal_878 = 2;
				}
			}
			else if (Function_522())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_519())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 4;
				Function_401(iLocal_877);
				Function_392(StackVal, Function_401(iLocal_877), iLocal_877, Global_46736[2], Function_400(iLocal_877), 2);
				if (HUD_IS_FADED())
				{
					CAMERA_RESET(0);
					HUD_FADE_IN(1.0f, 1065353216);
					SET_ACTOR_INVULNERABILITY(&Global_54076, false);
				}
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925);
				iLocal_1217 = 0;
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_518();
				iLocal_1223 = 6;
				Function_362();
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (HUD_IS_FADED())
			{
				CAMERA_RESET(0);
				HUD_FADE_IN(1.0f, 1065353216);
				SET_ACTOR_INVULNERABILITY(&Global_54076, false);
			}
			Function_362();
			Function_415(&iLocal_1174);
			Function_338(&iLocal_931);
			iLocal_878 = 6;
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID(&bLocal_929))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 20.0f) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 20.0f))
				{
					if (!Function_247(&iLocal_1174))
					{
						Function_338(&iLocal_1174);
					}
					else if (Function_246(&iLocal_1174))
					{
						Function_517(&iLocal_1174);
					}
					else if (Function_245(&iLocal_1174) < 6.0f)
					{
						Function_516();
						Function_338(&iLocal_1174);
					}
				}
				else if (Function_247(&iLocal_1174))
				{
					if (!Function_246(&iLocal_1174))
					{
						Function_515(&iLocal_1174);
					}
				}
			}
			if (Function_492())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 105;
			}
			break;
		
		case 0x00000069:
			GET_OBJECT_POSITION(&iLocal_4 + 2024[0], &Local_1203);
			Function_348(StackVal, "$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &uLocal_921, Local_1203, 143724, 1, 200.0f, 300.0f, 2, 1, 2, 2, 0, 1);
			SET_ACTOR_INVULNERABILITY(&Global_54076, true);
			Function_369(&(Local_1309[015]), 0);
			Function_369(&(Local_1309[215]), 0);
			Function_338(&iLocal_931);
			iLocal_878 = 106;
			break;
		
		case 0x0000006A:
			GET_OBJECT_POSITION(&iLocal_4 + 2024[0], &Local_1203);
			Function_348(StackVal, "$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &uLocal_921, Local_1203, 143724, 1, 200.0f, 300.0f, 2, 1, 2, 2, 0, 1);
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				Function_340();
				Function_222();
				iLocal_943[1] = 1;
				Function_338(&iLocal_931);
				iLocal_877 = 2;
				iLocal_878 = 0;
			}
			break;
	}
	return;
}

int Function_491() //Position: 0x2316C / 143724
{
	if (IS_ACTOR_VALID(&bLocal_1054))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", &bLocal_1054);
	}
	return 1;
}

bool Function_492() //Position: 0x2319E / 143774
{
	Function_417();
	switch (iLocal_1562)
	{
		case 0x00000000:
			Function_514();
			if (Function_512())
			{
				return 0;
			}
			Function_420(&iLocal_939, 75.0f, 125.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
			if (!Function_247(&iLocal_1162))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					Function_511();
					Function_214(3, 0, 1);
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_354("Ranch06_lasso_horse_obj2");
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &iLocal_1230, 7.0f, 4);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
					HUD_CLEAR_OBJECTIVE();
					Function_338(&iLocal_931);
					if (!iLocal_1214)
					{
						Function_139("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_1214 = 1;
					}
					iLocal_1213 = 0;
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1562 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_514();
			if (Function_512())
			{
				return 0;
			}
			Function_510(&iLocal_939, 150.0f, 200.0f, &iLocal_1230, "Ranch06_herd_return", "Herd_abandoned", &bLocal_966, 0, 0, 0, 4294967295, 1, 0);
			if (Function_247(&iLocal_931))
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					if (!DECOR_CHECK_EXIST(&uLocal_817, "LassoInvHelp"))
					{
						if (!DECOR_CHECK_EXIST(&uLocal_817, "LassoInvHelp"))
						{
							if (!GET_WEAPON_IN_HAND(&Global_54076) != 21)
							{
								if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) == 3)
								{
									HUD_CLEAR_HELP();
									HUD_CLEAR_HELP_QUEUE();
									Function_139("Ranch06_lasso_inv_hlp_1", 0x41200000, 1, 0, 2, 1, 0);
									DECOR_SET_BOOL(&uLocal_817, "LassoInvHelp", true);
									Function_338(&iLocal_931);
								}
							}
						}
					}
					else if (Function_245(&iLocal_931) <= 25.0f)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_139("Ranch06_lasso_horse_help_01", 0x41200000, 1, 0, 2, 1, 0);
						Function_338(&iLocal_931);
					}
				}
			}
			if (!Function_247(&iLocal_1170))
			{
				Function_338(&iLocal_1170);
			}
			else if (Function_245(&iLocal_1170) < 7.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_tooLongBon", &Global_54076, 0, 0, 0, 1, 3);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, 3.0f, 1);
				Function_338(&iLocal_1170);
				Function_339(&iLocal_1174, 1.0f);
			}
			bLocal_1054 = GET_LASSO_TARGET(&Global_54076);
			if (IS_ACTOR_VALID(&bLocal_1054))
			{
				if (Function_509(&bLocal_1054, &bLocal_1065, 0))
				{
					Function_216(&bLocal_1065);
					SET_MINIGAME_SCRIPT_OVERRIDE(1);
					Function_508();
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1054)))
					{
						bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1054, 418, 0, 2, 0);
					}
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_HORSE_ACTION(0, 0);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1054, bLocal_977, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_1054, true);
					DECOR_SET_BOOL(&bLocal_1054, "CanHaveMultipleLassoAttached", true);
					Function_338(&iLocal_1038);
					Function_338(&iLocal_931);
					iLocal_1562 = 3;
					iLocal_1560 = 0;
					TASK_USE_LASSO(&bLocal_925, &bLocal_1054, 1.0f, 1.0f, 1, 2);
					TASK_PRIORITY_SET(&bLocal_925, true);
					DECOR_SET_BOOL(&bLocal_1054, "DisableBuckOff", true);
					DECOR_SET_FLOAT(&bLocal_1054, "fHowLong", 25.0f);
				}
			}
			break;
		
		case 0x00000003:
			Function_507();
			if (Function_512())
			{
				return 0;
			}
			if (Function_420(&iLocal_939, 75.0f, 125.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				if (GET_LASSO_TARGET(&bLocal_925) == &bLocal_1054)
				{
					Function_354("Ranch06_mount_drews_target");
				}
				else
				{
					Function_354("Ranch06_hold_lassoed_horse_obj");
				}
				iLocal_1219 = 0;
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1054)))
				{
					bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1054, 418, 0, 2, 0);
				}
			}
			if (!iLocal_1217)
			{
				if (!GET_MOUNT(&Global_54076) != &bLocal_1002)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_139("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
					iLocal_1217 = 1;
				}
			}
			if (GET_LASSO_TARGET(&bLocal_925) == &bLocal_1054)
			{
				if (!iLocal_1217)
				{
					if (!GET_MOUNT(&Global_54076) != &bLocal_1054)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_139("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
						iLocal_1217 = 1;
					}
				}
			}
			if (GET_TASK_STATUS(&bLocal_925, 6) == 1)
			{
				if (!Function_247(&iLocal_1170))
				{
					Function_338(&iLocal_1170);
				}
				else if (Function_245(&iLocal_1170) < 7.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_closeEnoughBon", &Global_54076, 0, 0, 0, 1, 3);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, 3.0f, 1);
					Function_338(&iLocal_1170);
				}
			}
			Function_506();
			if (!GET_LASSO_TARGET(&Global_54076) != &bLocal_1054 && !GET_LASSO_TARGET(&bLocal_925) != &bLocal_1054)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_338(&iLocal_931);
				DETACH_LASSO(&bLocal_925);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &iLocal_1230, 15.0f, 4);
				TASK_PRIORITY_SET(&bLocal_925, true);
				Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
				iLocal_1562 = 2;
				TASK_CLEAR(&bLocal_1054);
				Function_505(&bLocal_1065, &Global_54076, 15.0f, 2.0f, 0, 0);
				DECOR_SET_BOOL(&bLocal_1054, "DisableBuckOff", true);
				Function_216(&bLocal_1065);
				Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_504();
				return 0;
			}
			if (GET_TASK_STATUS(&bLocal_925, 68) == 0)
			{
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_ACTOR(false, &bLocal_1054, 10.0f, 3.0f, 0, 0, 0);
				TASK_FACE_ACTOR(0, &bLocal_1054, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_925, true);
				Function_503();
				iLocal_1217 = 0;
			}
			if (IS_ACTOR_VALID(&bLocal_1054) && GET_RIDER(&bLocal_1054) != &Global_54076)
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &bLocal_1054, 15.0f, 1);
				TASK_PRIORITY_SET(&bLocal_925, true);
				Function_212();
				if (!Global_6627)
				{
					if (!iLocal_1221)
					{
						TASK_CLEAR(&bLocal_925);
						iLocal_1221 = 1;
						Function_338(&iLocal_1232);
						return 0;
					}
					if (Function_245(&iLocal_1232) > 3.0f)
					{
						return 0;
					}
					Function_338(&iLocal_931);
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1562 = 5;
					iLocal_1219 = 0;
					DECOR_SET_BOOL(&bLocal_1054, "CanHaveMultipleLassoAttached", false);
					SQUAD_LEAVE(&bLocal_1054);
					TASK_CLEAR(&bLocal_1054);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1054);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1054, 11, false);
					ANIMAL_ACTOR_SET_DOCILE(&bLocal_1054, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1054, false);
					SET_ACTOR_MAX_SPEED(&bLocal_1054, true);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1054, 3.0f);
					Function_412(&bLocal_1065, 1, 0);
					DESTROY_OBJECT(&bLocal_1065);
					Function_362();
					Function_502();
					if (IS_ACTOR_ALIVE(&bLocal_927))
					{
						Function_354("Horse_return");
					}
					else
					{
						Function_354("Horse_find");
					}
					Function_501();
					return 0;
				}
				Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
				iLocal_1562 = 4;
				iLocal_1221 = 0;
				iLocal_1219 = 0;
				Function_500();
				HUD_CLEAR_OBJECTIVE();
				TASK_CLEAR(&bLocal_925);
				DETACH_LASSO(&bLocal_925);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &bLocal_1054, 15.0f, 2);
				TASK_PRIORITY_SET(&bLocal_925, true);
				SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
				return 0;
			}
			if (iLocal_1221)
			{
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
			}
			break;
		
		case 0x00000004:
			Function_507();
			if (GET_TASK_STATUS(&bLocal_925, 68) == 1)
			{
				TASK_CLEAR(&bLocal_925);
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(&bLocal_1054) == 0)
				{
					Function_338(&iLocal_931);
					iLocal_1221 = 0;
					Function_415(&iLocal_1232);
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1562 = 5;
					iLocal_1219 = 0;
					DECOR_SET_BOOL(&bLocal_1054, "CanHaveMultipleLassoAttached", false);
					SQUAD_LEAVE(&bLocal_1054);
					TASK_CLEAR(&bLocal_1054);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1054);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1054, 11, false);
					ANIMAL_ACTOR_SET_DOCILE(&bLocal_1054, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1054, false);
					SET_ACTOR_MAX_SPEED(&bLocal_1054, true);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1054, 3.0f);
					Function_412(&bLocal_1065, 1, 0);
					DESTROY_OBJECT(&bLocal_1065);
					Function_362();
					Function_502();
					if (IS_ACTOR_ALIVE(&bLocal_927))
					{
						Function_354("Horse_return");
					}
					else
					{
						Function_354("Horse_find");
					}
					Function_501();
					return 0;
				}
				if (ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 10.0f))
				{
					if (GET_TASK_STATUS(&bLocal_925, 25) != 1)
					{
						TASK_FLEE_ACTOR(&bLocal_925, &Global_54076, 20.0f, 2.0f, 0, 1, 0);
					}
				}
				else if (!ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 30.0f))
				{
					if (GET_TASK_STATUS(&bLocal_925, 83) != 1)
					{
						TASK_GO_NEAR_ACTOR(&bLocal_925, &Global_54076, 25.0f, 4);
					}
				}
				else if (GET_TASK_STATUS(&bLocal_925, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_925, &Global_54076, 1, 3212836864);
				}
				else if (!Function_247(&iLocal_1170))
				{
					Function_338(&iLocal_1170);
				}
				else if (Function_245(&iLocal_1170) < 5.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_BonEncourage", &Global_54076, 0, 0, 0, 1, 3);
					Function_338(&iLocal_1170);
				}
			}
			else
			{
				HUD_CLEAR_OBJECTIVE();
				Function_338(&iLocal_931);
				iLocal_1219 = 0;
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
				iLocal_1562 = 6;
				DETACH_LASSO(&bLocal_925);
				TASK_CLEAR(&bLocal_925);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &bLocal_1054, 15.0f, 2);
				TASK_PRIORITY_SET(&bLocal_925, true);
				SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
				TASK_CLEAR(&bLocal_1054);
				DECOR_SET_BOOL(&bLocal_1054, "DisableBuckOff", true);
				TASK_FLEE_ACTOR(&bLocal_1054, &Global_54076, 20.0f, 10.0f, 0, 1, 0);
				Function_505(&bLocal_1065, &Global_54076, 15.0f, 2.0f, 0, 0);
				Function_338(&iLocal_1038);
				TASK_FOLLOW_ACTOR(&bLocal_925, &Global_54076);
				TASK_PRIORITY_SET(&bLocal_925, true);
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_buckHorseBon", &Global_54076, 0, 0, 0, 1, 3);
				Function_501();
			}
			break;
		
		case 0x00000005:
			Function_507();
			if (Function_420(&iLocal_939, 75.0f, 125.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				iLocal_1219 = 0;
			}
			if (Function_499())
			{
				Function_498();
				Function_338(&iLocal_935);
			}
			if (DECOR_GET_BOOL(&Global_54076, "CanBeLasso"))
			{
				DECOR_SET_BOOL(&Global_54076, "CanBeLasso", false);
			}
			if (!DECOR_GET_BOOL(&bLocal_1054, "CanBeLasso"))
			{
				DECOR_SET_BOOL(&bLocal_1054, "CanBeLasso", true);
			}
			if (!DECOR_GET_BOOL(&bLocal_1054, "CanLassoIfPlayerRiding"))
			{
				DECOR_SET_BOOL(&bLocal_1054, "CanLassoIfPlayerRiding", true);
			}
			if (GET_ALLOW_RIDE(&bLocal_1054))
			{
				SET_ALLOW_RIDE(&bLocal_1054, 0);
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (GET_LASSO_TARGET(&bLocal_925) == &bLocal_1054)
				{
					if (GET_TASK_STATUS(&Global_54076, 12) != 1)
					{
						MEMORY_CLEAR_EVENTS(&bLocal_1054, 1);
						TASK_DISMOUNT(&Global_54076, 1);
					}
				}
				else if (GET_TASK_STATUS(&bLocal_925, 68) != 1)
				{
					TASK_USE_LASSO(&bLocal_925, &bLocal_1054, 1.0f, 1.0f, 1, 2);
				}
			}
			else
			{
				HUD_CLEAR_OBJECTIVE();
				Function_338(&iLocal_931);
				Function_497();
				MEMORY_CLEAR_EVENTS(&bLocal_1054, 1);
				Function_482();
				iLocal_1219 = 0;
				Function_212();
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_925, -1.0f, -1.0f, 1, 1, 0);
				iLocal_1560 = 0;
				TASK_CLEAR(&bLocal_1054);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1054);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1054, 11, false);
				ANIMAL_ACTOR_SET_DOCILE(&bLocal_1054, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1054, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1054);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
				if (!GET_LASSO_TARGET(&bLocal_925) != &bLocal_1054)
				{
					TASK_USE_LASSO(&bLocal_925, &bLocal_1054, 1.0f, 1.0f, 1, 2);
				}
				if (!SQUAD_IS_VALID(&bLocal_1063))
				{
					bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
				}
				if (SQUAD_GET(&bLocal_925) != &bLocal_1063)
				{
					SQUAD_JOIN(&bLocal_925, &bLocal_1063);
				}
				SQUAD_GOALS_CLEAR(&bLocal_1063);
				bLocal_1069 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&bLocal_1063, 0, 4294967295, &iLocal_4 + 3008, 4, 1, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_1063, &bLocal_1069, 8, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&bLocal_1063, &bLocal_1069, 1, 0);
				if (IS_ACTOR_VALID(&bLocal_1002))
				{
					DESTROY_ACTOR(&bLocal_1002);
				}
				TASK_CLEAR(&bLocal_929);
				MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_929);
				ACTOR_DISMOUNT_NOW(&bLocal_929);
				Function_265();
				ACTOR_START_FORCE_HOLSTER(&bLocal_929, 0, 0);
				DESTROY_ACTOR(&bLocal_998);
				Function_330();
				iLocal_1562 = 8;
				Function_338(&iLocal_1034);
			}
			break;
		
		case 0x00000006:
			Function_507();
			if (Function_512())
			{
				return 0;
			}
			if (Function_420(&iLocal_939, 75.0f, 125.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Horse_return");
				}
				else
				{
					Function_354("Horse_find");
				}
				iLocal_1219 = 0;
			}
			if (IS_ACTOR_VALID(&bLocal_1054))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1054, 15.0f))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1054, "standing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1054, 1);
					}
					if (GET_TASK_STATUS(&bLocal_1054, 25) != 1)
					{
						TASK_FLEE_ACTOR(&bLocal_1054, &Global_54076, 20.0f, 10.0f, 0, 1, 0);
					}
					AI_ACTOR_FORCE_SPEED(&bLocal_1054, 4);
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(&Global_54076)) == 0)
				{
					Function_212();
					HUD_CLEAR_OBJECTIVE();
					Function_338(&iLocal_931);
					Function_354("Ranch06_lasso_horse_obj2");
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1562 = 2;
				}
			}
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION(&iLocal_4 + 2024[0], &Local_1203);
			Function_348(StackVal, "$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &uLocal_921, Local_1203, 143724, 1, 200.0f, 300.0f, 2, 1, 2, 2, 0, 1);
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1))
				{
					Function_214(3, 1, 1);
					Function_354("Ranch06_follow_bonnie_obj");
				}
				else
				{
					Function_214(3, 1, 1);
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 100.0f))
				{
					Function_420(&iLocal_939, 75.0f, 100.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 0, 0, 0, 325, 1);
				}
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Horse_return");
					Function_501();
				}
				else
				{
					Function_354("Horse_find");
					if (IS_ACTOR_VALID(&bLocal_927))
					{
						if (IS_BLIP_VALID(&uLocal_1182))
						{
							REMOVE_BLIP(&uLocal_1182);
						}
					}
				}
			}
			Function_507();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!GET_MOUNT(&Global_54076) != &bLocal_1054)
				{
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
				}
			}
			if (GET_MOUNT(&Global_54076) == &bLocal_1054)
			{
				DETACH_LASSO(&bLocal_925);
				TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
				Function_501();
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1054);
				Function_338(&iLocal_931);
				iLocal_1219 = 0;
				Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
				SET_ACTOR_MAX_SPEED(&bLocal_1054, true);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1054, 3.0f);
				iLocal_1562 = 5;
			}
			else
			{
				Function_496();
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					Function_493();
				}
				if (Function_445(&Global_54076, &iLocal_4 + 3008) > 25.0f && IS_ACTOR_RIDING(&Global_54076))
				{
					Function_212();
					SQUAD_GOALS_CLEAR(&bLocal_1063);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_493() //Position: 0x24707 / 149255
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_247(&iLocal_980))
		{
			Function_415(&iLocal_980);
		}
	}
	else
	{
		if (iLocal_993)
		{
			iLocal_993 = 0;
		}
		if (!Function_247(&iLocal_980))
		{
			Function_338(&iLocal_980);
		}
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 15.0f))
		{
			if (Function_245(&iLocal_980) < 4.0f)
			{
				if (!Function_247(&iLocal_1162))
				{
					switch (iLocal_992)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_495();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_494();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 2;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_992 = 99;
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_494() //Position: 0x247CF / 149455
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v2_AA", "Ranch06_backToRanch_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v2_AB", "Ranch06_backToRanch_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v2_AC", "Ranch06_backToRanch_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v2_AD", "Ranch06_backToRanch_v2_AD", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x24909 / 149769
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AA", "Ranch06_backToRanch_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_060", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AB", "Ranch06_backToRanch_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_160", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AC", "Ranch06_backToRanch_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AD", "Ranch06_backToRanch_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AE", "Ranch06_backToRanch_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_130", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AF", "Ranch06_backToRanch_v1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_140", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AG", "Ranch06_backToRanch_v1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AH", "Ranch06_backToRanch_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_120", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AI", "Ranch06_backToRanch_v1_AI", true, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_496() //Position: 0x24BF8 / 150520
{
	float fVar0;
	
	fVar0 = Function_346(&Global_54076, &bLocal_925);
	if (fVar0 < 200.0f)
	{
		if (!Function_480(&Global_54076, &bLocal_925, &iLocal_4 + 3008))
		{
			Function_233("RanchersDaughter_abandoned");
			bLocal_966 = true;
		}
	}
	else if (fVar0 < 30.0f)
	{
		if (Function_489(&bLocal_925, &bLocal_1054))
		{
			if (!Function_480(&Global_54076, &bLocal_925, &iLocal_4 + 3008))
			{
				if (GET_TASK_STATUS(&bLocal_925, 4294967295) == 1)
				{
					TASK_CLEAR(&bLocal_925);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_925);
				}
			}
		}
	}
	else if (!IS_ACTOR_RIDING(&Global_54076))
	{
		if (Function_489(&bLocal_925, &bLocal_1054))
		{
			if (GET_TASK_STATUS(&bLocal_925, 4294967295) == 1)
			{
				TASK_CLEAR(&bLocal_925);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_925);
			}
		}
		Function_214(3, 0, 1);
		if (IS_ACTOR_ALIVE(&bLocal_927))
		{
			Function_354("Horse_return");
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_927)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_927, 334, 0.0f, 2, 0);
			}
		}
		else
		{
			Function_354("Horse_find");
		}
	}
	else
	{
		if (Function_489(&bLocal_925, &bLocal_1054))
		{
			if (GET_TASK_STATUS(&bLocal_925, 4294967295) == 1)
			{
				TASK_CLEAR(&bLocal_925);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_925);
			}
		}
		Function_227(&bLocal_927);
		Function_214(3, 1, 1);
	}
	return;
}

void Function_497() //Position: 0x24D83 / 150915
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_2HorseBon", "Ranch06_2HorseBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_498() //Position: 0x24DCE / 150990
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backOnHorseBon", "Ranch06_backOnHorseBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_499() //Position: 0x24E23 / 151075
{
	if (Function_247(&iLocal_935))
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_245(&iLocal_935) <= 15.0f)
				{
					return 1;
				}
			}
		}
	}
	Function_338(&iLocal_935);
	return 0;
}

void Function_500() //Position: 0x24E5B / 151131
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_mountBreakBon", "Ranch06_mountBreakBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x24EAE / 151214
{
	Function_214(3, 0, 1);
	if (IS_BLIP_VALID(&bLocal_1178))
	{
		REMOVE_BLIP(&bLocal_1178);
	}
	if (IS_OBJECT_VALID(&iLocal_1071))
	{
		Function_213(&iLocal_1071);
		Function_208();
	}
	if (IS_BLIP_VALID(&uLocal_1180))
	{
		REMOVE_BLIP(&uLocal_1180);
	}
	if (IS_ACTOR_VALID(&bLocal_927))
	{
		if (!IS_BLIP_VALID(&uLocal_1182))
		{
			uLocal_1182 = ADD_BLIP_FOR_ACTOR(&bLocal_927, 334, 0, 2, 0);
			if (IS_BLIP_VALID(&uLocal_1182))
			{
			}
		}
	}
	Function_216(&bLocal_1065);
	return;
}

void Function_502() //Position: 0x24F2A / 151338
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_breakHorseBon", "Ranch06_breakHorseBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503() //Position: 0x24F7D / 151421
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_bonlassoSameHorse_v2", "Ranch06_bonlassoSameHorse_v2", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x24FDE / 151518
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_horseBreaksBonLass", "Ranch06_horseBreaksBonLass", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505(bool bParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x2503B / 151611
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_506() //Position: 0x250B4 / 151732
{
	switch (iLocal_1560)
	{
		case 0x00000000:
			if (!ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 10.0f))
			{
				CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
				SET_ACTOR_MIN_SPEED(&bLocal_925, 4);
				SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
				iLocal_1560 = 1;
			}
			break;
		
		case 0x00000001:
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 10.0f))
			{
				CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
				iLocal_1560 = 0;
			}
			break;
	}
	return;
}

void Function_507() //Position: 0x2512F / 151855
{
	if (IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
	}
	return;
}

void Function_508() //Position: 0x25147 / 151879
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_lassoHorseBon", "Ranch06_lassoHorseBon", false, 2, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_509(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2519A / 151962
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

int Function_510(struct<2> Param0, var uParam2, int iParam3, var uParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x251E2 / 152034
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_466(&Global_54076, &iParam3, uParam2))
	{
		Function_233(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_466(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_427(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_426(&uParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_425(1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_424(&uParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_424(&uParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &uParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&uParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &uParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_427(1))
	{
		Function_423(1);
		if (!Function_422())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_421();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_424(&uParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_424(&uParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_511() //Position: 0x2538B / 152459
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_1moreHorseBon", "Ranch06_1moreHorseBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_512() //Position: 0x253DE / 152542
{
	if (!iLocal_1562 != 4)
	{
		iLocal_1004 = GET_MOUNT(&Global_54076);
		if (Function_509(&iLocal_1004, &bLocal_1065, 0))
		{
			if (Global_6627)
			{
				bLocal_1054 = &iLocal_1004;
				HUD_CLEAR_OBJECTIVE();
				Function_338(&iLocal_931);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_929);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_925);
				Function_500();
				Function_334(&iLocal_994, 11, 0, 4294967295, 4294967295);
				iLocal_1562 = 4;
				HUD_CLEAR_OBJECTIVE();
				iLocal_1219 = 0;
				TASK_CLEAR(&bLocal_925);
				DETACH_LASSO(&bLocal_925);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &bLocal_1054, 7.0f, 4);
				TASK_PRIORITY_SET(&bLocal_925, true);
				SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
				return 1;
			}
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&iLocal_1004) == 0)
			{
				Function_338(&iLocal_931);
				Function_334(&iLocal_994, 3, 0, 4294967295, 4294967295);
				iLocal_1562 = 5;
				iLocal_1219 = 0;
				DECOR_SET_BOOL(&iLocal_1004, "CanHaveMultipleLassoAttached", false);
				SQUAD_LEAVE(&iLocal_1004);
				TASK_CLEAR(&iLocal_1004);
				bLocal_1054 = &iLocal_1004;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1054);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1054, 11, false);
				ANIMAL_ACTOR_SET_DOCILE(&bLocal_1054, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1054, false);
				SET_ACTOR_MAX_SPEED(&bLocal_1054, true);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1054, 3.0f);
				Function_502();
				return 0;
			}
			if (!iLocal_1221)
			{
				iLocal_1221 = 1;
				Function_338(&iLocal_1232);
				return 0;
			}
			if (Function_245(&iLocal_1232) > 3.0f)
			{
				return 0;
			}
			Function_338(&iLocal_931);
			Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
			iLocal_1562 = 5;
			iLocal_1219 = 0;
			DECOR_SET_BOOL(&bLocal_1054, "CanHaveMultipleLassoAttached", false);
			SQUAD_LEAVE(&bLocal_1054);
			TASK_CLEAR(&bLocal_1054);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1054);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1054, 11, false);
			ANIMAL_ACTOR_SET_DOCILE(&bLocal_1054, 1);
			ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1054, false);
			SET_ACTOR_MAX_SPEED(&bLocal_1054, true);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1054, 3.0f);
			Function_412(&bLocal_1065, 1, 0);
			DESTROY_OBJECT(&bLocal_1065);
			Function_362();
			Function_502();
			if (IS_ACTOR_ALIVE(&bLocal_927))
			{
				Function_354("Horse_return");
			}
			else
			{
				Function_354("Horse_find");
			}
			Function_501();
			return 0;
		}
		if (iLocal_1221)
		{
			iLocal_1221 = 0;
			Function_415(&iLocal_1232);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1054))
	{
		iLocal_1004 = GET_LASSO_TARGET(&Global_54076);
		if (Function_509(&iLocal_1004, &bLocal_1065, 0) && !&iLocal_1004 != &bLocal_1054)
		{
			DETACH_LASSO(&bLocal_925);
			TASK_CLEAR(&bLocal_1054);
			Function_505(&bLocal_1065, &Global_54076, 15.0f, 2.0f, 0, 0);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 7.0f, 4);
			TASK_PRIORITY_SET(&bLocal_925, true);
			SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
			Function_513();
			HUD_CLEAR_OBJECTIVE();
			Function_338(&iLocal_931);
			iLocal_1219 = 0;
			Function_212();
			Function_216(&bLocal_1065);
			Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_334(&iLocal_994, 25, 0, 4294967295, 4294967295);
			iLocal_1562 = 2;
			return 1;
		}
		if (!IS_ACTOR_ALIVE(&bLocal_1054))
		{
			bLocal_1054 = "";
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 7.0f, 4);
			TASK_PRIORITY_SET(&bLocal_925, true);
			SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
			HUD_CLEAR_OBJECTIVE();
			Function_338(&iLocal_931);
			iLocal_1219 = 0;
			Function_212();
			Function_216(&bLocal_1065);
			Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_334(&iLocal_994, 25, 0, 4294967295, 4294967295);
			iLocal_1562 = 2;
			return 1;
		}
	}
	return 0;
}

void Function_513() //Position: 0x25736 / 153398
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_BonEncourage", "Ranch06_BonEncourage", false, 2, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x25787 / 153479
{
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		if (!IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
		{
			Function_76();
			SET_CAMERA_FOCUS_OBJECT(&uLocal_1252, SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, true), Function_76(), 1.0f);
			SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Herd");
			SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 1);
		}
	}
	else if (IS_CAMERA_FOCUS_ENABLED(&uLocal_1252))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1252, 0);
	}
	return;
}

void Function_515(vector3 vParam0) //Position: 0x257F8 / 153592
{
	if (Function_247(&vParam0))
	{
		if (!Function_246(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_77(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_516() //Position: 0x258BC / 153788
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_jonFollowsDrew", "Ranch06_jonFollowsDrew", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517(vector3 vParam0) //Position: 0x25911 / 153873
{
	if (Function_247(&vParam0))
	{
		if (Function_246(&vParam0))
		{
			vParam0.f_4 = (GET_CURRENT_GAME_TIME() - vParam0.z);
			vParam0.f_8 = 0.0f;
			Function_38(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_518() //Position: 0x259DE / 154078
{
	if (!IS_OBJECT_VALID(&uLocal_1252))
	{
		Function_76();
		uLocal_1252 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&uLocal_817, "cFocus", SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, true), Function_76(), 100.0f, 200.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Herd");
	}
	else
	{
		Function_76();
		SET_CAMERA_FOCUS_OBJECT(&uLocal_1252, &iLocal_1230, Function_76(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1252, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1252, "Ranch06_FocusPrompt_Herd");
	}
	return;
}

bool Function_519() //Position: 0x25A7E / 154238
{
	switch (iLocal_1225)
	{
		case 0x00000006:
			if (!SQUAD_IS_VALID(&bLocal_1065))
			{
				Function_486();
				if (!SQUAD_IS_VALID(&bLocal_1065))
				{
					bLocal_1065 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildSquad"));
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1040))
				{
					bLocal_1065 = &iLocal_4 + 1040;
					bLocal_977 = false;
					while (bLocal_977 <= SQUAD_GET_SIZE(&bLocal_1065))
					{
						iLocal_978 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, bLocal_977);
						if (IS_ACTOR_VALID(&iLocal_978))
						{
							if (IS_ACTOR_ALIVE(&iLocal_978))
							{
								DECOR_SET_FLOAT(&iLocal_978, "fHowLong", 25.0f);
								SET_ALLOW_LASSO_MINI_GAME(&iLocal_978, 0);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_978, 1);
								SET_ACTOR_FACTION(&iLocal_978, 21);
								DECOR_SET_BOOL(&iLocal_978, "DisableBuckOff", true);
							}
						}
						bLocal_977++;
					}
				}
				Function_521(&bLocal_1065);
				Function_520(&bLocal_1065, &iLocal_4 + 1776, 4, 1);
				iLocal_1048 = UNK_0x48588CCB(&bLocal_1065, 0, 4294967295, 1);
				Function_456(&bLocal_1065, &iLocal_1048);
			}
			if (!IS_ACTOR_VALID(&bLocal_1002))
			{
				bLocal_1002 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, false);
				SQUAD_LEAVE(&bLocal_1002);
				TASK_CLEAR(&bLocal_1002);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1002);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1002, 11, false);
				ANIMAL_ACTOR_SET_DOCILE(&bLocal_1002, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1002, false);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1002, 1);
				SET_ACTOR_FACTION(&bLocal_1002, 21);
				TASK_PRIORITY_SET(&bLocal_1002, 2);
			}
			if (!IS_ACTOR_VALID(&bLocal_996))
			{
				Function_298();
				bLocal_996 = &iLocal_4 + 912[02];
				DECOR_SET_BOOL(&bLocal_996, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
				TASK_PRIORITY_SET(&bLocal_996, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_996, 1);
				SET_ACTOR_FACTION(&bLocal_996, 21);
				bLocal_998 = &iLocal_4 + 912[12];
				DECOR_SET_BOOL(&bLocal_998, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_998, 0);
				TASK_PRIORITY_SET(&bLocal_998, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_998, 1);
				SET_ACTOR_FACTION(&bLocal_998, 21);
			}
			if (!SQUAD_IS_VALID(&bLocal_1063))
			{
				bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
				SQUAD_JOIN(&bLocal_925, &bLocal_1063);
			}
			if (!IS_ACTOR_VALID(&bLocal_929))
			{
				Function_297();
				bLocal_929 = &iLocal_4 + 1304[02];
				SET_CRIPPLE_ENABLE(&bLocal_929, 0);
				SET_ACTOR_FACTION(&bLocal_929, 20);
				TASK_PRIORITY_SET(&bLocal_929, true);
				TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_929, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_929, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_929, GET_ACTOR_MAX_HEALTH(&bLocal_929));
				TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
				GIVE_WEAPON_TO_ACTOR(&bLocal_929, 21, false, 1, 1);
			}
			else
			{
				Function_227(&bLocal_929);
			}
			if (!SQUAD_IS_VALID(&uLocal_1046))
			{
				uLocal_1046 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_817, "sbrokenHorseSquad"));
			}
			TASK_CLEAR(&bLocal_925);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_927)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_927));
			}
			DECOR_SET_BOOL(&Global_54076, "CanBeLasso", false);
			if (!ACTOR_HAS_WEAPON(&Global_54076, 21))
			{
				GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
			}
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
			if (!iLocal_943[0] || Function_250(&Local_819))
			{
				Function_338(&iLocal_1042);
				iLocal_1225 = 7;
			}
			else
			{
				Function_338(&iLocal_1042);
				iLocal_1225 = 104;
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(&bLocal_927))
			{
				if (Function_306())
				{
					bLocal_927 = Function_299(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				if (!iLocal_943[0])
				{
					Function_279(&bLocal_927, &iLocal_4 + 1944[0], 1, 1, 1);
					Function_279(&bLocal_925, &iLocal_4 + 1944[3], 1, 1, 1);
					Function_279(&bLocal_996, &iLocal_4 + 1944[3], 1, 1, 1);
				}
				Function_338(&iLocal_1042);
				iLocal_1225 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_245(&iLocal_1042) < 1.0f)
			{
				if (!iLocal_943[0])
				{
					if (!IS_ACTOR_RIDING(&Global_54076))
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_927);
					}
					if (!IS_ACTOR_RIDING(&bLocal_925))
					{
						ACTOR_MOUNT_ACTOR(&bLocal_925, &bLocal_996);
						MEMORY_PREFER_RIDING(&bLocal_925, true);
					}
				}
				Function_338(&iLocal_1042);
				iLocal_1225 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_245(&iLocal_1042) < 1.0f)
			{
				if (!iLocal_943[0])
				{
					Function_323(&Global_54076, &iLocal_4 + 1944[1], 1, 1, 1);
					Function_323(&bLocal_925, &iLocal_4 + 1944[3], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
					CLEAR_LINKED_ANIM_TARGET(&bLocal_925);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_925, 1);
					ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
				}
				iLocal_1225 = 104;
				return 1;
			}
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_520(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x25F51 / 155473
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

void Function_521(bool bParam0) //Position: 0x25FA9 / 155561
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

bool Function_522() //Position: 0x25FF8 / 155640
{
	Function_291(&iLocal_4 + 264, 976, 2, 0);
	Function_291(&iLocal_4 + 264, 977, 2, 0);
	Function_291(&iLocal_4 + 264, 608, 2, 0);
	if (Function_282(&iLocal_4 + 264))
	{
		return 1;
	}
	return 0;
}

void Function_523() //Position: 0x26036 / 155702
{
	if (iLocal_878 < 3 && iLocal_878 > 105)
	{
		if (SQUAD_IS_VALID(&bLocal_1065))
		{
			Function_467(&bLocal_1065, &iLocal_1230);
		}
	}
	switch (iLocal_878)
	{
		case 0x00000000:
			if (Function_342(iLocal_877))
			{
				iLocal_1224 = 6;
				iLocal_1221 = 0;
				Function_415(&iLocal_1232);
				Function_338(&iLocal_931);
				iLocal_878 = 1;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_337(iLocal_922) || iLocal_922 != 4294967295)) && Function_311())
			{
				Function_338(&iLocal_931);
				TASK_CLEAR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_878 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_311())
			{
				if (Function_551())
				{
					Function_338(&iLocal_931);
					iLocal_878 = 7;
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1688[1]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1688[1]);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1688[1], 15);
					Function_401(iLocal_877);
					Function_392(StackVal, Function_401(iLocal_877), iLocal_877, Global_46736[2], Function_400(iLocal_877), 0);
				}
			}
			break;
		
		case 0x00000003:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_925)))
			{
				Function_338(&iLocal_931);
				iLocal_878 = 4;
			}
			break;
		
		case 0x00000004:
			TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
				SET_ACTOR_INVULNERABILITY(&Global_54076, false);
			}
			Function_338(&iLocal_931);
			Function_362();
			iLocal_878 = 6;
			break;
		
		case 0x00000006:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)) || Function_245(&iLocal_931) < 3.0f)
			{
				Function_338(&iLocal_931);
				iLocal_878 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_INITED(&bLocal_925) && IS_ACTOR_INITED(&bLocal_929))
			{
				if (ACTOR_HAS_WEAPON(&Global_54076, 21))
				{
					ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
				}
				else if (!ACTOR_HAS_WEAPON(&Global_54076, 21))
				{
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
					ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
				}
				Function_550();
				Function_501();
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_925, 1);
				bLocal_1061 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3160, 1, 1, 0, 1, false);
				TASK_MOUNT(false, &bLocal_996, 0, 1, 1, 2147483647);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_1061);
				TASK_SEQUENCE_RELEASE(bLocal_1061, 1);
				TASK_PRIORITY_SET(&bLocal_925, true);
				Function_338(&iLocal_931);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
					SET_ACTOR_INVULNERABILITY(&Global_54076, false);
				}
				Function_362();
				Function_482();
				iLocal_878 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_524())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_340();
			Function_223();
			iLocal_943[0] = 1;
			Function_338(&iLocal_931);
			iLocal_877 = 1;
			iLocal_878 = 0;
			break;
	}
	return;
}

bool Function_524() //Position: 0x262D7 / 156375
{
	switch (iLocal_1561)
	{
		case 0x00000000:
			if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			if (!iLocal_1219)
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					if (IS_ACTOR_ALIVE(&bLocal_927))
					{
						Function_354("Ranch06_mount_up_obj");
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_927)))
						{
							Function_212();
							Function_501();
						}
					}
					else
					{
						Function_354("Horse_find");
					}
				}
			}
			else if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
			{
				Function_549();
				iLocal_1219 = 0;
			}
			if (IS_ACTOR_RIDING(&bLocal_925))
			{
				MEMORY_PREFER_RIDING(&bLocal_925, true);
			}
			if (IS_ACTOR_RIDING(&bLocal_929))
			{
				MEMORY_PREFER_RIDING(&bLocal_929, true);
			}
			if (!bLocal_1080)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_925))
				{
					if (GET_TASK_STATUS(&bLocal_925, 23) != 1)
					{
						AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_925, 1);
						GET_OBJECT_POSITION(&iLocal_4 + 1800[5], &Local_968);
						TASK_FACE_COORD(&bLocal_925, &Local_968, 1);
						AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, -1.0f, 1);
						DECOR_SET_BOOL(GET_MOUNT(&bLocal_925), "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(&bLocal_925), 0);
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_929))
				{
					if (GET_TASK_STATUS(&bLocal_925, 22) != 1)
					{
						TASK_FACE_ACTOR(&bLocal_929, &Global_54076, 1, 3212836864);
						DECOR_SET_BOOL(GET_MOUNT(&bLocal_929), "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(&bLocal_925), 0);
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_925))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_929))
					{
						bLocal_998 = GET_MOUNT(&bLocal_929);
						DECOR_SET_BOOL(&bLocal_998, "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(&bLocal_998, 0);
						bLocal_996 = GET_MOUNT(&bLocal_925);
						DECOR_SET_BOOL(&bLocal_996, "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_929);
						bLocal_1080 = true;
						TASK_FACE_ACTOR(&bLocal_929, &Global_54076, 1, 3212836864);
						GET_OBJECT_POSITION(&iLocal_4 + 1800[5], &Local_968);
						TASK_FACE_COORD(&bLocal_925, &Local_968, 1);
						AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_925, 1);
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925, &bLocal_929, 60.0f, 10.0f, 50.0f);
						if (!IS_ACTOR_RIDING(&Global_54076))
						{
							Function_548();
						}
					}
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076) && !bLocal_1080)
			{
				if (Function_247(&iLocal_931))
				{
					Function_212();
					Function_415(&iLocal_931);
					HUD_CLEAR_OBJECTIVE();
				}
				if (GET_MOUNT(&Global_54076) == &bLocal_996)
				{
					bLocal_996 = &bLocal_927;
					MEMORY_REPORT_POSITION_AUTO(&bLocal_925, &bLocal_996, 1);
					TASK_MOUNT(&bLocal_925, &bLocal_996, 0, 1, 2, 2147483647);
					bLocal_927 = GET_MOUNT(&Global_54076);
					Function_326(&bLocal_927, 0);
					TASK_PRIORITY_SET(&bLocal_927, 2);
					TASK_PRIORITY_SET(&bLocal_996, true);
					Function_212();
					Function_362();
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_925, 1);
				}
				if (GET_MOUNT(&Global_54076) == &bLocal_998)
				{
					bLocal_998 = &bLocal_927;
					MEMORY_REPORT_POSITION_AUTO(&bLocal_929, &bLocal_998, 1);
					TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
					bLocal_927 = GET_MOUNT(&Global_54076);
					Function_326(&bLocal_927, 0);
					TASK_PRIORITY_SET(&bLocal_927, 2);
					TASK_PRIORITY_SET(&bLocal_998, true);
					Function_212();
					Function_362();
				}
				if (GET_TASK_STATUS(&bLocal_925, 0) == 1)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_925, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_925);
					TASK_CLEAR(&bLocal_925);
					TASK_MOUNT(&bLocal_925, &bLocal_996, 0, 1, 4, 2147483647);
					AI_ACTOR_FORCE_SPEED(&bLocal_925, 4);
					TASK_PRIORITY_SET(&bLocal_925, true);
				}
			}
			else if (!IS_ACTOR_ALIVE(&bLocal_927))
			{
				if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_998))
				{
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_998, 0);
				}
				if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_996))
				{
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
				}
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_925, 2);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_929, 2);
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (bLocal_1080)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_925, 1);
					bLocal_927 = GET_MOUNT(&Global_54076);
					Function_326(&bLocal_927, 0);
					HUD_CLEAR_OBJECTIVE();
					Function_212();
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_996, 0);
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_998, 0);
					AI_RIDING_SET_ENABLED(&bLocal_929, 0);
					if (!SQUAD_IS_VALID(&bLocal_1063))
					{
						bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
					}
					if (SQUAD_GET(&bLocal_925) == &bLocal_1063)
					{
						SQUAD_LEAVE(&bLocal_925);
					}
					SQUAD_JOIN(&bLocal_929, &bLocal_1063);
					SQUAD_JOIN(&bLocal_925, &bLocal_1063);
					bLocal_1069 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&bLocal_1063, 0, 4294967295, &iLocal_4 + 3000, 2, 1, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_1063, &bLocal_1069, 8, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&bLocal_1063, &bLocal_1069, 1, 0);
					TASK_CLEAR(&bLocal_925);
					AI_GOAL_LOOK_CLEAR(&bLocal_925);
					MEMORY_PREFER_RIDING(&bLocal_925, true);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(0, &bLocal_929, 0, 3212836864);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_CLEAR(&bLocal_929);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_929, 2);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
					GET_OBJECT_POSITION(&iLocal_4 + 1800[5], &Local_968);
					TASK_PRIORITY_SET(&bLocal_929, true);
					HUD_CLEAR_OBJECTIVE();
					Function_354("Ranch06_follow_drew_obj");
					Function_338(&iLocal_931);
					Function_482();
					Function_334(&iLocal_994, 3, 0, 4294967295, 4294967295);
					iLocal_1561 = 1;
					iLocal_1219 = 0;
					iLocal_1219 = 0;
					Function_547();
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_925);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_929);
				}
				else
				{
					Function_354("Ranch06_follow_drew_obj");
					Function_547();
				}
			}
			break;
		
		case 0x00000001:
			Function_417();
			Function_546();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (iLocal_1218)
				{
					iLocal_1218 = 0;
				}
				if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
				{
					if (!iLocal_1219)
					{
						iLocal_1219 = 0;
					}
				}
				else
				{
					Function_547();
					Function_354("Ranch06_follow_drew_obj");
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 100.0f))
				{
					Function_420(&iLocal_939, 75.0f, 100.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1);
				}
				if (!iLocal_1218)
				{
					Function_545();
					iLocal_1218 = 1;
				}
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Horse_return");
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_927)))
					{
						Function_212();
						Function_501();
					}
				}
				else
				{
					Function_354("Horse_find");
				}
			}
			Function_544();
			Function_543();
			if (IS_VOLUME_VALID(&iLocal_4 + 1688[0]))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_929, &iLocal_4 + 1688[0]))
				{
					DESTROY_VOLUME(&iLocal_4 + 1688[0]);
					if (!SQUAD_IS_VALID(&bLocal_1065))
					{
						Function_486();
						if (!SQUAD_IS_VALID(&bLocal_1065))
						{
							bLocal_1065 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildSquad"));
						}
						if (SQUAD_IS_VALID(&iLocal_4 + 1040))
						{
							bLocal_1065 = &iLocal_4 + 1040;
						}
						bLocal_977 = false;
						while (bLocal_977 <= SQUAD_GET_SIZE(&bLocal_1065))
						{
							iLocal_978 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1065, bLocal_977);
							if (IS_ACTOR_VALID(&iLocal_978))
							{
								if (IS_ACTOR_ALIVE(&iLocal_978))
								{
									DECOR_SET_FLOAT(&iLocal_978, "fHowLong", 25.0f);
									SET_ALLOW_LASSO_MINI_GAME(&iLocal_978, 0);
									DECOR_SET_BOOL(&iLocal_978, "DisableBuckOff", true);
								}
							}
							bLocal_977++;
						}
						Function_362();
						Function_518();
						Function_521(&bLocal_1065);
						Function_520(&bLocal_1065, &iLocal_4 + 1776, 4, 1);
						iLocal_1048 = UNK_0x48588CCB(&bLocal_1065, 0, 4294967295, 1);
						Function_456(&bLocal_1065, &iLocal_1048);
					}
				}
			}
			if (SQUAD_IS_VALID(&bLocal_1065) && !iLocal_1559 != 2)
			{
				if (Function_542(&bLocal_1065, 0x3f800000, 0x42960000, 1, 1))
				{
					Function_338(&iLocal_931);
					Function_541();
					Function_540();
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					Function_212();
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					if (!iLocal_1214)
					{
						Function_139("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_1214 = 1;
					}
					iLocal_1559 = 2;
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &iLocal_1230, 5.0f, 4);
					TASK_PRIORITY_SET(&bLocal_929, true);
					SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &iLocal_1230, 7.0f, 4);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
					SQUAD_GOALS_CLEAR(&bLocal_1063);
				}
			}
			if (Function_445(&bLocal_929, &iLocal_4 + 3000) > 10.0f)
			{
				if (iLocal_1559 != 2)
				{
					iLocal_1559 = 2;
					Function_338(&iLocal_931);
					Function_541();
					Function_540();
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					Function_212();
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					if (!iLocal_1214)
					{
						Function_139("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_1214 = 1;
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &iLocal_1230, 5.0f, 4);
					TASK_PRIORITY_SET(&bLocal_929, true);
					SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &iLocal_1230, 7.0f, 4);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
					SQUAD_GOALS_CLEAR(&bLocal_1063);
				}
			}
			if (iLocal_1559 == 2)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					AI_GOAL_LOOK_CLEAR(&bLocal_929);
					Function_539();
					SQUAD_GOALS_CLEAR(&bLocal_1063);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &iLocal_1230, 5.0f, 4);
					TASK_PRIORITY_SET(&bLocal_929, true);
					SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &iLocal_1230, 7.0f, 4);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
					HUD_CLEAR_OBJECTIVE();
					Function_338(&iLocal_931);
					iLocal_1219 = 0;
					Function_212();
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_925);
					iLocal_1213 = 0;
					iLocal_1561 = 2;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if (!iLocal_1219)
				{
					Function_535();
				}
				else if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
				{
					Function_549();
					iLocal_1219 = 0;
				}
			}
			break;
		
		case 0x00000002:
			Function_417();
			Function_514();
			Function_546();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (iLocal_1218)
				{
					Function_212();
					HUD_CLEAR_OBJECTIVE();
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					iLocal_1218 = 0;
				}
				if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
				{
					if (!iLocal_1219)
					{
						iLocal_1219 = 1;
					}
				}
				else
				{
					Function_354("Ranch06_lasso_horse_obj");
					if (iLocal_1219)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
						{
							Function_549();
							iLocal_1219 = 0;
						}
					}
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 100.0f))
				{
					Function_420(&iLocal_939, 75.0f, 100.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1);
				}
				if (!iLocal_1218)
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					iLocal_1218 = 1;
				}
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Horse_return");
					Function_501();
				}
				else
				{
					Function_354("Horse_find");
				}
			}
			if (!iLocal_1213)
			{
				if (!DECOR_CHECK_EXIST(&uLocal_817, "LassoInvHelp"))
				{
					if (!GET_WEAPON_IN_HAND(&Global_54076) != 21)
					{
						if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) == 3)
						{
							HUD_CLEAR_HELP();
							HUD_CLEAR_HELP_QUEUE();
							Function_139("Ranch06_lasso_inv_hlp_1", 0x41200000, 1, 0, 2, 1, 0);
							DECOR_SET_BOOL(&uLocal_817, "LassoInvHelp", true);
						}
					}
				}
				else if (GET_WEAPON_IN_HAND(&Global_54076) == 21)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_139("Ranch06_lasso_horse_help_01", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_1213 = 1;
				}
			}
			if (!Function_247(&iLocal_1174))
			{
				Function_338(&iLocal_1174);
			}
			else if (Function_245(&iLocal_1174) < 7.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_929, "Ranch06_tooLongDrew", &Global_54076, 0, 0, 0, 1, 3);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_929, &Global_54076, 3.0f, 1);
				Function_338(&iLocal_1174);
				Function_339(&iLocal_1170, 1.0f);
			}
			if (!Function_247(&iLocal_1170))
			{
				Function_338(&iLocal_1170);
			}
			else if (Function_245(&iLocal_1170) < 7.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_tooLongDrew", &Global_54076, 0, 0, 0, 1, 3);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, 3.0f, 1);
				Function_338(&iLocal_1170);
				Function_339(&iLocal_1174, 1.0f);
			}
			iLocal_1004 = GET_LASSO_TARGET(&Global_54076);
			if (IS_ACTOR_VALID(&iLocal_1004))
			{
				if (Function_509(&iLocal_1004, &bLocal_1065, 0))
				{
					bLocal_1002 = &iLocal_1004;
					SET_MINIGAME_SCRIPT_OVERRIDE(1);
					DECOR_SET_BOOL(&bLocal_1002, "CanHaveMultipleLassoAttached", true);
					DECOR_SET_FLOAT(&bLocal_1002, "fHowLong", 25.0f);
					Function_212();
					bLocal_1178 = ADD_BLIP_FOR_OBJECT(&bLocal_1002, 418, 0f, 2, 0);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_HORSE_ACTION(0, 0);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1002, bLocal_977, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_1002, true);
					TASK_CLEAR(&bLocal_925);
					AI_GOAL_LOOK_CLEAR(&bLocal_925);
					MEMORY_REPORT_POSITION_AUTO(&bLocal_925, &bLocal_1002, 1);
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(10.0f, 0.0f, 0.0f), &Local_968);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
					{
						if ((GET_Y(&Local_971) - GET_Y(&Local_968)) < 2,5f)
						{
							GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(0.0f, 0.0f, 10.0f), &Local_968);
							if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
							{
								TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
							}
						}
						else
						{
							TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
						}
					}
					TASK_USE_LASSO(0, &bLocal_1002, 1.0f, 1.0f, 1, 2);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MIN_SPEED(&bLocal_925, 4);
					TASK_CLEAR(&bLocal_929);
					AI_GOAL_LOOK_CLEAR(&bLocal_929);
					MEMORY_REPORT_POSITION_AUTO(&bLocal_929, &bLocal_1002, 1);
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(-10.0f, 0.0f, 0.0f), &Local_968);
					bLocal_977 = TASK_SEQUENCE_OPEN();
					if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
					{
						if ((GET_Y(&Local_971) - GET_Y(&Local_968)) < 2,5f)
						{
							GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(0.0f, 0.0f, -10.0f), &Local_968);
							if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
							{
								TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
							}
						}
						else
						{
							TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
						}
					}
					TASK_USE_LASSO(0, &bLocal_1002, 1.0f, 1.0f, 1, 2);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_929, true);
					SET_ACTOR_MIN_SPEED(&bLocal_929, 4);
					Function_534();
					Function_338(&iLocal_931);
					iLocal_1219 = 0;
					iLocal_1561 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_417();
			Function_507();
			Function_546();
			if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 100.0f))
				{
					Function_420(&iLocal_939, 75.0f, 100.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1002)))
				{
					bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1002, 418, 0, 2, 0);
				}
				if (GET_LASSO_TARGET(&bLocal_925) != &bLocal_1002 || GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002)
				{
					Function_354("Ranch06_mount_drews_target");
				}
				else
				{
					Function_354("Ranch06_hold_lassoed_horse_obj");
				}
				if (iLocal_1219)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
					{
						Function_549();
						iLocal_1219 = 0;
					}
				}
			}
			if (!iLocal_1217)
			{
				if (!GET_MOUNT(&Global_54076) != &bLocal_1002)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_139("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
					iLocal_1217 = 1;
				}
			}
			if ((!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&bLocal_929))) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&bLocal_925)))
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &Global_54076, 15.0f, 4);
				TASK_PRIORITY_SET(&bLocal_929, true);
				SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 15.0f, 4);
				TASK_PRIORITY_SET(&bLocal_925, true);
				SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
				TASK_CLEAR(&bLocal_1002);
				HUD_CLEAR_OBJECTIVE();
				Function_338(&iLocal_931);
				iLocal_1219 = 0;
				Function_212();
				Function_216(&bLocal_1065);
				Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				iLocal_1213 = 0;
				iLocal_1561 = 2;
				Function_533();
				return 0;
			}
			Function_530();
			if (GET_TASK_STATUS(&bLocal_929, 6) == 1)
			{
				if (!Function_247(&iLocal_1174))
				{
					Function_338(&iLocal_1174);
				}
				else if (Function_245(&iLocal_1174) < 7.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_929, "Ranch06_closeEnoughDrew", &Global_54076, 0, 0, 0, 1, 3);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_929, &Global_54076, 3.0f, 1);
					Function_338(&iLocal_1174);
					Function_339(&iLocal_1170, 1.0f);
				}
			}
			if (GET_TASK_STATUS(&bLocal_925, 6) == 1)
			{
				if (!Function_247(&iLocal_1170))
				{
					Function_338(&iLocal_1170);
				}
				else if (Function_245(&iLocal_1170) < 7.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_closeEnoughBon", &Global_54076, 0, 0, 0, 1, 3);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, 3.0f, 1);
					Function_338(&iLocal_1170);
					Function_339(&iLocal_1174, 1.0f);
				}
			}
			if ((GET_LASSO_TARGET(&bLocal_925) != &bLocal_1002 && GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002) && GET_LASSO_TARGET(&Global_54076) != &bLocal_1002)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_338(&iLocal_931);
				Function_354("Ranch06_mount_drews_target");
				Function_529();
				iLocal_1561 = 4;
				iLocal_1219 = 0;
			}
			break;
		
		case 0x00000004:
			Function_507();
			Function_546();
			if (iLocal_1220)
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (ANIMAL_ACTOR_GET_DOMESTICATION(&bLocal_1002) == 0)
					{
						iLocal_1219 = 0;
						SQUAD_LEAVE(&bLocal_1002);
						TASK_CLEAR(&bLocal_1002);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1002);
						ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1002, 11, false);
						ANIMAL_ACTOR_SET_DOCILE(&bLocal_1002, 1);
						ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1002, false);
						iLocal_1221 = 0;
						Function_415(&iLocal_1232);
						Function_362();
						DECOR_SET_BOOL(&bLocal_1002, "CanHaveMultipleLassoAttached", false);
						Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
						iLocal_1561 = 5;
						Function_212();
						Function_501();
						iLocal_1220 = 0;
						Function_528();
						Function_338(&iLocal_931);
						if (IS_ACTOR_ALIVE(&bLocal_927))
						{
							Function_354("Horse_return");
						}
						else
						{
							Function_354("Horse_find");
						}
						DETACH_LASSO(&bLocal_925);
						DETACH_LASSO(&bLocal_929);
						TASK_CLEAR(&bLocal_929);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &bLocal_1002, 5.0f, 2);
						TASK_PRIORITY_SET(&bLocal_929, true);
						TASK_CLEAR(&bLocal_925);
						TASK_FACE_ACTOR(&bLocal_925, &bLocal_1002, 1, 3212836864);
						TASK_PRIORITY_SET(&bLocal_925, true);
						return 0;
					}
					if (ACTORS_IN_RANGE(&bLocal_929, &Global_54076, 10.0f))
					{
						if (GET_TASK_STATUS(&bLocal_929, 25) != 1)
						{
							TASK_FLEE_ACTOR(&bLocal_929, &Global_54076, 20.0f, 2.0f, 0, 1, 0);
						}
					}
					else if (!ACTORS_IN_RANGE(&bLocal_929, &Global_54076, 30.0f))
					{
						if (GET_TASK_STATUS(&bLocal_929, 83) != 1)
						{
							TASK_GO_NEAR_ACTOR(&bLocal_929, &Global_54076, 25.0f, 4);
						}
					}
					else if (GET_TASK_STATUS(&bLocal_929, 22) != 1)
					{
						TASK_FACE_ACTOR(&bLocal_929, &Global_54076, 1, 3212836864);
					}
					else if (!Function_247(&iLocal_1174))
					{
						Function_338(&iLocal_1174);
					}
					else if (Function_245(&iLocal_1174) < 3.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_929, "Ranch06_DrewEncourage", &Global_54076, 0, 0, 0, 1, 3);
						Function_338(&iLocal_1174);
					}
					if (ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 10.0f))
					{
						if (GET_TASK_STATUS(&bLocal_925, 25) != 1)
						{
							TASK_FLEE_ACTOR(&bLocal_925, &Global_54076, 20.0f, 2.0f, 0, 1, 0);
						}
					}
					else if (!ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 30.0f))
					{
						if (GET_TASK_STATUS(&bLocal_925, 83) != 1)
						{
							TASK_GO_NEAR_ACTOR(&bLocal_925, &Global_54076, 25.0f, 4);
						}
					}
					else if (GET_TASK_STATUS(&bLocal_925, 22) != 1)
					{
						TASK_FACE_ACTOR(&bLocal_925, &Global_54076, 1, 3212836864);
					}
					else if (!Function_247(&iLocal_1170))
					{
						Function_338(&iLocal_1170);
					}
					else if (Function_245(&iLocal_1170) < 5.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_BonEncourage", &Global_54076, 0, 0, 0, 1, 3);
						Function_338(&iLocal_1170);
					}
				}
				else
				{
					iLocal_1561 = 6;
					iLocal_1219 = 0;
					Function_212();
					Function_501();
					iLocal_1221 = 0;
					Function_415(&iLocal_1232);
					iLocal_1220 = 0;
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_929, "Ranch06_buckHorseDrew", &Global_54076, 0, 0, 0, 1, 3);
					DETACH_LASSO(&bLocal_925);
					DETACH_LASSO(&bLocal_929);
					TASK_CLEAR(&bLocal_929);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &bLocal_1002, 15.0f, 2);
					TASK_PRIORITY_SET(&bLocal_929, true);
					TASK_CLEAR(&bLocal_925);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &bLocal_1002, 15.0f, 2);
					TASK_PRIORITY_SET(&bLocal_925, true);
					TASK_CLEAR(&bLocal_1002);
					TASK_FLEE_ACTOR(&bLocal_1002, &Global_54076, 20.0f, 10.0f, 0, 1, 0);
					Function_505(&bLocal_1065, &Global_54076, 15.0f, 2.0f, 0, 0);
					Function_338(&iLocal_1038);
					return 0;
				}
			}
			if (!iLocal_1220)
			{
				Function_417();
				if (Function_420(&iLocal_939, 100.0f, 150.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
				{
					if (!iLocal_1219)
					{
						iLocal_1219 = 1;
					}
				}
				else
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1002)))
					{
						bLocal_1178 = ADD_BLIP_FOR_ACTOR(&bLocal_1002, 418, 0, 2, 0);
					}
					Function_354("Ranch06_mount_drews_target");
					if (iLocal_1219)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
						{
							Function_549();
							iLocal_1219 = 0;
						}
					}
				}
				if (!iLocal_1217)
				{
					if (!GET_MOUNT(&Global_54076) != &bLocal_1002)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_139("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
						iLocal_1217 = 1;
					}
				}
				Function_530();
				if (GET_TASK_STATUS(&bLocal_929, 6) == 1)
				{
					if (!Function_247(&iLocal_1174))
					{
						Function_338(&iLocal_1174);
					}
					else if (Function_245(&iLocal_1174) < 7.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_929, "Ranch06_closeEnoughDrew", &Global_54076, 0, 0, 0, 1, 3);
						AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_929, &Global_54076, 3.0f, 1);
						Function_338(&iLocal_1174);
						Function_339(&iLocal_1170, 1.0f);
					}
				}
				if (GET_TASK_STATUS(&bLocal_925, 6) == 1)
				{
					if (!Function_247(&iLocal_1170))
					{
						Function_338(&iLocal_1170);
					}
					else if (Function_245(&iLocal_1170) < 7.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_925, "Ranch06_closeEnoughBon", &Global_54076, 0, 0, 0, 1, 3);
						AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, 3.0f, 1);
						Function_338(&iLocal_1170);
						Function_339(&iLocal_1174, 1.0f);
					}
				}
				if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(&Global_54076)) != 0)
					{
						bLocal_1002 = GET_MOUNT(&Global_54076);
					}
				}
				if (!GET_MOUNT(&Global_54076) != &bLocal_1002)
				{
					if ((!GET_LASSO_TARGET(&bLocal_925) != &bLocal_1002 && !GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002) && !GET_LASSO_TARGET(&Global_54076) != &bLocal_1002)
					{
						TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &Global_54076, 15.0f, 4);
						TASK_PRIORITY_SET(&bLocal_929, true);
						SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 10.0f, 4);
						TASK_PRIORITY_SET(&bLocal_925, true);
						SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
						HUD_CLEAR_OBJECTIVE();
						Function_338(&iLocal_931);
						iLocal_1219 = 0;
						Function_212();
						Function_216(&bLocal_1065);
						Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						iLocal_1213 = 0;
						iLocal_1561 = 2;
					}
				}
			}
			if (!iLocal_1220)
			{
				if (Global_6627)
				{
					Function_527();
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1220 = 1;
					iLocal_1221 = 0;
					DETACH_LASSO(&bLocal_925);
					DETACH_LASSO(&bLocal_929);
					TASK_CLEAR(&bLocal_929);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &bLocal_1002, 7.0f, 2);
					TASK_PRIORITY_SET(&bLocal_929, true);
					TASK_CLEAR(&bLocal_925);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &bLocal_1002, 15.0f, 2);
					TASK_PRIORITY_SET(&bLocal_925, true);
					return 0;
				}
				if (GET_MOUNT(&Global_54076) == &bLocal_1002)
				{
					if (!iLocal_1221)
					{
						iLocal_1221 = 1;
						Function_338(&iLocal_1232);
					}
					else if (Function_245(&iLocal_1232) > 3.0f)
					{
						return 0;
					}
					iLocal_1219 = 0;
					SQUAD_LEAVE(&bLocal_1002);
					TASK_CLEAR(&bLocal_1002);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1002);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(&bLocal_1002, 11, false);
					ANIMAL_ACTOR_SET_DOCILE(&bLocal_1002, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(&bLocal_1002, false);
					Function_362();
					DECOR_SET_BOOL(&bLocal_1002, "CanHaveMultipleLassoAttached", false);
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1561 = 5;
					Function_212();
					Function_501();
					iLocal_1220 = 0;
					Function_528();
					Function_338(&iLocal_931);
					if (IS_ACTOR_ALIVE(&bLocal_927))
					{
						Function_354("Horse_return");
					}
					else
					{
						Function_354("Horse_find");
					}
					DETACH_LASSO(&bLocal_925);
					DETACH_LASSO(&bLocal_929);
					TASK_CLEAR(&bLocal_929);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &bLocal_1002, 5.0f, 2);
					TASK_PRIORITY_SET(&bLocal_929, true);
					TASK_CLEAR(&bLocal_925);
					TASK_FACE_ACTOR(&bLocal_925, &bLocal_1002, 1, 3212836864);
					TASK_PRIORITY_SET(&bLocal_925, true);
					return 0;
				}
				if (iLocal_1221)
				{
					iLocal_1221 = 0;
					Function_415(&iLocal_1232);
				}
			}
			break;
		
		case 0x00000005:
			Function_507();
			bLocal_1000 = GET_LASSO_TARGET(&bLocal_925);
			if (IS_ACTOR_VALID(&bLocal_1000))
			{
				DETACH_LASSO(&bLocal_925);
			}
			if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Ranch06_mount_up_obj");
				}
				else
				{
					Function_354("Horse_find");
				}
				if (iLocal_1219)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
					{
						Function_549();
						iLocal_1219 = 0;
					}
				}
			}
			if (Function_499())
			{
				if (!IS_ACTOR_RIDING(&Global_54076) || GET_MOUNT(&Global_54076) != &bLocal_1002)
				{
					Function_526();
					Function_338(&iLocal_935);
				}
			}
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				TASK_GO_NEAR_ACTOR(&bLocal_1002, &bLocal_929, 7.0f, 2);
				TASK_PRIORITY_SET(&bLocal_1002, false);
				TASK_CLEAR(&bLocal_929);
				AI_GOAL_LOOK_CLEAR(&bLocal_929);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_929, &bLocal_1002, 1);
				TASK_USE_LASSO(&bLocal_929, &bLocal_1002, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(&bLocal_929, true);
				Function_227(&bLocal_1002);
				Function_338(&iLocal_931);
				HUD_CLEAR_OBJECTIVE();
				iLocal_1219 = 0;
				iLocal_1561 = 7;
			}
			break;
		
		case 0x00000006:
			Function_507();
			Function_546();
			if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				if (IS_ACTOR_ALIVE(&bLocal_927))
				{
					Function_354("Horse_return");
				}
				else
				{
					Function_354("Horse_find");
				}
				if (iLocal_1219)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
					{
						Function_549();
						iLocal_1219 = 0;
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1002))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1002, 15.0f))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1002, "standing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1002, 1);
					}
					if (GET_TASK_STATUS(&bLocal_1002, 25) != 1)
					{
						TASK_FLEE_ACTOR(&bLocal_1002, &Global_54076, 20.0f, 10.0f, 0, 1, 0);
					}
					AI_ACTOR_FORCE_SPEED(&bLocal_1002, 4);
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(&Global_54076)) == 0)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &Global_54076, 15.0f, 4);
					TASK_PRIORITY_SET(&bLocal_929, true);
					SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 10.0f, 4);
					TASK_PRIORITY_SET(&bLocal_925, true);
					SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
					HUD_CLEAR_OBJECTIVE();
					Function_338(&iLocal_931);
					iLocal_1219 = 0;
					Function_212();
					Function_216(&bLocal_1065);
					Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					iLocal_1213 = 0;
					iLocal_1561 = 2;
				}
			}
			break;
		
		case 0x00000007:
			Function_417();
			Function_507();
			if (Function_499())
			{
				if (!GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002)
				{
					Function_526();
					Function_338(&iLocal_935);
				}
			}
			if (GET_MOUNT(&Global_54076) == &bLocal_1002)
			{
				DETACH_LASSO(&bLocal_929);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &bLocal_1002, 10.0f, 4);
				Function_338(&iLocal_931);
				iLocal_1219 = 0;
				Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
				iLocal_1561 = 5;
				return 0;
			}
			if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1002)
			{
				if (GET_TASK_STATUS(&bLocal_929, 68) == 1)
				{
					DETACH_LASSO(&bLocal_929);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &bLocal_1002, 10.0f, 4);
				}
			}
			else if (!GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002 && !GET_TASK_STATUS(&bLocal_929, 68) != 1)
			{
				TASK_CLEAR(&bLocal_929);
				AI_GOAL_LOOK_CLEAR(&bLocal_929);
				MEMORY_CLEAR_EVENTS(&bLocal_1002, 1);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_929, &bLocal_1002, 1);
				TASK_USE_LASSO(&bLocal_929, &bLocal_1002, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(&bLocal_929, true);
				Function_338(&iLocal_1034);
			}
			else if (GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002 && !GET_TASK_STATUS(&bLocal_929, 68) != 1)
			{
				if (GET_TASK_STATUS(&bLocal_929, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_929, &iLocal_4 + 3008, 4, 0, 0, 1, false);
					if (!DECOR_CHECK_EXIST(&uLocal_817, "DrewDepartLine"))
					{
						Function_525();
						MEMORY_CLEAR_EVENTS(&bLocal_1002, 1);
						DECOR_SET_BOOL(&uLocal_817, "DrewDepartLine", true);
					}
				}
			}
			if (Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_929, "Drew_return", "Drew_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1))
			{
				if (!iLocal_1219)
				{
					iLocal_1219 = 1;
				}
			}
			else
			{
				if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1002)
				{
					Function_354("Ranch06_lasso_release");
				}
				else if (!IS_ACTOR_RIDING(&Global_54076))
				{
					if (IS_ACTOR_ALIVE(&bLocal_927))
					{
						Function_354("Horse_return");
					}
					else
					{
						Function_354("Horse_find");
					}
				}
				else if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					if (!ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(&Global_54076)) != 0)
					{
						Function_354("Horse_return");
					}
					else
					{
						Function_354("Ranch06_follow_bonnie_obj");
					}
				}
				if (iLocal_1219)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f))
					{
						Function_549();
						iLocal_1219 = 0;
					}
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(&Global_54076)) == 0)
				{
					if (GET_LASSO_TARGET(&Global_54076) == &bLocal_1002)
					{
						if (GET_TASK_STATUS(&bLocal_929, 68) == 1)
						{
							TASK_FOLLOW_ACTOR(&bLocal_929, &bLocal_1002);
						}
					}
					else
					{
						Function_214(3, 1, 1);
						Function_354("Ranch06_follow_bonnie_obj");
						if (Function_489(&bLocal_929, &bLocal_1002))
						{
							HUD_CLEAR_OBJECTIVE();
							Function_338(&iLocal_931);
							iLocal_1219 = 0;
							iLocal_1561 = 8;
							GET_OBJECT_POSITION(&iLocal_4 + 1944[2], &Local_1203);
							bLocal_977 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_ACTOR(0, &bLocal_925, 10.0f, 4);
							TASK_FACE_COORD(0, &Local_1203, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
							TASK_SEQUENCE_RELEASE(bLocal_977, 1);
							TASK_PRIORITY_SET(&bLocal_929, true);
							GET_OBJECT_POSITION(&iLocal_4 + 1944[4], &Local_1203);
							bLocal_977 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_ACTOR(0, &bLocal_929, 10.0f, 4);
							TASK_FACE_COORD(0, &Local_1203, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
							TASK_SEQUENCE_RELEASE(bLocal_977, 1);
							TASK_PRIORITY_SET(&bLocal_925, true);
						}
					}
				}
				else if (GET_MOUNT(&Global_54076) == &bLocal_1002)
				{
					DETACH_LASSO(&bLocal_929);
					TASK_STAND_STILL(&bLocal_929, -1.0f, 0, 0);
					Function_338(&iLocal_931);
					iLocal_1219 = 0;
					Function_334(&iLocal_994, 55, 0, 4294967295, 4294967295);
					iLocal_1561 = 5;
				}
			}
			break;
		
		case 0x00000008:
			Function_417();
			Function_507();
			Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1);
			Function_214(3, 1, 1);
			Function_354("Ranch06_follow_bonnie_obj");
			if (ACTORS_IN_RANGE(&bLocal_925, &bLocal_929, 15.0f))
			{
				Function_338(&iLocal_931);
				iLocal_1219 = 0;
				iLocal_1561 = 9;
				if (!DECOR_CHECK_EXIST(&uLocal_817, "DrewDepartLine"))
				{
					Function_525();
					MEMORY_CLEAR_EVENTS(&bLocal_1002, 1);
					DECOR_SET_BOOL(&uLocal_817, "DrewDepartLine", true);
				}
			}
			break;
		
		case 0x00000009:
			Function_417();
			Function_507();
			Function_420(&iLocal_939, 100.0f, 200.0f, &bLocal_925, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_966, 1, &uLocal_817, &iLocal_4, 325, 1);
			if (GET_LASSO_TARGET(&bLocal_929) == &bLocal_1002)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_245(&iLocal_931) < 8.0f)
				{
					bLocal_977 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3008, 4, 0, 0, 1, false);
					TASK_DISMOUNT(false, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
					TASK_SEQUENCE_RELEASE(bLocal_977, 1);
					TASK_PRIORITY_SET(&bLocal_929, true);
					Function_212();
					return 1;
				}
			}
			if (Function_489(&bLocal_929, &bLocal_1002))
			{
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3008, 4, 0, 0, 1, false);
				TASK_DISMOUNT(false, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				TASK_PRIORITY_SET(&bLocal_929, true);
				Function_212();
				return 1;
			}
			return 1;
			break;
	}
	return 0;
}

void Function_525() //Position: 0x28B1E / 166686
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_drewGoesBack", "Ranch06_drewGoesBack", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x28B6F / 166767
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_backOnHorseDrew", "Ranch06_backOnHorseDrew", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527() //Position: 0x28BC6 / 166854
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_firstTimeMount", "Ranch06_firstTimeMount", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x28C1B / 166939
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_breakHorseDrew", "Ranch06_breakHorseDrew", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_529() //Position: 0x28C70 / 167024
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_drewlassoSameHorse_v2", "Ranch06_drewlassoSameHorse_v2", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x28CD3 / 167123
{
	if (GET_TASK_STATUS(&bLocal_929, 0) == 0)
	{
		if (GET_LASSO_TARGET(&bLocal_929) == &bLocal_1002)
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_532();
				CLEAR_ACTOR_MIN_SPEED(&bLocal_929);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_929);
				TASK_CLEAR(&bLocal_929);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_ACTOR(false, &bLocal_1002, 10.0f, 3.0f, 0, 0, 0);
				TASK_FACE_ACTOR(0, &bLocal_1002, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_929, &Global_54076, 3.0f, 1);
				TASK_PRIORITY_SET(&bLocal_929, true);
			}
		}
		else
		{
			TASK_CLEAR(&bLocal_929);
			AI_GOAL_LOOK_CLEAR(&bLocal_929);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_929, &bLocal_1002, 1);
			GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(-10.0f, 0.0f, 0.0f), &Local_968);
			bLocal_977 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
			{
				if ((GET_Y(&Local_971) - GET_Y(&Local_968)) < 2,5f)
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(0.0f, 0.0f, -10.0f), &Local_968);
					if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
					{
						TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
					}
				}
				else
				{
					TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
				}
			}
			TASK_USE_LASSO(0, &bLocal_1002, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
			TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			TASK_PRIORITY_SET(&bLocal_929, true);
			SET_ACTOR_MIN_SPEED(&bLocal_929, 4);
		}
	}
	else if (GET_TASK_STATUS(&bLocal_929, 6) == 1)
	{
		if (!GET_LASSO_TARGET(&bLocal_929) != &bLocal_1002)
		{
			TASK_CLEAR(&bLocal_929);
			AI_GOAL_LOOK_CLEAR(&bLocal_929);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_929, &bLocal_1002, 1);
			GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(-10.0f, 0.0f, 0.0f), &Local_968);
			bLocal_977 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
			{
				if ((GET_Y(&Local_971) - GET_Y(&Local_968)) < 2,5f)
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(0.0f, 0.0f, -10.0f), &Local_968);
					if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
					{
						TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
					}
				}
				else
				{
					TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
				}
			}
			TASK_USE_LASSO(0, &bLocal_1002, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_929, bLocal_977);
			TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			TASK_PRIORITY_SET(&bLocal_929, true);
			SET_ACTOR_MIN_SPEED(&bLocal_929, 4);
		}
	}
	if (GET_TASK_STATUS(&bLocal_925, 0) == 0)
	{
		if (GET_LASSO_TARGET(&bLocal_925) == &bLocal_1002)
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_531();
				CLEAR_ACTOR_MIN_SPEED(&bLocal_925);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_925);
				TASK_CLEAR(&bLocal_925);
				bLocal_977 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_ACTOR(false, &bLocal_1002, 10.0f, 3.0f, 0, 0, 0);
				TASK_FACE_ACTOR(0, &bLocal_1002, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
				TASK_SEQUENCE_RELEASE(bLocal_977, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_925, &Global_54076, 3.0f, 1);
				TASK_PRIORITY_SET(&bLocal_925, true);
			}
		}
		else
		{
			TASK_CLEAR(&bLocal_925);
			AI_GOAL_LOOK_CLEAR(&bLocal_925);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_925, &bLocal_1002, 1);
			GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(10.0f, 0.0f, 0.0f), &Local_968);
			bLocal_977 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
			{
				if ((GET_Y(&Local_971) - GET_Y(&Local_968)) < 2,5f)
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(0.0f, 0.0f, 10.0f), &Local_968);
					if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
					{
						TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
					}
				}
				else
				{
					TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
				}
			}
			TASK_USE_LASSO(0, &bLocal_1002, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
			TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			TASK_PRIORITY_SET(&bLocal_925, true);
			SET_ACTOR_MIN_SPEED(&bLocal_925, 4);
		}
	}
	else if (GET_TASK_STATUS(&bLocal_925, 6) == 1)
	{
		if (!GET_LASSO_TARGET(&bLocal_925) != &bLocal_1002)
		{
			TASK_CLEAR(&bLocal_925);
			AI_GOAL_LOOK_CLEAR(&bLocal_925);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_925, &bLocal_1002, 1);
			GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(10.0f, 0.0f, 0.0f), &Local_968);
			bLocal_977 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
			{
				if ((GET_Y(&Local_971) - GET_Y(&Local_968)) < 2,5f)
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1002, Vector(0.0f, 0.0f, 10.0f), &Local_968);
					if (FIND_GROUND_INTERSECTION(&Local_968, 20.0f, &Local_971, &uLocal_974))
					{
						TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
					}
				}
				else
				{
					TASK_GO_NEAR_COORD(false, &Local_971, 3.0f, 3);
				}
			}
			TASK_USE_LASSO(0, &bLocal_1002, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_925, bLocal_977);
			TASK_SEQUENCE_RELEASE(bLocal_977, 1);
			TASK_PRIORITY_SET(&bLocal_925, true);
			SET_ACTOR_MIN_SPEED(&bLocal_925, 4);
		}
	}
	return;
}

void Function_531() //Position: 0x2915D / 168285
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_bonlassoSameHorse", "Ranch06_bonlassoSameHorse", false, 2, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_532() //Position: 0x291B8 / 168376
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_drewlassoSameHorse", "Ranch06_drewlassoSameHorse", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_533() //Position: 0x29215 / 168469
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_horseBreaksDrewLass", "Ranch06_horseBreaksDrewLass", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_534() //Position: 0x29274 / 168564
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_lassoHorseDrew", "Ranch06_lassoHorseDrew", false, 2, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535() //Position: 0x292C9 / 168649
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_247(&iLocal_980))
		{
			Function_415(&iLocal_980);
		}
	}
	else
	{
		if (iLocal_993)
		{
			iLocal_993 = 0;
		}
		if (!Function_247(&iLocal_980))
		{
			Function_338(&iLocal_980);
		}
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 15.0f) && IS_ACTOR_IN_VOLUME(&bLocal_929, &iLocal_4 + 1784))
		{
			if (Function_245(&iLocal_980) < 10.0f)
			{
				if (!Function_247(&iLocal_1162))
				{
					switch (iLocal_992)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_538();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_993 = 1;
								Function_537();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 2;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_536();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_992 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_536() //Position: 0x293A6 / 168870
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_noTalk1", "Ranch06_noTalk1", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x293ED / 168941
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AA", "Ranch06_rideBanter_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AB", "Ranch06_rideBanter_v2_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v2_AC", "Ranch06_rideBanter_v2_AC", 2, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AD", "Ranch06_rideBanter_v2_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AE1", "Ranch06_rideBanter_v2_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AE2", "Ranch06_rideBanter_v2_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AF1", "Ranch06_rideBanter_v2_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AF2", "Ranch06_rideBanter_v2_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AG1", "Ranch06_rideBanter_v2_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AG2", "Ranch06_rideBanter_v2_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2930", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AH1", "Ranch06_rideBanter_v2_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AH2", "Ranch06_rideBanter_v2_AH2", false, 1, 1, 0, 1);
		Function_258(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x29762 / 169826
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v1_AA", "Ranch06_rideBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AB1", "Ranch06_rideBanter_v1_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AB2", "Ranch06_rideBanter_v1_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AD", "Ranch06_rideBanter_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v1_AE", "Ranch06_rideBanter_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AF", "Ranch06_rideBanter_v1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AG", "Ranch06_rideBanter_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AH", "Ranch06_rideBanter_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1170", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AI", "Ranch06_rideBanter_v1_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_040", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AJ", "Ranch06_rideBanter_v1_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AK", "Ranch06_rideBanter_v1_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v1_AL", "Ranch06_rideBanter_v1_AL", true, 1, 1, 0, 1);
		Function_258(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x29ACB / 170699
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_chaseWildHorses", "Ranch06_chaseWildHorses", false, 2, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_540() //Position: 0x29B22 / 170786
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_spotWildHorses", "Ranch06_spotWildHorses", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_541() //Position: 0x29B77 / 170871
{
	iLocal_993 = 0;
	Function_415(&iLocal_980);
	ABORT_SCRIPTED_CONVERSATION(1);
	return;
}

bool Function_542(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x29B8C / 170892
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
				if (Function_413(&uVar1, &uParam1, &uParam2, &uParam3, &uParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_543() //Position: 0x29BE8 / 170984
{
	switch (iLocal_1560)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&bLocal_925))
			{
			}
			else if (!GET_TASK_STATUS(&bLocal_925, 11) != 1 || !GET_TASK_STATUS(&bLocal_925, 11) != 3)
			{
				TASK_MOUNT(&bLocal_925, &bLocal_996, 0, 1, 2, 2147483647);
				iLocal_1560 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING(&bLocal_925))
			{
			}
			else if (!GET_TASK_STATUS(&bLocal_925, 11) != 1 || !GET_TASK_STATUS(&bLocal_925, 11) != 3)
			{
				TASK_MOUNT(&bLocal_925, &bLocal_996, 0, 1, 2, 2147483647);
			}
			break;
	}
	return;
}

void Function_544() //Position: 0x29C84 / 171140
{
	switch (iLocal_1559)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(&bLocal_929))
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 25.0f))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_929, 3);
					iLocal_1559 = 1;
				}
				else if (IS_ACTOR_IN_VOLUME(&bLocal_929, &iLocal_4 + 1784))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_929, 2);
				}
				else
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_929, 4);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_929, 11) != 1 || !GET_TASK_STATUS(&bLocal_929, 11) != 3)
			{
				TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
				iLocal_1559 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING(&bLocal_929))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 25.0f))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_929);
					iLocal_1559 = 0;
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_929, 11) != 1 || !GET_TASK_STATUS(&bLocal_929, 11) != 3)
			{
				TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
			}
			break;
	}
	return;
}

void Function_545() //Position: 0x29D84 / 171396
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_GetsOffHorse", "Ranch06_GetsOffHorse", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546() //Position: 0x29DD5 / 171477
{
	if (!iLocal_1561 != 4)
	{
		iLocal_1004 = GET_MOUNT(&Global_54076);
		if (Function_509(&iLocal_1004, &bLocal_1065, 0))
		{
			bLocal_1002 = &iLocal_1004;
			HUD_CLEAR_OBJECTIVE();
			Function_338(&iLocal_931);
			iLocal_1219 = 0;
			iLocal_1561 = 4;
			return;
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1002))
	{
		iLocal_1004 = GET_LASSO_TARGET(&Global_54076);
		if (Function_509(&iLocal_1004, &bLocal_1065, 0) && !&iLocal_1004 != &bLocal_1002)
		{
			DETACH_LASSO(&bLocal_925);
			DETACH_LASSO(&bLocal_929);
			TASK_CLEAR(&bLocal_1002);
			Function_505(&bLocal_1065, &Global_54076, 15.0f, 2.0f, 0, 0);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &Global_54076, 5.0f, 4);
			TASK_PRIORITY_SET(&bLocal_929, true);
			SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 7.0f, 4);
			TASK_PRIORITY_SET(&bLocal_925, true);
			SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
			HUD_CLEAR_OBJECTIVE();
			Function_338(&iLocal_931);
			iLocal_1219 = 0;
			Function_212();
			Function_216(&bLocal_1065);
			Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iLocal_1213 = 0;
			iLocal_1561 = 2;
			return;
		}
		if (!IS_ACTOR_ALIVE(&bLocal_1002))
		{
			bLocal_1002 = "";
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_929, &Global_54076, 5.0f, 4);
			TASK_PRIORITY_SET(&bLocal_929, true);
			SET_ACTOR_MAX_SPEED(&bLocal_929, 3);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_925, &Global_54076, 7.0f, 4);
			TASK_PRIORITY_SET(&bLocal_925, true);
			SET_ACTOR_MAX_SPEED(&bLocal_925, 3);
			HUD_CLEAR_OBJECTIVE();
			Function_338(&iLocal_931);
			iLocal_1219 = 0;
			Function_212();
			Function_216(&bLocal_1065);
			Function_446(&bLocal_1065, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iLocal_1213 = 0;
			iLocal_1561 = 2;
			return;
		}
	}
	return;
}

void Function_547() //Position: 0x29F68 / 171880
{
	Function_214(3, 0, 1);
	if (IS_BLIP_VALID(&bLocal_1178))
	{
		REMOVE_BLIP(&bLocal_1178);
	}
	if (!IS_BLIP_VALID(&bLocal_1178))
	{
		bLocal_1178 = ADD_BLIP_FOR_OBJECT(&bLocal_929, 325, 0f, 2, 0);
	}
	if (IS_OBJECT_VALID(&iLocal_1071))
	{
		Function_213(&iLocal_1071);
		Function_208();
	}
	if (IS_BLIP_VALID(&uLocal_1182))
	{
		REMOVE_BLIP(&uLocal_1182);
	}
	if (IS_BLIP_VALID(&uLocal_1180))
	{
		REMOVE_BLIP(&uLocal_1180);
	}
	return;
}

void Function_548() //Position: 0x29FD7 / 171991
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_jonNoFollow", "Ranch06_jonNoFollow", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_549() //Position: 0x2A026 / 172070
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_comesBack", "Ranch06_comesBack", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_550() //Position: 0x2A071 / 172145
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_findWildHorses", "Ranch06_findWildHorses", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_551() //Position: 0x2A0C6 / 172230
{
	switch (iLocal_1224)
	{
		case 0x00000006:
			if (!IS_ACTOR_VALID(&bLocal_996))
			{
				Function_298();
				bLocal_996 = &iLocal_4 + 912[02];
				TASK_PRIORITY_SET(&bLocal_996, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_996, 1);
				SET_ACTOR_FACTION(&bLocal_996, 21);
				bLocal_998 = &iLocal_4 + 912[12];
				TASK_PRIORITY_SET(&bLocal_998, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_998, 1);
				SET_ACTOR_FACTION(&bLocal_998, 21);
			}
			if (!IS_ACTOR_VALID(&bLocal_929))
			{
				Function_297();
				bLocal_929 = &iLocal_4 + 1304[02];
				SET_CRIPPLE_ENABLE(&bLocal_929, 0);
				SET_ACTOR_FACTION(&bLocal_929, 20);
				TASK_PRIORITY_SET(&bLocal_929, true);
				TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
				TASK_PRIORITY_SET(&bLocal_929, true);
				SET_ACTOR_MAX_SPEED(&bLocal_929, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_929, 2);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_929, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_929, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_929, GET_ACTOR_MAX_HEALTH(&bLocal_929));
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_929, 100.0f);
				GIVE_WEAPON_TO_ACTOR(&bLocal_929, 21, false, 1, 1);
			}
			DECOR_SET_BOOL(&Global_54076, "CanBeLasso", false);
			Function_334(&iLocal_994, 1, 0, 4294967295, 4294967295);
			if (!SQUAD_IS_VALID(&bLocal_1063))
			{
				bLocal_1063 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sMoiraSquad"));
				SQUAD_JOIN(&bLocal_925, &bLocal_1063);
			}
			Function_338(&iLocal_1042);
			iLocal_1224 = 7;
			break;
		
		case 0x00000007:
			if (&bLocal_927 != &bLocal_996 || &bLocal_927 != &bLocal_998)
			{
				bLocal_927 = "";
			}
			if (Function_306())
			{
				bLocal_927 = Function_299(1, 0, 0, 0, 0, 0, 1, 0);
				if (HUD_IS_FADED())
				{
					Function_279(&bLocal_927, &iLocal_4 + 1800[6], 1, 1, 1);
					Function_279(&bLocal_929, &iLocal_4 + 1800[5], 1, 1, 1);
					Function_279(&bLocal_996, &iLocal_4 + 1800[8], 1, 1, 1);
					Function_279(&bLocal_998, &iLocal_4 + 1800[7], 1, 1, 1);
					Function_279(&bLocal_929, &iLocal_4 + 1800[15], 1, 1, 1);
					Function_279(&bLocal_925, &iLocal_4 + 1800[13], 1, 1, 1);
					TASK_MOUNT(&bLocal_929, &bLocal_998, 0, 1, 2, 2147483647);
					TASK_PRIORITY_SET(&bLocal_929, true);
					SET_ACTOR_MAX_SPEED(&bLocal_929, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_929, 2);
					ACTOR_POP_NEXT_GAIT(&bLocal_929, 1, 0);
				}
				TASK_STAND_STILL(&bLocal_996, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_996, true);
				TASK_STAND_STILL(&bLocal_927, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_927, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_927, 1);
				SET_ACTOR_FACTION(&bLocal_927, 21);
				TASK_STAND_STILL(&bLocal_998, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_998, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_925, 2);
				iLocal_1224 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_1224 = 9;
			return 1;
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

void Function_552() //Position: 0x2A385 / 172933
{
	switch (iLocal_878)
	{
		case 0x00000000:
			Function_275(9);
			Function_573();
			Function_565(&Local_819, 1);
			if (!IS_LAYOUTREF_VALID(&uLocal_817))
			{
				uLocal_817 = CREATE_LAYOUT("ranch06_DynamicLayout");
			}
			Function_564("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_994 = 0;
			Function_563();
			if (!IS_ACTOR_VALID(&bLocal_925))
			{
				bLocal_925 = Function_555(3, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if (!Function_250(&Local_819) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R6_SEQ/R6_SEQ"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-840,0001f, 91,77865f, 2401,022f), -131,7449f, 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_925, Vector(-839,9487f, 91,73472f, 2399,405f), 213,6059f, 1, 1, true);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_925, -1.0f, 0, 0);
				Function_330();
				Global_99147 = 1;
				iLocal_878 = 6;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R6_SEQ/R6_SEQ"))
				{
					LOG_ERROR("R6/R6 cutscene does not exist");
				}
				iLocal_878 = 8;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_338(&iLocal_931);
				iLocal_878 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_238("$/cutscene/R6_SEQ/R6_SEQ", &iLocal_865, &Local_819, &iLocal_877, 78971, 57680, 55366, 54688, 48872, 48790, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000008:
			if (Function_553())
			{
				iLocal_878 = 9;
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_307();
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2992), false);
				}
			}
			break;
		
		case 0x00000009:
			Function_270();
			iLocal_877 = iLocal_816;
			iLocal_878 = 0;
			Function_267(&Local_819, &iLocal_877, &iLocal_878);
			Function_266(StackVal, StackVal, StackVal, StackVal, Function_307(), Local_819);
			switch (iLocal_877)
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
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

bool Function_553() //Position: 0x2A5EE / 173550
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_554(0))
		{
			return 0;
		}
		if (!Function_288())
		{
			return 0;
		}
		if (!Function_282(&iLocal_831))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_925))
		{
			bLocal_925 = Function_555(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_927))
		{
			if (Function_306())
			{
				bLocal_927 = Function_299(1, 1, 0, 0, 0, 0, 1, 0);
			}
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_927, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_554(bool bParam0) //Position: 0x2A66B / 173675
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

var Function_555(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x2A69B / 173723
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
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, true, false);
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
		Function_214(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_562(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_558(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_557(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, false);
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
		Function_556(&bVar1, 0);
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

void Function_556(var uParam0, bool bParam1) //Position: 0x2ABDB / 175067
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_557(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x2ABFD / 175101
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

var Function_558(int iParam0, int iParam1) //Position: 0x2AC5E / 175198
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_411(iParam0))
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
						Function_559(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_559(var uParam0, int iParam1) //Position: 0x2ACEC / 175340
{
	Function_561(&uParam0);
	Function_560(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_560(int iParam0) //Position: 0x2AD18 / 175384
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_561(int iParam0) //Position: 0x2AD3E / 175422
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

var Function_562(bool bParam0, var uParam1) //Position: 0x2AE14 / 175636
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
				if (GET_ACTOR_ENUM(&uVar2) == bParam0)
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

void Function_563() //Position: 0x2AEBA / 175802
{
	Function_289(&iLocal_831, "Ranch06_stop_horses", 5, 0);
	Function_289(&iLocal_831, "custom/Ranch06_stop_horses", 8, 0);
	Function_289(&iLocal_831, "handoff", 5, 0);
	Function_289(&iLocal_831, "custom/handoff", 8, 0);
	Function_289(&iLocal_831, "ranch06_drew_idle", 5, 0);
	Function_289(&iLocal_831, "custom/ranch06_drew_idle", 8, 0);
	Function_289(&iLocal_831, "ranch06", 10, 0);
	Function_289(&iLocal_831, "nminigames", 10, 0);
	return;
}

void Function_564(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2AFA0 / 176032
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_335(uParam1), &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

void Function_565(int iParam0, bool bParam1) //Position: 0x2AFC2 / 176066
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_571(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_250(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
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
	if (!Function_250(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_210();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_278();
	Function_241();
	Function_233("");
	Function_570(0);
	Function_569();
	Function_203();
	Function_202();
	ENABLE_JOURNAL_REPLAY(0);
	Function_568();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_299(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_319(0, 0x40400000);
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
	Function_567(13);
	Function_567(14);
	Function_567(25);
	Function_567(24);
	Function_567(12);
	Function_567(27);
	Function_567(26);
	Function_567(15);
	Function_566();
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

void Function_566() //Position: 0x2B402 / 177154
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

void Function_567(int iParam0) //Position: 0x2B487 / 177287
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_568() //Position: 0x2B4A7 / 177319
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

void Function_569() //Position: 0x2B4ED / 177389
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_570(int iParam0) //Position: 0x2B503 / 177411
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_206())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_571(int iParam0, int iParam1) //Position: 0x2B53C / 177468
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
			Function_572(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_572(struct<113> Param0) //Position: 0x2B5C3 / 177603
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

void Function_573() //Position: 0x2B621 / 177697
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

void Function_574() //Position: 0x2B64C / 177740
{
	return;
}

bool Function_575(struct<25> Param0) //Position: 0x2B652 / 177746
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
						Function_583();
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
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
						Function_582();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_581();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_580();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
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
						Function_579();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_578();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_577();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
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
		Function_576(&Param0, 1);
		return 1;
	}
	Function_576(&Param0, 0);
	return 0;
}

void Function_576(struct<25> Param0) //Position: 0x2B858 / 178264
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

void Function_577() //Position: 0x2B883 / 178307
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_assaultChar", "Ranch06_assaultChar", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_578() //Position: 0x2B8D2 / 178386
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_assaultDrew", "Ranch06_assaultDrew", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_579() //Position: 0x2B921 / 178465
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_assaultBon", "Ranch06_assaultBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_580() //Position: 0x2B96E / 178542
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_shootChar", "Ranch06_shootChar", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x2B9B9 / 178617
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_shootDrew", "Ranch06_shootDrew", false, 1, 1, 0, 1);
		Function_258(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_582() //Position: 0x2BA04 / 178692
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_shootBon", "Ranch06_shootBon", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_583() //Position: 0x2BA4D / 178765
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_shootBonHorse", "Ranch06_shootBonHorse", false, 1, 1, 0, 1);
		Function_258(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_584(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2BAA0 / 178848
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
		Function_576(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_603(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_602(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_602(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_588(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_576(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_587(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_586(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_587(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_233(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_586(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_576(&Param2, 0);
	return 0;
}

void Function_585(char* cParam0) //Position: 0x2BEB6 / 179894
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

void Function_586(struct<25> Param0) //Position: 0x2BFAA / 180138
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

void Function_587(bool bParam0) //Position: 0x2C023 / 180259
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_588(struct<57> Param0) //Position: 0x2C047 / 180295
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
			return Function_599(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_592(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_599(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_589(&Param0, bVar2);
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
						bVar2 = Function_599(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_589(&Param0, bVar2);
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

var Function_589(int iParam0, bool bParam1) //Position: 0x2C1B8 / 180664
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
				bParam1 = Function_591(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_590(16);
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
				bParam1 = Function_591(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_590(256);
			}
		}
	}
	return bParam1;
}

bool Function_590(int iParam0) //Position: 0x2C2F4 / 180980
{
	return 2 | iParam0;
}

int Function_591(int iParam0) //Position: 0x2C2FE / 180990
{
	return 4 | iParam0;
}

int Function_592(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2C308 / 181000
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
				iParam3 = Function_598(&iParam0, &iParam1, bParam4);
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
			return Function_590(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_593(&iParam0, &iParam1, 0, bParam4);
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
			return Function_590(16);
		}
	}
	return 0;
}

int Function_593(int iParam0, vector3 vParam1) //Position: 0x2C3C3 / 181187
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_597(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_596(iVar0, 3, 1, bParam3))
			{
				if (!Function_602(&iParam0, 8, 1))
				{
					return Function_595(64, 1024, bParam2);
				}
			}
			return Function_594(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_596(iVar0, 2, 1, bParam3))
			{
				if (!Function_602(&iParam0, 32, 1))
				{
					return Function_595(64, 1024, bParam2);
				}
			}
			return Function_594(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_596(iVar0, 1, 1, bParam3))
			{
				if (!Function_602(&iParam0, 64, 1))
				{
					return Function_595(64, 1024, bParam2);
				}
			}
			return Function_594(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_596(iVar0, 3, 1, bParam3))
			{
				if (!Function_602(&iParam0, 128, 1))
				{
					return Function_595(64, 1024, bParam2);
				}
			}
			return Function_594(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_596(iVar0, 1, 1, bParam3))
			{
				if (!Function_602(&iParam0, 1024, 1))
				{
					return Function_595(64, 1024, bParam2);
				}
			}
			return Function_594(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_596(iVar0, 1, 1, bParam3))
			{
				if (!Function_602(&iParam0, 1024, 1))
				{
					return Function_595(64, 1024, bParam2);
				}
			}
			return Function_594(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_594(int iParam0, int iParam1, bool bParam2) //Position: 0x2C58B / 181643
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_595(int iParam0, int iParam1, bool bParam2) //Position: 0x2C5A0 / 181664
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_596(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2C5B5 / 181685
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_597(int iParam0) //Position: 0x2C5D2 / 181714
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

int Function_598(var uParam0, vector3 vParam1) //Position: 0x2C645 / 181829
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_597(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_596(iVar0, 3, 1, bParam2))
			{
				if (!Function_602(&uParam0, 8, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000009:
			if (Function_596(iVar0, 3, 1, bParam2))
			{
				if (!Function_602(&uParam0, 8, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x0000006E:
			if (Function_596(iVar0, 2, 1, bParam2))
			{
				if (!Function_602(&uParam0, 16, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x0000005B:
			if (Function_596(iVar0, 2, 1, bParam2))
			{
				if (!Function_602(&uParam0, 32, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000031:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&uParam0, 64, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000007:
			if (Function_596(iVar0, 3, 1, bParam2))
			{
				if (!Function_602(&uParam0, 128, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000008:
			if (Function_596(iVar0, 2, 1, bParam2))
			{
				if (!Function_602(&uParam0, 256, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000014:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&uParam0, 512, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000018:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&uParam0, 512, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000057:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&uParam0, 1024, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000058:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&uParam0, 1024, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_599(struct<65> Param0) //Position: 0x2C86E / 182382
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
						return Function_598(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_602(&Param0, 2, 1))
					{
						return Function_591(8);
					}
					return Function_590(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_602(&Param0, 4, 1))
					{
						return Function_591(16);
					}
					return Function_590(16);
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
							return Function_593(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_602(&Param0, 2, 1))
						{
							return Function_591(128);
						}
						return Function_590(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_602(&Param0, 4, 1))
						{
							return Function_591(256);
						}
						return Function_590(256);
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
						return Function_593(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_602(&Param0, 2, 1))
					{
						return Function_591(8);
					}
					return Function_590(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_602(&Param0, 4, 1))
					{
						return Function_591(16);
					}
					return Function_590(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_601(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_602(&Param0, 2, 1))
					{
						return Function_591(8);
					}
					return Function_590(8);
				}
				if (!Function_602(&Param0, 4, 1))
				{
					return Function_591(16);
				}
				return Function_590(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_593(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_600(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_590(128);
							}
							if (!Function_602(&Param0, 2, 1))
							{
								return Function_591(8);
							}
							return Function_590(8);
						}
						if (iParam4 == 2)
						{
							if (Function_600(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_590(256);
							}
							if (!Function_602(&Param0, 4, 1))
							{
								return Function_591(16);
							}
							return Function_590(16);
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

bool Function_600(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2CB54 / 183124
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

int Function_601(int iParam0, vector3 vParam1) //Position: 0x2CC22 / 183330
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_597(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_596(iVar0, 2, 1, bParam2))
			{
				if (!Function_602(&iParam0, 16, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x0000005B:
			if (Function_596(iVar0, 2, 1, bParam2))
			{
				if (!Function_602(&iParam0, 32, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000057:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&iParam0, 1024, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		case 0x00000058:
			if (Function_596(iVar0, 1, 1, bParam2))
			{
				if (!Function_602(&iParam0, 1024, 1))
				{
					return Function_591(64);
				}
			}
			return Function_590(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_602(struct<69> Param0) //Position: 0x2CD44 / 183620
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

int Function_603(bool bParam0) //Position: 0x2CD6E / 183662
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

void Function_604(int iParam0, struct<5>[] Param1, var uParam2, int iParam3, float fParam4, bool bParam5) //Position: 0x2CDA4 / 183716
{
	float fVar0;
	
	if (!Function_247(&iParam0))
	{
		Function_610(&iParam0);
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
		if (Function_245(&iParam0) <= fVar0)
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
					if (Function_607(&Global_54076, &Param1[uParam25] + 16, Param1[uParam25].f_24))
					{
						Function_605(StackVal, &(Param1[uParam25]), Param1[uParam25].f_12);
					}
					else
					{
						PRINTSTRING("Player is ");
						Function_317(&Global_54076);
						Function_317(&Param1[uParam25] + 16);
						PRINTFLOAT(VDIST(Function_317(&Global_54076), Function_317(&Param1[uParam25] + 16)));
						PRINTSTRING("m away from sepaker. It's too far. Don't print the line: ");
						PRINTSTRING(&(Param1[uParam25]));
						PRINTNL();
					}
				}
				else
				{
					Function_605(StackVal, &(Param1[uParam25]), Param1[uParam25].f_12);
				}
				Function_338(&iParam0);
				if (&bParam5)
				{
					Param1[uParam25].f_28 = 1;
				}
				uParam2++;
			}
		}
	}
}

void Function_605(var uParam0, float fParam1, bool bParam2) //Position: 0x2CFA2 / 184226
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_606(&uParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_139(&uParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_426(&uParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&uParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_606(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2D006 / 184326
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

bool Function_607(var uParam0, var uParam1, float fParam2) //Position: 0x2D08B / 184459
{
	float fVar0;
	
	fVar0 = Function_608(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_608(var uParam0, int iParam1) //Position: 0x2D0AA / 184490
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_609(&uVar0, &uVar2);
	return iVar4;
}

var Function_609(struct<2> Param0) //Position: 0x2D0CB / 184523
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_610(int iParam0) //Position: 0x2D0EA / 184554
{
	if (!Function_247(&iParam0))
	{
		Function_339(&iParam0, 0.0f);
	}
	return;
}

void Function_611() //Position: 0x2D101 / 184577
{
	if (Function_337(Global_46736[2]))
	{
		if (!IS_DOOR_VALID(&uLocal_1241))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2024[11], &Local_1203);
			uLocal_1241 = FIND_NEAREST_DOOR(&Local_1203, 4.0f);
		}
		else if (!IS_DOOR_CLOSED(&uLocal_1241))
		{
			CLOSE_DOOR_FAST(&uLocal_1241);
			Function_127(&uLocal_1241, 1);
		}
		if (!IS_DOOR_VALID(&uLocal_1243))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2024[12], &Local_1203);
			uLocal_1243 = FIND_NEAREST_DOOR(&Local_1203, 4.0f);
		}
		else if (!IS_DOOR_CLOSED(&uLocal_1243))
		{
			CLOSE_DOOR_FAST(&uLocal_1243);
			Function_127(&uLocal_1243, 1);
		}
	}
	return;
}

int Function_612() //Position: 0x2D19B / 184731
{
	if (IS_STRING_VALID(&uLocal_1156))
	{
		if (Function_247(&iLocal_1162))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_415(&iLocal_1162);
				Function_426(&uLocal_1156, 0x40f00000, 1, 2, 0, 0, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void Function_613() //Position: 0x2D1DC / 184796
{
	if (!Function_247(&iLocal_988))
	{
		Function_338(&iLocal_988);
	}
	else if (Function_245(&iLocal_988) <= 5.0f)
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (IS_ACTOR_VALID(&bLocal_929))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_929, 1.0f))
				{
					if (Function_616(&Global_54076, &bLocal_929) < 8.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_929, "Ranch06_rideIntoDrewHorse", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_338(&iLocal_988);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_925))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_925, 1.0f))
				{
					if (Function_616(&Global_54076, &bLocal_925) < 8.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_925, "Ranch06_rideIntoBon", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_338(&iLocal_988);
					}
				}
			}
		}
		if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
		{
			if (IS_ACTOR_VALID(&bLocal_925))
			{
				if (ACTORS_IN_RANGE(&bLocal_925, &Global_54076, 20.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_925, "Ranch06_thrownOffHorse", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_338(&iLocal_988);
				}
			}
		}
		Function_615();
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_614(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				iLocal_978 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_VALID(&iLocal_978))
				{
					if (IS_ACTOR_HUMAN(&iLocal_978))
					{
						if (&iLocal_978 == &bLocal_925)
						{
							if (Function_247(&iLocal_984))
							{
								if (Function_245(&iLocal_984) < 1.0f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_925, "Ranch06_guinOnBon", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_338(&iLocal_988);
								}
							}
							else
							{
								Function_338(&iLocal_984);
							}
						}
						else if (&iLocal_978 == &bLocal_929)
						{
							if (Function_247(&iLocal_984))
							{
								if (Function_245(&iLocal_984) < 1.0f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_929, "Ranch06_gunOnDrew", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_338(&iLocal_988);
								}
							}
							else
							{
								Function_338(&iLocal_984);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &iLocal_978))
						{
							if (Function_247(&iLocal_984))
							{
								if (Function_245(&iLocal_984) < 1.0f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_925, "Ranch06_gunChar", Function_54(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_338(&iLocal_988);
								}
							}
							else
							{
								Function_338(&iLocal_984);
							}
						}
						else if (Function_247(&iLocal_984))
						{
							Function_415(&iLocal_984);
						}
					}
					else if (Function_247(&iLocal_984))
					{
						Function_415(&iLocal_984);
					}
				}
				else if (Function_247(&iLocal_984))
				{
					Function_415(&iLocal_984);
				}
			}
			else if (Function_247(&iLocal_984))
			{
				Function_415(&iLocal_984);
			}
		}
		else if (Function_247(&iLocal_984))
		{
			Function_415(&iLocal_984);
		}
	}
	return;
}

bool Function_614(bool bParam0) //Position: 0x2D4E2 / 185570
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

void Function_615() //Position: 0x2D528 / 185640
{
	if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_614(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (Function_245(&iLocal_988) <= 5.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_925, "Ranch06_shootRandom", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_338(&iLocal_988);
					}
				}
			}
		}
	}
	return;
}

float Function_616(var uParam0, bool bParam1) //Position: 0x2D59B / 185755
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	GET_ACTOR_VELOCITY(&bParam1, &Var2);
	return VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal));
}

void Function_617(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x2D5BF / 185791
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_618(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x2D5EC / 185836
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_619(StackVal, Param4, uParam3, &iParam6);
		Function_230(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_619(struct<2> Param0, var uParam2, var uParam3) //Position: 0x2D62D / 185901
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_621(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_620(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_620(int iParam0) //Position: 0x2D6AF / 186031
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

var Function_621(struct<2> Param0, bool bParam2) //Position: 0x2DB5D / 187229
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

struct<8> Function_622(int iParam0) //Position: 0x2DBC9 / 187337
{
	Function_401(iParam0 + 1);
	return StackVal, Function_401(iParam0 + 1);
}

int Function_623(int iParam0) //Position: 0x2DBD6 / 187350
{
	return Function_400(iParam0 + 1);
}

