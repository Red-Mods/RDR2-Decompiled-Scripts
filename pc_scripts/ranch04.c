//Decompiled with MagicRDR v1.0
//Function Count : 627
//Statics Count : 1820
//Natives Count : 821
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
	var uLocal_48 = 7;
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
	var uLocal_78 = 10;
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
	var uLocal_120 = 3;
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
	var uLocal_134 = 3;
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
	var uLocal_148 = 3;
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
	var uLocal_162 = 3;
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
	var uLocal_176 = 3;
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
	var uLocal_190 = 2;
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
	var uLocal_202 = 3;
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
	var uLocal_218 = 7;
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
	var uLocal_250 = 4;
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
	var uLocal_268 = 21;
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
	var uLocal_314 = 2;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 5;
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
	var uLocal_336 = 2;
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
	var uLocal_362 = 6;
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
	var uLocal_378 = 7;
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
	var uLocal_396 = 9;
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
	var uLocal_418 = 9;
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
	var uLocal_438 = 1;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 4;
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
	var uLocal_474 = 4;
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
	var uLocal_486 = 7;
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
	var uLocal_530 = 7;
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
	var uLocal_546 = 5;
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
	var uLocal_580 = 31;
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
	var uLocal_644 = 8;
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
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
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
	bool bLocal_764 = false;
	bool bLocal_765 = false;
	var uLocal_766 = 0;
	int iLocal_767 = 0;
	float fLocal_768 = 0.0f;
	var uLocal_769 = 0;
	struct<6> Local_770 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	int iLocal_782 = 25;
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
	int iLocal_884 = 5;
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
	int iLocal_906 = 0;
	var uLocal_907 = 13;
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
	struct<15> Local_961[8];
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
	var uLocal_1101 = 5;
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
	var uLocal_1131 = 5;
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
	var uLocal_1161 = 5;
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
	var uLocal_1191 = 5;
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
	var uLocal_1211 = 4;
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
	struct<8> Local_1267[14];
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
	bool bLocal_1493 = false;
	var uLocal_1494 = 0;
	bool bLocal_1495 = false;
	var uLocal_1496 = 0;
	bool bLocal_1497 = false;
	var uLocal_1498 = 0;
	bool bLocal_1499 = false;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	int iLocal_1503 = 0;
	var uLocal_1504 = 0;
	int iLocal_1505 = 0;
	var uLocal_1506 = 0;
	int iLocal_1507 = 0;
	var uLocal_1508 = 0;
	bool bLocal_1509 = false;
	var uLocal_1510 = 0;
	bool bLocal_1511 = false;
	var uLocal_1512 = 0;
	bool bLocal_1513 = false;
	var uLocal_1514 = 0;
	int iLocal_1515 = 0;
	var uLocal_1516 = 0;
	int iLocal_1517 = 0;
	var uLocal_1518 = 0;
	int iLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	bool bLocal_1523 = false;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	bool bLocal_1531 = false;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	int iLocal_1537 = 0;
	int iLocal_1538 = 0;
	int iLocal_1539 = 0;
	int iLocal_1540 = 0;
	int iLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	float fLocal_1545 = 0.0f;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	int iLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	int iLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	int iLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	int iLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	int iLocal_1565 = 0;
	int iLocal_1566 = 0;
	bool bLocal_1567 = false;
	bool bLocal_1568 = false;
	bool bLocal_1569 = false;
	bool bLocal_1570 = false;
	int iLocal_1571 = 0;
	int iLocal_1572[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	int iLocal_1586[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	int iLocal_1600 = 0;
	int iLocal_1601[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1624 = 0;
	int iLocal_1625 = 0;
	var uLocal_1626 = 0;
	bool bLocal_1627 = false;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	int iLocal_1631 = 0;
	bool bLocal_1632 = false;
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
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	int iLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	int iLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	int iLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	int iLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	int iLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	int iLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	int iLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	int iLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	int iLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	int iLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	int iLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	int iLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	int iLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	int iLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	int iLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	bool bLocal_1717 = false;
	bool bLocal_1718 = false;
	bool bLocal_1719 = false;
	float fLocal_1720 = 0.0f;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	bool bLocal_1723 = false;
	var uLocal_1724 = 0;
	bool bLocal_1725 = false;
	var uLocal_1726 = 0;
	bool bLocal_1727 = false;
	var uLocal_1728 = 0;
	struct<2> Local_1729 = { 0, 0 } ;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	struct<2> Local_1735 = { 0, 0 } ;
	var uLocal_1737 = 0;
	struct<2> Local_1738 = { 0, 0 } ;
	var uLocal_1740 = 0;
	int iLocal_1741 = 0;
	int iLocal_1742 = 0;
	int iLocal_1743 = 0;
	int iLocal_1744 = 0;
	bool bLocal_1745 = false;
	int iLocal_1746 = 0;
	int iLocal_1747 = 0;
	int iLocal_1748 = 0;
	int iLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	int iLocal_1752 = 0;
	var uLocal_1753 = 0;
	int iLocal_1754 = 0;
	int iLocal_1755 = 0;
	bool bLocal_1756 = false;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	int iLocal_1760 = 0;
	var uLocal_1761 = 0;
	int iLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	int iLocal_1768 = 0;
	var uLocal_1769 = 0;
	int iLocal_1770 = 0;
	var uLocal_1771 = 0;
	int iLocal_1772 = 0;
	var uLocal_1773 = 0;
	int iLocal_1774 = 0;
	var uLocal_1775 = 0;
	int iLocal_1776 = 0;
	var uLocal_1777 = 0;
	int iLocal_1778 = 0;
	var uLocal_1779 = 0;
	bool bLocal_1780 = false;
	var uLocal_1781 = 0;
	bool bLocal_1782 = false;
	var uLocal_1783 = 0;
	int iLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	int iLocal_1790 = 0;
	int iLocal_1791 = 0;
	int iLocal_1792 = 0;
	int iLocal_1793 = 0;
	int iLocal_1794 = 0;
	int iLocal_1795 = 0;
	bool bLocal_1796 = false;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	int iLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	int iLocal_1807 = 0;
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
	iLocal_767 = 0;
	iLocal_1540 = 0;
	iLocal_1624 = 0;
	iLocal_1749 = 1;
	iLocal_1754 = 0;
	Local_770 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_750 = 99;
	iLocal_751 = 0;
	iLocal_752 = 1000;
	while (Function_242())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x51 / 81
{
	Function_230();
	Function_225(0);
	if (IS_ACTOR_VALID(&bLocal_1493))
	{
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1493, 1);
		AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bLocal_1493, 0, 1);
	}
	SET_DUST_LEVEL_MODIFIER(0);
	TASK_CLEAR(&Global_54076);
	STREAMING_UNLOAD_SCENE();
	Function_224(Global_46816[0], 0);
	Function_220(1, 60, 0);
	Function_217(3, 1, 0, 1, 1);
	Function_216(&fLocal_768);
	Function_216(&iLocal_4);
	Function_215();
	Function_186(bLocal_765, 1, 0, 0, 0, 0, 1, 1);
	Function_182(&iLocal_782);
	Function_182(&iLocal_884);
	Function_172();
	if (IS_ITERATOR_VALID(&uLocal_1259))
	{
		DESTROY_ITERATOR(&uLocal_1259);
	}
	if (IS_ITERATOR_VALID(&uLocal_1261))
	{
		DESTROY_ITERATOR(&uLocal_1261);
	}
	if (IS_ITERATOR_VALID(&uLocal_1263))
	{
		DESTROY_ITERATOR(&uLocal_1263);
	}
	RELEASE_LAYOUT_REF(&fLocal_768);
	if (bLocal_764)
	{
		DISABLE_CHILD_SECTOR("hen_barn01x");
		DISABLE_CHILD_SECTOR("hen_barn01props01x");
		DISABLE_CHILD_SECTOR("hen_barn03props01x");
		DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
		ENABLE_CHILD_SECTOR("hen_barn02x");
		ENABLE_CHILD_SECTOR("hen_barn02props01x");
		Function_27(Local_770, 1, 1, 1, 0);
	}
	else if (bLocal_765)
	{
		DISABLE_CHILD_SECTOR("hen_barn02x");
		DISABLE_CHILD_SECTOR("hen_barn02props01x");
		DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
		DISABLE_CHILD_SECTOR("hen_barn03props01x");
		ENABLE_CHILD_SECTOR("hen_barn01x");
		ENABLE_CHILD_SECTOR("hen_barn01props01x");
		Function_23(Local_770);
	}
	else
	{
		DISABLE_CHILD_SECTOR("hen_barn02x");
		DISABLE_CHILD_SECTOR("hen_barn02props01x");
		DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
		DISABLE_CHILD_SECTOR("hen_barn03props01x");
		ENABLE_CHILD_SECTOR("hen_barn01x");
		ENABLE_CHILD_SECTOR("hen_barn01props01x");
		Function_3(Local_770);
	}
	Function_2(1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(bool bParam0) //Position: 0x2BD / 701
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

void Function_3(int iParam0) //Position: 0x334 / 820
{
	Function_11(iParam0);
	Function_10();
	Function_7(2);
	Function_5((15 - Function_6(105)));
	Function_4(12);
	return;
}

void Function_4(int iParam0) //Position: 0x355 / 853
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_5(int iParam0) //Position: 0x372 / 882
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_6(105)), 0);
	return;
}

int Function_6(int iParam0) //Position: 0x395 / 917
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_7(int iParam0) //Position: 0x3AC / 940
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_9(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_9(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_9(&Global_21369 + 48);
	PRINTNL();
	Function_8(&iParam0);
	return;
}

void Function_8(int iParam0) //Position: 0x44E / 1102
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_6(90)), 0);
	return;
}

void Function_9(var uParam0) //Position: 0x471 / 1137
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

