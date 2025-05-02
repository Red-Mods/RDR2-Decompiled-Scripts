//Decompiled with MagicRDR v1.0
//Function Count : 613
//Statics Count : 1588
//Natives Count : 707
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 21;
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
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 2;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 2;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 2;
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
	var uLocal_132 = 2;
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
	var uLocal_154 = 1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 1;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 1;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 10;
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
	var uLocal_216 = 3;
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
	var uLocal_230 = 2;
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
	var uLocal_242 = 3;
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
	var uLocal_258 = 4;
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
	var uLocal_278 = 3;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 9;
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
	var uLocal_310 = 6;
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
	var uLocal_346 = 3;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 1;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 39;
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
	var uLocal_598 = 3;
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
	var uLocal_618 = 6;
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
	var uLocal_656 = 1;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 5;
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
	struct<6> Local_806 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 13;
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
	struct<15> Local_872[6];
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
	var uLocal_982 = 5;
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
	var uLocal_1012 = 5;
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
	var uLocal_1042 = 5;
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
	int iLocal_1062 = 0;
	var uLocal_1063 = 0;
	int iLocal_1064 = 1;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	int iLocal_1070 = 2;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	int iLocal_1080 = 2;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	int iLocal_1090 = 1;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	int iLocal_1096 = 1;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 19;
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
	int iLocal_1180 = 19;
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
	int iLocal_1258 = 19;
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
	int iLocal_1344 = 0;
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
	int iLocal_1356 = 0;
	bool bLocal_1357 = false;
	int iLocal_1358 = 0;
	int iLocal_1359 = 6;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
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
	var uLocal_1424 = 0;
	int iLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	bool bLocal_1429 = false;
	var uLocal_1430 = 0;
	bool bLocal_1431 = false;
	var uLocal_1432 = 0;
	bool bLocal_1433 = false;
	var uLocal_1434 = 0;
	bool bLocal_1435 = false;
	var uLocal_1436 = 0;
	int iLocal_1437 = 0;
	var uLocal_1438 = 0;
	bool bLocal_1439 = false;
	var uLocal_1440 = 0;
	char[] cLocal_1441[4] = 0;
	var uLocal_1442 = 0;
	int iLocal_1443 = 0;
	var uLocal_1444 = 0;
	float fLocal_1445 = 0.0f;
	var uLocal_1446 = 0;
	float fLocal_1447 = 0.0f;
	var uLocal_1448 = 0;
	float fLocal_1449 = 0.0f;
	var uLocal_1450 = 0;
	float fLocal_1451 = 0.0f;
	var uLocal_1452 = 0;
	float fLocal_1453 = 0.0f;
	var uLocal_1454 = 0;
	vector3 vLocal_1455 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	vector3 vLocal_1461 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	vector3 vLocal_1467 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	vector3 vLocal_1473 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	vector3 vLocal_1479 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	int iLocal_1485 = 0;
	var uLocal_1486 = 0;
	int iLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	int iLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	int iLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	int iLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	int iLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	int iLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	int iLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	int iLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	int iLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	float fLocal_1523 = 0.0f;
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int iLocal_1527[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	bool bLocal_1545 = false;
	bool bLocal_1546 = false;
	bool bLocal_1547 = false;
	int iLocal_1548 = 0;
	int iLocal_1549 = 0;
	int iLocal_1550 = 0;
	int iLocal_1551 = 0;
	int iLocal_1552 = 0;
	int iLocal_1553 = 0;
	int iLocal_1554 = 0;
	int iLocal_1555 = 0;
	int iLocal_1556 = 0;
	bool bLocal_1557 = false;
	bool bLocal_1558 = false;
	bool bLocal_1559 = false;
	int iLocal_1560 = 0;
	int iLocal_1561 = 0;
	int iLocal_1562 = 0;
	int iLocal_1563 = 0;
	int iLocal_1564 = 0;
	int iLocal_1565 = 0;
	int iLocal_1566 = 0;
	bool bLocal_1567 = false;
	bool bLocal_1568 = false;
	var uLocal_1569 = 0;
	bool bLocal_1570 = false;
	int iLocal_1571 = 0;
	bool bLocal_1572 = false;
	bool bLocal_1573 = false;
	int iLocal_1574 = 0;
	int iLocal_1575 = 0;
	struct<6> Local_1576 = { 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
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
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
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
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
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
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
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
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
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
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
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
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	bool bLocal_11331 = false;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 0;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 0;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = 0;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 0;
	var uLocal_14571 = 0;
	var uLocal_14572 = 0;
	var uLocal_14573 = 0;
	var uLocal_14574 = 0;
	var uLocal_14575 = 0;
	var uLocal_14576 = 0;
	var uLocal_14577 = 0;
	var uLocal_14578 = 0;
	var uLocal_14579 = 0;
	var uLocal_14580 = 0;
	var uLocal_14581 = 0;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = 0;
	var uLocal_14617 = 0;
	var uLocal_14618 = 0;
	var uLocal_14619 = 0;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 0;
	var uLocal_14624 = 0;
	var uLocal_14625 = 0;
	var uLocal_14626 = 0;
	var uLocal_14627 = 0;
	var uLocal_14628 = 0;
	var uLocal_14629 = 0;
	var uLocal_14630 = 0;
	var uLocal_14631 = 0;
	var uLocal_14632 = 0;
	var uLocal_14633 = 0;
	var uLocal_14634 = 0;
	var uLocal_14635 = 0;
	var uLocal_14636 = 0;
	var uLocal_14637 = 0;
	var uLocal_14638 = 0;
	var uLocal_14639 = 0;
	var uLocal_14640 = 0;
	var uLocal_14641 = 0;
	var uLocal_14642 = 0;
	var uLocal_14643 = 0;
	var uLocal_14644 = 0;
	var uLocal_14645 = 0;
	var uLocal_14646 = 0;
	var uLocal_14647 = 0;
	var uLocal_14648 = 0;
	var uLocal_14649 = 0;
	var uLocal_14650 = 0;
	var uLocal_14651 = 0;
	var uLocal_14652 = 0;
	var uLocal_14653 = 0;
	var uLocal_14654 = 0;
	var uLocal_14655 = 0;
	var uLocal_14656 = 0;
	var uLocal_14657 = 0;
	var uLocal_14658 = 0;
	var uLocal_14659 = 0;
	var uLocal_14660 = 0;
	var uLocal_14661 = 0;
	var uLocal_14662 = 0;
	var uLocal_14663 = 0;
	var uLocal_14664 = 0;
	var uLocal_14665 = 0;
	var uLocal_14666 = 0;
	var uLocal_14667 = 0;
	var uLocal_14668 = 0;
	var uLocal_14669 = 0;
	var uLocal_14670 = 0;
	var uLocal_14671 = 0;
	var uLocal_14672 = 0;
	var uLocal_14673 = 0;
	var uLocal_14674 = 0;
	var uLocal_14675 = 0;
	var uLocal_14676 = 0;
	var uLocal_14677 = 0;
	var uLocal_14678 = 0;
	var uLocal_14679 = 0;
	var uLocal_14680 = 0;
	var uLocal_14681 = 0;
	var uLocal_14682 = 0;
	var uLocal_14683 = 0;
	var uLocal_14684 = 0;
	var uLocal_14685 = 0;
	var uLocal_14686 = 0;
	var uLocal_14687 = 0;
	var uLocal_14688 = 0;
	var uLocal_14689 = 0;
	var uLocal_14690 = 0;
	var uLocal_14691 = 0;
	var uLocal_14692 = 0;
	var uLocal_14693 = 0;
	var uLocal_14694 = 0;
	var uLocal_14695 = 0;
	var uLocal_14696 = 0;
	var uLocal_14697 = 0;
	var uLocal_14698 = 0;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = 0;
	var uLocal_14705 = 0;
	var uLocal_14706 = 0;
	var uLocal_14707 = 0;
	var uLocal_14708 = 0;
	var uLocal_14709 = 0;
	var uLocal_14710 = 0;
	var uLocal_14711 = 0;
	var uLocal_14712 = 0;
	var uLocal_14713 = 0;
	var uLocal_14714 = 0;
	var uLocal_14715 = 0;
	var uLocal_14716 = 0;
	var uLocal_14717 = 0;
	var uLocal_14718 = 0;
	var uLocal_14719 = 0;
	var uLocal_14720 = 0;
	var uLocal_14721 = 0;
	var uLocal_14722 = 0;
	var uLocal_14723 = 0;
	var uLocal_14724 = 0;
	var uLocal_14725 = 0;
	var uLocal_14726 = 0;
	var uLocal_14727 = 0;
	var uLocal_14728 = 0;
	var uLocal_14729 = 0;
	var uLocal_14730 = 0;
	var uLocal_14731 = 0;
	var uLocal_14732 = 0;
	var uLocal_14733 = 0;
	var uLocal_14734 = 0;
	var uLocal_14735 = 0;
	var uLocal_14736 = 0;
	var uLocal_14737 = 0;
	var uLocal_14738 = 0;
	var uLocal_14739 = 0;
	var uLocal_14740 = 0;
	var uLocal_14741 = 0;
	var uLocal_14742 = 0;
	var uLocal_14743 = 0;
	var uLocal_14744 = 0;
	var uLocal_14745 = 0;
	var uLocal_14746 = 0;
	var uLocal_14747 = 0;
	var uLocal_14748 = 0;
	var uLocal_14749 = 0;
	var uLocal_14750 = 0;
	var uLocal_14751 = 0;
	var uLocal_14752 = 0;
	var uLocal_14753 = 0;
	var uLocal_14754 = 0;
	var uLocal_14755 = 0;
	var uLocal_14756 = 0;
	var uLocal_14757 = 0;
	var uLocal_14758 = 0;
	var uLocal_14759 = 0;
	var uLocal_14760 = 0;
	var uLocal_14761 = 0;
	var uLocal_14762 = 0;
	var uLocal_14763 = 0;
	var uLocal_14764 = 0;
	var uLocal_14765 = 0;
	var uLocal_14766 = 0;
	var uLocal_14767 = 0;
	var uLocal_14768 = 0;
	var uLocal_14769 = 0;
	var uLocal_14770 = 0;
	var uLocal_14771 = 0;
	var uLocal_14772 = 0;
	var uLocal_14773 = 0;
	var uLocal_14774 = 0;
	var uLocal_14775 = 0;
	var uLocal_14776 = 0;
	var uLocal_14777 = 0;
	var uLocal_14778 = 0;
	var uLocal_14779 = 0;
	var uLocal_14780 = 0;
	var uLocal_14781 = 0;
	var uLocal_14782 = 0;
	var uLocal_14783 = 0;
	var uLocal_14784 = 0;
	var uLocal_14785 = 0;
	var uLocal_14786 = 0;
	var uLocal_14787 = 0;
	var uLocal_14788 = 0;
	var uLocal_14789 = 0;
	var uLocal_14790 = 0;
	var uLocal_14791 = 0;
	var uLocal_14792 = 0;
	var uLocal_14793 = 0;
	var uLocal_14794 = 0;
	var uLocal_14795 = 0;
	var uLocal_14796 = 0;
	var uLocal_14797 = 0;
	var uLocal_14798 = 0;
	var uLocal_14799 = 0;
	var uLocal_14800 = 0;
	var uLocal_14801 = 0;
	var uLocal_14802 = 0;
	var uLocal_14803 = 0;
	var uLocal_14804 = 0;
	var uLocal_14805 = 0;
	var uLocal_14806 = 0;
	var uLocal_14807 = 0;
	var uLocal_14808 = 0;
	var uLocal_14809 = 0;
	var uLocal_14810 = 0;
	var uLocal_14811 = 0;
	var uLocal_14812 = 0;
	var uLocal_14813 = 0;
	var uLocal_14814 = 0;
	var uLocal_14815 = 0;
	var uLocal_14816 = 0;
	var uLocal_14817 = 0;
	var uLocal_14818 = 0;
	var uLocal_14819 = 0;
	var uLocal_14820 = 0;
	var uLocal_14821 = 0;
	var uLocal_14822 = 0;
	var uLocal_14823 = 0;
	var uLocal_14824 = 0;
	var uLocal_14825 = 0;
	var uLocal_14826 = 0;
	var uLocal_14827 = 0;
	var uLocal_14828 = 0;
	var uLocal_14829 = 0;
	var uLocal_14830 = 0;
	var uLocal_14831 = 0;
	var uLocal_14832 = 0;
	var uLocal_14833 = 0;
	var uLocal_14834 = 0;
	var uLocal_14835 = 0;
	var uLocal_14836 = 0;
	var uLocal_14837 = 0;
	var uLocal_14838 = 0;
	var uLocal_14839 = 0;
	var uLocal_14840 = 0;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = 0;
	var uLocal_14850 = 0;
	var uLocal_14851 = 0;
	var uLocal_14852 = 0;
	var uLocal_14853 = 0;
	var uLocal_14854 = 0;
	var uLocal_14855 = 0;
	var uLocal_14856 = 0;
	var uLocal_14857 = 0;
	var uLocal_14858 = 0;
	var uLocal_14859 = 0;
	var uLocal_14860 = 0;
	var uLocal_14861 = 0;
	var uLocal_14862 = 0;
	var uLocal_14863 = 0;
	var uLocal_14864 = 0;
	var uLocal_14865 = 0;
	var uLocal_14866 = 0;
	var uLocal_14867 = 0;
	var uLocal_14868 = 0;
	var uLocal_14869 = 0;
	var uLocal_14870 = 0;
	var uLocal_14871 = 0;
	var uLocal_14872 = 0;
	var uLocal_14873 = 0;
	var uLocal_14874 = 0;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = 0;
	var uLocal_14878 = 0;
	var uLocal_14879 = 0;
	var uLocal_14880 = 0;
	var uLocal_14881 = 0;
	var uLocal_14882 = 0;
	var uLocal_14883 = 0;
	var uLocal_14884 = 0;
	var uLocal_14885 = 0;
	var uLocal_14886 = 0;
	var uLocal_14887 = 0;
	var uLocal_14888 = 0;
	var uLocal_14889 = 0;
	var uLocal_14890 = 0;
	var uLocal_14891 = 0;
	var uLocal_14892 = 0;
	var uLocal_14893 = 0;
	var uLocal_14894 = 0;
	var uLocal_14895 = 0;
	var uLocal_14896 = 0;
	var uLocal_14897 = 0;
	var uLocal_14898 = 0;
	var uLocal_14899 = 0;
	var uLocal_14900 = 0;
	var uLocal_14901 = 0;
	var uLocal_14902 = 0;
	var uLocal_14903 = 0;
	var uLocal_14904 = 0;
	var uLocal_14905 = 0;
	var uLocal_14906 = 0;
	var uLocal_14907 = 0;
	var uLocal_14908 = 0;
	var uLocal_14909 = 0;
	var uLocal_14910 = 0;
	var uLocal_14911 = 0;
	var uLocal_14912 = 0;
	var uLocal_14913 = 0;
	var uLocal_14914 = 0;
	var uLocal_14915 = 0;
	var uLocal_14916 = 0;
	var uLocal_14917 = 0;
	var uLocal_14918 = 0;
	var uLocal_14919 = 0;
	var uLocal_14920 = 0;
	var uLocal_14921 = 0;
	var uLocal_14922 = 0;
	var uLocal_14923 = 0;
	var uLocal_14924 = 0;
	var uLocal_14925 = 0;
	var uLocal_14926 = 0;
	var uLocal_14927 = 0;
	var uLocal_14928 = 0;
	var uLocal_14929 = 0;
	var uLocal_14930 = 0;
	var uLocal_14931 = 0;
	var uLocal_14932 = 0;
	var uLocal_14933 = 0;
	var uLocal_14934 = 0;
	var uLocal_14935 = 0;
	var uLocal_14936 = 0;
	var uLocal_14937 = 0;
	var uLocal_14938 = 0;
	var uLocal_14939 = 0;
	var uLocal_14940 = 0;
	var uLocal_14941 = 0;
	var uLocal_14942 = 0;
	var uLocal_14943 = 0;
	var uLocal_14944 = 0;
	var uLocal_14945 = 0;
	var uLocal_14946 = 0;
	var uLocal_14947 = 0;
	var uLocal_14948 = 0;
	var uLocal_14949 = 0;
	var uLocal_14950 = 0;
	var uLocal_14951 = 0;
	var uLocal_14952 = 0;
	var uLocal_14953 = 0;
	var uLocal_14954 = 0;
	var uLocal_14955 = 0;
	var uLocal_14956 = 0;
	var uLocal_14957 = 0;
	var uLocal_14958 = 0;
	var uLocal_14959 = 0;
	var uLocal_14960 = 0;
	var uLocal_14961 = 0;
	var uLocal_14962 = 0;
	var uLocal_14963 = 0;
	var uLocal_14964 = 0;
	var uLocal_14965 = 0;
	var uLocal_14966 = 0;
	var uLocal_14967 = 0;
	var uLocal_14968 = 0;
	var uLocal_14969 = 0;
	var uLocal_14970 = 0;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 0;
	var uLocal_14977 = 0;
	var uLocal_14978 = 0;
	var uLocal_14979 = 0;
	var uLocal_14980 = 0;
	var uLocal_14981 = 0;
	var uLocal_14982 = 0;
	var uLocal_14983 = 0;
	var uLocal_14984 = 0;
	var uLocal_14985 = 0;
	var uLocal_14986 = 0;
	var uLocal_14987 = 0;
	var uLocal_14988 = 0;
	var uLocal_14989 = 0;
	var uLocal_14990 = 0;
	var uLocal_14991 = 0;
	var uLocal_14992 = 0;
	var uLocal_14993 = 0;
	var uLocal_14994 = 0;
	var uLocal_14995 = 0;
	var uLocal_14996 = 0;
	var uLocal_14997 = 0;
	var uLocal_14998 = 0;
	var uLocal_14999 = 0;
	var uLocal_15000 = 0;
	var uLocal_15001 = 0;
	var uLocal_15002 = 0;
	var uLocal_15003 = 0;
	var uLocal_15004 = 0;
	var uLocal_15005 = 0;
	var uLocal_15006 = 0;
	var uLocal_15007 = 0;
	var uLocal_15008 = 0;
	var uLocal_15009 = 0;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 0;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 0;
	var uLocal_15016 = 0;
	var uLocal_15017 = 0;
	var uLocal_15018 = 0;
	var uLocal_15019 = 0;
	var uLocal_15020 = 0;
	var uLocal_15021 = 0;
	var uLocal_15022 = 0;
	var uLocal_15023 = 0;
	var uLocal_15024 = 0;
	var uLocal_15025 = 0;
	var uLocal_15026 = 0;
	var uLocal_15027 = 0;
	var uLocal_15028 = 0;
	var uLocal_15029 = 0;
	var uLocal_15030 = 0;
	var uLocal_15031 = 0;
	var uLocal_15032 = 0;
	var uLocal_15033 = 0;
	var uLocal_15034 = 0;
	var uLocal_15035 = 0;
	var uLocal_15036 = 0;
	var uLocal_15037 = 0;
	var uLocal_15038 = 0;
	var uLocal_15039 = 0;
	var uLocal_15040 = 0;
	var uLocal_15041 = 0;
	var uLocal_15042 = 0;
	var uLocal_15043 = 0;
	var uLocal_15044 = 0;
	var uLocal_15045 = 0;
	var uLocal_15046 = 0;
	var uLocal_15047 = 0;
	var uLocal_15048 = 0;
	var uLocal_15049 = 0;
	var uLocal_15050 = 0;
	var uLocal_15051 = 0;
	var uLocal_15052 = 0;
	var uLocal_15053 = 0;
	var uLocal_15054 = 0;
	var uLocal_15055 = 0;
	var uLocal_15056 = 0;
	var uLocal_15057 = 0;
	var uLocal_15058 = 0;
	var uLocal_15059 = 0;
	var uLocal_15060 = 0;
	var uLocal_15061 = 0;
	var uLocal_15062 = 0;
	var uLocal_15063 = 0;
	var uLocal_15064 = 0;
	var uLocal_15065 = 0;
	var uLocal_15066 = 0;
	var uLocal_15067 = 0;
	var uLocal_15068 = 0;
	var uLocal_15069 = 0;
	var uLocal_15070 = 0;
	var uLocal_15071 = 0;
	var uLocal_15072 = 0;
	var uLocal_15073 = 0;
	var uLocal_15074 = 0;
	var uLocal_15075 = 0;
	var uLocal_15076 = 0;
	var uLocal_15077 = 0;
	var uLocal_15078 = 0;
	var uLocal_15079 = 0;
	var uLocal_15080 = 0;
	var uLocal_15081 = 0;
	var uLocal_15082 = 0;
	var uLocal_15083 = 0;
	var uLocal_15084 = 0;
	var uLocal_15085 = 0;
	var uLocal_15086 = 0;
	var uLocal_15087 = 0;
	var uLocal_15088 = 0;
	var uLocal_15089 = 0;
	var uLocal_15090 = 0;
	var uLocal_15091 = 0;
	var uLocal_15092 = 0;
	var uLocal_15093 = 0;
	var uLocal_15094 = 0;
	var uLocal_15095 = 0;
	var uLocal_15096 = 0;
	var uLocal_15097 = 0;
	var uLocal_15098 = 0;
	var uLocal_15099 = 0;
	var uLocal_15100 = 0;
	var uLocal_15101 = 0;
	var uLocal_15102 = 0;
	var uLocal_15103 = 0;
	var uLocal_15104 = 0;
	var uLocal_15105 = 0;
	var uLocal_15106 = 0;
	var uLocal_15107 = 0;
	var uLocal_15108 = 0;
	var uLocal_15109 = 0;
	var uLocal_15110 = 0;
	var uLocal_15111 = 0;
	var uLocal_15112 = 0;
	var uLocal_15113 = 0;
	var uLocal_15114 = 0;
	var uLocal_15115 = 0;
	var uLocal_15116 = 0;
	var uLocal_15117 = 0;
	var uLocal_15118 = 0;
	var uLocal_15119 = 0;
	var uLocal_15120 = 0;
	var uLocal_15121 = 0;
	var uLocal_15122 = 0;
	var uLocal_15123 = 0;
	var uLocal_15124 = 0;
	var uLocal_15125 = 0;
	var uLocal_15126 = 0;
	var uLocal_15127 = 0;
	var uLocal_15128 = 0;
	var uLocal_15129 = 0;
	var uLocal_15130 = 0;
	var uLocal_15131 = 0;
	var uLocal_15132 = 0;
	var uLocal_15133 = 0;
	var uLocal_15134 = 0;
	var uLocal_15135 = 0;
	var uLocal_15136 = 0;
	var uLocal_15137 = 0;
	var uLocal_15138 = 0;
	var uLocal_15139 = 0;
	var uLocal_15140 = 0;
	var uLocal_15141 = 0;
	var uLocal_15142 = 0;
	var uLocal_15143 = 0;
	var uLocal_15144 = 0;
	var uLocal_15145 = 0;
	var uLocal_15146 = 0;
	var uLocal_15147 = 0;
	var uLocal_15148 = 0;
	var uLocal_15149 = 0;
	var uLocal_15150 = 0;
	var uLocal_15151 = 0;
	var uLocal_15152 = 0;
	var uLocal_15153 = 0;
	var uLocal_15154 = 0;
	var uLocal_15155 = 0;
	var uLocal_15156 = 0;
	var uLocal_15157 = 0;
	var uLocal_15158 = 0;
	var uLocal_15159 = 0;
	var uLocal_15160 = 0;
	var uLocal_15161 = 0;
	var uLocal_15162 = 0;
	var uLocal_15163 = 0;
	var uLocal_15164 = 0;
	var uLocal_15165 = 0;
	var uLocal_15166 = 0;
	var uLocal_15167 = 0;
	var uLocal_15168 = 0;
	var uLocal_15169 = 0;
	var uLocal_15170 = 0;
	var uLocal_15171 = 0;
	var uLocal_15172 = 0;
	var uLocal_15173 = 0;
	var uLocal_15174 = 0;
	var uLocal_15175 = 0;
	var uLocal_15176 = 0;
	var uLocal_15177 = 0;
	var uLocal_15178 = 0;
	var uLocal_15179 = 0;
	var uLocal_15180 = 0;
	var uLocal_15181 = 0;
	var uLocal_15182 = 0;
	var uLocal_15183 = 0;
	var uLocal_15184 = 0;
	var uLocal_15185 = 0;
	var uLocal_15186 = 0;
	var uLocal_15187 = 0;
	var uLocal_15188 = 0;
	var uLocal_15189 = 0;
	var uLocal_15190 = 0;
	var uLocal_15191 = 0;
	var uLocal_15192 = 0;
	var uLocal_15193 = 0;
	var uLocal_15194 = 0;
	var uLocal_15195 = 0;
	var uLocal_15196 = 0;
	var uLocal_15197 = 0;
	var uLocal_15198 = 0;
	var uLocal_15199 = 0;
	var uLocal_15200 = 0;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = 0;
	var uLocal_15204 = 0;
	var uLocal_15205 = 0;
	var uLocal_15206 = 0;
	var uLocal_15207 = 0;
	var uLocal_15208 = 0;
	var uLocal_15209 = 0;
	var uLocal_15210 = 0;
	var uLocal_15211 = 0;
	var uLocal_15212 = 0;
	var uLocal_15213 = 0;
	var uLocal_15214 = 0;
	var uLocal_15215 = 0;
	var uLocal_15216 = 0;
	var uLocal_15217 = 0;
	var uLocal_15218 = 0;
	var uLocal_15219 = 0;
	var uLocal_15220 = 0;
	var uLocal_15221 = 0;
	var uLocal_15222 = 0;
	var uLocal_15223 = 0;
	var uLocal_15224 = 0;
	var uLocal_15225 = 0;
	var uLocal_15226 = 0;
	var uLocal_15227 = 0;
	var uLocal_15228 = 0;
	var uLocal_15229 = 0;
	var uLocal_15230 = 0;
	var uLocal_15231 = 0;
	var uLocal_15232 = 0;
	var uLocal_15233 = 0;
	var uLocal_15234 = 0;
	var uLocal_15235 = 0;
	var uLocal_15236 = 0;
	var uLocal_15237 = 0;
	var uLocal_15238 = 0;
	var uLocal_15239 = 0;
	var uLocal_15240 = 0;
	var uLocal_15241 = 0;
	var uLocal_15242 = 0;
	var uLocal_15243 = 0;
	var uLocal_15244 = 0;
	var uLocal_15245 = 0;
	var uLocal_15246 = 0;
	var uLocal_15247 = 0;
	var uLocal_15248 = 0;
	var uLocal_15249 = 0;
	var uLocal_15250 = 0;
	var uLocal_15251 = 0;
	var uLocal_15252 = 0;
	var uLocal_15253 = 0;
	var uLocal_15254 = 0;
	var uLocal_15255 = 0;
	var uLocal_15256 = 0;
	var uLocal_15257 = 0;
	var uLocal_15258 = 0;
	var uLocal_15259 = 0;
	var uLocal_15260 = 0;
	var uLocal_15261 = 0;
	var uLocal_15262 = 0;
	var uLocal_15263 = 0;
	var uLocal_15264 = 0;
	var uLocal_15265 = 0;
	var uLocal_15266 = 0;
	var uLocal_15267 = 0;
	var uLocal_15268 = 0;
	var uLocal_15269 = 0;
	var uLocal_15270 = 0;
	var uLocal_15271 = 0;
	var uLocal_15272 = 0;
	var uLocal_15273 = 0;
	var uLocal_15274 = 0;
	var uLocal_15275 = 0;
	var uLocal_15276 = 0;
	var uLocal_15277 = 0;
	var uLocal_15278 = 0;
	var uLocal_15279 = 0;
	var uLocal_15280 = 0;
	var uLocal_15281 = 0;
	var uLocal_15282 = 0;
	var uLocal_15283 = 0;
	var uLocal_15284 = 0;
	var uLocal_15285 = 0;
	var uLocal_15286 = 0;
	var uLocal_15287 = 0;
	var uLocal_15288 = 0;
	var uLocal_15289 = 0;
	var uLocal_15290 = 0;
	var uLocal_15291 = 0;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 0;
	var uLocal_15299 = 0;
	var uLocal_15300 = 0;
	var uLocal_15301 = 0;
	var uLocal_15302 = 0;
	var uLocal_15303 = 0;
	var uLocal_15304 = 0;
	var uLocal_15305 = 0;
	var uLocal_15306 = 0;
	var uLocal_15307 = 0;
	var uLocal_15308 = 0;
	var uLocal_15309 = 0;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = 0;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 0;
	var uLocal_15319 = 0;
	var uLocal_15320 = 0;
	var uLocal_15321 = 0;
	var uLocal_15322 = 0;
	var uLocal_15323 = 0;
	var uLocal_15324 = 0;
	var uLocal_15325 = 0;
	var uLocal_15326 = 0;
	var uLocal_15327 = 0;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 0;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = 0;
	var uLocal_15336 = 0;
	var uLocal_15337 = 0;
	var uLocal_15338 = 0;
	var uLocal_15339 = 0;
	var uLocal_15340 = 0;
	var uLocal_15341 = 0;
	var uLocal_15342 = 0;
	var uLocal_15343 = 0;
	var uLocal_15344 = 0;
	var uLocal_15345 = 0;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = 0;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 0;
	var uLocal_15355 = 0;
	var uLocal_15356 = 0;
	var uLocal_15357 = 0;
	var uLocal_15358 = 0;
	var uLocal_15359 = 0;
	var uLocal_15360 = 0;
	var uLocal_15361 = 0;
	var uLocal_15362 = 0;
	var uLocal_15363 = 0;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 0;
	var uLocal_15372 = 0;
	var uLocal_15373 = 0;
	var uLocal_15374 = 0;
	var uLocal_15375 = 0;
	var uLocal_15376 = 0;
	var uLocal_15377 = 0;
	var uLocal_15378 = 0;
	var uLocal_15379 = 0;
	var uLocal_15380 = 0;
	var uLocal_15381 = 0;
	var uLocal_15382 = 0;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = 0;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 0;
	var uLocal_15391 = 0;
	var uLocal_15392 = 0;
	var uLocal_15393 = 0;
	var uLocal_15394 = 0;
	var uLocal_15395 = 0;
	var uLocal_15396 = 0;
	var uLocal_15397 = 0;
	var uLocal_15398 = 0;
	var uLocal_15399 = 0;
	var uLocal_15400 = 0;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 0;
	var uLocal_15409 = 0;
	var uLocal_15410 = 0;
	var uLocal_15411 = 0;
	var uLocal_15412 = 0;
	var uLocal_15413 = 0;
	var uLocal_15414 = 0;
	var uLocal_15415 = 0;
	var uLocal_15416 = 0;
	var uLocal_15417 = 0;
	var uLocal_15418 = 0;
	var uLocal_15419 = 0;
	var uLocal_15420 = 0;
	var uLocal_15421 = 0;
	var uLocal_15422 = 0;
	var uLocal_15423 = 0;
	var uLocal_15424 = 0;
	var uLocal_15425 = 0;
	var uLocal_15426 = 0;
	var uLocal_15427 = 0;
	var uLocal_15428 = 0;
	var uLocal_15429 = 0;
	var uLocal_15430 = 0;
	var uLocal_15431 = 0;
	var uLocal_15432 = 0;
	var uLocal_15433 = 0;
	var uLocal_15434 = 0;
	var uLocal_15435 = 0;
	var uLocal_15436 = 0;
	var uLocal_15437 = 0;
	var uLocal_15438 = 0;
	var uLocal_15439 = 0;
	var uLocal_15440 = 0;
	var uLocal_15441 = 0;
	var uLocal_15442 = 0;
	var uLocal_15443 = 0;
	var uLocal_15444 = 0;
	var uLocal_15445 = 0;
	var uLocal_15446 = 0;
	var uLocal_15447 = 0;
	var uLocal_15448 = 0;
	var uLocal_15449 = 0;
	var uLocal_15450 = 0;
	var uLocal_15451 = 0;
	var uLocal_15452 = 0;
	var uLocal_15453 = 0;
	var uLocal_15454 = 0;
	var uLocal_15455 = 0;
	var uLocal_15456 = 0;
	var uLocal_15457 = 0;
	var uLocal_15458 = 0;
	var uLocal_15459 = 0;
	var uLocal_15460 = 0;
	var uLocal_15461 = 0;
	var uLocal_15462 = 0;
	var uLocal_15463 = 0;
	var uLocal_15464 = 0;
	var uLocal_15465 = 0;
	var uLocal_15466 = 0;
	var uLocal_15467 = 0;
	var uLocal_15468 = 0;
	var uLocal_15469 = 0;
	var uLocal_15470 = 0;
	var uLocal_15471 = 0;
	var uLocal_15472 = 0;
	var uLocal_15473 = 0;
	var uLocal_15474 = 0;
	var uLocal_15475 = 0;
	var uLocal_15476 = 0;
	var uLocal_15477 = 0;
	var uLocal_15478 = 0;
	var uLocal_15479 = 0;
	var uLocal_15480 = 0;
	var uLocal_15481 = 0;
	var uLocal_15482 = 0;
	var uLocal_15483 = 0;
	var uLocal_15484 = 0;
	var uLocal_15485 = 0;
	var uLocal_15486 = 0;
	var uLocal_15487 = 0;
	var uLocal_15488 = 0;
	var uLocal_15489 = 0;
	var uLocal_15490 = 0;
	var uLocal_15491 = 0;
	var uLocal_15492 = 0;
	var uLocal_15493 = 0;
	var uLocal_15494 = 0;
	var uLocal_15495 = 0;
	var uLocal_15496 = 0;
	var uLocal_15497 = 0;
	var uLocal_15498 = 0;
	var uLocal_15499 = 0;
	var uLocal_15500 = 0;
	var uLocal_15501 = 0;
	var uLocal_15502 = 0;
	var uLocal_15503 = 0;
	var uLocal_15504 = 0;
	var uLocal_15505 = 0;
	var uLocal_15506 = 0;
	var uLocal_15507 = 0;
	var uLocal_15508 = 0;
	var uLocal_15509 = 0;
	var uLocal_15510 = 0;
	var uLocal_15511 = 0;
	var uLocal_15512 = 0;
	var uLocal_15513 = 0;
	var uLocal_15514 = 0;
	var uLocal_15515 = 0;
	var uLocal_15516 = 0;
	var uLocal_15517 = 0;
	var uLocal_15518 = 0;
	var uLocal_15519 = 0;
	var uLocal_15520 = 0;
	var uLocal_15521 = 0;
	var uLocal_15522 = 0;
	var uLocal_15523 = 0;
	var uLocal_15524 = 0;
	var uLocal_15525 = 0;
	var uLocal_15526 = 0;
	var uLocal_15527 = 0;
	var uLocal_15528 = 0;
	var uLocal_15529 = 0;
	var uLocal_15530 = 0;
	var uLocal_15531 = 0;
	var uLocal_15532 = 0;
	var uLocal_15533 = 0;
	var uLocal_15534 = 0;
	var uLocal_15535 = 0;
	var uLocal_15536 = 0;
	var uLocal_15537 = 0;
	var uLocal_15538 = 0;
	var uLocal_15539 = 0;
	var uLocal_15540 = 0;
	var uLocal_15541 = 0;
	var uLocal_15542 = 0;
	var uLocal_15543 = 0;
	var uLocal_15544 = 0;
	var uLocal_15545 = 0;
	var uLocal_15546 = 0;
	var uLocal_15547 = 0;
	var uLocal_15548 = 0;
	var uLocal_15549 = 0;
	var uLocal_15550 = 0;
	var uLocal_15551 = 0;
	var uLocal_15552 = 0;
	var uLocal_15553 = 0;
	var uLocal_15554 = 0;
	var uLocal_15555 = 0;
	var uLocal_15556 = 0;
	var uLocal_15557 = 0;
	var uLocal_15558 = 0;
	var uLocal_15559 = 0;
	var uLocal_15560 = 0;
	var uLocal_15561 = 0;
	var uLocal_15562 = 0;
	var uLocal_15563 = 0;
	var uLocal_15564 = 0;
	var uLocal_15565 = 0;
	var uLocal_15566 = 0;
	var uLocal_15567 = 0;
	var uLocal_15568 = 0;
	var uLocal_15569 = 0;
	var uLocal_15570 = 0;
	var uLocal_15571 = 0;
	var uLocal_15572 = 0;
	var uLocal_15573 = 0;
	var uLocal_15574 = 0;
	var uLocal_15575 = 0;
	var uLocal_15576 = 0;
	var uLocal_15577 = 0;
	var uLocal_15578 = 0;
	var uLocal_15579 = 0;
	var uLocal_15580 = 0;
	var uLocal_15581 = 0;
	var uLocal_15582 = 0;
	var uLocal_15583 = 0;
	var uLocal_15584 = 0;
	var uLocal_15585 = 0;
	var uLocal_15586 = 0;
	var uLocal_15587 = 0;
	var uLocal_15588 = 0;
	var uLocal_15589 = 0;
	var uLocal_15590 = 0;
	var uLocal_15591 = 0;
	var uLocal_15592 = 0;
	var uLocal_15593 = 0;
	var uLocal_15594 = 0;
	var uLocal_15595 = 0;
	var uLocal_15596 = 0;
	var uLocal_15597 = 0;
	var uLocal_15598 = 0;
	var uLocal_15599 = 0;
	var uLocal_15600 = 0;
	var uLocal_15601 = 0;
	var uLocal_15602 = 0;
	var uLocal_15603 = 0;
	var uLocal_15604 = 0;
	var uLocal_15605 = 0;
	var uLocal_15606 = 0;
	var uLocal_15607 = 0;
	var uLocal_15608 = 0;
	var uLocal_15609 = 0;
	var uLocal_15610 = 0;
	var uLocal_15611 = 0;
	var uLocal_15612 = 0;
	var uLocal_15613 = 0;
	var uLocal_15614 = 0;
	var uLocal_15615 = 0;
	var uLocal_15616 = 0;
	var uLocal_15617 = 0;
	var uLocal_15618 = 0;
	var uLocal_15619 = 0;
	var uLocal_15620 = 0;
	var uLocal_15621 = 0;
	var uLocal_15622 = 0;
	var uLocal_15623 = 0;
	var uLocal_15624 = 0;
	var uLocal_15625 = 0;
	var uLocal_15626 = 0;
	var uLocal_15627 = 0;
	var uLocal_15628 = 0;
	var uLocal_15629 = 0;
	var uLocal_15630 = 0;
	var uLocal_15631 = 0;
	var uLocal_15632 = 0;
	var uLocal_15633 = 0;
	var uLocal_15634 = 0;
	var uLocal_15635 = 0;
	var uLocal_15636 = 0;
	var uLocal_15637 = 0;
	var uLocal_15638 = 0;
	var uLocal_15639 = 0;
	var uLocal_15640 = 0;
	var uLocal_15641 = 0;
	var uLocal_15642 = 0;
	var uLocal_15643 = 0;
	var uLocal_15644 = 0;
	var uLocal_15645 = 0;
	var uLocal_15646 = 0;
	var uLocal_15647 = 0;
	var uLocal_15648 = 0;
	var uLocal_15649 = 0;
	var uLocal_15650 = 0;
	var uLocal_15651 = 0;
	var uLocal_15652 = 0;
	var uLocal_15653 = 0;
	var uLocal_15654 = 0;
	var uLocal_15655 = 0;
	var uLocal_15656 = 0;
	var uLocal_15657 = 0;
	var uLocal_15658 = 0;
	var uLocal_15659 = 0;
	var uLocal_15660 = 0;
	var uLocal_15661 = 0;
	var uLocal_15662 = 0;
	var uLocal_15663 = 0;
	var uLocal_15664 = 0;
	var uLocal_15665 = 0;
	var uLocal_15666 = 0;
	var uLocal_15667 = 0;
	var uLocal_15668 = 0;
	var uLocal_15669 = 0;
	var uLocal_15670 = 0;
	var uLocal_15671 = 0;
	var uLocal_15672 = 0;
	var uLocal_15673 = 0;
	var uLocal_15674 = 0;
	var uLocal_15675 = 0;
	var uLocal_15676 = 0;
	var uLocal_15677 = 0;
	var uLocal_15678 = 0;
	var uLocal_15679 = 0;
	var uLocal_15680 = 0;
	var uLocal_15681 = 0;
	var uLocal_15682 = 0;
	var uLocal_15683 = 0;
	var uLocal_15684 = 0;
	var uLocal_15685 = 0;
	var uLocal_15686 = 0;
	var uLocal_15687 = 0;
	var uLocal_15688 = 0;
	var uLocal_15689 = 0;
	var uLocal_15690 = 0;
	var uLocal_15691 = 0;
	var uLocal_15692 = 0;
	var uLocal_15693 = 0;
	var uLocal_15694 = 0;
	var uLocal_15695 = 0;
	var uLocal_15696 = 0;
	var uLocal_15697 = 0;
	var uLocal_15698 = 0;
	var uLocal_15699 = 0;
	var uLocal_15700 = 0;
	var uLocal_15701 = 0;
	var uLocal_15702 = 0;
	var uLocal_15703 = 0;
	var uLocal_15704 = 0;
	var uLocal_15705 = 0;
	var uLocal_15706 = 0;
	var uLocal_15707 = 0;
	var uLocal_15708 = 0;
	var uLocal_15709 = 0;
	var uLocal_15710 = 0;
	var uLocal_15711 = 0;
	var uLocal_15712 = 0;
	var uLocal_15713 = 0;
	var uLocal_15714 = 0;
	var uLocal_15715 = 0;
	var uLocal_15716 = 0;
	var uLocal_15717 = 0;
	var uLocal_15718 = 0;
	var uLocal_15719 = 0;
	var uLocal_15720 = 0;
	var uLocal_15721 = 0;
	var uLocal_15722 = 0;
	var uLocal_15723 = 0;
	var uLocal_15724 = 0;
	var uLocal_15725 = 0;
	var uLocal_15726 = 0;
	var uLocal_15727 = 0;
	var uLocal_15728 = 0;
	var uLocal_15729 = 0;
	var uLocal_15730 = 0;
	var uLocal_15731 = 0;
	var uLocal_15732 = 0;
	var uLocal_15733 = 0;
	var uLocal_15734 = 0;
	var uLocal_15735 = 0;
	var uLocal_15736 = 0;
	var uLocal_15737 = 0;
	var uLocal_15738 = 0;
	var uLocal_15739 = 0;
	var uLocal_15740 = 0;
	var uLocal_15741 = 0;
	var uLocal_15742 = 0;
	var uLocal_15743 = 0;
	var uLocal_15744 = 0;
	var uLocal_15745 = 0;
	var uLocal_15746 = 0;
	var uLocal_15747 = 0;
	var uLocal_15748 = 0;
	var uLocal_15749 = 0;
	var uLocal_15750 = 0;
	var uLocal_15751 = 0;
	var uLocal_15752 = 0;
	var uLocal_15753 = 0;
	var uLocal_15754 = 0;
	var uLocal_15755 = 0;
	var uLocal_15756 = 0;
	var uLocal_15757 = 0;
	var uLocal_15758 = 0;
	var uLocal_15759 = 0;
	var uLocal_15760 = 0;
	var uLocal_15761 = 0;
	var uLocal_15762 = 0;
	var uLocal_15763 = 0;
	var uLocal_15764 = 0;
	var uLocal_15765 = 0;
	var uLocal_15766 = 0;
	var uLocal_15767 = 0;
	var uLocal_15768 = 0;
	var uLocal_15769 = 0;
	var uLocal_15770 = 0;
	var uLocal_15771 = 0;
	var uLocal_15772 = 0;
	var uLocal_15773 = 0;
	var uLocal_15774 = 0;
	var uLocal_15775 = 0;
	var uLocal_15776 = 0;
	var uLocal_15777 = 0;
	var uLocal_15778 = 0;
	var uLocal_15779 = 0;
	var uLocal_15780 = 0;
	var uLocal_15781 = 0;
	var uLocal_15782 = 0;
	var uLocal_15783 = 0;
	var uLocal_15784 = 0;
	var uLocal_15785 = 0;
	var uLocal_15786 = 0;
	var uLocal_15787 = 0;
	var uLocal_15788 = 0;
	var uLocal_15789 = 0;
	var uLocal_15790 = 0;
	var uLocal_15791 = 0;
	var uLocal_15792 = 0;
	var uLocal_15793 = 0;
	var uLocal_15794 = 0;
	var uLocal_15795 = 0;
	var uLocal_15796 = 0;
	var uLocal_15797 = 0;
	var uLocal_15798 = 0;
	var uLocal_15799 = 0;
	var uLocal_15800 = 0;
	var uLocal_15801 = 0;
	var uLocal_15802 = 0;
	var uLocal_15803 = 0;
	var uLocal_15804 = 0;
	var uLocal_15805 = 0;
	var uLocal_15806 = 0;
	var uLocal_15807 = 0;
	var uLocal_15808 = 0;
	var uLocal_15809 = 0;
	var uLocal_15810 = 0;
	var uLocal_15811 = 0;
	var uLocal_15812 = 0;
	var uLocal_15813 = 0;
	var uLocal_15814 = 0;
	var uLocal_15815 = 0;
	var uLocal_15816 = 0;
	var uLocal_15817 = 0;
	var uLocal_15818 = 0;
	var uLocal_15819 = 0;
	var uLocal_15820 = 0;
	var uLocal_15821 = 0;
	var uLocal_15822 = 0;
	var uLocal_15823 = 0;
	var uLocal_15824 = 0;
	var uLocal_15825 = 0;
	var uLocal_15826 = 0;
	var uLocal_15827 = 0;
	var uLocal_15828 = 0;
	var uLocal_15829 = 0;
	var uLocal_15830 = 0;
	var uLocal_15831 = 0;
	var uLocal_15832 = 0;
	var uLocal_15833 = 0;
	var uLocal_15834 = 0;
	var uLocal_15835 = 0;
	var uLocal_15836 = 0;
	var uLocal_15837 = 0;
	var uLocal_15838 = 0;
	var uLocal_15839 = 0;
	var uLocal_15840 = 0;
	var uLocal_15841 = 0;
	var uLocal_15842 = 0;
	var uLocal_15843 = 0;
	var uLocal_15844 = 0;
	var uLocal_15845 = 0;
	var uLocal_15846 = 0;
	var uLocal_15847 = 0;
	var uLocal_15848 = 0;
	var uLocal_15849 = 0;
	var uLocal_15850 = 0;
	var uLocal_15851 = 0;
	var uLocal_15852 = 0;
	var uLocal_15853 = 0;
	var uLocal_15854 = 0;
	var uLocal_15855 = 0;
	var uLocal_15856 = 0;
	var uLocal_15857 = 0;
	var uLocal_15858 = 0;
	var uLocal_15859 = 0;
	var uLocal_15860 = 0;
	var uLocal_15861 = 0;
	var uLocal_15862 = 0;
	var uLocal_15863 = 0;
	var uLocal_15864 = 0;
	var uLocal_15865 = 0;
	var uLocal_15866 = 0;
	var uLocal_15867 = 0;
	var uLocal_15868 = 0;
	var uLocal_15869 = 0;
	var uLocal_15870 = 0;
	var uLocal_15871 = 0;
	var uLocal_15872 = 0;
	var uLocal_15873 = 0;
	var uLocal_15874 = 0;
	var uLocal_15875 = 0;
	var uLocal_15876 = 0;
	var uLocal_15877 = 0;
	var uLocal_15878 = 0;
	var uLocal_15879 = 0;
	var uLocal_15880 = 0;
	var uLocal_15881 = 0;
	var uLocal_15882 = 0;
	var uLocal_15883 = 0;
	var uLocal_15884 = 0;
	var uLocal_15885 = 0;
	var uLocal_15886 = 0;
	var uLocal_15887 = 0;
	var uLocal_15888 = 0;
	var uLocal_15889 = 0;
	var uLocal_15890 = 0;
	var uLocal_15891 = 0;
	var uLocal_15892 = 0;
	var uLocal_15893 = 0;
	var uLocal_15894 = 0;
	var uLocal_15895 = 0;
	var uLocal_15896 = 0;
	var uLocal_15897 = 0;
	var uLocal_15898 = 0;
	var uLocal_15899 = 0;
	var uLocal_15900 = 0;
	var uLocal_15901 = 0;
	var uLocal_15902 = 0;
	var uLocal_15903 = 0;
	var uLocal_15904 = 0;
	var uLocal_15905 = 0;
	var uLocal_15906 = 0;
	var uLocal_15907 = 0;
	var uLocal_15908 = 0;
	var uLocal_15909 = 0;
	var uLocal_15910 = 0;
	var uLocal_15911 = 0;
	var uLocal_15912 = 0;
	var uLocal_15913 = 0;
	var uLocal_15914 = 0;
	var uLocal_15915 = 0;
	var uLocal_15916 = 0;
	var uLocal_15917 = 0;
	var uLocal_15918 = 0;
	var uLocal_15919 = 0;
	var uLocal_15920 = 0;
	var uLocal_15921 = 0;
	var uLocal_15922 = 0;
	var uLocal_15923 = 0;
	var uLocal_15924 = 0;
	var uLocal_15925 = 0;
	var uLocal_15926 = 0;
	var uLocal_15927 = 0;
	var uLocal_15928 = 0;
	var uLocal_15929 = 0;
	var uLocal_15930 = 0;
	var uLocal_15931 = 0;
	var uLocal_15932 = 0;
	var uLocal_15933 = 0;
	var uLocal_15934 = 0;
	var uLocal_15935 = 0;
	var uLocal_15936 = 0;
	var uLocal_15937 = 0;
	var uLocal_15938 = 0;
	var uLocal_15939 = 0;
	var uLocal_15940 = 0;
	var uLocal_15941 = 0;
	var uLocal_15942 = 0;
	var uLocal_15943 = 0;
	var uLocal_15944 = 0;
	var uLocal_15945 = 0;
	var uLocal_15946 = 0;
	var uLocal_15947 = 0;
	var uLocal_15948 = 0;
	var uLocal_15949 = 0;
	var uLocal_15950 = 0;
	var uLocal_15951 = 0;
	var uLocal_15952 = 0;
	var uLocal_15953 = 0;
	var uLocal_15954 = 0;
	var uLocal_15955 = 0;
	var uLocal_15956 = 0;
	var uLocal_15957 = 0;
	var uLocal_15958 = 0;
	var uLocal_15959 = 0;
	var uLocal_15960 = 0;
	var uLocal_15961 = 0;
	var uLocal_15962 = 0;
	var uLocal_15963 = 0;
	var uLocal_15964 = 0;
	var uLocal_15965 = 0;
	var uLocal_15966 = 0;
	var uLocal_15967 = 0;
	var uLocal_15968 = 0;
	var uLocal_15969 = 0;
	var uLocal_15970 = 0;
	var uLocal_15971 = 0;
	var uLocal_15972 = 0;
	var uLocal_15973 = 0;
	var uLocal_15974 = 0;
	var uLocal_15975 = 0;
	var uLocal_15976 = 0;
	var uLocal_15977 = 0;
	var uLocal_15978 = 0;
	var uLocal_15979 = 0;
	var uLocal_15980 = 0;
	var uLocal_15981 = 0;
	var uLocal_15982 = 0;
	var uLocal_15983 = 0;
	var uLocal_15984 = 0;
	var uLocal_15985 = 0;
	var uLocal_15986 = 0;
	var uLocal_15987 = 0;
	var uLocal_15988 = 0;
	var uLocal_15989 = 0;
	var uLocal_15990 = 0;
	var uLocal_15991 = 0;
	var uLocal_15992 = 0;
	var uLocal_15993 = 0;
	var uLocal_15994 = 0;
	var uLocal_15995 = 0;
	var uLocal_15996 = 0;
	var uLocal_15997 = 0;
	var uLocal_15998 = 0;
	var uLocal_15999 = 0;
	var uLocal_16000 = 0;
	var uLocal_16001 = 0;
	var uLocal_16002 = 0;
	var uLocal_16003 = 0;
	var uLocal_16004 = 0;
	var uLocal_16005 = 0;
	var uLocal_16006 = 0;
	var uLocal_16007 = 0;
	var uLocal_16008 = 0;
	var uLocal_16009 = 0;
	var uLocal_16010 = 0;
	var uLocal_16011 = 0;
	var uLocal_16012 = 0;
	var uLocal_16013 = 0;
	var uLocal_16014 = 0;
	var uLocal_16015 = 0;
	var uLocal_16016 = 0;
	var uLocal_16017 = 0;
	var uLocal_16018 = 0;
	var uLocal_16019 = 0;
	var uLocal_16020 = 0;
	var uLocal_16021 = 0;
	var uLocal_16022 = 0;
	var uLocal_16023 = 0;
	var uLocal_16024 = 0;
	var uLocal_16025 = 0;
	var uLocal_16026 = 0;
	var uLocal_16027 = 0;
	var uLocal_16028 = 0;
	var uLocal_16029 = 0;
	var uLocal_16030 = 0;
	var uLocal_16031 = 0;
	var uLocal_16032 = 0;
	var uLocal_16033 = 0;
	var uLocal_16034 = 0;
	var uLocal_16035 = 0;
	var uLocal_16036 = 0;
	var uLocal_16037 = 0;
	var uLocal_16038 = 0;
	var uLocal_16039 = 0;
	var uLocal_16040 = 0;
	var uLocal_16041 = 0;
	var uLocal_16042 = 0;
	var uLocal_16043 = 0;
	var uLocal_16044 = 0;
	var uLocal_16045 = 0;
	var uLocal_16046 = 0;
	var uLocal_16047 = 0;
	var uLocal_16048 = 0;
	var uLocal_16049 = 0;
	var uLocal_16050 = 0;
	var uLocal_16051 = 0;
	var uLocal_16052 = 0;
	var uLocal_16053 = 0;
	var uLocal_16054 = 0;
	var uLocal_16055 = 0;
	var uLocal_16056 = 0;
	var uLocal_16057 = 0;
	var uLocal_16058 = 0;
	var uLocal_16059 = 0;
	var uLocal_16060 = 0;
	var uLocal_16061 = 0;
	var uLocal_16062 = 0;
	var uLocal_16063 = 0;
	var uLocal_16064 = 0;
	var uLocal_16065 = 0;
	var uLocal_16066 = 0;
	var uLocal_16067 = 0;
	var uLocal_16068 = 0;
	var uLocal_16069 = 0;
	var uLocal_16070 = 0;
	var uLocal_16071 = 0;
	var uLocal_16072 = 0;
	var uLocal_16073 = 0;
	var uLocal_16074 = 0;
	var uLocal_16075 = 0;
	var uLocal_16076 = 0;
	var uLocal_16077 = 0;
	var uLocal_16078 = 0;
	var uLocal_16079 = 0;
	var uLocal_16080 = 0;
	var uLocal_16081 = 0;
	var uLocal_16082 = 0;
	var uLocal_16083 = 0;
	var uLocal_16084 = 0;
	var uLocal_16085 = 0;
	var uLocal_16086 = 0;
	var uLocal_16087 = 0;
	var uLocal_16088 = 0;
	var uLocal_16089 = 0;
	var uLocal_16090 = 0;
	var uLocal_16091 = 0;
	var uLocal_16092 = 0;
	var uLocal_16093 = 0;
	var uLocal_16094 = 0;
	var uLocal_16095 = 0;
	var uLocal_16096 = 0;
	var uLocal_16097 = 0;
	var uLocal_16098 = 0;
	var uLocal_16099 = 0;
	var uLocal_16100 = 0;
	var uLocal_16101 = 0;
	var uLocal_16102 = 0;
	var uLocal_16103 = 0;
	var uLocal_16104 = 0;
	var uLocal_16105 = 0;
	var uLocal_16106 = 0;
	var uLocal_16107 = 0;
	var uLocal_16108 = 0;
	var uLocal_16109 = 0;
	var uLocal_16110 = 0;
	var uLocal_16111 = 0;
	var uLocal_16112 = 0;
	var uLocal_16113 = 0;
	var uLocal_16114 = 0;
	var uLocal_16115 = 0;
	var uLocal_16116 = 0;
	var uLocal_16117 = 0;
	var uLocal_16118 = 0;
	var uLocal_16119 = 0;
	var uLocal_16120 = 0;
	var uLocal_16121 = 0;
	var uLocal_16122 = 0;
	var uLocal_16123 = 0;
	var uLocal_16124 = 0;
	var uLocal_16125 = 0;
	var uLocal_16126 = 0;
	var uLocal_16127 = 0;
	var uLocal_16128 = 0;
	var uLocal_16129 = 0;
	var uLocal_16130 = 0;
	var uLocal_16131 = 0;
	var uLocal_16132 = 0;
	var uLocal_16133 = 0;
	var uLocal_16134 = 0;
	var uLocal_16135 = 0;
	var uLocal_16136 = 0;
	var uLocal_16137 = 0;
	var uLocal_16138 = 0;
	var uLocal_16139 = 0;
	var uLocal_16140 = 0;
	var uLocal_16141 = 0;
	var uLocal_16142 = 0;
	var uLocal_16143 = 0;
	var uLocal_16144 = 0;
	var uLocal_16145 = 0;
	var uLocal_16146 = 0;
	var uLocal_16147 = 0;
	var uLocal_16148 = 0;
	var uLocal_16149 = 0;
	var uLocal_16150 = 0;
	var uLocal_16151 = 0;
	var uLocal_16152 = 0;
	var uLocal_16153 = 0;
	var uLocal_16154 = 0;
	var uLocal_16155 = 0;
	var uLocal_16156 = 0;
	var uLocal_16157 = 0;
	var uLocal_16158 = 0;
	var uLocal_16159 = 0;
	var uLocal_16160 = 0;
	var uLocal_16161 = 0;
	var uLocal_16162 = 0;
	var uLocal_16163 = 0;
	var uLocal_16164 = 0;
	var uLocal_16165 = 0;
	var uLocal_16166 = 0;
	var uLocal_16167 = 0;
	var uLocal_16168 = 0;
	var uLocal_16169 = 0;
	var uLocal_16170 = 0;
	var uLocal_16171 = 0;
	var uLocal_16172 = 0;
	var uLocal_16173 = 0;
	var uLocal_16174 = 0;
	var uLocal_16175 = 0;
	var uLocal_16176 = 0;
	var uLocal_16177 = 0;
	var uLocal_16178 = 0;
	var uLocal_16179 = 0;
	var uLocal_16180 = 0;
	var uLocal_16181 = 0;
	var uLocal_16182 = 0;
	var uLocal_16183 = 0;
	var uLocal_16184 = 0;
	var uLocal_16185 = 0;
	var uLocal_16186 = 0;
	var uLocal_16187 = 0;
	var uLocal_16188 = 0;
	var uLocal_16189 = 0;
	var uLocal_16190 = 0;
	var uLocal_16191 = 0;
	var uLocal_16192 = 0;
	var uLocal_16193 = 0;
	var uLocal_16194 = 0;
	var uLocal_16195 = 0;
	var uLocal_16196 = 0;
	var uLocal_16197 = 0;
	var uLocal_16198 = 0;
	var uLocal_16199 = 0;
	var uLocal_16200 = 0;
	var uLocal_16201 = 0;
	var uLocal_16202 = 0;
	var uLocal_16203 = 0;
	var uLocal_16204 = 0;
	var uLocal_16205 = 0;
	var uLocal_16206 = 0;
	var uLocal_16207 = 0;
	var uLocal_16208 = 0;
	var uLocal_16209 = 0;
	var uLocal_16210 = 0;
	var uLocal_16211 = 0;
	var uLocal_16212 = 0;
	var uLocal_16213 = 0;
	var uLocal_16214 = 0;
	var uLocal_16215 = 0;
	var uLocal_16216 = 0;
	var uLocal_16217 = 0;
	var uLocal_16218 = 0;
	var uLocal_16219 = 0;
	var uLocal_16220 = 0;
	var uLocal_16221 = 0;
	var uLocal_16222 = 0;
	var uLocal_16223 = 0;
	var uLocal_16224 = 0;
	var uLocal_16225 = 0;
	var uLocal_16226 = 0;
	var uLocal_16227 = 0;
	var uLocal_16228 = 0;
	var uLocal_16229 = 0;
	var uLocal_16230 = 0;
	var uLocal_16231 = 0;
	var uLocal_16232 = 0;
	var uLocal_16233 = 0;
	var uLocal_16234 = 0;
	var uLocal_16235 = 0;
	var uLocal_16236 = 0;
	var uLocal_16237 = 0;
	var uLocal_16238 = 0;
	var uLocal_16239 = 0;
	var uLocal_16240 = 0;
	var uLocal_16241 = 0;
	var uLocal_16242 = 0;
	var uLocal_16243 = 0;
	var uLocal_16244 = 0;
	var uLocal_16245 = 0;
	var uLocal_16246 = 0;
	var uLocal_16247 = 0;
	var uLocal_16248 = 0;
	var uLocal_16249 = 0;
	var uLocal_16250 = 0;
	var uLocal_16251 = 0;
	var uLocal_16252 = 0;
	var uLocal_16253 = 0;
	var uLocal_16254 = 0;
	var uLocal_16255 = 0;
	var uLocal_16256 = 0;
	var uLocal_16257 = 0;
	var uLocal_16258 = 0;
	var uLocal_16259 = 0;
	var uLocal_16260 = 0;
	var uLocal_16261 = 0;
	var uLocal_16262 = 0;
	var uLocal_16263 = 0;
	var uLocal_16264 = 0;
	var uLocal_16265 = 0;
	var uLocal_16266 = 0;
	var uLocal_16267 = 0;
	var uLocal_16268 = 0;
	var uLocal_16269 = 0;
	var uLocal_16270 = 0;
	var uLocal_16271 = 0;
	var uLocal_16272 = 0;
	var uLocal_16273 = 0;
	var uLocal_16274 = 0;
	var uLocal_16275 = 0;
	var uLocal_16276 = 0;
	var uLocal_16277 = 0;
	var uLocal_16278 = 0;
	var uLocal_16279 = 0;
	var uLocal_16280 = 0;
	var uLocal_16281 = 0;
	var uLocal_16282 = 0;
	var uLocal_16283 = 0;
	var uLocal_16284 = 0;
	var uLocal_16285 = 0;
	var uLocal_16286 = 0;
	var uLocal_16287 = 0;
	var uLocal_16288 = 0;
	var uLocal_16289 = 0;
	var uLocal_16290 = 0;
	var uLocal_16291 = 0;
	var uLocal_16292 = 0;
	var uLocal_16293 = 0;
	var uLocal_16294 = 0;
	var uLocal_16295 = 0;
	var uLocal_16296 = 0;
	var uLocal_16297 = 0;
	var uLocal_16298 = 0;
	var uLocal_16299 = 0;
	var uLocal_16300 = 0;
	var uLocal_16301 = 0;
	var uLocal_16302 = 0;
	var uLocal_16303 = 0;
	var uLocal_16304 = 0;
	var uLocal_16305 = 0;
	var uLocal_16306 = 0;
	var uLocal_16307 = 0;
	var uLocal_16308 = 0;
	var uLocal_16309 = 0;
	var uLocal_16310 = 0;
	var uLocal_16311 = 0;
	var uLocal_16312 = 0;
	var uLocal_16313 = 0;
	var uLocal_16314 = 0;
	var uLocal_16315 = 0;
	var uLocal_16316 = 0;
	var uLocal_16317 = 0;
	var uLocal_16318 = 0;
	var uLocal_16319 = 0;
	var uLocal_16320 = 0;
	var uLocal_16321 = 0;
	var uLocal_16322 = 0;
	var uLocal_16323 = 0;
	var uLocal_16324 = 0;
	var uLocal_16325 = 0;
	var uLocal_16326 = 0;
	var uLocal_16327 = 0;
	var uLocal_16328 = 0;
	var uLocal_16329 = 0;
	var uLocal_16330 = 0;
	var uLocal_16331 = 0;
	var uLocal_16332 = 0;
	var uLocal_16333 = 0;
	var uLocal_16334 = 0;
	var uLocal_16335 = 0;
	var uLocal_16336 = 0;
	var uLocal_16337 = 0;
	var uLocal_16338 = 0;
	var uLocal_16339 = 0;
	var uLocal_16340 = 0;
	var uLocal_16341 = 0;
	var uLocal_16342 = 0;
	var uLocal_16343 = 0;
	var uLocal_16344 = 0;
	var uLocal_16345 = 0;
	var uLocal_16346 = 0;
	var uLocal_16347 = 0;
	var uLocal_16348 = 0;
	var uLocal_16349 = 0;
	var uLocal_16350 = 0;
	var uLocal_16351 = 0;
	var uLocal_16352 = 0;
	var uLocal_16353 = 0;
	var uLocal_16354 = 0;
	var uLocal_16355 = 0;
	var uLocal_16356 = 0;
	var uLocal_16357 = 0;
	var uLocal_16358 = 0;
	var uLocal_16359 = 0;
	var uLocal_16360 = 0;
	var uLocal_16361 = 0;
	var uLocal_16362 = 0;
	var uLocal_16363 = 0;
	var uLocal_16364 = 0;
	var uLocal_16365 = 0;
	var uLocal_16366 = 0;
	var uLocal_16367 = 0;
	var uLocal_16368 = 0;
	var uLocal_16369 = 0;
	var uLocal_16370 = 0;
	var uLocal_16371 = 0;
	var uLocal_16372 = 0;
	var uLocal_16373 = 0;
	var uLocal_16374 = 0;
	var uLocal_16375 = 0;
	var uLocal_16376 = 0;
	var uLocal_16377 = 0;
	var uLocal_16378 = 0;
	var uLocal_16379 = 0;
	var uLocal_16380 = 0;
	var uLocal_16381 = 0;
	var uLocal_16382 = 0;
	var uLocal_16383 = 0;
	var uLocal_16384 = 0;
	var uLocal_16385 = 0;
	var uLocal_16386 = 0;
	var uLocal_16387 = 0;
	var uLocal_16388 = 0;
	var uLocal_16389 = 0;
	var uLocal_16390 = 0;
	var uLocal_16391 = 0;
	var uLocal_16392 = 0;
	var uLocal_16393 = 0;
	var uLocal_16394 = 0;
	var uLocal_16395 = 0;
	var uLocal_16396 = 0;
	var uLocal_16397 = 0;
	var uLocal_16398 = 0;
	var uLocal_16399 = 0;
	var uLocal_16400 = 0;
	var uLocal_16401 = 0;
	var uLocal_16402 = 0;
	var uLocal_16403 = 0;
	var uLocal_16404 = 0;
	var uLocal_16405 = 0;
	var uLocal_16406 = 0;
	var uLocal_16407 = 0;
	var uLocal_16408 = 0;
	var uLocal_16409 = 0;
	var uLocal_16410 = 0;
	var uLocal_16411 = 0;
	var uLocal_16412 = 0;
	var uLocal_16413 = 0;
	var uLocal_16414 = 0;
	var uLocal_16415 = 0;
	var uLocal_16416 = 0;
	var uLocal_16417 = 0;
	var uLocal_16418 = 0;
	var uLocal_16419 = 0;
	var uLocal_16420 = 0;
	var uLocal_16421 = 0;
	var uLocal_16422 = 0;
	var uLocal_16423 = 0;
	var uLocal_16424 = 0;
	var uLocal_16425 = 0;
	var uLocal_16426 = 0;
	var uLocal_16427 = 0;
	var uLocal_16428 = 0;
	var uLocal_16429 = 0;
	var uLocal_16430 = 0;
	var uLocal_16431 = 0;
	var uLocal_16432 = 0;
	var uLocal_16433 = 0;
	var uLocal_16434 = 0;
	var uLocal_16435 = 0;
	var uLocal_16436 = 0;
	var uLocal_16437 = 0;
	var uLocal_16438 = 0;
	var uLocal_16439 = 0;
	var uLocal_16440 = 0;
	var uLocal_16441 = 0;
	var uLocal_16442 = 0;
	var uLocal_16443 = 0;
	var uLocal_16444 = 0;
	var uLocal_16445 = 0;
	var uLocal_16446 = 0;
	var uLocal_16447 = 0;
	var uLocal_16448 = 0;
	var uLocal_16449 = 0;
	var uLocal_16450 = 0;
	var uLocal_16451 = 0;
	var uLocal_16452 = 0;
	var uLocal_16453 = 0;
	var uLocal_16454 = 0;
	var uLocal_16455 = 0;
	var uLocal_16456 = 0;
	var uLocal_16457 = 0;
	var uLocal_16458 = 0;
	var uLocal_16459 = 0;
	var uLocal_16460 = 0;
	var uLocal_16461 = 0;
	var uLocal_16462 = 0;
	var uLocal_16463 = 0;
	var uLocal_16464 = 0;
	var uLocal_16465 = 0;
	var uLocal_16466 = 0;
	var uLocal_16467 = 0;
	var uLocal_16468 = 0;
	var uLocal_16469 = 0;
	var uLocal_16470 = 0;
	var uLocal_16471 = 0;
	var uLocal_16472 = 0;
	var uLocal_16473 = 0;
	var uLocal_16474 = 0;
	var uLocal_16475 = 0;
	var uLocal_16476 = 0;
	var uLocal_16477 = 0;
	var uLocal_16478 = 0;
	var uLocal_16479 = 0;
	var uLocal_16480 = 0;
	var uLocal_16481 = 0;
	var uLocal_16482 = 0;
	var uLocal_16483 = 0;
	var uLocal_16484 = 0;
	var uLocal_16485 = 0;
	var uLocal_16486 = 0;
	var uLocal_16487 = 0;
	var uLocal_16488 = 0;
	var uLocal_16489 = 0;
	var uLocal_16490 = 0;
	var uLocal_16491 = 0;
	var uLocal_16492 = 0;
	var uLocal_16493 = 0;
	var uLocal_16494 = 0;
	var uLocal_16495 = 0;
	var uLocal_16496 = 0;
	var uLocal_16497 = 0;
	var uLocal_16498 = 0;
	var uLocal_16499 = 0;
	var uLocal_16500 = 0;
	var uLocal_16501 = 0;
	var uLocal_16502 = 0;
	var uLocal_16503 = 0;
	var uLocal_16504 = 0;
	var uLocal_16505 = 0;
	var uLocal_16506 = 0;
	var uLocal_16507 = 0;
	var uLocal_16508 = 0;
	var uLocal_16509 = 0;
	var uLocal_16510 = 0;
	var uLocal_16511 = 0;
	var uLocal_16512 = 0;
	var uLocal_16513 = 0;
	var uLocal_16514 = 0;
	var uLocal_16515 = 0;
	var uLocal_16516 = 0;
	var uLocal_16517 = 0;
	var uLocal_16518 = 0;
	var uLocal_16519 = 0;
	var uLocal_16520 = 0;
	var uLocal_16521 = 0;
	var uLocal_16522 = 0;
	var uLocal_16523 = 0;
	var uLocal_16524 = 0;
	var uLocal_16525 = 0;
	var uLocal_16526 = 0;
	var uLocal_16527 = 0;
	var uLocal_16528 = 0;
	var uLocal_16529 = 0;
	var uLocal_16530 = 0;
	var uLocal_16531 = 0;
	var uLocal_16532 = 0;
	var uLocal_16533 = 0;
	var uLocal_16534 = 0;
	var uLocal_16535 = 0;
	var uLocal_16536 = 0;
	var uLocal_16537 = 0;
	var uLocal_16538 = 0;
	var uLocal_16539 = 0;
	var uLocal_16540 = 0;
	var uLocal_16541 = 0;
	var uLocal_16542 = 0;
	var uLocal_16543 = 0;
	var uLocal_16544 = 0;
	var uLocal_16545 = 0;
	var uLocal_16546 = 0;
	var uLocal_16547 = 0;
	var uLocal_16548 = 0;
	var uLocal_16549 = 0;
	var uLocal_16550 = 0;
	var uLocal_16551 = 0;
	var uLocal_16552 = 0;
	var uLocal_16553 = 0;
	var uLocal_16554 = 0;
	var uLocal_16555 = 0;
	var uLocal_16556 = 0;
	var uLocal_16557 = 0;
	var uLocal_16558 = 0;
	var uLocal_16559 = 0;
	var uLocal_16560 = 0;
	var uLocal_16561 = 0;
	var uLocal_16562 = 0;
	var uLocal_16563 = 0;
	var uLocal_16564 = 0;
	var uLocal_16565 = 0;
	var uLocal_16566 = 0;
	var uLocal_16567 = 0;
	var uLocal_16568 = 0;
	var uLocal_16569 = 0;
	var uLocal_16570 = 0;
	var uLocal_16571 = 0;
	var uLocal_16572 = 0;
	var uLocal_16573 = 0;
	var uLocal_16574 = 0;
	var uLocal_16575 = 0;
	var uLocal_16576 = 0;
	var uLocal_16577 = 0;
	var uLocal_16578 = 0;
	var uLocal_16579 = 0;
	var uLocal_16580 = 0;
	var uLocal_16581 = 0;
	var uLocal_16582 = 0;
	var uLocal_16583 = 0;
	var uLocal_16584 = 0;
	var uLocal_16585 = 0;
	var uLocal_16586 = 0;
	var uLocal_16587 = 0;
	var uLocal_16588 = 0;
	var uLocal_16589 = 0;
	var uLocal_16590 = 0;
	var uLocal_16591 = 0;
	var uLocal_16592 = 0;
	var uLocal_16593 = 0;
	var uLocal_16594 = 0;
	var uLocal_16595 = 0;
	var uLocal_16596 = 0;
	var uLocal_16597 = 0;
	var uLocal_16598 = 0;
	var uLocal_16599 = 0;
	var uLocal_16600 = 0;
	var uLocal_16601 = 0;
	var uLocal_16602 = 0;
	var uLocal_16603 = 0;
	var uLocal_16604 = 0;
	var uLocal_16605 = 0;
	var uLocal_16606 = 0;
	var uLocal_16607 = 0;
	var uLocal_16608 = 0;
	var uLocal_16609 = 0;
	var uLocal_16610 = 0;
	var uLocal_16611 = 0;
	var uLocal_16612 = 0;
	var uLocal_16613 = 0;
	var uLocal_16614 = 0;
	var uLocal_16615 = 0;
	var uLocal_16616 = 0;
	var uLocal_16617 = 0;
	var uLocal_16618 = 0;
	var uLocal_16619 = 0;
	var uLocal_16620 = 0;
	var uLocal_16621 = 0;
	var uLocal_16622 = 0;
	var uLocal_16623 = 0;
	var uLocal_16624 = 0;
	var uLocal_16625 = 0;
	var uLocal_16626 = 0;
	var uLocal_16627 = 0;
	var uLocal_16628 = 0;
	var uLocal_16629 = 0;
	var uLocal_16630 = 0;
	var uLocal_16631 = 0;
	var uLocal_16632 = 0;
	var uLocal_16633 = 0;
	var uLocal_16634 = 0;
	var uLocal_16635 = 0;
	var uLocal_16636 = 0;
	var uLocal_16637 = 0;
	var uLocal_16638 = 0;
	var uLocal_16639 = 0;
	var uLocal_16640 = 0;
	var uLocal_16641 = 0;
	var uLocal_16642 = 0;
	var uLocal_16643 = 0;
	var uLocal_16644 = 0;
	var uLocal_16645 = 0;
	var uLocal_16646 = 0;
	var uLocal_16647 = 0;
	var uLocal_16648 = 0;
	var uLocal_16649 = 0;
	var uLocal_16650 = 0;
	var uLocal_16651 = 0;
	var uLocal_16652 = 0;
	var uLocal_16653 = 0;
	var uLocal_16654 = 0;
	var uLocal_16655 = 0;
	var uLocal_16656 = 0;
	var uLocal_16657 = 0;
	var uLocal_16658 = 0;
	var uLocal_16659 = 0;
	var uLocal_16660 = 0;
	var uLocal_16661 = 0;
	var uLocal_16662 = 0;
	var uLocal_16663 = 0;
	var uLocal_16664 = 0;
	var uLocal_16665 = 0;
	var uLocal_16666 = 0;
	var uLocal_16667 = 0;
	var uLocal_16668 = 0;
	var uLocal_16669 = 0;
	var uLocal_16670 = 0;
	var uLocal_16671 = 0;
	var uLocal_16672 = 0;
	var uLocal_16673 = 0;
	var uLocal_16674 = 0;
	var uLocal_16675 = 0;
	var uLocal_16676 = 0;
	var uLocal_16677 = 0;
	var uLocal_16678 = 0;
	var uLocal_16679 = 0;
	var uLocal_16680 = 0;
	var uLocal_16681 = 0;
	var uLocal_16682 = 0;
	var uLocal_16683 = 0;
	var uLocal_16684 = 0;
	var uLocal_16685 = 0;
	var uLocal_16686 = 0;
	var uLocal_16687 = 0;
	var uLocal_16688 = 0;
	var uLocal_16689 = 0;
	var uLocal_16690 = 0;
	var uLocal_16691 = 0;
	var uLocal_16692 = 0;
	var uLocal_16693 = 0;
	var uLocal_16694 = 0;
	var uLocal_16695 = 0;
	var uLocal_16696 = 0;
	var uLocal_16697 = 0;
	var uLocal_16698 = 0;
	var uLocal_16699 = 0;
	var uLocal_16700 = 0;
	var uLocal_16701 = 0;
	var uLocal_16702 = 0;
	var uLocal_16703 = 0;
	var uLocal_16704 = 0;
	var uLocal_16705 = 0;
	var uLocal_16706 = 0;
	var uLocal_16707 = 0;
	var uLocal_16708 = 0;
	var uLocal_16709 = 0;
	var uLocal_16710 = 0;
	var uLocal_16711 = 0;
	var uLocal_16712 = 0;
	var uLocal_16713 = 0;
	var uLocal_16714 = 0;
	var uLocal_16715 = 0;
	var uLocal_16716 = 0;
	var uLocal_16717 = 0;
	var uLocal_16718 = 0;
	var uLocal_16719 = 0;
	var uLocal_16720 = 0;
	var uLocal_16721 = 0;
	var uLocal_16722 = 0;
	var uLocal_16723 = 0;
	var uLocal_16724 = 0;
	var uLocal_16725 = 0;
	var uLocal_16726 = 0;
	var uLocal_16727 = 0;
	var uLocal_16728 = 0;
	var uLocal_16729 = 0;
	var uLocal_16730 = 0;
	var uLocal_16731 = 0;
	var uLocal_16732 = 0;
	var uLocal_16733 = 0;
	var uLocal_16734 = 0;
	var uLocal_16735 = 0;
	var uLocal_16736 = 0;
	var uLocal_16737 = 0;
	var uLocal_16738 = 0;
	var uLocal_16739 = 0;
	var uLocal_16740 = 0;
	var uLocal_16741 = 0;
	var uLocal_16742 = 0;
	var uLocal_16743 = 0;
	var uLocal_16744 = 0;
	var uLocal_16745 = 0;
	var uLocal_16746 = 0;
	var uLocal_16747 = 0;
	var uLocal_16748 = 0;
	var uLocal_16749 = 0;
	var uLocal_16750 = 0;
	var uLocal_16751 = 0;
	var uLocal_16752 = 0;
	var uLocal_16753 = 0;
	var uLocal_16754 = 0;
	var uLocal_16755 = 0;
	var uLocal_16756 = 0;
	var uLocal_16757 = 0;
	var uLocal_16758 = 0;
	var uLocal_16759 = 0;
	var uLocal_16760 = 0;
	var uLocal_16761 = 0;
	var uLocal_16762 = 0;
	var uLocal_16763 = 0;
	var uLocal_16764 = 0;
	var uLocal_16765 = 0;
	var uLocal_16766 = 0;
	var uLocal_16767 = 0;
	var uLocal_16768 = 0;
	var uLocal_16769 = 0;
	var uLocal_16770 = 0;
	var uLocal_16771 = 0;
	var uLocal_16772 = 0;
	var uLocal_16773 = 0;
	var uLocal_16774 = 0;
	var uLocal_16775 = 0;
	var uLocal_16776 = 0;
	var uLocal_16777 = 0;
	var uLocal_16778 = 0;
	var uLocal_16779 = 0;
	var uLocal_16780 = 0;
	var uLocal_16781 = 0;
	var uLocal_16782 = 0;
	var uLocal_16783 = 0;
	var uLocal_16784 = 0;
	var uLocal_16785 = 0;
	var uLocal_16786 = 0;
	var uLocal_16787 = 0;
	var uLocal_16788 = 0;
	var uLocal_16789 = 0;
	var uLocal_16790 = 0;
	var uLocal_16791 = 0;
	var uLocal_16792 = 0;
	var uLocal_16793 = 0;
	var uLocal_16794 = 0;
	var uLocal_16795 = 0;
	var uLocal_16796 = 0;
	var uLocal_16797 = 0;
	var uLocal_16798 = 0;
	var uLocal_16799 = 0;
	var uLocal_16800 = 0;
	var uLocal_16801 = 0;
	var uLocal_16802 = 0;
	var uLocal_16803 = 0;
	var uLocal_16804 = 0;
	var uLocal_16805 = 0;
	var uLocal_16806 = 0;
	var uLocal_16807 = 0;
	var uLocal_16808 = 0;
	var uLocal_16809 = 0;
	var uLocal_16810 = 0;
	var uLocal_16811 = 0;
	var uLocal_16812 = 0;
	var uLocal_16813 = 0;
	var uLocal_16814 = 0;
	var uLocal_16815 = 0;
	var uLocal_16816 = 0;
	var uLocal_16817 = 0;
	var uLocal_16818 = 0;
	var uLocal_16819 = 0;
	var uLocal_16820 = 0;
	var uLocal_16821 = 0;
	var uLocal_16822 = 0;
	var uLocal_16823 = 0;
	var uLocal_16824 = 0;
	var uLocal_16825 = 0;
	var uLocal_16826 = 0;
	var uLocal_16827 = 0;
	var uLocal_16828 = 0;
	var uLocal_16829 = 0;
	var uLocal_16830 = 0;
	var uLocal_16831 = 0;
	var uLocal_16832 = 0;
	var uLocal_16833 = 0;
	var uLocal_16834 = 0;
	var uLocal_16835 = 0;
	var uLocal_16836 = 0;
	var uLocal_16837 = 0;
	var uLocal_16838 = 0;
	var uLocal_16839 = 0;
	var uLocal_16840 = 0;
	var uLocal_16841 = 0;
	var uLocal_16842 = 0;
	var uLocal_16843 = 0;
	var uLocal_16844 = 0;
	var uLocal_16845 = 0;
	var uLocal_16846 = 0;
	var uLocal_16847 = 0;
	var uLocal_16848 = 0;
	var uLocal_16849 = 0;
	var uLocal_16850 = 0;
	var uLocal_16851 = 0;
	var uLocal_16852 = 0;
	var uLocal_16853 = 0;
	var uLocal_16854 = 0;
	var uLocal_16855 = 0;
	var uLocal_16856 = 0;
	var uLocal_16857 = 0;
	var uLocal_16858 = 0;
	var uLocal_16859 = 0;
	var uLocal_16860 = 0;
	var uLocal_16861 = 0;
	var uLocal_16862 = 0;
	var uLocal_16863 = 0;
	var uLocal_16864 = 0;
	var uLocal_16865 = 0;
	var uLocal_16866 = 0;
	var uLocal_16867 = 0;
	var uLocal_16868 = 0;
	var uLocal_16869 = 0;
	var uLocal_16870 = 0;
	var uLocal_16871 = 0;
	var uLocal_16872 = 0;
	var uLocal_16873 = 0;
	var uLocal_16874 = 0;
	var uLocal_16875 = 0;
	var uLocal_16876 = 0;
	var uLocal_16877 = 0;
	var uLocal_16878 = 0;
	var uLocal_16879 = 0;
	var uLocal_16880 = 0;
	var uLocal_16881 = 0;
	var uLocal_16882 = 0;
	var uLocal_16883 = 0;
	var uLocal_16884 = 0;
	var uLocal_16885 = 0;
	var uLocal_16886 = 0;
	var uLocal_16887 = 0;
	var uLocal_16888 = 0;
	var uLocal_16889 = 0;
	var uLocal_16890 = 0;
	var uLocal_16891 = 0;
	var uLocal_16892 = 0;
	var uLocal_16893 = 0;
	var uLocal_16894 = 0;
	var uLocal_16895 = 0;
	var uLocal_16896 = 0;
	var uLocal_16897 = 0;
	var uLocal_16898 = 0;
	var uLocal_16899 = 0;
	var uLocal_16900 = 0;
	var uLocal_16901 = 0;
	var uLocal_16902 = 0;
	var uLocal_16903 = 0;
	var uLocal_16904 = 0;
	var uLocal_16905 = 0;
	var uLocal_16906 = 0;
	var uLocal_16907 = 0;
	var uLocal_16908 = 0;
	var uLocal_16909 = 0;
	var uLocal_16910 = 0;
	var uLocal_16911 = 0;
	var uLocal_16912 = 0;
	var uLocal_16913 = 0;
	var uLocal_16914 = 0;
	var uLocal_16915 = 0;
	var uLocal_16916 = 0;
	var uLocal_16917 = 0;
	var uLocal_16918 = 0;
	var uLocal_16919 = 0;
	var uLocal_16920 = 0;
	var uLocal_16921 = 0;
	var uLocal_16922 = 0;
	var uLocal_16923 = 0;
	var uLocal_16924 = 0;
	var uLocal_16925 = 0;
	var uLocal_16926 = 0;
	var uLocal_16927 = 0;
	var uLocal_16928 = 0;
	var uLocal_16929 = 0;
	var uLocal_16930 = 0;
	var uLocal_16931 = 0;
	var uLocal_16932 = 0;
	var uLocal_16933 = 0;
	var uLocal_16934 = 0;
	var uLocal_16935 = 0;
	var uLocal_16936 = 0;
	var uLocal_16937 = 0;
	var uLocal_16938 = 0;
	var uLocal_16939 = 0;
	var uLocal_16940 = 0;
	var uLocal_16941 = 0;
	var uLocal_16942 = 0;
	var uLocal_16943 = 0;
	var uLocal_16944 = 0;
	var uLocal_16945 = 0;
	var uLocal_16946 = 0;
	var uLocal_16947 = 0;
	var uLocal_16948 = 0;
	var uLocal_16949 = 0;
	var uLocal_16950 = 0;
	var uLocal_16951 = 0;
	var uLocal_16952 = 0;
	var uLocal_16953 = 0;
	var uLocal_16954 = 0;
	var uLocal_16955 = 0;
	var uLocal_16956 = 0;
	var uLocal_16957 = 0;
	var uLocal_16958 = 0;
	var uLocal_16959 = 0;
	var uLocal_16960 = 0;
	var uLocal_16961 = 0;
	var uLocal_16962 = 0;
	var uLocal_16963 = 0;
	var uLocal_16964 = 0;
	var uLocal_16965 = 0;
	var uLocal_16966 = 0;
	var uLocal_16967 = 0;
	var uLocal_16968 = 0;
	var uLocal_16969 = 0;
	var uLocal_16970 = 0;
	var uLocal_16971 = 0;
	var uLocal_16972 = 0;
	var uLocal_16973 = 0;
	var uLocal_16974 = 0;
	var uLocal_16975 = 0;
	var uLocal_16976 = 0;
	var uLocal_16977 = 0;
	var uLocal_16978 = 0;
	var uLocal_16979 = 0;
	var uLocal_16980 = 0;
	var uLocal_16981 = 0;
	var uLocal_16982 = 0;
	var uLocal_16983 = 0;
	var uLocal_16984 = 0;
	var uLocal_16985 = 0;
	var uLocal_16986 = 0;
	var uLocal_16987 = 0;
	var uLocal_16988 = 0;
	var uLocal_16989 = 0;
	var uLocal_16990 = 0;
	var uLocal_16991 = 0;
	var uLocal_16992 = 0;
	var uLocal_16993 = 0;
	var uLocal_16994 = 0;
	var uLocal_16995 = 0;
	var uLocal_16996 = 0;
	var uLocal_16997 = 0;
	var uLocal_16998 = 0;
	var uLocal_16999 = 0;
	var uLocal_17000 = 0;
	var uLocal_17001 = 0;
	var uLocal_17002 = 0;
	var uLocal_17003 = 0;
	var uLocal_17004 = 0;
	var uLocal_17005 = 0;
	var uLocal_17006 = 0;
	var uLocal_17007 = 0;
	var uLocal_17008 = 0;
	var uLocal_17009 = 0;
	var uLocal_17010 = 0;
	var uLocal_17011 = 0;
	var uLocal_17012 = 0;
	var uLocal_17013 = 0;
	var uLocal_17014 = 0;
	var uLocal_17015 = 0;
	var uLocal_17016 = 0;
	var uLocal_17017 = 0;
	var uLocal_17018 = 0;
	var uLocal_17019 = 0;
	var uLocal_17020 = 0;
	var uLocal_17021 = 0;
	var uLocal_17022 = 0;
	var uLocal_17023 = 0;
	var uLocal_17024 = 0;
	var uLocal_17025 = 0;
	var uLocal_17026 = 0;
	var uLocal_17027 = 0;
	var uLocal_17028 = 0;
	var uLocal_17029 = 0;
	var uLocal_17030 = 0;
	var uLocal_17031 = 0;
	var uLocal_17032 = 0;
	var uLocal_17033 = 0;
	var uLocal_17034 = 0;
	var uLocal_17035 = 0;
	var uLocal_17036 = 0;
	var uLocal_17037 = 0;
	var uLocal_17038 = 0;
	var uLocal_17039 = 0;
	var uLocal_17040 = 0;
	var uLocal_17041 = 0;
	var uLocal_17042 = 0;
	var uLocal_17043 = 0;
	var uLocal_17044 = 0;
	var uLocal_17045 = 0;
	var uLocal_17046 = 0;
	var uLocal_17047 = 0;
	var uLocal_17048 = 0;
	var uLocal_17049 = 0;
	var uLocal_17050 = 0;
	var uLocal_17051 = 0;
	var uLocal_17052 = 0;
	var uLocal_17053 = 0;
	var uLocal_17054 = 0;
	var uLocal_17055 = 0;
	var uLocal_17056 = 0;
	var uLocal_17057 = 0;
	var uLocal_17058 = 0;
	var uLocal_17059 = 0;
	var uLocal_17060 = 0;
	var uLocal_17061 = 0;
	var uLocal_17062 = 0;
	var uLocal_17063 = 0;
	var uLocal_17064 = 0;
	var uLocal_17065 = 0;
	var uLocal_17066 = 0;
	var uLocal_17067 = 0;
	var uLocal_17068 = 0;
	var uLocal_17069 = 0;
	var uLocal_17070 = 0;
	var uLocal_17071 = 0;
	var uLocal_17072 = 0;
	var uLocal_17073 = 0;
	var uLocal_17074 = 0;
	var uLocal_17075 = 0;
	var uLocal_17076 = 0;
	var uLocal_17077 = 0;
	var uLocal_17078 = 0;
	var uLocal_17079 = 0;
	var uLocal_17080 = 0;
	var uLocal_17081 = 0;
	var uLocal_17082 = 0;
	var uLocal_17083 = 0;
	var uLocal_17084 = 0;
	var uLocal_17085 = 0;
	var uLocal_17086 = 0;
	var uLocal_17087 = 0;
	var uLocal_17088 = 0;
	var uLocal_17089 = 0;
	var uLocal_17090 = 0;
	var uLocal_17091 = 0;
	var uLocal_17092 = 0;
	var uLocal_17093 = 0;
	var uLocal_17094 = 0;
	var uLocal_17095 = 0;
	var uLocal_17096 = 0;
	var uLocal_17097 = 0;
	var uLocal_17098 = 0;
	var uLocal_17099 = 0;
	var uLocal_17100 = 0;
	var uLocal_17101 = 0;
	var uLocal_17102 = 0;
	var uLocal_17103 = 0;
	var uLocal_17104 = 0;
	var uLocal_17105 = 0;
	var uLocal_17106 = 0;
	var uLocal_17107 = 0;
	var uLocal_17108 = 0;
	var uLocal_17109 = 0;
	var uLocal_17110 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
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
	Local_806 = { StackVal, StackVal, StackVal, StackVal, StackVal, Local_1576 };
	iLocal_1356 = 99;
	bLocal_1357 = 6;
	iLocal_1344 = 1000;
	while (Function_279())
	{
		Function_223();
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	if (iLocal_1525 != 4294967295)
	{
		if (GET_TASK_STATUS(&bLocal_1429, 0) == 1)
		{
			TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(iLocal_1525, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bLocal_1429, 0);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bLocal_1429, 0);
	}
	if (iLocal_1526 != 4294967295)
	{
		if (GET_TASK_STATUS(&bLocal_1431, 0) == 1)
		{
			TASK_STAND_STILL(&bLocal_1431, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(iLocal_1526, 0);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[6]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[6]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[6]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[6]);
	}
	STREAMING_UNLOAD_BOUNDS();
	Function_222(&iLocal_1485);
	SET_AMBIENT_ANIMALS_AGRESSIVENESS(1);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1095);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1096);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1097);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1098);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1099);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1100);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1101);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1102);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1103);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1104);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1105);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1068);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1069);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1070);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1071);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1072);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1429);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_1429, 0);
	if (IS_ACTOR_ALIVE(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "CutTheCamera"))
		{
			DECOR_REMOVE(&Global_54076, "CutTheCamera");
		}
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
	}
	Function_219(9, 1, 0, 1, 1);
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	DISABLE_CHILD_SECTOR("sp_anthro01x");
	Function_218(16384);
	Function_217(&uLocal_804);
	Function_217(&iLocal_4);
	Function_216();
	Function_215();
	Function_186(bLocal_1546, 1, 0, 1, 1, 1, 1, 1);
	Function_182(&iLocal_1064);
	Function_182(&iLocal_1070);
	Function_182(&iLocal_1080);
	Function_182(&iLocal_1090);
	Function_182(&iLocal_1096);
	Function_182(&iLocal_1102);
	Function_182(&iLocal_1180);
	Function_182(&iLocal_1258);
	Function_181();
	Function_180();
	Function_179();
	Function_178();
	Function_177();
	Function_175();
	RELEASE_LAYOUT_REF(&uLocal_804);
	if (bLocal_1545)
	{
		Function_26(Local_806, 1, 1, 1, 0);
	}
	else if (bLocal_1546)
	{
		Function_22(Local_806);
	}
	else
	{
		Function_2(Local_806);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x275 / 629
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x296 / 662
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2B3 / 691
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2D6 / 726
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2ED / 749
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

void Function_7(int iParam0) //Position: 0x38F / 911
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x3B2 / 946
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

void Function_9() //Position: 0x3FC / 1020
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x415 / 1045
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

void Function_11(var uParam0, int iParam1) //Position: 0x468 / 1128
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

struct<16> Function_12(int iParam0) //Position: 0x592 / 1426
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

bool Function_13() //Position: 0x5CC / 1484
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x5E7 / 1511
{
	return (bParam0 && iParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x5F4 / 1524
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x614 / 1556
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x62B / 1579
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x646 / 1606
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x88D / 2189
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8B9 / 2233
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

bool Function_21(int iParam0) //Position: 0x8DD / 2269
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x8F2 / 2290
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x910 / 2320
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
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
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, 0, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x9B6 / 2486
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

struct<24> Function_25(char* cParam0) //Position: 0x9F5 / 2549
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC4B / 3147
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
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
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
	Function_27();
}

void Function_27() //Position: 0xD3F / 3391
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

int Function_28(int iParam0, bool bParam1) //Position: 0xD71 / 3441
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

int Function_29(int iParam0) //Position: 0xDAF / 3503
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xDC9 / 3529
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xDDF / 3551
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10DC / 4316
{
	int iVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	iVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, iVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || iVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x1151 / 4433
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x118B / 4491
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1207 / 4615
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x121A / 4634
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

int Function_37(int iParam0) //Position: 0x12BB / 4795
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&iVar1, 2147483648);
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

void Function_38(int iParam0, int iParam1) //Position: 0x12F8 / 4856
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x130E / 4878
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	if (!iVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
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
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, 0, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
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
			Function_84(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
			{
				switch (iVar0)
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
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x156C / 5484
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x15AA / 5546
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

void Function_42(bool bParam0) //Position: 0x15E9 / 5609
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

void Function_43() //Position: 0x163E / 5694
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

void Function_44() //Position: 0x1689 / 5769
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

void Function_45() //Position: 0x178F / 6031
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

void Function_46() //Position: 0x17C2 / 6082
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

void Function_47() //Position: 0x1955 / 6485
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

void Function_48() //Position: 0x1B0E / 6926
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B1C / 6940
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_50();
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[iVar3] = _GET_AMMO_AMOUNT(&uVar0, iVar3, 0);
			iVar3++;
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
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

bool Function_50() //Position: 0x1D39 / 7481
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1D4E / 7502
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
			iVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_52(182, iVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, int iParam1, bool bParam2) //Position: 0x1DF5 / 7669
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
	if (Global_54086[iParam0] > TO_FLOAT(iParam1))
	{
		Function_66(iParam0, TO_FLOAT(iParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(iParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(iParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2091 / 8337
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
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((fParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					iVar6 = FLOOR((fParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(iVar6), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_63(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_63(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(fVar19, fParam2, &iVar17, &iVar18);
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

var Function_54() //Position: 0x26CF / 9935
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26D8 / 9944
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26E9 / 9961
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

struct<32> Function_57(char* cParam0) //Position: 0x27E0 / 10208
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27FB / 10235
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2862 / 10338
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, int iParam1) //Position: 0x2874 / 10356
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2886 / 10374
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

int Function_62(int iParam0) //Position: 0x29BA / 10682
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x29C9 / 10697
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A02 / 10754
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A3F / 10815
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

int Function_66(int iParam0, float fParam1, bool bParam2) //Position: 0x2BD9 / 11225
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

int Function_67(int iParam0) //Position: 0x2E1D / 11805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<8> Function_68() //Position: 0x2E5E / 11870
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

struct<8> Function_69() //Position: 0x2EE7 / 12007
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

struct<8> Function_70() //Position: 0x2F7E / 12158
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2FFD / 12285
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

int Function_72(int iParam0, float fParam1, int iParam2) //Position: 0x303A / 12346
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
	Function_66(iParam0, fParam1, 1);
	Function_65(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_53(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x3246 / 12870
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

bool Function_74(char* cParam0) //Position: 0x32FD / 13053
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3315 / 13077
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
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

struct<8> Function_76() //Position: 0x340D / 13325
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(int iParam0, int iParam1) //Position: 0x3417 / 13335
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3428 / 13352
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x343E / 13374
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x350A / 13578
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3527 / 13607
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	float fVar7;
	
	fParam0 = fParam0;
	fVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -130,87f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -135,09f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 206,26f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 0.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 106,17f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 343,64f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 165,38f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 0.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -97,3f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -6,71f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -180.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 22,55f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -135.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -104,45f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 270.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 59,3f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 20,74f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 94,65f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -135.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -39,9f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	fVar7 = VDIST(Var3, Var5);
	if (fVar7 > fVar0)
	{
		fVar0 = fVar7;
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

bool Function_82(int iParam0) //Position: 0x3D53 / 15699
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(bool bParam0, int iParam1) //Position: 0x3D8E / 15758
{
	GET_POSITION(&bParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3D9D / 15773
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
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
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
							else if (iVar0 != Global_46866[4])
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
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
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
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
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

bool Function_85(int iParam0) //Position: 0x427B / 17019
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x4291 / 17041
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x42B0 / 17072
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x42CA / 17098
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iVar0);
	return;
	return;
}

int Function_89(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4334 / 17204
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(iParam1));
	Function_66(iParam0, TO_FLOAT(iParam1), 1);
	Function_65(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(iParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x455C / 17756
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

void Function_91() //Position: 0x45FA / 17914
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

void Function_92() //Position: 0x475C / 18268
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

int Function_93(int iParam0, char* cParam1) //Position: 0x47DC / 18396
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B33 / 19251
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

int Function_95(int iParam0) //Position: 0x4BBB / 19387
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BD5 / 19413
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4C00 / 19456
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C2E / 19502
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
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
				iVar0 = (Function_67(42) - Global_53524.f_168);
				iVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(iVar0) / TO_FLOAT(iVar1));
				if (iVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = iVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(iVar0), 1);
				}
			
			case 0x00000001:
				iVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				iVar3 = (Function_67(49) - Global_53524.f_180);
				fVar8 = (TO_FLOAT(iVar3) / TO_FLOAT(iVar2));
				if (fVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = fVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar8, 1);
				}
				break;
			
			case 0x00000002:
				iVar4 = (Function_67(355) - Global_53524.f_168);
				iVar5 = Global_53524.f_176;
				iVar6 = Global_53524.f_180;
				fVar9 = (TO_FLOAT(iVar6) / TO_FLOAT(iVar5));
				if (iVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = iVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(iVar4), 1);
				}
				if (fVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = fVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar9, 1);
				}
				fVar8 = fVar9;
				iVar0 = iVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, fVar8, iVar0);
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4ECA / 20170
{
	int iVar0;
	int iVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	iVar1 = iParam0;
	if (Function_96())
	{
		iVar1 = (iVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + iVar1) >= 10000)
	{
		iVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, iVar1);
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
		Function_89(3, iVar1, 0, 0);
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

void Function_100(int iParam0, int iParam1) //Position: 0x509E / 20638
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1) //Position: 0x5308 / 21256
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
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
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(iVar0), 8);
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

int Function_102() //Position: 0x5498 / 21656
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

void Function_103() //Position: 0x5539 / 21817
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

void Function_104(int iParam0) //Position: 0x55F7 / 22007
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

var Function_105(int iParam0) //Position: 0x565D / 22109
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

int Function_106(int iParam0, int iParam1) //Position: 0x56EC / 22252
{
	int iVar0;
	int iVar1;
	
	Function_89(iParam0, iParam1, 0, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	iVar1 = Function_107(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(iParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(iVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(iParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(iVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x5898 / 22680
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

void Function_108() //Position: 0x58DD / 22749
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x58F3 / 22771
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5933 / 22835
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5973 / 22899
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5982 / 22914
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

int Function_113(int iParam0) //Position: 0x5B4A / 23370
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

var Function_114() //Position: 0x5BDF / 23519
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5C04 / 23556
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60D3 / 24787
{
	int iVar0;
	int iVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	iVar1 = iParam0;
	if (Function_96())
	{
		iVar1 = (iVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
	if ((iVar0 + iVar1) >= 5000)
	{
		iVar1 = (5000 - iVar0);
	}
	if ((iVar0 + iVar1) <= 4294962296)
	{
		iVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (iVar1 >= 0)
		{
			Function_106(1, iVar1);
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
			Function_119(1, (4294967295 * iVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (iVar1 >= 0)
	{
		Function_89(1, iVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * iVar1), 0);
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

var Function_117(int iParam0) //Position: 0x63FA / 25594
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

int Function_118(int iParam0, int iParam1, int iParam2) //Position: 0x649D / 25757
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(iParam1));
	Function_65(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(iParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_119(int iParam0, int iParam1) //Position: 0x669A / 26266
{
	int iVar0;
	int iVar1;
	
	Function_118(iParam0, iParam1, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	iVar1 = Function_107(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(iParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(iVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(iParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(iVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(int iParam0, bool bParam1, bool bParam2) //Position: 0x6845 / 26693
{
	int iVar0;
	
	iVar0 = Function_67(0);
	if ((Function_67(0) + iParam0) >= 999999)
	{
		iParam0 = (999999 - iVar0);
	}
	if (iParam0 >= 0)
	{
		Function_89(0, iParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), iVar0, iParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, iParam0, 0, 0);
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6917 / 26903
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
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

void Function_122(int iParam0) //Position: 0x7232 / 29234
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
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73AF / 29615
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x74BA / 29882
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x74E6 / 29926
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	iVar2 = iParam0 & 32767;
	iVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(iVar2);
	Var0.f_8 = TO_FLOAT(iVar3);
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

var Function_126(vector3 vParam0) //Position: 0x753D / 30013
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

void Function_127(var uParam0, int iParam1) //Position: 0x758B / 30091
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

void Function_128(int iParam0, bool bParam1, bool bParam2) //Position: 0x75E6 / 30182
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(iParam0))
	{
		if (!Function_148(iParam0))
		{
			Function_138(iParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[iParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[iParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[iParam09].f_64 != 4294967295 || (Global_42265[iParam09].f_64 != 0 && Global_42265[iParam09].f_28 < 0))
		{
			Global_42265[iParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, iParam0, 0);
		}
		if (Global_42265[iParam09].f_64 == 4294967295 && Global_42265[iParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[iParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[iParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[iParam09].f_64, &cVar8, 0, 2, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[iParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_131(iParam0, 6);
		if (iParam0 == 3)
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

void Function_129() //Position: 0x7787 / 30599
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x778D / 30605
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

void Function_131(int iParam0, int iParam1) //Position: 0x783C / 30780
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7891 / 30865
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x78A7 / 30887
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

bool Function_134(int iParam0, int iParam1) //Position: 0x78F8 / 30968
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

void Function_135(var uParam0, int iParam1) //Position: 0x7925 / 31013
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7936 / 31030
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7950 / 31056
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7961 / 31073
{
	char* cVar0[32];
	
	if (!Function_132(iParam0))
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
	if (!Function_148(iParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(iParam0, 2);
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
		Function_141(iParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[iParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", iParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7ABD / 31421
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

bool Function_140() //Position: 0x7B48 / 31560
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(int iParam0) //Position: 0x7B75 / 31605
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	int iVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[iParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[iParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[iParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[iParam09].f_64, 1))
	{
		Global_42265[iParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, iParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[iParam09].f_64, 0);
		iVar24 = 0;
		while (iVar24 <= Global_42265[iParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_145(iParam0, Function_146(iVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[iParam09].f_64, &Var16, 0, 4, 0);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[iParam09].f_64, &Var16, 0, 3, 0);
			}
			iVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[iParam09].f_64, 0))
	{
		iVar24 = 0;
		while (iVar24 <= Global_42265[iParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_145(iParam0, Function_146(iVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[iParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[iParam09].f_64, &Var16, 3, 0);
			}
			iVar24++;
		}
	}
	if (Global_42265[iParam09].f_64 == 4294967295 && Global_42265[iParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[iParam09].f_64, (TO_FLOAT(Function_144(iParam0)) / TO_FLOAT(Global_42265[iParam09].f_28)), 0, 0);
		Function_143(Global_42265[iParam09].f_64, 0);
		straddi(&cVar8, Function_142(iParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[iParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7D25 / 32037
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

void Function_143(var uParam0, int iParam1) //Position: 0x7D7C / 32124
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

var Function_144(int iParam0) //Position: 0x7DA1 / 32161
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

bool Function_145(int iParam0, int iParam1) //Position: 0x7DF7 / 32247
{
	int iVar0;
	
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_146(int iParam0) //Position: 0x7E56 / 32342
{
	return SHIFT_LEFT(1, iParam0);
}

bool Function_147(int iParam0) //Position: 0x7E62 / 32354
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7E7E / 32382
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

bool Function_149() //Position: 0x7ED0 / 32464
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7F00 / 32512
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

int Function_151(int iParam0, int iParam1) //Position: 0x7F75 / 32629
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7FD2 / 32722
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

int Function_153(int iParam0, int iParam1) //Position: 0x8068 / 32872
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x80C3 / 32963
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
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(int iParam0, int iParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8383 / 33667
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[iParam09] + 32, 32);
	if (!Function_132(iParam0))
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
	if (!Function_134(iParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(iParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(iParam0, iParam1))
	{
		Global_42265[iParam09].f_4 = (StackVal || iParam1);
		Function_131(iParam0, 1048576);
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
		Function_141(iParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", iParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == iParam0)
		{
			Global_42827.f_16 = 1;
			Function_157();
		}
		Global_42827.f_16 = 1;
		switch (iParam0)
		{
			case 0x00000004:
				Function_156(3, iParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(iParam1, 18));
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

void Function_156(int iParam0, int iParam1) //Position: 0x8622 / 34338
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&iParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_157() //Position: 0x8691 / 34449
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

int Function_158(int iParam0, int iParam1) //Position: 0x8711 / 34577
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

int Function_159(int iParam0) //Position: 0x9374 / 37748
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x9389 / 37769
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

void Function_161(var uParam0, int iParam1) //Position: 0x93D8 / 37848
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

void Function_162(int iParam0, bool bParam1, int iParam2) //Position: 0x9430 / 37936
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(iParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(iParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(iParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(iParam0), fVar0, 1, 0);
		}
		if (4294967295 != iParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, iParam0))
			{
				Function_167(iParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(iParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x94A3 / 38051
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x94B7 / 38071
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

var Function_165(int iParam0) //Position: 0x95A8 / 38312
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9600 / 38400
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(int iParam0, bool bParam1, int iParam2) //Position: 0x961D / 38429
{
	if (!Function_168(iParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(iParam0))
	{
		SET_WEAPONENUM_LOCKED(iParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), iParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), iParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(iParam0), GET_WEAPON_MAX_AMMO(iParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x9677 / 38519
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x9689 / 38537
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

void Function_170(struct<185> Param0) //Position: 0x96BD / 38589
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
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9728 / 38696
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
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x9812 / 38930
{
	int iVar0;
	
	Function_174(iParam0);
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
	Function_173();
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

void Function_173() //Position: 0x9991 / 39313
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x999D / 39325
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

void Function_175() //Position: 0x99E3 / 39395
{
	Function_176();
	return;
}

void Function_176() //Position: 0x99EC / 39404
{
	Function_182(&iLocal_4 + 8);
	Function_182(&iLocal_4 + 352);
	Function_182(&iLocal_4 + 392);
	Function_182(&iLocal_4 + 432);
	Function_182(&iLocal_4 + 472);
	Function_182(&iLocal_4 + 512);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177() //Position: 0x9A27 / 39463
{
	Function_182(&iLocal_4 + 512);
	return;
}

void Function_178() //Position: 0x9A35 / 39477
{
	Function_182(&iLocal_4 + 472);
	return;
}

void Function_179() //Position: 0x9A43 / 39491
{
	Function_182(&iLocal_4 + 432);
	return;
}

void Function_180() //Position: 0x9A51 / 39505
{
	Function_182(&iLocal_4 + 392);
	return;
}

void Function_181() //Position: 0x9A5F / 39519
{
	Function_182(&iLocal_4 + 352);
	return;
}

void Function_182(int iParam0) //Position: 0x9A6D / 39533
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

void Function_183(struct<2>[] Param0, int iParam1) //Position: 0x9A95 / 39573
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

void Function_184(struct<13> Param0) //Position: 0x9BE0 / 39904
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_185(struct<13> Param0) //Position: 0x9BFD / 39933
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9C1B / 39963
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_214());
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
	Function_213();
	CLEAR_PRINTED_OBJECTIVE();
	Function_212();
	Function_210(0);
	Function_209();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_208();
	Function_207();
	Function_213();
	ENABLE_JOURNAL_REPLAY(1);
	Function_206(1);
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
		Function_205(&Global_54076);
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
	Function_202(Global_42825);
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
	Function_201();
	Function_218(1178687);
	Function_199(33039);
	Function_198(0x218003f);
	Function_197(4194560);
	Function_196();
	Function_195();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_192(0, 1, 1);
	}
	else
	{
		Function_192(0, 1, 1);
	}
	Function_191();
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
	Function_187();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_187() //Position: 0x9E27 / 40487
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
		if (Function_190() > 3)
		{
			iVar0 *= 2;
		}
		Function_188(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9E7E / 40574
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_189(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_189(bool bParam0) //Position: 0x9ECE / 40654
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_190() //Position: 0x9EF7 / 40695
{
	return Global_21369.f_248;
}

void Function_191() //Position: 0x9F02 / 40706
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

void Function_192(int iParam0, bool bParam1, int iParam2) //Position: 0x9F2C / 40748
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
			Function_193(Global_43789);
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
			WAIT(0);
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

void Function_193(int iParam0) //Position: 0xA038 / 41016
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_194())
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

bool Function_194() //Position: 0xA0B7 / 41143
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

void Function_195() //Position: 0xA120 / 41248
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

void Function_196() //Position: 0xA146 / 41286
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

void Function_197(int iParam0) //Position: 0xA16C / 41324
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_198(int iParam0) //Position: 0xA189 / 41353
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_199(int iParam0) //Position: 0xA19C / 41372
{
	Function_200(&Global_43580, iParam0);
	return;
}

void Function_200(var uParam0, var uParam1) //Position: 0xA1AA / 41386
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_201() //Position: 0xA1C9 / 41417
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

void Function_202(int iParam0) //Position: 0xA241 / 41537
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
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 1);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_203(78, 1, 1);
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
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, 1);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, 1);
	}
	return;
}

int Function_203(int iParam0, bool bParam1, int iParam2) //Position: 0xA377 / 41847
{
	if (iParam0 >= 4294967295 || iParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_204(iParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_204(iParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_204(iParam0), Function_50(), &iParam2);
	return 1;
}

var Function_204(int iParam0) //Position: 0xA3C5 / 41925
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, iParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(iParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_205(int iParam0) //Position: 0xA4B9 / 42169
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

void Function_206(bool bParam0) //Position: 0xA53C / 42300
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

void Function_207() //Position: 0xA5B3 / 42419
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

void Function_208() //Position: 0xA5F7 / 42487
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

void Function_209() //Position: 0xA63B / 42555
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_210(int iParam0) //Position: 0xA651 / 42577
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_211())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_211() //Position: 0xA691 / 42641
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

void Function_212() //Position: 0xA6B6 / 42678
{
	Global_15862 = 0.0f;
	return;
}

void Function_213() //Position: 0xA6C0 / 42688
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

int Function_214() //Position: 0xA6EB / 42731
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_215() //Position: 0xA708 / 42760
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

void Function_216() //Position: 0xA83A / 43066
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_217(int iParam0) //Position: 0xA843 / 43075
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

void Function_218(bool bParam0) //Position: 0xA8AB / 43179
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

int Function_219(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA8D8 / 43224
{
	int iVar0;
	int iVar1;
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
	iVar1 = 0;
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
		Function_221(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_220(&Global_15402[iParam014] + 8);
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
			iVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
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
			iVar1 = 1;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return iVar1;
}

void Function_220(bool bParam0) //Position: 0xAC1A / 44058
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

void Function_221(int iParam0) //Position: 0xAC4D / 44109
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_222(int iParam0) //Position: 0xAC64 / 44132
{
	if (IS_OBJECT_VALID(&iParam0))
	{
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_223() //Position: 0xAC79 / 44153
{
	var uVar0[15];
	char[] cVar16[4];
	
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "S02: Bear Fight";
	uVar0[4] = "S03: To Bear Claw";
	uVar0[5] = "S04: Gang Fight";
	uVar0[6] = "S05: Back to Horses";
	uVar0[7] = "S06: Pursuers 1";
	uVar0[8] = "S07: Pursuers 2";
	uVar0[9] = "S08: To Blackwater";
	uVar0[10] = "End Cutscene";
	uVar0[11] = "Kill cabin gang";
	uVar0[12] = "Attach player to cover";
	uVar0[13] = "Report Speed";
	uVar0[14] = "Buck MacDougal";
	if (!Function_278())
	{
		return;
	}
	cVar16 = Function_264(&uLocal_1336, &uVar0, "RDR MISSION MENU", 1, 0);
	if (Function_263(&cVar16, &iLocal_1356, &bLocal_1357, &iLocal_1344))
	{
		Function_256();
		Function_255();
	}
	switch (cVar16)
	{
		case 0x00000000:
			Function_256();
			Function_255();
			Function_254(&bLocal_1545, 8);
			break;
		
		case 0x00000001:
			Function_256();
			Function_255();
			Function_253("Failed from debug menu.");
			Function_249(iLocal_1356);
			Function_245(StackVal, 5, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
			break;
		
		case 0x00000002:
			Function_256();
			Function_255();
			Function_241(&bLocal_1547, 4);
			break;
		
		case 0x00000003:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_239();
			iLocal_1356 = 1;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x00000004:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_235();
			iLocal_1356 = 2;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x00000005:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_234();
			iLocal_1356 = 3;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x00000006:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_233();
			iLocal_1356 = 4;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x00000007:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_232();
			iLocal_1356 = 5;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x00000008:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_231();
			iLocal_1356 = 6;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x00000009:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_227();
			iLocal_1356 = 7;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x0000000A:
			Function_256();
			Function_255();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_225();
			iLocal_1356 = 101;
			iLocal_1344 = 1000;
			Function_236(0);
			break;
		
		case 0x0000000B:
			Function_256();
			Function_224(&iLocal_4 + 672);
			break;
		
		case 0x0000000C:
			Function_256();
			SET_FORCE_PLAYER_AIM_MODE(0, 1);
			SET_PLAYER_POSTURE(0, 1, 1);
			ATTACH_PLAYER_TO_COVER(0, 1, 1);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
			SET_FORCE_PLAYER_AIM_MODE(0, 0);
			break;
		
		case 0x0000000D:
			Function_256();
			LOG_ERROR(FLOAT_TO_STRING_VERBOSE(fLocal_1523));
			break;
		
		case 0x0000000E:
			Function_256();
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1429, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1429, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
			break;
	}
	return;
}

void Function_224(struct<2>[] Param0) //Position: 0xB0A3 / 45219
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Param0)
	{
		uVar0 = &Param0[iVar12];
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				KILL_ACTOR(&uVar0);
			}
		}
		iVar1++;
	}
	return;
}

void Function_225() //Position: 0xB0E1 / 45281
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	AI_STOP_IGNORING_ACTORS();
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1429);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1433);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1435);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 1);
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&iLocal_1437);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	Function_226(&bLocal_1431);
	iLocal_1548 = 0;
	SET_ACTOR_INVULNERABILITY(&bLocal_1429, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	return;
}

void Function_226(bool bParam0) //Position: 0xB1CE / 45518
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		DESTROY_ACTOR(&bParam0);
	}
	return;
}

void Function_227() //Position: 0xB1E3 / 45539
{
	Function_229(9, 0, 1);
	Function_220(&bLocal_1433);
	Function_222(&iLocal_1485);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1433);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1435);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 1);
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&iLocal_1437);
	}
	Function_228(&iLocal_4 + 552, 1);
	Function_228(&iLocal_4 + 576, 1);
	Function_228(&iLocal_4 + 648, 1);
	Function_228(&iLocal_4 + 672, 1);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
	if (SQUAD_GOAL_IS_VALID(&iLocal_1062))
	{
		SQUAD_GOAL_REMOVE(&uLocal_1423, &iLocal_1062);
	}
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	AI_STOP_IGNORING_ACTORS();
	TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
	iLocal_1548 = 0;
	SET_ACTOR_INVULNERABILITY(&bLocal_1429, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1550 = 0;
	return;
}

void Function_228(struct<2>[] Param0, int iParam1) //Position: 0xB317 / 45847
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_ACTOR_VALID(&(Param0[iVar02])))
		{
			uVar1 = GET_MOUNT(&(Param0[iVar02]));
			if (IS_ACTOR_VALID(&uVar1) && iParam1)
			{
				DESTROY_ACTOR(&uVar1);
			}
			DESTROY_ACTOR(&(Param0[iVar02]));
		}
		iVar0++;
	}
	return;
}

void Function_229(int iParam0, bool bParam1, bool bParam2) //Position: 0xB371 / 45937
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
						Function_220(&uVar1);
					}
				}
				Function_230(&uVar0);
			}
		}
	}
	return;
}

void Function_230(int iParam0) //Position: 0xB480 / 46208
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

void Function_231() //Position: 0xB4B3 / 46259
{
	Function_229(9, 0, 1);
	Function_220(&bLocal_1433);
	Function_222(&iLocal_1485);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1433);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1435);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 1);
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&iLocal_1437);
	}
	Function_228(&iLocal_4 + 552, 1);
	Function_228(&iLocal_4 + 576, 1);
	Function_228(&iLocal_4 + 648, 1);
	Function_228(&iLocal_4 + 672, 1);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
	if (SQUAD_GOAL_IS_VALID(&iLocal_1062))
	{
		SQUAD_GOAL_REMOVE(&uLocal_1423, &iLocal_1062);
	}
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
	iLocal_1548 = 0;
	SET_ACTOR_INVULNERABILITY(&bLocal_1429, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1550 = 0;
	return;
}

void Function_232() //Position: 0xB5E4 / 46564
{
	Function_229(9, 0, 1);
	Function_220(&bLocal_1433);
	Function_222(&iLocal_1485);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1433);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1435);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 1);
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&iLocal_1437);
	}
	Function_228(&iLocal_4 + 552, 1);
	Function_228(&iLocal_4 + 576, 1);
	Function_228(&iLocal_4 + 648, 1);
	Function_228(&iLocal_4 + 672, 1);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
	if (SQUAD_GOAL_IS_VALID(&iLocal_1062))
	{
		SQUAD_GOAL_REMOVE(&uLocal_1423, &iLocal_1062);
	}
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
	iLocal_1548 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1550 = 0;
	return;
}

void Function_233() //Position: 0xB70D / 46861
{
	Function_229(9, 0, 1);
	Function_220(&bLocal_1433);
	Function_222(&iLocal_1485);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1433);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1435);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(&iLocal_1437);
	}
	Function_228(&iLocal_4 + 648, 1);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
	if (SQUAD_GOAL_IS_VALID(&iLocal_1062))
	{
		SQUAD_GOAL_REMOVE(&uLocal_1423, &iLocal_1062);
	}
	iLocal_1548 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1550 = 0;
	return;
}

void Function_234() //Position: 0xB809 / 47113
{
	Function_229(9, 0, 1);
	Function_220(&bLocal_1433);
	Function_222(&iLocal_1485);
	Function_229(9, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
	}
	Function_228(&iLocal_4 + 648, 1);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1431);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1431);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1429);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1431);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1136[0]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1136[0]);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	iLocal_1550 = 0;
	return;
}

void Function_235() //Position: 0xB8F4 / 47348
{
	SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1431, 16.0f);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1431);
	TASK_PRIORITY_SET(&bLocal_1429, 1);
	TASK_PRIORITY_SET(&bLocal_1431, 1);
	Function_229(9, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_1437, 16.0f);
	}
	if (IS_ACTOR_VALID(&bLocal_1439))
	{
		Function_220(&bLocal_1439);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	iLocal_1548 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1550 = 0;
	return;
}

void Function_236(int iParam0) //Position: 0xB9CE / 47566
{
	char* cVar0[32];
	
	Function_237(&iLocal_1487);
	bLocal_1357 = iParam0;
	iLocal_1524 = 0;
	iLocal_1552 = 0;
	iLocal_1550 = 0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_1356)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "04", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "05", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "06", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "07", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "08", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
		
		default:
			LOG_ERROR("GoToGoal: Unknown stage ID!");
			break;
	}
	stradd(&cVar0, " - ", 32);
	switch (iParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "INITIALIZE", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "nSTREAMING", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "POST STREAMING", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "CUTSCENE", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "POST CUTSCENE", 32);
			break;
		
		case 0x00000069:
			stradd(&cVar0, "FADE OUT", 32);
			break;
		
		case 0x0000006A:
			stradd(&cVar0, "COMPLETE", 32);
			break;
		
		default:
			if (iParam0 <= 6 && iParam0 >= 104)
			{
				stradd(&cVar0, "GOAL ", 32);
				straddi(&cVar0, (iParam0 + 1 - 6), 32);
			}
			else
			{
				LOG_ERROR("GoToGoal: Unknown goal ID!");
			}
			break;
	}
	return;
}

void Function_237(int iParam0) //Position: 0xBBD9 / 48089
{
	Function_238(&iParam0, 0.0f);
	return;
}

void Function_238(vector3 vParam0) //Position: 0xBBE6 / 48102
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_239() //Position: 0xBC0B / 48139
{
	SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1431, 16.0f);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	Function_229(9, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_1437, 16.0f);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	iLocal_1550 = 0;
	return;
}

void Function_240(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xBCAD / 48301
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

void Function_241(bool bParam0, int iParam1) //Position: 0xBCD7 / 48343
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242(&iParam1);
	bParam0 = 1;
	return;
}

void Function_242(int iParam0) //Position: 0xBCFC / 48380
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_253("missionFail_playerDead");
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
		Function_253("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_253("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_253("");
	}
	else if (iParam0 == 8)
	{
		Function_243();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_243();
	}
	return;
}

void Function_243() //Position: 0xBDF3 / 48627
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_244(int iParam0) //Position: 0xBDFF / 48639
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

void Function_245(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBE35 / 48693
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_246(StackVal, Param4, uParam3, &iParam6);
		Function_242(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_246(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBE76 / 48758
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

var Function_247(int iParam0) //Position: 0xBEF8 / 48888
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

var Function_248(struct<2> Param0, bool bParam2) //Position: 0xC3A8 / 50088
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

struct<8> Function_249(int iParam0) //Position: 0xC414 / 50196
{
	Function_250(iParam0 + 1);
	return StackVal, Function_250(iParam0 + 1);
}

struct<8> Function_250(int iParam0) //Position: 0xC421 / 50209
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, *(&iLocal_4 + 1432[03]);
			break;
		
		case 0x00000001:
			return StackVal, *(&iLocal_4 + 1432[13]);
			break;
		
		case 0x00000002:
			return StackVal, *(&iLocal_4 + 1432[23]);
			break;
		
		case 0x00000003:
			return StackVal, *(&iLocal_4 + 1432[33]);
			break;
		
		case 0x00000004:
			return StackVal, *(&iLocal_4 + 1432[43]);
			break;
		
		case 0x00000005:
			return StackVal, *(&iLocal_4 + 1432[53]);
			break;
		
		case 0x00000006:
			return StackVal, *(&iLocal_4 + 1432[63]);
			break;
		
		case 0x00000007:
			return StackVal, *(&iLocal_4 + 1432[73]);
			break;
		
		default:
			return StackVal, *(&iLocal_4 + 1432[83]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GetPlayerPosByStage, returning first stage start position.");
	return StackVal, *(&iLocal_4 + 1432[03]);
}

int Function_251(int iParam0) //Position: 0xC541 / 50497
{
	return Function_252(iParam0 + 1);
}

int Function_252(int iParam0) //Position: 0xC54E / 50510
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return StackVal;
			break;
		
		case 0x00000004:
			return StackVal;
			break;
		
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000006:
			return StackVal;
			break;
		
		case 0x00000007:
			return StackVal;
			break;
		
		default:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GetPlayerPosByStage, returning first stage start position.");
	return StackVal;
}

void Function_253(char* cParam0) //Position: 0xC682 / 50818
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_254(bool bParam0, int iParam1) //Position: 0xC6EE / 50926
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242(&iParam1);
	bParam0 = 1;
	return;
}

void Function_255() //Position: 0xC713 / 50963
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_256() //Position: 0xC728 / 50984
{
	Function_258();
	Function_257(10, 3);
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0xC737 / 50999
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

void Function_258() //Position: 0xC884 / 51332
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_262())
	{
		Function_261(10, 3);
	}
	else
	{
		Function_259();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_259() //Position: 0xC8CF / 51407
{
	Function_260(25, 2);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0xC8DB / 51419
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

void Function_261(int iParam0, int iParam1) //Position: 0xCB07 / 51975
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

bool Function_262() //Position: 0xCC54 / 52308
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

bool Function_263(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCCBC / 52412
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_256();
			Function_255();
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
		Function_253("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_264(struct<17> Param0) //Position: 0xCD6B / 52587
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_277(&Var12, &Var0);
	uVar15 = Function_276(uParam1, &Var12);
	Function_275(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_274(&Param0, uVar15);
	Function_272(StackVal, &Param0, Var12.f_12);
	Function_270(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_269(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_266(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_265(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_265(int iParam0, int iParam1, int iParam2) //Position: 0xCE5F / 52831
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

bool Function_266(struct<17> Param0) //Position: 0xCEBF / 52927
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
				Function_268(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_268(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_265(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_267(Param1.f_64);
	}
	else
	{
		Function_267(Param1.f_64);
	}
	return 0;
}

void Function_267(bool bParam0) //Position: 0xD052 / 53330
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

void Function_268(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xD090 / 53392
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

var Function_269(int iParam0, struct<21> Param1) //Position: 0xD146 / 53574
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_270(vector3 vParam0) //Position: 0xD16D / 53613
{
	switch (Function_271())
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

int Function_271() //Position: 0xD219 / 53785
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

void Function_272(vector3 vParam0) //Position: 0xD255 / 53845
{
	switch (Function_273(&vParam0))
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

int Function_273(int iParam0) //Position: 0xD2FE / 54014
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_77(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_77(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_77(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_77(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&iParam0, 0x20000000);
	return 0;
}

var Function_274(struct<21> Param0) //Position: 0xD41E / 54302
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

void Function_275(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD5D8 / 54744
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

var Function_276(int iParam0, struct<13> Param1) //Position: 0xD674 / 54900
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_277(struct<17> Param0) //Position: 0xD690 / 54928
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

bool Function_278() //Position: 0xD6EA / 55018
{
	return Global_47307;
}

bool Function_279() //Position: 0xD6F3 / 55027
{
	if (IS_EXITFLAG_SET())
	{
		Function_249(iLocal_1356);
		Function_245(StackVal, 4, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
		return 0;
	}
	Function_612(StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, iLocal_1356, bLocal_1357, &bLocal_1547, &bLocal_1545, &bLocal_1546);
	if (iLocal_1356 == 99 && iLocal_1356 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_249(iLocal_1356);
			Function_245(StackVal, 1, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
			return 1;
		}
		if (Function_592(&Local_872, &uLocal_818, &uLocal_1054, &uLocal_1421, iLocal_1548))
		{
			if (Function_590(&uLocal_1054))
			{
				Function_249(iLocal_1356);
				Function_245(StackVal, 5, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
				return 1;
			}
		}
		if (Function_589(2048))
		{
			Function_249(iLocal_1356);
			Function_245(StackVal, 3, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
			return 1;
		}
		if (Global_6646)
		{
			Function_249(iLocal_1356);
			Function_245(StackVal, 2, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
			return 1;
		}
		Function_588();
	}
	switch (iLocal_1356)
	{
		case 0x00000063:
			Function_553();
			break;
		
		case 0x00000000:
			Function_537();
			break;
		
		case 0x00000001:
			Function_520();
			break;
		
		case 0x00000002:
			Function_486();
			break;
		
		case 0x00000003:
			Function_450();
			break;
		
		case 0x00000004:
			Function_439();
			break;
		
		case 0x00000005:
			Function_429();
			break;
		
		case 0x00000006:
			Function_407();
			break;
		
		case 0x00000007:
			Function_351();
			break;
		
		case 0x00000065:
			Function_282();
			break;
		
		case 0x00000064:
			if (Function_281(&bLocal_1546))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_280(&iLocal_1356, &bLocal_1357, &iLocal_1344))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1545)
	{
		Function_254(&bLocal_1545, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1546 && iLocal_1356 == 100)
	{
		Function_249(iLocal_1356);
		Function_245(StackVal, 5, &bLocal_1546, &iLocal_1356, Function_251(iLocal_1356), Function_249(iLocal_1356), 0);
	}
	if (bLocal_1547)
	{
		Function_241(&bLocal_1547, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_280(var uParam0, var uParam1, int iParam2) //Position: 0xD8D7 / 55511
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

bool Function_281(int iParam0) //Position: 0xD920 / 55584
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_282() //Position: 0xD934 / 55604
{
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_344();
			if (!iLocal_1527[7])
			{
				if (!Function_343(Global_46914[0]))
				{
					Function_342(&Local_806);
				}
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_341();
				Function_236(1);
			}
			else
			{
				Function_340();
				Function_236(3);
			}
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_343(Global_46914[0])) && Function_336(&iLocal_1064))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1429, *(&iLocal_4 + 1432[173]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
				Function_226(&bLocal_1435);
				if (IS_ACTOR_VALID(&bLocal_1433))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[303]), 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
				}
				Function_340();
				Function_236(3);
			}
			else if (Function_333(&iLocal_1487) < 2.0f)
			{
				Function_237(&iLocal_1487);
			}
			break;
		
		case 0x00000003:
			if (Function_283("$/cutscene/ANTHRO01_END/ANTHRO01_END", &iLocal_1344, &Local_806, &iLocal_1356, 64068, 59200, 59112, 59064, 58836, 58825, 1, 2, 1, 2, 2, 0, 1))
			{
				TASK_CLEAR(&Global_54076);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_236(106);
				bLocal_1545 = true;
			}
			break;
		
		case 0x0000006A:
			bLocal_1545 = true;
			break;
	}
	return;
}

bool Function_283(int iParam0, int iParam1, struct<41> Param2) //Position: 0xDACE / 56014
{
	if (!&bParam15)
	{
		Function_293(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_292(&Param2) || Param2.f_40 < 1))
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
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_291())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_290(1);
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
					Function_290(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_333(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_333(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_288(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_290(0);
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
						Function_287(1.0f);
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
						Function_285();
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
					Function_284(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_292(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_284(var uParam0, bool bParam1) //Position: 0xE130 / 57648
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
		Function_201();
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

void Function_285() //Position: 0xE1FF / 57855
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_286();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_286() //Position: 0xE244 / 57924
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_287(bool bParam0) //Position: 0xE256 / 57942
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

void Function_288(var uParam0, int iParam1) //Position: 0xE273 / 57971
{
	var uVar0;
	int iVar1;
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
	iVar1 = 0;
	while (iVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_289(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		iVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_289(int iParam0) //Position: 0xE305 / 58117
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == &iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int Function_290(bool bParam0) //Position: 0xE336 / 58166
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
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
		iVar0++;
	}
	return 1;
}

bool Function_291() //Position: 0xE3F9 / 58361
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

bool Function_292(struct<37> Param0) //Position: 0xE436 / 58422
{
	return Param0.f_36;
}

void Function_293(var uParam0, int iParam1) //Position: 0xE441 / 58433
{
	Function_294(&uParam0, &iParam1, 0);
	return;
}

void Function_294(var uParam0, bool bParam1, var uParam2) //Position: 0xE451 / 58449
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
		Function_89(20, 1, 0, 0);
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
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

int Function_295() //Position: 0xE5C9 / 58825
{
	iLocal_1549 = 1;
	return 1;
}

int Function_296() //Position: 0xE5D4 / 58836
{
	Function_297(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_297(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xE5E9 / 58857
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
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
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
		Function_255();
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
	Function_284(&iParam9, &bParam10);
}

int Function_298() //Position: 0xE6B8 / 59064
{
	Function_299();
	return 1;
}

void Function_299() //Position: 0xE6C2 / 59074
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 2608[03]), 1, 1, 1);
	return;
}

int Function_300() //Position: 0xE6E8 / 59112
{
	if (!iLocal_1575)
	{
		if (iLocal_1527[7])
		{
			Function_226(&bLocal_1435);
			if (IS_ACTOR_VALID(&bLocal_1433))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[303]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
			}
		}
		iLocal_1575 = 1;
	}
	return 1;
}

int Function_301() //Position: 0xE740 / 59200
{
	if (Function_302() && Function_343(Global_46914[0]))
	{
		Function_237(&iLocal_1487);
		return 1;
	}
	if (Function_333(&iLocal_1487) < 2.0f)
	{
		Function_237(&iLocal_1487);
	}
	return 0;
}

bool Function_302() //Position: 0xE773 / 59251
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 1;
	if (Function_333(&iLocal_1487) < 1.0f)
	{
		bVar1 = true;
		Function_237(&iLocal_1487);
	}
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_325(0))
	{
		if (bVar1)
		{
		}
		iVar0 = 0;
	}
	if (!Function_320())
	{
		if (bVar1)
		{
		}
		iVar0 = 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_1429))
	{
		if (bVar1)
		{
		}
		bLocal_1429 = Function_311(9, 0, 1, 0, 0, 0, 0, 0, 0);
		iVar0 = 0;
	}
	if (!Function_310())
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_1433))
	{
		if (bVar1)
		{
		}
		bLocal_1433 = Function_303(1, 1, 0, 0, 0, 0, 1, 0);
		iVar0 = 0;
	}
	else if (!IS_ACTOR_READY_FOR_ACTION(&bLocal_1433))
	{
		if (bVar1)
		{
		}
		MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1433, 1);
		iVar0 = 0;
	}
	return iVar0;
}

var Function_303(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xE82C / 59436
{
	int iVar0;
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
	iVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_309(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_310())
		{
			return "";
		}
	}
	if (!Function_307())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_201();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_306(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_306(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_306(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_306(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_305(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_305(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), iVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 1,391489E-42f, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), iVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (iVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (iVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 1,391489E-42f, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_304(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_304(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xEB89 / 60297
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

var Function_305(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xEBD3 / 60371
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

struct<8> Function_306(var uParam0) //Position: 0xEC73 / 60531
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

bool Function_307() //Position: 0xEC9C / 60572
{
	if (Function_308() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_308() //Position: 0xECB2 / 60594
{
	return Global_21369.f_244;
}

void Function_309(var uParam0, bool bParam1, bool bParam2) //Position: 0xECBD / 60605
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

bool Function_310() //Position: 0xECEC / 60652
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

var Function_311(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0xED0C / 60684
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
		Function_229(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), 1);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_319(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_314(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
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
		TASK_PRIORITY_SET(&bVar1, 1);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, 0);
		Function_313(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, 0);
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
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, 1);
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
		Function_312(&bVar1, 0);
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

void Function_312(var uParam0, int iParam1) //Position: 0xF24C / 62028
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", iParam1);
	return;
}

void Function_313(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) //Position: 0xF26E / 62062
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &iParam3);
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

var Function_314(int iParam0, int iParam1) //Position: 0xF2CF / 62159
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_318(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_315(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		iVar0++;
	}
	return "";
}

void Function_315(var uParam0, int iParam1) //Position: 0xF35D / 62301
{
	Function_317(&uParam0);
	Function_316(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_316(int iParam0) //Position: 0xF389 / 62345
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_317(int iParam0) //Position: 0xF3AF / 62383
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

bool Function_318(int iParam0) //Position: 0xF485 / 62597
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_319(int iParam0, var uParam1) //Position: 0xF49C / 62620
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

bool Function_320() //Position: 0xF542 / 62786
{
	Function_324(&iLocal_4 + 8, 980, 2, 0);
	Function_324(&iLocal_4 + 8, 1102, 2, 0);
	Function_324(&iLocal_4 + 8, 476, 2, 0);
	Function_324(&iLocal_4 + 8, 475, 2, 0);
	Function_324(&iLocal_4 + 8, 470, 2, 0);
	Function_324(&iLocal_4 + 8, 468, 2, 0);
	Function_324(&iLocal_4 + 8, 469, 2, 0);
	Function_324(&iLocal_4 + 8, 467, 2, 0);
	Function_324(&iLocal_4 + 8, 471, 2, 0);
	Function_324(&iLocal_4 + 8, 472, 2, 0);
	Function_324(&iLocal_4 + 8, 474, 2, 0);
	Function_324(&iLocal_4 + 8, 977, 2, 0);
	Function_324(&iLocal_4 + 8, 984, 2, 0);
	Function_324(&iLocal_4 + 8, 976, 2, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle_loop", 1, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_321(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stool_sit_attach_indef", 1, 0);
	if (Function_336(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_321(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xF818 / 63512
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_323(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_322(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

void Function_322(struct<13> Param0) //Position: 0xF856 / 63574
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_323(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xF869 / 63593
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_185(&(Param0[iVar02]), 4))
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

var Function_324(struct<2>[] Param0, int iParam1, bool bParam2, bool bParam3) //Position: 0xF938 / 63800
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_185(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_322(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_322(&(Param0[iVar02]), 8);
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

bool Function_325(bool bParam0) //Position: 0xFA14 / 64020
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

int Function_326() //Position: 0xFA44 / 64068
{
	iLocal_1549 = 0;
	Function_329(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_327(StackVal, &uLocal_804, Global_54078, &iLocal_4 + 1096[2], 0, 0, 0, 0, 1, 1);
	Function_237(&iLocal_1487);
	return 1;
}

void Function_327(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xFA84 / 64132
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
				Function_328(&uVar1, &uParam0);
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

void Function_328(var uParam0, float fParam1) //Position: 0xFD24 / 64804
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	iVar2 = 0;
	while (iVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(iVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, iVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		iVar3++;
	}
	return;
}

void Function_329(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xFDA6 / 64934
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
	Function_255();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", 0);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
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
				Function_332(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_332(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_331()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_331()));
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
	if (Function_330(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_330(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_330(int iParam0) //Position: 0x1005A / 65626
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_331() //Position: 0x10076 / 65654
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

struct<8> Function_332(int iParam0) //Position: 0x10104 / 65796
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_333(vector3 vParam0) //Position: 0x10116 / 65814
{
	if (Function_335(&vParam0))
	{
		if (Function_334(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_334(int iParam0) //Position: 0x101E3 / 66019
{
	return Function_14(iParam0, 2);
}

bool Function_335(int iParam0) //Position: 0x101F1 / 66033
{
	return Function_14(iParam0, 1);
}

bool Function_336(struct<2>[] Param0) //Position: 0x101FF / 66047
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_339();
	iVar1 = 0;
	if (!Function_185(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_322(&(Param0[iVar02]), 8);
		}
		else if (Function_338())
		{
			iVar1 = 1;
			Function_322(&(Param0[iVar02]), 8);
		}
		Function_322(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_185(&(Param0[02]), 8) || iVar1));
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
		if (Function_185(&(Param0[iVar02]), 4))
		{
			if (!Function_185(&(Param0[iVar02]), 2))
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
	Function_337();
	return 1;
}

void Function_337() //Position: 0x105C1 / 67009
{
	if (!Function_330(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_338() //Position: 0x10601 / 67073
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

void Function_339() //Position: 0x1062F / 67119
{
	if (!Function_330(128))
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

void Function_340() //Position: 0x10671 / 67185
{
	return;
}

void Function_341() //Position: 0x10677 / 67191
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, (&iLocal_4 + 1432[83]), 1, 1, 1);
	return;
}

void Function_342(int iParam0) //Position: 0x1069F / 67231
{
	if (!Function_292(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_192(1, 0, 1);
		}
	}
	return;
}

bool Function_343(bool bParam0) //Position: 0x106BB / 67259
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_344() //Position: 0x106D7 / 67287
{
	Function_169(12);
	Function_345(32776);
	return;
}

void Function_345(int iParam0) //Position: 0x106E9 / 67305
{
	Function_346(&Global_43580, iParam0);
	return;
}

void Function_346(var uParam0, int iParam1) //Position: 0x106F7 / 67319
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_347(bool bParam0) //Position: 0x1071F / 67359
{
	Function_348(0, 0x40400000);
	Function_208();
	Function_207();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_348(float fParam0, float fParam1) //Position: 0x10755 / 67413
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
			TASK_PRIORITY_SET(&Global_21369 + 72, 1);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_350();
	Function_349();
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

void Function_349() //Position: 0x10866 / 67686
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_350() //Position: 0x1089A / 67738
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

void Function_351() //Position: 0x109A0 / 68000
{
	float fVar0;
	
	Function_387();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1527[6])
			{
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				Function_342(&Local_806);
				Function_386();
				Function_236(1);
			}
			else
			{
				Function_385();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_336(&iLocal_1258)) && Function_336(&iLocal_1064))
			{
				Function_385();
				Function_236(2);
			}
			break;
		
		case 0x00000002:
			if (Function_333(&iLocal_1487) < 4.0f || (!HUD_IS_FADED() && Function_333(&iLocal_1487) < 2,5f))
			{
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[1], Function_252(iLocal_1356), 2);
				Function_287(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_376())
			{
				fVar0 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar0 < 200.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar0 < 60.0f)
				{
					if (Function_374(&bLocal_1429, &Global_54076, 0.0f))
					{
						if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
						{
							if (iLocal_1524 != 0)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
							}
						}
					}
					else if (GET_TASK_STATUS(&bLocal_1429, 6) != 1)
					{
						TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
					}
					if (!iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
					{
						if (iLocal_1524 != 0)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
						}
					}
					if (iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro01_obj08a", 7,5f, 1, 2, 0, 0, 0, 0);
						iLocal_1550 = 0;
					}
					if (iLocal_1524 == 0)
					{
						if (bLocal_1573)
						{
							iLocal_1524 = 11;
						}
						else if (Function_333(&iLocal_1487) < 1.0f)
						{
							Function_372();
							iLocal_1524 = 91;
						}
					}
					else if (iLocal_1524 == 11)
					{
						if (Function_333(&iLocal_1487) < 1.0f)
						{
							Function_371();
							Function_237(&iLocal_1487);
							iLocal_1524 = 12;
						}
					}
					else if (iLocal_1524 == 12)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_370();
							Function_237(&iLocal_1487);
							iLocal_1524 = 91;
						}
					}
					else if (iLocal_1524 == 91)
					{
						if (iLocal_1571)
						{
							iLocal_1524 = 92;
						}
						else if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_373("Anthro01_obj08a", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1571 = 1;
							Function_237(&iLocal_1487);
							if (!bLocal_1567)
							{
								iLocal_1524 = 92;
							}
							else
							{
								iLocal_1524 = 95;
							}
						}
					}
					else if (iLocal_1524 == 95)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_369())
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 1.0f)
						{
							AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
							Function_359();
							iLocal_1524 = 100;
						}
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!Function_354())
			{
				fVar0 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar0 < 200.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar0 < 60.0f)
				{
					if (!iLocal_1550)
					{
						Function_229(9, 1, 1);
						if (IS_OBJECT_VALID(&iLocal_1485))
						{
							GATEWAY_DISABLE(&iLocal_1485, 1);
							Function_230(&iLocal_1485);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						if (IS_OBJECT_VALID(&iLocal_1485))
						{
							Function_229(9, 0, 1);
							GATEWAY_DISABLE(&iLocal_1485, 0);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1485)))
							{
								ADD_BLIP_FOR_OBJECT(&iLocal_1485, 330, 0f, 2, 0);
							}
							if (IS_ACTOR_RIDING(&Global_54076))
							{
								Function_373("Anthro01_obj08b", 7,5f, 1, 2, 0, 0, 0, 0);
							}
							else
							{
								Function_373("Anthro01_obj08c", 7,5f, 1, 2, 0, 0, 0, 0);
							}
						}
						else
						{
							Function_373("Anthro01_obj08a", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						iLocal_1550 = 0;
					}
					if (iLocal_1524 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_222(&iLocal_1485);
							iLocal_1485 = Function_353(&uLocal_804, "AlleyGateway", &iLocal_4 + 1136[8], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
							Function_229(9, 0, 1);
							HUD_CLEAR_OBJECTIVE();
							if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1136[8]))
							{
								if (IS_ACTOR_RIDING(&Global_54076))
								{
									Function_373("Anthro01_obj08b", 7,5f, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									Function_373("Anthro01_obj08c", 7,5f, 1, 2, 0, 0, 0, 0);
								}
							}
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_352();
			iLocal_1527[7] = 1;
			iLocal_1356 = 101;
			Function_236(0);
			break;
	}
	return;
}

void Function_352() //Position: 0x10EE4 / 69348
{
	Function_182(&iLocal_1258);
	return;
}

int Function_353(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) //Position: 0x10EF0 / 69360
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &iParam6, &iParam7, &iParam8, &iParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &iParam8);
	}
	return &uVar0;
}

bool Function_354() //Position: 0x10F81 / 69505
{
	if (iLocal_1524 == 0)
	{
		if (!IS_ACTOR_RIDING(&bLocal_1429))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429);
			iLocal_1524 = 1;
		}
	}
	else if (Function_355(&iLocal_1485, 0, 1, 0, 0, 0))
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
		Function_236(106);
		return 1;
	}
	return 0;
}

bool Function_355(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x10FCE / 69582
{
	var uVar0;
	int iVar1;
	int iVar2;
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
				iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&iVar1))
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
			iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&iVar1))
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
				Function_358(&iVar1, &bParam5);
			}
			else if (IS_ACTOR_RIDING(&iVar1))
			{
				if (Function_357(&iVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&iVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&iVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&iVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&iVar1))
			{
				iVar2 = TASK_SEQUENCE_OPEN();
				if (Function_357(&iVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&iVar1, &iVar3, &uVar5);
					Function_356(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&iVar1, &iVar3, &uVar5);
					Function_356(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_356(vector3 vParam0) //Position: 0x11203 / 70147
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_357(int iParam0, bool bParam1) //Position: 0x11279 / 70265
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&iParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_358(int iParam0, bool bParam1) //Position: 0x1129A / 70298
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(&iParam0))
	{
		uVar0 = GET_MOUNT(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&iParam0))
	{
		bVar1 = GET_VEHICLE(&iParam0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			STOP_VEHICLE(&bVar1);
		}
	}
	else if (!&bParam1 || Function_357(&iParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&iParam0, 1);
	}
	return;
}

void Function_359() //Position: 0x11304 / 70404
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_BakBlkwtr_v1_AA", "Anthro01_BakBlkwtr_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_BakBlkwtr_v1_AB", "Anthro01_BakBlkwtr_v1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_BakBlkwtr_v1_AC", "Anthro01_BakBlkwtr_v1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_BakBlkwtr_v1_AD", "Anthro01_BakBlkwtr_v1_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_BakBlkwtr_v1_AE1", "Anthro01_BakBlkwtr_v1_AE1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_BakBlkwtr_v1_AE2", "Anthro01_BakBlkwtr_v1_AE2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_BakBlkwtr_v1_AF", "Anthro01_BakBlkwtr_v1_AF", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_BakBlkwtr_v1_AG", "Anthro01_BakBlkwtr_v1_AG", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_360(int iParam0) //Position: 0x1151A / 70938
{
	Function_368(0, &Global_54076, iParam0, 0);
	Function_368(1, &bLocal_1429, iParam0, 0);
	Function_368(2, &bLocal_1431, iParam0, 0);
	Function_368(4, Function_367(), iParam0, 0);
	Function_368(5, Function_366(), iParam0, 0);
	Function_368(6, Function_361(), iParam0, 0);
	return;
}

int Function_361() //Position: 0x1155F / 71007
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar2 = 999999.0f;
	if (iLocal_1356 != 8)
	{
		return "";
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		iVar0 = &iLocal_4 + 952[iVar42];
		if (Function_362(&iVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_375(&Global_54076, &iVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				iVar1 = &iVar0;
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		iVar0 = &iLocal_4 + 1016[iVar42];
		if (Function_362(&iVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_375(&Global_54076, &iVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				iVar1 = &iVar0;
			}
		}
		iVar4++;
	}
	return &iVar1;
}

bool Function_362(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x11616 / 71190
{
	int iVar0;
	
	if (bParam1)
	{
		Function_365(&iVar0, 1);
	}
	if (&bParam2)
	{
		Function_365(&iVar0, 2);
	}
	if (&bParam3)
	{
		Function_365(&iVar0, 4);
	}
	if (&bParam4)
	{
		Function_365(&iVar0, 8);
	}
	if (&bParam5)
	{
		Function_365(&iVar0, 1024);
	}
	if (&bParam7)
	{
		Function_365(&iVar0, 16);
	}
	if (&bParam8)
	{
		Function_365(&iVar0, 32);
	}
	if (&bParam6)
	{
		Function_365(&iVar0, 1048576);
	}
	return Function_363(&bParam0, iVar0);
}

int Function_363(int iParam0, int iParam1) //Position: 0x1168D / 71309
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_364(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_364(&iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(&iParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_364(var uParam0, int iParam1) //Position: 0x1177B / 71547
{
	return (uParam0 && iParam1) == 0;
}

void Function_365(int iParam0, int iParam1) //Position: 0x11788 / 71560
{
	Function_77(&iParam0, iParam1);
	return;
}

int Function_366() //Position: 0x11796 / 71574
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar2 = 999999.0f;
	if (iLocal_1356 != 8)
	{
		return "";
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		fVar0 = &iLocal_4 + 1016[iVar42];
		if (Function_362(&fVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_375(&Global_54076, &fVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				iVar1 = &fVar0;
			}
		}
		iVar4++;
	}
	return &iVar1;
}

int Function_367() //Position: 0x117FF / 71679
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar2 = 999999.0f;
	if (iLocal_1356 != 8)
	{
		return "";
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		iVar0 = &iLocal_4 + 952[iVar42];
		if (Function_362(&iVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_375(&Global_54076, &iVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				iVar1 = &iVar0;
			}
		}
		iVar4++;
	}
	return &iVar1;
}

void Function_368(bool bParam0, int iParam1, var uParam2, int iParam3) //Position: 0x11868 / 71784
{
	var uVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(bParam0)))
	{
		uVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(uVar0, &iParam1, 0);
	}
}

bool Function_369() //Position: 0x11890 / 71824
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_370() //Position: 0x1189D / 71837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_AttkrsRetreating", "Anthro01_AttkrsRetreating", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_371() //Position: 0x118F8 / 71928
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Anthro01_2Close2Blkwtr", "Anthro01_2Close2Blkwtr", 0, 2, 1, 0, 1);
		Function_360(65);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_372() //Position: 0x1194E / 72014
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_2ndWaveDef_v1_AA", "Anthro01_2ndWaveDef_v1_AA", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_2ndWaveDef_v1_AB", "Anthro01_2ndWaveDef_v1_AB", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_373(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x119EA / 72170
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_374(bool bParam0, var uParam1, float fParam2) //Position: 0x11A7F / 72319
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&uParam1))
	{
		GET_POSITION(&bParam0, &Var0);
		GET_POSITION(&uParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&bParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

float Function_375(float fParam0, bool bParam1) //Position: 0x11B1E / 72478
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

bool Function_376() //Position: 0x11C13 / 72723
{
	int iVar0;
	
	if (!IS_ACTOR_IN_VOLUME(&bLocal_1429, &iLocal_4 + 1136[5]))
	{
		return 0;
	}
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3176, 1, 0, 0, 1, 0);
	TASK_DISMOUNT(0, 0);
	TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 2376[13], 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1429);
	Function_236(16);
	return 1;
}

void Function_377(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x11C80 / 72832
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
	if (iParam2 != Global_53524.f_48 && !Function_384())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_383(0);
	Function_382();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_380(iParam2);
	}
	Function_379(uParam3, iVar0, iVar1);
	Function_378();
}

void Function_378() //Position: 0x11D29 / 73001
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

void Function_379(int iParam0, bool bParam1, bool bParam2) //Position: 0x11D6A / 73066
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

void Function_380(int iParam0) //Position: 0x11ED3 / 73427
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_381() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", iParam0);
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

struct<16> Function_381() //Position: 0x1206B / 73835
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

void Function_382() //Position: 0x120B1 / 73905
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_383(bool bParam0) //Position: 0x120D5 / 73941
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

bool Function_384() //Position: 0x12104 / 73988
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_385() //Position: 0x1211F / 74015
{
	Function_226(&bLocal_1431);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[6]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[6]);
	bLocal_1567 = false;
	STREAMING_UNLOAD_BOUNDS();
	DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
	MEMORY_PREFER_RIDING(&bLocal_1429, 1);
	if (!iLocal_1527[6])
	{
		Function_229(9, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[293]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1433)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1433);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[163]), 1, 1, 1);
		if (GET_MOUNT(&bLocal_1429) != &bLocal_1435)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1429, &bLocal_1435);
		}
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429, 3212836864, 3212836864, 4, 1, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1429, 1);
	}
	iLocal_1358 = 0;
	return;
}

void Function_386() //Position: 0x1221A / 74266
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[73]), 1, 1, 1);
	return;
}

void Function_387() //Position: 0x12240 / 74304
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1136[7]))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1429, &iLocal_4 + 1136[7]))
		{
			SET_ACTOR_MAX_SPEED(&bLocal_1429, 4);
			if (iLocal_1524 == 92)
			{
				iLocal_1524 = 95;
			}
			DESTROY_VOLUME(&iLocal_4 + 1136[7]);
		}
	}
	Function_395(1);
	Function_394();
	Function_388(StackVal, "$/cutscene/ANTHRO01_END/ANTHRO01_END", &iLocal_1358, *(&iLocal_4 + 2376[23]), 0, 150.0f, 300.0f, 2, 1, 2, 2, 0, 1);
	return;
}

int Function_388(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x122E4 / 74468
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_391(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_393()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					Function_389();
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
	else if ((!Function_391(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_393()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_391(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_389() //Position: 0x1254C / 75084
{
	int iVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &Var5, &Var7);
			Function_390(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_390(char* cParam0) //Position: 0x125A0 / 75168
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
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(fParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(fParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_391(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x126C9 / 75465
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_392(&bParam0);
		if (VDIST(Function_392(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_392(var uParam0) //Position: 0x12755 / 75605
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

int Function_393() //Position: 0x127C1 / 75713
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_394() //Position: 0x127D0 / 75728
{
	int iVar0;
	
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		iLocal_1574 = 0;
	}
	if (Function_333(&iLocal_1515) > 8.0f)
	{
		return;
	}
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_ALIVE(&iVar0))
	{
		if (IS_ACTOR_HUMAN(&iVar0))
		{
			if (GET_ACTOR_FACTION(&iVar0) == 20 && GET_ACTOR_FACTION(&iVar0) == 19)
			{
				if ((&iVar0 == &bLocal_1429 && &iVar0 == &bLocal_1431) && !IS_ACTOR_IN_ACTORSET(&iLocal_4 + 840, &iVar0))
				{
					if (iLocal_1356 <= 0 && iLocal_1356 >= 2)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1429, "Anthro01_GunOnAmbChar", "", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						Function_237(&iLocal_1515);
						return;
					}
				}
			}
		}
	}
	if (IS_ACTOR_SHOOTING(&Global_54076))
	{
		if (!IS_ACTOR_VALID(&iVar0))
		{
			if (!iLocal_1548)
			{
				if (iLocal_1356 <= 0 && iLocal_1356 >= 2)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1429, "Anthro01_ShootsGunRand", "", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					Function_237(&iLocal_1515);
					return;
				}
			}
		}
	}
	if (!iLocal_1574)
	{
		if ((((iLocal_1356 != 0 && bLocal_1357 != 16) || (iLocal_1356 != 1 && iLocal_1524 > 3)) || (iLocal_1356 != 2 && bLocal_1357 != 16)) || (iLocal_1356 <= 5 && !(iLocal_1356 != 7 && bLocal_1357 != 16)))
		{
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				if (IS_ACTOR_ALIVE(&bLocal_1433))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1429, "Anthro01_GetsOffHorsMcd", "", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					Function_237(&iLocal_1515);
					iLocal_1574 = 1;
					return;
				}
			}
		}
	}
	return;
}

void Function_395(bool bParam0) //Position: 0x12981 / 76161
{
	bool bVar0;
	int iVar1;
	
	if (&bParam0)
	{
		iVar1 = GET_MOUNT(&bLocal_1429);
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			if (&iVar1 != &bLocal_1435)
			{
				if (&iVar1 == &bLocal_1433)
				{
					if (IS_ACTOR_ALIVE(&bLocal_1435))
					{
						bLocal_1433 = &bLocal_1435;
						SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
						Function_404(&bLocal_1433, 3.0f);
						SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
					}
					else
					{
						Function_403();
						bLocal_1433 = "";
					}
				}
				bLocal_1435 = &iVar1;
				SET_ACTORS_HORSE(&bLocal_1429, &bLocal_1435);
				DECOR_SET_BOOL(&bLocal_1435, "bInjuryNoEjection", 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1435, 0.0f);
				Function_396(&(Local_872[115]), &bLocal_1435, "Anthro_horse", 0, 0x5f5e100, 1);
			}
		}
		bVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_ALIVE(&bVar0))
		{
			if (&bVar0 != &bLocal_1433)
			{
				if (IS_ACTOR_VALID(&bLocal_1433))
				{
					SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 1);
					Function_220(&bLocal_1433);
					TASK_CLEAR(&bLocal_1433);
					DECOR_REMOVE(&bLocal_1433, "bInjuryNoEjection");
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 1.0f);
				}
				bLocal_1433 = &bVar0;
				SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
				SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
				Function_404(&bLocal_1433, 3.0f);
				TASK_STAND_STILL(&bLocal_1433, -1.0f, 0, 0);
				DECOR_SET_BOOL(&bLocal_1433, "bInjuryNoEjection", 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
			}
		}
	}
	if (!IS_ACTOR_ALIVE(&bLocal_1433))
	{
		if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_1435))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_1435, 0);
		}
		if (iLocal_1356 < 2)
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 0);
			}
		}
	}
	return;
}

int Function_396(struct<69> Param0) //Position: 0x12B30 / 76592
{
	if (!Function_402(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_401(&Param0, &iParam2))
	{
		return 0;
	}
	Function_400(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_397(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_397(var uParam0, int iParam1, int iParam2) //Position: 0x12B76 / 76662
{
	if (iParam1 != 100000000)
	{
		Function_399(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_398(&uParam0, &iParam2);
	}
	return;
}

void Function_398(struct<69> Param0) //Position: 0x12B9D / 76701
{
	Param0.f_68 = 0;
	Function_399(&Param0, 2, &bParam1);
	Function_399(&Param0, 4, &bParam1);
	Function_399(&Param0, 8, &bParam1);
	Function_399(&Param0, 16, &bParam1);
	Function_399(&Param0, 32, &bParam1);
	Function_399(&Param0, 64, &bParam1);
	Function_399(&Param0, 128, &bParam1);
	Function_399(&Param0, 256, &bParam1);
	Function_399(&Param0, 512, &bParam1);
	Function_399(&Param0, 1024, &bParam1);
	return;
}

void Function_399(int iParam0, int iParam1, bool bParam2) //Position: 0x12C18 / 76824
{
	int iVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	iVar0 = 0;
	Function_77(&iVar0, iParam1);
	iVar0 = SHIFT_LEFT(iVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, iVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, iVar0);
	}
	return;
}

void Function_400(struct<65> Param0) //Position: 0x12C57 / 76887
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_401(int iParam0, char* cParam1) //Position: 0x12C64 / 76900
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

bool Function_402(struct<61> Param0) //Position: 0x12CF1 / 77041
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
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, 0);
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
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uVar3);
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

void Function_403() //Position: 0x12EA4 / 77476
{
	(&Global_21369 + 128) = "";
	return;
}

void Function_404(bool bParam0, float fParam1) //Position: 0x12EB2 / 77490
{
	Function_405(&fParam1);
	*(&Global_21369 + 128) = &bParam0;
	return;
}

void Function_405(float fParam0) //Position: 0x12EC7 / 77511
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

bool Function_406(bool bParam0) //Position: 0x13096 / 77974
{
	switch (bParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

void Function_407() //Position: 0x130CD / 78029
{
	int iVar0;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	
	Function_428();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1527[5])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				Function_342(&Local_806);
				Function_427();
				Function_236(1);
			}
			else
			{
				Function_424();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_336(&iLocal_1180)) && Function_336(&iLocal_1064))
			{
				Function_424();
				Function_236(2);
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADED() || Function_333(&iLocal_1487) < 2,5f)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[1], Function_252(iLocal_1356), 2);
				Function_287(1.0f);
				if (!bLocal_1572)
				{
					Function_236(6);
				}
				else
				{
					Function_236(16);
				}
			}
			break;
		
		case 0x00000006:
			if (!Function_420())
			{
				fVar5 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar5 < 200.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar5 < 60.0f)
				{
					if (Function_374(&bLocal_1429, &Global_54076, 0.0f))
					{
						if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
						}
					}
					else if (GET_TASK_STATUS(&bLocal_1429, 6) != 1)
					{
						TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
					}
					if (!iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
					}
					iLocal_1550 = 0;
					if (iLocal_1524 == 0)
					{
						Function_419();
						Function_237(&iLocal_1487);
						iLocal_1524 = 1;
					}
					else if (iLocal_1524 == 1)
					{
						if (iLocal_1571)
						{
							iLocal_1524 = 2;
						}
						else if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_373("Anthro01_obj07a", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1571 = 1;
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
					else if (iLocal_1524 == 2)
					{
						if (!Function_369() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_418();
							Function_237(&iLocal_1487);
							iLocal_1524 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!Function_417())
			{
				Function_83(&bLocal_1429, &iVar0);
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 3152, &Global_54078, &iVar0, &uVar2, &uVar3, &uVar4);
				if (!Function_414(&bLocal_1570))
				{
					fVar5 = Function_375(&Global_54076, &bLocal_1429);
					if (fVar5 < 200.0f)
					{
						Function_253("Anthro_abandoned");
						bLocal_1546 = true;
					}
					else if (fVar5 < 70.0f)
					{
						if (!iLocal_1552)
						{
							Function_413();
							iLocal_1552 = 1;
						}
						else if (!iLocal_1550)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GET_TASK_STATUS(&bLocal_1429, 6) != 1)
								{
									TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
								}
								Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
								iLocal_1550 = 1;
							}
						}
					}
					else
					{
						if (iLocal_1552 || iLocal_1550)
						{
							if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
							}
							Function_412();
							iLocal_1550 = 0;
							iLocal_1552 = 0;
						}
						if (iLocal_1524 == 1)
						{
							Function_411();
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
						else if (iLocal_1524 == 2)
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							Function_410();
							Function_237(&iLocal_1487);
							iLocal_1524 = 3;
						}
						else if (iLocal_1524 == 3)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
							{
								Function_373("Anthro01_obj07b", 7,5f, 1, 2, 0, 0, 0, 0);
								iLocal_1571 = 0;
								Function_237(&iLocal_1487);
								iLocal_1524 = 4;
							}
						}
						else if (iLocal_1524 == 4)
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_369())
							{
								Function_237(&iLocal_1487);
							}
							else if (Function_333(&iLocal_1487) < 20.0f)
							{
								Function_409();
								Function_237(&iLocal_1487);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_408();
				iLocal_1527[6] = 1;
				iLocal_1356 = 7;
				Function_236(0);
			}
			break;
	}
	return;
}

void Function_408() //Position: 0x134EC / 79084
{
	Function_182(&iLocal_1180);
	return;
}

void Function_409() //Position: 0x134F8 / 79096
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_AttkShouts", "Anthro01_AttkShouts", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_410() //Position: 0x13547 / 79175
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_McdSpotsAmb", "Anthro01_McdSpotsAmb", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_411() //Position: 0x13598 / 79256
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Anthro01_AmbsMoreGangs", "Anthro01_AmbsMoreGangs", 0, 1, 1, 0, 1);
		Function_360(17);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_412() //Position: 0x135EE / 79342
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_413() //Position: 0x135FA / 79354
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_FallsBehindMcd", "Anthro01_FallsBehindMcd", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_414(bool bParam0) //Position: 0x13651 / 79441
{
	bool bVar0;
	var uVar1;
	struct<2> Var2[8];
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	Var2[02] = Vector(4.0f, 0.0f, -4.0f);
	Var2[12] = Vector(4.0f, 0.0f, -4.0f);
	Var2[22] = Vector(-4.0f, 0.0f, -4.0f);
	Var2[32] = Vector(-4.0f, 0.0f, -4.0f);
	Var2[42] = Vector(4.0f, 0.0f, 4.0f);
	Var2[52] = Vector(4.0f, 0.0f, 4.0f);
	Var2[62] = Vector(-4.0f, 0.0f, 4.0f);
	Var2[72] = Vector(-4.0f, 0.0f, 4.0f);
	if (Function_333(&iLocal_1495) < 3.0f)
	{
		bVar20 = false;
		while (bVar20 <= GET_ACTORSET_SIZE(&uLocal_1427))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(&uLocal_1427, bVar20);
			if (Function_362(&bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				if (Function_362(&bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
				{
					if (!IS_ACTOR_VALID(&uVar1))
					{
						uVar1 = &bVar0;
					}
				}
				if (DECOR_CHECK_EXIST(&bVar0, "ignoreDist"))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bVar0, 100.0f) || ACTORS_IN_RANGE(&bLocal_1429, &bVar0, 100.0f))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar0)))
						{
							STREAMING_UNLOAD_BOUNDS();
							bVar21 = true;
						}
					}
					if ((ACTORS_IN_RANGE(&Global_54076, &bVar0, 55.0f) || ACTORS_IN_RANGE(&bLocal_1429, &bVar0, 55.0f)) || IS_ACTOR_SHOOTING(&bVar0))
					{
						if (Function_14(bVar20, 1))
						{
							TASK_FOLLOW_AND_ATTACK_OBJECT(&bVar0, &Global_54076, &(Var2[bVar202]), 0, 0, 0, 0, 0, 1);
						}
						else
						{
							TASK_FOLLOW_AND_ATTACK_OBJECT(&bVar0, &bLocal_1429, &(Var2[bVar202]), 0, 0, 0, 0, 0, 1);
						}
						DECOR_REMOVE(&bVar0, "ignoreDist");
						SAY_SINGLE_LINE_CONTEXT(&bVar0, 27, &Global_54076, 1, 1, 3, 4294967295, 4294967295, 0, 1);
						if (!bParam0)
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							iLocal_1524 = 1;
							bParam0 = 1;
						}
					}
				}
				else
				{
					fVar19 = Function_416(Function_375(&bVar0, &Global_54076), Function_375(&bVar0, &bLocal_1429));
					if (fVar19 < 100.0f)
					{
						Function_220(&bVar0);
						KILL_ACTOR(&bVar0);
					}
				}
			}
			bVar20++;
		}
		Function_237(&iLocal_1495);
	}
	if (Function_415(&uLocal_1427, 0, 1, 1, 1, 0))
	{
		if (bVar21)
		{
			AUDIO_MUSIC_SET_MOOD("CHASE_GUNFIGHT", 0, 4294967295, 4294967295);
			SET_ACTOR_INVULNERABILITY(&bLocal_1429, 1);
			bVar20 = false;
			while (bVar20 <= GET_ACTORSET_SIZE(&uLocal_1427))
			{
				bVar0 = GET_ACTOR_FROM_ACTORSET(&uLocal_1427, bVar20);
				if (IS_ACTOR_ALIVE(&bVar0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar0)))
					{
						ADD_BLIP_FOR_ACTOR(&bVar0, 322, 0, 2, 0);
					}
				}
				bVar20++;
			}
		}
		return 0;
	}
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	iLocal_1548 = 0;
	SET_ACTOR_INVULNERABILITY(&bLocal_1429, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1429, 1, 0);
	Function_236(106);
	return 1;
}

bool Function_415(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x138FE / 80126
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!IS_ACTORSET_VALID(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (GET_ACTORSET_SIZE(&uParam0) - 1))
	{
		uVar2 = GET_ACTOR_FROM_ACTORSET(&uParam0, iVar0);
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

var Function_416(float fParam0, float fParam1) //Position: 0x139C3 / 80323
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool Function_417() //Position: 0x139D6 / 80342
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1136[4]))
	{
		if (!IS_ACTOR_IN_VOLUME(&bLocal_1429, &iLocal_4 + 1136[4]))
		{
			return 0;
		}
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(&uLocal_1427))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(&uLocal_1427, bVar1);
		if (IS_ACTOR_VALID(&bVar0))
		{
			Function_220(&bVar0);
			if (Function_362(&bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
			{
				TASK_FLEE_ACTOR(&bVar0, &Global_54076, 1000.0f, -1.0f, 0, 0, 0);
			}
		}
		bVar1++;
	}
	bLocal_1573 = true;
	iLocal_1548 = 0;
	SET_ACTOR_INVULNERABILITY(&bLocal_1429, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	Function_236(106);
	return 1;
}

void Function_418() //Position: 0x13A89 / 80521
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v3_AA1", "Anthro01_GuysBanterBlkwt_v3_AA1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v3_AA2", "Anthro01_GuysBanterBlkwt_v3_AA2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuysBanterBlkwt_v3_AB", "Anthro01_GuysBanterBlkwt_v3_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v3_AC1", "Anthro01_GuysBanterBlkwt_v3_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v3_AC2", "Anthro01_GuysBanterBlkwt_v3_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuysBanterBlkwt_v3_AD", "Anthro01_GuysBanterBlkwt_v3_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v3_AE1", "Anthro01_GuysBanterBlkwt_v3_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v3_AE2", "Anthro01_GuysBanterBlkwt_v3_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuysBanterBlkwt_v3_AF", "Anthro01_GuysBanterBlkwt_v3_AF", 1, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_419() //Position: 0x13D52 / 81234
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_1stGroupAttkrDef", "Anthro01_1stGroupAttkrDef", 1, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_420() //Position: 0x13DAD / 81325
{
	bool bVar0;
	int iVar1;
	
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1424))
	{
		return 0;
	}
	if (!IS_ACTORSET_VALID(&uLocal_1427))
	{
		uLocal_1427 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_804, "nAmbushSet", 0);
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		bVar0 = &iLocal_4 + 1016[iVar12];
		if (Function_423(&bVar0, 1))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bVar0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(&bVar0, 0);
			MEMORY_PREFER_RIDING(&bVar0, 0);
			SET_ACTOR_MIN_SPEED(&bVar0, 2);
			SET_ACTOR_ALLOW_DISARM(&bVar0, 0);
			SET_CRIPPLE_ENABLE(&bVar0, 0);
			AI_RIDING_SET_ENABLED(&bVar0, 0);
			Function_422(&bVar0, &Global_54076);
			Function_422(&bVar0, &bLocal_1429);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&bVar0, 359,5f);
			DECOR_SET_BOOL(&bVar0, "ignoreDist", 1);
			ADD_ACTORSET_MEMBER(&uLocal_1427, &bVar0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bVar0, &iLocal_4 + 3168, 3, 0, 0, 0, 0);
		}
		iVar1++;
	}
	ACTOR_END_FORCE_HOLSTER(&bLocal_1429);
	iLocal_1548 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	if (iLocal_1356 == 5)
	{
		bLocal_1572 = true;
		Function_236(106);
	}
	else if (iLocal_1550)
	{
		Function_236(16);
		iLocal_1550 = 1;
		iLocal_1552 = 1;
	}
	else
	{
		Function_236(16);
	}
	Function_421(&iLocal_1495);
	return 1;
}

void Function_421(int iParam0) //Position: 0x13EE1 / 81633
{
	if (!Function_335(&iParam0))
	{
		Function_238(&iParam0, 0.0f);
	}
	return;
}

void Function_422(bool bParam0, bool bParam1) //Position: 0x13EF8 / 81656
{
	var uVar0;
	
	MEMORY_CONSIDER_AS_ENEMY(&bParam0, &bParam1);
	MEMORY_IDENTIFY(&bParam0, &bParam1);
	GET_POSITION(&bParam1, &uVar0);
	MEMORY_REPORT_POSITION(&bParam0, &bParam1, &uVar0);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 1);
	return;
}

bool Function_423(bool bParam0, bool bParam1) //Position: 0x13F2A / 81706
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		return 1;
	}
	if (&bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

void Function_424() //Position: 0x13F6D / 81773
{
	if (!iLocal_1527[5])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[283]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1433)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1433);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[153]), 1, 1, 1);
		if (GET_MOUNT(&bLocal_1429) != &bLocal_1435)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1429, &bLocal_1435);
		}
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429, 3212836864, 3212836864, 4, 1, 0);
		Function_425();
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1429, 1);
	}
	STREAMING_LOAD_BOUNDS(*(&iLocal_4 + 2456[53]), 15.0f, 1);
	DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
	MEMORY_PREFER_RIDING(&bLocal_1429, 1);
	Function_229(9, 1, 1);
	return;
}

void Function_425() //Position: 0x14056 / 82006
{
	*(&iLocal_4 + 1088) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "Ambush02set", 0);
	*(&iLocal_4 + 1016[02]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush02Gang01", 468, Function_54(), 976, Vector(141,32f, 122,02f, 1663,75f), Vector(0.0f, 225,4097f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1088, &iLocal_4 + 1016[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1016[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1016[02], 9, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 1016[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1016[02], 19);
	*(&iLocal_4 + 1016[12]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush02Gang02", 472, Function_54(), 977, Vector(141,25f, 122,474f, 1657.0f), Vector(0.0f, 223,047f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1088, &iLocal_4 + 1016[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1016[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1016[12], 9, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 1016[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1016[12], 19);
	*(&iLocal_4 + 1016[22]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush02Gang03", 474, Function_54(), 980, Vector(124,79f, 123,4774f, 1666,01f), Vector(0.0f, 234,322f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1088, &iLocal_4 + 1016[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1016[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1016[22], 16, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 1016[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1016[22], 19);
	*(&iLocal_4 + 1016[32]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush02Gang04", 467, Function_54(), 976, Vector(119,05f, 123,5087f, 1656,52f), Vector(0.0f, 244,7376f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1088, &iLocal_4 + 1016[32]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1016[32]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1016[32], 16, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 1016[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 1016[32], 19);
	return;
}

int Function_426(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x142BF / 82623
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_318(iParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_318(iParam4))
	{
		iParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, iParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &uParam1, iParam2, Param5, Param7);
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

void Function_427() //Position: 0x143F7 / 82935
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, (&iLocal_4 + 1432[63]), 1, 1, 1);
	return;
}

void Function_428() //Position: 0x1441D / 82973
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	Function_395(1);
	Function_394();
	return;
}

void Function_429() //Position: 0x14435 / 82997
{
	var uVar0;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	
	Function_438();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1527[4])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				Function_342(&Local_806);
				Function_437();
				Function_236(1);
			}
			else
			{
				Function_433();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_336(&iLocal_1102)) && Function_336(&iLocal_1064))
			{
				Function_433();
				Function_236(2);
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADED() || Function_333(&iLocal_1487) < 2,5f)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[1], Function_252(iLocal_1356), 2);
				Function_287(1.0f);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_432())
			{
				fVar5 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar5 < 200.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar5 < 60.0f)
				{
					if (Function_374(&bLocal_1429, &Global_54076, 0.0f))
					{
						if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
						{
							if (iLocal_1524 != 0)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
							}
						}
					}
					else if (GET_TASK_STATUS(&bLocal_1429, 6) != 1)
					{
						TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
					}
					if (!iLocal_1550)
					{
						Function_412();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
					{
						if (iLocal_1524 != 0)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
						}
					}
					iLocal_1550 = 0;
					if (iLocal_1524 == 0)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 3.0f)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429, 3212836864, 3212836864, 4, 1, 0);
							Function_373("Anthro01_obj06a", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1571 = 1;
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
					}
					else if (iLocal_1524 == 1)
					{
						if (!Function_369() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_431();
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!Function_420())
			{
				Function_83(&bLocal_1429, &uVar0);
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 3152, &Global_54078, &uVar0, &uVar2, &uVar3, &uVar4);
				if (!Function_414(&uLocal_1569))
				{
					fVar5 = Function_375(&Global_54076, &bLocal_1429);
					if (fVar5 < 200.0f)
					{
						Function_253("Anthro_abandoned");
						bLocal_1546 = true;
					}
					else if (fVar5 < 70.0f)
					{
						if (Function_374(&bLocal_1429, &Global_54076, 0.0f))
						{
							if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
							{
								if (iLocal_1524 != 0)
								{
									TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
								}
							}
						}
						else if (GET_TASK_STATUS(&bLocal_1429, 6) != 1)
						{
							TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
						}
						if (!iLocal_1552)
						{
							Function_413();
							iLocal_1552 = 1;
						}
						else if (!iLocal_1550)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
								iLocal_1550 = 1;
							}
						}
					}
					else
					{
						if (iLocal_1552)
						{
							if (GET_TASK_STATUS(&bLocal_1429, 43) != 1)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1429, &iLocal_4 + 3152, 3, 0, 0, 1, 0);
							}
							Function_412();
							iLocal_1550 = 0;
							iLocal_1552 = 0;
						}
						if (iLocal_1524 == 1)
						{
							Function_411();
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
						else if (iLocal_1524 == 2)
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							Function_410();
							Function_237(&iLocal_1487);
							iLocal_1524 = 3;
						}
						else if (iLocal_1524 == 3)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
							{
								Function_373("Anthro01_obj06b", 7,5f, 1, 2, 0, 0, 0, 0);
								iLocal_1571 = 0;
								Function_237(&iLocal_1487);
								iLocal_1524 = 4;
							}
						}
						else if (iLocal_1524 == 4)
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_369())
							{
								Function_237(&iLocal_1487);
							}
							else if (Function_333(&iLocal_1487) < 20.0f)
							{
								Function_409();
								Function_237(&iLocal_1487);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_430();
				iLocal_1527[5] = 1;
				iLocal_1356 = 6;
				Function_236(0);
			}
			break;
	}
	return;
}

void Function_430() //Position: 0x14886 / 84102
{
	Function_182(&iLocal_1102);
	return;
}

void Function_431() //Position: 0x14892 / 84114
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuysBanterBlkwt_v1_AA", "Anthro01_GuysBanterBlkwt_v1_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_2720", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v1_AB", "Anthro01_GuysBanterBlkwt_v1_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuysBanterBlkwt_v1_AC", "Anthro01_GuysBanterBlkwt_v1_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1690", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v1_AD", "Anthro01_GuysBanterBlkwt_v1_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuysBanterBlkwt_v1_AE", "Anthro01_GuysBanterBlkwt_v1_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v1_AF1", "Anthro01_GuysBanterBlkwt_v1_AF1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysBanterBlkwt_v1_AF2", "Anthro01_GuysBanterBlkwt_v1_AF2", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_432() //Position: 0x14AFB / 84731
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1400))
	{
		return 0;
	}
	if (!IS_ACTORSET_VALID(&uLocal_1427))
	{
		uLocal_1427 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_804, "nAmbushSet", 0);
	}
	if (Function_357(&Global_54076, 1) < 17.0f)
	{
		bLocal_1568 = true;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		bVar0 = &iLocal_4 + 952[iVar22];
		if (Function_423(&bVar0, 1))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bVar0, 0);
			SET_ACTOR_UPDATE_PRIORITY(&bVar0, 0);
			MEMORY_PREFER_RIDING(&bVar0, 0);
			SET_ACTOR_MIN_SPEED(&bVar0, 2);
			SET_ACTOR_ALLOW_DISARM(&bVar0, 0);
			SET_CRIPPLE_ENABLE(&bVar0, 0);
			AI_RIDING_SET_ENABLED(&bVar0, 0);
			Function_422(&bVar0, &Global_54076);
			Function_422(&bVar0, &bLocal_1429);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&bVar0, 359,5f);
			DECOR_SET_BOOL(&bVar0, "ignoreDist", 1);
			ADD_ACTORSET_MEMBER(&uLocal_1427, &bVar0);
			TASK_PRIORITY_SET(&bVar0, 0);
			iVar1 = TASK_SEQUENCE_OPEN();
			if (!bLocal_1568)
			{
				TASK_STAND_STILL(0, 1,5f, 1, 0);
			}
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3160, 3, 0, 0, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bVar0, iVar1);
			TASK_SEQUENCE_RELEASE(iVar1, 1);
		}
		iVar2++;
	}
	ACTOR_END_FORCE_HOLSTER(&bLocal_1429);
	iLocal_1548 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_236(16);
	Function_421(&iLocal_1495);
	return 1;
}

void Function_433() //Position: 0x14C41 / 85057
{
	if (!iLocal_1527[4])
	{
		if (!iLocal_1527[3])
		{
			Function_226(&bLocal_1431);
			Function_436();
			Function_226(&iLocal_4 + 672[02]);
			Function_226(&iLocal_4 + 672[12]);
			Function_226(&iLocal_4 + 672[22]);
			Function_435();
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[273]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1433)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1433);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[143]), 1, 1, 1);
		if (GET_MOUNT(&bLocal_1429) != &bLocal_1435)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1429, &bLocal_1435);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[383]), 1, 1, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1429, 1);
	}
	Function_434();
	Function_425();
	STREAMING_LOAD_BOUNDS(*(&iLocal_4 + 2456[43]), 15.0f, 1);
	MEMORY_PREFER_RIDING(&bLocal_1429, 1);
	DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
	Function_229(9, 1, 1);
	return;
}

void Function_434() //Position: 0x14D73 / 85363
{
	*(&iLocal_4 + 1008) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "Ambush01set", 0);
	*(&iLocal_4 + 952[02]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush01Gang01", 467, Function_54(), 976, Vector(-161,1162f, 124,9928f, 1818,253f), Vector(0.0f, 208,3472f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1008, &iLocal_4 + 952[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 952[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 952[02], 9, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 952[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 952[02], 19);
	*(&iLocal_4 + 952[12]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush01Gang02", 470, Function_54(), 977, Vector(-163,8144f, 125,7232f, 1814,086f), Vector(0.0f, 202,0648f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1008, &iLocal_4 + 952[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 952[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 952[12], 9, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 952[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 952[12], 19);
	*(&iLocal_4 + 952[22]) = Function_426(StackVal, StackVal, &iLocal_4, "Ambush01Gang03", 474, Function_54(), 980, Vector(-165,6541f, 126,0441f, 1811,583f), Vector(0.0f, 207,3007f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1008, &iLocal_4 + 952[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 952[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 952[22], 16, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 952[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 952[22], 19);
	return;
}

void Function_435() //Position: 0x14F4A / 85834
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &iLocal_4, "DeadBearClawGang01", 6,670181E-43f, Vector(-456,2732f, 140,1866f, 1929,085f), Vector(0.0f, 266,9756f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 848[02]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &iLocal_4, "DeadBearClawGang02", 6,656168E-43f, Vector(-456,397f, 140,1866f, 1930,787f), Vector(0.0f, -100,8401f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 848[12]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &iLocal_4, "DeadBearClawGang03", 6,586103E-43f, Vector(-456,3075f, 140,1866f, 1929,836f), Vector(0.0f, -93,96955f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 848[22]);
	return;
}

void Function_436() //Position: 0x15052 / 86098
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &iLocal_4, "DeadNastas", 7,875297E-43f, Vector(-460,0001f, 140,1866f, 1928,999f), Vector(0.0f, -190,0555f, 0.0f), "dead_ground_male");
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 576[02], 43, 0,5f, 1, 1);
	return;
}

void Function_437() //Position: 0x150AF / 86191
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[53]), 1, 1, 1);
	return;
}

void Function_438() //Position: 0x150D5 / 86229
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	Function_395(1);
	Function_394();
	return;
}

void Function_439() //Position: 0x150ED / 86253
{
	float fVar0;
	int iVar1;
	
	Function_449();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1527[3])
			{
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				if (!Function_343(Global_46926[6]))
				{
					Function_342(&Local_806);
				}
				Function_448();
				Function_236(1);
			}
			else
			{
				Function_447();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_343(Global_46926[6])) && Function_446()) && Function_336(&iLocal_1096)) && Function_336(&iLocal_1064))
			{
				Function_447();
				Function_236(2);
			}
			break;
		
		case 0x00000002:
			if (Function_333(&iLocal_1487) < 2,5f || !HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[1], Function_252(iLocal_1356), 0);
				Function_287(1.0f);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_445())
			{
				fVar0 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar0 < 90.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar0 < 50.0f)
				{
					if (!iLocal_1550)
					{
						Function_220(&bLocal_1433);
						Function_229(9, 1, 1);
						Function_412();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					Function_229(5, 0, 1);
					if (!IS_ACTOR_RIDING(&Global_54076))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1433)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0, 2, 0);
						}
					}
					iLocal_1550 = 0;
					if (iLocal_1524 == 0)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							SET_ACTOR_POSTURE(&bLocal_1429, 0);
							iVar1 = TASK_SEQUENCE_OPEN();
							TASK_MOUNT(0, &bLocal_1435, 0, 1, 2, 2147483647);
							TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 2456[33], 2);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar1);
							TASK_SEQUENCE_RELEASE(iVar1, 1);
							Function_444();
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
					}
					else if (iLocal_1524 == 1)
					{
						if (IS_ACTOR_RIDING(&Global_54076))
						{
							iLocal_1524 = 2;
						}
						else if (Function_333(&iLocal_1487) < 3.0f)
						{
							Function_373("Anthro01_obj05a", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
					else if (iLocal_1524 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 5.0f)
						{
							Function_443();
							Function_237(&iLocal_1487);
							iLocal_1524 = 3;
						}
					}
					else if (iLocal_1524 == 3)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_442();
							Function_237(&iLocal_1487);
							iLocal_1524 = 4;
						}
					}
					else if (iLocal_1524 == 4)
					{
						if ((IS_SCRIPTED_CONVERSATION_ONGOING() || Function_369()) || !IS_ACTOR_RIDING(&bLocal_1429))
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 15.0f)
						{
							if (!IS_ACTOR_RIDING(&Global_54076))
							{
								Function_441();
								Function_237(&iLocal_1487);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_440();
				iLocal_1527[4] = 1;
				iLocal_1356 = 5;
				Function_236(0);
			}
			break;
	}
	return;
}

void Function_440() //Position: 0x15403 / 87043
{
	Function_177();
	Function_182(&iLocal_1096);
	return;
}

void Function_441() //Position: 0x15412 / 87058
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_JonMessCamp", "Anthro01_JonMessCamp", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_442() //Position: 0x15463 / 87139
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_McdMakesRunHors", "Anthro01_McdMakesRunHors", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_443() //Position: 0x154BC / 87228
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_WeShouldLeave", "Anthro01_WeShouldLeave", 1, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_444() //Position: 0x15511 / 87313
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_LeaveCabin", "Anthro01_LeaveCabin", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_445() //Position: 0x15560 / 87392
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (IS_ACTOR_RIDING(&bLocal_1429))
	{
		MEMORY_PREFER_RIDING(&bLocal_1429, 1);
		CLEAR_ACTOR_MIN_SPEED(&bLocal_1429);
		bVar4 = true;
	}
	if (!IS_ACTOR_ALIVE(&bLocal_1433))
	{
		if (IS_ACTOR_ALIVE(&iLocal_1437))
		{
			bLocal_1433 = &iLocal_1437;
			iLocal_1437 = "";
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bInjuryNoEjection", 1);
			if (!IS_ACTOR_MOUNTED(&bLocal_1433))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0, 2, 0);
			}
		}
		else
		{
			iVar5 = 1;
		}
	}
	if (IS_ACTOR_RIDING(&Global_54076) || iVar5)
	{
		Function_220(&bLocal_1433);
		if (&iVar0 == &bLocal_1435)
		{
			if (!bVar4)
			{
				if (IS_ACTOR_ALIVE(&iLocal_1437) && !IS_ACTOR_MOUNTED(&iLocal_1437))
				{
					uVar1 = &iLocal_1437;
				}
				else if (IS_ACTOR_ALIVE(&bLocal_1433) && !IS_ACTOR_MOUNTED(&bLocal_1433))
				{
					uVar1 = &bLocal_1433;
				}
				else
				{
					LOG_ERROR("Failed to find a horse for the companion in CheckHorsesMountedBearClaw!");
				}
				iVar2 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(0, &uVar1, 0, 1, 2, 2147483647);
				TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 2456[33], 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
			}
			bLocal_1435 = &uVar1;
			bLocal_1433 = &iVar0;
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_ACTORS_HORSE(&bLocal_1429, &bLocal_1435);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 1.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1435, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
			DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
			Function_396(&(Local_872[115]), &bLocal_1435, "Anthro_horse", 0, 0x5f5e100, 1);
		}
		iVar3 = 1;
	}
	if (iVar3 && bVar4)
	{
		MEMORY_PREFER_RIDING(&bLocal_1429, 1);
		Function_229(9, 1, 1);
		Function_236(106);
		return 1;
	}
	return 0;
}

int Function_446() //Position: 0x157B2 / 87986
{
	Function_324(&iLocal_4 + 512, 562, 2, 0);
	Function_324(&iLocal_4 + 512, 976, 2, 0);
	if (Function_336(&iLocal_4 + 512))
	{
		return 1;
	}
	return 0;
}

void Function_447() //Position: 0x157E2 / 88034
{
	if (!iLocal_1527[3])
	{
		Function_226(&bLocal_1431);
		Function_436();
		Function_226(&iLocal_4 + 672[02]);
		Function_226(&iLocal_4 + 672[12]);
		Function_226(&iLocal_4 + 672[22]);
		Function_435();
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1429, (&iLocal_4 + 1432[133]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[263]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[333]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[373]), 1, 1, 1);
	}
	if (IS_ACTOR_ALIVE(&iLocal_1437))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 1);
	}
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1429, 1);
	ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0, 2, 0);
	return;
}

void Function_448() //Position: 0x158D3 / 88275
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[43]), 1, 1, 1);
	return;
}

void Function_449() //Position: 0x158F9 / 88313
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	Function_395(0);
	Function_394();
	return;
}

void Function_450() //Position: 0x15911 / 88337
{
	float fVar0;
	
	Function_484();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (!iLocal_1527[2])
			{
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_343(Global_46926[6]))
				{
					Function_342(&Local_806);
				}
				Function_344();
				Function_483();
				Function_236(1);
			}
			else
			{
				Function_482();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_343(Global_46926[6])) && Function_481()) && Function_336(&iLocal_1090)) && Function_336(&iLocal_1064))
			{
				if (!IS_ACTORSET_VALID(&iLocal_4 + 840))
				{
					Function_480();
					Function_479();
					Function_478();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1429, *(&iLocal_4 + 1432[123]), 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_1433))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[253]), 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
				}
				if (IS_ACTOR_VALID(&bLocal_1435))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[323]), 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1435, -1.0f, 1, 0);
				}
				if (IS_ACTOR_VALID(&iLocal_1437))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[363]), 1, 1, 1);
					TASK_STAND_STILL(&iLocal_1437, -1.0f, 1, 0);
				}
				Function_482();
				Function_236(2);
			}
			else if (Function_333(&iLocal_1487) < 2.0f)
			{
				Function_237(&iLocal_1487);
			}
			break;
		
		case 0x00000002:
			if (Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, iLocal_1356))
			{
				Function_236(3);
			}
			else
			{
				Function_474();
				Function_236(4);
			}
			break;
		
		case 0x00000003:
			if (Function_283("$/cutscene/ANTHRO01_CS02/ANTHRO01_CS02", &iLocal_1344, &Local_806, &iLocal_1356, 92872, 92523, 92401, 91278, 91257, 91246, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_474();
				Function_236(4);
			}
			break;
		
		case 0x00000004:
			if (Function_333(&iLocal_1487) < 2,5f || !HUD_IS_FADED())
			{
				if (!IS_ACTOR_ALIVE(&bLocal_1433))
				{
					if (!Function_310())
					{
						LOG_ERROR("We need to spawn the player horse after the mid cutscene, but it's not streamed in!");
					}
					else
					{
						bLocal_1433 = Function_303(1, 1, 0, 0, 0, 0, 1, 0);
						if (Function_423(&bLocal_1433, 1))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[253]), 1, 1, 1);
							TASK_STAND_STILL(&bLocal_1433, -1.0f, 0, 0);
						}
					}
				}
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[0], Function_252(iLocal_1356), 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_287(1.0f);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_459())
			{
				fVar0 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar0 < 50.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1288[3]))
				{
					if (!iLocal_1552)
					{
						Function_458(1);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_457();
						iLocal_1552 = 1;
					}
					else if (!iLocal_1550)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_229(9, 1, 1);
							Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
							iLocal_1550 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1552)
					{
						Function_458(0);
						Function_229(9, 0, 1);
						Function_412();
						iLocal_1552 = 0;
						iLocal_1550 = 0;
					}
					if (iLocal_1524 == 0)
					{
						if (!HUD_IS_FADING())
						{
							Function_456();
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
					}
					else if (iLocal_1524 == 1)
					{
						if (!IS_SCRIPTED_SPEECH_PLAYING(&bLocal_1429) || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_455();
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
					else if (iLocal_1524 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_454();
							Function_237(&iLocal_1487);
							iLocal_1524 = 3;
						}
					}
					else if (iLocal_1524 == 3)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_373("Anthro01_obj04a", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_237(&iLocal_1487);
							iLocal_1524 = 4;
						}
					}
					else if (iLocal_1524 == 4)
					{
						if (!Function_369() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_453();
							Function_237(&iLocal_1487);
							iLocal_1524 = 5;
						}
					}
					else if (iLocal_1524 == 5)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_369())
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 20.0f)
						{
							Function_452();
							Function_237(&iLocal_1487);
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_451();
			iLocal_1527[3] = 1;
			iLocal_1356 = 4;
			Function_236(0);
			break;
	}
	return;
}

void Function_451() //Position: 0x15E2E / 89646
{
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	Function_178();
	Function_182(&iLocal_1090);
	iLocal_1548 = 0;
	return;
}

void Function_452() //Position: 0x15E4D / 89677
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_CriesOutShootOut", "Anthro01_CriesOutShootOut", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(0, 0);
	}
	return;
}

void Function_453() //Position: 0x15EA8 / 89768
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_NoLeaveCab", "Anthro01_NoLeaveCab", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_454() //Position: 0x15EF7 / 89847
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_KeepHeadDown", "Anthro01_KeepHeadDown", 1, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_455() //Position: 0x15F4A / 89930
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_TakesCoverInCab", "Anthro01_TakesCoverInCab", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_456() //Position: 0x15FA3 / 90019
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_CriesOutShootOut1", "Anthro01_CriesOutShootOut1", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_457() //Position: 0x16000 / 90112
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_TriesLeaveCab", "Anthro01_TriesLeaveCab", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_458(bool bParam0) //Position: 0x16055 / 90197
{
	float fVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!iLocal_1566)
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				fVar0 = &iLocal_4 + 672[iVar12];
				if (Function_362(&fVar0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&fVar0, 12, 6.0f);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&fVar0, -1.0f);
				}
				iVar1++;
			}
			iLocal_1566 = 1;
		}
	}
	else if (iLocal_1566)
	{
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&fVar0, 12, 3.0f);
		iLocal_1566 = 0;
	}
	return;
}

bool Function_459() //Position: 0x160C2 / 90306
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iLocal_1443 = "";
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		fVar0 = &iLocal_4 + 672[iVar12];
		if (Function_362(&fVar0, 0, 1, 1, 1, 0, 0, 0, 0))
		{
			if (iVar1 < 5)
			{
				iVar2++;
				iLocal_1443 = &fVar0;
			}
			bVar3 = true;
		}
		iVar1++;
	}
	if (!bVar3)
	{
		iLocal_1548 = 0;
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
		AI_STOP_IGNORING_ACTORS();
		Function_229(9, 0, 1);
		Function_236(106);
		return 1;
	}
	if (!iLocal_1560)
	{
		if (iVar2 < 1)
		{
			if (&iLocal_1443 == &iLocal_4 + 672[32])
			{
				fLocal_1445 = &iLocal_4 + 672[82];
				fLocal_1447 = &iLocal_4 + 672[62];
				fLocal_1449 = &iLocal_4 + 672[72];
				fLocal_1453 = &iLocal_4 + 672[92];
				vLocal_1455 = { StackVal, StackVal, (&iLocal_4 + 2768[13]) };
				vLocal_1461 = { StackVal, StackVal, *(&iLocal_4 + 2768[23]) };
				vLocal_1467 = { StackVal, StackVal, *(&iLocal_4 + 2768[73]) };
				vLocal_1479 = { StackVal, StackVal, *(&iLocal_4 + 2768[03]) };
			}
			else if (&iLocal_1443 == &iLocal_4 + 672[42])
			{
				fLocal_1445 = &iLocal_4 + 672[62];
				fLocal_1449 = &iLocal_4 + 672[92];
				fLocal_1451 = &iLocal_4 + 672[72];
				fLocal_1453 = &iLocal_4 + 672[82];
				vLocal_1455 = { StackVal, StackVal, *(&iLocal_4 + 2768[23]) };
				vLocal_1467 = { StackVal, StackVal, *(&iLocal_4 + 2768[03]) };
				vLocal_1473 = { StackVal, StackVal, *(&iLocal_4 + 2768[73]) };
				vLocal_1479 = { StackVal, StackVal, *(&iLocal_4 + 2768[13]) };
			}
			else
			{
				fLocal_1445 = &iLocal_4 + 672[82];
				fLocal_1449 = &iLocal_4 + 672[62];
				fLocal_1451 = &iLocal_4 + 672[72];
				fLocal_1453 = &iLocal_4 + 672[92];
				vLocal_1455 = { StackVal, StackVal, *(&iLocal_4 + 2768[13]) };
				vLocal_1467 = { StackVal, StackVal, *(&iLocal_4 + 2768[23]) };
				vLocal_1473 = { StackVal, StackVal, *(&iLocal_4 + 2768[73]) };
				vLocal_1479 = { StackVal, StackVal, *(&iLocal_4 + 2768[03]) };
			}
			Function_421(&iLocal_1507);
			iLocal_1560 = 1;
		}
	}
	else
	{
		if (!iLocal_1561)
		{
			if (Function_333(&iLocal_1507) < 2.0f)
			{
				if (Function_362(&fLocal_1445, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_460(&fLocal_1445, &vLocal_1455, iLocal_1566);
					iLocal_1561 = 1;
				}
			}
		}
		if (!iLocal_1562)
		{
			if (Function_333(&iLocal_1507) < 4.0f)
			{
				if (Function_362(&fLocal_1447, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_460(&fLocal_1447, &vLocal_1461, iLocal_1566);
					iLocal_1562 = 1;
				}
			}
		}
		if (!iLocal_1563)
		{
			if (Function_333(&iLocal_1507) < 5,5f)
			{
				if (Function_362(&fLocal_1449, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_460(&fLocal_1449, &vLocal_1467, iLocal_1566);
					iLocal_1563 = 1;
				}
			}
		}
		if (!iLocal_1564)
		{
			if (Function_333(&iLocal_1507) < 7.0f)
			{
				if (Function_362(&fLocal_1451, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_460(&fLocal_1451, &vLocal_1473, iLocal_1566);
					iLocal_1564 = 1;
				}
			}
		}
		if (!iLocal_1565)
		{
			if (Function_335(&iLocal_1511))
			{
				if (Function_333(&iLocal_1511) < 2.0f)
				{
					if (Function_362(&fLocal_1453, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Function_460(&fLocal_1453, &vLocal_1479, iLocal_1566);
						iLocal_1565 = 1;
					}
				}
			}
			else if (iVar2 < 0)
			{
				Function_421(&iLocal_1511);
			}
		}
	}
	return 0;
}

void Function_460(float fParam0, int iParam1, bool bParam2) //Position: 0x16402 / 91138
{
	var uVar0;
	int iVar1;
	
	iVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(0, &iParam1, 3);
	if (bParam2)
	{
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
	}
	else
	{
		uVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &iParam1, 1.0f, 90.0f, 7);
		if (IS_COVER_LOCATION_VALID(&uVar0))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar0, -1.0f, 2.0f);
		}
		else
		{
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &iParam1, -1.0f);
		}
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&fParam0, iVar1);
	TASK_SEQUENCE_RELEASE(iVar1, 1);
	return;
}

int Function_461() //Position: 0x1646E / 91246
{
	iLocal_1549 = 1;
	return 1;
}

int Function_462() //Position: 0x16479 / 91257
{
	Function_297(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_463() //Position: 0x1648E / 91278
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[33]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1429, *(&iLocal_4 + 1432[123]), 1, 1, 1);
	Function_464();
	return 1;
}

void Function_464() //Position: 0x164DA / 91354
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[33]), 0, 1, 0);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1429, *(&iLocal_4 + 1432[123]), 1, 1, 1);
	TASK_CLEAR(&Global_54076);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 5, 0);
	SET_PLAYER_POSTURE(0, 1, 0);
	SET_PLAYER_POSTURE(0, 0, 1);
	ATTACH_PLAYER_TO_COVER(0, 1, 1);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
	Function_421(&iLocal_1519);
	SET_ACTOR_POSTURE(&bLocal_1429, 1);
	TASK_CROUCH(&bLocal_1429, -1.0f);
	Function_226(&iLocal_4 + 672[02]);
	Function_226(&iLocal_4 + 672[12]);
	Function_226(&iLocal_4 + 672[22]);
	Function_435();
	Function_226(&bLocal_1431);
	Function_436();
	Function_465();
	return;
}

void Function_465() //Position: 0x1659F / 91551
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar5;
	int iVar6;
	
	Function_469(&(Local_872[415]));
	Function_469(&(Local_872[515]));
	Function_468(&iLocal_4 + 840, 322, 4294967295, 0.0f, 1, 2048);
	AI_IGNORE_ACTOR(&bLocal_1429);
	AI_IGNORE_ACTOR(&bLocal_1433);
	AI_IGNORE_ACTOR(&bLocal_1435);
	AI_IGNORE_ACTOR(&iLocal_1437);
	iVar6 = 0;
	while (iVar6 <= 10)
	{
		if (iVar6 < 2)
		{
			if (IS_ACTOR_ALIVE(&iLocal_4 + 672[iVar62]))
			{
				KILL_ACTOR(&iLocal_4 + 672[iVar62]);
			}
		}
		else
		{
			bVar2 = &iLocal_4 + 672[iVar62];
			if (Function_362(&bVar2, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				TASK_PRIORITY_SET(&bVar2, 1);
				SET_ACTOR_FACTION(&bVar2, 19);
				Function_467(&bVar2, &Global_54076);
				Function_467(&bVar2, &bLocal_1429);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar2, 15, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar2, 16, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar2, 12, 3.0f);
				SET_ACTOR_VISION_XRAY(&bVar2, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar2, 0);
				Function_466(&bVar2, 50.0f, 0x40400000, 0x40000000);
				iVar1 = GET_CURRENT_GRINGO(&bVar2);
				if (IS_GRINGO_VALID(&iVar1))
				{
					GRINGO_DEACTIVATE_AND_RESET_ACTORS(&iVar1);
				}
				MAKE_ACTOR_READY_FOR_ACTION(&bVar2, 1);
				uVar3 = *(&iLocal_4 + 2768[(iVar6 - 3)3]);
				uVar5 = StackVal;
				uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar3, 1.0f, uVar5, 90.0f, 7);
				RESET_ANIM_SET_FOR_ACTOR(&bVar2, 0);
				if (IS_COVER_LOCATION_VALID(&uVar0))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(&bVar2, &uVar0, -1.0f, 2.0f);
				}
				else
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(&bVar2, &uVar3, fVar5, -1.0f);
				}
			}
		}
		iVar6++;
	}
	return;
}

void Function_466(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x16722 / 91938
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&bParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 54, 0.0f);
		}
	}
}

void Function_467(bool bParam0, bool bParam1) //Position: 0x16773 / 92019
{
	MEMORY_CONSIDER_AS_ENEMY(&bParam0, &bParam1);
	MEMORY_IDENTIFY(&bParam0, &bParam1);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(&bParam0, &bParam1, 1);
	return;
}

void Function_468(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1679C / 92060
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < (GET_ACTORSET_SIZE(&uParam0) - 1))
	{
		iVar0 = GET_ACTOR_FROM_ACTORSET(&uParam0, iVar2);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (&bParam4)
			{
				bVar1 = GET_BLIP_ON_ACTOR(&iVar0);
				if (IS_BLIP_VALID(&bVar1))
				{
					REMOVE_BLIP(&bVar1);
				}
			}
			ADD_BLIP_FOR_ACTOR(&iVar0, iParam1, &iParam3, 2, 0);
			if (&iParam2 != 4294967295)
			{
				HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&iVar0, &iParam2);
			}
			if (iParam1 == 322)
			{
				uVar3 = GET_BLIP_ON_OBJECT(&iVar0);
				SET_BLIP_IMPAIRMENT_MASK(&uVar3, (GET_BLIP_IMPAIRMENT_MASK(&uVar3) || bParam5));
			}
		}
		bVar2++;
	}
}

void Function_469(struct<69> Param0) //Position: 0x16831 / 92209
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

int Function_470() //Position: 0x168F1 / 92401
{
	if (!IS_ACTOR_VALID(&bLocal_1433))
	{
		if (Function_310())
		{
			bLocal_1433 = Function_303(1, 1, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(&bLocal_1433))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, (&iLocal_4 + 1432[253]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1433, -1.0f, 0, 0);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_1433, 1);
			}
		}
	}
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 1);
	Function_481();
	Function_336(&iLocal_1090);
	return 1;
}

int Function_471() //Position: 0x1696B / 92523
{
	if (Function_302() && Function_481())
	{
		if (iLocal_1527[2])
		{
			if (!IS_ACTORSET_VALID(&iLocal_4 + 840))
			{
				Function_480();
				Function_479();
				Function_478();
			}
			if (!IS_ACTOR_VALID(&bLocal_1431))
			{
				Function_472();
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[323]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[363]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1435, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1431, -1.0f, 0, 0);
			TASK_STAND_STILL(&iLocal_1437, -1.0f, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_1433))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[253]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1433, -1.0f, 1, 0);
			}
		}
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
		Function_237(&iLocal_1487);
		return 1;
	}
	if (Function_333(&iLocal_1487) < 2.0f)
	{
		Function_237(&iLocal_1487);
	}
	return 0;
}

void Function_472() //Position: 0x16A6C / 92780
{
	*(&iLocal_4 + 552[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Nastas", 7,875297E-43f, Vector(748,3133f, 78,49289f, 1309,272f), Vector(0.0f, 89,60399f, 0.0f));
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 552[02], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 552[02], 20);
	return;
}

int Function_473() //Position: 0x16AC8 / 92872
{
	iLocal_1549 = 0;
	Function_329(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_327(StackVal, &uLocal_804, Global_54078, &iLocal_4 + 1096[1], 0, 0, 0, 0, 1, 1);
	Function_237(&iLocal_1487);
	return 1;
}

void Function_474() //Position: 0x16B08 / 92936
{
	if (Function_475() != 16 || Function_475() != 32)
	{
		AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("ANTHRO_01_GUNF_ALT", 0, 4294967295, 4294967295);
	}
	return;
}

int Function_475() //Position: 0x16B4D / 93005
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99473, &Global_99475))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99475, &Global_99477))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99477, &Global_99479))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99479, &Global_99481))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99481, &Global_99483))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(&uVar0, &Global_99483, &Global_99473))
	{
		return 32;
	}
	return 32;
}

bool Function_476(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x16BEB / 93163
{
	if (Function_477(&iParam0) == iParam6 || Function_384())
	{
		return 1;
	}
	return 0;
}

int Function_477(int iParam0) //Position: 0x16C0A / 93194
{
	if (Function_292(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_478() //Position: 0x16C23 / 93219
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= 10)
	{
		iVar0 = &iLocal_4 + 672[iVar22];
		if (Function_423(&iVar0, 1))
		{
			TASK_PRIORITY_SET(&iVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(&iVar0, 0);
			SET_ACTOR_FACTION(&iVar0, 21);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
			if (iVar2 == 0)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 2968, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2968), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 1)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 2992, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2992), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 2)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 3032, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3032), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 3)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 2984, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2984), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 4)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 3000, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3000), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 5)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 3024, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3024), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 6)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 3008, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3008), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 7)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 2976, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2976), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 8)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 3016, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3016), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 9)
			{
				SNAP_ACTOR_TO_GRINGO(&iVar0, &iLocal_4 + 3040, "UseCase1", 1, 0, 1);
				TASK_USE_GRINGO(&iVar0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3040), "UseCase1", 4294967295, 1);
			}
			else
			{
				LOG_ERROR("Cabin gang member unaccounted for!");
				SET_ACTOR_FACE_STYLE(&iVar0, 2);
				TASK_FACE_ACTOR(&iVar0, &Global_54076, 1, 3212836864);
			}
		}
		iVar2++;
	}
	iLocal_1425 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_804, "CampHorseSquad"));
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		iVar1 = &iLocal_4 + 904[iVar22];
		if (Function_423(&iVar1, 1))
		{
			TASK_PRIORITY_SET(&iVar1, 1);
			TASK_STAND_STILL(&iVar1, -1.0f, 0, 0);
			SET_ACTOR_FACTION(&iVar1, 21);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar1, 0.0f);
			DECOR_SET_BOOL(&iVar1, "bNoInjuryEjection", 1);
			SQUAD_JOIN(&iVar1, &iLocal_1425);
		}
		iVar2++;
	}
	Function_396(&(Local_872[415]), &iLocal_4 + 840, "BearClawGang", 0, 0x5f5e100, 1);
	Function_396(&(Local_872[515]), &iLocal_1425, "BearClawHorse", 0, 0x5f5e100, 1);
	Function_397(&(Local_872[515]), 1024, 1);
	return;
}

void Function_479() //Position: 0x1701D / 94237
{
	*(&iLocal_4 + 944) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "BearClawHorsesset", 0);
	*(&iLocal_4 + 904[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawHorse01", 1,369069E-42f, Vector(-470,2043f, 140,9914f, 1918,489f), Vector(0.0f, 22,24222f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 944, &iLocal_4 + 904[02]);
	*(&iLocal_4 + 904[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawHorse02", 1,378878E-42f, Vector(-471,5648f, 140,5343f, 1925,672f), Vector(-0,2158842f, -70,15314f, -0,0790031f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 944, &iLocal_4 + 904[12]);
	return;
}

void Function_480() //Position: 0x170EA / 94442
{
	*(&iLocal_4 + 840) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "BearClawGangset", 0);
	*(&iLocal_4 + 672[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang01", 6,670181E-43f, Vector(-456,2365f, 140,1866f, 1927,653f), Vector(0.0f, 466,1592f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 672[02]);
	SET_ACTOR_FACTION(&iLocal_4 + 672[02], 23);
	*(&iLocal_4 + 672[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang02", 6,656168E-43f, Vector(-458,2017f, 140,1866f, 1931,152f), Vector(0.0f, -6,000259f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 672[12]);
	SET_ACTOR_FACTION(&iLocal_4 + 672[12], 23);
	*(&iLocal_4 + 672[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang03", 6,586103E-43f, Vector(-456,2991f, 140,1866f, 1929,427f), Vector(0.0f, 88,81544f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 672[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[22], 23);
	*(&iLocal_4 + 672[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang04", 6,558077E-43f, Vector(-459,0197f, 139,864f, 1911,736f), Vector(0.0f, -84,83068f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[32]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[32], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[32], 23);
	*(&iLocal_4 + 672[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang05", 6,57209E-43f, Vector(-461,9029f, 140,133f, 1921,038f), Vector(0.0f, -117,9464f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[42]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[42], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[42], 23);
	*(&iLocal_4 + 672[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang06", 6,544064E-43f, Vector(-455,6622f, 139,545f, 1919,1f), Vector(0.0f, -48,19163f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[52]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[52], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[52], 23);
	*(&iLocal_4 + 672[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang07", 6,600116E-43f, Vector(-466,1379f, 142,6784f, 1900,161f), Vector(0.0f, 180,2181f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[62]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[62], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[62], 23);
	*(&iLocal_4 + 672[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang08", 6,57209E-43f, Vector(-471,7697f, 142,5741f, 1898,144f), Vector(0.0f, 214,0517f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[72]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[72], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[72], 23);
	*(&iLocal_4 + 672[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang09", 6,614129E-43f, Vector(-480,5651f, 142,9046f, 1918,003f), Vector(0.0f, 675,2524f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[82]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[82], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[82], 23);
	*(&iLocal_4 + 672[92]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BearClawGang10", 6,642155E-43f, Vector(-474,5387f, 142,5983f, 1904,128f), Vector(0.0f, 243,0905f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 840, &iLocal_4 + 672[92]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 672[92], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 672[92], 23);
	return;
}

int Function_481() //Position: 0x1757B / 95611
{
	Function_324(&iLocal_4 + 472, 562, 2, 0);
	Function_324(&iLocal_4 + 472, 976, 2, 0);
	if (Function_336(&iLocal_4 + 472))
	{
		return 1;
	}
	return 0;
}

void Function_482() //Position: 0x175AB / 95659
{
	if (SQUAD_GOAL_IS_VALID(&iLocal_1062))
	{
		SQUAD_GOAL_REMOVE(&uLocal_1423, &iLocal_1062);
	}
	SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1437, 1);
	iLocal_1548 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 1);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (!Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, iLocal_1356))
	{
		Function_464();
	}
	return;
}

void Function_483() //Position: 0x175FB / 95739
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[33]), 1, 1, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 1);
	return;
}

void Function_484() //Position: 0x1762B / 95787
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	if (Function_335(&iLocal_1519))
	{
		if (Function_333(&iLocal_1519) < 4.0f)
		{
			SET_FORCE_PLAYER_AIM_MODE(0, 0);
			Function_485(&iLocal_1519);
		}
	}
	Function_395(1);
	Function_394();
	return;
}

void Function_485(vector3 vParam0) //Position: 0x17662 / 95842
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_486() //Position: 0x17679 / 95865
{
	float fVar0;
	int iVar1;
	
	Function_514();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1527[1])
			{
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				if (!Function_343(Global_46754[1]))
				{
					Function_342(&Local_806);
				}
				Function_513();
				Function_236(1);
			}
			else
			{
				Function_505();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_504()) && Function_336(&iLocal_1064)) && Function_336(&iLocal_1080))
			{
				Function_505();
				Function_236(2);
			}
			break;
		
		case 0x00000002:
			if (Function_333(&iLocal_1487) < 2,5f || !iLocal_1527[1])
			{
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[1], Function_252(iLocal_1356), 2);
				Function_287(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_503(7))
			{
				fVar0 = Function_375(&Global_54076, &bLocal_1431);
				if (fVar0 < 80.0f)
				{
					Function_253("Nastas_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar0 < 40.0f)
				{
					if (!iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_373("Nastas_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					iLocal_1550 = 0;
					if (iLocal_1524 == 0)
					{
						if (!HUD_IS_FADING())
						{
							if (!HUD_IS_FADED())
							{
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_MOUNT(0, &bLocal_1435, 0, 1, 2, 2147483647);
								TASK_STAND_STILL(0, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_MOUNT(0, &iLocal_1437, 0, 1, 2, 2147483647);
								TASK_STAND_STILL(0, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_1431, iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
								REMOVE_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
								if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1433)))
								{
									ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0.0f, 2, 0);
								}
								Function_220(&bLocal_1431);
								Function_502();
								bLocal_1559 = true;
								Function_237(&iLocal_1487);
								iLocal_1524 = 1;
							}
						}
					}
					else if (iLocal_1524 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_412();
							Function_373("Anthro01_obj03a", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1524 = 2;
							Function_237(&iLocal_1487);
						}
					}
					else if (iLocal_1524 == 2)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_369())
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 20.0f)
						{
							Function_501();
							Function_237(&iLocal_1487);
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			fVar0 = Function_375(&Global_54076, &bLocal_1431);
			if (fVar0 < 80.0f)
			{
				Function_253("Nastas_abandoned");
				bLocal_1546 = true;
			}
			else if (fVar0 < 40.0f)
			{
				if (!iLocal_1550)
				{
					Function_412();
					Function_373("Nastas_return", 7,5f, 0, 2, 0, 0, 0, 0);
					iLocal_1550 = 1;
				}
			}
			else if (!Function_500(16, 0))
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_1433)
				{
					if (!iLocal_1551)
					{
						Function_412();
						Function_373("Horse_return", 7,5f, 0, 2, 0, 0, 0, 0);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1433)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0, 2, 0);
						}
						iLocal_1551 = 1;
					}
				}
				else
				{
					iLocal_1550 = 0;
					iLocal_1551 = 0;
					Function_220(&bLocal_1433);
				}
			}
			break;
		
		case 0x00000010:
			fVar0 = Function_375(&Global_54076, &bLocal_1431);
			if (fVar0 < 80.0f)
			{
				Function_253("Nastas_abandoned");
				bLocal_1546 = true;
			}
			else if (!Function_499())
			{
				if (!Function_498())
				{
					if (fVar0 < 40.0f)
					{
						if (Function_374(&bLocal_1431, &Global_54076, 0.0f))
						{
							if (GET_TASK_STATUS(&bLocal_1431, 43) != 1)
							{
								SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
							}
						}
						else if (GET_TASK_STATUS(&bLocal_1431, 6) != 1)
						{
							Function_497();
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 5);
						}
						if (!iLocal_1550)
						{
							Function_412();
							Function_373("Nastas_return", 7,5f, 0, 2, 0, 0, 0, 0);
							iLocal_1550 = 1;
						}
					}
					else
					{
						iLocal_1550 = 0;
						if (!IS_ACTOR_IN_VOLUME(&bLocal_1431, &iLocal_4 + 1288[0]))
						{
							if (GET_TASK_STATUS(&bLocal_1431, 43) != 1)
							{
								SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
							}
						}
						if (iLocal_1524 == 0)
						{
							if (Function_333(&iLocal_1487) < 0,5f || !iLocal_1527[0])
							{
								if (bLocal_1559)
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1431, 16.0f);
									SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_1437, 16.0f);
									if (!SQUAD_GOAL_IS_VALID(&iLocal_1062))
									{
										iLocal_1062 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&uLocal_1423, 0, 4294967295, &iLocal_4 + 3128, 3, 0, 0);
									}
									else
									{
										SQUAD_FOLLOW_PATH_IN_FORMATION_SET_PATH(&uLocal_1423, &iLocal_1062, &iLocal_4 + 3128);
									}
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&uLocal_1423, &iLocal_1062, 1, 0);
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&uLocal_1423, &iLocal_1062, 8, 1);
									TASK_CLEAR(&bLocal_1431);
									TASK_CLEAR(&bLocal_1429);
									iLocal_1524 = 1;
								}
								else if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1431, 16.0f);
									SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_1437, 16.0f);
									if (!SQUAD_GOAL_IS_VALID(&iLocal_1062))
									{
										iLocal_1062 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&uLocal_1423, 0, 4294967295, &iLocal_4 + 3128, 3, 0, 0);
									}
									else
									{
										SQUAD_FOLLOW_PATH_IN_FORMATION_SET_PATH(&uLocal_1423, &iLocal_1062, &iLocal_4 + 3128);
									}
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&uLocal_1423, &iLocal_1062, 1, 0);
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&uLocal_1423, &iLocal_1062, 8, 1);
									TASK_CLEAR(&bLocal_1431);
									TASK_CLEAR(&bLocal_1429);
									Function_502();
									Function_237(&iLocal_1487);
									iLocal_1524 = 1;
								}
							}
						}
						else if (iLocal_1524 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 2,5f)
							{
								Function_412();
								if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1431)))
								{
									ADD_BLIP_FOR_ACTOR(&bLocal_1431, 325, 0, 2, 0);
								}
								Function_373("Anthro01_obj03b", 7,5f, 1, 2, 0, 0, 0, 0);
								Function_238(&iLocal_1487, (5.0f - 8.0f));
								iLocal_1524 = 2;
							}
						}
						else if (iLocal_1524 == 2)
						{
							if (!Function_369() || Function_333(&iLocal_1487) < 3.0f)
							{
								Function_496();
								Function_237(&iLocal_1487);
								iLocal_1524 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000001A:
			if (!Function_499())
			{
				if (!Function_495())
				{
					fVar0 = Function_375(&Global_54076, &bLocal_1431);
					if (fVar0 < 80.0f)
					{
						Function_253("Nastas_abandoned");
						bLocal_1546 = true;
					}
					else if (fVar0 < 40.0f)
					{
						if (!iLocal_1550)
						{
							Function_412();
							Function_373("Nastas_return", 7,5f, 0, 2, 0, 0, 0, 0);
							iLocal_1550 = 1;
						}
					}
					else
					{
						Function_229(9, 0, 1);
						iLocal_1550 = 0;
						if (iLocal_1524 == 0)
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
						else if (iLocal_1524 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 3.0f)
							{
								Function_494();
								Function_237(&iLocal_1487);
								iLocal_1524 = 2;
							}
						}
						else if (iLocal_1524 == 2)
						{
							if (Function_333(&iLocal_1487) < 4.0f)
							{
								Function_220(&bLocal_1431);
								Function_229(9, 0, 1);
								Function_222(&iLocal_1485);
								iLocal_1485 = Function_493(StackVal, StackVal, &uLocal_804, "DismountGateway", *(&iLocal_4 + 2640[03]), *(&iLocal_4 + 2640[03] + 12), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
								Function_373("Anthro01_obj03c", 7,5f, 1, 2, 0, 0, 0, 0);
								Function_237(&iLocal_1487);
								iLocal_1524 = 3;
							}
						}
						else if (iLocal_1524 == 3)
						{
							if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_333(&iLocal_1487) < 3.0f) || Function_333(&iLocal_1487) < 10.0f)
							{
								Function_492();
								Function_237(&iLocal_1487);
								iLocal_1524 = 4;
							}
						}
						else if (iLocal_1524 == 4)
						{
							if (StackVal || !Function_391((IS_SCRIPTED_CONVERSATION_ONGOING() || HUD_IS_SHOWING_OBJECTIVE()), &bLocal_1429, *(&iLocal_4 + 2640[13]), 2.0f))
							{
								Function_237(&iLocal_1487);
							}
							else if (Function_333(&iLocal_1487) < 20.0f)
							{
								SET_ANIM_SET_FOR_ACTOR(&bLocal_1429, "comp_waiting", 0);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_ACTION_PERFORM(0, "comp_waiting");
								TASK_STAND_STILL(0, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								Function_491();
								Function_237(&iLocal_1487);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			if (!Function_489())
			{
				if (!Function_499())
				{
					fVar0 = Function_375(&Global_54076, &bLocal_1429);
					if (fVar0 < 110.0f)
					{
						Function_253("Anthro_abandoned");
						bLocal_1546 = true;
					}
					else if (fVar0 < 75.0f)
					{
						if (!iLocal_1550)
						{
							if (IS_OBJECT_VALID(&iLocal_1485))
							{
								GATEWAY_DISABLE(&iLocal_1485, 1);
								Function_230(&iLocal_1485);
							}
							Function_229(9, 1, 1);
							HUD_CLEAR_OBJECTIVE();
							Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
							iLocal_1550 = 1;
						}
					}
					else
					{
						if (IS_OBJECT_VALID(&iLocal_1485))
						{
							GATEWAY_DISABLE(&iLocal_1485, 0);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1485)))
							{
								ADD_BLIP_FOR_OBJECT(&iLocal_1485, 330, 0f, 2, 0);
							}
						}
						Function_229(9, 0, 1);
						iLocal_1550 = 0;
						if (iLocal_1524 == 0)
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_488();
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
						else if (iLocal_1524 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
							{
								iLocal_1485 = Function_353(&uLocal_804, "CabinGateway", &iLocal_4 + 1288[1], &Global_54076, 1, 330, 1, 0, 0, 1);
								if (!GATEWAY_UPDATE(&iLocal_1485))
								{
									Function_373("Anthro01_obj03d", 7,5f, 1, 2, 0, 0, 0, 0);
								}
								Function_237(&iLocal_1487);
								iLocal_1524 = 2;
							}
						}
						else if (iLocal_1524 == 2)
						{
							if (StackVal || !Function_391((IS_SCRIPTED_CONVERSATION_ONGOING() || HUD_IS_SHOWING_OBJECTIVE()), &bLocal_1429, *(&iLocal_4 + 2640[13]), 2.0f))
							{
								Function_237(&iLocal_1487);
							}
							else if (Function_333(&iLocal_1487) < 20.0f)
							{
								SET_ANIM_SET_FOR_ACTOR(&bLocal_1429, "comp_waiting", 0);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_ACTION_PERFORM(0, "comp_waiting");
								TASK_STAND_STILL(0, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								Function_491();
								Function_237(&iLocal_1487);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_487();
			iLocal_1527[2] = 1;
			iLocal_1356 = 3;
			Function_236(0);
			break;
	}
	return;
}

void Function_487() //Position: 0x18127 / 98599
{
	Function_179();
	Function_182(&iLocal_1080);
	if (iLocal_1525 != 4294967295)
	{
		if (GET_TASK_STATUS(&bLocal_1429, 0) == 1)
		{
			TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(iLocal_1525, 0);
	}
	if (iLocal_1526 != 4294967295)
	{
		if (GET_TASK_STATUS(&bLocal_1431, 0) == 1)
		{
			TASK_STAND_STILL(&bLocal_1431, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(iLocal_1526, 0);
	}
	return;
}

void Function_488() //Position: 0x1817E / 98686
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_Dismounted", "Anthro01_Dismounted", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_489() //Position: 0x181CD / 98765
{
	if (IS_ACTOR_RIDING(&Global_54076) || IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1288[1]))
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1288[2]))
		{
			return 0;
		}
	}
	Function_490(&iLocal_1485);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_236(106);
	return 1;
}

void Function_490(var uParam0) //Position: 0x18225 / 98853
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&uParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&uParam0, "voldestroy"))
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
		DESTROY_OBJECT(&uParam0);
	}
	return;
}

void Function_491() //Position: 0x182BB / 99003
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_NoFollowMcdCab", "Anthro01_NoFollowMcdCab", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_492() //Position: 0x18312 / 99090
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuysArriveBearClaw", "Anthro01_GuysArriveBearClaw", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

var Function_493(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, int iParam15) //Position: 0x18371 / 99185
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &uParam11, 0, &uParam12, &iParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2,802597E-45f, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
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

void Function_494() //Position: 0x1845C / 99420
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_ArriveBearClaw", "Anthro01_ArriveBearClaw", 0, 1, 1, 0, 1);
		Function_360(5);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_495() //Position: 0x184B3 / 99507
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_PLAYER_IN_HORSE_FOLLOW(0) && (Function_357(&Global_54076, 1) > 0,3f || !IS_ACTOR_RIDING(&bLocal_1429)))
		{
			Function_358(&Global_54076, 0);
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429);
		}
		return 0;
	}
	Function_222(&iLocal_1485);
	Function_220(&bLocal_1431);
	Function_236(36);
	return 1;
}

void Function_496() //Position: 0x18508 / 99592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AA", "Anthro01_MoreGuyTalk_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_MoreGuyTalk_v1_AB1", "Anthro01_MoreGuyTalk_v1_AB1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_MoreGuyTalk_v1_AB2", "Anthro01_MoreGuyTalk_v1_AB2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AC1", "Anthro01_MoreGuyTalk_v1_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AC2", "Anthro01_MoreGuyTalk_v1_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_MoreGuyTalk_v1_AD", "Anthro01_MoreGuyTalk_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AE1", "Anthro01_MoreGuyTalk_v1_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AE2", "Anthro01_MoreGuyTalk_v1_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AE3", "Anthro01_MoreGuyTalk_v1_AE3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_MoreGuyTalk_v1_AF", "Anthro01_MoreGuyTalk_v1_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1330", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_MoreGuyTalk_v1_AG", "Anthro01_MoreGuyTalk_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MoreGuyTalk_v1_AH", "Anthro01_MoreGuyTalk_v1_AH", 0, 1, 0, 0, 1);
		Function_360(7);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_497() //Position: 0x18873 / 100467
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_2FarBehindMcd", "Anthro01_2FarBehindMcd", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_498() //Position: 0x188C8 / 100552
{
	if (!IS_ACTOR_IN_VOLUME(&bLocal_1431, &iLocal_4 + 1288[0]))
	{
		return 0;
	}
	if (iLocal_1525 == 4294967295)
	{
		iLocal_1525 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3136, 4, 0, 0, 1, 0);
		TASK_DISMOUNT(0, 1);
		TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &iLocal_4 + 2640[13], 1, 0, 0, 0, 1);
		TASK_STAND_STILL(0, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1429, iLocal_1525);
		MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1429);
	}
	if (iLocal_1526 == 4294967295)
	{
		iLocal_1526 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3144, 4, 0, 0, 1, 0);
		TASK_DISMOUNT(0, 1);
		TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &iLocal_4 + 2640[23], 1, 0, 0, 0, 1);
		TASK_STAND_STILL(0, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1431, iLocal_1526);
		MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1431);
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1288[0]))
	{
		return 0;
	}
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	Function_229(9, 0, 1);
	Function_236(26);
	return 1;
}

bool Function_499() //Position: 0x189CA / 100810
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_335(&iLocal_1503))
	{
		cLocal_1441 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
		if (IS_ACTOR_VALID(&cLocal_1441) && GET_WEAPON_IN_HAND(&Global_54076) == 4294967295)
		{
			iVar2 = 0;
			while (iVar2 <= 10)
			{
				iVar1 = &iLocal_4 + 672[iVar22];
				if (&iVar1 == &cLocal_1441)
				{
					Function_421(&iLocal_1503);
				}
				iVar2++;
			}
		}
		else
		{
			cLocal_1441 = "";
		}
	}
	else
	{
		iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
		if (&iVar0 == &cLocal_1441 || GET_WEAPON_IN_HAND(&Global_54076) != 4294967295)
		{
			cLocal_1441 = "";
			Function_237(&iLocal_1503);
			Function_485(&iLocal_1503);
		}
		else if (Function_333(&iLocal_1503) < 2.0f)
		{
			TASK_PRIORITY_SET(&iVar1, 2);
			TASK_CLEAR(&cLocal_1441);
			Function_237(&iLocal_1503);
			Function_253("Anthro01_threatFail");
			bLocal_1546 = true;
			return 1;
		}
	}
	return 0;
}

bool Function_500(int iParam0, bool bParam1) //Position: 0x18AAA / 101034
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(&bLocal_1433))
	{
		HUD_CLEAR_OBJECTIVE();
	}
	else if (!IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_ACTOR_ALIVE(&bLocal_1433))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1433)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0, 2, 0);
			}
		}
		return 0;
	}
	iVar0 = GET_MOUNT(&Global_54076);
	if (&iVar0 == &bLocal_1435)
	{
		if (IS_ACTOR_RIDING(&bLocal_1429))
		{
			LOG_ERROR("Player is on MacDougal's horse, but MacDougal is also on a horse! WTF!!!");
		}
		else
		{
			bLocal_1435 = &bLocal_1433;
			bLocal_1433 = &iVar0;
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1435, 1);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_ACTORS_HORSE(&bLocal_1429, &bLocal_1435);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1435, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
			DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
			Function_396(&(Local_872[115]), &bLocal_1435, "Anthro_horse", 0, 0x5f5e100, 1);
			TASK_MOUNT(&bLocal_1429, &bLocal_1435, 0, 1, 2, 2147483647);
		}
	}
	else if (&iVar0 == &iLocal_1437)
	{
		if (IS_ACTOR_RIDING(&bLocal_1431))
		{
			LOG_ERROR("Player is on Nastas's horse, but Nastas is also on a horse! WTF!!!");
		}
		else
		{
			iLocal_1437 = &bLocal_1433;
			bLocal_1433 = &iVar0;
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ALLOW_RIDE_BY_AI(&iLocal_1437, 1);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_ACTORS_HORSE(&bLocal_1431, &iLocal_1437);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 1.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_1437, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
			DECOR_SET_BOOL(&iLocal_1437, "bNoInjuryEjection", 1);
			Function_396(&(Local_872[315]), &iLocal_1437, "Nastas_horse", 0, 0x5f5e100, 1);
			TASK_MOUNT(&bLocal_1431, &iLocal_1437, 0, 1, 2, 2147483647);
		}
	}
	else if (IS_ACTOR_VALID(&iVar0) && &iVar0 == &bLocal_1433)
	{
		Function_220(&bLocal_1433);
		bLocal_1433 = &iVar0;
		Function_404(&bLocal_1433, 3.0f);
		SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
		SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
		DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
	}
	if (!IS_ACTOR_RIDING(&bLocal_1429))
	{
		return 0;
	}
	if (!IS_ACTOR_RIDING(&bLocal_1431))
	{
		return 0;
	}
	MEMORY_PREFER_RIDING(&bLocal_1429, 1);
	MEMORY_PREFER_RIDING(&bLocal_1431, 1);
	if (IS_ACTOR_VALID(&bLocal_1433))
	{
		TASK_STAND_STILL(&bLocal_1433, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_1435))
	{
		TASK_STAND_STILL(&bLocal_1435, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_1437))
	{
		TASK_STAND_STILL(&iLocal_1437, -1.0f, 0, 0);
	}
	if (bParam1)
	{
		SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 4);
		SET_ACTOR_MAX_SPEED(&bLocal_1431, 4);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
	}
	if (iLocal_1356 == 0)
	{
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
	}
	HUD_CLEAR_OBJECTIVE();
	Function_229(9, 0, 1);
	Function_236(iParam0);
	return 1;
}

void Function_501() //Position: 0x18E52 / 101970
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_WaitJonBakMount", "Anthro01_WaitJonBakMount", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_502() //Position: 0x18EAB / 102059
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MountBakUp", "Anthro01_MountBakUp", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_503(int iParam0) //Position: 0x18EFA / 102138
{
	int iVar0;
	var uVar1;
	
	if (iLocal_1524 == 0)
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bLocal_1433))
	{
		HUD_CLEAR_OBJECTIVE();
		Function_236(iParam0);
		return 1;
	}
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		return 0;
	}
	Function_220(&bLocal_1433);
	iVar0 = GET_MOUNT(&Global_54076);
	if (&iVar0 == &bLocal_1435)
	{
		if (IS_ACTOR_RIDING(&bLocal_1429))
		{
			LOG_ERROR("Player is on MacDougal's horse, but MacDougal is also on a horse! WTF!!!");
		}
		else
		{
			bLocal_1435 = &bLocal_1433;
			bLocal_1433 = &iVar0;
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1435, 1);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_ACTORS_HORSE(&bLocal_1429, &bLocal_1435);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1435, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
			DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
			Function_396(&(Local_872[115]), &bLocal_1435, "Anthro_Horse", 0, 0x5f5e100, 1);
			uVar1 = TASK_SEQUENCE_OPEN();
			TASK_MOUNT(0, &bLocal_1435, 0, 1, 2, 2147483647);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1429, uVar1);
			TASK_SEQUENCE_RELEASE(iVar1, 1);
		}
	}
	else if (&iVar0 == &iLocal_1437)
	{
		if (IS_ACTOR_RIDING(&bLocal_1431))
		{
			LOG_ERROR("Player is on Nastas's horse, but Nastas is also on a horse! WTF!!!");
		}
		else
		{
			iLocal_1437 = &bLocal_1433;
			bLocal_1433 = &iVar0;
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ALLOW_RIDE_BY_AI(&iLocal_1437, 1);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_ACTORS_HORSE(&bLocal_1431, &iLocal_1437);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_1437, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
			DECOR_SET_BOOL(&iLocal_1437, "bNoInjuryEjection", 1);
			Function_396(&(Local_872[315]), &iLocal_1437, "Nastas_Horse", 0, 0x5f5e100, 1);
			iVar1 = TASK_SEQUENCE_OPEN();
			TASK_MOUNT(0, &iLocal_1437, 0, 1, 2, 2147483647);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1431, iVar1);
			TASK_SEQUENCE_RELEASE(iVar1, 1);
		}
	}
	else if (&iVar0 != &bLocal_1433)
	{
		bLocal_1433 = &iVar0;
		Function_404(&bLocal_1433, 3.0f);
		SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
		SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
		DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
	}
	HUD_CLEAR_OBJECTIVE();
	Function_236(iParam0);
	return 1;
}

int Function_504() //Position: 0x19204 / 102916
{
	Function_324(&iLocal_4 + 432, 562, 2, 0);
	Function_324(&iLocal_4 + 432, 976, 2, 0);
	if (Function_336(&iLocal_4 + 432))
	{
		return 1;
	}
	return 0;
}

void Function_505() //Position: 0x19234 / 102964
{
	if (!IS_ACTOR_VALID(&bLocal_1431))
	{
		Function_472();
		Function_512();
		Function_511(1);
		Function_509(1);
	}
	Function_480();
	Function_479();
	Function_478();
	TASK_PRIORITY_SET(&bLocal_1429, 1);
	TASK_PRIORITY_SET(&bLocal_1431, 1);
	if (!iLocal_1527[1])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, (&iLocal_4 + 1432[243]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[113]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[203]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1433)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1433);
		}
		if (GET_MOUNT(&bLocal_1429) != &bLocal_1435)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1429, &bLocal_1435);
		}
		if (GET_MOUNT(&bLocal_1431) != &iLocal_1437)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1431, &iLocal_1437);
		}
	}
	Function_508(&iLocal_1359);
	Function_506(&Global_54076, &iLocal_1359);
	Function_506(&bLocal_1429, &iLocal_1359);
	Function_506(&bLocal_1431, &iLocal_1359);
	Function_506(&iLocal_4 + 672[02], &iLocal_1359);
	Function_506(&iLocal_4 + 672[12], &iLocal_1359);
	Function_506(&iLocal_4 + 672[22], &iLocal_1359);
	return;
}

void Function_506(bool bParam0, struct<5>[] Param1) //Position: 0x1937B / 103291
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		bVar0 = Function_507(&bParam0, &Param1);
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

int Function_507(int iParam0, struct<5>[] Param1) //Position: 0x193CA / 103370
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

void Function_508(struct<5>[] Param0) //Position: 0x19404 / 103428
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

void Function_509(bool bParam0) //Position: 0x19459 / 103513
{
	iLocal_1437 = &iLocal_4 + 624[02];
	if (Function_423(&iLocal_1437, 1))
	{
		AI_BEHAVIOR_SET_ALLOW(&iLocal_1437, 0, 0);
		AI_SET_NAV_ACTOR_WIDTH(&iLocal_1437, 0,25f);
		Function_510(&iLocal_1437);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_1437, 0.0f);
		DECOR_SET_BOOL(&iLocal_1437, "bNoInjuryEjection", 1);
		ACCESSORIZE_HORSE(&iLocal_1437, 3);
		Function_396(&(Local_872[315]), &iLocal_1437, "Nastas_horse", 0, 0x5f5e100, 1);
		if (bParam0)
		{
			TASK_STAND_STILL(&iLocal_1437, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_510(int iParam0) //Position: 0x194F4 / 103668
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			SET_ACTOR_HEALTH(&iParam0, GET_ACTOR_MAX_HEALTH(&iParam0));
		}
	}
	return;
}

void Function_511(bool bParam0) //Position: 0x19518 / 103704
{
	bLocal_1431 = &iLocal_4 + 552[02];
	if (Function_423(&bLocal_1431, 1))
	{
		SET_CRIPPLE_ENABLE(&bLocal_1431, 0);
		SET_ACTOR_FACTION(&bLocal_1431, 20);
		TASK_PRIORITY_SET(&bLocal_1431, 1);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1431, 0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1431, 0);
		SET_ACTOR_MAX_HEALTH(&bLocal_1431, 50.0f);
		ACTOR_ENABLE_VARIABLE_MESH(&bLocal_1431, 17, 1);
		Function_510(&bLocal_1431);
		SET_ACTOR_IS_COMPANION(&bLocal_1431, 1);
		Function_396(&(Local_872[215]), &bLocal_1431, "Nastas", 0, 0x5f5e100, 1);
		SQUAD_JOIN(&bLocal_1431, &uLocal_1423);
		SQUAD_JOIN(&bLocal_1429, &uLocal_1423);
		DECOR_SET_BOOL(&bLocal_1431, "CanBeLasso", 0);
		if (bParam0)
		{
			TASK_STAND_STILL(&bLocal_1431, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_512() //Position: 0x195DE / 103902
{
	*(&iLocal_4 + 624[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "NastasHorse", 1,373272E-42f, Vector(753,2609f, 78,465f, 1309,05f), Vector(0.0f, 92,48192f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 624[02], 21);
	return;
}

void Function_513() //Position: 0x1962A / 103978
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[23]), 1, 1, 1);
	return;
}

void Function_514() //Position: 0x19650 / 104016
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	if (IS_OBJECT_VALID(&iLocal_1485))
	{
		if (GATEWAY_UPDATE(&iLocal_1485))
		{
			if (!GATEWAY_IS_DISABLED(&iLocal_1485))
			{
				GATEWAY_DISABLE(&iLocal_1485, 1);
			}
		}
		else if (GATEWAY_IS_DISABLED(&iLocal_1485))
		{
			GATEWAY_DISABLE(&iLocal_1485, 0);
		}
	}
	Function_395(bLocal_1357 <= 16);
	Function_518();
	Function_394();
	Function_481();
	Function_336(&iLocal_1090);
	Function_515(StackVal, "$/cutscene/ANTHRO01_CS02/ANTHRO01_CS02", &iLocal_1358, &iLocal_1359, *(&iLocal_4 + 1432[43]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
	return;
}

int Function_515(var uParam0, var uParam1, var uParam2, struct<2> Param3, bool bParam5, float fParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x19704 / 104196
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_391(StackVal, &Global_54076, Param3, (&fParam6 + ((IntToFloat(Function_393()) * (&fParam7 - &fParam6)) * 0,5f))))
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
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam8, &uParam9, &uParam10, &uParam11);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Function_508(&uParam2);
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_516(&uParam2);
				CUTSCENE_MANAGER_RESUME_LOADING();
				uParam1 = 3;
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: preload cutscene was skipped, is cutscene missing or failed to load?");
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if (!Function_391(StackVal, &Global_54076, Param3, (&fParam7 + ((IntToFloat(Function_393()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_391(StackVal, &Global_54076, Param3, &fParam6))
	{
	}
	return 0;
}

void Function_516(int iParam0) //Position: 0x19A57 / 105047
{
	int iVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &Var1, &Var3))
		{
			Function_517(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0), iVar0, &iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &Var5, &Var7);
			Function_390(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_517(var uParam0, int iParam1, struct<5>[] Param2) //Position: 0x19AB8 / 105144
{
	int iVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= Param2)
		{
			if (IS_ACTOR_VALID(&(Param2[iVar05])))
			{
				if (GET_ACTOR_ENUM(&uParam0) == GET_ACTOR_ENUM(&(Param2[iVar05])))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iParam1), &(Param2[iVar05]));
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iParam1, &Param2[iVar05] + 8, &Var1);
					Param2[iVar05].f_20 = (StackVal + 180.0f);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iParam1, &Param2[iVar05] + 24, &Var1);
					Param2[iVar05].f_36 = (StackVal + 180.0f);
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_518() //Position: 0x19B56 / 105302
{
	if (IS_ACTOR_VALID(&bLocal_1431))
	{
		fLocal_1523 = Function_519(fLocal_1523, Function_357(&bLocal_1431, 1));
	}
	return;
}

var Function_519(float fParam0, float fParam1) //Position: 0x19B77 / 105335
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void Function_520() //Position: 0x19B8A / 105354
{
	var uVar0;
	float fVar1;
	
	Function_536();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1527[0])
			{
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				Function_342(&Local_806);
				Function_535();
				Function_236(1);
			}
			else
			{
				Function_532();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_531()) && Function_336(&iLocal_1064))
			{
				Function_532();
				Function_236(2);
			}
			break;
		
		case 0x00000002:
			if (Function_333(&iLocal_1487) < 2,5f)
			{
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[0], Function_252(iLocal_1356), 2);
				Function_287(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			fVar1 = Function_375(&Global_54076, &bLocal_1431);
			if (fVar1 < 80.0f)
			{
				Function_253("Nastas_abandoned");
				bLocal_1546 = true;
			}
			else if (!Function_528())
			{
				if (fVar1 < 40.0f)
				{
					if (!bLocal_1557 && !bLocal_1558)
					{
						if (Function_374(&bLocal_1431, &Global_54076, 0.0f))
						{
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
						}
						else if (GET_TASK_STATUS(&bLocal_1431, 6) != 1)
						{
							Function_497();
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 5);
						}
					}
					if (!iLocal_1550)
					{
						if (bLocal_1557 || bLocal_1558)
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1431)))
							{
								ADD_BLIP_FOR_ACTOR(&bLocal_1431, 325, 0, 2, 0);
							}
						}
						HUD_CLEAR_OBJECTIVE();
						Function_373("Nastas_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						if (!bLocal_1557 && !bLocal_1558)
						{
							if (GET_TASK_STATUS(&bLocal_1431, 43) != 1)
							{
								SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
							}
							Function_373("Anthro01_obj02a", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							HUD_CLEAR_OBJECTIVE();
							if (iLocal_1524 <= 6)
							{
								Function_373("Anthro01_obj02b", 0x40f00000, 1, 2, 0, 0, 0, 0);
							}
						}
						iLocal_1550 = 0;
					}
					if (iLocal_1524 == 0)
					{
						if (iLocal_1527[0])
						{
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
						else if (!HUD_IS_FADING())
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1431, 16.0f);
							SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_1437, 16.0f);
							if (!SQUAD_GOAL_IS_VALID(&iLocal_1062))
							{
								iLocal_1062 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&uLocal_1423, 0, 4294967295, &iLocal_4 + 3120, 3, 0, 0);
							}
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&uLocal_1423, &iLocal_1062, 1, 0);
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&uLocal_1423, &iLocal_1062, 8, 1);
							TASK_CLEAR(&bLocal_1431);
							TASK_CLEAR(&bLocal_1429);
							Function_373("Anthro01_obj02a", 4.0f, 1, 2, 0, 0, 0, 0);
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
					}
					else if (iLocal_1524 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 7.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v1_AA"))
							{
								Function_527();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v2_AA"))
							{
								Function_526();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v3_AA"))
							{
								Function_525();
							}
							Function_237(&iLocal_1487);
						}
					}
					else if (iLocal_1524 == 3)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_412();
						Function_524();
						Function_220(&bLocal_1431);
						Function_237(&iLocal_1487);
						iLocal_1524 = 4;
					}
					else if (iLocal_1524 == 4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							ACTOR_END_FORCE_HOLSTER(&bLocal_1431);
							Function_523();
							Function_237(&iLocal_1487);
							iLocal_1524 = 6;
						}
					}
					else if (iLocal_1524 == 5)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						ACTOR_END_FORCE_HOLSTER(&bLocal_1431);
						HUD_CLEAR_SMALL_TEXT();
						Function_522();
						Function_237(&iLocal_1487);
						iLocal_1524 = 6;
					}
					else if (iLocal_1524 == 6)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_373("Anthro01_obj02b", 7,5f, 1, 2, 0, 0, 0, 0);
							uVar0 = ADD_BLIP_FOR_ACTOR(&bLocal_1439, 322, 0.0f, 2, 0);
							SET_BLIP_NAME(&uVar0, "Anthro01_bearBlip");
							Function_237(&iLocal_1487);
							iLocal_1524 = 7;
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_521();
			iLocal_1527[1] = 1;
			iLocal_1356 = 2;
			Function_236(0);
			break;
	}
	return;
}

void Function_521() //Position: 0x19FFD / 106493
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1431);
	Function_180();
	return;
}

void Function_522() //Position: 0x1A014 / 106516
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_JonShootsBear", "Anthro01_JonShootsBear", 0, 2, 1, 0, 1);
		Function_360(5);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_523() //Position: 0x1A069 / 106601
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_BearMad", "Anthro01_BearMad", 0, 2, 1, 0, 1);
		Function_360(5);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_524() //Position: 0x1A0B2 / 106674
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_SpotsBear", "Anthro01_SpotsBear", 0, 2, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_525() //Position: 0x1A0FF / 106751
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AA", "Anthro01_GuyTalk_v3_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v3_AB", "Anthro01_GuyTalk_v3_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AC", "Anthro01_GuyTalk_v3_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v3_AD", "Anthro01_GuyTalk_v3_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AE1", "Anthro01_GuyTalk_v3_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AE2", "Anthro01_GuyTalk_v3_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AE3", "Anthro01_GuyTalk_v3_AE3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v3_AF", "Anthro01_GuyTalk_v3_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AG", "Anthro01_GuyTalk_v3_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v3_AH", "Anthro01_GuyTalk_v3_AH", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AI1", "Anthro01_GuyTalk_v3_AI1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AI2", "Anthro01_GuyTalk_v3_AI2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v3_AJ", "Anthro01_GuyTalk_v3_AJ", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AK1", "Anthro01_GuyTalk_v3_AK1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v3_AK2", "Anthro01_GuyTalk_v3_AK2", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_526() //Position: 0x1A49C / 107676
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AA", "Anthro01_GuyTalk_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v2_AB", "Anthro01_GuyTalk_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AC1", "Anthro01_GuyTalk_v2_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AC2", "Anthro01_GuyTalk_v2_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AD", "Anthro01_GuyTalk_v2_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AE1", "Anthro01_GuyTalk_v2_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AE2", "Anthro01_GuyTalk_v2_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AF", "Anthro01_GuyTalk_v2_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AG1", "Anthro01_GuyTalk_v2_AG1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AG2", "Anthro01_GuyTalk_v2_AG2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AH", "Anthro01_GuyTalk_v2_AH", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AI1", "Anthro01_GuyTalk_v2_AI1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AI2", "Anthro01_GuyTalk_v2_AI2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AI3", "Anthro01_GuyTalk_v2_AI3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AJ", "Anthro01_GuyTalk_v2_AJ", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AK", "Anthro01_GuyTalk_v2_AK", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v2_AL", "Anthro01_GuyTalk_v2_AL", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v2_AM", "Anthro01_GuyTalk_v2_AM", 0, 1, 0, 0, 1);
		Function_360(7);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_527() //Position: 0x1A8EE / 108782
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v1_AA", "Anthro01_GuyTalk_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v1_AB", "Anthro01_GuyTalk_v1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v1_AC1", "Anthro01_GuyTalk_v1_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v1_AC2", "Anthro01_GuyTalk_v1_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v1_AD", "Anthro01_GuyTalk_v1_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AE", "Anthro01_GuyTalk_v1_AE", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_GuyTalk_v1_AF", "Anthro01_GuyTalk_v1_AF", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AG1", "Anthro01_GuyTalk_v1_AG1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AG2", "Anthro01_GuyTalk_v1_AG2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AG3", "Anthro01_GuyTalk_v1_AG3", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_GuyTalk_v1_AH", "Anthro01_GuyTalk_v1_AH", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AI", "Anthro01_GuyTalk_v1_AI", 0, 1, 1, 0, 1);
		Function_360(7);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_528() //Position: 0x1ABD6 / 109526
{
	var uVar0;
	
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (GET_LAST_ATTACKER(&Global_54076) != &bLocal_1439 || GET_LAST_ATTACKER(GET_MOUNT(&Global_54076)) != &bLocal_1439)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	if (IS_ACTOR_RIDING(&bLocal_1429))
	{
		if (GET_LAST_ATTACKER(&bLocal_1429) != &bLocal_1439 || GET_LAST_ATTACKER(GET_MOUNT(&bLocal_1429)) != &bLocal_1439)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1429, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1429, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	if (IS_ACTOR_RIDING(&bLocal_1431))
	{
		if (GET_LAST_ATTACKER(&bLocal_1431) != &bLocal_1439 || GET_LAST_ATTACKER(GET_MOUNT(&bLocal_1431)) != &bLocal_1439)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1431, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1431, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	if (Function_335(&iLocal_1499))
	{
		if (Function_333(&iLocal_1499) < 1,5f)
		{
			TASK_CLEAR(&Global_54076);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			DISABLE_GAME_CAMERA_FOCUS();
			Function_397(&(Local_872[015]), 1024, 1);
			Function_397(&(Local_872[215]), 1024, 1);
			Function_485(&iLocal_1499);
		}
		else if (Function_333(&iLocal_1499) < 0,3f)
		{
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			if (!iLocal_1556)
			{
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				Function_529(&(Local_872[015]), 1024);
				Function_529(&(Local_872[215]), 1024);
				iLocal_1556 = 1;
			}
		}
	}
	if (!Function_362(&bLocal_1439, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1431);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1429, 1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1431, 1);
		ACTOR_START_FORCE_HOLSTER(&bLocal_1429, 1, 0);
		ACTOR_START_FORCE_HOLSTER(&bLocal_1431, 1, 0);
		if (Function_335(&iLocal_1499))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			DISABLE_GAME_CAMERA_FOCUS();
		}
		MEMORY_PREFER_RIDING(&bLocal_1429, 0);
		MEMORY_PREFER_RIDING(&bLocal_1431, 0);
		AUDIO_MUSIC_SET_MOOD("DRAMATIC_2", 0, 4294967295, 4294967295);
		iLocal_1548 = 0;
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		Function_236(106);
		return 1;
	}
	if (!bLocal_1558)
	{
		if (bLocal_1557 || GET_LAST_ATTACKER(&bLocal_1439) != &Global_54076)
		{
			if (GET_LAST_ATTACKER(&bLocal_1439) == &Global_54076)
			{
				if (!bLocal_1557)
				{
					iLocal_1524 = 5;
				}
			}
			SET_ACTOR_FACTION(&bLocal_1439, 19);
			SET_ACTOR_INVULNERABILITY(&bLocal_1439, 0);
			PLAY_SOUND_FROM_ACTOR(&bLocal_1439, "BEAR_GROWL_LARGE_MASTER", 0);
			TASK_PRIORITY_SET(&bLocal_1439, 2);
			TASK_KILL_CHAR(&bLocal_1439, &bLocal_1429);
			SET_MOTIVE_BY_ENUM(&bLocal_1439, 0, 0.0f);
			Function_467(&bLocal_1439, &Global_54076);
			Function_467(&bLocal_1439, &bLocal_1429);
			Function_467(&bLocal_1439, &bLocal_1431);
			Function_466(&bLocal_1429, 50.0f, 1.0f, 3.0f);
			Function_466(&bLocal_1431, 50.0f, 1.0f, 3.0f);
			TASK_PRIORITY_SET(&bLocal_1429, 0);
			TASK_PRIORITY_SET(&bLocal_1431, 0);
			TASK_KILL_CHAR(&bLocal_1429, &bLocal_1439);
			TASK_KILL_CHAR(&bLocal_1431, &bLocal_1439);
			Function_229(9, 0, 1);
			Function_220(&bLocal_1433);
			iLocal_1548 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			bLocal_1558 = true;
			return 0;
		}
	}
	if (!IS_PLAYER_IN_HORSE_FOLLOW(0))
	{
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429);
	}
	else if (Function_357(&Global_54076, 1) > 0,3f || !IS_ACTOR_RIDING(&bLocal_1429))
	{
		Function_358(&Global_54076, 0);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429);
	}
	if (!iLocal_1554)
	{
		if (((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1224[1]) || IS_ACTOR_IN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[1])) || IS_ACTOR_IN_VOLUME(&bLocal_1431, &iLocal_4 + 1224[1])) || bLocal_1558)
		{
			uVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &iLocal_4 + 2456[03], 1);
			TASK_ACTION_PERFORM(0, "bear_Main/Warning/Stand/Stand_pre");
			TASK_STAND_STILL(0, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1439, uVar0);
			TASK_SEQUENCE_RELEASE(iVar0, 1);
			iLocal_1554 = 1;
		}
	}
	else if (!bLocal_1557)
	{
		if ((IS_ACTOR_IN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[2]) || bLocal_1558) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1224[2]))
		{
			Function_467(&bLocal_1429, &bLocal_1439);
			TASK_GO_TO_COORD(&bLocal_1429, &iLocal_4 + 2456[13], 2);
			TASK_GO_TO_COORD(&bLocal_1431, &iLocal_4 + 2456[23], 2);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[4], 2, 1);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1431, &iLocal_4 + 1224[4], 2, 1);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1439, &iLocal_4 + 1224[4], 2, 1);
			if (!bLocal_1558)
			{
				if (!iLocal_1555)
				{
					if (IS_PLAYER_IN_HORSE_FOLLOW(0))
					{
						REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1429);
						MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1429);
						ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1429, &iLocal_4 + 1224[3]);
						ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1435, &iLocal_4 + 1224[3]);
						Function_421(&iLocal_1499);
						iLocal_1555 = 1;
					}
				}
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_1524 = 3;
			}
			bLocal_1557 = true;
		}
	}
	return 0;
}

void Function_529(int iParam0, int iParam1) //Position: 0x1B185 / 110981
{
	if (iParam1 != 100000000)
	{
		Function_530(&iParam0, iParam1);
	}
	else
	{
		Function_398(&iParam0, 1);
	}
	return;
}

void Function_530(int iParam0, int iParam1) //Position: 0x1B1A7 / 111015
{
	int iVar0;
	
	Function_38(&iParam0 + 68, iParam1);
	iVar0 = 0;
	Function_77(&iVar0, iParam1);
	iVar0 = SHIFT_LEFT(iVar0, 11);
	Function_38(&iParam0 + 68, iVar0);
	return;
}

int Function_531() //Position: 0x1B1D4 / 111060
{
	Function_324(&iLocal_4 + 392, 562, 2, 0);
	Function_324(&iLocal_4 + 392, 976, 2, 0);
	if (Function_336(&iLocal_4 + 392))
	{
		return 1;
	}
	return 0;
}

void Function_532() //Position: 0x1B204 / 111108
{
	if (!IS_ACTOR_VALID(&bLocal_1431))
	{
		Function_472();
		Function_512();
		Function_511(1);
		Function_509(1);
	}
	if (!iLocal_1527[0])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[233]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[103]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[193]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1433)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1433);
		}
		if (GET_MOUNT(&bLocal_1429) != &bLocal_1435)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1429, &bLocal_1435);
		}
		if (GET_MOUNT(&bLocal_1431) != &iLocal_1437)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1431, &iLocal_1437);
		}
		ADD_BLIP_FOR_ACTOR(&bLocal_1431, 325, 0, 2, 0);
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
	}
	MEMORY_PREFER_RIDING(&bLocal_1429, 1);
	MEMORY_PREFER_RIDING(&bLocal_1431, 1);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1431, 1, 0);
	Function_534();
	Function_533();
	return;
}

void Function_533() //Position: 0x1B320 / 111392
{
	bLocal_1439 = &iLocal_4 + 648[02];
	if (Function_423(&bLocal_1439, 1))
	{
		SET_ACTOR_UPDATE_PRIORITY(&bLocal_1439, 0);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1439, 0, 0);
		TASK_PRIORITY_SET(&bLocal_1439, 1);
		TASK_STAND_STILL(&bLocal_1439, -1.0f, 0, 0);
		SET_ACTOR_INVULNERABILITY(&bLocal_1439, 1);
		SET_ACTOR_MAX_HEALTH(&bLocal_1439, 350.0f);
		Function_510(&bLocal_1439);
	}
	return;
}

void Function_534() //Position: 0x1B37C / 111484
{
	*(&iLocal_4 + 648[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bear", 1,544231E-42f, Vector(-111,428f, 119,4475f, 1842,006f), Vector(0.0f, 11,845f, 0.0f));
	return;
}

void Function_535() //Position: 0x1B3B3 / 111539
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[13]), 1, 1, 1);
	return;
}

void Function_536() //Position: 0x1B3D9 / 111577
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	Function_336(&iLocal_1080);
	Function_395(1);
	Function_518();
	Function_394();
	return;
}

void Function_537() //Position: 0x1B3FB / 111611
{
	float fVar0;
	var uVar1;
	
	uVar1 = uVar1;
	Function_551();
	switch (bLocal_1357)
	{
		case 0x00000000:
			Function_347(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_344();
			if (!Function_343(Global_46914[0]))
			{
				Function_342(&Local_806);
			}
			if (Function_292(&Local_806) || iLocal_1549)
			{
				Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_550();
				Function_236(1);
			}
			else
			{
				Function_549();
				Function_236(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_343(Global_46914[0])) && Function_548()) && Function_336(&iLocal_1064)) && Function_336(&iLocal_1070))
			{
				Function_549();
				Function_547();
				Function_236(2);
			}
			else if (Function_333(&iLocal_1487) < 2.0f)
			{
				Function_237(&iLocal_1487);
			}
			break;
		
		case 0x00000002:
			if (Function_333(&iLocal_1487) < 2,5f || (!iLocal_1549 && !Function_292(&Local_806)))
			{
				Function_250(iLocal_1356);
				Function_377(StackVal, Function_250(iLocal_1356), iLocal_1356, Global_46754[0], Function_252(iLocal_1356), 0);
				Function_287(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_421(&iLocal_1491);
				Function_236(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_546())
			{
				if (Function_335(&iLocal_1491))
				{
					if (Function_333(&iLocal_1491) < 4.0f)
					{
						CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
						Function_485(&iLocal_1491);
					}
				}
				fVar0 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar0 < 80.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar0 < 40.0f)
				{
					if (!iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						if (iLocal_1524 > 1)
						{
							Function_373("Anthro01_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
						}
						iLocal_1550 = 0;
					}
					if (iLocal_1524 == 0)
					{
						if (!HUD_IS_FADING())
						{
							Function_164(Global_46914[0]);
							Function_545();
							Function_237(&iLocal_1487);
							iLocal_1524 = 1;
						}
					}
					else if (iLocal_1524 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_373("Anthro01_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
					else if (iLocal_1524 == 2)
					{
						if (!Function_369() || Function_333(&iLocal_1487) < 3.0f)
						{
							Function_544();
							Function_237(&iLocal_1487);
							iLocal_1524 = 3;
						}
					}
					else if (iLocal_1524 == 3)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 20.0f)
						{
							Function_543();
							Function_237(&iLocal_1487);
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!Function_503(12))
			{
				fVar0 = Function_375(&Global_54076, &bLocal_1429);
				if (fVar0 < 80.0f)
				{
					Function_253("Anthro_abandoned");
					bLocal_1546 = true;
				}
				else if (fVar0 < 40.0f)
				{
					if (!iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (iLocal_1550)
					{
						HUD_CLEAR_OBJECTIVE();
						if (iLocal_1524 > 2)
						{
							Function_373("Anthro01_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
						}
						iLocal_1550 = 0;
					}
					if (iLocal_1524 == 0)
					{
						Function_542();
						Function_237(&iLocal_1487);
						iLocal_1524 = 1;
					}
					else if (iLocal_1524 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_541();
							Function_237(&iLocal_1487);
							iLocal_1524 = 2;
						}
					}
					else if (iLocal_1524 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_333(&iLocal_1487) < 10.0f)
						{
							Function_373("Anthro01_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1524 = 3;
							Function_237(&iLocal_1487);
						}
					}
					else if (iLocal_1524 == 3)
					{
						if (!IS_ACTOR_RIDING(&bLocal_1429))
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 5.0f)
						{
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1429, "waving_on_horse", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1429, "waving_on_horse/back");
							Function_540();
							Function_237(&iLocal_1487);
							iLocal_1524 = 4;
						}
					}
					else if (iLocal_1524 == 4)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_237(&iLocal_1487);
						}
						else if (!IS_ACTOR_RIDING(&bLocal_1429))
						{
							Function_238(&iLocal_1487, 15.0f);
						}
						else if (Function_333(&iLocal_1487) < 20.0f)
						{
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1429, "waving_on_horse", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1429, "waving_on_horse/back");
							Function_540();
							Function_237(&iLocal_1487);
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			fVar0 = Function_375(&Global_54076, &bLocal_1429);
			if (fVar0 < 80.0f)
			{
				Function_253("Anthro_abandoned");
				bLocal_1546 = true;
			}
			else if (fVar0 < 40.0f)
			{
				if (!iLocal_1550)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_373("Anthro_return", 7,5f, 0, 2, 0, 0, 0, 0);
					Function_229(9, 1, 1);
					iLocal_1550 = 1;
				}
			}
			else
			{
				if (iLocal_1550)
				{
					HUD_CLEAR_OBJECTIVE();
					iLocal_1550 = 0;
				}
				if (!Function_500(16, 1))
				{
					if (!IS_ACTOR_VALID(GET_MOUNT(&Global_54076)) && IS_ACTOR_ALIVE(&bLocal_1433))
					{
						if (!iLocal_1551)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_373("Horse_return", 7,5f, 0, 2, 0, 0, 0, 0);
							Function_229(9, 0, 1);
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1433)))
							{
								ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0, 2, 0);
							}
							iLocal_1551 = 1;
						}
					}
					else if (iLocal_1551)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_220(&bLocal_1433);
						Function_229(9, 0, 1);
						iLocal_1551 = 0;
					}
				}
			}
			break;
		
		case 0x00000010:
			fVar0 = Function_375(&Global_54076, &bLocal_1431);
			if (fVar0 < 80.0f)
			{
				Function_253("Nastas_abandoned");
				bLocal_1546 = true;
			}
			else if (!Function_539())
			{
				if (fVar0 < 40.0f)
				{
					if (Function_374(&bLocal_1431, &Global_54076, 0.0f))
					{
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
					}
					else if (GET_TASK_STATUS(&bLocal_1431, 6) != 1)
					{
						Function_497();
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 5);
					}
					if (!iLocal_1550)
					{
						AUDIO_MUSIC_SET_MOOD("ANTHRO_01_FALL", 0, 4294967295, 4294967295);
						HUD_CLEAR_OBJECTIVE();
						Function_373("Nastas_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1550 = 1;
					}
				}
				else
				{
					if (iLocal_1550)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro01_obj01c", 7,5f, 1, 2, 0, 0, 0, 0);
						iLocal_1550 = 0;
					}
					if (iLocal_1524 != 0)
					{
						if (GET_TASK_STATUS(&bLocal_1431, 43) != 1)
						{
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
						}
					}
					if (iLocal_1524 == 0)
					{
						iLocal_1062 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&uLocal_1423, 0, 4294967295, &iLocal_4 + 3120, 3, 0, 0);
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&uLocal_1423, &iLocal_1062, 1, 0);
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&uLocal_1423, &iLocal_1062, 8, 1);
						TASK_CLEAR(&bLocal_1431);
						TASK_CLEAR(&bLocal_1429);
						ADD_BLIP_FOR_ACTOR(&bLocal_1431, 325, 0, 2, 0);
						HUD_CLEAR_OBJECTIVE();
						Function_373("Anthro01_obj01c", 7,5f, 1, 2, 0, 0, 0, 0);
						Function_237(&iLocal_1487);
						iLocal_1524 = 1;
					}
					else if (iLocal_1524 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_237(&iLocal_1487);
						}
						else if (Function_333(&iLocal_1487) < 7.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v1_AA"))
							{
								Function_527();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v2_AA"))
							{
								Function_526();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v3_AA"))
							{
								Function_525();
							}
							Function_237(&iLocal_1487);
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_538();
			iLocal_1527[0] = 1;
			iLocal_1356 = 1;
			Function_236(0);
			break;
	}
	return;
}

void Function_538() //Position: 0x1BC48 / 113736
{
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1136[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	}
	Function_182(&iLocal_1070);
	Function_181();
	return;
}

bool Function_539() //Position: 0x1BC8D / 113805
{
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1224[0]))
	{
		return 0;
	}
	Function_236(106);
	return 1;
}

void Function_540() //Position: 0x1BCAF / 113839
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_WaitJonMount", "Anthro01_WaitJonMount", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_541() //Position: 0x1BD02 / 113922
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_MeetwitHors", "Anthro01_MeetwitHors", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_542() //Position: 0x1BD53 / 114003
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_Ngreets", "Anthro01_Ngreets", 0, 1, 1, 0, 1);
		Function_360(5);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_543() //Position: 0x1BD9C / 114076
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_NoFollowMcdHors", "Anthro01_NoFollowMcdHors", 0, 2, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_544() //Position: 0x1BDF5 / 114165
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_Jog2Horses_v1_AA", "Anthro01_Jog2Horses_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Anthro01_Jog2Horses_v1_AB", "Anthro01_Jog2Horses_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1030", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_Jog2Horses_v1_AC", "Anthro01_Jog2Horses_v1_AC", 0, 1, 0, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_545() //Position: 0x1BEF1 / 114417
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Anthro01_Exit2Street", "Anthro01_Exit2Street", 0, 1, 1, 0, 1);
		Function_360(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_546() //Position: 0x1BF42 / 114498
{
	int iVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&bLocal_1429) || (IS_ACTOR_IN_VOLUME(&bLocal_1429, &iLocal_4 + 1136[1]) && (GET_NTH_TASK_STATUS(&bLocal_1435, 2) != 1 || IS_ACTOR_MOUNTED(&bLocal_1435))))
	{
		if (GET_NTH_TASK_STATUS(&bLocal_1431, 2) == 1)
		{
			TASK_STAND_STILL(&bLocal_1431, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1435, -1.0f, 0, 0);
			Function_229(9, 0, 1);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1433)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1433, 334, 0.0f, 2, 0);
			}
			iLocal_1553 = 1;
			Function_236(10);
			return 1;
		}
	}
	if (!iLocal_1553)
	{
		if (GET_TASK_STATUS(&bLocal_1431, 43) == 0)
		{
			iLocal_1553 = 1;
		}
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (&iVar0 == &bLocal_1435)
		{
			if (IS_ACTOR_RIDING(&bLocal_1429))
			{
				LOG_ERROR("Player is on MacDougal's horse, but MacDougal is also on a horse! WTF!!!");
			}
			else
			{
				bLocal_1435 = &bLocal_1433;
				bLocal_1433 = &iVar0;
				Function_404(&bLocal_1433, 3.0f);
				SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
				SET_ALLOW_RIDE_BY_AI(&bLocal_1435, 1);
				SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
				SET_ACTORS_HORSE(&bLocal_1429, &bLocal_1435);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1435, 0.0f);
				DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
				DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
				Function_396(&(Local_872[115]), &bLocal_1435, "Anthro_Horse", 0, 0x5f5e100, 1);
				uVar1 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(0, &bLocal_1435, 0, 1, 2, 2147483647);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1429, uVar1);
				TASK_SEQUENCE_RELEASE(iVar1, 1);
				TASK_STAND_STILL(&bLocal_1435, -1.0f, 0, 0);
			}
		}
		else if (&iVar0 != &bLocal_1433)
		{
			if (IS_ACTOR_ALIVE(&bLocal_1433))
			{
				SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 1.0f);
				DECOR_REMOVE(&bLocal_1433, "bInjuryNoEjection");
			}
			bLocal_1433 = &iVar0;
			Function_404(&bLocal_1433, 3.0f);
			SET_ALLOW_RIDE_BY_AI(&bLocal_1433, 0);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1433);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
			DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
		}
	}
	return 0;
}

void Function_547() //Position: 0x1C1C0 / 115136
{
	var uVar0;
	
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[03]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1429, *(&iLocal_4 + 1432[93]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1431, *(&iLocal_4 + 1432[183]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1433, *(&iLocal_4 + 1432[223]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1435, *(&iLocal_4 + 1432[313]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1437, *(&iLocal_4 + 1432[353]), 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&bLocal_1431, &iLocal_1437);
	SET_ACTOR_MAX_SPEED(&bLocal_1429, 1);
	SET_ACTOR_MAX_SPEED(&bLocal_1431, 4);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 1);
	uVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(0, 9,3f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3096, 1, 0, 0, 1, 0);
	TASK_STAND_STILL(0, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1433, uVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(0, 1.0f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3112, 1, 0, 0, 1, 0);
	TASK_STAND_STILL(0, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1431, iVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(0, 1.0f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3104, 1, 0, 0, 1, 0);
	TASK_STAND_STILL(0, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1435, iVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	ACTOR_POP_NEXT_GAIT(&bLocal_1429, 1, 0);
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3080, 2, 1, 0, 1, 0);
	TASK_MOUNT(0, &bLocal_1435, 0, 1, 2, 2147483647);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1429, iVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	return;
}

bool Function_548() //Position: 0x1C39D / 115613
{
	Function_324(&iLocal_4 + 352, 562, 2, 0);
	Function_324(&iLocal_4 + 352, 976, 2, 0);
	if (Function_336(&iLocal_4 + 352))
	{
		return 1;
	}
	return 0;
}

void Function_549() //Position: 0x1C3CD / 115661
{
	if (!IS_ACTOR_VALID(&iLocal_4 + 552[02]))
	{
		Function_472();
		Function_511((iLocal_1549 || Function_292(&Local_806)));
	}
	if (!IS_ACTOR_VALID(&iLocal_4 + 624[02]))
	{
		Function_512();
		Function_509((iLocal_1549 || Function_292(&Local_806)));
	}
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1136[0]);
	Function_229(9, 1, 1);
	return;
}

void Function_550() //Position: 0x1C432 / 115762
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1432[03]), 1, 1, 1);
	return;
}

void Function_551() //Position: 0x1C458 / 115800
{
	if (!Function_406(bLocal_1357))
	{
		return;
	}
	Function_548();
	Function_395(bLocal_1357 <= 16);
	Function_518();
	Function_552();
	Function_394();
	return;
}

void Function_552() //Position: 0x1C47F / 115839
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1136[2]))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1431, &iLocal_4 + 1136[2]))
		{
			SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 4);
			SET_ACTOR_MAX_SPEED(&bLocal_1431, 4);
			SET_ACTOR_MAX_SPEED(&iLocal_1437, 4);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
			DESTROY_VOLUME(&iLocal_4 + 1136[2]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1136[3]))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1431, &iLocal_4 + 1136[3]))
		{
			SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(&uLocal_1423, &iLocal_1062, 3);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1431, 16.0f);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_1437, 16.0f);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_1429);
			DESTROY_VOLUME(&iLocal_4 + 1136[3]);
		}
	}
	return;
}

void Function_553() //Position: 0x1C52F / 116015
{
	switch (bLocal_1357)
	{
		case 0x00000006:
			Function_580(&Local_806, 1);
			uLocal_804 = CREATE_LAYOUT("Anthro01_DynamicLayout");
			Function_579();
			Function_169(16384);
			ENABLE_CHILD_SECTOR("blk_archeologist01Props01x");
			ENABLE_CHILD_SECTOR("sp_anthro01x");
			SET_AMBIENT_ANIMALS_AGRESSIVENESS(0);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1095);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1096);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1097);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1098);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1099);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1100);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1101);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1102);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1103);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1104);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1105);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1068);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1069);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1070);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1071);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1072);
			iLocal_1525 = 4294967295;
			iLocal_1526 = 4294967295;
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_04", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_421(&iLocal_1487);
			if ((!Function_292(&Local_806) && Local_806.f_40 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/ANTHRO_01/ANTHRO_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(744,001f, 78,306f, 1276,718f), -242,289f, 1, 1, 1);
				Global_99147 = 1;
				bLocal_1357 = 7;
			}
			else
			{
				bLocal_1357 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_237(&iLocal_1487);
				bLocal_1357 = 8;
			}
			else if (Function_333(&iLocal_1487) < 2.0f)
			{
				Function_237(&iLocal_1487);
			}
			break;
		
		case 0x00000008:
			if (Function_283("$/cutscene/ANTHRO_01/ANTHRO_01", &iLocal_1344, &Local_806, &iLocal_1356, 134277, 134102, 134021, 134004, 133983, 133972, 1, 1, 1, 2, 2, 0, 1))
			{
				Function_237(&iLocal_1487);
				bLocal_1357 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_302())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_564();
					uLocal_1423 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_804, "Anthro01Posse"));
				}
				Function_237(&iLocal_1487);
				bLocal_1357 = 10;
			}
			else if (Function_333(&iLocal_1487) < 2.0f)
			{
				Function_237(&iLocal_1487);
			}
			break;
		
		case 0x0000000A:
			Function_557();
			iLocal_1356 = 0;
			bLocal_1357 = false;
			Function_555(&Local_806, &iLocal_1356, &bLocal_1357);
			Function_554(StackVal, StackVal, StackVal, StackVal, Function_564(), Local_806);
			switch (iLocal_1356)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_239();
					break;
				
				case 0x00000002:
					Function_235();
					break;
				
				case 0x00000003:
					Function_234();
					break;
				
				case 0x00000004:
					Function_233();
					break;
				
				case 0x00000005:
					Function_232();
					break;
				
				case 0x00000006:
					Function_231();
					break;
				
				case 0x00000007:
					Function_227();
					break;
				
				case 0x00000065:
					Function_225();
					break;
			}
			break;
	}
	return;
}

void Function_554(struct<41> Param0) //Position: 0x1C827 / 116775
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_1356 = 0;
			break;
		
		case 0x00000002:
			iLocal_1356 = 3;
			break;
	}
}

void Function_555(int iParam0, var uParam1, var uParam2) //Position: 0x1C852 / 116818
{
	if (Function_292(&iParam0))
	{
		uParam1 = Function_477(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			uParam2 = 0;
		}
		Function_556();
	}
	return;
}

void Function_556() //Position: 0x1C88E / 116878
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

void Function_557() //Position: 0x1C8DF / 116959
{
	if (Function_423(&bLocal_1429, 1))
	{
		SET_CRIPPLE_ENABLE(&bLocal_1429, 0);
		SET_ACTOR_FACTION(&bLocal_1429, 20);
		TASK_PRIORITY_SET(&bLocal_1429, 1);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1429, 0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1429, 0);
		SET_ACTOR_MAX_HEALTH(&bLocal_1429, 50.0f);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_1429, 8, "FASTWALK");
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_1429, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bLocal_1429, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bLocal_1429, 1);
		Function_510(&bLocal_1429);
	}
	if (Function_423(&bLocal_1433, 1))
	{
		TASK_PRIORITY_SET(&bLocal_1433, 1);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1433, 0.0f);
		DECOR_SET_BOOL(&bLocal_1433, "bNoInjuryEjection", 1);
	}
	if (!IS_ACTOR_VALID(&bLocal_1435))
	{
		Function_563();
	}
	Function_562((iLocal_1549 || Function_292(&Local_806)));
	Function_561(&iLocal_4 + 1336, &uLocal_804);
	Function_559(&uLocal_818, &uLocal_804);
	Function_396(&(Local_872[015]), &bLocal_1429, "Anthro", 0, 0x5f5e100, 1);
	uLocal_1421 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	SET_DISABLE_DEADEYE(0, 0);
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
	Function_558(&iLocal_1515, 8.0f);
	return;
}

void Function_558(int iParam0, float fParam1) //Position: 0x1CA05 / 117253
{
	if (!Function_335(&iParam0))
	{
		Function_238(&iParam0, fParam1);
	}
	return;
}

int Function_559(struct<2>[] Param0) //Position: 0x1CA1D / 117277
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_560(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_560(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_560(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_560(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_560(struct<13> Param0) //Position: 0x1D0F6 / 119030
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

void Function_561(float[] fParam0, int iParam1) //Position: 0x1D1C5 / 119237
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (fParam0 - 1))
	{
		Var3 = Vector(0.0f, 0.0f, 0.0f);
		GET_VOLUME_CENTER(&(fParam0[iVar0]), &Var1);
		Var3.f_4 = GET_VOLUME_HEADING(&(fParam0[iVar0]));
		GET_VOLUME_SCALE(&(fParam0[iVar0]), &Var5);
		DESTROY_VOLUME(&(fParam0[iVar0]));
		CREATE_OBSTACLE_IN_LAYOUT(&iParam1, Function_54(), Var1, Var3, Var5);
		iVar0++;
	}
	return;
}

void Function_562(bool bParam0) //Position: 0x1D236 / 119350
{
	bLocal_1435 = &iLocal_4 + 600[02];
	if (Function_423(&bLocal_1435, 1))
	{
		TASK_PRIORITY_SET(&bLocal_1435, 1);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1435, 0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1435, 1);
		AI_SET_NAV_ACTOR_WIDTH(&bLocal_1435, 0,25f);
		Function_510(&bLocal_1435);
		SET_MOST_RECENT_MOUNT(&bLocal_1429, &bLocal_1435);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1435, 0.0f);
		DECOR_SET_BOOL(&bLocal_1435, "bNoInjuryEjection", 1);
		ACCESSORIZE_HORSE(&bLocal_1435, 3);
		Function_396(&(Local_872[115]), &bLocal_1435, "Anthro_horse", 0, 0x5f5e100, 1);
		if (bParam0)
		{
			TASK_STAND_STILL(&bLocal_1435, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_563() //Position: 0x1D2EC / 119532
{
	*(&iLocal_4 + 600[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorse", 1,367667E-42f, Vector(751,3065f, 78,48562f, 1308,549f), Vector(0.0f, 89,65953f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 600[02], 21);
	return;
}

vector3 Function_564() //Position: 0x1D33B / 119611
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Anthro01_layout");
	*(&iLocal_4 + 1128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVolumes_set");
	*(&iLocal_4 + 1096[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(744,0618f, 79,49407f, 1276,893f), Vector(0.0f, 0.0f, 0.0f), Vector(3,392717f, 3,042261f, 4,933172f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1128, &iLocal_4 + 1096[0]);
	*(&iLocal_4 + 1096[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-457,8939f, 141,0963f, 1928,671f), Vector(0.0f, 2,36891f, 0.0f), Vector(8,598868f, 3,042261f, 6,381806f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1128, &iLocal_4 + 1096[1]);
	*(&iLocal_4 + 1096[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(751,8854f, 79,54492f, 1308,549f), Vector(0.0f, 0.0f, 0.0f), Vector(22,74323f, 3,042261f, 4,933172f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1128, &iLocal_4 + 1096[2]);
	*(&iLocal_4 + 1216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "BlackwaterVolumes_set");
	*(&iLocal_4 + 1136[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseClearVol", 2,802597E-45f, Vector(740,9988f, 80,41908f, 1309,679f), Vector(0.0f, 89,97042f, 0.0f), Vector(16,91546f, 4,999195f, 28,56349f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[0]);
	*(&iLocal_4 + 1136[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseReadyVol", 2,802597E-45f, Vector(735,9467f, 81,23683f, 1313,012f), Vector(0.0f, 89,97042f, 0.0f), Vector(11,64371f, 6,343929f, 17,83032f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[1]);
	*(&iLocal_4 + 1136[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AroundCornerVol", 2,802597E-45f, Vector(715,3559f, 83,76731f, 1401,57f), Vector(0.0f, 7,679595f, 0.0f), Vector(23,33653f, 13,69937f, 111,3896f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[2]);
	*(&iLocal_4 + 1136[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "OutOfTownVol", 2,802597E-45f, Vector(641,504f, 83,76731f, 1411,528f), Vector(0.0f, 7,679595f, 0.0f), Vector(23,33653f, 13,69937f, 111,3896f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[3]);
	*(&iLocal_4 + 1136[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RetreatVol", 2,802597E-45f, Vector(671,1348f, 84,39091f, 1328,416f), Vector(0.0f, -0,1450579f, 0.0f), Vector(279,8281f, 42,8358f, 380,5051f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[4]);
	*(&iLocal_4 + 1136[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nOfficeVol", 2,802597E-45f, Vector(736,5592f, 81,14281f, 1292,631f), Vector(0.0f, 89,97042f, 0.0f), Vector(61,67595f, 8,459806f, 36,86041f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[5]);
	*(&iLocal_4 + 1136[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AlleyVol", 2,802597E-45f, Vector(754,8005f, 80,29592f, 1303,452f), Vector(0.0f, 89,97042f, 0.0f), Vector(16,91546f, 4,999195f, 20,61042f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[6]);
	*(&iLocal_4 + 1136[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ReturnSpeedLimitVol", 2,802597E-45f, Vector(604,7114f, 88,48258f, 1393,599f), Vector(0.0f, 7,679595f, 0.0f), Vector(149,6632f, 29,64467f, 197,5955f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[7]);
	*(&iLocal_4 + 1136[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseAlleyVol", 4,203895E-45f, Vector(759,7517f, 79,50702f, 1303,911f), Vector(0.0f, -362,0979f, 0.0f), Vector(2.0f, 1,393461f, 2.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1216, &iLocal_4 + 1136[8]);
	*(&iLocal_4 + 1280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "RoadVolumes_set");
	*(&iLocal_4 + 1224[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BearCheckpointVol", 2,802597E-45f, Vector(153,6577f, 115,156f, 1784,788f), Vector(0.0f, 0.0f, 0.0f), Vector(23,33653f, 22,60112f, 111,3896f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1224[0]);
	*(&iLocal_4 + 1224[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BearActivateVol", 2,802597E-45f, Vector(-114,266f, 114,655f, 1835,459f), Vector(0.0f, 33,05383f, 0.0f), Vector(184,9794f, 52,30298f, 152,0536f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1224[1]);
	*(&iLocal_4 + 1224[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CompNervousVol", 2,802597E-45f, Vector(-114,266f, 117,91f, 1837,672f), Vector(0.0f, 33,05383f, 0.0f), Vector(64,48537f, 22,6901f, 74,04273f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1224[2]);
	*(&iLocal_4 + 1224[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseFrightVol", 2,802597E-45f, Vector(-112,8724f, 119,6669f, 1855,239f), Vector(0.0f, 30,55747f, 0.0f), Vector(12,70069f, 5,101852f, 7,023883f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1224[3]);
	*(&iLocal_4 + 1224[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BearCombatVol", 2,802597E-45f, Vector(-108,651f, 120,5359f, 1830,166f), Vector(0.0f, 30,55747f, 0.0f), Vector(38,81591f, 10,02045f, 19,17914f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1224[4]);
	*(&iLocal_4 + 1224[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AmbushFallthroughVol", 2,802597E-45f, Vector(369,4358f, 114,6276f, 1659,696f), Vector(0.0f, 30,55747f, 0.0f), Vector(38,81591f, 18,62624f, 117,3168f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1224[5]);
	*(&iLocal_4 + 1328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "BearClawVolumes_set");
	*(&iLocal_4 + 1288[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BearClawArrivalVol", 2,802597E-45f, Vector(-455,144f, 138,817f, 1904,624f), Vector(0.0f, 0.0f, 0.0f), Vector(111,6856f, 43,62344f, 111,3896f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[0]);
	*(&iLocal_4 + 1288[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CabinMeetingVolExt", 2,802597E-45f, Vector(-463,421f, 141,4388f, 1928,798f), Vector(0.0f, 0.0f, 0.0f), Vector(2,408271f, 2,607149f, 3,020808f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[1]);
	*(&iLocal_4 + 1288[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CabinMeetingVolInt", 2,802597E-45f, Vector(-458,121f, 141,3308f, 1928,899f), Vector(0.0f, 2,265846f, 0.0f), Vector(8,070343f, 2,906228f, 5,410399f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[2]);
	*(&iLocal_4 + 1288[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "InsideCabinVol", 2,802597E-45f, Vector(-457,7913f, 141,205f, 1928,816f), Vector(0.0f, 2,904057f, 0.0f), Vector(9,074657f, 2,369687f, 6,796483f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[3]);
	*(&iLocal_4 + 1360) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "ObstacleVolumes_set");
	*(&iLocal_4 + 1336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ObstacleVol01", 2,802597E-45f, Vector(-453,2264f, 140,0128f, 1918,421f), Vector(182,6068f, 30,28387f, -182,3563f), Vector(1,399539f, 1,076446f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1336[0]);
	*(&iLocal_4 + 1336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ObstacleVol02", 2,802597E-45f, Vector(-461,002f, 140,6799f, 1916,715f), Vector(0.0f, -174,2126f, -5,354607f), Vector(3,564411f, 1,105733f, 1,458754f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1336[1]);
	*(&iLocal_4 + 1400) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Ambush01Volumes_set");
	*(&iLocal_4 + 1368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Ambush01Vol01", 2,802597E-45f, Vector(-206,2111f, 119,9704f, 1935,23f), Vector(0.0f, 27,39809f, 0.0f), Vector(10.0f, 85,89933f, 1334,25f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1400, &iLocal_4 + 1368[0]);
	*(&iLocal_4 + 1368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Ambush01Vol02", 2,802597E-45f, Vector(-282,9688f, 140,2506f, 1810,05f), Vector(0.0f, 27,39809f, 0.0f), Vector(14,25151f, 29,64632f, 202,8296f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1400, &iLocal_4 + 1368[1]);
	*(&iLocal_4 + 1368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Ambush01Vol03", 2,802597E-45f, Vector(-291,7271f, 145,323f, 1824,043f), Vector(0.0f, 27,39809f, 0.0f), Vector(16,38741f, 11,24233f, 11,96249f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1400, &iLocal_4 + 1368[2]);
	*(&iLocal_4 + 1424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Ambush02Volumes_set");
	*(&iLocal_4 + 1408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Ambush02Vol", 2,802597E-45f, Vector(193,8398f, 100,748f, 1775,305f), Vector(0.0f, 36,78686f, 0.0f), Vector(214,7397f, 78,85862f, 1202,766f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1424, &iLocal_4 + 1408[0]);
	*(&iLocal_4 + 1432[03]) = Vector(742,5313f, 78,431f, 1277,337f);
	*(&iLocal_4 + 1432[03] + 12) = Vector(0.0f, -222,6241f, 0.0f);
	*(&iLocal_4 + 1432[13]) = Vector(149,1507f, 113,9402f, 1785,728f);
	*(&iLocal_4 + 1432[13] + 12) = Vector(0.0f, 67,33617f, 0.0f);
	*(&iLocal_4 + 1432[23]) = Vector(-129,1565f, 119,7652f, 1843,309f);
	*(&iLocal_4 + 1432[23] + 12) = Vector(0.0f, -244,6643f, 0.0f);
	*(&iLocal_4 + 1432[33]) = Vector(-457,5713f, 140,1866f, 1926,11f);
	*(&iLocal_4 + 1432[33] + 12) = Vector(0.0f, 1,572193f, 0.0f);
	*(&iLocal_4 + 1432[43]) = Vector(-457,8309f, 140,1866f, 1928f);
	*(&iLocal_4 + 1432[43] + 12) = Vector(0.0f, 90,79178f, 0.0f);
	*(&iLocal_4 + 1432[53]) = Vector(-438,8214f, 136,3085f, 1900,314f);
	*(&iLocal_4 + 1432[53] + 12) = Vector(0.0f, -101,5154f, 0.0f);
	*(&iLocal_4 + 1432[63]) = Vector(43,86036f, 117,0359f, 1762,763f);
	*(&iLocal_4 + 1432[63] + 12) = Vector(0.0f, -97,17687f, 0.0f);
	*(&iLocal_4 + 1432[73]) = Vector(540,3629f, 91,9378f, 1419,947f);
	*(&iLocal_4 + 1432[73] + 12) = Vector(0.0f, -17,82698f, 0.0f);
	*(&iLocal_4 + 1432[83]) = Vector(752,0822f, 78,48963f, 1309,106f);
	*(&iLocal_4 + 1432[83] + 12) = Vector(0.0f, 90,36974f, 0.0f);
	*(&iLocal_4 + 1432[93]) = Vector(741,3875f, 78,421f, 1279,346f);
	*(&iLocal_4 + 1432[93] + 12) = Vector(0.0f, 132,1094f, 0.0f);
	*(&iLocal_4 + 1432[103]) = Vector(149,4261f, 114,0112f, 1782,812f);
	*(&iLocal_4 + 1432[103] + 12) = Vector(0.0f, 79,70858f, 0.0f);
	*(&iLocal_4 + 1432[113]) = Vector(-130,3963f, 119,7289f, 1842,117f);
	*(&iLocal_4 + 1432[113] + 12) = Vector(0.0f, 118,1996f, 0.0f);
	*(&iLocal_4 + 1432[123]) = Vector(-459,0957f, 140,1866f, 1926,113f);
	*(&iLocal_4 + 1432[123] + 12) = Vector(0.0f, 0,3133644f, 0.0f);
	*(&iLocal_4 + 1432[133]) = Vector(-460,2027f, 140,1866f, 1928f);
	*(&iLocal_4 + 1432[133] + 12) = Vector(0.0f, 90.0f, 0.0f);
	*(&iLocal_4 + 1432[143]) = Vector(-435,3463f, 135,7823f, 1899,602f);
	*(&iLocal_4 + 1432[143] + 12) = Vector(0.0f, -157,53f, 0.0f);
	*(&iLocal_4 + 1432[153]) = Vector(46,4267f, 117,3397f, 1765,32f);
	*(&iLocal_4 + 1432[153] + 12) = Vector(0.0f, 264,6878f, 0.0f);
	*(&iLocal_4 + 1432[163]) = Vector(539,3053f, 91,88498f, 1418,321f);
	*(&iLocal_4 + 1432[163] + 12) = Vector(0.0f, 338,2472f, 0.0f);
	*(&iLocal_4 + 1432[173]) = Vector(751,9808f, 78,50212f, 1308,084f);
	*(&iLocal_4 + 1432[173] + 12) = Vector(0.0f, -271,6109f, 0.0f);
	*(&iLocal_4 + 1432[183]) = Vector(748,3133f, 78,49289f, 1309,272f);
	*(&iLocal_4 + 1432[183] + 12) = Vector(0.0f, 89,60399f, 0.0f);
	*(&iLocal_4 + 1432[193]) = Vector(146,1238f, 114,478f, 1783,242f);
	*(&iLocal_4 + 1432[193] + 12) = Vector(0.0f, 74,50773f, 0.0f);
	*(&iLocal_4 + 1432[203]) = Vector(-132,2028f, 119,7717f, 1844,569f);
	*(&iLocal_4 + 1432[203] + 12) = Vector(0.0f, -242,71f, 0.0f);
	*(&iLocal_4 + 1432[213]) = Vector(-2180.0f, 16,56469f, 2612.0f);
	*(&iLocal_4 + 1432[213] + 12) = Vector(0.0f, -90.0f, 0.0f);
	*(&iLocal_4 + 1432[223]) = Vector(739,7628f, 78,35129f, 1305,33f);
	*(&iLocal_4 + 1432[223] + 12) = Vector(0.0f, 177,9078f, 0.0f);
	*(&iLocal_4 + 1432[233]) = Vector(149,5709f, 113,8711f, 1784,878f);
	*(&iLocal_4 + 1432[233] + 12) = Vector(0.0f, 70,28059f, 0.0f);
	*(&iLocal_4 + 1432[243]) = Vector(-128,853f, 119,7614f, 1844,019f);
	*(&iLocal_4 + 1432[243] + 12) = Vector(0.0f, 115,8308f, 0.0f);
	*(&iLocal_4 + 1432[253]) = Vector(-438,6676f, 136,3998f, 1899,444f);
	*(&iLocal_4 + 1432[253] + 12) = Vector(0.0f, -168,7004f, 0.0f);
	*(&iLocal_4 + 1432[263]) = Vector(-438,6676f, 136,3998f, 1899,444f);
	*(&iLocal_4 + 1432[263] + 12) = Vector(0.0f, -168,7004f, 0.0f);
	*(&iLocal_4 + 1432[273]) = Vector(-438,6676f, 136,3998f, 1899,444f);
	*(&iLocal_4 + 1432[273] + 12) = Vector(0.0f, -168,7004f, 0.0f);
	*(&iLocal_4 + 1432[283]) = Vector(43,77153f, 117,0268f, 1763,628f);
	*(&iLocal_4 + 1432[283] + 12) = Vector(0.0f, -104,426f, 0.0f);
	*(&iLocal_4 + 1432[293]) = Vector(538,5169f, 92,00337f, 1421,901f);
	*(&iLocal_4 + 1432[293] + 12) = Vector(0.0f, -23,37519f, 0.0f);
	*(&iLocal_4 + 1432[303]) = Vector(759,7517f, 78,30585f, 1303,911f);
	*(&iLocal_4 + 1432[303] + 12) = Vector(0.0f, -362,0979f, 0.0f);
	*(&iLocal_4 + 1432[313]) = Vector(751,4146f, 78,48562f, 1308,559f);
	*(&iLocal_4 + 1432[313] + 12) = Vector(0.0f, 89,65953f, 0.0f);
	*(&iLocal_4 + 1432[323]) = Vector(-435,3463f, 135,7823f, 1899,602f);
	*(&iLocal_4 + 1432[323] + 12) = Vector(0.0f, -157,53f, 0.0f);
	*(&iLocal_4 + 1432[333]) = Vector(-435,3463f, 135,7823f, 1899,602f);
	*(&iLocal_4 + 1432[333] + 12) = Vector(0.0f, -157,53f, 0.0f);
	*(&iLocal_4 + 1432[343]) = Vector(761,6635f, 78,30585f, 1303,134f);
	*(&iLocal_4 + 1432[343] + 12) = Vector(0.0f, -3,751729f, 0.0f);
	*(&iLocal_4 + 1432[353]) = Vector(753,2609f, 78,465f, 1309,05f);
	*(&iLocal_4 + 1432[353] + 12) = Vector(0.0f, 92,48192f, 0.0f);
	*(&iLocal_4 + 1432[363]) = Vector(-436,8435f, 136,2956f, 1898,684f);
	*(&iLocal_4 + 1432[363] + 12) = Vector(0.0f, -171,662f, 0.0f);
	*(&iLocal_4 + 1432[373]) = Vector(-436,8435f, 136,2956f, 1898,684f);
	*(&iLocal_4 + 1432[373] + 12) = Vector(0.0f, -171,662f, 0.0f);
	*(&iLocal_4 + 1432[383]) = Vector(-436,8435f, 136,2956f, 1898,684f);
	*(&iLocal_4 + 1432[383] + 12) = Vector(0.0f, -171,662f, 0.0f);
	*(&iLocal_4 + 2376[03]) = Vector(737,4933f, 78,35129f, 1312,366f);
	*(&iLocal_4 + 2376[03] + 12) = Vector(0.0f, -355,4207f, 0.0f);
	*(&iLocal_4 + 2376[13]) = Vector(758,0911f, 78,30585f, 1306,599f);
	*(&iLocal_4 + 2376[13] + 12) = Vector(0.0f, -141,106f, 0.0f);
	*(&iLocal_4 + 2376[23]) = Vector(736,9579f, 78,30585f, 1308,818f);
	*(&iLocal_4 + 2376[23] + 12) = Vector(-117,756f, -89,81654f, 118,3795f);
	*(&iLocal_4 + 2456[03]) = Vector(-114,3453f, 119,1434f, 1833,984f);
	*(&iLocal_4 + 2456[03] + 12) = Vector(0.0f, -364,6065f, 0.0f);
	*(&iLocal_4 + 2456[13]) = Vector(-106,1994f, 118,6063f, 1828,322f);
	*(&iLocal_4 + 2456[13] + 12) = Vector(0.0f, -231,9153f, 0.0f);
	*(&iLocal_4 + 2456[23]) = Vector(-105,8202f, 118,6805f, 1831,342f);
	*(&iLocal_4 + 2456[23] + 12) = Vector(0.0f, -248,1166f, 0.0f);
	*(&iLocal_4 + 2456[33]) = Vector(-428,4029f, 134,5395f, 1906,003f);
	*(&iLocal_4 + 2456[33] + 12) = Vector(0.0f, -97,9579f, 0.0f);
	*(&iLocal_4 + 2456[43]) = Vector(-131,5579f, 122,6644f, 1734,991f);
	*(&iLocal_4 + 2456[43] + 12) = Vector(0.0f, -192,0831f, 0.0f);
	*(&iLocal_4 + 2456[53]) = Vector(131,4178f, 123,1664f, 1660,582f);
	*(&iLocal_4 + 2456[53] + 12) = Vector(0.0f, -117,4556f, 0.0f);
	*(&iLocal_4 + 2608[03]) = Vector(743,1809f, 78,48635f, 1311,157f);
	*(&iLocal_4 + 2608[03] + 12) = Vector(0.0f, 179,3503f, 0.0f);
	*(&iLocal_4 + 2640[03]) = Vector(-438,74f, 136,3568f, 1899,853f);
	*(&iLocal_4 + 2640[03] + 12) = Vector(0.0f, -259,7174f, 0.0f);
	*(&iLocal_4 + 2640[13]) = Vector(-464f, 140,1866f, 1928,982f);
	*(&iLocal_4 + 2640[13] + 12) = Vector(0.0f, -405,8687f, 0.0f);
	*(&iLocal_4 + 2640[23]) = Vector(-463,0306f, 140,1866f, 1929,796f);
	*(&iLocal_4 + 2640[23] + 12) = Vector(0.0f, -354,1654f, 0.0f);
	*(&iLocal_4 + 2640[33]) = Vector(-452,4088f, 139,5166f, 1918,388f);
	*(&iLocal_4 + 2640[33] + 12) = Vector(182,6068f, 30,28387f, -182,3563f);
	*(&iLocal_4 + 2640[43]) = Vector(-460,5089f, 140,217f, 1916,038f);
	*(&iLocal_4 + 2640[43] + 12) = Vector(0.0f, -174,2126f, -5,354607f);
	*(&iLocal_4 + 2768[03]) = Vector(-461,5501f, 140,4309f, 1914,945f);
	*(&iLocal_4 + 2768[03] + 12) = Vector(0.0f, -525,551f, 0.0f);
	*(&iLocal_4 + 2768[13]) = Vector(-464,4181f, 140,2895f, 1919,609f);
	*(&iLocal_4 + 2768[13] + 12) = Vector(0.0f, -500,3999f, 0.0f);
	*(&iLocal_4 + 2768[23]) = Vector(-452,453f, 139,5909f, 1917,083f);
	*(&iLocal_4 + 2768[23] + 12) = Vector(0.0f, -572,7661f, 0.0f);
	*(&iLocal_4 + 2768[33]) = Vector(-468,4375f, 142,6143f, 1901,379f);
	*(&iLocal_4 + 2768[33] + 12) = Vector(0.0f, -538,8961f, 0.0f);
	*(&iLocal_4 + 2768[43]) = Vector(-462,6444f, 142,6551f, 1898,452f);
	*(&iLocal_4 + 2768[43] + 12) = Vector(0.0f, -543,0562f, 0.0f);
	*(&iLocal_4 + 2768[53]) = Vector(-483,1919f, 143,5607f, 1918,001f);
	*(&iLocal_4 + 2768[53] + 12) = Vector(0.0f, -473,0313f, 0.0f);
	*(&iLocal_4 + 2768[63]) = Vector(-481,2767f, 143,5607f, 1910,075f);
	*(&iLocal_4 + 2768[63] + 12) = Vector(0.0f, -485,0387f, 0.0f);
	*(&iLocal_4 + 2768[73]) = Vector(-458,5962f, 139,8727f, 1918,713f);
	*(&iLocal_4 + 2768[73] + 12) = Vector(0.0f, -547,014f, 0.0f);
	*(&iLocal_4 + 2968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RandStand01", "rand_idle_stand", Vector(-456,2365f, 140,1866f, 1927,653f), Vector(0.0f, 466,1592f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 2968, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 2968, "ForceAllowRain", 1);
	*(&iLocal_4 + 2976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RandStand02", "rand_idle_stand", Vector(-471,7697f, 142,5741f, 1898,144f), Vector(0.0f, 214,0517f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 2976, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 2976, "ForceAllowRain", 1);
	*(&iLocal_4 + 2984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RandStand03", "rand_idle_stand_nospawn", Vector(-459,0197f, 139,864f, 1911,736f), Vector(0.0f, -84,83068f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 2984, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 2984, "ForceAllowRain", 1);
	*(&iLocal_4 + 2992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CabinLean01", "Rand_Idle_NearWall_nospawn", Vector(-458,0344f, 140,1605f, 1931,182f), Vector(0.0f, 367,0306f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 2992, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 2992, "ForceAllowRain", 1);
	*(&iLocal_4 + 3000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nRandSit01", "Rand_Idle_Sit_Ground_nospawn", Vector(-461,8961f, 140,1949f, 1921,04f), Vector(0.0f, 242,0531f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3000, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 3000, "ForceAllowRain", 1);
	*(&iLocal_4 + 3008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nRandSit02", "Rand_Idle_Sit_Ground_nospawn", Vector(-466,1379f, 142,6784f, 1900,161f), Vector(0.0f, -179,7819f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3008, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 3008, "ForceAllowRain", 1);
	*(&iLocal_4 + 3016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nRandSit03", "Rand_Idle_Sit_Ground_nospawn", Vector(-480,5651f, 142,9046f, 1918,003f), Vector(0.0f, 675,2524f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3016, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 3016, "ForceAllowRain", 1);
	*(&iLocal_4 + 3024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CleanRifle", "sit_cleanrifle_loop", Vector(-455,6622f, 139,545f, 1919,1f), Vector(0.0f, -48,19163f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3024, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 3024, "ForceAllowRain", 1);
	*(&iLocal_4 + 3032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "StandGunTricks", "stand_guntricks_e_any", Vector(-456,2991f, 140,1866f, 1929,427f), Vector(0.0f, 88,81544f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3032, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 3032, "ForceAllowRain", 1);
	*(&iLocal_4 + 3040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SitStump", "stool_sit_attach_indef", Vector(-474,5387f, 142,5983f, 1904,128f), Vector(0.0f, 243,0905f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3040, "ForceAllowSun", 1);
	DECOR_SET_BOOL(&iLocal_4 + 3040, "ForceAllowRain", 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerCabinCover", Vector(-457,5578f, 140,2759f, 1926,835f), Vector(0.0f, 0,6774886f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionCabinCover", Vector(-459,1304f, 140,2677f, 1926,851f), Vector(0.0f, 0,7153695f, 0.0f), 4);
	*(&iLocal_4 + 3048) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Cover01", Vector(-452,4309f, 139,6427f, 1917,039f), Vector(0.0f, 149,7951f, 0.0f), 4);
	*(&iLocal_4 + 3056) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Cover02", Vector(-461,5339f, 140,5394f, 1914,956f), Vector(0.0f, -173,8902f, 0.0f), 4);
	*(&iLocal_4 + 3064) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Cover03", Vector(-462,6774f, 142,6554f, 1898,57f), Vector(0.0f, -181,6498f, 0.0f), 4);
	*(&iLocal_4 + 3072) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Cover04", Vector(-483,1657f, 143,5607f, 1918,008f), Vector(0.0f, -111,2498f, 0.0f), 4);
}

var D "ËD8ÔBé4D aD8`LBÅPD ¨/D8&BÃzD ûD8B°¤D¡QD7â±B¹ÅD¡¨D7ÆB·OD¢ZD7°B»èD¢¡÷D7xB·ÀD£$D7ïB¼D£y¯,:B°:¯oNastasAlleyPath  p   D;6ÌBúkD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x1EF97 / 126871
{
	PatchTrap6();
	PatchTrapA();
	StackVal->f_15061 = StackVal;
	(*StackVal)[StackVal66] = StackVal;
	PatchRet();
	*StackVal = StackVal;
	StackVal->f_41896 = StackVal;
	6.0f->f_14980 = StackVal;
	PatchRet();
	*(StackVal + 66) = StackVal;
	StackVal->f_41898 = StackVal;
	((StackVal / StackVal))->f_14883 = StackVal;
	*(StackVal - 25350) = StackVal;
	StackVal->f_41900 = StackVal;
}

struct<8> BÏPQD¾?CÙQBÑ.íD¿+dC×GBÓÚDÀòCÒÜKBØ±>DÂÄCÎñ/BÙ·qDÄ ¶CÊ§BÙe(DÅxCÈEúBÙFDÆP­CÆbBÙlDÇZCÅ¢,BÙåëDÈ³RCÅO¯BÚ:TDÉ³~CÄ­"BÚÀDË3LCÃBÚçDÌ,UCÁäØBÚFDÍ`C¿NZBÚhÖDÎqzC¼pBÚ;YDÏ2ÌC·VBÚvDÏë1C®fuBÛp0DÑ;C¤#BÞÅUDÒC¸Bâ FDÓùUCaBãµ(DÔê\CF¬Bä~ªDÕ¥QCå(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66) //Position: 0x1F5DB / 128475
{
}

struct<8> 	DäbSÂÖÆÞBíTDäê¡ÂåkBîIjDå]ãÂú/QBïEÎDæïÃÉBïDæyÃNBðáDçî,:B0°:¯oToBearClaw   p  ÂëÎÉBî¡Då¦òÃ,8BïNDçgÃ1BìúDèàÃ"é%BëDé±Ã,²QBë¶æDë;Ã7xïBê2óDì¶ÃFRBç¿cDîpÃSÁBæð¼DïqÃaÀaBçÔDðmdÃqNBéþkDðçýÃgB(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94) //Position: 0x1F88A / 129162
{
	StackVal->f_61760 = StackVal;
	itos(StackVal, StackVal, 195);
	return StackVal, StackVal;
}

var BøÝDñÃX¬Bö×Dñ¹ÃfBóôADñ©×ÃfBòkDñ¢!ÃcBð(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, struct<50339> Param68) //Position: 0x200AF / 131247
{
	int iVar17021;
	
	PatchTrap1();
	StackVal->f_61818 = StackVal;
	return (*StackVal)[StackVal50050];
	*StackVal = StackVal;
	3->f_61773 = StackVal - 4672;
	Unknown_Function();
	2->f_61711 = &iLocal_84 - 5268;
	return StackVal, StackVal, StackVal;
}

struct<8> D8BÃ£D¤.<D8BÂèD¤±D8¡BÂ%D¤]D8©ÚBÁD£þD8¾ÝB¼àD£âkD8Ù;B¼D£ÌD8(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x208CF / 133327
{
	var uVar16983;
	var uVar17396;
	
	1->f_41917 = StackVal - 25407;
	StackVal->f_14636 = StackVal;
	StackVal =  };
}

void D£D>iöB ]D¢Ñ,:Bh°:¯oPlayerPullUpPath p   <D8B³ÜD¤ÀsD8B³ÜD¤®*D8$rB³ÜD¤<D8*TB³ÜD¤/D82B³ÜD¤r,:Bp°(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x20A27 / 133671
{
	PushArrayP();
	*(&iLocal_4 + 3192) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "CompanionPullUpPath");
	return;
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

int Function_571() //Position: 0x20B54 / 133972
{
	iLocal_1549 = 1;
	return 1;
}

int Function_572() //Position: 0x20B5F / 133983
{
	Function_297(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_573() //Position: 0x20B74 / 134004
{
	if (!iLocal_1549)
	{
		Function_547();
	}
	return 1;
}

int Function_574() //Position: 0x20B85 / 134021
{
	if (Function_548())
	{
		if (!IS_ACTOR_VALID(&bLocal_1431))
		{
			Function_472();
			Function_511(0);
		}
		if (!IS_ACTOR_VALID(&iLocal_1437))
		{
			Function_512();
			Function_509(0);
		}
		if (!IS_ACTOR_VALID(&bLocal_1435))
		{
			Function_563();
			Function_562(0);
		}
	}
	Function_336(&iLocal_1064);
	Function_336(&iLocal_1070);
	return 1;
}

int Function_575() //Position: 0x20BD6 / 134102
{
	if ((Function_302() && Function_576()) && Function_343(Global_46914[0]))
	{
		Function_564();
		uLocal_1423 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_804, "Anthro01Posse"));
		if (Function_423(&bLocal_1429, 1))
		{
			TELEPORT_ACTOR_WITH_HEADING(Function_564(), &bLocal_1429, *(&iLocal_4 + 1432[93]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1429, -1.0f, 0, 0);
		}
		CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(*(&iLocal_4 + 1432[03]), *(&iLocal_4 + 1432[03] + 12));
		Function_237(&iLocal_1487);
		return 1;
	}
	if (Function_333(&iLocal_1487) < 2.0f)
	{
		Function_237(&iLocal_1487);
	}
	return 0;
}

int Function_576() //Position: 0x20C7E / 134270
{
	return 1;
}

int Function_577() //Position: 0x20C85 / 134277
{
	bool bVar0;
	
	Function_578();
	iLocal_1549 = 0;
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(744,001f, 78,306f, 1276,718f), -242,289f, 1, 1, 1);
	Function_329(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_804, "Cutscene01Vol01", 2,802597E-45f, Vector(744,062f, 79,494f, 1276,893f), Vector(0.0f, 0.0f, 0.0f), Vector(3,393f, 3,042f, 4,933f));
	Function_327(StackVal, &uLocal_804, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	Function_237(&iLocal_1487);
	return 1;
}

void Function_578() //Position: 0x20D22 / 134434
{
	return;
}

void Function_579() //Position: 0x20D28 / 134440
{
	Function_321(&iLocal_1064, "anthro01", 10, 0);
	Function_321(&iLocal_1070, "waving_on_horse", 5, 0);
	Function_321(&iLocal_1070, "custom/waving_on_horse", 8, 0);
	Function_321(&iLocal_1080, "custom/comp_waiting", 8, 0);
	Function_321(&iLocal_1080, "comp_waiting", 5, 0);
	Function_321(&iLocal_1090, "dead_ground_male", 5, 0);
	Function_321(&iLocal_1096, "dead_ground_male", 5, 0);
	Function_321(&iLocal_1102, "p_bat_barrel04x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crate02x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crate03x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crate04x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crate05x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crate08x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crate09x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crateStack01x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_crateStack02x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_flourSack01x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_flourSack02x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_tent03x", 0, 0);
	Function_321(&iLocal_1102, "p_bat_wagon03x", 0, 0);
	Function_321(&iLocal_1102, "p_gen_campfire02x", 0, 0);
	Function_321(&iLocal_1102, "p_gen_campfire03x", 0, 0);
	Function_321(&iLocal_1102, "p_gen_campfire04x", 0, 0);
	Function_321(&iLocal_1102, "p_gen_campfireCombined01x", 0, 0);
	Function_321(&iLocal_1102, "p_gen_tent01x", 0, 0);
	Function_321(&iLocal_1102, "dead_ground_male", 5, 0);
	Function_321(&iLocal_1180, "p_bat_barrel04x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crate02x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crate03x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crate04x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crate05x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crate08x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crate09x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crateStack01x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_crateStack02x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_flourSack01x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_flourSack02x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_tent03x", 0, 0);
	Function_321(&iLocal_1180, "p_bat_wagon03x", 0, 0);
	Function_321(&iLocal_1180, "p_gen_campfire02x", 0, 0);
	Function_321(&iLocal_1180, "p_gen_campfire03x", 0, 0);
	Function_321(&iLocal_1180, "p_gen_campfire04x", 0, 0);
	Function_321(&iLocal_1180, "p_gen_campfireCombined01x", 0, 0);
	Function_321(&iLocal_1180, "p_gen_tent01x", 0, 0);
	Function_321(&iLocal_1180, "dead_ground_male", 5, 0);
	Function_321(&iLocal_1258, "p_bat_barrel04x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crate02x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crate03x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crate04x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crate05x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crate08x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crate09x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crateStack01x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_crateStack02x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_flourSack01x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_flourSack02x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_tent03x", 0, 0);
	Function_321(&iLocal_1258, "p_bat_wagon03x", 0, 0);
	Function_321(&iLocal_1258, "p_gen_campfire02x", 0, 0);
	Function_321(&iLocal_1258, "p_gen_campfire03x", 0, 0);
	Function_321(&iLocal_1258, "p_gen_campfire04x", 0, 0);
	Function_321(&iLocal_1258, "p_gen_campfireCombined01x", 0, 0);
	Function_321(&iLocal_1258, "p_gen_tent01x", 0, 0);
	Function_321(&iLocal_1258, "dead_ground_male", 5, 0);
	return;
}

void Function_580(int iParam0, bool bParam1) //Position: 0x21430 / 136240
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_586(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_292(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
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
	if (!Function_292(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_216();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_255();
	Function_286();
	Function_253("");
	Function_585(0);
	Function_584();
	Function_208();
	Function_207();
	ENABLE_JOURNAL_REPLAY(0);
	Function_583();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_303(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_348(0, 0x40400000);
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
	Function_582(13);
	Function_582(14);
	Function_582(25);
	Function_582(24);
	Function_582(12);
	Function_582(27);
	Function_582(26);
	Function_582(15);
	Function_581();
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

void Function_581() //Position: 0x21870 / 137328
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

void Function_582(int iParam0) //Position: 0x218F5 / 137461
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_583() //Position: 0x21915 / 137493
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

void Function_584() //Position: 0x2195B / 137563
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_585(int iParam0) //Position: 0x21971 / 137585
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_211())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_586(int iParam0, int iParam1) //Position: 0x219AA / 137642
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
			Function_587(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_587(struct<113> Param0) //Position: 0x21A31 / 137777
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

void Function_588() //Position: 0x21A8F / 137871
{
	return;
}

bool Function_589(int iParam0) //Position: 0x21A95 / 137877
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_590(struct<25> Param0) //Position: 0x21AB3 / 137907
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
			Function_591(&Param0, 1);
			return 1;
		}
	}
	Function_591(&Param0, 0);
	return 0;
}

void Function_591(struct<25> Param0) //Position: 0x21B3F / 138047
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

bool Function_592(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x21B6A / 138090
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
		Function_591(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_611(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_610(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_610(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_596(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_591(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_595(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_594(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_595(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_593(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_253(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_594(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_591(&Param2, 0);
	return 0;
}

void Function_593(char* cParam0) //Position: 0x21F80 / 139136
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

void Function_594(struct<25> Param0) //Position: 0x22074 / 139380
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

void Function_595(bool bParam0) //Position: 0x220EC / 139500
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_596(struct<57> Param0) //Position: 0x22110 / 139536
{
	int iVar0;
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
			return Function_607(&Param0, &uParam1, &iVar1, &iParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_600(&Param0, &uParam1, &iParam2, iParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, iVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_607(&Param0, &uParam1, &iVar1, &iParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_597(&Param0, bVar2);
					}
				}
				iVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_607(&Param0, &uParam1, &iVar1, &iParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_597(&Param0, bVar2);
						}
					}
				}
				iVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_597(int iParam0, bool bParam1) //Position: 0x22281 / 139905
{
	int iVar0;
	int iVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			iVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_599(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", iVar0);
				bParam1 = Function_598(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			iVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			iVar1 = (iVar1 - 1);
			if (iVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_599(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", iVar1);
				bParam1 = Function_598(256);
			}
		}
	}
	return bParam1;
}

bool Function_598(int iParam0) //Position: 0x223BD / 140221
{
	return 2 | iParam0;
}

int Function_599(int iParam0) //Position: 0x223C7 / 140231
{
	return 4 | iParam0;
}

int Function_600(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x223D1 / 140241
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
				iParam3 = Function_606(&iParam0, &iParam1, bParam4);
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
			return Function_598(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_601(&iParam0, &iParam1, 0, bParam4);
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
			return Function_598(16);
		}
	}
	return 0;
}

int Function_601(int iParam0, vector3 vParam1) //Position: 0x2248C / 140428
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_605(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_604(iVar0, 3, 1, bParam3))
			{
				if (!Function_610(&iParam0, 8, 1))
				{
					return Function_603(64, 1024, bParam2);
				}
			}
			return Function_602(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_604(iVar0, 2, 1, bParam3))
			{
				if (!Function_610(&iParam0, 32, 1))
				{
					return Function_603(64, 1024, bParam2);
				}
			}
			return Function_602(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_604(iVar0, 1, 1, bParam3))
			{
				if (!Function_610(&iParam0, 64, 1))
				{
					return Function_603(64, 1024, bParam2);
				}
			}
			return Function_602(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_604(iVar0, 3, 1, bParam3))
			{
				if (!Function_610(&iParam0, 128, 1))
				{
					return Function_603(64, 1024, bParam2);
				}
			}
			return Function_602(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_604(iVar0, 1, 1, bParam3))
			{
				if (!Function_610(&iParam0, 1024, 1))
				{
					return Function_603(64, 1024, bParam2);
				}
			}
			return Function_602(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_604(iVar0, 1, 1, bParam3))
			{
				if (!Function_610(&iParam0, 1024, 1))
				{
					return Function_603(64, 1024, bParam2);
				}
			}
			return Function_602(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_602(int iParam0, int iParam1, bool bParam2) //Position: 0x22654 / 140884
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_603(int iParam0, int iParam1, bool bParam2) //Position: 0x22669 / 140905
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_604(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2267E / 140926
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_605(int iParam0) //Position: 0x2269B / 140955
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

int Function_606(var uParam0, vector3 vParam1) //Position: 0x2270E / 141070
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_605(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_604(iVar0, 3, 1, bParam2))
			{
				if (!Function_610(&uParam0, 8, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000009:
			if (Function_604(iVar0, 3, 1, bParam2))
			{
				if (!Function_610(&uParam0, 8, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x0000006E:
			if (Function_604(iVar0, 2, 1, bParam2))
			{
				if (!Function_610(&uParam0, 16, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x0000005B:
			if (Function_604(iVar0, 2, 1, bParam2))
			{
				if (!Function_610(&uParam0, 32, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000031:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&uParam0, 64, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000007:
			if (Function_604(iVar0, 3, 1, bParam2))
			{
				if (!Function_610(&uParam0, 128, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000008:
			if (Function_604(iVar0, 2, 1, bParam2))
			{
				if (!Function_610(&uParam0, 256, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000014:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&uParam0, 512, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000018:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&uParam0, 512, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000057:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&uParam0, 1024, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000058:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&uParam0, 1024, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_607(struct<65> Param0) //Position: 0x22937 / 141623
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
						return Function_606(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_610(&Param0, 2, 1))
					{
						return Function_599(8);
					}
					return Function_598(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_610(&Param0, 4, 1))
					{
						return Function_599(16);
					}
					return Function_598(16);
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
							return Function_601(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_610(&Param0, 2, 1))
						{
							return Function_599(128);
						}
						return Function_598(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_610(&Param0, 4, 1))
						{
							return Function_599(256);
						}
						return Function_598(256);
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
						return Function_601(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_610(&Param0, 2, 1))
					{
						return Function_599(8);
					}
					return Function_598(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_610(&Param0, 4, 1))
					{
						return Function_599(16);
					}
					return Function_598(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_609(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, 0) != &Global_54076)
				{
					if (!Function_610(&Param0, 2, 1))
					{
						return Function_599(8);
					}
					return Function_598(8);
				}
				if (!Function_610(&Param0, 4, 1))
				{
					return Function_599(16);
				}
				return Function_598(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_601(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_608(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_598(128);
							}
							if (!Function_610(&Param0, 2, 1))
							{
								return Function_599(8);
							}
							return Function_598(8);
						}
						if (iParam4 == 2)
						{
							if (Function_608(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_598(256);
							}
							if (!Function_610(&Param0, 4, 1))
							{
								return Function_599(16);
							}
							return Function_598(16);
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

bool Function_608(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x22C1D / 142365
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

int Function_609(int iParam0, vector3 vParam1) //Position: 0x22CEB / 142571
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_605(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_604(iVar0, 2, 1, bParam2))
			{
				if (!Function_610(&iParam0, 16, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x0000005B:
			if (Function_604(iVar0, 2, 1, bParam2))
			{
				if (!Function_610(&iParam0, 32, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000057:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&iParam0, 1024, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		case 0x00000058:
			if (Function_604(iVar0, 1, 1, bParam2))
			{
				if (!Function_610(&iParam0, 1024, 1))
				{
					return Function_599(64);
				}
			}
			return Function_598(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_610(struct<69> Param0) //Position: 0x22E0D / 142861
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(iParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, iParam1);
}

int Function_611(bool bParam0) //Position: 0x22E37 / 142903
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

void Function_612(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x22E6D / 142957
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

