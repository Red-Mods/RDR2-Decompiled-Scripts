//Decompiled with MagicRDR v1.0
//Function Count : 297
//Statics Count : 1145
//Natives Count : 460
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
	var uLocal_180 = 1;
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
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 12;
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
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 3;
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
	var uLocal_302 = 2;
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
	var uLocal_320 = 2;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 6;
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
	var uLocal_344 = 4;
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
	var uLocal_356 = 2;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 6;
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
	var uLocal_380 = 2;
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
	int iLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 32;
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
	var uLocal_666 = 10;
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
	var uLocal_728 = 14;
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
	int iLocal_844 = 0;
	vector3 vLocal_845[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	var uLocal_877 = 12;
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
	iLocal_844 = 0;
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_296(&cVar0, 3);
	Function_294();
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
						Function_287(&iLocal_13, bScriptParam_0, 0);
					}
					else
					{
						Function_286(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_284())
				{
					Function_283();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_281())
				{
					Function_279();
					Function_278(&(Global_43791[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_275())
				{
					Function_273(bScriptParam_0);
					if (bLocal_177)
					{
						Function_271(&iLocal_13, Function_272(), bScriptParam_0);
						Function_270(&iLocal_13, Function_272());
					}
					Function_278(&(Global_43791[bScriptParam_0]), 16);
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
				Function_269(&uLocal_9);
				Function_267();
				Function_264(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_262() && Function_261(Global_44085[bScriptParam_09])) && Function_260(&iLocal_13))
				{
					Function_259();
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
					Function_249(&iLocal_13, bScriptParam_0, Function_272());
				}
				Function_236(bScriptParam_0);
				Function_234();
				Function_233();
				Function_278(&(Global_43791[bScriptParam_0]), 8);
				if (Function_232(&(Global_43791[bScriptParam_0]), 131072))
				{
					Function_231(&(Global_43791[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_230(bScriptParam_0);
				Function_229();
				Function_228(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_223(bScriptParam_0);
				Function_222(64);
				Function_278(&(Global_43791[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_221(Function_272(), bScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
				Function_220(&cVar0, 5.0f);
				Function_278(&(Global_43791[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_213(bScriptParam_0);
				if (Function_232(&(Global_43791[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_177)
				{
					Function_97(&iLocal_13, bScriptParam_0);
				}
				Function_60(&uLocal_9, &uLocal_666, Function_96(), bScriptParam_0);
				Function_56(&uLocal_728, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_177)
	{
		Function_40(&iLocal_13, bScriptParam_0);
	}
	Function_37(bScriptParam_0);
	Function_35();
	Function_34();
	Function_28();
	Function_20(&uLocal_9, &uLocal_666);
	Function_19(&uLocal_728);
	Function_17();
	Function_14(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_222(64);
	Function_231(&(Global_43791[bScriptParam_0]), 32);
	Function_231(&(Global_43791[bScriptParam_0]), 64);
	Function_231(&(Global_43791[bScriptParam_0]), 8);
	Function_231(&(Global_43791[bScriptParam_0]), 512);
	Function_231(&(Global_43791[bScriptParam_0]), 16);
	Function_231(&(Global_43791[bScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_220(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3CD / 973
{
	ALLOW_TUMBLEWEEDS(1);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_2(&Global_12342, &Global_14762, Global_46894[1], 1);
	return;
}

void Function_2(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x3EC / 1004
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_12(bParam2), 64);
	if (Function_10())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_232(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_231(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_9(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_9(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_8(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_9(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_8(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_232(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_7(2) || Function_232(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_9(&(Param0[iVar162]), 2) && !Function_9(&(Param0[iVar162]), 4))
		{
			Function_3(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_9(&(Param0[iVar162]), 2) && !Function_9(&(Param0[iVar162]), 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_278(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_3(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x60A / 1546
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_6(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_5(Global_43790), Function_4(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_9(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_9(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_6(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_5(Global_43790), Function_4(Global_43790), false, 0);
	}
}

int Function_4(int iParam0) //Position: 0x770 / 1904
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

int Function_5(int iParam0) //Position: 0x79B / 1947
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

void Function_6(var uParam0, int iParam1) //Position: 0x7CF / 1999
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_7(int iParam0) //Position: 0x7E0 / 2016
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, int iParam1) //Position: 0x7FC / 2044
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x816 / 2070
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_10() //Position: 0x833 / 2099
{
	if (Function_11(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_11(var uParam0, bool bParam1) //Position: 0x84E / 2126
{
	return (uParam0 && bParam1) == 0;
}

var Function_12(int iParam0) //Position: 0x85B / 2139
{
	if (!Function_13(iParam0))
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

bool Function_13(int iParam0) //Position: 0xD09 / 3337
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_14(int iParam0) //Position: 0xD1F / 3359
{
	int iVar0;
	
	if (!Function_13(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_15(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_15(int iParam0) //Position: 0xD55 / 3413
{
	if (!Function_16(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_16(int iParam0) //Position: 0xD77 / 3447
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

void Function_17() //Position: 0xD8D / 3469
{
	Function_18();
	return;
}

void Function_18() //Position: 0xD96 / 3478
{
	RELEASE_LAYOUT_REF(&iLocal_254);
	return;
}

void Function_19(struct<4>[] Param0) //Position: 0xDA2 / 3490
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

void Function_20(var uParam0, vector3[] vParam1) //Position: 0xE07 / 3591
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_27(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_26(&(vParam1[iVar03]), 4);
		}
		if (Function_27(&(vParam1[iVar03]), 8))
		{
			Function_21(0, 0, 30);
			Function_26(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_21(int iParam0, int iParam1, int iParam2) //Position: 0xE64 / 3684
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
		Function_22(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_22(int iParam0, int iParam1, bool bParam2) //Position: 0xF4E / 3918
{
	int iVar0;
	
	Function_25(iParam0);
	Function_24(&iParam1);
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
	Function_23();
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

void Function_23() //Position: 0x10CD / 4301
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_24(int iParam0) //Position: 0x10D9 / 4313
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

void Function_25(int iParam0) //Position: 0x1123 / 4387
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

void Function_26(struct<17> Param0) //Position: 0x1169 / 4457
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_27(struct<17> Param0) //Position: 0x1186 / 4486
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_28() //Position: 0x11A4 / 4516
{
	Function_29();
	return;
}

void Function_29() //Position: 0x11AD / 4525
{
	Function_30(&iLocal_416 + 8);
	RELEASE_LAYOUT_REF(&iLocal_416);
	return;
}

void Function_30(int iParam0) //Position: 0x11C2 / 4546
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_31(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_31(struct<2>[] Param0, int iParam1) //Position: 0x11EA / 4586
{
	if (Function_33(&(Param0[iParam12]), 4))
	{
		if (Function_33(&(Param0[iParam12]), 1))
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
			Function_32(&(Param0[iParam12]), 1);
			Function_32(&(Param0[iParam12]), 2);
			Function_32(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_32(struct<13> Param0) //Position: 0x1335 / 4917
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_33(struct<13> Param0) //Position: 0x1352 / 4946
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_34() //Position: 0x1370 / 4976
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	SET_FACTIONS_STATUS_ONE_WAY(8, 32, 4);
	SET_FACTIONS_STATUS_ONE_WAY(4, 32, 4);
	return;
}

void Function_35() //Position: 0x139C / 5020
{
	Function_36();
	return;
}

void Function_36() //Position: 0x13A5 / 5029
{
	Function_30(&iLocal_178 + 8);
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_37(bool bParam0) //Position: 0x13B8 / 5048
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_232(&(Global_43791[bParam0]), 0x20000000))
	{
		Function_231(&(Global_43791[bParam0]), 0x20000000);
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
		if (Function_38(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_7(1));
		}
	}
	return;
}

bool Function_38(bool bParam0) //Position: 0x1472 / 5234
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
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || Function_39(bParam0));
}

bool Function_39(int iParam0) //Position: 0x14E5 / 5349
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_40(int iParam0, int iParam1) //Position: 0x1502 / 5378
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_13(iParam1) || Function_11(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_43(&iParam0, &Global_11014, iParam1);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_43(&iParam0, &Global_11146, iParam1);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_43(&iParam0, &Global_11120, iParam1);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_43(&iParam0, &Global_11222, iParam1);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_43(&iParam0, &Global_11284, iParam1);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_43(&iParam0, &Global_11492, iParam1);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_43(&iParam0, &Global_11544, iParam1);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_43(&iParam0, &Global_11646, iParam1);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_43(&iParam0, &Global_11704, iParam1);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_43(&iParam0, &Global_11752, iParam1);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_43(&iParam0, &Global_11726, iParam1);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_43(&iParam0, &Global_11836, iParam1);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_43(&iParam0, &Global_11946, iParam1);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_43(&iParam0, &Global_11988, iParam1);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_43(&iParam0, &Global_12048, iParam1);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_43(&iParam0, &Global_12150, iParam1);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_43(&iParam0, &Global_11398, iParam1);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_43(&iParam0, &Global_12284, iParam1);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_43(&iParam0, &Global_12342, iParam1);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_43(&iParam0, &Global_12422, iParam1);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_43(&iParam0, &Global_12392, iParam1);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_43(&iParam0, &Global_12760, iParam1);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_43(&iParam0, &Global_12714, iParam1);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_43(&iParam0, &Global_12644, iParam1);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_43(&iParam0, &Global_12488, iParam1);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_43(&iParam0, &Global_12482, iParam1);
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
	Function_37(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_6623)
	{
		Function_41(iParam1);
	}
	return;
}

void Function_41(int iParam0) //Position: 0x1869 / 6249
{
	var uVar0;
	
	if (Global_6623 || Function_7(0x8000000))
	{
		return;
	}
	uVar0 = Function_42(iParam0);
	if (Function_38(iParam0))
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

int Function_42(int iParam0) //Position: 0x18D0 / 6352
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

void Function_43(vector3 vParam0) //Position: 0x1C18 / 7192
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
			Function_8(&(Param1[iVar02]), 4);
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
	if (!Function_38(iParam2))
	{
		Global_21684[&vParam0 + 6247].f_32 = 0.0f;
		if (!Function_55(Global_119934, 0x4000000))
		{
			Function_49(&Global_54076, 0x4000000, 1, 0);
		}
	}
	else if (Function_11(&vParam0 + 608, 32))
	{
		if (!Function_55(Global_119934, 8388608))
		{
			Function_49(&Global_54076, 8388608, 1, 0);
		}
	}
	else if (!Function_55(Global_119934, 4194304))
	{
		Function_49(&Global_54076, 4194304, 1, 0);
	}
	Function_47(&vParam0, 0, 0);
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
	Function_30(&vParam0 + 384);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_44(iParam2, Function_38(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_7(1));
	return;
}

void Function_44(int iParam0, bool bParam1) //Position: 0x1EF8 / 7928
{
	if (!Function_13(iParam0))
	{
		return;
	}
	if (bParam1 && Function_46("noZombieFireArt"))
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
			if (!Function_45(5))
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

bool Function_45(int iParam0) //Position: 0x264E / 9806
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_46(int iParam0) //Position: 0x2663 / 9827
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_47(var uParam0, bool bParam1, bool bParam2) //Position: 0x2685 / 9861
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
				if (!Function_48(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x270E / 9998
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_49(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x272E / 10030
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_51(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_50(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_50(char* cParam0) //Position: 0x27A3 / 10147
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

bool Function_51(int iParam0, var uParam1, int iParam2) //Position: 0x27DD / 10205
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
		if (Function_53(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_52(uVar0))
		{
			case 0x00000002:
				if (!Function_55(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_52(char* cParam0) //Position: 0x2859 / 10329
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

int Function_53(int iParam0) //Position: 0x28FA / 10490
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_54(&iVar1, 2147483648);
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

void Function_54(int iParam0, int iParam1) //Position: 0x2937 / 10551
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_55(var uParam0, int iParam1) //Position: 0x294D / 10573
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_56(struct<4>[] Param0, bool bParam1) //Position: 0x2960 / 10592
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
	while (iVar0 < Function_59((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_58(&(Param0[iVar04]), 16384);
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
								Function_57(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_58(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_96(), &Param0[iVar04] + 16))
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
								Function_57(&(Param0[iVar04]), 1);
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
							Function_57(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_58(&(Param0[iVar04]), 1);
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
					Function_57(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_57(&(Param0[iVar04]), 1);
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
					Function_58(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_58(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_96(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_96(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_58(&(Param0[iVar04]), 32768);
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

void Function_57(struct<13> Param0) //Position: 0x2D81 / 11649
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_58(struct<13> Param0) //Position: 0x2D94 / 11668
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_59(int iParam0, bool bParam1) //Position: 0x2DB1 / 11697
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(vector3 vParam0) //Position: 0x2DC3 / 11715
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_7(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_61(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_61(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x2E4D / 11853
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_95(&vParam0))
	{
		return 0;
	}
	Function_231(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_27(&vParam0, 2))
					{
						if (!Function_27(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_93(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_92(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_27(&vParam0, 2))
				{
					if (Function_27(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_21(0, 0, 0);
						}
						else
						{
							Function_21(0, 0, 30);
						}
						Function_26(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_27(&vParam0, 2))
					{
						if (!Function_27(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_92(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_27(&vParam0, 2))
				{
					if (Function_27(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_26(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_13(iParam2)) && !Function_91(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_90(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_27(&vParam0, 2))
					{
						if (!Function_27(&vParam0, 16))
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
								Function_92(&vParam0, 16);
								Function_82(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_27(&vParam0, 2))
				{
					if (Function_27(&vParam0, 16))
					{
						Function_26(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_27(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_27(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_92(&vParam0, 2);
			}
			else
			{
				Function_26(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_13(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_232(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_27(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_81(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_92(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_13(iParam2))
					{
						Function_80(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_62(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_62(int iParam0) //Position: 0x32A5 / 12965
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_232(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_278(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_67(473, 1, 0, 0);
		iVar0 = Function_66(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_67(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_67(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_67(476, 1, 0, 0);
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
		Function_65(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_65(7, 30);
	}
	if (Function_64(473) <= Function_63(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_63(int iParam0) //Position: 0x3396 / 13206
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_64(int iParam0) //Position: 0x33D3 / 13267
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_65(int iParam0, int iParam1) //Position: 0x340C / 13324
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

var Function_66(int iParam0) //Position: 0x3476 / 13430
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_13(iParam0))
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

int Function_67(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x34CE / 13518
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
	Function_79(iParam0, TO_FLOAT(bParam1), 1);
	Function_78(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_69(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_68(iParam0);
	return 1;
}

void Function_68(bool bParam0) //Position: 0x36F6 / 14070
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

void Function_69(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3794 / 14228
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_63(390))), 32);
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
					fVar19 = (Function_64(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_64(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_76(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_74(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_71(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_70(), &Var9);
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

var Function_70() //Position: 0x3DD2 / 15826
{
	int iVar0;
	
	return &iVar0;
}

var Function_71(int iParam0) //Position: 0x3DDB / 15835
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_72(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3DEC / 15852
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_73(char* cParam0) //Position: 0x3EE3 / 16099
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_74(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3EFE / 16126
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_59(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_75(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_75(int iParam0, int iParam1) //Position: 0x3F65 / 16229
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_76(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3F77 / 16247
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
	if (((Function_77(iParam0) != 19 || Function_77(iParam0) != 17) || Function_77(iParam0) != 10) || Function_77(iParam0) != 9)
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

int Function_77(int iParam0) //Position: 0x40AD / 16557
{
	return Global_55480[iParam016].f_96;
}

void Function_78(int iParam0) //Position: 0x40BC / 16572
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

int Function_79(int iParam0, float fParam1, bool bParam2) //Position: 0x4256 / 16982
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

void Function_80(var uParam0, int iParam1) //Position: 0x449A / 17562
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_81(int iParam0, var uParam1, int iParam2) //Position: 0x44A7 / 17575
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_82(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x44D1 / 17617
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_89(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_88(iParam1))
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
	if (!Function_85(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_83();
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

void Function_83() //Position: 0x4784 / 18308
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_84(&uVar0, &uVar1);
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

void Function_84(var uParam0, int iParam1) //Position: 0x47F7 / 18423
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

bool Function_85(bool bParam0) //Position: 0x482D / 18477
{
	if (Function_90(256))
	{
		return 0;
	}
	if (Function_90(262144))
	{
		return 0;
	}
	if (Function_87())
	{
		return 0;
	}
	if (!Function_90(1))
	{
		return 0;
	}
	if (!Function_90(4096))
	{
		return 0;
	}
	if (bParam0 && Function_86(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_90(2048))
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

int Function_86(int iParam0) //Position: 0x48A3 / 18595
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_87() //Position: 0x48B4 / 18612
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

bool Function_88(int iParam0) //Position: 0x48CD / 18637
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x48E3 / 18659
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x48F8 / 18680
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_91(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4916 / 18710
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

void Function_92(struct<17> Param0) //Position: 0x49C5 / 18885
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_93(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x49D8 / 18904
{
	int iVar0;
	int iVar1;
	
	Function_25(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_94(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_22(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_94(int iParam0, int iParam1) //Position: 0x4A52 / 19026
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_25(iParam0);
	Function_24(&uVar0);
	PRINTNL();
	Function_22(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_95(int iParam0) //Position: 0x4A7B / 19067
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

var Function_96() //Position: 0x4A9B / 19099
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_97(struct<82> Param0) //Position: 0x4AB0 / 19120
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
		Function_54(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_208(0, bParam1, 3);
		}
		if (!Function_11(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (bParam1 != Global_46914[1] || HUD_IS_FADED())
	{
		if (!Function_11(&Param0 + 608, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_206(1, 0));
			Function_205(&Param0 + 608, 0x20000000);
		}
		return;
	}
	if (Function_11(&Param0 + 608, 16))
	{
		Function_204(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_11(&Param0 + 608, 4))
	{
		return;
	}
	if (Global_6623 && !Function_11(&Param0 + 608, 4))
	{
		Function_205(&Param0 + 608, 4);
		Function_40(&Param0, bParam1);
		DECOR_SET_FLOAT(&Global_44085[bParam19] + 8, "ZombieScore", 0.0f);
		Function_203(0, 4294967295);
		Function_202();
		Function_37(bParam1);
		return;
	}
	fVar0 = Function_200(Function_201(bParam1));
	fVar1 = Function_199(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (&Param0 + 616 == 4294967295)
	{
		*(&Param0 + 616) = Function_208(111, 111, 5);
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
				Function_198(&Param0 + 8[iVar35]);
			}
			iVar3++;
		}
		Function_197(&Param0);
		*(&Param0 + 376) = 7;
		return;
	}
	if (Function_196(Function_201(bParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_11(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[bParam19] + 32, 32);
			SET_MISSION_INFO(&cVar5, "");
			if (Function_11(&Param0 + 608, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_193(&Param0, 0);
				Function_198(&Param0 + 336);
				iVar13 = 0;
				while (StackVal < (iVar13 - 1))
				{
					Function_198(&Param0 + 8[iVar135]);
					iVar13++;
				}
				Function_205(&Param0 + 608, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_204(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0,5f);
				Function_192(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(&Global_54076, "nDecayRate", 3);
				*(&Param0 + 376) = 5;
			}
			else
			{
				Function_190();
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
				Function_185(&Param0, bParam1, fVar2);
			}
			if (!Function_11(&Param0 + 608, 131072))
			{
				if (&Param0 + 376 == 6 && &Param0 + 376 < 1)
				{
					if ((Global_6629 && !Function_11(&Param0 + 608, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_205(&Param0 + 608, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar14 = Function_199(bParam1);
						fVar15 = (fVar14 % 10.0f);
						fVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar16));
						UI_REFRESH("ZMeter");
					}
					if (((Function_11(&Param0 + 608, 32768) && !DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && &Param0 + 376 > 5)
					{
						Function_197(&Param0);
					}
				}
			}
		}
	}
	Function_183(&Param0, bParam1);
	if (Function_11(&Param0 + 608, 1024))
	{
		Function_182(&Param0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_99146)
	{
		if (!Function_11(&Param0 + 608, 16384))
		{
			Function_205(&Param0 + 608, 16384);
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 0);
				iVar17++;
			}
		}
	}
	else if (Function_11(&Param0 + 608, 16384))
	{
		Function_54(&Param0 + 608, 16384);
		iVar17 = 0;
		while (StackVal < (iVar17 - 1))
		{
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 1);
			iVar17++;
		}
	}
	if (Function_11(&Param0 + 608, 262144))
	{
		if (Function_260(&Param0))
		{
			Function_54(&Param0 + 608, 262144);
			Function_180(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, bParam1, Param0);
			if (!Function_38(bParam1))
			{
				if (!Function_11(&Param0 + 608, 8))
				{
					Function_205(&Param0 + 608, 8);
					Function_179();
				}
			}
		}
	}
	if (Function_11(&Param0 + 608, 524288))
	{
		if (Function_179())
		{
			Function_205(&Param0 + 608, 8);
			Function_54(&Param0 + 608, 524288);
		}
	}
	switch (&Param0 + 376)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_55(Global_119934, 65536) || !Global_6606)) && Global_6629) && !Global_6628)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
				{
					DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
				}
				Function_171(&Param0);
				Function_205(&Param0 + 608, 262144);
				if (Function_38(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_286(bParam1, 1);
					Function_165(bParam1);
					Function_203(0, 4294967295);
					Function_204(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_11(&Param0 + 608, 1))
					{
						Function_164(&Param0, bParam1);
						Function_163("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						*(&Param0 + 376) = 2;
					}
					else
					{
						*(&Param0 + 376) = 4;
					}
					Function_161("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_286(bParam1, 0);
					Function_165(bParam1);
					Function_205(&Param0 + 608, 2);
					Function_203(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					*(&Param0 + 632) = 1000.0f;
					*(&Param0 + 376) = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_155(&Param0 + 336, 1, &Param0 + 608))
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
				Function_123(&Param0, bParam1);
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
					if (Function_11((&Param0 + 8[iVar175])->f_32, 2))
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
						if (Function_155(&Param0 + 8[iVar175], 0, &Param0 + 8[iVar175] + 32))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
							iVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_112(&Param0 + 8[iVar175], iVar21);
							Function_54(&Param0 + 8[iVar175] + 32, 2);
							Function_205(&Param0 + 8[iVar175] + 32, 16);
						}
						bVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_11((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_54(&Param0 + 8[iVar175] + 32, 16);
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
						if (Function_111(&uVar20))
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
			Function_192(1);
			if (Function_106(&Param0))
			{
				DECOR_SET_FLOAT(&Global_54076, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_105(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				*(&Param0 + 376) = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 600) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_204(bParam1, 300.0f);
			}
			else
			{
				Function_204(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_11(&Param0 + 608, 8))
			{
				Function_205(&Param0 + 608, 8);
				Function_179();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
			{
				DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
			}
			Function_104(bParam1);
			Function_103(&Param0);
			Function_193(&Param0, 1);
			Function_37(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_208(0, bParam1, 3);
			Function_205(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_205(&Param0 + 608, 512);
			if (!Function_11(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_100(Function_201(bParam1));
				Function_67(660, bVar43, 0, 0);
				Function_205(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Function_287(&Param0, bParam1, 1);
			Function_271(&Param0, &Global_46715, bParam1);
			Function_270(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_260(&Param0))
			{
				if (!bParam1 != Global_46914[0])
				{
					Function_249(&Param0, bParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_249(&Param0, bParam1, &Global_46715);
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
				Function_123(&Param0, bParam1);
				Function_171(&Param0);
				Function_205(&Param0 + 608, 262144);
				Function_286(bParam1, 1);
				Function_205(&Global_21684[Function_208(111, 111, 5)7] + 20, 4);
				Function_165(bParam1);
				Function_203(0, 4294967295);
				Function_204(bParam1, 0.0f);
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
					if (Function_11(Global_21684[&Param0 + 6247].f_24, 1))
					{
						Function_99(660, 1, 0);
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
						if ((!GET_LAST_ATTACKER(&iVar44) != &Global_54076 && &Param0 + 376 != 2) && !Function_11(&Param0 + 608, 8192))
						{
							Function_205(&Param0 + 608, 8192);
							Function_161("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar45 = 0;
							while (StackVal < (iVar45 - 1))
							{
								Function_198(&Param0 + 8[iVar455]);
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
			if (GET_LAST_ATTACKER(&iVar44) != &Global_54076 && !Function_11(&Param0 + 608, 0x4000000))
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
					Function_198(&Param0 + 8[iVar465]);
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
					Function_161("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_205(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_208(0, bParam1, 3);
				Function_205(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
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
			Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar47, Param0);
		}
	}
	return;
}

void Function_98(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, bool bParam80, var uParam81, char* cParam82) //Position: 0x5F92 / 24466
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
	Function_205(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, fVar4)));
}

int Function_99(int iParam0, bool bParam1, int iParam2) //Position: 0x5FE9 / 24553
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
	Function_78(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_69(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_100(int iParam0) //Position: 0x61E6 / 25062
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_102(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_101(&iVar1, iVar0);
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
			if (!Function_11(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_101(int[] iParam0) //Position: 0x63D0 / 25552
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

var Function_102(int iParam0) //Position: 0x67FF / 26623
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

void Function_103(vector3 vParam0) //Position: 0x6985 / 27013
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

void Function_104(int iParam0) //Position: 0x69DF / 27103
{
	var uVar0;
	
	if (Global_6623 || Function_7(0x8000000))
	{
		return;
	}
	uVar0 = Function_42(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_105(int iParam0) //Position: 0x6A19 / 27161
{
	int iVar0;
	
	if (Function_11(iParam0, 1) && Function_11(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_106(int iParam0) //Position: 0x6A4D / 27213
{
	return Function_107(&iParam0 + 600);
}

int Function_107(int iParam0) //Position: 0x6A5C / 27228
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
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_70()));
	}
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_70()));
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
				bVar8 = (Function_11(iVar7, 1024) && iVar7 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
					iVar9 = SQUAD_GET_SIZE(&iParam0);
					if (iVar9 >= 6)
					{
						if (Function_109(StackVal, &uVar3, Global_54078) < 20.0f && !Function_48(&uVar3, 0x3f800000, 0x42960000, 1, 1, 0))
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
		Function_108(&uVar0);
		DESTROY_OBJECT(&uVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 2560);
		Function_278(&(Global_43791[Global_43789]), 0x20000000);
		Function_163("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
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
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar11, 11, 0);
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

void Function_108(int iParam0) //Position: 0x6CB3 / 27827
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

float Function_109(var uParam0, struct<2> Param1) //Position: 0x6D0A / 27914
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_110(&uParam0);
		Var0 = Function_110(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_110(int iParam0) //Position: 0x6D81 / 28033
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

bool Function_111(int iParam0) //Position: 0x6DED / 28141
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

void Function_112(int iParam0, bool bParam1) //Position: 0x6F5E / 28510
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9;
	int iVar10;
	
	Function_122();
	Function_121();
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
	Function_67(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(&uVar3) || !IS_OBJECT_VALID(&uVar4))
	{
		SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_120(bParam1, 5.0f, 1);
		Function_198(&iParam0);
		Function_119(Global_43789, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(&uVar3, &Var6);
	fVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, fVar8, 1);
	SET_MOVER_FROZEN(&iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "DLC_give_ammo", 1);
	if (!Function_118(StackVal, &iParam0, Var6))
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
	Function_113(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_120(bParam1, 5.0f, 1);
	Function_198(&iParam0);
	Function_119(Global_43789, 10.0f);
	return;
}

var Function_113(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7258 / 29272
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_70(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_114(&uVar0, &uParam2);
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

void Function_114(var uParam0, int iParam1) //Position: 0x72E6 / 29414
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_117(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_116(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_115(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 1,6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 1,5f, 1, 0);
	return;
}

void Function_115(int iParam0, int iParam1) //Position: 0x734F / 29519
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

void Function_116(int iParam0, var uParam1) //Position: 0x73E0 / 29664
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

void Function_117(int iParam0, int iParam1) //Position: 0x7471 / 29809
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

bool Function_118(var uParam0, struct<2> Param1) //Position: 0x7507 / 29959
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

void Function_119(int iParam0, float fParam1) //Position: 0x7542 / 30018
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", fVar0);
	return;
}

void Function_120(bool bParam0, float fParam1, bool bParam2) //Position: 0x7586 / 30086
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
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_70(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_121() //Position: 0x76CA / 30410
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_122() //Position: 0x76DC / 30428
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_123(int iParam0, bool bParam1) //Position: 0x76F1 / 30449
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", 1);
	Function_126(StackVal, Global_54078, 1, &iParam0 + 336, 0);
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
	Function_163("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_11(&iParam0 + 608, 8))
	{
		if (Function_179())
		{
			Function_205(&iParam0 + 608, 8);
		}
		else
		{
			Function_205(&iParam0 + 608, 524288);
		}
	}
	Function_205(&iParam0 + 608, 32);
	*(&iParam0 + 624) = Function_208(0, bParam1, 3);
	Function_205(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_124(&iParam0);
	return;
}

void Function_124(vector3 vParam0) //Position: 0x79F9 / 31225
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
				*(&vParam0 + 8[iVar05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_70(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &vParam0 + 8[iVar05] + 24, &iVar1, Function_70(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_125(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, bVar3, 1) <= 5.0f)
				{
					*(&vParam0 + 8[iVar05] + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(&iVar1, "nUC_NoAmmo"))
				{
					uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
					DECOR_SET_INT(&iVar1, "nUC_NoAmmo", &uVar5);
				}
				Function_205(&vParam0 + 8[iVar05] + 32, 2);
				uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iVar1, Function_70(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uVar6, &iVar1, Function_70(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar7 = ADD_BLIP_FOR_OBJECT(&uVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(&uVar7, 1);
				DECOR_SET_INT(&iVar1, "PauseMapBlip", &uVar7);
				SET_BLIP_NAME(&uVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar7, 1);
			}
			else
			{
				Function_119(Global_43789, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_125(int iParam0) //Position: 0x7CC7 / 31943
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

var Function_126(struct<2> Param0, bool bParam2, var uParam3, bool bParam4) //Position: 0x7D8B / 32139
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
	
	if (Function_154(StackVal, Param0))
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
			Function_153(&uParam3);
			uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_153(&uParam3), StackVal);
			VNORMALIZE(&uVar1);
			Global_53524.f_12 = UNK_0x9C40E671(&uVar1);
		}
		else
		{
			Global_53524.f_12 = Function_152(&Global_54076);
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
		if (!Function_151(&Global_53524, &Global_53524 + 12, &uVar3))
		{
			GET_VOLUME_CENTER(&uVar3, &Var4);
			if (Function_147(StackVal, Var4, &uVar3, &Var6, &Var8, 1))
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
	else if (!Function_151(&Global_53524, &Global_53524 + 12, &iVar12))
	{
		Global_53524.f_24 = Function_145(StackVal, Param0, 0.0f, 1);
		if (Function_13(Global_53524.f_24))
		{
			iVar12 = &Global_44085[Global_53524.f_249] + 8;
			GET_VOLUME_CENTER(&iVar12, &Var13);
			if (Function_147(StackVal, Var13, &iVar12, &Var15, &Var17, 0))
			{
				iVar19 = Function_144(StackVal, Var15, 1);
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
		Function_127();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_127() //Position: 0x8199 / 33177
{
	Function_140();
	Function_139();
	Function_139();
	Function_138();
	Function_138();
	Function_137();
	Function_137();
	Function_134(0);
	Function_134(0);
	Function_132();
	Function_131();
	Function_130();
	Function_129();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_128();
	return;
}

void Function_128() //Position: 0x81E4 / 33252
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

void Function_129() //Position: 0x82EA / 33514
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

void Function_130() //Position: 0x831D / 33565
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

void Function_131() //Position: 0x84B0 / 33968
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

void Function_132() //Position: 0x8669 / 34409
{
	Function_133(&Global_42918, 1, 0);
	return;
}

void Function_133(struct<2317> Param0) //Position: 0x8677 / 34423
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
	
	uVar0 = Function_96();
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

struct<8> Function_134(int iParam0) //Position: 0x8894 / 34964
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
					iVar2 = ((Function_136((50 + iVar4)) + Function_136((183 + iVar4))) + Function_136((90 + iVar4)));
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
	Function_135(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_135(int iParam0, bool bParam1, bool bParam2) //Position: 0x893B / 35131
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
		Function_79(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_78(iParam0);
	if (&bParam2)
	{
		Function_69(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_136(bool bParam0) //Position: 0x8BD7 / 35799
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_137() //Position: 0x8C18 / 35864
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
		iVar2 = ((Function_136((50 + iVar3) + 15) + Function_136((183 + iVar3) + 15)) + Function_136((90 + iVar3) + 15));
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
	Function_135(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_138() //Position: 0x8CA1 / 36001
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
			iVar2 = ((Function_136((50 + iVar3) + 8) + Function_136((183 + iVar3) + 8)) + Function_136((90 + iVar3) + 8));
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
	Function_135(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_139() //Position: 0x8D38 / 36152
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
		iVar2 = ((Function_136((50 + iVar3)) + Function_136((183 + iVar3))) + Function_136((90 + iVar3)));
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
	Function_135(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_140() //Position: 0x8DB7 / 36279
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_141(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_135(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_141(int iParam0, float fParam1, int iParam2) //Position: 0x8DF4 / 36340
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
	Function_79(iParam0, fParam1, 1);
	Function_78(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_69(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_142(int iParam0) //Position: 0x9000 / 36864
{
	if (!Function_143(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_143(int iParam0) //Position: 0x901A / 36890
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_144(struct<2> Param0, bool bParam2) //Position: 0x9030 / 36912
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

var Function_145(struct<2> Param0, float fParam2, int iParam3) //Position: 0x909C / 37020
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_154(StackVal, Param0))
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
			else if (Function_146(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (!Function_232(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
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
	if (Function_13(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_146(bool bParam0) //Position: 0x919C / 37276
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_13(bParam0))
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

bool Function_147(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x91F4 / 37364
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
	
	if (Function_154(StackVal, Param0) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_150(60.0f, 20.0f), 0);
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
		Function_149(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_149(StackVal, Param3) };
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
		Function_148(&uVar13);
		Var19 = Function_148(&uVar13);
		Function_148(&iVar16);
		Var21 = Function_148(&iVar16);
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

struct<8> Function_148(vector3 vParam0) //Position: 0x93AE / 37806
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_149(vector3 vParam0) //Position: 0x93D0 / 37840
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_150(int iParam0, int iParam1) //Position: 0x93EE / 37870
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_151(float fParam0, var uParam1, int iParam2) //Position: 0x9401 / 37889
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_232(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_232(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_232(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_232(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_232(&(Global_43791[Global_46866[4]]), 4))
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

var Function_152(int iParam0) //Position: 0x964F / 38479
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_153(int iParam0) //Position: 0x965B / 38491
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_154(vector3 vParam0) //Position: 0x966D / 38509
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_155(int iParam0, bool bParam1, int iParam2) //Position: 0x9685 / 38533
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
		if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0 + 24) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076))) && !FIRE_IS_ACTOR_ON_FIRE(&iParam0)) && IS_ACTOR_ALIVE(&iParam0)) && !Function_157(&Global_54076, 0, 0))
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
		if (Function_157(&Global_54076, 0, 0) || !IS_ACTOR_ALIVE(&iParam0))
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
			if (!Function_11(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_156(&Global_54076, &iParam0) > 3.0f)
				{
					Function_205(&iParam2, 65536);
					Function_161("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				uVar2 = Function_125(&iParam0);
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
		if (!Function_11(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_156(&Global_54076, &iParam0) > 3.0f)
			{
				Function_205(&iParam2, 65536);
				Function_161("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
		{
			uVar4 = Function_125(&iParam0);
			uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
			DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar5);
		}
		return 0;
	}
	if (!Function_157(&Global_54076, 0, 0))
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
			uVar6 = Function_125(&iParam0);
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

float Function_156(var uParam0, int iParam1) //Position: 0x9A9B / 39579
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

bool Function_157(int iParam0, bool bParam1, bool bParam2) //Position: 0x9B90 / 39824
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
	if (Function_160(&iParam0))
	{
		return 1;
	}
	if (Function_159(&iParam0))
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
	if (Function_158())
	{
		return 1;
	}
	return 0;
}

bool Function_158() //Position: 0x9C54 / 40020
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_159(int iParam0) //Position: 0x9C6B / 40043
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_160(int iParam0) //Position: 0x9C77 / 40055
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9C86 / 40070
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_162(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_162(int iParam0) //Position: 0x9D11 / 40209
{
	char* cVar0[16];
	
	if (!Function_10())
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

void Function_163(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9D50 / 40272
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
			Var0 = { StackVal, StackVal, StackVal, Function_162(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_164(int iParam0, bool bParam1) //Position: 0x9DE5 / 40421
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, 1);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_70(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_70(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_208(0, bParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", 1);
	return;
}

void Function_165(bool bParam0) //Position: 0x9ECD / 40653
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
	if (Function_39(bParam0))
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
			Function_205(&uVar5, 0x8000000);
			Function_205(&uVar5, 0x10000000);
			Global_43791[bParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[bParam09] + 8, &uVar9);
			uVar6 = Function_170(&Global_44085[bParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_201(bParam0);
			uVar12 = Function_208(111, 111, 5);
			Function_169(uVar11, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_168(uVar11, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_166(uVar12);
			uVar13 = Global_43791[bParam0];
			Function_205(&uVar13, 0x1000000);
			Function_205(&uVar13, 0x10000000);
			Global_43791[bParam0] = uVar13;
		}
	}
	return;
}

void Function_166(int iParam0) //Position: 0xA08E / 41102
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_208(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_167(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_167(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_167(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_167(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_167(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_167(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_167(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_167(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_167(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_167(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_167(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_167(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_167(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_167(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_167(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_167(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_167(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_167(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_167(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_167(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_167(int iParam0) //Position: 0xA3F8 / 41976
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_102(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA41C / 42012
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

void Function_169(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xA73B / 42811
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

var Function_170(var uParam0, int iParam1, int iParam2) //Position: 0xA9DE / 43486
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

void Function_171(int iParam0) //Position: 0xAA37 / 43575
{
	Function_177(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_177(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_177(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_172(&iParam0 + 384);
	return;
}

bool Function_172(struct<2>[] Param0) //Position: 0xAAAB / 43691
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_176();
	iVar1 = 0;
	if (!Function_33(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_175(&(Param0[iVar02]), 8);
		}
		else if (Function_174())
		{
			iVar1 = 1;
			Function_175(&(Param0[iVar02]), 8);
		}
		Function_175(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_33(&(Param0[iVar02]), 4))
		{
			if (!Function_33(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_33(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_33(&(Param0[02]), 8) || iVar1));
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
				Function_175(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_33(&(Param0[iVar02]), 4))
		{
			if (!Function_33(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_175(&(Param0[iVar02]), 2);
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
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_175(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_175(&(Param0[iVar02]), 2);
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
	Function_173();
	return 1;
}

void Function_173() //Position: 0xAE6D / 44653
{
	if (!Function_7(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_174() //Position: 0xAEAD / 44717
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

void Function_175(struct<13> Param0) //Position: 0xAEDB / 44763
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_176() //Position: 0xAEEE / 44782
{
	if (!Function_7(128))
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

var Function_177(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xAF30 / 44848
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_178(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_175(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_178(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xAF6E / 44910
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_33(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_175(&(Param0[iVar02]), 4);
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

bool Function_179() //Position: 0xB03D / 45117
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

void Function_180(var uParam0, var uParam1, struct<82> Param2) //Position: 0xB136 / 45366
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
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	var uVar23;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = Function_181(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), &uParam0, 4294967295, 0);
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
				fVar18 = TO_FLOAT(STRING_TO_INT(&uVar17));
				if (!Function_11(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, fVar18))))
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

var Function_181(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xB2C0 / 45760
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_182(vector3 vParam0) //Position: 0xB2D5 / 45781
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < (vParam0.z - 1))
	{
		if (Function_11((&vParam0 + 8[iVar15])->f_32, 1))
		{
			if (IS_ACTOR_ALIVE(&vParam0 + 8[iVar15]))
			{
				Var2 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&vParam0 + 8[iVar15] + 8, &Var2);
				if (STREAMING_ARE_BOUNDS_LOADED(Var2, 3.0f))
				{
					if (!Function_48(&vParam0 + 8[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_54(&vParam0 + 8[iVar15] + 32, 1);
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
		Function_54(&vParam0 + 608, 1024);
	}
	return;
}

void Function_183(struct<649> Param0) //Position: 0xB398 / 45976
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	if (Function_184(&iVar0, 20.0f, 0))
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
			if (!Function_11(&Param0 + 608, 0x40000000))
			{
				bVar5 = GET_ACTOR_ENUM(&uVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
				{
					if (Function_156(&uVar3, &Global_54076) > 3,5f)
					{
						Function_205(&Param0 + 608, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(&uVar3, 118, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						Param0.f_648 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_11(&Param0 + 608, 2))
		{
			fVar6 = Function_156(&uVar3, &Global_54076);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_11((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_205(&Param0 + 8[iVar25] + 32, 4);
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
		else if (Function_11(&Param0 + 608, 512))
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
			fVar7 = Function_156(&uVar3, &Global_54076);
			if (fVar7 < 16.0f && !Function_11((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_205(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_11((&Param0 + 8[iVar25])->f_32, 8))
			{
				Function_205(&Param0 + 8[iVar25] + 32, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_648 = fVar4;
			}
			else if (!Function_11((&Param0 + 8[iVar25])->f_32, 2))
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

bool Function_184(var uParam0, int iParam1, bool bParam2) //Position: 0xB818 / 47128
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

void Function_185(int iParam0, int iParam1, bool bParam2) //Position: 0xB8AA / 47274
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Global_6623 || Function_7(0x8000000))
	{
		return;
	}
	uVar0 = Function_42(iParam1);
	if (iParam1 == Global_46760[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "spawnresrict_2");
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
			{
				if (!Function_11(&iParam0 + 608, 0x2000000))
				{
					Function_54(&iParam0 + 608, 4194304);
					Function_54(&iParam0 + 608, 8388608);
					Function_54(&iParam0 + 608, 0x1000000);
					Function_54(&iParam0 + 608, 1048576);
					Function_54(&iParam0 + 608, 2097152);
					Function_205(&iParam0 + 608, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_54(&iParam0 + 608, 0x2000000);
		}
	}
	if (!Function_11(&iParam0 + 608, 2097152))
	{
		if (bParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_205(&iParam0 + 608, 1048576);
			Function_205(&iParam0 + 608, 2097152);
			Function_205(&iParam0 + 608, 4194304);
			Function_205(&iParam0 + 608, 8388608);
			Function_205(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	if (!Function_11(&iParam0 + 608, 1048576))
	{
		if (bParam2 <= 40.0f && bParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_205(&iParam0 + 608, 1048576);
			Function_205(&iParam0 + 608, 4194304);
			Function_205(&iParam0 + 608, 8388608);
			Function_205(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	iVar2 = Function_186(StackVal, Global_54078, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_11(&iParam0 + 608, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_205(&iParam0 + 608, 4194304);
		Function_205(&iParam0 + 608, 8388608);
		Function_205(&iParam0 + 608, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_11(&iParam0 + 608, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_205(&iParam0 + 608, 8388608);
		Function_205(&iParam0 + 608, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_11(&iParam0 + 608, 0x1000000))
	{
		Function_205(&iParam0 + 608, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_186(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xBBB4 / 48052
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_70(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_187(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_187(var uParam0, var uParam1, bool bParam2) //Position: 0xBBF0 / 48112
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), &Global_46715, 15, 1);
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
					if (Function_188(&uVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&uVar5))
						{
							if (&bParam2)
							{
								if (Function_48(&uVar5, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_188(int iParam0) //Position: 0xBCCE / 48334
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_189(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_189(int iParam0, int iParam1) //Position: 0xBD1D / 48413
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_190() //Position: 0xBD62 / 48482
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_201(Global_43789);
	fVar1 = Function_199(Global_43789);
	fVar2 = Function_200(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1,5f);
	fVar3 = Function_191(0,33f, Function_150(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_192(1);
	return;
}

float Function_191(int iParam0, int iParam1) //Position: 0xBDB0 / 48560
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_192(int iParam0) //Position: 0xBDC3 / 48579
{
	if (Function_11(iParam0, 1) && !Function_11(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_193(vector3 vParam0) //Position: 0xBDF0 / 48624
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
			if (!Function_11(&vParam0 + 608, 0x4000000))
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
				if (!Function_11(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, false);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_194(&vParam0, &vParam0, 0);
	return;
}

void Function_194(int iParam0, int iParam1, int iParam2) //Position: 0xBEF1 / 48881
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
			Function_195(&uVar1, &iParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_195(var uParam0, var uParam1, bool bParam2) //Position: 0xBF48 / 48968
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

bool Function_196(int iParam0) //Position: 0xBF9A / 49050
{
	int iVar0;
	
	iVar0 = Function_102(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_38(iVar0) || Function_167(iParam0));
}

void Function_197(int iParam0) //Position: 0xBFD9 / 49113
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (!Function_11(&iParam0 + 608, 512))
	{
		fVar0 = Function_199(Global_43789);
		iVar1 = Function_201(Global_43789);
		if (iVar1 == 0 && &iParam0 + 632 >= 120.0f)
		{
			fVar2 = Function_200(iVar1);
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

void Function_198(int iParam0) //Position: 0xC0A5 / 49317
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

var Function_199(bool bParam0) //Position: 0xC17F / 49535
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

var Function_200(int iParam0) //Position: 0xC1DE / 49630
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

int Function_201(bool bParam0) //Position: 0xC321 / 49953
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

void Function_202() //Position: 0xC4A7 / 50343
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

var Function_203(bool bParam0, int iParam1) //Position: 0xC513 / 50451
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

void Function_204(bool bParam0, float fParam1) //Position: 0xC652 / 50770
{
	DECOR_SET_FLOAT(&Global_44085[bParam09] + 8, "ZombieScore", fParam1);
	return;
}

void Function_205(var uParam0, bool bParam1) //Position: 0xC676 / 50806
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_206(int iParam0, bool bParam1) //Position: 0xC687 / 50823
{
	int iVar0;
	
	iVar0 = Function_142(iParam0);
	if (!Function_207(iVar0))
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

bool Function_207(int iParam0) //Position: 0xC6C5 / 50885
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_208(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC6DC / 50908
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_212(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_209(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_209(bParam0, bParam1, bParam2, 4294967295);
}

int Function_209(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC73A / 51002
{
	var uVar0;
	
	if (!Function_211(bParam2))
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
	uVar0 = Function_212(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_210(uVar0);
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

var Function_210(int iParam0) //Position: 0xC89E / 51358
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

bool Function_211(int iParam0) //Position: 0xC8DC / 51420
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_212(int iParam0, int iParam1, int iParam2) //Position: 0xC8F1 / 51441
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_213(int iParam0) //Position: 0xC911 / 51473
{
	iParam0 = iParam0;
	if (!Function_55(Global_119934, 262144))
	{
		Function_49(&Global_54076, 262144, 1, 0);
	}
	if (Function_216())
	{
		if (!IS_SCRIPT_VALID(&uLocal_842))
		{
			uLocal_842 = LAUNCH_NEW_SCRIPT("$/content/DLC/ZombiePack/MissingPersons/event_wanted_poster_z", 0);
		}
	}
	if (!iLocal_844)
	{
		iLocal_844 = 1;
		Function_286(iParam0, 0);
		Function_165(iParam0);
		Function_205(&iLocal_13 + 608, 2);
		Function_203(1, 4294967295);
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
	}
	Function_214(&vLocal_845);
	return;
}

void Function_214(vector3[] vParam0) //Position: 0xC9BF / 51647
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (vParam0 - 1))
	{
		if (IS_GRINGO_VALID(&(vParam0[bVar03])) && IS_GRINGO_VALID(&vParam0[bVar03] + 8))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&(vParam0[bVar03]), "UseCase1")))
			{
				Function_205(&vParam0[bVar03] + 16, 64);
				if (Function_11(vParam0[bVar03].f_16, 2))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "1.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				else
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "2.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				if (Function_11(vParam0[bVar03].f_16, 4) && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "3.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "4.parent.SWITCHING ON: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(&vParam0[bVar03] + 8, "UseCase1")))
			{
				if (Function_11(vParam0[bVar03].f_16, 16))
				{
					Function_54(&vParam0[bVar03] + 16, 64);
				}
				else if (Function_11(vParam0[bVar03].f_16, 32))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "5.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					Function_54(&vParam0[bVar03] + 16, 64);
				}
				else
				{
					Function_54(&vParam0[bVar03] + 16, 64);
				}
				if (Function_11(vParam0[bVar03].f_16, 2))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "6.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
				if (Function_11(vParam0[bVar03].f_16, 4))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "7.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
			}
			else
			{
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] == &vParam0[iVar13] + 8)
					{
						if (Function_11(vParam0[iVar13].f_16, 64))
						{
							Function_215(StackVal, StackVal, vParam0[bVar03], "8.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_215(StackVal, StackVal, vParam0[bVar03], "8b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
					else if (Function_11(vParam0[bVar03].f_16, 64) && Function_11(vParam0[bVar03].f_16, 16))
					{
						Function_215(StackVal, StackVal, vParam0[bVar03], "11b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
					else
					{
						Function_54(&vParam0[bVar03] + 16, 64);
						if (Function_11(vParam0[bVar03].f_16, 1))
						{
							Function_215(StackVal, StackVal, vParam0[bVar03], "12b.parent.SWITCHING ON: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
						}
						else
						{
							Function_215(StackVal, StackVal, vParam0[bVar03], "13b.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
							GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
						}
					}
				}
				else if (Function_11(vParam0[bVar03].f_16, 64) && Function_11(vParam0[bVar03].f_16, 16))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "11.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
					GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
				}
				else
				{
					Function_54(&vParam0[bVar03] + 16, 64);
					if (Function_11(vParam0[bVar03].f_16, 1))
					{
						Function_215(StackVal, StackVal, vParam0[bVar03], "12.parent.SWITCHING ON: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), true);
					}
					else
					{
						Function_215(StackVal, StackVal, vParam0[bVar03], "13.parent.SWITCHING OFF: ", &(vParam0[bVar03]));
						GRINGO_ALLOW_ACTIVATION(&(vParam0[bVar03]), false);
					}
				}
				if (vParam0[bVar03].f_20 >= 4294967295)
				{
					iVar1 = vParam0[bVar03].f_20;
					if (&vParam0[bVar03] + 8 == &vParam0[iVar13])
					{
					}
					else if (Function_11(vParam0[bVar03].f_16, 64))
					{
						if (Function_11(vParam0[bVar03].f_16, 32))
						{
							Function_215(StackVal, StackVal, vParam0[bVar03], "14b.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
						}
						else
						{
							Function_215(StackVal, StackVal, vParam0[bVar03], "14.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
							GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
						}
					}
					else if (Function_11(vParam0[bVar03].f_16, 8))
					{
						Function_215(StackVal, StackVal, vParam0[bVar03], "15.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
					}
					else
					{
						Function_215(StackVal, StackVal, vParam0[bVar03], "16.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
						Function_54(&vParam0[bVar03] + 16, 64);
						GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
					}
				}
				else if (Function_11(vParam0[bVar03].f_16, 64))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "17.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else if (Function_11(vParam0[bVar03].f_16, 8))
				{
					Function_215(StackVal, StackVal, vParam0[bVar03], "18.child.SWITCHING ON: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, true);
				}
				else
				{
					Function_54(&vParam0[bVar03] + 16, 64);
					Function_215(StackVal, StackVal, vParam0[bVar03], "19.child.SWITCHING OFF: ", &vParam0[bVar03] + 8);
					GRINGO_ALLOW_ACTIVATION(&vParam0[bVar03] + 8, false);
				}
			}
		}
		if (Function_11(vParam0[bVar03].f_16, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_215(struct<17> Param0) //Position: 0xD1EF / 53743
{
	if (Function_11(Param0.f_16, 128))
	{
		PRINTSTRING(&uParam3);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(&uParam4)));
		PRINTNL();
	}
}

bool Function_216() //Position: 0xD218 / 53784
{
	int iVar0;
	
	if (!Function_45(21))
	{
		return 0;
	}
	if (Function_219())
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Function_91(1, 2, 1, 24))
	{
		return 0;
	}
	if (Global_43789 == Global_46838[1])
	{
		iVar0 = Function_218(Global_43789);
		if (Function_217(iVar0) >= 8)
		{
			return 0;
		}
	}
	if (Global_43789 == Global_46894[1])
	{
		iVar0 = Function_218(Global_43789);
		if (Function_217(iVar0) >= 5)
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

int Function_217(int iParam0) //Position: 0xD28E / 53902
{
	if (!Function_207(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_218(bool bParam0) //Position: 0xD2A8 / 53928
{
	if (Function_13(bParam0))
	{
		return Function_208(bParam0, 0, 2);
	}
	return 4294967295;
}

bool Function_219() //Position: 0xD2C2 / 53954
{
	return Function_11(StackVal, 1);
}

void Function_220(char* cParam0) //Position: 0xD2D1 / 53969
{
	if (!Function_7(128))
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

void Function_221(int iParam0, bool bParam1) //Position: 0xD311 / 54033
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
		Function_80(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_222(int iParam0) //Position: 0xD401 / 54273
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_223(bool bParam0) //Position: 0xD414 / 54292
{
	Function_224(0, 0.0f, 4, &iLocal_178, &Global_44085[bParam09] + 8, 1);
	return;
}

void Function_224(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0xD42E / 54318
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
		Function_227();
	}
	if (&bParam5)
	{
		Function_225(1048576);
	}
}

void Function_225(int iParam0) //Position: 0xD53C / 54588
{
	Function_226(&Global_43580, iParam0);
	return;
}

void Function_226(var uParam0, var uParam1) //Position: 0xD54A / 54602
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_227() //Position: 0xD569 / 54633
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_225(16384);
	}
	return;
}

void Function_228(var uParam0) //Position: 0xD585 / 54661
{
	uParam0 = uParam0;
	return;
}

void Function_229() //Position: 0xD58F / 54671
{
	return;
}

void Function_230(int iParam0) //Position: 0xD595 / 54677
{
	iParam0 = iParam0;
	return;
}

void Function_231(var uParam0, int iParam1) //Position: 0xD59F / 54687
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_232(int iParam0, int iParam1) //Position: 0xD5B9 / 54713
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_233() //Position: 0xD5D6 / 54742
{
	return;
}

void Function_234() //Position: 0xD5DC / 54748
{
	Function_235(&iLocal_416 + 680, GET_OBJECT_FROM_PERS_CHAR(&Global_14762[03] + 16));
	return;
}

void Function_235(var uParam0, int iParam1) //Position: 0xD5F7 / 54775
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)), &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_236(int iParam0) //Position: 0xD644 / 54852
{
	int iVar0;
	
	Function_248(StackVal, 0, &uLocal_877, Vector(-705,1185f, 63,24707f, 3291,844f));
	Function_247(StackVal, 0, &uLocal_877, Vector(-705,1185f, 63,24707f, 3291,844f));
	Function_246(StackVal, 0, &uLocal_877, Vector(-705,1185f, 63,24707f, 3291,844f));
	Function_245(StackVal, 0, &uLocal_877, Vector(-705,1185f, 63,24707f, 3291,844f));
	Function_244(StackVal, 0, &uLocal_877, Vector(-705,1185f, 63,24707f, 3291,844f));
	Function_242(StackVal, 0, &uLocal_877, Vector(-705,1185f, 63,24707f, 3291,844f));
	Function_241(0, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 3, &uLocal_877, Vector(-706,7155f, 63,24707f, 3293,798f));
	Function_247(StackVal, 3, &uLocal_877, Vector(-706,7155f, 63,24707f, 3293,798f));
	Function_246(StackVal, 3, &uLocal_877, Vector(-706,7155f, 63,24707f, 3293,798f));
	Function_245(StackVal, 3, &uLocal_877, Vector(-706,7155f, 63,24707f, 3293,798f));
	Function_244(StackVal, 3, &uLocal_877, Vector(-706,7155f, 63,24707f, 3293,798f));
	Function_242(StackVal, 3, &uLocal_877, Vector(-706,7155f, 63,24707f, 3293,798f));
	Function_241(3, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 1, &uLocal_877, Vector(-705,5743f, 63,24707f, 3294,161f));
	Function_247(StackVal, 1, &uLocal_877, Vector(-705,5743f, 63,24707f, 3294,161f));
	Function_246(StackVal, 1, &uLocal_877, Vector(-705,5743f, 63,24707f, 3294,161f));
	Function_245(StackVal, 1, &uLocal_877, Vector(-705,5743f, 63,24707f, 3294,161f));
	Function_244(StackVal, 1, &uLocal_877, Vector(-705,5743f, 63,24707f, 3294,161f));
	Function_242(StackVal, 1, &uLocal_877, Vector(-705,5743f, 63,24707f, 3294,161f));
	Function_241(1, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 2, &uLocal_877, Vector(-706,3441f, 63,24707f, 3291,687f));
	Function_247(StackVal, 2, &uLocal_877, Vector(-706,3441f, 63,24707f, 3291,687f));
	Function_246(StackVal, 2, &uLocal_877, Vector(-706,3441f, 63,24707f, 3291,687f));
	Function_245(StackVal, 2, &uLocal_877, Vector(-706,3441f, 63,24707f, 3291,687f));
	Function_244(StackVal, 2, &uLocal_877, Vector(-706,3441f, 63,24707f, 3291,687f));
	Function_242(StackVal, 2, &uLocal_877, Vector(-706,3441f, 63,24707f, 3291,687f));
	Function_241(2, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 11, &uLocal_877, Vector(-704,7645f, 63,24707f, 3293,281f));
	Function_247(StackVal, 11, &uLocal_877, Vector(-704,7645f, 63,24707f, 3293,281f));
	Function_246(StackVal, 11, &uLocal_877, Vector(-704,7645f, 63,24707f, 3293,281f));
	Function_245(StackVal, 11, &uLocal_877, Vector(-704,7645f, 63,24707f, 3293,281f));
	Function_244(StackVal, 11, &uLocal_877, Vector(-704,7645f, 63,24707f, 3293,281f));
	Function_242(StackVal, 11, &uLocal_877, Vector(-704,7645f, 63,24707f, 3293,281f));
	Function_241(11, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 4, &uLocal_877, Vector(-699,914f, 66,449f, 3312,629f));
	Function_247(StackVal, 4, &uLocal_877, Vector(-699,914f, 66,449f, 3312,629f));
	Function_246(StackVal, 4, &uLocal_877, Vector(-699,914f, 66,449f, 3312,629f));
	Function_245(StackVal, 4, &uLocal_877, Vector(-699,914f, 66,449f, 3312,629f));
	Function_244(StackVal, 4, &uLocal_877, Vector(-699,914f, 66,449f, 3312,629f));
	Function_242(StackVal, 4, &uLocal_877, Vector(-699,914f, 66,449f, 3312,629f));
	Function_241(4, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 5, &uLocal_877, Vector(-722,167f, 82,56036f, 3312,854f));
	Function_247(StackVal, 5, &uLocal_877, Vector(-722,167f, 82,56036f, 3312,854f));
	Function_246(StackVal, 5, &uLocal_877, Vector(-722,167f, 82,56036f, 3312,854f));
	Function_245(StackVal, 5, &uLocal_877, Vector(-722,167f, 82,56036f, 3312,854f));
	Function_244(StackVal, 5, &uLocal_877, Vector(-722,167f, 82,56036f, 3312,854f));
	Function_242(StackVal, 5, &uLocal_877, Vector(-722,167f, 82,56036f, 3312,854f));
	Function_241(5, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 6, &uLocal_877, Vector(-713,9177f, 72,94073f, 3280,976f));
	Function_247(StackVal, 6, &uLocal_877, Vector(-713,9177f, 72,94073f, 3280,976f));
	Function_246(StackVal, 6, &uLocal_877, Vector(-713,9177f, 72,94073f, 3280,976f));
	Function_245(StackVal, 6, &uLocal_877, Vector(-713,9177f, 72,94073f, 3280,976f));
	Function_244(StackVal, 6, &uLocal_877, Vector(-713,9177f, 72,94073f, 3280,976f));
	Function_242(StackVal, 6, &uLocal_877, Vector(-713,9177f, 72,94073f, 3280,976f));
	Function_241(6, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 7, &uLocal_877, Vector(-726,1486f, 72,94073f, 3295,209f));
	Function_247(StackVal, 7, &uLocal_877, Vector(-726,1486f, 72,94073f, 3295,209f));
	Function_246(StackVal, 7, &uLocal_877, Vector(-726,1486f, 72,94073f, 3295,209f));
	Function_245(StackVal, 7, &uLocal_877, Vector(-726,1486f, 72,94073f, 3295,209f));
	Function_244(StackVal, 7, &uLocal_877, Vector(-726,1486f, 72,94073f, 3295,209f));
	Function_242(StackVal, 7, &uLocal_877, Vector(-726,1486f, 72,94073f, 3295,209f));
	Function_241(7, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 8, &uLocal_877, Vector(-717,5368f, 74,08374f, 3325,054f));
	Function_247(StackVal, 8, &uLocal_877, Vector(-717,5368f, 74,08374f, 3325,054f));
	Function_246(StackVal, 8, &uLocal_877, Vector(-717,5368f, 74,08374f, 3325,054f));
	Function_245(StackVal, 8, &uLocal_877, Vector(-717,5368f, 74,08374f, 3325,054f));
	Function_244(StackVal, 8, &uLocal_877, Vector(-717,5368f, 74,08374f, 3325,054f));
	Function_242(StackVal, 8, &uLocal_877, Vector(-717,5368f, 74,08374f, 3325,054f));
	Function_241(8, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 9, &uLocal_877, Vector(-666,041f, 73,42661f, 3307,828f));
	Function_247(StackVal, 9, &uLocal_877, Vector(-666,041f, 73,42661f, 3307,828f));
	Function_246(StackVal, 9, &uLocal_877, Vector(-666,041f, 73,42661f, 3307,828f));
	Function_245(StackVal, 9, &uLocal_877, Vector(-666,041f, 73,42661f, 3307,828f));
	Function_244(StackVal, 9, &uLocal_877, Vector(-666,041f, 73,42661f, 3307,828f));
	Function_242(StackVal, 9, &uLocal_877, Vector(-666,041f, 73,42661f, 3307,828f));
	Function_241(9, &uLocal_877, &iLocal_416);
	Function_248(StackVal, 10, &uLocal_877, Vector(-722,69f, 63,35f, 3294,993f));
	Function_247(StackVal, 10, &uLocal_877, Vector(-722,69f, 63,35f, 3294,993f));
	Function_246(StackVal, 10, &uLocal_877, Vector(-722,69f, 63,35f, 3294,993f));
	Function_245(StackVal, 10, &uLocal_877, Vector(-722,69f, 63,35f, 3294,993f));
	Function_244(StackVal, 10, &uLocal_877, Vector(-722,69f, 63,35f, 3294,993f));
	Function_242(StackVal, 10, &uLocal_877, Vector(-722,69f, 63,35f, 3294,993f));
	Function_241(10, &uLocal_877, &iLocal_416);
	Function_237(&Global_12342, &Global_14762, &uLocal_877, &Global_10996, iParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (IS_PERS_CHAR_VALID(&Global_14762[iVar03] + 16))
		{
			if (!DECOR_CHECK_EXIST(&Global_14762[iVar03] + 16, "zombie_gossip"))
			{
				DECOR_SET_BOOL(&Global_14762[iVar03] + 16, "zombie_gossip", 1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_237(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0xDDDA / 56794
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_7(2))
	{
		return;
	}
	if (Function_232(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_9(&(Param0[iVar02]), 2))
		{
			if (Function_238(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_231(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_278(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_238(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0xDE92 / 56978
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_232(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_9(&iParam0, 2))
	{
		return 1;
	}
	if (Function_9(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, 0))
		{
			return 0;
		}
	}
	if (&iParam1 + 8 == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_44085[iParam59] + 32, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = Function_240(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_154(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_8(&iParam0, 4);
	}
	Function_239(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_239(int iParam0, struct<2> Param1) //Position: 0xE013 / 57363
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_154(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_154(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_154(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_154(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_154(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_154(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_240(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xE159 / 57689
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_70(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_241(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xE280 / 57984
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 72) = &iParam2;
	return;
}

void Function_242(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE2DF / 58079
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_243(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_243(struct<2> Param0, struct<2> Param2) //Position: 0xE346 / 58182
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_244(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE372 / 58226
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_243(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_245(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE3DB / 58331
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_243(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_246(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE446 / 58438
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_243(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_247(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE4AC / 58540
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_243(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_248(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xE515 / 58645
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_243(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

void Function_249(int iParam0, bool bParam1, int iParam2) //Position: 0xE579 / 58745
{
	if ((!Function_13(bParam1) || Global_6623) || Function_11(&iParam0 + 608, 16))
	{
		return;
	}
	if (bParam1 == Global_46760[0])
	{
		Function_250(&iParam0, bParam1, &Global_11014, &iParam2);
	}
	else if (bParam1 == Global_46760[1])
	{
		Function_250(&iParam0, bParam1, &Global_11146, &iParam2);
	}
	else if (bParam1 == Global_46760[2])
	{
		Function_250(&iParam0, bParam1, &Global_11120, &iParam2);
	}
	else if (bParam1 == Global_46796[1])
	{
		Function_250(&iParam0, bParam1, &Global_11222, &iParam2);
	}
	else if (bParam1 == Global_46796[3])
	{
		Function_250(&iParam0, bParam1, &Global_11284, &iParam2);
	}
	else if (bParam1 == Global_46796[4])
	{
		Function_250(&iParam0, bParam1, &Global_11492, &iParam2);
	}
	else if (bParam1 == Global_46816[0])
	{
		Function_250(&iParam0, bParam1, &Global_11544, &iParam2);
	}
	else if (bParam1 == Global_46816[1])
	{
		Function_250(&iParam0, bParam1, &Global_11646, &iParam2);
	}
	else if (bParam1 == Global_46816[2])
	{
		Function_250(&iParam0, bParam1, &Global_11704, &iParam2);
	}
	else if (bParam1 == Global_46838[1])
	{
		Function_250(&iParam0, bParam1, &Global_11752, &iParam2);
	}
	else if (bParam1 == Global_46838[0])
	{
		Function_250(&iParam0, bParam1, &Global_11726, &iParam2);
	}
	else if (bParam1 == Global_46850[0])
	{
		Function_250(&iParam0, bParam1, &Global_11836, &iParam2);
	}
	else if (bParam1 == Global_46850[1])
	{
		Function_250(&iParam0, bParam1, &Global_11946, &iParam2);
	}
	else if (bParam1 == Global_46850[2])
	{
		Function_250(&iParam0, bParam1, &Global_11988, &iParam2);
	}
	else if (bParam1 == Global_46866[0])
	{
		Function_250(&iParam0, bParam1, &Global_12048, &iParam2);
	}
	else if (bParam1 == Global_46866[1])
	{
		Function_250(&iParam0, bParam1, &Global_12150, &iParam2);
	}
	else if (bParam1 == Global_46866[2])
	{
		Function_250(&iParam0, bParam1, &Global_11398, &iParam2);
	}
	else if (bParam1 == Global_46894[2])
	{
		Function_250(&iParam0, bParam1, &Global_12284, &iParam2);
	}
	else if (bParam1 == Global_46894[1])
	{
		Function_250(&iParam0, bParam1, &Global_12342, &iParam2);
	}
	else if (bParam1 == Global_46894[0])
	{
		Function_250(&iParam0, bParam1, &Global_12422, &iParam2);
	}
	else if (bParam1 == Global_46894[3])
	{
		Function_250(&iParam0, bParam1, &Global_12392, &iParam2);
	}
	else if (bParam1 == Global_46926[0])
	{
		Function_250(&iParam0, bParam1, &Global_12760, &iParam2);
	}
	else if (bParam1 == Global_46926[1])
	{
		Function_250(&iParam0, bParam1, &Global_12714, &iParam2);
	}
	else if (bParam1 == Global_46926[2])
	{
		Function_250(&iParam0, bParam1, &Global_12644, &iParam2);
	}
	else if (bParam1 == Global_46914[0])
	{
		Function_250(&iParam0, bParam1, &Global_12488, &iParam2);
	}
	else if (bParam1 == Global_46914[1])
	{
		Function_250(&iParam0, bParam1, &Global_12482, &iParam2);
	}
	Function_205(&iParam0 + 608, 64);
	return;
}

void Function_250(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0xE87D / 59517
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
	
	Function_54(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_257("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_256(&uParam3, iParam1);
	iVar18 = Function_101(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_38(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= Param2)
		{
			if (!Function_9(&(Param2[bVar222]), 4))
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
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_257("nSurvivor_") };
					*(&iParam0 + 8[bVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[bVar22], Var24, Var26);
					Function_251(bVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_205(&iParam0 + 8[bVar225] + 32, 1);
						Function_205(&iParam0 + 608, 1024);
					}
					Function_205(&iParam0 + 608, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_6(&(Param2[bVar222]), 4);
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
	Function_194(&iParam0, &iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_251(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0xEA89 / 60041
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
	Function_255(&iVar0, 0);
	Function_254(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, 0);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_253(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_253(&iVar0, 75.0f, 1.0f, 1.0f);
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
				if (!IS_OBJECT_VALID(Function_252(&uVar22, "UseCase1")))
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
	Function_253(&iVar0, 20.0f, 1.0f, 1.0f);
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

var Function_252(var uParam0, int iParam1) //Position: 0xF170 / 61808
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_253(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xF17F / 61823
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

void Function_254(var uParam0, bool bParam1) //Position: 0xF1D0 / 61904
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

void Function_255(var uParam0, bool bParam1) //Position: 0xF21F / 61983
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

var Function_256(int iParam0, int iParam1) //Position: 0xF253 / 62035
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
		if (Function_38(iParam1))
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

struct<32> Function_257(char* cParam0) //Position: 0xF309 / 62217
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_258("0", &cVar8, ""), 4);
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

struct<32> Function_258(char* cParam0) //Position: 0xF375 / 62325
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_259() //Position: 0xF397 / 62359
{
	return;
}

bool Function_260(int iParam0) //Position: 0xF39D / 62365
{
	if (Function_11(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_172(&iParam0 + 384);
}

int Function_261(bool bParam0) //Position: 0xF3C0 / 62400
{
	if (!Function_13(bParam0))
	{
		return 1;
	}
	return Function_232(&(Global_43791[bParam0]), 4);
}

int Function_262() //Position: 0xF3DC / 62428
{
	return Function_263(&Global_12342, &Global_14762, Global_46894[1]);
}

int Function_263(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xF3F1 / 62449
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_13(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_232(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_9(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_9(&(Param0[iVar02]), 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED(vParam1[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_264(bool bParam0) //Position: 0xF4DA / 62682
{
	Function_265(&uLocal_728, &cLocal_7, "ent", 1, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 3, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 20, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 50, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 51, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 98, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "ent", 99, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "gates", 96, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "gates", 97, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "tower01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "tower02", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "tower02", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_265(&uLocal_728, &cLocal_7, "tower02", 3, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	return;
}

var Function_265(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0xF69F / 63135
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_266(&Param0);
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
		Function_57(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), 1);
	}
	Function_57(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_57(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_57(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_266(struct<4>[] Param0) //Position: 0xF7A2 / 63394
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

void Function_267() //Position: 0xF7D3 / 63443
{
	Function_268(&uLocal_9, &uLocal_666, 4, &iLocal_254 + 8, 4294967295, 4);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 128, 4294967295, 266);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 168, 4294967295, 266);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 176, 4294967295, 266);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 288, 4294967295, 266);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 184, 4294967295, 524554);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 216, 4294967295, 266);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 224, 4294967295, 131338);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 256, 4294967295, 33034);
	Function_268(&uLocal_9, &uLocal_666, 5, &iLocal_254 + 496, 4294967295, 0x4000010a);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_254 + 568);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_254 + 576);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_254 + 584);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_254 + 592);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_254 + 600);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_254 + 608);
	return;
}

void Function_268(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xF8C9 / 63689
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

void Function_269(struct<5> Param0) //Position: 0xF9B6 / 63926
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_270(int iParam0, int iParam1) //Position: 0xF9C7 / 63943
{
	var uVar0;
	int iVar1;
	
	if (Function_11(&iParam0 + 608, 16))
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

void Function_271(int iParam0, int iParam1, bool bParam2) //Position: 0xFA3D / 64061
{
	var uVar0;
	int iVar1;
	
	if (Function_11(&iParam0 + 608, 16))
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
	if (!Function_38(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[bParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam29] + 8);
		}
	}
	return;
}

var Function_272() //Position: 0xFADB / 64219
{
	return &iLocal_178;
}

void Function_273(int iParam0) //Position: 0xFAE4 / 64228
{
	cLocal_7 = Function_274(&iLocal_178, "nfortdiego", iParam0);
	return;
}

int Function_274(int iParam0, var uParam1, int iParam2) //Position: 0xFB01 / 64257
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_275() //Position: 0xFB24 / 64292
{
	return Function_276();
}

int Function_276() //Position: 0xFB2D / 64301
{
	var uVar0;
	
	Function_277(3, 3);
	uVar0 = &uVar0;
	iLocal_254 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_254))
	{
		iLocal_254 = CREATE_LAYOUT("ElPresidio_layout");
	}
	*(&iLocal_254 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_region", 4,203895E-45f, Vector(-707,5112f, 74,21172f, 3310,04f), Vector(0.0f, -24,84715f, 0.0f), Vector(52,76575f, 14,96046f, 35,42257f));
	*(&iLocal_254 + 120) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_crows_set");
	*(&iLocal_254 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder12", 4,203895E-45f, Vector(-695,2917f, 76,715f, 3320,708f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[0]);
	*(&iLocal_254 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder1", 4,203895E-45f, Vector(-695,2917f, 76,715f, 3285,857f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[1]);
	*(&iLocal_254 + 16[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder2", 4,203895E-45f, Vector(-732,0003f, 86,12825f, 3322,521f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[2]);
	*(&iLocal_254 + 16[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder3", 4,203895E-45f, Vector(-731,7465f, 85,47977f, 3300,019f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[3]);
	*(&iLocal_254 + 16[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder4", 4,203895E-45f, Vector(-668.0f, 76,715f, 3300,297f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[4]);
	*(&iLocal_254 + 16[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder5", 4,203895E-45f, Vector(-701,7898f, 76,71498f, 3304.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[5]);
	*(&iLocal_254 + 16[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder6", 4,203895E-45f, Vector(-708,0286f, 84,98942f, 3318,729f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[6]);
	*(&iLocal_254 + 16[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder7", 4,203895E-45f, Vector(-732.0f, 76,715f, 3281,534f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[7]);
	*(&iLocal_254 + 16[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder8", 4,203895E-45f, Vector(-668.0f, 76,92079f, 3320,82f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[8]);
	*(&iLocal_254 + 16[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "nCylinder9", 4,203895E-45f, Vector(-684.0f, 76,715f, 3308.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[9]);
	*(&iLocal_254 + 16[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder10", 4,203895E-45f, Vector(-720.0f, 85,75028f, 3324.0f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[10]);
	*(&iLocal_254 + 16[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder11", 4,203895E-45f, Vector(-695,2917f, 76,715f, 3320,708f), Vector(0.0f, 20.0f, 0.0f), Vector(3,721891f, 16,80466f, 4,066686f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 120, &iLocal_254 + 16[11]);
	*(&iLocal_254 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_Storage", 2,802597E-45f, Vector(-719,0616f, 72,73853f, 3291,609f), Vector(0.0f, -40,13278f, 0.0f), Vector(4,4127f, 4,169909f, 6,941234f));
	*(&iLocal_254 + 168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_dingroom_set");
	*(&iLocal_254 + 136[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box1", 2,802597E-45f, Vector(-712,6595f, 69,00008f, 3284,277f), Vector(0.0f, -39,57473f, 0.0f), Vector(6,385563f, 3,365192f, 12,98475f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 168, &iLocal_254 + 136[0]);
	*(&iLocal_254 + 136[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box2", 2,802597E-45f, Vector(-712,1272f, 71,22755f, 3285,054f), Vector(30,01221f, -30,66315f, -50,76921f), Vector(2,278821f, 1,601488f, 11,70467f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 168, &iLocal_254 + 136[1]);
	*(&iLocal_254 + 136[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "pasted__Box2", 2,802597E-45f, Vector(-713,4344f, 70,87055f, 3283,302f), Vector(-29,96011f, -29,02066f, 51,75747f), Vector(2,235804f, 1,914191f, 12,21636f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 168, &iLocal_254 + 136[2]);
	*(&iLocal_254 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_guardTower", 2,802597E-45f, Vector(-720,9913f, 77,84858f, 3311,41f), Vector(0.0f, 49,97873f, 0.0f), Vector(6,425625f, 13,72349f, 6,440312f));
	*(&iLocal_254 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_blcksmith", 2,802597E-45f, Vector(-672,3039f, 63,51814f, 3319,796f), Vector(0.0f, -32,76761f, 0.0f), Vector(2,836351f, 3,164442f, 4,863935f));
	*(&iLocal_254 + 216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_barracks_set");
	*(&iLocal_254 + 192[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box", 2,802597E-45f, Vector(-722,5341f, 69,01999f, 3296,181f), Vector(-0,5848145f, -38,75123f, 0.0f), Vector(6,315565f, 3,067029f, 8,547754f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 216, &iLocal_254 + 192[0]);
	*(&iLocal_254 + 192[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box3", 2,802597E-45f, Vector(-725,767f, 68,85418f, 3293,803f), Vector(0,990846f, -39,09968f, -0,4962363f), Vector(1,811276f, 3,292553f, 7,32768f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 216, &iLocal_254 + 192[1]);
	*(&iLocal_254 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_Stables", 2,802597E-45f, Vector(-712,74f, 64,06474f, 3283,403f), Vector(0.0f, -40,21658f, 0.0f), Vector(4,8132f, 5,477965f, 11,27288f));
	*(&iLocal_254 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_jail_set");
	*(&iLocal_254 + 232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box5", 2,802597E-45f, Vector(-723,0415f, 64,80584f, 3294,804f), Vector(0,8582109f, -40,87692f, -0,9863782f), Vector(3,487631f, 4,606737f, 4,447608f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 256, &iLocal_254 + 232[0]);
	*(&iLocal_254 + 232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box4", 2,802597E-45f, Vector(-724,1627f, 63,3417f, 3298,077f), Vector(0,2534748f, -39,53408f, 0,6213991f), Vector(6,022362f, 7,616711f, 2,070205f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 256, &iLocal_254 + 232[1]);
	*(&iLocal_254 + 288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "GuardTwr1_set");
	*(&iLocal_254 + 264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box6", 2,802597E-45f, Vector(-666,8095f, 72,71178f, 3308,708f), Vector(0.0f, 40,18478f, 0.0f), Vector(6,891106f, 6,592907f, 6,686936f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 288, &iLocal_254 + 264[0]);
	*(&iLocal_254 + 264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Box7", 2,802597E-45f, Vector(-666,8367f, 67,11434f, 3308,63f), Vector(0.0f, 39,99707f, 0.0f), Vector(4,923805f, 4,610031f, 6,082325f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 288, &iLocal_254 + 264[1]);
	*(&iLocal_254 + 352) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_vultures_set");
	*(&iLocal_254 + 296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder20", 4,203895E-45f, Vector(-720,0446f, 83,39287f, 3310,952f), Vector(0.0f, 20.0f, 0.0f), Vector(7,186772f, 19,81214f, 8,41792f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 352, &iLocal_254 + 296[0]);
	*(&iLocal_254 + 296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder13", 4,203895E-45f, Vector(-712,3317f, 72,53914f, 3343,668f), Vector(0.0f, 20.0f, 0.0f), Vector(4,743275f, 19,81214f, 4,528764f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 352, &iLocal_254 + 296[1]);
	*(&iLocal_254 + 296[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder14", 4,203895E-45f, Vector(-666,5614f, 76,54218f, 3308,863f), Vector(0.0f, 20.0f, 0.0f), Vector(4,743275f, 19,81214f, 4,528764f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 352, &iLocal_254 + 296[2]);
	*(&iLocal_254 + 296[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder15", 4,203895E-45f, Vector(-716,8619f, 72,53914f, 3288,467f), Vector(0.0f, 47,22622f, 0.0f), Vector(15,44945f, 19,81214f, 8,179352f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 352, &iLocal_254 + 296[3]);
	*(&iLocal_254 + 296[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder16", 4,203895E-45f, Vector(-712,0081f, 77,08761f, 3329,285f), Vector(0.0f, 20.0f, 0.0f), Vector(4,743275f, 19,81214f, 4,528764f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 352, &iLocal_254 + 296[4]);
	*(&iLocal_254 + 296[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder17", 4,203895E-45f, Vector(-748.0f, 72,53914f, 3292.0f), Vector(0.0f, 20.0f, 0.0f), Vector(4,743275f, 19,81214f, 4,528764f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 352, &iLocal_254 + 296[5]);
	*(&iLocal_254 + 400) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_snakes_set");
	*(&iLocal_254 + 360[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder24", 4,203895E-45f, Vector(-727,6633f, 65,09528f, 3334,026f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 400, &iLocal_254 + 360[0]);
	*(&iLocal_254 + 360[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder21", 4,203895E-45f, Vector(-660.0f, 61,46362f, 3324.0f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 400, &iLocal_254 + 360[1]);
	*(&iLocal_254 + 360[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder18", 4,203895E-45f, Vector(-720.0f, 63,24707f, 3280.0f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 400, &iLocal_254 + 360[2]);
	*(&iLocal_254 + 360[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder19", 4,203895E-45f, Vector(-696.0f, 63,24707f, 3324.0f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 400, &iLocal_254 + 360[3]);
	*(&iLocal_254 + 432) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_armadillo_set");
	*(&iLocal_254 + 408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder22", 4,203895E-45f, Vector(-732,0541f, 73,32635f, 3312,037f), Vector(0.0f, 20.0f, 0.0f), Vector(2,714829f, 3,798216f, 2,781002f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 432, &iLocal_254 + 408[0]);
	*(&iLocal_254 + 408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "Cylinder23", 4,203895E-45f, Vector(-725,2516f, 65,14702f, 3332,009f), Vector(0.0f, 20.0f, 0.0f), Vector(2,714829f, 3,798216f, 2,781002f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 432, &iLocal_254 + 408[1]);
	*(&iLocal_254 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_fort_set");
	*(&iLocal_254 + 440[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_fort08", 2,802597E-45f, Vector(-715,0193f, 65,33331f, 3274,772f), Vector(0.0f, -11,43809f, 0.0f), Vector(13,06075f, 19,08582f, 4,097171f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 496, &iLocal_254 + 440[0]);
	*(&iLocal_254 + 440[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_fort02", 4,203895E-45f, Vector(-686,6598f, 67,40527f, 3306,456f), Vector(0.0f, 50,57193f, 0.0f), Vector(19,08704f, 12,07688f, 26,81299f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 496, &iLocal_254 + 440[1]);
	*(&iLocal_254 + 440[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_fort03", 4,203895E-45f, Vector(-716,6916f, 75,77631f, 3315,898f), Vector(0.0f, -30,37475f, 0.0f), Vector(9,343771f, 9,401356f, 11,25166f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 496, &iLocal_254 + 440[2]);
	*(&iLocal_254 + 440[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_fort05", 4,203895E-45f, Vector(-727,5993f, 75,77631f, 3302,496f), Vector(0.0f, -95,11723f, 0.0f), Vector(7,278977f, 8,053549f, 11,84987f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 496, &iLocal_254 + 440[3]);
	*(&iLocal_254 + 440[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_fort06", 2,802597E-45f, Vector(-722,388f, 65,33331f, 3274,708f), Vector(0.0f, 20,54656f, 0.0f), Vector(4,097171f, 19,08582f, 4,097171f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 496, &iLocal_254 + 440[4]);
	*(&iLocal_254 + 440[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_fort07", 2,802597E-45f, Vector(-711,6046f, 65,33331f, 3292,385f), Vector(0.0f, 49,49109f, 0.0f), Vector(28,6266f, 41,83239f, 24,19036f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 496, &iLocal_254 + 440[5]);
	*(&iLocal_254 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_254, "fodv_soldiers_set");
	*(&iLocal_254 + 504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_soldiers02", 2,802597E-45f, Vector(-705,7177f, 69,00008f, 3296,333f), Vector(0.0f, -39,57473f, 0.0f), Vector(17,92455f, 6,053961f, 17,40948f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 528, &iLocal_254 + 504[0]);
	*(&iLocal_254 + 504[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_soldiers01", 4,203895E-45f, Vector(-686,6598f, 67,40527f, 3306,456f), Vector(0.0f, 50,57193f, 0.0f), Vector(13,52049f, 8,554782f, 18,99325f));
	ADD_TO_VOLUME_SET(&iLocal_254 + 528, &iLocal_254 + 504[1]);
	*(&iLocal_254 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_zombies_01", 2,802597E-45f, Vector(-703,3032f, 63,24707f, 3339,09f), Vector(0.0f, -24,40541f, 0.0f), Vector(24,2618f, 14,73925f, 26,56117f));
	*(&iLocal_254 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_zombies_02", 2,802597E-45f, Vector(-735,4042f, 63,21407f, 3283,271f), Vector(0.0f, 85,51283f, 0.0f), Vector(9,519508f, 14,73925f, 10,42705f));
	*(&iLocal_254 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_zombies_03", 2,802597E-45f, Vector(-739,8752f, 73,22081f, 3323,08f), Vector(0.0f, -50,12456f, 0.0f), Vector(13,08777f, 14,73925f, 10,42705f));
	*(&iLocal_254 + 560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "fodv_zombies_04", 2,802597E-45f, Vector(-720,0794f, 63,87642f, 3339,263f), Vector(0.0f, 6,145738f, 0.0f), Vector(15,99541f, 14,73925f, 12,50079f));
	*(&iLocal_254 + 568) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "MoveRestriction01", 2,802597E-45f, Vector(-722,6973f, 63,24707f, 3286,596f), Vector(0.0f, -39,31911f, 0.0f), Vector(6.0f, 10.0f, 10.0f));
	*(&iLocal_254 + 576) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "MoveRestriction02", 2,802597E-45f, Vector(-693,9375f, 63,24707f, 3321,979f), Vector(0.0f, -118,4534f, 0.0f), Vector(6.0f, 10.0f, 19,53312f));
	*(&iLocal_254 + 584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "MoveRestriction03", 2,802597E-45f, Vector(-738,6293f, 73,31178f, 3309,553f), Vector(0.0f, -136,587f, 0.0f), Vector(6.0f, 10.0f, 10.0f));
	*(&iLocal_254 + 592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "MoveRestriction04", 2,802597E-45f, Vector(-661,9684f, 64,03374f, 3314,291f), Vector(0.0f, -51,70715f, 0.0f), Vector(4,482791f, 10.0f, 10,53349f));
	*(&iLocal_254 + 600) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "MoveRestriction05", 2,802597E-45f, Vector(-740,9277f, 71,94455f, 3298,316f), Vector(0.0f, -20,46562f, 0.0f), Vector(4,482791f, 10.0f, 10,53349f));
	*(&iLocal_254 + 608) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_254, "MoveRestriction06", 2,802597E-45f, Vector(-730,0131f, 73,31178f, 3313,189f), Vector(0.0f, -99,30927f, 0.0f), Vector(6.0f, 10.0f, 6,492777f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_PlayerDuel1", Vector(-703,6f, 63,247f, 3298,434f), Vector(0.0f, 240,741f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_enDuel1", Vector(-696,012f, 63,247f, 3302,706f), Vector(0.0f, 240,387f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos1", Vector(-663,174f, 80,177f, 3365,443f), Vector(-6,733f, 31,205f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos2", Vector(-686,801f, 34,866f, 3178,582f), Vector(4,495f, 173,766f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos3", Vector(-767,545f, 68,721f, 3281,646f), Vector(-0,781f, -109,274f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "dzcf_merc_giver", Vector(-717,5405f, 63,247f, 3293,325f), Vector(0.0f, 143,127f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_report_crime_road", Vector(-744,038f, 62,997f, 3284,873f), Vector(0.0f, 98,094f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_report_crime_road1", Vector(-711,385f, 64,322f, 3357,244f), Vector(0.0f, 178,944f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_jail_sit", Vector(-724,92f, 63,349f, 3297,469f), Vector(0.0f, 308,682f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_jail_leave_start", Vector(-718,46f, 63,247f, 3290,199f), Vector(0.0f, 55,977f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_jail_leave_endf", Vector(-724,488f, 63,247f, 3285,287f), Vector(0.0f, 51,299f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_cell_leave_end", Vector(-715,494f, 63,247f, 3294,714f), Vector(0.0f, 311,584f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_cell_leave_cop", Vector(-720,176f, 63,349f, 3294,838f), Vector(0.0f, 198,474f, 0.0f));
	*(&iLocal_254 + 616) = Vector(-714,2064f, 67,50696f, 3286,132f);
	*(&iLocal_254 + 616 + 12) = Vector(0.0f, -130,6701f, 0.0f);
	*(&iLocal_254 + 640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fodf_InteriorPoint_house", Vector(-714,2064f, 67,50696f, 3286,132f), Vector(0.0f, -130,6701f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos4", Vector(-754,278f, 96,871f, 3318,208f), Vector(-31,096f, -69,843f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos5", Vector(-672,102f, 73,721f, 3330,633f), Vector(-9,042f, 42,041f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos6", Vector(-668,576f, 71,568f, 3310,539f), Vector(-5,197f, 84,742f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos7", Vector(-739,23f, 79,561f, 3301,822f), Vector(-5,55f, -90,905f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos8", Vector(-676,472f, 66,131f, 3283,028f), Vector(3,529f, -142,874f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos9", Vector(-724,494f, 79,916f, 3320,539f), Vector(-12,449f, -66,157f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_254, "fod_vista_cam_pos10", Vector(-731,856f, 64,549f, 3270,007f), Vector(12,716f, -159,998f, 0.0f));
	return 1;
}

void Function_277(int iParam0, int iParam1) //Position: 0x112F4 / 70388
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

void Function_278(var uParam0, int iParam1) //Position: 0x1133E / 70462
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_279() //Position: 0x1134F / 70479
{
	Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1);
	vLocal_845[03] = { StackVal, StackVal, Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1) };
	Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "smoking_stand5"), 1, 0, 0, 0, 0, 1);
	vLocal_845[13] = { StackVal, StackVal, Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "smoking_stand5"), 1, 0, 0, 0, 0, 1) };
	Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "smoking_stand4"), 1, 0, 0, 0, 0, 1);
	vLocal_845[23] = { StackVal, StackVal, Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
	Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1);
	vLocal_845[33] = { StackVal, StackVal, Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1) };
	Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "rand_idle_stand7"), 1, 0, 0, 0, 0, 1);
	vLocal_845[43] = { StackVal, StackVal, Function_280(FIND_OBJECT_IN_LAYOUT(&iLocal_416, "stand_yelling"), FIND_OBJECT_IN_LAYOUT(&iLocal_416, "rand_idle_stand7"), 1, 0, 0, 0, 0, 1) };
	return;
}

vector3 Function_280(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1149B / 70811
{
	vector3 vVar0;
	
	vVar0 = GET_GRINGO_FROM_OBJECT(&uParam0);
	*(&vVar0 + 8) = GET_GRINGO_FROM_OBJECT(&bParam1);
	if (bParam2)
	{
		Function_205(&vVar0 + 16, 1);
	}
	else
	{
		Function_54(&vVar0 + 16, 1);
	}
	if (bParam3)
	{
		Function_205(&vVar0 + 16, 2);
	}
	else
	{
		Function_54(&vVar0 + 16, 2);
	}
	if (bParam4)
	{
		Function_205(&vVar0 + 16, 4);
	}
	else
	{
		Function_54(&vVar0 + 16, 4);
	}
	if (bParam5)
	{
		Function_205(&vVar0 + 16, 8);
	}
	else
	{
		Function_54(&vVar0 + 16, 8);
	}
	if (bParam6)
	{
		Function_205(&vVar0 + 16, 16);
	}
	else
	{
		Function_54(&vVar0 + 16, 16);
	}
	if (bParam7)
	{
		Function_205(&vVar0 + 16, 32);
	}
	else
	{
		Function_54(&vVar0 + 16, 32);
	}
	Function_54(&vVar0 + 16, 64);
	Function_54(&vVar0 + 16, 128);
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

bool Function_281() //Position: 0x11568 / 71016
{
	return Function_282();
}

int Function_282() //Position: 0x11571 / 71025
{
	var uVar0;
	
	Function_277(3, 3);
	uVar0 = &uVar0;
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_kneel_rfl", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_177(&iLocal_416 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_low_wall_rfl", 1, 0);
	if (!Function_172(&iLocal_416 + 8))
	{
		return 0;
	}
	iLocal_416 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_416))
	{
		iLocal_416 = CREATE_LAYOUT("ElPresidio_layout");
	}
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-720,3671f, 67,51764f, 3296,77f), Vector(0.0f, -309,8027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_gateGuards2", "mex_gateGuards", Vector(-736,3804f, 77,25826f, 3300,231f), Vector(0.0f, 71,27296f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(-676,4285f, 63,24744f, 3299,296f), Vector(0.0f, 100,7092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(-708,4954f, 67,51375f, 3282,732f), Vector(0.0f, 141,8311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(-709,0433f, 67,52305f, 3287,112f), Vector(0.0f, -222,0619f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-706,5253f, 66,75459f, 3279,682f), Vector(0.0f, -0,9344313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "nlean_rail", "nlean_rail", Vector(-713,3747f, 67,49703f, 3293,526f), Vector(0.0f, -128,0872f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_distance_binocs", "look_distance_binocs", Vector(-721,3502f, 69,16821f, 3274,475f), Vector(0.0f, 108,5536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_out_window_R", "look_out_window_R", Vector(-710,0087f, 67,513f, 3278,964f), Vector(0.0f, -40,43299f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-716,5546f, 67,50723f, 3299,334f), Vector(0.0f, -111,8011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl7", "DLC_survivor_stand_rfl", Vector(-687,7061f, 69,63348f, 3321,022f), Vector(0.0f, 191,7199f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-682,194f, 63,38754f, 3292,064f), Vector(0.0f, 151,4445f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-678,7137f, 63,321f, 3296,161f), Vector(0.0f, 96,76859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "lean_rail2", "nlean_rail", Vector(-715,2169f, 67,55249f, 3301,539f), Vector(0.0f, 229,4257f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-703,7432f, 66,36328f, 3281,916f), Vector(0.0f, -167,9729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(-681,1483f, 63,247f, 3312,677f), Vector(0.0f, -188,4532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_check_clipboard", "stand_check_clipboard", Vector(-667,545f, 65,615f, 3309,488f), Vector(0.0f, -86,90867f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_distance_binocs1", "look_distance_binocs", Vector(-669,469f, 69,554f, 3310,187f), Vector(0.0f, 120,0851f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_distance_binocs2", "look_distance_binocs", Vector(-665,113f, 69,509f, 3311,136f), Vector(0.0f, -133,429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", Vector(-664,575f, 69,43f, 3307,346f), Vector(0.0f, -226,8707f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-666,3836f, 73,42818f, 3309,781f), Vector(0.0f, 104,0507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "repair_kneel", "repair_kneel", Vector(-693,3738f, 63,247f, 3298,784f), Vector(0.0f, 33,26788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_out_window_L", "look_out_window_L", Vector(-720,3563f, 67,513f, 3288,755f), Vector(0.0f, 50,0137f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_check_clipboard1", "stand_check_clipboard", Vector(-717,5f, 70,23735f, 3289,415f), Vector(0.0f, 147,4977f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_distance_binocs3", "look_distance_binocs", Vector(-724,7563f, 78,35497f, 3319,749f), Vector(0.0f, 159,0294f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl6", "DLC_survivor_stand_rfl", Vector(-717,5178f, 74,08543f, 3324,969f), Vector(0.0f, 164,121f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_distance_binocs4", "look_distance_binocs", Vector(-721,7476f, 79,35668f, 3305,081f), Vector(0.0f, 9,529112f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_gateGuards3", "mex_gateGuards", Vector(-712,3604f, 74,16735f, 3324,698f), Vector(0.0f, 139,9103f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "rand_idle_stand1", "rand_idle_stand", Vector(-697,7014f, 68,73802f, 3287,415f), Vector(0.0f, -19,38494f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_gateGuards5", "mex_gateGuards", Vector(-675,074f, 68,73569f, 3296,858f), Vector(0.0f, -38,26125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "lean_fence_H_talking", "lean_fence_L_talking", Vector(-719,137f, 79,3585f, 3307,064f), Vector(0.0f, 321,2921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "lean_fence_L_talking2", "lean_fence_L_talking", Vector(-723,9261f, 79,39802f, 3307,228f), Vector(0.0f, 47,13749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_416 + 528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_horseshoe", "stand_horseshoe", Vector(-713,3561f, 63,25285f, 3283,6f), Vector(0.0f, 46,04274f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_416 + 528), 1);
	*(&iLocal_416 + 536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "horse_tend", "horse_tend", Vector(-713,0793f, 63,22428f, 3287,888f), Vector(0.0f, -38,79781f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_416 + 536), 1);
	*(&iLocal_416 + 544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "horse_stay", "horse_stay", Vector(-714,4236f, 63,22428f, 3286,903f), Vector(0.0f, -37,24018f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_416 + 544), 1);
	*(&iLocal_416 + 552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_check_clipboard2", "stand_check_clipboard", Vector(-722,121f, 75,168f, 3313,103f), Vector(0.0f, -27,23085f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_416 + 552), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Pee", "Pee", Vector(-726,3694f, 63,34876f, 3297,085f), Vector(0.0f, 103,9532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sleeping_scripted", "sleeping_scripted", Vector(-724,4138f, 63,46781f, 3296,349f), Vector(0.0f, 55,44757f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_worried_n_any", "stand_worried_n_any", Vector(-722,6904f, 63,34961f, 3294,993f), Vector(0.0f, -118,666f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(-724,2662f, 63,37123f, 3298,342f), Vector(0.0f, -43,0543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_talking_soldiers_link3", "mex_talking_soldiers_link", Vector(-717,9738f, 63,33184f, 3297,667f), Vector(0.0f, -226,7341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(-715,2135f, 72,94291f, 3281,964f), Vector(0.0f, 77,05769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sit_cleanrifle1", "sit_cleanrifle", Vector(-719,3867f, 75,16785f, 3311,7f), Vector(0.0f, 146,8785f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_yelling_mid", "stand_yelling_mid", Vector(-719,5087f, 63,35001f, 3297,715f), Vector(0.0f, 55,37082f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sleepBed_r", "mex_sleepBed_r", Vector(-722,3011f, 67,499f, 3298,616f), Vector(0.0f, -42,57276f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sleepBed_l", "mex_sleepBed_l", Vector(-719,3489f, 67,499f, 3295,029f), Vector(0.0f, 131,0655f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sleepBed_r2", "mex_sleepBed_r", Vector(-726,2709f, 67,49874f, 3295,064f), Vector(0.0f, 137,8984f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sleepBed_r3", "mex_sleepBed_r", Vector(-724,8945f, 67,49874f, 3293,523f), Vector(0.0f, 140,2076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sleepBed_l2", "mex_sleepBed_l", Vector(-724,3748f, 67,499f, 3293,344f), Vector(0.0f, -36,61475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground19", "Rand_Idle_Sit_Ground", Vector(-682,5579f, 63,24734f, 3305,3f), Vector(0.0f, -343,3379f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "rand_idle_stand3", "rand_idle_stand", Vector(-686,592f, 68,84886f, 3290,11f), Vector(0.0f, -19,51385f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_kneel_rfl", "DLC_survivor_kneel_rfl", Vector(-699,9139f, 66,44852f, 3312,629f), Vector(0.0f, -191,081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "look_distance_binocs5", "look_distance_binocs", Vector(-665,6379f, 73,42816f, 3308,527f), Vector(0.0f, -98,92401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_talking_soldiers_link4", "mex_talking_soldiers_link", Vector(-713,8732f, 67,60998f, 3281,132f), Vector(0.0f, -48,07489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "lean_fence_L_talking3", "lean_fence_L_talking", Vector(-709,1548f, 67,52305f, 3290,407f), Vector(0.0f, 229,0538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "repair_kneel1", "repair_kneel", Vector(-692,5491f, 63,247f, 3296,923f), Vector(0.0f, 121,5768f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "repair_kneel2", "repair_kneel", Vector(-687,4442f, 63,247f, 3298,384f), Vector(0.0f, 242,9485f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "repair_kneel3", "repair_kneel", Vector(-699,7437f, 63,247f, 3302,929f), Vector(0.0f, 180,1734f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_check_clipboard3", "stand_check_clipboard", Vector(-680,707f, 63,24707f, 3314,156f), Vector(0.0f, 46,13166f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_check_clipboard4", "stand_check_clipboard", Vector(-709,6506f, 63,24707f, 3287,052f), Vector(0.0f, 83,30362f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground18", "Rand_Idle_Sit_Ground", Vector(-709,1552f, 63,24707f, 3303,924f), Vector(0.0f, 343,7687f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_check_clipboard6", "stand_check_clipboard", Vector(-718,9658f, 67,5125f, 3290,026f), Vector(0.0f, 314,4405f, 0.0f));
	*(&iLocal_416 + 560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "lean_table", "lean_table", Vector(-721,4617f, 79,36691f, 3311,719f), Vector(0.0f, 232,2581f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_416 + 560), 0);
	*(&iLocal_416 + 568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sit_barrel", "sit_barrel", Vector(-695,3147f, 63,24707f, 3299,635f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_416 + 576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sit_barrel1", "sit_barrel", Vector(-696,7335f, 63,24707f, 3304,058f), Vector(0.0f, 87,03288f, 0.0f));
	*(&iLocal_416 + 584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", Vector(-673,927f, 63,24707f, 3318,569f), Vector(0.0f, 72,97687f, 0.0f));
	*(&iLocal_416 + 592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground6", "Rand_Idle_Sit_Ground", Vector(-704,8139f, 63,24707f, 3291,395f), Vector(0.0f, 146,3114f, 0.0f));
	*(&iLocal_416 + 600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sitGround", "mex_sitGround", Vector(-706,9943f, 63,24707f, 3294,084f), Vector(0.0f, -234,9375f, 0.0f));
	*(&iLocal_416 + 608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", Vector(-707,6121f, 63,24707f, 3292,368f), Vector(0.0f, -105,8425f, 0.0f));
	*(&iLocal_416 + 616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground9", "Rand_Idle_Sit_Ground", Vector(-705,5129f, 63,24707f, 3294,729f), Vector(0.0f, 7,773623f, 0.0f));
	*(&iLocal_416 + 624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sitGround3", "mex_sitGround", Vector(-704,0145f, 63,24707f, 3293,648f), Vector(0.0f, -122,673f, 0.0f));
	*(&iLocal_416 + 632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground11", "Rand_Idle_Sit_Ground", Vector(-698,825f, 66,44852f, 3313,312f), Vector(0.0f, 117,7524f, 0.0f));
	*(&iLocal_416 + 640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "lean_rail3", "nlean_rail", Vector(-699,0483f, 66,44852f, 3312,398f), Vector(0.0f, -31,24462f, 0.0f));
	*(&iLocal_416 + 648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground12", "Rand_Idle_Sit_Ground", Vector(-688,5365f, 69,63348f, 3320,037f), Vector(0.0f, 173,308f, 0.0f));
	*(&iLocal_416 + 656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-688,0103f, 66,44515f, 3318,783f), Vector(0.0f, -392,013f, 0.0f));
	*(&iLocal_416 + 664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground13", "Rand_Idle_Sit_Ground", Vector(-686,1005f, 66,44515f, 3318,783f), Vector(0.0f, 24,025f, 0.0f));
	*(&iLocal_416 + 672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "sleeping_wall_scripted3", "sleeping_wall_scripted", Vector(-716,7067f, 63,33184f, 3295,983f), Vector(0.0f, -130,46f, 0.0f));
	*(&iLocal_416 + 680) = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), &iLocal_416, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_yelling", "stand_yelling_mid", Vector(-712.0f, 63,24707f, 3296.0f), Vector(0.0f, -157,6452f, 0.0f)), &iLocal_416 + 680);
	*(&iLocal_416 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sitGround1", "mex_sitGround", Vector(-683,8809f, 63,24707f, 3304,34f), Vector(0.0f, -237,0114f, 0.0f));
	*(&iLocal_416 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sitGround2", "mex_sitGround", Vector(-682,0793f, 63,24707f, 3304,11f), Vector(0.0f, -109,156f, 0.0f));
	*(&iLocal_416 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground16", "Rand_Idle_Sit_Ground", Vector(-683,9342f, 63,24707f, 3302,565f), Vector(0.0f, -131,6053f, 0.0f));
	*(&iLocal_416 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground17", "Rand_Idle_Sit_Ground", Vector(-682,3756f, 63,24707f, 3302,149f), Vector(0.0f, 160,9675f, 0.0f));
	*(&iLocal_416 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", Vector(-722,167f, 82,56036f, 3312,854f), Vector(0.0f, 116,986f, 0.0f));
	*(&iLocal_416 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl1", "DLC_survivor_stand_rfl", Vector(-719,8456f, 82,56036f, 3309,798f), Vector(0.0f, -6,931628f, 0.0f));
	*(&iLocal_416 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl2", "DLC_survivor_stand_rfl", Vector(-722,6934f, 82,56036f, 3310,417f), Vector(0.0f, 35,42083f, 0.0f));
	*(&iLocal_416 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", Vector(-713,6971f, 72,9614f, 3280,817f), Vector(0.0f, 53,80081f, 0.0f));
	*(&iLocal_416 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl3", "DLC_survivor_stand_rfl", Vector(-712,9001f, 72,94073f, 3279,506f), Vector(0.0f, 87,63891f, 0.0f));
	*(&iLocal_416 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_kneel_rfl1", "DLC_survivor_kneel_rfl", Vector(-713,2282f, 72,94073f, 3283,323f), Vector(0.0f, -73,37267f, 0.0f));
	*(&iLocal_416 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_kneel_rfl2", "DLC_survivor_kneel_rfl", Vector(-726,6974f, 72,94073f, 3295,36f), Vector(0.0f, 17,25814f, 0.0f));
	*(&iLocal_416 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl4", "DLC_survivor_stand_rfl", Vector(-725,8566f, 72,94073f, 3294,441f), Vector(0.0f, 42,45245f, 0.0f));
	*(&iLocal_416 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_roof_rfl1", "DLC_survivor_roof_rfl", Vector(-720,4238f, 72,94073f, 3288,496f), Vector(0.0f, 49,92713f, 0.0f));
	*(&iLocal_416 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_kneel_rfl3", "DLC_survivor_kneel_rfl", Vector(-717,5336f, 66,75313f, 3274,425f), Vector(0.0f, -132,2284f, 0.0f));
	*(&iLocal_416 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl5", "DLC_survivor_stand_rfl", Vector(-715,2815f, 67,5125f, 3295,111f), Vector(0.0f, -128,8526f, 0.0f));
	*(&iLocal_416 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground20", "Rand_Idle_Sit_Ground", Vector(-724,9016f, 72,94073f, 3297,499f), Vector(0.0f, 13,95777f, 0.0f));
	*(&iLocal_416 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground21", "Rand_Idle_Sit_Ground", Vector(-710,3779f, 72,94073f, 3279,862f), Vector(0.0f, 97,56605f, 0.0f));
	*(&iLocal_416 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_roof_rfl2", "DLC_survivor_roof_rfl", Vector(-720,6979f, 74,08374f, 3325,865f), Vector(0.0f, -162,9241f, 0.0f));
	*(&iLocal_416 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground22", "Rand_Idle_Sit_Ground", Vector(-722,6606f, 74,08374f, 3326,227f), Vector(0.0f, -100,6628f, 0.0f));
	*(&iLocal_416 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl8", "DLC_survivor_stand_rfl", Vector(-689,8415f, 66,44515f, 3316,377f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_416 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_low_wall_rfl", "DLC_survivor_low_wall_rfl", Vector(-718,8274f, 67,5125f, 3298,462f), Vector(0.0f, 48,97372f, 0.0f));
	*(&iLocal_416 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_low_wall_rfl1", "DLC_survivor_low_wall_rfl", Vector(-717,9605f, 67,5125f, 3297,466f), Vector(0.0f, 48,97372f, 0.0f));
	*(&iLocal_416 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_low_wall_rfl2", "DLC_survivor_low_wall_rfl", Vector(-717,1211f, 67,5125f, 3296,446f), Vector(0.0f, 48,97372f, 0.0f));
	*(&iLocal_416 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_low_wall_rfl3", "DLC_survivor_low_wall_rfl", Vector(-712,4585f, 67,5125f, 3290,877f), Vector(0.0f, 48,97372f, 0.0f));
	*(&iLocal_416 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground23", "Rand_Idle_Sit_Ground", Vector(-692,4315f, 66,24495f, 3289,507f), Vector(0.0f, -158,9186f, 0.0f));
	*(&iLocal_416 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground24", "Rand_Idle_Sit_Ground", Vector(-691,0745f, 66,25323f, 3289,591f), Vector(0.0f, -209,4343f, 0.0f));
	*(&iLocal_416 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground25", "Rand_Idle_Sit_Ground", Vector(-681,7064f, 66,4374f, 3294,498f), Vector(0.0f, -230,8735f, 0.0f));
	*(&iLocal_416 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground26", "Rand_Idle_Sit_Ground", Vector(-683,0177f, 66,38141f, 3294,013f), Vector(0.0f, -181,3555f, 0.0f));
	*(&iLocal_416 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl9", "DLC_survivor_stand_rfl", Vector(-687,2684f, 66,44516f, 3293,624f), Vector(0.0f, 161,6848f, 0.0f));
	*(&iLocal_416 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_stand_rfl10", "DLC_survivor_stand_rfl", Vector(-677,3819f, 66,44516f, 3299,886f), Vector(0.0f, 135,934f, 0.0f));
	*(&iLocal_416 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground27", "Rand_Idle_Sit_Ground", Vector(-671,676f, 65,9096f, 3313,563f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_416 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground28", "Rand_Idle_Sit_Ground", Vector(-673,0666f, 65,9096f, 3312,474f), Vector(0.0f, -75,62203f, 0.0f));
	*(&iLocal_416 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_roof_rfl3", "DLC_survivor_roof_rfl", Vector(-674,2239f, 65,90961f, 3310,982f), Vector(0.0f, 130,8116f, 0.0f));
	*(&iLocal_416 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "Rand_Idle_Sit_Ground29", "Rand_Idle_Sit_Ground", Vector(-672,304f, 66,11388f, 3300,421f), Vector(0.0f, -194,6349f, 0.0f));
	*(&iLocal_416 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "mex_sitGround4", "mex_sitGround", Vector(-706,4689f, 63,24707f, 3291,187f), Vector(0.0f, -336,3925f, 0.0f));
	*(&iLocal_416 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-715,9261f, 72,94076f, 3283,269f), Vector(0.0f, 55,79336f, 0.0f));
	*(&iLocal_416 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", Vector(-725,1367f, 72,94073f, 3293,464f), Vector(0.0f, 46,55025f, 0.0f));
	*(&iLocal_416 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", Vector(-721,3788f, 82,56036f, 3313,985f), Vector(0.0f, 100,9885f, 0.0f));
	*(&iLocal_416 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_416, "DLC_survivor_roof_rfl4", "DLC_survivor_roof_rfl", Vector(-665,7458f, 73,42662f, 3306,935f), Vector(0.0f, -48,13245f, 0.0f));
	return 1;
}

void Function_283() //Position: 0x1462F / 83503
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, true);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, true);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, true);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, true);
	SET_FACTIONS_STATUS_ONE_WAY(10, 32, 2);
	SET_FACTIONS_STATUS_ONE_WAY(6, 32, 2);
	return;
}

bool Function_284() //Position: 0x1465F / 83551
{
	return Function_285();
}

int Function_285() //Position: 0x14668 / 83560
{
	var uVar0;
	
	Function_277(3, 3);
	uVar0 = &uVar0;
	Function_177(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_l", 1, 0);
	if (!Function_172(&iLocal_178 + 8))
	{
		return 0;
	}
	iLocal_178 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("ElPresidio_layout");
	}
	*(&iLocal_178 + 32) = Vector(-722,8911f, 82,45563f, 3309,264f);
	*(&iLocal_178 + 32 + 12) = Vector(0.0f, -133,0126f, 0.0f);
	*(&iLocal_178 + 56) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_playerTele", Vector(-722,8911f, 82,45563f, 3309,264f), Vector(0.0f, -133,0126f, 0.0f));
	*(&iLocal_178 + 64) = Vector(-721,9144f, 82,4912f, 3308,142f);
	*(&iLocal_178 + 64 + 12) = Vector(0.0f, -136,666f, 0.0f);
	*(&iLocal_178 + 88) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_genTele", Vector(-721,9144f, 82,4912f, 3308,142f), Vector(0.0f, -136,666f, 0.0f));
	*(&iLocal_178 + 96) = Vector(-723,6121f, 82,45563f, 3310,015f);
	*(&iLocal_178 + 96 + 12) = Vector(0.0f, -122,9633f, 0.0f);
	*(&iLocal_178 + 120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_soldierTele", Vector(-723,6121f, 82,45563f, 3310,015f), Vector(0.0f, -122,9633f, 0.0f));
	*(&iLocal_178 + 128) = Vector(-721,2819f, 82,47678f, 3312,793f);
	*(&iLocal_178 + 128 + 12) = Vector(0.0f, 54,11021f, 0.0f);
	*(&iLocal_178 + 152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_rebTele1", Vector(-721,2819f, 82,47678f, 3312,793f), Vector(0.0f, 54,11021f, 0.0f));
	*(&iLocal_178 + 160) = Vector(-720,6768f, 82,45563f, 3312,059f);
	*(&iLocal_178 + 160 + 12) = Vector(4,116799f, 57,54126f, 5,324008f);
	*(&iLocal_178 + 184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_rebTele2", Vector(-720,6768f, 82,45563f, 3312,059f), Vector(4,116799f, 57,54126f, 5,324008f));
	*(&iLocal_178 + 192) = Vector(-719,9883f, 82,45563f, 3310,954f);
	*(&iLocal_178 + 192 + 12) = Vector(-2,711456f, 53,91066f, -3,620177f);
	*(&iLocal_178 + 216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_rebTele3", Vector(-719,9883f, 82,45563f, 3310,954f), Vector(-2,711456f, 53,91066f, -3,620177f));
	*(&iLocal_178 + 224) = Vector(-719,1819f, 82,45563f, 3310,151f);
	*(&iLocal_178 + 224 + 12) = Vector(-0,4835112f, 52,03443f, -0,6411216f);
	*(&iLocal_178 + 248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "elpf_rebTele4", Vector(-719,1819f, 82,45563f, 3310,151f), Vector(-0,4835112f, 52,03443f, -0,6411216f));
	*(&iLocal_178 + 256) = Vector(-720,3301f, 67,5125f, 3293,269f);
	*(&iLocal_178 + 256 + 12) = Vector(0.0f, -39,90101f, 0.0f);
	*(&iLocal_178 + 280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "player_save_01", Vector(-720,3301f, 67,5125f, 3293,269f), Vector(0.0f, -39,90101f, 0.0f));
	*(&iLocal_178 + 288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "player_sleep_bed_L", "ZombiePack_player_sleep_bed_L", Vector(-720,7095f, 67,51521f, 3296,493f), Vector(0.0f, -42,23585f, 0.0f));
	PushArrayP();
	*(&iLocal_178 + 296) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_178, "elpp_patrolpath");
	return 1;
}

void Function_286(bool bParam0, bool bParam1) //Position: 0x14BF7 / 84983
{
	var uVar0;
	
	if (Global_6623 || Function_7(0x8000000))
	{
		return;
	}
	uVar0 = Function_42(bParam0);
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

void Function_287(int iParam0, bool bParam1, bool bParam2) //Position: 0x14C92 / 85138
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_54(&iParam0 + 608, 16);
	if (!&bParam2)
	{
		if (!Function_289(bParam1))
		{
			Function_205(&iParam0 + 608, 16);
			return;
		}
	}
	*(&iParam0 + 624) = Function_208(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_101(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_288(&iParam0 + 384, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (&bParam2)
	{
		Function_177(&iParam0 + 384, "tense_with_guns", 5, 1);
		Function_177(&iParam0 + 384, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		*(&iParam0 + 376) = 1;
	}
	Function_172(&iParam0 + 384);
	if (HUD_IS_FADED())
	{
		Function_44(bParam1, Function_38(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_288(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x14D9E / 85406
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_33(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_175(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_175(&(Param0[iVar02]), 8);
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

bool Function_289(int iParam0) //Position: 0x14E7A / 85626
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_293(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_206(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_291(0))
		{
			return 0;
		}
		if ((!Function_45(24) || Function_290(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_290(int iParam0) //Position: 0x14EF5 / 85749
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_291(int iParam0) //Position: 0x14F0A / 85770
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_292(iParam0)7].f_12 < 0;
}

int Function_292(int iParam0) //Position: 0x14F70 / 85872
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

bool Function_293(int iParam0, int iParam1) //Position: 0x15032 / 86066
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_294() //Position: 0x1504F / 86095
{
	ALLOW_TUMBLEWEEDS(0);
	Function_295(&Global_12342, &Global_14762, Global_46894[1]);
	return;
}

void Function_295(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x15068 / 86120
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_13(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_232(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_278(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_6(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_6(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_296(char* cParam0) //Position: 0x15158 / 86360
{
	if (!Function_7(128))
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