void Function_10() //Position: 0x4BB / 1211
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x4D4 / 1236
{
	int iVar0;
	
	if (!Function_21(bParam0))
	{
		Function_19();
		return;
	}
	iVar0 = Function_18(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_12("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x527 / 1319
{
	struct<4> Var0;
	
	if (!Function_21(bParam1))
	{
		return;
	}
	switch (Function_18(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_13(Function_16(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_18(bParam1), Function_16(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_13(int iParam0) //Position: 0x651 / 1617
{
	char* cVar0[16];
	
	if (!Function_14())
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

bool Function_14() //Position: 0x68B / 1675
{
	if (Function_15(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_15(bool bParam0, bool bParam1) //Position: 0x6A6 / 1702
{
	return (bParam0 && bParam1) == 0;
}

int Function_16(bool bParam0) //Position: 0x6B3 / 1715
{
	if (!Function_17(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_17(int iParam0) //Position: 0x6D3 / 1747
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_18(bool bParam0) //Position: 0x6EA / 1770
{
	if (!Function_17(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_19() //Position: 0x705 / 1797
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

void Function_20(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x94C / 2380
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_21(int iParam0) //Position: 0x978 / 2424
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

bool Function_22(int iParam0) //Position: 0x99C / 2460
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_23(int iParam0) //Position: 0x9B1 / 2481
{
	Function_24(iParam0);
	Function_7(2);
	Function_4(12);
	Function_5((15 - Function_6(105)));
	return;
}

void Function_24(bool bParam0) //Position: 0x9CF / 2511
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_21(bParam0))
	{
		return;
	}
	iVar0 = Function_18(bParam0);
	if (StackVal == 2)
	{
		Function_12("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(iVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_25(int iParam0) //Position: 0xA75 / 2677
{
	char* cVar0[16];
	
	if (!Function_14())
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

struct<24> Function_26(char* cParam0) //Position: 0xAB4 / 2740
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

void Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD0A / 3338
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_4(12);
	Function_7(2);
	Function_5((15 - Function_6(105)));
	if (Function_18(bParam0) == 1)
	{
		iVar2 = Function_16(bParam0);
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
			Function_99(iVar2, bParam0, bVar1);
			Function_98();
		}
	}
	Function_40(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_18(bParam0) == 1)
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
		if (Function_18(bParam0) == 1)
		{
			iVar2 = Function_16(bParam0);
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

void Function_28() //Position: 0xDFE / 3582
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

int Function_29(int iParam0, bool bParam1) //Position: 0xE30 / 3632
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

int Function_30(int iParam0) //Position: 0xE6E / 3694
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_31(int iParam0) //Position: 0xE88 / 3720
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1) //Position: 0xE9E / 3742
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

void Function_33(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x119B / 4507
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

void Function_34(char* cParam0) //Position: 0x1210 / 4624
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

bool Function_35(int iParam0, var uParam1, int iParam2) //Position: 0x124A / 4682
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

bool Function_36(var uParam0, int iParam1) //Position: 0x12C6 / 4806
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_37(char* cParam0) //Position: 0x12D9 / 4825
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

int Function_38(int iParam0) //Position: 0x137A / 4986
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

void Function_39(bool bParam0, bool bParam1) //Position: 0x13B7 / 5047
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_40(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13CD / 5069
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_21(bParam0))
	{
		Function_19();
		return;
	}
	bVar0 = Function_18(bParam0);
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
		Global_10966 = Function_16(bParam0);
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
		Function_12("DEED_COMPLETE", bParam0);
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
						switch (Function_16(bParam0))
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

void Function_41(int iParam0, struct<41> Param1) //Position: 0x162B / 5675
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1669 / 5737
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

void Function_43(bool bParam0) //Position: 0x16A8 / 5800
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

void Function_44() //Position: 0x16FD / 5885
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

void Function_45() //Position: 0x1748 / 5960
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

void Function_46() //Position: 0x184E / 6222
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

void Function_47() //Position: 0x1881 / 6273
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

void Function_48() //Position: 0x1A14 / 6676
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

void Function_49() //Position: 0x1BCD / 7117
{
	Function_50(&Global_42918, 1, 0);
	return;
}

void Function_50(struct<2317> Param0) //Position: 0x1BDB / 7131
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

bool Function_51() //Position: 0x1DF8 / 7672
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_52(int iParam0) //Position: 0x1E0D / 7693
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

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1EB4 / 7860
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

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2150 / 8528
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

var Function_55() //Position: 0x278E / 10126
{
	int iVar0;
	
	return &iVar0;
}

var Function_56(int iParam0) //Position: 0x2797 / 10135
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27A8 / 10152
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

struct<32> Function_58(char* cParam0) //Position: 0x289F / 10399
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x28BA / 10426
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_61(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_60(Function_61(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x2921 / 10529
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_61(int iParam0, bool bParam1) //Position: 0x2933 / 10547
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_62(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2945 / 10565
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

int Function_63(int iParam0) //Position: 0x2A79 / 10873
{
	return Global_55480[iParam016].f_96;
}

float Function_64(int iParam0) //Position: 0x2A88 / 10888
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_65(int iParam0) //Position: 0x2AC1 / 10945
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_66(int iParam0) //Position: 0x2AFE / 11006
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

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C98 / 11416
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

int Function_68(bool bParam0) //Position: 0x2EDC / 11996
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_69() //Position: 0x2F1D / 12061
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

struct<8> Function_70() //Position: 0x2FA6 / 12198
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

struct<8> Function_71() //Position: 0x303D / 12349
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

void Function_72() //Position: 0x30BC / 12476
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

int Function_73(int iParam0, bool bParam1, int iParam2) //Position: 0x30F9 / 12537
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

void Function_74() //Position: 0x3305 / 13061
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_14())
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

bool Function_75(char* cParam0) //Position: 0x33BC / 13244
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_76(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x33D4 / 13268
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

struct<8> Function_77() //Position: 0x34CC / 13516
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_78(bool bParam0, bool bParam1) //Position: 0x34D6 / 13526
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_79(int iParam0) //Position: 0x34E7 / 13543
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x34FD / 13565
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

float Function_81(struct<2> Param0, struct<2> Param2) //Position: 0x35C9 / 13769
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_82(float fParam0, int iParam1) //Position: 0x35E6 / 13798
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

bool Function_83(int iParam0) //Position: 0x3E12 / 15890
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_15(bVar0, 0x1000000) || Function_15(bVar0, 0x2000000)) || Function_15(bVar0, 0x4000000)) || !Function_15(bVar0, 0x10000000));
}

void Function_84(var uParam0, int iParam1) //Position: 0x3E4D / 15949
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_85(bool bParam0) //Position: 0x3E5C / 15964
{
	int iVar0;
	int iVar1;
	
	if (!Function_17(bParam0))
	{
		return;
	}
	switch (Function_18(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_16(bParam0);
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
			switch (Function_16(bParam0))
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
					iVar0 = Function_16(bParam0);
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
			switch (Function_16(bParam0))
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

bool Function_86(int iParam0) //Position: 0x433A / 17210
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(bool bParam0) //Position: 0x4350 / 17232
{
	if (!Function_17(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_88(bool bParam0) //Position: 0x436F / 17263
{
	if (!Function_17(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_89(int iParam0, int iParam1) //Position: 0x4389 / 17289
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

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x43F3 / 17395
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

void Function_91(int iParam0) //Position: 0x461B / 17947
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

void Function_92() //Position: 0x46B9 / 18105
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

void Function_93() //Position: 0x481B / 18459
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

int Function_94(int iParam0, char* cParam1) //Position: 0x489B / 18587
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

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4BF2 / 19442
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

int Function_96(int iParam0) //Position: 0x4C7A / 19578
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_97() //Position: 0x4C94 / 19604
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_98() //Position: 0x4CBF / 19647
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x4CED / 19693
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
			cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F89 / 20361
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

void Function_101(int iParam0, int iParam1) //Position: 0x515D / 20829
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

int Function_102(int iParam0, char* cParam1) //Position: 0x53C7 / 21447
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

int Function_103() //Position: 0x5557 / 21847
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

void Function_104() //Position: 0x55F8 / 22008
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

void Function_105(int iParam0) //Position: 0x56B6 / 22198
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

var Function_106(int iParam0) //Position: 0x571C / 22300
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

int Function_107(int iParam0, bool bParam1) //Position: 0x57AB / 22443
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

var Function_108(int iParam0, int iParam1) //Position: 0x5957 / 22871
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

void Function_109() //Position: 0x599C / 22940
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x59B2 / 22962
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x59F2 / 23026
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_112(int iParam0) //Position: 0x5A32 / 23090
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5A41 / 23105
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

int Function_114(int iParam0) //Position: 0x5C09 / 23561
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

var Function_115() //Position: 0x5C9E / 23710
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x5CC3 / 23747
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

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0x6192 / 24978
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

var Function_118(int iParam0) //Position: 0x64B9 / 25785
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x655C / 25948
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

int Function_120(int iParam0, bool bParam1) //Position: 0x6759 / 26457
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

int Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6904 / 26884
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

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x69D6 / 27094
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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
	Var0 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(int iParam0) //Position: 0x72F1 / 29425
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
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x746E / 29806
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

bool Function_125(struct<2> Param0, struct<2> Param2) //Position: 0x7579 / 30073
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_126(int iParam0) //Position: 0x75A5 / 30117
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

var Function_127(vector3 vParam0) //Position: 0x75FC / 30204
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

void Function_128(var uParam0, int iParam1) //Position: 0x764A / 30282
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

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x76A5 / 30373
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

void Function_130() //Position: 0x7846 / 30790
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x784C / 30796
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

void Function_132(bool bParam0, int iParam1) //Position: 0x78FB / 30971
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0x7950 / 31056
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x7966 / 31078
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

bool Function_135(int iParam0, int iParam1) //Position: 0x79B7 / 31159
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

void Function_136(var uParam0, int iParam1) //Position: 0x79E4 / 31204
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x79F5 / 31221
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x7A0F / 31247
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7A20 / 31264
{
	char* cVar0[32];
	
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
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_141() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
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
			stradd(&cVar0, "_tip", 32);
			Function_140(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_14())
		{
			if (!Function_36(Global_119934, 2))
			{
				Function_33(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_140(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7B7C / 31612
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
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_141() //Position: 0x7C07 / 31751
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_142(bool bParam0) //Position: 0x7C34 / 31796
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_145(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_144(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_143(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_143(int iParam0) //Position: 0x7DE4 / 32228
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

void Function_144(char* cParam0, bool bParam1) //Position: 0x7E3B / 32315
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

var Function_145(int iParam0) //Position: 0x7E60 / 32352
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

bool Function_146(bool bParam0, bool bParam1) //Position: 0x7EB6 / 32438
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

bool Function_147(bool bParam0) //Position: 0x7F15 / 32533
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_148(int iParam0) //Position: 0x7F21 / 32545
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_149(int iParam0) //Position: 0x7F3D / 32573
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

bool Function_150() //Position: 0x7F8F / 32655
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_15(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7FBF / 32703
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

int Function_152(int iParam0, int iParam1) //Position: 0x806A / 32874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x80C7 / 32967
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

int Function_154(int iParam0, int iParam1) //Position: 0x813A / 33082
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0x8195 / 33173
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

void Function_156(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8455 / 33877
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
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_140(&cVar8, 10.0f, 1, 0, 0, 1, 0);
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
		if (StackVal && !Function_15(((((!Function_141() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_15((((Function_141() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_14())
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

void Function_157(int iParam0, bool bParam1) //Position: 0x86F4 / 34548
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

void Function_158() //Position: 0x8763 / 34659
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

int Function_159(int iParam0, int iParam1) //Position: 0x87E3 / 34787
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

int Function_160(int iParam0) //Position: 0x9446 / 37958
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0) //Position: 0x945B / 37979
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

void Function_162(var uParam0, int iParam1) //Position: 0x94AA / 38058
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

void Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0x9502 / 38146
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

bool Function_164(int iParam0, int iParam1) //Position: 0x9575 / 38261
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_165(int iParam0) //Position: 0x9589 / 38281
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

var Function_166(int iParam0) //Position: 0x967A / 38522
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

bool Function_167(var uParam0, int iParam1) //Position: 0x96D2 / 38610
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_168(bool bParam0, bool bParam1, int iParam2) //Position: 0x96EF / 38639
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

bool Function_169(int iParam0) //Position: 0x9749 / 38729
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_170(bool bParam0) //Position: 0x975B / 38747
{
	bool bVar0;
	
	if (Function_15(bParam0, 1) && Function_15(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_171(struct<185> Param0) //Position: 0x978F / 38799
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
			Function_220(4, 0, 0);
		}
	}
	return;
}

void Function_172() //Position: 0x97FA / 38906
{
	Function_173();
	return;
}

void Function_173() //Position: 0x9803 / 38915
{
	Function_182(&iLocal_4 + 8);
	Function_182(&iLocal_4 + 176);
	Function_182(&iLocal_4 + 296);
	Function_182(&iLocal_4 + 464);
	Function_182(&iLocal_4 + 520);
	Function_182(&iLocal_4 + 576);
	Function_174(&Global_11544, &Global_13580, 0, 0);
	Function_174(&Global_11544, &Global_13580, 16, 0);
	Function_174(&Global_11544, &Global_13580, 2, 0);
	Function_174(&Global_11544, &Global_13580, 5, 0);
	Function_174(&Global_11544, &Global_13580, 24, 0);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_174(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9876 / 39030
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_181(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_181(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_181(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_180(&(Param0[iVar02]), 8);
	}
	Function_180(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_179(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_175(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_175(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x991E / 39198
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_178(&(Param0[bParam22]), 4);
				(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_177(Global_43790), Function_176(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_181(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_181(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_178(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_177(Global_43790), Function_176(Global_43790), false, 0);
	}
}

int Function_176(int iParam0) //Position: 0x9A84 / 39556
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

int Function_177(int iParam0) //Position: 0x9AAF / 39599
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

void Function_178(var uParam0, int iParam1) //Position: 0x9AE3 / 39651
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_179(int iParam0) //Position: 0x9AF4 / 39668
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

void Function_180(var uParam0, int iParam1) //Position: 0x9B9D / 39837
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_181(var uParam0, int iParam1) //Position: 0x9BB7 / 39863
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_182(int iParam0) //Position: 0x9BD4 / 39892
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

void Function_183(struct<2>[] Param0, int iParam1) //Position: 0x9BFC / 39932
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

void Function_184(struct<13> Param0) //Position: 0x9D47 / 40263
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_185(struct<13> Param0) //Position: 0x9D64 / 40292
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9D82 / 40322
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
	Function_2(1);
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
		Function_206(&Global_54076);
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
	Function_203(Global_42825);
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
	Function_202();
	Function_201(1178687);
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
	Function_39(&Global_21369 + 72 + 32, 16);
}

void Function_187() //Position: 0x9F8E / 40846
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
		if (Function_190() > 3)
		{
			bVar0 *= 2;
		}
		Function_188(StackVal, 0, 0, Function_6(bVar0), 0);
	}
	return;
}

void Function_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9FE5 / 40933
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_189(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_189(bool bParam0) //Position: 0xA035 / 41013
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_190() //Position: 0xA05E / 41054
{
	return Global_21369.f_248;
}

void Function_191() //Position: 0xA069 / 41065
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

void Function_192(int iParam0, bool bParam1, int iParam2) //Position: 0xA093 / 41107
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

void Function_193(int iParam0) //Position: 0xA19F / 41375
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

bool Function_194() //Position: 0xA21E / 41502
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

void Function_195() //Position: 0xA287 / 41607
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

void Function_196() //Position: 0xA2AD / 41645
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

void Function_197(int iParam0) //Position: 0xA2D3 / 41683
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_198(int iParam0) //Position: 0xA2F0 / 41712
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_199(int iParam0) //Position: 0xA303 / 41731
{
	Function_200(&Global_43580, iParam0);
	return;
}

void Function_200(var uParam0, int iParam1) //Position: 0xA311 / 41745
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_201(bool bParam0) //Position: 0xA330 / 41776
{
	if (Function_15(bParam0, 1) && !Function_15(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_202() //Position: 0xA35D / 41821
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

void Function_203(int iParam0) //Position: 0xA3D5 / 41941
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
		Function_204(78, 1, 1);
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

int Function_204(bool bParam0, bool bParam1, int iParam2) //Position: 0xA50B / 42251
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_205(bParam0), Function_51()) == 0)
		{
			ADD_ITEM(Function_205(bParam0), Function_51(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_205(bParam0), Function_51(), &iParam2);
	return 1;
}

var Function_205(bool bParam0) //Position: 0xA559 / 42329
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

void Function_206(var uParam0) //Position: 0xA64D / 42573
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&uParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170);
		}
	}
	return;
}

void Function_207() //Position: 0xA6D0 / 42704
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

void Function_208() //Position: 0xA714 / 42772
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

void Function_209() //Position: 0xA758 / 42840
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_210(int iParam0) //Position: 0xA76E / 42862
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

bool Function_211() //Position: 0xA7AE / 42926
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

void Function_212() //Position: 0xA7D3 / 42963
{
	Global_15862 = 0.0f;
	return;
}

void Function_213() //Position: 0xA7DD / 42973
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

int Function_214() //Position: 0xA808 / 43016
{
	var uVar0;
	
	uVar0 = Function_51();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_215() //Position: 0xA825 / 43045
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_216(int iParam0) //Position: 0xA82E / 43054
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

int Function_217(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA896 / 43158
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
		Function_219(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_218(&Global_15402[iParam014] + 8);
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

void Function_218(int iParam0) //Position: 0xABD8 / 43992
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_219(int iParam0) //Position: 0xAC0B / 44043
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_220(bool bParam0, int iParam1, int iParam2) //Position: 0xAC22 / 44066
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
		Function_221(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_221(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAD0C / 44300
{
	int iVar0;
	
	Function_223(bParam0);
	Function_9(&bParam1);
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
	Function_222();
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

void Function_222() //Position: 0xAE8B / 44683
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_223(int iParam0) //Position: 0xAE97 / 44695
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

void Function_224(int iParam0, bool bParam1) //Position: 0xAEDD / 44765
{
	if (!Function_86(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Function_138(&(Global_43791[iParam0]), 2097152);
	}
	else
	{
		Function_137(&(Global_43791[iParam0]), 2097152);
	}
	return;
}

void Function_225(bool bParam0) //Position: 0xAF11 / 44817
{
	struct<2> Var0;
	
	if (bParam0)
	{
		if (!Function_229(&iLocal_1653))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[16], &Var0);
			Var0.f_4 = (StackVal + 3.0f);
			uLocal_1721 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_1721, "RANCH04_BELL_MASTER", Var0);
			Function_227(&iLocal_1653);
		}
	}
	else if (Function_229(&iLocal_1653))
	{
		STOP_SOUND(&uLocal_1721);
		RELEASE_SOUND_ID(&uLocal_1721);
		Function_226(&iLocal_1653);
	}
	return;
}

void Function_226(vector3 vParam0) //Position: 0xAF8E / 44942
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_227(int iParam0) //Position: 0xAFA5 / 44965
{
	Function_228(&iParam0, 0.0f);
	return;
}

void Function_228(vector3 vParam0) //Position: 0xAFB2 / 44978
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_78(&vParam0, 1);
	Function_39(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_229(int iParam0) //Position: 0xAFD7 / 45015
{
	return Function_15(iParam0, 1);
}

void Function_230() //Position: 0xAFE5 / 45029
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	var uVar5;
	
	if (iLocal_1795)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_1795 = 0;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "NoGringoCamera"))
	{
		DECOR_REMOVE(&Global_54076, "NoGringoCamera");
	}
	SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
	if (&iLocal_1760 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(&iLocal_1760, 1);
	}
	if (&iLocal_1762 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(&iLocal_1762, 1);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1805))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
	}
	if (IS_ACTOR_VALID(&bLocal_1493))
	{
		AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bLocal_1493, 0, 1);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493);
	}
	uLocal_1535 = FIND_OBJECT_IN_LAYOUT(&iLocal_4, "DeadHorse01");
	if (IS_OBJECT_VALID(&uLocal_1535))
	{
		SET_CORPSE_PERMANENT(&uLocal_1535, 0);
		DESTROY_OBJECT(&uLocal_1535);
	}
	uLocal_1535 = FIND_OBJECT_IN_LAYOUT(&iLocal_4, "DeadHorse02");
	if (IS_OBJECT_VALID(&uLocal_1535))
	{
		SET_CORPSE_PERMANENT(&uLocal_1535, 0);
		DESTROY_OBJECT(&uLocal_1535);
	}
	SET_DRAW_ACTOR(&bLocal_1493, 1);
	Function_240(3, 0, 1);
	if (IS_BLIP_VALID(&bLocal_1523))
	{
		REMOVE_BLIP(&bLocal_1523);
	}
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	if (IS_OBJECT_VALID(&uLocal_1525))
	{
		UNK_0x7246F438(&uLocal_1525);
		DESTROY_OBJECT(&uLocal_1525);
	}
	if (IS_OBJECT_VALID(&uLocal_1647))
	{
		UNK_0x7246F438(&uLocal_1647);
		DESTROY_OBJECT(&uLocal_1647);
	}
	if (IS_OBJECT_VALID(&uLocal_1635))
	{
		UNK_0x7246F438(&uLocal_1635);
		DESTROY_OBJECT(&uLocal_1635);
	}
	if (IS_OBJECT_VALID(&uLocal_1637))
	{
		UNK_0x7246F438(&uLocal_1637);
		DESTROY_OBJECT(&uLocal_1637);
	}
	if (IS_OBJECT_VALID(&uLocal_1639))
	{
		UNK_0x7246F438(&uLocal_1639);
		DESTROY_OBJECT(&uLocal_1639);
	}
	if (IS_OBJECT_VALID(&uLocal_1641))
	{
		UNK_0x7246F438(&uLocal_1641);
		DESTROY_OBJECT(&uLocal_1641);
	}
	if (IS_OBJECT_VALID(&uLocal_1643))
	{
		UNK_0x7246F438(&uLocal_1643);
		DESTROY_OBJECT(&uLocal_1643);
	}
	if (UNK_0x7246F438(&uLocal_1645))
	{
		UNK_0xE18028C1(&uLocal_1645);
		DESTROY_OBJECT(&uLocal_1645);
	}
	RESET_RMPTFX_IN_VOLUME(&iLocal_4 + 1056[0]);
	RESET_RMPTFX_IN_VOLUME(&iLocal_4 + 1392[1]);
	if (bLocal_764)
	{
		GET_OBJECT_POSITION(&iLocal_4 + 2304[10], &Local_1729);
		uLocal_1535 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&fLocal_768, "nAfterburn", "script_barnfire_afterburn", Local_1729);
		UNK_0x6745191B(StackVal, &uLocal_1535, Vector(0.0f, 0.0f, 0.0f));
	}
	GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var2);
	uVar1 = LOCATE_PHYSINST_OF_TYPE(Var2, 50.0f, "hen_barn02x_p_cus_beams01x", 1);
	if (IS_PHYSINST_VALID(&uVar1))
	{
		REMOVE_PHYSINST(&uVar1);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	if (IS_ACTORSET_VALID(&iLocal_4 + 976))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(&iLocal_4 + 976))
		{
			bVar4 = GET_ACTOR_FROM_ACTORSET(&iLocal_4 + 976, bVar0);
			if (IS_ACTOR_VALID(&bVar4))
			{
				SET_ACTOR_STREAMING_HIGH_PRIORITY(&bVar4, 0);
				Function_239(&bVar4);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar4, 0);
				if (IS_ACTOR_RIDING(&bVar4))
				{
					ACTOR_DISMOUNT_NOW(&bVar4);
				}
				RESET_ANIM_SET_FOR_ACTOR(&bVar4, 0);
				TASK_CLEAR(&bVar4);
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bVar4)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&bVar4));
				}
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar4, 64, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar4, 65, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar4, 66, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar4, 67, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar4, 68, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar4, 46, 1);
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar4, 1);
				if (bLocal_764)
				{
					Function_238(&bVar4);
				}
				GIVE_OBJECT_TO_LAYOUT(&bVar4, GET_AMBIENT_LAYOUT());
			}
			bVar0++;
		}
		DESTROY_ACTORSET(&iLocal_4 + 976);
	}
	if (IS_ACTOR_VALID(&bLocal_1493))
	{
		uVar5 = Function_237(&bLocal_1493);
		if (IS_OBJECT_VALID(&uVar5))
		{
			Function_236(&uVar5);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 0);
			DESTROY_OBJECT(&uVar5);
		}
	}
	MEMORY_ALLOW_SHOOTING(&bLocal_1493, true);
	if (SQUAD_IS_VALID(&iLocal_4 + 784))
	{
		Function_234(&iLocal_4 + 784, 1, 0);
		DESTROY_OBJECT(&iLocal_4 + 784);
	}
	if (IS_ACTORSET_VALID(&uLocal_1253))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_1253))
		{
			bVar4 = GET_ACTOR_FROM_ACTORSET(&uLocal_1253, bVar0);
			if (IS_ACTOR_VALID(&bVar4))
			{
				RELEASE_ACTOR_AS_AMBIENT(&bVar4);
			}
			bVar0++;
		}
		DESTROY_ACTORSET(&uLocal_1253);
	}
	ACTOR_END_FORCE_HOLSTER(&Global_54076);
	Function_197(256);
	Function_233();
	Function_231();
	Function_199(1);
	return;
}

void Function_231() //Position: 0xB435 / 46133
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (IS_DOOR_VALID(&(Local_1267[iVar08])))
		{
			Function_232(&(Local_1267[iVar08]));
		}
		iVar0++;
	}
	return;
}

void Function_232(var uParam0) //Position: 0xB467 / 46183
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	return;
}

void Function_233() //Position: 0xB4C0 / 46272
{
	if (IS_DOOR_VALID(&uLocal_1750))
	{
		SET_DOOR_AUTO_CLOSE(&uLocal_1750, 1);
		SET_DOOR_LOCK(&uLocal_1750, 0);
	}
	if (IS_DOOR_VALID(&iLocal_1752))
	{
		SET_DOOR_AUTO_CLOSE(&iLocal_1752, 1);
		SET_DOOR_LOCK(&iLocal_1752, 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[08])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[08]), 1);
		SET_DOOR_LOCK(&(Local_1267[08]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[18])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[18]), 1);
		SET_DOOR_LOCK(&(Local_1267[18]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[28])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[28]), 1);
		SET_DOOR_LOCK(&(Local_1267[28]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[38])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[38]), 1);
		SET_DOOR_LOCK(&(Local_1267[38]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[48])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[48]), 1);
		SET_DOOR_LOCK(&(Local_1267[48]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[58])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[58]), 1);
		SET_DOOR_LOCK(&(Local_1267[58]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[68])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[68]), 1);
		SET_DOOR_LOCK(&(Local_1267[68]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[78])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[78]), 1);
		SET_DOOR_LOCK(&(Local_1267[78]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[88])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[88]), 1);
		SET_DOOR_LOCK(&(Local_1267[88]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[98])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[98]), 1);
		SET_DOOR_LOCK(&(Local_1267[98]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[128])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[128]), 1);
		SET_DOOR_LOCK(&(Local_1267[128]), 0);
	}
	if (IS_DOOR_VALID(&(Local_1267[138])))
	{
		SET_DOOR_AUTO_CLOSE(&(Local_1267[138]), 1);
		SET_DOOR_LOCK(&(Local_1267[138]), 0);
	}
	return;
}

void Function_234(var uParam0, bool bParam1, bool bParam2) //Position: 0xB6AA / 46762
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
				if (!Function_235(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB733 / 46899
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_236(var uParam0) //Position: 0xB753 / 46931
{
	var uVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(&uParam0, "water_bucket");
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = GET_GRINGO_FROM_OBJECT(&uVar0);
			if (IS_GRINGO_VALID(&iVar1))
			{
				GRINGO_DEACTIVATE(&iVar1);
			}
		}
	}
	return;
}

var Function_237(bool bParam0) //Position: 0xB79C / 47004
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&bParam0), "Water_Bucket_Ref"))
		{
			return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&bParam0), "Water_Bucket_Ref");
		}
	}
	LOG_ERROR("GET_WATER_BUCKET_IN_HAND: called with an invalid Actor");
	return "";
}

void Function_238(int iParam0) //Position: 0xB828 / 47144
{
	if (!DECOR_CHECK_EXIST(&fLocal_768, "Gringo1Assigned"))
	{
		TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2832), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &iLocal_4 + 2832, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2832, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(&fLocal_768, "Gringo1Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(&fLocal_768, "Gringo2Assigned"))
	{
		TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2840), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &iLocal_4 + 2840, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2840, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(&fLocal_768, "Gringo2Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(&fLocal_768, "Gringo3Assigned"))
	{
		TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2848), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &iLocal_4 + 2848, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2848, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(&fLocal_768, "Gringo3Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(&fLocal_768, "Gringo4Assigned"))
	{
		TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2856), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &iLocal_4 + 2856, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2856, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(&fLocal_768, "Gringo4Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(&fLocal_768, "Gringo5Assigned"))
	{
		TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2864), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &iLocal_4 + 2864, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2864, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(&fLocal_768, "Gringo5Assigned", true);
	}
	else if (!DECOR_CHECK_EXIST(&fLocal_768, "Gringo6Assigned"))
	{
		TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2872), "UseCase1", true, 1);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &iLocal_4 + 2872, "UseCase1", false, 0, 0);
		GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2872, GET_AMBIENT_LAYOUT());
		DECOR_SET_BOOL(&fLocal_768, "Gringo6Assigned", true);
	}
	return;
}

void Function_239(bool bParam0) //Position: 0xBB25 / 47909
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_237(&bParam0);
	if (IS_OBJECT_VALID(&uVar0))
	{
		Function_236(&uVar0);
		DESTROY_OBJECT(&uVar0);
		DECOR_REMOVE(&bParam0, "Water_Bucket_Ref");
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
	}
	iVar1 = GET_CURRENT_GRINGO(&bParam0);
	if (IS_GRINGO_VALID(&iVar1))
	{
		GRINGO_ALLOW_ACTIVATION(&iVar1, false);
	}
	return;
}

void Function_240(int iParam0, bool bParam1, bool bParam2) //Position: 0xBB83 / 48003
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
			(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
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
						Function_218(&uVar1);
					}
				}
				Function_241(&uVar0);
			}
		}
	}
	return;
}

void Function_241(bool bParam0) //Position: 0xBC92 / 48274
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

bool Function_242() //Position: 0xBCC5 / 48325
{
	if (IS_EXITFLAG_SET())
	{
		Function_625(iLocal_750);
		Function_621(StackVal, 4, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
		return 0;
	}
	Function_620(StackVal, StackVal, StackVal, StackVal, StackVal, Local_770, iLocal_750, iLocal_751, &uLocal_766, &bLocal_764, &bLocal_765);
	Function_616();
	if ((iLocal_750 == 99 && iLocal_750 == 100) && iLocal_750 == 102)
	{
		if (Function_615())
		{
			if (IS_ACTOR_DEAD(&Global_54076))
			{
				Function_625(iLocal_750);
				Function_621(StackVal, 1, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
				return 1;
			}
			if (Function_614(2048))
			{
				Function_625(iLocal_750);
				Function_621(StackVal, 3, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
				return 1;
			}
			if (Function_594(&Local_961, &uLocal_907, &uLocal_1203, &uLocal_1265, 0))
			{
				if (Function_585(&uLocal_1203))
				{
					Function_625(iLocal_750);
					Function_621(StackVal, 5, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
					return 1;
				}
			}
			if ((Global_6646 || Global_6647) || Function_583(&Global_54076, 25))
			{
				Function_625(iLocal_750);
				Function_621(StackVal, 2, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
				return 1;
			}
			if (Function_581())
			{
				Function_580("R4_Terrorize");
				Function_625(iLocal_750);
				Function_621(StackVal, 5, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
				return 1;
			}
			Function_579();
		}
	}
	switch (iLocal_750)
	{
		case 0x00000063:
			Function_555();
			break;
		
		case 0x00000000:
			Function_533();
			break;
		
		case 0x00000001:
			Function_498();
			break;
		
		case 0x00000002:
			Function_469();
			break;
		
		case 0x00000003:
			Function_329();
			break;
		
		case 0x00000065:
			Function_250();
			break;
		
		case 0x00000064:
			if (Function_249(&bLocal_765))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_248(&iLocal_750, &iLocal_751, &iLocal_752))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_764 && iLocal_750 == 102)
	{
		Function_247(&bLocal_764, 8);
		Function_1();
	}
	if (bLocal_765 && iLocal_750 == 100)
	{
		Function_625(iLocal_750);
		Function_621(StackVal, 5, &bLocal_765, &iLocal_750, Function_626(iLocal_750), Function_625(iLocal_750), 0);
	}
	if (uLocal_766 && iLocal_750 == 102)
	{
		Function_243(&uLocal_766, 4);
		Function_1();
	}
	return 1;
}

void Function_243(var uParam0, int iParam1) //Position: 0xBED3 / 48851
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(&iParam1);
	uParam0 = 1;
	return;
}

void Function_244(int iParam0) //Position: 0xBEF8 / 48888
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_580("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_246(2) || Function_246(8)) || Function_246(9)) || Function_246(10))
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
		Function_580("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_580("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_580("");
	}
	else if (iParam0 == 8)
	{
		Function_245();
		Function_10();
	}
	else if (iParam0 == 4)
	{
		Function_245();
	}
	return;
}

void Function_245() //Position: 0xBFEF / 49135
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_246(int iParam0) //Position: 0xC000 / 49152
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

void Function_247(var uParam0, int iParam1) //Position: 0xC036 / 49206
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_248(var uParam0, var uParam1, int iParam2) //Position: 0xC05B / 49243
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

bool Function_249(int iParam0) //Position: 0xC0A4 / 49316
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_250() //Position: 0xC0B8 / 49336
{
	switch (iLocal_751)
	{
		case 0x00000000:
			Function_325(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_324(&iLocal_4 + 1568[0]);
			iLocal_906 = Function_323(StackVal, Function_324(&iLocal_4 + 1568[0]), 0, 1, 1);
			if (!Function_322(iLocal_906))
			{
				Function_321(&Local_770);
			}
			if (!iLocal_1601[3])
			{
				iLocal_1755 = 1000;
				Function_320(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_319();
				Function_318(1);
			}
			else if (Function_317())
			{
				Function_318(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_322(iLocal_906) || iLocal_906 != 4294967295)) && Function_317())
			{
				Function_318(2);
			}
			break;
		
		case 0x00000002:
			Function_314();
			Function_318(3);
			break;
		
		case 0x00000003:
			if (Function_312())
			{
				if (Function_255("$/cutscene/R4_END/R4_END", &iLocal_752, &Local_770, &iLocal_750, 74579, 72968, 70501, 69596, 53609, 53561, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_252();
					Function_318(105);
				}
			}
			break;
		
		case 0x00000069:
			if (!HUD_IS_FADING())
			{
				if (HUD_IS_FADED())
				{
					Function_251(1.0f);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "sleeping"))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_318(106);
			}
			break;
		
		case 0x0000006A:
			bLocal_764 = true;
			break;
	}
	return;
}

void Function_251(bool bParam0) //Position: 0xC215 / 49685
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

void Function_252() //Position: 0xC232 / 49714
{
	if (!IS_ACTOR_VALID(&bLocal_1499))
	{
		Function_254();
		Function_253();
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "sleeping_wall_scripted"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
		SET_ANIM_SET_FOR_ACTOR(&Global_54076, "sleeping_wall_scripted", 0);
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "sleeping_wall_scripted/stand");
	}
	return;
}

bool Function_253() //Position: 0xC2BF / 49855
{
	struct<2> Var0;
	bool bVar2;
	
	if (IS_ACTOR_VALID(&bLocal_1497))
	{
		if (IS_ACTOR_VALID(&iLocal_4 + 688[02]))
		{
			GET_POSITION(&iLocal_4 + 688[02], &Var0);
			bVar2 = GET_HEADING(&iLocal_4 + 688[02]);
			DESTROY_ACTOR(&iLocal_4 + 688[02]);
			TELEPORT_ACTOR_WITH_HEADING(&bLocal_1497, Var0, bVar2, 1, 1, true);
			TASK_STAND_STILL(&bLocal_1497, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1497, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1497, 1);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_1499))
	{
		bLocal_1499 = &iLocal_4 + 688[12];
		TASK_STAND_STILL(&bLocal_1499, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&bLocal_1499, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1499, 1);
	}
	if (!IS_ACTOR_VALID(&uLocal_1501))
	{
		uLocal_1501 = &iLocal_4 + 688[22];
		TASK_STAND_STILL(&uLocal_1501, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&uLocal_1501, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uLocal_1501, 1);
	}
	if (!IS_ACTOR_VALID(&bLocal_1497))
	{
		return 0;
		LOG_ERROR("ERROR: m_aPlayerHorse is invalid in CacheHorses!");
	}
	else if (!IS_ACTOR_VALID(&bLocal_1499))
	{
		return 0;
		LOG_ERROR("ERROR: m_aCompanionHorse is invalid in CacheHorses!");
	}
	else if (!IS_ACTOR_VALID(&uLocal_1501))
	{
		return 0;
		LOG_ERROR("ERROR: m_aRancherHorse is invalid in CacheHorses!");
	}
	return 1;
}

void Function_254() //Position: 0xC468 / 50280
{
	*(&iLocal_4 + 688[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 980, Vector(-831,2986f, 92,16936f, 2401,908f), Vector(0.0f, 39,10776f, 0.0f));
	ACCESSORIZE_HORSE(&iLocal_4 + 688[02], 3);
	TASK_STAND_STILL(&iLocal_4 + 688[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 688[02], true);
	*(&iLocal_4 + 688[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 981, Vector(-833,4547f, 92,16949f, 2402,206f), Vector(0.0f, -11,70247f, 0.0f));
	ACCESSORIZE_HORSE(&iLocal_4 + 688[12], 3);
	TASK_STAND_STILL(&iLocal_4 + 688[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 688[12], true);
	*(&iLocal_4 + 688[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 976, Vector(-1039,087f, 99,65253f, 2948.0f), Vector(0.0f, 188,754f, 0.0f));
	SET_ACTOR_RIDEABLE(&iLocal_4 + 688[22], 0);
	ACCESSORIZE_HORSE(&iLocal_4 + 688[22], 3);
	TASK_STAND_STILL(&iLocal_4 + 688[22], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 688[22], true);
	return;
}

bool Function_255(int iParam0, int iParam1, struct<41> Param2) //Position: 0xC580 / 50560
{
	if (!&bParam15)
	{
		Function_266(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_265(&Param2) || Param2.f_40 < 1))
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
				Function_227(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_264())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_263(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(&iParam1 + 4);
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
					Function_263(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_261(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_261(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_259(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_263(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(&iParam1 + 4);
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
						Function_251(1.0f);
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
						Function_257();
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
					Function_256(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_265(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_256(var uParam0, bool bParam1) //Position: 0xCBE2 / 52194
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
		Function_202();
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

void Function_257() //Position: 0xCCB1 / 52401
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_258();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_258() //Position: 0xCCF6 / 52470
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_259(var uParam0, int iParam1) //Position: 0xCD08 / 52488
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
			if ((&iVar3 == &Global_54076 && !Function_260(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_260(int iParam0) //Position: 0xCD9A / 52634
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

float Function_261(vector3 vParam0) //Position: 0xCDCB / 52683
{
	if (Function_229(&vParam0))
	{
		if (Function_262(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_262(int iParam0) //Position: 0xCE98 / 52888
{
	return Function_15(iParam0, 2);
}

int Function_263(bool bParam0) //Position: 0xCEA6 / 52902
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

bool Function_264() //Position: 0xCF69 / 53097
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

bool Function_265(struct<37> Param0) //Position: 0xCFA6 / 53158
{
	return Param0.f_36;
}

void Function_266(var uParam0, int iParam1) //Position: 0xCFB1 / 53169
{
	Function_267(&uParam0, &iParam1, 0);
	return;
}

void Function_267(var uParam0, bool bParam1, var uParam2) //Position: 0xCFC1 / 53185
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
			Function_320(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						if (!IS_STRING_VALID(&uParam2))
						{
							Function_320(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_268() //Position: 0xD139 / 53561
{
	switch (iLocal_750)
	{
		case 0x00000063:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

int Function_269() //Position: 0xD169 / 53609
{
	switch (iLocal_750)
	{
		case 0x00000063:
			Function_282(1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
			Function_274();
			iLocal_750 = 0;
			iLocal_751 = 2;
			Function_271(&Local_770, &iLocal_750, &iLocal_751);
			Function_270(StackVal, StackVal, StackVal, StackVal, StackVal, Local_770);
			return 1;
			break;
		
		case 0x00000001:
			Function_282(1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			RESET_RMPTFX_IN_VOLUME(&iLocal_4 + 1056[0]);
			RESET_RMPTFX_IN_VOLUME(&iLocal_4 + 1392[1]);
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "sleeping_wall_scripted"))
			{
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "sleeping_wall_scripted", 0);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "sleeping_wall_scripted/stand");
			}
			DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1764, 1);
			DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1766, 1);
			Function_282(1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
			GET_OBJECT_POSITION(&iLocal_4 + 1568[4], &Local_1729);
			ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 6, 1, 1, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_270(struct<41> Param0) //Position: 0xD29C / 53916
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_750 = 0;
			break;
		
		case 0x00000002:
			iLocal_750 = 1;
			break;
		
		case 0x00000003:
			iLocal_750 = 101;
			break;
	}
}

void Function_271(int iParam0, int iParam1, int iParam2) //Position: 0xD2D5 / 53973
{
	if (Function_265(&iParam0))
	{
		iParam1 = Function_273(&iParam0);
		if (iParam1 == 4294967295)
		{
			iParam1 = 0;
		}
		if (iParam1 == 99)
		{
			iParam1 = 0;
			iParam2 = 0;
		}
		Function_272();
	}
	return;
}

void Function_272() //Position: 0xD311 / 54033
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

int Function_273(int iParam0) //Position: 0xD362 / 54114
{
	if (Function_265(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_274() //Position: 0xD37B / 54139
{
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		Function_280();
	}
	Function_224(Global_46816[0], 1);
	Function_279("MINI_GAMES_AND_JOBS\\RANCH04");
	if (IS_LAYOUTREF_VALID(&iLocal_4))
	{
		uLocal_1259 = CREATE_OBJECT_ITERATOR(&iLocal_4);
		uLocal_1261 = CREATE_OBJECT_ITERATOR(&iLocal_4);
		uLocal_1263 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	}
	Function_278(&bLocal_1493, 1);
	Function_240(3, 0, 1);
	SET_CRIPPLE_ENABLE(&bLocal_1493, 0);
	SET_ACTOR_FACTION(&bLocal_1493, 20);
	TASK_PRIORITY_SET(&bLocal_1493, true);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_1493, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1493, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1493, true);
	SET_ACTOR_MAX_HEALTH(&bLocal_1493, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_1493, GET_ACTOR_MAX_HEALTH(&bLocal_1493));
	if (!IS_ACTOR_VALID(&iLocal_4 + 688[12]))
	{
		Function_254();
		Function_253();
	}
	uLocal_1255 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "TownfolkSet", 0);
	Function_276(&uLocal_907, &fLocal_768);
	uLocal_1265 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	Function_227(&iLocal_1541);
	Function_275(&fLocal_1545);
	Function_275(&iLocal_1549);
	Function_275(&iLocal_1553);
	Function_275(&iLocal_1561);
	return;
}

void Function_275(int iParam0) //Position: 0xD49F / 54431
{
	if (!Function_229(&iParam0))
	{
		Function_228(&iParam0, 0.0f);
	}
	return;
}

int Function_276(struct<2>[] Param0) //Position: 0xD4B6 / 54454
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_277(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_277(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_277(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_277(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_277(struct<13> Param0) //Position: 0xDB8F / 56207
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

bool Function_278(var uParam0, bool bParam1) //Position: 0xDC5E / 56414
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		return 1;
	}
	if (&bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

int Function_279(int iParam0) //Position: 0xDCA1 / 56481
{
	if (REQUEST_MISSION_AUDIO_BANK(&iParam0))
	{
		return 1;
	}
	return 0;
}

struct<8> Function_280() //Position: 0xDCB3 / 56499
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Ranch04_layout");
	*(&iLocal_4 + 1024) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 984[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-840,0001f, 91,77865f, 2401,022f), Vector(0.0f, 29,95155f, 0.0f), Vector(18,97917f, 7,683942f, 16,65859f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1024, &iLocal_4 + 984[0]);
	*(&iLocal_4 + 984[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1060f, 102,4f, 2956.0f), Vector(0.0f, 11,06756f, 0.0f), Vector(59,42543f, 13,39398f, 63,8956f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1024, &iLocal_4 + 984[1]);
	*(&iLocal_4 + 984[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-849,09f, 92,0815f, 2449,202f), Vector(-3,788235f, 22,07147f, -0,6432894f), Vector(5,939722f, 3,598746f, 5,939722f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1024, &iLocal_4 + 984[2]);
	*(&iLocal_4 + 984[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-868,0001f, 90,35291f, 2460.0f), Vector(0.0f, -66,68871f, 0.0f), Vector(11,01241f, 3,505231f, 9,963429f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1024, &iLocal_4 + 984[3]);
	*(&iLocal_4 + 1048) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1032[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1082,933f, 98,86334f, 2837,242f), Vector(0.0f, 155,4373f, 0.0f), Vector(163,0743f, 16,52561f, 49,50444f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 1032[0]);
	*(&iLocal_4 + 1232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1056[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,7969f, 97,18204f, 2461,04f), Vector(0.0f, 20,88082f, 0.0f), Vector(20,38587f, 22,65216f, 27,45885f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[0]);
	*(&iLocal_4 + 1056[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-846,7736f, 91,53082f, 2454,9f), Vector(0.0f, 19,52647f, 0.0f), Vector(15,12309f, 5,128766f, 2,109168f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[1]);
	*(&iLocal_4 + 1056[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,2581f, 99,38801f, 2461,247f), Vector(0.0f, 20,27505f, 0.0f), Vector(9,145086f, 0,6642481f, 20,36151f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[2]);
	*(&iLocal_4 + 1056[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,6978f, 88,75982f, 2460,802f), Vector(0.0f, 20,91257f, 0.0f), Vector(14,37202f, 9,369125f, 21,53829f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[3]);
	*(&iLocal_4 + 1056[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-846,2655f, 103,1422f, 2454,726f), Vector(0.0f, 19,62343f, 0.0f), Vector(94,64799f, 30,33995f, 115,8557f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[4]);
	*(&iLocal_4 + 1056[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-847,7042f, 90,33842f, 2452,276f), Vector(0.0f, 19,52647f, 0.0f), Vector(5,562357f, 3,557329f, 2,109168f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[5]);
	*(&iLocal_4 + 1056[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-847,4207f, 90,35291f, 2452,733f), Vector(0.0f, 19,52647f, 0.0f), Vector(3,948912f, 5,128766f, 3,01898f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[6]);
	*(&iLocal_4 + 1056[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,1649f, 88,75982f, 2461,733f), Vector(0.0f, 20,06541f, 0.0f), Vector(18,05242f, 9,369125f, 28,258f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[7]);
	*(&iLocal_4 + 1056[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-857,9287f, 90,35294f, 2432,845f), Vector(0.0f, 38,41717f, 0.0f), Vector(8,322055f, 9,369125f, 14,3591f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[8]);
	*(&iLocal_4 + 1056[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,3201f, 87,80589f, 2461,79f), Vector(0.0f, 20,91257f, 0.0f), Vector(52,97617f, 9,369125f, 65,83092f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[9]);
	*(&iLocal_4 + 1056[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-846,4194f, 97,18204f, 2456,787f), Vector(0.0f, 20,88082f, 0.0f), Vector(38,73798f, 14,17926f, 49,21365f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[10]);
	*(&iLocal_4 + 1056[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-834,0547f, 99,65075f, 2452,837f), Vector(0.0f, 19,20418f, 0.0f), Vector(7,111082f, 8,009157f, 6,30303f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[11]);
	*(&iLocal_4 + 1056[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-856,6164f, 90,35293f, 2442,017f), Vector(0.0f, 19,20418f, 0.0f), Vector(9,013056f, 8,009157f, 9,881026f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[12]);
	*(&iLocal_4 + 1056[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-877,9052f, 90,35291f, 2465,905f), Vector(0.0f, 19,20418f, 0.0f), Vector(11,04193f, 8,009157f, 12,02781f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[13]);
	*(&iLocal_4 + 1056[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,7135f, 100,7832f, 2461,265f), Vector(0.0f, 20,28269f, 0.0f), Vector(3,377036f, 3,87675f, 21,14162f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[14]);
	*(&iLocal_4 + 1056[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-840,6027f, 100,7832f, 2472,389f), Vector(0.0f, 20,28269f, 0.0f), Vector(3,941629f, 3,87675f, 1,69382f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[15]);
	*(&iLocal_4 + 1056[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-848,7437f, 99,42709f, 2450,36f), Vector(0.0f, 20,28269f, 0.0f), Vector(12,10482f, 6,962595f, 1,69382f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[16]);
	*(&iLocal_4 + 1056[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-852,425f, 90,36543f, 2440,399f), Vector(0.0f, 20,28269f, 0.0f), Vector(15,09021f, 11,78686f, 21,95227f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[17]);
	*(&iLocal_4 + 1056[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1014,164f, 95,34083f, 2485,088f), Vector(0.0f, 30,13155f, 0.0f), Vector(127,9393f, 51,05502f, 46,47771f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[18]);
	*(&iLocal_4 + 1056[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-852,6032f, 96,0407f, 2453,973f), Vector(0.0f, 20,28269f, 0.0f), Vector(3,377036f, 3,87675f, 1,735514f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[19]);
	*(&iLocal_4 + 1056[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-842,9047f, 96,0407f, 2450,478f), Vector(0.0f, 20,28269f, 0.0f), Vector(3,377036f, 3,87675f, 2,164295f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1056[20]);
	*(&iLocal_4 + 1264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-844,5654f, 91,05907f, 2447,269f), Vector(0.0f, 20,621f, 0.0f), Vector(3,841846f, 1,588997f, 1,819975f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1264, &iLocal_4 + 1240[0]);
	*(&iLocal_4 + 1240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-861,7427f, 91,0611f, 2442,107f), Vector(0.0f, 110,8367f, 0.0f), Vector(3,87577f, 1,588997f, 1,944277f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1264, &iLocal_4 + 1240[1]);
	*(&iLocal_4 + 1320) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-833,7753f, 98,09772f, 2455,244f), Vector(0.0f, 22,33667f, 0.0f), Vector(1,579766f, 3,01659f, 1,522305f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1320, &iLocal_4 + 1272[0]);
	*(&iLocal_4 + 1272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-837,8536f, 98,09772f, 2452,103f), Vector(0.0f, 22,33667f, 0.0f), Vector(1,579766f, 3,01659f, 1,798744f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1320, &iLocal_4 + 1272[1]);
	*(&iLocal_4 + 1272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-836,3521f, 101,0065f, 2462,078f), Vector(0.0f, 379,2026f, 0.0f), Vector(2,77975f, 3,773976f, 16,13363f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1320, &iLocal_4 + 1272[2]);
	*(&iLocal_4 + 1272[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-840,7031f, 100,6629f, 2471,332f), Vector(0.0f, 380,0608f, 0.0f), Vector(3,465504f, 3,01659f, 1,557959f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1320, &iLocal_4 + 1272[3]);
	*(&iLocal_4 + 1272[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-831,9965f, 91,65659f, 2460,813f), Vector(0.0f, 20,00396f, 0.0f), Vector(3,422678f, 6,734645f, 3,773458f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1320, &iLocal_4 + 1272[4]);
	*(&iLocal_4 + 1352) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1328[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1054,241f, 101,1929f, 2939,021f), Vector(0.0f, 11,46583f, 0.0f), Vector(21,68541f, 11,35669f, 25,55255f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1352, &iLocal_4 + 1328[0]);
	*(&iLocal_4 + 1328[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1040,459f, 99,95853f, 2949,018f), Vector(0.0f, 42,0482f, 0.0f), Vector(15,65793f, 11,35669f, 8,606989f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1352, &iLocal_4 + 1328[1]);
	*(&iLocal_4 + 1360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 4,203895E-45f, Vector(-875,9514f, 90,35291f, 2463,076f), Vector(0.0f, 16,20483f, 0.0f), Vector(19,27607f, 4,595464f, 25,90217f));
	*(&iLocal_4 + 1368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-867,2538f, 93,65993f, 2414,17f), Vector(0.0f, 25,87298f, 0.0f), Vector(11,9069f, 7,15539f, 46,72555f));
	*(&iLocal_4 + 1376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-833,802f, 100,1178f, 2455,863f), Vector(0.0f, 9,84344f, 0.0f), Vector(1,810452f, 2,025067f, 1,398063f));
	*(&iLocal_4 + 1384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-832,7964f, 92,16888f, 2401,659f), Vector(0.0f, -13,01326f, 0.0f), Vector(5,345061f, 7,913154f, 3,612509f));
	*(&iLocal_4 + 1416) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1392[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-848,9321f, 90,35294f, 2449,258f), Vector(0.0f, 19,20418f, 0.0f), Vector(17,70996f, 14,67231f, 4,860499f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1416, &iLocal_4 + 1392[0]);
	*(&iLocal_4 + 1392[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-834,0547f, 95,61146f, 2452,837f), Vector(0.0f, 19,20418f, 0.0f), Vector(7,111082f, 22,13903f, 4,860499f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1416, &iLocal_4 + 1392[1]);
	*(&iLocal_4 + 1424) = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1432[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-846,4565f, 91,75424f, 2391,903f), Vector(0.0f, 297,0965f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[0], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-842,4937f, 91,85876f, 2397,184f), Vector(0.0f, -152,0323f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[1], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-786,5624f, 93,65433f, 2409,578f), Vector(0.0f, 118,3325f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[2], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-840,9326f, 91,73472f, 2397,532f), Vector(0.0f, 210,8838f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[3], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-831,2986f, 92,16936f, 2401,908f), Vector(0.0f, 39,10736f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[4], &iLocal_4 + 1424);
	*(&iLocal_4 + 1432[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-833,4376f, 92,16949f, 2402,326f), Vector(0.0f, -8,830705f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1432[5], &iLocal_4 + 1424);
	*(&iLocal_4 + 1488) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1496[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1051,624f, 101,142f, 2932.0f), Vector(0,3356294f, -7,044894f, -1,069509f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[0], &iLocal_4 + 1488);
	*(&iLocal_4 + 1496[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1054,167f, 100,936f, 2936.0f), Vector(0.0f, -203,0249f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[1], &iLocal_4 + 1488);
	*(&iLocal_4 + 1496[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1054,941f, 101,1009f, 2932.0f), Vector(0.0f, -13,02146f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[2], &iLocal_4 + 1488);
	*(&iLocal_4 + 1496[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1056f, 101,2422f, 2934,179f), Vector(0.0f, -174,4378f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[3], &iLocal_4 + 1488);
	*(&iLocal_4 + 1496[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1041,466f, 99,60522f, 2949,466f), Vector(0.0f, -89,46281f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[4], &iLocal_4 + 1488);
	*(&iLocal_4 + 1496[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1049,152f, 100,35f, 2936,3f), Vector(0.0f, 306,4692f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[5], &iLocal_4 + 1488);
	*(&iLocal_4 + 1496[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1050,913f, 100,3922f, 2941,087f), Vector(0.0f, -181,5525f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1496[6], &iLocal_4 + 1488);
	*(&iLocal_4 + 1560) = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1568[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-853,3132f, 90,35294f, 2441,313f), Vector(0.0f, -138,9987f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[0], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-865,9961f, 90,35415f, 2462,015f), Vector(2,02595f, -612,1258f, 1,74717f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[1], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-849,0131f, 90,35291f, 2444.0f), Vector(0.0f, -184,1187f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[2], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-862,7532f, 90,35291f, 2456.0f), Vector(-1,528039f, 365,5194f, -0,4633116f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[3], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-863,4668f, 90,27599f, 2452,955f), Vector(-1,528039f, 365,5194f, -0,4633116f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[4], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-877,9283f, 90,35291f, 2444.0f), Vector(0.0f, -138,9987f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[5], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-865,8915f, 90,35291f, 2433,891f), Vector(0.0f, -138,9987f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[6], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-866,7996f, 90,35291f, 2462,8f), Vector(-177,883f, -287,0818f, -178,1574f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[7], &iLocal_4 + 1560);
	*(&iLocal_4 + 1568[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-870,8661f, 90,35291f, 2464.0f), Vector(-177,883f, -287,0818f, -178,1574f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1568[8], &iLocal_4 + 1560);
	*(&iLocal_4 + 1648) = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1656[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-847,0391f, 90,34687f, 2436,798f), Vector(0.0f, 166,7697f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[0], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-845,3018f, 90,34687f, 2437,206f), Vector(0.0f, 166,7697f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[1], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-843,1362f, 90,34687f, 2437,716f), Vector(0.0f, 166,7697f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[2], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-834,3173f, 93,33109f, 2429,672f), Vector(0.0f, 189,4806f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[3], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-833,111f, 93,33109f, 2429,47f), Vector(0.0f, 189,4806f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[4], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-835,7891f, 93,33109f, 2429,918f), Vector(0.0f, 189,4806f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[5], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-853,7235f, 90,35291f, 2445,145f), Vector(0.0f, 367,1243f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[6], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-854,5417f, 90,35291f, 2445,247f), Vector(0.0f, 367,1243f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[7], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-855,6626f, 90,35291f, 2445,387f), Vector(0.0f, 367,1243f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[8], &iLocal_4 + 1648);
	*(&iLocal_4 + 1736[03]) = Vector(-1060f, 129,2347f, 2944f);
	*(&iLocal_4 + 1736[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1768) = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1776[03]) = Vector(-844.0f, 90,35291f, 2432.0f);
	*(&iLocal_4 + 1776[03] + 12) = Vector(0.0f, 294,9588f, 0.0f);
	*(&iLocal_4 + 1880[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-844.0f, 90,35291f, 2432.0f), Vector(0.0f, 294,9588f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[0], &iLocal_4 + 1768);
	*(&iLocal_4 + 1776[13]) = Vector(-861,614f, 90,35291f, 2442,449f);
	*(&iLocal_4 + 1776[13] + 12) = Vector(0.0f, -251,0271f, 0.0f);
	*(&iLocal_4 + 1880[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-861,614f, 90,35291f, 2442,449f), Vector(0.0f, -251,0271f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[1], &iLocal_4 + 1768);
	*(&iLocal_4 + 1776[23]) = Vector(-839,4609f, 90,35291f, 2437,997f);
	*(&iLocal_4 + 1776[23] + 12) = Vector(0.0f, -392,158f, 0.0f);
	*(&iLocal_4 + 1880[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-839,4609f, 90,35291f, 2437,997f), Vector(0.0f, -392,158f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[2], &iLocal_4 + 1768);
	*(&iLocal_4 + 1776[33]) = Vector(-860,0001f, 90,35291f, 2447,594f);
	*(&iLocal_4 + 1776[33] + 12) = Vector(0.0f, -248,5233f, 0.0f);
	*(&iLocal_4 + 1880[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-860,0001f, 90,35291f, 2447,594f), Vector(0.0f, -248,5233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[3], &iLocal_4 + 1768);
	*(&iLocal_4 + 1920) = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1928[03]) = Vector(-840,3335f, 90,36573f, 2445,274f);
	*(&iLocal_4 + 1928[03] + 12) = Vector(0.0f, 154,7023f, 0.0f);
	*(&iLocal_4 + 2104[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-840,3335f, 90,36573f, 2445,274f), Vector(0.0f, 154,7023f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[0], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[13]) = Vector(-852,622f, 90,36573f, 2448,303f);
	*(&iLocal_4 + 1928[13] + 12) = Vector(0.0f, -172,2545f, 0.0f);
	*(&iLocal_4 + 2104[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-852,622f, 90,36573f, 2448,303f), Vector(0.0f, -172,2545f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[1], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[23]) = Vector(-832,5033f, 90,35291f, 2449,442f);
	*(&iLocal_4 + 1928[23] + 12) = Vector(0.0f, 151,1434f, 0.0f);
	*(&iLocal_4 + 2104[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-832,5033f, 90,35291f, 2449,442f), Vector(0.0f, 151,1434f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[2], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[33]) = Vector(-836,1396f, 90,35291f, 2449,918f);
	*(&iLocal_4 + 1928[33] + 12) = Vector(0.0f, 132,1111f, 0.0f);
	*(&iLocal_4 + 2104[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-836,1396f, 90,35291f, 2449,918f), Vector(0.0f, 132,1111f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[3], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[43]) = Vector(-855,3555f, 90,35297f, 2449,352f);
	*(&iLocal_4 + 1928[43] + 12) = Vector(0.0f, -148,6818f, 0.0f);
	*(&iLocal_4 + 2104[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-855,3555f, 90,35297f, 2449,352f), Vector(0.0f, -148,6818f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[4], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[53]) = Vector(-857,4431f, 90,35294f, 2450,453f);
	*(&iLocal_4 + 1928[53] + 12) = Vector(0.0f, -138,5948f, 0.0f);
	*(&iLocal_4 + 2104[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-857,4431f, 90,35294f, 2450,453f), Vector(0.0f, -138,5948f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[5], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[63]) = Vector(-834,4537f, 90,35297f, 2448,843f);
	*(&iLocal_4 + 1928[63] + 12) = Vector(0.0f, -166,8252f, 0.0f);
	*(&iLocal_4 + 2104[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-834,4537f, 90,35297f, 2448,843f), Vector(0.0f, -166,8252f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[6], &iLocal_4 + 1920);
	*(&iLocal_4 + 2168[03]) = Vector(-872,0001f, 91,35687f, 2412.0f);
	*(&iLocal_4 + 2168[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2168[13]) = Vector(-868,0001f, 91,35687f, 2420.0f);
	*(&iLocal_4 + 2168[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2168[23]) = Vector(-872,0001f, 90,35291f, 2416.0f);
	*(&iLocal_4 + 2168[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2168[33]) = Vector(-872,0001f, 90,35291f, 2420.0f);
	*(&iLocal_4 + 2168[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2168[43]) = Vector(-868,0001f, 91,35687f, 2416.0f);
	*(&iLocal_4 + 2168[43] + 12) = Vector(-1,147429f, 49,99981f, -0,6855208f);
	*(&iLocal_4 + 2296) = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2304[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1048,882f, 100,3922f, 2943,117f), Vector(0.0f, -511,6318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[0], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-893,4461f, 91,35687f, 2389,446f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[1], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-833,6854f, 90,35291f, 2456,833f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[2], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-920,5992f, 90,10291f, 2430,325f), Vector(0.0f, -73,01686f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[3], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-919,965f, 90,10291f, 2432,403f), Vector(0.0f, 290,5472f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[4], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-841,7065f, 99,1981f, 2469,436f), Vector(0.0f, 19,2469f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[5], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-849,2855f, 90,35291f, 2442,161f), Vector(0.0f, 191,2244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[6], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-858,6696f, 90,35292f, 2429,263f), Vector(0.0f, 207,8563f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[7], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-849,5998f, 90,35291f, 2446,312f), Vector(0.0f, -155,8123f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[8], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-877,9294f, 90,35291f, 2465,929f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[9], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-844,661f, 93,845f, 2460,781f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[10], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-862,8054f, 90,35292f, 2441,148f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[11], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-873,8206f, 90,35291f, 2440.0f), Vector(0.0f, 9,41f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[12], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-860,1682f, 90,35291f, 2432,934f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[13], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-896,0001f, 91,35687f, 2409,977f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[14], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-847,7042f, 90,33842f, 2452,276f), Vector(0.0f, 23,02821f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[15], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-771,2733f, 92,32534f, 2443,273f), Vector(0.0f, 207,8563f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[16], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-874,3376f, 90,35291f, 2440.0f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[17], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-872,897f, 90,35291f, 2440,897f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[18], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-874,4467f, 90,35291f, 2437,01f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[19], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-843,7407f, 94,82363f, 2449,305f), Vector(0.0f, -250,8951f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[20], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-852,9865f, 94,82363f, 2452,651f), Vector(0.0f, -249,9921f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[21], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-782,3542f, 94,77856f, 2404f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[22], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-869,3372f, 90,35291f, 2440.0f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[23], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-874,5151f, 90,35291f, 2434,515f), Vector(0.0f, -95,91371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[24], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-844,0417f, 90,35291f, 2445,749f), Vector(0.0f, 3,000175f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[25], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[26]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-846,9248f, 90,35291f, 2444.0f), Vector(0.0f, 158,7466f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[26], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[27]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-854,823f, 90,35294f, 2429,109f), Vector(0.0f, 196,0146f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[27], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[28]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-853,3132f, 90,35294f, 2441,313f), Vector(0.0f, -138,9987f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[28], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[29]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-848,2489f, 90,36541f, 2450,943f), Vector(0.0f, -511,6318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[29], &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[30]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-843,6718f, 91,53012f, 2466,672f), Vector(0.0f, -511,6318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2304[30], &iLocal_4 + 2296);
	*(&iLocal_4 + 2560[03]) = Vector(-1049,284f, 100,3922f, 2945,432f);
	*(&iLocal_4 + 2560[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2560[13]) = Vector(-1049,483f, 100,3922f, 2944f);
	*(&iLocal_4 + 2560[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2560[23]) = Vector(-1047,135f, 100,3922f, 2943,295f);
	*(&iLocal_4 + 2560[23] + 12) = Vector(0.0f, 51,99503f, 0.0f);
	*(&iLocal_4 + 2560[33]) = Vector(-1058,636f, 101,3961f, 2949,364f);
	*(&iLocal_4 + 2560[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2560[43]) = Vector(-1049,005f, 100,3922f, 2942,994f);
	*(&iLocal_4 + 2560[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2560[53]) = Vector(-1057,817f, 101,3961f, 2950,183f);
	*(&iLocal_4 + 2560[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2560[63]) = Vector(-1045,736f, 100,3922f, 2942,934f);
	*(&iLocal_4 + 2560[63] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2560[73]) = Vector(-1046,972f, 100,3922f, 2941,436f);
	*(&iLocal_4 + 2560[73] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "slap_horse", Vector(-839,4178f, 90,35291f, 2462,25f), Vector(0.0f, 72,34879f, 0.0f));
	*(&iLocal_4 + 2768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "slap_horse", Vector(-847,7797f, 90,35291f, 2464,783f), Vector(0.0f, -36,1049f, 0.0f));
	*(&iLocal_4 + 2776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "slap_horse", Vector(-846,0933f, 90,35291f, 2469,615f), Vector(0.0f, -51,91314f, 0.0f));
	*(&iLocal_4 + 2784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "pull_pitchfork", Vector(-847,4985f, 90,35291f, 2452,226f), Vector(0.0f, 16,93074f, 0.0f));
	*(&iLocal_4 + 2792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "body_left_for_dead_gped_mourn", Vector(-1049,237f, 100,3922f, 2944f), Vector(0.0f, -164,2686f, 0.0f));
	*(&iLocal_4 + 2800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "Sit_Ground_Only", Vector(-1049,503f, 100,3922f, 2938,496f), Vector(0.0f, 183,6294f, 0.0f));
	*(&iLocal_4 + 2808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "body_left_for_dead_gped_mourn", Vector(-1049,284f, 100,3922f, 2945,451f), Vector(0.0f, -18,44855f, 0.0f));
	*(&iLocal_4 + 2816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "stand_chop_door", Vector(-847,8162f, 90,35292f, 2450,866f), Vector(0.0f, -157,1056f, 0.0f));
	*(&iLocal_4 + 2824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "panic_female", Vector(-846,9248f, 90,35291f, 2444.0f), Vector(0.0f, 174,2887f, 0.0f));
	*(&iLocal_4 + 2832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "ranch04_reflect", Vector(-854,3045f, 90,35295f, 2438,304f), Vector(0.0f, -157,0918f, 0.0f));
	*(&iLocal_4 + 2840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "ranch04_reflect", Vector(-841,519f, 90,3654f, 2441,589f), Vector(0.0f, -197,8333f, 0.0f));
	*(&iLocal_4 + 2848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "ranch04_reflect", Vector(-857,0461f, 90,36545f, 2445,046f), Vector(0.0f, -132,9674f, 0.0f));
	*(&iLocal_4 + 2856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "ranch04_reflect", Vector(-845,9275f, 90,35291f, 2437,949f), Vector(0.0f, -175,2087f, 0.0f));
	*(&iLocal_4 + 2864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "ranch04_reflect", Vector(-862,5084f, 90,35291f, 2434,508f), Vector(0.0f, -137,1926f, 0.0f));
	*(&iLocal_4 + 2872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "ranch04_reflect", Vector(-854,4614f, 90,35295f, 2428.0f), Vector(0.0f, -151,6507f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 2880) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
	PushArrayP();
	*(&iLocal_4 + 2888) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
	PushArrayP();
	*(&iLocal_4 + 2896) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
	PushArrayP();
	*(&iLocal_4 + 2904) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
}

int ÄQ¹B·åE±ÄQîB¸¹EÎÄQ]ºB¸ÀE¡ÄQ(B¸#E#WÄPóìB¸6#E$ÂÄPB¸MÂE$Æ,G´:B°:¯R'p  8ÄDµBÈÈÈE7À ÄBØBÈÈÈE7»mÄA®BÈÈ(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, float fParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x10B0F / 68367
{
	int iVar50235;
	
	return 7;
	return StackVal * 14264 - 21950 * 14251;
	return 4.0f;
	fParam21 = StackVal + 197 - 14136 * 14247;
	stradd(StackVal - 14136 * 14243, StackVal, 196);
	return StackVal;
}

void Function_282(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x10EF8 / 69368
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
		Function_283();
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
	Function_256(&iParam9, &bParam10);
}

void Function_283() //Position: 0x10FC7 / 69575
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_284() //Position: 0x10FDC / 69596
{
	bool bVar0;
	
	switch (iLocal_750)
	{
		case 0x00000063:
			TASK_FOLLOW_PATH(&bLocal_1493, &iLocal_4 + 2952, 1, 0, 0, 1, false);
			ACTOR_POP_NEXT_GAIT(&bLocal_1493, 1, 0);
			TASK_CLEAR(&Global_54076);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			return 1;
			break;
		
		case 0x00000001:
			Function_285(&bLocal_1497, &iLocal_4 + 1496[1], 1, 1, 1);
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1497);
			Function_285(&bLocal_1499, &iLocal_4 + 1496[3], 1, 1, 1);
			ACTOR_MOUNT_ACTOR(&bLocal_1493, &bLocal_1499);
			Function_285(&bLocal_1495, &iLocal_4 + 1496[6], 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_239(&bLocal_1493);
			Function_285(&Global_54076, &iLocal_4 + 1568[1], 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_1509))
			{
				Function_285(&bLocal_1509, &iLocal_4 + 2304[9], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1725))
			{
				Function_285(&bLocal_1725, &iLocal_4 + 2304[9], 1, 1, 1);
				bLocal_1725 = "";
			}
			if (IS_ACTORSET_VALID(&iLocal_4 + 976))
			{
				bLocal_1727 = false;
				while (bLocal_1727 <= GET_ACTORSET_SIZE(&iLocal_4 + 976))
				{
					bVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_4 + 976, bLocal_1727);
					if (IS_ACTOR_VALID(&bVar0))
					{
						SET_ACTOR_STREAMING_HIGH_PRIORITY(&bVar0, 0);
						Function_239(&bVar0);
						SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar0, 0);
						if (IS_ACTOR_RIDING(&bVar0))
						{
							ACTOR_DISMOUNT_NOW(&bVar0);
						}
						RESET_ANIM_SET_FOR_ACTOR(&bVar0, 0);
						TASK_CLEAR(&bVar0);
						if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bVar0)))
						{
							GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&bVar0));
						}
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar0, 64, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar0, 65, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar0, 66, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar0, 67, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar0, 68, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar0, 46, 1);
						SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar0, 1);
						GIVE_OBJECT_TO_LAYOUT(&bVar0, GET_AMBIENT_LAYOUT());
					}
					bLocal_1727++;
				}
				DESTROY_ACTORSET(&iLocal_4 + 976);
			}
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "sleeping_wall_scripted", 0);
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "sleeping_wall_scripted/stand");
			Function_217(3, 1, 0, 1, 1);
			GET_OBJECT_POSITION(&iLocal_4 + 1568[4], &Local_1729);
			ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 6, 1, 1, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_285(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11255 / 70229
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

int Function_286() //Position: 0x11365 / 70501
{
	switch (iLocal_750)
	{
		case 0x00000063:
			if (!(Function_295() && Function_293()))
			{
			}
			if (!Function_287(&iLocal_782))
			{
			}
			if ((Function_295() && Function_287(&iLocal_782)) && Function_293())
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000001:
			Function_295();
			Function_287(&iLocal_782);
			return 1;
			break;
		
		case 0x00000065:
			Function_295();
			Function_287(&iLocal_782);
			if (IS_ACTOR_VALID(&bLocal_1725))
			{
				Function_285(&bLocal_1725, &iLocal_4 + 2304[9], 1, 1, 1);
				bLocal_1725 = "";
			}
			return 1;
			break;
	}
	return 0;
}

bool Function_287(struct<2>[] Param0) //Position: 0x113F7 / 70647
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_292();
	iVar1 = 0;
	if (!Function_185(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_291(&(Param0[iVar02]), 8);
		}
		else if (Function_290())
		{
			iVar1 = 1;
			Function_291(&(Param0[iVar02]), 8);
		}
		Function_291(&(Param0[iVar02]), 16);
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
				Function_291(&(Param0[iVar02]), 1);
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
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_291(&(Param0[iVar02]), 2);
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
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_291(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_291(&(Param0[iVar02]), 2);
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
	Function_288();
	return 1;
}

void Function_288() //Position: 0x117B9 / 71609
{
	if (!Function_289(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_289(int iParam0) //Position: 0x117F9 / 71673
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_290() //Position: 0x11815 / 71701
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

void Function_291(struct<13> Param0) //Position: 0x11843 / 71747
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_292() //Position: 0x11856 / 71766
{
	if (!Function_289(128))
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

int Function_293() //Position: 0x11898 / 71832
{
	Function_294(&iLocal_4 + 176, 199, 2, 0);
	Function_294(&iLocal_4 + 176, 111, 2, 0);
	Function_294(&iLocal_4 + 176, 608, 2, 0);
	Function_294(&iLocal_4 + 176, 977, 2, 0);
	Function_294(&iLocal_4 + 176, 1128, 2, 0);
	Function_294(&iLocal_4 + 176, 1129, 2, 0);
	Function_294(&iLocal_4 + 176, 1130, 2, 0);
	if (Function_287(&iLocal_4 + 176))
	{
		return 1;
	}
	return 0;
}

var Function_294(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11904 / 71940
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_185(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_291(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_291(&(Param0[iVar02]), 8);
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

bool Function_295() //Position: 0x119E0 / 72160
{
	Function_294(&iLocal_4 + 8, 980, 2, 0);
	Function_294(&iLocal_4 + 8, 981, 2, 0);
	Function_294(&iLocal_4 + 8, 976, 2, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/slap_horse", 1, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/pull_pitchfork", 1, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/body_left_for_dead_gped_mourn", 1, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_chop_door", 1, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/panic_female", 1, 0);
	Function_296(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/ranch04_reflect", 1, 0);
	if (Function_287(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_296(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x11BFB / 72699
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_297(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_291(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_297(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x11C39 / 72761
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_185(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_291(&(Param0[iVar02]), 4);
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

int Function_298() //Position: 0x11D08 / 72968
{
	switch (iLocal_750)
	{
		case 0x00000063:
			if ((Function_295() && Function_293()) && !IS_LAYOUTREF_VALID(&iLocal_4))
			{
				Function_280();
				Function_254();
			}
			if (!IS_ACTOR_VALID(&bLocal_1497))
			{
				if (Function_305())
				{
					bLocal_1497 = Function_299(1, 1, 0, 0, 0, 0, 1, 0);
				}
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1497, 1))
			{
				return 0;
			}
			if (!Function_253())
			{
				return 0;
			}
			if (!DECOR_CHECK_EXIST(&bLocal_1493, "TeleportedToStart"))
			{
				Function_285(&Global_54076, &iLocal_4 + 1432[1], 1, 1, 1);
				Function_285(&bLocal_1493, &iLocal_4 + 1432[3], 1, 1, 1);
				Function_285(&bLocal_1497, &iLocal_4 + 1432[4], 1, 1, 1);
				Function_285(&bLocal_1499, &iLocal_4 + 1432[5], 1, 1, 1);
				DECOR_SET_BOOL(&bLocal_1493, "TeleportedToStart", true);
				TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1497, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1499, -1.0f, 0, 0);
				return 0;
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_170(114699);
			Function_192(1, 1, 0);
			CUTSCENE_MANAGER_SHOW_ACTOR(&iLocal_4 + 632[02]);
			CUTSCENE_MANAGER_SHOW_ACTOR(&iLocal_4 + 632[12]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&uLocal_1501);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000065:
			GET_OBJECT_POSITION(&iLocal_4 + 1568[4], &Local_1729);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Local_1729, 0, 0);
			BURN_ACTOR(&Global_54076, 0,6f, 200.0f);
			return 1;
			break;
	}
	return 0;
}

var Function_299(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x11E9C / 73372
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
		Function_304(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_305())
		{
			return "";
		}
	}
	if (!Function_302())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_202();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_324(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_324(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_324(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_324(GET_OBJECT_FROM_ACTOR(&Global_54076));
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
		Function_300(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_300(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x121F9 / 74233
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &iParam4);
	}
}

var Function_301(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12243 / 74307
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

bool Function_302() //Position: 0x122E3 / 74467
{
	if (Function_303() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_303() //Position: 0x122F9 / 74489
{
	return Global_21369.f_244;
}

void Function_304(var uParam0, bool bParam1, bool bParam2) //Position: 0x12304 / 74500
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

bool Function_305() //Position: 0x12333 / 74547
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

int Function_306() //Position: 0x12353 / 74579
{
	switch (iLocal_750)
	{
		case 0x00000063:
			Function_325(0);
			Function_309(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_307(StackVal, &fLocal_768, Vector(-840,0001f, 91,77865f, 2401,022f), &bLocal_1756, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_309(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			GET_OBJECT_POSITION(&iLocal_4 + 1496[0], &Local_1729);
			Function_307(StackVal, &fLocal_768, Local_1729, &bLocal_1756, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_309(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_FINAL_CUTSCENE", &uLocal_1764);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_FINAL_CUTSCENE_FIRE_FADEOUT", &uLocal_1766);
			GET_OBJECT_POSITION(&iLocal_4 + 2304[14], &Local_1729);
			Function_307(StackVal, &fLocal_768, Local_1729, &bLocal_1756, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_307(float fParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x1249C / 74908
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
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &fParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
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
				Function_308(&uVar1, &fParam0);
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

void Function_308(var uParam0, float fParam1) //Position: 0x1273C / 75580
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

void Function_309(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x127BE / 75710
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
	Function_283();
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
				Function_311(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_55(), 2, Function_311(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if (iParam10 && !Function_14())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_310()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_310()));
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
	if (Function_289(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_170(0x4000000);
	}
	if (Function_289(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_170(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_310() //Position: 0x12A70 / 76400
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

struct<8> Function_311(var uParam0) //Position: 0x12AFE / 76542
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

bool Function_312() //Position: 0x12B10 / 76560
{
	var uVar0;
	var uVar2;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	switch (iLocal_1755)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R4_END/R4_END"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/R4_END/R4_END", 0, 2, 1, 2, 2);
				iLocal_1755 = 1004;
			}
			else
			{
				iLocal_1755 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1755 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_1755 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					uVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar4);
					iVar6 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_313(iVar6))
					{
						if (iVar6 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(&uVar5), &Global_54076);
						}
						if (iVar6 == GET_ACTOR_ENUM(&bLocal_1493))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(&uVar5), &bLocal_1493);
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_1755 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				iLocal_1755 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

bool Function_313(int iParam0) //Position: 0x12C45 / 76869
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_314() //Position: 0x12C5C / 76892
{
	Function_239(&bLocal_1493);
	Function_315(&iLocal_1807, 0, 0, 4294967295, 4294967295);
	SET_DRAW_ACTOR(&bLocal_1493, 1);
	ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
	ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	if (&iLocal_1760 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(&iLocal_1760, 1);
	}
	if (&iLocal_1762 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(&iLocal_1762, 1);
	}
	return;
}

void Function_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12CB7 / 76983
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_316(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_316(int iParam0) //Position: 0x12CE1 / 77025
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

bool Function_317() //Position: 0x13236 / 78390
{
	Function_294(&iLocal_4 + 576, 983, 2, 0);
	Function_294(&iLocal_4 + 576, 171, 2, 0);
	Function_294(&iLocal_4 + 576, 288, 2, 0);
	if (Function_287(&iLocal_4 + 576))
	{
		return 1;
	}
	return 0;
}

void Function_318(int iParam0) //Position: 0x13273 / 78451
{
	char* cVar0[32];
	
	Function_227(&iLocal_1541);
	Function_227(&fLocal_1545);
	iLocal_751 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_750)
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
		
		case 0x00000008:
			stradd(&cVar0, "09", 32);
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
		
		case 0x00000005:
			stradd(&cVar0, "FADE IN", 32);
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

void Function_319() //Position: 0x134A1 / 79009
{
	Function_279("MINI_GAMES_AND_JOBS\\RANCH04");
	Function_239(&bLocal_1493);
	ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
	ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
	return;
}

void Function_320(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x134E3 / 79075
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

void Function_321(int iParam0) //Position: 0x1350D / 79117
{
	if (!Function_265(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_192(1, 0, 1);
		}
	}
	return;
}

bool Function_322(int iParam0) //Position: 0x13529 / 79145
{
	if (!Function_86(iParam0))
	{
		return 1;
	}
	return Function_167(&(Global_43791[iParam0]), 4);
}

int Function_323(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x13545 / 79173
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && iParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam3) != 7 && iParam3))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

struct<8> Function_324(bool bParam0) //Position: 0x135EB / 79339
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

void Function_325(bool bParam0) //Position: 0x13614 / 79380
{
	Function_326(0, 0x40400000);
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

void Function_326(float fParam0, float fParam1) //Position: 0x1364A / 79434
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
	Function_328();
	Function_327();
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

void Function_327() //Position: 0x1375B / 79707
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_328() //Position: 0x1378F / 79759
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

void Function_329() //Position: 0x13895 / 80021
{
	struct<2> Var0;
	
	Function_455();
	switch (iLocal_751)
	{
		case 0x00000000:
			Function_325(0);
			iLocal_1755 = 1000;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			if (iLocal_1601[2] == 0)
			{
				Function_320(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				GET_OBJECT_POSITION(&iLocal_4 + 2304[5], &Var0);
				iLocal_906 = Function_323(StackVal, Var0, 0, 1, 1);
				if (!Function_322(iLocal_906))
				{
					Function_321(&Local_770);
				}
				Function_454();
				Function_318(1);
			}
			else if (Function_453())
			{
				Function_318(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_322(iLocal_906) || iLocal_906 != 4294967295)) && Function_453())
			{
				if (Function_322(Global_46816[0]))
				{
					if (Function_441())
					{
						Function_318(2);
					}
				}
				else
				{
					Function_440(Global_46816[0]);
				}
			}
			break;
		
		case 0x00000002:
			if (HUD_IS_FADED())
			{
				CAMERA_RESET(0);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_426();
			Function_318(6);
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_1601[2] == 0)
				{
				}
				if (Function_425())
				{
					Function_318(7);
				}
			}
			break;
		
		case 0x00000007:
			if (!Function_405(&iLocal_1741))
			{
				if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
				{
				}
				else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[3]))
				{
					if (!bLocal_1632)
					{
						Function_396("Ranch04_obj03a");
						if (!IS_BLIP_VALID(&bLocal_1523))
						{
							Local_1729 = Vector(-847,983f, 90.0f, 2451,699f);
							bLocal_1523 = ADD_BLIP_FOR_COORD(&Local_1729, 330, 0, 2, 0);
						}
						Function_318(8);
					}
				}
				else if (!bLocal_1632)
				{
					Function_396("Ranch04_obj03");
				}
			}
			break;
		
		case 0x00000008:
			if (!Function_405(&iLocal_1741))
			{
				if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
				{
				}
				else if (!bLocal_1632)
				{
					if (!IS_BLIP_VALID(&bLocal_1523))
					{
						Local_1729 = Vector(-847,983f, 90.0f, 2451,699f);
						bLocal_1523 = ADD_BLIP_FOR_COORD(&Local_1729, 330, 0, 2, 0);
					}
					Function_396("Ranch04_obj03a");
				}
			}
			break;
		
		case 0x00000009:
			if (!Function_334())
			{
				if (iLocal_767 <= 5)
				{
					Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0);
				}
				else
				{
					Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_CorralWarning", "Ranch04_CorralAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0);
				}
			}
			break;
		
		case 0x00000069:
			Function_225(0);
			Function_318(106);
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_330();
				iLocal_1601[3] = 1;
				iLocal_750 = 101;
				Function_318(0);
			}
			break;
	}
	return;
}

void Function_330() //Position: 0x13C59 / 80985
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	Function_332();
	if (IS_BLIP_VALID(&bLocal_1523))
	{
		REMOVE_BLIP(&bLocal_1523);
	}
	SET_DRAW_ACTOR(&bLocal_1493, 1);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			uVar2 = GET_BLIP_ON_ACTOR(&uVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
		}
		bVar0++;
	}
	Function_331();
	return;
}

void Function_331() //Position: 0x13CC7 / 81095
{
	Function_182(&iLocal_4 + 520);
	return;
}

void Function_332() //Position: 0x13CD5 / 81109
{
	Function_333(&(Local_961[015]));
	Function_333(&(Local_961[115]));
	Function_333(&(Local_961[215]));
	Function_333(&(Local_961[315]));
	Function_333(&(Local_961[415]));
	return;
}

void Function_333(struct<69> Param0) //Position: 0x13D08 / 81160
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

bool Function_334() //Position: 0x13DC8 / 81352
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<2> Var5;
	float fVar7;
	
	fVar7 = 0,75f;
	Function_383();
	Function_382();
	Function_381(&iLocal_1673);
	Function_379();
	Function_378();
	switch (iLocal_767)
	{
		case 0x00000000:
			Function_377();
			if (iLocal_1624 <= 1)
			{
				if (!IS_PHYSINST_VALID(&uLocal_1801))
				{
					GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var5);
					uLocal_1801 = LOCATE_PHYSINST_OF_TYPE(Var5, 50.0f, "hen_beamsEntity01x_p_cus_beams01x", 1);
				}
				if (IS_PHYSINST_VALID(&uLocal_1801))
				{
					PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1801, "Hen_barn02x_A", 0, 0, 1f, 0);
					iLocal_1624 = 1;
					GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var5);
					PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CRACK_MASTER", Var5);
					Function_367();
				}
			}
			if (!SQUAD_GET_SIZE(&iLocal_4 + 784) < 2)
			{
				iLocal_767 = 2;
				return 0;
			}
			Function_354();
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760))
				{
					iLocal_1798 = 1;
					Function_353();
					bLocal_1509 = FIND_ACTOR_IN_LAYOUT(&iLocal_4, "RescueHorse01");
					Function_218(&bLocal_1509);
					DECOR_SET_BOOL(&bLocal_1509, "HorseRescued", true);
					uLocal_1649 = &iLocal_4 + 2760;
					uLocal_1533 = &iLocal_4 + 2896;
					Function_226(&iLocal_1661);
					iLocal_767 = 1;
					return 0;
				}
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768))
				{
					iLocal_1798 = 1;
					Function_353();
					bLocal_1509 = FIND_ACTOR_IN_LAYOUT(&iLocal_4, "RescueHorse02");
					Function_218(&bLocal_1509);
					DECOR_SET_BOOL(&bLocal_1509, "HorseRescued", true);
					uLocal_1649 = &iLocal_4 + 2768;
					uLocal_1533 = &iLocal_4 + 2904;
					Function_226(&iLocal_1661);
					iLocal_767 = 1;
					return 0;
				}
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776))
				{
					iLocal_1798 = 1;
					Function_353();
					bLocal_1509 = FIND_ACTOR_IN_LAYOUT(&iLocal_4, "RescueHorse03");
					Function_218(&bLocal_1509);
					DECOR_SET_BOOL(&bLocal_1509, "HorseRescued", true);
					uLocal_1649 = &iLocal_4 + 2776;
					uLocal_1533 = &iLocal_4 + 2912;
					Function_226(&iLocal_1661);
					iLocal_767 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&bLocal_1509))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "slap"))
				{
					if (!Function_229(&iLocal_1709))
					{
						Function_227(&iLocal_1709);
					}
					if ((!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_1509)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076))) || Function_261(&iLocal_1709) < fVar7)
					{
						Function_352();
					}
				}
				else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_1509)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					Function_352();
				}
			}
			else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "slap"))
			{
				if (!Function_229(&iLocal_1661))
				{
					Function_227(&iLocal_1661);
				}
				else if (Function_261(&iLocal_1661) < 0.0f)
				{
					Function_282(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_752 + 24))
					{
						DESTROY_OBJECT(&iLocal_752 + 24);
					}
					iLocal_1798 = 0;
					DESTROY_OBJECT(&uLocal_1649);
					Function_351();
					iLocal_767 = 0;
				}
			}
			break;
		
		case 0x00000002:
			Function_377();
			if (!Function_141() && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_1624 <= 2)
				{
					if (!IS_PHYSINST_VALID(&uLocal_1801))
					{
						GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var5);
						uLocal_1801 = LOCATE_PHYSINST_OF_TYPE(Var5, 50.0f, "hen_beamsEntity01x_p_cus_beams01x", 1);
					}
					if (IS_PHYSINST_VALID(&uLocal_1801))
					{
						PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1801, "Hen_barn02x_B", 0, 0, 1f, 0);
						GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var5);
						PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CRACK_MASTER", Var5);
						iLocal_1624 = 2;
					}
				}
			}
			if (SQUAD_GET_SIZE(&iLocal_4 + 784) == 1)
			{
				DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, false), "BeLassoBounceOff", true);
				bLocal_1509 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, false);
				CLEAR_ACTOR_PROOF_ALL(&bLocal_1509);
				iLocal_1748 = 0;
				iLocal_767 = 4;
				return 0;
			}
			Function_354();
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760))
				{
					iLocal_1798 = 1;
					Function_353();
					bLocal_1509 = FIND_ACTOR_IN_LAYOUT(&iLocal_4, "RescueHorse01");
					Function_218(&bLocal_1509);
					DECOR_SET_BOOL(&bLocal_1509, "HorseRescued", true);
					uLocal_1649 = &iLocal_4 + 2760;
					uLocal_1533 = &iLocal_4 + 2896;
					Function_226(&iLocal_1661);
					iLocal_767 = 3;
					return 0;
				}
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768))
				{
					iLocal_1798 = 1;
					Function_353();
					bLocal_1509 = FIND_ACTOR_IN_LAYOUT(&iLocal_4, "RescueHorse02");
					Function_218(&bLocal_1509);
					DECOR_SET_BOOL(&bLocal_1509, "HorseRescued", true);
					uLocal_1649 = &iLocal_4 + 2768;
					uLocal_1533 = &iLocal_4 + 2904;
					Function_226(&iLocal_1661);
					iLocal_767 = 3;
					return 0;
				}
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776))
				{
					iLocal_1798 = 1;
					Function_353();
					bLocal_1509 = FIND_ACTOR_IN_LAYOUT(&iLocal_4, "RescueHorse03");
					Function_218(&bLocal_1509);
					DECOR_SET_BOOL(&bLocal_1509, "HorseRescued", true);
					uLocal_1649 = &iLocal_4 + 2776;
					uLocal_1533 = &iLocal_4 + 2912;
					Function_226(&iLocal_1661);
					iLocal_767 = 3;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&bLocal_1509))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "slap"))
				{
					if (!Function_229(&iLocal_1709))
					{
						Function_227(&iLocal_1709);
					}
					if ((!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_1509)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076))) || Function_261(&iLocal_1709) < fVar7)
					{
						Function_352();
					}
				}
				else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_1509)) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					Function_352();
				}
			}
			else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "slap"))
			{
				if (!Function_229(&iLocal_1661))
				{
					Function_227(&iLocal_1661);
				}
				else if (Function_261(&iLocal_1661) < 0.0f)
				{
					Function_282(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_752 + 24))
					{
						DESTROY_OBJECT(&iLocal_752 + 24);
					}
					iLocal_1798 = 0;
					DESTROY_OBJECT(&uLocal_1649);
					Function_351();
					Function_350();
					iLocal_767 = 2;
				}
			}
			break;
		
		case 0x00000004:
			Function_349();
			Function_348();
			if (iLocal_1624 != 3)
			{
				if (IS_ACTOR_VALID(&bLocal_1509))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1509, 7.0f))
					{
						if (!IS_PHYSINST_VALID(&uLocal_1801))
						{
							GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var5);
							uLocal_1801 = LOCATE_PHYSINST_OF_TYPE(Var5, 50.0f, "hen_beamsEntity01x_p_cus_beams01x", 1);
						}
						Function_309(0, 1, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
							DESTROY_OBJECT(&iLocal_752 + 24);
						}
						(&iLocal_752 + 24) = Function_344(&iLocal_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_Collapse - Failed to create Ranch04_Collapse_cutscene");
						}
						Function_227(&iLocal_1661);
						iLocal_1798 = 1;
						Function_342(&Global_54076, 0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						SET_ACTOR_INVULNERABILITY(&Global_54076, true);
						PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1801, "Hen_barn02x_C", 0, 0, 1f, 0);
						GET_VOLUME_CENTER(&iLocal_4 + 1056[1], &Var5);
						PLAY_SOUND_FROM_POSITION("RANCH04_BARN_BREAK_MASTER", Var5);
						SET_ALLOW_RIDE_BY_PLAYER(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, false), 1);
						bVar4 = TASK_SEQUENCE_OPEN();
						TASK_HORSE_ACTION(0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_STAND_STILL(false, 0,25f, 0, 0);
						TASK_HORSE_ACTION(0, 0);
						TASK_STAND_STILL(false, 0,2f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 0,75f, 0, 0);
						TASK_HORSE_ACTION(0, 0);
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, false), bVar4, 4294967295);
						TASK_SEQUENCE_RELEASE(bVar4, 1);
						iLocal_1624 = 3;
					}
				}
			}
			else if (Function_229(&iLocal_1661))
			{
				if (Function_261(&iLocal_1661) <= 3.0f)
				{
					uLocal_1647 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &fLocal_768, "DebrisFire", "script_Hennigans_BarnDebrisFire", Vector(-844.0f, 92.0f, 2461.0f));
					UNK_0x6745191B(StackVal, &uLocal_1647, Vector(0.0f, 0.0f, 0.0f));
					Function_282(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_752 + 24))
					{
						DESTROY_OBJECT(&iLocal_752 + 24);
					}
					iLocal_1798 = 0;
					Function_339();
					Function_396("Ranch04_obj03d");
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					SET_ACTOR_INVULNERABILITY(&Global_54076, false);
					GET_OBJECT_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, false), &Local_1729);
					ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 0, 0, 1, 0);
					Function_226(&iLocal_1661);
				}
			}
			if (!iLocal_1748)
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					RESET_ACTOR_GAITS(GET_MOUNT(&Global_54076), 1);
					iLocal_1748 = 1;
				}
			}
			else if (!IS_ACTOR_RIDING(&Global_54076))
			{
				iLocal_1748 = 0;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[1]))
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					REMOVE_ACTORSET_MEMBER(&uLocal_1253, &bLocal_1509);
					Function_338(&uLocal_1253);
					SQUAD_LEAVE(&bLocal_1509);
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1509, 1);
					Function_227(&iLocal_1541);
					TASK_PRIORITY_SET(&bLocal_1509, 2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1509, 1);
					Function_315(&iLocal_1807, 8, 0, 4294967295, 4294967295);
					Function_367();
					iLocal_767 = 5;
					return 0;
				}
			}
			break;
		
		case 0x00000005:
			Function_348();
			Function_312();
			Function_337();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (GET_MOUNT(&Global_54076) == &bLocal_1509)
				{
					if (IS_BLIP_VALID(&bLocal_1627))
					{
						REMOVE_BLIP(&bLocal_1627);
					}
					if (IS_OBJECT_VALID(&bLocal_1531))
					{
						DESTROY_OBJECT(&bLocal_1531);
					}
					GET_OBJECT_POSITION(&iLocal_4 + 2304[12], &Var5);
					Function_77();
					bLocal_1531 = Function_336(StackVal, StackVal, &fLocal_768, "EndGateway", Var5, Function_77(), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					ADD_BLIP_FOR_OBJECT(&bLocal_1531, 330, 0f, 2, 0);
					bLocal_1727 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 0,75f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_STAND_STILL(false, 0,5f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1509, bLocal_1727);
					TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
					Function_367();
					Function_396("Ranch04_obj03db");
					iLocal_767 = 6;
					return 0;
				}
			}
			break;
		
		case 0x00000006:
			Function_337();
			Function_348();
			Function_312();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1509, &iLocal_4 + 1360))
				{
					DESTROY_OBJECT(&bLocal_1531);
					GET_OBJECT_POSITION(&iLocal_4 + 1568[8], &Var5);
					Function_77();
					bLocal_1531 = Function_336(StackVal, StackVal, &fLocal_768, "EndGatewayMounted", Var5, Function_77(), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					ADD_BLIP_FOR_OBJECT(&bLocal_1531, 330, 0f, 2, 0);
					Function_396("Ranch04_obj03dd");
					iLocal_767 = 7;
					Function_226(&iLocal_1677);
					return 0;
				}
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1509)))
			{
				bLocal_1627 = ADD_BLIP_FOR_ACTOR(&bLocal_1509, 325, 0, 2, 0);
				SET_BLIP_NAME(&bLocal_1627, "BLIP_HORSE");
			}
			else
			{
				bLocal_1627 = GET_BLIP_ON_ACTOR(&bLocal_1509);
				SET_BLIP_NAME(&bLocal_1627, "BLIP_HORSE");
			}
			Function_396("Ranch04_obj03dc");
			if (IS_OBJECT_VALID(&bLocal_1531))
			{
				DESTROY_OBJECT(&bLocal_1531);
			}
			iLocal_767 = 5;
			break;
		
		case 0x00000007:
			Function_337();
			Function_348();
			Function_312();
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!STRINGS_ARE_EQUAL("EndGatewayMounted", GET_OBJECT_NAME(&bLocal_1531)))
				{
					DESTROY_OBJECT(&bLocal_1531);
					GET_OBJECT_POSITION(&iLocal_4 + 1568[8], &Var5);
					Function_77();
					bLocal_1531 = Function_336(StackVal, StackVal, &fLocal_768, "EndGatewayMounted", Var5, Function_77(), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
				if (GATEWAY_UPDATE(&bLocal_1531))
				{
					bLocal_1725 = GET_MOUNT(&Global_54076);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					UI_PUSH("ncutscenes");
					bLocal_1727 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_DISMOUNT(false, 1);
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 1568[1], 1, 1, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1727);
					TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
					bLocal_1727 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[9], 1, 0, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1509, bLocal_1727);
					TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
					bLocal_1727 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[9], 1, 0, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1725, bLocal_1727);
					TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
					DESTROY_OBJECT(&bLocal_1531);
					iLocal_767 = 8;
					return 0;
				}
				if (!IS_ACTOR_IN_VOLUME(&bLocal_1509, &iLocal_4 + 1360))
				{
					Function_227(&iLocal_1541);
					iLocal_767 = 5;
					return 0;
				}
			}
			if (!STRINGS_ARE_EQUAL("EndGatewayStanding", GET_OBJECT_NAME(&bLocal_1531)))
			{
				DESTROY_OBJECT(&bLocal_1531);
				GET_OBJECT_POSITION(&iLocal_4 + 1568[7], &Var5);
				Function_77();
				bLocal_1531 = Function_336(StackVal, StackVal, &fLocal_768, "EndGatewayStanding", Var5, Function_77(), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			}
			if (GATEWAY_UPDATE(&bLocal_1531))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				UI_PUSH("ncutscenes");
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 1568[1], 1, 1, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[9], 1, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1509, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				DESTROY_OBJECT(&bLocal_1531);
				iLocal_767 = 8;
				Function_318(105);
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_337();
			Function_348();
			Function_312();
			if (!Function_229(&iLocal_1677))
			{
				if (GET_TASK_STATUS(&Global_54076, 88) != 1 || GET_TASK_STATUS(&Global_54076, 12) != 1)
				{
					Function_227(&iLocal_1677);
				}
			}
			else if (Function_261(&iLocal_1677) < 0,5f)
			{
				Function_318(105);
			}
			break;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			bVar3 = false;
			if (IS_ACTOR_IN_VOLUME(&bVar1, &iLocal_4 + 1056[3]))
			{
				bVar3 = true;
			}
			if (IS_ACTOR_ALIVE(&bVar1))
			{
				bVar2 = GET_BLIP_ON_ACTOR(&bVar1);
				if (!bVar3)
				{
					if (IS_ACTOR_VALID(GET_LASSO_USER(&bVar1)))
					{
						Function_396("Ranch04_obj03cc");
					}
					else if (GET_RIDER(&bVar1) == &Global_54076)
					{
						Function_396("Ranch04_obj03db");
					}
					else
					{
						if (IS_BLIP_VALID(&bVar2))
						{
							REMOVE_BLIP(&bVar2);
						}
						SQUAD_LEAVE(&bVar1);
						ADD_ACTORSET_MEMBER(&uLocal_1253, &bVar1);
						Function_335(&bVar1);
						Function_338(&uLocal_1253);
						DECOR_SET_BOOL(&bVar1, "BeLassoBounceOff", true);
						SET_ALLOW_RIDE_BY_PLAYER(&bVar1, 0);
						AI_SET_NAV_PATHFINDING_ENABLED(&bVar1, 1);
						TASK_PRIORITY_SET(&bVar1, 2);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 1);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bVar1);
						SET_ACTOR_STAY_WITHIN_VOLUME(&bVar1, &iLocal_4 + 1056[12], 1, true);
					}
				}
				else if (!IS_BLIP_VALID(&bVar2))
				{
					if (!DECOR_CHECK_EXIST(&bVar1, "HorseRescued"))
					{
						bVar2 = ADD_BLIP_FOR_ACTOR(&bVar1, 325, 0, 2, 0);
						SET_BLIP_NAME(&bVar2, "BLIP_HORSE");
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_335(bool bParam0) //Position: 0x1513F / 86335
{
	if (!IS_OBJECTSET_VALID(&iLocal_1803))
	{
		iLocal_1803 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &fLocal_768, 15, 1);
	}
	if (IS_ACTOR_HORSE(&bParam0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&bParam0, &iLocal_1803))
		{
			ADD_OBJECT_TO_OBJECTSET(&bParam0, &iLocal_1803);
		}
	}
	if (IS_OBJECT_IN_OBJECTSET(&bParam0, &iLocal_1803))
	{
		return 1;
	}
	return 0;
	return 0;
}

var Function_336(int iParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x15198 / 86424
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&iParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &iParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
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

void Function_337() //Position: 0x15283 / 86659
{
	var uVar0;
	
	if (!Function_229(&iLocal_1657))
	{
		Function_227(&iLocal_1657);
	}
	if (bLocal_1717 > 0.0f || bLocal_1717 < 5.0f)
	{
		bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_261(&iLocal_1657) <= bLocal_1717)
	{
		bLocal_1727 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1727)
		{
			case 0x00000001:
				bLocal_1723 = &iLocal_1768;
				uVar0 = "Ranch04_laborersCheer1";
				break;
			
			case 0x00000002:
				bLocal_1723 = &iLocal_1770;
				uVar0 = "Ranch04_laborersCheer2";
				break;
			
			case 0x00000003:
				bLocal_1723 = &iLocal_1772;
				uVar0 = "Ranch04_laborersCheer3";
				break;
			
			case 0x00000004:
				bLocal_1723 = &iLocal_1774;
				uVar0 = "Ranch04_laborersCheer4";
				break;
			
			case 0x00000005:
				bLocal_1723 = &iLocal_1776;
				uVar0 = "Ranch04_laborersCheer5";
				break;
			
			case 0x00000006:
				bLocal_1723 = &iLocal_1778;
				uVar0 = "Ranch04_laborersCheer6";
				break;
		}
		if (IS_ACTOR_VALID(&bLocal_1723))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1723, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(&bLocal_1723))
				{
					SAY_SINGLE_LINE_STRING(&bLocal_1723, &uVar0, true, true, 3, 0, true, false);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(&bLocal_1723));
					PRINTSTRING(" saying CHEER!");
					PRINTNL();
					Function_227(&iLocal_1657);
					bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_338(var uParam0) //Position: 0x15449 / 87113
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&uParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&uParam0, GET_ACTOR_FROM_ACTORSET(&uParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_339() //Position: 0x154A8 / 87208
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_jumpLastHorse", "Ranch04_jumpLastHorse", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_340(int iParam0) //Position: 0x154FB / 87291
{
	Function_341(0, &Global_54076, iParam0, 0);
	Function_341(1, &bLocal_1493, iParam0, 0);
	Function_341(2, &iLocal_1515, iParam0, 0);
	Function_341(3, &iLocal_1768, iParam0, 0);
	Function_341(4, &iLocal_1770, iParam0, 0);
	Function_341(5, &iLocal_1772, iParam0, 0);
	Function_341(6, &iLocal_1774, iParam0, 0);
	Function_341(7, &iLocal_1776, iParam0, 0);
	Function_341(8, &iLocal_1778, iParam0, 0);
	return;
}

void Function_341(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x15565 / 87397
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_15(uParam2, Function_147(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_342(int iParam0, bool bParam1) //Position: 0x1558D / 87437
{
	var uVar0;
	var uVar1;
	
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
		uVar1 = GET_VEHICLE(&iParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_343(&iParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&iParam0, 1);
	}
	return;
}

float Function_343(var uParam0, bool bParam1) //Position: 0x155F7 / 87543
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

var Function_344(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x15618 / 87576
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_BarnCollapse", 2, 1);
	}
	Function_345(&uVar0);
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

void Function_345(int iParam0) //Position: 0x156A6 / 87718
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_347(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_346(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_346(int iParam0) //Position: 0x156E1 / 87777
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-842,8519f, 91,01871f, 2457,637f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,172439f, 0,73988f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_347(var uParam0) //Position: 0x15798 / 87960
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-840,1344f, 90,89339f, 2455,722f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,189946f, 1,211727f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

void Function_348() //Position: 0x1584F / 88143
{
	if (IS_ACTOR_VALID(&bLocal_1509))
	{
		if (!IS_ACTOR_MOUNTED(&bLocal_1509))
		{
			bLocal_1723 = &bLocal_1509;
			if (!Function_229(&iLocal_1713))
			{
				if (IS_ACTOR_IN_FIRE_VOLUME(&bLocal_1723))
				{
					Function_227(&iLocal_1713);
				}
			}
			else if (Function_261(&iLocal_1713) < 2.0f)
			{
				if (IS_ACTOR_IN_FIRE_VOLUME(&bLocal_1723))
				{
					Function_580("Ranch04_horseBurned");
					bLocal_765 = true;
				}
				else
				{
					Function_226(&iLocal_1713);
				}
			}
		}
		else if (!Function_229(&iLocal_1713))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(&Global_54076))
			{
				Function_227(&iLocal_1713);
			}
		}
		else if (Function_261(&iLocal_1713) < 2.0f)
		{
			if (FIRE_IS_ACTOR_ON_FIRE(&Global_54076))
			{
				Function_580("Ranch04_horseBurned");
				bLocal_765 = true;
			}
			else
			{
				Function_226(&iLocal_1713);
			}
		}
	}
	return;
}

void Function_349() //Position: 0x15925 / 88357
{
	var uVar0;
	
	if (!Function_229(&iLocal_1657))
	{
		Function_227(&iLocal_1657);
	}
	if (bLocal_1717 > 0.0f || bLocal_1717 < 5.0f)
	{
		bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_261(&iLocal_1657) <= bLocal_1717)
	{
		bLocal_1727 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1727)
		{
			case 0x00000001:
				bLocal_1723 = &iLocal_1768;
				uVar0 = "Ranch04_outOfTimeLab1";
				break;
			
			case 0x00000002:
				bLocal_1723 = &iLocal_1770;
				uVar0 = "Ranch04_outOfTimeLab2";
				break;
			
			case 0x00000003:
				bLocal_1723 = &iLocal_1772;
				uVar0 = "Ranch04_outOfTimeLab3";
				break;
			
			case 0x00000004:
				bLocal_1723 = &iLocal_1774;
				uVar0 = "Ranch04_outOfTimeLab4";
				break;
			
			case 0x00000005:
				bLocal_1723 = &iLocal_1776;
				uVar0 = "Ranch04_outOfTimeLab5";
				break;
			
			case 0x00000006:
				bLocal_1723 = &iLocal_1778;
				uVar0 = "Ranch04_outOfTimeLab6";
				break;
		}
		if (IS_ACTOR_VALID(&bLocal_1723))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1723, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(&bLocal_1723))
				{
					SAY_SINGLE_LINE_STRING(&bLocal_1723, &uVar0, true, true, 3, 0, true, false);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(&bLocal_1723));
					PRINTSTRING(" saying OUT OF TIME!");
					PRINTNL();
					Function_227(&iLocal_1657);
					bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_350() //Position: 0x15AEB / 88811
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(&iLocal_4 + 2760))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760));
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760), false);
		DESTROY_OBJECT(&iLocal_4 + 2760);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 2768))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768));
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768), false);
		DESTROY_OBJECT(&iLocal_4 + 2768);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 2776))
	{
		GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776));
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776), false);
		DESTROY_OBJECT(&iLocal_4 + 2776);
	}
	bLocal_1727 = false;
	while (bLocal_1727 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
	{
		bLocal_1723 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bLocal_1727);
		if (!DECOR_GET_BOOL(&bLocal_1723, "HorseRescued"))
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
			TASK_STAND_STILL(false, 0,25f, 0, 0);
			TASK_HORSE_ACTION(0, 0);
			TASK_STAND_STILL(false, 0,2f, 0, 0);
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
			TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
			TASK_STAND_STILL(false, 0,75f, 0, 0);
			TASK_HORSE_ACTION(0, 0);
			TASK_STAND_STILL(false, 0,5f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1723, bVar0, 4294967295);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
		bLocal_1727++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1805))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
	}
	return;
}

void Function_351() //Position: 0x15DC9 / 89545
{
	bool bVar0;
	
	bVar0 = false;
	bLocal_1727 = false;
	while (bLocal_1727 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
	{
		bLocal_1723 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bLocal_1727);
		if (DECOR_GET_BOOL(&bLocal_1723, "HorseRescued"))
		{
			bVar0++;
		}
		bLocal_1727++;
	}
	PRINTSTRING("Count of rescued horses = ");
	PRINTINT(bVar0);
	PRINTNL();
	PRINTSTRING("Count of horses in squad = ");
	PRINTINT(SQUAD_GET_SIZE(&iLocal_4 + 784));
	PRINTNL();
	if ((SQUAD_GET_SIZE(&iLocal_4 + 784) - bVar0) == 1)
	{
		Function_350();
	}
	return;
}

int Function_352() //Position: 0x15E8A / 89738
{
	var uVar0;
	
	MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1509, 1);
	uVar0 = GET_BLIP_ON_ACTOR(&bLocal_1509);
	if (IS_BLIP_VALID(&uVar0))
	{
		REMOVE_BLIP(&uVar0);
	}
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bLocal_1509, 0, 0);
	TASK_CLEAR(&bLocal_1509);
	bLocal_1727 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(0, &uLocal_1533, 4, 1, 0, 1, false);
	TASK_HORSE_ACTION(0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1509, bLocal_1727);
	TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
	AI_ACTOR_FORCE_SPEED(&bLocal_1509, 4);
	TASK_PRIORITY_SET(&bLocal_1509, true);
	Function_226(&iLocal_1709);
	bLocal_1509 = "";
	uLocal_1533 = "";
	return 1;
}

void Function_353() //Position: 0x15F11 / 89873
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_slapsButt", "Ranch04_slapsButt", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354() //Position: 0x15F5C / 89948
{
	float fVar0;
	
	fVar0 = 4.0f;
	if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1805) && !IS_ACTOR_ON_LADDER(&Global_54076))
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2760))
		{
			if (Function_364(&Global_54076, &iLocal_4 + 2760, fVar0))
			{
				uLocal_1805 = ADD_SCRIPT_USE_CONTEXT("R4_Slap_Horse", false, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
				DECOR_SET_INT(&fLocal_768, "CurrentHorseGringo", true);
			}
		}
		if (!DECOR_CHECK_EXIST(&fLocal_768, "CurrentHorseGringo"))
		{
			if (IS_OBJECT_VALID(&iLocal_4 + 2768))
			{
				if (Function_364(&Global_54076, &iLocal_4 + 2768, fVar0))
				{
					uLocal_1805 = ADD_SCRIPT_USE_CONTEXT("R4_Slap_Horse", false, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
					DECOR_SET_INT(&fLocal_768, "CurrentHorseGringo", 2);
				}
			}
		}
		if (!DECOR_CHECK_EXIST(&fLocal_768, "CurrentHorseGringo"))
		{
			if (IS_OBJECT_VALID(&iLocal_4 + 2776))
			{
				if (Function_364(&Global_54076, &iLocal_4 + 2776, fVar0))
				{
					uLocal_1805 = ADD_SCRIPT_USE_CONTEXT("R4_Slap_Horse", false, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
					DECOR_SET_INT(&fLocal_768, "CurrentHorseGringo", 3);
				}
			}
		}
	}
	else
	{
		bLocal_1727 = DECOR_GET_INT(&fLocal_768, "CurrentHorseGringo");
		switch (bLocal_1727)
		{
			case 0x00000001:
				if (IS_OBJECT_VALID(&iLocal_4 + 2760))
				{
					if (!Function_364(&Global_54076, &iLocal_4 + 2760, fVar0) || IS_ACTOR_ON_LADDER(&Global_54076))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
						DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
					}
					else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1805))
					{
						FIRE_STOP_ON_ACTOR(&Global_54076);
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
						GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760), "ButtSlap", 1);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_4 + 2760, "ButtSlap", false, 0, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
							DESTROY_OBJECT(&iLocal_752 + 24);
						}
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
						Function_309(1, 0, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
						(&iLocal_752 + 24) = Function_361(&iLocal_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_SlapHorse1 - Failed to create Ranch04_SlapHorse1_cutscene");
						}
						DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
					}
				}
				else
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
					DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
				}
				break;
			
			case 0x00000002:
				if (IS_OBJECT_VALID(&iLocal_4 + 2768))
				{
					if (!Function_364(&Global_54076, &iLocal_4 + 2768, fVar0) || IS_ACTOR_ON_LADDER(&Global_54076))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
						DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
					}
					else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1805))
					{
						FIRE_STOP_ON_ACTOR(&Global_54076);
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
						GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768), "ButtSlap", 1);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_4 + 2768, "ButtSlap", false, 0, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
							DESTROY_OBJECT(&iLocal_752 + 24);
						}
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
						Function_309(1, 0, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
						*(&iLocal_752 + 24) = Function_358(&iLocal_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_SlapHorse2 - Failed to create Ranch04_SlapHorse2_cutscene");
						}
						DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
					}
				}
				else
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
					DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
				}
				break;
			
			case 0x00000003:
				if (IS_OBJECT_VALID(&iLocal_4 + 2776))
				{
					if (!Function_364(&Global_54076, &iLocal_4 + 2776, fVar0) || IS_ACTOR_ON_LADDER(&Global_54076))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
						DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
					}
					else if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1805))
					{
						FIRE_STOP_ON_ACTOR(&Global_54076);
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
						GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776), "ButtSlap", 1);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_4 + 2776, "ButtSlap", false, 0, 0);
						if (UNK_0xCDA6BB6C())
						{
							CANCEL_CUTSCENE_TUNER_PLAYBACK();
						}
						else if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
							DESTROY_OBJECT(&iLocal_752 + 24);
						}
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
						Function_309(1, 0, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
						*(&iLocal_752 + 24) = Function_355(&iLocal_4, 0, 1, 0, 0);
						if (IS_OBJECT_VALID(&iLocal_752 + 24))
						{
						}
						else
						{
							LOG_ERROR("Ranch04_SlapHorse3 - Failed to create Ranch04_SlapHorse3_cutscene");
						}
						DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
					}
				}
				else
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
					DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
				}
				break;
			}
	}
	return;
}

