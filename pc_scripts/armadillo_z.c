//Decompiled with MagicRDR v1.0
//Function Count : 276
//Statics Count : 1340
//Natives Count : 454
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
	var uLocal_262 = 1;
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
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 4;
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
	var uLocal_302 = 3;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 2;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 3;
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
	var uLocal_334 = 6;
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
	var uLocal_364 = 2;
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
	var uLocal_392 = 4;
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
	var uLocal_406 = 2;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 1;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 2;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 4;
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
	var uLocal_440 = 4;
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
	var uLocal_462 = 9;
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
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 5;
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
	var uLocal_530 = 3;
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
	var uLocal_544 = 2;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 3;
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
	var uLocal_564 = 2;
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
	int iLocal_838 = 1;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844[1] = { 0 };
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 27;
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
	var uLocal_1012 = 40;
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
	char[] cLocal_1334[4] = 0;
	var uLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_275(&cVar0, 3);
	Function_274();
	if (StackVal && (((((!Global_6666 && iScriptParam_0 == Global_46838[1]) && iScriptParam_0 == Global_46894[1]) && iScriptParam_0 == Global_46894[2]) && iScriptParam_0 == Global_46914[1]) && iScriptParam_0 == Global_46796[0]) == 5)
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
						Function_267(&iLocal_13, iScriptParam_0, 0);
					}
					else
					{
						Function_266(iScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_264())
				{
					Function_263();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_262())
				{
					Function_261();
					Function_260(&(Global_43791[iScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_257())
				{
					Function_255(iScriptParam_0);
					if (bLocal_177)
					{
						Function_253(&iLocal_13, Function_254(), iScriptParam_0);
						Function_252(&iLocal_13, Function_254());
					}
					Function_260(&(Global_43791[iScriptParam_0]), 16);
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
				Function_251(&uLocal_9);
				Function_249();
				Function_247(iScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_246() && Function_245(Global_44085[iScriptParam_09])) && Function_244(&iLocal_13))
				{
					Function_240();
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
					Function_228(&iLocal_13, iScriptParam_0, Function_254());
				}
				Function_227(iScriptParam_0);
				Function_226();
				Function_225();
				Function_260(&(Global_43791[iScriptParam_0]), 8);
				if (Function_224(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_223(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_222(iScriptParam_0);
				Function_221();
				Function_220(iScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_215(iScriptParam_0);
				Function_214(64);
				Function_260(&(Global_43791[iScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_213(Function_254(), iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_212(&cVar0, 5.0f);
				Function_260(&(Global_43791[iScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_205(iScriptParam_0);
				if (Function_224(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_177)
				{
					Function_88(&iLocal_13, iScriptParam_0);
				}
				Function_51(&uLocal_9, &uLocal_848, Function_87(), iScriptParam_0);
				Function_47(&uLocal_1012, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_177)
	{
		Function_30(&iLocal_13, iScriptParam_0);
	}
	Function_25(iScriptParam_0);
	Function_23();
	Function_22();
	Function_21();
	Function_13(&uLocal_9, &uLocal_848);
	Function_12(&uLocal_1012);
	Function_10();
	Function_6(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_214(64);
	Function_223(&(Global_43791[iScriptParam_0]), 32);
	Function_223(&(Global_43791[iScriptParam_0]), 64);
	Function_223(&(Global_43791[iScriptParam_0]), 8);
	Function_223(&(Global_43791[iScriptParam_0]), 512);
	Function_223(&(Global_43791[iScriptParam_0]), 16);
	Function_223(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_212(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C9 / 969
{
	SET_DUST_LEVEL(2);
	Function_2(&iLocal_838);
	return;
}

void Function_2(int iParam0) //Position: 0x3DA / 986
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

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x402 / 1026
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

void Function_4(struct<13> Param0) //Position: 0x54D / 1357
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x56A / 1386
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x588 / 1416
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

void Function_7(int iParam0) //Position: 0x5BE / 1470
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_8(int iParam0) //Position: 0x5E0 / 1504
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x5F6 / 1526
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x60C / 1548
{
	if (IS_OBJECT_VALID(&cLocal_1334))
	{
		DESTROY_OBJECT(&cLocal_1334);
	}
	Function_11();
	return;
}

void Function_11() //Position: 0x626 / 1574
{
	RELEASE_LAYOUT_REF(&iLocal_288);
	return;
}

void Function_12(struct<4>[] Param0) //Position: 0x633 / 1587
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

void Function_13(var uParam0, vector3[] vParam1) //Position: 0x698 / 1688
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

void Function_14(int iParam0, int iParam1, int iParam2) //Position: 0x6F5 / 1781
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

void Function_15(int iParam0, int iParam1, bool bParam2) //Position: 0x7DF / 2015
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

void Function_16() //Position: 0x95E / 2398
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_17(int iParam0) //Position: 0x96A / 2410
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

void Function_18(int iParam0) //Position: 0x9B4 / 2484
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

void Function_19(struct<17> Param0) //Position: 0x9FA / 2554
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_20(struct<17> Param0) //Position: 0xA17 / 2583
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21() //Position: 0xA35 / 2613
{
	return;
}

void Function_22() //Position: 0xA3B / 2619
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 25);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 20);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 11);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 3);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 8);
	return;
}

void Function_23() //Position: 0xB7C / 2940
{
	Function_24();
	return;
}

void Function_24() //Position: 0xB85 / 2949
{
	DESTROY_OBJECT(&iLocal_178 + 416);
	DESTROY_OBJECT(&iLocal_178 + 424);
	DESTROY_OBJECT(&iLocal_178 + 432);
	Function_2(&iLocal_178 + 8);
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_25(int iParam0) //Position: 0xBB3 / 2995
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_224(&(Global_43791[iParam0]), 0x20000000))
	{
		Function_223(&(Global_43791[iParam0]), 0x20000000);
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
		if (Function_27(iParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_26(1));
		}
	}
	return;
}

bool Function_26(int iParam0) //Position: 0xC6D / 3181
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(int iParam0) //Position: 0xC89 / 3209
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_46894[2] || iParam0 != Global_46894[1]) || iParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[iParam0];
	return (((Function_29(uVar0, 0x1000000) || Function_29(uVar0, 0x2000000)) || Function_29(uVar0, 0x4000000)) || Function_28(iParam0));
}

bool Function_28(int iParam0) //Position: 0xCFC / 3324
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(var uParam0, int iParam1) //Position: 0xD19 / 3353
{
	return (uParam0 && iParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xD26 / 3366
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_9(iParam1) || Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_33(&iParam0, &Global_11014, iParam1);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_33(&iParam0, &Global_11146, iParam1);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_33(&iParam0, &Global_11120, iParam1);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_33(&iParam0, &Global_11222, iParam1);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_33(&iParam0, &Global_11284, iParam1);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_33(&iParam0, &Global_11492, iParam1);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_33(&iParam0, &Global_11544, iParam1);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_33(&iParam0, &Global_11646, iParam1);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_33(&iParam0, &Global_11704, iParam1);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_33(&iParam0, &Global_11752, iParam1);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_33(&iParam0, &Global_11726, iParam1);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_33(&iParam0, &Global_11836, iParam1);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_33(&iParam0, &Global_11946, iParam1);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_33(&iParam0, &Global_11988, iParam1);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_33(&iParam0, &Global_12048, iParam1);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_33(&iParam0, &Global_12150, iParam1);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_33(&iParam0, &Global_11398, iParam1);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_33(&iParam0, &Global_12284, iParam1);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_33(&iParam0, &Global_12342, iParam1);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_33(&iParam0, &Global_12422, iParam1);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_33(&iParam0, &Global_12392, iParam1);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_33(&iParam0, &Global_12760, iParam1);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_33(&iParam0, &Global_12714, iParam1);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_33(&iParam0, &Global_12644, iParam1);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_33(&iParam0, &Global_12488, iParam1);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_33(&iParam0, &Global_12482, iParam1);
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
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", 0);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_25(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_6623)
	{
		Function_31(iParam1);
	}
	return;
}

void Function_31(int iParam0) //Position: 0x108D / 4237
{
	var uVar0;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam0);
	if (Function_27(iParam0))
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

int Function_32(int iParam0) //Position: 0x10F4 / 4340
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

void Function_33(vector3 vParam0) //Position: 0x143C / 5180
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
			Function_46(&(Param1[iVar02]), 4);
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
	if (!Function_27(iParam2))
	{
		Global_21684[&vParam0 + 6247].f_32 = 0.0f;
		if (!Function_45(Global_119934, 0x4000000))
		{
			Function_39(&Global_54076, 0x4000000, 1, 0);
		}
	}
	else if (Function_29(&vParam0 + 608, 32))
	{
		if (!Function_45(Global_119934, 8388608))
		{
			Function_39(&Global_54076, 8388608, 1, 0);
		}
	}
	else if (!Function_45(Global_119934, 4194304))
	{
		Function_39(&Global_54076, 4194304, 1, 0);
	}
	Function_37(&vParam0, 0, 0);
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
	Function_34(iParam2, Function_27(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_26(1));
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x171C / 5916
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (bParam1 && Function_36("noZombieFireArt"))
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
			if (!Function_35(5))
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

bool Function_35(int iParam0) //Position: 0x1E72 / 7794
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x1E87 / 7815
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1EA9 / 7849
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
				if (!Function_38(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_38(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1F32 / 7986
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_39(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1F52 / 8018
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_41(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_40(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_40(char* cParam0) //Position: 0x1FC7 / 8135
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

bool Function_41(int iParam0, var uParam1, int iParam2) //Position: 0x2001 / 8193
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
		if (Function_43(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_42(uVar0))
		{
			case 0x00000002:
				if (!Function_45(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_42(char* cParam0) //Position: 0x207D / 8317
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

int Function_43(int iParam0) //Position: 0x211E / 8478
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_44(&iVar1, 2147483648);
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

void Function_44(int iParam0, int iParam1) //Position: 0x215B / 8539
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x2171 / 8561
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2184 / 8580
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_47(struct<4>[] Param0, bool bParam1) //Position: 0x219E / 8606
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
	while (iVar0 < Function_50((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_49(&(Param0[iVar04]), 16384);
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
								Function_48(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_49(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
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
								Function_48(&(Param0[iVar04]), 1);
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
							Function_48(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_49(&(Param0[iVar04]), 1);
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
					Function_48(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_48(&(Param0[iVar04]), 1);
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
					Function_49(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_49(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_49(&(Param0[iVar04]), 32768);
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

void Function_48(struct<13> Param0) //Position: 0x25BF / 9663
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_49(struct<13> Param0) //Position: 0x25D2 / 9682
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_50(int iParam0, int iParam1) //Position: 0x25EF / 9711
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_51(vector3 vParam0) //Position: 0x2601 / 9729
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_26(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_52(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_52(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x268B / 9867
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(&vParam0))
	{
		return 0;
	}
	Function_223(&(Global_43791[iParam2]), 4194304);
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
								Function_84(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_83(&vParam0, 8);
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
								Function_83(&vParam0, 4);
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
				if ((((((bVar1 && Function_9(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_81(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
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
								Function_83(&vParam0, 16);
								Function_73(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
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
				Function_83(&vParam0, 2);
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
				if (!Function_224(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_20(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_72(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_83(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_9(iParam2))
					{
						Function_71(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_53(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_53(int iParam0) //Position: 0x2AE3 / 10979
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_224(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_260(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_58(473, 1, 0, 0);
		iVar0 = Function_57(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_58(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_58(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_58(476, 1, 0, 0);
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
		Function_56(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_56(7, 30);
	}
	if (Function_55(473) <= Function_54(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_54(int iParam0) //Position: 0x2BD4 / 11220
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_55(int iParam0) //Position: 0x2C11 / 11281
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_56(int iParam0, int iParam1) //Position: 0x2C4A / 11338
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

var Function_57(int iParam0) //Position: 0x2CB4 / 11444
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

int Function_58(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2D0C / 11532
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
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_59(iParam0);
	return 1;
}

void Function_59(bool bParam0) //Position: 0x2F34 / 12084
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

void Function_60(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2FD2 / 12242
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_54(390))), 32);
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
					fVar19 = (Function_55(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_55(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_65(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_61(), &Var9);
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

var Function_61() //Position: 0x3610 / 13840
{
	int iVar0;
	
	return &iVar0;
}

var Function_62(int iParam0) //Position: 0x3619 / 13849
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x362A / 13866
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0) //Position: 0x3721 / 14113
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x373C / 14140
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_50(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x37A3 / 14243
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x37B5 / 14261
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x38E9 / 14569
{
	return Global_55480[iParam016].f_96;
}

void Function_69(int iParam0) //Position: 0x38F8 / 14584
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

int Function_70(int iParam0, float fParam1, bool bParam2) //Position: 0x3A92 / 14994
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

void Function_71(var uParam0, int iParam1) //Position: 0x3CD6 / 15574
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(int iParam0, var uParam1, int iParam2) //Position: 0x3CE3 / 15587
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x3D0D / 15629
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_80(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_79(iParam1))
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
	if (!Function_76(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_74();
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

void Function_74() //Position: 0x3FC0 / 16320
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_75(&uVar0, &uVar1);
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

void Function_75(var uParam0, int iParam1) //Position: 0x4035 / 16437
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

bool Function_76(bool bParam0) //Position: 0x406B / 16491
{
	if (Function_81(256))
	{
		return 0;
	}
	if (Function_81(262144))
	{
		return 0;
	}
	if (Function_78())
	{
		return 0;
	}
	if (!Function_81(1))
	{
		return 0;
	}
	if (!Function_81(4096))
	{
		return 0;
	}
	if (bParam0 && Function_77(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_81(2048))
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

int Function_77(int iParam0) //Position: 0x40E1 / 16609
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x40F2 / 16626
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

bool Function_79(int iParam0) //Position: 0x410B / 16651
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x4121 / 16673
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x4136 / 16694
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x4154 / 16724
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

void Function_83(struct<17> Param0) //Position: 0x4203 / 16899
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4216 / 16918
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
			Function_85(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_15(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x4290 / 17040
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_18(iParam0);
	Function_17(&uVar0);
	PRINTNL();
	Function_15(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x42B9 / 17081
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

var Function_87() //Position: 0x42D9 / 17113
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(struct<82> Param0) //Position: 0x42EE / 17134
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
	int iVar19;
	var uVar20;
	var uVar21;
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
		Function_44(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_200(0, iParam1, 3);
		}
		if (!Function_29(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (iParam1 != Global_46914[1] || HUD_IS_FADED())
	{
		if (!Function_29(&Param0 + 608, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_198(1, 0));
			Function_197(&Param0 + 608, 0x20000000);
		}
		return;
	}
	if (Function_29(&Param0 + 608, 16))
	{
		Function_196(iParam1, 0.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_29(&Param0 + 608, 4))
	{
		return;
	}
	if (Global_6623 && !Function_29(&Param0 + 608, 4))
	{
		Function_197(&Param0 + 608, 4);
		Function_30(&Param0, iParam1);
		DECOR_SET_FLOAT(&Global_44085[iParam19] + 8, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_25(iParam1);
		return;
	}
	fVar0 = Function_192(Function_193(iParam1));
	fVar1 = Function_191(iParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (&Param0 + 616 == 4294967295)
	{
		*(&Param0 + 616) = Function_200(111, 111, 5);
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
				Function_190(&Param0 + 8[iVar35]);
			}
			iVar3++;
		}
		Function_189(&Param0);
		*(&Param0 + 376) = 7;
		return;
	}
	if (Function_188(Function_193(iParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_29(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[iParam19] + 32, 32);
			SET_MISSION_INFO(&cVar5, "");
			if (Function_29(&Param0 + 608, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_185(&Param0, 0);
				Function_190(&Param0 + 336);
				iVar13 = 0;
				while (StackVal < (iVar13 - 1))
				{
					Function_190(&Param0 + 8[iVar135]);
					iVar13++;
				}
				Function_197(&Param0 + 608, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_196(iParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0,5f);
				Function_184(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(&Global_54076, "nDecayRate", 3);
				*(&Param0 + 376) = 5;
			}
			else
			{
				Function_182();
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
				Function_177(&Param0, iParam1, fVar2);
			}
			if (!Function_29(&Param0 + 608, 131072))
			{
				if (&Param0 + 376 == 6 && &Param0 + 376 < 1)
				{
					if ((Global_6629 && !Function_29(&Param0 + 608, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_197(&Param0 + 608, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar14 = Function_191(iParam1);
						fVar15 = (fVar14 % 10.0f);
						fVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar16));
						UI_REFRESH("ZMeter");
					}
					if (((Function_29(&Param0 + 608, 32768) && !DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && &Param0 + 376 > 5)
					{
						Function_189(&Param0);
					}
				}
			}
		}
	}
	Function_175(&Param0, iParam1);
	if (Function_29(&Param0 + 608, 1024))
	{
		Function_174(&Param0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_99146)
	{
		if (!Function_29(&Param0 + 608, 16384))
		{
			Function_197(&Param0 + 608, 16384);
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 0);
				iVar17++;
			}
		}
	}
	else if (Function_29(&Param0 + 608, 16384))
	{
		Function_44(&Param0 + 608, 16384);
		iVar17 = 0;
		while (StackVal < (iVar17 - 1))
		{
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 1);
			iVar17++;
		}
	}
	if (Function_29(&Param0 + 608, 262144))
	{
		if (Function_244(&Param0))
		{
			Function_44(&Param0 + 608, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, iParam1, Param0);
			if (!Function_27(iParam1))
			{
				if (!Function_29(&Param0 + 608, 8))
				{
					Function_197(&Param0 + 608, 8);
					Function_171();
				}
			}
		}
	}
	if (Function_29(&Param0 + 608, 524288))
	{
		if (Function_171())
		{
			Function_197(&Param0 + 608, 8);
			Function_44(&Param0 + 608, 524288);
		}
	}
	switch (&Param0 + 376)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_45(Global_119934, 65536) || !Global_6606)) && Global_6629) && !Global_6628)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
				{
					DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
				}
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				if (Function_27(iParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_266(iParam1, 1);
					Function_157(iParam1);
					Function_195(0, 4294967295);
					Function_196(iParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[iParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_29(&Param0 + 608, 1))
					{
						Function_156(&Param0, iParam1);
						Function_155("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						*(&Param0 + 376) = 2;
					}
					else
					{
						*(&Param0 + 376) = 4;
					}
					Function_152("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_266(iParam1, 0);
					Function_157(iParam1);
					Function_197(&Param0 + 608, 2);
					Function_195(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					*(&Param0 + 632) = 1000.0f;
					*(&Param0 + 376) = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_146(&Param0 + 336, 1, &Param0 + 608))
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
				Function_114(&Param0, iParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(&Param0 + 336, "GET_US_AMMO_P", &Global_54076, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				*(&Param0 + 376) = 3;
			}
			break;
		
		case 0x00000003:
			iVar19 = 0;
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				uVar20 = &Param0 + 8[iVar175];
				if (IS_ACTOR_ALIVE(&uVar20))
				{
					if (Function_29((&Param0 + 8[iVar175])->f_32, 2))
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
						if (Function_146(&Param0 + 8[iVar175], 0, &Param0 + 8[iVar175] + 32))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
							uVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_103(&Param0 + 8[iVar175], uVar21);
							Function_44(&Param0 + 8[iVar175] + 32, 2);
							Function_197(&Param0 + 8[iVar175] + 32, 16);
						}
						iVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_29((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_44(&Param0 + 8[iVar175] + 32, 16);
						AI_CLEAR_DONT_HARM_ACTOR(&uVar20);
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						SET_MOVER_FROZEN(&uVar20, 0);
						RESET_ANIM_SET_FOR_ACTOR(&uVar20, 1);
						uVar22 = Vector(0.0f, 0.0f, 0.0f);
						Var24 = Vector(0.0f, 0.0f, 0.0f);
						GET_OBJECT_POSITION(&Param0 + 8[iVar175] + 8, &uVar22);
						GET_OBJECT_ORIENTATION(&Param0 + 8[iVar175] + 8, &Var24);
						TASK_PRIORITY_SET(&uVar20, 1);
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
						if (Function_102(&uVar20))
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
				PRINTINT(iVar19);
				PRINTNL();
			}
			if (iVar19 == 0)
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
			Function_184(1);
			if (Function_97(&Param0))
			{
				DECOR_SET_FLOAT(&Global_54076, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_96(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				*(&Param0 + 376) = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 600) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_196(iParam1, 300.0f);
			}
			else
			{
				Function_196(iParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_29(&Param0 + 608, 8))
			{
				Function_197(&Param0 + 608, 8);
				Function_171();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
			{
				DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
			}
			Function_95(iParam1);
			Function_94(&Param0);
			Function_185(&Param0, 1);
			Function_25(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_200(0, iParam1, 3);
			Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_197(&Param0 + 608, 512);
			if (!Function_29(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_91(Function_193(iParam1));
				Function_58(660, bVar43, 0, 0);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Function_267(&Param0, iParam1, 1);
			Function_253(&Param0, &Global_46715, iParam1);
			Function_252(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_244(&Param0))
			{
				if (!iParam1 != Global_46914[0])
				{
					Function_228(&Param0, iParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_228(&Param0, iParam1, &Global_46715);
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
				Function_114(&Param0, iParam1);
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				Function_266(iParam1, 1);
				Function_197(&Global_21684[Function_200(111, 111, 5)7] + 20, 4);
				Function_157(iParam1);
				Function_195(0, 4294967295);
				Function_196(iParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[iParam19] + 8);
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
					if (Function_29(Global_21684[&Param0 + 6247].f_24, 1))
					{
						Function_90(660, 1, 0);
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
						if ((!GET_LAST_ATTACKER(&iVar44) != &Global_54076 && &Param0 + 376 != 2) && !Function_29(&Param0 + 608, 8192))
						{
							Function_197(&Param0 + 608, 8192);
							Function_152("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar45 = 0;
							while (StackVal < (iVar45 - 1))
							{
								Function_190(&Param0 + 8[iVar455]);
								SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar455], 1);
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
			if (GET_LAST_ATTACKER(&iVar44) != &Global_54076 && !Function_29(&Param0 + 608, 0x4000000))
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
					Function_190(&Param0 + 8[iVar465]);
					SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar465], 1);
					MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8[iVar465], &Global_54076);
					iVar46++;
				}
				if (&Param0 + 376 <= 7)
				{
					if (&Param0 + 376 <= 5)
					{
						*(&Param0 + 376) = 4;
					}
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_200(0, iParam1, 3);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
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
			Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar47, Param0);
		}
	}
	return;
}

void Function_89(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80, var uParam81, var uParam82) //Position: 0x57D0 / 22480
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
	Function_197(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, fVar4)));
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x5827 / 22567
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
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_91(int iParam0) //Position: 0x5A24 / 23076
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_92(&iVar1, iVar0);
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
			if (!Function_29(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int[] iParam0) //Position: 0x5C0E / 23566
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

var Function_93(int iParam0) //Position: 0x603D / 24637
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

void Function_94(vector3 vParam0) //Position: 0x61C3 / 25027
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

void Function_95(int iParam0) //Position: 0x621D / 25117
{
	var uVar0;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_96(int iParam0) //Position: 0x6257 / 25175
{
	int iVar0;
	
	if (Function_29(iParam0, 1) && Function_29(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_97(int iParam0) //Position: 0x628B / 25227
{
	return Function_98(&iParam0 + 600);
}

int Function_98(int iParam0) //Position: 0x629A / 25242
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
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_61()));
	}
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_61()));
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
				bVar8 = (Function_29(iVar7, 1024) && iVar7 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
					iVar9 = SQUAD_GET_SIZE(&iParam0);
					if (iVar9 >= 6)
					{
						if (Function_100(StackVal, &uVar3, Global_54078) < 20.0f && !Function_38(&uVar3, 0x3f800000, 0x42960000, 1, 1, 0))
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
		Function_99(&uVar0);
		DESTROY_OBJECT(&uVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 2560);
		Function_260(&(Global_43791[Global_43789]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iVar10 = 0;
		while (iVar10 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar10);
			REFERENCE_ACTOR(&uVar11);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uVar11, &Global_44085[Global_437899] + 8, 1, 1);
			TASK_PRIORITY_SET(&uVar11, 0);
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

void Function_99(int iParam0) //Position: 0x64F1 / 25841
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

float Function_100(var uParam0, struct<2> Param1) //Position: 0x6548 / 25928
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_101(&uParam0);
		Var0 = Function_101(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_101(int iParam0) //Position: 0x65BF / 26047
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

bool Function_102(int iParam0) //Position: 0x662B / 26155
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

void Function_103(int iParam0, bool bParam1) //Position: 0x679C / 26524
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
	
	Function_113();
	Function_112();
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
	Function_58(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(&uVar3) || !IS_OBJECT_VALID(&uVar4))
	{
		SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_111(bParam1, 5.0f, 1);
		Function_190(&iParam0);
		Function_110(Global_43789, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(&uVar3, &Var6);
	uVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, uVar8, 1);
	SET_MOVER_FROZEN(&iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "DLC_give_ammo", 1);
	if (!Function_109(StackVal, &iParam0, Var6))
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
	TASK_PRIORITY_SET(&iParam0, 1);
	TASK_STAND_STILL(&iParam0, 3.0f, 0, 0);
	Function_104(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_111(bParam1, 5.0f, 1);
	Function_190(&iParam0);
	Function_110(Global_43789, 10.0f);
	return;
}

var Function_104(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6A96 / 27286
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_61(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_105(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x6B24 / 27428
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_108(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_107(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_106(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 1,6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 1,5f, 1, 0);
	return;
}

void Function_106(int iParam0, int iParam1) //Position: 0x6B8D / 27533
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

void Function_107(int iParam0, var uParam1) //Position: 0x6C1E / 27678
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

void Function_108(int iParam0, int iParam1) //Position: 0x6CAF / 27823
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

bool Function_109(var uParam0, struct<2> Param1) //Position: 0x6D45 / 27973
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

void Function_110(int iParam0, float fParam1) //Position: 0x6D80 / 28032
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", fVar0);
	return;
}

void Function_111(int iParam0, float fParam1, bool bParam2) //Position: 0x6DC4 / 28100
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	uVar0 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, iParam0);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, iParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(&Global_54076, uVar0);
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
		ACTOR_SET_WEAPON_AMMO(&Global_54076, uVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, iParam0, (fVar1 - fVar3), 0);
	}
	if (&bParam2)
	{
		bVar5 = FLOOR(fParam1);
		bVar5 = (bVar5 * 4294967295);
		if (iParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (iParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (iParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (iParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (iParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (iParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_112() //Position: 0x6F08 / 28424
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x6F1A / 28442
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x6F2F / 28463
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", 1);
	Function_117(StackVal, Global_54078, 1, &iParam0 + 336, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 336 + 16);
	}
	if (DECOR_GET_INT(&Global_44085[iParam19] + 8, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[iParam19] + 8, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[iParam19] + 8, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[iParam19] + 8, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[iParam19] + 8, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[iParam19] + 8, "ZP_NumPistols") != 0)
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
	Function_155("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_29(&iParam0 + 608, 8))
	{
		if (Function_171())
		{
			Function_197(&iParam0 + 608, 8);
		}
		else
		{
			Function_197(&iParam0 + 608, 524288);
		}
	}
	Function_197(&iParam0 + 608, 32);
	*(&iParam0 + 624) = Function_200(0, iParam1, 3);
	Function_197(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_115(&iParam0);
	return;
}

void Function_115(vector3 vParam0) //Position: 0x7237 / 29239
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
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
				*(&vParam0 + 8[iVar05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &vParam0 + 8[iVar05] + 24, &iVar1, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				iVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_116(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, iVar3, 1) <= 5.0f)
				{
					*(&vParam0 + 8[iVar05] + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(&iVar1, "nUC_NoAmmo"))
				{
					uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
					DECOR_SET_INT(&iVar1, "nUC_NoAmmo", &uVar5);
				}
				Function_197(&vParam0 + 8[iVar05] + 32, 2);
				uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iVar1, Function_61(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uVar6, &iVar1, Function_61(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar7 = ADD_BLIP_FOR_OBJECT(&uVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(&uVar7, 1);
				DECOR_SET_INT(&iVar1, "PauseMapBlip", &uVar7);
				SET_BLIP_NAME(&uVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar7, 1);
			}
			else
			{
				Function_110(Global_43789, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_116(int iParam0) //Position: 0x7505 / 29957
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

var Function_117(struct<2> Param0, bool bParam2, var uParam3, bool bParam4) //Position: 0x75C9 / 30153
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
	
	if (Function_145(StackVal, Param0))
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
		if (IS_ACTOR_VALID(&uParam3))
		{
			Function_144(&uParam3);
			uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_144(&uParam3), StackVal);
			VNORMALIZE(&uVar1);
			Global_53524.f_12 = UNK_0x9C40E671(&uVar1);
		}
		else
		{
			Global_53524.f_12 = Function_143(&Global_54076);
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
		if (!Function_142(&Global_53524, &Global_53524 + 12, &uVar3))
		{
			GET_VOLUME_CENTER(&uVar3, &Var4);
			if (Function_138(StackVal, Var4, &uVar3, &Var6, &Var8, 1))
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
	else if (!Function_142(&Global_53524, &Global_53524 + 12, &iVar12))
	{
		Global_53524.f_24 = Function_136(StackVal, Param0, 0.0f, 1);
		if (Function_9(Global_53524.f_24))
		{
			iVar12 = &Global_44085[Global_53524.f_249] + 8;
			GET_VOLUME_CENTER(&iVar12, &Var13);
			if (Function_138(StackVal, Var13, &iVar12, &Var15, &Var17, 0))
			{
				iVar19 = Function_135(StackVal, Var15, 1);
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
		Function_118();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_118() //Position: 0x79D6 / 31190
{
	Function_131();
	Function_130();
	Function_130();
	Function_129();
	Function_129();
	Function_128();
	Function_128();
	Function_125(0);
	Function_125(0);
	Function_123();
	Function_122();
	Function_121();
	Function_120();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_119();
	return;
}

void Function_119() //Position: 0x7A21 / 31265
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

void Function_120() //Position: 0x7B27 / 31527
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

void Function_121() //Position: 0x7B5A / 31578
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

void Function_122() //Position: 0x7CED / 31981
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

void Function_123() //Position: 0x7EA6 / 32422
{
	Function_124(&Global_42918, 1, 0);
	return;
}

void Function_124(struct<2317> Param0) //Position: 0x7EB4 / 32436
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
	
	uVar0 = Function_87();
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

struct<8> Function_125(int iParam0) //Position: 0x80D4 / 32980
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
					iVar2 = ((Function_127((50 + iVar4)) + Function_127((183 + iVar4))) + Function_127((90 + iVar4)));
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
	Function_126(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x817B / 33147
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
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_127(int iParam0) //Position: 0x8417 / 33815
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<8> Function_128() //Position: 0x8458 / 33880
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
		iVar2 = ((Function_127((50 + iVar3) + 15) + Function_127((183 + iVar3) + 15)) + Function_127((90 + iVar3) + 15));
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
	Function_126(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_129() //Position: 0x84E1 / 34017
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
			iVar2 = ((Function_127((50 + iVar3) + 8) + Function_127((183 + iVar3) + 8)) + Function_127((90 + iVar3) + 8));
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
	Function_126(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_130() //Position: 0x8578 / 34168
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
		iVar2 = ((Function_127((50 + iVar3)) + Function_127((183 + iVar3))) + Function_127((90 + iVar3)));
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
	Function_126(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_131() //Position: 0x85F7 / 34295
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_132(int iParam0, float fParam1, int iParam2) //Position: 0x8634 / 34356
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
	Function_70(iParam0, fParam1, 1);
	Function_69(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_60(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_133(int iParam0) //Position: 0x8840 / 34880
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x885A / 34906
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(struct<2> Param0, bool bParam2) //Position: 0x8870 / 34928
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

var Function_136(struct<2> Param0, float fParam2, int iParam3) //Position: 0x88DC / 35036
{
	int iVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	fVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_145(StackVal, Param0))
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
			else if (Function_137(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (!Function_224(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
			{
				iVar4 = 0;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > fVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					fVar3 = VDIST(Param0, Var1);
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

int Function_137(bool bParam0) //Position: 0x89DC / 35292
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

bool Function_138(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x8A34 / 35380
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
	
	if (Function_145(StackVal, Param0) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) < 0)
	{
		UNK_0xDF93BD7C(&uVar0);
		return 0;
	}
	fVar7 = -1.0f;
	bVar9 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, iVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((fVar7 > 0.0f || fVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &iParam2))
		{
			fVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, iVar1);
			bVar9 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(&uVar0);
	if (bVar9)
	{
		Function_140(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_140(StackVal, Param3) };
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
		Function_139(&uVar13);
		Var19 = Function_139(&uVar13);
		Function_139(&iVar16);
		Var21 = Function_139(&iVar16);
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

struct<8> Function_139(vector3 vParam0) //Position: 0x8BEE / 35822
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_140(vector3 vParam0) //Position: 0x8C10 / 35856
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x8C2E / 35886
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(float fParam0, var uParam1, int iParam2) //Position: 0x8C41 / 35905
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_224(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_224(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_224(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_224(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_224(&(Global_43791[Global_46866[4]]), 4))
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

var Function_143(int iParam0) //Position: 0x8E8F / 36495
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_144(int iParam0) //Position: 0x8E9B / 36507
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_145(vector3 vParam0) //Position: 0x8EAD / 36525
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x8EC5 / 36549
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(&iParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0 + 24) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076))) && !FIRE_IS_ACTOR_ON_FIRE(&iParam0)) && IS_ACTOR_ALIVE(&iParam0)) && !Function_148(&Global_54076, 0, 0))
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
		iVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iParam0));
		bVar0 = _GET_AMMO_AMOUNT(&Global_54076, iVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		if (Function_148(&Global_54076, 0, 0) || !IS_ACTOR_ALIVE(&iParam0))
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
			if (!Function_29(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_147(&Global_54076, &iParam0) > 3.0f)
				{
					Function_197(&iParam2, 65536);
					Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				uVar2 = Function_116(&iParam0);
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
		if (!Function_29(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_147(&Global_54076, &iParam0) > 3.0f)
			{
				Function_197(&iParam2, 65536);
				Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
		{
			uVar4 = Function_116(&iParam0);
			uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
			DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar5);
		}
		return 0;
	}
	if (!Function_148(&Global_54076, 0, 0))
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
			uVar6 = Function_116(&iParam0);
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

float Function_147(var uParam0, int iParam1) //Position: 0x92DB / 37595
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

bool Function_148(int iParam0, bool bParam1, bool bParam2) //Position: 0x93D0 / 37840
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
	if (Function_151(&iParam0))
	{
		return 1;
	}
	if (Function_150(&iParam0))
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
	if (Function_149())
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x9494 / 38036
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_150(int iParam0) //Position: 0x94AB / 38059
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_151(int iParam0) //Position: 0x94B7 / 38071
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x94C6 / 38086
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x9551 / 38225
{
	char* cVar0[16];
	
	if (!Function_154())
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

bool Function_154() //Position: 0x9590 / 38288
{
	if (Function_29(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x95AB / 38315
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
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_156(int iParam0, int iParam1) //Position: 0x9640 / 38464
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, 1);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_200(0, iParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", 1);
	return;
}

void Function_157(int iParam0) //Position: 0x9728 / 38696
{
	var uVar0;
	var uVar1;
	var uVar5;
	var uVar6;
	var uVar9;
	var uVar11;
	var uVar12;
	var uVar13;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_44085[iParam09] + 32);
	PRINTNL();
	if (Function_28(iParam0))
	{
		if ((iParam0 != Global_46838[1] || iParam0 != Global_46894[1]) || iParam0 != Global_46894[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8)));
			}
			GET_OBJECT_POSITION(&Global_44085[iParam09] + 8, &uVar1);
			uVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0, 2, 0);
			SET_BLIP_NAME(&uVar0, "Status_SafeZone");
			UNK_0xFF3DB575(&uVar0, 1);
			SET_BLIP_PRIORITY(&uVar0, 3);
			uVar5 = Global_43791[iParam0];
			Function_197(&uVar5, 0x8000000);
			Function_197(&uVar5, 0x10000000);
			Global_43791[iParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[iParam09] + 8, &uVar9);
			uVar6 = Function_162(&Global_44085[iParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_193(iParam0);
			uVar12 = Function_200(111, 111, 5);
			Function_161(uVar11, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_160(uVar11, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_158(uVar12);
			uVar13 = Global_43791[iParam0];
			Function_197(&uVar13, 0x1000000);
			Function_197(&uVar13, 0x10000000);
			Global_43791[iParam0] = uVar13;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x98E9 / 39145
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_159(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_159(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_159(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_159(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_159(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_159(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_159(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_159(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_159(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_159(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_159(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_159(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_159(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_159(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_159(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_159(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_159(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_159(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_159(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_159(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x9C53 / 40019
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9C77 / 40055
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

void Function_161(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0x9F96 / 40854
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

var Function_162(var uParam0, int iParam1, int iParam2) //Position: 0xA239 / 41529
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == iParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&uParam0, iParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0xA292 / 41618
{
	Function_169(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_169(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_169(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_164(&iParam0 + 384);
	return;
}

bool Function_164(struct<2>[] Param0) //Position: 0xA306 / 41734
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		Function_167(&(Param0[iVar02]), 16);
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
				Function_167(&(Param0[iVar02]), 1);
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
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
	Function_165();
	return 1;
}

void Function_165() //Position: 0xA6C8 / 42696
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_166() //Position: 0xA708 / 42760
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

void Function_167(struct<13> Param0) //Position: 0xA736 / 42806
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_168() //Position: 0xA749 / 42825
{
	if (!Function_26(128))
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

var Function_169(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA78B / 42891
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_170(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_167(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_170(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA7C9 / 42953
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_167(&(Param0[iVar02]), 4);
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

bool Function_171() //Position: 0xA898 / 43160
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

void Function_172(var uParam0, var uParam1, struct<82> Param2) //Position: 0xA991 / 43409
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
	iVar2 = Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &uParam0, 4294967295, 0);
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
				if (!Function_29(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, fVar18))))
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

var Function_173(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xAB1B / 43803
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_174(vector3 vParam0) //Position: 0xAB30 / 43824
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < (vParam0.z - 1))
	{
		if (Function_29((&vParam0 + 8[iVar15])->f_32, 1))
		{
			if (IS_ACTOR_ALIVE(&vParam0 + 8[iVar15]))
			{
				Var2 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&vParam0 + 8[iVar15] + 8, &Var2);
				if (STREAMING_ARE_BOUNDS_LOADED(Var2, 3.0f))
				{
					if (!Function_38(&vParam0 + 8[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_44(&vParam0 + 8[iVar15] + 32, 1);
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
		Function_44(&vParam0 + 608, 1024);
	}
	return;
}

void Function_175(struct<649> Param0) //Position: 0xABF3 / 44019
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_176(&iVar0, 20.0f, 0))
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
			if (!Function_29(&Param0 + 608, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(&uVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
				{
					if (Function_147(&uVar3, &Global_54076) > 3,5f)
					{
						Function_197(&Param0 + 608, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(&uVar3, 118, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						Param0.f_648 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_29(&Param0 + 608, 2))
		{
			fVar6 = Function_147(&uVar3, &Global_54076);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_29((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 4);
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
		else if (Function_29(&Param0 + 608, 512))
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
			fVar7 = Function_147(&uVar3, &Global_54076);
			if (fVar7 < 16.0f && !Function_29((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_29((&Param0 + 8[iVar25])->f_32, 8))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_648 = fVar4;
			}
			else if (!Function_29((&Param0 + 8[iVar25])->f_32, 2))
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

bool Function_176(var uParam0, int iParam1, bool bParam2) //Position: 0xB073 / 45171
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

void Function_177(int iParam0, int iParam1, bool bParam2) //Position: 0xB105 / 45317
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam1);
	if (iParam1 == Global_46760[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "spawnresrict_2");
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
			{
				if (!Function_29(&iParam0 + 608, 0x2000000))
				{
					Function_44(&iParam0 + 608, 4194304);
					Function_44(&iParam0 + 608, 8388608);
					Function_44(&iParam0 + 608, 0x1000000);
					Function_44(&iParam0 + 608, 1048576);
					Function_44(&iParam0 + 608, 2097152);
					Function_197(&iParam0 + 608, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_44(&iParam0 + 608, 0x2000000);
		}
	}
	if (!Function_29(&iParam0 + 608, 2097152))
	{
		if (bParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(&iParam0 + 608, 1048576);
			Function_197(&iParam0 + 608, 2097152);
			Function_197(&iParam0 + 608, 4194304);
			Function_197(&iParam0 + 608, 8388608);
			Function_197(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	if (!Function_29(&iParam0 + 608, 1048576))
	{
		if (bParam2 <= 40.0f && bParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(&iParam0 + 608, 1048576);
			Function_197(&iParam0 + 608, 4194304);
			Function_197(&iParam0 + 608, 8388608);
			Function_197(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	iVar2 = Function_178(StackVal, Global_54078, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_29(&iParam0 + 608, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(&iParam0 + 608, 4194304);
		Function_197(&iParam0 + 608, 8388608);
		Function_197(&iParam0 + 608, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_29(&iParam0 + 608, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(&iParam0 + 608, 8388608);
		Function_197(&iParam0 + 608, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_29(&iParam0 + 608, 0x1000000))
	{
		Function_197(&iParam0 + 608, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_178(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB40F / 46095
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_179(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_179(var uParam0, var uParam1, bool bParam2) //Position: 0xB44B / 46155
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_46715, 15, 1);
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
					if (Function_180(&uVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&uVar5))
						{
							if (&bParam2)
							{
								if (Function_38(&uVar5, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_180(int iParam0) //Position: 0xB529 / 46377
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_181(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_181(int iParam0, int iParam1) //Position: 0xB578 / 46456
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xB5BD / 46525
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_193(Global_43789);
	fVar1 = Function_191(Global_43789);
	fVar2 = Function_192(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1,5f);
	fVar3 = Function_183(0,33f, Function_141(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_184(1);
	return;
}

float Function_183(int iParam0, int iParam1) //Position: 0xB60B / 46603
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xB61E / 46622
{
	if (Function_29(iParam0, 1) && !Function_29(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_185(vector3 vParam0) //Position: 0xB64B / 46667
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
			if (!Function_29(&vParam0 + 608, 0x4000000))
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
				TASK_PRIORITY_SET(&uVar1, 1);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar1, &iVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, 1);
				if (!Function_29(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, 0);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(&vParam0, &vParam0, 0);
	return;
}

void Function_186(int iParam0, int iParam1, int iParam2) //Position: 0xB74C / 46924
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
			Function_187(&uVar1, &iParam1, iParam2);
		}
		iVar0++;
	}
	return;
}

void Function_187(var uParam0, var uParam1, int iParam2) //Position: 0xB7A3 / 47011
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

bool Function_188(int iParam0) //Position: 0xB7F5 / 47093
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_27(iVar0) || Function_159(iParam0));
}

void Function_189(int iParam0) //Position: 0xB834 / 47156
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (!Function_29(&iParam0 + 608, 512))
	{
		fVar0 = Function_191(Global_43789);
		iVar1 = Function_193(Global_43789);
		if (iVar1 == 0 && &iParam0 + 632 >= 120.0f)
		{
			fVar2 = Function_192(iVar1);
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

void Function_190(int iParam0) //Position: 0xB8FF / 47359
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

var Function_191(int iParam0) //Position: 0xB9D9 / 47577
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = &Global_44085[iParam09] + 8;
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

var Function_192(int iParam0) //Position: 0xBA38 / 47672
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

int Function_193(int iParam0) //Position: 0xBB7B / 47995
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

void Function_194() //Position: 0xBD01 / 48385
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

var Function_195(bool bParam0, int iParam1) //Position: 0xBD6D / 48493
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

void Function_196(int iParam0, float fParam1) //Position: 0xBEAC / 48812
{
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", fParam1);
	return;
}

void Function_197(var uParam0, int iParam1) //Position: 0xBED0 / 48848
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xBEE1 / 48865
{
	int iVar0;
	
	iVar0 = Function_133(iParam0);
	if (!Function_199(iVar0))
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

bool Function_199(int iParam0) //Position: 0xBF1F / 48927
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(int iParam0, int iParam1, int iParam2) //Position: 0xBF36 / 48950
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_201(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(iParam0, iParam1, iParam2, 4294967295);
}

int Function_201(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xBF94 / 49044
{
	var uVar0;
	
	if (!Function_203(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_204(iParam0, iParam1, iParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_202(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 <= 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
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
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_202(int iParam0) //Position: 0xC0F9 / 49401
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

bool Function_203(int iParam0) //Position: 0xC137 / 49463
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xC14C / 49484
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(bool bParam0) //Position: 0xC16C / 49516
{
	bool bVar0;
	
	bParam0 = bParam0;
	if (!iLocal_1337)
	{
		if (((Function_35(15) && !Function_35(16)) && Function_27(bParam0)) && !Function_211())
		{
			Function_152("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_1337 = 1;
		}
		else if (Function_35(16))
		{
			iLocal_1337 = 1;
		}
	}
	Function_208();
	if (!iLocal_1336)
	{
		if (IS_WORLD_SECTOR_LOADED(&cLocal_1334))
		{
			bVar0 = (!Function_35(15) || Function_35(16));
			Function_206(&uLocal_1012, &cLocal_1334, "dlc_arm_generalStoreProps01x", 1, bVar0, &iLocal_288 + 88, 1, 0, 1);
			Function_206(&uLocal_1012, &cLocal_1334, "dlc_arm_generalStoreProps01x", 2, bVar0, &iLocal_288 + 88, 1, 0, 0);
			Function_206(&uLocal_1012, &cLocal_1334, "dlc_arm_generalStoreProps01x", 3, 1, &iLocal_288 + 88, 1, 0, 1);
			iLocal_1336 = 1;
		}
	}
	if (IS_OBJECT_VALID(&cLocal_1334))
	{
	}
	return;
}

var Function_206(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0xC29A / 49818
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_207(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam2, 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam4)
	{
		Function_48(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), &iParam8);
	}
	Function_48(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &uParam5;
	if (&bParam6)
	{
		Function_48(&(Param0[iVar04]), 16384);
	}
	if (&bParam7)
	{
		Function_48(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&uParam5))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &uParam5);
	}
	return iVar0;
}

var Function_207(struct<4>[] Param0) //Position: 0xC388 / 50056
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

void Function_208() //Position: 0xC3B9 / 50105
{
	var uVar0;
	
	uVar0 = Function_210(Global_46760[0], "narmadillo", "sheriffsOffice01", 2);
	if (IS_DOOR_VALID(&uVar0))
	{
		if (IS_DOOR_OPENED(&uVar0))
		{
			CLOSE_DOOR_FAST(&uVar0);
		}
		if (!IS_DOOR_LOCKED(&uVar0))
		{
			Function_209(&uVar0, 1);
		}
	}
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0xC414 / 50196
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

var Function_210(int iParam0, char* cParam1, int iParam3) //Position: 0xC46F / 50287
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_9(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
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

bool Function_211() //Position: 0xC514 / 50452
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_212(char* cParam0) //Position: 0xC541 / 50497
{
	if (!Function_26(128))
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

void Function_213(int iParam0, bool bParam1) //Position: 0xC581 / 50561
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
		Function_71(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_214(int iParam0) //Position: 0xC671 / 50801
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_215(bool bParam0) //Position: 0xC684 / 50820
{
	Function_216(1, 0,25f, 2, &iLocal_178, &Global_44085[bParam09] + 8, 1);
	return;
}

void Function_216(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0xC6A2 / 50850
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
	(&Global_43580 + 24) = &uParam3;
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
		Function_219();
	}
	if (&bParam5)
	{
		Function_217(1048576);
	}
}

void Function_217(int iParam0) //Position: 0xC7B0 / 51120
{
	Function_218(&Global_43580, iParam0);
	return;
}

void Function_218(var uParam0, var uParam1) //Position: 0xC7BE / 51134
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_219() //Position: 0xC7DD / 51165
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_217(16384);
	}
	return;
}

void Function_220(var uParam0) //Position: 0xC7F9 / 51193
{
	uParam0 = uParam0;
	return;
}

void Function_221() //Position: 0xC803 / 51203
{
	return;
}

void Function_222(int iParam0) //Position: 0xC809 / 51209
{
	iParam0 = iParam0;
	return;
}

void Function_223(var uParam0, int iParam1) //Position: 0xC813 / 51219
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_224(int iParam0, int iParam1) //Position: 0xC82D / 51245
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_225() //Position: 0xC84A / 51274
{
	return;
}

void Function_226() //Position: 0xC850 / 51280
{
	return;
}

void Function_227(int iParam0) //Position: 0xC856 / 51286
{
	iParam0 = iParam0;
	return;
}

void Function_228(int iParam0, int iParam1, int iParam2) //Position: 0xC860 / 51296
{
	if ((!Function_9(iParam1) || Global_6623) || Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_229(&iParam0, iParam1, &Global_11014, &iParam2);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_229(&iParam0, iParam1, &Global_11146, &iParam2);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_229(&iParam0, iParam1, &Global_11120, &iParam2);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_229(&iParam0, iParam1, &Global_11222, &iParam2);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_229(&iParam0, iParam1, &Global_11284, &iParam2);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_229(&iParam0, iParam1, &Global_11492, &iParam2);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_229(&iParam0, iParam1, &Global_11544, &iParam2);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_229(&iParam0, iParam1, &Global_11646, &iParam2);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_229(&iParam0, iParam1, &Global_11704, &iParam2);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_229(&iParam0, iParam1, &Global_11752, &iParam2);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_229(&iParam0, iParam1, &Global_11726, &iParam2);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_229(&iParam0, iParam1, &Global_11836, &iParam2);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_229(&iParam0, iParam1, &Global_11946, &iParam2);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_229(&iParam0, iParam1, &Global_11988, &iParam2);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_229(&iParam0, iParam1, &Global_12048, &iParam2);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_229(&iParam0, iParam1, &Global_12150, &iParam2);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_229(&iParam0, iParam1, &Global_11398, &iParam2);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_229(&iParam0, iParam1, &Global_12284, &iParam2);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_229(&iParam0, iParam1, &Global_12342, &iParam2);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_229(&iParam0, iParam1, &Global_12422, &iParam2);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_229(&iParam0, iParam1, &Global_12392, &iParam2);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_229(&iParam0, iParam1, &Global_12760, &iParam2);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_229(&iParam0, iParam1, &Global_12714, &iParam2);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_229(&iParam0, iParam1, &Global_12644, &iParam2);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_229(&iParam0, iParam1, &Global_12488, &iParam2);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_229(&iParam0, iParam1, &Global_12482, &iParam2);
	}
	Function_197(&iParam0 + 608, 64);
	return;
}

void Function_229(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0xCB64 / 52068
{
	struct<8> Var0;
	var uVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<8> Var28;
	
	Function_44(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_237(&uParam3, iParam1);
	iVar18 = Function_92(&iVar9, iParam1);
	iVar19 = 0;
	iVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < iVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_27(iParam1);
	iVar22 = 0;
	while (iVar22 < (iVar18 - 1))
	{
		if (iVar22 <= Param2)
		{
			if (!Function_236(&(Param2[iVar222]), 4))
			{
				*(&iParam0 + 8[iVar225] + 8) = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar22, &uVar8);
				bVar23 = true;
				if (iVar20 >= 0)
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
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238("nSurvivor_") };
					*(&iParam0 + 8[iVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[iVar22], Var24, Var26);
					Function_231(iVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_197(&iParam0 + 8[iVar225] + 32, 1);
						Function_197(&iParam0 + 608, 1024);
					}
					Function_197(&iParam0 + 608, 1);
				}
				else
				{
					iVar20 = (iVar20 - 1);
					Function_230(&(Param2[iVar222]), 4);
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
	Function_186(&iParam0, &iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_230(var uParam0, int iParam1) //Position: 0xCD70 / 52592
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_231(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0xCD81 / 52609
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
	SET_ACTOR_CAN_BE_TARGETED(&iVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&iVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iVar0, 1);
	Function_235(&iVar0, 0);
	Function_234(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, 0);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_233(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_233(&iVar0, 75.0f, 1.0f, 1.0f);
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
			TASK_PRIORITY_SET(&iVar0, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, 1);
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
				if (!IS_OBJECT_VALID(Function_232(&uVar22, "UseCase1")))
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
		TASK_PRIORITY_SET(&iVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	Function_233(&iVar0, 20.0f, 1.0f, 1.0f);
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

var Function_232(var uParam0, int iParam1) //Position: 0xD468 / 54376
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_233(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xD477 / 54391
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

void Function_234(var uParam0, bool bParam1) //Position: 0xD4C8 / 54472
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

void Function_235(var uParam0, bool bParam1) //Position: 0xD517 / 54551
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

bool Function_236(var uParam0, int iParam1) //Position: 0xD54B / 54603
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_237(int iParam0, int iParam1) //Position: 0xD568 / 54632
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
		if (Function_27(iParam1))
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

struct<32> Function_238(char* cParam0) //Position: 0xD61E / 54814
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_239("0", &cVar8, ""), 4);
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

struct<32> Function_239(char* cParam0) //Position: 0xD68A / 54922
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_240() //Position: 0xD6AC / 54956
{
	Function_243(&iLocal_178 + 336[0]);
	Function_242();
	uLocal_844[0] = Function_241(StackVal, StackVal, &iLocal_178, Function_61(), "$/tune/refGroups/campsiteSets/cam_deadBody03x", Function_243(&iLocal_178 + 336[0]), Function_242(), 4294967295);
	uLocal_844[0] = &uLocal_844[0];
	return;
}

var Function_241(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xD710 / 55056
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
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

struct<8> Function_242() //Position: 0xD867 / 55399
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_243(int iParam0) //Position: 0xD871 / 55409
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

bool Function_244(int iParam0) //Position: 0xD89A / 55450
{
	if (Function_29(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_164(&iParam0 + 384);
}

int Function_245(int iParam0) //Position: 0xD8BD / 55485
{
	if (!Function_9(iParam0))
	{
		return 1;
	}
	return Function_224(&(Global_43791[iParam0]), 4);
}

bool Function_246() //Position: 0xD8D9 / 55513
{
	return Function_164(&iLocal_838);
}

void Function_247(bool bParam0) //Position: 0xD8E5 / 55525
{
	Function_248(&uLocal_1012, &cLocal_7, "cattlePen01", 1, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "cattlePen01", 2, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "cattlePen01", 3, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "corralPens01", 1, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "corralPens01", 2, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "corralPens01", 3, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "corralPens01", 4, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "corralPens01", 5, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "doctorsOffice01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 1088, 1, 0);
	Function_248(&uLocal_1012, &cLocal_7, "freightstation01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 48, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "freightstation01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 48, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "freightstation01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 48, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "gunsmith01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 1048, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "gunsmith01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 1048, 1, 0);
	Function_248(&uLocal_1012, &cLocal_7, "ruinedBank", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 336, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "ruinedBank", 2, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 336, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "ruinedBank", 3, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 4, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 5, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 6, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 168, 0, 1);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 7, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 8, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 9, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 168, 0, 1);
	Function_248(&uLocal_1012, &cLocal_7, "saloon01", 8, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 240, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "schoolhouse01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 120, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "schoolhouse01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 120, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "sheriffsOffice01", 1, &Global_44085[bParam09] + 32, 1, &iLocal_288 + 360, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "sheriffsOffice01", 2, &Global_44085[bParam09] + 32, 1, &iLocal_288 + 800, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "sheriffsOffice01", 3, &Global_44085[bParam09] + 32, 1, &iLocal_288 + 800, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "stable01", 1, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "stable01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "stable01", 3, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "stable01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "trainstation01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 160, 0, 0);
	Function_248(&uLocal_1012, &cLocal_7, "trainstation01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_288 + 160, 0, 0);
	return;
}

var Function_248(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0xDEF1 / 57073
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_207(&Param0);
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
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_48(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), 1);
	}
	Function_48(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_48(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_48(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

void Function_249() //Position: 0xDFF4 / 57332
{
	Function_250(&uLocal_9, &uLocal_848, 4, &iLocal_288 + 408, 4294967295, 4);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 1088, 4294967295, 8458);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 1048, 4294967295, 4362);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 272, 4294967295, 0x40000000);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 280, 4294967295, 524554);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 288, 4294967295, 0x4000010a);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 48, 4294967295, 0x1000010a);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 88, 4294967295, 2314);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 240, 4294967295, 1802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 168, 4294967295, 1794);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 360, 4294967295, 33034);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 800, 4294967295, 33034);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 352, 4294967295, 262410);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 160, 4294967295, 16650);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 784, 4294967295, 16648);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 328, 4294967295, 0x4001010a);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 120, 4294967295, 8388874);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 336, 4294967295, 0x800010a);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 864, 4294967295, 0x800018a);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 1096, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 248, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 256, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 264, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 296, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 344, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 368, 4294967295, 65802);
	Function_250(&uLocal_9, &uLocal_848, 5, &iLocal_288 + 496, 4294967295, 0x1000108);
	return;
}

void Function_250(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xE227 / 57895
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

void Function_251(struct<5> Param0) //Position: 0xE314 / 58132
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0xE325 / 58149
{
	var uVar0;
	int iVar1;
	
	if (Function_29(&iParam0 + 608, 16))
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

void Function_253(int iParam0, int iParam1, int iParam2) //Position: 0xE39B / 58267
{
	var uVar0;
	int iVar1;
	
	if (Function_29(&iParam0 + 608, 16))
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
	if (!Function_27(iParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[iParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[iParam29] + 8);
		}
	}
	return;
}

var Function_254() //Position: 0xE439 / 58425
{
	return &iLocal_178;
}

void Function_255(int iParam0) //Position: 0xE442 / 58434
{
	cLocal_7 = Function_256(&iLocal_178, "narmadillo", iParam0);
	cLocal_1334 = CREATE_WORLD_SECTOR(&iLocal_178, "dlc06x");
	return;
}

var Function_256(var uParam0, var uParam1, int iParam2) //Position: 0xE472 / 58482
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&uParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_257() //Position: 0xE495 / 58517
{
	return Function_258();
}

int Function_258() //Position: 0xE49E / 58526
{
	var uVar0;
	
	Function_259(3, 3);
	uVar0 = &uVar0;
	iLocal_288 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_288))
	{
		iLocal_288 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&iLocal_288 + 48) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_frght_set");
	*(&iLocal_288 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_freight1", 2,802597E-45f, Vector(-2166,632f, 17,92604f, 2623,95f), Vector(0.0f, 43,58913f, 0.0f), Vector(7,303681f, 4,120967f, 8,164944f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 48, &iLocal_288 + 8[0]);
	*(&iLocal_288 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_freight2", 2,802597E-45f, Vector(-2165,33f, 17,59008f, 2631,073f), Vector(0.0f, 0.0f, 0.0f), Vector(8,254868f, 4,865612f, 10,99714f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 48, &iLocal_288 + 8[1]);
	*(&iLocal_288 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_freight3", 2,802597E-45f, Vector(-2170,188f, 17,62566f, 2628,511f), Vector(0.0f, 0.0f, 0.0f), Vector(3,567785f, 5,063824f, 9,828385f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 48, &iLocal_288 + 8[2]);
	*(&iLocal_288 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_freight4", 2,802597E-45f, Vector(-2164,2f, 17,61846f, 2626,088f), Vector(0.0f, 0.0f, 0.0f), Vector(5,617971f, 4,865612f, 14,75492f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 48, &iLocal_288 + 8[3]);
	*(&iLocal_288 + 88) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_gstore_set");
	*(&iLocal_288 + 56[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_genstore1", 2,802597E-45f, Vector(-2148,623f, 19,45428f, 2628,357f), Vector(0.0f, 0.0f, 0.0f), Vector(9,018986f, 7,257872f, 6,779584f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 88, &iLocal_288 + 56[0]);
	*(&iLocal_288 + 56[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_genstore2", 2,802597E-45f, Vector(-2150,207f, 19,1795f, 2624,248f), Vector(0.0f, 0.0f, 0.0f), Vector(5,88572f, 8,090109f, 4,929153f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 88, &iLocal_288 + 56[1]);
	*(&iLocal_288 + 56[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_genstore3", 2,802597E-45f, Vector(-2147,295f, 18,95685f, 2624,88f), Vector(0.0f, -45,37515f, 0.0f), Vector(4,377747f, 8,395872f, 4,236251f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 88, &iLocal_288 + 56[2]);
	*(&iLocal_288 + 120) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_school_set");
	*(&iLocal_288 + 96[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_school1", 2,802597E-45f, Vector(-2070,03f, 20,80161f, 2647,482f), Vector(0.0f, -43,818f, 0.0f), Vector(9,732872f, 4,302454f, 6,564633f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 120, &iLocal_288 + 96[0]);
	*(&iLocal_288 + 96[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_school3", 2,802597E-45f, Vector(-2064,927f, 20,35403f, 2646,409f), Vector(0.0f, 45,16694f, 0.0f), Vector(2,566378f, 3,243175f, 4,281571f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 120, &iLocal_288 + 96[1]);
	*(&iLocal_288 + 160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_train_set");
	*(&iLocal_288 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_train1", 2,802597E-45f, Vector(-2192,03f, 17,9602f, 2607,348f), Vector(0.0f, 0.0f, 0.0f), Vector(10,81388f, 3,428749f, 11,58835f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 160, &iLocal_288 + 128[0]);
	*(&iLocal_288 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_train2", 2,802597E-45f, Vector(-2194,406f, 18,10719f, 2598,847f), Vector(0.0f, 0.0f, 0.0f), Vector(5,65979f, 2,929878f, 5,555932f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 160, &iLocal_288 + 128[1]);
	*(&iLocal_288 + 128[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_train3", 2,802597E-45f, Vector(-2199,583f, 17,91667f, 2605,609f), Vector(0.0f, 0.0f, 0.0f), Vector(4,503301f, 3,15102f, 13,21589f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 160, &iLocal_288 + 128[2]);
	*(&iLocal_288 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_players_room", 2,802597E-45f, Vector(-2157,796f, 21,3028f, 2597,339f), Vector(0.0f, 0.0f, 0.0f), Vector(6,578471f, 3,303276f, 4,931881f));
	*(&iLocal_288 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_bar", 2,802597E-45f, Vector(-2165,405f, 18,34461f, 2594,597f), Vector(0.0f, -0,4111925f, 0.0f), Vector(1,919878f, 3,042958f, 8,634464f));
	*(&iLocal_288 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_saloon_set");
	*(&iLocal_288 + 184[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_saloon3", 2,802597E-45f, Vector(-2164,626f, 19,15142f, 2600,373f), Vector(0.0f, 0.0f, 0.0f), Vector(7,157454f, 8,18234f, 5,185028f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 240, &iLocal_288 + 184[0]);
	*(&iLocal_288 + 184[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_saloon6", 2,802597E-45f, Vector(-2169,66f, 18,83813f, 2591,501f), Vector(0.0f, 0.0f, 0.0f), Vector(8,544957f, 7,659739f, 12,22982f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 240, &iLocal_288 + 184[1]);
	*(&iLocal_288 + 184[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_saloon7", 2,802597E-45f, Vector(-2163,617f, 19,72818f, 2588,009f), Vector(0.0f, 0.0f, 0.0f), Vector(5,472857f, 7,300081f, 5,485521f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 240, &iLocal_288 + 184[2]);
	*(&iLocal_288 + 184[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_saloon8", 2,802597E-45f, Vector(-2162,463f, 21,15556f, 2594,033f), Vector(0.0f, 0.0f, 0.0f), Vector(2,122883f, 2,908195f, 15,72376f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 240, &iLocal_288 + 184[3]);
	*(&iLocal_288 + 184[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_saloon9", 2,802597E-45f, Vector(-2171,786f, 19,40003f, 2586,314f), Vector(0.0f, 0.0f, 0.0f), Vector(3,80377f, 3,109092f, 2,082781f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 240, &iLocal_288 + 184[4]);
	*(&iLocal_288 + 184[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_saloon10", 2,802597E-45f, Vector(-2169,892f, 19,26516f, 2599,158f), Vector(0.0f, 45,37589f, 0.0f), Vector(4,649636f, 7,555864f, 6,160785f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 240, &iLocal_288 + 184[5]);
	*(&iLocal_288 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_fid_h", 2,802597E-45f, Vector(-2137,552f, 20,93539f, 2597,071f), Vector(0.0f, 0.0f, 0.0f), Vector(3,595824f, 2,927304f, 5,704147f));
	*(&iLocal_288 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_pia_h", 2,802597E-45f, Vector(-2112,444f, 19,40613f, 2624,537f), Vector(0.0f, 0.0f, 0.0f), Vector(7,086501f, 6,242682f, 13,23599f));
	*(&iLocal_288 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_bank_h", 2,802597E-45f, Vector(-2122,069f, 19,27977f, 2625,431f), Vector(0.0f, 0.0f, 0.0f), Vector(5,693934f, 5,480673f, 12,26683f));
	*(&iLocal_288 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_shooting", 2,802597E-45f, Vector(-2135,61f, 20,01764f, 2580,766f), Vector(0.0f, 0.0f, 0.0f), Vector(11,22108f, 7,914255f, 22,51829f));
	*(&iLocal_288 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_blacksmith", 2,802597E-45f, Vector(-2149,172f, 17,92179f, 2559,007f), Vector(0.0f, -89,98f, 0.0f), Vector(8,01369f, 2,664779f, 16,68806f));
	*(&iLocal_288 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_dentist", 2,802597E-45f, Vector(-2132f, 17,77041f, 2597,983f), Vector(0.0f, 0.0f, 0.0f), Vector(5,340528f, 2,48129f, 10,32266f));
	*(&iLocal_288 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_dent_h", 2,802597E-45f, Vector(-2131,979f, 21,18124f, 2596,559f), Vector(0.0f, 0.0f, 0.0f), Vector(5,47786f, 2,784811f, 7,78391f));
	*(&iLocal_288 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_undertaker_set");
	*(&iLocal_288 + 304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_undertaker1", 2,802597E-45f, Vector(-2114,143f, 19,01989f, 2595,747f), Vector(0.0f, 0.0f, 0.0f), Vector(12,40284f, 6,03686f, 13,60169f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 328, &iLocal_288 + 304[0]);
	*(&iLocal_288 + 304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_undertaker2", 2,802597E-45f, Vector(-2118,203f, 17,8798f, 2588,128f), Vector(0.0f, 0.0f, 0.0f), Vector(4,319778f, 3,504683f, 2,499442f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 328, &iLocal_288 + 304[1]);
	*(&iLocal_288 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "narmv_bank", 2,802597E-45f, Vector(-2129,407f, 17,84599f, 2628,467f), Vector(0.0f, 0.0f, 0.0f), Vector(8,191952f, 2,792115f, 20,49137f));
	*(&iLocal_288 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_holi_h", 2,802597E-45f, Vector(-2078,51f, 19,90768f, 2617,24f), Vector(0.0f, 24,90731f, 0.0f), Vector(14,4173f, 6,761f, 4,612413f));
	*(&iLocal_288 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_stables", 2,802597E-45f, Vector(-2170,963f, 19,70788f, 2571,41f), Vector(0.0f, 0.0f, 0.0f), Vector(9,594739f, 6,563833f, 12,0078f));
	*(&iLocal_288 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_sheriff", 2,802597E-45f, Vector(-2087,63f, 18,07517f, 2604,324f), Vector(0.0f, 25,367f, 0.0f), Vector(7,618929f, 3,152336f, 7,685912f));
	*(&iLocal_288 + 368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "narmv_sh_h", 2,802597E-45f, Vector(-2081,97f, 19,37237f, 2611,213f), Vector(0.0f, 25,38557f, 0.0f), Vector(13,32485f, 6,538599f, 5,412034f));
	*(&iLocal_288 + 376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_hitch_1", 2,802597E-45f, Vector(-2178,225f, 16,5647f, 2562,133f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_288 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_hitch_3", 2,802597E-45f, Vector(-2133,416f, 16,47904f, 2606,31f), Vector(0.0f, 89,793f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_288 + 392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_hitch_4", 2,802597E-45f, Vector(-2093,571f, 16,44941f, 2599,143f), Vector(0.0f, -67,146f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_288 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_hitch_0", 2,802597E-45f, Vector(-2155,571f, 16,44941f, 2604,914f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_288 + 408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_region", 4,203895E-45f, Vector(-2133,138f, 21,46446f, 2600,468f), Vector(0.0f, 60,82643f, 0.0f), Vector(88,1255f, 8,138889f, 100.0f));
	*(&iLocal_288 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "ArmPopArea_1_set");
	*(&iLocal_288 + 416[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armpop_1", 2,802597E-45f, Vector(-2082,066f, 20,38f, 2610,247f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 10.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 456, &iLocal_288 + 416[0]);
	*(&iLocal_288 + 416[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armpop_2", 2,802597E-45f, Vector(-2074,872f, 20,3866f, 2640,391f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 10.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 456, &iLocal_288 + 416[1]);
	*(&iLocal_288 + 416[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armpop_3", 2,802597E-45f, Vector(-2154,302f, 20,3866f, 2610,593f), Vector(0.0f, 0.0f, 0.0f), Vector(115.0f, 10.0f, 50.0f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 456, &iLocal_288 + 416[2]);
	*(&iLocal_288 + 416[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armpop_4", 2,802597E-45f, Vector(-2158,299f, 20,38f, 2571,716f), Vector(0.0f, 0.0f, 0.0f), Vector(33.0f, 10.0f, 28.0f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 456, &iLocal_288 + 416[3]);
	*(&iLocal_288 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "v_duelStayOut", 2,802597E-45f, Vector(-2167,432f, 16,75987f, 2612,112f), Vector(0.0f, 0.0f, 0.0f), Vector(16,10118f, 2,950548f, 7,655623f));
	*(&iLocal_288 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_horses_set");
	*(&iLocal_288 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_corr1", 2,802597E-45f, Vector(-2163,38f, 18,69929f, 2529,373f), Vector(0.0f, 0.0f, 0.0f), Vector(21,92858f, 7,914255f, 18,93099f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 496, &iLocal_288 + 472[0]);
	*(&iLocal_288 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_corr3", 2,802597E-45f, Vector(-2172,81f, 18,21145f, 2553,319f), Vector(0.0f, 0.0f, 0.0f), Vector(4,984473f, 4,546495f, 24,02264f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 496, &iLocal_288 + 472[1]);
	*(&iLocal_288 + 520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_pigs_set");
	*(&iLocal_288 + 504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "pigs", 2,802597E-45f, Vector(-2201,519f, 17,93718f, 2580,826f), Vector(0.0f, 0.0f, 0.0f), Vector(11,84606f, 4,342653f, 14,19223f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 520, &iLocal_288 + 504[0]);
	*(&iLocal_288 + 552) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_sheep_set");
	*(&iLocal_288 + 528[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "sheep1", 2,802597E-45f, Vector(-2196,418f, 17,81848f, 2563,422f), Vector(0.0f, 0.0f, 0.0f), Vector(3,019494f, 4,449552f, 18,62837f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 552, &iLocal_288 + 528[0]);
	*(&iLocal_288 + 528[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "sheep2", 2,802597E-45f, Vector(-2192,323f, 17,81848f, 2570,334f), Vector(0.0f, 0.0f, 0.0f), Vector(3,019494f, 4,449552f, 32,74143f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 552, &iLocal_288 + 528[1]);
	*(&iLocal_288 + 600) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_dogs_set");
	*(&iLocal_288 + 560[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "dogs3", 4,203895E-45f, Vector(-2131,869f, 20,07885f, 2561,108f), Vector(0.0f, 73,21918f, 0.0f), Vector(23,26242f, 4,30682f, 37,89078f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 600, &iLocal_288 + 560[0]);
	*(&iLocal_288 + 560[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "dogs2", 4,203895E-45f, Vector(-2142,907f, 19,18614f, 2611,595f), Vector(0.0f, -0,6402224f, 0.0f), Vector(42,99439f, 3,209314f, 8,519307f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 600, &iLocal_288 + 560[1]);
	*(&iLocal_288 + 560[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "dogs1", 4,203895E-45f, Vector(-2182,031f, 20,48716f, 2587,995f), Vector(0.0f, 1,045037f, 0.0f), Vector(5,128937f, 4,552561f, 52,86277f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 600, &iLocal_288 + 560[2]);
	*(&iLocal_288 + 560[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "dogs4", 4,203895E-45f, Vector(-2091,537f, 19,73709f, 2625,416f), Vector(0.0f, 39,81729f, 0.0f), Vector(8,65133f, 7,260193f, 23,08519f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 600, &iLocal_288 + 560[3]);
	*(&iLocal_288 + 648) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_birds_set");
	*(&iLocal_288 + 608[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "birds2", 4,203895E-45f, Vector(-2158,319f, 19,54676f, 2547,778f), Vector(0.0f, 20.0f, 0.0f), Vector(38,18281f, 5,443854f, 36,51648f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 648, &iLocal_288 + 608[0]);
	*(&iLocal_288 + 608[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "birds1", 4,203895E-45f, Vector(-2198,048f, 20,0438f, 2574,1f), Vector(0.0f, 2,145673f, 0.0f), Vector(17,22327f, 4,298422f, 29,78685f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 648, &iLocal_288 + 608[1]);
	*(&iLocal_288 + 608[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "birds3", 4,203895E-45f, Vector(-2141,584f, 19,12232f, 2610,437f), Vector(0.0f, 0,1460683f, 0.0f), Vector(74,44128f, 7,713831f, 35,78056f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 648, &iLocal_288 + 608[2]);
	*(&iLocal_288 + 608[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "birds4", 4,203895E-45f, Vector(-2072,425f, 22,73413f, 2644,251f), Vector(0.0f, 20.0f, 0.0f), Vector(17,22327f, 4,807184f, 17,22327f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 648, &iLocal_288 + 608[3]);
	*(&iLocal_288 + 688) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_chickens_set");
	*(&iLocal_288 + 656[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "chix1", 4,203895E-45f, Vector(-2145,043f, 20,64889f, 2544,012f), Vector(0.0f, 2,202978f, 0.0f), Vector(8,078754f, 5,228328f, 5,702032f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 688, &iLocal_288 + 656[0]);
	*(&iLocal_288 + 656[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "chix2", 4,203895E-45f, Vector(-2135,891f, 20,64889f, 2544,229f), Vector(0.0f, 20.0f, 0.0f), Vector(6,384871f, 4,5316f, 6,384871f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 688, &iLocal_288 + 656[1]);
	*(&iLocal_288 + 656[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "chix3", 4,203895E-45f, Vector(-2152,433f, 16,38396f, 2565,527f), Vector(0.0f, -32,12381f, 0.0f), Vector(11,51274f, 4,122554f, 19,24498f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 688, &iLocal_288 + 656[2]);
	*(&iLocal_288 + 776) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_workers_set");
	*(&iLocal_288 + 696[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop1", 2,802597E-45f, Vector(-2201,518f, 17,4963f, 2580,591f), Vector(0.0f, 0.0f, 0.0f), Vector(11,25053f, 6,238204f, 13,55644f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[0]);
	*(&iLocal_288 + 696[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop2", 2,802597E-45f, Vector(-2190,824f, 18,28689f, 2571,226f), Vector(0.0f, 0.0f, 0.0f), Vector(4,38313f, 4,662551f, 34,72743f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[1]);
	*(&iLocal_288 + 696[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop3", 2,802597E-45f, Vector(-2194,574f, 18,19651f, 2557,426f), Vector(0.0f, 0.0f, 0.0f), Vector(7,118588f, 5,362353f, 7,118588f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[2]);
	*(&iLocal_288 + 696[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop4", 2,802597E-45f, Vector(-2170,509f, 19,21796f, 2558,176f), Vector(0.0f, 0.0f, 0.0f), Vector(5,921895f, 6,353286f, 33,88371f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[3]);
	*(&iLocal_288 + 696[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop5", 2,802597E-45f, Vector(-2163,523f, 18,45101f, 2540,789f), Vector(0.0f, 0.0f, 0.0f), Vector(17,22323f, 5,285994f, 5,701241f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[4]);
	*(&iLocal_288 + 696[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop6", 2,802597E-45f, Vector(-2199,095f, 19,17662f, 2607,873f), Vector(0.0f, 0.0f, 0.0f), Vector(22,89204f, 6,069724f, 30,7337f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[5]);
	*(&iLocal_288 + 696[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_m_pop_street5", 2,802597E-45f, Vector(-2153,729f, 20,50986f, 2574,687f), Vector(0.0f, 89,78162f, 0.0f), Vector(20,42573f, 9,065599f, 24,34282f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[6]);
	*(&iLocal_288 + 696[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop7", 2,802597E-45f, Vector(-2107,026f, 16,45444f, 2624,001f), Vector(0.0f, 0.0f, 0.0f), Vector(3,832116f, 6,390423f, 6,272371f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[7]);
	*(&iLocal_288 + 696[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "workersPop8", 2,802597E-45f, Vector(-2137,461f, 18,26782f, 2625,678f), Vector(0.0f, 0.0f, 0.0f), Vector(5,900992f, 3,903363f, 4,906172f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 776, &iLocal_288 + 696[8]);
	*(&iLocal_288 + 784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_TrnPlatform", 2,802597E-45f, Vector(-2200,446f, 17,62119f, 2608,595f), Vector(0.0f, 0.0f, 0.0f), Vector(21,06317f, 9,090218f, 27,00399f));
	*(&iLocal_288 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_fff", 2,802597E-45f, Vector(-2196,279f, 17,57178f, 2591,825f), Vector(0.0f, 359,4957f, 0.0f), Vector(9,39573f, 4,115315f, 6,585201f));
	*(&iLocal_288 + 800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_cell01", 2,802597E-45f, Vector(-2082,112f, 18,13884f, 2601,765f), Vector(0.0f, 24,73553f, 0.0f), Vector(3,121904f, 3,040588f, 8,127781f));
	*(&iLocal_288 + 848) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_saloonBalcony_set");
	*(&iLocal_288 + 808[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "saloonBalcony1", 2,802597E-45f, Vector(-2163,824f, 20,50568f, 2604,708f), Vector(0.0f, 0.0f, 0.0f), Vector(11,73491f, 7,378105f, 2,58106f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 848, &iLocal_288 + 808[0]);
	*(&iLocal_288 + 808[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "saloonBalcony2", 2,802597E-45f, Vector(-2157,821f, 20,50568f, 2601,393f), Vector(0.0f, 0.0f, 0.0f), Vector(4,580815f, 7,378105f, 2,773947f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 848, &iLocal_288 + 808[1]);
	*(&iLocal_288 + 808[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "saloonBalcony3", 2,802597E-45f, Vector(-2172,936f, 20,27677f, 2601,975f), Vector(0.0f, 45,53014f, 0.0f), Vector(2,822424f, 7,378105f, 8,92014f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 848, &iLocal_288 + 808[2]);
	*(&iLocal_288 + 808[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "saloonBalcony4", 2,802597E-45f, Vector(-2175,582f, 19,95216f, 2595,1f), Vector(0.0f, 0.0f, 0.0f), Vector(2,519257f, 7,378105f, 6,485752f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 848, &iLocal_288 + 808[3]);
	*(&iLocal_288 + 856) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "v_SOL_FTE_cutsceneTrigger", 2,802597E-45f, Vector(-2128,694f, 17,64448f, 2620,274f), Vector(0.0f, 0.0f, 0.0f), Vector(1,242989f, 3,087706f, 1.0f));
	*(&iLocal_288 + 864) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_bank_vault", 2,802597E-45f, Vector(-2129,521f, 17,84599f, 2633,21f), Vector(0.0f, 0.0f, 0.0f), Vector(8,919443f, 2,792115f, 11,03533f));
	*(&iLocal_288 + 872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_balconyWhore", 2,802597E-45f, Vector(-2173,254f, 22,00208f, 2602,409f), Vector(0.0f, -44,77693f, 0.0f), Vector(7,513614f, 4,213365f, 1,778805f));
	*(&iLocal_288 + 928) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_street_pop_set");
	*(&iLocal_288 + 880[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_m_pop_street8", 2,802597E-45f, Vector(-2085,908f, 19,44698f, 2634,003f), Vector(0.0f, 50,72328f, 0.0f), Vector(3,662755f, 8,792936f, 24,62952f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 928, &iLocal_288 + 880[0]);
	*(&iLocal_288 + 880[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_m_pop_street7", 2,802597E-45f, Vector(-2093,883f, 15,646f, 2615,277f), Vector(0.0f, -107,6826f, 0.0f), Vector(12,04712f, 7,380057f, 28,6123f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 928, &iLocal_288 + 880[1]);
	*(&iLocal_288 + 880[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_m_pop_street6", 2,802597E-45f, Vector(-2149,808f, 21,34438f, 2593,457f), Vector(0.0f, 0.0f, 0.0f), Vector(7,320671f, 10,71243f, 14,30037f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 928, &iLocal_288 + 880[2]);
	*(&iLocal_288 + 880[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_m_pop_street4", 2,802597E-45f, Vector(-2141,298f, 18,54541f, 2610,915f), Vector(0.0f, 0.0f, 0.0f), Vector(66,58459f, 5,510391f, 20,00427f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 928, &iLocal_288 + 880[3]);
	*(&iLocal_288 + 880[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_m_pop_street3", 2,802597E-45f, Vector(-2181,888f, 19,00749f, 2606,667f), Vector(0.0f, 0,6578003f, 0.0f), Vector(14,54376f, 6,337402f, 27,7212f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 928, &iLocal_288 + 880[4]);
	*(&iLocal_288 + 936) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_MovieHouse", 2,802597E-45f, Vector(-2078,399f, 20,16009f, 2642,17f), Vector(0.0f, 44,46211f, 0.0f), Vector(2,082665f, 3,174834f, 2,082665f));
	*(&iLocal_288 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "v_bankerTrespass", 2,802597E-45f, Vector(-2129,191f, 17,20968f, 2633,001f), Vector(0.0f, 0.0f, 0.0f), Vector(8,403374f, 4,123871f, 11,32852f));
	*(&iLocal_288 + 952) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "v_bankerEnter", 2,802597E-45f, Vector(-2128,644f, 17,10956f, 2620,879f), Vector(0.0f, 0.0f, 0.0f), Vector(2,942402f, 5,077019f, 2,877066f));
	*(&iLocal_288 + 960) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_Poker", 2,802597E-45f, Vector(-2157,767f, 17,21778f, 2595,741f), Vector(0.0f, 0.0f, 0.0f), Vector(5,964023f, 3,691727f, 6,788969f));
	*(&iLocal_288 + 1000) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_nightCritters_set");
	*(&iLocal_288 + 968[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "ncritters8", 2,802597E-45f, Vector(-2082,874f, 17,21921f, 2607,691f), Vector(0.0f, -64,60884f, 0.0f), Vector(1,350986f, 4,26931f, 8,130584f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1000, &iLocal_288 + 968[0]);
	*(&iLocal_288 + 968[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "ncritters5", 2,802597E-45f, Vector(-2121,432f, 17,70784f, 2596,253f), Vector(0.0f, 0.0f, 0.0f), Vector(2,007695f, 3,773628f, 6,728278f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1000, &iLocal_288 + 968[1]);
	*(&iLocal_288 + 968[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "ncritters4", 2,802597E-45f, Vector(-2117,56f, 18,44319f, 2626,484f), Vector(0.0f, 0.0f, 0.0f), Vector(3,193021f, 7,651935f, 9,082207f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1000, &iLocal_288 + 968[2]);
	*(&iLocal_288 + 1008) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_streetSpawn", 2,802597E-45f, Vector(-2144,206f, 16,09741f, 2610,982f), Vector(0.0f, 0.0f, 0.0f), Vector(86,20792f, 18,66449f, 20,56335f));
	*(&iLocal_288 + 1016) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_schoolhouse_room", 2,802597E-45f, Vector(-2064,416f, 20,36456f, 2652,149f), Vector(0.0f, 45,37799f, 0.0f), Vector(8,442223f, 4,07777f, 4,048793f));
	*(&iLocal_288 + 1048) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_gunsmith_set");
	*(&iLocal_288 + 1024[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_gunsmith01", 2,802597E-45f, Vector(-2137,241f, 17,93652f, 2596,005f), Vector(0.0f, 0.0f, 0.0f), Vector(3,025971f, 2,832442f, 7,494035f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1048, &iLocal_288 + 1024[0]);
	*(&iLocal_288 + 1024[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_gunsmith02", 2,802597E-45f, Vector(-2141,175f, 17,93652f, 2596,286f), Vector(0.0f, 0.0f, 0.0f), Vector(6,317639f, 2,832442f, 7,494035f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1048, &iLocal_288 + 1024[1]);
	*(&iLocal_288 + 1088) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_doctor_set");
	*(&iLocal_288 + 1056[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_doctor01", 2,802597E-45f, Vector(-2127,114f, 18,36712f, 2599,681f), Vector(0.0f, 0.0f, 0.0f), Vector(1,483378f, 2,74417f, 0,2374881f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1088, &iLocal_288 + 1056[0]);
	*(&iLocal_288 + 1056[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_doctor02", 2,802597E-45f, Vector(-2123,599f, 18,36712f, 2599,681f), Vector(0.0f, 0.0f, 0.0f), Vector(1,483378f, 2,74417f, 0,2374881f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1088, &iLocal_288 + 1056[1]);
	*(&iLocal_288 + 1056[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_doctor03", 2,802597E-45f, Vector(-2125,317f, 17,97651f, 2596,491f), Vector(0.0f, 0.0f, 0.0f), Vector(5,23867f, 2,74417f, 6,166394f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1088, &iLocal_288 + 1056[2]);
	*(&iLocal_288 + 1096) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "narmv_gs_h", 2,802597E-45f, Vector(-2142,061f, 21,05455f, 2597,113f), Vector(0.0f, 0.0f, 0.0f), Vector(4,455796f, 2,99096f, 5,750332f));
	*(&iLocal_288 + 1128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_288, "armv_toughGuys_set");
	*(&iLocal_288 + 1104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_toughGuys01", 2,802597E-45f, Vector(-2170,239f, 18,10079f, 2596,339f), Vector(0.0f, 0.0f, 0.0f), Vector(7,206587f, 4,075381f, 3,323466f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1128, &iLocal_288 + 1104[0]);
	*(&iLocal_288 + 1104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "armv_toughGuys02", 2,802597E-45f, Vector(-2172,296f, 17,9828f, 2593,331f), Vector(0.0f, 0.0f, 0.0f), Vector(3,352906f, 4,244436f, 2,899486f));
	ADD_TO_VOLUME_SET(&iLocal_288 + 1128, &iLocal_288 + 1104[1]);
	*(&iLocal_288 + 1136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_288, "v_ARMAddKO", 2,802597E-45f, Vector(-2163,343f, 16,51208f, 2594,041f), Vector(0.0f, 0.0f, 0.0f), Vector(4,827116f, 6,919012f, 9,525903f));
	*(&iLocal_288 + 1144) = Vector(-2170,9f, 16,8744f, 2600,287f);
	*(&iLocal_288 + 1144 + 12) = Vector(0.0f, 127,8909f, 0.0f);
	*(&iLocal_288 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_bodytossvictim", Vector(-2170,9f, 16,8744f, 2600,287f), Vector(0.0f, 127,8909f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_report_crime", Vector(-2095,491f, 16,449f, 2608,188f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_clear_bounty", Vector(-2193,216f, 16,94845f, 2601,375f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "cho_f_merc_giver", Vector(-2190,422f, 16,58f, 2613,903f), Vector(0.0f, 2,644236f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_jail_sit", Vector(-2080,289f, 16,962f, 2603,609f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_jail_leave_start", Vector(-2087,268f, 16,962f, 2604,136f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_jail_leave_end", Vector(-2092,863f, 16,449f, 2606,482f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_288 + 1176) = Vector(-2170,649f, 17,68509f, 2596,44f);
	*(&iLocal_288 + 1176 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_288 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkingMG", Vector(-2170,649f, 17,68509f, 2596,44f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_288 + 1208) = Vector(-2168,076f, 16,86944f, 2597,722f);
	*(&iLocal_288 + 1208 + 12) = Vector(0.0f, 48,44841f, 0.0f);
	*(&iLocal_288 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkcrowd1", Vector(-2168,076f, 16,86944f, 2597,722f), Vector(0.0f, 48,44841f, 0.0f));
	*(&iLocal_288 + 1240) = Vector(-2170,211f, 16,86944f, 2598,316f);
	*(&iLocal_288 + 1240 + 12) = Vector(0.0f, 17,33325f, 0.0f);
	*(&iLocal_288 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkcrowd2", Vector(-2170,211f, 16,86944f, 2598,316f), Vector(0.0f, 17,33325f, 0.0f));
	*(&iLocal_288 + 1272) = Vector(-2171,893f, 16,86944f, 2598,577f);
	*(&iLocal_288 + 1272 + 12) = Vector(0.0f, -16,90825f, 0.0f);
	*(&iLocal_288 + 1296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkcrowd3", Vector(-2171,893f, 16,86944f, 2598,577f), Vector(0.0f, -16,90825f, 0.0f));
	*(&iLocal_288 + 1304) = Vector(-2169,171f, 16,86944f, 2598,501f);
	*(&iLocal_288 + 1304 + 12) = Vector(0.0f, 32,87228f, 0.0f);
	*(&iLocal_288 + 1328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkcrowd4", Vector(-2169,171f, 16,86944f, 2598,501f), Vector(0.0f, 32,87228f, 0.0f));
	*(&iLocal_288 + 1336) = Vector(-2171,027f, 16,86944f, 2598,789f);
	*(&iLocal_288 + 1336 + 12) = Vector(0.0f, -8,958943f, 0.0f);
	*(&iLocal_288 + 1360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkcrowd5", Vector(-2171,027f, 16,86944f, 2598,789f), Vector(0.0f, -8,958943f, 0.0f));
	*(&iLocal_288 + 1368) = Vector(-2169,841f, 16,86944f, 2599,399f);
	*(&iLocal_288 + 1368 + 12) = Vector(-0,4901945f, 8,718404f, -0,5253778f);
	*(&iLocal_288 + 1392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinkcrowd6", Vector(-2169,841f, 16,86944f, 2599,399f), Vector(-0,4901945f, 8,718404f, -0,5253778f));
	*(&iLocal_288 + 1400) = Vector(-2169,429f, 16,86944f, 2597,374f);
	*(&iLocal_288 + 1400 + 12) = Vector(0.0f, 12,72948f, 0.0f);
	*(&iLocal_288 + 1424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_drinksrch", Vector(-2169,429f, 16,86944f, 2597,374f), Vector(0.0f, 12,72948f, 0.0f));
	*(&iLocal_288 + 1432) = Vector(-2181,389f, 16,277f, 2586,534f);
	*(&iLocal_288 + 1432 + 12) = Vector(0.0f, 188,801f, 0.0f);
	*(&iLocal_288 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_playerDuel1", Vector(-2181,389f, 16,277f, 2586,534f), Vector(0.0f, 188,801f, 0.0f));
	*(&iLocal_288 + 1464) = Vector(-2181,338f, 16,294f, 2599,876f);
	*(&iLocal_288 + 1464 + 12) = Vector(0.0f, 1,264f, 0.0f);
	*(&iLocal_288 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_enDuel1", Vector(-2181,338f, 16,294f, 2599,876f), Vector(0.0f, 1,264f, 0.0f));
	*(&iLocal_288 + 1496) = Vector(-2129,266f, 16,097f, 2611,822f);
	*(&iLocal_288 + 1496 + 12) = Vector(0.0f, 88,504f, 0.0f);
	*(&iLocal_288 + 1520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_playerDuel2", Vector(-2129,266f, 16,097f, 2611,822f), Vector(0.0f, 88,504f, 0.0f));
	*(&iLocal_288 + 1528) = Vector(-2137,4f, 16,098f, 2611,296f);
	*(&iLocal_288 + 1528 + 12) = Vector(0.0f, 264,2684f, 0.0f);
	*(&iLocal_288 + 1552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_enDuel12", Vector(-2137,4f, 16,098f, 2611,296f), Vector(0.0f, 264,2684f, 0.0f));
	*(&iLocal_288 + 1560) = Vector(-2116,527f, 16,445f, 2566,926f);
	*(&iLocal_288 + 1560 + 12) = Vector(0.0f, 227,854f, 0.0f);
	*(&iLocal_288 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_playerDuel3", Vector(-2116,527f, 16,445f, 2566,926f), Vector(0.0f, 227,854f, 0.0f));
	*(&iLocal_288 + 1592) = Vector(-2109,878f, 16,301f, 2572,269f);
	*(&iLocal_288 + 1592 + 12) = Vector(0.0f, 55,16524f, 0.0f);
	*(&iLocal_288 + 1616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_enDuel13", Vector(-2109,878f, 16,301f, 2572,269f), Vector(0.0f, 55,16524f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_cell_leave_end", Vector(-2087,215f, 16,962f, 2603,952f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_cell_leave_cop", Vector(-2083,469f, 16,962f, 2605,973f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_288 + 1624) = Vector(-2192,53f, 16,98591f, 2607,551f);
	*(&iLocal_288 + 1624 + 12) = Vector(0.0f, -92,6777f, 0.0f);
	*(&iLocal_288 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_train", Vector(-2192,53f, 16,98591f, 2607,551f), Vector(0.0f, -92,6777f, 0.0f));
	*(&iLocal_288 + 1656) = Vector(-2167,233f, 16,29295f, 2590,677f);
	*(&iLocal_288 + 1656 + 12) = Vector(0.0f, 151,3821f, 0.0f);
	*(&iLocal_288 + 1680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_saloon", Vector(-2167,233f, 16,29295f, 2590,677f), Vector(0.0f, 151,3821f, 0.0f));
	*(&iLocal_288 + 1688) = Vector(-2170,675f, 16,29295f, 2571,132f);
	*(&iLocal_288 + 1688 + 12) = Vector(0.0f, -90,65844f, 0.0f);
	*(&iLocal_288 + 1712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_barn", Vector(-2170,675f, 16,29295f, 2571,132f), Vector(0.0f, -90,65844f, 0.0f));
	*(&iLocal_288 + 1720) = Vector(-2145,966f, 16,62962f, 2558,591f);
	*(&iLocal_288 + 1720 + 12) = Vector(0.0f, -83,30785f, 0.0f);
	*(&iLocal_288 + 1744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_blacksmith", Vector(-2145,966f, 16,62962f, 2558,591f), Vector(0.0f, -83,30785f, 0.0f));
	*(&iLocal_288 + 1752) = Vector(-2124,392f, 16,88521f, 2596,95f);
	*(&iLocal_288 + 1752 + 12) = Vector(0.0f, 188,1912f, 0.0f);
	*(&iLocal_288 + 1776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_doctor", Vector(-2124,392f, 16,88521f, 2596,95f), Vector(0.0f, 188,1912f, 0.0f));
	*(&iLocal_288 + 1784) = Vector(-2171,142f, 19,417f, 2614,241f);
	*(&iLocal_288 + 1784 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_288 + 1808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "camera_cut_pos1_store", Vector(-2171,142f, 19,417f, 2614,241f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_288 + 1816) = Vector(-2171,126f, 19,266f, 2619,119f);
	*(&iLocal_288 + 1816 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_288 + 1840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "camera_cut_pos2_store", Vector(-2171,126f, 19,266f, 2619,119f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_288 + 1848) = Vector(-2169,112f, 16,353f, 2616,786f);
	*(&iLocal_288 + 1848 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_288 + 1872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "return_gateway_pos_store", Vector(-2169,112f, 16,353f, 2616,786f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_288 + 1880) = Vector(-2167,672f, 16,446f, 2618,763f);
	*(&iLocal_288 + 1880 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_288 + 1904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "return_stand_pos_store", Vector(-2167,672f, 16,446f, 2618,763f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_288 + 1912) = Vector(-2147,907f, 16,75869f, 2625,732f);
	*(&iLocal_288 + 1912 + 12) = Vector(0.0f, -47,42524f, 0.0f);
	*(&iLocal_288 + 1936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_store1", Vector(-2147,907f, 16,75869f, 2625,732f), Vector(0.0f, -47,42524f, 0.0f));
	*(&iLocal_288 + 1944) = Vector(-2140,414f, 19,422f, 2614,436f);
	*(&iLocal_288 + 1944 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_288 + 1968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "camera_cut_pos1_store1", Vector(-2140,414f, 19,422f, 2614,436f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_288 + 1976) = Vector(-2145,155f, 19,271f, 2615,582f);
	*(&iLocal_288 + 1976 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_288 + 2000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "camera_cut_pos2_store1", Vector(-2145,155f, 19,271f, 2615,582f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_288 + 2008) = Vector(-2142,419f, 16,358f, 2617f);
	*(&iLocal_288 + 2008 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_288 + 2032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "return_gateway_pos_store1", Vector(-2142,419f, 16,358f, 2617f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_288 + 2040) = Vector(-2144,009f, 16,451f, 2618,859f);
	*(&iLocal_288 + 2040 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_288 + 2064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "return_stand_pos_store1", Vector(-2144,009f, 16,451f, 2618,859f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_288 + 2072) = Vector(-2129,354f, 16,612f, 2625,168f);
	*(&iLocal_288 + 2072 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_288 + 2096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_bank", Vector(-2129,354f, 16,612f, 2625,168f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_288 + 2104) = Vector(-2072,198f, 19,52868f, 2645,46f);
	*(&iLocal_288 + 2104 + 12) = Vector(0.0f, 403,5858f, 0.0f);
	*(&iLocal_288 + 2128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_interiorPoint_school", Vector(-2072,198f, 19,52868f, 2645,46f), Vector(0.0f, 403,5858f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos1", Vector(-2206,391f, 21,152f, 2620,89f), Vector(-6,655f, -71,456f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos2", Vector(-2189,48f, 17,958f, 2560,31f), Vector(3,982f, -157,227f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos3", Vector(-2069,693f, 24,095f, 2694,148f), Vector(-2,511f, 19,024f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos4", Vector(-2077,736f, 18,772f, 2554,519f), Vector(0,713f, 152,712f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos5", Vector(-2185,318f, 17,46f, 2608,777f), Vector(8,913f, -55,198f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos6", Vector(-2190,373f, 17,537f, 2618,18f), Vector(4,15f, -53,746f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos7", Vector(-2179,656f, 17,569f, 2613,073f), Vector(4,859f, -85,196f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos8", Vector(-2102,336f, 17,888f, 2614,594f), Vector(10,192f, 36,687f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos9", Vector(-2101,417f, 18,144f, 2619,773f), Vector(2,389f, 67,828f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "arm_vista_cam_pos10", Vector(-2086,482f, 18,417f, 2633,734f), Vector(13,618f, -117,103f, 0.0f));
	*(&iLocal_288 + 2136) = Vector(-2191,645f, 16,98591f, 2607,489f);
	*(&iLocal_288 + 2136 + 12) = Vector(0.0f, -92,6777f, 0.0f);
	*(&iLocal_288 + 2160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "armf_player_shop_flag", Vector(-2191,645f, 16,98591f, 2607,489f), Vector(0.0f, -92,6777f, 0.0f));
	*(&iLocal_288 + 2168) = Vector(-2131,836f, 16,266f, 2615,536f);
	*(&iLocal_288 + 2168 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_288 + 2192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_288, "horse_pos_store1", Vector(-2131,836f, 16,266f, 2615,536f), Vector(0.0f, 109,9197f, 0.0f));
	return 1;
}

void Function_259(int iParam0, int iParam1) //Position: 0x118AB / 71851
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

void Function_260(var uParam0, int iParam1) //Position: 0x118F5 / 71925
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_261() //Position: 0x11906 / 71942
{
	return;
}

bool Function_262() //Position: 0x1190C / 71948
{
	return 1;
}

void Function_263() //Position: 0x11913 / 71955
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 25, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 20, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 11, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(20, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 3, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(11, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(3, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 24, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
	return;
}

bool Function_264() //Position: 0x11ACC / 72396
{
	return Function_265();
}

int Function_265() //Position: 0x11AD5 / 72405
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
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	
	Function_259(3, 3);
	uVar0 = &uVar0;
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_r", 1, 0);
	if (!Function_164(&iLocal_178 + 8))
	{
		return 0;
	}
	iLocal_178 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&iLocal_178 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "nsurvVol_1", 2,802597E-45f, Vector(-2070,21f, 19,54068f, 2647,316f), Vector(0.0f, -44,68414f, 0.0f), Vector(10,48651f, 7,180852f, 7,180852f));
	*(&iLocal_178 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_1", 2,802597E-45f, Vector(-2165,92f, 20,08108f, 2628,028f), Vector(0.0f, 0.0f, 0.0f), Vector(14,77761f, 10,74066f, 22,27874f));
	*(&iLocal_178 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_2", 2,802597E-45f, Vector(-2068,748f, 22,41465f, 2647,851f), Vector(0.0f, 44,10327f, 0.0f), Vector(12,26434f, 10,74066f, 19,50289f));
	*(&iLocal_178 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_3", 2,802597E-45f, Vector(-2170,838f, 21,72231f, 2571,435f), Vector(0.0f, 0,463227f, 0.0f), Vector(10,90737f, 4,966702f, 13,93656f));
	*(&iLocal_178 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_5", 2,802597E-45f, Vector(-2144,754f, 19,61786f, 2541,403f), Vector(0.0f, -0,2719102f, 0.0f), Vector(7,812959f, 7,998405f, 7,944809f));
	*(&iLocal_178 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_6", 2,802597E-45f, Vector(-2207,132f, 21,08284f, 2618,742f), Vector(0.0f, -0,2719102f, 0.0f), Vector(6,971494f, 7,998405f, 7,12601f));
	*(&iLocal_178 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_7", 2,802597E-45f, Vector(-2157,617f, 21,08284f, 2593,033f), Vector(0.0f, -0,2719102f, 0.0f), Vector(7,313369f, 9,997605f, 15,97993f));
	*(&iLocal_178 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_8", 2,802597E-45f, Vector(-2141,024f, 21,02841f, 2597,789f), Vector(0.0f, -0,2719102f, 0.0f), Vector(10,71669f, 11,12607f, 13,25503f));
	*(&iLocal_178 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_9", 2,802597E-45f, Vector(-2132,115f, 19,97619f, 2596,381f), Vector(0.0f, -0,2719102f, 0.0f), Vector(7,438366f, 9,216006f, 9,532724f));
	*(&iLocal_178 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_10", 2,802597E-45f, Vector(-2114,106f, 19,97619f, 2593,506f), Vector(0.0f, -0,2719102f, 0.0f), Vector(13,22022f, 9,216006f, 15,91687f));
	*(&iLocal_178 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_11", 2,802597E-45f, Vector(-2079,162f, 19,97619f, 2613,67f), Vector(0.0f, -65,2108f, 0.0f), Vector(13,53482f, 9,216006f, 16,28728f));
	*(&iLocal_178 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_12", 2,802597E-45f, Vector(-2112,452f, 20,84237f, 2626,117f), Vector(0.0f, -0,1940461f, 0.0f), Vector(9,249534f, 9,566641f, 11,31154f));
	*(&iLocal_178 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_13", 2,802597E-45f, Vector(-2122,229f, 19,91945f, 2626,084f), Vector(0.0f, -0,1940461f, 0.0f), Vector(6,549139f, 9,566641f, 11,31154f));
	*(&iLocal_178 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_14", 2,802597E-45f, Vector(-2148,307f, 20,22966f, 2626,093f), Vector(0.0f, -0,1940461f, 0.0f), Vector(16,79068f, 14,59637f, 15,88211f));
	*(&iLocal_178 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_1", 2,802597E-45f, Vector(-2141,03f, 21,47195f, 2599,092f), Vector(0.0f, -0,2719102f, 0.0f), Vector(10,71669f, 10,27688f, 16,41327f));
	*(&iLocal_178 + 416) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, Function_61(), "p_gen_boiler01x", Vector(-2138,359f, 19,4f, 2573,469f), Vector(81,21272f, -59,54844f, -9,668658f), 0);
	*(&iLocal_178 + 424) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, Function_61(), "p_gen_boiler01x", Vector(-2136,288f, 19,3f, 2573,469f), Vector(81,21272f, -59,54844f, -9,668658f), 0);
	*(&iLocal_178 + 432) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_178, Function_61(), "p_gen_boiler01x", Vector(-2133,824f, 19,20046f, 2573,469f), Vector(81,21272f, -59,54844f, -9,668658f), 0);
	*(&iLocal_178 + 200) = Vector(-2161,618f, 16,42906f, 2606,938f);
	*(&iLocal_178 + 200 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_playerHorse", Vector(-2161,618f, 16,42906f, 2606,938f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 232) = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup_defSet", &iLocal_178, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def02", Vector(-2168,342f, 20,08108f, 2632,995f), Vector(0.0f, 126,5852f, 0.0f));
	DECOR_SET_BOOL(&uVar1, "Shoot", 1);
	DECOR_SET_INT(&uVar1, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_178 + 232);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def03", Vector(-2166,701f, 19,75207f, 2572,243f), Vector(0.0f, -92,44286f, 0.0f));
	DECOR_SET_BOOL(&uVar2, "CrouchShoot", 1);
	DECOR_SET_INT(&uVar2, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_178 + 232);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def04", Vector(-2066,161f, 19,53035f, 2647,494f), Vector(0.0f, 48,26896f, 0.0f));
	DECOR_SET_INT(&uVar3, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_178 + 232);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def05", Vector(-2070,451f, 19,53463f, 2650,856f), Vector(0.0f, 40.0f, 0.0f));
	DECOR_SET_INT(&uVar4, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_178 + 232);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def06", Vector(-2161,884f, 20,08108f, 2627,231f), Vector(0.0f, 316.0f, 0.0f));
	DECOR_SET_INT(&uVar5, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_178 + 232);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def01_core", Vector(-2161,784f, 20,08108f, 2623,052f), Vector(0.0f, 323,9316f, 0.0f));
	DECOR_SET_BOOL(&uVar6, "Shoot", 1);
	DECOR_SET_BOOL(&uVar6, "Core", 1);
	DECOR_SET_INT(&uVar6, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_178 + 232);
	*(&iLocal_178 + 240) = CREATE_OBJECTSET_IN_LAYOUT("ammo_00Set", &iLocal_178, 8, 0);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_01_player", Vector(-2162,122f, 20,08108f, 2624,264f), Vector(0.0f, 359,9824f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_178 + 240);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_01_surv", Vector(-2162,11f, 20,08108f, 2622,864f), Vector(0.0f, 180,6363f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_178 + 240);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_02_player", Vector(-2166,945f, 20,08108f, 2632,7f), Vector(0.0f, -270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_178 + 240);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_02_surv", Vector(-2168,345f, 20,08108f, 2632,7f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_178 + 240);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_03_player", Vector(-2167,036f, 19,75207f, 2573,642f), Vector(0.0f, -362,2121f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_178 + 240);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_03_surv", Vector(-2167,021f, 19,75207f, 2572,241f), Vector(0.0f, -180,2871f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_178 + 240);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_04_player", Vector(-2066,161f, 19,53035f, 2648,894f), Vector(0.0f, 360.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_178 + 240);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_04_surv", Vector(-2066,161f, 19,53035f, 2647,494f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_178 + 240);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_05_player", Vector(-2070,406f, 19,53463f, 2649,556f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_178 + 240);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_05_surv", Vector(-2070,407f, 19,53463f, 2650,956f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_178 + 240);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_06_player", Vector(-2163,285f, 20,08108f, 2627,421f), Vector(0.0f, 630.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_178 + 240);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_06_surv", Vector(-2161,885f, 20,08108f, 2627,422f), Vector(0.0f, 450.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_178 + 240);
	*(&iLocal_178 + 248) = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup01_defSet", &iLocal_178, 8, 0);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def08", Vector(-2168,342f, 20,08108f, 2632,995f), Vector(0.0f, 126,5852f, 0.0f));
	DECOR_SET_BOOL(&uVar19, "Shoot", 1);
	DECOR_SET_INT(&uVar19, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_178 + 248);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def09", Vector(-2166,701f, 19,75207f, 2572,243f), Vector(0.0f, -92,44286f, 0.0f));
	DECOR_SET_BOOL(&uVar20, "CrouchShoot", 1);
	DECOR_SET_INT(&uVar20, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_178 + 248);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def010", Vector(-2144,174f, 19,00509f, 2543,078f), Vector(0.0f, 173,2315f, 0.0f));
	DECOR_SET_INT(&uVar21, "nShoot_Vol", true);
	DECOR_SET_INT(&uVar21, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_178 + 248);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def011", Vector(-2070,451f, 19,53463f, 2650,856f), Vector(0.0f, 40.0f, 0.0f));
	DECOR_SET_INT(&uVar22, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_178 + 248);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def012", Vector(-2161,884f, 20,08108f, 2627,231f), Vector(0.0f, 316.0f, 0.0f));
	DECOR_SET_INT(&uVar23, "nUsingEnum", 547);
	DECOR_SET_INT(&uVar23, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_178 + 248);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def07_core", Vector(-2137,14f, 19,8104f, 2602,273f), Vector(0.0f, 180.0f, 0.0f));
	DECOR_SET_BOOL(&uVar24, "Shoot", 1);
	DECOR_SET_BOOL(&uVar24, "Core", 1);
	DECOR_SET_INT(&uVar24, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_178 + 248);
	*(&iLocal_178 + 256) = CREATE_OBJECTSET_IN_LAYOUT("ammo_01Set", &iLocal_178, 8, 0);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_07_player", Vector(-2138,54f, 19,8104f, 2602,273f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_178 + 256);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_07_surv", Vector(-2137,14f, 19,8104f, 2602,273f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_178 + 256);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_10_player", Vector(-2142,774f, 19,00509f, 2543,085f), Vector(0.0f, 449,2462f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_178 + 256);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_10_surv", Vector(-2144,174f, 19,00509f, 2543,078f), Vector(0.0f, 269,9204f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_178 + 256);
	*(&iLocal_178 + 264) = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup02_defSet", &iLocal_178, 8, 0);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def014", Vector(-2168,342f, 20,08108f, 2632,995f), Vector(0.0f, 126,5852f, 0.0f));
	DECOR_SET_BOOL(&uVar29, "Shoot", 1);
	DECOR_SET_INT(&uVar29, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_178 + 264);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def015", Vector(-2166,701f, 19,75207f, 2572,243f), Vector(0.0f, -92,44286f, 0.0f));
	DECOR_SET_BOOL(&uVar30, "CrouchShoot", 1);
	DECOR_SET_INT(&uVar30, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_178 + 264);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def016", Vector(-2206,283f, 19,80227f, 2620,212f), Vector(0.0f, 259,6932f, 0.0f));
	DECOR_SET_INT(&uVar31, "nShoot_Vol", true);
	DECOR_SET_INT(&uVar31, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_178 + 264);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def017", Vector(-2070,451f, 19,53463f, 2650,856f), Vector(0.0f, 40.0f, 0.0f));
	DECOR_SET_INT(&uVar32, "nShoot_Vol", true);
	DECOR_SET_INT(&uVar32, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_178 + 264);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def018", Vector(-2161,884f, 20,08108f, 2627,231f), Vector(0.0f, 316.0f, 0.0f));
	DECOR_SET_INT(&uVar33, "nUsingEnum", 547);
	DECOR_SET_INT(&uVar33, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_178 + 264);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def013_core", Vector(-2137,14f, 19,8104f, 2602,273f), Vector(0.0f, 180.0f, 0.0f));
	DECOR_SET_BOOL(&uVar34, "Shoot", 1);
	DECOR_SET_BOOL(&uVar34, "Core", 1);
	DECOR_SET_INT(&uVar34, "GiveWeapon", 41);
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_178 + 264);
	*(&iLocal_178 + 272) = CREATE_OBJECTSET_IN_LAYOUT("ammo_02Set", &iLocal_178, 8, 0);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_02_16_player", Vector(-2204,969f, 19,80227f, 2618,96f), Vector(0.0f, 504,0379f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_178 + 272);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_02_16_surv", Vector(-2205,923f, 19,80227f, 2620,278f), Vector(0.0f, 324,1245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_178 + 272);
	*(&iLocal_178 + 280) = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup_safeSet", &iLocal_178, 8, 0);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe01", Vector(-2162,168f, 20,08108f, 2623,518f), Vector(0.0f, -64,06721f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &iLocal_178 + 280);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe02", Vector(-2174,743f, 19,95778f, 2599,904f), Vector(0.0f, -139,7946f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &iLocal_178 + 280);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe03", Vector(-2173,906f, 19,95868f, 2601,686f), Vector(0.0f, 10,16643f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &iLocal_178 + 280);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe04", Vector(-2072,72f, 18,72683f, 2639,218f), Vector(0.0f, 49,94161f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &iLocal_178 + 280);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe05", Vector(-2143,155f, 19,8104f, 2602,208f), Vector(0.0f, 179,6044f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &iLocal_178 + 280);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe06", Vector(-2148,633f, 16,7691f, 2620,972f), Vector(0.0f, 0,9483809f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &iLocal_178 + 280);
	*(&iLocal_178 + 288) = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", &iLocal_178, 8, 0);
	uVar43 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_2", Vector(-2129,276f, 19,89306f, 2621,985f), Vector(0.0f, -180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar43, &iLocal_178 + 288);
	uVar44 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_3", Vector(-2136,512f, 16,85913f, 2595,416f), Vector(0.0f, 135.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar44, &iLocal_178 + 288);
	uVar45 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_4", Vector(-2168,049f, 19,9497f, 2602,008f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar45, &iLocal_178 + 288);
	uVar46 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_5", Vector(-2193,855f, 16,96554f, 2612,281f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar46, &iLocal_178 + 288);
	*(&iLocal_178 + 296) = Vector(-2158,996f, 19,93287f, 2597,94f);
	*(&iLocal_178 + 296 + 12) = Vector(0.0f, 90.0f, 0.0f);
	*(&iLocal_178 + 320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "player_save_01", Vector(-2158,996f, 19,93287f, 2597,94f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_178 + 328) = CREATE_OBJECTSET_IN_LAYOUT("BodiesFlagSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 336[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "BodiesFlag01", Vector(-2194,235f, 16,158f, 2641,113f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 336[0], &iLocal_178 + 328);
	*(&iLocal_178 + 352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Rand_Idle_Sit_Ground666", "Rand_Idle_Sit_Ground", Vector(-2164,214f, 20,08108f, 2623,008f), Vector(0.0f, -183,39f, 0.0f));
	*(&iLocal_178 + 360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Rand_Idle_Sit_Ground1666", "Rand_Idle_Sit_Ground", Vector(-2168,294f, 20,08108f, 2628,449f), Vector(0.0f, -91,13733f, 0.0f));
	*(&iLocal_178 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Rand_Idle_Sit_Ground01", "Rand_Idle_Sit_Ground", Vector(-2162,156f, 20,08108f, 2623,508f), Vector(0.0f, 295,2204f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 368), 0);
	*(&iLocal_178 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "rand_idle_stand1", "rand_idle_stand", Vector(-2174,75f, 19,98901f, 2599,904f), Vector(0.0f, 220,8568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 376), 0);
	*(&iLocal_178 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "rand_idle_stand2", "rand_idle_stand", Vector(-2173,907f, 19,9909f, 2601,692f), Vector(0.0f, 10,14409f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 384), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Rand_Idle_Sit_Ground02", "Rand_Idle_Sit_Ground", Vector(-2072,657f, 18,73296f, 2639,286f), Vector(0.0f, 48,35383f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_178 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_roof_rfl1", "DLC_survivor_roof_rfl", Vector(-2143,156f, 19,8104f, 2602,233f), Vector(0.0f, 180,681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 392), 0);
	*(&iLocal_178 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ZombiePack_player_sleep_bed_R", "ZombiePack_player_sleep_bed_R", Vector(-2156,492f, 19,93967f, 2596,765f), Vector(0.0f, -90.0f, 0.0f));
	*(&iLocal_178 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "rand_idle_stand4", "rand_idle_stand", Vector(-2148,63f, 16,7679f, 2620,983f), Vector(0.0f, -0,03786191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 408), 0);
	return 1;
}

void Function_266(int iParam0, bool bParam1) //Position: 0x13466 / 78950
{
	var uVar0;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam0);
	if ((iParam0 != Global_46838[1] || iParam0 != Global_46894[1]) || iParam0 != Global_46914[1])
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

void Function_267(int iParam0, int iParam1, bool bParam2) //Position: 0x13501 / 79105
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(&iParam0 + 608, 16);
	if (!&bParam2)
	{
		if (!Function_269(iParam1))
		{
			Function_197(&iParam0 + 608, 16);
			return;
		}
	}
	*(&iParam0 + 624) = Function_200(0, iParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_92(&iVar1, iParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_268(&iParam0 + 384, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (&bParam2)
	{
		Function_169(&iParam0 + 384, "tense_with_guns", 5, 1);
		Function_169(&iParam0 + 384, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		*(&iParam0 + 376) = 1;
	}
	Function_164(&iParam0 + 384);
	if (HUD_IS_FADED())
	{
		Function_34(iParam1, Function_27(iParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_268(struct<2>[] Param0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1360D / 79373
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_167(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_167(&(Param0[iVar02]), 8);
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

bool Function_269(int iParam0) //Position: 0x136E9 / 79593
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_273(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_271(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_270(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_270(int iParam0) //Position: 0x13764 / 79716
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_271(int iParam0) //Position: 0x13779 / 79737
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_272(iParam0)7].f_12 < 0;
}

int Function_272(int iParam0) //Position: 0x137DF / 79839
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

bool Function_273(int iParam0, int iParam1) //Position: 0x138A1 / 80033
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_274() //Position: 0x138BE / 80062
{
	SET_DUST_LEVEL(1);
	Function_169(&iLocal_838, "$/tune/refGroups/campsiteSets/cam_deadBody03x", 7, 0);
	return;
}

void Function_275(char* cParam0) //Position: 0x13902 / 80130
{
	if (!Function_26(128))
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

