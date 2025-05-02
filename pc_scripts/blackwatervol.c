//Decompiled with MagicRDR v1.0
//Function Count : 72
//Statics Count : 1332
//Natives Count : 125
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 3;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 2;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 5;
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
	var uLocal_36 = 3;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 4;
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
	var uLocal_58 = 2;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 1;
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
	var uLocal_80 = 2;
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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 2;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 1;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 37;
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
	var uLocal_196 = 8;
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
	var uLocal_216 = 1;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 6;
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
	var uLocal_238 = 5;
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
	var uLocal_252 = 10;
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
	var uLocal_278 = 10;
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
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 1;
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
	var uLocal_318 = 3;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 2;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 1;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 1;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 5;
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
	var uLocal_370 = 1;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 1;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 3;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 41;
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
	var uLocal_478 = 1;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 2;
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
	var uLocal_496 = 3;
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
	var uLocal_512 = 3;
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
	var uLocal_526 = 14;
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
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	var uLocal_730 = 0;
	int iLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 26;
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
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	char[] cLocal_896[4] = 0;
	var uLocal_897 = 0;
	struct<4> Local_898[52];
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
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
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
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_728 = 0;
	iLocal_729 = &iScriptParam_0;
	Function_71("Initializing Blackwater Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_731 = 500;
		uLocal_732 = Function_70();
		switch (iLocal_728)
		{
			case 0x00000000:
				if (Function_68())
				{
					cLocal_896 = Function_67(&iLocal_0, "blackwater", iScriptParam_0);
					iLocal_728 = 1;
				}
				iLocal_731 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_896))
				{
					iLocal_728 = 2;
				}
				iLocal_731 = 0;
				break;
			
			case 0x00000002:
				Function_66(&uLocal_734);
				Function_65(&uLocal_734, &uLocal_738, 4, &iLocal_0 + 1104, 4294967295, 4);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 40, 4294967295, 0x800010a);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 136, 4294967295, 0x800018a);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 72, 4294967295, 131338);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 128, 4294967295, 266);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 176, 4294967295, 4194570);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 256, 4294967295, 8458);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 280, 4294967295, 266);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 344, 4294967295, 0x2000010a);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 376, 4294967295, 266);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 416, 4294967295, 778);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 384, 4294967295, 258);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 440, 4294967295, 16650);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1520, 4294967295, 266);
				Function_64(&iLocal_0 + 2264, 8);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1000, 4294967295, 2314);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1208, 4294967295, 33034);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1304, 4294967295, 4362);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1336, 4294967295, 2314);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1392, 4294967295, 2314);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1904, 4294967295, 65800);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1928, 4294967295, 2314);
				Function_65(&uLocal_734, &uLocal_738, 5, &iLocal_0 + 1232, 4294967295, 0x1000000);
				iLocal_1316 = Function_62(&Local_898, &cLocal_896, "bank01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 40, 0, 0);
				if (iLocal_1316 <= 0 && iLocal_1316 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13164]), 49);
				}
				iLocal_1317 = Function_62(&Local_898, &cLocal_896, "bank01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 40, 0, 0);
				if (iLocal_1317 <= 0 && iLocal_1317 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13174]), 49);
				}
				iLocal_1328 = Function_62(&Local_898, &cLocal_896, "bank01_int", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 2096, 0, 0);
				if (iLocal_1328 <= 0 && iLocal_1328 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13284]), 63);
				}
				iLocal_1329 = Function_62(&Local_898, &cLocal_896, "bank_int", 10, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 136, 0, 0);
				if (iLocal_1329 <= 0 && iLocal_1329 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13294]), 63);
				}
				Function_62(&Local_898, &cLocal_896, "policeStation01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_62(&Local_898, &cLocal_896, "policeStation01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_62(&Local_898, &cLocal_896, "ntheatre01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1520, 0, 0);
				Function_62(&Local_898, &cLocal_896, "ntheatre01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1520, 0, 0);
				Function_62(&Local_898, &cLocal_896, "ntheatre01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1520, 0, 0);
				Function_62(&Local_898, &cLocal_896, "ntheatre01", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1520, 0, 0);
				Function_62(&Local_898, &cLocal_896, "saloon_int", 8, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 384, 0, 1);
				Function_62(&Local_898, &cLocal_896, "saloon_int", 9, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 384, 0, 1);
				Function_62(&Local_898, &cLocal_896, "hotel01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_62(&Local_898, &cLocal_896, "hotel01", 7, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_62(&Local_898, &cLocal_896, "hotel01", 9, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_62(&Local_898, &cLocal_896, "hotel01", 11, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_62(&Local_898, &cLocal_896, "hotel01", 13, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				if (Function_57(45, 0) && !Function_57(46, 0))
				{
					Function_62(&Local_898, &cLocal_896, "hotel01", 1, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 344, 0, 0);
					Function_62(&Local_898, &cLocal_896, "hotel01", 2, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 344, 0, 0);
					Function_62(&Local_898, &cLocal_896, "hotel01", 3, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 344, 0, 0);
					Function_62(&Local_898, &cLocal_896, "hotel01", 8, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 344, 0, 0);
				}
				else
				{
					Function_62(&Local_898, &cLocal_896, "hotel01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 344, 0, 0);
					Function_62(&Local_898, &cLocal_896, "hotel01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 344, 0, 0);
					Function_62(&Local_898, &cLocal_896, "hotel01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 344, 0, 0);
					Function_62(&Local_898, &cLocal_896, "hotel01", 8, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 344, 0, 0);
				}
				iLocal_1318 = Function_62(&Local_898, &cLocal_896, "gunshop", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1304, 0, 0);
				if (iLocal_1318 <= 0 && iLocal_1318 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13184]), 49);
				}
				iLocal_1319 = Function_62(&Local_898, &cLocal_896, "gunshop", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1304, 1, 0);
				if (iLocal_1319 <= 0 && iLocal_1319 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13194]), 49);
				}
				iLocal_1320 = Function_62(&Local_898, &cLocal_896, "Doctor", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 256, 0, 0);
				if (iLocal_1320 <= 0 && iLocal_1320 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13204]), 49);
				}
				iLocal_1321 = Function_62(&Local_898, &cLocal_896, "Doctor", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 256, 1, 0);
				if (iLocal_1321 <= 0 && iLocal_1321 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13214]), 49);
				}
				iLocal_1323 = Function_62(&Local_898, &cLocal_896, "generalStore01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1000, 0, 0);
				if (iLocal_1323 <= 0 && iLocal_1323 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13234]), 49);
				}
				iLocal_1324 = Function_62(&Local_898, &cLocal_896, "generalStore01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1000, 1, 0);
				if (iLocal_1324 <= 0 && iLocal_1324 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13244]), 49);
				}
				iLocal_1325 = Function_62(&Local_898, &cLocal_896, "generalStore01", 4, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1000, 0, 0);
				if (iLocal_1325 <= 0 && iLocal_1325 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13254]), 49);
				}
				iLocal_1326 = Function_62(&Local_898, &cLocal_896, "tailor", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1336, 0, 0);
				if (iLocal_1326 <= 0 && iLocal_1326 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13264]), 49);
				}
				iLocal_1327 = Function_62(&Local_898, &cLocal_896, "tailor", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1336, 1, 0);
				if (iLocal_1327 <= 0 && iLocal_1327 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13274]), 49);
				}
				iLocal_1322 = Function_62(&Local_898, &cLocal_896, "cityHall01", 7, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 128, 0, 0);
				if (iLocal_1322 <= 0 && iLocal_1322 > Local_898)
				{
					Function_61(&(Local_898[iLocal_13224]), 49);
				}
				Function_62(&Local_898, &cLocal_896, "church01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 176, 0, 0);
				Function_62(&Local_898, &cLocal_896, "church01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 176, 0, 0);
				Function_62(&Local_898, &cLocal_896, "church01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 176, 0, 0);
				iLocal_728 = 3;
				iLocal_731 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_729]), 16);
				Function_55("Finished Initializing Blackwater Volumes", 5.0f);
				iLocal_728 = 4;
				iLocal_731 = 0;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_734, &uLocal_738, &uLocal_732, iScriptParam_0);
				Function_12(&Local_898, 1);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_731 = 0;
				break;
		}
		WAIT(iLocal_731);
	}
	Function_4(&uLocal_734, &uLocal_738);
	Function_3(&Local_898);
	Function_2();
	Function_1(&(Global_43791[iLocal_729]), 16);
	Function_55("Unloaded Blackwater Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xB3D / 2877
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xB57 / 2903
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0xB63 / 2915
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0xBC8 / 3016
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0xC25 / 3109
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

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0xD0F / 3343
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

void Function_7() //Position: 0xE8E / 3726
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0xE9A / 3738
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

void Function_9(int iParam0) //Position: 0xEE4 / 3812
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

void Function_10(struct<17> Param0) //Position: 0xF2A / 3882
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0xF47 / 3911
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0xF65 / 3941
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
							if (IS_ACTOR_IN_VOLUME(Function_70(), &Param0[iVar04] + 16))
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
							if (IS_ACTOR_IN_VOLUME(Function_70(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_70(), &Param0[iVar04] + 16))
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

void Function_13(struct<13> Param0) //Position: 0x1386 / 4998
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0x1399 / 5017
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x13B6 / 5046
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0x13C8 / 5064
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

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x1452 / 5202
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

void Function_18(int iParam0) //Position: 0x18AA / 6314
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

float Function_19(int iParam0) //Position: 0x199B / 6555
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x19D8 / 6616
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1A11 / 6673
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

var Function_22(int iParam0) //Position: 0x1A7B / 6779
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1AD3 / 6867
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

void Function_24(bool bParam0) //Position: 0x1CFB / 7419
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

void Function_25(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1D99 / 7577
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

var Function_26() //Position: 0x23D7 / 9175
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x23E0 / 9184
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23F1 / 9201
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

struct<32> Function_29(char* cParam0) //Position: 0x24E8 / 9448
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2503 / 9475
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x256A / 9578
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x257C / 9596
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

int Function_33(int iParam0) //Position: 0x26B0 / 9904
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x26BF / 9919
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2859 / 10329
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

void Function_36(var uParam0, int iParam1) //Position: 0x2A9D / 10909
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x2AAA / 10922
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2AD4 / 10964
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2AF1 / 10993
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

void Function_40() //Position: 0x2DA4 / 11684
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

void Function_41(var uParam0, int iParam1) //Position: 0x2E17 / 11799
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

bool Function_42(bool bParam0) //Position: 0x2E4D / 11853
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

int Function_43(int iParam0) //Position: 0x2EC3 / 11971
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2ED4 / 11988
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

bool Function_45(int iParam0) //Position: 0x2EED / 12013
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2F03 / 12035
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2F18 / 12056
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2F36 / 12086
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

bool Function_49(int iParam0) //Position: 0x2FE5 / 12261
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x2FFB / 12283
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x300E / 12302
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

void Function_52(int iParam0, int iParam1) //Position: 0x3088 / 12424
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x30B1 / 12465
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

bool Function_54(int iParam0) //Position: 0x30D1 / 12497
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x30ED / 12525
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

void Function_56(var uParam0, int iParam1) //Position: 0x312D / 12589
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_57(int iParam0, bool bParam1) //Position: 0x313E / 12606
{
	int iVar0;
	
	iVar0 = Function_59(iParam0);
	if (!Function_58(iVar0))
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

bool Function_58(int iParam0) //Position: 0x317C / 12668
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_59(int iParam0) //Position: 0x3193 / 12691
{
	if (!Function_60(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_60(int iParam0) //Position: 0x31AD / 12717
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_61(vector3 vParam0) //Position: 0x31C3 / 12739
{
	Function_13(&vParam0, 2);
	vParam0.z = bParam1;
	return;
}

var Function_62(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x31D7 / 12759
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_63(&Param0);
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

var Function_63(struct<4>[] Param0) //Position: 0x32CB / 13003
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

void Function_64(var uParam0, bool bParam1) //Position: 0x32FC / 13052
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

void Function_65(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x3368 / 13160
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

void Function_66(struct<5> Param0) //Position: 0x3455 / 13397
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_67(int iParam0, var uParam1, int iParam2) //Position: 0x3466 / 13414
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_68() //Position: 0x3489 / 13449
{
	var uVar0;
	
	Function_69(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Blackwater_layout");
	}
	*(&iLocal_0 + 40) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_bank_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bankv3", 2,802597E-45f, Vector(685,012f, 83,54934f, 1228,977f), Vector(0.0f, 89,4097f, 0.0f), Vector(6,222911f, 10,39784f, 17,46343f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 40, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bankv2", 2,802597E-45f, Vector(683,6581f, 83,69234f, 1234,58f), Vector(0.0f, 89,4097f, 0.0f), Vector(5,997558f, 9,306466f, 14,46865f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 40, &iLocal_0 + 8[1]);
	*(&iLocal_0 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bankv1", 2,802597E-45f, Vector(684,7269f, 83,54934f, 1240,591f), Vector(0.0f, 89,4097f, 0.0f), Vector(6,52847f, 10,39784f, 18,22007f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 40, &iLocal_0 + 8[2]);
	*(&iLocal_0 + 72) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_barn_set");
	*(&iLocal_0 + 48[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "barnv1", 2,802597E-45f, Vector(583,7659f, 87,39951f, 1323,992f), Vector(0.0f, 0.0f, 0.0f), Vector(16,03014f, 4,136538f, 21,79914f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 48[0]);
	*(&iLocal_0 + 48[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "barnv2", 2,802597E-45f, Vector(592,6696f, 86,83189f, 1332,13f), Vector(0.0f, 0.0f, 0.0f), Vector(2,219453f, 3,000689f, 5,909022f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 72, &iLocal_0 + 48[1]);
	*(&iLocal_0 + 128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_CityHall_set");
	*(&iLocal_0 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "citihallv5", 2,802597E-45f, Vector(722,6238f, 81,8769f, 1197,329f), Vector(0.0f, -89,36355f, 0.0f), Vector(14,8676f, 6,211842f, 14,97498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 80[0]);
	*(&iLocal_0 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "citihallv4", 2,802597E-45f, Vector(737,0474f, 83,18286f, 1191,848f), Vector(0.0f, -89,36355f, 0.0f), Vector(27,23439f, 15,03544f, 14,95567f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 80[1]);
	*(&iLocal_0 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "citihallv3", 2,802597E-45f, Vector(751,135f, 81,63156f, 1196,129f), Vector(0.0f, -89,88729f, 0.0f), Vector(17,41735f, 6,904438f, 14,47124f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 80[2]);
	*(&iLocal_0 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "citihallv6", 2,802597E-45f, Vector(736,8271f, 93,56902f, 1203,198f), Vector(0.0f, -89,36355f, 0.0f), Vector(4,317729f, 15,03544f, 4,530272f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 80[3]);
	*(&iLocal_0 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "citihallv7", 2,802597E-45f, Vector(736,9172f, 82,32203f, 1206,504f), Vector(0.0f, -89,88729f, 0.0f), Vector(4,303452f, 7,520874f, 19,10825f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 128, &iLocal_0 + 80[4]);
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_bank_vault", 2,802597E-45f, Vector(679,6162f, 80,76677f, 1227,462f), Vector(0.0f, 89,4097f, 0.0f), Vector(2,239555f, 3,572292f, 5,903275f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_church_set");
	*(&iLocal_0 + 144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "churchv1", 2,802597E-45f, Vector(551,4929f, 95,67864f, 1198,728f), Vector(0.0f, -93,1861f, 0.0f), Vector(3,867709f, 5,662213f, 3,031523f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 144[0]);
	*(&iLocal_0 + 144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "churchv2", 2,802597E-45f, Vector(559,042f, 97,66423f, 1192,044f), Vector(0.0f, 87,16801f, 0.0f), Vector(18,22243f, 8,206848f, 11,36879f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 144[1]);
	*(&iLocal_0 + 144[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "churchv3", 2,802597E-45f, Vector(565,0886f, 100,8047f, 1184,277f), Vector(0.0f, -92,77225f, 0.0f), Vector(4,307622f, 24,27567f, 2,470683f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 176, &iLocal_0 + 144[2]);
	*(&iLocal_0 + 224) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_horses_set");
	*(&iLocal_0 + 184[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_horses_01", 2,802597E-45f, Vector(564,6341f, 89,813f, 1332,026f), Vector(0.0f, 0.0f, 0.0f), Vector(18,50053f, 9,636552f, 21,68812f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 224, &iLocal_0 + 184[0]);
	*(&iLocal_0 + 184[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_corral_02", 2,802597E-45f, Vector(583,8057f, 89,98677f, 1342,031f), Vector(0.0f, 89,67072f, 0.0f), Vector(7,062325f, 10,48575f, 16,73962f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 224, &iLocal_0 + 184[1]);
	*(&iLocal_0 + 184[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_corral_03", 2,802597E-45f, Vector(551,7745f, 90,5736f, 1339,516f), Vector(0.0f, 90,25236f, 0.0f), Vector(9,200944f, 10,58109f, 4,691057f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 224, &iLocal_0 + 184[2]);
	*(&iLocal_0 + 184[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_horses_02", 2,802597E-45f, Vector(551,9444f, 88,43723f, 1324,857f), Vector(0.0f, -89,74209f, 0.0f), Vector(9,18335f, 10,58109f, 4,551872f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 224, &iLocal_0 + 184[3]);
	*(&iLocal_0 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_doctor_set");
	*(&iLocal_0 + 232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "doctor01", 2,802597E-45f, Vector(722,0671f, 78,48743f, 1364,301f), Vector(0.0f, 89,97367f, 0.0f), Vector(6,625236f, 8,511094f, 8,727087f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 232[0]);
	*(&iLocal_0 + 232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "doctor02", 2,802597E-45f, Vector(726,3837f, 80,53288f, 1365,952f), Vector(0.0f, 89,97367f, 0.0f), Vector(1,491828f, 1,899601f, 0,4062393f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 232[1]);
	*(&iLocal_0 + 280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_fbi_set");
	*(&iLocal_0 + 264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "fbiv", 2,802597E-45f, Vector(769,4239f, 82,72511f, 1234,899f), Vector(0.0f, 0.0f, 0.0f), Vector(17,29858f, 9,946985f, 17,77562f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 280, &iLocal_0 + 264[0]);
	*(&iLocal_0 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_gazebo_set");
	*(&iLocal_0 + 288[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gazebov", 4,203895E-45f, Vector(1,912712f, 0,8222067f, -11,30511f), Vector(0.0f, 29,35592f, 0.0f), Vector(6,145772f, 3,393198f, 6,145772f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 288[0]);
	*(&iLocal_0 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_hotel_lobby", 2,802597E-45f, Vector(747,7106f, 79,8069f, 1267,899f), Vector(0.0f, 90,34145f, 0.0f), Vector(12,41521f, 3,927039f, 12,25801f));
	*(&iLocal_0 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_hotel_set");
	*(&iLocal_0 + 320[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hotelv", 2,802597E-45f, Vector(753,863f, 84,51958f, 1267,863f), Vector(0.0f, 90,34145f, 0.0f), Vector(12,45637f, 12,57302f, 18,12087f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 320[0]);
	*(&iLocal_0 + 320[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "hotelv1", 2,802597E-45f, Vector(762,2801f, 87,19563f, 1271,319f), Vector(0.0f, 90,34145f, 0.0f), Vector(10,22215f, 10,31789f, 5,849715f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 320[1]);
	*(&iLocal_0 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_freightplatform", 2,802597E-45f, Vector(667,2385f, 80,99831f, 1332,081f), Vector(0.0f, 0.0f, 0.0f), Vector(28,54802f, 4,387286f, 20,21121f));
	*(&iLocal_0 + 376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_freightStation_set");
	*(&iLocal_0 + 360[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "freightStationv1", 2,802597E-45f, Vector(671,9913f, 80,99831f, 1332,735f), Vector(0.0f, 0.0f, 0.0f), Vector(10,37562f, 4,257046f, 14,01441f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 376, &iLocal_0 + 360[0]);
	*(&iLocal_0 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_players_room", 2,802597E-45f, Vector(713,2771f, 84,66203f, 1322,427f), Vector(0.0f, 90,26811f, 0.0f), Vector(8,244068f, 4,262002f, 8,929452f));
	*(&iLocal_0 + 416) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_saloon_set");
	*(&iLocal_0 + 392[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonv5", 2,802597E-45f, Vector(718,1539f, 83,47411f, 1318,515f), Vector(0.0f, 89,99537f, 0.0f), Vector(16,42857f, 10,38234f, 18,53994f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 416, &iLocal_0 + 392[0]);
	*(&iLocal_0 + 392[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonv6", 2,802597E-45f, Vector(720,5394f, 80,53291f, 1320,628f), Vector(0.0f, 89,99537f, 0.0f), Vector(16,60321f, 4,454592f, 12,34287f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 416, &iLocal_0 + 392[1]);
	*(&iLocal_0 + 440) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_trainStation_set");
	*(&iLocal_0 + 424[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "trainStationv", 2,802597E-45f, Vector(662,8956f, 82,90158f, 1314,376f), Vector(0.0f, 0.0f, 0.0f), Vector(10,1784f, 9,940033f, 16,36202f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 440, &iLocal_0 + 424[0]);
	*(&iLocal_0 + 464) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_theatre_night_set");
	*(&iLocal_0 + 448[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ntheatrev1", 2,802597E-45f, Vector(710,5163f, 82,8928f, 1289,718f), Vector(0.0f, 90,02578f, 0.0f), Vector(20,03429f, 11,01707f, 33,30777f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 464, &iLocal_0 + 448[0]);
	*(&iLocal_0 + 776) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_sidewalk_town_set");
	*(&iLocal_0 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv26", 2,802597E-45f, Vector(750,4879f, 81,27018f, 1235,168f), Vector(0.0f, 0.0f, 0.0f), Vector(14,12516f, 7,551131f, 23,47999f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[0]);
	*(&iLocal_0 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv25", 2,802597E-45f, Vector(780,9568f, 81,08485f, 1299,409f), Vector(0.0f, 0.0f, 0.0f), Vector(3,77752f, 7,551131f, 160,3003f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[1]);
	*(&iLocal_0 + 472[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv24", 2,802597E-45f, Vector(745,0521f, 81,28633f, 1259,639f), Vector(0.0f, 0.0f, 0.0f), Vector(102,865f, 7,551131f, 3,98151f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[2]);
	*(&iLocal_0 + 472[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv23", 2,802597E-45f, Vector(692,7038f, 81,25581f, 1328,674f), Vector(0.0f, 0.0f, 0.0f), Vector(3,886184f, 7,551131f, 142,1541f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[3]);
	*(&iLocal_0 + 472[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv22", 2,802597E-45f, Vector(733,5353f, 81,95405f, 1245,95f), Vector(0.0f, 0.0f, 0.0f), Vector(117,3182f, 7,551131f, 3,935042f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[4]);
	*(&iLocal_0 + 472[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv21", 2,802597E-45f, Vector(692,8892f, 81,24154f, 1256,207f), Vector(0.0f, 0.0f, 0.0f), Vector(3,66921f, 7,551131f, 22,38496f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[5]);
	*(&iLocal_0 + 472[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv20", 2,802597E-45f, Vector(729,8685f, 81,70876f, 1176,64f), Vector(0.0f, 0.0f, 0.0f), Vector(67,70959f, 7,551131f, 3,73394f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[6]);
	*(&iLocal_0 + 472[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv19", 2,802597E-45f, Vector(763,9297f, 81,50655f, 1191,37f), Vector(0.0f, 0.0f, 0.0f), Vector(3,539133f, 7,551131f, 32,30503f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[7]);
	*(&iLocal_0 + 472[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv18", 2,802597E-45f, Vector(732,3339f, 81,43412f, 1212,267f), Vector(0.0f, 0.0f, 0.0f), Vector(67,77905f, 7,551131f, 4,093557f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[8]);
	*(&iLocal_0 + 472[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv17", 2,802597E-45f, Vector(770,7201f, 81,20591f, 1214,631f), Vector(0.0f, 49,24516f, 0.0f), Vector(3,48217f, 7,551131f, 20,62198f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[9]);
	*(&iLocal_0 + 472[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv14", 2,802597E-45f, Vector(738,1655f, 81,36582f, 1330,836f), Vector(0.0f, 0.0f, 0.0f), Vector(91,05147f, 7,551131f, 3,688597f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[10]);
	*(&iLocal_0 + 472[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv12", 2,802597E-45f, Vector(728,9019f, 81,24676f, 1319,37f), Vector(0.0f, 0.0f, 0.0f), Vector(3,529351f, 7,551131f, 146,8364f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[11]);
	*(&iLocal_0 + 472[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv11", 2,802597E-45f, Vector(755,1953f, 81,28096f, 1385,705f), Vector(0.0f, 17,6138f, 0.0f), Vector(55,03497f, 7,551131f, 3,323842f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[12]);
	*(&iLocal_0 + 472[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv9", 2,802597E-45f, Vector(736,9777f, 81,29997f, 1342,492f), Vector(0.0f, 0.0f, 0.0f), Vector(91,653f, 7,551131f, 3,939708f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[13]);
	*(&iLocal_0 + 472[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv5", 2,802597E-45f, Vector(668,9208f, 81,29395f, 1357,18f), Vector(0.0f, 0.0f, 0.0f), Vector(27,62087f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[14]);
	*(&iLocal_0 + 472[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv35", 2,802597E-45f, Vector(710,8467f, 81,76566f, 1396,286f), Vector(0.0f, 7,894397f, 0.0f), Vector(36,66884f, 9,535529f, 3,794664f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[15]);
	*(&iLocal_0 + 472[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv34", 2,802597E-45f, Vector(680,9053f, 81,60557f, 1378,852f), Vector(0.0f, 0,3763108f, 0.0f), Vector(3,448853f, 9,535529f, 46,55386f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[16]);
	*(&iLocal_0 + 472[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "buildingType2_05v", 2,802597E-45f, Vector(811,5858f, 81,57787f, 1242,259f), Vector(0.0f, 0.0f, 0.0f), Vector(6,744418f, 4,187153f, 12,31418f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[17]);
	*(&iLocal_0 + 472[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv47", 2,802597E-45f, Vector(733,548f, 81,82948f, 1216,751f), Vector(0.0f, 0.0f, 0.0f), Vector(69,29767f, 10,45926f, 16,03515f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[18]);
	*(&iLocal_0 + 472[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv45", 2,802597E-45f, Vector(742,9442f, 81,92759f, 1318,057f), Vector(0.0f, 0.0f, 0.0f), Vector(3,819721f, 10,45926f, 144,69f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[19]);
	*(&iLocal_0 + 472[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv41", 2,802597E-45f, Vector(620,8363f, 81,51477f, 1307,774f), Vector(0.0f, -9,045968f, 0.0f), Vector(4,253928f, 10,45926f, 18,01833f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[20]);
	*(&iLocal_0 + 472[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv48", 2,802597E-45f, Vector(673,6802f, 81,24154f, 1234,902f), Vector(0.0f, 0.0f, 0.0f), Vector(3,66921f, 7,551131f, 26,09772f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[21]);
	*(&iLocal_0 + 472[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv49", 2,802597E-45f, Vector(698,0182f, 81,24154f, 1211,328f), Vector(0.0f, 0.0f, 0.0f), Vector(3,66921f, 7,551131f, 70,05096f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[22]);
	*(&iLocal_0 + 472[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv50", 2,802597E-45f, Vector(695,8677f, 81,24154f, 1223,744f), Vector(0.0f, -89,87884f, 0.0f), Vector(3,66921f, 7,551131f, 42,88503f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[23]);
	*(&iLocal_0 + 472[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv51", 2,802597E-45f, Vector(718,6068f, 81,24154f, 1228,93f), Vector(0.0f, 0.0f, 0.0f), Vector(5,448182f, 7,551131f, 36,78898f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[24]);
	*(&iLocal_0 + 472[25]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv52", 2,802597E-45f, Vector(738,7516f, 81,24154f, 1234,945f), Vector(0.0f, -89,87884f, 0.0f), Vector(6,302614f, 7,551131f, 42,88503f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[25]);
	*(&iLocal_0 + 472[26]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv53", 2,802597E-45f, Vector(737,1594f, 81,24154f, 1228,007f), Vector(0.0f, 0,5153338f, 0.0f), Vector(6,302614f, 7,551131f, 34,69927f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[26]);
	*(&iLocal_0 + 472[27]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv54", 2,802597E-45f, Vector(757,8832f, 81,24154f, 1227,821f), Vector(0.0f, 0,5153338f, 0.0f), Vector(4,884216f, 7,551131f, 34,69927f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[27]);
	*(&iLocal_0 + 472[28]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv55", 2,802597E-45f, Vector(768,6282f, 81,24154f, 1223,844f), Vector(0.0f, 0,5153338f, 0.0f), Vector(22,89185f, 7,551131f, 4,622076f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[28]);
	*(&iLocal_0 + 472[29]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv56", 2,802597E-45f, Vector(686,8564f, 81,60557f, 1399,255f), Vector(0.0f, -82,82469f, 0.0f), Vector(3,448853f, 9,535529f, 13,79854f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[29]);
	*(&iLocal_0 + 472[30]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv57", 2,802597E-45f, Vector(686,1123f, 81,29395f, 1342,593f), Vector(0.0f, 0.0f, 0.0f), Vector(13,0501f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[30]);
	*(&iLocal_0 + 472[31]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv58", 2,802597E-45f, Vector(679,214f, 81,29395f, 1306,024f), Vector(0.0f, 89,97923f, 0.0f), Vector(71,48866f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[31]);
	*(&iLocal_0 + 472[32]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv59", 2,802597E-45f, Vector(793,893f, 81,08485f, 1299,553f), Vector(0.0f, 0.0f, 0.0f), Vector(3,77752f, 7,551131f, 143,9355f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[32]);
	*(&iLocal_0 + 472[33]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv60", 2,802597E-45f, Vector(680,0897f, 81,29395f, 1348,524f), Vector(0.0f, -83,23032f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[33]);
	*(&iLocal_0 + 472[34]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv61", 2,802597E-45f, Vector(787,6937f, 81,29395f, 1342,844f), Vector(0.0f, -0,4282522f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[34]);
	*(&iLocal_0 + 472[35]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv62", 2,802597E-45f, Vector(787,7839f, 81,29395f, 1330,775f), Vector(0.0f, -0,4282522f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[35]);
	*(&iLocal_0 + 472[36]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalkv63", 2,802597E-45f, Vector(787,4879f, 81,29395f, 1369,694f), Vector(0.0f, 0,7767695f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 472[36]);
	*(&iLocal_0 + 856) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_sidewalk_docks_set");
	*(&iLocal_0 + 784[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv", 2,802597E-45f, Vector(801,8156f, 81,60444f, 1247,176f), Vector(0.0f, 0.0f, 0.0f), Vector(11,76809f, 4,313719f, 40,32629f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[0]);
	*(&iLocal_0 + 784[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv7", 2,802597E-45f, Vector(824,2244f, 80,79265f, 1250,541f), Vector(0.0f, 0.0f, 0,229665f), Vector(22,26314f, 4,313719f, 3,967483f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[1]);
	*(&iLocal_0 + 784[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv6", 2,802597E-45f, Vector(849,8587f, 80,74489f, 1241,462f), Vector(0.0f, 0.0f, 0.0f), Vector(18,6001f, 4,882585f, 13,70244f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[2]);
	*(&iLocal_0 + 784[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv5", 2,802597E-45f, Vector(840,6787f, 80,57874f, 1250,424f), Vector(0.0f, 0.0f, 0.0f), Vector(14,89873f, 4,313719f, 3,970972f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[3]);
	*(&iLocal_0 + 784[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv4", 2,802597E-45f, Vector(811,5286f, 81,68847f, 1230,949f), Vector(0.0f, 0.0f, 0.0f), Vector(7,570256f, 4,313719f, 8,017331f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[4]);
	*(&iLocal_0 + 784[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv2", 2,802597E-45f, Vector(811,6128f, 81,6553f, 1258,082f), Vector(0.0f, 0.0f, 0.0f), Vector(7,879981f, 4,569567f, 18,17561f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[5]);
	*(&iLocal_0 + 784[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv1", 2,802597E-45f, Vector(789,1606f, 80,32297f, 1247,867f), Vector(0.0f, 66,50256f, 0.0f), Vector(3,87126f, 4,781995f, 19,64315f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[6]);
	*(&iLocal_0 + 784[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_docksv8", 2,802597E-45f, Vector(788,6102f, 80,32297f, 1255,243f), Vector(0.0f, 123,2449f, 0.0f), Vector(3,87126f, 4,781995f, 19,64315f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 856, &iLocal_0 + 784[7]);
	*(&iLocal_0 + 880) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_sidewalk_factory_set");
	*(&iLocal_0 + 864[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_factoryv10", 2,802597E-45f, Vector(803,7894f, 79,94149f, 1287,728f), Vector(0.0f, 0.0f, 0.0f), Vector(22,90565f, 6,452754f, 35,84712f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 880, &iLocal_0 + 864[0]);
	*(&iLocal_0 + 944) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_sidewalk_slums_set");
	*(&iLocal_0 + 888[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_slumsv7", 2,802597E-45f, Vector(691,486f, 80,66692f, 1413,543f), Vector(0.0f, 5,287261f, 0.0f), Vector(49,20615f, 6,201427f, 4,651156f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 888[0]);
	*(&iLocal_0 + 888[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_slumsv6", 2,802597E-45f, Vector(725,566f, 79,8988f, 1411,999f), Vector(0.0f, 0.0f, 0.0f), Vector(3,0684f, 3,641126f, 9,026872f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 888[1]);
	*(&iLocal_0 + 888[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_slumsv5", 2,802597E-45f, Vector(740,1075f, 80,09385f, 1409,544f), Vector(0.0f, 12,88769f, 0.0f), Vector(2,821099f, 3,641126f, 9,026872f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 888[2]);
	*(&iLocal_0 + 888[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_slumsv4", 2,802597E-45f, Vector(701,2999f, 79,80818f, 1416,071f), Vector(3,333661f, 8,713227f, 1,905108f), Vector(2,856709f, 3,641126f, 9,026872f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 888[3]);
	*(&iLocal_0 + 888[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_slumsv8", 2,802597E-45f, Vector(726,8785f, 80,66692f, 1407,953f), Vector(0.0f, 12,1173f, 0.0f), Vector(44,34429f, 6,201427f, 4,651156f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 888[4]);
	*(&iLocal_0 + 888[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sidewalk_slumsv9", 2,802597E-45f, Vector(747,494f, 80,66692f, 1404,957f), Vector(0.0f, -1,049141f, 0.0f), Vector(20,80766f, 6,201427f, 4,651156f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 944, &iLocal_0 + 888[5]);
	*(&iLocal_0 + 1000) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_generalStore_set");
	*(&iLocal_0 + 952[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalStore01", 2,802597E-45f, Vector(752,1057f, 81,05639f, 1324,732f), Vector(0.0f, 89,69951f, 0.0f), Vector(7,748487f, 9,967118f, 14,89945f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1000, &iLocal_0 + 952[0]);
	*(&iLocal_0 + 952[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalStore02", 2,802597E-45f, Vector(744,6249f, 80,97297f, 1326,655f), Vector(0.0f, 89,69951f, 0.0f), Vector(2,733183f, 3,125529f, 0,266786f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1000, &iLocal_0 + 952[1]);
	*(&iLocal_0 + 952[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalStore03", 2,802597E-45f, Vector(744,6462f, 80,78548f, 1321,654f), Vector(0.0f, 89,69951f, 0.0f), Vector(1,475612f, 2,799786f, 0,266786f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1000, &iLocal_0 + 952[2]);
	*(&iLocal_0 + 952[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalStore04", 2,802597E-45f, Vector(744,6462f, 84,21018f, 1324,754f), Vector(0.0f, 89,69951f, 0.0f), Vector(6,162752f, 2,799786f, 0,266786f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1000, &iLocal_0 + 952[3]);
	*(&iLocal_0 + 952[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalStore05", 2,802597E-45f, Vector(759,4865f, 84,21018f, 1324,754f), Vector(0.0f, 89,69951f, 0.0f), Vector(6,162752f, 2,799786f, 0,266786f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1000, &iLocal_0 + 952[4]);
	*(&iLocal_0 + 1096) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_chickens_set");
	*(&iLocal_0 + 1008[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_01", 4,203895E-45f, Vector(686,1976f, 78,66609f, 1407,96f), Vector(0.0f, 20.0f, 0.0f), Vector(12,24074f, 2,373551f, 7,110972f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[0]);
	*(&iLocal_0 + 1008[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_04", 4,203895E-45f, Vector(723,7992f, 79,21547f, 1406,722f), Vector(0.0f, 20.0f, 0.0f), Vector(5,382097f, 2,373551f, 12,52998f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[1]);
	*(&iLocal_0 + 1008[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_05", 4,203895E-45f, Vector(759,9604f, 80,61206f, 1398,355f), Vector(0.0f, 20.0f, 0.0f), Vector(9,728006f, 7,554129f, 10,97731f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[2]);
	*(&iLocal_0 + 1008[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_06", 4,203895E-45f, Vector(610,2097f, 82,25611f, 1387,927f), Vector(0.0f, 20.0f, 0.0f), Vector(8,222707f, 2,945255f, 7,335667f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[3]);
	*(&iLocal_0 + 1008[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_07", 4,203895E-45f, Vector(626,1485f, 78,32873f, 1322,996f), Vector(0.0f, 20.0f, 0.0f), Vector(7,736145f, 6,382028f, 7,753692f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[4]);
	*(&iLocal_0 + 1008[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_08", 4,203895E-45f, Vector(786,9255f, 90,19512f, 1463,252f), Vector(0.0f, 20.0f, 0.0f), Vector(7,34227f, 6,057096f, 7,358923f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[5]);
	*(&iLocal_0 + 1008[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_011", 4,203895E-45f, Vector(748,0132f, 97,10381f, 1491,719f), Vector(0.0f, 20.0f, 0.0f), Vector(13,01253f, 10,73485f, 13,04205f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[6]);
	*(&iLocal_0 + 1008[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_012", 4,203895E-45f, Vector(668,6265f, 81,21601f, 1428,278f), Vector(0.0f, -0,2059064f, 0.0f), Vector(9,259408f, 3,272786f, 5,616179f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[7]);
	*(&iLocal_0 + 1008[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_014", 4,203895E-45f, Vector(613,212f, 80,80667f, 1358,605f), Vector(0.0f, 20.0f, 0.0f), Vector(9,036664f, 7,454906f, 9,05716f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[8]);
	*(&iLocal_0 + 1008[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_chickens_015", 4,203895E-45f, Vector(804,0789f, 82,39201f, 1403,271f), Vector(0.0f, 20.0f, 0.0f), Vector(7,34227f, 6,057096f, 7,358923f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1008[9]);
	*(&iLocal_0 + 1104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_region", 4,203895E-45f, Vector(707,485f, 86,24601f, 1307,235f), Vector(0.0f, 0.0f, 0.0f), Vector(212,9846f, 26,39366f, 221,8356f));
	*(&iLocal_0 + 1200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_birds_set");
	*(&iLocal_0 + 1112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv10", 4,203895E-45f, Vector(824,3123f, 81,89945f, 1365,872f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[0]);
	*(&iLocal_0 + 1112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv9", 4,203895E-45f, Vector(784,3028f, 81,89945f, 1437,775f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[1]);
	*(&iLocal_0 + 1112[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv8", 4,203895E-45f, Vector(806,499f, 85,4902f, 1288,864f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[2]);
	*(&iLocal_0 + 1112[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv7", 4,203895E-45f, Vector(779,4973f, 86,19636f, 1243,967f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[3]);
	*(&iLocal_0 + 1112[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv6", 4,203895E-45f, Vector(747,2687f, 81,89945f, 1364,051f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[4]);
	*(&iLocal_0 + 1112[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv5", 4,203895E-45f, Vector(685,1721f, 81,89945f, 1429,138f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[5]);
	*(&iLocal_0 + 1112[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv4", 4,203895E-45f, Vector(702,5702f, 81,89945f, 1288,937f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[6]);
	*(&iLocal_0 + 1112[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv3", 4,203895E-45f, Vector(712,5511f, 81,89945f, 1205,071f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[7]);
	*(&iLocal_0 + 1112[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv2", 4,203895E-45f, Vector(647,5953f, 81,89945f, 1338,431f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[8]);
	*(&iLocal_0 + 1112[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdsv1", 4,203895E-45f, Vector(616,8579f, 81,89945f, 1244,28f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1200, &iLocal_0 + 1112[9]);
	*(&iLocal_0 + 1208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nblkv_jail", 2,802597E-45f, Vector(771,7086f, 80,92284f, 1241,441f), Vector(0.0f, -90,42757f, 0.0f), Vector(3,554834f, 3,100976f, 11,28596f));
	*(&iLocal_0 + 1232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_cows_set");
	*(&iLocal_0 + 1216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "cowv01", 4,203895E-45f, Vector(561,9985f, 86,29778f, 1309,302f), Vector(0.0f, 20.0f, 0.0f), Vector(11,56515f, 5,799623f, 9,141501f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1232, &iLocal_0 + 1216[0]);
	*(&iLocal_0 + 1264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_pigs_set");
	*(&iLocal_0 + 1240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "pigv1", 2,802597E-45f, Vector(805,6634f, 83,80357f, 1404,162f), Vector(0.0f, 0.0f, 0.0f), Vector(13,86579f, 4,348662f, 11,61409f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1264, &iLocal_0 + 1240[0]);
	*(&iLocal_0 + 1240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "pigv2", 2,802597E-45f, Vector(792,6331f, 87,97289f, 1452,428f), Vector(0.0f, -5,696201f, 0.0f), Vector(12,54771f, 8,287045f, 15,19059f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1264, &iLocal_0 + 1240[1]);
	*(&iLocal_0 + 1304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_gunShop_set");
	*(&iLocal_0 + 1272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_gunshop_01", 2,802597E-45f, Vector(774,1391f, 79,00788f, 1318,239f), Vector(0.0f, 269,8509f, 0.0f), Vector(6,0513f, 5,570204f, 8,86475f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1304, &iLocal_0 + 1272[0]);
	*(&iLocal_0 + 1272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_gunshop_02", 2,802597E-45f, Vector(778,6971f, 80,185f, 1319,976f), Vector(0.0f, 269,8509f, 0.0f), Vector(1,996747f, 1,919043f, 0,2349873f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1304, &iLocal_0 + 1272[1]);
	*(&iLocal_0 + 1272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_gunshop_03", 2,802597E-45f, Vector(778,681f, 80,185f, 1316,416f), Vector(0.0f, 269,8509f, 0.0f), Vector(1,996747f, 1,919043f, 0,2349873f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1304, &iLocal_0 + 1272[2]);
	*(&iLocal_0 + 1336) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_tailor_set");
	*(&iLocal_0 + 1312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_tailor_01", 2,802597E-45f, Vector(772,2798f, 79,91953f, 1293,268f), Vector(0.0f, 269,8509f, 0.0f), Vector(6,553066f, 6,51972f, 12,21916f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1336, &iLocal_0 + 1312[0]);
	*(&iLocal_0 + 1312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_tailor_02", 2,802597E-45f, Vector(778,5352f, 80,04887f, 1294,266f), Vector(0.0f, 269,8509f, 0.0f), Vector(3,566595f, 2,45683f, 0,421526f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1336, &iLocal_0 + 1312[1]);
	*(&iLocal_0 + 1344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_corral", 2,802597E-45f, Vector(562,2942f, 86,87167f, 1332,205f), Vector(0.0f, 0.0f, 0.0f), Vector(26,4426f, 20,61478f, 24,10768f));
	*(&iLocal_0 + 1368) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_train_platform_set");
	*(&iLocal_0 + 1352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_train_platform1", 2,802597E-45f, Vector(662,3517f, 81,52242f, 1302,591f), Vector(0.0f, 0.0f, 0.0f), Vector(17,46338f, 8,051627f, 42,10011f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1368, &iLocal_0 + 1352[0]);
	*(&iLocal_0 + 1392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_anthro_set");
	*(&iLocal_0 + 1376[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_anthro_01", 2,802597E-45f, Vector(752,3961f, 82,25603f, 1278,439f), Vector(0.0f, 0.0f, 0.0f), Vector(15,83952f, 9,6679f, 8,930294f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1392, &iLocal_0 + 1376[0]);
	*(&iLocal_0 + 1416) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_construction_C_set");
	*(&iLocal_0 + 1400[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "construction_C_01", 2,802597E-45f, Vector(723,2885f, 82,33974f, 1221,455f), Vector(0.0f, 0.0f, 0.0f), Vector(14,26601f, 7,143672f, 7,612081f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1416, &iLocal_0 + 1400[0]);
	*(&iLocal_0 + 1472) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_dog_set");
	*(&iLocal_0 + 1424[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogv", 4,203895E-45f, Vector(601,3074f, 78,30591f, 1288,111f), Vector(0.0f, -4,385f, 0.0f), Vector(57,46009f, 40,83388f, 99,76994f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1472, &iLocal_0 + 1424[0]);
	*(&iLocal_0 + 1424[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogv5", 2,802597E-45f, Vector(767,9095f, 77,91833f, 1324,901f), Vector(0.0f, 0.0f, 0.0f), Vector(78,61015f, 5,613335f, 153,3716f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1472, &iLocal_0 + 1424[1]);
	*(&iLocal_0 + 1424[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogv6", 2,802597E-45f, Vector(706,5726f, 75,77726f, 1363,489f), Vector(0.0f, 0.0f, 0.0f), Vector(47,38691f, 10,65252f, 68,62831f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1472, &iLocal_0 + 1424[2]);
	*(&iLocal_0 + 1424[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogv8", 4,203895E-45f, Vector(742,5462f, 78,30591f, 1424,712f), Vector(0.0f, 8,458379f, 0.0f), Vector(69,62122f, 40,83388f, 35,96353f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1472, &iLocal_0 + 1424[3]);
	*(&iLocal_0 + 1424[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogv9", 4,203895E-45f, Vector(749,7135f, 78,30591f, 1475,305f), Vector(0.0f, 35,8815f, 0.0f), Vector(69,62122f, 40,83388f, 35,96353f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1472, &iLocal_0 + 1424[4]);
	*(&iLocal_0 + 1496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_saloon_lobby_set");
	*(&iLocal_0 + 1480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonv_lobby", 2,802597E-45f, Vector(720,5389f, 80,55681f, 1319,615f), Vector(0.0f, 89,99537f, 0.0f), Vector(17,62081f, 4,280502f, 11,8605f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1496, &iLocal_0 + 1480[0]);
	*(&iLocal_0 + 1520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_theatre_set");
	*(&iLocal_0 + 1504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ntheatrev6", 2,802597E-45f, Vector(710,5497f, 82,57385f, 1289,718f), Vector(0.0f, 90,02578f, 0.0f), Vector(20,59159f, 8,113025f, 33,23232f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1520, &iLocal_0 + 1504[0]);
	*(&iLocal_0 + 1560) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_null_set");
	*(&iLocal_0 + 1528[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "null_01", 2,802597E-45f, Vector(659,7327f, 80,66309f, 1314,168f), Vector(0.0f, 0.0f, 0.0f), Vector(3,981915f, 5,151976f, 5,252973f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1560, &iLocal_0 + 1528[0]);
	*(&iLocal_0 + 1528[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "null_02", 2,802597E-45f, Vector(811,4948f, 80,66309f, 1242,025f), Vector(0.0f, 0.0f, 0.0f), Vector(7,153082f, 8,437317f, 12,81722f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1560, &iLocal_0 + 1528[1]);
	*(&iLocal_0 + 1528[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "null_03", 2,802597E-45f, Vector(755,9504f, 79,58879f, 1265,108f), Vector(0.0f, 0.0f, 0.0f), Vector(3,358343f, 3,961287f, 6,017633f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1560, &iLocal_0 + 1528[2]);
	*(&iLocal_0 + 1904) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_generic_set");
	*(&iLocal_0 + 1568[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_01", 2,802597E-45f, Vector(719,0051f, 80,66309f, 1270,237f), Vector(0.0f, 0.0f, 0.0f), Vector(16,3107f, 11,35147f, 17,84992f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[0]);
	*(&iLocal_0 + 1568[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_02", 2,802597E-45f, Vector(755,9504f, 79,58879f, 1265,108f), Vector(0.0f, 0.0f, 0.0f), Vector(3,358343f, 3,961287f, 6,017633f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[1]);
	*(&iLocal_0 + 1568[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_34", 2,802597E-45f, Vector(701,2072f, 80,66309f, 1269f), Vector(0.0f, 0.0f, 0.0f), Vector(14,14371f, 9,843351f, 14,39592f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[2]);
	*(&iLocal_0 + 1568[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_45", 2,802597E-45f, Vector(698,8359f, 80,66309f, 1308,067f), Vector(0.0f, 0.0f, 0.0f), Vector(9,473412f, 6,593044f, 7,940928f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[3]);
	*(&iLocal_0 + 1568[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_48", 2,802597E-45f, Vector(719,137f, 80,66309f, 1306,026f), Vector(0.0f, 0.0f, 0.0f), Vector(16,57833f, 7,39364f, 8,905197f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[4]);
	*(&iLocal_0 + 1568[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_50", 2,802597E-45f, Vector(697,9652f, 80,66309f, 1347,683f), Vector(0.0f, 0.0f, 0.0f), Vector(7,576689f, 6,057273f, 6,696494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[5]);
	*(&iLocal_0 + 1568[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_51", 2,802597E-45f, Vector(720,0439f, 80,66309f, 1351,682f), Vector(0.0f, 0.0f, 0.0f), Vector(17,60391f, 12,34337f, 18,48228f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[6]);
	*(&iLocal_0 + 1568[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_03", 2,802597E-45f, Vector(710,5839f, 80,66309f, 1347,578f), Vector(0.0f, 0.0f, 0.0f), Vector(3,137462f, 6,98278f, 10,45563f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[7]);
	*(&iLocal_0 + 1568[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_04", 2,802597E-45f, Vector(701,4631f, 80,66309f, 1368,878f), Vector(0.0f, 0.0f, 0.0f), Vector(13,93133f, 6,98278f, 16,21684f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[8]);
	*(&iLocal_0 + 1568[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_05", 2,802597E-45f, Vector(721,9731f, 80,66309f, 1371,314f), Vector(0.0f, 0.0f, 0.0f), Vector(9,571938f, 6,98278f, 7,319722f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[9]);
	*(&iLocal_0 + 1568[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_06", 2,802597E-45f, Vector(672,6883f, 80,66309f, 1372,518f), Vector(0.0f, 0.0f, 0.0f), Vector(12,69705f, 10,3425f, 7,957937f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[10]);
	*(&iLocal_0 + 1568[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_07", 2,802597E-45f, Vector(671,2278f, 80,66309f, 1363,645f), Vector(0.0f, 0.0f, 0.0f), Vector(15,72239f, 6,678134f, 8,588763f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[11]);
	*(&iLocal_0 + 1568[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_08", 2,802597E-45f, Vector(676,0389f, 80,66309f, 1383,852f), Vector(0.0f, 0.0f, 0.0f), Vector(9,710629f, 6,678134f, 7,967698f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[12]);
	*(&iLocal_0 + 1568[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_10", 2,802597E-45f, Vector(628,5198f, 81,94388f, 1374,903f), Vector(0.0f, -4,579623f, 0.0f), Vector(8,048456f, 8,836883f, 13,46529f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[13]);
	*(&iLocal_0 + 1568[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_12", 2,802597E-45f, Vector(601,7166f, 87,01135f, 1374,708f), Vector(0.0f, 27,75126f, 0.0f), Vector(6,865475f, 5,819565f, 8,556458f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[14]);
	*(&iLocal_0 + 1568[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_13", 2,802597E-45f, Vector(623,0494f, 81,94388f, 1338,679f), Vector(0.0f, -0,4369935f, 0.0f), Vector(7,044266f, 8,836883f, 10,06581f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[15]);
	*(&iLocal_0 + 1568[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_14", 2,802597E-45f, Vector(604,4156f, 91,24645f, 1275,856f), Vector(0.0f, -15,9371f, 0.0f), Vector(7,923491f, 14,77712f, 17,17298f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[16]);
	*(&iLocal_0 + 1568[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_15", 2,802597E-45f, Vector(564,4659f, 92,57674f, 1254,814f), Vector(0.0f, -42,71138f, 0.0f), Vector(12,70037f, 14,77712f, 17,17298f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[17]);
	*(&iLocal_0 + 1568[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_16", 2,802597E-45f, Vector(605,0024f, 92,57674f, 1224,546f), Vector(0.0f, -48,25452f, 0.0f), Vector(17,11747f, 14,77712f, 17,17298f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[18]);
	*(&iLocal_0 + 1568[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_17", 2,802597E-45f, Vector(660,7715f, 83,26146f, 1419,815f), Vector(0.0f, 0.0f, 0.0f), Vector(7,472981f, 8,806527f, 9,360711f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[19]);
	*(&iLocal_0 + 1568[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_19", 2,802597E-45f, Vector(711,1942f, 81,13219f, 1414,713f), Vector(0.0f, 12,64984f, 0.0f), Vector(15,38927f, 6,084082f, 9,799738f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[20]);
	*(&iLocal_0 + 1568[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_21", 2,802597E-45f, Vector(734,6071f, 81,13219f, 1413,205f), Vector(0.0f, 12,64984f, 0.0f), Vector(7,565314f, 8,376842f, 12,72061f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[21]);
	*(&iLocal_0 + 1568[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_22", 2,802597E-45f, Vector(750,4719f, 81,61691f, 1409,201f), Vector(0.0f, -0,7728498f, 0.0f), Vector(7,565314f, 7,660175f, 10,20408f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[22]);
	*(&iLocal_0 + 1568[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_23", 2,802597E-45f, Vector(788,2316f, 88,30206f, 1412,882f), Vector(0.0f, 11,76387f, 0.0f), Vector(16,85998f, 14,10618f, 16,55526f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[23]);
	*(&iLocal_0 + 1568[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_24", 2,802597E-45f, Vector(777,0667f, 94,1466f, 1449,045f), Vector(0.0f, -4,202371f, 0.0f), Vector(14,75591f, 14,10618f, 11,96048f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[24]);
	*(&iLocal_0 + 1568[25]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_25", 2,802597E-45f, Vector(744,9584f, 91,7512f, 1444,467f), Vector(0.0f, 9,579886f, 0.0f), Vector(12,48155f, 11,93197f, 10,11699f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[25]);
	*(&iLocal_0 + 1568[26]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_26", 2,802597E-45f, Vector(724,3195f, 102,9277f, 1499,536f), Vector(0.0f, -10,94988f, 0.0f), Vector(17,59094f, 16,1011f, 13,65195f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[26]);
	*(&iLocal_0 + 1568[27]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_27", 2,802597E-45f, Vector(753,1341f, 82,14568f, 1350,611f), Vector(0.0f, -0,1161031f, 0.0f), Vector(18,73808f, 16,1011f, 12,90974f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[27]);
	*(&iLocal_0 + 1568[28]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_28", 2,802597E-45f, Vector(749,0399f, 82,33894f, 1361,032f), Vector(0.0f, -0,1161031f, 0.0f), Vector(10,38853f, 9,475595f, 7,964375f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[28]);
	*(&iLocal_0 + 1568[29]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_31", 2,802597E-45f, Vector(748,0307f, 80,16731f, 1379,677f), Vector(0.0f, -0,1161031f, 0.0f), Vector(8,000346f, 9,813577f, 6,846375f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[29]);
	*(&iLocal_0 + 1568[30]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_33", 2,802597E-45f, Vector(771,7179f, 80,16731f, 1355,466f), Vector(0.0f, -0,1161031f, 0.0f), Vector(14,04748f, 9,813577f, 16,73632f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[30]);
	*(&iLocal_0 + 1568[31]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_35", 2,802597E-45f, Vector(772,0789f, 80,16731f, 1325,204f), Vector(0.0f, -0,1161031f, 0.0f), Vector(14,04748f, 9,813577f, 8,008526f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[31]);
	*(&iLocal_0 + 1568[32]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_36", 2,802597E-45f, Vector(752,0589f, 80,16731f, 1313,919f), Vector(0.0f, -0,1161031f, 0.0f), Vector(15,86565f, 9,813577f, 8,332936f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[32]);
	*(&iLocal_0 + 1568[33]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_37", 2,802597E-45f, Vector(770,6945f, 82,4274f, 1309,134f), Vector(0.0f, -0,1161031f, 0.0f), Vector(16,29833f, 11,38274f, 11,03976f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[33]);
	*(&iLocal_0 + 1568[34]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_38", 2,802597E-45f, Vector(773,9312f, 80,71098f, 1300,629f), Vector(0.0f, -0,1161031f, 0.0f), Vector(10,34967f, 7,653213f, 7,422611f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[34]);
	*(&iLocal_0 + 1568[35]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_39", 2,802597E-45f, Vector(772,0616f, 80,71098f, 1285,607f), Vector(0.0f, -0,1161031f, 0.0f), Vector(13,70134f, 7,653213f, 7,422611f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[35]);
	*(&iLocal_0 + 1568[36]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_40", 2,802597E-45f, Vector(773,6594f, 80,71098f, 1278,626f), Vector(0.0f, -0,1161031f, 0.0f), Vector(10,09816f, 7,653213f, 7,422611f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[36]);
	*(&iLocal_0 + 1568[37]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_41", 2,802597E-45f, Vector(774,08f, 80,71098f, 1265,002f), Vector(0.0f, -0,1161031f, 0.0f), Vector(9,721198f, 7,653213f, 6,597037f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[37]);
	*(&iLocal_0 + 1568[38]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_42", 2,802597E-45f, Vector(751,1092f, 83,37032f, 1286,902f), Vector(0.0f, -0,1161031f, 0.0f), Vector(17,9842f, 9,982813f, 8,605144f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[38]);
	*(&iLocal_0 + 1568[39]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_43", 2,802597E-45f, Vector(752,6476f, 83,37032f, 1295,584f), Vector(0.0f, -0,1161031f, 0.0f), Vector(15,91635f, 10,47344f, 9,028062f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[39]);
	*(&iLocal_0 + 1568[40]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_44", 2,802597E-45f, Vector(749,8453f, 83,37032f, 1303,44f), Vector(0.0f, -0,1161031f, 0.0f), Vector(16,16646f, 10,47344f, 8,201642f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1904, &iLocal_0 + 1568[40]);
	*(&iLocal_0 + 1928) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_blacksmith_set");
	*(&iLocal_0 + 1912[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generic_09", 2,802597E-45f, Vector(674,5723f, 80,66309f, 1394,737f), Vector(0.0f, 2,457322f, 0.0f), Vector(12,694f, 6,678134f, 9,48127f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1928, &iLocal_0 + 1912[0]);
	*(&iLocal_0 + 1960) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_seagulls_set");
	*(&iLocal_0 + 1936[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gulls1", 4,203895E-45f, Vector(851,8363f, 81,89945f, 1296,511f), Vector(0.0f, 0,3603036f, 0.0f), Vector(85,74756f, 41,01292f, 128,9268f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1960, &iLocal_0 + 1936[0]);
	*(&iLocal_0 + 1936[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "gulls2", 4,203895E-45f, Vector(836,9991f, 81,89945f, 1179,526f), Vector(0.0f, 34,21489f, 0.0f), Vector(84,42347f, 38,58218f, 101,1785f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1960, &iLocal_0 + 1936[1]);
	*(&iLocal_0 + 1968) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_blackjack", 2,802597E-45f, Vector(718,5128f, 79,25579f, 1312,409f), Vector(0.0f, 0,4749511f, 0.0f), Vector(4,148842f, 4,148842f, 4,148842f));
	*(&iLocal_0 + 1976) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_poker", 2,802597E-45f, Vector(717,2479f, 79,2292f, 1325,739f), Vector(0.0f, -0,2920592f, 0.0f), Vector(4,792871f, 4,792871f, 4,792871f));
	*(&iLocal_0 + 2016) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_barnyard_set");
	*(&iLocal_0 + 1984[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_barnyard_02", 2,802597E-45f, Vector(560,8457f, 87,39951f, 1322,146f), Vector(0.0f, 0.0f, 0.0f), Vector(27,94673f, 13,51856f, 51,41708f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2016, &iLocal_0 + 1984[0]);
	*(&iLocal_0 + 1984[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_barnyard_03", 2,802597E-45f, Vector(584,4229f, 86,83189f, 1341,847f), Vector(0.0f, 0.0f, 0.0f), Vector(20,67807f, 12,44218f, 12,26767f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2016, &iLocal_0 + 1984[1]);
	*(&iLocal_0 + 1984[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_barnyard_01", 2,802597E-45f, Vector(584,4229f, 86,83189f, 1304,895f), Vector(0.0f, 0.0f, 0.0f), Vector(20,67807f, 11,59534f, 15,81178f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2016, &iLocal_0 + 1984[2]);
	*(&iLocal_0 + 2040) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_fbi_int_set");
	*(&iLocal_0 + 2024[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "fbiv02", 2,802597E-45f, Vector(766,2209f, 82,72511f, 1235,356f), Vector(0.0f, 0.0f, 0.0f), Vector(24,55437f, 9,946985f, 7,307757f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2040, &iLocal_0 + 2024[0]);
	*(&iLocal_0 + 2080) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_bank_int_set");
	*(&iLocal_0 + 2048[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bankv4", 2,802597E-45f, Vector(687,6222f, 80,49551f, 1234,989f), Vector(0.0f, 89,4097f, 0.0f), Vector(16,99455f, 5,574651f, 5,091676f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2080, &iLocal_0 + 2048[0]);
	*(&iLocal_0 + 2048[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bankv5", 2,802597E-45f, Vector(690,2325f, 80,49551f, 1228,89f), Vector(0.0f, 89,4097f, 0.0f), Vector(5,077168f, 5,574651f, 5,091676f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2080, &iLocal_0 + 2048[1]);
	*(&iLocal_0 + 2048[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bankv6", 2,802597E-45f, Vector(690,5524f, 80,49551f, 1240,817f), Vector(0.0f, 89,4097f, 0.0f), Vector(5,077168f, 5,574651f, 5,091676f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2080, &iLocal_0 + 2048[2]);
	*(&iLocal_0 + 2088) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_poker_H", 2,802597E-45f, Vector(748,9402f, 83,85324f, 1267,118f), Vector(0.0f, 90,34145f, 0.0f), Vector(4,798298f, 3,587841f, 4,73581f));
	*(&iLocal_0 + 2096) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_bank_back", 2,802597E-45f, Vector(680,8967f, 82,37836f, 1241,004f), Vector(0.0f, 0.0f, 0.0f), Vector(7,126543f, 6,574588f, 4,640002f));
	*(&iLocal_0 + 2224) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "blkv_streetSpawn_set");
	*(&iLocal_0 + 2104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetSpawn01", 2,802597E-45f, Vector(771,7525f, 78,30585f, 1194,439f), Vector(0.0f, 0.0f, 0.0f), Vector(61,83163f, 36,25699f, 105,7322f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[0]);
	*(&iLocal_0 + 2104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_1", 2,802597E-45f, Vector(698,3498f, 78,30585f, 1171,227f), Vector(0.0f, 0.0f, 0.0f), Vector(92,81285f, 34,24347f, 77,73894f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[1]);
	*(&iLocal_0 + 2104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_2", 2,802597E-45f, Vector(736,7742f, 78,27515f, 1294,559f), Vector(0.0f, 0.0f, 0.0f), Vector(21,78906f, 34,24347f, 71,52024f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[2]);
	*(&iLocal_0 + 2104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_4", 2,802597E-45f, Vector(788,5724f, 78,30589f, 1294,576f), Vector(0.0f, 0.0f, 0.0f), Vector(18,26107f, 34,24347f, 76,04086f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[3]);
	*(&iLocal_0 + 2104[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_5", 2,802597E-45f, Vector(747,422f, 78,30585f, 1365,236f), Vector(0.0f, 0.0f, 0.0f), Vector(104,6321f, 34,54143f, 42,17798f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[4]);
	*(&iLocal_0 + 2104[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_6", 2,802597E-45f, Vector(685,4605f, 78,18396f, 1301,025f), Vector(0.0f, 0.0f, 0.0f), Vector(14,67729f, 34,24347f, 62,36569f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[5]);
	*(&iLocal_0 + 2104[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_7", 2,802597E-45f, Vector(686,7188f, 78,30585f, 1376,857f), Vector(0.0f, 0.0f, 0.0f), Vector(19,91489f, 34,24347f, 37,09056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[6]);
	*(&iLocal_0 + 2104[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_8", 2,802597E-45f, Vector(686,7984f, 78,30585f, 1344,384f), Vector(0.0f, 0.0f, 0.0f), Vector(20,20308f, 34,24347f, 7,430287f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[7]);
	*(&iLocal_0 + 2104[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_9", 2,802597E-45f, Vector(713,035f, 78,31379f, 1336,31f), Vector(0.0f, 0.0f, 0.0f), Vector(32,85799f, 34,24347f, 19,50919f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[8]);
	*(&iLocal_0 + 2104[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_10", 2,802597E-45f, Vector(761,3331f, 78,30588f, 1335,632f), Vector(0.0f, 0.0f, 0.0f), Vector(37,99918f, 34,24347f, 17,38168f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[9]);
	*(&iLocal_0 + 2104[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_11", 2,802597E-45f, Vector(711,4492f, 78,30646f, 1252,874f), Vector(0.0f, 0.0f, 0.0f), Vector(36,31134f, 34,24347f, 13,88048f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[10]);
	*(&iLocal_0 + 2104[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn02_3", 2,802597E-45f, Vector(669,1378f, 78,27731f, 1238,347f), Vector(0.0f, 0.0f, 0.0f), Vector(17,38816f, 34,24347f, 38,57463f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[11]);
	*(&iLocal_0 + 2104[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn03", 2,802597E-45f, Vector(759,9683f, 78,30585f, 1252,016f), Vector(0.0f, 0.0f, 0.0f), Vector(36,57722f, 36,57722f, 15,36263f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[12]);
	*(&iLocal_0 + 2104[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_streetspawn09", 2,802597E-45f, Vector(713,1572f, 78,30591f, 1403,859f), Vector(0.0f, 8,115254f, 0.0f), Vector(37,81604f, 15,5878f, 19,22191f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 2224, &iLocal_0 + 2104[13]);
	*(&iLocal_0 + 2232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_theatrePop", 2,802597E-45f, Vector(710,7824f, 80,55675f, 1289,806f), Vector(0.0f, 0.0f, 0.0f), Vector(12,50965f, 7,019596f, 17,49664f));
	*(&iLocal_0 + 2240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_highStakesSecurity", 2,802597E-45f, Vector(752,1826f, 83,66572f, 1270,208f), Vector(0.0f, 0.0f, 0.0f), Vector(2,989091f, 4,146807f, 6,575893f));
	*(&iLocal_0 + 2248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_highStakesWhores", 2,802597E-45f, Vector(748,7577f, 83,66572f, 1271,79f), Vector(0.0f, 0.0f, 0.0f), Vector(6,968231f, 4,146807f, 3,084016f));
	*(&iLocal_0 + 2256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_highStakesPoker_room", 2,802597E-45f, Vector(755,7731f, 84,10152f, 1270,006f), Vector(0.0f, 0.0f, 0.0f), Vector(3,205048f, 2,879115f, 7,246208f));
	*(&iLocal_0 + 2264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "blkv_theatreweather", 2,802597E-45f, Vector(708,415f, 82,56446f, 1289,639f), Vector(0.0f, 0.0f, 0.0f), Vector(25,74156f, 9,408668f, 19,58652f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_report_crime", Vector(757,2836f, 78,47209f, 1235,004f), Vector(0.0f, -89,7756f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_jail_leave_end", Vector(757,209f, 78,472f, 1234,862f), Vector(0.0f, 90.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_jail_leave_start", Vector(763,437f, 79,456f, 1234,952f), Vector(0.0f, 111,092f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_jail_sit", Vector(772,1412f, 79,45659f, 1242,596f), Vector(0.0f, 364,7601f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_clear_bounty", Vector(662,525f, 78,755f, 1313,455f), Vector(0.0f, 98,16f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_cell_leave_end", Vector(771,335f, 79,456f, 1233,199f), Vector(0.0f, 90,12395f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_cell_leave_cop", Vector(770,4432f, 79,456f, 1238,214f), Vector(0.0f, 259,884f, 0.0f));
	*(&iLocal_0 + 2272) = Vector(813,7691f, 79,59104f, 1227,949f);
	*(&iLocal_0 + 2272 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_0 + 2296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_respawn_water_05", Vector(813,7691f, 79,59104f, 1227,949f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_0 + 2304) = Vector(857,6336f, 78,46339f, 1236,871f);
	*(&iLocal_0 + 2304 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_0 + 2328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_respawn_water_06", Vector(857,6336f, 78,46339f, 1236,871f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_0 + 2336) = Vector(814,3057f, 77,23427f, 1286,12f);
	*(&iLocal_0 + 2336 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_0 + 2360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_respawn_water_07", Vector(814,3057f, 77,23427f, 1286,12f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_0 + 2368) = Vector(815,4921f, 79,56301f, 1259,733f);
	*(&iLocal_0 + 2368 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_0 + 2392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_respawn_water_014", Vector(815,4921f, 79,56301f, 1259,733f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_0 + 2400) = Vector(839,1734f, 78,4516f, 1250,671f);
	*(&iLocal_0 + 2400 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_0 + 2424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_respawn_water_015", Vector(839,1734f, 78,4516f, 1250,671f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_0 + 2432) = Vector(775,3324f, 78,69197f, 1318,03f);
	*(&iLocal_0 + 2432 + 12) = Vector(0.0f, -92,75435f, 0.0f);
	*(&iLocal_0 + 2456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_gunsmith", Vector(775,3324f, 78,69197f, 1318,03f), Vector(0.0f, -92,75435f, 0.0f));
	*(&iLocal_0 + 2464) = Vector(774,2303f, 78,46262f, 1292,043f);
	*(&iLocal_0 + 2464 + 12) = Vector(0.0f, 270,1447f, 0.0f);
	*(&iLocal_0 + 2488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_tailor", Vector(774,2303f, 78,46262f, 1292,043f), Vector(0.0f, 270,1447f, 0.0f));
	*(&iLocal_0 + 2496) = Vector(750,4651f, 78,18945f, 1265,279f);
	*(&iLocal_0 + 2496 + 12) = Vector(0.0f, 89,57835f, 0.0f);
	*(&iLocal_0 + 2520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_hotel", Vector(750,4651f, 78,18945f, 1265,279f), Vector(0.0f, 89,57835f, 0.0f));
	*(&iLocal_0 + 2528) = Vector(747,5429f, 78,30585f, 1323,35f);
	*(&iLocal_0 + 2528 + 12) = Vector(0.0f, 89,76045f, 0.0f);
	*(&iLocal_0 + 2552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_store1", Vector(747,5429f, 78,30585f, 1323,35f), Vector(0.0f, 89,76045f, 0.0f));
	*(&iLocal_0 + 2560) = Vector(741,4055f, 78,32f, 1321,329f);
	*(&iLocal_0 + 2560 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_0 + 2584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store1", Vector(741,4055f, 78,32f, 1321,329f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_0 + 2592) = Vector(741,787f, 81,233f, 1324,388f);
	*(&iLocal_0 + 2592 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_0 + 2616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store1", Vector(741,787f, 81,233f, 1324,388f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_0 + 2624) = Vector(738,1561f, 81,384f, 1321,131f);
	*(&iLocal_0 + 2624 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_0 + 2648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store1", Vector(738,1561f, 81,384f, 1321,131f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_0 + 2656) = Vector(743,838f, 78,413f, 1321,586f);
	*(&iLocal_0 + 2656 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_0 + 2680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store1", Vector(743,838f, 78,413f, 1321,586f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_0 + 2688) = Vector(720,0005f, 78,30585f, 1312.0f);
	*(&iLocal_0 + 2688 + 12) = Vector(0.0f, -91,1851f, 0.0f);
	*(&iLocal_0 + 2712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_saloon", Vector(720,0005f, 78,30585f, 1312.0f), Vector(0.0f, -91,1851f, 0.0f));
	*(&iLocal_0 + 2720) = Vector(716,3461f, 79,38245f, 1289,751f);
	*(&iLocal_0 + 2720 + 12) = Vector(0.0f, -84,49128f, 0.0f);
	*(&iLocal_0 + 2744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_theater", Vector(716,3461f, 79,38245f, 1289,751f), Vector(0.0f, -84,49128f, 0.0f));
	*(&iLocal_0 + 2752) = Vector(664,1627f, 78,7551f, 1314,16f);
	*(&iLocal_0 + 2752 + 12) = Vector(0.0f, -90,44082f, 0.0f);
	*(&iLocal_0 + 2776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_train", Vector(664,1627f, 78,7551f, 1314,16f), Vector(0.0f, -90,44082f, 0.0f));
	*(&iLocal_0 + 2784) = Vector(559,0537f, 94,55469f, 1192,885f);
	*(&iLocal_0 + 2784 + 12) = Vector(0.0f, -46,26857f, 0.0f);
	*(&iLocal_0 + 2808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_church", Vector(559,0537f, 94,55469f, 1192,885f), Vector(0.0f, -46,26857f, 0.0f));
	*(&iLocal_0 + 2816) = Vector(686,1531f, 79,43501f, 1234,501f);
	*(&iLocal_0 + 2816 + 12) = Vector(0.0f, -91,31918f, 0.0f);
	*(&iLocal_0 + 2840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_interiorPoint_bank", Vector(686,1531f, 79,43501f, 1234,501f), Vector(0.0f, -91,31918f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos1", Vector(518,503f, 109,865f, 1179,648f), Vector(-8,414f, -125,394f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos2", Vector(885,73f, 99,231f, 1217,082f), Vector(-10,656f, 129,049f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos3", Vector(694,244f, 111,065f, 1524,643f), Vector(-13,252f, -23,584f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos4", Vector(612,272f, 95,593f, 1450,567f), Vector(-9,001f, -35,454f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos5", Vector(780,48f, 99,04f, 1201,082f), Vector(-5,407f, 113,683f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos6", Vector(586,377f, 93,308f, 1162,875f), Vector(17,478f, 141,312f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos7", Vector(728,058f, 80,017f, 1229,739f), Vector(17,785f, -31,731f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos8", Vector(777,901f, 86,397f, 1418,993f), Vector(10,197f, 147,041f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos9", Vector(568,593f, 89,009f, 1344,56f), Vector(2,137f, -72,828f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blk_vista_cam_pos10", Vector(686,754f, 87,687f, 1323,54f), Vector(-5,394f, 50,819f, 0.0f));
	*(&iLocal_0 + 2848) = Vector(664,3132f, 78,755f, 1315,971f);
	*(&iLocal_0 + 2848 + 12) = Vector(0.0f, 180,7735f, 0.0f);
	*(&iLocal_0 + 2872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "blkf_merc_giver", Vector(664,3132f, 78,755f, 1315,971f), Vector(0.0f, 180,7735f, 0.0f));
	*(&iLocal_0 + 2880) = Vector(741,746f, 78,425f, 1328,435f);
	*(&iLocal_0 + 2880 + 12) = Vector(0.0f, -90.0f, 0.0f);
	*(&iLocal_0 + 2904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store1", Vector(741,746f, 78,425f, 1328,435f), Vector(0.0f, -90.0f, 0.0f));
	return 1;
}

void Function_69(int iParam0, int iParam1) //Position: 0x8AA5 / 35493
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

var Function_70() //Position: 0x8AEF / 35567
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_71(char* cParam0) //Position: 0x8B04 / 35588
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