var Function_355(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x165DD / 91613
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_SlapHorse3", 1, 1);
	}
	Function_356(&uVar0);
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

void Function_356(int iParam0) //Position: 0x16669 / 91753
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_357(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 100.0f, 0);
	return;
}

void Function_357(int iParam0) //Position: 0x16696 / 91798
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-840,3842f, 94,23191f, 2460,766f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,242845f, 2,523558f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 65.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

var Function_358(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x16745 / 91973
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_SlapHorse2", 1, 1);
	}
	Function_359(&uVar0);
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

void Function_359(int iParam0) //Position: 0x167D1 / 92113
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_360(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 100.0f, 0);
	return;
}

void Function_360(int iParam0) //Position: 0x167FE / 92158
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-847,103f, 91,72254f, 2456,113f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,005912f, 2,98059f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 75.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

var Function_361(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x168B5 / 92341
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_SlapHorse1", 1, 1);
	}
	Function_362(&uVar0);
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

void Function_362(int iParam0) //Position: 0x16941 / 92481
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_363(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 100.0f, 0);
	return;
}

void Function_363(int iParam0) //Position: 0x1696E / 92526
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-841,3345f, 92,40008f, 2457,207f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,100085f, -2,804826f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 65.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

bool Function_364(var uParam0, int iParam1, float fParam2) //Position: 0x16A1D / 92701
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_366(&uParam0);
			Function_365(&iParam1);
			if (VDIST(Function_366(&uParam0), Function_365(&iParam1)) >= fParam2)
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

