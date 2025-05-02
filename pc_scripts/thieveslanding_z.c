//Decompiled with MagicRDR v1.0
//Function Count : 269
//Statics Count : 1414
//Natives Count : 443
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
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
	var uLocal_180 = 5;
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
	int iLocal_284 = 0;
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
	var uLocal_304 = 13;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 7;
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
	var uLocal_352 = 2;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 1;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 2;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 19;
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
	var uLocal_418 = 20;
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
	var uLocal_462 = 2;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 2;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 2;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 1;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 3;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 2;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 3;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
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
	var uLocal_526 = 5;
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
	var uLocal_540 = 4;
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
	var uLocal_552 = 2;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 2;
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
	var uLocal_578 = 1;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 2;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 2;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 2;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 2;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 6;
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
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 21;
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
	var uLocal_1250 = 20;
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
	bool bScriptParam_0 = false;
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
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_268(&cVar0, 3);
	Function_267();
	if (StackVal && (((((!Global_6666 && bScriptParam_0 == Global_46838[1]) && bScriptParam_0 == Global_46894[1]) && bScriptParam_0 == Global_46894[2]) && bScriptParam_0 == Global_46914[1]) && bScriptParam_0 == Global_46796[0]) == 5)
	{
		bLocal_177 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_6632)
				{
					if (bLocal_177)
					{
						Function_260(&iLocal_13, bScriptParam_0, 0);
					}
					else
					{
						Function_259(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000001:
				if (Function_257())
				{
					Function_256();
					iLocal_5 = 2;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_255())
				{
					Function_254();
					Function_253(&(Global_43791[bScriptParam_0]), 32);
					iLocal_5 = 3;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_6 = 500;
				if (Function_250())
				{
					Function_248(bScriptParam_0);
					if (bLocal_177)
					{
						Function_246(&iLocal_13, Function_247(), bScriptParam_0);
						Function_245(&iLocal_13, Function_247());
					}
					Function_253(&(Global_43791[bScriptParam_0]), 16);
					iLocal_5 = 4;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_7))
				{
					iLocal_5 = 5;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000005:
				Function_244(&uLocal_9);
				Function_241();
				Function_238(bScriptParam_0);
				iLocal_5 = 6;
				bLocal_6 = false;
				break;
			
			case 0x00000006:
				if ((Function_237() && Function_236(Global_44085[bScriptParam_09])) && Function_235(&iLocal_13))
				{
					Function_234();
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				else
				{
					bLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_177)
				{
					Function_222(&iLocal_13, bScriptParam_0, Function_247());
				}
				Function_221(bScriptParam_0);
				Function_220();
				Function_219();
				Function_253(&(Global_43791[bScriptParam_0]), 8);
				if (Function_218(&(Global_43791[bScriptParam_0]), 131072))
				{
					Function_217(&(Global_43791[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000008:
				Function_216(bScriptParam_0);
				Function_215();
				Function_214(bScriptParam_0);
				iLocal_5 = 9;
				bLocal_6 = false;
				break;
			
			case 0x00000009:
				Function_209(bScriptParam_0);
				Function_208(64);
				Function_253(&(Global_43791[bScriptParam_0]), 512);
				iLocal_5 = 10;
				bLocal_6 = false;
				break;
			
			case 0x0000000A:
				Function_207(Function_247(), bScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
				Function_206(&cVar0, 5.0f);
				Function_253(&(Global_43791[bScriptParam_0]), 4);
				iLocal_5 = 11;
				bLocal_6 = false;
				break;
			
			case 0x0000000B:
				Function_205(bScriptParam_0);
				if (Function_218(&(Global_43791[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				if (bLocal_177)
				{
					Function_88(&iLocal_13, bScriptParam_0);
				}
				Function_51(&uLocal_9, &uLocal_1122, Function_87(), bScriptParam_0);
				Function_47(&uLocal_1250, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(bLocal_6);
	}
	if (bLocal_177)
	{
		Function_30(&iLocal_13, bScriptParam_0);
	}
	Function_25(bScriptParam_0);
	Function_19();
	Function_18();
	Function_17();
	Function_9(&uLocal_9, &uLocal_1122);
	Function_8(&uLocal_1250);
	Function_6();
	Function_2(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_208(64);
	Function_217(&(Global_43791[bScriptParam_0]), 32);
	Function_217(&(Global_43791[bScriptParam_0]), 64);
	Function_217(&(Global_43791[bScriptParam_0]), 8);
	Function_217(&(Global_43791[bScriptParam_0]), 512);
	Function_217(&(Global_43791[bScriptParam_0]), 16);
	Function_217(&(Global_43791[bScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_206(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C9 / 969
{
	SET_DUST_LEVEL(1);
	return;
}

void Function_2(int iParam0) //Position: 0x3D4 / 980
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x40A / 1034
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x42C / 1068
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x442 / 1090
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x458 / 1112
{
	Function_7();
	return;
}

void Function_7() //Position: 0x461 / 1121
{
	RELEASE_LAYOUT_REF(&iLocal_284);
	return;
}

void Function_8(struct<4>[] Param0) //Position: 0x46E / 1134
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

void Function_9(var uParam0, vector3[] vParam1) //Position: 0x4D3 / 1235
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_16(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_15(&(vParam1[iVar03]), 4);
		}
		if (Function_16(&(vParam1[iVar03]), 8))
		{
			Function_10(0, 0, 30);
			Function_15(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_10(bool bParam0, int iParam1, int iParam2) //Position: 0x530 / 1328
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
		Function_11(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_11(bool bParam0, bool bParam1, bool bParam2) //Position: 0x61A / 1562
{
	int iVar0;
	
	Function_14(bParam0);
	Function_13(&bParam1);
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
	Function_12();
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

void Function_12() //Position: 0x799 / 1945
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_13(int iParam0) //Position: 0x7A5 / 1957
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

void Function_14(int iParam0) //Position: 0x7EF / 2031
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

void Function_15(struct<17> Param0) //Position: 0x835 / 2101
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_16(struct<17> Param0) //Position: 0x852 / 2130
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x870 / 2160
{
	return;
}

void Function_18() //Position: 0x876 / 2166
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(1);
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(1);
	return;
}

void Function_19() //Position: 0x8BF / 2239
{
	Function_20();
	return;
}

void Function_20() //Position: 0x8C8 / 2248
{
	Function_21(&iLocal_178 + 8);
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_21(int iParam0) //Position: 0x8DB / 2267
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_22(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_22(struct<2>[] Param0, int iParam1) //Position: 0x903 / 2307
{
	if (Function_24(&(Param0[iParam12]), 4))
	{
		if (Function_24(&(Param0[iParam12]), 1))
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
			Function_23(&(Param0[iParam12]), 1);
			Function_23(&(Param0[iParam12]), 2);
			Function_23(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_23(struct<13> Param0) //Position: 0xA4E / 2638
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_24(struct<13> Param0) //Position: 0xA6B / 2667
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_25(bool bParam0) //Position: 0xA89 / 2697
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_218(&(Global_43791[bParam0]), 0x20000000))
	{
		Function_217(&(Global_43791[bParam0]), 0x20000000);
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
		if (Function_27(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_26(1));
		}
	}
	return;
}

bool Function_26(int iParam0) //Position: 0xB43 / 2883
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0xB5F / 2911
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
	return (((Function_29(uVar0, 0x1000000) || Function_29(uVar0, 0x2000000)) || Function_29(uVar0, 0x4000000)) || Function_28(bParam0));
}

bool Function_28(int iParam0) //Position: 0xBD2 / 3026
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(int iParam0, bool bParam1) //Position: 0xBEF / 3055
{
	return (iParam0 && bParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xBFC / 3068
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_5(iParam1) || Function_29(&iParam0 + 608, 16))
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
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
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

void Function_31(int iParam0) //Position: 0xF63 / 3939
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

int Function_32(int iParam0) //Position: 0xFCA / 4042
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

void Function_33(vector3 vParam0) //Position: 0x1312 / 4882
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
	Function_21(&vParam0 + 384);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_34(iParam2, Function_27(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_26(1));
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x15F2 / 5618
{
	if (!Function_5(iParam0))
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

bool Function_35(int iParam0) //Position: 0x1D48 / 7496
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x1D5D / 7517
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1D7F / 7551
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
			bVar0++;
		}
	}
	return;
}

bool Function_38(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1E08 / 7688
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_39(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1E28 / 7720
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

void Function_40(char* cParam0) //Position: 0x1E9D / 7837
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

bool Function_41(int iParam0, var uParam1, int iParam2) //Position: 0x1ED7 / 7895
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

int Function_42(char* cParam0) //Position: 0x1F53 / 8019
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

int Function_43(int iParam0) //Position: 0x1FF4 / 8180
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

void Function_44(int iParam0, int iParam1) //Position: 0x2031 / 8241
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x2047 / 8263
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x205A / 8282
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_47(struct<4>[] Param0, bool bParam1) //Position: 0x2074 / 8308
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

void Function_48(struct<13> Param0) //Position: 0x2495 / 9365
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_49(struct<13> Param0) //Position: 0x24A8 / 9384
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x24C5 / 9413
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_51(vector3 vParam0) //Position: 0x24D7 / 9431
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

bool Function_52(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x2561 / 9569
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(&vParam0))
	{
		return 0;
	}
	Function_217(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_16(&vParam0, 2))
					{
						if (!Function_16(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_84(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_83(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_16(&vParam0, 2))
				{
					if (Function_16(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_10(0, 0, 0);
						}
						else
						{
							Function_10(0, 0, 30);
						}
						Function_15(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_16(&vParam0, 2))
					{
						if (!Function_16(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_83(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_16(&vParam0, 2))
				{
					if (Function_16(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_15(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_81(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_16(&vParam0, 2))
					{
						if (!Function_16(&vParam0, 16))
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
				else if (Function_16(&vParam0, 2))
				{
					if (Function_16(&vParam0, 16))
					{
						Function_15(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_16(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_16(&vParam0, 2))
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
				Function_15(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_218(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_16(&vParam0, 1))
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
					if (!bParam4 && Function_5(iParam2))
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

void Function_53(int iParam0) //Position: 0x29B9 / 10681
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_218(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_253(&(Global_43791[iParam0]), 4096);
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

float Function_54(int iParam0) //Position: 0x2AAA / 10922
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_55(int iParam0) //Position: 0x2AE7 / 10983
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_56(int iParam0, int iParam1) //Position: 0x2B20 / 11040
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

var Function_57(int iParam0) //Position: 0x2B8A / 11146
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

int Function_58(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2BE2 / 11234
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

void Function_59(bool bParam0) //Position: 0x2E0A / 11786
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

void Function_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2EA8 / 11944
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_55(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_55(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_65(bVar19, bParam2, &iVar17, &iVar18);
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

var Function_61() //Position: 0x34E6 / 13542
{
	int iVar0;
	
	return &iVar0;
}

var Function_62(int iParam0) //Position: 0x34EF / 13551
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3500 / 13568
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

struct<32> Function_64(char* cParam0) //Position: 0x35F7 / 13815
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3612 / 13842
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_50(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x3679 / 13945
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x368B / 13963
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

int Function_68(int iParam0) //Position: 0x37BF / 14271
{
	return Global_55480[iParam016].f_96;
}

void Function_69(int iParam0) //Position: 0x37CE / 14286
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3968 / 14696
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

void Function_71(var uParam0, int iParam1) //Position: 0x3BAC / 15276
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(int iParam0, var uParam1, int iParam2) //Position: 0x3BB9 / 15289
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x3BE3 / 15331
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
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
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
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
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

void Function_74() //Position: 0x3E96 / 16022
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

void Function_75(var uParam0, int iParam1) //Position: 0x3F09 / 16137
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

bool Function_76(bool bParam0) //Position: 0x3F3F / 16191
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

int Function_77(int iParam0) //Position: 0x3FB5 / 16309
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3FC6 / 16326
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

bool Function_79(int iParam0) //Position: 0x3FDF / 16351
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3FF5 / 16373
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x400C / 16396
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x402A / 16426
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

void Function_83(struct<17> Param0) //Position: 0x40D9 / 16601
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x40EC / 16620
{
	int iVar0;
	bool bVar1;
	
	Function_14(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_85(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_11(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x4166 / 16742
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_14(iParam0);
	Function_13(&uVar0);
	PRINTNL();
	Function_11(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x418F / 16783
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

var Function_87() //Position: 0x41AF / 16815
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(struct<82> Param0) //Position: 0x41C4 / 16836
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
	bool bVar16;
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
		Function_44(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_200(0, bParam1, 3);
		}
		if (!Function_29(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (bParam1 != Global_46914[1] || HUD_IS_FADED())
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
		Function_196(bParam1, 0.0f);
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
		Function_30(&Param0, bParam1);
		DECOR_SET_FLOAT(&Global_44085[bParam19] + 8, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_25(bParam1);
		return;
	}
	fVar0 = Function_192(Function_193(bParam1));
	fVar1 = Function_191(bParam1);
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
	if (Function_188(Function_193(bParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_29(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[bParam19] + 32, 32);
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
				Function_196(bParam1, 0.0f);
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
				Function_177(&Param0, bParam1, fVar2);
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
						fVar14 = Function_191(bParam1);
						fVar15 = (fVar14 % 10.0f);
						bVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar16));
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
	Function_175(&Param0, bParam1);
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
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], false);
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
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], true);
			iVar17++;
		}
	}
	if (Function_29(&Param0 + 608, 262144))
	{
		if (Function_235(&Param0))
		{
			Function_44(&Param0 + 608, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, bParam1, Param0);
			if (!Function_27(bParam1))
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
				if (Function_27(bParam1))
				{
					if ((RAND_INT_RANGE(false, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_259(bParam1, 1);
					Function_157(bParam1);
					Function_195(0, 4294967295);
					Function_196(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_29(&Param0 + 608, 1))
					{
						Function_156(&Param0, bParam1);
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
					Function_259(bParam1, 0);
					Function_157(bParam1);
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
				Function_114(&Param0, bParam1);
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
							iVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_103(&Param0 + 8[iVar175], iVar21);
							Function_44(&Param0 + 8[iVar175] + 32, 2);
							Function_197(&Param0 + 8[iVar175] + 32, 16);
						}
						bVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_29((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_44(&Param0 + 8[iVar175] + 32, 16);
						AI_CLEAR_DONT_HARM_ACTOR(&uVar20);
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						SET_MOVER_FROZEN(&uVar20, false);
						RESET_ANIM_SET_FOR_ACTOR(&uVar20, 1);
						uVar22 = Vector(0.0f, 0.0f, 0.0f);
						Var24 = Vector(0.0f, 0.0f, 0.0f);
						GET_OBJECT_POSITION(&Param0 + 8[iVar175] + 8, &uVar22);
						GET_OBJECT_ORIENTATION(&Param0 + 8[iVar175] + 8, &Var24);
						TASK_PRIORITY_SET(&uVar20, true);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar20, &uVar22, 3212836864);
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
				DECOR_SET_BOOL(&Global_54076, "bNoSurvivorHelp", true);
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
				Function_196(bParam1, 300.0f);
			}
			else
			{
				Function_196(bParam1, 0.0f);
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
			Function_95(bParam1);
			Function_94(&Param0);
			Function_185(&Param0, 1);
			Function_25(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_200(0, bParam1, 3);
			Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_197(&Param0 + 608, 512);
			if (!Function_29(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_91(Function_193(bParam1));
				Function_58(660, bVar43, 0, 0);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Function_260(&Param0, bParam1, 1);
			Function_246(&Param0, &Global_46715, bParam1);
			Function_245(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_235(&Param0))
			{
				if (!bParam1 != Global_46914[0])
				{
					Function_222(&Param0, bParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_222(&Param0, bParam1, &Global_46715);
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
				Function_114(&Param0, bParam1);
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				Function_259(bParam1, 1);
				Function_197(&Global_21684[Function_200(111, 111, 5)7] + 20, 4);
				Function_157(bParam1);
				Function_195(0, 4294967295);
				Function_196(bParam1, 0.0f);
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
					DECOR_SET_BOOL(&iVar44, "DeathTallied", true);
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
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_200(0, bParam1, 3);
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

void Function_89(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, bool bParam80, var uParam81, char* cParam82) //Position: 0x56A6 / 22182
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	uVar0 = GET_OBJECT_FROM_GRINGO(&uParam0);
	uVar1 = GET_OBJECT_NAME(&uVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
	uVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(&uVar3));
	Function_197(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x56FD / 22269
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

var Function_91(int iParam0) //Position: 0x58FA / 22778
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
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
					iVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					iVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					iVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					iVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					iVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					iVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					iVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					iVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					iVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					iVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					iVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					iVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					iVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					iVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					iVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					iVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					iVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					iVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					iVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					iVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					iVar13 = Global_12760[iVar102];
					break;
			}
			if (!Function_29(iVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int[] iParam0) //Position: 0x5AE4 / 23268
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

var Function_93(int iParam0) //Position: 0x5F13 / 24339
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

void Function_94(vector3 vParam0) //Position: 0x6099 / 24729
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

void Function_95(int iParam0) //Position: 0x60F3 / 24819
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

void Function_96(int iParam0) //Position: 0x612D / 24877
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

bool Function_97(int iParam0) //Position: 0x6161 / 24929
{
	return Function_98(&iParam0 + 600);
}

int Function_98(int iParam0) //Position: 0x6170 / 24944
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	struct<5> Var5;
	bool bVar10;
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
			bVar4 = GET_ACTOR_ENUM(&uVar3);
			if ((bVar4 > 1128 || bVar4 < 1130) && bVar4 == 1247)
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
		Function_253(&(Global_43791[Global_43789]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar10 = false;
		while (bVar10 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar10);
			REFERENCE_ACTOR(&uVar11);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uVar11, &Global_44085[Global_437899] + 8, 1, true);
			TASK_PRIORITY_SET(&uVar11, false);
			TASK_GO_NEAR_OBJECT(&uVar11, &Global_54076, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(&uVar11))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar11, 11, false);
			}
			ADD_BLIP_FOR_ACTOR(&uVar11, 322, 0, 2, 0);
			bVar10++;
		}
		return 1;
	}
	DESTROY_OBJECT(&uVar0);
	DESTROY_OBJECT(&iParam0);
	return 0;
}

void Function_99(int iParam0) //Position: 0x63C7 / 25543
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

float Function_100(var uParam0, struct<2> Param1) //Position: 0x641E / 25630
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

struct<8> Function_101(int iParam0) //Position: 0x6495 / 25749
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

bool Function_102(int iParam0) //Position: 0x6501 / 25857
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((bVar0 != 9 || bVar0 != 15) || bVar0 != 24) || bVar0 != 420) || bVar0 != 28) || bVar0 != 29) || bVar0 != 30) || bVar0 != 36) || bVar0 != 38) || bVar0 != 39) || bVar0 != 54) || bVar0 != 55) || bVar0 != 56) || bVar0 != 65) || bVar0 != 68) || bVar0 != 404) || bVar0 != 400) || bVar0 != 89) || bVar0 != 95) || bVar0 != 96) || bVar0 != 107) || bVar0 != 139) || bVar0 != 140) || bVar0 != 141) || bVar0 != 144) || bVar0 != 146) || bVar0 != 149) || bVar0 != 152) || bVar0 != 168) || bVar0 != 169) || bVar0 != 176) || bVar0 != 177) || bVar0 != 213) || bVar0 != 509) || bVar0 != 493) || bVar0 != 529) || bVar0 != 237) || bVar0 != 238) || bVar0 != 245) || bVar0 != 266) || bVar0 != 268) || bVar0 != 269) || bVar0 != 276) || bVar0 != 283) || bVar0 != 289) || bVar0 != 294) || bVar0 != 304) || bVar0 != 428) || bVar0 != 435) || bVar0 != 461) || bVar0 != 465) || bVar0 != 455) || bVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x6672 / 26226
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	bool bVar8;
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
	bVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, bVar8, 1);
	SET_MOVER_FROZEN(&iParam0, true);
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
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_STAND_STILL(&iParam0, 3.0f, 0, 0);
	Function_104(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_111(bParam1, 5.0f, 1);
	Function_190(&iParam0);
	Function_110(Global_43789, 10.0f);
	return;
}

var Function_104(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x696C / 26988
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x69FA / 27130
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

void Function_106(int iParam0, int iParam1) //Position: 0x6A63 / 27235
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

void Function_107(int iParam0, var uParam1) //Position: 0x6AF4 / 27380
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

void Function_108(int iParam0, int iParam1) //Position: 0x6B85 / 27525
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

bool Function_109(var uParam0, struct<2> Param1) //Position: 0x6C1B / 27675
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

void Function_110(int iParam0, float fParam1) //Position: 0x6C56 / 27734
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", bVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6C9A / 27802
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
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
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
		bVar5 = FLOOR(bParam1);
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
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
	}
	return;
}

void Function_112() //Position: 0x6DDE / 28126
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x6DF0 / 28144
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x6E05 / 28165
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", true);
	Function_117(StackVal, Global_54078, 1, &iParam0 + 336, 0);
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
	*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	Function_197(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_115(&iParam0);
	return;
}

void Function_115(vector3 vParam0) //Position: 0x710D / 28941
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
				SET_BLIP_PRIORITY(&uVar2, true);
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
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_116(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, bVar3, 1) <= 5.0f)
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
				SET_BLIP_PRIORITY(&uVar7, true);
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

var Function_116(int iParam0) //Position: 0x73DB / 29659
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

var Function_117(struct<2> Param0, bool bParam2, var uParam3, bool bParam4) //Position: 0x749F / 29855
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
		if (Function_5(Global_53524.f_24))
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

void Function_118() //Position: 0x78AC / 30892
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

void Function_119() //Position: 0x78F7 / 30967
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

void Function_120() //Position: 0x79FD / 31229
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

void Function_121() //Position: 0x7A30 / 31280
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

void Function_122() //Position: 0x7BC3 / 31683
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

void Function_123() //Position: 0x7D7C / 32124
{
	Function_124(&Global_42918, 1, 0);
	return;
}

void Function_124(struct<2317> Param0) //Position: 0x7D8A / 32138
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
	
	uVar0 = Function_87();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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

struct<8> Function_125(int iParam0) //Position: 0x7FA7 / 32679
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

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x804F / 32847
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

int Function_127(bool bParam0) //Position: 0x82EB / 33515
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_128() //Position: 0x832C / 33580
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

struct<8> Function_129() //Position: 0x83B5 / 33717
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

struct<8> Function_130() //Position: 0x844C / 33868
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

void Function_131() //Position: 0x84CB / 33995
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x8508 / 34056
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
		Function_60(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_133(int iParam0) //Position: 0x8714 / 34580
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x872E / 34606
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(struct<2> Param0, bool bParam2) //Position: 0x8744 / 34628
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

var Function_136(struct<2> Param0, float fParam2, int iParam3) //Position: 0x87B0 / 34736
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
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
			if (!Function_218(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
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
	if (Function_5(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_137(bool bParam0) //Position: 0x88B0 / 34992
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_5(bParam0))
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

bool Function_138(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x8908 / 35080
{
	var uVar0;
	bool bVar1;
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
	bVar7 = -1.0f;
	bVar9 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, bVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((bVar7 > 0.0f || bVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &iParam2))
		{
			bVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, bVar1);
			bVar9 = true;
		}
		bVar1++;
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

struct<8> Function_139(vector3 vParam0) //Position: 0x8AC2 / 35522
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_140(vector3 vParam0) //Position: 0x8AE4 / 35556
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x8B02 / 35586
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(float fParam0, var uParam1, int iParam2) //Position: 0x8B15 / 35605
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_218(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_218(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_218(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_218(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_218(&(Global_43791[Global_46866[4]]), 4))
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

var Function_143(int iParam0) //Position: 0x8D63 / 36195
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_144(int iParam0) //Position: 0x8D6F / 36207
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_145(vector3 vParam0) //Position: 0x8D81 / 36225
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x8D99 / 36249
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
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iParam0));
		bVar0 = _GET_AMMO_AMOUNT(&Global_54076, bVar1, 1) <= 5.0f;
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

float Function_147(var uParam0, int iParam1) //Position: 0x91AF / 37295
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

bool Function_148(int iParam0, bool bParam1, bool bParam2) //Position: 0x92A4 / 37540
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

bool Function_149() //Position: 0x9368 / 37736
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_150(int iParam0) //Position: 0x937F / 37759
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_151(int iParam0) //Position: 0x938B / 37771
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x939A / 37786
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

struct<16> Function_153(int iParam0) //Position: 0x9425 / 37925
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

bool Function_154() //Position: 0x9464 / 37988
{
	if (Function_29(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x947F / 38015
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

void Function_156(int iParam0, bool bParam1) //Position: 0x9514 / 38164
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, true);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", true);
	return;
}

void Function_157(bool bParam0) //Position: 0x95FC / 38396
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
	PRINTSTRING(&Global_44085[bParam09] + 32);
	PRINTNL();
	if (Function_28(bParam0))
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
			Function_197(&uVar5, 0x8000000);
			Function_197(&uVar5, 0x10000000);
			Global_43791[bParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[bParam09] + 8, &uVar9);
			uVar6 = Function_162(&Global_44085[bParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_193(bParam0);
			uVar12 = Function_200(111, 111, 5);
			Function_161(uVar11, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_160(uVar11, 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_158(uVar12);
			uVar13 = Global_43791[bParam0];
			Function_197(&uVar13, 0x1000000);
			Function_197(&uVar13, 0x10000000);
			Global_43791[bParam0] = uVar13;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x97BD / 38845
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

bool Function_159(int iParam0) //Position: 0x9B27 / 39719
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9B4B / 39755
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

void Function_161(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0x9E6A / 40554
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

var Function_162(var uParam0, bool bParam1, int iParam2) //Position: 0xA10D / 41229
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == bParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&uParam0, bParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0xA166 / 41318
{
	Function_169(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_169(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_169(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_164(&iParam0 + 384);
	return;
}

bool Function_164(struct<2>[] Param0) //Position: 0xA1DA / 41434
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_24(&(Param0[iVar02]), 16))
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
		if (Function_24(&(Param0[iVar02]), 4))
		{
			if (!Function_24(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_24(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_24(&(Param0[02]), 8) || iVar1));
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
		if (Function_24(&(Param0[iVar02]), 4))
		{
			if (!Function_24(&(Param0[iVar02]), 2))
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

void Function_165() //Position: 0xA59C / 42396
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

bool Function_166() //Position: 0xA5DC / 42460
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

void Function_167(struct<13> Param0) //Position: 0xA60A / 42506
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_168() //Position: 0xA61D / 42525
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

var Function_169(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA65F / 42591
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

var Function_170(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA69D / 42653
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_24(&(Param0[iVar02]), 4))
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

bool Function_171() //Position: 0xA76C / 42860
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
			SET_BLIP_PRIORITY(&uVar3, true);
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

void Function_172(var uParam0, var uParam1, struct<82> Param2) //Position: 0xA865 / 43109
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	bool bVar18;
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
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(&uVar14) - 1))
			{
				uVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &uVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(&uVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				uVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(&uVar17));
				if (!Function_29(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					Var19 = Vector(0.0f, 0.0f, 0.0f);
					Var21 = Vector(0.0f, 0.0f, 0.0f);
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(&uVar15, &Var19);
					GET_OBJECT_ORIENTATION(&uVar15, &Var21);
					uVar23 = CREATE_GRINGO_IN_LAYOUT(&uParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", Var19, Var21);
					ADD_OBJECT_TO_OBJECTSET(&uVar23, &uVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(&uVar3);
}

var Function_173(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xA9EF / 43503
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_174(vector3 vParam0) //Position: 0xAA04 / 43524
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

void Function_175(struct<649> Param0) //Position: 0xAAC7 / 43719
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
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
				bVar5 = GET_ACTOR_ENUM(&uVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
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
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
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
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
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

bool Function_176(var uParam0, bool bParam1, bool bParam2) //Position: 0xAF47 / 44871
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	ITERATE_IN_SPHERE(&uVar0, Global_54078, &bParam1);
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

void Function_177(int iParam0, int iParam1, bool bParam2) //Position: 0xAFD9 / 45017
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

var Function_178(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB2E3 / 45795
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_61(), 3, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_179(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_179(var uParam0, var uParam1, bool bParam2) //Position: 0xB31F / 45855
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
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
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar0);
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
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return iVar1;
}

bool Function_180(int iParam0) //Position: 0xB3FD / 46077
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
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

bool Function_181(int iParam0, int iParam1) //Position: 0xB44C / 46156
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xB491 / 46225
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

float Function_183(int iParam0, int iParam1) //Position: 0xB4DF / 46303
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xB4F2 / 46322
{
	if (Function_29(iParam0, 1) && !Function_29(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_185(vector3 vParam0) //Position: 0xB51F / 46367
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
			SET_MOVER_FROZEN(&uVar1, false);
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
				TASK_PRIORITY_SET(&uVar1, true);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar1, &iVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, true);
				if (!Function_29(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, false);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(&vParam0, &vParam0, 0);
	return;
}

void Function_186(int iParam0, int iParam1, int iParam2) //Position: 0xB620 / 46624
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_187(&uVar1, &iParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_187(var uParam0, var uParam1, bool bParam2) //Position: 0xB677 / 46711
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
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xB6C9 / 46793
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

void Function_189(int iParam0) //Position: 0xB708 / 46856
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	
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
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				*(&iParam0 + 632) = iVar3;
			}
		}
	}
	return;
}

void Function_190(int iParam0) //Position: 0xB7D3 / 47059
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

var Function_191(bool bParam0) //Position: 0xB8AD / 47277
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

var Function_192(int iParam0) //Position: 0xB90C / 47372
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

int Function_193(bool bParam0) //Position: 0xBA4F / 47695
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

void Function_194() //Position: 0xBBD5 / 48085
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

var Function_195(bool bParam0, int iParam1) //Position: 0xBC41 / 48193
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
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", true);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, true);
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

void Function_196(bool bParam0, bool bParam1) //Position: 0xBD80 / 48512
{
	DECOR_SET_FLOAT(&Global_44085[bParam09] + 8, "ZombieScore", bParam1);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0xBDA4 / 48548
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xBDB5 / 48565
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

bool Function_199(int iParam0) //Position: 0xBDF3 / 48627
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBE0A / 48650
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_201(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(bParam0, bParam1, bParam2, 4294967295);
}

int Function_201(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xBE68 / 48744
{
	var uVar0;
	
	if (!Function_203(bParam2))
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
	uVar0 = Function_204(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_202(uVar0);
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

var Function_202(int iParam0) //Position: 0xBFCC / 49100
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

bool Function_203(int iParam0) //Position: 0xC00B / 49163
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xC020 / 49184
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xC040 / 49216
{
	iParam0 = iParam0;
	return;
}

void Function_206(char* cParam0) //Position: 0xC04A / 49226
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

void Function_207(int iParam0, bool bParam1) //Position: 0xC08A / 49290
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

void Function_208(int iParam0) //Position: 0xC17A / 49530
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_209(bool bParam0) //Position: 0xC18D / 49549
{
	Function_210(1, 0.0f, 2, &iLocal_178, &Global_44085[bParam09] + 8, 1);
	return;
}

void Function_210(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0xC1A7 / 49575
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
		Function_213();
	}
	if (&bParam5)
	{
		Function_211(1048576);
	}
}

void Function_211(int iParam0) //Position: 0xC2B5 / 49845
{
	Function_212(&Global_43580, iParam0);
	return;
}

void Function_212(var uParam0, var uParam1) //Position: 0xC2C3 / 49859
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_213() //Position: 0xC2E2 / 49890
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_211(16384);
	}
	return;
}

void Function_214(var uParam0) //Position: 0xC2FE / 49918
{
	uParam0 = uParam0;
	return;
}

void Function_215() //Position: 0xC308 / 49928
{
	return;
}

void Function_216(int iParam0) //Position: 0xC30E / 49934
{
	iParam0 = iParam0;
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xC318 / 49944
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_218(int iParam0, int iParam1) //Position: 0xC332 / 49970
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0xC34F / 49999
{
	return;
}

void Function_220() //Position: 0xC355 / 50005
{
	return;
}

void Function_221(int iParam0) //Position: 0xC35B / 50011
{
	iParam0 = iParam0;
	return;
}

void Function_222(int iParam0, bool bParam1, int iParam2) //Position: 0xC365 / 50021
{
	if ((!Function_5(bParam1) || Global_6623) || Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	if (bParam1 == Global_46760[0])
	{
		Function_223(&iParam0, bParam1, &Global_11014, &iParam2);
	}
	else if (bParam1 == Global_46760[1])
	{
		Function_223(&iParam0, bParam1, &Global_11146, &iParam2);
	}
	else if (bParam1 == Global_46760[2])
	{
		Function_223(&iParam0, bParam1, &Global_11120, &iParam2);
	}
	else if (bParam1 == Global_46796[1])
	{
		Function_223(&iParam0, bParam1, &Global_11222, &iParam2);
	}
	else if (bParam1 == Global_46796[3])
	{
		Function_223(&iParam0, bParam1, &Global_11284, &iParam2);
	}
	else if (bParam1 == Global_46796[4])
	{
		Function_223(&iParam0, bParam1, &Global_11492, &iParam2);
	}
	else if (bParam1 == Global_46816[0])
	{
		Function_223(&iParam0, bParam1, &Global_11544, &iParam2);
	}
	else if (bParam1 == Global_46816[1])
	{
		Function_223(&iParam0, bParam1, &Global_11646, &iParam2);
	}
	else if (bParam1 == Global_46816[2])
	{
		Function_223(&iParam0, bParam1, &Global_11704, &iParam2);
	}
	else if (bParam1 == Global_46838[1])
	{
		Function_223(&iParam0, bParam1, &Global_11752, &iParam2);
	}
	else if (bParam1 == Global_46838[0])
	{
		Function_223(&iParam0, bParam1, &Global_11726, &iParam2);
	}
	else if (bParam1 == Global_46850[0])
	{
		Function_223(&iParam0, bParam1, &Global_11836, &iParam2);
	}
	else if (bParam1 == Global_46850[1])
	{
		Function_223(&iParam0, bParam1, &Global_11946, &iParam2);
	}
	else if (bParam1 == Global_46850[2])
	{
		Function_223(&iParam0, bParam1, &Global_11988, &iParam2);
	}
	else if (bParam1 == Global_46866[0])
	{
		Function_223(&iParam0, bParam1, &Global_12048, &iParam2);
	}
	else if (bParam1 == Global_46866[1])
	{
		Function_223(&iParam0, bParam1, &Global_12150, &iParam2);
	}
	else if (bParam1 == Global_46866[2])
	{
		Function_223(&iParam0, bParam1, &Global_11398, &iParam2);
	}
	else if (bParam1 == Global_46894[2])
	{
		Function_223(&iParam0, bParam1, &Global_12284, &iParam2);
	}
	else if (bParam1 == Global_46894[1])
	{
		Function_223(&iParam0, bParam1, &Global_12342, &iParam2);
	}
	else if (bParam1 == Global_46894[0])
	{
		Function_223(&iParam0, bParam1, &Global_12422, &iParam2);
	}
	else if (bParam1 == Global_46894[3])
	{
		Function_223(&iParam0, bParam1, &Global_12392, &iParam2);
	}
	else if (bParam1 == Global_46926[0])
	{
		Function_223(&iParam0, bParam1, &Global_12760, &iParam2);
	}
	else if (bParam1 == Global_46926[1])
	{
		Function_223(&iParam0, bParam1, &Global_12714, &iParam2);
	}
	else if (bParam1 == Global_46926[2])
	{
		Function_223(&iParam0, bParam1, &Global_12644, &iParam2);
	}
	else if (bParam1 == Global_46914[0])
	{
		Function_223(&iParam0, bParam1, &Global_12488, &iParam2);
	}
	else if (bParam1 == Global_46914[1])
	{
		Function_223(&iParam0, bParam1, &Global_12482, &iParam2);
	}
	Function_197(&iParam0 + 608, 64);
	return;
}

void Function_223(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0xC669 / 50793
{
	struct<8> Var0;
	var uVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<8> Var28;
	
	Function_44(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_231(&uParam3, iParam1);
	iVar18 = Function_92(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_27(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= Param2)
		{
			if (!Function_230(&(Param2[bVar222]), 4))
			{
				*(&iParam0 + 8[bVar225] + 8) = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, &uVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(&iParam0 + 8[bVar225] + 8, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(&iParam0 + 8[bVar225] + 8, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					Var24 = Vector(0.0f, 0.0f, 0.0f);
					Var26 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(&iParam0 + 8[bVar225] + 8, &Var24);
					GET_OBJECT_ORIENTATION(&iParam0 + 8[bVar225] + 8, &Var26);
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232("nSurvivor_") };
					*(&iParam0 + 8[bVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[bVar22], Var24, Var26);
					Function_225(bVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_197(&iParam0 + 8[bVar225] + 32, 1);
						Function_197(&iParam0 + 608, 1024);
					}
					Function_197(&iParam0 + 608, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_224(&(Param2[bVar222]), 4);
				}
			}
		}
		bVar22++;
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

void Function_224(var uParam0, int iParam1) //Position: 0xC875 / 51317
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_225(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0xC886 / 51334
{
	int iVar0;
	var uVar1;
	bool bVar2;
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
	bVar2 = (GET_ACTOR_VISION_MAX_RANGE(&iVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, bVar2, 1);
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
		GIVE_WEAPON_TO_ACTOR(&iVar0, bVar9, false, 1, 1);
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
		GIVE_WEAPON_TO_ACTOR(&iVar0, 41, false, 1, 1);
		bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
		DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
		DECOR_SET_INT(&iVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, true);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&iVar0, false);
	AI_BEHAVIOR_SET_ALLOW(&iVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iVar0, 1);
	Function_229(&iVar0, 0);
	Function_228(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, false);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_227(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_227(&iVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 61, RAND_FLOAT_RANGE(0,1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(&iVar0, (RAND_INT_RANGE(false, 10000) % 5) + 1);
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
			SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &uVar21, 4, true);
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
		TASK_OVERRIDE_SET_POSTURE(&iVar0, true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "Gringo") || !bParam3)
	{
		uVar22 = LOCATE_GRINGO_OF_TYPE("", &uVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(&uVar22))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_226(&uVar22, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(&iVar0, GET_OBJECT_FROM_GRINGO(&uVar22), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(&iVar0, 2);
					TASK_USE_GRINGO(&iVar0, &uVar22, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse", true);
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
	Function_227(&iVar0, 20.0f, 1.0f, 1.0f);
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
			DECOR_SET_BOOL(&iVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	}
}

var Function_226(var uParam0, int iParam1) //Position: 0xCF6D / 53101
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_227(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xCF7C / 53116
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_228(var uParam0, bool bParam1) //Position: 0xCFCD / 53197
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

void Function_229(var uParam0, bool bParam1) //Position: 0xD01C / 53276
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

bool Function_230(var uParam0, int iParam1) //Position: 0xD050 / 53328
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_231(bool bParam0, int iParam1) //Position: 0xD06D / 53357
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
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
	return &(uVar3[(RAND_INT_RANGE(false, 100000) % iVar2)]);
}

struct<32> Function_232(char* cParam0) //Position: 0xD123 / 53539
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_233("0", &cVar8, ""), 4);
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

struct<32> Function_233(char* cParam0) //Position: 0xD18F / 53647
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_234() //Position: 0xD1B1 / 53681
{
	return;
}

bool Function_235(int iParam0) //Position: 0xD1B7 / 53687
{
	if (Function_29(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_164(&iParam0 + 384);
}

int Function_236(int iParam0) //Position: 0xD1DA / 53722
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_218(&(Global_43791[iParam0]), 4);
}

int Function_237() //Position: 0xD1F6 / 53750
{
	return 1;
}

void Function_238(bool bParam0) //Position: 0xD1FD / 53757
{
	Function_239(&uLocal_1250, &cLocal_7, "nbrothel01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "nbrothel01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "nbrothel01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "nbrothel01", 5, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "gunsmith01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1096, 1, 0);
	Function_239(&uLocal_1250, &cLocal_7, "gunsmith01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1096, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "npigFarm01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 304, 0, 1);
	Function_239(&uLocal_1250, &cLocal_7, "pawnShop01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1384, 1, 0);
	Function_239(&uLocal_1250, &cLocal_7, "pawnShop01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1384, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "pawnShop01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1384, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "stable01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "stable01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "tailorsDoctors01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1288, 1, 0);
	Function_239(&uLocal_1250, &cLocal_7, "tailorsDoctors01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1288, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "tailorsDoctors01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_284 + 1288, 1, 0);
	Function_239(&uLocal_1250, &cLocal_7, "tailorsDoctors01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "tailorsDoctors01", 5, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "workShed01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "workShed01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_239(&uLocal_1250, &cLocal_7, "workShed02", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	return;
}

var Function_239(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0xD532 / 54578
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_240(&Param0);
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
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), true);
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

var Function_240(struct<4>[] Param0) //Position: 0xD635 / 54837
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

void Function_241() //Position: 0xD666 / 54886
{
	Function_243(&uLocal_9, &uLocal_1122, 4, &iLocal_284 + 8, 4294967295, 4);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 296, 4294967295, 2097410);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 360, 4294967295, 0);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 1384, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 736, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 328, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 304, 4294967295, 258);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 16, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 24, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 32, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 768, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 1096, 4294967295, 4106);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 1288, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 40, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 48, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 800, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 936, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 864, 4294967295, 778);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 1192, 4294967295, 1290);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 824, 4294967295, 266);
	Function_243(&uLocal_9, &uLocal_1122, 5, &iLocal_284 + 960, 4294967295, 266);
	Function_242(&iLocal_284 + 360, 14, 3);
	return;
}

void Function_242(var uParam0, bool bParam1, bool bParam2) //Position: 0xD814 / 55316
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (64 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 64);
	}
	DECOR_SET_INT(&uParam0, "factionswap", bParam1);
	DECOR_SET_INT(&uParam0, "relationship", bParam2);
	return;
}

void Function_243(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xD896 / 55446
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

void Function_244(struct<5> Param0) //Position: 0xD983 / 55683
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xD994 / 55700
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

void Function_246(int iParam0, bool bParam1, bool bParam2) //Position: 0xDA0A / 55818
{
	var uVar0;
	int iVar1;
	
	if (Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam1);
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
	if (!Function_27(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[bParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam29] + 8);
		}
	}
	return;
}

var Function_247() //Position: 0xDAA8 / 55976
{
	return &iLocal_178;
}

void Function_248(int iParam0) //Position: 0xDAB1 / 55985
{
	cLocal_7 = Function_249(&iLocal_178, "thieveslanding", iParam0);
	return;
}

int Function_249(int iParam0, var uParam1, int iParam2) //Position: 0xDAD3 / 56019
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_250() //Position: 0xDAF6 / 56054
{
	return Function_251();
}

int Function_251() //Position: 0xDAFF / 56063
{
	var uVar0;
	
	Function_252(3, 3);
	uVar0 = &uVar0;
	iLocal_284 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_284))
	{
		iLocal_284 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	*(&iLocal_284 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_region", 4,203895E-45f, Vector(157,8245f, 77,20833f, 2276,947f), Vector(0.0f, -22,30548f, 0.0f), Vector(89,25361f, 10,78109f, 139,5651f));
	*(&iLocal_284 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_blacksmt01", 2,802597E-45f, Vector(155,0737f, 75,32324f, 2192,331f), Vector(0.0f, 24,30487f, 0.0f), Vector(8,257821f, 3,328563f, 10,61006f));
	*(&iLocal_284 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_worksh01", 2,802597E-45f, Vector(98,48085f, 74,91336f, 2345,588f), Vector(0.0f, 25,29357f, 0.0f), Vector(5,144279f, 2,5817f, 4,15656f));
	*(&iLocal_284 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_worksh02", 2,802597E-45f, Vector(157,0168f, 74,82978f, 2379,273f), Vector(0.0f, 29,80754f, 0.0f), Vector(4,726314f, 2,392609f, 3,92419f));
	*(&iLocal_284 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_ferryman01", 2,802597E-45f, Vector(215,3889f, 74,94729f, 2173,373f), Vector(0.0f, -5,316506f, 0.0f), Vector(5,914793f, 2,659859f, 6,658119f));
	*(&iLocal_284 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_ferryman04", 2,802597E-45f, Vector(207,6205f, 74,71249f, 2190,771f), Vector(0.0f, -38,85465f, 0.0f), Vector(3,912973f, 2,591383f, 3,651981f));
	*(&iLocal_284 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_pigsty", 4,203895E-45f, Vector(121,0913f, 74,47209f, 2221,84f), Vector(0.0f, 20.0f, 0.0f), Vector(4,415372f, 1,538621f, 4,68723f));
	*(&iLocal_284 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_corral", 4,203895E-45f, Vector(132,6118f, 74,85609f, 2205,204f), Vector(0.0f, 37,27501f, 0.0f), Vector(8,423597f, 2,028155f, 9,89547f));
	*(&iLocal_284 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_bridge01", 2,802597E-45f, Vector(123,5683f, 76,1812f, 2258,931f), Vector(0.0f, -18,98038f, 0.0f), Vector(4,802093f, 5,22128f, 41,84421f));
	*(&iLocal_284 + 192) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pop_north_set");
	*(&iLocal_284 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north2", 2,802597E-45f, Vector(148,9712f, 74,61581f, 2232,105f), Vector(0.0f, 59,90944f, 0.0f), Vector(29,94332f, 4,137205f, 3,242121f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[0]);
	*(&iLocal_284 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north3", 4,203895E-45f, Vector(161,0608f, 73,28625f, 2199,01f), Vector(0.0f, 20.0f, 0.0f), Vector(11,27883f, 2,028646f, 3,151433f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[1]);
	*(&iLocal_284 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north4", 4,203895E-45f, Vector(180,1783f, 73,28625f, 2186,629f), Vector(0.0f, 54,99836f, 0.0f), Vector(9,59743f, 2,119859f, 2,339096f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[2]);
	*(&iLocal_284 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north5", 4,203895E-45f, Vector(170,0913f, 73,28625f, 2192,372f), Vector(0.0f, 51,98636f, 0.0f), Vector(7,597484f, 1,673949f, 3,685028f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[3]);
	*(&iLocal_284 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north6", 4,203895E-45f, Vector(163,4919f, 74,39963f, 2221,517f), Vector(0.0f, -29,38599f, 0.0f), Vector(4,483838f, 1,278007f, 13,89938f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[4]);
	*(&iLocal_284 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north7", 4,203895E-45f, Vector(174,3521f, 74,30711f, 2215,813f), Vector(0.0f, 58,73527f, 0.0f), Vector(6,468067f, 1,177251f, 1,650964f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[5]);
	*(&iLocal_284 + 80[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north8", 4,203895E-45f, Vector(208,8567f, 73,79001f, 2175,116f), Vector(0.0f, -3,115066f, 0.0f), Vector(3,412357f, 1,703234f, 11,6397f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[6]);
	*(&iLocal_284 + 80[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north9", 2,802597E-45f, Vector(155,0827f, 75,76617f, 2212,868f), Vector(0.0f, 0.0f, 0.0f), Vector(8,62606f, 5,306758f, 21,52649f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[7]);
	*(&iLocal_284 + 80[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north10", 2,802597E-45f, Vector(170,386f, 75,34389f, 2205,873f), Vector(0.0f, 8,564591f, 0.0f), Vector(6,534302f, 4,662615f, 20,98273f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[8]);
	*(&iLocal_284 + 80[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north12", 2,802597E-45f, Vector(194,8183f, 75,03023f, 2174,369f), Vector(0.0f, 24,81448f, 0.0f), Vector(29,09678f, 4,176528f, 6,199813f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[9]);
	*(&iLocal_284 + 80[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north13", 2,802597E-45f, Vector(201,3135f, 75,03023f, 2151.0f), Vector(0.0f, -17,54939f, 0.0f), Vector(7,605684f, 4,176528f, 7,066369f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[10]);
	*(&iLocal_284 + 80[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north14", 2,802597E-45f, Vector(203,9715f, 75,03023f, 2159,952f), Vector(0.0f, -78,53359f, 0.0f), Vector(18,65768f, 4,176528f, 6,754061f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[11]);
	*(&iLocal_284 + 80[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_north15", 2,802597E-45f, Vector(170,7682f, 73,91237f, 2187,09f), Vector(0.0f, -33,51815f, 0.0f), Vector(19,16839f, 4,176528f, 5,257403f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 192, &iLocal_284 + 80[12]);
	*(&iLocal_284 + 264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pop_south_set");
	*(&iLocal_284 + 200[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south1", 4,203895E-45f, Vector(131,6314f, 74,36719f, 2317,052f), Vector(0.0f, 6,218808f, 0.0f), Vector(3,231898f, 1,673781f, 6,658037f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[0]);
	*(&iLocal_284 + 200[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south2", 4,203895E-45f, Vector(126,3273f, 74,67719f, 2294,984f), Vector(0.0f, -0,3511052f, 0.0f), Vector(3,358616f, 1,918939f, 6,924263f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[1]);
	*(&iLocal_284 + 200[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south3", 4,203895E-45f, Vector(103,02f, 74,46542f, 2279,74f), Vector(0.0f, -8,911319f, 0.0f), Vector(11,79638f, 1,800613f, 2,512699f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[2]);
	*(&iLocal_284 + 200[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south4", 4,203895E-45f, Vector(134,0428f, 74,78855f, 2289,881f), Vector(0.0f, 2,408496f, 0.0f), Vector(9,666465f, 1,504253f, 1,852265f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[3]);
	*(&iLocal_284 + 200[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south6", 2,802597E-45f, Vector(138,6402f, 75,12931f, 2310,72f), Vector(0.0f, 5,263243f, 0.0f), Vector(13,18791f, 3,131549f, 2,460358f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[4]);
	*(&iLocal_284 + 200[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south7", 2,802597E-45f, Vector(143,3963f, 75,07148f, 2305,959f), Vector(0.0f, 32,35434f, 0.0f), Vector(1,811151f, 3,024818f, 8,032286f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[5]);
	*(&iLocal_284 + 200[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_south8", 2,802597E-45f, Vector(140,8847f, 75,43229f, 2295,153f), Vector(0.0f, 3,502279f, 0.0f), Vector(2,536997f, 3,37885f, 15,25817f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 264, &iLocal_284 + 200[6]);
	*(&iLocal_284 + 296) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_warehouse_set");
	*(&iLocal_284 + 272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_wareho01", 2,802597E-45f, Vector(135,1248f, 75,8347f, 2338,297f), Vector(0.0f, 4,759178f, 0.0f), Vector(21,32398f, 4,709299f, 25,56081f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 296, &iLocal_284 + 272[0]);
	*(&iLocal_284 + 272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_office01", 2,802597E-45f, Vector(139,8391f, 77,93958f, 2327,406f), Vector(0.0f, 4,699532f, 0.0f), Vector(10,79547f, 3,02961f, 5,482237f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 296, &iLocal_284 + 272[1]);
	*(&iLocal_284 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_players_room", 2,802597E-45f, Vector(123,8812f, 77,78061f, 2234,642f), Vector(0.0f, -14,37626f, 0.0f), Vector(5,919429f, 2,313397f, 5,384371f));
	*(&iLocal_284 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pigfarm_set");
	*(&iLocal_284 + 312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pigfarm04", 2,802597E-45f, Vector(129,0281f, 74,09282f, 2222,838f), Vector(0.0f, -14,37626f, 0.0f), Vector(1,831691f, 3,168309f, 2,649456f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 328, &iLocal_284 + 312[0]);
	*(&iLocal_284 + 360) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pop_crateyard_set");
	*(&iLocal_284 + 336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_crates1", 2,802597E-45f, Vector(131,0275f, 74,21799f, 2374,853f), Vector(0.0f, 29,39362f, 0.0f), Vector(33,21996f, 2,804292f, 32,51464f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 360, &iLocal_284 + 336[0]);
	*(&iLocal_284 + 336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_crates2", 2,802597E-45f, Vector(113,4024f, 74,10799f, 2352,969f), Vector(0.0f, 29,8776f, 0.0f), Vector(19,11635f, 2,806043f, 22,6374f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 360, &iLocal_284 + 336[1]);
	*(&iLocal_284 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pop_northdocks_set");
	*(&iLocal_284 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks1", 2,802597E-45f, Vector(172,1815f, 74,71363f, 2241,527f), Vector(0.0f, -30,73822f, 0.0f), Vector(30,36309f, 2,639271f, 1,591717f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[0]);
	*(&iLocal_284 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks2", 2,802597E-45f, Vector(187,7822f, 74,39242f, 2221,338f), Vector(0.0f, -29,92439f, 0.0f), Vector(3,584551f, 2,939461f, 14,95464f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[1]);
	*(&iLocal_284 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks3", 2,802597E-45f, Vector(162,9147f, 73,76353f, 2247,728f), Vector(0.0f, -29,64138f, 0.0f), Vector(4,707134f, 2,658041f, 16,98589f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[2]);
	*(&iLocal_284 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks4", 2,802597E-45f, Vector(178,1139f, 74,65788f, 2233,946f), Vector(0.0f, 59,87977f, 0.0f), Vector(20,47495f, 2,801744f, 2,671454f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[3]);
	*(&iLocal_284 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks5", 2,802597E-45f, Vector(180,2033f, 74,17239f, 2225,094f), Vector(0.0f, -29,69154f, 0.0f), Vector(8,943483f, 1,715685f, 3,834709f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[4]);
	*(&iLocal_284 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks6", 2,802597E-45f, Vector(194,8357f, 74,28354f, 2221,869f), Vector(0.0f, -29,92439f, 0.0f), Vector(9,852716f, 2,170028f, 2,578543f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[5]);
	*(&iLocal_284 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks7", 2,802597E-45f, Vector(207,1491f, 74,22011f, 2195,217f), Vector(0.0f, -39,65355f, 0.0f), Vector(13,42332f, 2,388399f, 2,713911f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[6]);
	*(&iLocal_284 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks8", 2,802597E-45f, Vector(225,8905f, 74,50317f, 2172,428f), Vector(0.0f, -4,654152f, 0.0f), Vector(13,20809f, 2,179824f, 2,973737f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[7]);
	*(&iLocal_284 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks9", 2,802597E-45f, Vector(218,9882f, 74,71426f, 2192,958f), Vector(0.0f, -38,31281f, 0.0f), Vector(9,433097f, 2,848837f, 5,725534f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[8]);
	*(&iLocal_284 + 368[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks10", 2,802597E-45f, Vector(220,5834f, 74,36482f, 2173,678f), Vector(0.0f, -4,504617f, 0.0f), Vector(3,07258f, 1,787071f, 8,043092f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[9]);
	*(&iLocal_284 + 368[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks11", 2,802597E-45f, Vector(213,7891f, 74,88496f, 2167,769f), Vector(0.0f, 0.0f, 0.0f), Vector(14,8581f, 3,339006f, 3,194078f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[10]);
	*(&iLocal_284 + 368[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks12", 2,802597E-45f, Vector(219,4471f, 74,93797f, 2181,675f), Vector(0.0f, -2,504592f, 0.0f), Vector(2,055929f, 3,388585f, 8,079159f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[11]);
	*(&iLocal_284 + 368[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks13", 2,802597E-45f, Vector(213,2854f, 74,59535f, 2194,456f), Vector(0.0f, 49,89083f, 0.0f), Vector(3,238196f, 2,892637f, 8,673741f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[12]);
	*(&iLocal_284 + 368[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks14", 2,802597E-45f, Vector(197,5356f, 74,17527f, 2207,253f), Vector(0.0f, -35,26958f, 0.0f), Vector(15,30875f, 4,494629f, 3,494829f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[13]);
	*(&iLocal_284 + 368[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks15", 2,802597E-45f, Vector(176,6877f, 74,34927f, 2241,519f), Vector(0.0f, 60,33823f, 0.0f), Vector(3,14028f, 1,720393f, 2,034568f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[14]);
	*(&iLocal_284 + 368[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks16", 2,802597E-45f, Vector(218,5803f, 74,57835f, 2186,756f), Vector(0.0f, 66,9302f, 0.0f), Vector(3,988917f, 2,759111f, 2,043288f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[15]);
	*(&iLocal_284 + 368[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks17", 2,802597E-45f, Vector(205,4821f, 72,42951f, 2134,435f), Vector(0.0f, -15,49101f, 0.0f), Vector(12,13918f, 6,384386f, 3,348497f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[16]);
	*(&iLocal_284 + 368[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks18", 2,802597E-45f, Vector(201,5668f, 73,50565f, 2142,833f), Vector(0.0f, -15,49101f, 0.0f), Vector(17,01977f, 9,259377f, 15,96081f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[17]);
	*(&iLocal_284 + 368[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_northdocks19", 2,802597E-45f, Vector(210,6772f, 72,42951f, 2130,707f), Vector(0.0f, -15,49101f, 0.0f), Vector(4,276744f, 6,384386f, 10,22227f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 528, &iLocal_284 + 368[18]);
	*(&iLocal_284 + 704) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pop_southdocks_set");
	*(&iLocal_284 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks1", 2,802597E-45f, Vector(156,1884f, 75,67006f, 2291,035f), Vector(0.0f, 2,882253f, 0.0f), Vector(32,14539f, 3,962106f, 7,934261f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[0]);
	*(&iLocal_284 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks2", 2,802597E-45f, Vector(164,5897f, 75,18113f, 2371,237f), Vector(0.0f, 29,74934f, 0.0f), Vector(16,20259f, 3,630186f, 7,947024f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[1]);
	*(&iLocal_284 + 536[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks3", 2,802597E-45f, Vector(152,9703f, 74,94196f, 2371,393f), Vector(0.0f, 27,99167f, 0.0f), Vector(2,538574f, 3,227758f, 10,06952f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[2]);
	*(&iLocal_284 + 536[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks4", 2,802597E-45f, Vector(148,8927f, 74,99253f, 2338,732f), Vector(0.0f, 2,403996f, 0.0f), Vector(3,074283f, 3,550352f, 34,88313f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[3]);
	*(&iLocal_284 + 536[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks5", 2,802597E-45f, Vector(162,1826f, 74,59475f, 2337,542f), Vector(0.0f, 4,571398f, 0.0f), Vector(2,662015f, 2,993632f, 13,35226f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[4]);
	*(&iLocal_284 + 536[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks6", 2,802597E-45f, Vector(152,1147f, 74,57105f, 2312,998f), Vector(0,05646981f, 4,612943f, 0,04799045f), Vector(10,38041f, 2,962653f, 1,916626f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[5]);
	*(&iLocal_284 + 536[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks7", 2,802597E-45f, Vector(160,6471f, 73,77319f, 2360,302f), Vector(0.0f, 28,09342f, 0.0f), Vector(9,390365f, 2,595971f, 1,685766f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[6]);
	*(&iLocal_284 + 536[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks8", 2,802597E-45f, Vector(155,2133f, 74,94331f, 2333,888f), Vector(0.0f, 4,678422f, 0.0f), Vector(12,1155f, 2,992439f, 5,188836f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[7]);
	*(&iLocal_284 + 536[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks19", 2,802597E-45f, Vector(155,0281f, 74,32098f, 2366,398f), Vector(0.0f, -27,77507f, 0.0f), Vector(1,498345f, 3,33414f, 7,20486f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[8]);
	*(&iLocal_284 + 536[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks9", 2,802597E-45f, Vector(163,1333f, 73,72407f, 2356,023f), Vector(0.0f, -60,03222f, 0.0f), Vector(9,706104f, 2,277886f, 3,192596f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[9]);
	*(&iLocal_284 + 536[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks10", 2,802597E-45f, Vector(145,456f, 75,9418f, 2361,889f), Vector(0.0f, 22,23526f, 0.0f), Vector(2,365049f, 3,247642f, 6,78305f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[10]);
	*(&iLocal_284 + 536[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks11", 2,802597E-45f, Vector(148,8764f, 75,15415f, 2366,036f), Vector(0.0f, -37,07431f, 0.0f), Vector(6,320905f, 3,462404f, 2,525241f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[11]);
	*(&iLocal_284 + 536[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks12", 2,802597E-45f, Vector(145,7576f, 75,34636f, 2354,855f), Vector(0.0f, -20,13278f, 0.0f), Vector(2,153852f, 3,667864f, 8,4843f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[12]);
	*(&iLocal_284 + 536[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks13", 2,802597E-45f, Vector(147,9558f, 74,79824f, 2315,291f), Vector(0.0f, 4,555128f, 0.0f), Vector(2,866811f, 2,667118f, 13,42069f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[13]);
	*(&iLocal_284 + 536[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks14", 2,802597E-45f, Vector(140,1953f, 74,77529f, 2310,54f), Vector(0.0f, 5,202918f, 0.0f), Vector(16,77729f, 3,01864f, 2,360362f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[14]);
	*(&iLocal_284 + 536[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks15", 2,802597E-45f, Vector(162,6083f, 73,82494f, 2313,707f), Vector(0.0f, 5,351533f, 0.0f), Vector(2,939902f, 3,270328f, 13,09575f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[15]);
	*(&iLocal_284 + 536[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks16", 2,802597E-45f, Vector(142,6087f, 75,11625f, 2304,028f), Vector(0.0f, 21,87864f, 0.0f), Vector(1,443187f, 3,094059f, 13,12396f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[16]);
	*(&iLocal_284 + 536[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks17", 2,802597E-45f, Vector(144,7532f, 74,0296f, 2297,847f), Vector(0.0f, 3,632941f, 0.0f), Vector(1,829312f, 3,289502f, 7,645639f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[17]);
	*(&iLocal_284 + 536[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks18", 2,802597E-45f, Vector(169,6506f, 75,50861f, 2302,314f), Vector(0.0f, 3,251671f, 0.0f), Vector(6,457269f, 3,611866f, 14,85462f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[18]);
	*(&iLocal_284 + 536[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pop_southdocks20", 2,802597E-45f, Vector(147,7927f, 74,19041f, 2307,472f), Vector(0.0f, 8,845689f, 0.0f), Vector(1,591461f, 3,528893f, 5,777983f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 704, &iLocal_284 + 536[19]);
	*(&iLocal_284 + 736) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_tick_set");
	*(&iLocal_284 + 712[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_tickets01", 2,802597E-45f, Vector(134,6121f, 75,05765f, 2297,663f), Vector(0.0f, 3,155584f, 0.0f), Vector(9,3f, 2,777297f, 6,971455f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 736, &iLocal_284 + 712[0]);
	*(&iLocal_284 + 712[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_tickets02", 2,802597E-45f, Vector(137,0244f, 74,94027f, 2292,842f), Vector(0.0f, 3,469327f, 0.0f), Vector(3,710651f, 2,530684f, 2,352687f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 736, &iLocal_284 + 712[1]);
	*(&iLocal_284 + 768) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_stab_set");
	*(&iLocal_284 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_stable01", 2,802597E-45f, Vector(121,4266f, 74,60543f, 2193,456f), Vector(0.0f, -38,40697f, 0.0f), Vector(11,74311f, 2,650494f, 18,00607f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 768, &iLocal_284 + 744[0]);
	*(&iLocal_284 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_stable02", 2,802597E-45f, Vector(115,6494f, 74,49019f, 2188,974f), Vector(0.0f, -37,70505f, 0.0f), Vector(2,51588f, 2,444366f, 7,176547f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 768, &iLocal_284 + 744[1]);
	*(&iLocal_284 + 800) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_ferr_set");
	*(&iLocal_284 + 776[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_ferryman03", 2,802597E-45f, Vector(213,2688f, 74,57431f, 2190,573f), Vector(0.0f, -37,15548f, 0.0f), Vector(1,552559f, 2,343711f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 800, &iLocal_284 + 776[0]);
	*(&iLocal_284 + 776[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_ferryman02", 2,802597E-45f, Vector(213,0947f, 74,77226f, 2187,277f), Vector(0.0f, -39,20383f, 0.0f), Vector(5,891003f, 2,736348f, 4,013329f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 800, &iLocal_284 + 776[1]);
	*(&iLocal_284 + 824) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_ver1_set");
	*(&iLocal_284 + 808[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "Box1", 2,802597E-45f, Vector(146,792f, 77,95094f, 2246,844f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 824, &iLocal_284 + 808[0]);
	*(&iLocal_284 + 864) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_saloon_set");
	*(&iLocal_284 + 832[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_saloon01", 2,802597E-45f, Vector(167,3334f, 72,76504f, 2228,25f), Vector(0.0f, -30,02197f, 0.0f), Vector(8,410011f, 7,87994f, 14,35492f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 864, &iLocal_284 + 832[0]);
	*(&iLocal_284 + 832[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_saloon02", 2,802597E-45f, Vector(169,5157f, 75,0048f, 2236,319f), Vector(0.0f, -31,09248f, 0.0f), Vector(3,782452f, 2,932232f, 2,417991f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 864, &iLocal_284 + 832[1]);
	*(&iLocal_284 + 832[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_saloon03", 2,802597E-45f, Vector(175,664f, 74,9073f, 2227,199f), Vector(0.0f, -30,36341f, 0.0f), Vector(5,027802f, 2,689279f, 3,169497f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 864, &iLocal_284 + 832[2]);
	*(&iLocal_284 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_tailor_set");
	*(&iLocal_284 + 872[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_tailor01", 2,802597E-45f, Vector(174,9852f, 74,38473f, 2182,238f), Vector(0.0f, -34,22879f, 0.0f), Vector(8,198368f, 2,81773f, 6,801184f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 896, &iLocal_284 + 872[0]);
	*(&iLocal_284 + 872[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_tailor02", 2,802597E-45f, Vector(178,9408f, 74,89482f, 2184,014f), Vector(0.0f, -34,22879f, 0.0f), Vector(0,2f, 2,470744f, 4,960597f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 896, &iLocal_284 + 872[1]);
	*(&iLocal_284 + 936) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_harbor_set");
	*(&iLocal_284 + 904[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_harbor01", 2,802597E-45f, Vector(178,0712f, 74,80824f, 2217,597f), Vector(-1,417288f, -30,91833f, 0,1854929f), Vector(4,383923f, 2,767432f, 6,597141f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 936, &iLocal_284 + 904[0]);
	*(&iLocal_284 + 904[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_harbor02", 2,802597E-45f, Vector(182,5987f, 74,80365f, 2220,344f), Vector(0.0f, -30,42979f, 0.0f), Vector(6,913052f, 2,767432f, 6,563572f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 936, &iLocal_284 + 904[1]);
	*(&iLocal_284 + 904[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_harbor03", 2,802597E-45f, Vector(185,8507f, 74,42982f, 2216,803f), Vector(0.0f, -29,54564f, 0.0f), Vector(4,152111f, 2,514276f, 2,603718f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 936, &iLocal_284 + 904[2]);
	*(&iLocal_284 + 960) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_ver2_set");
	*(&iLocal_284 + 944[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "Box", 2,802597E-45f, Vector(145,6494f, 77,41088f, 2238,687f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 960, &iLocal_284 + 944[0]);
	*(&iLocal_284 + 1016) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_chickens_set");
	*(&iLocal_284 + 968[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thi_chicken1", 4,203895E-45f, Vector(133,907f, 73,28625f, 2223,728f), Vector(0.0f, 20.0f, 0.0f), Vector(7,688399f, 7,688399f, 7,688399f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1016, &iLocal_284 + 968[0]);
	*(&iLocal_284 + 968[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thi_chicken2", 4,203895E-45f, Vector(145,2967f, 73,28625f, 2195,21f), Vector(0.0f, 20.0f, 0.0f), Vector(6,056266f, 7,688399f, 10,436f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1016, &iLocal_284 + 968[1]);
	*(&iLocal_284 + 968[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thi_chicken3", 4,203895E-45f, Vector(161,3603f, 73,28625f, 2209,09f), Vector(0.0f, 20.0f, 0.0f), Vector(7,688399f, 7,688399f, 7,688399f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1016, &iLocal_284 + 968[2]);
	*(&iLocal_284 + 968[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thi_chicken4", 4,203895E-45f, Vector(191,068f, 73,28625f, 2203,912f), Vector(0.0f, 20.0f, 0.0f), Vector(8,943166f, 8,943166f, 8,943166f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1016, &iLocal_284 + 968[3]);
	*(&iLocal_284 + 968[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thi_chicken5", 4,203895E-45f, Vector(106,1528f, 73,28625f, 2295,609f), Vector(0.0f, -5,160184f, 0.0f), Vector(19,327f, 7,688399f, 13,47398f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1016, &iLocal_284 + 968[4]);
	*(&iLocal_284 + 1064) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_fish_set");
	*(&iLocal_284 + 1024[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_fish_01", 4,203895E-45f, Vector(107,9999f, 62,3486f, 2252.0f), Vector(0.0f, -20,16817f, 0.0f), Vector(46,7114f, 9,114058f, 13,40402f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1064, &iLocal_284 + 1024[0]);
	*(&iLocal_284 + 1024[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_fish_02", 4,203895E-45f, Vector(161,5966f, 64,9888f, 2273,518f), Vector(0.0f, -20,16817f, 0.0f), Vector(26,60962f, 6,602382f, 25,74983f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1064, &iLocal_284 + 1024[1]);
	*(&iLocal_284 + 1024[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_fish_03", 4,203895E-45f, Vector(166,6306f, 65,35305f, 2330,964f), Vector(0.0f, -82,76395f, 0.0f), Vector(66,15244f, 6,602382f, 25,74983f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1064, &iLocal_284 + 1024[2]);
	*(&iLocal_284 + 1024[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_fish_04", 4,203895E-45f, Vector(200,9797f, 65,33083f, 2229,694f), Vector(0.0f, 223,0254f, 0.0f), Vector(66,15244f, 6,602382f, 25,74983f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1064, &iLocal_284 + 1024[3]);
	*(&iLocal_284 + 1096) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_gunsmith_set");
	*(&iLocal_284 + 1072[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_gunsmith01", 2,802597E-45f, Vector(166,4479f, 74,23535f, 2188,54f), Vector(0.0f, -33,61417f, 0.0f), Vector(5,711356f, 4,484836f, 9,172855f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1096, &iLocal_284 + 1072[0]);
	*(&iLocal_284 + 1072[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_gunsmith02", 2,802597E-45f, Vector(169,3781f, 75,1996f, 2188,938f), Vector(0.0f, -33,61417f, 0.0f), Vector(0,6203356f, 2,133884f, 6,604735f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1096, &iLocal_284 + 1072[1]);
	*(&iLocal_284 + 1104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_fff", 2,802597E-45f, Vector(161,5258f, 74,70499f, 2293,978f), Vector(0.0f, 92,26971f, 0.0f), Vector(2,852055f, 3,342353f, 6,901263f));
	*(&iLocal_284 + 1136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_brothel_more_set");
	*(&iLocal_284 + 1112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_brothel06", 2,802597E-45f, Vector(145,4312f, 75,41055f, 2239,007f), Vector(0.0f, -29,94305f, 0.0f), Vector(2,231024f, 8,803533f, 15,85239f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1136, &iLocal_284 + 1112[0]);
	*(&iLocal_284 + 1112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_brothel07", 2,802597E-45f, Vector(151,7391f, 74,98534f, 2242,705f), Vector(0.0f, -29,94305f, 0.0f), Vector(10,28458f, 2,640776f, 10,87477f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1136, &iLocal_284 + 1112[1]);
	*(&iLocal_284 + 1144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_brothel_rooms", 2,802597E-45f, Vector(149,8487f, 78,25007f, 2244,917f), Vector(0.0f, -29,21607f, 0.0f), Vector(11,11006f, 3,394601f, 4,577099f));
	*(&iLocal_284 + 1152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_blackjack", 2,802597E-45f, Vector(171,3108f, 73,64671f, 2224,382f), Vector(0.0f, -30,87644f, 0.0f), Vector(3,569148f, 5,059165f, 2,888656f));
	*(&iLocal_284 + 1160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_liarsdice", 2,802597E-45f, Vector(168,1322f, 73,64671f, 2222,92f), Vector(0.0f, -30,87644f, 0.0f), Vector(4,159747f, 4,159747f, 3,881289f));
	*(&iLocal_284 + 1168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_poker", 2,802597E-45f, Vector(164,1496f, 73,64671f, 2231,487f), Vector(0.0f, -30,87644f, 0.0f), Vector(4,615512f, 4,615512f, 4,901088f));
	*(&iLocal_284 + 1192) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_brothel1_set");
	*(&iLocal_284 + 1176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_brothel", 2,802597E-45f, Vector(150,4911f, 75,13766f, 2242,012f), Vector(0.0f, -29,94305f, 0.0f), Vector(12,88916f, 8,803533f, 15,34764f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1192, &iLocal_284 + 1176[0]);
	*(&iLocal_284 + 1224) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_toughGuys_set");
	*(&iLocal_284 + 1200[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "toughGuys2", 4,203895E-45f, Vector(160,5707f, 74,59276f, 2220,309f), Vector(0.0f, 20.0f, 0.0f), Vector(3,701838f, 2,931919f, 3,701838f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1224, &iLocal_284 + 1200[0]);
	*(&iLocal_284 + 1200[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "toughGuys1", 4,203895E-45f, Vector(168,9522f, 74,93501f, 2228,21f), Vector(0.0f, 20.0f, 0.0f), Vector(2,362861f, 1,270516f, 2,316527f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1224, &iLocal_284 + 1200[1]);
	*(&iLocal_284 + 1256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_birds_set");
	*(&iLocal_284 + 1232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "birdPop2", 2,802597E-45f, Vector(171,3679f, 80,75795f, 2206,437f), Vector(0.0f, 37,66278f, 0.0f), Vector(134,9081f, 11,5013f, 72,34597f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1256, &iLocal_284 + 1232[0]);
	*(&iLocal_284 + 1232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "birdPop1", 2,802597E-45f, Vector(124,2394f, 82,49654f, 2330,436f), Vector(0.0f, 94,87074f, 0.0f), Vector(143,8678f, 13,00599f, 88,99593f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1256, &iLocal_284 + 1232[1]);
	*(&iLocal_284 + 1288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_doctor_set");
	*(&iLocal_284 + 1264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_doctor01", 2,802597E-45f, Vector(173,3407f, 75,70671f, 2181,098f), Vector(0.0f, -33,72612f, 0.0f), Vector(11,94255f, 7,309404f, 7,48098f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1288, &iLocal_284 + 1264[0]);
	*(&iLocal_284 + 1264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_doctor02", 2,802597E-45f, Vector(177,9076f, 78,04267f, 2184,987f), Vector(0.0f, -33,72612f, 0.0f), Vector(0,9548771f, 1,689583f, 4,540689f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1288, &iLocal_284 + 1264[1]);
	*(&iLocal_284 + 1320) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_streetSpawn_set");
	*(&iLocal_284 + 1296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_streetSpawn1", 2,802597E-45f, Vector(164,2035f, 73,21194f, 2194,947f), Vector(0.0f, -32,85844f, 0.0f), Vector(46,02656f, 33,92661f, 98,30106f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1320, &iLocal_284 + 1296[0]);
	*(&iLocal_284 + 1296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_streetSpawn2", 2,802597E-45f, Vector(110,2687f, 73,03625f, 2301,83f), Vector(0.0f, -26,29476f, 0.0f), Vector(22,16118f, 15,8923f, 43,49994f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1320, &iLocal_284 + 1296[1]);
	*(&iLocal_284 + 1384) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_284, "thiv_pawnshop_set");
	*(&iLocal_284 + 1328[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pawnsh01", 2,802597E-45f, Vector(143,1704f, 75,28658f, 2311,763f), Vector(0.0f, 5,286093f, 0.0f), Vector(2,540473f, 1,622967f, 0,4586426f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1384, &iLocal_284 + 1328[0]);
	*(&iLocal_284 + 1328[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pawnsh02", 2,802597E-45f, Vector(140,4967f, 74,90644f, 2316,956f), Vector(0.0f, 5,286093f, 0.0f), Vector(11,60371f, 2,53916f, 10,38338f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1384, &iLocal_284 + 1328[1]);
	*(&iLocal_284 + 1328[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pawnsh03", 2,802597E-45f, Vector(137,5464f, 75,28658f, 2312,284f), Vector(0.0f, 5,286093f, 0.0f), Vector(2,883379f, 1,622967f, 0,4586426f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1384, &iLocal_284 + 1328[2]);
	*(&iLocal_284 + 1328[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pawnsh04", 2,802597E-45f, Vector(134,6031f, 75,12867f, 2314,741f), Vector(0.0f, 5,286093f, 0.0f), Vector(0,3003308f, 1,423614f, 3,293785f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1384, &iLocal_284 + 1328[3]);
	*(&iLocal_284 + 1328[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pawnsh05", 2,802597E-45f, Vector(135,1282f, 75,12867f, 2320,417f), Vector(0.0f, 5,286093f, 0.0f), Vector(0,3003308f, 1,423614f, 3,056028f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1384, &iLocal_284 + 1328[4]);
	*(&iLocal_284 + 1328[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "thiv_pawnsh06", 2,802597E-45f, Vector(146,4621f, 75,30753f, 2317,895f), Vector(0.0f, 5,286093f, 0.0f), Vector(0,3003308f, 1,639946f, 3,849716f));
	ADD_TO_VOLUME_SET(&iLocal_284 + 1384, &iLocal_284 + 1328[5]);
	*(&iLocal_284 + 1392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_284, "v_THIAddKO", 2,802597E-45f, Vector(171,9999f, 73,51794f, 2232.0f), Vector(0.0f, -29,87128f, 0.0f), Vector(3,811612f, 5,526439f, 9,257933f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos1", Vector(189,071f, 76,102f, 2371,522f), Vector(-1,13f, 58,516f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos2", Vector(120,251f, 80,408f, 2404,159f), Vector(-6,327f, -21,946f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos3", Vector(83,686f, 75,128f, 2263,773f), Vector(-0,747f, -72,009f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos4", Vector(212,498f, 76,362f, 2249,836f), Vector(3,909f, 13,82f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos5", Vector(234,667f, 80,681f, 2188,146f), Vector(-8,892f, 115,727f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos6", Vector(47,261f, 74,871f, 2341,825f), Vector(2,419f, -75,984f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos7", Vector(188,877f, 75,248f, 2247,235f), Vector(0,484f, 92,289f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos8", Vector(125,199f, 78,28f, 2239,857f), Vector(-5,205f, -62,702f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos9", Vector(172,968f, 75,417f, 2294,387f), Vector(-1,214f, 42,594f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thi_vista_cam_pos10", Vector(173,783f, 75,551f, 2300,971f), Vector(0,37f, 150,334f, 0.0f));
	*(&iLocal_284 + 1400) = Vector(121,146f, 73,286f, 2312,448f);
	*(&iLocal_284 + 1400 + 12) = Vector(0.0f, 132,303f, 0.0f);
	*(&iLocal_284 + 1424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "armf_playerDuel1", Vector(121,146f, 73,286f, 2312,448f), Vector(0.0f, 132,303f, 0.0f));
	*(&iLocal_284 + 1432) = Vector(114,742f, 73,286f, 2319,227f);
	*(&iLocal_284 + 1432 + 12) = Vector(0.0f, -38,61496f, 0.0f);
	*(&iLocal_284 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "armf_enDuel1", Vector(114,742f, 73,286f, 2319,227f), Vector(0.0f, -38,61496f, 0.0f));
	*(&iLocal_284 + 1464) = Vector(151,327f, 73,036f, 2220,009f);
	*(&iLocal_284 + 1464 + 12) = Vector(0.0f, 148,03f, 0.0f);
	*(&iLocal_284 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "armf_playerDuel2", Vector(151,327f, 73,036f, 2220,009f), Vector(0.0f, 148,03f, 0.0f));
	*(&iLocal_284 + 1496) = Vector(146,572f, 73,286f, 2227,233f);
	*(&iLocal_284 + 1496 + 12) = Vector(0.0f, -32,77494f, 0.0f);
	*(&iLocal_284 + 1520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "armf_enDuel2", Vector(146,572f, 73,286f, 2227,233f), Vector(0.0f, -32,77494f, 0.0f));
	*(&iLocal_284 + 1528) = Vector(190,938f, 73,036f, 2183,411f);
	*(&iLocal_284 + 1528 + 12) = Vector(0.0f, 137,353f, 0.0f);
	*(&iLocal_284 + 1552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "armf_playerDuel3", Vector(190,938f, 73,036f, 2183,411f), Vector(0.0f, 137,353f, 0.0f));
	*(&iLocal_284 + 1560) = Vector(184,741f, 73,036f, 2189,819f);
	*(&iLocal_284 + 1560 + 12) = Vector(0.0f, -45,35883f, 0.0f);
	*(&iLocal_284 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "armf_enDuel3", Vector(184,741f, 73,036f, 2189,819f), Vector(0.0f, -45,35883f, 0.0f));
	*(&iLocal_284 + 1592) = Vector(174,3415f, 71,90105f, 2411,603f);
	*(&iLocal_284 + 1592 + 12) = Vector(0.0f, -77,5631f, 0.0f);
	*(&iLocal_284 + 1616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_01", Vector(174,3415f, 71,90105f, 2411,603f), Vector(0.0f, -77,5631f, 0.0f));
	*(&iLocal_284 + 1624) = Vector(169,2869f, 72,59053f, 2395,41f);
	*(&iLocal_284 + 1624 + 12) = Vector(0.0f, -49,11977f, 0.0f);
	*(&iLocal_284 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_02", Vector(169,2869f, 72,59053f, 2395,41f), Vector(0.0f, -49,11977f, 0.0f));
	*(&iLocal_284 + 1656) = Vector(160,9603f, 72,34877f, 2383,063f);
	*(&iLocal_284 + 1656 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_284 + 1680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_03", Vector(160,9603f, 72,34877f, 2383,063f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_284 + 1688) = Vector(170,5094f, 73,36586f, 2367,597f);
	*(&iLocal_284 + 1688 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_284 + 1712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_04", Vector(170,5094f, 73,36586f, 2367,597f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_284 + 1720) = Vector(162,9955f, 72,08791f, 2354,723f);
	*(&iLocal_284 + 1720 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_284 + 1744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_05", Vector(162,9955f, 72,08791f, 2354,723f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_284 + 1752) = Vector(163,1924f, 73,44358f, 2338,085f);
	*(&iLocal_284 + 1752 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_284 + 1776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_06", Vector(163,1924f, 73,44358f, 2338,085f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_284 + 1784) = Vector(149,1169f, 73,09775f, 2322,514f);
	*(&iLocal_284 + 1784 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_284 + 1808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_07", Vector(149,1169f, 73,09775f, 2322,514f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_284 + 1816) = Vector(173,3731f, 74,22238f, 2308,269f);
	*(&iLocal_284 + 1816 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_284 + 1840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_08", Vector(173,3731f, 74,22238f, 2308,269f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_284 + 1848) = Vector(163,6363f, 72,1502f, 2313,983f);
	*(&iLocal_284 + 1848 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_284 + 1872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_09", Vector(163,6363f, 72,1502f, 2313,983f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_284 + 1880) = Vector(145,7547f, 72,30187f, 2301,504f);
	*(&iLocal_284 + 1880 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_284 + 1904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_010", Vector(145,7547f, 72,30187f, 2301,504f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_284 + 1912) = Vector(144,223f, 73,83006f, 2288,575f);
	*(&iLocal_284 + 1912 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_284 + 1936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_011", Vector(144,223f, 73,83006f, 2288,575f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_284 + 1944) = Vector(128,9439f, 72,42185f, 2279,316f);
	*(&iLocal_284 + 1944 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_284 + 1968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_012", Vector(128,9439f, 72,42185f, 2279,316f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_284 + 1976) = Vector(96,69703f, 72,54664f, 2253,653f);
	*(&iLocal_284 + 1976 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_284 + 2000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_013", Vector(96,69703f, 72,54664f, 2253,653f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_284 + 2008) = Vector(123,789f, 72,82449f, 2258,633f);
	*(&iLocal_284 + 2008 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_284 + 2032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_014", Vector(123,789f, 72,82449f, 2258,633f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_284 + 2040) = Vector(111,9999f, 72,28235f, 2236.0f);
	*(&iLocal_284 + 2040 + 12) = Vector(0.0f, 141,7191f, 0.0f);
	*(&iLocal_284 + 2064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_015", Vector(111,9999f, 72,28235f, 2236.0f), Vector(0.0f, 141,7191f, 0.0f));
	*(&iLocal_284 + 2072) = Vector(137,8561f, 72,81793f, 2244,347f);
	*(&iLocal_284 + 2072 + 12) = Vector(0.0f, 141,7191f, 0.0f);
	*(&iLocal_284 + 2096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_016", Vector(137,8561f, 72,81793f, 2244,347f), Vector(0.0f, 141,7191f, 0.0f));
	*(&iLocal_284 + 2104) = Vector(162,2157f, 72,65971f, 2253,01f);
	*(&iLocal_284 + 2104 + 12) = Vector(0.0f, 244,458f, 0.0f);
	*(&iLocal_284 + 2128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_017", Vector(162,2157f, 72,65971f, 2253,01f), Vector(0.0f, 244,458f, 0.0f));
	*(&iLocal_284 + 2136) = Vector(166,8038f, 72,65971f, 2244,803f);
	*(&iLocal_284 + 2136 + 12) = Vector(0.0f, 244,458f, 0.0f);
	*(&iLocal_284 + 2160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_018", Vector(166,8038f, 72,65971f, 2244,803f), Vector(0.0f, 244,458f, 0.0f));
	*(&iLocal_284 + 2168) = Vector(185,0596f, 73,55966f, 2248,912f);
	*(&iLocal_284 + 2168 + 12) = Vector(0.0f, 239,6449f, 0.0f);
	*(&iLocal_284 + 2192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_019", Vector(185,0596f, 73,55966f, 2248,912f), Vector(0.0f, 239,6449f, 0.0f));
	*(&iLocal_284 + 2200) = Vector(184,2704f, 73,20306f, 2229,011f);
	*(&iLocal_284 + 2200 + 12) = Vector(0.0f, 141,23f, 0.0f);
	*(&iLocal_284 + 2224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_020", Vector(184,2704f, 73,20306f, 2229,011f), Vector(0.0f, 141,23f, 0.0f));
	*(&iLocal_284 + 2232) = Vector(198,4751f, 73,29941f, 2224,86f);
	*(&iLocal_284 + 2232 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_284 + 2256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_021", Vector(198,4751f, 73,29941f, 2224,86f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_284 + 2264) = Vector(188,4787f, 73,37904f, 2210,481f);
	*(&iLocal_284 + 2264 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_284 + 2288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_022", Vector(188,4787f, 73,37904f, 2210,481f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_284 + 2296) = Vector(200,085f, 72,26197f, 2199,923f);
	*(&iLocal_284 + 2296 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_284 + 2320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_023", Vector(200,085f, 72,26197f, 2199,923f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_284 + 2328) = Vector(201,4553f, 72,46182f, 2210,378f);
	*(&iLocal_284 + 2328 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_284 + 2352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_024", Vector(201,4553f, 72,46182f, 2210,378f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_284 + 2360) = Vector(213,1302f, 72,97697f, 2200,751f);
	*(&iLocal_284 + 2360 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_284 + 2384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_025", Vector(213,1302f, 72,97697f, 2200,751f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_284 + 2392) = Vector(225,3965f, 73,35677f, 2197,582f);
	*(&iLocal_284 + 2392 + 12) = Vector(0.0f, 231,5099f, 0.0f);
	*(&iLocal_284 + 2416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_026", Vector(225,3965f, 73,35677f, 2197,582f), Vector(0.0f, 231,5099f, 0.0f));
	*(&iLocal_284 + 2424) = Vector(232,1205f, 73,5583f, 2172,583f);
	*(&iLocal_284 + 2424 + 12) = Vector(0.0f, 278,1251f, 0.0f);
	*(&iLocal_284 + 2448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_027", Vector(232,1205f, 73,5583f, 2172,583f), Vector(0.0f, 278,1251f, 0.0f));
	*(&iLocal_284 + 2456) = Vector(212,8745f, 72,65473f, 2156,622f);
	*(&iLocal_284 + 2456 + 12) = Vector(0.0f, 278,1251f, 0.0f);
	*(&iLocal_284 + 2480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_028", Vector(212,8745f, 72,65473f, 2156,622f), Vector(0.0f, 278,1251f, 0.0f));
	*(&iLocal_284 + 2488) = Vector(211,7295f, 73,26682f, 2131,409f);
	*(&iLocal_284 + 2488 + 12) = Vector(0.0f, 245,2664f, 0.0f);
	*(&iLocal_284 + 2512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_029", Vector(211,7295f, 73,26682f, 2131,409f), Vector(0.0f, 245,2664f, 0.0f));
	*(&iLocal_284 + 2520) = Vector(187,7853f, 72,86517f, 2147,021f);
	*(&iLocal_284 + 2520 + 12) = Vector(0.0f, 352,7331f, 0.0f);
	*(&iLocal_284 + 2544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_030", Vector(187,7853f, 72,86517f, 2147,021f), Vector(0.0f, 352,7331f, 0.0f));
	*(&iLocal_284 + 2552) = Vector(175,9999f, 72,3225f, 2136.0f);
	*(&iLocal_284 + 2552 + 12) = Vector(0.0f, 281,2891f, 0.0f);
	*(&iLocal_284 + 2576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_031", Vector(175,9999f, 72,3225f, 2136.0f), Vector(0.0f, 281,2891f, 0.0f));
	*(&iLocal_284 + 2584) = Vector(186,7025f, 72,52797f, 2052,782f);
	*(&iLocal_284 + 2584 + 12) = Vector(0.0f, 281,2891f, 0.0f);
	*(&iLocal_284 + 2608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_respawn_water_033", Vector(186,7025f, 72,52797f, 2052,782f), Vector(0.0f, 281,2891f, 0.0f));
	*(&iLocal_284 + 2616) = Vector(137,2898f, 73,65411f, 2316,914f);
	*(&iLocal_284 + 2616 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_284 + 2640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_store", Vector(137,2898f, 73,65411f, 2316,914f), Vector(0.0f, 93,67333f, 0.0f));
	*(&iLocal_284 + 2648) = Vector(126,2348f, 76,257f, 2309,524f);
	*(&iLocal_284 + 2648 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_284 + 2672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "camera_cut_pos1_store", Vector(126,2348f, 76,257f, 2309,524f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_284 + 2680) = Vector(130,6668f, 76,106f, 2311,561f);
	*(&iLocal_284 + 2680 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_284 + 2704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "camera_cut_pos2_store", Vector(130,6668f, 76,106f, 2311,561f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_284 + 2712) = Vector(129,3975f, 73,193f, 2308,753f);
	*(&iLocal_284 + 2712 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_284 + 2736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "return_gateway_pos_store", Vector(129,3975f, 73,193f, 2308,753f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_284 + 2744) = Vector(131,797f, 73,286f, 2308,278f);
	*(&iLocal_284 + 2744 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_284 + 2768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "return_stand_pos_store", Vector(131,797f, 73,286f, 2308,278f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_284 + 2776) = Vector(175,9791f, 73,47179f, 2183,501f);
	*(&iLocal_284 + 2776 + 12) = Vector(0.0f, 203,3782f, 0.0f);
	*(&iLocal_284 + 2800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_store1", Vector(175,9791f, 73,47179f, 2183,501f), Vector(0.0f, 203,3782f, 0.0f));
	*(&iLocal_284 + 2808) = Vector(176,7663f, 76,257f, 2195,01f);
	*(&iLocal_284 + 2808 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_284 + 2832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "camera_cut_pos1_store1", Vector(176,7663f, 76,257f, 2195,01f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_284 + 2840) = Vector(177,1958f, 76,106f, 2190,152f);
	*(&iLocal_284 + 2840 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_284 + 2864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "camera_cut_pos2_store1", Vector(177,1958f, 76,106f, 2190,152f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_284 + 2872) = Vector(174,9771f, 73,193f, 2192,291f);
	*(&iLocal_284 + 2872 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_284 + 2896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "return_gateway_pos_store1", Vector(174,9771f, 73,193f, 2192,291f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_284 + 2904) = Vector(173,7238f, 73,286f, 2190,19f);
	*(&iLocal_284 + 2904 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_284 + 2928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "return_stand_pos_store1", Vector(173,7238f, 73,286f, 2190,19f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_284 + 2936) = Vector(166,6709f, 73,48386f, 2186,76f);
	*(&iLocal_284 + 2936 + 12) = Vector(0.0f, 195,8555f, 0.0f);
	*(&iLocal_284 + 2960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_store2", Vector(166,6709f, 73,48386f, 2186,76f), Vector(0.0f, 195,8555f, 0.0f));
	*(&iLocal_284 + 2968) = Vector(171,092f, 73,288f, 2193,133f);
	*(&iLocal_284 + 2968 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_284 + 2992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "return_stand_pos_store2", Vector(171,092f, 73,288f, 2193,133f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_284 + 3000) = Vector(173,1345f, 73,195f, 2194,479f);
	*(&iLocal_284 + 3000 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_284 + 3024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "return_gateway_pos_store2", Vector(173,1345f, 73,195f, 2194,479f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_284 + 3032) = Vector(174,2011f, 76,108f, 2191,587f);
	*(&iLocal_284 + 3032 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_284 + 3056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "camera_cut_pos2_store2", Vector(174,2011f, 76,108f, 2191,587f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_284 + 3064) = Vector(175,9291f, 76,259f, 2196,149f);
	*(&iLocal_284 + 3064 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_284 + 3088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "camera_cut_pos1_store2", Vector(175,9291f, 76,259f, 2196,149f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_284 + 3096) = Vector(156,3038f, 73,75475f, 2193,409f);
	*(&iLocal_284 + 3096 + 12) = Vector(0.0f, 229,9398f, 0.0f);
	*(&iLocal_284 + 3120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_blacksmith", Vector(156,3038f, 73,75475f, 2193,409f), Vector(0.0f, 229,9398f, 0.0f));
	*(&iLocal_284 + 3128) = Vector(124,1311f, 76,74467f, 2235,329f);
	*(&iLocal_284 + 3128 + 12) = Vector(0.0f, 197,4766f, 0.0f);
	*(&iLocal_284 + 3152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_house", Vector(124,1311f, 76,74467f, 2235,329f), Vector(0.0f, 197,4766f, 0.0f));
	*(&iLocal_284 + 3160) = Vector(165,1226f, 73,75176f, 2227,55f);
	*(&iLocal_284 + 3160 + 12) = Vector(0.0f, 59,80434f, 0.0f);
	*(&iLocal_284 + 3184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_saloon", Vector(165,1226f, 73,75176f, 2227,55f), Vector(0.0f, 59,80434f, 0.0f));
	*(&iLocal_284 + 3192) = Vector(149,6569f, 73,81389f, 2240,985f);
	*(&iLocal_284 + 3192 + 12) = Vector(0.0f, 63,98124f, 0.0f);
	*(&iLocal_284 + 3216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_brothel", Vector(149,6569f, 73,81389f, 2240,985f), Vector(0.0f, 63,98124f, 0.0f));
	*(&iLocal_284 + 3224) = Vector(127,5364f, 73,57987f, 2345,956f);
	*(&iLocal_284 + 3224 + 12) = Vector(0.0f, 98,3925f, 0.0f);
	*(&iLocal_284 + 3248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "thif_interiorPoint_factory", Vector(127,5364f, 73,57987f, 2345,956f), Vector(0.0f, 98,3925f, 0.0f));
	*(&iLocal_284 + 3256) = Vector(126,933f, 73,286f, 2313,945f);
	*(&iLocal_284 + 3256 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_284 + 3280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "horse_pos_store", Vector(126,933f, 73,286f, 2313,945f), Vector(0.0f, 93,67333f, 0.0f));
	*(&iLocal_284 + 3288) = Vector(180,694f, 73,149f, 2189,489f);
	*(&iLocal_284 + 3288 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_284 + 3312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "horse_pos_store1", Vector(180,694f, 73,149f, 2189,489f), Vector(0.0f, 93,67333f, 0.0f));
	*(&iLocal_284 + 3320) = Vector(180,694f, 73,149f, 2189,489f);
	*(&iLocal_284 + 3320 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_284 + 3344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_284, "horse_pos_store2", Vector(180,694f, 73,149f, 2189,489f), Vector(0.0f, 93,67333f, 0.0f));
	return 1;
}

void Function_252(int iParam0, int iParam1) //Position: 0x12688 / 75400
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

void Function_253(var uParam0, int iParam1) //Position: 0x126D2 / 75474
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_254() //Position: 0x126E3 / 75491
{
	return;
}

bool Function_255() //Position: 0x126E9 / 75497
{
	return 1;
}

void Function_256() //Position: 0x126F0 / 75504
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(14, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
	return;
}

bool Function_257() //Position: 0x12743 / 75587
{
	return Function_258();
}

int Function_258() //Position: 0x1274C / 75596
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
	var uVar47;
	var uVar48;
	
	Function_252(3, 3);
	uVar0 = &uVar0;
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_kneel_rfl", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_169(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_l", 1, 0);
	if (!Function_164(&iLocal_178 + 8))
	{
		return 0;
	}
	iLocal_178 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	*(&iLocal_178 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_1", 2,802597E-45f, Vector(174,544f, 74,69175f, 2174,881f), Vector(0.0f, -33,54822f, 0.0f), Vector(7,831867f, 9,831814f, 6,802049f));
	*(&iLocal_178 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_2", 2,802597E-45f, Vector(168,8183f, 75,98361f, 2190,271f), Vector(0.0f, 56,89217f, 0.0f), Vector(10,18482f, 9,831814f, 6,68057f));
	*(&iLocal_178 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_3", 2,802597E-45f, Vector(133,9549f, 77,14455f, 2328,435f), Vector(0.0f, 94,10937f, 0.0f), Vector(11,69902f, 17,78174f, 26,64502f));
	*(&iLocal_178 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_4", 2,802597E-45f, Vector(127,1507f, 76,83834f, 2226,163f), Vector(0.0f, 76,57873f, 0.0f), Vector(6,595797f, 8,33664f, 5,207145f));
	*(&iLocal_178 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_5", 2,802597E-45f, Vector(210,416f, 76,67583f, 2189,287f), Vector(0.0f, 49,66166f, 0.0f), Vector(12,05783f, 8,33664f, 8,408677f));
	*(&iLocal_178 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_6", 2,802597E-45f, Vector(86,64233f, 77,86023f, 2310,672f), Vector(0.0f, -9,134888f, 0.0f), Vector(10,16262f, 9,162944f, 8,732252f));
	*(&iLocal_178 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_7", 2,802597E-45f, Vector(123,1021f, 75,28691f, 2399,494f), Vector(0.0f, -65,29062f, 0.0f), Vector(9,574632f, 13,32759f, 7,410429f));
	*(&iLocal_178 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_8", 2,802597E-45f, Vector(135,2089f, 74,68356f, 2377,938f), Vector(0.0f, -61,57181f, 0.0f), Vector(10,57188f, 10,5548f, 6,818066f));
	*(&iLocal_178 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_9", 2,802597E-45f, Vector(119,9468f, 74,68356f, 2367,582f), Vector(0.0f, -90,21614f, 0.0f), Vector(9,035792f, 10,5548f, 11,38101f));
	*(&iLocal_178 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_10", 2,802597E-45f, Vector(134,5067f, 74,78526f, 2296,865f), Vector(0.0f, -87,87088f, 0.0f), Vector(12,57496f, 12,5237f, 12,60422f));
	*(&iLocal_178 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_11", 2,802597E-45f, Vector(103,5688f, 75,83162f, 2271,843f), Vector(0.0f, -100,1456f, 0.0f), Vector(12,70806f, 12,5237f, 18,05608f));
	*(&iLocal_178 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_12", 2,802597E-45f, Vector(151,8736f, 75,83162f, 2241,574f), Vector(0.0f, -119,6021f, 0.0f), Vector(19,79422f, 13,25341f, 19,52035f));
	*(&iLocal_178 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_13", 2,802597E-45f, Vector(123,6351f, 76,83834f, 2234,387f), Vector(0.0f, 76,57873f, 0.0f), Vector(7,173061f, 11,47652f, 10,68787f));
	*(&iLocal_178 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_14", 2,802597E-45f, Vector(179,8192f, 75,83162f, 2218,513f), Vector(0.0f, -119,6021f, 0.0f), Vector(10,10013f, 13,25341f, 16,10051f));
	*(&iLocal_178 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_15", 2,802597E-45f, Vector(168,0644f, 79,79874f, 2228,53f), Vector(0.0f, -119,6021f, 0.0f), Vector(15,48685f, 6,925322f, 19,11614f));
	*(&iLocal_178 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_16", 2,802597E-45f, Vector(215,5513f, 76,67583f, 2173,553f), Vector(0.0f, 84,77409f, 0.0f), Vector(9,335411f, 8,33664f, 8,408677f));
	*(&iLocal_178 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_17", 2,802597E-45f, Vector(203,4639f, 76,67583f, 2141,447f), Vector(0.0f, 74,82314f, 0.0f), Vector(8,045826f, 8,33664f, 10,36656f));
	*(&iLocal_178 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_1", 2,802597E-45f, Vector(151,8736f, 79,61604f, 2241,574f), Vector(0.0f, -119,6021f, 0.0f), Vector(19,79422f, 6,67893f, 19,52035f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "MoveObj1", Vector(115,9999f, 73,28625f, 2344.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "MoveObj2", Vector(115,9999f, 73,28625f, 2346,276f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "MoveObj3", Vector(114,4476f, 73,28625f, 2344,968f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "feedchickens2", Vector(137,9044f, 73,28625f, 2226,084f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "feedchickens3", Vector(146,5031f, 73,28625f, 2201,902f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "feedchickens4", Vector(183,9999f, 73,28625f, 2204.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "feedchickens1", Vector(157,5594f, 73,28625f, 2215,079f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "thif_enDuel5", Vector(145,3168f, 73,28625f, 2229,293f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "thif_enDuel4", Vector(142,8837f, 73,28625f, 2227,011f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "thif_enDuel3", Vector(143,4786f, 73,28625f, 2227,54f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "thif_enDuel2", Vector(144,5947f, 73,28625f, 2228,695f), Vector(0.0f, -86,91833f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "thif_enDuel1", Vector(143,9999f, 73,28625f, 2228.0f), Vector(0.0f, -89,7602f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "thif_playerDuel", Vector(135,9999f, 73,28625f, 2236.0f), Vector(0.0f, 92,19331f, 0.0f));
	*(&iLocal_178 + 240) = Vector(115,8303f, 73,29681f, 2230,878f);
	*(&iLocal_178 + 240 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PlayerHorse", Vector(115,8303f, 73,29681f, 2230,878f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 272) = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_defSet", &iLocal_178, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def01", Vector(121,7043f, 76,48626f, 2398,92f), Vector(0.0f, -59,84791f, 0.0f));
	DECOR_SET_INT(&uVar1, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_178 + 272);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def03", Vector(175,3167f, 75,98838f, 2175,709f), Vector(0.0f, 300.0f, 0.0f));
	DECOR_SET_INT(&uVar2, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_178 + 272);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def04", Vector(124,2711f, 80,11531f, 2325,561f), Vector(0.0f, 36,68593f, 0.0f));
	DECOR_SET_INT(&uVar3, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_178 + 272);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def02_core", Vector(167,9342f, 76,34333f, 2193,422f), Vector(0.0f, -164,5166f, 0.0f));
	DECOR_SET_BOOL(&uVar4, "Core", true);
	DECOR_SET_INT(&uVar4, "Accuracy", 100);
	DECOR_SET_INT(&uVar4, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_178 + 272);
	*(&iLocal_178 + 280) = CREATE_OBJECTSET_IN_LAYOUT("ammo_00Set", &iLocal_178, 8, 0);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_01_player", Vector(121,581f, 76,48626f, 2399,488f), Vector(0.0f, 384,4727f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_178 + 280);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_01_surv", Vector(120,9343f, 76,48626f, 2398,087f), Vector(0.0f, 204,7049f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_178 + 280);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_02_player", Vector(168,3087f, 76,34333f, 2192,669f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_178 + 280);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_02_surv", Vector(168,3078f, 76,34333f, 2194,069f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_178 + 280);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_03_player", Vector(174,51f, 75,87855f, 2174,437f), Vector(0.0f, 237,6988f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_178 + 280);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_03_surv", Vector(175,7192f, 75,89238f, 2175,204f), Vector(0.0f, 417,5107f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_178 + 280);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_04_player", Vector(125,5868f, 80,11531f, 2325,487f), Vector(0.0f, 92,91433f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_178 + 280);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_00_04_surv", Vector(124,1873f, 80,11531f, 2325,565f), Vector(0.0f, -86,71516f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_178 + 280);
	*(&iLocal_178 + 288) = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group01_defSet", &iLocal_178, 8, 0);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def05", Vector(127,4689f, 77,27717f, 2226,244f), Vector(0.0f, -115.0f, 0.0f));
	DECOR_SET_INT(&uVar13, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_178 + 288);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def07", Vector(149,0447f, 76,79934f, 2233,231f), Vector(0.0f, 65.0f, 0.0f));
	DECOR_SET_INT(&uVar14, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_178 + 288);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def08", Vector(134,6663f, 75,24979f, 2377,515f), Vector(0.0f, 82,50484f, 0.0f));
	DECOR_SET_INT(&uVar15, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_178 + 288);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def06_core", Vector(171,4195f, 76,33035f, 2189,537f), Vector(0.0f, -130,9768f, 0.0f));
	DECOR_SET_BOOL(&uVar16, "Core", true);
	DECOR_SET_INT(&uVar16, "Accuracy", 100);
	DECOR_SET_INT(&uVar16, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_178 + 288);
	*(&iLocal_178 + 296) = CREATE_OBJECTSET_IN_LAYOUT("ammo_01Set", &iLocal_178, 8, 0);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_05_player", Vector(127,859f, 77,27717f, 2224,85f), Vector(0.0f, 163,8281f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_178 + 296);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_05_surv", Vector(127,4689f, 77,27717f, 2226,244f), Vector(0.0f, -14,73684f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_178 + 296);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_06_player", Vector(172,2835f, 76,33035f, 2188,188f), Vector(0.0f, 147,142f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_178 + 296);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_06_surv", Vector(171,4195f, 76,33035f, 2189,537f), Vector(0.0f, -32,47766f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_178 + 296);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_07_player", Vector(148,7638f, 76,79934f, 2238,5f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_178 + 296);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_07_surv", Vector(148,7638f, 76,79934f, 2233,1f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_178 + 296);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_08_player", Vector(133,8032f, 75,24979f, 2376,165f), Vector(0.0f, 207,6586f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_178 + 296);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_08_surv", Vector(134,5552f, 75,24979f, 2377,579f), Vector(0.0f, 29.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_178 + 296);
	*(&iLocal_178 + 304) = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group02_defSet", &iLocal_178, 8, 0);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def09", Vector(128,9454f, 80,09619f, 2324,829f), Vector(0.0f, 34,96332f, 0.0f));
	DECOR_SET_INT(&uVar25, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_178 + 304);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def010", Vector(89,47846f, 77,36099f, 2311,899f), Vector(0.0f, -121,9764f, 0.0f));
	DECOR_SET_INT(&uVar26, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_178 + 304);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def012", Vector(123,3789f, 76,48625f, 2401,905f), Vector(0.0f, -10,51537f, 0.0f));
	DECOR_SET_INT(&uVar27, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_178 + 304);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def011_core", Vector(149,0447f, 76,79934f, 2233,231f), Vector(0.0f, 65.0f, 0.0f));
	DECOR_SET_BOOL(&uVar28, "Core", true);
	DECOR_SET_INT(&uVar28, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_178 + 304);
	*(&iLocal_178 + 312) = CREATE_OBJECTSET_IN_LAYOUT("ammo_02Set", &iLocal_178, 8, 0);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_09_player", Vector(130,3447f, 80,09619f, 2324,726f), Vector(0.0f, 94,58057f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_178 + 312);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_09_surv", Vector(128,9454f, 80,09619f, 2324,829f), Vector(0.0f, -85,73938f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_178 + 312);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_10_player", Vector(89,5689f, 77,36099f, 2310,499f), Vector(0.0f, 175,075f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_178 + 312);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_10_surv", Vector(89,47846f, 77,36099f, 2311,899f), Vector(0.0f, -1,851742f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_178 + 312);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_12_player", Vector(123,1889f, 76,48625f, 2401,909f), Vector(0.0f, -98,32234f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_178 + 312);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_01_12_surv", Vector(124,5989f, 76,48625f, 2402,09f), Vector(0.0f, 83,17812f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_178 + 312);
	*(&iLocal_178 + 320) = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group03_difSet", &iLocal_178, 8, 0);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def014", Vector(127,4689f, 77,27717f, 2226,244f), Vector(0.0f, -115.0f, 0.0f));
	DECOR_SET_INT(&uVar35, "Accuracy", 100);
	DECOR_SET_INT(&uVar35, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_178 + 320);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def015", Vector(89,47846f, 77,36099f, 2311,899f), Vector(0.0f, 238,7791f, 0.0f));
	DECOR_SET_INT(&uVar36, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_178 + 320);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def016", Vector(120,2402f, 75,28333f, 2367,329f), Vector(0.0f, 15,49156f, 0.0f));
	DECOR_SET_INT(&uVar37, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &iLocal_178 + 320);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_def013_core", Vector(175,3167f, 75,98838f, 2175,709f), Vector(0.0f, 300.0f, 0.0f));
	DECOR_SET_BOOL(&uVar38, "Core", true);
	DECOR_SET_INT(&uVar38, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &iLocal_178 + 320);
	*(&iLocal_178 + 328) = CREATE_OBJECTSET_IN_LAYOUT("ammo_03Set", &iLocal_178, 8, 0);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_03_16_surv", Vector(120,9578f, 75,28333f, 2367,316f), Vector(0.0f, 91,03364f, 0.0f));
	DECOR_SET_INT(&uVar39, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &iLocal_178 + 328);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ammo_03_16_player", Vector(119,5495f, 75,28333f, 2367,342f), Vector(0.0f, -88,97911f, 0.0f));
	DECOR_SET_INT(&uVar40, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &iLocal_178 + 328);
	*(&iLocal_178 + 336) = CREATE_OBJECTSET_IN_LAYOUT("Survivor_Group_safeSet", &iLocal_178, 8, 0);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe01", Vector(162,8147f, 73,70523f, 2224,827f), Vector(0.0f, 83,50972f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &iLocal_178 + 336);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe02", Vector(168,3775f, 76,24969f, 2194,507f), Vector(-1,749283f, -123,0648f, 1,803591f));
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &iLocal_178 + 336);
	uVar43 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe03", Vector(202,3295f, 74,69861f, 2145,999f), Vector(-1,311285f, 161,9073f, -0,9580678f));
	ADD_OBJECT_TO_OBJECTSET(&uVar43, &iLocal_178 + 336);
	uVar44 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "sGroup_safe04", Vector(161,5648f, 73,72762f, 2226,139f), Vector(0.0f, 15,02913f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar44, &iLocal_178 + 336);
	*(&iLocal_178 + 344) = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", &iLocal_178, 8, 0);
	uVar45 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_2", Vector(133,6698f, 76,51495f, 2328,986f), Vector(0.0f, 95,03049f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar45, &iLocal_178 + 344);
	uVar46 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_3", Vector(161,2562f, 73,75426f, 2232,002f), Vector(0.0f, -78,0676f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar46, &iLocal_178 + 344);
	uVar47 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_4", Vector(122,7642f, 73,28625f, 2196,526f), Vector(0.0f, -81,30568f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar47, &iLocal_178 + 344);
	uVar48 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_5", Vector(157,3851f, 73,71989f, 2380,386f), Vector(0.0f, 30,87349f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar48, &iLocal_178 + 344);
	*(&iLocal_178 + 352) = Vector(124,6513f, 76,73672f, 2235,506f);
	*(&iLocal_178 + 352 + 12) = Vector(0.0f, 165,375f, 0.0f);
	*(&iLocal_178 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "player_save_01", Vector(124,6513f, 76,73672f, 2235,506f), Vector(0.0f, 165,375f, 0.0f));
	*(&iLocal_178 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "rand_idle_stand", "rand_idle_stand", Vector(162,8577f, 73,72521f, 2224,827f), Vector(0.0f, 83,9965f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 384), 0);
	*(&iLocal_178 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", Vector(168,3634f, 76,31242f, 2194,509f), Vector(0.0f, -123,4614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 392), 0);
	*(&iLocal_178 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_kneel_rfl", "DLC_survivor_kneel_rfl", Vector(202,3271f, 74,72832f, 2146,015f), Vector(0.0f, 162,881f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 400), 0);
	*(&iLocal_178 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", Vector(161,5955f, 73,72762f, 2226,258f), Vector(0.0f, 14,82758f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 408), 0);
	*(&iLocal_178 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ZombiePack_player_sleep_bed_L", "ZombiePack_player_sleep_bed_L", Vector(125,5958f, 76,74279f, 2234,163f), Vector(0.0f, -13,84706f, 0.0f));
	return 1;
}

void Function_259(bool bParam0, bool bParam1) //Position: 0x14218 / 82456
{
	var uVar0;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(bParam0);
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

void Function_260(int iParam0, bool bParam1, bool bParam2) //Position: 0x142B3 / 82611
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(&iParam0 + 608, 16);
	if (!&bParam2)
	{
		if (!Function_262(bParam1))
		{
			Function_197(&iParam0 + 608, 16);
			return;
		}
	}
	*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_92(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_261(&iParam0 + 384, iVar1[iVar0], 3, 1);
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
		Function_34(bParam1, Function_27(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_261(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x143BF / 82879
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_24(&(Param0[iVar02]), 4))
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

bool Function_262(int iParam0) //Position: 0x1449B / 83099
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_266(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_264(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_263(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_263(int iParam0) //Position: 0x14516 / 83222
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_264(int iParam0) //Position: 0x1452B / 83243
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_265(iParam0)7].f_12 < 0;
}

int Function_265(int iParam0) //Position: 0x14591 / 83345
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

bool Function_266(int iParam0, int iParam1) //Position: 0x14653 / 83539
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_267() //Position: 0x14670 / 83568
{
	SET_DUST_LEVEL(0);
	return;
}

void Function_268(char* cParam0) //Position: 0x1467B / 83579
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