struct<8> Function_365(int iParam0) //Position: 0x16B3B / 92987
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

struct<8> Function_366(var uParam0) //Position: 0x16BA9 / 93097
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

void Function_367() //Position: 0x16C15 / 93205
{
	Function_332();
	if (IS_ACTOR_VALID(&bLocal_1493))
	{
		Function_372(&(Local_961[015]), &bLocal_1493, "RanchersDaughter", 1, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(&bLocal_1499))
		{
			SET_ACTORS_HORSE(&bLocal_1493, &bLocal_1499);
			SET_MOST_RECENT_MOUNT(&bLocal_1493, &bLocal_1499);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1509))
	{
		Function_372(&(Local_961[115]), &bLocal_1509, "R4_Horse", 0, 0x5f5e100, 1);
		Function_368(&(Local_961[115]), 64);
	}
	else if (IS_ACTOR_VALID(&bLocal_1495))
	{
		Function_372(&(Local_961[115]), &bLocal_1495, "Drew", 0, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(&uLocal_1501))
		{
			SET_ACTORS_HORSE(&bLocal_1495, &uLocal_1501);
		}
	}
	if (IS_ACTORSET_VALID(&iLocal_4 + 976))
	{
		Function_372(&(Local_961[215]), &iLocal_4 + 976, "R4_Townsfolk", 1, 0x5f5e100, 1);
		Function_368(&(Local_961[215]), 2);
		Function_368(&(Local_961[215]), 1024);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 784))
	{
		Function_372(&(Local_961[315]), &iLocal_4 + 784, "R4_Horse", 0, 0x5f5e100, 1);
		Function_368(&(Local_961[315]), 64);
		Function_368(&(Local_961[315]), 2);
		Function_368(&(Local_961[315]), 128);
	}
	if (IS_ACTORSET_VALID(&uLocal_1253))
	{
		Function_372(&(Local_961[415]), &uLocal_1253, "R4_Horse", 0, 0x5f5e100, 1);
		Function_368(&(Local_961[415]), 64);
		Function_368(&(Local_961[415]), 2);
	}
	return;
}

void Function_368(int iParam0, int iParam1) //Position: 0x16DB8 / 93624
{
	if (iParam1 != 100000000)
	{
		Function_371(&iParam0, iParam1);
	}
	else
	{
		Function_369(&iParam0, 1);
	}
	return;
}

void Function_369(struct<69> Param0) //Position: 0x16DDA / 93658
{
	Param0.f_68 = 0;
	Function_370(&Param0, 2, &bParam1);
	Function_370(&Param0, 4, &bParam1);
	Function_370(&Param0, 8, &bParam1);
	Function_370(&Param0, 16, &bParam1);
	Function_370(&Param0, 32, &bParam1);
	Function_370(&Param0, 64, &bParam1);
	Function_370(&Param0, 128, &bParam1);
	Function_370(&Param0, 256, &bParam1);
	Function_370(&Param0, 512, &bParam1);
	Function_370(&Param0, 1024, &bParam1);
	return;
}

void Function_370(int iParam0, int iParam1, bool bParam2) //Position: 0x16E55 / 93781
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

void Function_371(int iParam0, bool bParam1) //Position: 0x16E94 / 93844
{
	bool bVar0;
	
	Function_39(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_78(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_39(&iParam0 + 68, bVar0);
	return;
}

int Function_372(struct<69> Param0) //Position: 0x16EC1 / 93889
{
	if (!Function_376(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_375(&Param0, &uParam2))
	{
		return 0;
	}
	Function_374(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_373(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_373(var uParam0, int iParam1, int iParam2) //Position: 0x16F07 / 93959
{
	if (iParam1 != 100000000)
	{
		Function_370(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_369(&uParam0, &iParam2);
	}
	return;
}

void Function_374(struct<65> Param0) //Position: 0x16F2E / 93998
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_375(int iParam0, char* cParam1) //Position: 0x16F3B / 94011
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

bool Function_376(struct<61> Param0) //Position: 0x16FC8 / 94152
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

void Function_377() //Position: 0x1717B / 94587
{
	var uVar0;
	
	if (!Function_229(&iLocal_1657))
	{
		Function_227(&iLocal_1657);
	}
	if (bLocal_1717 > 0.0f || bLocal_1717 < 5.0f)
	{
		bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_261(&iLocal_1657) <= bLocal_1717)
	{
		bLocal_1727 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1727)
		{
			case 0x00000001:
				bLocal_1723 = &iLocal_1768;
				uVar0 = "Ranch04_putItOut1";
				break;
			
			case 0x00000002:
				bLocal_1723 = &iLocal_1770;
				uVar0 = "Ranch04_putItOut2";
				break;
			
			case 0x00000003:
				bLocal_1723 = &iLocal_1772;
				uVar0 = "Ranch04_putItOut3";
				break;
			
			case 0x00000004:
				bLocal_1723 = &iLocal_1774;
				uVar0 = "Ranch04_putItOut4";
				break;
			
			case 0x00000005:
				bLocal_1723 = &iLocal_1776;
				uVar0 = "Ranch04_putItOut5";
				break;
			
			case 0x00000006:
				bLocal_1723 = &iLocal_1778;
				uVar0 = "Ranch04_putItOut6";
				break;
		}
		if (IS_ACTOR_VALID(&bLocal_1723))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1723, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(&bLocal_1723))
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_1723, &uVar0, 0, 0, 0, 0, 0, 3);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(&bLocal_1723));
					PRINTSTRING(" saying PUT IT OUT!");
					PRINTNL();
					Function_227(&iLocal_1657);
					bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_378() //Position: 0x17328 / 95016
{
	if (SQUAD_GET(&iLocal_1503) == &iLocal_4 + 784)
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2760))
		{
			if (GET_LAST_HIT_FLAGS(&iLocal_1503) == 4)
			{
				Function_580("R4_Horse_attacked");
				bLocal_765 = true;
			}
			else if (GET_LAST_HIT_FLAGS(&iLocal_1503) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1503)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&iLocal_1503));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1503)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1503));
				}
				Function_218(&iLocal_1503);
				DECOR_SET_BOOL(&iLocal_1503, "HorseRescued", true);
				TASK_CLEAR(&iLocal_1503);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 2896, 4, 1, 0, 1, false);
				TASK_HORSE_ACTION(0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1503, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1805))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
					DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
				}
				TASK_PRIORITY_SET(&iLocal_1503, true);
				DESTROY_OBJECT(&iLocal_4 + 2760);
				Function_351();
			}
		}
	}
	if (SQUAD_GET(&iLocal_1505) == &iLocal_4 + 784)
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2768))
		{
			if (GET_LAST_HIT_FLAGS(&iLocal_1505) == 4)
			{
				Function_580("R4_Horse_attacked");
				bLocal_765 = true;
			}
			else if (GET_LAST_HIT_FLAGS(&iLocal_1505) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1505)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&iLocal_1505));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1505)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1505));
				}
				Function_218(&iLocal_1505);
				DECOR_SET_BOOL(&iLocal_1505, "HorseRescued", true);
				TASK_CLEAR(&iLocal_1505);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 2904, 4, 1, 0, 1, false);
				TASK_HORSE_ACTION(0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1505, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1805))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
					DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
				}
				TASK_PRIORITY_SET(&iLocal_1505, true);
				DESTROY_OBJECT(&iLocal_4 + 2768);
				Function_351();
			}
		}
	}
	if (SQUAD_GET(&iLocal_1507) == &iLocal_4 + 784)
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2776))
		{
			if (GET_LAST_HIT_FLAGS(&iLocal_1507) == 4)
			{
				Function_580("R4_Horse_attacked");
				bLocal_765 = true;
			}
			else if (GET_LAST_HIT_FLAGS(&iLocal_1507) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1507)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&iLocal_1507));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1507)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1507));
				}
				Function_218(&iLocal_1507);
				DECOR_SET_BOOL(&iLocal_1507, "HorseRescued", true);
				TASK_CLEAR(&iLocal_1507);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 2912, 4, 1, 0, 1, false);
				TASK_HORSE_ACTION(0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1507, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1805))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1805);
					DECOR_REMOVE(&fLocal_768, "CurrentHorseGringo");
				}
				TASK_PRIORITY_SET(&iLocal_1507, true);
				DESTROY_OBJECT(&iLocal_4 + 2776);
				Function_351();
			}
		}
	}
	return;
}

void Function_379() //Position: 0x1766D / 95853
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		bLocal_1723 = GET_MOUNT(&Global_54076);
		Function_335(&bLocal_1723);
		if (!IS_ACTOR_VALID(&uLocal_1786))
		{
			uLocal_1786 = &bLocal_1723;
		}
		if (!Function_229(&iLocal_1697))
		{
			if (GET_ACTOR_GAIT_TYPE(&bLocal_1723) == 0)
			{
				Function_227(&iLocal_1697);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1723, Function_380());
				PRINTSTRING("Player's horse playing startle.");
				PRINTNL();
			}
		}
		else if (GET_ACTOR_GAIT_TYPE(&bLocal_1723) == 0)
		{
			if (Function_261(&iLocal_1697) < 2.0f)
			{
				Function_227(&iLocal_1697);
				bLocal_1723 = GET_MOUNT(&Global_54076);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1723, Function_380());
				PRINTSTRING("Player's horse playing startle.");
				PRINTNL();
			}
		}
	}
	else if (IS_ACTOR_VALID(&uLocal_1786))
	{
		GET_VOLUME_CENTER(&iLocal_4 + 1056[0], &Local_1729);
		bLocal_1727 = TASK_SEQUENCE_OPEN();
		TASK_HORSE_ACTION(0, 0);
		TASK_FLEE_COORD(0, &Local_1729, 4, 100.0f, 5.0f, 0);
		TASK_HORSE_ACTION(0, 0);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uLocal_1786, bLocal_1727);
		TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
		uLocal_1786 = "";
	}
	return;
}

var Function_380() //Position: 0x177AA / 96170
{
	int iVar0;
	
	switch (RAND_INT_RANGE(false, 2))
	{
		case 0x00000000:
			iVar0 = "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01";
			break;
		
		case 0x00000001:
			iVar0 = "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02";
			break;
		
		case 0x00000002:
			iVar0 = "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03";
			break;
	}
	return &iVar0;
}

void Function_381(int iParam0) //Position: 0x178A7 / 96423
{
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
	{
		if (ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
		}
		Function_227(&iParam0);
	}
	if (!Function_229(&iParam0))
	{
		Function_227(&iParam0);
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[0]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[11]))
	{
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nnear_fire"))
		{
			if (Function_261(&iParam0) < 3.0f)
			{
				if ((((((((((!IS_ACTOR_RIDING(&Global_54076) && !IS_WEAPON_DRAWN(&Global_54076)) && !IS_ACTOR_CROUCHING(&Global_54076)) && !IS_ACTOR_FLYING(&Global_54076)) && !IS_ACTOR_JUMPING(&Global_54076)) && !IS_ACTOR_THROWING(&Global_54076)) && !IS_ACTOR_WHISTLING(&Global_54076)) && !IS_ACTOR_ON_LADDER(&Global_54076)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076))) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nhighledge")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nledgeplay"))
				{
					if (HAS_ACTION_TREE_LOADED("nnear_fire"))
					{
						if (!ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
						{
							SET_ANIM_SET_FOR_ACTOR(&Global_54076, "nnear_fire", 0);
						}
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "nnear_fire");
					}
					else
					{
						LOG_ERROR("ACT TREE NOT LOADED: This is a problem");
					}
				}
				else
				{
					if (ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
					{
					}
					Function_227(&iParam0);
				}
			}
		}
		else
		{
			if ((((((((((IS_ACTOR_RIDING(&Global_54076) || IS_WEAPON_DRAWN(&Global_54076)) || IS_ACTOR_CROUCHING(&Global_54076)) || IS_ACTOR_FLYING(&Global_54076)) || IS_ACTOR_JUMPING(&Global_54076)) || IS_ACTOR_THROWING(&Global_54076)) || IS_ACTOR_WHISTLING(&Global_54076)) || IS_ACTOR_ON_LADDER(&Global_54076)) || IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076))) || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nhighledge")) || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nledgeplay"))
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "arm_up_pst"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "near_fire/arm_up/arm_up_pst");
				}
				Function_227(&iParam0);
			}
			Function_227(&iParam0);
		}
	}
	else
	{
		if (ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
		}
		Function_227(&iParam0);
	}
	return;
}

void Function_382() //Position: 0x17B41 / 97089
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &fLocal_768, 15, 1);
	iVar0 = LOCATE_ACTORS_IN_VOLUME(&iLocal_4 + 1056[3], &uVar3, 0, 1);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar3));
		if (IS_ACTOR_HORSE(&iVar4))
		{
			if (!SQUAD_GET(&iVar4) != &iLocal_4 + 784 && !&iVar4 != &bLocal_1509)
			{
				if (!GET_TASK_STATUS(&iVar4, 0) != 1)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2304[7], &uVar5);
					bVar2 = TASK_SEQUENCE_OPEN();
					if (IS_ACTOR_MOUNTED(&iVar4))
					{
						SET_ACTION_NODE_FOR_ACTOR(GET_RIDER(&iVar4), "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					}
					TASK_FACE_COORD(0, &uVar5, 0);
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[7], 2, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iVar4, bVar2);
					TASK_SEQUENCE_RELEASE(bVar2, 1);
					if (!IS_ACTOR_IN_ACTORSET(&uLocal_1253, &iVar4))
					{
						ADD_ACTORSET_MEMBER(&uLocal_1253, &iVar4);
						Function_338(&uLocal_1253);
					}
				}
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar3);
	return;
}

void Function_383() //Position: 0x17C77 / 97399
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&bLocal_1493))
	{
		bLocal_1493 = Function_388(3, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	switch (iLocal_1537)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (IS_ACTION_NODE_PLAYING(&bLocal_1493, "pull_pitchfork/bonnie_coughing/cough") || IS_ACTION_NODE_PLAYING(&bLocal_1493, "pull_pitchfork_shoot/bonnie_coughing/cough"))
			{
				if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
				{
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 2896, 1, 0, 0, 1, false);
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2848, 0,5f, 1, 1, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_387();
					Function_396("Ranch04_obj03b");
					iLocal_1537 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(&bLocal_1493, 0) == 0)
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "bonnie_coughing"))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_1493, "pull_pitchfork/bonnie_coughing/cough"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "pull_pitchfork/bonnie_coughing/pst");
					}
					else if (IS_ACTION_NODE_PLAYING(&bLocal_1493, "pull_pitchfork_shoot/bonnie_coughing/cough"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "pull_pitchfork_shoot/bonnie_coughing/pst");
					}
				}
				if (GET_TASK_STATUS(&bLocal_1493, 19) != 1)
				{
					TASK_USE_GRINGO(&bLocal_1493, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2848), "UseCase1", 4294967295, 1);
				}
			}
			else if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
			{
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1493, 1065353216, 1117126656, 1, 1, 0))
				{
					iLocal_1600 = 0;
					iLocal_1537 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (!iLocal_1743)
			{
				Function_384();
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_1493, 1065353216, 1117126656, 1, 1, 0) && iLocal_1798)
				{
					Function_239(&bLocal_1493);
					Function_285(&bLocal_1493, &iLocal_4 + 2304[22], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
					iLocal_1743 = 1;
				}
			}
			break;
	}
	return;
}

void Function_384() //Position: 0x17F2F / 98095
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_1600)
	{
		if (!ACTOR_HAS_ANIM_SET(&bLocal_1493, "carry_bucket"))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 0);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "carry_bucket", 0);
		}
		if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
		{
			bVar0 = RAND_INT_RANGE(false, 6);
			GET_OBJECT_RELATIVE_POSITION(StackVal, &iLocal_4 + 2104[bVar0], Vector(0.0f, 0.0f, -10.0f), &Local_1729);
			bVar1 = TASK_SEQUENCE_OPEN();
			if (IS_ACTOR_RIDING(&bLocal_1493))
			{
				TASK_DISMOUNT(false, 1);
			}
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "carry_bucket/Get_Water_No_Interrupt", &iLocal_4 + 1776[iLocal_15653], -1.0f, 2, 0,2f);
			TASK_GO_NEAR_COORD(false, &iLocal_4 + 1928[bVar03], 1.0f, 4);
			TASK_FACE_COORD(0, &Local_1729, 0);
			TASK_ACTION_PERFORM(false, "carry_bucket/Toss_Water");
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&bLocal_1493);
			TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
			iLocal_1565++;
			if (iLocal_1565 > 4)
			{
				iLocal_1565 = 0;
			}
		}
	}
	else if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1493, 1))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "carry_bucket", 0);
		Function_385(&bLocal_1493);
		iLocal_1600 = 1;
	}
	return;
}

void Function_385(bool bParam0) //Position: 0x1809A / 98458
{
	bool bVar0;
	var uVar1;
	var uVar3;
	bool bVar4;
	
	AI_GOAL_LOOK_AT_ACTOR(&bParam0, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
	RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
	SET_ANIM_SET_FOR_ACTOR(&bParam0, "carry_bucket", 0);
	uVar3 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &fLocal_768, Function_55(), "$/fragments/p_gen_bucket03x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	if (!IS_OBJECT_VALID(&uVar3))
	{
		LOG_ERROR("Failed to create bucket in ActorFightFire!");
		return;
	}
	SET_ACTOR_PROOF(&bParam0, 16);
	Function_386(&uVar3, 0);
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&bParam0), "Water_Bucket_Ref", &uVar3);
	DECOR_SET_OBJECT(&uVar3, "Water_Bucket_User", GET_OBJECT_FROM_ACTOR(&bParam0));
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar3, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar3, GET_OBJECT_FROM_ACTOR(&bParam0), 0);
	ATTACH_OBJECTS_USING_LOCATOR(&uVar3, GET_OBJECT_FROM_ACTOR(&bParam0), "wrist_l_Attachment", "grab", 4294967295);
	SET_ACTION_NODE_FOR_ACTOR(&bParam0, "carry_bucket/Bucket_Empty");
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bParam0, 0, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bParam0);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bParam0, &iLocal_4 + 1056[7]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bParam0, &iLocal_4 + 1056[8]);
	SET_ACTOR_VOLUME_PARAMETERS(&bParam0, 2, 1);
	GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &uVar1);
	bVar4 = RAND_INT_RANGE(false, 6);
	bVar0 = TASK_SEQUENCE_OPEN();
	if (IS_ACTOR_RIDING(&bParam0))
	{
		TASK_DISMOUNT(false, 1);
	}
	TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "carry_bucket/Get_Water_No_Interrupt", &iLocal_4 + 1776[iLocal_15653], -1.0f, 2, 0,2f);
	TASK_GO_NEAR_COORD(false, &iLocal_4 + 1928[bVar43], 1.0f, 4);
	TASK_FACE_COORD(0, &uVar1, 0);
	TASK_ACTION_PERFORM(false, "carry_bucket/Toss_Water");
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&bParam0);
	TASK_SEQUENCE_PERFORM(&bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	iLocal_1565++;
	if (iLocal_1565 > 4)
	{
		iLocal_1565 = 0;
	}
	return;
}

void Function_386(bool bParam0, bool bParam1) //Position: 0x18306 / 99078
{
	var uVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(&bParam0, "water_bucket");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bVar1 = GET_GRINGO_FROM_OBJECT(&uVar0);
			if (IS_GRINGO_VALID(&bVar1))
			{
				GRINGO_ALLOW_ACTIVATION(&bVar1, bParam1);
			}
		}
	}
	return;
}

void Function_387() //Position: 0x18350 / 99152
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_grabs1Horse", "Ranch04_grabs1Horse", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_388(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x1839F / 99231
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
		if (!Function_167(&(Global_43791[Global_46722[3]]), 4))
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
		Function_240(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_395(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_391(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &iParam3;
			Var3.f_4 = &iParam4;
			Var3.f_8 = &iParam5;
			if (Function_75(StackVal, Var3))
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
		Function_390(&bVar1, 0, 0, 0, 0);
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
		Function_389(&bVar1, 0);
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

void Function_389(var uParam0, bool bParam1) //Position: 0x188DF / 100575
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_390(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x18901 / 100609
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

var Function_391(int iParam0, int iParam1) //Position: 0x18962 / 100706
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_313(iParam0))
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
						Function_392(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_392(var uParam0, int iParam1) //Position: 0x189F0 / 100848
{
	Function_394(&uParam0);
	Function_393(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_393(int iParam0) //Position: 0x18A1C / 100892
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_394(int iParam0) //Position: 0x18A42 / 100930
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

var Function_395(int iParam0, var uParam1) //Position: 0x18B18 / 101144
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

void Function_396(bool bParam0) //Position: 0x18BBE / 101310
{
	if (!IS_STRING_VALID(&iLocal_1625))
	{
		if (!Function_229(&iLocal_1549))
		{
			Function_227(&iLocal_1549);
		}
		iLocal_1625 = &bParam0;
	}
	else if (!STRINGS_ARE_EQUAL(&iLocal_1625, &bParam0))
	{
		if (!Function_229(&iLocal_1549))
		{
			Function_227(&iLocal_1549);
		}
		iLocal_1625 = &bParam0;
	}
	return;
}

bool Function_397(struct<2> Param0, float fParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, char* cParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x18C0E / 101390
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_364(&Global_54076, &iParam3, fParam2))
	{
		Function_580(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_364(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_404(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_403(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_402(1);
			}
			if (IS_LAYOUTREF_VALID(&cParam8))
			{
				Function_401(&cParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_401(&iParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&cParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &iParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&iParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &iParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_404(1))
	{
		Function_400(1);
		if (!Function_399())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_398();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&cParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&cParam8))
			{
				Function_401(&cParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_401(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_398() //Position: 0x18DB7 / 101815
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

bool Function_399() //Position: 0x18DE5 / 101861
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

void Function_400(bool bParam0) //Position: 0x18E2C / 101932
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

void Function_401(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x18E93 / 102035
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

void Function_402(bool bParam0) //Position: 0x18F4E / 102222
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

void Function_403(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x18FB5 / 102325
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
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_404(bool bParam0) //Position: 0x1904A / 102474
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_15(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_405(int iParam0) //Position: 0x19094 / 102548
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	var uVar4;
	
	if (Function_424())
	{
		if (!iParam0)
		{
			Function_423();
			Function_422();
			Function_421();
			if (IS_VOLUME_VALID(&iLocal_4 + 1056[6]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[6]))
				{
					if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&uLocal_1651)))
					{
						if (ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
						{
							RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						}
						DECOR_SET_BOOL(&Global_54076, "NoGringoCamera", true);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_1651), true);
						uVar0 = Function_237(&bLocal_1493);
						if (IS_OBJECT_VALID(&uVar0))
						{
							Function_236(&uVar0);
							DESTROY_OBJECT(&uVar0);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1493);
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 0);
						if (!bLocal_1745)
						{
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "pull_pitchfork", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "pull_pitchfork_shoot", 0);
						}
						SET_ACTOR_PROOF(&bLocal_1493, 16);
						iLocal_1537 = 0;
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 0);
						TASK_USE_GRINGO(&bLocal_1493, GET_GRINGO_FROM_OBJECT(&uLocal_1651), "nBonnieUse", true, 1);
						SNAP_ACTOR_TO_GRINGO(&bLocal_1493, &uLocal_1651, "nBonnieUse", true, 0, 0);
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "NoGringoCamera"))
					{
						DECOR_REMOVE(&Global_54076, "NoGringoCamera");
					}
					Function_381(&iLocal_1673);
					if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&uLocal_1651)))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 0);
						iLocal_1600 = 0;
						Function_384();
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_1651), false);
					}
				}
			}
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_1651))
				{
					if (iLocal_1746)
					{
						iLocal_1746 = 0;
					}
					else
					{
						if (ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
						{
							RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						}
						Function_315(&iLocal_1807, 57, 0, 4294967295, 4294967295);
						RESET_RMPTFX_IN_VOLUME(&iLocal_4 + 1392[0]);
						if (!bLocal_1745)
						{
							if (UNK_0xCDA6BB6C())
							{
								CANCEL_CUTSCENE_TUNER_PLAYBACK();
							}
							else if (IS_OBJECT_VALID(&iLocal_752 + 24))
							{
								DESTROY_OBJECT(&iLocal_752 + 24);
							}
							GET_OBJECT_POSITION(&iLocal_4 + 2304[30], &Local_1729);
							ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 0, 0, 1, 0);
							Function_309(1, 0, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
							ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
							fLocal_1720 = 0,15f;
							(&iLocal_752 + 24) = Function_415(&iLocal_4, 0, &Global_54076, 1, 0, 0);
							if (IS_OBJECT_VALID(&iLocal_752 + 24))
							{
							}
							else
							{
								LOG_ERROR("Ranch04_CSPullPitchfork - Failed to create Ranch04_CSPullPitchfork_cutscene");
							}
						}
						else
						{
							if (UNK_0xCDA6BB6C())
							{
								CANCEL_CUTSCENE_TUNER_PLAYBACK();
							}
							else if (IS_OBJECT_VALID(&iLocal_752 + 24))
							{
								DESTROY_OBJECT(&iLocal_752 + 24);
							}
							GET_OBJECT_POSITION(&iLocal_4 + 2304[30], &Local_1729);
							ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 0, 0, 1, 0);
							Function_309(1, 0, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
							ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
							fLocal_1720 = 0.0f;
							*(&iLocal_752 + 24) = Function_409(&iLocal_4, 0, &Global_54076, 1, 0, 0);
							if (IS_OBJECT_VALID(&iLocal_752 + 24))
							{
							}
							else
							{
								LOG_ERROR("Ranch04_CSPullPitchfork - Failed to create Ranch04_CSPullPitchforkShoot_cutscene");
							}
						}
						Function_227(&iLocal_1661);
						iLocal_1742 = 0;
						iParam0 = 1;
						bLocal_1796 = false;
					}
				}
			}
			else if (!iLocal_1746)
			{
				iLocal_1746 = 1;
			}
		}
		else
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[30], &Local_1729);
			ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 0, 0, 1, 0);
			Function_425();
			Function_377();
			if (!bLocal_1796)
			{
				if (Function_261(&iLocal_1541) < 2.0f && Function_261(&iLocal_1541) > 9.0f)
				{
					if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
					{
						bLocal_1796 = true;
						if (!HUD_IS_FADED() || !HUD_IS_FADING())
						{
							Function_320(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
					}
				}
			}
			else if (HUD_IS_FADED())
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
					DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&Global_54076)));
					Function_285(&Global_54076, &iLocal_4 + 2304[29], 1, 1, 1);
				}
			}
			if (!DECOR_CHECK_EXIST(&Global_54076, "_PullingPitchfork"))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "pull_pitchfork") || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "pull_pitchfork_shoot"))
				{
					DECOR_SET_BOOL(&Global_54076, "_PullingPitchfork", true);
				}
			}
			if (DECOR_GET_BOOL(&Global_54076, "nbOpenDoor"))
			{
				iLocal_1788 = 1;
			}
			if (iLocal_1788 == 1)
			{
				if (!IS_ACTOR_PERFORMING_LINKED_ANIMATION(&bLocal_1493))
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "kneel_cough_pst"))
					{
						if (!bLocal_1745)
						{
						}
					}
				}
			}
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (!iLocal_1742)
				{
					if (DECOR_GET_BOOL(&uLocal_1651, "nbOpenDoor"))
					{
						if (!Function_229(&iLocal_1701))
						{
							Function_227(&iLocal_1701);
						}
						else if (Function_261(&iLocal_1701) < fLocal_1720)
						{
							Local_1267[68].f_44 = 0;
							Local_1267[78].f_44 = 0;
							Local_1267[68].f_48 = 1;
							Local_1267[78].f_48 = 1;
							SET_DOOR_AUTO_CLOSE(&(Local_1267[68]), 0);
							SET_DOOR_AUTO_CLOSE(&(Local_1267[78]), 0);
							Function_408(&(Local_1267[68]), 0);
							Function_408(&(Local_1267[78]), 0);
							Local_1267[128].f_48 = 1;
							Local_1267[138].f_48 = 1;
							GET_OBJECT_POSITION(&iLocal_4 + 2304[10], &Var2);
							uLocal_1635 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&fLocal_768, "m_StallFireF1", "script_Hennigans_BarnStall01", Var2);
							UNK_0x6745191B(StackVal, &uLocal_1635, Vector(0.0f, 0.0f, 0.0f));
							GET_OBJECT_POSITION(&iLocal_4 + 2304[10], &Var2);
							uLocal_1637 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&fLocal_768, "m_StallFireF2", "script_Hennigans_BarnStall06", Var2);
							UNK_0x6745191B(StackVal, &uLocal_1637, Vector(0.0f, 0.0f, 0.0f));
							uLocal_1535 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &fLocal_768, "nDoorSmoke", "script_Hennigans_BarnDoorOpen", Vector(-846.0f, 94.0f, 2456.0f));
							Function_77();
							UNK_0x6745191B(&uLocal_1535, Function_77());
							if (!bLocal_1796)
							{
								Function_407();
							}
							if (DECOR_CHECK_EXIST(&Global_54076, "NoGringoCamera"))
							{
								DECOR_REMOVE(&Global_54076, "NoGringoCamera");
							}
							iLocal_1742 = 1;
						}
					}
				}
			}
			else
			{
				if (!DECOR_CHECK_EXIST(&fLocal_768, "DoorCutsceneComplete"))
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "kneel_cough_pst"))
					{
						if (!bLocal_1745)
						{
						}
					}
					iLocal_1537 = 1;
					GET_OBJECT_POSITION(&iLocal_4 + 2304[30], &Local_1729);
					ENABLE_GAME_CAMERA_FOCUS(Local_1729, -1.0f, 0, 0, 1, 0);
					Function_282(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					ACTOR_END_FORCE_HOLSTER(&Global_54076);
					DECOR_REMOVE(&Global_54076, "_PullingPitchfork");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_752 + 24))
					{
						DESTROY_OBJECT(&iLocal_752 + 24);
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "NoGringoCamera"))
					{
						DECOR_REMOVE(&Global_54076, "NoGringoCamera");
					}
					Function_227(&iLocal_1673);
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
					{
						uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bVar1);
						if (IS_ACTOR_VALID(&uVar4))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar4)))
							{
								ADD_BLIP_FOR_ACTOR(&uVar4, 325, 0, 2, 0);
								SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&uVar4), "BLIP_HORSE");
							}
						}
						bVar1++;
					}
					TASK_PRIORITY_SET(&bLocal_1493, true);
					DECOR_SET_BOOL(&fLocal_768, "DoorCutsceneComplete", true);
				}
				if (!IS_ACTOR_VALID(&bLocal_1511))
				{
					bLocal_1511 = GET_ACTOR_FROM_ACTORSET(&uLocal_1255, (GET_ACTORSET_SIZE(&uLocal_1255) - 1));
					if (IS_ACTOR_VALID(&bLocal_1511))
					{
						uVar0 = Function_237(&bLocal_1511);
						if (IS_OBJECT_VALID(&uVar0))
						{
							Function_236(&uVar0);
							DESTROY_OBJECT(&uVar0);
							DECOR_REMOVE_ALL(GET_OBJECT_FROM_ACTOR(&bLocal_1511));
						}
						AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1511, 1);
						REMOVE_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1511);
						Function_338(&uLocal_1255);
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1511, 0);
						iLocal_1538 = 0;
						iLocal_1517 = "";
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1511);
					}
				}
				if (!IS_ACTOR_VALID(&bLocal_1513))
				{
					bLocal_1513 = GET_ACTOR_FROM_ACTORSET(&uLocal_1255, (GET_ACTORSET_SIZE(&uLocal_1255) - 1));
					if (IS_ACTOR_VALID(&bLocal_1513))
					{
						uVar0 = Function_237(&bLocal_1513);
						if (IS_OBJECT_VALID(&uVar0))
						{
							Function_236(&uVar0);
							DESTROY_OBJECT(&uVar0);
							DECOR_REMOVE_ALL(GET_OBJECT_FROM_ACTOR(&bLocal_1513));
						}
						AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1513, 1);
						REMOVE_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1513);
						Function_338(&uLocal_1255);
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1513, 0);
						iLocal_1539 = 0;
						iLocal_1519 = "";
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1513);
					}
				}
				Function_367();
				iParam0 = 1;
				if (IS_BLIP_VALID(&bLocal_1523))
				{
					REMOVE_BLIP(&bLocal_1523);
				}
				if (IS_OBJECT_VALID(&uLocal_1651))
				{
					DESTROY_OBJECT(&uLocal_1651);
				}
				if (!iLocal_1742)
				{
					Local_1267[68].f_44 = 0;
					Local_1267[78].f_44 = 0;
					Local_1267[68].f_48 = 1;
					Local_1267[78].f_48 = 1;
					SET_DOOR_AUTO_CLOSE(&(Local_1267[68]), 0);
					SET_DOOR_AUTO_CLOSE(&(Local_1267[78]), 0);
					Function_408(&(Local_1267[68]), 0);
					Function_408(&(Local_1267[78]), 0);
					Local_1267[128].f_48 = 1;
					Local_1267[138].f_48 = 1;
					GET_OBJECT_POSITION(&iLocal_4 + 2304[10], &Var2);
					uLocal_1635 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&fLocal_768, "m_StallFireF1", "script_Hennigans_BarnStall01", Var2);
					UNK_0x6745191B(StackVal, &uLocal_1635, Vector(0.0f, 0.0f, 0.0f));
					GET_OBJECT_POSITION(&iLocal_4 + 2304[10], &Var2);
					uLocal_1637 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&fLocal_768, "m_StallFireF2", "script_Hennigans_BarnStall06", Var2);
					UNK_0x6745191B(StackVal, &uLocal_1637, Vector(0.0f, 0.0f, 0.0f));
					uLocal_1535 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &fLocal_768, "nDoorSmoke", "script_Hennigans_BarnDoorOpen", Vector(-846.0f, 94.0f, 2456.0f));
					Function_77();
					UNK_0x6745191B(&uLocal_1535, Function_77());
					iLocal_1742 = 1;
				}
				if (HUD_IS_FADED())
				{
					Function_251(1.0f);
				}
				else if (!HUD_IS_FADING())
				{
					Function_406();
					Function_275(&iLocal_1557);
					Function_315(&iLocal_1807, 57, 0, 4294967295, 4294967295);
					Function_318(9);
				}
				return 1;
			}
		}
	}
	return 0;
}

void Function_406() //Position: 0x19C74 / 105588
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_407() //Position: 0x19C80 / 105600
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_barndoorOpen", "Ranch04_barndoorOpen", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408(var uParam0, bool bParam1) //Position: 0x19CD1 / 105681
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	if (&bParam1)
	{
		DECOR_SET_BOOL(&uParam0, "pickMe", true);
	}
	else
	{
		DECOR_SET_BOOL(&uParam0, "unpickMe", true);
	}
	return;
}

var Function_409(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19D0F / 105743
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_CSPullPitchforkShoot", 4, 1);
	}
	Function_410(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 6.0f, 4294967295, 4, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_410(var uParam0, var uParam1) //Position: 0x19DA8 / 105896
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_414(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_413(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_412(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_411(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 3, &uParam1, "_PullingPitchfork", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 3, 0, 1,4f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2,8f, 2);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 6.0f, 3, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 12,6f, 0, 0.0f);
	return;
}

void Function_411(int iParam0) //Position: 0x19E59 / 106073
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-844,3215f, 91,58705f, 2452,855f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,000412f, 1,180611f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 75.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_412(int iParam0) //Position: 0x19F10 / 106256
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-849,7648f, 92,02519f, 2446,735f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,019998f, -2,852358f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 3);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_413(int iParam0) //Position: 0x19FC3 / 106435
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-849,2345f, 91,08173f, 2447,779f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,145614f, -2,850936f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_414(bool bParam0) //Position: 0x1A072 / 106610
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-846,1195f, 91,56859f, 2453,19f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,015925f, 0,733807f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&bParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&bParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&bParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&bParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&bParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&bParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&bParam0, 16.0f);
	return;
}

var Function_415(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A121 / 106785
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_CSPullPitchfork", 4, 1);
	}
	Function_416(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 6.0f, 4294967295, 4, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_416(var uParam0, var uParam1) //Position: 0x1A1B5 / 106933
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_420(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_419(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_418(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_417(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 3, &uParam1, "_PullingPitchfork", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 3, 0, 3,2f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2,8f, 2);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 6.0f, 3, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 12,6f, 0, 0.0f);
	return;
}

void Function_417(int iParam0) //Position: 0x1A266 / 107110
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-844,3215f, 91,58707f, 2452,855f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,000409f, 1,180727f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 75.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_418(int iParam0) //Position: 0x1A31D / 107293
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-849,7632f, 92,0252f, 2446,768f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,019998f, -2,852358f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 3);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_419(int iParam0) //Position: 0x1A3D0 / 107472
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-849,2345f, 91,08173f, 2447,779f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,145614f, -2,850936f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 1266.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_420(var uParam0) //Position: 0x1A47F / 107647
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-846,1195f, 91,56859f, 2453,19f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,015925f, 0,733807f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 7,7f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

void Function_421() //Position: 0x1A52E / 107822
{
	if (IS_PHYSINST_VALID(&iLocal_1799))
	{
		if (IS_PROP_BROKEN(&iLocal_1799) || GET_PROP_HEALTH(&iLocal_1799) > 1.0f)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_1651), false);
			DESTROY_OBJECT(&uLocal_1651);
			uLocal_1651 = CREATE_GRINGO_IN_LAYOUT(&iLocal_4, "pull_pitchfork_shoot", "pull_pitchfork_shoot", Local_1735, Local_1738);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_1651), false);
			iLocal_1799 = "";
			bLocal_1745 = true;
		}
	}
	else if (!bLocal_1745)
	{
		if (IS_OBJECT_VALID(&uLocal_1651))
		{
			iLocal_1799 = LOCATE_PHYSINST_OF_TYPE(Local_1735, 5.0f, "p_gen_pitchForkBreak01x", 1);
			SET_PROP_HEALTH(&iLocal_1799, 1.0f);
		}
	}
	return;
}

void Function_422() //Position: 0x1A5FF / 108031
{
	var uVar0;
	
	if (!Function_229(&iLocal_1657))
	{
		Function_227(&iLocal_1657);
	}
	if (bLocal_1717 > 0.0f || bLocal_1717 < 5.0f)
	{
		bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
	}
	if (Function_261(&iLocal_1657) <= bLocal_1717)
	{
		bLocal_1727 = RAND_INT_RANGE(true, 6);
		switch (bLocal_1727)
		{
			case 0x00000001:
				bLocal_1723 = &iLocal_1768;
				uVar0 = "Ranch04_jonNoHelpLab1";
				break;
			
			case 0x00000002:
				bLocal_1723 = &iLocal_1770;
				uVar0 = "Ranch04_jonNoHelpLab2";
				break;
			
			case 0x00000003:
				bLocal_1723 = &iLocal_1772;
				uVar0 = "Ranch04_jonNoHelpLab3";
				break;
			
			case 0x00000004:
				bLocal_1723 = &iLocal_1774;
				uVar0 = "Ranch04_jonNoHelpLab4";
				break;
			
			case 0x00000005:
				bLocal_1723 = &iLocal_1776;
				uVar0 = "Ranch04_jonNoHelpLab5";
				break;
			
			case 0x00000006:
				bLocal_1723 = &iLocal_1778;
				uVar0 = "Ranch04_jonNoHelpLab6";
				break;
		}
		if (IS_ACTOR_VALID(&bLocal_1723))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1723, 25.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(&bLocal_1723))
				{
					SAY_SINGLE_LINE_STRING(&bLocal_1723, &uVar0, true, true, 3, 0, true, false);
					PRINTSTRING(GET_ACTOR_ENUM_STRING(&bLocal_1723));
					PRINTSTRING(" saying NO HELP!");
					PRINTNL();
					Function_227(&iLocal_1657);
					bLocal_1717 = RAND_FLOAT_RANGE(0,5f, 4.0f);
				}
			}
		}
	}
	return;
}

void Function_423() //Position: 0x1A7C1 / 108481
{
	if (SQUAD_GET(&iLocal_1503) == &iLocal_4 + 784)
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2760))
		{
			if (GET_LAST_HIT_FLAGS(&iLocal_1503) == 4)
			{
				Function_580("R4_Horse_attacked");
				bLocal_765 = true;
			}
			else if (GET_LAST_HIT_FLAGS(&iLocal_1503) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1503)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&iLocal_1503));
				}
				TASK_CLEAR(&iLocal_1503);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_STAND_STILL(false, 0,25f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1503, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				TASK_PRIORITY_SET(&iLocal_1503, true);
				CLEAR_LAST_HIT(&iLocal_1503);
			}
		}
	}
	if (SQUAD_GET(&iLocal_1505) == &iLocal_4 + 784)
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2768))
		{
			if (GET_LAST_HIT_FLAGS(&iLocal_1505) == 4)
			{
				Function_580("R4_Horse_attacked");
				bLocal_765 = true;
			}
			else if (GET_LAST_HIT_FLAGS(&iLocal_1505) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1505)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&iLocal_1505));
				}
				TASK_CLEAR(&iLocal_1505);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_STAND_STILL(false, 0,25f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1505, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				TASK_PRIORITY_SET(&iLocal_1505, true);
				CLEAR_LAST_HIT(&iLocal_1505);
			}
		}
	}
	if (SQUAD_GET(&iLocal_1507) == &iLocal_4 + 784)
	{
		if (IS_OBJECT_VALID(&iLocal_4 + 2776))
		{
			if (GET_LAST_HIT_FLAGS(&iLocal_1507) == 4)
			{
				Function_580("R4_Horse_attacked");
				bLocal_765 = true;
			}
			else if (GET_LAST_HIT_FLAGS(&iLocal_1507) == 2)
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1507)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&iLocal_1507));
				}
				TASK_CLEAR(&iLocal_1507);
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_STAND_STILL(false, 0,25f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_HORSE_ACTION(0, 0);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1507, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
				TASK_PRIORITY_SET(&iLocal_1507, true);
				CLEAR_LAST_HIT(&iLocal_1507);
			}
		}
	}
	return;
}

bool Function_424() //Position: 0x1AF1D / 110365
{
	if (bLocal_1632)
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[14]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[19])) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[20]))
		{
			if (Function_229(&iLocal_1705))
			{
				Function_226(&iLocal_1705);
			}
			bLocal_1632 = false;
			return 1;
		}
		if (IS_BLIP_VALID(&bLocal_1523))
		{
			REMOVE_BLIP(&bLocal_1523);
		}
		Function_396("Ranch04_barnDoorReturn");
		if (!Function_229(&iLocal_1705))
		{
			Function_227(&iLocal_1705);
		}
		else if (Function_261(&iLocal_1705) < 3.0f)
		{
			Function_580("Ranch04_barnAbandonedS4");
			bLocal_765 = true;
		}
		return 0;
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[15]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[16]))
	{
		bLocal_1632 = true;
		return 0;
	}
	return 1;
	return 0;
}

bool Function_425() //Position: 0x1B01C / 110620
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	bVar1 = true;
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bVar0);
		if (GET_TASK_STATUS(&uVar2, 19) != 1)
		{
			bVar1 = false;
		}
		bVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	if (Function_261(&iLocal_1541) < 0,7f)
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
		{
			uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bVar0);
			if (IS_ACTOR_VALID(&uVar3))
			{
				switch (bVar0)
				{
					case 0x00000000:
						if (Function_261(&iLocal_1541) < 0,25f)
						{
							if (!GET_TASK_STATUS(&uVar3, 19) != 1)
							{
								TASK_USE_GRINGO(&uVar3, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760), "UseCase1", 4294967295, 1);
								SNAP_ACTOR_TO_GRINGO(&uVar3, &iLocal_4 + 2760, "UseCase1", true, 0, 0);
								GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760), "ButtSlap", 0);
								SET_ALLOW_RIDE_BY_PLAYER(&uVar3, 0);
								DECOR_SET_BOOL(&uVar3, "CanBeLasso", true);
								DECOR_SET_BOOL(&uVar3, "BeLassoBounceOff", true);
								AI_SET_NAV_PATHFINDING_ENABLED(&uVar3, 0);
								AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uVar3, 0, 0);
								ANIMAL_ACTOR_SET_DOCILE(&uVar3, 0);
								SET_ACTOR_FLY_FX(&uVar3, 0);
								REMOVE_HORSE_ACCESSORY(&uVar3, 3);
								iLocal_1503 = &uVar3;
								Function_227(&iLocal_1541);
							}
						}
						break;
					
					case 0x00000001:
						if (Function_261(&iLocal_1541) < 0,25f)
						{
							if (!GET_TASK_STATUS(&uVar3, 19) != 1)
							{
								TASK_USE_GRINGO(&uVar3, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768), "UseCase1", 4294967295, 1);
								SNAP_ACTOR_TO_GRINGO(&uVar3, &iLocal_4 + 2768, "UseCase1", true, 0, 0);
								GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768), "ButtSlap", 0);
								SET_ALLOW_RIDE_BY_PLAYER(&uVar3, 0);
								DECOR_SET_BOOL(&uVar3, "CanBeLasso", true);
								DECOR_SET_BOOL(&uVar3, "BeLassoBounceOff", true);
								AI_SET_NAV_PATHFINDING_ENABLED(&uVar3, 0);
								AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uVar3, 0, 0);
								ANIMAL_ACTOR_SET_DOCILE(&uVar3, 0);
								SET_ACTOR_FLY_FX(&uVar3, 0);
								REMOVE_HORSE_ACCESSORY(&uVar3, 3);
								iLocal_1505 = &uVar3;
								Function_227(&iLocal_1541);
							}
						}
						break;
					
					case 0x00000002:
						if (Function_261(&iLocal_1541) < 0,25f)
						{
							if (!GET_TASK_STATUS(&uVar3, 19) != 1)
							{
								TASK_USE_GRINGO(&uVar3, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776), "UseCase1", 4294967295, 1);
								SNAP_ACTOR_TO_GRINGO(&uVar3, &iLocal_4 + 2776, "UseCase1", true, 0, 0);
								GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776), "ButtSlap", 0);
								SET_ALLOW_RIDE_BY_PLAYER(&uVar3, 0);
								DECOR_SET_BOOL(&uVar3, "CanBeLasso", true);
								DECOR_SET_BOOL(&uVar3, "BeLassoBounceOff", true);
								AI_SET_NAV_PATHFINDING_ENABLED(&uVar3, 0);
								AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uVar3, 0, 0);
								ANIMAL_ACTOR_SET_DOCILE(&uVar3, 0);
								SET_ACTOR_FLY_FX(&uVar3, 0);
								REMOVE_HORSE_ACCESSORY(&uVar3, 3);
								iLocal_1507 = &uVar3;
								Function_227(&iLocal_1541);
							}
						}
						break;
					}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_426() //Position: 0x1B34B / 111435
{
	Function_439(iLocal_750);
	Function_430(StackVal, Function_439(iLocal_750), iLocal_750, Global_46736[2], Function_438(iLocal_750), 0);
	MEMORY_ALLOW_SHOOTING(&bLocal_1493, false);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bLocal_1493, 0, 0);
	if (IS_OBJECT_VALID(&iLocal_4 + 2816))
	{
		DESTROY_OBJECT(&iLocal_4 + 2816);
	}
	Function_315(&iLocal_1807, 57, 0, 4294967295, 4294967295);
	TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&bLocal_1493, &iLocal_4 + 2824, "UseCase1", true, 0, 0);
	Function_367();
	Function_429();
	Function_428();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	TASK_PRIORITY_SET(&bLocal_1493, true);
	Function_170(114699);
	Function_192(1, 1, 0);
	Function_427(iLocal_750);
	return;
}

void Function_427(int iParam0) //Position: 0x1B3FB / 111611
{
	strcpy(&Local_1267[08] + 8, "barn01", 16);
	strcpy(&Local_1267[18] + 8, "barn01", 16);
	strcpy(&Local_1267[28] + 8, "barn01", 16);
	strcpy(&Local_1267[38] + 8, "barn01", 16);
	strcpy(&Local_1267[48] + 8, "barn01props", 16);
	strcpy(&Local_1267[58] + 8, "barn01props", 16);
	strcpy(&Local_1267[68] + 8, "barn02", 16);
	strcpy(&Local_1267[78] + 8, "barn02", 16);
	strcpy(&Local_1267[88] + 8, "barn02", 16);
	strcpy(&Local_1267[98] + 8, "barn02", 16);
	strcpy(&Local_1267[128] + 8, "stable01", 16);
	strcpy(&Local_1267[138] + 8, "stable01", 16);
	Local_1267[08].f_40 = 1;
	Local_1267[18].f_40 = 2;
	Local_1267[28].f_40 = 3;
	Local_1267[38].f_40 = 4;
	Local_1267[48].f_40 = 5;
	Local_1267[58].f_40 = 6;
	Local_1267[68].f_40 = 7;
	Local_1267[78].f_40 = 8;
	Local_1267[88].f_40 = 9;
	Local_1267[98].f_40 = 10;
	Local_1267[128].f_40 = 1;
	Local_1267[138].f_40 = 2;
	Local_1267[08].f_52 = 0;
	Local_1267[18].f_52 = 0;
	Local_1267[28].f_52 = 0;
	Local_1267[38].f_52 = 0;
	Local_1267[48].f_52 = 0;
	Local_1267[58].f_52 = 0;
	Local_1267[68].f_52 = 1;
	Local_1267[78].f_52 = 0;
	Local_1267[88].f_52 = 0;
	Local_1267[98].f_52 = 0;
	Local_1267[128].f_52 = 0;
	Local_1267[138].f_52 = 0;
	switch (iParam0)
	{
		case 0x00000000:
			Local_1267[08].f_44 = 0;
			Local_1267[18].f_44 = 0;
			Local_1267[28].f_44 = 0;
			Local_1267[38].f_44 = 0;
			Local_1267[48].f_44 = 0;
			Local_1267[58].f_44 = 0;
			Local_1267[68].f_44 = 0;
			Local_1267[78].f_44 = 0;
			Local_1267[88].f_44 = 0;
			Local_1267[98].f_44 = 0;
			Local_1267[128].f_44 = 0;
			Local_1267[138].f_44 = 0;
			Local_1267[08].f_48 = 0;
			Local_1267[18].f_48 = 0;
			Local_1267[28].f_48 = 0;
			Local_1267[38].f_48 = 0;
			Local_1267[48].f_48 = 0;
			Local_1267[58].f_48 = 0;
			Local_1267[68].f_48 = 0;
			Local_1267[78].f_48 = 0;
			Local_1267[88].f_48 = 0;
			Local_1267[98].f_48 = 0;
			Local_1267[128].f_48 = 0;
			Local_1267[138].f_48 = 0;
			Local_1267[08].f_56 = 1;
			Local_1267[18].f_56 = 1;
			Local_1267[28].f_56 = 1;
			Local_1267[38].f_56 = 1;
			Local_1267[48].f_56 = 1;
			Local_1267[58].f_56 = 1;
			Local_1267[68].f_56 = 0;
			Local_1267[78].f_56 = 0;
			Local_1267[88].f_56 = 0;
			Local_1267[98].f_56 = 0;
			Local_1267[128].f_56 = 0;
			Local_1267[138].f_56 = 0;
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			Local_1267[08].f_44 = 0;
			Local_1267[18].f_44 = 0;
			Local_1267[28].f_44 = 0;
			Local_1267[38].f_44 = 0;
			Local_1267[48].f_44 = 0;
			Local_1267[58].f_44 = 0;
			Local_1267[68].f_44 = 1;
			Local_1267[78].f_44 = 1;
			Local_1267[88].f_44 = 1;
			Local_1267[98].f_44 = 1;
			Local_1267[128].f_44 = 0;
			Local_1267[138].f_44 = 0;
			Local_1267[08].f_48 = 1;
			Local_1267[18].f_48 = 1;
			Local_1267[28].f_48 = 1;
			Local_1267[38].f_48 = 1;
			Local_1267[48].f_48 = 1;
			Local_1267[58].f_48 = 1;
			Local_1267[68].f_48 = 0;
			Local_1267[78].f_48 = 0;
			Local_1267[88].f_48 = 0;
			Local_1267[98].f_48 = 0;
			Local_1267[128].f_48 = 0;
			Local_1267[138].f_48 = 0;
			Local_1267[08].f_56 = 0;
			Local_1267[18].f_56 = 0;
			Local_1267[28].f_56 = 0;
			Local_1267[38].f_56 = 0;
			Local_1267[48].f_56 = 0;
			Local_1267[58].f_56 = 0;
			Local_1267[68].f_56 = 1;
			Local_1267[78].f_56 = 1;
			Local_1267[88].f_56 = 1;
			Local_1267[98].f_56 = 1;
			Local_1267[128].f_56 = 1;
			Local_1267[138].f_56 = 1;
			break;
	}
	return;
}

void Function_428() //Position: 0x1B89D / 112797
{
	if (!IS_OBJECT_VALID(&uLocal_1651))
	{
		uLocal_1651 = CREATE_GRINGO_IN_LAYOUT(&iLocal_4, "pull_pitchfork", "pull_pitchfork", Local_1735, Local_1738);
	}
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_1651), false);
	iLocal_1799 = LOCATE_PHYSINST_OF_TYPE(Local_1735, 5.0f, "p_gen_pitchForkBreak01x", 1);
	SET_PROP_HEALTH(&iLocal_1799, 1.0f);
	return;
}

void Function_429() //Position: 0x1B91F / 112927
{
	if (IS_OBJECT_VALID(&iLocal_4 + 2784))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 2784, &Local_1735);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 2784, &Local_1738);
		DESTROY_OBJECT(&iLocal_4 + 2784);
	}
	return;
}

void Function_430(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1B954 / 112980
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
	if (iParam2 != Global_53524.f_48 && !Function_437())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_436(0);
	Function_435();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_97())
	{
		Function_433(iParam2);
	}
	Function_432(uParam3, iVar0, iVar1);
	Function_431();
}

void Function_431() //Position: 0x1B9FD / 113149
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

void Function_432(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BA3E / 113214
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

void Function_433(bool bParam0) //Position: 0x1BBA7 / 113575
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_434() };
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

struct<16> Function_434() //Position: 0x1BD3F / 113983
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

void Function_435() //Position: 0x1BD85 / 114053
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_436(bool bParam0) //Position: 0x1BDA9 / 114089
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

bool Function_437() //Position: 0x1BDD8 / 114136
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_438(int iParam0) //Position: 0x1BDF3 / 114163
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1432[1]);
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1496[1]);
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 2304[3]);
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 2304[5]);
		
		default:
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 1568[1]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 1432[1]);
}

struct<8> Function_439(int iParam0) //Position: 0x1BEB4 / 114356
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_324(&iLocal_4 + 1432[1]);
			return StackVal, Function_324(&iLocal_4 + 1432[1]);
		
		case 0x00000001:
			Function_324(&iLocal_4 + 1496[1]);
			return StackVal, Function_324(&iLocal_4 + 1496[1]);
		
		case 0x00000002:
			Function_324(&iLocal_4 + 2304[3]);
			return StackVal, Function_324(&iLocal_4 + 2304[3]);
		
		case 0x00000003:
			Function_324(&iLocal_4 + 2304[5]);
			return StackVal, Function_324(&iLocal_4 + 2304[5]);
		
		default:
	}
	Function_324(&iLocal_4 + 1568[1]);
	return StackVal, Function_324(&iLocal_4 + 1568[1]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	Function_324(&iLocal_4 + 1432[1]);
	return StackVal, Function_324(&iLocal_4 + 1432[1]);
}

void Function_440(int iParam0) //Position: 0x1BF75 / 114549
{
	if (!Function_86(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(&Global_44085[iParam09] + 8))
	{
		DECOR_SET_BOOL(&Global_44085[iParam09] + 8, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_138(&(Global_43791[Global_44085[iParam09]]), 1024);
	}
	return;
}

bool Function_441() //Position: 0x1BFD2 / 114642
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	
	if (iLocal_1571)
	{
		return 1;
	}
	bVar2 = true;
	bVar3 = false;
	if (!bLocal_1567)
	{
		bLocal_1567 = true;
		bVar2 = true;
		if (bVar2)
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[10], &Var0);
			uLocal_1525 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&fLocal_768, "BarnFire", "script_barnfire_all", Var0);
			UNK_0x6745191B(StackVal, &uLocal_1525, Vector(0.0f, 0.0f, 0.0f));
			uLocal_1529 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &fLocal_768, "WindowFire", "script_Hennigans_BarnWindows", Vector(-835.0f, 97.0f, 2460.0f));
			UNK_0x6745191B(StackVal, &uLocal_1529, Vector(0.0f, 0.0f, 0.0f));
			uLocal_1527 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &fLocal_768, "Millfire", "script_Hennigans_Windmill", Vector(-835.0f, 97.0f, 2460.0f));
			UNK_0x6745191B(StackVal, &uLocal_1527, Vector(0.0f, 0.0f, 0.0f));
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1056[4], 15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1056[4]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1056[4]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1056[4]);
			bLocal_1567 = true;
		}
	}
	if (!bLocal_1568)
	{
		bLocal_1568 = true;
		bVar2 = true;
		if (bVar2)
		{
			bLocal_1568 = true;
		}
	}
	if (!Function_322(Global_46816[0]))
	{
		return 0;
	}
	if (!IS_ACTORSET_VALID(&uLocal_1253))
	{
		Function_452();
		bVar3 = false;
		uLocal_1253 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "m_SavedHorsesSet", 0);
	}
	if (!bLocal_1569)
	{
		if (bLocal_1567)
		{
			if (bLocal_1568)
			{
				if (Function_443())
				{
					bLocal_1569 = true;
				}
			}
		}
	}
	if (!bLocal_1570)
	{
		if (bLocal_1569)
		{
			bLocal_1570 = true;
			bVar3 = false;
			iVar8 = GET_ACTORSET_SIZE(&uLocal_1255);
			while (bVar3 <= iVar8)
			{
				if (!iLocal_1586[bVar3])
				{
					bLocal_1570 = false;
					uVar4 = GET_ACTOR_FROM_ACTORSET(&uLocal_1255, bVar3);
					if (IS_ACTOR_VALID(&uVar4))
					{
						if (!iLocal_1572[bVar3])
						{
							Function_385(&uVar4);
							iLocal_1586[bVar3] = 1;
						}
						else
						{
							uVar5 = GET_CURRENT_GRINGO(&uVar4);
							if (!IS_GRINGO_VALID(&uVar5))
							{
								iLocal_1572[bVar3] = 0;
							}
						}
					}
					else
					{
						LOG_ERROR("Invalid actor found in m_TownfolkSet! Oh shit!");
					}
				}
				bVar3++;
			}
		}
	}
	if (!iLocal_1571)
	{
		if (bLocal_1570)
		{
			if (IS_ACTORSET_VALID(&uLocal_1253))
			{
				uVar6 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &fLocal_768, 4294967295, 0);
				LOCATE_GRINGOS_IN_VOLUME(&iLocal_4 + 1056[10], &uVar6, 0, 1);
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2760, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2760, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2768, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2768, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2776, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2776, &uVar6);
				}
				if (IS_OBJECT_VALID(&iLocal_4 + 2784))
				{
					if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2784, &uVar6))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2784, &uVar6);
					}
				}
				if (IS_OBJECT_VALID(&uLocal_1651))
				{
					if (IS_OBJECT_IN_OBJECTSET(&uLocal_1651, &uVar6))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(&uLocal_1651, &uVar6);
					}
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2816, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2816, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2824, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2824, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2832, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2832, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2840, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2840, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2848, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2848, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2856, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2856, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2864, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2864, &uVar6);
				}
				if (IS_OBJECT_IN_OBJECTSET(&iLocal_4 + 2872, &uVar6))
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iLocal_4 + 2872, &uVar6);
				}
				bVar3 = false;
				while (bVar3 <= GET_OBJECTSET_SIZE(&uVar6))
				{
					uVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar6);
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uVar7), false);
					bVar3++;
				}
				Function_442(&uVar6);
				DESTROY_OBJECTSET(&uVar6);
				if (Function_425())
				{
					Function_367();
					iLocal_1571 = 1;
				}
			}
		}
	}
	return 0;
}

void Function_442(var uParam0) //Position: 0x1C43E / 115774
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
	}
	return;
}

bool Function_443() //Position: 0x1C48D / 115853
{
	bool bVar0;
	
	bVar0 = true;
	if (!IS_ACTORSET_VALID(&iLocal_4 + 976))
	{
		Function_451();
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
	{
		if (!IS_ACTOR_VALID(&iLocal_1768))
		{
			iLocal_1768 = &iLocal_4 + 856[02];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1768, 1);
			CLEAR_LAST_HIT(&iLocal_1768);
			MEMORY_CLEAR_ALL(&iLocal_1768);
			Function_285(&iLocal_1768, &iLocal_4 + 1656[0], 1, 1, 1);
		}
	}
	else
	{
		*(&iLocal_4 + 856[02]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 0, Vector(-854,1386f, 90,36545f, 2448.0f), Vector(0.0f, 83,87775f, 0.0f), 1);
		bVar0 = false;
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 856[12]))
	{
		if (!IS_ACTOR_VALID(&iLocal_1770))
		{
			iLocal_1770 = &iLocal_4 + 856[12];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1770, 1);
			CLEAR_LAST_HIT(&iLocal_1770);
			MEMORY_CLEAR_ALL(&iLocal_1770);
			Function_285(&iLocal_1770, &iLocal_4 + 1656[1], 1, 1, 1);
		}
	}
	else
	{
		*(&iLocal_4 + 856[12]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 16, Vector(-849,6518f, 90,36542f, 2441,652f), Vector(0.0f, 83,87775f, 0.0f), 1);
		bVar0 = false;
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 856[22]))
	{
		if (!IS_ACTOR_VALID(&iLocal_1772))
		{
			iLocal_1772 = &iLocal_4 + 856[22];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1772, 1);
			CLEAR_LAST_HIT(&iLocal_1772);
			MEMORY_CLEAR_ALL(&iLocal_1772);
			Function_285(&iLocal_1772, &iLocal_4 + 1656[2], 1, 1, 1);
		}
	}
	else
	{
		*(&iLocal_4 + 856[22]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 2, Vector(-850,9159f, 90,36543f, 2440.0f), Vector(0.0f, 83,87775f, 0.0f), 1);
		bVar0 = false;
	}
	if (!IS_ACTOR_VALID(&iLocal_1774))
	{
		iLocal_1774 = &iLocal_4 + 856[32];
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1774, 1);
		CLEAR_LAST_HIT(&iLocal_1774);
		MEMORY_CLEAR_ALL(&iLocal_1774);
		Function_285(&iLocal_1774, &iLocal_4 + 1656[3], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 856[42]))
	{
		if (!IS_ACTOR_VALID(&iLocal_1776))
		{
			iLocal_1776 = &iLocal_4 + 856[42];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1776, 1);
			CLEAR_LAST_HIT(&iLocal_1776);
			MEMORY_CLEAR_ALL(&iLocal_1776);
			Function_285(&iLocal_1776, &iLocal_4 + 1656[4], 1, 1, 1);
		}
	}
	else
	{
		*(&iLocal_4 + 856[42]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 5, Vector(-848.0f, 90,35291f, 2437,34f), Vector(0.0f, 83,87775f, 0.0f), 1);
		bVar0 = false;
	}
	if (!IS_ACTOR_VALID(&iLocal_1778))
	{
		iLocal_1778 = &iLocal_4 + 856[52];
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1778, 1);
		CLEAR_LAST_HIT(&iLocal_1778);
		MEMORY_CLEAR_ALL(&iLocal_1778);
		Function_285(&iLocal_1778, &iLocal_4 + 1656[5], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 856[62]))
	{
		if (!IS_ACTOR_VALID(&iLocal_1784))
		{
			iLocal_1784 = &iLocal_4 + 856[62];
			SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_1784, 1);
			CLEAR_LAST_HIT(&iLocal_1784);
			MEMORY_CLEAR_ALL(&iLocal_1784);
			Function_285(&iLocal_1784, &iLocal_4 + 1656[8], 1, 1, 1);
		}
	}
	else
	{
		*(&iLocal_4 + 856[62]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 24, Vector(-851,8301f, 90,35294f, 2434,025f), Vector(0.0f, 83,87775f, 0.0f), 1);
		bVar0 = false;
	}
	if (bVar0)
	{
		bLocal_1727 = false;
		while (bLocal_1727 <= GET_ACTORSET_SIZE(&iLocal_4 + 976))
		{
			bLocal_1723 = GET_ACTOR_FROM_ACTORSET(&iLocal_4 + 976, bLocal_1727);
			if (IS_ACTOR_VALID(&bLocal_1723))
			{
				MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1723, 1);
				ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1723);
				Function_338(&uLocal_1255);
				TASK_STAND_STILL(&bLocal_1723, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1723, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1723, 1);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1723, 64, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1723, 65, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1723, 66, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1723, 67, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1723, 68, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1723, 46, 0);
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bLocal_1723, 0);
			}
			bLocal_1727++;
		}
		if (!IS_ACTORSET_VALID(&uLocal_1257))
		{
			uLocal_1257 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "asWeepingTownies", 0);
		}
		if (IS_ACTOR_VALID(&iLocal_1784))
		{
			if (!IS_ACTOR_IN_ACTORSET(&uLocal_1257, &iLocal_1784))
			{
				ADD_ACTORSET_MEMBER(&uLocal_1257, &iLocal_1784);
				REMOVE_ACTORSET_MEMBER(&uLocal_1255, &iLocal_1784);
				Function_338(&uLocal_1255);
				Function_338(&uLocal_1257);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_1784, 0);
				SET_ANIM_SET_FOR_ACTOR(&iLocal_1784, "stand_wringhands", 0);
				TASK_CLEAR(&iLocal_1784);
				TASK_STAND_STILL(&iLocal_1784, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iLocal_1784, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_1784, 1);
				Function_285(&iLocal_1784, &iLocal_4 + 2304[27], 0, 1, 1);
				Function_444(&iLocal_1784, &iLocal_4 + 2304[25]);
			}
		}
		return 1;
	}
	return 0;
}

void Function_444(var uParam0, int iParam1) //Position: 0x1C941 / 117057
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	Function_445(StackVal, &uParam0, Var0);
	return;
}

void Function_445(var uParam0, struct<2> Param1) //Position: 0x1C95A / 117082
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_446(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_446(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_446(var uParam0, struct<2> Param1) //Position: 0x1C995 / 117141
{
	struct<2> Var0;
	
	Function_311(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_311(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

var Function_447(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x1CA16 / 117270
{
	var uVar0;
	var uVar1;
	
	uVar0 = fParam2;
	uVar1 = Function_448(&iParam0, &fParam1, uVar0, &iParam7, 0, 1);
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

var Function_448(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1CB06 / 117510
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_181(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_181(&(Param0[iVar02]), 2))
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
			if (!Function_181(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_178(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_450(StackVal, &Global_10996, Function_55(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_181(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_178(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_178(&(Param0[iVar02]), 1);
	Function_449(&vParam1[iVar03] + 16, 1);
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

int Function_449(int iParam0, bool bParam1) //Position: 0x1CCCD / 117965
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

var Function_450(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x1CD7F / 118143
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

void Function_451() //Position: 0x1CEA6 / 118438
{
	*(&iLocal_4 + 976) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "ALLTOWNSFOLK", 0);
	*(&iLocal_4 + 856[02]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 0, Vector(-853,573f, 90,35295f, 2432,958f), Vector(0.0f, 83,87775f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[02]);
	*(&iLocal_4 + 856[12]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 16, Vector(-849,6518f, 90,36542f, 2441,652f), Vector(0.0f, 83,87775f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[12]);
	*(&iLocal_4 + 856[22]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 2, Vector(-850,9159f, 90,36543f, 2440.0f), Vector(0.0f, 83,87775f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[22]);
	*(&iLocal_4 + 856[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 171, Vector(-846,9167f, 90,3654f, 2440.0f), Vector(0.0f, 83,87775f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[32]);
	*(&iLocal_4 + 856[42]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 5, Vector(-848.0f, 90,35291f, 2437,34f), Vector(0.0f, 83,87775f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[42]);
	*(&iLocal_4 + 856[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 288, Vector(-852.0f, 90,35294f, 2437,708f), Vector(0.0f, 83,87775f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[52]);
	*(&iLocal_4 + 856[62]) = Function_447(StackVal, StackVal, &Global_11544, &Global_13580, 24, Vector(-851,8301f, 90,35294f, 2434,025f), Vector(0.0f, 83,87775f, 0.0f), 1);
	ADD_ACTORSET_MEMBER(&iLocal_4 + 976, &iLocal_4 + 856[62]);
	return;
}

void Function_452() //Position: 0x1D084 / 118916
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 784) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "RescueHorses"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RescueHorse01", 976, Vector(-850,397f, 90,35294f, 2459,996f), Vector(0.0f, -74,89159f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 784);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&uVar0, true);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RescueHorse02", 983, Vector(-847,4722f, 90,35297f, 2464,262f), Vector(0.0f, -24,21283f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 784);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&uVar0, true);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RescueHorse03", 981, Vector(-841,4352f, 90,35291f, 2466,445f), Vector(0.0f, 42,38236f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 784);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&uVar0, true);
	return;
}

bool Function_453() //Position: 0x1D1A4 / 119204
{
	Function_294(&iLocal_4 + 520, 983, 2, 0);
	Function_294(&iLocal_4 + 520, 171, 2, 0);
	Function_294(&iLocal_4 + 520, 288, 2, 0);
	if (Function_287(&iLocal_4 + 520))
	{
		return 1;
	}
	return 0;
}

void Function_454() //Position: 0x1D1E1 / 119265
{
	Function_285(&Global_54076, &iLocal_4 + 2304[5], 1, 1, 1);
	Function_285(&bLocal_1493, &iLocal_4 + 2304[6], 1, 1, 1);
	Function_279("MINI_GAMES_AND_JOBS\\RANCH04");
	DISABLE_CHILD_SECTOR("hen_barn01x");
	DISABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn02x");
	ENABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn03props01x");
	ENABLE_CHILD_SECTOR("hen_beamsEntity01x");
	return;
}

void Function_455() //Position: 0x1D2B1 / 119473
{
	if (!Function_615())
	{
		return;
	}
	if (!iLocal_1795)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nledgeplay"))
		{
			ENABLE_USE_CONTEXTS(0);
			iLocal_1795 = 1;
		}
	}
	else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nledgeplay"))
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_1795 = 0;
	}
	if (IS_ACTOR_VALID(&bLocal_1782))
	{
		REMOVE_ACTORSET_MEMBER(&uLocal_1257, &bLocal_1782);
		ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1782);
		Function_338(&uLocal_1257);
		Function_338(&uLocal_1255);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1782, 0);
		Function_385(&bLocal_1782);
		bLocal_1782 = "";
	}
	if (IS_ACTOR_VALID(&bLocal_1780))
	{
		REMOVE_ACTORSET_MEMBER(&uLocal_1257, &bLocal_1780);
		ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1780);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1780, 0);
		Function_385(&bLocal_1780);
		bLocal_1780 = "";
	}
	Function_468();
	Function_467();
	Function_466();
	Function_464();
	Function_460();
	Function_459();
	Function_456();
	Function_225(1);
	return;
}

int Function_456() //Position: 0x1D39B / 119707
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_322(Global_46816[0]))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_1267[iVar08].f_56)
		{
			if (!IS_DOOR_VALID(&(Local_1267[iVar08])))
			{
				Local_1267[iVar08] = Function_457("hennigansRanch", &Local_1267[iVar08] + 8, Local_1267[iVar08].f_40);
			}
			if (IS_DOOR_VALID(&(Local_1267[iVar08])))
			{
				if (Local_1267[iVar08].f_44)
				{
					if (!IS_DOOR_LOCKED(&(Local_1267[iVar08])))
					{
						Function_128(&(Local_1267[iVar08]), 1);
					}
				}
				else
				{
					if (IS_DOOR_LOCKED(&(Local_1267[iVar08])))
					{
						Function_162(&(Local_1267[iVar08]), 1);
					}
					if (Local_1267[iVar08].f_48)
					{
						if (!IS_DOOR_OPENED(&(Local_1267[iVar08])))
						{
							if (!IS_DOOR_OPENING(&(Local_1267[iVar08])))
							{
								OPEN_DOOR_DIRECTION(&(Local_1267[iVar08]), Local_1267[iVar08].f_52);
								SET_DOOR_CURRENT_SPEED(&(Local_1267[iVar08]), 1,5f, 0.0f);
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	if (!iLocal_1789)
	{
		if (!IS_DOOR_VALID(&uLocal_1750))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[18], &Local_1729);
			uLocal_1750 = FIND_NEAREST_DOOR(&Local_1729, 4.0f);
		}
		else if (!IS_DOOR_OPENING(&uLocal_1750))
		{
			if (!IS_DOOR_OPENED(&uLocal_1750))
			{
				Function_162(&uLocal_1750, 1);
				OPEN_DOOR_DIRECTION(&uLocal_1750, 1);
				SET_DOOR_AUTO_CLOSE(&uLocal_1750, 0);
			}
		}
	}
	if (!iLocal_1790)
	{
		if (!IS_DOOR_VALID(&iLocal_1752))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[19], &Local_1729);
			iLocal_1752 = FIND_NEAREST_DOOR(&Local_1729, 4.0f);
		}
		else if (!IS_DOOR_OPENING(&iLocal_1752))
		{
			if (!IS_DOOR_OPENED(&iLocal_1752))
			{
				Function_162(&iLocal_1752, 1);
				OPEN_DOOR_DIRECTION(&iLocal_1752, 0);
				SET_DOOR_AUTO_CLOSE(&iLocal_1752, 0);
			}
		}
	}
	return iVar1;
}

int Function_457(var uParam0, var uParam1, int iParam2) //Position: 0x1D576 / 120182
{
	return Function_458(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_458(int iParam0, char* cParam1, bool bParam3) //Position: 0x1D58A / 120202
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

void Function_459() //Position: 0x1D62F / 120367
{
	var uVar0;
	var uVar1;
	
	if (IS_ITERATOR_VALID(&uLocal_1261))
	{
		uVar0 = FIND_NAMED_LAYOUT("artgringolayout");
		if (!IS_LAYOUTREF_VALID(&uVar0))
		{
		}
		ITERATE_IN_LAYOUT(&uLocal_1261, &uVar0);
		ITERATE_IN_VOLUME(&uLocal_1261, &iLocal_4 + 1056[0]);
		ITERATE_ON_PARTIAL_MODEL_NAME(&uLocal_1261, "bucket");
		uVar1 = START_OBJECT_ITERATOR(&uLocal_1261);
		while (IS_OBJECT_VALID(&uVar1))
		{
			DESTROY_OBJECT(&uVar1);
			uVar1 = OBJECT_ITERATOR_NEXT(&uLocal_1261);
		}
	}
	return;
}

void Function_460() //Position: 0x1D6B4 / 120500
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar4;
	int iVar5;
	bool bVar6;
	
	if (HUD_IS_FADING() || HUD_IS_FADED())
	{
		return;
	}
	if (bLocal_1570)
	{
		if (GET_ACTORSET_SIZE(&uLocal_1255) >= 0)
		{
			bVar1 = false;
			while (bVar1 <= GET_ACTORSET_SIZE(&uLocal_1255))
			{
				iVar5 = GET_ACTOR_FROM_ACTORSET(&uLocal_1255, bVar1);
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (IS_ACTOR_ALIVE(&iVar5))
					{
						uVar4 = Function_237(&iVar5);
						if (IS_OBJECT_VALID(&uVar4))
						{
							if (!ACTOR_HAS_ANIM_SET(&iVar5, "carry_bucket"))
							{
								if (((!IS_ACTION_NODE_PLAYING_PARTIAL(&iVar5, "recovery") && !IS_ACTION_NODE_PLAYING_PARTIAL(&iVar5, "bumped")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&iVar5, "bump")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&iVar5, "ragdollrecovery"))
								{
									RESET_ANIM_SET_FOR_ACTOR(&iVar5, 1);
									SET_ANIM_SET_FOR_ACTOR(&iVar5, "carry_bucket", 0);
								}
							}
							if (IS_ACTOR_IN_VOLUME(&iVar5, &iLocal_4 + 1056[7]))
							{
								if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iVar5, 1065353216, 1117126656, 1, 1, 0))
								{
									GET_OBJECT_POSITION(&iLocal_4 + 1656[5], &Local_1729);
									if (!WOULD_ACTOR_BE_VISIBLE(Function_463(&iVar5), &Local_1729, 3212836864))
									{
										Function_285(&iVar5, &iLocal_4 + 1656[5], 0, 1, 1);
									}
								}
							}
							if (GET_TASK_STATUS(&iVar5, 0) != 1)
							{
								bVar6 = RAND_INT_RANGE(false, 6);
								GET_OBJECT_RELATIVE_POSITION(StackVal, &iLocal_4 + 2104[bVar6], Vector(0.0f, 0.0f, -10.0f), &Local_1729);
								bVar0 = TASK_SEQUENCE_OPEN();
								if (IS_ACTOR_RIDING(&iVar5))
								{
									TASK_DISMOUNT(false, 1);
								}
								TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "carry_bucket/Get_Water_No_Interrupt", &iLocal_4 + 1776[iLocal_15653], -1.0f, 2, 0,2f);
								TASK_GO_NEAR_COORD(false, &iLocal_4 + 1928[bVar63], 1.0f, 4);
								TASK_FACE_COORD(0, &Local_1729, 0);
								TASK_ACTION_PERFORM(false, "carry_bucket/Toss_Water");
								TASK_SEQUENCE_CLOSE();
								TASK_CLEAR(&iVar5);
								TASK_SEQUENCE_PERFORM(&iVar5, bVar0);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								iLocal_1565++;
								if (iLocal_1565 > 4)
								{
									iLocal_1565 = 0;
								}
							}
						}
						else
						{
							Function_385(&iVar5);
						}
					}
				}
				bVar1++;
			}
		}
	}
	if (IS_ACTOR_VALID(&iLocal_1784))
	{
		if (GET_TASK_STATUS(&iLocal_1784, 0) == 1)
		{
			if (GET_TASK_STATUS(&iLocal_1784, 6) == 1)
			{
				TASK_STAND_STILL(&iLocal_1784, -1.0f, 0, 0);
				if (!ACTOR_HAS_ANIM_SET(&iLocal_1784, "stand_wringhands"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iLocal_1784, 0);
					SET_ANIM_SET_FOR_ACTOR(&iLocal_1784, "stand_wringhands", 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(&iLocal_1784, "stand_wringhands/wringhands_pre");
			}
		}
		else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_1784, "stand_wringhands"))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[25], &Local_1729);
			bLocal_1727 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[27], 1, 0, 1);
			TASK_FACE_COORD(0, &Local_1729, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_1784, bLocal_1727);
			TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1511))
	{
		switch (iLocal_1538)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(&iLocal_1517))
				{
					if (!Function_462(&bLocal_1511, &iLocal_1517))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2304[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(0, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1511, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				else if (IS_ACTOR_RIDING(&bLocal_1511))
				{
					if (GET_MOUNT(&bLocal_1511) == &iLocal_1517)
					{
						bLocal_1727 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_1517, bLocal_1727);
						TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
						iLocal_1538 = 1;
					}
					else
					{
						LOG_ERROR("Ranch hand got on the wrong horse!");
					}
				}
				else if ((IS_ACTOR_MOUNTED(&iLocal_1517) || !IS_ACTOR_IN_ACTORSET(&uLocal_1253, &iLocal_1517)) || IS_ACTOR_IN_VOLUME(&iLocal_1517, &iLocal_4 + 1360))
				{
					iLocal_1517 = "";
					if (!Function_462(&bLocal_1511, &iLocal_1517))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2304[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(0, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1511, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_RIDING(&bLocal_1511))
				{
					if (!iLocal_1791)
					{
						bLocal_1727 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[23], 4, 0, 1);
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1511, bLocal_1727);
						TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
						if (IS_ACTOR_VALID(&iLocal_1517))
						{
							SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1517, 1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_1517);
							SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_1517, &iLocal_4 + 1056[13], 1, true);
						}
						DECOR_SET_BOOL(&bLocal_1511, "bFacingDoor", false);
						iLocal_1791 = 1;
					}
					else if (iLocal_1789)
					{
						if (GET_TASK_STATUS(&bLocal_1511, 0) == 0)
						{
							ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1511);
							Function_338(&uLocal_1255);
							Function_385(&bLocal_1511);
							bLocal_1511 = "";
						}
					}
					else if (DECOR_GET_BOOL(&bLocal_1511, "bFacingDoor"))
					{
						if (GET_TASK_STATUS(&bLocal_1511, 6) == 1)
						{
							if (!Function_229(&iLocal_1693))
							{
								Function_227(&iLocal_1693);
							}
							else if (Function_261(&iLocal_1693) < 2.0f)
							{
								if (Function_461(&Global_54076, &iLocal_4 + 2304[18]) < 3.0f)
								{
									iLocal_1789 = 1;
									if (!IS_DOOR_VALID(&uLocal_1750))
									{
										GET_OBJECT_POSITION(&iLocal_4 + 2304[18], &Local_1729);
										uLocal_1750 = FIND_NEAREST_DOOR(&Local_1729, 4.0f);
									}
									if (IS_DOOR_VALID(&uLocal_1750))
									{
										if (!IS_DOOR_CLOSING(&uLocal_1750))
										{
											if (!IS_DOOR_CLOSED(&uLocal_1750))
											{
												CLOSE_DOOR(&uLocal_1750, 3.0f);
												SET_DOOR_AUTO_CLOSE(&uLocal_1750, 1);
											}
										}
									}
									SET_ACTION_NODE_FOR_ACTOR(&bLocal_1511, "default_character_Main/Melee/DoorKick/DoorKick_Wlk/DoorKickHnd");
									MEMORY_PREFER_WALKING(&bLocal_1511, 1);
									bLocal_1727 = TASK_SEQUENCE_OPEN();
									TASK_STAND_STILL(false, 1.0f, 0, 0);
									TASK_GO_TO_COORD(0, &iLocal_4 + 1776[iLocal_15653], 4);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_1511, bLocal_1727);
									TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
									Function_226(&iLocal_1693);
								}
							}
						}
					}
					else if (GET_TASK_STATUS(&bLocal_1511, 22) == 1)
					{
						if (iLocal_767 > 7)
						{
							bLocal_1727 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[23], 4, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1511, bLocal_1727);
							TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
							DECOR_SET_BOOL(&bLocal_1511, "bFacingDoor", true);
						}
					}
				}
				break;
			}
	}
	if (IS_ACTOR_VALID(&bLocal_1513))
	{
		switch (iLocal_1539)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(&iLocal_1519))
				{
					if (!Function_462(&bLocal_1513, &iLocal_1519))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2304[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(0, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1513, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				else if (IS_ACTOR_RIDING(&bLocal_1513))
				{
					if (GET_MOUNT(&bLocal_1513) == &iLocal_1519)
					{
						bLocal_1727 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_1519, bLocal_1727);
						TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
						iLocal_1539 = 1;
					}
					else
					{
						LOG_ERROR("Ranch hand got on the wrong horse!");
					}
				}
				else if ((IS_ACTOR_MOUNTED(&iLocal_1519) || !IS_ACTOR_IN_ACTORSET(&uLocal_1253, &iLocal_1519)) || IS_ACTOR_IN_VOLUME(&iLocal_1519, &iLocal_4 + 1360))
				{
					iLocal_1519 = "";
					if (!Function_462(&bLocal_1513, &iLocal_1519))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &uVar2);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2304[7], 3.0f, 3, 0, 1);
						TASK_FACE_COORD(0, &uVar2, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1513, bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_RIDING(&bLocal_1513))
				{
					if (!iLocal_1792)
					{
						bLocal_1727 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[24], 4, 0, 1);
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1513, bLocal_1727);
						TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
						if (IS_ACTOR_VALID(&iLocal_1519))
						{
							SET_ALLOW_RIDE_BY_PLAYER(&iLocal_1519, 1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_1519);
							SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_1519, &iLocal_4 + 1056[13], 1, true);
						}
						DECOR_SET_BOOL(&bLocal_1513, "bFacingDoor", false);
						iLocal_1792 = 1;
					}
					else if (iLocal_1790)
					{
						if (GET_TASK_STATUS(&bLocal_1513, 0) == 0)
						{
							ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1513);
							Function_338(&uLocal_1255);
							Function_385(&bLocal_1513);
							bLocal_1513 = "";
						}
					}
					else if (DECOR_GET_BOOL(&bLocal_1513, "bFacingDoor"))
					{
						if (GET_TASK_STATUS(&bLocal_1513, 6) == 1)
						{
							if (!Function_229(&iLocal_1693))
							{
								Function_227(&iLocal_1693);
							}
							else if (Function_261(&iLocal_1693) < 2.0f)
							{
								if (Function_461(&Global_54076, &iLocal_4 + 2304[19]) < 3.0f)
								{
									iLocal_1790 = 1;
									if (!IS_DOOR_VALID(&iLocal_1752))
									{
										GET_OBJECT_POSITION(&iLocal_4 + 2304[19], &Local_1729);
										iLocal_1752 = FIND_NEAREST_DOOR(&Local_1729, 4.0f);
									}
									if (IS_DOOR_VALID(&iLocal_1752))
									{
										if (!IS_DOOR_CLOSING(&iLocal_1752))
										{
											if (!IS_DOOR_CLOSED(&iLocal_1752))
											{
												CLOSE_DOOR(&iLocal_1752, 3.0f);
												SET_DOOR_AUTO_CLOSE(&iLocal_1752, 1);
											}
										}
									}
									SET_ACTION_NODE_FOR_ACTOR(&bLocal_1513, "default_character_Main/Melee/DoorKick/DoorKick_Wlk/DoorKickHnd");
									MEMORY_PREFER_WALKING(&bLocal_1513, 1);
									bLocal_1727 = TASK_SEQUENCE_OPEN();
									TASK_STAND_STILL(false, 1.0f, 0, 0);
									TASK_GO_TO_COORD(0, &iLocal_4 + 1776[iLocal_15653], 4);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_1513, bLocal_1727);
									TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
									Function_226(&iLocal_1693);
								}
							}
						}
					}
					else if (GET_TASK_STATUS(&bLocal_1513, 22) == 1)
					{
						if (iLocal_767 > 7)
						{
							bLocal_1727 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[24], 4, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1513, bLocal_1727);
							TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
							DECOR_SET_BOOL(&bLocal_1513, "bFacingDoor", true);
						}
					}
				}
				break;
			}
	}
	return;
}

float Function_461(var uParam0, var uParam1) //Position: 0x1E34E / 123726
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_366(&uParam0);
			Var0 = Function_366(&uParam0);
			Function_365(&uParam1);
			Var2 = Function_365(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_462(int iParam0, int iParam1) //Position: 0x1E3F0 / 123888
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar6;
	bool bVar7;
	
	iVar0 = GET_ACTORSET_SIZE(&uLocal_1253);
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_ACTORSET_SIZE(&uLocal_1253) != 0)
	{
		bVar6 = false;
		bVar6 = false;
		while (bVar6 <= iVar0)
		{
			iVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_1253, bVar6);
			if (!IS_ACTOR_MOUNTED(&iVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(&iVar1, &iLocal_4 + 1360))
				{
					bVar2 = true;
					if (&iLocal_1517 != &iVar1 || &iLocal_1519 != &iVar1)
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						bVar3 = true;
						bVar6 = 1000000;
					}
				}
				else
				{
					REMOVE_ACTORSET_MEMBER(&uLocal_1253, &iVar1);
					Function_338(&uLocal_1253);
				}
			}
			bVar6++;
		}
	}
	if (SQUAD_GET_SIZE(&iLocal_4 + 784) != 0 && GET_ACTORSET_SIZE(&uLocal_1253) != 0)
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		iVar1 = "";
		return 0;
	}
	if (IS_ACTOR_VALID(&iVar1))
	{
		iParam1 = &iVar1;
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam1, 1);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam1);
		MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
		MEMORY_IDENTIFY(&iParam0, &iParam1);
		MEMORY_CLEAR_RIDING_PREFERENCE(&iParam0);
		GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &uVar4);
		bVar7 = TASK_SEQUENCE_OPEN();
		TASK_DISMOUNT(false, 1);
		TASK_VEHICLE_LEAVE(false);
		TASK_GO_NEAR_ACTOR(0, &iParam1, 3.0f, 3);
		TASK_MOUNT(false, &iParam1, 0, 1, 2, 2147483647);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 2976, 2, 0, 0, 1, false);
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2304[9], 5.0f, 4, 1, 1);
		TASK_DISMOUNT(false, 1);
		TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2304[7], 3.0f, 4, 0, 1);
		TASK_FACE_COORD(0, &uVar4, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iParam0, bVar7);
		TASK_SEQUENCE_RELEASE(bVar7, 1);
	}
	return 1;
}

var Function_463(int iParam0) //Position: 0x1E587 / 124295
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

void Function_464() //Position: 0x1E5A4 / 124324
{
	struct<2> Var0;
	
	if (!Function_229(&iLocal_1689))
	{
		bLocal_1719 = RAND_FLOAT_RANGE(0,5f, 3.0f);
		Function_227(&iLocal_1689);
	}
	else if (Function_261(&iLocal_1689) <= bLocal_1719)
	{
		GET_VOLUME_CENTER(&iLocal_4 + 1056[0], &Var0);
		Var0 = (Var0 + RAND_FLOAT_RANGE(-10.0f, 10.0f));
		Var0.f_8 = (StackVal + RAND_FLOAT_RANGE(-10.0f, 10.0f));
		if (Function_465())
		{
			PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CREAKING_01_MASTER", Var0);
		}
		else
		{
			PLAY_SOUND_FROM_POSITION("RANCH04_BARN_CREAKING_02_MASTER", Var0);
		}
		bLocal_1719 = RAND_FLOAT_RANGE(0,5f, 2.0f);
		Function_227(&iLocal_1689);
	}
	return;
}

bool Function_465() //Position: 0x1E679 / 124537
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_466() //Position: 0x1E68C / 124556
{
	if (IS_STRING_VALID(&iLocal_1625))
	{
		if (Function_229(&iLocal_1549))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_226(&iLocal_1549);
				Function_403(&iLocal_1625, 0x40f00000, 1, 2, 0, 0, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void Function_467() //Position: 0x1E6CD / 124621
{
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[0]))
	{
		if (&iLocal_1760 == "")
		{
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_STAGE03_FIRE_ROLLOFF", &iLocal_1760);
			if (&iLocal_1762 != "")
			{
				DYNAMICMIXER_DETRIGGERSTATE(&iLocal_1762, 1);
			}
		}
	}
	else if (&iLocal_1762 == "")
	{
		DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_RANCH04_STAGE4", &iLocal_1762);
		if (&iLocal_1760 != "")
		{
			DYNAMICMIXER_DETRIGGERSTATE(&iLocal_1760, 1);
		}
	}
	return;
}

void Function_468() //Position: 0x1E776 / 124790
{
	if (IS_OBJECTSET_VALID(&iLocal_1803))
	{
		if (GET_OBJECTSET_SIZE(&iLocal_1803) >= 0)
		{
			bLocal_1727 = false;
			while (bLocal_1727 <= GET_OBJECTSET_SIZE(&iLocal_1803))
			{
				bLocal_1723 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1727, &iLocal_1803));
				if (!IS_ACTOR_MOUNTED(&bLocal_1723))
				{
					if (!SQUAD_GET(&bLocal_1723) != &iLocal_4 + 784)
					{
						if (GET_TASK_STATUS(&bLocal_1723, 6) == 1)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1723, "Startled_stn"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_1723, Function_380());
							}
						}
					}
				}
				bLocal_1727++;
			}
		}
	}
	return;
}

void Function_469() //Position: 0x1E80C / 124940
{
	float fVar0;
	bool bVar1;
	
	Function_495();
	switch (iLocal_751)
	{
		case 0x00000000:
			Function_325(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_324(&iLocal_4 + 2304[3]);
			iLocal_906 = Function_323(StackVal, Function_324(&iLocal_4 + 2304[3]), 0, 1, 1);
			if (!Function_322(iLocal_906))
			{
				Function_321(&Local_770);
			}
			if (!iLocal_1601[1])
			{
				Function_320(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_494();
				Function_318(1);
			}
			else if (Function_493())
			{
				Function_318(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_322(iLocal_906) || iLocal_906 != 4294967295)) && Function_493())
			{
				if (Function_322(Global_46816[0]))
				{
					Function_318(2);
				}
				else
				{
					Function_440(Global_46816[0]);
				}
			}
			break;
		
		case 0x00000002:
			Function_318(6);
			Function_490();
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				if (GET_TASK_STATUS(&bLocal_1493, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2888, 4, 0, 0, 1, false);
				}
				if (GET_TASK_STATUS(&Global_54076, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Global_54076, &iLocal_4 + 2888, 4, 0, 0, 1, false);
				}
				Function_251(1.0f);
			}
			if (!HUD_IS_FADING())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_1566 = Function_489();
					TASK_CLEAR(&Global_54076);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					if (GET_TASK_STATUS(&bLocal_1493, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2888, 4, 0, 0, 1, false);
					}
					TASK_PRIORITY_SET(&bLocal_1493, true);
					SET_AUTO_CONVERSATION_LOOK(&bLocal_1493, 0);
					STOP_FORCE_LOOK_AT_COORD(&bLocal_1493);
					Function_488();
					Function_396("Ranch04_obj02b");
					Function_318(16);
				}
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_752 + 24))
				{
					DESTROY_OBJECT(&iLocal_752 + 24);
				}
				(&iLocal_752 + 24) = Function_484(&iLocal_4, 0, 1, 1, 0);
				if (IS_OBJECT_VALID(&iLocal_752 + 24))
				{
				}
				else
				{
					LOG_ERROR("Ranch04_DoorLock - Failed to create Ranch04_DoorLock_cutscene");
				}
				Function_483();
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1493, 2);
				if (IS_ACTOR_VALID(&bLocal_1499))
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1499, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
				else if (IS_ACTOR_VALID(GET_MOUNT(&bLocal_1493)))
				{
					bLocal_1499 = GET_MOUNT(&bLocal_1493);
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1499, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
				GET_OBJECT_POSITION(&iLocal_4 + 2304[15], &Local_1729);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 2888, 3, 0, 0, 1, false);
				TASK_DISMOUNT(false, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2824), "UseCase1", 4294967295, 4);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1493);
				Function_240(3, 0, 1);
				if (IS_BLIP_VALID(&uLocal_1629))
				{
					REMOVE_BLIP(&uLocal_1629);
				}
				uLocal_1629 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2304[15], 330, 0f, 2, 0);
				Function_318(7);
			}
			break;
		
		case 0x00000007:
			if (Function_364(&Global_54076, &iLocal_4 + 2304[15], 35.0f))
			{
				Function_482();
				Function_315(&iLocal_1807, 45, 0, 4294967295, 4294967295);
			}
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (Function_261(&iLocal_1541) < 5.0f)
			{
				if (GET_CURRENT_GRINGO(&bLocal_1493) != GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2824) && ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 30.0f))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2824, &Local_1729);
					Function_307(StackVal, &fLocal_768, Local_1729, &iLocal_4 + 1056[17], 0, 0, 0, 0, 1, 1);
					if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
					{
						bLocal_1723 = GET_VEHICLE(&Global_54076);
						SET_VEHICLE_PASSENGERS_ALLOWED(&bLocal_1723, 0);
						DESTROY_ACTOR(&bLocal_1723);
					}
					Function_309(1, 0, 1, 1, 1, 1, 1, &iLocal_4 + 1056[17], 1, 1, 1, 1, 0x3f800000, 0);
					PLAY_CUTSCENEOBJECT(&iLocal_752 + 24, false, 0f, 0,5f, 0, 0, 0, 0, 0, 0);
					Function_315(&iLocal_1807, 45, 0, 4294967295, 4294967295);
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						ACTOR_DISMOUNT_NOW(&Global_54076);
					}
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[17]))
					{
						Function_285(&Global_54076, &iLocal_4 + 2304[28], 1, 1, 1);
					}
					Function_285(&bLocal_1497, &iLocal_4 + 2304[1], 1, 1, 1);
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_DISMOUNT(false, 1);
					TASK_FACE_ACTOR(0, &bLocal_1493, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					if (IS_ACTOR_VALID(&bLocal_1499))
					{
						bVar1 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[1], 2, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1499, bVar1);
						TASK_SEQUENCE_RELEASE(bVar1, 1);
					}
					bLocal_1796 = false;
					Function_479();
					Function_482();
					Function_318(26);
				}
			}
			break;
		
		case 0x0000001A:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (fVar0 > 80.0f)
			{
				if (Function_261(&iLocal_1541) < 2.0f)
				{
					if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
					{
						bLocal_1796 = true;
					}
				}
				if (Function_261(&iLocal_1541) < 6.0f || bLocal_1796)
				{
					if (IS_VOLUME_VALID(&uLocal_1758))
					{
						REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1758);
						REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1758);
					}
					TASK_CLEAR(&Global_54076);
					Function_282(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_752 + 24))
					{
						DESTROY_OBJECT(&iLocal_752 + 24);
					}
					Function_240(3, 0, 1);
					if (IS_BLIP_VALID(&uLocal_1629))
					{
						REMOVE_BLIP(&uLocal_1629);
					}
					if (IS_OBJECT_VALID(&bLocal_1531))
					{
						DESTROY_OBJECT(&bLocal_1531);
					}
					bLocal_1531 = CREATE_GATEWAY_IN_LAYOUT(&fLocal_768, "LadderGateway", &iLocal_4 + 1272[4], &Global_54076, 1, 1, 0, 0, 1, 1);
					ADD_BLIP_FOR_OBJECT(&bLocal_1531, 330, 0f, 2, 0);
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493);
					TASK_PRIORITY_SET(&bLocal_1493, true);
					Function_482();
					Function_315(&iLocal_1807, 45, 0, 4294967295, 4294967295);
					Function_283();
					Function_478();
					Function_318(27);
				}
				else if (!iLocal_1794)
				{
					if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &Global_54076, 1065353216, 1117126656, 1, 1, 0))
					{
						ACTOR_DISMOUNT_NOW(&Global_54076);
						Function_285(&Global_54076, &iLocal_4 + 2304[28], 1, 1, 1);
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
						iLocal_1794 = 1;
					}
				}
			}
			break;
		
		case 0x0000001B:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				if (!Function_476())
				{
					if (Function_261(&iLocal_1541) < 5.0f)
					{
						if (!DECOR_CHECK_EXIST(&fLocal_768, "FirstClimbObj"))
						{
							Function_396("Ranch04_obj02c");
							DECOR_SET_BOOL(&fLocal_768, "FirstClimbObj", true);
						}
						Function_318(29);
					}
				}
			}
			break;
		
		case 0x0000001D:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				if (!Function_475())
				{
					if (!Function_474())
					{
						if (!Function_473())
						{
							if (!Function_476())
							{
								Function_381(&iLocal_1673);
								Function_472();
								if (!DECOR_CHECK_EXIST(&fLocal_768, "FirstClimbObj"))
								{
									Function_396("Ranch04_obj02c");
									DECOR_SET_BOOL(&fLocal_768, "FirstClimbObj", true);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				if (!Function_475())
				{
					if (!Function_474())
					{
						if (!Function_473())
						{
							Function_381(&iLocal_1673);
							Function_472();
							if (!DECOR_CHECK_EXIST(&fLocal_768, "SecondClimbObj"))
							{
								Function_396("Ranch04_obj02d");
								DECOR_SET_BOOL(&fLocal_768, "SecondClimbObj", true);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000002E:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				if (!Function_475())
				{
					if (!Function_474())
					{
						Function_381(&iLocal_1673);
						Function_472();
						if (!DECOR_CHECK_EXIST(&fLocal_768, "ThirdClimbObj"))
						{
							Function_396("Ranch04_obj02e");
							DECOR_SET_BOOL(&fLocal_768, "ThirdClimbObj", true);
						}
					}
				}
			}
			break;
		
		case 0x00000031:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				if (!Function_475())
				{
					Function_381(&iLocal_1673);
					Function_472();
					if (!DECOR_CHECK_EXIST(&fLocal_768, "FourthClimbObj"))
					{
						Function_396("Ranch04_obj02f");
						DECOR_SET_BOOL(&fLocal_768, "FourthClimbObj", true);
					}
				}
			}
			break;
		
		case 0x00000034:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				if (!DECOR_CHECK_EXIST(&fLocal_768, "FifthClimbObj"))
				{
					Function_396("Ranch04_obj02h");
					DECOR_SET_BOOL(&fLocal_768, "FifthClimbObj", true);
				}
				Function_318(56);
			}
			break;
		
		case 0x00000038:
			fVar0 = Function_480(&Global_54076, &iLocal_4 + 1056[0]);
			if (Function_397(&fLocal_1545, 150.0f, 250.0f, &iLocal_4 + 2304[15], "Ranch04_barnWarning", "Ranch04_barnAbandoned", &bLocal_765, 0, &fLocal_768, &iLocal_4, 330, 1, 0))
			{
			}
			else if (!Function_477())
			{
				Function_381(&iLocal_1673);
				Function_472();
				if (!DECOR_CHECK_EXIST(&fLocal_768, "FifthClimbObj"))
				{
					Function_396("Ranch04_obj02h");
					DECOR_SET_BOOL(&fLocal_768, "FifthClimbObj", true);
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_470();
				iLocal_1601[2] = 1;
				iLocal_750 = 3;
				Function_318(0);
			}
			break;
	}
	return;
}

void Function_470() //Position: 0x1F55B / 128347
{
	Function_332();
	Function_240(3, 0, 1);
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	Function_471();
	return;
}

void Function_471() //Position: 0x1F57E / 128382
{
	Function_182(&iLocal_4 + 464);
	return;
}

void Function_472() //Position: 0x1F58C / 128396
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1056[9]))
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1272[4]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[9]))
			{
				if (IS_OBJECT_VALID(&bLocal_1531))
				{
					DESTROY_OBJECT(&bLocal_1531);
				}
				bLocal_1531 = CREATE_GATEWAY_IN_LAYOUT(&fLocal_768, "LadderGateway", &iLocal_4 + 1272[4], &Global_54076, 1, 1, 0, 0, 1, 1);
				ADD_BLIP_FOR_OBJECT(&bLocal_1531, 330, 0f, 2, 0);
				if (ACTOR_HAS_ANIM_SET(&Global_54076, "nnear_fire"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				}
				Function_318(27);
			}
		}
	}
	return;
}

bool Function_473() //Position: 0x1F63A / 128570
{
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1272[0]))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&bLocal_1782))
	{
		REMOVE_ACTORSET_MEMBER(&uLocal_1257, &bLocal_1782);
		ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1782);
		Function_338(&uLocal_1255);
		Function_338(&uLocal_1257);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1782, 0);
		Function_385(&bLocal_1782);
		bLocal_1782 = "";
	}
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	bLocal_1531 = CREATE_GATEWAY_IN_LAYOUT(&fLocal_768, "ShimmyGateway", &iLocal_4 + 1272[1], &Global_54076, 1, 1, 0, 0, 1, 1);
	ADD_BLIP_FOR_OBJECT(&bLocal_1531, 330, 0f, 2, 0);
	if (!DECOR_CHECK_EXIST(&fLocal_768, "ThirdClimbObj"))
	{
		Function_396("Ranch04_obj02e");
		DECOR_SET_BOOL(&fLocal_768, "ThirdClimbObj", true);
	}
	Function_318(46);
	return 1;
}

bool Function_474() //Position: 0x1F734 / 128820
{
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1272[1]))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&bLocal_1782))
	{
		REMOVE_ACTORSET_MEMBER(&uLocal_1257, &bLocal_1782);
		ADD_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1782);
		Function_338(&uLocal_1255);
		Function_338(&uLocal_1257);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1782, 0);
		Function_385(&bLocal_1782);
		bLocal_1782 = "";
	}
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	if (!DECOR_CHECK_EXIST(&fLocal_768, "FourthClimbObj"))
	{
		Function_396("Ranch04_obj02f");
		DECOR_SET_BOOL(&fLocal_768, "FourthClimbObj", true);
	}
	iLocal_1749 = 0;
	Function_318(49);
	return 1;
}

bool Function_475() //Position: 0x1F7F8 / 129016
{
	if (!HUD_IS_SHOWING_HELP_TEXT())
	{
		if (!iLocal_1749)
		{
			if (!DECOR_CHECK_EXIST(&fLocal_768, "ShimmyHelpText"))
			{
				DECOR_SET_BOOL(&fLocal_768, "ShimmyHelpText", true);
			}
			iLocal_1749 = 1;
		}
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1272[2]))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	if (!DECOR_CHECK_EXIST(&fLocal_768, "FifthClimbObj"))
	{
		Function_396("Ranch04_obj02h");
		DECOR_SET_BOOL(&fLocal_768, "FifthClimbObj", true);
	}
	Function_318(52);
	return 1;
}

bool Function_476() //Position: 0x1F8BB / 129211
{
	var uVar0;
	
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1272[4]))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	bLocal_1531 = CREATE_GATEWAY_IN_LAYOUT(&fLocal_768, "MillGateway", &iLocal_4 + 1272[0], &Global_54076, 1, 1, 0, 0, 1, 1);
	ADD_BLIP_FOR_OBJECT(&bLocal_1531, 330, 0f, 2, 0);
	if (IS_ACTOR_VALID(&bLocal_1497))
	{
		uVar0 = Vector(-858,672f, 90,798f, 2417,194f);
		TASK_GO_TO_COORD_AND_STAY(&bLocal_1497, &uVar0, 2, 203.0f);
		Function_2(0);
	}
	if (!DECOR_CHECK_EXIST(&fLocal_768, "FirstHelpText"))
	{
		Function_140("Ranch04_obj02d_help", 10.0f, 1, 0, 2, 1, 0);
		DECOR_SET_BOOL(&fLocal_768, "FirstHelpText", true);
	}
	Function_318(36);
	return 1;
}

bool Function_477() //Position: 0x1F9AF / 129455
{
	var uVar0;
	var uVar2;
	
	if ((!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[14]) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[19])) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[20]))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	Function_318(106);
	if (IS_ACTOR_VALID(&bLocal_1497))
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bLocal_1497)))
		{
			uVar0 = Vector(-841.0f, 92,5f, 2377.0f);
			uVar2 = LOCATE_GRINGO_OF_TYPE("horseHitch", &uVar0, 6.0f, 0);
			if (IS_GRINGO_VALID(&uVar2))
			{
				GRINGO_ALLOW_ACTIVATION(&uVar2, true);
				SNAP_ACTOR_TO_GRINGO(&bLocal_1497, GET_OBJECT_FROM_GRINGO(&uVar2), "UseCase1", true, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1497, 2);
				TASK_USE_GRINGO(&bLocal_1497, &uVar2, "UseCase1", true, 1);
			}
		}
	}
	return 1;
}

void Function_478() //Position: 0x1FA96 / 129686
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_lookForWay", "Ranch04_lookForWay", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479() //Position: 0x1FAE3 / 129763
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_doorsLocked", "Ranch04_doorsLocked", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_480(var uParam0, var uParam1) //Position: 0x1FB32 / 129842
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_366(&uParam0);
		Var0 = Function_366(&uParam0);
		Function_481(&uParam1);
		Var2 = Function_481(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_481(var uParam0) //Position: 0x1FBB0 / 129968
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_482() //Position: 0x1FBC2 / 129986
{
	if (IS_CAMERA_FOCUS_ENABLED(&uLocal_1633))
	{
		SET_CAMERA_FOCUS_ENABLED(&uLocal_1633, 0);
	}
	return;
}

void Function_483() //Position: 0x1FBDA / 130010
{
	if (!IS_OBJECT_VALID(&uLocal_1633))
	{
		Function_77();
		uLocal_1633 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&fLocal_768, "cFocus", &iLocal_4 + 2304[15], Function_77(), 300.0f, 400.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1633, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1633, "Ranch04_PromptBarnFire");
	}
	else
	{
		Function_77();
		SET_CAMERA_FOCUS_OBJECT(&uLocal_1633, &iLocal_4 + 2304[15], Function_77(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1633, 1);
	}
	return;
}

var Function_484(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1FC5E / 130142
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch04_BarnDoorLocked", 2, 1);
	}
	Function_485(&uVar0);
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

void Function_485(int iParam0) //Position: 0x1FCEE / 130286
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_487(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_486(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 2,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 10.0f, 1);
	return;
}

void Function_486(int iParam0) //Position: 0x1FD3A / 130362
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-850,3034f, 91,81455f, 2452,151f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,037107f, -0,64323f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 60.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_487(var uParam0) //Position: 0x1FDF1 / 130545
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 16.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-846,7867f, 91,78709f, 2440,552f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,05031f, 3,056369f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 85.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

void Function_488() //Position: 0x1FEA0 / 130720
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_seeFire", "Ranch04_seeFire", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_489() //Position: 0x1FEE7 / 130791
{
	return Global_53524.f_68;
}

void Function_490() //Position: 0x1FEF2 / 130802
{
	Function_315(&iLocal_1807, 54, 0, 4294967295, 4294967295);
	Function_439(iLocal_750);
	Function_430(StackVal, Function_439(iLocal_750), iLocal_750, Global_46736[2], Function_438(iLocal_750), 0);
	DISABLE_CHILD_SECTOR("hen_barn01x");
	DISABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn02x");
	ENABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn03props01x");
	ENABLE_CHILD_SECTOR("hen_beamsEntity01x");
	if (!iLocal_1601[1])
	{
		Function_285(&bLocal_1497, &iLocal_4 + 2304[3], 1, 1, 1);
		ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1497);
		Function_285(&bLocal_1499, &iLocal_4 + 2304[4], 1, 1, 1);
		ACTOR_MOUNT_ACTOR(&bLocal_1493, &bLocal_1499);
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493, -1.0f, -1.0f, 4, 1, 0);
	}
	Function_240(3, 1, 1);
	Function_491(1);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bLocal_1493, 0, 0);
	iLocal_752 = 1000;
	Function_429();
	Function_335(&bLocal_1497);
	Function_335(&bLocal_1497);
	if (GET_TASK_STATUS(&bLocal_1493, 43) != 1)
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2888, 4, 0, 0, 1, false);
	}
	SET_DUST_LEVEL_MODIFIER(4294967294);
	Function_367();
	Function_427(iLocal_750);
	Function_170(114699);
	Function_192(1, 1, 0);
	return;
}

void Function_491(int iParam0) //Position: 0x2005C / 131164
{
	Function_492(&Global_43580, iParam0);
	return;
}

void Function_492(var uParam0, var uParam1) //Position: 0x2006A / 131178
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_493() //Position: 0x20092 / 131218
{
	Function_294(&iLocal_4 + 464, 983, 2, 0);
	Function_294(&iLocal_4 + 464, 171, 2, 0);
	Function_294(&iLocal_4 + 464, 288, 2, 0);
	if (Function_287(&iLocal_4 + 464))
	{
		return 1;
	}
	return 0;
}

void Function_494() //Position: 0x200CF / 131279
{
	Function_427(iLocal_750);
	Function_285(&Global_54076, &iLocal_4 + 2304[3], 1, 1, 1);
	Function_285(&bLocal_1493, &iLocal_4 + 2304[4], 1, 1, 1);
	Function_279("MINI_GAMES_AND_JOBS\\RANCH04");
	return;
}

void Function_495() //Position: 0x20123 / 131363
{
	Function_497();
	Function_456();
	if (iLocal_751 >= 1)
	{
		if (Function_441())
		{
			Function_496();
		}
	}
	if (!Function_615())
	{
		return;
	}
	Function_466();
	Function_467();
	if (IS_ACTOR_VALID(&bLocal_1782))
	{
		if (GET_TASK_STATUS(&bLocal_1782, 6) == 1)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1782, "crowd_pointing_R"))
			{
				TASK_CLEAR(&bLocal_1782);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1782, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1782, "crowd_pointing_R", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1782, "crowd_pointing_R");
			}
		}
		else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1782, "crowd_pointing_R"))
		{
			if (GET_TASK_STATUS(&bLocal_1782, 0) != 1)
			{
				bLocal_1727 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[25], 1, 0, 1);
				GET_OBJECT_POSITION(&iLocal_4 + 2304[27], &Local_1729);
				TASK_FACE_COORD(0, &Local_1729, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1782, bLocal_1727);
				TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
			}
		}
	}
	if (!iLocal_1793)
	{
		if (!IS_ACTOR_MOUNTED(&bLocal_1497))
		{
			bLocal_1727 = TASK_SEQUENCE_OPEN();
			TASK_ACTION_PERFORM(false, "horse_Main/Melee/RearUp/scripted/canned_rear_up");
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 2304[1], 2, 0, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1497, bLocal_1727);
			TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
			iLocal_1793 = 1;
		}
	}
	else if (IS_ACTOR_MOUNTED(&bLocal_1497))
	{
		TASK_CLEAR(&bLocal_1497);
		iLocal_1793 = 1;
	}
	if (!iLocal_1795)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nledgeplay"))
		{
			ENABLE_USE_CONTEXTS(0);
			iLocal_1795 = 1;
		}
	}
	else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nledgeplay"))
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_1795 = 0;
	}
	Function_377();
	Function_468();
	Function_464();
	Function_460();
	Function_225(1);
	return;
}

void Function_496() //Position: 0x2032D / 131885
{
	if (!IS_ACTOR_VALID(&bLocal_1780))
	{
		bLocal_1780 = GET_ACTOR_FROM_ACTORSET(&uLocal_1255, (GET_ACTORSET_SIZE(&uLocal_1255) - 1));
		REMOVE_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1780);
		ADD_ACTORSET_MEMBER(&uLocal_1257, &bLocal_1780);
		Function_338(&uLocal_1255);
		Function_338(&uLocal_1257);
		Function_239(&bLocal_1780);
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1780, 0);
		TASK_CLEAR(&bLocal_1780);
		TASK_USE_GRINGO(&bLocal_1780, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2816), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(&bLocal_1780, &iLocal_4 + 2816, "UseCase1", true, 0, 0);
		TASK_PRIORITY_SET(&bLocal_1780, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1780, 1);
	}
	if (!IS_ACTOR_VALID(&bLocal_1782))
	{
		bLocal_1782 = GET_ACTOR_FROM_ACTORSET(&uLocal_1255, (GET_ACTORSET_SIZE(&uLocal_1255) - 1));
		REMOVE_ACTORSET_MEMBER(&uLocal_1255, &bLocal_1782);
		ADD_ACTORSET_MEMBER(&uLocal_1257, &bLocal_1782);
		Function_338(&uLocal_1255);
		Function_338(&uLocal_1257);
		Function_239(&bLocal_1782);
		Function_285(&bLocal_1782, &iLocal_4 + 2304[25], 1, 1, 1);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1782, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1782, "crowd_pointing_R", 0);
		SET_ACTION_NODE_FOR_ACTOR(&bLocal_1782, "crowd_pointing_R");
		TASK_CLEAR(&bLocal_1782);
		TASK_PRIORITY_SET(&bLocal_1782, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1782, 1);
	}
	return;
}

void Function_497() //Position: 0x20489 / 132233
{
	if (Function_322(Global_46816[0]))
	{
		if (!IS_DOOR_VALID(&(Local_1267[68])))
		{
			Function_457("hennigansRanch", "barn02", 7);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[68])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[68]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[68])))
			{
				Function_128(&(Local_1267[68]), 1);
			}
		}
		if (!IS_DOOR_VALID(&(Local_1267[78])))
		{
			Function_457("hennigansRanch", "barn02", 8);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[78])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[78]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[78])))
			{
				Function_128(&(Local_1267[78]), 1);
			}
		}
		if (!IS_DOOR_VALID(&(Local_1267[88])))
		{
			Function_457("hennigansRanch", "barn02", 9);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[88])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[88]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[88])))
			{
				Function_128(&(Local_1267[88]), 1);
			}
		}
		if (!IS_DOOR_VALID(&(Local_1267[98])))
		{
			Function_457("hennigansRanch", "barn02", 10);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[98])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[98]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[98])))
			{
				Function_128(&(Local_1267[98]), 1);
			}
		}
	}
	return;
}

void Function_498() //Position: 0x2062C / 132652
{
	Function_531();
	switch (iLocal_751)
	{
		case 0x00000000:
			Function_325(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_530();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_324(&iLocal_4 + 1496[0]);
			iLocal_906 = Function_323(StackVal, Function_324(&iLocal_4 + 1496[0]), 0, 1, 1);
			if (!Function_322(iLocal_906))
			{
				Function_321(&Local_770);
			}
			if (!iLocal_1601[0])
			{
				Function_320(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				iLocal_1755 = 1000;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_529();
				Function_318(1);
			}
			else if (Function_528() && Function_287(&iLocal_884))
			{
				Function_318(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_528()) && Function_287(&iLocal_884)) && (Function_322(iLocal_906) || iLocal_906 != 4294967295)) && Function_525())
			{
				if (Function_322(Global_46816[0]))
				{
					Function_318(2);
				}
				else
				{
					Function_440(Global_46816[0]);
				}
			}
			break;
		
		case 0x00000002:
			Function_517();
			if (Function_516(StackVal, StackVal, StackVal, StackVal, StackVal, Local_770, iLocal_750))
			{
				Function_315(&iLocal_1807, 3, 0, 4294967295, 4294967295);
				Function_318(3);
			}
			else
			{
				Function_285(&bLocal_1497, &iLocal_4 + 1496[1], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1497);
				Function_285(&bLocal_1499, &iLocal_4 + 1496[3], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1493, &bLocal_1499);
				Function_285(&bLocal_1495, &iLocal_4 + 1496[6], 1, 1, 1);
				CAMERA_RESET(0);
				Function_318(4);
			}
			break;
		
		case 0x00000003:
			if (Function_255("$/cutscene/RANCH04_CS02/RANCH04_CS02", &iLocal_752, &Local_770, &iLocal_750, 74579, 72968, 70501, 69596, 53609, 53561, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_318(4);
			}
			break;
		
		case 0x00000004:
			if (Function_513())
			{
				Function_318(6);
			}
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				Function_251(1.0f);
			}
			if (!HUD_IS_FADING())
			{
				iLocal_1566 = Function_489();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_FOLLOW_PATH(&bLocal_1493, &iLocal_4 + 2888, 4, 0, 0, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1493, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1493, 0);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493, -1.0f, -1.0f, 4, 1, 0);
				Function_396("Ranch04_obj02a");
				Function_318(7);
			}
			break;
		
		case 0x00000007:
			Function_501();
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_499();
				iLocal_1601[1] = 1;
				iLocal_750 = 2;
				Function_318(0);
			}
			break;
	}
	return;
}

void Function_499() //Position: 0x20896 / 133270
{
	Function_332();
	Function_240(3, 0, 1);
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	if (IS_ACTOR_VALID(&bLocal_1495))
	{
		RELEASE_ACTOR(&bLocal_1495);
	}
	if (IS_ACTORSET_VALID(&iLocal_4 + 848))
	{
		DESTROY_ACTORSET(&iLocal_4 + 848);
	}
	Function_500();
	Function_182(&iLocal_884);
	return;
}

void Function_500() //Position: 0x208E6 / 133350
{
	Function_182(&iLocal_4 + 296);
	return;
}

int Function_501() //Position: 0x208F4 / 133364
{
	float fVar0;
	
	fVar0 = Function_512(&Global_54076, &bLocal_1493);
	if (Function_261(&iLocal_1541) < 15.0f)
	{
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1495, 15.0f))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_227(&iLocal_1541);
			}
		}
	}
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_ACTOR_VALID(&bLocal_1497))
		{
			if (!IS_BLIP_VALID(&bLocal_1627))
			{
				bLocal_1627 = ADD_BLIP_FOR_ACTOR(&bLocal_1497, 334, 0, 2, 0);
			}
			Function_396("Horse_return");
		}
		else
		{
			Function_396("Horse_find");
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1493)))
		{
			Function_240(3, 0, 1);
			if (!iLocal_1797)
			{
				iLocal_1797 = 1;
				PAUSE_SCRIPTED_CONVERSATION(1, 1);
				Function_511("Ranch04_getsOffhorse");
			}
		}
		if (fVar0 <= 200.0f)
		{
			Function_509(&fLocal_1545, 60.0f, 200.0f, &bLocal_1493, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_765, 1, &fLocal_768, &iLocal_4, 325, 1);
		}
	}
	else
	{
		if (Function_509(&fLocal_1545, 60.0f, 200.0f, &bLocal_1493, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_765, 1, &fLocal_768, &iLocal_4, 325, 1))
		{
			if (IS_BLIP_VALID(&bLocal_1627))
			{
				REMOVE_BLIP(&bLocal_1627);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1493)))
			{
				Function_240(3, 1, 1);
			}
		}
		else
		{
			if (IS_BLIP_VALID(&bLocal_1627))
			{
				REMOVE_BLIP(&bLocal_1627);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1493)))
			{
				Function_240(3, 1, 1);
			}
		}
		if (fVar0 < 15.0f)
		{
			if (!Function_506(&Global_54076, &bLocal_1493, &iLocal_4 + 2888))
			{
				if (!iLocal_1797)
				{
					iLocal_1797 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 1);
					Function_511("Ranch04_farBehind");
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
					}
				}
			}
			else if (GET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1493) == 22.0f)
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1493, 3);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1493, 22.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(&bLocal_1493), 22.0f);
				if (!iLocal_1797)
				{
					iLocal_1797 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 1);
					Function_511("Ranch04_farAhead");
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[18]) || IS_ACTOR_IN_VOLUME(&bLocal_1493, &iLocal_4 + 1056[18]))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1493);
				Function_318(106);
				return 1;
			}
		}
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1493);
		CLEAR_ACTOR_MAX_SPEED(GET_MOUNT(&bLocal_1493));
		MEMORY_PREFER_RIDING(&bLocal_1493, true);
		if (GET_TASK_STATUS(&bLocal_1493, 43) == 1 && GET_TASK_STATUS(&bLocal_1493, 16) == 1)
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2888, 4, 0, 0, 1, false);
		}
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[18]) || IS_ACTOR_IN_VOLUME(&bLocal_1493, &iLocal_4 + 1056[18]))
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1493);
			Function_318(106);
			return 1;
		}
		Function_502();
	}
	return 0;
}

void Function_502() //Position: 0x20D00 / 134400
{
	if (iLocal_1797)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_1797 = 0;
				Function_511("Ranch04_comesBack");
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_229(&iLocal_1665))
		{
			Function_226(&iLocal_1665);
		}
	}
	else
	{
		if (iLocal_1631)
		{
			iLocal_1631 = 0;
		}
		if (!Function_229(&iLocal_1665))
		{
			Function_227(&iLocal_1665);
		}
		if (Function_261(&iLocal_1665) < 4.0f)
		{
			if (!Function_229(&iLocal_1549))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 15.0f))
				{
					switch (iLocal_1566)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_505();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_504();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_503();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 3;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1566 = 99;
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_503() //Position: 0x20E27 / 134695
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v3_AA", "Ranch04_backToRanch_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v3_AB", "Ranch04_backToRanch_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v3_AC", "Ranch04_backToRanch_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v3_AD", "Ranch04_backToRanch_v3_AD", true, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x20F45 / 134981
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AA", "Ranch04_backToRanch_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AB", "Ranch04_backToRanch_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AC", "Ranch04_backToRanch_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AD", "Ranch04_backToRanch_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AE", "Ranch04_backToRanch_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AF", "Ranch04_backToRanch_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AG", "Ranch04_backToRanch_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AH", "Ranch04_backToRanch_v2_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2830", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AI1", "Ranch04_backToRanch_v2_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AI2", "Ranch04_backToRanch_v2_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AI3", "Ranch04_backToRanch_v2_AI3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v2_AJ", "Ranch04_backToRanch_v2_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v2_AK", "Ranch04_backToRanch_v2_AK", false, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x212D1 / 135889
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v1_AA", "Ranch04_backToRanch_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v1_AB", "Ranch04_backToRanch_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_backToRanch_v1_AC", "Ranch04_backToRanch_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_backToRanch_v1_AD", "Ranch04_backToRanch_v1_AD", true, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_506(int iParam0, bool bParam1, bool bParam2) //Position: 0x213EF / 136175
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<2> Var4;
	
	iVar0 = Function_508(&iParam0, &bParam2);
	iVar1 = Function_508(&bParam1, &bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (iVar0 == iVar1)
	{
		GET_PATH_POINT(&bParam2, iVar0 + 1, &Var4);
		fVar2 = Function_507(StackVal, &iParam0, Var4);
		fVar3 = Function_507(StackVal, &bParam1, Var4);
		if (fVar2 > fVar3)
		{
			return 1;
		}
		return 0;
	}
	return 0;
	return 0;
}

var Function_507(var uParam0, struct<2> Param1) //Position: 0x21457 / 136279
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_366(&uParam0);
		Var0 = Function_366(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

var Function_508(var uParam0, bool bParam1) //Position: 0x214CE / 136398
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
		Function_311(&uParam0);
		bVar5 = VDIST(Function_311(&uParam0), Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

bool Function_509(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x21525 / 136485
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_510(&Global_54076, &iParam3, iParam2))
	{
		Function_580(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_510(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_404(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_403(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_402(2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_401(&uParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_401(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_404(2))
	{
		Function_400(2);
		if (!Function_399())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_398();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_218(&iParam3);
				Function_241(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_401(&uParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_401(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_510(var uParam0, bool bParam1, bool bParam2) //Position: 0x216E3 / 136931
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &bParam1, bParam2))
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

void Function_511(bool bParam0) //Position: 0x217F8 / 137208
{
	if (!iLocal_1797)
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1493, &bParam0, Function_55(), 0, 0, 1, 3, 0, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else
	{
		SAY_SINGLE_LINE_STRING(&bLocal_1493, &bParam0, false, true, 3, 0, true, false);
	}
	return;
}

var Function_512(float fParam0, bool bParam1) //Position: 0x2183F / 137279
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

bool Function_513() //Position: 0x21934 / 137524
{
	bool bVar0;
	bool bVar1;
	
	Function_227(&iLocal_1685);
	bVar0 = 199;
	bVar1 = 111;
	switch (iLocal_1754)
	{
		case 0x00000000:
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1497);
			}
			if (!IS_ACTOR_RIDING(&bLocal_1493))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_1493, &bLocal_1499);
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_4 + 632[02])) || !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_4 + 632[12])))
			{
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2792), "UseCase1", "UseAnim", bVar0);
				GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", "UseAnim", bVar1);
				iLocal_1754 = 1;
				return 0;
			}
			iLocal_1754 = 3;
			Function_315(&iLocal_1807, 11, 0, 4294967295, 4294967295);
			SET_DUST_LEVEL_MODIFIER(4294967294);
			return 0;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_INITED(&iLocal_4 + 632[02]) && IS_ACTOR_INITED(&iLocal_4 + 632[12]))
			{
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2792), "UseCase1", "UseAnim", bVar0) && GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", "UseAnim", bVar1))
				{
					TASK_USE_GRINGO(&iLocal_4 + 632[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2792), "UseCase1", 4294967295, 1);
					TASK_USE_GRINGO(&iLocal_4 + 632[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", 4294967295, 1);
					if (SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 632[02], &iLocal_4 + 2792, "UseCase1", false, 0, 0) && SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 632[12], &iLocal_4 + 2808, "UseCase1", false, 0, 0))
					{
						SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 632[02], "body_left_for_dead_gped_mourn/mourn/body");
						SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 632[12], "body_left_for_dead_gped_mourn/mourn/body");
						iLocal_1754 = 2;
						Function_227(&iLocal_1541);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (((IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_4 + 632[02], "body") && IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_4 + 632[12], "body")) && Function_261(&iLocal_1541) < 1.0f) || Function_261(&iLocal_1541) < 7.0f)
			{
				iLocal_1754 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			bLocal_1727 = TASK_SEQUENCE_OPEN();
			TASK_USE_GRINGO(&bLocal_1495, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2792), "Robber", true, 1);
			TASK_USE_GRINGO(&bLocal_1495, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "Robber", true, 1);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1328[0], -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1495, bLocal_1727);
			TASK_SEQUENCE_RELEASE(bLocal_1727, 1);
			TASK_PRIORITY_SET(&bLocal_1495, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1495, 1);
			SET_ACTOR_FACTION(&bLocal_1495, 20);
			Function_515(&bLocal_1495);
			SET_ACTOR_INVULNERABILITY(&bLocal_1495, false);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1495, &iLocal_4 + 1328[0], 1, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uLocal_1501, &iLocal_4 + 1328[1], 1, true);
			TASK_WANDER_IN_VOLUME(&uLocal_1501, &iLocal_4 + 1328[1], -1.0f);
			Function_514(&Global_54076);
			Function_514(&bLocal_1493);
			Function_514(&bLocal_1497);
			Function_514(&bLocal_1499);
			ACTOR_END_FORCE_HOLSTER(&Global_54076);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			SET_AUTO_CONVERSATION_LOOK(&bLocal_1493, 1);
			Function_367();
			Function_427(iLocal_750);
			Function_427(iLocal_750);
			iLocal_1754 = 4;
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_514(bool bParam0) //Position: 0x21CE4 / 138468
{
	SET_ACTOR_HEALTH(&bParam0, GET_ACTOR_MAX_HEALTH(&bParam0));
	SET_ACTOR_KO_POINTS(&bParam0, GET_ACTOR_MAX_KO_POINTS(&bParam0));
	return;
}

void Function_515(bool bParam0) //Position: 0x21D02 / 138498
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", true);
	}
	return;
}

bool Function_516(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x21D39 / 138553
{
	if (Function_273(&iParam0) == iParam6 || Function_437())
	{
		return 1;
	}
	return 0;
}

void Function_517() //Position: 0x21D58 / 138584
{
	int iVar0;
	var uVar1;
	
	Function_439(iLocal_750);
	Function_430(StackVal, Function_439(iLocal_750), iLocal_750, Global_46736[2], Function_438(iLocal_750), 0);
	if (!iLocal_1601[0])
	{
		Function_524();
		Function_523();
		Function_522();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uVar1 = &iLocal_4 + 792[iVar02];
			if (Function_278(&uVar1, 1))
			{
				TASK_PRIORITY_SET(&uVar1, true);
				TASK_BIRD_SOAR_AT_COORD(&uVar1, &iLocal_4 + 1736[03], -1.0f, 1106247680);
				SET_ACTOR_INVULNERABILITY(&uVar1, false);
			}
			iVar0++;
		}
	}
	DISABLE_CHILD_SECTOR("hen_barn01x");
	DISABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn02x");
	ENABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn03props01x");
	ENABLE_CHILD_SECTOR("hen_beamsEntity01x");
	Function_240(3, 1, 1);
	Function_491(1);
	Function_170(114699);
	Function_192(1, 1, 0);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&bLocal_1493, 0, 0);
	iLocal_752 = 1000;
	Function_521();
	Function_429();
	if (!IS_ACTOR_VALID(&bLocal_1495))
	{
		Function_518();
	}
	iLocal_1754 = 0;
	return;
}

void Function_518() //Position: 0x21E95 / 138901
{
	Function_520();
	bLocal_1495 = &iLocal_4 + 632[22];
	TASK_PRIORITY_SET(&bLocal_1495, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1495, 1);
	SET_ACTOR_FACTION(&bLocal_1495, 20);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1495, 0, 0);
	MEMORY_ALLOW_SHOOTING(&bLocal_1495, false);
	if (Function_278(&bLocal_1495, 1))
	{
		Function_519(&iLocal_4 + 632[02]);
		TASK_USE_GRINGO(&iLocal_4 + 632[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2792), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 632[02], &iLocal_4 + 2792, "UseCase1", false, 0, 0);
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_4 + 632[02], 1);
		Function_519(&iLocal_4 + 632[12]);
		TASK_USE_GRINGO(&iLocal_4 + 632[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 632[12], &iLocal_4 + 2808, "UseCase1", false, 0, 0);
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&iLocal_4 + 632[12], 1);
		TASK_USE_GRINGO(&bLocal_1495, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2800), "UseCase1", 4294967295, 1);
		SNAP_ACTOR_TO_GRINGO(&bLocal_1495, &iLocal_4 + 2800, "UseCase1", true, 0, 0);
		TASK_PRIORITY_SET(&bLocal_1495, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1495, 1);
		SET_ACTOR_FACTION(&bLocal_1495, 20);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(&uLocal_1501, &iLocal_4 + 1328[1], 1, true);
	TASK_WANDER_IN_VOLUME(&uLocal_1501, &iLocal_4 + 1328[1], -1.0f);
	return;
}

void Function_519(var uParam0) //Position: 0x2200C / 139276
{
	Function_515(&uParam0);
	AI_DONT_HARM_ACTOR(&uParam0);
	SET_ACTOR_INVULNERABILITY(&uParam0, true);
	Function_300(&uParam0, 0, 0, 0, 0, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&uParam0, 0);
	UNK_0x99AFD2D1(&uParam0, 1, 0);
	SET_TOUGH_ACTOR(&uParam0, 1);
	SET_ALLOW_EXECUTE(&uParam0, 0);
	DECOR_SET_BOOL(&uParam0, "CanBeLasso", false);
	STOP_PED_SPEAKING(&uParam0, 1);
	SET_AUTO_CONVERSATION_LOOK(&uParam0, 0);
	SET_ACTOR_PERMANENT_DEAD(&uParam0);
	return;
}

void Function_520() //Position: 0x2208B / 139403
{
	(&iLocal_4 + 632[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 199, Vector(-1049,339f, 100,3922f, 2944f), Vector(0.0f, 136,5509f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 632[02]);
	*(&iLocal_4 + 632[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 111, Vector(-1049,284f, 100,3922f, 2945,519f), Vector(0.0f, 170,0877f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 632[12]);
	*(&iLocal_4 + 632[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 608, Vector(-1052f, 100,3922f, 2942,347f), Vector(0.0f, -0,926f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 632[22], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 632[22], true);
	return;
}

void Function_521() //Position: 0x2214A / 139594
{
	iLocal_1631 = 0;
	Function_226(&iLocal_1665);
	iLocal_1566 = Function_489();
	return;
}

void Function_522() //Position: 0x22160 / 139616
{
	*(&iLocal_4 + 848) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "Vultures", 0);
	*(&iLocal_4 + 792[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 1128, Vector(-1052f, 100,3922f, 2936f), Vector(0.0f, 20,21585f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 848, &iLocal_4 + 792[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 792[02]);
	*(&iLocal_4 + 792[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 1129, Vector(-1052f, 100,3922f, 2948.0f), Vector(0.0f, 16,79937f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 848, &iLocal_4 + 792[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 792[12]);
	*(&iLocal_4 + 792[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 1130, Vector(-1068f, 101,3961f, 2944.0f), Vector(0.0f, 181,062f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 848, &iLocal_4 + 792[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 792[22]);
	return;
}

void Function_523() //Position: 0x22262 / 139874
{
	RESET_TREE_TYPE_CLEARING();
	GET_OBJECT_POSITION(&iLocal_4 + 2304[0], &Local_1729);
	CLEAR_AREA_OF_GRASS(Local_1729, 1.0f);
	GET_OBJECT_POSITION(&iLocal_4 + 2792, &Local_1729);
	CLEAR_AREA_OF_GRASS(Local_1729, 1.0f);
	GET_OBJECT_POSITION(&iLocal_4 + 2808, &Local_1729);
	CLEAR_AREA_OF_GRASS(Local_1729, 1.0f);
	CLEAR_AREA_OF_GRASS(*(&iLocal_4 + 2560[23]), 1.0f);
	CLEAR_AREA_OF_GRASS(*(&iLocal_4 + 2560[53]), 1.0f);
	return;
}

void Function_524() //Position: 0x222D1 / 139985
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &iLocal_4, "DeadHorse01", 1,369069E-42f, Vector(-1045,251f, 100,3922f, 2942,163f), Vector(0.0f, 80,44604f, 0.0f), "dead_ground_horse");
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &iLocal_4, "DeadHorse02", 1,374674E-42f, Vector(-1057,982f, 101,3961f, 2950,4f), Vector(0.0f, 123,3348f, 0.0f), "dead_ground_horse");
	return;
}

int Function_525() //Position: 0x2235F / 140127
{
	if (Function_527(&iLocal_4 + 2560, &uLocal_1728, 2, 0,25f, 0,6f, 0))
	{
		if (Function_526(&iLocal_4 + 2960, 0,6f, 0,25f))
		{
			if (Function_526(&iLocal_4 + 2968, 0,6f, 0,25f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_526(var uParam0, float fParam1, bool bParam2) //Position: 0x223AE / 140206
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<2> Var3;
	
	bVar0 = false;
	if (DECOR_CHECK_EXIST(&uParam0, "iCurBloodPoint"))
	{
		iVar1 = GET_NUM_PATH_POINTS(&uParam0);
		fVar2 = ((fParam1 - bParam2) / IntToFloat(iVar1));
		bVar0 = DECOR_GET_INT(&uParam0, "iCurBloodPoint");
		if (bVar0 <= iVar1)
		{
			GET_PATH_POINT(&uParam0, bVar0, &Var3);
			CREATE_DECAL(1, Var3, (fParam1 - (fVar2 * IntToFloat(bVar0))), 0, 0);
			DECOR_SET_INT(&uParam0, "iCurBloodPoint", bVar0 + 1);
		}
		else
		{
			return 1;
		}
	}
	DECOR_SET_INT(&uParam0, "iCurBloodPoint", false);
	return 0;
}

bool Function_527(vector3[] vParam0, var uParam1, int iParam2, float fParam3, bool bParam4, var uParam5) //Position: 0x2245F / 140383
{
	if (uParam1 <= vParam0)
	{
		CREATE_DECAL(iParam2, vParam0[uParam13], RAND_FLOAT_RANGE(fParam3, bParam4), &uParam5, 0);
		uParam1++;
	}
	else
	{
		return 1;
	}
	return 0;
}

int Function_528() //Position: 0x2249F / 140447
{
	Function_294(&iLocal_4 + 296, 199, 2, 0);
	Function_294(&iLocal_4 + 296, 111, 2, 0);
	Function_294(&iLocal_4 + 296, 608, 2, 0);
	Function_294(&iLocal_4 + 296, 977, 2, 0);
	Function_294(&iLocal_4 + 296, 983, 2, 0);
	Function_294(&iLocal_4 + 296, 1128, 2, 0);
	Function_294(&iLocal_4 + 296, 1129, 2, 0);
	Function_294(&iLocal_4 + 296, 1130, 2, 0);
	Function_294(&iLocal_4 + 296, 171, 2, 0);
	Function_294(&iLocal_4 + 296, 288, 2, 0);
	if (Function_287(&iLocal_4 + 296))
	{
		return 1;
	}
	return 0;
}

void Function_529() //Position: 0x2253C / 140604
{
	Function_427(iLocal_750);
	Function_285(&Global_54076, &iLocal_4 + 1496[0], 1, 1, 1);
	Function_285(&bLocal_1493, &iLocal_4 + 1496[2], 1, 1, 1);
	Function_279("MINI_GAMES_AND_JOBS\\RANCH04");
	return;
}

void Function_530() //Position: 0x22590 / 140688
{
	Function_294(&iLocal_884, 153, 2, 0);
	Function_294(&iLocal_884, 159, 2, 0);
	Function_294(&iLocal_884, 155, 2, 0);
	Function_294(&iLocal_884, 33, 2, 0);
	Function_294(&iLocal_884, 54, 2, 0);
	return;
}

void Function_531() //Position: 0x225CD / 140749
{
	Function_532();
	Function_456();
	if (iLocal_751 >= 1)
	{
		Function_441();
	}
	if (!Function_615())
	{
		return;
	}
	Function_466();
	Function_460();
	return;
}

void Function_532() //Position: 0x225F4 / 140788
{
	if (Function_322(Global_46816[0]))
	{
		if (!IS_DOOR_VALID(&(Local_1267[68])))
		{
			Function_457("hennigansRanch", "barn02", 7);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[68])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[68]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[68])))
			{
				Function_128(&(Local_1267[68]), 1);
			}
		}
		if (!IS_DOOR_VALID(&(Local_1267[78])))
		{
			Function_457("hennigansRanch", "barn02", 8);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[78])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[78]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[78])))
			{
				Function_128(&(Local_1267[78]), 1);
			}
		}
		if (!IS_DOOR_VALID(&(Local_1267[88])))
		{
			Function_457("hennigansRanch", "barn02", 9);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[88])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[88]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[88])))
			{
				Function_128(&(Local_1267[88]), 1);
			}
		}
		if (!IS_DOOR_VALID(&(Local_1267[98])))
		{
			Function_457("hennigansRanch", "barn02", 10);
		}
		else
		{
			if (!IS_DOOR_CLOSED(&(Local_1267[98])))
			{
				CLOSE_DOOR_FAST(&(Local_1267[98]));
			}
			if (!IS_DOOR_LOCKED(&(Local_1267[98])))
			{
				Function_128(&(Local_1267[98]), 1);
			}
		}
	}
	return;
}

void Function_533() //Position: 0x22797 / 141207
{
	Function_554();
	switch (iLocal_751)
	{
		case 0x00000000:
			Function_325(0);
			iLocal_1755 = 1000;
			if (Function_265(&Local_770))
			{
				Function_285(&Global_54076, &iLocal_4 + 1432[1], 1, 1, 1);
				Function_285(&bLocal_1493, &iLocal_4 + 1432[3], 1, 1, 1);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_906 = Global_46816[0];
			if (!Function_322(iLocal_906))
			{
				Function_321(&Local_770);
			}
			Function_553();
			Function_318(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_293())
			{
				if (Function_322(iLocal_906))
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2.0f, 1);
						Function_318(2);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				Function_552();
				Function_251(1.0f);
				Function_318(5);
			}
			break;
		
		case 0x00000005:
			if (Function_261(&iLocal_1541) <= 1.0f)
			{
				TASK_CLEAR(&Global_54076);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_318(6);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!Function_548())
				{
					if (iLocal_1566 == 0)
					{
						bLocal_1627 = ADD_BLIP_FOR_ACTOR(&bLocal_1497, 334, 0, 2, 0);
						Function_547();
						Function_227(&iLocal_1541);
						iLocal_1566 = 1;
						Function_396("Ranch04_obj01a");
						Function_227(&iLocal_1541);
					}
				}
			}
			break;
		
		case 0x00000012:
			if (Function_364(&Global_54076, &iLocal_4 + 2304[0], 150.0f))
			{
				Function_546();
				Function_525();
			}
			else if (!Function_364(&Global_54076, &iLocal_4 + 2304[0], 160.0f))
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					iLocal_1755 = 1000;
				}
			}
			Function_536();
			break;
		
		case 0x00000069:
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
			ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
			Function_318(106);
			break;
		
		case 0x0000006A:
			Function_534();
			iLocal_1601[0] = 1;
			iLocal_750 = 1;
			Function_318(0);
			break;
	}
	return;
}

void Function_534() //Position: 0x22994 / 141716
{
	CLEAR_ACTOR_MIN_SPEED(&bLocal_1493);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1493);
	STREAMING_UNLOAD_BOUNDS();
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1384);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1384);
	DESTROY_VOLUME(&iLocal_4 + 1384);
	Function_535();
	return;
}

void Function_535() //Position: 0x229D1 / 141777
{
	Function_182(&iLocal_4 + 176);
	return;
}

int Function_536() //Position: 0x229DE / 141790
{
	float fVar0;
	bool bVar1;
	
	fVar0 = Function_512(&Global_54076, &bLocal_1493);
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_ACTOR_VALID(&bLocal_1497))
		{
			if (!IS_BLIP_VALID(&bLocal_1627))
			{
				bLocal_1627 = ADD_BLIP_FOR_ACTOR(&bLocal_1497, 334, 0, 2, 0);
				Function_396("Horse_return");
			}
		}
		else
		{
			Function_396("Horse_find");
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1493)))
		{
			Function_240(3, 0, 1);
			if (!iLocal_1797)
			{
				iLocal_1797 = 1;
				PAUSE_SCRIPTED_CONVERSATION(1, 1);
				Function_511("Ranch04_getsOffhorse");
			}
		}
		if (!IS_ACTOR_IN_VOLUME(&bLocal_1493, &iLocal_4 + 1328[0]))
		{
			if (GET_TASK_STATUS(&bLocal_1493, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2880, 4, 0, 0, 1, false);
			}
		}
		else if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 1496[3], 2, 0, 1);
			TASK_FACE_ACTOR(0, &bLocal_1495, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
			Function_227(&iLocal_1677);
		}
		else if (Function_229(&iLocal_1677))
		{
			if (Function_261(&iLocal_1677) < 10.0f)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_STAND_STILL(false, 2.0f, 0, 0);
				TASK_FACE_ACTOR(0, &bLocal_1495, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_227(&iLocal_1677);
				if (!iLocal_1797)
				{
					iLocal_1797 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 1);
					Function_511("Ranch04_farBehind");
				}
			}
			if (GET_TASK_STATUS(&bLocal_1493, 6) == 1)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
				}
			}
		}
		if (fVar0 <= 200.0f)
		{
			Function_509(&fLocal_1545, 60.0f, 200.0f, &bLocal_1493, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_765, 1, &fLocal_768, &iLocal_4, 325, 1);
		}
	}
	else
	{
		if (!Function_509(&fLocal_1545, 60.0f, 200.0f, &bLocal_1493, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_765, 1, &fLocal_768, &iLocal_4, 325, 1))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1493)))
			{
				Function_240(3, 1, 1);
			}
		}
		if (!Function_544())
		{
			if (fVar0 < 12.0f)
			{
				if (!Function_506(&Global_54076, &bLocal_1493, &iLocal_4 + 2880))
				{
					if (!iLocal_1797)
					{
						iLocal_1797 = 1;
						PAUSE_SCRIPTED_CONVERSATION(1, 1);
						Function_511("Ranch04_farBehind");
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
						}
					}
				}
				else if (GET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1493) == 20.0f)
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1493, 3);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1493, 20.0f);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(&bLocal_1493), 20.0f);
					if (!iLocal_1797)
					{
						iLocal_1797 = 1;
						PAUSE_SCRIPTED_CONVERSATION(1, 1);
						Function_511("Ranch04_farAhead");
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
						}
					}
				}
				if (!IS_ACTOR_IN_VOLUME(&bLocal_1493, &iLocal_4 + 1328[0]))
				{
					if (GET_TASK_STATUS(&bLocal_1493, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2880, 4, 0, 0, 1, false);
					}
				}
				else if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
					if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 10.0f))
					{
						Function_543();
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
						}
					}
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(0, &iLocal_4 + 1496[3], 2, 0, 1);
					TASK_FACE_ACTOR(0, &bLocal_1495, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					Function_227(&iLocal_1677);
				}
				else if (Function_229(&iLocal_1677))
				{
					if (Function_261(&iLocal_1677) < 10.0f)
					{
						bVar1 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
						TASK_STAND_STILL(false, 2.0f, 0, 0);
						TASK_FACE_ACTOR(0, &bLocal_1495, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
						TASK_SEQUENCE_RELEASE(bVar1, 1);
						Function_227(&iLocal_1677);
						Function_511("Ranch04_farBehind");
					}
					if (GET_TASK_STATUS(&bLocal_1493, 6) == 1)
					{
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
						}
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1328[0]) || ACTORS_IN_RANGE(&Global_54076, &bLocal_1495, 20.0f))
					{
						AI_GOAL_LOOK_AT_ACTOR(&bLocal_1495, &Global_54076, 0, 2.0f, 4.0f, 10.0f, 0);
						MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1493);
						Function_318(105);
						return 1;
					}
				}
			}
			if (iLocal_1540 == 0)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1493);
				CLEAR_ACTOR_MAX_SPEED(GET_MOUNT(&bLocal_1493));
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1493, 3);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1493);
				CLEAR_ACTOR_MAX_SPEED(GET_MOUNT(&bLocal_1493));
			}
			MEMORY_PREFER_RIDING(&bLocal_1493, true);
			if (!IS_ACTOR_IN_VOLUME(&bLocal_1493, &iLocal_4 + 1328[0]))
			{
				if (GET_TASK_STATUS(&bLocal_1493, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2880, 4, 0, 0, 1, false);
				}
			}
			else if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 10.0f))
				{
					Function_543();
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
					}
				}
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 1496[3], 2, 0, 1);
				TASK_FACE_ACTOR(0, &bLocal_1495, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_227(&iLocal_1677);
			}
			else if (Function_229(&iLocal_1677))
			{
				if (Function_261(&iLocal_1677) < 10.0f)
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_FACE_ACTOR(0, &bLocal_1495, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					Function_227(&iLocal_1677);
					Function_511("Ranch04_farBehind");
				}
				if (GET_TASK_STATUS(&bLocal_1493, 6) == 1)
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "one_hnd_hrs"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "stand_ambient/one_hnd_hrs");
					}
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1328[0]) || ACTORS_IN_RANGE(&Global_54076, &bLocal_1495, 20.0f))
				{
					AI_GOAL_LOOK_AT_ACTOR(&bLocal_1495, &Global_54076, 0, 2.0f, 4.0f, 10.0f, 0);
					MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1493);
					Function_318(105);
					return 1;
				}
			}
			if (iLocal_1540 == 0)
			{
				Function_537();
			}
		}
		else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1328[0]) || ACTORS_IN_RANGE(&Global_54076, &bLocal_1495, 20.0f))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_GOAL_LOOK_AT_ACTOR(&bLocal_1495, &Global_54076, 0, 2.0f, 4.0f, 10.0f, 0);
				MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1493);
				Function_318(105);
				return 1;
			}
		}
	}
	return 0;
}

void Function_537() //Position: 0x23328 / 144168
{
	if (iLocal_1797)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_1797 = 0;
				Function_511("Ranch04_comesBack");
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_229(&iLocal_1665))
		{
			Function_226(&iLocal_1665);
		}
	}
	else
	{
		if (iLocal_1631)
		{
			iLocal_1631 = 0;
		}
		if (!Function_229(&iLocal_1665))
		{
			Function_227(&iLocal_1665);
		}
		if (Function_261(&iLocal_1665) < 4.0f)
		{
			if (!Function_229(&iLocal_1549))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 12.0f))
				{
					switch (iLocal_1566)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_542();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_541();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_540();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 3;
								}
							}
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1631 = 1;
								Function_539();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 4;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_538();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1566 = 99;
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

void Function_538() //Position: 0x23479 / 144505
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_noTalk", "Ranch04_noTalk", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x234BE / 144574
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AA", "Ranch04_rideOut_v4_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AB", "Ranch04_rideOut_v4_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AC", "Ranch04_rideOut_v4_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AD1", "Ranch04_rideOut_v4_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AD2", "Ranch04_rideOut_v4_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AE", "Ranch04_rideOut_v4_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AF1", "Ranch04_rideOut_v4_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AF2", "Ranch04_rideOut_v4_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AF3", "Ranch04_rideOut_v4_AF3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v4_AG", "Ranch04_rideOut_v4_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v4_AH", "Ranch04_rideOut_v4_AH", false, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_540() //Position: 0x23755 / 145237
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AA", "Ranch04_rideOut_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AB", "Ranch04_rideOut_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AC", "Ranch04_rideOut_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AD", "Ranch04_rideOut_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AE", "Ranch04_rideOut_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AF", "Ranch04_rideOut_v3_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AG1", "Ranch04_rideOut_v3_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_210", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v3_AG2", "Ranch04_rideOut_v3_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4030", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v3_AH", "Ranch04_rideOut_v3_AH", true, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_541() //Position: 0x239AF / 145839
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AA", "Ranch04_rideOut_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AB", "Ranch04_rideOut_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AC", "Ranch04_rideOut_v2_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AD1", "Ranch04_rideOut_v2_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AD2", "Ranch04_rideOut_v2_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AE", "Ranch04_rideOut_v2_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF1", "Ranch04_rideOut_v2_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF2", "Ranch04_rideOut_v2_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF3", "Ranch04_rideOut_v2_AF3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v2_AF4", "Ranch04_rideOut_v2_AF4", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v2_AG", "Ranch04_rideOut_v2_AG", true, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542() //Position: 0x23C48 / 146504
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v1_AA", "Ranch04_rideOut_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v1_AB", "Ranch04_rideOut_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v1_AC", "Ranch04_rideOut_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch04_rideOut_v1_AD", "Ranch04_rideOut_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_rideOut_v1_AE", "Ranch04_rideOut_v1_AE", false, 1, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_543() //Position: 0x23D7F / 146815
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_farBehind", "Ranch04_farBehind", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_544() //Position: 0x23DCA / 146890
{
	switch (iLocal_1540)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&bLocal_1493, &iLocal_4 + 1032[0]))
			{
				MEMORY_REPORT_POSITION_AUTO(&bLocal_1493, &bLocal_1495, 1);
				SET_AUTO_CONVERSATION_LOOK(&bLocal_1493, 0);
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1493);
				ABORT_SCRIPTED_CONVERSATION(1);
				GET_OBJECT_POSITION(&iLocal_4 + 2304[0], &Local_1729);
				FORCE_LOOK_AT_COORD(&bLocal_1493, &Local_1729, 20.0f);
				Function_227(&iLocal_1685);
				iLocal_1540 = 1;
				return 1;
			}
			if (!Function_229(&iLocal_1685))
			{
				Function_227(&iLocal_1685);
				bLocal_1718 = 2.0f;
			}
			else if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1493);
			}
			else if (Function_261(&iLocal_1685) < bLocal_1718)
			{
				bLocal_1718 = RAND_FLOAT_RANGE(1.0f, 3.0f);
				Function_227(&iLocal_1685);
				Function_77();
				Local_1729 = Function_77();
				Local_1729 = RAND_FLOAT_RANGE(-30.0f, 30.0f);
				Local_1729.f_8 = RAND_FLOAT_RANGE(-40.0f, -10.0f);
				GET_OBJECT_RELATIVE_POSITION(&bLocal_1493, Local_1729, &uLocal_1732);
				FORCE_LOOK_AT_COORD(&bLocal_1493, &uLocal_1732, bLocal_1718);
			}
			break;
		
		case 0x00000001:
			GET_OBJECT_POSITION(&iLocal_4 + 2304[0], &Local_1729);
			FORCE_LOOK_AT_COORD(&bLocal_1493, &Local_1729, 20.0f);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTOR_HAS_ANIM_SET(&bLocal_1493, "aiming_point"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "aiming_point", 0);
				}
				else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "aiming_point"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "aiming_point");
				}
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1493);
				AI_GOAL_AIM_AT_OBJECT(&bLocal_1493, &iLocal_4 + 2304[0], 0);
				Function_227(&iLocal_1685);
				iLocal_1540 = 2;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000002:
			if (Function_261(&iLocal_1685) < 2.0f)
			{
				if (Function_510(&Global_54076, &bLocal_1493, 36.0f))
				{
					Function_545();
				}
				Function_227(&iLocal_1685);
				iLocal_1540 = 3;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000003:
			if (!ACTOR_HAS_ANIM_SET(&bLocal_1493, "aiming_point"))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1493, "aiming_point", 0);
			}
			else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1493, "aiming_point"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1493, "aiming_point");
			}
			if (Function_261(&iLocal_1685) < 1.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1493, 2);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1493);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_1493);
				Function_227(&iLocal_1685);
				iLocal_1540 = 4;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000004:
			if (Function_261(&iLocal_1685) < 3.0f)
			{
				if (ACTOR_HAS_ANIM_SET(&bLocal_1493, "aiming_point"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1493, 1);
				}
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
				AI_GOAL_AIM_CLEAR(&bLocal_1493);
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1493);
				Function_227(&iLocal_1685);
				iLocal_1540 = 7;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000007:
			return 0;
			break;
	}
	return 0;
}

void Function_545() //Position: 0x240DA / 147674
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_spotPeople", "Ranch04_spotPeople", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_546() //Position: 0x24127 / 147751
{
	var uVar0;
	var uVar2;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	switch (iLocal_1755)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH04_CS02/RANCH04_CS02"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/RANCH04_CS02/RANCH04_CS02", 0, 2, 0, 2, 2);
				iLocal_1755 = 1004;
			}
			else
			{
				iLocal_1755 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1755 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_1755 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					uVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar4);
					iVar6 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_313(iVar6))
					{
						if (iVar6 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(&uVar5), &Global_54076);
						}
						if (iVar6 == GET_ACTOR_ENUM(&bLocal_1493))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(&uVar5), &bLocal_1493);
						}
						if (iVar6 == GET_ACTOR_ENUM(&bLocal_1495))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_OBJECT_NAME(&uVar5), &bLocal_1495);
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_1755 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				iLocal_1755 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_547() //Position: 0x2428D / 148109
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_headOut", "Ranch04_headOut", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_548() //Position: 0x242D4 / 148180
{
	bool bVar0;
	var uVar1;
	float fVar3;
	
	fVar3 = Function_512(&Global_54076, &bLocal_1493);
	if (fVar3 <= 200.0f)
	{
		Function_509(&fLocal_1545, 60.0f, 200.0f, &bLocal_1493, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_765, 1, &fLocal_768, &iLocal_4, 325, 1);
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_BLIP_VALID(&bLocal_1627))
		{
			REMOVE_BLIP(&bLocal_1627);
		}
		Function_240(3, 1, 1);
		Function_396("Ranch04_obj01b");
		if (GET_MOUNT(&Global_54076) == &bLocal_1499)
		{
			bLocal_1499 = &bLocal_1497;
			TASK_CLEAR(&bLocal_1493);
			TASK_MOUNT(&bLocal_1493, &bLocal_1499, 0, 1, 1, 2);
			SET_ACTORS_HORSE(&bLocal_1493, &bLocal_1499);
			Function_367();
		}
		if (GET_MOUNT(&Global_54076) != &bLocal_1497)
		{
			bLocal_1497 = GET_MOUNT(&Global_54076);
			Function_550(&bLocal_1497, 0);
			Function_367();
		}
	}
	else if (!IS_ACTOR_ALIVE(&bLocal_1497))
	{
		Function_396("Horse_find");
		if (IS_ACTOR_VALID(&bLocal_1497))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1497)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1497));
			}
		}
		if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_1499))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_1499, 0);
		}
	}
	else
	{
		Function_396("Ranch04_obj01a");
	}
	if (!IS_ACTOR_RIDING(&bLocal_1493))
	{
		if (!GET_TASK_STATUS(&bLocal_1493, 11) != 1)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK_MOUNT(&bLocal_1493, &bLocal_1499, 0, 1, 1, 2);
			}
		}
	}
	if (IS_ACTOR_RIDING(&bLocal_1493))
	{
		if (GET_TASK_STATUS(&bLocal_1493, 0) != 1)
		{
			bVar0 = Function_508(&bLocal_1493, &iLocal_4 + 2880);
			GET_PATH_POINT(&iLocal_4 + 2880, bVar0, &uVar1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(0, &uVar1, 0);
			TASK_GO_TO_COORD(0, &uVar1, 2);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2880, 1, 0, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1493, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			iLocal_1744 = 0;
		}
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_261(&iLocal_1541) <= 10.0f)
				{
					if (!iLocal_1744)
					{
						iLocal_1744 = 1;
					}
					else
					{
						TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1493, 3);
					}
					Function_549();
					Function_227(&iLocal_1541);
				}
			}
		}
	}
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1493))
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 8.0f) || Function_461(&Global_54076, &iLocal_4 + 1432[4]) < 30.0f)
			{
				if (GET_TASK_STATUS(&bLocal_1493, 0) == 1)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2880, 4, 0, 0, 1, false);
					ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493, -1.0f, -1.0f, 4, 1, 0);
					if (IS_BLIP_VALID(&bLocal_1627))
					{
						REMOVE_BLIP(&bLocal_1627);
					}
					iLocal_1566 = Function_489();
					iLocal_1755 = 1000;
					Function_315(&iLocal_1807, 3, 0, 4294967295, 4294967295);
					Function_396("Ranch04_obj01b");
					Function_318(18);
					return 1;
				}
			}
		}
	}
	if (Function_461(&Global_54076, &iLocal_4 + 1432[4]) < 30.0f)
	{
		if (GET_TASK_STATUS(&bLocal_1493, 0) == 1)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1493);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1493, &iLocal_4 + 2880, 4, 0, 0, 1, false);
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1493, -1.0f, -1.0f, 4, 1, 0);
			if (IS_BLIP_VALID(&bLocal_1627))
			{
				REMOVE_BLIP(&bLocal_1627);
			}
			iLocal_1566 = Function_489();
			iLocal_1755 = 1000;
			Function_315(&iLocal_1807, 3, 0, 4294967295, 4294967295);
			Function_396("Ranch04_obj01b");
			Function_318(18);
			return 1;
		}
	}
	return 0;
}

void Function_549() //Position: 0x24668 / 149096
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_waitingOnJon", "Ranch04_waitingOnJon", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_550(int iParam0, var uParam1) //Position: 0x246B9 / 149177
{
	Function_551(&uParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_551(float fParam0) //Position: 0x246CE / 149198
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

void Function_552() //Position: 0x2489D / 149661
{
	var uVar0;
	int iVar1;
	
	Function_315(&iLocal_1807, 3, 0, 4294967295, 4294967295);
	Function_439(iLocal_750);
	Function_430(StackVal, Function_439(iLocal_750), iLocal_750, Global_46736[2], Function_438(iLocal_750), 0);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1384);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1384);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1384, 15);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1384);
	Function_514(&bLocal_1493);
	Function_514(&bLocal_1497);
	Function_514(&bLocal_1499);
	TASK_STAND_STILL(&bLocal_1497, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1499, -1.0f, 0, 0);
	Function_342(&bLocal_1497, 0);
	Function_342(&bLocal_1499, 0);
	SET_ALLOW_RIDE_BY_PLAYER(&bLocal_1499, 0);
	Function_523();
	Function_522();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uVar0 = &iLocal_4 + 792[iVar12];
		if (Function_278(&uVar0, 1))
		{
			TASK_PRIORITY_SET(&uVar0, true);
			TASK_BIRD_SOAR_AT_COORD(&uVar0, &iLocal_4 + 1736[03], -1.0f, 1106247680);
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
		}
		iVar1++;
	}
	Function_427(iLocal_750);
	Function_285(&bLocal_1497, &iLocal_4 + 1432[4], 1, 1, 1);
	Function_285(&bLocal_1499, &iLocal_4 + 1432[5], 1, 1, 1);
	Function_367();
	Function_521();
	Function_429();
	iLocal_1566 = 0;
	Function_518();
	if (!GET_TASK_STATUS(&bLocal_1493, 16) != 1)
	{
		TASK_FOLLOW_PATH(&bLocal_1493, &iLocal_4 + 2952, 1, 0, 0, 1, false);
		AI_ACTOR_FORCE_SPEED(&bLocal_1493, true);
	}
	Function_227(&iLocal_1541);
	Function_227(&fLocal_1545);
	Function_227(&iLocal_1549);
	Function_227(&iLocal_1553);
	return;
}

void Function_553() //Position: 0x249FB / 150011
{
	TASK_STAND_STILL(&bLocal_1497, -1.0f, 0, 0);
	Function_285(&bLocal_1497, &iLocal_4 + 1432[4], 1, 1, 1);
	DISABLE_CHILD_SECTOR("hen_barn02x");
	DISABLE_CHILD_SECTOR("hen_barn02props01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	ENABLE_CHILD_SECTOR("hen_barn01x");
	ENABLE_CHILD_SECTOR("hen_barn01props01x");
	return;
}

void Function_554() //Position: 0x24AA0 / 150176
{
	if (!Function_615())
	{
		return;
	}
	if (iLocal_751 < 6 && iLocal_751 > 106)
	{
		if (!iLocal_1747)
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2304[0], &Local_1729);
			STREAMING_LOAD_BOUNDS_EXT(0, Local_1729, 30.0f, 0);
			if (STREAMING_ARE_BOUNDS_LOADED(Local_1729, 30.0f))
			{
				Function_524();
				uLocal_1535 = FIND_OBJECT_IN_LAYOUT(&iLocal_4, "DeadHorse01");
				if (IS_OBJECT_VALID(&uLocal_1535))
				{
					SET_CORPSE_PERMANENT(&uLocal_1535, 1);
					uLocal_1535 = "";
				}
				else
				{
					LOG_ERROR("HORSE01 NOT SET PERMANENT");
				}
				uLocal_1535 = FIND_OBJECT_IN_LAYOUT(&iLocal_4, "DeadHorse02");
				if (IS_OBJECT_VALID(&uLocal_1535))
				{
					SET_CORPSE_PERMANENT(&uLocal_1535, 1);
					uLocal_1535 = "";
				}
				else
				{
					LOG_ERROR("HORSE02 NOT SET PERMANENT");
				}
				iLocal_1747 = 1;
			}
		}
		GET_OBJECT_POSITION(&bLocal_1493, &Local_1729);
		STREAMING_LOAD_BOUNDS_EXT(1, Local_1729, 30.0f, 0);
	}
	Function_466();
	Function_456();
	return;
}

void Function_555() //Position: 0x24BC0 / 150464
{
	switch (iLocal_751)
	{
		case 0x00000000:
			Function_571(&Local_770, 1);
			if (!IS_LAYOUTREF_VALID(&fLocal_768))
			{
				fLocal_768 = CREATE_LAYOUT("Ranch04_DynamicLayout");
			}
			Function_570();
			Function_569();
			Function_568("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_1807 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_491(1);
			Function_170(114696);
			Function_566(0, 0);
			iLocal_1537 = 0;
			iLocal_1538 = 0;
			if (!IS_ACTOR_VALID(&bLocal_1493))
			{
				bLocal_1493 = Function_388(3, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if ((!Function_265(&Local_770) && Local_770.f_40 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R4/R4"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-840,0001f, 91,77865f, 2401,022f), -131,7449f, 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1493, Vector(-839,9487f, 91,73472f, 2399,405f), 213,6059f, 1, 1, true);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
				Function_562();
				Global_99147 = 1;
				iLocal_751 = 6;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R4/R4"))
				{
					LOG_ERROR("R4/R4 cutscene does not exist");
				}
				iLocal_751 = 8;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_227(&iLocal_1541);
				iLocal_751 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_255("$/cutscene/R4/R4", &iLocal_752, &Local_770, &iLocal_750, 74579, 72968, 70501, 69596, 53609, 53561, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000008:
			if (Function_561())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_280();
				}
				iLocal_751 = 9;
			}
			break;
		
		case 0x00000009:
			Function_274();
			iLocal_750 = 0;
			iLocal_751 = 0;
			iLocal_752 = 1000;
			Function_271(&Local_770, &iLocal_750, &iLocal_751);
			Function_270(StackVal, StackVal, StackVal, StackVal, Function_280(), Local_770);
			switch (iLocal_750)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_560();
					break;
				
				case 0x00000002:
					Function_559();
					break;
				
				case 0x00000003:
					Function_558();
					break;
				
				case 0x00000065:
					Function_556();
					break;
				
				default:
					LOG_ERROR("MissionInit: Invalid stage! I will loop forever!");
					break;
			}
			break;
	}
	return;
}

void Function_556() //Position: 0x24E68 / 151144
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_239(&bLocal_1493);
	TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
	Function_240(3, 0, 1);
	Function_557(&uLocal_1521);
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 784))
	{
		bVar2 = false;
		while (bVar2 <= SQUAD_GET_SIZE(&iLocal_4 + 784))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, bVar2);
			if (IS_ACTOR_VALID(&uVar0))
			{
				uVar1 = GET_BLIP_ON_ACTOR(&uVar0);
				if (IS_BLIP_VALID(&uVar1))
				{
					REMOVE_BLIP(&uVar1);
				}
			}
			bVar2++;
		}
	}
	Function_491(1);
	Function_198(256);
	return;
}

void Function_557(var uParam0) //Position: 0x24EFC / 151292
{
	if (IS_BLIP_VALID(&uParam0))
	{
		REMOVE_BLIP(&uParam0);
	}
	return;
}

void Function_558() //Position: 0x24F11 / 151313
{
	Function_285(&Global_54076, &iLocal_4 + 2304[5], 1, 1, 1);
	Function_285(&bLocal_1493, &iLocal_4 + 2304[6], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
	Function_240(3, 0, 1);
	Function_557(&uLocal_1521);
	if (IS_OBJECT_VALID(&bLocal_1531))
	{
		DESTROY_OBJECT(&bLocal_1531);
	}
	Function_491(1);
	return;
}

void Function_559() //Position: 0x24F69 / 151401
{
	Function_285(&Global_54076, &iLocal_4 + 2304[3], 1, 1, 1);
	Function_285(&bLocal_1493, &iLocal_4 + 2304[4], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
	Function_240(3, 0, 1);
	Function_491(1);
	return;
}

void Function_560() //Position: 0x24FA9 / 151465
{
	Function_285(&bLocal_1497, &iLocal_4 + 1496[0], 1, 1, 1);
	Function_285(&bLocal_1499, &iLocal_4 + 1496[2], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1497);
	ACTOR_MOUNT_ACTOR(&bLocal_1493, &bLocal_1499);
	TASK_STAND_STILL(&bLocal_1493, -1.0f, 0, 0);
	Function_240(3, 1, 1);
	Function_491(1);
	return;
}

bool Function_561() //Position: 0x25001 / 151553
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_295())
	{
		return 0;
	}
	if (!STREAMING_IS_WORLD_LOADED())
	{
		return 0;
	}
	if (!Function_287(&iLocal_782))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_1497))
	{
		if (Function_305())
		{
			bLocal_1497 = Function_299(1, 1, 0, 0, 0, 0, 1, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1497, 1))
	{
		return 0;
	}
	return 1;
}

int Function_562() //Position: 0x25061 / 151649
{
	switch (iLocal_750)
	{
		case 0x00000063:
			Function_565(&uLocal_1211);
			if (IS_ACTOR_VALID(&bLocal_1493))
			{
				Function_563(&bLocal_1493, &uLocal_1211);
			}
			Function_563(&Global_54076, &uLocal_1211);
			return 1;
			break;
		
		case 0x00000000:
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000003:
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

void Function_563(int iParam0, struct<5>[] Param1) //Position: 0x250C1 / 151745
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = Function_564(&iParam0, &Param1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= Param1)
			{
				if (!IS_ACTOR_VALID(&(Param1[iVar15])))
				{
					Param1[iVar15] = &iParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_564(int iParam0, struct<5>[] Param1) //Position: 0x25110 / 151824
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

void Function_565(struct<5>[] Param0) //Position: 0x2514A / 151882
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

void Function_566(var uParam0, int iParam1) //Position: 0x2519F / 151967
{
	Function_223(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_567(StackVal, &iParam1);
	}
	return;
}

void Function_567(int iParam0, int iParam1) //Position: 0x251D1 / 152017
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_223(iParam0);
	Function_9(&uVar0);
	PRINTNL();
	Function_221(iParam0, &uVar0, &iParam1);
	return;
}

void Function_568(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x251FA / 152058
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_316(uParam1), &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

void Function_569() //Position: 0x2521C / 152092
{
	Function_296(&iLocal_782, "ranch04", 10, 0);
	Function_296(&iLocal_782, "carry_bucket", 5, 0);
	Function_296(&iLocal_782, "custom/carry_bucket", 8, 0);
	Function_296(&iLocal_782, "dead_ground_horse", 5, 0);
	Function_296(&iLocal_782, "dead_ground_male", 5, 0);
	Function_296(&iLocal_782, "$/fragments/p_gen_bucket03x", 0, 0);
	Function_296(&iLocal_782, "aiming_point", 5, 0);
	Function_296(&iLocal_782, "custom/aiming_point", 8, 0);
	Function_296(&iLocal_782, "sleeping_wall_scripted", 5, 0);
	Function_296(&iLocal_782, "custom/sleeping_wall_scripted", 8, 0);
	Function_296(&iLocal_782, "nnear_fire", 5, 0);
	Function_296(&iLocal_782, "custom/near_fire", 8, 0);
	Function_296(&iLocal_782, "stand_ambient", 5, 0);
	Function_296(&iLocal_782, "custom/stand_ambient", 8, 0);
	Function_296(&iLocal_782, "crowd_pointing_R", 5, 0);
	Function_296(&iLocal_782, "custom/crowd_pointing_R", 8, 0);
	Function_296(&iLocal_782, "stand_wringhands", 5, 0);
	Function_296(&iLocal_782, "custom/stand_wringhands", 8, 0);
	Function_296(&iLocal_782, "slap_horse", 5, 0);
	Function_296(&iLocal_782, "custom/slap_horse", 8, 0);
	Function_296(&iLocal_782, "pull_pitchfork", 5, 0);
	Function_296(&iLocal_782, "custom/pull_pitchfork", 8, 0);
	Function_296(&iLocal_782, "pull_pitchfork_shoot", 5, 0);
	Function_296(&iLocal_782, "custom/pull_pitchfork_shoot", 8, 0);
	Function_296(&iLocal_782, "$/content/scripting/gringo/simplegringo/pull_pitchfork", 1, 0);
	return;
}

void Function_570() //Position: 0x25538 / 152888
{
	return;
}

void Function_571(int iParam0, bool bParam1) //Position: 0x2553E / 152894
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_577(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_265(&iParam0))
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
	if (!Function_265(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_215();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_283();
	Function_258();
	Function_580("");
	Function_576(0);
	Function_575();
	Function_208();
	Function_207();
	ENABLE_JOURNAL_REPLAY(0);
	Function_574();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_299(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_326(0, 0x40400000);
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
	Function_573(13);
	Function_573(14);
	Function_573(25);
	Function_573(24);
	Function_573(12);
	Function_573(27);
	Function_573(26);
	Function_573(15);
	Function_572();
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
	Var1 = { StackVal, StackVal, StackVal, Function_13(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_572() //Position: 0x2597E / 153982
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

void Function_573(int iParam0) //Position: 0x25A03 / 154115
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_574() //Position: 0x25A23 / 154147
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

void Function_575() //Position: 0x25A69 / 154217
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_576(int iParam0) //Position: 0x25A7F / 154239
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

void Function_577(int iParam0, int iParam1) //Position: 0x25AB8 / 154296
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
			Function_578(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_578(struct<113> Param0) //Position: 0x25B3F / 154431
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

void Function_579() //Position: 0x25B9D / 154525
{
	return;
}

void Function_580(struct<8> Param0) //Position: 0x25BA3 / 154531
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&Param0);
	PRINTNL();
	strcpy(&Global_10969, &Param0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

bool Function_581() //Position: 0x25C0F / 154639
{
	if (IS_ACTORSET_VALID(&iLocal_4 + 976))
	{
		bLocal_1727 = false;
		while (bLocal_1727 <= GET_ACTORSET_SIZE(&iLocal_4 + 976))
		{
			bLocal_1723 = GET_ACTOR_FROM_ACTORSET(&iLocal_4 + 976, bLocal_1727);
			if (IS_ACTOR_VALID(&bLocal_1723))
			{
				if (Function_582(&Global_54076, &bLocal_1723, 1, 0, 1))
				{
					return 1;
				}
			}
			bLocal_1727++;
		}
	}
	return 0;
}

bool Function_582(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x25C6D / 154733
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
		if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
		{
			CLEAR_LAST_HIT(&iParam0);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			if (IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
			{
				return 1;
			}
		}
	}
	if (&bParam4)
	{
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			if (AI_IS_HOSTILE_OR_ENEMY(&iParam1, &iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_583(bool bParam0, int iParam1) //Position: 0x25D4A / 154954
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_584(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (GET_CRIME_CRIMINAL(&uVar3) != &bParam0 && Global_41252[GET_CRIME_TYPE(&uVar3)11].f_40 <= iParam1)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_584(var uParam0, int iParam1) //Position: 0x25DE0 / 155104
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

bool Function_585(struct<25> Param0) //Position: 0x25E16 / 155158
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
						Function_593();
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
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
						Function_591();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_590();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_589();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
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
						Function_588();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_590();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_587();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_586(&Param0, 1);
			return 1;
		}
	}
	Function_586(&Param0, 0);
	return 0;
}

void Function_586(struct<25> Param0) //Position: 0x26023 / 155683
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

void Function_587() //Position: 0x2604E / 155726
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_assaultChar", "Ranch04_assaultChar", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_588() //Position: 0x2609D / 155805
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_assaultBon", "Ranch04_assaultBon", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_589() //Position: 0x260EA / 155882
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootChar", "Ranch04_shootChar", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_590() //Position: 0x26135 / 155957
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_attacksDrew", "Ranch04_attacksDrew", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_591() //Position: 0x26184 / 156036
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootBon", "Ranch04_shootBon", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_592() //Position: 0x261CD / 156109
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootsHorse", "Ranch04_shootsHorse", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_593() //Position: 0x2621C / 156188
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch04_shootBonHorse", "Ranch04_shootBonHorse", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_594(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2626F / 156271
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
		Function_586(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_613(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_612(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_612(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_598(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_15(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_586(&Param2, 0);
														return 0;
													}
													if (Function_15(bVar17, 2))
													{
														Function_597(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_596(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_15(bVar17, 4))
													{
														Function_597(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_595(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_580(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_596(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_586(&Param2, 0);
	return 0;
}

void Function_595(char* cParam0) //Position: 0x26685 / 157317
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

void Function_596(struct<25> Param0) //Position: 0x26779 / 157561
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

void Function_597(bool bParam0) //Position: 0x267F1 / 157681
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_39(&iVar0, 1);
	Function_39(&iVar0, 2);
	Function_39(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_598(struct<57> Param0) //Position: 0x26815 / 157717
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
			return Function_609(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_602(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_609(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_599(&Param0, bVar2);
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
						bVar2 = Function_609(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_599(&Param0, bVar2);
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

var Function_599(int iParam0, bool bParam1) //Position: 0x26986 / 158086
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_15(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_601(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_600(16);
			}
		}
	}
	else if (Function_15(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_601(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_600(256);
			}
		}
	}
	return bParam1;
}

bool Function_600(int iParam0) //Position: 0x26AC2 / 158402
{
	return 2 | iParam0;
}

int Function_601(int iParam0) //Position: 0x26ACC / 158412
{
	return 4 | iParam0;
}

int Function_602(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x26AD6 / 158422
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
				iParam3 = Function_608(&iParam0, &iParam1, bParam4);
				if (Function_15(iParam3, 4))
				{
					Function_78(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_600(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_603(&iParam0, &iParam1, 0, bParam4);
				if (Function_15(iParam3, 4))
				{
					Function_78(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_600(16);
		}
	}
	return 0;
}

int Function_603(int iParam0, vector3 vParam1) //Position: 0x26B91 / 158609
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_607(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_606(iVar0, 3, 1, bParam3))
			{
				if (!Function_612(&iParam0, 8, 1))
				{
					return Function_605(64, 1024, bParam2);
				}
			}
			return Function_604(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_606(iVar0, 2, 1, bParam3))
			{
				if (!Function_612(&iParam0, 32, 1))
				{
					return Function_605(64, 1024, bParam2);
				}
			}
			return Function_604(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_606(iVar0, 1, 1, bParam3))
			{
				if (!Function_612(&iParam0, 64, 1))
				{
					return Function_605(64, 1024, bParam2);
				}
			}
			return Function_604(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_606(iVar0, 3, 1, bParam3))
			{
				if (!Function_612(&iParam0, 128, 1))
				{
					return Function_605(64, 1024, bParam2);
				}
			}
			return Function_604(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_606(iVar0, 1, 1, bParam3))
			{
				if (!Function_612(&iParam0, 1024, 1))
				{
					return Function_605(64, 1024, bParam2);
				}
			}
			return Function_604(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_606(iVar0, 1, 1, bParam3))
			{
				if (!Function_612(&iParam0, 1024, 1))
				{
					return Function_605(64, 1024, bParam2);
				}
			}
			return Function_604(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_604(int iParam0, int iParam1, bool bParam2) //Position: 0x26D59 / 159065
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_605(int iParam0, int iParam1, bool bParam2) //Position: 0x26D6E / 159086
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_606(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x26D83 / 159107
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_607(int iParam0) //Position: 0x26DA0 / 159136
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

int Function_608(var uParam0, vector3 vParam1) //Position: 0x26E13 / 159251
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_607(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_606(iVar0, 3, 1, bParam2))
			{
				if (!Function_612(&uParam0, 8, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000009:
			if (Function_606(iVar0, 3, 1, bParam2))
			{
				if (!Function_612(&uParam0, 8, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x0000006E:
			if (Function_606(iVar0, 2, 1, bParam2))
			{
				if (!Function_612(&uParam0, 16, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x0000005B:
			if (Function_606(iVar0, 2, 1, bParam2))
			{
				if (!Function_612(&uParam0, 32, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000031:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&uParam0, 64, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000007:
			if (Function_606(iVar0, 3, 1, bParam2))
			{
				if (!Function_612(&uParam0, 128, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000008:
			if (Function_606(iVar0, 2, 1, bParam2))
			{
				if (!Function_612(&uParam0, 256, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000014:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&uParam0, 512, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000018:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&uParam0, 512, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000057:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&uParam0, 1024, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000058:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&uParam0, 1024, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_609(struct<65> Param0) //Position: 0x2703C / 159804
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
						return Function_608(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_612(&Param0, 2, 1))
					{
						return Function_601(8);
					}
					return Function_600(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_612(&Param0, 4, 1))
					{
						return Function_601(16);
					}
					return Function_600(16);
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
							return Function_603(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_612(&Param0, 2, 1))
						{
							return Function_601(128);
						}
						return Function_600(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_612(&Param0, 4, 1))
						{
							return Function_601(256);
						}
						return Function_600(256);
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
						return Function_603(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_612(&Param0, 2, 1))
					{
						return Function_601(8);
					}
					return Function_600(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_612(&Param0, 4, 1))
					{
						return Function_601(16);
					}
					return Function_600(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_611(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_612(&Param0, 2, 1))
					{
						return Function_601(8);
					}
					return Function_600(8);
				}
				if (!Function_612(&Param0, 4, 1))
				{
					return Function_601(16);
				}
				return Function_600(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_603(&Param0, &uParam1, 1, bParam5);
							if (Function_15(iParam4, 4))
							{
								Function_78(&iParam4, 2);
								Function_39(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_610(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_600(128);
							}
							if (!Function_612(&Param0, 2, 1))
							{
								return Function_601(8);
							}
							return Function_600(8);
						}
						if (iParam4 == 2)
						{
							if (Function_610(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_600(256);
							}
							if (!Function_612(&Param0, 4, 1))
							{
								return Function_601(16);
							}
							return Function_600(16);
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

bool Function_610(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x27322 / 160546
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

int Function_611(int iParam0, vector3 vParam1) //Position: 0x273F0 / 160752
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_607(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_606(iVar0, 2, 1, bParam2))
			{
				if (!Function_612(&iParam0, 16, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x0000005B:
			if (Function_606(iVar0, 2, 1, bParam2))
			{
				if (!Function_612(&iParam0, 32, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000057:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&iParam0, 1024, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		case 0x00000058:
			if (Function_606(iVar0, 1, 1, bParam2))
			{
				if (!Function_612(&iParam0, 1024, 1))
				{
					return Function_601(64);
				}
			}
			return Function_600(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_612(struct<69> Param0) //Position: 0x27512 / 161042
{
	if (bParam2)
	{
		if (!Function_15(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_15(Param0.f_68, bParam1);
}

int Function_613(int iParam0) //Position: 0x2753C / 161084
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

bool Function_614(int iParam0) //Position: 0x27572 / 161138
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_615() //Position: 0x27590 / 161168
{
	switch (iLocal_751)
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

void Function_616() //Position: 0x275C8 / 161224
{
	if (!Function_229(&iLocal_1681))
	{
		Function_227(&iLocal_1681);
	}
	else if (Function_261(&iLocal_1681) <= 5.0f)
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (IS_ACTOR_VALID(&bLocal_1493))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1493, 1.0f))
				{
					if (Function_619(&Global_54076, &bLocal_1493) < 8.0f)
					{
						Function_511("Ranch04_rideIntoBon");
						Function_227(&iLocal_1681);
					}
				}
			}
		}
		if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
		{
			if (IS_ACTOR_VALID(&bLocal_1493))
			{
				if (ACTORS_IN_RANGE(&bLocal_1493, &Global_54076, 20.0f))
				{
					Function_511("Ranch04_buckedOffHorse");
					Function_227(&iLocal_1681);
				}
			}
		}
		Function_618();
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_617(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				bLocal_1723 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_VALID(&bLocal_1723))
				{
					if (IS_ACTOR_HUMAN(&bLocal_1723))
					{
						if (&bLocal_1723 == &bLocal_1493)
						{
							if (Function_229(&iLocal_1669))
							{
								if (Function_261(&iLocal_1669) < 0,25f)
								{
									Function_511("Ranch04_gunBon");
									Function_227(&iLocal_1681);
								}
							}
							else
							{
								Function_227(&iLocal_1669);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &bLocal_1723))
						{
							if (Function_229(&iLocal_1669))
							{
								if (Function_261(&iLocal_1669) < 0,25f)
								{
									Function_511("Ranch04_gunChar");
									Function_227(&iLocal_1681);
								}
							}
							else
							{
								Function_227(&iLocal_1669);
							}
						}
						else if (Function_229(&iLocal_1669))
						{
							Function_226(&iLocal_1669);
						}
					}
					else if (Function_229(&iLocal_1669))
					{
						Function_226(&iLocal_1669);
					}
				}
				else if (Function_229(&iLocal_1669))
				{
					Function_226(&iLocal_1669);
				}
			}
			else if (Function_229(&iLocal_1669))
			{
				Function_226(&iLocal_1669);
			}
		}
		else if (Function_229(&iLocal_1669))
		{
			Function_226(&iLocal_1669);
		}
	}
	return;
}

bool Function_617(bool bParam0) //Position: 0x277C1 / 161729
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

void Function_618() //Position: 0x27807 / 161799
{
	if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_617(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (Function_261(&iLocal_1681) <= 3.0f)
					{
						Function_511("Ranch04_shootRandom");
						Function_227(&iLocal_1681);
					}
				}
			}
		}
	}
	return;
}

float Function_619(var uParam0, bool bParam1) //Position: 0x27866 / 161894
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	GET_ACTOR_VELOCITY(&bParam1, &Var2);
	return VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal));
}

void Function_620(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x2788A / 161930
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_621(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x278B7 / 161975
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_622(StackVal, Param4, uParam3, &iParam6);
		Function_244(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_622(struct<2> Param0, var uParam2, var uParam3) //Position: 0x278F8 / 162040
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_624(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_623(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_623(int iParam0) //Position: 0x2797A / 162170
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

var Function_624(struct<2> Param0, bool bParam2) //Position: 0x27E28 / 163368
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

struct<8> Function_625(int iParam0) //Position: 0x27E94 / 163476
{
	Function_439(iParam0 + 1);
	return StackVal, Function_439(iParam0 + 1);
}

int Function_626(int iParam0) //Position: 0x27EA1 / 163489
{
	return Function_438(iParam0 + 1);
}

