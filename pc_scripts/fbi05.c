//Decompiled with MagicRDR v1.0
//Function Count : 619
//Statics Count : 1571
//Natives Count : 797
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 19;
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
	var uLocal_84 = 5;
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
	var uLocal_106 = 5;
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
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 1;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1;
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
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 1;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 3;
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
	var uLocal_174 = 1;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
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
	var uLocal_200 = 3;
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
	var uLocal_216 = 2;
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
	var uLocal_228 = 2;
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
	var uLocal_240 = 2;
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
	var uLocal_252 = 4;
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
	var uLocal_272 = 5;
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
	var uLocal_296 = 6;
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
	var uLocal_312 = 9;
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
	var uLocal_334 = 3;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 9;
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
	var uLocal_366 = 8;
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
	var uLocal_386 = 10;
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
	var uLocal_410 = 9;
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
	var uLocal_432 = 13;
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
	var uLocal_462 = 4;
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
	var uLocal_476 = 7;
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
	var uLocal_494 = 4;
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
	var uLocal_506 = 5;
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
	var uLocal_520 = 3;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 2;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 8;
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
	var uLocal_558 = 3;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 14;
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
	var uLocal_654 = 1;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 4;
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
	var uLocal_676 = 1;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 1;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 10;
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
	var uLocal_712 = 1;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 2;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 3;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 12;
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
	var uLocal_768 = 2;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 5;
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
	var uLocal_808 = 5;
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
	var uLocal_822 = 3;
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
	var uLocal_842 = 3;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 2;
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
	var uLocal_868 = 2;
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
	var uLocal_884 = 4;
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
	var uLocal_912 = 11;
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
	var uLocal_942 = 4;
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
	int iLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	struct<6> Local_1051 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	int iLocal_1063 = 16;
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
	int iLocal_1141 = 0;
	bool bLocal_1142 = false;
	int iLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	bool bLocal_1146 = false;
	var uLocal_1147 = 0;
	bool bLocal_1148 = false;
	var uLocal_1149 = 0;
	bool bLocal_1150 = false;
	var uLocal_1151 = 0;
	bool bLocal_1152 = false;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	bool bLocal_1156 = false;
	var uLocal_1157 = 0;
	int iLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160[3] = { 0, 0, 0 };
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	bool bLocal_1168 = false;
	var uLocal_1169 = 0;
	int iLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	int iLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	int iLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	int iLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	int iLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	int iLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	int iLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	int iLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	int iLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	int iLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	int iLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	int iLocal_1220 = 0;
	var uLocal_1221 = 0;
	float fLocal_1222 = 0.0f;
	bool bLocal_1223 = false;
	bool bLocal_1224 = false;
	bool bLocal_1225 = false;
	int iLocal_1226[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	bool bLocal_1238 = false;
	bool bLocal_1239 = false;
	bool bLocal_1240 = false;
	int iLocal_1241 = 0;
	int iLocal_1242 = 0;
	int iLocal_1243 = 0;
	int iLocal_1244 = 0;
	bool bLocal_1245 = false;
	int iLocal_1246 = 0;
	int iLocal_1247 = 0;
	bool bLocal_1248 = false;
	bool bLocal_1249 = false;
	int iLocal_1250 = 0;
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	struct<2> Local_1253 = { 0, 0 } ;
	var uLocal_1255 = 0;
	int iLocal_1256 = 0;
	int iLocal_1257 = 0;
	int iLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 13;
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
	struct<15> Local_1315[4];
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
	var uLocal_1395 = 5;
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
	var uLocal_1425 = 5;
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
	bool bLocal_1445 = false;
	int iLocal_1446 = 0;
	int iLocal_1447 = 0;
	bool bLocal_1448 = false;
	bool bLocal_1449 = false;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	int iLocal_1456 = 0;
	int iLocal_1457 = 0;
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	var uLocal_1460 = 0;
	bool bLocal_1461 = false;
	int iLocal_1462[2] = { 0, 0 };
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	bool bLocal_1468 = false;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	int iLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	int iLocal_1489 = 0;
	int iLocal_1490[2] = { 0, 0 };
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	bool bLocal_1496 = false;
	int iLocal_1497 = 0;
	int iLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	int iLocal_1502 = 0;
	int iLocal_1503 = 0;
	int iLocal_1504 = 0;
	int iLocal_1505 = 0;
	bool bLocal_1506 = false;
	int iLocal_1507 = 0;
	int iLocal_1508 = 0;
	int iLocal_1509 = 0;
	int iLocal_1510[2] = { 0, 0 };
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	var uLocal_1519 = 0;
	int iLocal_1520 = 0;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	int iLocal_1523 = 0;
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int iLocal_1527 = 0;
	int iLocal_1528 = 0;
	int iLocal_1529 = 0;
	var uLocal_1530[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1539 = 0;
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
	int iLocal_1552 = 0;
	int iLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
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
	iLocal_1522 = 0;
	iLocal_1523 = 1;
	iLocal_1526 = 0;
	iLocal_1527 = 0;
	iLocal_1528 = 0;
	iLocal_1529 = 0;
	iLocal_1552 = 0;
	Local_1051 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_1141 = 99;
	bLocal_1142 = 6;
	iLocal_1129 = 1000;
	while (Function_224())
	{
		WAIT(false);
	}
	Function_1();
	LOG_ERROR("Should never reach ENDSCRIPT");
	return;
}

void Function_1() //Position: 0x7B / 123
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bLocal_1146))
	{
		DECOR_SET_BOOL(&bLocal_1146, "ForceAllowRain", 0);
	}
	STOP_PED_SPEAKING(&bLocal_1150, 0);
	if (IS_VEHICLE_CINEMATIC_CAMERA_FORCED_ON())
	{
		FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	}
	if (IS_OBJECT_VALID(&bLocal_1156))
	{
		Function_223(&bLocal_1156);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	Function_222(&iLocal_1158);
	Function_222(&(uLocal_1160[0]));
	Function_222(&(uLocal_1160[1]));
	Function_222(&(uLocal_1160[2]));
	AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&bLocal_1148, 1);
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 4, 0);
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 6, 0);
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 0);
	if (bLocal_1496)
	{
		SET_ALLOW_MELEE_SPECIAL_MOVE(&Global_54076, 1);
		SET_ALLOW_MELEE_SPECIAL_MOVE(&bLocal_1150, 1);
	}
	UNK_0xD2A140BC(0);
	Function_221(&iLocal_4 + 672);
	Function_221(&iLocal_4 + 712);
	Function_221(&iLocal_4 + 776);
	Function_221(&iLocal_4 + 840);
	Function_221(&iLocal_4 + 888);
	Function_221(&iLocal_4 + 936);
	Function_221(&iLocal_4 + 984);
	Function_221(&iLocal_4 + 1064);
	Function_221(&iLocal_4 + 1160);
	Function_220(&uLocal_1154);
	Function_219(&(Global_43791[Global_46914[3]]), 384);
	Function_219(&(Global_43791[Global_46914[0]]), 256);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1168[4]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1168[4]);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_218();
	DECOR_SET_BOOL(&Global_54076, "Player_DisablePutOnHorse", 0);
	DECOR_SET_BOOL(&Global_54076, "corpse_loot_gringo", 1);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	uVar0 = Function_216("blackwater", "policeStation", 4);
	if (IS_DOOR_VALID(&uVar0))
	{
		Function_215(&uVar0, 1);
	}
	uVar0 = Function_216("blackwater", "policeStation", 5);
	if (IS_DOOR_VALID(&uVar0))
	{
		Function_215(&uVar0, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1148))
	{
		DESTROY_ACTOR(&bLocal_1148);
	}
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		DESTROY_ACTOR(&bLocal_1152);
	}
	if (IS_ACTOR_VALID(&bLocal_1150))
	{
		DESTROY_ACTOR(&bLocal_1150);
	}
	Function_214(&uLocal_1049);
	Function_214(&iLocal_4);
	Function_213();
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	Function_222(&iLocal_1158);
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	TOGGLE_COVER_PROPS(0);
	Function_210(10, 1, 0, 1, 1);
	DESTROY_ACTOR(&bLocal_1146);
	Function_181(bLocal_1239, 1, 0, 0, 0, 1, 1, 1);
	Function_177();
	Function_173(&iLocal_1063);
	RELEASE_LAYOUT_REF(&uLocal_1049);
	if (bLocal_1238)
	{
		Function_26(Local_1051, 1, 1, 1, 0);
	}
	else if (bLocal_1239)
	{
		Function_22(Local_1051);
	}
	else
	{
		Function_2(Local_1051);
	}
	UI_EXIT("HealthMeter");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x3CD / 973
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x3EE / 1006
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x40B / 1035
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x42E / 1070
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x445 / 1093
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

void Function_7(int iParam0) //Position: 0x4E7 / 1255
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x50A / 1290
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

void Function_9() //Position: 0x554 / 1364
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x56D / 1389
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

void Function_11(var uParam0, int iParam1) //Position: 0x5C0 / 1472
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

struct<16> Function_12(int iParam0) //Position: 0x6EA / 1770
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

bool Function_13() //Position: 0x724 / 1828
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x73F / 1855
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x74C / 1868
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x76C / 1900
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x783 / 1923
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x79E / 1950
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9E5 / 2533
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0xA11 / 2577
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

bool Function_21(int iParam0) //Position: 0xA35 / 2613
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0xA4A / 2634
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0xA68 / 2664
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
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xB0E / 2830
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

struct<24> Function_25(char* cParam0) //Position: 0xB4D / 2893
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xDA3 / 3491
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
		Function_168(&(Global_6667[iVar228]));
		Function_167(4194304);
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

void Function_27() //Position: 0xE97 / 3735
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

int Function_28(int iParam0, bool bParam1) //Position: 0xEC9 / 3785
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

int Function_29(int iParam0) //Position: 0xF07 / 3847
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xF21 / 3873
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xF37 / 3895
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1234 / 4660
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

void Function_33(char* cParam0) //Position: 0x12A9 / 4777
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x12E3 / 4835
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

bool Function_35(var uParam0, int iParam1) //Position: 0x135F / 4959
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1372 / 4978
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

int Function_37(int iParam0) //Position: 0x1413 / 5139
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1450 / 5200
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1466 / 5222
{
	bool bVar0;
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
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
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
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x16C4 / 5828
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1702 / 5890
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

void Function_42(bool bParam0) //Position: 0x1741 / 5953
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

void Function_43() //Position: 0x1796 / 6038
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

void Function_44() //Position: 0x17E1 / 6113
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

void Function_45() //Position: 0x18E7 / 6375
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

void Function_46() //Position: 0x191A / 6426
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

void Function_47() //Position: 0x1AAD / 6829
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

void Function_48() //Position: 0x1C66 / 7270
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1C74 / 7284
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

bool Function_50() //Position: 0x1E91 / 7825
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1EA6 / 7846
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F4D / 8013
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x21E9 / 8681
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

int Function_54() //Position: 0x2827 / 10279
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2830 / 10288
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2841 / 10305
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

struct<32> Function_57(char* cParam0) //Position: 0x2938 / 10552
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2953 / 10579
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x29BA / 10682
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x29CC / 10700
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29DE / 10718
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

int Function_62(int iParam0) //Position: 0x2B12 / 11026
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2B21 / 11041
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2B5A / 11098
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2B97 / 11159
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D31 / 11569
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

int Function_67(bool bParam0) //Position: 0x2F75 / 12149
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2FB6 / 12214
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

struct<8> Function_69() //Position: 0x303F / 12351
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

struct<8> Function_70() //Position: 0x30D6 / 12502
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

void Function_71() //Position: 0x3155 / 12629
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3192 / 12690
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

void Function_73() //Position: 0x339E / 13214
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

bool Function_74(char* cParam0) //Position: 0x3455 / 13397
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x346D / 13421
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

struct<8> Function_76() //Position: 0x3565 / 13669
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x356F / 13679
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3580 / 13696
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3596 / 13718
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3662 / 13922
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x367F / 13951
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

bool Function_82(int iParam0) //Position: 0x3EAB / 16043
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3EE6 / 16102
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3EF5 / 16117
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

bool Function_85(int iParam0) //Position: 0x43D3 / 17363
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x43E9 / 17385
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4408 / 17416
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4422 / 17442
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x448C / 17548
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

void Function_90(int iParam0) //Position: 0x46B4 / 18100
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

void Function_91() //Position: 0x4752 / 18258
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

void Function_92() //Position: 0x48B4 / 18612
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4934 / 18740
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4C8B / 19595
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

int Function_95(int iParam0) //Position: 0x4D13 / 19731
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4D2D / 19757
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4D58 / 19800
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4D86 / 19846
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x5022 / 20514
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

void Function_100(int iParam0, int iParam1) //Position: 0x51F6 / 20982
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5460 / 21600
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

int Function_102() //Position: 0x55F0 / 22000
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

void Function_103() //Position: 0x5691 / 22161
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

void Function_104(int iParam0) //Position: 0x574F / 22351
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

var Function_105(int iParam0) //Position: 0x57B5 / 22453
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5844 / 22596
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

var Function_107(int iParam0, int iParam1) //Position: 0x59F0 / 23024
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

void Function_108() //Position: 0x5A35 / 23093
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5A4B / 23115
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5A8B / 23179
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5ACB / 23243
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5ADA / 23258
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

int Function_113(int iParam0) //Position: 0x5CA2 / 23714
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

var Function_114() //Position: 0x5D37 / 23863
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5D5C / 23900
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x622B / 25131
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

var Function_117(int iParam0) //Position: 0x6552 / 25938
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x65F5 / 26101
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

int Function_119(int iParam0, bool bParam1) //Position: 0x67F2 / 26610
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x699D / 27037
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6A6F / 27247
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
			Function_165(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(Global_46760[0]);
			Function_162(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_160(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_162(Global_46816[0]);
			Function_152(0);
			Function_150(2, 1);
			Function_150(0, 1);
			Function_150(1, 1);
			break;
		
		case 0x00000003:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_162(Global_46816[0]);
			Function_162(Global_46760[0]);
			Function_148(0, 1);
			Function_148(15, 1);
			Function_148(9, 1);
			Function_148(12, 1);
			Function_148(16, 1);
			Function_150(3, 1);
			break;
		
		case 0x00000005:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_160(21, &bParam2, 4);
			Function_162(Global_46816[0]);
			Function_150(39, 1);
			break;
		
		case 0x00000007:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_147())
				{
					if (!Function_146(4))
					{
						Function_136(4, 0, 0, 1, 0);
					}
				}
			}
			Function_162(Global_46760[0]);
			Function_162(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_162(Global_46760[0]);
			Function_162(Global_46816[2]);
			Function_135(&(Global_43791[Global_46816[2]]), 32768);
			Function_219(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_160(9, &bParam2, 4);
			Function_162(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_162(Global_46760[0]);
			Function_162(Global_46796[0]);
			Function_135(&(Global_43791[Global_46796[0]]), 32768);
			Function_219(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_162(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(Global_46760[0]);
			Function_162(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_162(Global_46760[1]);
			Function_162(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_162(Global_46838[0]);
			Function_162(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_162(Global_46796[5]);
			Function_162(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_160(21, &bParam2, 4);
			Function_162(Global_46760[4]);
			Function_162(Global_46796[4]);
			Function_134(&Global_119935, 0x2000000);
			Function_134(&Global_119935, 0x4000000);
			Function_134(&Global_119935, 4096);
			Function_134(&Global_119935, 8);
			Function_134(&Global_119935, 8388608);
			Function_134(&Global_119935, 524288);
			Function_134(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_162(Global_46760[4]);
			Function_162(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_219(&(Global_43791[Global_46760[4]]), 256);
			Function_162(Global_46760[4]);
			Function_162(Global_46796[0]);
			Function_135(&(Global_43791[Global_46796[0]]), 32768);
			Function_219(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_162(Global_46760[0]);
			Function_162(Global_46760[5]);
			Function_160(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_162(Global_46796[3]);
			Function_135(&(Global_43791[Global_46796[3]]), 32768);
			Function_219(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_160(9, &bParam2, 4);
			Function_162(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_135(&(Global_43791[Global_46838[1]]), 32768);
			Function_162(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_160(12, &bParam2, 4);
			Function_219(&(Global_43791[Global_46838[1]]), 256);
			Function_162(Global_46816[3]);
			Function_162(Global_46866[0]);
			Function_162(Global_46850[0]);
			Function_152(4);
			Function_148(13, 1);
			Function_148(1, 1);
			Function_148(18, 1);
			Function_150(34, 1);
			Function_150(44, 1);
			Function_150(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_160(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_162(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_162(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_162(Global_46866[0]);
			Function_162(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_162(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_162(Global_46850[0]);
			Function_162(Global_46866[0]);
			Function_162(Global_46866[1]);
			Function_162(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_160(23, &bParam2, 3);
			Function_148(23, 1);
			Function_162(Global_46850[0]);
			Function_162(Global_46850[2]);
			Function_135(&(Global_43791[Global_46850[2]]), 32768);
			Function_219(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_160(19, &bParam2, 4);
			Function_162(Global_46850[0]);
			Function_162(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_160(24, &bParam2, 3);
			Function_148(24, 1);
			Function_162(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_162(Global_46850[0]);
			Function_162(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_162(Global_46866[12]);
			Function_162(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_162(Global_46866[12]);
			Function_162(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_160(25, &bParam2, 10);
			Function_162(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_162(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_162(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_160(13, &bParam2, 4);
			Function_162(Global_46866[2]);
			Function_162(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_146(8))
				{
					Function_136(8, 0, 0, 1, 0);
				}
			}
			Function_162(Global_46850[0]);
			Function_152(9);
			Function_148(7, 1);
			Function_148(11, 1);
			Function_148(3, 1);
			Function_148(20, 1);
			Function_150(57, 1);
			break;
		
		case 0x0000002A:
			Function_160(2, &bParam2, 4);
			Function_162(Global_46914[0]);
			Function_162(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_162(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_162(Global_46914[0]);
			Function_162(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_162(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_162(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_162(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_160(17, &bParam2, 4);
			Function_162(Global_46926[0]);
			Function_162(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_132(15))
				{
					Function_127(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_219(&(Global_43791[Global_46914[1]]), 256);
			Function_152(11);
			Function_162(Global_46914[1]);
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_162(Global_46914[1]);
			Function_162(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_162(Global_46914[1]);
			Function_122(11);
			Function_152(12);
			Global_26200[1114].f_40 = 0;
			Function_150(56, 1);
			if (!&bParam2)
			{
				if (!Function_146(9))
				{
					Function_136(9, 0, 0, 0, 0);
				}
				if (!Function_146(10))
				{
					Function_136(10, 0, 0, 1, 0);
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

void Function_122(int iParam0) //Position: 0x738A / 29578
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_215(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_215(&Global_26200[iParam014] + 88, 0);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7507 / 29959
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7612 / 30226
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x763E / 30270
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

var Function_126(vector3 vParam0) //Position: 0x7695 / 30357
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

void Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x76E3 / 30435
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		if (!Function_146(bParam0))
		{
			Function_136(bParam0, 1, 0, 0, 1);
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
		Function_89(457, 1, 0, 0);
		Function_130(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
	}
	return;
}

void Function_128() //Position: 0x7884 / 30852
{
	return;
}

bool Function_129(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x788A / 30858
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

void Function_130(bool bParam0, int iParam1) //Position: 0x7939 / 31033
{
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_131(int iParam0) //Position: 0x798E / 31118
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_132(int iParam0) //Position: 0x79A4 / 31140
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x79F5 / 31221
{
	int iVar0;
	
	if (!Function_131(iParam0))
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

void Function_134(var uParam0, int iParam1) //Position: 0x7A22 / 31266
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x7A33 / 31283
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7A44 / 31300
{
	char* cVar0[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_145(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_146(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_128();
			}
		}
		Function_139(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_138() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_138() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_137(&cVar0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_137(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7BA0 / 31648
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

bool Function_138() //Position: 0x7C2B / 31787
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_139(bool bParam0) //Position: 0x7C58 / 31832
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_142(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_141(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_140(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_140(int iParam0) //Position: 0x7E08 / 32264
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

void Function_141(var uParam0, int iParam1) //Position: 0x7E5F / 32351
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

var Function_142(int iParam0) //Position: 0x7E84 / 32388
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

bool Function_143(bool bParam0, bool bParam1) //Position: 0x7EDA / 32474
{
	int iVar0;
	
	if (!Function_131(bParam0))
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

bool Function_144(bool bParam0) //Position: 0x7F39 / 32569
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_145(int iParam0) //Position: 0x7F45 / 32581
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_146(int iParam0) //Position: 0x7F61 / 32609
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_147() //Position: 0x7FB3 / 32691
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_148(int iParam0, int iParam1) //Position: 0x7FE3 / 32739
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_149(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_149(int iParam0, int iParam1) //Position: 0x806A / 32874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x80C7 / 32967
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x813A / 33082
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_152(int iParam0) //Position: 0x8195 / 33173
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_159(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_159(&Global_26200[iParam014] + 88, 0);
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
			Function_137("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_136(14, 1, 0, 0, 0);
				Function_153(14, 1, 0, 0, 0);
			}
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_128();
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
			Function_137("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_153(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8455 / 33877
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_145(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_137(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_143(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_130(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_139(bParam0);
		if (StackVal && !Function_14(((((!Function_138() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_138() || Global_6623) || Global_6635) || Global_6627), 1))
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
			Function_155();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_154(3, bParam1);
				break;
			
			case 0x00000005:
				Function_154(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_154(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_154(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_154(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_154(2, SHIFT_LEFT(bParam1, 18));
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

void Function_154(int iParam0, bool bParam1) //Position: 0x86F4 / 34548
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

void Function_155() //Position: 0x8763 / 34659
{
	if (Function_131(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_158(Global_42827);
			(&Global_42827 + 8) = Function_156(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_158(Global_42827);
			*(&Global_42827 + 8) = Function_156(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_156(int iParam0, int iParam1) //Position: 0x87E3 / 34787
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
					if (Function_157(13) && iVar14)
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
					if (Function_157(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(23) && iVar15)
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
					if (Function_157(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_157(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_157(27) && iVar16)
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
					if (Function_157(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(49) && iVar13)
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
					if (Function_157(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_157(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_157(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_157(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_157(15) && iVar17)
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

int Function_157(int iParam0) //Position: 0x9446 / 37958
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0) //Position: 0x945B / 37979
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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

void Function_159(var uParam0, int iParam1) //Position: 0x94AA / 38058
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

void Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x9502 / 38146
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_161(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_165(bParam0, 0, 0);
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

bool Function_161(int iParam0, int iParam1) //Position: 0x9575 / 38261
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_162(int iParam0) //Position: 0x9589 / 38281
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_164(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_135(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_163(iParam0);
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

var Function_163(int iParam0) //Position: 0x967A / 38522
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

bool Function_164(var uParam0, int iParam1) //Position: 0x96D2 / 38610
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_165(bool bParam0, bool bParam1, int iParam2) //Position: 0x96EF / 38639
{
	if (!Function_166(bParam0))
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

bool Function_166(int iParam0) //Position: 0x9749 / 38729
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_167(bool bParam0) //Position: 0x975B / 38747
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

void Function_168(struct<185> Param0) //Position: 0x978F / 38799
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
			Function_169(4, 0, 0);
		}
	}
	return;
}

void Function_169(int iParam0, var uParam1, int iParam2) //Position: 0x97FA / 38906
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
		Function_170(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_170(int iParam0, int iParam1, bool bParam2) //Position: 0x98E4 / 39140
{
	int iVar0;
	
	Function_172(iParam0);
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
	Function_171();
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

void Function_171() //Position: 0x9A63 / 39523
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_172(int iParam0) //Position: 0x9A6F / 39535
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

void Function_173(int iParam0) //Position: 0x9AB5 / 39605
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_174(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_174(struct<2>[] Param0, int iParam1) //Position: 0x9ADD / 39645
{
	if (Function_176(&(Param0[iParam12]), 4))
	{
		if (Function_176(&(Param0[iParam12]), 1))
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
			Function_175(&(Param0[iParam12]), 1);
			Function_175(&(Param0[iParam12]), 2);
			Function_175(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_175(struct<13> Param0) //Position: 0x9C28 / 39976
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_176(struct<13> Param0) //Position: 0x9C45 / 40005
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_177() //Position: 0x9C63 / 40035
{
	Function_180();
	Function_179();
	Function_178();
	return;
}

void Function_178() //Position: 0x9C72 / 40050
{
	Function_173(&iLocal_4 + 408);
	return;
}

void Function_179() //Position: 0x9C80 / 40064
{
	Function_173(&iLocal_4 + 320);
	return;
}

void Function_180() //Position: 0x9C8E / 40078
{
	Function_173(&iLocal_4 + 8);
	Function_173(&iLocal_4 + 320);
	Function_173(&iLocal_4 + 408);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9CB1 / 40113
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
	Function_218();
	Function_206(0);
	Function_205();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_204();
	Function_203();
	Function_208();
	ENABLE_JOURNAL_REPLAY(1);
	Function_202(1);
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
		Function_201(&Global_54076);
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
	Function_198(Global_42825);
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
	Function_197();
	Function_196(1178687);
	Function_194(33039);
	Function_193(0x218003f);
	Function_192(4194560);
	Function_191();
	Function_190();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_187(0, 1, 1);
	}
	else
	{
		Function_187(0, 1, 1);
	}
	Function_186();
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
	Function_182();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_182() //Position: 0x9EBD / 40637
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
		if (Function_185() > 3)
		{
			iVar0 *= 2;
		}
		Function_183(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9F14 / 40724
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_184(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_184(bool bParam0) //Position: 0x9F64 / 40804
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_185() //Position: 0x9F8D / 40845
{
	return Global_21369.f_248;
}

void Function_186() //Position: 0x9F98 / 40856
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_219(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_187(int iParam0, bool bParam1, int iParam2) //Position: 0x9FC2 / 40898
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
			Function_135(&(Global_43791[Global_43789]), 131072);
			Function_219(&(Global_43791[Global_43789]), 2097152);
			Function_188(Global_43789);
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
				if (Function_164(&(Global_43791[iVar0]), 4) || Function_164(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_219(&(Global_43791[iVar0]), 2097155);
					Function_135(&(Global_43791[iVar0]), 262144);
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

void Function_188(int iParam0) //Position: 0xA0CE / 41166
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_189())
			{
				return;
			}
		}
		if (!Function_164(&(Global_43791[iParam0]), 2048))
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

bool Function_189() //Position: 0xA14D / 41293
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_164(&(Global_43791[iVar0]), 4) || Function_164(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_190() //Position: 0xA1B6 / 41398
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

void Function_191() //Position: 0xA1DC / 41436
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

void Function_192(int iParam0) //Position: 0xA202 / 41474
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_193(int iParam0) //Position: 0xA21F / 41503
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_194(int iParam0) //Position: 0xA232 / 41522
{
	Function_195(&Global_43580, iParam0);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0xA240 / 41536
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_196(bool bParam0) //Position: 0xA25F / 41567
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_197() //Position: 0xA28C / 41612
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

void Function_198(int iParam0) //Position: 0xA304 / 41732
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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
		Function_199(78, 1, 1);
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
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_199(bool bParam0, bool bParam1, int iParam2) //Position: 0xA43A / 42042
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_200(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_200(bool bParam0) //Position: 0xA488 / 42120
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

void Function_201(int iParam0) //Position: 0xA57C / 42364
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

void Function_202(bool bParam0) //Position: 0xA5FF / 42495
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

void Function_203() //Position: 0xA676 / 42614
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

void Function_204() //Position: 0xA6BA / 42682
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

void Function_205() //Position: 0xA6FE / 42750
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_206(int iParam0) //Position: 0xA714 / 42772
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_207())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_207() //Position: 0xA754 / 42836
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

void Function_208() //Position: 0xA779 / 42873
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

int Function_209() //Position: 0xA7A4 / 42916
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

int Function_210(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA7C1 / 42945
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
		Function_212(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_211(&Global_15402[iParam014] + 8);
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

void Function_211(bool bParam0) //Position: 0xAB03 / 43779
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

void Function_212(var uParam0) //Position: 0xAB36 / 43830
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_213() //Position: 0xAB4D / 43853
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_214(int iParam0) //Position: 0xAB56 / 43862
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

void Function_215(var uParam0, int iParam1) //Position: 0xABBE / 43966
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

int Function_216(var uParam0, var uParam1, int iParam2) //Position: 0xAC19 / 44057
{
	return Function_217(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_217(int iParam0, char* cParam1, bool bParam3) //Position: 0xAC2D / 44077
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_85(iParam0))
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

void Function_218() //Position: 0xACD2 / 44242
{
	Global_15862 = 0.0f;
	return;
}

void Function_219(var uParam0, int iParam1) //Position: 0xACDC / 44252
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_220(int iParam0) //Position: 0xACF6 / 44278
{
	if (IS_BLIP_VALID(&iParam0))
	{
		REMOVE_BLIP(&iParam0);
	}
	return;
}

void Function_221(var uParam0) //Position: 0xAD0B / 44299
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
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

void Function_222(int iParam0) //Position: 0xAD9B / 44443
{
	if (IS_OBJECT_VALID(&iParam0))
	{
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_223(bool bParam0) //Position: 0xADB0 / 44464
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

bool Function_224() //Position: 0xAE46 / 44614
{
	if (IS_EXITFLAG_SET())
	{
		Function_617(iLocal_1141);
		Function_613(StackVal, 4, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
		return 0;
	}
	Function_612(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1051, iLocal_1141, bLocal_1142, &bLocal_1240, &bLocal_1238, &bLocal_1239);
	if (iLocal_1141 == 99 && iLocal_1141 == 100)
	{
		Function_607();
		Function_606();
		Function_605();
		if (iLocal_1472)
		{
			Function_604();
		}
		else if (iLocal_1141 != 101)
		{
			if (IS_ACTOR_VALID(&bLocal_1152))
			{
				if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
				{
					iLocal_1472 = 1;
				}
			}
		}
		if (Function_602())
		{
			if (IS_ACTOR_VALID(&bLocal_1148))
			{
				if (!DECOR_CHECK_EXIST(&bLocal_1148, "iscompanion"))
				{
					SET_ACTOR_IS_COMPANION(&bLocal_1148, 1);
					DECOR_SET_BOOL(&bLocal_1148, "iscompanion", 1);
				}
			}
			if (Function_582(&Local_1315, &uLocal_1261, &uLocal_1437, &uLocal_1144, iLocal_1241))
			{
				if (Function_580(&uLocal_1437))
				{
					Function_617(iLocal_1141);
					Function_613(StackVal, 5, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
					return 1;
				}
			}
			if (IS_ACTOR_DEAD(&Global_54076))
			{
				Function_617(iLocal_1141);
				Function_613(StackVal, 1, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
				return 1;
			}
			if (Function_579(2048))
			{
				Function_617(iLocal_1141);
				Function_613(StackVal, 3, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
				return 1;
			}
			if ((Global_6646 || Global_6647) || Function_577(&Global_54076, 1))
			{
				Function_617(iLocal_1141);
				Function_613(StackVal, 2, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
				return 1;
			}
			if (IS_ACTOR_VALID(&bLocal_1150))
			{
				if (IS_ACTOR_DEAD(&bLocal_1150))
				{
					Function_576("Nastas_dead");
					Function_617(iLocal_1141);
					Function_613(StackVal, 5, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
					return 1;
				}
			}
			if ((Function_575() && iLocal_1141 == 1) && iLocal_1141 == 101)
			{
				Function_576("FBI05_carFail");
				Function_617(iLocal_1141);
				Function_613(StackVal, 5, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
				return 1;
			}
			Function_574();
		}
	}
	switch (iLocal_1141)
	{
		case 0x00000063:
			Function_521();
			break;
		
		case 0x00000000:
			Function_506();
			break;
		
		case 0x00000001:
			Function_486();
			break;
		
		case 0x00000002:
			Function_412();
			break;
		
		case 0x00000003:
			Function_395();
			break;
		
		case 0x00000004:
			Function_283();
			break;
		
		case 0x00000065:
			Function_232();
			break;
		
		case 0x00000064:
			if (Function_231(&bLocal_1239))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_230(&iLocal_1141, &bLocal_1142, &iLocal_1129))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1238)
	{
		Function_229(&bLocal_1238, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1239 && iLocal_1141 == 100)
	{
		Function_617(iLocal_1141);
		Function_613(StackVal, 5, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
	}
	if (bLocal_1240)
	{
		Function_225(&bLocal_1240, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_225(var uParam0, int iParam1) //Position: 0xB11F / 45343
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_226(&iParam1);
	uParam0 = 1;
	return;
}

void Function_226(int iParam0) //Position: 0xB144 / 45380
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_576("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_228(2) || Function_228(8)) || Function_228(9)) || Function_228(10))
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
		Function_576("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_576("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_576("");
	}
	else if (iParam0 == 8)
	{
		Function_227();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_227();
	}
	return;
}

void Function_227() //Position: 0xB23B / 45627
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_228(int iParam0) //Position: 0xB247 / 45639
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

void Function_229(var uParam0, int iParam1) //Position: 0xB27D / 45693
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_226(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_230(var uParam0, var uParam1, int iParam2) //Position: 0xB2A2 / 45730
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

bool Function_231(int iParam0) //Position: 0xB2EB / 45803
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_232() //Position: 0xB2FF / 45823
{
	switch (bLocal_1142)
	{
		case 0x00000000:
			Function_279(0);
			Function_277(9);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_1143 = Global_46914[0];
			if (!Function_276(iLocal_1143))
			{
				Function_275(&Local_1051);
			}
			ENABLE_CHILD_SECTOR("blk_archeologist01Props01x");
			if (iLocal_1226[4] == 0)
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, (&iLocal_4 + 2248[33]), 1, 0, 0);
				Function_274(1);
			}
			else
			{
				Function_274(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_276(iLocal_1143) || iLocal_1143 != 4294967295))
			{
				Function_274(2);
			}
			break;
		
		case 0x00000002:
			Function_271();
			Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
			Function_274(3);
			break;
		
		case 0x00000003:
			if (Function_233("$/cutscene/FBI_05_END_SCENE/FBI_05_END_SCENE", &iLocal_1129, &Local_1051, &iLocal_1141, 50540, 50528, 50440, 49972, 49339, 49332, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_274(106);
			}
			break;
		
		case 0x0000006A:
			if (iLocal_1505)
			{
				iLocal_1505 = 0;
			}
			if (!HUD_IS_FADING())
			{
				bLocal_1238 = true;
			}
			break;
	}
	return;
}

bool Function_233(int iParam0, int iParam1, struct<41> Param2) //Position: 0xB472 / 46194
{
	if (!&bParam15)
	{
		Function_248(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_247(&Param2) || Param2.f_40 < 1))
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
				Function_245(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_244())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_243(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_245(&iParam1 + 4);
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
					Function_243(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_240(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_240(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_238(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_243(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_245(&iParam1 + 4);
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
						Function_237(1.0f);
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
						Function_235();
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
					Function_234(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_247(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_234(var uParam0, bool bParam1) //Position: 0xBAD4 / 47828
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
		Function_197();
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

void Function_235() //Position: 0xBBA3 / 48035
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_236();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_236() //Position: 0xBBE8 / 48104
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_237(bool bParam0) //Position: 0xBBFA / 48122
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

void Function_238(var uParam0, int iParam1) //Position: 0xBC17 / 48151
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
			if ((&iVar3 == &Global_54076 && !Function_239(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_239(int iParam0) //Position: 0xBCA9 / 48297
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

float Function_240(vector3 vParam0) //Position: 0xBCDA / 48346
{
	if (Function_242(&vParam0))
	{
		if (Function_241(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_241(int iParam0) //Position: 0xBDA7 / 48551
{
	return Function_14(iParam0, 2);
}

bool Function_242(int iParam0) //Position: 0xBDB5 / 48565
{
	return Function_14(iParam0, 1);
}

int Function_243(bool bParam0) //Position: 0xBDC3 / 48579
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

bool Function_244() //Position: 0xBE86 / 48774
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

void Function_245(int iParam0) //Position: 0xBEC3 / 48835
{
	Function_246(&iParam0, 0.0f);
	return;
}

void Function_246(vector3 vParam0) //Position: 0xBED0 / 48848
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_247(struct<37> Param0) //Position: 0xBEF5 / 48885
{
	return Param0.f_36;
}

void Function_248(var uParam0, int iParam1) //Position: 0xBF00 / 48896
{
	Function_249(&uParam0, &iParam1, 0);
	return;
}

void Function_249(var uParam0, bool bParam1, bool bParam2) //Position: 0xBF10 / 48912
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
			Function_250(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_250(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_250(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC08A / 49290
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

int Function_251() //Position: 0xC0B4 / 49332
{
	return 1;
}

int Function_252() //Position: 0xC0BB / 49339
{
	Function_255(10, 0, 1);
	Function_210(10, 1, 0, 1, 1);
	DESTROY_ACTOR(&bLocal_1146);
	DESTROY_ACTOR(&bLocal_1148);
	DESTROY_ACTOR(&bLocal_1150);
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_211(&bLocal_1152);
		DESTROY_ACTOR(&bLocal_1152);
	}
	Function_253(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_253(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xC10E / 49422
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
		Function_254();
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
	Function_234(&iParam9, &bParam10);
}

void Function_254() //Position: 0xC1DD / 49629
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_255(int iParam0, bool bParam1, bool bParam2) //Position: 0xC1F2 / 49650
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
						Function_211(&uVar1);
					}
				}
				Function_256(&uVar0);
			}
		}
	}
	return;
}

void Function_256(bool bParam0) //Position: 0xC301 / 49921
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

int Function_257() //Position: 0xC334 / 49972
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 2248[33]), 1, 0, 0);
	if (IS_ACTOR_VALID(&bLocal_1146))
	{
		Function_258(&bLocal_1146, &iLocal_4 + 2136[3], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1148))
	{
		Function_258(&bLocal_1148, &iLocal_4 + 2136[5], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[0], 1, 1, 1);
	}
	STOP_PED_SPEAKING(&bLocal_1150, 0);
	Function_255(10, 0, 1);
	Function_210(10, 1, 0, 1, 1);
	DESTROY_ACTOR(&bLocal_1146);
	DESTROY_ACTOR(&bLocal_1148);
	DESTROY_ACTOR(&bLocal_1150);
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_211(&bLocal_1152);
		DESTROY_ACTOR(&bLocal_1152);
	}
	return 1;
}

void Function_258(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xC3F8 / 50168
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			if (GET_OBJECT_TYPE(&bParam1) == 8)
			{
				GET_OBJECT_POSITION(&bParam1, &Var0);
				GET_OBJECT_ORIENTATION(&bParam1, &Var2);
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

int Function_259() //Position: 0xC508 / 50440
{
	if (!iLocal_1505)
	{
		if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
		}
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&Global_21369 + 72);
		}
		if (IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_211(&bLocal_1152);
			DESTROY_ACTOR(&bLocal_1152);
		}
		iLocal_1505 = 1;
	}
	return 1;
}

int Function_260() //Position: 0xC560 / 50528
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	return 1;
}

int Function_261() //Position: 0xC56C / 50540
{
	Function_265(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_264(&iLocal_4 + 2008[4]);
	Function_262(StackVal, &uLocal_1049, Function_264(&iLocal_4 + 2008[4]), &iLocal_4 + 1320[2], 0, 0, 0, 0, 1, 1);
	if (IS_ACTOR_IN_VOLUME(&bLocal_1152, &iLocal_4 + 1320[2]))
	{
	}
	return 1;
}

void Function_262(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, bool bParam9) //Position: 0xC5BF / 50623
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
				Function_263(&uVar1, &uParam0);
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

void Function_263(var uParam0, int iParam1) //Position: 0xC85F / 51295
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

struct<8> Function_264(bool bParam0) //Position: 0xC8E1 / 51425
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

void Function_265(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xC90A / 51466
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
	Function_254();
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
				TASK_OVERRIDE_SET_POSTURE(&bVar1, 0);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, 1);
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
				Function_268(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_268(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_267()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_267()));
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
	if (Function_266(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x4000000);
	}
	if (Function_266(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_266(int iParam0) //Position: 0xCBBC / 52156
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_267() //Position: 0xCBD8 / 52184
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

struct<8> Function_268(bool bParam0) //Position: 0xCC66 / 52326
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_269(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCC78 / 52344
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_270(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_270(int iParam0) //Position: 0xCCA2 / 52386
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

void Function_271() //Position: 0xD1F7 / 53751
{
	Function_255(10, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_272(&bLocal_1152, 1);
		Function_211(&bLocal_1152);
	}
	return;
}

void Function_272(bool bParam0, int iParam1) //Position: 0xD21D / 53789
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&bParam0) == 1194 && GET_ACTOR_ENUM(&bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "carSettings"))
	{
		Function_273(&bParam0);
	}
	bVar0 = DECOR_GET_INT(&bParam0, "carSettings");
	Function_38(&bVar0, iParam1);
	DECOR_SET_INT(&bParam0, "carSettings", bVar0);
	return;
}

void Function_273(int iParam0) //Position: 0xD299 / 53913
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&iParam0) == 1194 && GET_ACTOR_ENUM(&iParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "carSettings"))
	{
		DECOR_SET_INT(&iParam0, "carSettings", false);
	}
	bVar0 = DECOR_GET_INT(&iParam0, "carSettings");
	Function_77(&bVar0, 1);
	Function_38(&bVar0, 2);
	Function_38(&bVar0, 4);
	Function_77(&bVar0, 8);
	Function_77(&bVar0, 16);
	Function_77(&bVar0, 32);
	Function_77(&bVar0, 64);
	Function_77(&bVar0, 128);
	Function_77(&bVar0, 256);
	Function_77(&bVar0, 512);
	DECOR_SET_INT(&iParam0, "carSettings", bVar0);
	return;
}

void Function_274(int iParam0) //Position: 0xD363 / 54115
{
	char* cVar0[32];
	
	Function_245(&iLocal_1170);
	Function_245(&iLocal_1178);
	Function_245(&iLocal_1174);
	bLocal_1142 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_1141)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "08", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "04", 32);
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

void Function_275(int iParam0) //Position: 0xD538 / 54584
{
	if (!Function_247(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_187(1, 0, 1);
		}
	}
	return;
}

bool Function_276(int iParam0) //Position: 0xD554 / 54612
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_164(&(Global_43791[iParam0]), 4);
}

void Function_277(int iParam0) //Position: 0xD570 / 54640
{
	Function_278(&Global_43580, iParam0);
	return;
}

void Function_278(var uParam0, int iParam1) //Position: 0xD57E / 54654
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_279(bool bParam0) //Position: 0xD5A6 / 54694
{
	Function_280(0, 0x40400000);
	Function_204();
	Function_203();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_280(float fParam0, float fParam1) //Position: 0xD5DC / 54748
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
	Function_282();
	Function_281();
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

void Function_281() //Position: 0xD6ED / 55021
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_282() //Position: 0xD721 / 55073
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

void Function_283() //Position: 0xD827 / 55335
{
	Function_389();
	switch (bLocal_1142)
	{
		case 0x00000000:
			Function_279(0);
			Function_388(&bLocal_1150);
			HUD_ENABLE(1);
			AI_IGNORE_ACTOR(&bLocal_1150);
			if (IS_ACTOR_VALID(&bLocal_1146))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1146);
			}
			if (IS_ACTOR_VALID(&bLocal_1148))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1148);
			}
			if (IS_ACTOR_VALID(&bLocal_1150))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1150);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_277(9);
			Function_167(81920);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1232[7], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1232[7]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1232[7]);
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			ACTOR_SET_NEXT_WEAPON(&Global_54076, 2);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1521 = 1;
			if (iLocal_1226[3] == 0)
			{
				Function_250(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_1143 = Global_46754[0];
				if (!Function_276(iLocal_1143))
				{
					Function_275(&Local_1051);
				}
				Function_387();
				Function_274(1);
			}
			else
			{
				Function_274(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_380()) && (Function_276(iLocal_1143) || iLocal_1143 != 4294967295))
			{
				Function_375();
				Function_274(2);
			}
			break;
		
		case 0x00000002:
			if (bLocal_1468)
			{
				iLocal_1528 = 5;
				iLocal_1524 = 0;
				iLocal_1243 = 0;
				iLocal_1244 = 0;
				iLocal_1250 = 1;
				Function_274(8);
				return;
			}
			if (Function_373(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1051, iLocal_1141))
			{
				Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
				Function_347();
				Function_274(3);
			}
			else
			{
				Function_347();
				Function_346();
				Function_274(4);
			}
			break;
		
		case 0x00000003:
			if (Function_233("$/cutscene/FBI_05_CS05/FBI_05_CS05", &iLocal_1129, &Local_1051, &iLocal_1141, 70198, 70186, 70061, 70281, 70040, 49332, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_274(4);
			}
			break;
		
		case 0x00000004:
			iLocal_1241 = 1;
			if (iLocal_1505)
			{
				iLocal_1505 = 0;
			}
			Function_341();
			Function_338();
			iLocal_1521 = 0;
			Function_274(6);
			break;
		
		case 0x00000006:
			Function_341();
			if (HUD_IS_FADED())
			{
				Function_237(1.0f);
			}
			Function_274(7);
			break;
		
		case 0x00000007:
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 984)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1160)) < 2)
			{
				Function_269(&uLocal_1516, 39, 0, 4294967295, 4294967295);
			}
			Function_341();
			if (Function_303())
			{
				Function_245(&iLocal_1170);
				Function_274(8);
			}
			break;
		
		case 0x00000008:
			Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
			if (Function_240(&iLocal_1170) <= 3.0f && !((IS_ANY_SPEECH_PLAYING(&Global_54076) || IS_ANY_SPEECH_PLAYING(&bLocal_1146)) || IS_ANY_SPEECH_PLAYING(&bLocal_1148)))
			{
				if (Function_233("$/cutscene/FBI_05_CS05_B/FBI_05_CS05_B", &iLocal_1129, &Local_1051, &iLocal_1141, 58426, 70186, 70061, 56636, 56615, 49332, 0, 1, 1, 2, 2, 0, 1))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 1232[7]))
					{
						DESTROY_VOLUME(&iLocal_4 + 1232[7]);
					}
					HUD_CLEAR_OBJECTIVE();
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[1])))
					{
						ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2104[1], 330, 0f, 2, 0);
					}
					if (IS_OBJECT_ANIMATOR_VALID(&uLocal_1452))
					{
						DESTROY_OBJECT_ANIMATOR(&uLocal_1452);
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1148, &bLocal_1152, 1);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_285(&bLocal_1152, &bLocal_1148);
					if (HUD_IS_FADED())
					{
						Function_237(1.0f);
					}
					Function_269(&uLocal_1516, 60, 0, 4294967295, 4294967295);
					Function_274(9);
				}
			}
			break;
		
		case 0x00000009:
			if (iLocal_1505)
			{
				iLocal_1505 = 0;
			}
			if (!ACTOR_HAS_ANIM_SET(&bLocal_1150, "FBI05_injured_guy_in_car"))
			{
				TASK_STAND_STILL(&bLocal_1150, -1.0f, 0, 0);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1150, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car", 1);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car/Loop");
			}
			if (Function_303())
			{
				if (IS_ACTOR_VALID(&bLocal_1146))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1146);
				}
				if (IS_ACTOR_VALID(&bLocal_1148))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1148);
				}
				if (IS_ACTOR_VALID(&bLocal_1150))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1150);
				}
				Function_274(106);
			}
			break;
		
		case 0x00000069:
			if ((Function_240(&iLocal_1170) < 0,5f && !IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_240(&iLocal_1170) < 6.0f)
			{
				Function_250(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_274(106);
			}
			break;
		
		case 0x0000006A:
			Function_284();
			iLocal_1226[4] = 1;
			iLocal_1141 = 101;
			Function_274(0);
			break;
	}
	return;
}

void Function_284() //Position: 0xDCC8 / 56520
{
	Function_178();
	Function_222(&iLocal_1158);
	Function_222(&(uLocal_1160[0]));
	Function_222(&(uLocal_1160[1]));
	Function_222(&(uLocal_1160[2]));
	return;
}

void Function_285(bool bParam0, bool bParam1) //Position: 0xDCF6 / 56566
{
	CLEAR_ACTOR_MAX_SPEED(&bParam0);
	SET_ACTOR_SPEED(&bParam0, 6,4f);
	AI_ACTOR_FORCE_SPEED(&bParam1, 2);
	SET_ACTOR_SPEED(&bParam1, 6,4f);
	ACTOR_POP_NEXT_GAIT(&bParam1, 2, 0);
	return;
}

int Function_286() //Position: 0xDD27 / 56615
{
	Function_253(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_287() //Position: 0xDD3C / 56636
{
	if (!iLocal_1505)
	{
		if (!IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_289(&iLocal_4 + 2008[3]);
		}
		else
		{
			Function_258(&bLocal_1152, &iLocal_4 + 2008[3], 1, 1, 1);
		}
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&bLocal_1146);
	if (GET_VEHICLE(&bLocal_1146) != &bLocal_1152)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	}
	TASK_CLEAR(&bLocal_1148);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, false) != &bLocal_1148)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &bLocal_1150)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1150, &bLocal_1152, 3);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 2) != &Global_54076)
	{
		SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	}
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1150, 0);
	SET_ANIM_SET_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car", 1);
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car/Loop");
	iLocal_1472 = 1;
	TASK_CLEAR(&bLocal_1148);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 4000, 5, 0, 0, 1, 0);
	TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 4);
	TASK_PRIORITY_SET(&bLocal_1148, true);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	FORCE_VEHICLE_CINEMATIC_CAMERA(1);
	Function_285(&bLocal_1152, &bLocal_1148);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 1);
	return 1;
}

void Function_288(bool bParam0, bool bParam1) //Position: 0xDEDA / 57050
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&bParam0) == 1194 && GET_ACTOR_ENUM(&bParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "carSettings"))
	{
		Function_273(&bParam0);
	}
	bVar0 = DECOR_GET_INT(&bParam0, "carSettings");
	Function_77(&bVar0, bParam1);
	DECOR_SET_INT(&bParam0, "carSettings", bVar0);
	return;
}

void Function_289(bool bParam0) //Position: 0xDF56 / 57174
{
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
	}
	else
	{
		Function_264(&bParam0);
		Function_301(&bParam0);
		bLocal_1152 = CREATE_ACTOR_IN_LAYOUT(&iLocal_4, "Car", 1194, Function_264(&bParam0), Function_301(&bParam0));
		SET_ACTOR_UPDATE_PRIORITY(&bLocal_1152, false);
		if (Function_300(&bLocal_1152, 1))
		{
			Function_272(&bLocal_1152, 1);
		}
		Function_299(&bLocal_1152);
		fLocal_1222 = -1.0f;
		Function_294(&(Local_1315[215]), &bLocal_1152, "Car", 0, 0x5f5e100, 1);
		Function_290(&(Local_1315[215]), 8);
	}
	return;
}

void Function_290(int iParam0, int iParam1) //Position: 0xDFD4 / 57300
{
	if (iParam1 != 100000000)
	{
		Function_293(&iParam0, iParam1);
	}
	else
	{
		Function_291(&iParam0, 1);
	}
	return;
}

void Function_291(struct<69> Param0) //Position: 0xDFF6 / 57334
{
	Param0.f_68 = 0;
	Function_292(&Param0, 2, &bParam1);
	Function_292(&Param0, 4, &bParam1);
	Function_292(&Param0, 8, &bParam1);
	Function_292(&Param0, 16, &bParam1);
	Function_292(&Param0, 32, &bParam1);
	Function_292(&Param0, 64, &bParam1);
	Function_292(&Param0, 128, &bParam1);
	Function_292(&Param0, 256, &bParam1);
	Function_292(&Param0, 512, &bParam1);
	Function_292(&Param0, 1024, &bParam1);
	return;
}

void Function_292(int iParam0, int iParam1, bool bParam2) //Position: 0xE071 / 57457
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

void Function_293(int iParam0, bool bParam1) //Position: 0xE0B0 / 57520
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_294(struct<69> Param0) //Position: 0xE0DD / 57565
{
	if (!Function_298(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_297(&Param0, &iParam2))
	{
		return 0;
	}
	Function_296(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_295(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_295(var uParam0, int iParam1, int iParam2) //Position: 0xE123 / 57635
{
	if (iParam1 != 100000000)
	{
		Function_292(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_291(&uParam0, &iParam2);
	}
	return;
}

void Function_296(struct<65> Param0) //Position: 0xE14A / 57674
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_297(int iParam0, char* cParam1) //Position: 0xE157 / 57687
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

bool Function_298(struct<61> Param0) //Position: 0xE1E4 / 57828
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

void Function_299(bool bParam0) //Position: 0xE397 / 58263
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

bool Function_300(int iParam0, bool bParam1) //Position: 0xE3CE / 58318
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		return 1;
	}
	if (&bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

struct<8> Function_301(bool bParam0) //Position: 0xE411 / 58385
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_302() //Position: 0xE43A / 58426
{
	Function_265(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_264(&iLocal_4 + 3632[0]);
	Function_262(StackVal, &uLocal_1049, Function_264(&iLocal_4 + 3632[0]), &iLocal_4 + 1232[7], 0, 0.0f, 0.0f, 0.0f, 0, 1);
	if (IS_OBJECT_ANIMATOR_VALID(&uLocal_1452))
	{
		DESTROY_OBJECT_ANIMATOR(&uLocal_1452);
	}
	return 1;
}

bool Function_303() //Position: 0xE488 / 58504
{
	Function_575();
	if (iLocal_1250 && !iLocal_1244)
	{
		Function_337(1);
	}
	if (!iLocal_1243 && iLocal_1528 == 3)
	{
		Function_329(&iLocal_1174, 45.0f, 100.0f, &bLocal_1152, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_1239, 0, 0, 0, 325, 1);
	}
	if (((((((iLocal_1528 <= 6 && !iLocal_1251) && (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))) && !Function_138()) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !iLocal_1252) && !iLocal_1244) && !iLocal_1243)
	{
		Function_324();
	}
	switch (iLocal_1528)
	{
		case 0x00000000:
			Function_323(1);
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_322();
				Function_245(&iLocal_1170);
				iLocal_1528 = 1;
			}
			break;
		
		case 0x00000001:
			Function_323(1);
			if (!iLocal_1471)
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1152, &iLocal_4 + 1232[4]))
				{
					iLocal_1471 = 1;
				}
			}
			if ((iLocal_1471 && Function_603(&Global_54076, &bLocal_1152, 2)) && !Function_242(&iLocal_1190))
			{
				iLocal_1528 = 3;
				return 1;
			}
			break;
		
		case 0x00000003:
			if (iLocal_1488)
			{
				iLocal_1488 = 0;
			}
			if (!iLocal_1257)
			{
				uLocal_1259 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "carbreakdownSmokePop", "script_car_fbi05_fixing", &bLocal_1152, Vector(0,007f, 1,162f, -1,233f), 1, &bLocal_1152);
				UNK_0x6745191B(StackVal, &uLocal_1259, Vector(0.0f, 0.0f, 0.0f));
				iLocal_1257 = 1;
				STOP_VEHICLE(&bLocal_1152);
				AUDIO_SET_VEHICLE_DAMAGED(&bLocal_1152, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 0);
				Function_272(&bLocal_1152, 1);
			}
			if (Function_311())
			{
				Function_173(&iLocal_4 + 8);
				iLocal_1250 = 1;
				Function_245(&iLocal_1170);
				iLocal_1528 = 5;
				return 1;
			}
			break;
		
		case 0x00000004:
			HUD_CLEAR_OBJECTIVE();
			Function_310("FBI05_carOutObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[1])))
			{
				Function_256(&iLocal_4 + 2104[1]);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1152, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1152), "FBI05_CarBlip");
			}
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
			Function_245(&iLocal_1170);
			iLocal_1528 = 5;
			return 0;
			break;
		
		case 0x00000005:
			if (Function_603(&Global_54076, &bLocal_1152, 2))
			{
				iLocal_1246 = 0;
				Function_211(&bLocal_1152);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[1])))
				{
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2104[1], 330, 0f, 2, 0);
				}
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
				TASK_CLEAR(&bLocal_1148);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 4000, 5, 0, 0, 1, 0);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 4);
				TASK_PRIORITY_SET(&bLocal_1148, true);
				HUD_CLEAR_OBJECTIVE();
				if (iLocal_1250)
				{
					Function_245(&iLocal_1170);
					iLocal_1473 = 3;
					iLocal_1528 = 6;
				}
				else
				{
					Function_245(&iLocal_1170);
					iLocal_1528 = 1;
				}
				return 0;
			}
			if (Function_240(&iLocal_1170) >= 1,5f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1148, (6,4f - (Function_240(&iLocal_1170) * (6,4f / 1,5f))));
			}
			else if (Function_240(&iLocal_1170) <= 1,5f && Function_240(&iLocal_1170) >= 1,6f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1148, 0.0f);
				TASK_CLEAR(&bLocal_1148);
				TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
			}
			break;
		
		case 0x00000006:
			Function_323(1);
			if (!iLocal_1244)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1232[3]))
				{
					iLocal_1244 = 1;
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
					}
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1232[6]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1232[6]))
				{
					iLocal_1252 = 1;
					Function_309();
					DESTROY_VOLUME(&iLocal_4 + 1232[6]);
				}
			}
			if (IS_ACTOR_IN_VOLUME(&bLocal_1152, &iLocal_4 + 1360[0]) && Function_603(&Global_54076, &bLocal_1152, 2))
			{
				Function_306();
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1148, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[1])))
				{
					Function_256(&iLocal_4 + 2104[1]);
				}
				Function_245(&iLocal_1170);
				iLocal_1528 = 8;
				return 0;
			}
			break;
		
		case 0x00000007:
			if (HUD_IS_FADED())
			{
				if (Function_304(1))
				{
					return 0;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_240(&iLocal_1170) >= 2,6f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1148, (6,4f - (Function_240(&iLocal_1170) * (6,4f / 2,5f))));
			}
			else if (Function_240(&iLocal_1170) <= 2,6f && Function_240(&iLocal_1170) >= 2,7f)
			{
				Function_256(&iLocal_4 + 2104[0]);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
				TASK_CLEAR(&bLocal_1148);
				TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
				STOP_VEHICLE(&bLocal_1152);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_304(bool bParam0) //Position: 0xE99A / 59802
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (&bParam0)
	{
		bVar0 = &iLocal_4 + 2640[3];
		bVar1 = &iLocal_4 + 2640[2];
	}
	else
	{
		bVar0 = &iLocal_4 + 2640[1];
		bVar1 = &iLocal_4 + 2640[0];
	}
	switch (iLocal_1524)
	{
		case 0x00000000:
			if (HUD_IS_FADED())
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 2) == &Global_54076)
				{
					bLocal_1224 = 2;
				}
				else
				{
					bLocal_1224 = 3;
				}
				Function_268(&Global_54076);
				Function_264(&bVar0);
				Function_305(VDIST(Function_268(&Global_54076), Function_264(&bVar0)));
				Function_258(&Global_54076, &bVar0, 1, 1, 1);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				HUD_ENABLE(1);
				Function_245(&iLocal_1170);
				iLocal_1524 = 1;
				return 0;
			}
			break;
		
		case 0x00000001:
			Function_264(&bVar0);
			if (STREAMING_IS_WORLD_LOADED() && STREAMING_ARE_BOUNDS_LOADED(Function_264(&bVar0), 50.0f))
			{
				Function_245(&iLocal_1170);
				iLocal_1524 = 2;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_258(&bLocal_1152, &bVar1, 1, 1, 1);
			Function_245(&iLocal_1170);
			iLocal_1524 = 3;
			return 0;
			break;
		
		case 0x00000003:
			Function_264(&bVar0);
			if (STREAMING_IS_WORLD_LOADED() && STREAMING_ARE_BOUNDS_LOADED(Function_264(&bVar0), 50.0f))
			{
				SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, bLocal_1224);
				SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
				iLocal_1488 = 1;
				uVar2 = GET_PHYSINST_FROM_ACTOR(&bLocal_1152);
				ACTIVATE_PHYSINST(&uVar2);
				if (&bParam0)
				{
					TASK_CLEAR(&bLocal_1148);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 4000, 5, 0, 0, 1, 0);
					AI_ACTOR_FORCE_SPEED(&bLocal_1148, 4);
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 4);
				}
				else
				{
					TASK_CLEAR(&bLocal_1148);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 3920, 4, 0, 0, 1, 0);
				}
				Function_245(&iLocal_1170);
				iLocal_1524 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Function_240(&iLocal_1170) < 1,5f)
			{
				SET_PLAYER_CONTROL(0, 1, 1, 1);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_1243 = 0;
				Function_245(&iLocal_1170);
				if (&bParam0)
				{
					iLocal_1528 = 6;
				}
				else
				{
					iLocal_1523 = 3;
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_305(float fParam0) //Position: 0xEB82 / 60290
{
	FEED_CODE_WARP_DIST(fParam0);
	ADVANCE_TIME_HOURS(((fParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_306() //Position: 0xEB9A / 60314
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_ArriveAtOffice", "FBI05_ArriveAtOffice", 0, 1, 1, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_307(int iParam0) //Position: 0xEBEB / 60395
{
	Function_308(0, &Global_54076, iParam0, 0);
	Function_308(1, &bLocal_1146, iParam0, 0);
	Function_308(2, &bLocal_1148, iParam0, 0);
	Function_308(3, &bLocal_1150, iParam0, 0);
	return;
}

void Function_308(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0xEC1D / 60445
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_144(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_309() //Position: 0xEC45 / 60485
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_ArriveBlakwatr_v1_AA", "FBI05_ArriveBlakwatr_v1_AA", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_ArriveBlakwatr_v1_AB", "FBI05_ArriveBlakwatr_v1_AB", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_ArriveBlakwatr_v1_AC", "FBI05_ArriveBlakwatr_v1_AC", 0, 4, 0, 0, 1);
		Function_307(15);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_310(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xED29 / 60713
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
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_311() //Position: 0xEDBE / 60862
{
	if (!Function_329(&iLocal_1174, 45.0f, 100.0f, &bLocal_1152, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_1239, 0, 0, 0, 325, 1))
	{
		if (iLocal_1529 <= 6)
		{
			Function_211(&bLocal_1152);
		}
	}
	else if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
	{
		ADD_BLIP_FOR_ACTOR(&bLocal_1152, 325, 0, 2, 0);
		SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1152), "FBI05_CarBlip");
	}
	if (iLocal_1529 <= 0 && iLocal_1529 > 5)
	{
	}
	Function_320();
	switch (iLocal_1529)
	{
		case 0x00000000:
			iLocal_1241 = 1;
			Function_245(&iLocal_1170);
			iLocal_1529 = 1;
			return 0;
			break;
		
		case 0x00000001:
			if (!bLocal_1245)
			{
				bLocal_1245 = true;
				TASK_CROUCH(&bLocal_1148, -1.0f);
				MEMORY_ALLOW_SHOOTING(&bLocal_1148, false);
				Function_319(&iLocal_4 + 1064, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_319(&iLocal_4 + 984, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_319(&iLocal_4 + 1160, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			if (bLocal_1245)
			{
				bLocal_1223 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(0);
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &(uLocal_1530[7]), -1.0f, 1086324736);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				TASK_SEQUENCE_CLOSE();
				Function_316(&bLocal_1146, &iLocal_4 + 1064, 1);
				Function_316(&bLocal_1146, &iLocal_4 + 1160, 1);
				TASK_SEQUENCE_PERFORM(&bLocal_1146, bLocal_1223);
				TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
				Function_245(&iLocal_1170);
				iLocal_1529 = 2;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000002:
			if (Function_240(&iLocal_1170) <= 5.0f)
			{
				Function_310("FBI05_obj03_carbust", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[1])))
				{
					Function_256(&iLocal_4 + 2104[1]);
				}
				Function_245(&iLocal_1170);
				iLocal_1529 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			if (Function_313(&Global_54076, &bLocal_1152, 40.0f))
			{
				if (Function_240(&iLocal_1170) <= 5.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) <= 10.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_JonNoShootAttakrs", "FBI05_JonNoShootAttakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
						Function_245(&iLocal_1170);
					}
					else
					{
						switch (RAND_INT_RANGE(0, 2))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_RossShoutsEnc", "FBI05_RossShoutsEnc", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
								Function_245(&iLocal_1170);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_EncoFixCar", "FBI05_EncoFixCar", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
								Function_245(&iLocal_1170);
								break;
							
							case 0x00000002:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_RosYellsAttakrs", "FBI05_RosYellsAttakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
								Function_245(&iLocal_1170);
								break;
							}
						}
				}
			}
			else if (Function_240(&iLocal_1170) <= 5.0f)
			{
				switch (RAND_INT_RANGE(0, true))
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_RunsAwayCombat", "FBI05_RunsAwayCombat", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						Function_245(&iLocal_1170);
						break;
					
					case 0x00000001:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_RunsAwayCombat2", "FBI05_RunsAwayCombat2", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						Function_245(&iLocal_1170);
						break;
					}
			}
			if (Function_312(&iLocal_4 + 1064) >= 0 && Function_312(&iLocal_4 + 1160) >= 0)
			{
				iLocal_1241 = 0;
				Function_245(&iLocal_1170);
				UNK_0xE18028C1(&uLocal_1259);
				iLocal_1529 = 4;
				return 1;
			}
			return 0;
			break;
		
		case 0x00000004:
			if (Function_240(&iLocal_1170) <= (2.0f + 2.0f))
			{
				SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
				TASK_CLEAR(&bLocal_1146);
				ACTOR_HOLSTER_WEAPON(&bLocal_1146, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1146, 1);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&bLocal_1146, &bLocal_1152, 1, 1, 0);
				TASK_PRIORITY_SET(&bLocal_1146, true);
				Function_245(&iLocal_1170);
				iLocal_1529 = 5;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000005:
			TASK_CLEAR(&bLocal_1148);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
			bLocal_1223 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 0, 1, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
			TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
			Function_245(&iLocal_1170);
			iLocal_1529 = 6;
			return 0;
			break;
		
		case 0x00000006:
			if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 2) != &Global_54076)
			{
				if (Function_240(&iLocal_1170) <= 5.0f)
				{
					Function_310("FBI05_obj01a", 0x40f00000, 1, 2, 0, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_1152, 325, 0, 2, 0);
						SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1152), "FBI05_CarBlip");
					}
					Function_245(&iLocal_1170);
					iLocal_1529 = 7;
					return 0;
				}
			}
			Function_245(&iLocal_1170);
			iLocal_1529 = 7;
			return 0;
			return 0;
			break;
		
		case 0x00000007:
			if (Function_603(&Global_54076, &bLocal_1152, 2))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
				{
					Function_211(&bLocal_1152);
					CLEAR_PRINTED_OBJECTIVE();
				}
			}
			if (((Function_603(&bLocal_1148, &bLocal_1152, 0) && Function_603(&bLocal_1146, &bLocal_1152, 1)) && Function_603(&bLocal_1150, &bLocal_1152, 3)) && Function_603(&Global_54076, &bLocal_1152, 2))
			{
				CLEAR_PRINTED_OBJECTIVE();
				Function_211(&bLocal_1152);
				START_VEHICLE(&bLocal_1152);
				TASK_CLEAR(&bLocal_1148);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 4000, 5, 0, 0, 1, 0);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 4);
				TASK_PRIORITY_SET(&bLocal_1148, true);
				return 1;
			}
			break;
	}
	return 0;
}

int Function_312(int iParam0) //Position: 0xF41B / 62491
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (!IS_ACTOR_HOGTIED(&uVar2))
				{
					iVar1++;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_313(var uParam0, bool bParam1, float fParam2) //Position: 0xF47B / 62587
{
	float fVar0;
	
	fVar0 = Function_314(&uParam0, &bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

float Function_314(int iParam0, bool bParam1) //Position: 0xF49A / 62618
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&iParam0, &uVar0);
	GET_POSITION(&bParam1, &uVar2);
	iVar4 = Function_315(&uVar0, &uVar2);
	return iVar4;
}

var Function_315(struct<2> Param0) //Position: 0xF4BB / 62651
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_316(bool bParam0, var uParam1, int iParam2) //Position: 0xF4DA / 62682
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
				Function_317(&bParam0, &uVar1, &iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_317(var uParam0, bool bParam1, bool bParam2) //Position: 0xF52C / 62764
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &bParam1);
			Function_318(&bParam1);
			uVar0 = Function_318(&bParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &bParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &bParam1, &uVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

struct<8> Function_318(bool bParam0) //Position: 0xF63D / 63037
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_319(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xF6A9 / 63145
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
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
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
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
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

void Function_320() //Position: 0xF7B9 / 63417
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= Function_321(&iLocal_4 + 1160))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1160, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iLocal_4 + 1232[1]))
			{
				AI_GOAL_SHOOT_CLEAR(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

int Function_321(int iParam0) //Position: 0xF808 / 63496
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
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

void Function_322() //Position: 0xF85E / 63582
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Back2Blakwter_v1_AA", "FBI05_Back2Blakwter_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AB", "FBI05_Back2Blakwter_v1_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Back2Blakwter_v1_AC", "FBI05_Back2Blakwter_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AD", "FBI05_Back2Blakwter_v1_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Back2Blakwter_v1_AE", "FBI05_Back2Blakwter_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AF", "FBI05_Back2Blakwter_v1_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_3750", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Back2Blakwter_v1_AG", "FBI05_Back2Blakwter_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AH", "FBI05_Back2Blakwter_v1_AH", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Back2Blakwter_v1_AI1", "FBI05_Back2Blakwter_v1_AI1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Back2Blakwter_v1_AI2", "FBI05_Back2Blakwter_v1_AI2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Back2Blakwter_v1_AI3", "FBI05_Back2Blakwter_v1_AI3", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_2440", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AJ", "FBI05_Back2Blakwter_v1_AJ", 0, 1, 0, 0, 1);
		Function_307(15);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_323(bool bParam0) //Position: 0xFBC9 / 64457
{
	if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		if (!iLocal_1246)
		{
			if (!&bParam0)
			{
				if (!IS_ACTOR_IN_VOLUME(&bLocal_1152, &iLocal_4 + 1448[4]))
				{
					iLocal_1246 = 1;
					Function_245(&iLocal_1170);
					iLocal_1523 = 4;
				}
			}
			else
			{
				Function_245(&iLocal_1170);
				iLocal_1528 = 4;
			}
		}
	}
	return;
}

void Function_324() //Position: 0xFC17 / 64535
{
	if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_DriveBak2Blackwater_v1_Ac"))
	{
		Function_328();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_DriveBak2Blackwater_v3_AA"))
	{
		Function_327();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_JRBanterDriveBak_v1_AA"))
	{
		Function_326();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_JRBanterDriveBak2_v1_AA"))
	{
		Function_325();
	}
	return;
}

void Function_325() //Position: 0xFCD4 / 64724
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak2_v1_AA", "FBI05_JRBanterDriveBak2_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_JRBanterDriveBak2_v1_AB", "FBI05_JRBanterDriveBak2_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak2_v1_AC1", "FBI05_JRBanterDriveBak2_v1_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak2_v1_AC2", "FBI05_JRBanterDriveBak2_v1_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak2_v1_AC3", "FBI05_JRBanterDriveBak2_v1_AC3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak2_v1_AC4", "FBI05_JRBanterDriveBak2_v1_AC4", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_JRBanterDriveBak2_v1_AD", "FBI05_JRBanterDriveBak2_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak2_v1_AE", "FBI05_JRBanterDriveBak2_v1_AE", 0, 1, 0, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_326() //Position: 0xFF3E / 65342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "FBI05_JRBanterDriveBak_v1_AA", "FBI05_JRBanterDriveBak_v1_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak_v1_AB", "FBI05_JRBanterDriveBak_v1_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_JRBanterDriveBak_v1_AC", "FBI05_JRBanterDriveBak_v1_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JRBanterDriveBak_v1_AD", "FBI05_JRBanterDriveBak_v1_AD", 0, 1, 0, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_327() //Position: 0x10078 / 65656
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v3_AA", "FBI05_DriveBak2Blackwater_v3_AA", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v3_AB", "FBI05_DriveBak2Blackwater_v3_AB", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v3_AC", "FBI05_DriveBak2Blackwater_v3_AC", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v3_AD1", "FBI05_DriveBak2Blackwater_v3_AD1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v3_AD2", "FBI05_DriveBak2Blackwater_v3_AD2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v3_AD3", "FBI05_DriveBak2Blackwater_v3_AD3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v3_AD4", "FBI05_DriveBak2Blackwater_v3_AD4", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v3_AE", "FBI05_DriveBak2Blackwater_v3_AE", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v3_AF", "FBI05_DriveBak2Blackwater_v3_AF", 0, 4, 0, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_328() //Position: 0x1034F / 66383
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_DriveBak2Blackwater_v1_AC", "FBI05_DriveBak2Blackwater_v1_AC", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v1_AD1", "FBI05_DriveBak2Blackwater_v1_AD1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v1_AD2", "FBI05_DriveBak2Blackwater_v1_AD2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v1_AE", "FBI05_DriveBak2Blackwater_v1_AE", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v1_AF", "FBI05_DriveBak2Blackwater_v1_AF", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v1_AG1", "FBI05_DriveBak2Blackwater_v1_AG1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DriveBak2Blackwater_v1_AG2", "FBI05_DriveBak2Blackwater_v1_AG2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_DriveBak2Blackwater_v1_AH", "FBI05_DriveBak2Blackwater_v1_AH", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v1_AI1", "FBI05_DriveBak2Blackwater_v1_AI1", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DriveBak2Blackwater_v1_AI2", "FBI05_DriveBak2Blackwater_v1_AI2", 1, 4, 0, 0, 1);
		Function_307(15);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_329(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x10678 / 67192
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_336(&Global_54076, &iParam3, iParam2))
	{
		Function_576(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_336(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_335(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_310(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				}
				Function_334(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_333(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_333(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_335(2))
	{
		Function_332(2);
		if (!Function_331())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_330();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_211(&iParam3);
				Function_256(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_333(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_333(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_330() //Position: 0x10836 / 67638
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

bool Function_331() //Position: 0x10864 / 67684
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

void Function_332(bool bParam0) //Position: 0x108AB / 67755
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

void Function_333(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10912 / 67858
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

void Function_334(bool bParam0) //Position: 0x109CD / 68045
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

bool Function_335(bool bParam0) //Position: 0x10A34 / 68148
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

bool Function_336(var uParam0, var uParam1, bool bParam2) //Position: 0x10A7E / 68222
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

void Function_337(bool bParam0) //Position: 0x10B93 / 68499
{
	if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
		{
			if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_1168))
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
				iLocal_1244 = 1;
				iLocal_1243 = 1;
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (&bParam0)
				{
					Function_245(&iLocal_1170);
					if (iLocal_1488)
					{
						iLocal_1488 = 0;
					}
					Function_89(17, 1, 0, 0);
					iLocal_1528 = 7;
				}
				else
				{
					if (iLocal_1488)
					{
						iLocal_1488 = 0;
					}
					Function_245(&iLocal_1170);
					Function_89(17, 1, 0, 0);
					iLocal_1523 = 6;
				}
			}
		}
		else
		{
			bLocal_1168 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", 0, "@UI.ACCEPT", 0, 0, 0, 0, 4294967295, 0);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	return;
}

void Function_338() //Position: 0x10C7D / 68733
{
	Function_340();
	Function_339();
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1150, 0);
	SET_ANIM_SET_FOR_ACTOR(&bLocal_1150, "FBI05_Nastas_Backseat", 1);
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_1150, "FBI05_Nastas_Backseat/Nastas_Backseat_idle");
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iLocal_1528 = 3;
	return;
}

void Function_339() //Position: 0x10CF2 / 68850
{
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4032, 4, 1, 0, 1, 0);
	TASK_KILL_CHAR(false, &Global_54076);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 992[02], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4048, 3, 1, 0, 1, 0);
	TASK_SHOOT_ENEMIES_FROM_COVER(0, &(uLocal_1530[1]), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 992[12], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4048, 3, 1, 0, 1, 0);
	TASK_SHOOT_ENEMIES_FROM_COVER(0, &(uLocal_1530[2]), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 992[22], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4040, 4, 1, 0, 1, 0);
	TASK_KILL_CHAR(false, &Global_54076);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 992[32], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4008, 3, 1, 0, 1, 0);
	TASK_KILL_CHAR(false, &bLocal_1146);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 944[02], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4016, 3, 1, 0, 1, 0);
	TASK_KILL_CHAR(false, &Global_54076);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 944[12], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	return;
}

void Function_340() //Position: 0x10E6C / 69228
{
	ATTACH_OBJECTS(StackVal, StackVal, &(uLocal_1160[0]), &iLocal_4 + 1072[02], Function_54(), Vector(0.0f, 8.0f, -7.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	AI_GOAL_SHOOT_AT_OBJECT(&iLocal_4 + 1072[02], &(uLocal_1160[0]));
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4056, 4, 1, 0, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 1072[02], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	ATTACH_OBJECTS(StackVal, StackVal, &(uLocal_1160[1]), &iLocal_4 + 1072[12], Function_54(), Vector(0.0f, 8.0f, -7.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	AI_GOAL_SHOOT_AT_OBJECT(&iLocal_4 + 1072[12], &(uLocal_1160[1]));
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4072, 4, 1, 0, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 1072[12], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	ATTACH_OBJECTS(StackVal, StackVal, &(uLocal_1160[2]), &iLocal_4 + 1072[22], Function_54(), Vector(0.0f, 8.0f, -7.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	AI_GOAL_SHOOT_AT_OBJECT(&iLocal_4 + 1072[22], &(uLocal_1160[2]));
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4064, 4, 1, 0, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 1072[22], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4072, 4, 1, 0, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 1072[32], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4064, 4, 1, 0, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 1072[42], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	return;
}

void Function_341() //Position: 0x11022 / 69666
{
	if (!iLocal_1456)
	{
		uLocal_1450 = GET_PHYSINST_FROM_OBJECT(&bLocal_1152);
		if (IS_PHYSINST_VALID(&uLocal_1450))
		{
			uLocal_1452 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_1450);
			if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_1452))
			{
				uLocal_1452 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_1450, "fix_car", "fix_car", "fix_car/car/car_afer/pst");
				iLocal_1456 = 1;
			}
			if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_1452))
			{
				LOG_ERROR("Failed to create object animator on 'CARRRR'!");
			}
		}
		else
		{
			LOG_ERROR("Failed to get physinst from 'CARRRR'!");
		}
	}
	else if (IS_OBJECT_ANIMATOR_READY(&uLocal_1452))
	{
		if (GET_TASK_STATUS(&bLocal_1148, 19) != 1)
		{
			TASK_USE_GRINGO(&bLocal_1148, GET_GRINGO_FROM_OBJECT(&uLocal_1454), "UseCase1", 4294967295, 1);
		}
		if (IS_ACTION_NODE_PLAYING(&bLocal_1148, "fix_car/fix_car_before/pre"))
		{
			if (iLocal_1457 != 1)
			{
				SET_OBJECT_ANIMATOR_NODE(&uLocal_1452, "/global/fix_car/car/car_before/pre");
				iLocal_1457 = 1;
			}
		}
	}
	return;
}

int Function_342() //Position: 0x11198 / 70040
{
	Function_253(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_343() //Position: 0x111AD / 70061
{
	if (!iLocal_1505)
	{
		if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
		}
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&Global_21369 + 72);
		}
		if (!IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_289(&iLocal_4 + 2008[3]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1152);
		}
		else
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1152);
			Function_258(&bLocal_1152, &iLocal_4 + 2008[3], 1, 1, 1);
		}
		iLocal_1505 = 1;
	}
	return 1;
}

int Function_344() //Position: 0x1122A / 70186
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	return 1;
}

int Function_345() //Position: 0x11236 / 70198
{
	Function_265(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_264(&iLocal_4 + 3632[0]);
	Function_262(StackVal, &uLocal_1049, Function_264(&iLocal_4 + 3632[0]), &iLocal_4 + 1232[7], 0, 0.0f, 0.0f, 0.0f, 0, 1);
	if (IS_ACTOR_IN_VOLUME(&bLocal_1152, &iLocal_4 + 1232[7]))
	{
	}
	return 1;
}

int Function_346() //Position: 0x11289 / 70281
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!iLocal_1505)
	{
		if (!IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_289(&iLocal_4 + 2008[3]);
		}
		else
		{
			Function_258(&bLocal_1152, &iLocal_4 + 2008[3], 1, 1, 1);
		}
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &bLocal_1150)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1150, &bLocal_1152, 3);
	}
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1150, 0);
	SET_ANIM_SET_FOR_ACTOR(&bLocal_1150, "FBI05_Nastas_Backseat", 1);
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_1150, "FBI05_Nastas_Backseat/Nastas_Backseat_idle");
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, (&iLocal_4 + 2248[23]), 1, 1, 1);
	TASK_CLEAR(&bLocal_1148);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1148, *(&iLocal_4 + 2248[113]), 1, 1, 1);
	TASK_CLEAR(&bLocal_1146);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1146, *(&iLocal_4 + 2248[103]), 1, 1, 1);
	iLocal_1472 = 0;
	Function_269(&uLocal_1516, 40, 0, 4294967295, 4294967295);
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 2, 0);
	ACTOR_ADD_WEAPON_AMMO(&Global_54076, 2, 9.0f);
	GET_POSITION(&bLocal_1152, &Var0);
	Var2 = Vector(0.0f, GET_HEADING(&bLocal_1152), 0.0f);
	uLocal_1454 = CREATE_GRINGO_IN_LAYOUT(&uLocal_1049, "nfixGringo", "fix_car", Var0, Var2);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1148, &bLocal_1152, 0);
	SNAP_OBJECT_TO_GROUND(&uLocal_1454, 5.0f, 0, 1092616192);
	SNAP_ACTOR_TO_GRINGO(&bLocal_1148, &uLocal_1454, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&bLocal_1148, GET_GRINGO_FROM_OBJECT(&uLocal_1454), "UseCase1", 4294967295, 1);
	return 1;
}

void Function_347() //Position: 0x11465 / 70757
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_372(iLocal_1141);
	Function_363(StackVal, Function_372(iLocal_1141), iLocal_1141, Global_46754[0], Function_371(iLocal_1141), 5);
	iLocal_1528 = 3;
	iLocal_1524 = 0;
	iLocal_1243 = 0;
	iLocal_1244 = 0;
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	GET_ACTOR_AXIS(&bLocal_1152, &Var0, 2);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, 2,5f);
	Function_264(&bLocal_1152);
	Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Function_264(&bLocal_1152), StackVal);
	Function_301(&bLocal_1152);
	iLocal_1158 = CREATE_POINT_IN_LAYOUT(&uLocal_1049, Function_54(), Var2, Function_301(&bLocal_1152));
	Function_362();
	if (!SQUAD_IS_VALID(&iLocal_4 + 1064))
	{
		Function_359();
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1160))
	{
		Function_349();
	}
	bLocal_1225 = false;
	iLocal_1251 = 0;
	iLocal_1252 = 0;
	Function_388(&bLocal_1148);
	Function_388(&bLocal_1150);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 1);
	bLocal_1225 = Function_348();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_1225);
	PRINTNL();
	return;
}

bool Function_348() //Position: 0x1157E / 71038
{
	return Global_53524.f_68;
}

void Function_349() //Position: 0x11589 / 71049
{
	uLocal_1160[0] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_1049, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	uLocal_1160[1] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_1049, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	uLocal_1160[2] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_1049, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	Function_355();
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 1160, 0);
	SQUAD_GOAL_ADD_COMBAT(&iLocal_4 + 1160, 0, 4294967295, 0);
	Function_354(&iLocal_4 + 1160, 1);
	Function_353(&iLocal_4 + 1160, 0);
	Function_352(&iLocal_4 + 1160, 1);
	Function_350(&iLocal_4 + 1160, 60.0f, -1.0f, -1.0f);
	if (IS_ACTOR_VALID(GET_MOUNT(&iLocal_4 + 1072[02])))
	{
		Function_299(GET_MOUNT(&iLocal_4 + 1072[02]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&iLocal_4 + 1072[12])))
	{
		Function_299(GET_MOUNT(&iLocal_4 + 1072[12]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&iLocal_4 + 1072[22])))
	{
		Function_299(GET_MOUNT(&iLocal_4 + 1072[22]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&iLocal_4 + 1072[32])))
	{
		Function_299(GET_MOUNT(&iLocal_4 + 1072[32]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT(&iLocal_4 + 1072[42])))
	{
		Function_299(GET_MOUNT(&iLocal_4 + 1072[42]));
	}
	return;
}

void Function_350(var uParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x116C8 / 71368
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
			Function_351(&uVar1, bParam1, &fParam2, &bParam3);
		}
		bVar0++;
	}
}

void Function_351(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x11716 / 71446
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&bParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 54, 0.0f);
		}
	}
}

void Function_352(var uParam0, int iParam1) //Position: 0x11767 / 71527
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_353(var uParam0, int iParam1) //Position: 0x117AB / 71595
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

void Function_354(var uParam0, bool bParam1) //Position: 0x117E5 / 71653
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
				MEMORY_PREFER_RIDING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_355() //Position: 0x11834 / 71732
{
	*(&iLocal_4 + 1160) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 1072[02]) = Function_357(StackVal, StackVal, &iLocal_4, Function_54(), 475, Function_54(), 980, Vector(496,2011f, 96,04275f, 1847,328f), Vector(3,54203f, -89,83283f, -3,542015f));
	Function_356(&iLocal_4 + 1072[02], &iLocal_4 + 1160, 1);
	*(&iLocal_4 + 1072[12]) = Function_357(StackVal, StackVal, &iLocal_4, Function_54(), 470, Function_54(), 980, Vector(503,958f, 96,88577f, 1855,783f), Vector(0,0689053f, -81,37999f, -0,06812695f));
	Function_356(&iLocal_4 + 1072[12], &iLocal_4 + 1160, 1);
	*(&iLocal_4 + 1072[22]) = Function_357(StackVal, StackVal, &iLocal_4, Function_54(), 469, Function_54(), 980, Vector(498,3035f, 97,05173f, 1838,02f), Vector(179,9358f, -80,74902f, -179,9366f));
	Function_356(&iLocal_4 + 1072[22], &iLocal_4 + 1160, 1);
	*(&iLocal_4 + 1072[32]) = Function_357(StackVal, StackVal, &iLocal_4, Function_54(), 469, Function_54(), 980, Vector(525,9341f, 96,80964f, 1853,934f), Vector(179,9358f, -80,74902f, -179,9366f));
	Function_356(&iLocal_4 + 1072[32], &iLocal_4 + 1160, 1);
	*(&iLocal_4 + 1072[42]) = Function_357(StackVal, StackVal, &iLocal_4, Function_54(), 469, Function_54(), 980, Vector(517,6711f, 98,38428f, 1828f), Vector(179,9358f, -80,74902f, -179,9366f));
	Function_356(&iLocal_4 + 1072[42], &iLocal_4 + 1160, 1);
	return;
}

void Function_356(var uParam0, var uParam1, bool bParam2) //Position: 0x119D2 / 72146
{
	SQUAD_JOIN(&uParam0, &uParam1);
	SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 39, 0f, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&uParam0, 39, 1);
	if (bParam2)
	{
		GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	}
	return;
}

int Function_357(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x11A2D / 72237
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_358(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_358(bParam4))
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

bool Function_358(int iParam0) //Position: 0x11B65 / 72549
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_359() //Position: 0x11B7C / 72572
{
	Function_361();
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 1064, 0);
	Function_353(&iLocal_4 + 1064, 0);
	Function_352(&iLocal_4 + 1064, 1);
	Function_350(&iLocal_4 + 1064, 55.0f, -1.0f, -1.0f);
	Function_360();
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 984, 0);
	Function_353(&iLocal_4 + 984, 0);
	Function_352(&iLocal_4 + 984, 1);
	Function_350(&iLocal_4 + 984, 70.0f, -1.0f, -1.0f);
	return;
}

void Function_360() //Position: 0x11BE6 / 72678
{
	(&iLocal_4 + 984) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 944[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 467, Vector(521,2134f, 97,79358f, 1846,183f), Vector(179,8777f, -85,1546f, -179,8782f));
	SQUAD_JOIN(&iLocal_4 + 944[02], &iLocal_4 + 984);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 944[02], false);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 944[02], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 944[02], 19);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 944[02], 43, 0,5f, 1, 1);
	*(&iLocal_4 + 944[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 468, Vector(517,86f, 97,63512f, 1840,188f), Vector(0,6462166f, -89,08427f, -0,6461341f));
	SQUAD_JOIN(&iLocal_4 + 944[12], &iLocal_4 + 984);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 944[12], false);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 944[12], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 944[12], 19);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 944[12], 43, 0,5f, 1, 1);
	return;
}

void Function_361() //Position: 0x11D06 / 72966
{
	*(&iLocal_4 + 1064) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 992[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 472, Vector(512.0f, 97,20816f, 1845,061f), Vector(0,0514631f, -78,42332f, -0,05041619f));
	SQUAD_JOIN(&iLocal_4 + 992[02], &iLocal_4 + 1064);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 992[02], false);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 992[02], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 992[02], 19);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 992[02], 41, 0,5f, 1, 1);
	*(&iLocal_4 + 992[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 470, Vector(513,0648f, 98,33385f, 1838,739f), Vector(0,6462166f, -89,08427f, -0,6461341f));
	Function_356(&iLocal_4 + 992[12], &iLocal_4 + 1064, 1);
	*(&iLocal_4 + 992[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 468, Vector(516,4941f, 97,17768f, 1845,802f), Vector(0,04339444f, -76,23189f, -0,04214793f));
	SQUAD_JOIN(&iLocal_4 + 992[22], &iLocal_4 + 1064);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 992[22], false);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 992[22], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 992[22], 19);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 992[22], 41, 0,5f, 1, 1);
	*(&iLocal_4 + 992[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 476, Vector(504,5745f, 97,18886f, 1849,391f), Vector(0,03852041f, -74,44838f, -0,03711015f));
	Function_356(&iLocal_4 + 992[32], &iLocal_4 + 1064, 1);
	return;
}

void Function_362() //Position: 0x11EB6 / 73398
{
	var uVar0;
	var uVar1;
	bool bVar3;
	
	Function_264(&iLocal_4 + 3632[5]);
	uVar1 = Function_264(&iLocal_4 + 3632[5]);
	bVar3 = GET_OBJECT_HEADING(&iLocal_4 + 3632[5]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 2,5f, bVar3, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
	}
	else
	{
		uLocal_1530[0] = &uVar0;
	}
	Function_264(&iLocal_4 + 3632[6]);
	uVar1 = Function_264(&iLocal_4 + 3632[6]);
	bVar3 = GET_OBJECT_HEADING(&iLocal_4 + 3632[6]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 2,5f, bVar3, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
	}
	else
	{
		uLocal_1530[1] = &uVar0;
	}
	Function_264(&iLocal_4 + 3632[7]);
	uVar1 = Function_264(&iLocal_4 + 3632[7]);
	bVar3 = GET_OBJECT_HEADING(&iLocal_4 + 3632[7]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 2,5f, bVar3, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
	}
	else
	{
		uLocal_1530[2] = &uVar0;
	}
	Function_264(&iLocal_4 + 3632[8]);
	uVar1 = Function_264(&iLocal_4 + 3632[8]);
	bVar3 = GET_OBJECT_HEADING(&iLocal_4 + 3632[8]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 2,5f, bVar3, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
	}
	else
	{
		uLocal_1530[4] = &uVar0;
	}
	Function_264(&iLocal_4 + 3632[9]);
	uVar1 = Function_264(&iLocal_4 + 3632[9]);
	bVar3 = GET_OBJECT_HEADING(&iLocal_4 + 3632[9]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 1.0f, bVar3, 90.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
	}
	else
	{
		uLocal_1530[6] = &uVar0;
	}
	Function_264(&iLocal_4 + 3632[10]);
	uVar1 = Function_264(&iLocal_4 + 3632[10]);
	bVar3 = GET_OBJECT_HEADING(&iLocal_4 + 3632[10]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 1.0f, bVar3, 90.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
	}
	else
	{
		uLocal_1530[7] = &uVar0;
	}
	return;
}

void Function_363(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x12070 / 73840
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
	if (iParam2 != Global_53524.f_48 && !Function_370())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_369(0);
	Function_368();
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
		Function_366(iParam2);
	}
	Function_365(uParam3, iVar0, iVar1);
	Function_364();
}

void Function_364() //Position: 0x12119 / 74009
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

void Function_365(int iParam0, bool bParam1, bool bParam2) //Position: 0x1215A / 74074
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

void Function_366(bool bParam0) //Position: 0x122C3 / 74435
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_367() };
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

struct<16> Function_367() //Position: 0x1245B / 74843
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

void Function_368() //Position: 0x124A1 / 74913
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_369(bool bParam0) //Position: 0x124C5 / 74949
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

bool Function_370() //Position: 0x124F4 / 74996
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_371(int iParam0) //Position: 0x1250F / 75023
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 2136[1]);
		
		case 0x00000001:
			return StackVal;
		
		case 0x00000002:
			return StackVal;
		
		case 0x00000003:
			return StackVal;
		
		case 0x00000004:
			return StackVal;
		
		case 0x00000065:
			return StackVal;
		
		default:
	}
	return StackVal;
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return StackVal;
}

struct<8> Function_372(int iParam0) //Position: 0x125F6 / 75254
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_264(&iLocal_4 + 2136[1]);
			return StackVal, Function_264(&iLocal_4 + 2136[1]);
		
		case 0x00000001:
			return StackVal, *(&iLocal_4 + 2248[13]);
		
		case 0x00000002:
			return StackVal, *(&iLocal_4 + 2248[03]);
		
		case 0x00000003:
			return StackVal, *(&iLocal_4 + 2248[13]);
		
		case 0x00000004:
			return StackVal, *(&iLocal_4 + 2248[23]);
		
		case 0x00000065:
			return StackVal, *(&iLocal_4 + 2248[33]);
		
		default:
	}
	return StackVal, *(&iLocal_4 + 2248[33]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	Function_264(&iLocal_4 + 2136[1]);
	return StackVal, Function_264(&iLocal_4 + 2136[1]);
}

bool Function_373(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x126D1 / 75473
{
	if (Function_374(&iParam0) == iParam6 || Function_370())
	{
		return 1;
	}
	return 0;
}

int Function_374(int iParam0) //Position: 0x126F0 / 75504
{
	if (Function_247(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_375() //Position: 0x12709 / 75529
{
	Function_376(1);
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[3]);
	}
	else
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[3], 1, 1, 1);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 2248[23]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1148, *(&iLocal_4 + 2248[113]), 1, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1146, *(&iLocal_4 + 2248[103]), 1, 1, 1);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &bLocal_1150)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1150, &bLocal_1152, 3);
	}
	return;
}

void Function_376(bool bParam0) //Position: 0x127D7 / 75735
{
	if (!IS_ACTOR_VALID(&bLocal_1150))
	{
		Function_378();
		bLocal_1150 = &iLocal_4 + 584[02];
		Function_299(&bLocal_1150);
		STOP_PED_SPEAKING(&bLocal_1150, 1);
		if (Function_300(&bLocal_1150, 1))
		{
			SET_ACTOR_MAX_HEALTH(&bLocal_1150, 300.0f);
			Function_388(&bLocal_1150);
			Function_377(&bLocal_1150, 0);
			SET_ACTOR_FACTION(&bLocal_1150, 20);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1150, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1150, true);
			if (&bParam0)
			{
				HOGTIE_ACTOR(&bLocal_1150);
			}
			TASK_PRIORITY_SET(&bLocal_1150, true);
			TASK_STAND_STILL(&bLocal_1150, -1.0f, 0, 0);
			LIMIT_BLOOD_ON_ACTOR(&bLocal_1150, 4);
			SET_AMBIENT_VOICE_NAME(&bLocal_1150, "COMPANION_NativeFriend");
		}
		if (iLocal_1141 == 0 && iLocal_1141 == 1)
		{
			Function_294(&(Local_1315[315]), &bLocal_1150, "Indian", 0, 0x5f5e100, 1);
		}
	}
	return;
}

void Function_377(var uParam0, bool bParam1) //Position: 0x128BC / 75964
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[2]));
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[6]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[2]), 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[6]), 0);
	}
	return;
}

void Function_378() //Position: 0x1290B / 76043
{
	*(&iLocal_4 + 608) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 584[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 563, Vector(357,2444f, 78,86572f, 1986,167f), Vector(0.0f, 218,4775f, 0.0f));
	Function_379(&iLocal_4 + 584[02], &iLocal_4 + 608, 1);
	return;
}

void Function_379(var uParam0, var uParam1, bool bParam2) //Position: 0x12963 / 76131
{
	SQUAD_JOIN(&uParam0, &uParam1);
	SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
	SET_ACTOR_FACTION(&uParam0, 20);
	SET_ACTOR_FACTION(&uParam0, 20);
	if (bParam2)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	}
	return;
}

int Function_380() //Position: 0x12994 / 76180
{
	Function_386(&iLocal_4 + 408, 467, 2, 0);
	Function_386(&iLocal_4 + 408, 468, 2, 0);
	Function_386(&iLocal_4 + 408, 475, 2, 0);
	Function_386(&iLocal_4 + 408, 980, 2, 0);
	Function_386(&iLocal_4 + 408, 469, 2, 0);
	if (Function_381(&iLocal_4 + 408))
	{
		return 1;
	}
	return 0;
}

bool Function_381(struct<2>[] Param0) //Position: 0x129EE / 76270
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_385();
	iVar1 = 0;
	if (!Function_176(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_384(&(Param0[iVar02]), 8);
		}
		else if (Function_383())
		{
			iVar1 = 1;
			Function_384(&(Param0[iVar02]), 8);
		}
		Function_384(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_176(&(Param0[iVar02]), 4))
		{
			if (!Function_176(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_176(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_176(&(Param0[02]), 8) || iVar1));
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
				Function_384(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_176(&(Param0[iVar02]), 4))
		{
			if (!Function_176(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_384(&(Param0[iVar02]), 2);
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
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_384(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_384(&(Param0[iVar02]), 2);
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
	Function_382();
	return 1;
}

void Function_382() //Position: 0x12DB0 / 77232
{
	if (!Function_266(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_383() //Position: 0x12DF0 / 77296
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

void Function_384(struct<13> Param0) //Position: 0x12E1E / 77342
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_385() //Position: 0x12E31 / 77361
{
	if (!Function_266(128))
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

var Function_386(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12E73 / 77427
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_176(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_384(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_384(&(Param0[iVar02]), 8);
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

void Function_387() //Position: 0x12F4F / 77647
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 2248[23]), 1, 1, 1);
	return;
}

void Function_388(bool bParam0) //Position: 0x12F75 / 77685
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_HEALTH(&bParam0, GET_ACTOR_MAX_HEALTH(&bParam0));
		SET_ACTOR_KO_POINTS(&bParam0, GET_ACTOR_MAX_KO_POINTS(&bParam0));
	}
	return;
}

void Function_389() //Position: 0x12F9C / 77724
{
	bool bVar0;
	
	if (!Function_602())
	{
		return;
	}
	if (iLocal_1528 != 3 || bLocal_1142 != 8)
	{
	}
	else
	{
		if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1146))
		{
			if (GET_TASK_STATUS(&bLocal_1146, 0) != 1)
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 1, 2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1146, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
		}
		if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1150))
		{
			if (GET_TASK_STATUS(&bLocal_1150, 0) != 1)
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 3, 2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1150, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
		}
		if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1148))
		{
			if (GET_TASK_STATUS(&bLocal_1148, 0) != 1)
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1148, &bLocal_1152, 1);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 0, 2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1148, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
		}
	}
	if (bLocal_1142 < 4 && bLocal_1142 > 9)
	{
		Function_264(&iLocal_4 + 3632[0]);
		Function_390(StackVal, "$/cutscene/FBI_05_CS05_B/FBI_05_CS05_B", &uLocal_1460, Function_264(&iLocal_4 + 3632[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	else if (bLocal_1142 > 9)
	{
		Function_264(&iLocal_4 + 2008[4]);
		Function_390(StackVal, "$/cutscene/FBI_05_END_SCENE/FBI_05_END_SCENE", &uLocal_1460, Function_264(&iLocal_4 + 2008[4]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	return;
}

int Function_390(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1312D / 78125
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_393(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_394()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_391();
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
	else if ((!Function_393(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_394()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_393(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_391() //Position: 0x13395 / 78741
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
			Function_392(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_392(char* cParam0) //Position: 0x133E9 / 78825
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

bool Function_393(var uParam0, struct<2> Param1, float fParam3) //Position: 0x13512 / 79122
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_318(&uParam0);
		if (VDIST(Function_318(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_394() //Position: 0x1359E / 79262
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_395() //Position: 0x135AD / 79277
{
	var uVar0;
	
	Function_411();
	switch (bLocal_1142)
	{
		case 0x00000000:
			Function_279(0);
			HUD_ENABLE(1);
			Function_388(&bLocal_1150);
			Function_388(&bLocal_1148);
			TASK_CLEAR(&bLocal_1148);
			MEMORY_CLEAR_ALL(&bLocal_1148);
			TASK_CLEAR(&bLocal_1150);
			MEMORY_CLEAR_ALL(&bLocal_1150);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1148, 1);
			DECOR_SET_BOOL(&bLocal_1146, "ForceAllowRain", 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_167(81924);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&Global_44085[Global_46914[3]9] + 8, 15);
			Function_277(9);
			Function_167(1);
			uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_1049, Function_54(), 2,802597E-45f, Vector(351,89f, 74,59f, 1963,09f), Vector(0.0f, 0.0f, 0.0f), Vector(150.0f, 150.0f, 150.0f));
			CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar0, 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			iLocal_1521 = 1;
			if (iLocal_1226[2] == 0)
			{
				Function_250(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_1143 = Global_46754[0];
				if (!Function_276(iLocal_1143))
				{
					Function_275(&Local_1051);
				}
				Function_410();
				Function_274(1);
			}
			else
			{
				Function_274(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_276(iLocal_1143) || iLocal_1143 != 4294967295))
			{
				Function_409();
				Function_274(2);
			}
			break;
		
		case 0x00000002:
			if (Function_373(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1051, iLocal_1141))
			{
				Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
				Function_274(3);
			}
			else
			{
				Function_408();
				Function_406();
				Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
				Function_274(6);
			}
			Function_403();
			break;
		
		case 0x00000003:
			if (Function_233("$/cutscene/FBI_05_CS04/FBI_05_CS04", &iLocal_1129, &Local_1051, &iLocal_1141, 80439, 80381, 80256, 80806, 80215, 49332, 0, 2, 2, 2, 2, 0, 1))
			{
				Function_274(6);
			}
			break;
		
		case 0x00000006:
			Function_285(&bLocal_1152, &bLocal_1148);
			if (iLocal_1505)
			{
				iLocal_1505 = 0;
			}
			Function_269(&uLocal_1516, 60, 0, 4294967295, 4294967295);
			Function_237(1.0f);
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[1])))
			{
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2104[1], 330, 0f, 2, 0);
			}
			Function_310("FBI05_obj03b", 3,5f, 1, 2, 0, 0, 0, 0);
			Function_274(7);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			iLocal_1521 = 0;
			break;
		
		case 0x00000007:
			Function_397(1, 0);
			if (Function_303())
			{
				Function_274(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_396();
				iLocal_1226[3] = 1;
				iLocal_1141 = 4;
				Function_274(0);
			}
			break;
	}
	return;
}

void Function_396() //Position: 0x1384E / 79950
{
	return;
}

void Function_397(bool bParam0, bool bParam1) //Position: 0x13854 / 79956
{
	if (!bParam0)
	{
		if (!Function_242(&iLocal_1210))
		{
			Function_398(&iLocal_1210);
		}
		else if (Function_240(&iLocal_1210) <= 7.0f)
		{
			SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(&bLocal_1150, "Nastas_AGONY", 0, 1, 3, 0);
			Function_245(&iLocal_1210);
		}
	}
	else if (!Function_242(&iLocal_1210))
	{
		Function_398(&iLocal_1210);
	}
	else if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&bLocal_1150)) > 0,2f)
	{
		if (!iLocal_1214)
		{
			SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(&bLocal_1150, "Nastas_PAIN_HIGH", 1, 1, 3, 0);
			Function_245(&iLocal_1210);
			CLEAR_LAST_HIT(&bLocal_1150);
			iLocal_1214 = 1;
		}
		else if (Function_240(&iLocal_1210) <= 2.0f && !IS_ANY_SPEECH_PLAYING(&bLocal_1150))
		{
			iLocal_1214 = 0;
		}
	}
	else
	{
		if (iLocal_1214)
		{
			if (Function_240(&iLocal_1210) <= 2.0f && !IS_ANY_SPEECH_PLAYING(&bLocal_1150))
			{
				iLocal_1214 = 0;
			}
		}
		if (!bParam1)
		{
		}
	}
	return;
}

void Function_398(int iParam0) //Position: 0x13940 / 80192
{
	if (!Function_242(&iParam0))
	{
		Function_246(&iParam0, 0.0f);
	}
	return;
}

int Function_399() //Position: 0x13957 / 80215
{
	Function_285(&bLocal_1152, &bLocal_1148);
	MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
	Function_253(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_400() //Position: 0x13980 / 80256
{
	if (!iLocal_1505)
	{
		if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
		}
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&Global_21369 + 72);
		}
		if (!IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_289(&iLocal_4 + 2008[2]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1152);
		}
		else
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1152);
			Function_258(&bLocal_1152, &iLocal_4 + 2008[2], 1, 1, 1);
		}
		iLocal_1505 = 1;
	}
	return 1;
}

int Function_401() //Position: 0x139FD / 80381
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(&Global_21369 + 72);
	}
	return 1;
}

int Function_402() //Position: 0x13A37 / 80439
{
	bool bVar0;
	
	Function_265(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0x3f800000, 0);
	Function_264(&iLocal_4 + 2008[2]);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_1049, "tempcutscenevol", 2,802597E-45f, Function_264(&iLocal_4 + 2008[2]), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
	Function_264(&iLocal_4 + 2008[2]);
	Function_262(StackVal, &uLocal_1049, Function_264(&iLocal_4 + 2008[2]), &bVar0, 0, 0, 0, 0, 1, 1);
	if (IS_ACTOR_IN_VOLUME(&bLocal_1152, &bVar0))
	{
	}
	return 1;
}

void Function_403() //Position: 0x13ABB / 80571
{
	Function_372(iLocal_1141);
	Function_363(StackVal, Function_372(iLocal_1141), iLocal_1141, Global_46754[0], Function_371(iLocal_1141), 5);
	Function_380();
	Function_404();
	iLocal_1241 = 0;
	Function_388(&bLocal_1148);
	Function_388(&bLocal_1150);
	bLocal_1225 = Function_348();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_1225);
	PRINTNL();
	return;
}

void Function_404() //Position: 0x13B1F / 80671
{
	Function_405(&iLocal_4 + 712);
	Function_405(&iLocal_4 + 672);
	Function_405(&iLocal_4 + 776);
	Function_405(&iLocal_4 + 840);
	Function_405(&iLocal_4 + 888);
	Function_405(&iLocal_4 + 936);
	return;
}

void Function_405(bool bParam0) //Position: 0x13B5B / 80731
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

int Function_406() //Position: 0x13BA6 / 80806
{
	var uVar0;
	var uVar1;
	
	if (!iLocal_1505)
	{
		if (!IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_289(&iLocal_4 + 2008[2]);
		}
		else
		{
			Function_258(&bLocal_1152, &iLocal_4 + 2008[2], 1, 1, 1);
		}
	}
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		FREE_FROM_HOGTIE(&uVar0);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 1);
	TASK_CLEAR(&bLocal_1146);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, false) != &bLocal_1148)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	}
	GET_POSITION(&Global_54076, &uVar1);
	TELEPORT_ACTOR(&bLocal_1146, &uVar1, 1, 1, 1);
	SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&Global_54076);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 2) != &Global_54076)
	{
		SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &bLocal_1150)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1150, &bLocal_1152, 3);
	}
	if (!ACTOR_HAS_ANIM_SET(&bLocal_1150, "FBI05_injured_guy_in_car"))
	{
		TASK_STAND_STILL(&bLocal_1150, -1.0f, 0, 0);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1150, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car", 1);
		SET_ACTION_NODE_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car/Loop");
	}
	DECOR_SET_BOOL(&Global_54076, "Player_DisablePutOnHorse", 0);
	iLocal_1472 = 1;
	TASK_CLEAR(&bLocal_1148);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 4000, 5, 0, 0, 1, 0);
	AI_ACTOR_FORCE_SPEED(&bLocal_1148, 4);
	TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 4);
	TASK_PRIORITY_SET(&bLocal_1148, true);
	if (bLocal_1496)
	{
		SET_ALLOW_MELEE_SPECIAL_MOVE(&Global_54076, 1);
		SET_ALLOW_MELEE_SPECIAL_MOVE(&bLocal_1150, 1);
	}
	TASK_CLEAR(&Global_54076);
	MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
	SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "default_character_main");
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	Function_407();
	iLocal_1241 = 0;
	return 1;
}

void Function_407() //Position: 0x13E10 / 81424
{
	struct<5> Var0;
	
	GET_ACTOR_AXIS(&bLocal_1152, &Var0, 2);
	VSCALE(&Var0, -100.0f);
	Var0.f_4 = (StackVal + 0.0f);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&bLocal_1152), 0);
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(&bLocal_1152), &Var0);
	return;
}

void Function_408() //Position: 0x13E4D / 81485
{
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[2]);
	}
	else
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[2], 1, 1, 1);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 1);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, false) != &bLocal_1148)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, true) != &bLocal_1146)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&Global_54076);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 2) != &Global_54076)
	{
		SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &bLocal_1150)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1150, &bLocal_1152, 3);
	}
	if (!ACTOR_HAS_ANIM_SET(&bLocal_1150, "FBI05_injured_guy_in_car"))
	{
		TASK_STAND_STILL(&bLocal_1150, -1.0f, 0, 0);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1150, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car", 1);
		SET_ACTION_NODE_FOR_ACTOR(&bLocal_1150, "FBI05_injured_guy_in_car/Loop");
	}
	DECOR_SET_BOOL(&Global_54076, "Player_DisablePutOnHorse", 0);
	iLocal_1472 = 1;
	TASK_CLEAR(&bLocal_1148);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 4000, 5, 0, 0, 1, 0);
	AI_ACTOR_FORCE_SPEED(&bLocal_1148, 4);
	TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 4);
	TASK_PRIORITY_SET(&bLocal_1148, true);
	Function_285(&bLocal_1152, &bLocal_1148);
	TASK_CLEAR(&Global_54076);
	MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
	SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "default_character_main");
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_409() //Position: 0x14072 / 82034
{
	Function_376(1);
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[2]);
	}
	else
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[2], 1, 1, 1);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	Function_258(&Global_54076, &iLocal_4 + 1960[0], 1, 1, 1);
	Function_258(&bLocal_1148, &iLocal_4 + 1960[1], 1, 1, 1);
	Function_258(&bLocal_1150, &iLocal_4 + 1960[2], 1, 1, 1);
	Function_258(&bLocal_1146, &iLocal_4 + 1960[3], 1, 1, 1);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, false) != &bLocal_1148)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, true) != &bLocal_1146)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&Global_54076);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 2) != &Global_54076)
	{
		SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &bLocal_1150)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1150, &bLocal_1152, 3);
	}
	return;
}

void Function_410() //Position: 0x1419B / 82331
{
	Function_258(&Global_54076, &iLocal_4 + 1960[0], 1, 1, 1);
	TASK_CLEAR(&Global_54076);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_411() //Position: 0x141C2 / 82370
{
	bool bVar0;
	
	if (!Function_602())
	{
		return;
	}
	if (!iLocal_1243)
	{
		Function_329(&iLocal_1174, 45.0f, 100.0f, &bLocal_1152, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_1239, 0, 0, 0, 325, 1);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1146))
	{
		if (GET_TASK_STATUS(&bLocal_1146, 0) != 1)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 1, 2, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1146, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1150))
	{
		if (GET_TASK_STATUS(&bLocal_1150, 0) != 1)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 3, 2, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1150, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1148))
	{
		if (GET_TASK_STATUS(&bLocal_1148, 0) != 1)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 0, 2, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	Function_264(&iLocal_4 + 3632[0]);
	Function_390(StackVal, "$/cutscene/FBI_05_CS05/FBI_05_CS05", &uLocal_1460, Function_264(&iLocal_4 + 3632[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	return;
}

void Function_412() //Position: 0x1431A / 82714
{
	var uVar0;
	
	Function_481();
	switch (bLocal_1142)
	{
		case 0x00000000:
			Function_279(0);
			HUD_ENABLE(1);
			Function_167(81924);
			Function_277(9);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&Global_44085[Global_46914[3]9] + 8, 15);
			uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_1049, Function_54(), 2,802597E-45f, Vector(351,89f, 74,59f, 1963,09f), Vector(0.0f, 0.0f, 0.0f), Vector(150.0f, 150.0f, 150.0f));
			CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar0, 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
			Function_388(&bLocal_1150);
			Function_388(&bLocal_1148);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[6]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[7]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[8]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[9]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[10]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[11]);
			SET_ACTOR_VOLUME_PARAMETERS(&bLocal_1148, 1, 1);
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			ACTOR_SET_NEXT_WEAPON(&Global_54076, 2);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (iLocal_1226[1] == 0)
			{
				Function_250(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_1143 = Global_46754[0];
				if (!Function_276(iLocal_1143))
				{
					Function_275(&Local_1051);
				}
				Function_258(&Global_54076, &iLocal_4 + 1888[4], 1, 1, 1);
				Function_258(&bLocal_1148, &iLocal_4 + 1888[1], 1, 1, 1);
				Function_274(1);
			}
			else
			{
				Function_274(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_480()) && (Function_276(iLocal_1143) || iLocal_1143 != 4294967295))
			{
				Function_479();
				Function_274(2);
			}
			break;
		
		case 0x00000002:
			if (Function_373(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1051, iLocal_1141))
			{
				Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
				Function_274(3);
			}
			else
			{
				iLocal_1502 = 1;
				Function_269(&uLocal_1516, 0, 0, 4294967295, 4294967295);
				Function_477();
				Function_274(4);
			}
			Function_476();
			break;
		
		case 0x00000003:
			if (Function_233("$/cutscene/FBI_05_CS03/FBI_05_CS03", &iLocal_1129, &Local_1051, &iLocal_1141, 95963, 95833, 95826, 96203, 94602, 94588, 0, 2, 2, 2, 2, 0, 1))
			{
				Function_274(55);
			}
			break;
		
		case 0x0000000C:
			break;
		
		case 0x00000037:
			MEMORY_ALLOW_SHOOTING(&bLocal_1148, true);
			Function_237(1.0f);
			if (!Function_242(&iLocal_1186))
			{
				Function_398(&iLocal_1186);
			}
			else
			{
				Function_245(&iLocal_1186);
			}
			Function_462();
			Function_460();
			if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
			{
				SET_WEAPONENUM_LOCKED(2, 0);
				GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 0, 1);
				_ADD_AMMO_OF_TYPE(&Global_54076, 6, 80.0f, 1, 0);
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 0, 1);
				_ADD_AMMO_OF_TYPE(&Global_54076, 6, 80.0f, 1, 0);
			}
			Function_274(6);
			break;
		
		case 0x00000004:
			if (Function_452())
			{
				if (!Function_242(&iLocal_1186))
				{
					Function_398(&iLocal_1186);
				}
				else
				{
					Function_245(&iLocal_1186);
				}
				Function_274(95);
			}
			break;
		
		case 0x0000005F:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_462();
				Function_460();
				Function_237(1.0f);
				Function_274(6);
			}
			break;
		
		case 0x00000006:
			Function_397(1, 0);
			if (iLocal_1527 <= 3)
			{
				Function_448();
			}
			if (Function_414())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1152));
				}
				Function_288(&bLocal_1152, 4);
				Function_274(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_413();
				iLocal_1226[2] = 1;
				iLocal_1141 = 3;
				Function_274(0);
			}
			break;
	}
	return;
}

void Function_413() //Position: 0x146A0 / 83616
{
	AI_GOAL_LOOK_CLEAR(&bLocal_1150);
	Function_218();
	Function_179();
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 4, 0);
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 6, 0);
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 0);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1148);
	return;
}

bool Function_414() //Position: 0x146D5 / 83669
{
	Function_437();
	Function_431();
	Function_430();
	if (!IS_OBJECT_VALID(&bLocal_1156))
	{
		Function_264(&iLocal_4 + 2712[0]);
		Function_301(&iLocal_4 + 2712[0]);
		bLocal_1156 = Function_429(StackVal, StackVal, &uLocal_1049, "PutNastasInCarGateway", Function_264(&iLocal_4 + 2712[0]), Function_301(&iLocal_4 + 2712[0]), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
		SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&bLocal_1156), "FBI05_CarBlip");
	}
	else if (Function_425(&bLocal_1156, 0, 1, 0, 0, 0))
	{
		Function_256(&bLocal_1156);
		Function_223(&bLocal_1156);
		ABORT_SCRIPTED_CONVERSATION(0);
		return 1;
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1712[1]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[1]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[2]))
		{
			if (iLocal_1527 <= 3)
			{
				iLocal_1527 = 3;
				Function_245(&iLocal_1170);
				if (iLocal_1526 <= 9)
				{
					iLocal_1526 = 9;
				}
				DESTROY_VOLUME(&iLocal_4 + 1712[1]);
			}
		}
	}
	if (iLocal_1527 > 4)
	{
		Function_329(&iLocal_1174, 40.0f, 60.0f, &bLocal_1152, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_1239, 0, 0, 0, 325, 1);
	}
	if (iLocal_1527 < 2)
	{
		Function_424();
		Function_423();
	}
	else
	{
		UI_EXIT("HealthMeter");
	}
	if (!Function_242(&iLocal_1198))
	{
		Function_398(&iLocal_1198);
	}
	else if (Function_240(&iLocal_1198) <= 10.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (((((Function_321(&iLocal_4 + 672) < 0 || Function_321(&iLocal_4 + 712) < 0) || Function_321(&iLocal_4 + 840) < 0) || Function_321(&iLocal_4 + 888) < 0) || Function_321(&iLocal_4 + 936) < 0) || Function_321(&iLocal_4 + 776) < 0)
		{
			switch (RAND_INT_RANGE(0, 2))
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_FordYellsEnemys", "FBI05_FordYellsEnemys", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000001:
					if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) <= 7.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonNoShootAtakrs", "FBI05_JonNoShootAtakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_FordEncJon", "FBI05_FordEncJon", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) <= 7.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonNoShootAtakrs", "FBI05_JonNoShootAtakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_KeepMovingFord", "FBI05_KeepMovingFord", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					break;
			}
			Function_245(&iLocal_1198);
		}
	}
	switch (iLocal_1527)
	{
		case 0x00000000:
			Function_237(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 2, 1);
			Function_254();
			Function_310("FBI05_obj02d", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1152)))
			{
				Function_211(&bLocal_1152);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1156)))
			{
				ADD_BLIP_FOR_OBJECT(&bLocal_1156, 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&bLocal_1156), "FBI05_CarBlip");
			}
			Function_422();
			iLocal_1527 = 1;
			Function_245(&iLocal_1170);
			return 0;
			break;
		
		case 0x00000001:
			if (iLocal_1526 != 7 && Function_240(&iLocal_1170) <= 7.0f)
			{
				Function_418();
				Function_254();
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_EnemysOutDocks", "FBI05_EnemysOutDocks", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
				iLocal_1527 = 2;
				Function_245(&iLocal_1170);
			}
			break;
		
		case 0x00000002:
			if (iLocal_1526 == 10)
			{
				iLocal_1527 = 3;
				Function_245(&iLocal_1170);
			}
			break;
		
		case 0x00000003:
			if (Function_313(&Global_54076, &bLocal_1146, 20.0f) && Function_417(&bLocal_1146, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				Function_269(&uLocal_1516, 6, 0, 4294967295, 4294967295);
			}
			Function_416(1);
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1448[1]))
			{
				Function_415();
				iLocal_1527 = 4;
				Function_245(&iLocal_1170);
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Function_240(&iLocal_1170) <= 1,5f)
			{
				TASK_CLEAR(&bLocal_1146);
				AI_QUICK_EXIT_GRINGO(&bLocal_1146, 1);
				SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
				bLocal_1223 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1152, 1, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1146, bLocal_1223);
				TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
				TASK_PRIORITY_SET(&bLocal_1146, true);
				iLocal_1527 = 5;
				Function_245(&iLocal_1170);
				return 0;
			}
			break;
		
		case 0x00000005:
			if (Function_240(&iLocal_1170) <= 5.0f)
			{
				Function_310("FBI05_obj02e", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1527 = 6;
				Function_245(&iLocal_1170);
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1448[6]))
			{
			}
			break;
	}
	return 0;
}

void Function_415() //Position: 0x14CB2 / 85170
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_RossShoutsArriveCar", "FBI05_RossShoutsArriveCar", 0, 2, 1, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_416(bool bParam0) //Position: 0x14D0D / 85261
{
	if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1624[7]))
	{
		if (&bParam0)
		{
			Function_258(&bLocal_1148, &iLocal_4 + 2736[7], 1, 1, 1);
			LOG_ERROR("HandleFordhamFallingOff -- Fordham in water... putting him to land..");
		}
		else
		{
			Function_258(&bLocal_1148, &iLocal_4 + 2736[8], 1, 1, 1);
			LOG_ERROR("HandleFordhamFallingOff -- Fordham in water... putting him to the pier..");
		}
	}
	return;
}

var Function_417(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14DEE / 85486
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_418() //Position: 0x14E0E / 85518
{
	Function_421();
	Function_319(&iLocal_4 + 888, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_352(&iLocal_4 + 888, 1);
	Function_350(&iLocal_4 + 888, 35.0f, 2,5f, 0,5f);
	Function_420(&iLocal_4 + 888, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 848[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 848[12], 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 848[02], *(&iLocal_4 + 3392[03]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 848[12], *(&iLocal_4 + 3392[13]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 888, 0);
	return;
}

void Function_419(bool bParam0, struct<2> Param1, var uParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x14ECE / 85710
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	uVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &Param1, 2,5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(&uVar0))
	{
		if (&iParam5 != 2)
		{
			Function_268(&bParam0);
			if (VDIST(Function_268(&bParam0), Param1) < 5.0f)
			{
				if (&bParam10)
				{
					TASK_GO_NEAR_COORD(0, &Param1, 2.0f, &iParam5);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(0, &Param1, &iParam5, 3212836864);
				}
			}
		}
		if (&bParam7)
		{
			if (&bParam8)
			{
				TASK_SHOOT_FROM_COVER(0, &Global_54076, &uVar0, &fParam6, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar0, &fParam6, 1086324736);
			}
		}
		else
		{
			TASK_HIDE_AT_COVER(0, &uVar0, &fParam6, 6.0f, &iParam9);
		}
	}
	else if (&bParam7)
	{
		TASK_GO_NEAR_COORD(0, &Param1, 5.0f, &iParam5);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Param1, &fParam6);
	}
	else
	{
		TASK_GO_TO_COORD(0, &Param1, &iParam5);
		UNK_0x44986367(StackVal, &Var2);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Param1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal);
		TASK_FACE_COORD(0, &Param1, 0);
		TASK_CROUCH(0, &fParam6);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&bParam0);
	TASK_PRIORITY_SET(&bParam0, &iParam4);
	TASK_SEQUENCE_PERFORM(&bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

void Function_420(var uParam0, var uParam1, bool bParam2) //Position: 0x15000 / 86016
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
				DECOR_SET_INT(&uVar1, &uParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_421() //Position: 0x1504E / 86094
{
	*(&iLocal_4 + 888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 848[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 468, Vector(370,2678f, 73,59006f, 1942,802f), Vector(-1,188454f, 58,75469f, -0,363382f));
	Function_356(&iLocal_4 + 848[02], &iLocal_4 + 888, 1);
	*(&iLocal_4 + 848[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 474, Vector(371,5693f, 73,56374f, 1942,451f), Vector(0.0f, 81,17406f, 0.0f));
	Function_356(&iLocal_4 + 848[12], &iLocal_4 + 888, 1);
	return;
}

void Function_422() //Position: 0x150EE / 86254
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_CleaWayBoat", "FBI05_CleaWayBoat", 0, 2, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x15139 / 86329
{
	if (!iLocal_1458)
	{
		UI_SET_TEXT("HealthMeter", "FBI05_UINastasHP");
		UI_SHOW("HealthMeter");
		iLocal_1458 = 1;
	}
	else if ((GET_ACTOR_HEALTH(&bLocal_1150) / 3.0f) >= 3.0f && (GET_ACTOR_HEALTH(&bLocal_1150) / 3.0f) < 0.0f)
	{
		UI_SET_PROGRESS_BAR_VAL("HealthMeter", 3.0f);
	}
	else
	{
		UI_SET_PROGRESS_BAR_VAL("HealthMeter", (GET_ACTOR_HEALTH(&bLocal_1150) / 3.0f));
	}
	return;
}

void Function_424() //Position: 0x151CB / 86475
{
	var uVar0;
	var uVar2;
	float fVar4;
	float fVar5;
	var uVar6;
	
	Function_268(&Global_54076);
	uVar0 = Function_268(&Global_54076);
	Function_268(&bLocal_1148);
	uVar2 = Function_268(&bLocal_1148);
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 3944, &uVar0, &uVar2, &fVar4, &fVar5, &uVar6);
	if (Function_313(&Global_54076, &bLocal_1148, 40.0f))
	{
		if ((fVar5 - fVar4) <= 10.0f && !iLocal_1482)
		{
			switch (RAND_INT_RANGE(0, true))
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_Jon2FarBehind", "FBI05_Jon2FarBehind", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000001:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_CleaWayBoat", "FBI05_CleaWayBoat", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
			}
			iLocal_1482 = 1;
			Function_245(&iLocal_1478);
		}
		if ((fVar4 - fVar5) <= 25.0f && !iLocal_1482)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_2FarAheadWrek", "FBI05_2FarAheadWrek", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
			Function_245(&iLocal_1478);
			iLocal_1482 = 1;
		}
	}
	else if (!iLocal_1482)
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonRunsAwayFromArea", "FBI05_JonRunsAwayFromArea", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
		Function_245(&iLocal_1478);
		iLocal_1482 = 1;
	}
	if (iLocal_1482)
	{
		if (!Function_242(&iLocal_1478))
		{
			Function_398(&iLocal_1478);
		}
		else if (Function_240(&iLocal_1478) <= 15.0f)
		{
			iLocal_1482 = 0;
		}
	}
	return;
}

bool Function_425(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x153A9 / 86953
{
	var uVar0;
	var uVar1;
	bool bVar2;
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
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
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
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
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
				Function_428(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_427(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_427(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_426(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_426(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_426(vector3 vParam0) //Position: 0x155DE / 87518
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

float Function_427(var uParam0, bool bParam1) //Position: 0x15654 / 87636
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_428(var uParam0, bool bParam1) //Position: 0x15675 / 87669
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_427(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

var Function_429(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, int iParam15) //Position: 0x156DF / 87775
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

void Function_430() //Position: 0x157CA / 88010
{
	if (GET_ATTACHED_HOGTIE_VICTIM(&Global_54076) != &bLocal_1150)
	{
		Function_576("Nastas_dead");
		Function_617(iLocal_1141);
		Function_613(StackVal, 5, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
	}
	return;
}

void Function_431() //Position: 0x15806 / 88070
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1528[6]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[6]) || IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1528[6]))
		{
			iLocal_1462[0] = 1;
			Function_435();
			DESTROY_VOLUME(&iLocal_4 + 1528[6]);
		}
	}
	else
	{
		Function_434();
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1712[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[5]) || IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1712[5]))
		{
			iLocal_1462[1] = 1;
			Function_432();
			DESTROY_VOLUME(&iLocal_4 + 1712[5]);
		}
	}
	return;
}

void Function_432() //Position: 0x158A4 / 88228
{
	Function_433();
	Function_319(&iLocal_4 + 936, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_352(&iLocal_4 + 936, 1);
	Function_350(&iLocal_4 + 936, 45.0f, 2,5f, 0,5f);
	Function_420(&iLocal_4 + 936, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 896[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 896[12], 0);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 3456[03], 2, 3212836864);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &iLocal_4 + 3456[03], -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 896[02], bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	TASK_PRIORITY_SET(&iLocal_4 + 896[02], true);
	Function_419(StackVal, StackVal, &iLocal_4 + 896[12], *(&iLocal_4 + 3456[13]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 936, 0);
	return;
}

void Function_433() //Position: 0x1599E / 88478
{
	*(&iLocal_4 + 936) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 896[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 474, Vector(334,4159f, 74,58802f, 1939,582f), Vector(179,988f, 30,48195f, 179,9939f));
	Function_356(&iLocal_4 + 896[02], &iLocal_4 + 936, 1);
	*(&iLocal_4 + 896[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 475, Vector(335,3181f, 74,58913f, 1938,729f), Vector(0.0f, 153,1229f, 0.0f));
	Function_356(&iLocal_4 + 896[12], &iLocal_4 + 936, 1);
	return;
}

void Function_434() //Position: 0x15A3E / 88638
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1528[8]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[8]) || IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1528[8]))
		{
			TASK_CLEAR(&iLocal_4 + 680[02]);
			Function_264(&iLocal_4 + 3056[1]);
			Local_1253 = Function_264(&iLocal_4 + 3056[1]);
			bLocal_1223 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD_NONSTOP(0, &Local_1253, 2, 3212836864);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_1253, GET_OBJECT_HEADING(&iLocal_4 + 3056[1]), -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_4 + 680[02], bLocal_1223);
			TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
			TASK_PRIORITY_SET(&iLocal_4 + 680[02], true);
			DESTROY_VOLUME(&iLocal_4 + 1528[8]);
		}
	}
	return;
}

void Function_435() //Position: 0x15AF0 / 88816
{
	Function_436();
	Function_352(&iLocal_4 + 712, 1);
	Function_350(&iLocal_4 + 712, 45.0f, 1,5f, 0,1f);
	Function_319(&iLocal_4 + 712, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 712, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_436() //Position: 0x15B4B / 88907
{
	*(&iLocal_4 + 704) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "GangBelowStepsset", 0);
	*(&iLocal_4 + 712) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 680[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 470, Vector(351,1982f, 76,50726f, 1984,082f), Vector(177,7341f, -7,011962f, 176,7633f));
	Function_356(&iLocal_4 + 680[02], &iLocal_4 + 712, 1);
	return;
}

void Function_437() //Position: 0x15BCC / 89036
{
	if (!bLocal_1249)
	{
	}
	if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1624[8]))
	{
		Function_258(&bLocal_1148, &iLocal_4 + 2736[9], 1, 1, 1);
	}
	switch (iLocal_1526)
	{
		case 0x00000000:
			if ((!Function_444(&iLocal_4 + 616[02], 0, 1, 0, 0, 0, 0, 0, 0) && !Function_444(&iLocal_4 + 616[12], 0, 1, 0, 0, 0, 0, 0, 0)) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[6]))
			{
				if (IS_ACTOR_ALIVE(&iLocal_4 + 616[02]))
				{
					TASK_CLEAR(&iLocal_4 + 616[02]);
					TASK_KILL_CHAR(&iLocal_4 + 616[02], &bLocal_1148);
				}
				if (IS_ACTOR_ALIVE(&iLocal_4 + 616[12]))
				{
					TASK_CLEAR(&iLocal_4 + 616[12]);
					TASK_KILL_CHAR(&iLocal_4 + 616[12], &bLocal_1148);
				}
				TASK_CLEAR(&bLocal_1148);
				TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1148, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_4 + 3888), -1.0f, 1086324736);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 2);
				TASK_PRIORITY_SET(&bLocal_1148, true);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1148, 8, 0.0f);
				iLocal_1526 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_ALIVE(&iLocal_4 + 616[22]))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1624[5]) || IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1624[6]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1148, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_4 + 3896), -1.0f, 1086324736);
				}
				else
				{
					iLocal_1526 = 3;
					Function_443(3);
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_1462[0] == 1)
			{
				if (IS_ACTOR_ALIVE(&iLocal_4 + 680[02]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1148, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_4 + 3896), -1.0f, 1086324736);
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 2);
					TASK_PRIORITY_SET(&bLocal_1148, true);
				}
				else
				{
					Function_442();
					iLocal_1526 = 5;
				}
			}
			break;
		
		case 0x00000004:
			Function_441(&iLocal_4 + 1624[3], &iLocal_4 + 680[02], 5);
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1624[4]))
			{
				if (Function_321(&iLocal_4 + 776) < 0 || Function_321(&iLocal_4 + 840) < 0)
				{
					TASK_CLEAR(&bLocal_1148);
					Function_419(StackVal, StackVal, &bLocal_1148, *(&iLocal_4 + 3520[03]), 1, 2, -1.0f, 1, 0, 1, 0);
					Function_440(&bLocal_1148, &iLocal_4 + 776);
					Function_440(&bLocal_1148, &iLocal_4 + 840);
					iLocal_1526 = 6;
					Function_245(&iLocal_1182);
				}
				else
				{
					iLocal_1526 = 6;
					Function_245(&iLocal_1182);
				}
			}
			else if (GET_TASK_STATUS(&bLocal_1148, 43) != 1)
			{
				TASK_CLEAR(&bLocal_1148);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 3928, 5, 1, 0, 1, 0);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 2);
				TASK_PRIORITY_SET(&bLocal_1148, true);
			}
			break;
		
		case 0x00000006:
			if (((Function_240(&iLocal_1182) <= 17.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[0])) || !IS_ACTOR_ALIVE(&iLocal_4 + 720[12])) || Function_321(&iLocal_4 + 840) >= 0)
			{
				TASK_CLEAR(&bLocal_1148);
				Function_419(StackVal, StackVal, &bLocal_1148, *(&iLocal_4 + 3520[13]), 1, 2, -1.0f, 1, 0, 1, 0);
				Function_440(&bLocal_1148, &iLocal_4 + 776);
				Function_440(&bLocal_1148, &iLocal_4 + 840);
				if (IS_ACTOR_ALIVE(&iLocal_4 + 720[02]))
				{
					TASK_CLEAR(&iLocal_4 + 720[02]);
					Function_419(StackVal, StackVal, &iLocal_4 + 720[02], *(&iLocal_4 + 3088[33]), 1, 2, -1.0f, 1, 0, 1, 0);
				}
				iLocal_1526 = 7;
				Function_245(&iLocal_1182);
				Function_245(&iLocal_1170);
			}
			break;
		
		case 0x00000007:
			Function_416(0);
			if (Function_240(&iLocal_1182) <= 60.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[3]))
			{
				TASK_CLEAR(&bLocal_1148);
				Function_419(StackVal, StackVal, &bLocal_1148, *(&iLocal_4 + 3520[33]), 1, 2, -1.0f, 1, 0, 1, 0);
				Function_440(&bLocal_1148, &iLocal_4 + 776);
				Function_440(&bLocal_1148, &iLocal_4 + 840);
				Function_440(&bLocal_1148, &iLocal_4 + 888);
				if (IS_ACTOR_ALIVE(&iLocal_4 + 720[02]))
				{
					TASK_CLEAR(&iLocal_4 + 720[02]);
					Function_419(StackVal, StackVal, &iLocal_4 + 720[02], *(&iLocal_4 + 3088[43]), 1, 2, -1.0f, 1, 0, 1, 0);
				}
				if (IS_ACTOR_ALIVE(&iLocal_4 + 720[22]))
				{
					TASK_CLEAR(&iLocal_4 + 720[22]);
					TASK_KILL_CHAR(&iLocal_4 + 720[22], &bLocal_1148);
				}
				iLocal_1526 = 8;
				Function_245(&iLocal_1182);
			}
			break;
		
		case 0x00000008:
			Function_416(0);
			if ((((Function_321(&iLocal_4 + 840) >= 0 && Function_321(&iLocal_4 + 888) >= 0) && Function_321(&iLocal_4 + 936) >= 0) && Function_321(&iLocal_4 + 776) >= 0) && iLocal_1462[1])
			{
				Function_254();
				Function_439();
				iLocal_1526 = 9;
				Function_245(&iLocal_1182);
				Function_269(&uLocal_1516, 20, 0, 4294967295, 4294967295);
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[1]))
			{
				Function_254();
				Function_438();
				iLocal_1526 = 9;
				Function_245(&iLocal_1182);
				Function_269(&uLocal_1516, 20, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000009:
			Function_416(1);
			TASK_CLEAR(&bLocal_1148);
			SET_ACTOR_FACE_STYLE(&bLocal_1148, 0);
			bLocal_1223 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4088, 2, 1, 0, 1, 0);
			TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2944[7], 1.0f, 2, 1, 1);
			TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2944[8], 1.0f, 2, 1, 1);
			TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2944[9], 1.0f, 2, 1, 1);
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 2688[0], 2, 0, 1);
			TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
			TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
			TASK_PRIORITY_SET(&bLocal_1148, true);
			iLocal_1526 = 10;
			Function_245(&iLocal_1182);
			break;
	}
	return;
}

void Function_438() //Position: 0x16154 / 90452
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_NoFollowToCar", "FBI05_NoFollowToCar", 0, 2, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x161A3 / 90531
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_AllEnemyDefeatedCar", "FBI05_AllEnemyDefeatedCar", 0, 2, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440(bool bParam0, int iParam1) //Position: 0x161FE / 90622
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_REPORT_POSITION_AUTO(&bParam0, &uVar1, 1);
		}
		bVar0++;
	}
	return;
}

void Function_441(var uParam0, var uParam1, bool bParam2) //Position: 0x1623B / 90683
{
	if (IS_VOLUME_VALID(&uParam0))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &uParam0))
		{
			if (Function_444(&uParam1, 0, 1, 0, 0, 0, 0, 0, 0))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
				DESTROY_VOLUME(&uParam0);
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 1);
				iLocal_1526 = bParam2;
				Function_443(bParam2);
			}
		}
	}
	else if (!Function_444(&uParam1, 0, 1, 0, 0, 0, 0, 0, 0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 1);
		iLocal_1526 = bParam2;
		Function_443(bParam2);
	}
	return;
}

void Function_442() //Position: 0x162B1 / 90801
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_AllEnemysOnBoatKille", "FBI05_AllEnemysOnBoatKille", 0, 2, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443(bool bParam0) //Position: 0x1630E / 90894
{
	switch (bParam0)
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
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

bool Function_444(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x16354 / 90964
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_447(&bVar0, 1);
	}
	if (&bParam2)
	{
		Function_447(&bVar0, 2);
	}
	if (&bParam3)
	{
		Function_447(&bVar0, 4);
	}
	if (&bParam4)
	{
		Function_447(&bVar0, 8);
	}
	if (&bParam5)
	{
		Function_447(&bVar0, 1024);
	}
	if (&bParam7)
	{
		Function_447(&bVar0, 16);
	}
	if (&bParam8)
	{
		Function_447(&bVar0, 32);
	}
	if (&bParam6)
	{
		Function_447(&bVar0, 1048576);
	}
	return Function_445(&uParam0, bVar0);
}

int Function_445(int iParam0, int iParam1) //Position: 0x163CB / 91083
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_446(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_446(&iParam1, 64))
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

bool Function_446(var uParam0, int iParam1) //Position: 0x164B9 / 91321
{
	return (uParam0 && iParam1) == 0;
}

void Function_447(bool bParam0, bool bParam1) //Position: 0x164C6 / 91334
{
	Function_77(&bParam0, bParam1);
	return;
}

void Function_448() //Position: 0x164D4 / 91348
{
	switch (iLocal_1517)
	{
		case 0x00000000:
			Function_269(&uLocal_1516, 36, 0, 4294967295, 4294967295);
			if (Function_451(&iLocal_4 + 672) >= 0 || !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[3]))
			{
				iLocal_1517 = 1;
				iLocal_1518 = 0;
			}
			else if (Function_449(&iLocal_4 + 776) || Function_449(&iLocal_4 + 840))
			{
				iLocal_1517 = 4;
				iLocal_1518 = 0;
			}
			break;
		
		case 0x00000001:
			Function_269(&uLocal_1516, 7, 0, 4294967295, 4294967295);
			if (Function_449(&iLocal_4 + 712))
			{
				iLocal_1517 = 2;
				iLocal_1518 = 1;
			}
			else if (Function_449(&iLocal_4 + 776) || Function_449(&iLocal_4 + 840))
			{
				iLocal_1517 = 4;
				iLocal_1518 = 1;
			}
			break;
		
		case 0x00000002:
			Function_269(&uLocal_1516, 36, 0, 4294967295, 4294967295);
			if (Function_451(&iLocal_4 + 712) < 0)
			{
				iLocal_1517 = 3;
				iLocal_1518 = 2;
			}
			else if (Function_449(&iLocal_4 + 776) || Function_449(&iLocal_4 + 840))
			{
				iLocal_1517 = 4;
				iLocal_1518 = 2;
			}
			else if (!Function_449(&iLocal_4 + 712))
			{
				iLocal_1517 = 1;
			}
			break;
		
		case 0x00000003:
			Function_269(&uLocal_1516, 7, 0, 4294967295, 4294967295);
			if (Function_449(&iLocal_4 + 776) || Function_449(&iLocal_4 + 840))
			{
				iLocal_1517 = 4;
				iLocal_1518 = 3;
			}
			break;
		
		case 0x00000004:
			Function_269(&uLocal_1516, 35, 0, 4294967295, 4294967295);
			if (Function_451(&iLocal_4 + 776) >= 0 && Function_451(&iLocal_4 + 840) >= 0)
			{
				iLocal_1517 = 5;
			}
			else if (!Function_449(&iLocal_4 + 776) && !Function_449(&iLocal_4 + 840))
			{
				if (iLocal_1518 <= 3)
				{
					iLocal_1517 = iLocal_1518;
				}
			}
			break;
		
		case 0x00000005:
			Function_269(&uLocal_1516, 20, 0, 4294967295, 4294967295);
			if (Function_449(&iLocal_4 + 888) || Function_449(&iLocal_4 + 936))
			{
				iLocal_1517 = 6;
			}
			break;
		
		case 0x00000006:
			Function_269(&uLocal_1516, 35, 0, 4294967295, 4294967295);
			if (Function_451(&iLocal_4 + 888) >= 0 && Function_451(&iLocal_4 + 936) >= 0)
			{
				iLocal_1517 = 7;
			}
			break;
		
		case 0x00000007:
			Function_269(&uLocal_1516, 20, 0, 4294967295, 4294967295);
			if (Function_449(&iLocal_4 + 888) || Function_449(&iLocal_4 + 936))
			{
				iLocal_1517 = 6;
			}
			break;
	}
	return;
}

bool Function_449(int iParam0) //Position: 0x166FE / 91902
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (Function_450(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_450(int iParam0) //Position: 0x1673A / 91962
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_417(&iParam0, 0x3f800000, 0x42960000, 1, 1, 0) || IS_ACTOR_SHOOTING(&iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_451(int iParam0) //Position: 0x16772 / 92018
{
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	return SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam0);
}

bool Function_452() //Position: 0x1678A / 92042
{
	if (Function_458())
	{
		Function_454();
		Function_453();
		if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
		{
			SET_WEAPONENUM_LOCKED(2, 0);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 0, 1);
			_ADD_AMMO_OF_TYPE(&Global_54076, 6, 80.0f, 1, 0);
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 0, 1);
			_ADD_AMMO_OF_TYPE(&Global_54076, 6, 80.0f, 1, 0);
		}
		Function_388(&bLocal_1150);
		MEMORY_ALLOW_SHOOTING(&bLocal_1148, true);
		return 1;
	}
	return 0;
}

void Function_453() //Position: 0x167F6 / 92150
{
	var uVar0;
	
	Function_258(&iLocal_4 + 616[02], &iLocal_4 + 2904[0], 1, 1, 1);
	Function_264(&iLocal_4 + 2904[0]);
	Local_1253 = Function_264(&iLocal_4 + 2904[0]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&Local_1253, 2,5f, GET_OBJECT_HEADING(&iLocal_4 + 2904[0]), 90.0f, 7);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_4 + 616[02], &uVar0, -1.0f, 1086324736);
	TASK_PRIORITY_SET(&iLocal_4 + 616[02], true);
	Function_258(&iLocal_4 + 616[12], &iLocal_4 + 2904[1], 1, 1, 1);
	Function_264(&iLocal_4 + 2904[1]);
	Local_1253 = Function_264(&iLocal_4 + 2904[1]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_4 + 616[12], &Local_1253, GET_OBJECT_HEADING(&iLocal_4 + 2904[1]), -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 616[12], true);
	Function_258(&iLocal_4 + 616[22], &iLocal_4 + 2904[2], 1, 1, 1);
	Function_264(&iLocal_4 + 2904[2]);
	Local_1253 = Function_264(&iLocal_4 + 2904[2]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_4 + 616[22], &Local_1253, GET_OBJECT_HEADING(&iLocal_4 + 2904[2]), -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 616[22], true);
	return;
}

void Function_454() //Position: 0x16908 / 92424
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 672))
	{
		Function_457();
		Function_456(&iLocal_4 + 672, 0);
		Function_353(&iLocal_4 + 672, 0);
		Function_352(&iLocal_4 + 672, 1);
		Function_350(&iLocal_4 + 672, 45.0f, 1,5f, 0,1f);
		Function_319(&iLocal_4 + 672, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_455(&iLocal_4 + 672, 0);
	}
	MEMORY_CONSIDER_AS(&iLocal_4 + 616[12], &bLocal_1148, 2);
	MEMORY_CONSIDER_AS(&iLocal_4 + 616[22], &bLocal_1148, 2);
	return;
}

void Function_455(var uParam0, bool bParam1) //Position: 0x1699C / 92572
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
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar1, bParam1);
		bVar0++;
	}
	return;
}

void Function_456(var uParam0, bool bParam1) //Position: 0x169D9 / 92633
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
				MEMORY_ALLOW_SHOOTING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_457() //Position: 0x16A28 / 92712
{
	*(&iLocal_4 + 672) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 616[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 476, Vector(376,2169f, 76,21661f, 2002,05f), Vector(0.0f, 47,27765f, 0.0f));
	Function_356(&iLocal_4 + 616[02], &iLocal_4 + 672, 0);
	TASK_STAND_STILL(&iLocal_4 + 616[02], -1.0f, 0, 0);
	*(&iLocal_4 + 616[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 471, Vector(378,0813f, 74,56078f, 2003,699f), Vector(0,01527617f, 47,46367f, 0,01125623f));
	Function_356(&iLocal_4 + 616[12], &iLocal_4 + 672, 0);
	TASK_STAND_STILL(&iLocal_4 + 616[12], -1.0f, 0, 0);
	*(&iLocal_4 + 616[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 472, Vector(378,928f, 73,27663f, 2004,546f), Vector(0,0167746f, 51,99961f, 0,0132185f));
	Function_356(&iLocal_4 + 616[22], &iLocal_4 + 672, 0);
	TASK_STAND_STILL(&iLocal_4 + 616[22], -1.0f, 0, 0);
	return;
}

bool Function_458() //Position: 0x16B3D / 92989
{
	var uVar0;
	
	switch (iLocal_1552)
	{
		case 0x00000000:
			if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1150, 1))
			{
				Function_258(&Global_54076, &iLocal_4 + 1888[4], 1, 1, 1);
				DECOR_SET_BOOL(&bLocal_1150, "Carry_Nastas", 1);
				Function_245(&iLocal_1553);
				iLocal_1552 = 1;
				return 0;
			}
			break;
		
		case 0x00000001:
			HOGTIE_ACTOR(&bLocal_1150);
			Function_245(&iLocal_1553);
			iLocal_1552 = 2;
			return 0;
			break;
		
		case 0x00000002:
			Function_268(&bLocal_1150);
			uVar0 = Function_268(&bLocal_1150);
			if (IS_GRINGO_VALID(LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,2f, 0)) && IS_ACTOR_HOGTIED(&bLocal_1150))
			{
				if (HAS_ANIM_SET_LOADED("gent_hog") || Function_240(&iLocal_1553) <= 7.0f)
				{
					if (Function_240(&iLocal_1553) <= 1.0f)
					{
						Function_459(&bLocal_1150, &Global_54076);
						iLocal_1552 = 3;
					}
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			Function_268(&Global_54076);
			Local_1253 = Function_268(&Global_54076);
			GRINGO_SET_AVAILABILITY_EXT(LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &Local_1253, 2.0f, 1), "nDrop_Body", 0);
			SET_ALLOW_MELEE_SPECIAL_MOVE(&Global_54076, 0);
			SET_ALLOW_MELEE_SPECIAL_MOVE(&bLocal_1150, 0);
			DELETE_ACCESSORY("WRIST_BIND", &bLocal_1150);
			DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1150);
			bLocal_1496 = true;
			iLocal_1552 = 4;
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

void Function_459(int iParam0, var uParam1) //Position: 0x16CAD / 93357
{
	var uVar0;
	var uVar2;
	
	Function_268(&iParam0);
	uVar0 = Function_268(&iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,2f, 1);
	GRINGO_UPDATE_OBJECT_REF(&uVar2, "GlobalSettings", "Owner", &uParam1);
	GRINGO_UPDATE_INT(&uVar2, "GlobalSettings", "CurrentState", 1);
	MAKE_ACTOR_READY_FOR_ACTION(&uParam1, 1);
	SET_ANIM_SET_FOR_ACTOR(&uParam1, "gent_hog", 0);
	SET_ACTION_NODE_FOR_ACTOR(&uParam1, "default_character_main/lassoed/carry_hogtied/carry/carrying/carrying_stn");
	SET_LINKED_ANIM_TARGET(&uParam1, &iParam0);
	SET_INTENDED_HOGTIE_MASTER(GET_HOGTIED_MASTER(&iParam0), &uParam1);
	ATTACH_HOGTIE_ACTOR_TO_ACTOR(&iParam0, &uParam1);
	SET_ACTOR_GRINGO_RESTRICTION(&uParam1, &uVar2);
	return;
}

void Function_460() //Position: 0x16DC8 / 93640
{
	Function_461();
	Function_319(&iLocal_4 + 840, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_352(&iLocal_4 + 840, 1);
	Function_350(&iLocal_4 + 840, 25.0f, 2,5f, 0,5f);
	Function_420(&iLocal_4 + 840, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 784[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 784[12], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 784[22], 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 784[02], *(&iLocal_4 + 3272[03]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 784[12], *(&iLocal_4 + 3272[13]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 784[22], *(&iLocal_4 + 3272[23]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 840, 0);
	return;
}

void Function_461() //Position: 0x16EB2 / 93874
{
	*(&iLocal_4 + 840) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 784[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 469, Vector(333,5726f, 74,59541f, 1940,94f), Vector(-5,190157f, -112,5166f, -1,143134f));
	Function_356(&iLocal_4 + 784[02], &iLocal_4 + 840, 1);
	*(&iLocal_4 + 784[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 467, Vector(332,7298f, 74,59519f, 1941,54f), Vector(179,9799f, -59,01641f, -179,9828f));
	Function_356(&iLocal_4 + 784[12], &iLocal_4 + 840, 1);
	*(&iLocal_4 + 784[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 471, Vector(334,4574f, 74,59512f, 1941,919f), Vector(179,9799f, -59,01641f, -179,9828f));
	Function_356(&iLocal_4 + 784[22], &iLocal_4 + 840, 1);
	return;
}

void Function_462() //Position: 0x16FA2 / 94114
{
	Function_463();
	Function_319(&iLocal_4 + 776, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_352(&iLocal_4 + 776, 1);
	Function_350(&iLocal_4 + 776, 45.0f, 1,5f, 0,1f);
	Function_420(&iLocal_4 + 776, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 720[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 720[12], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 720[22], 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 720[02], *(&iLocal_4 + 3088[03]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 720[12], *(&iLocal_4 + 3088[13]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_419(StackVal, StackVal, &iLocal_4 + 720[22], *(&iLocal_4 + 3088[23]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 776, 0);
	return;
}

void Function_463() //Position: 0x1708C / 94348
{
	*(&iLocal_4 + 776) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 720[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 475, Vector(371,9979f, 73,48914f, 1937,554f), Vector(175,8898f, 134,7409f, 175,0229f));
	Function_356(&iLocal_4 + 720[02], &iLocal_4 + 776, 1);
	*(&iLocal_4 + 720[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 470, Vector(372,4517f, 73,49878f, 1936,651f), Vector(0,02391203f, 64,4119f, 0,02156679f));
	Function_356(&iLocal_4 + 720[12], &iLocal_4 + 776, 1);
	*(&iLocal_4 + 720[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 468, Vector(380,7206f, 73,31953f, 1919,853f), Vector(179,9804f, 58,20943f, 179,9833f));
	Function_356(&iLocal_4 + 720[22], &iLocal_4 + 776, 1);
	return;
}

int Function_464() //Position: 0x1717C / 94588
{
	Function_453();
	iLocal_1502 = 1;
	return 1;
}

int Function_465() //Position: 0x1718A / 94602
{
	if (Function_466())
	{
		Function_253(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
		return 1;
	}
	return 0;
}

bool Function_466() //Position: 0x171A7 / 94631
{
	if (iLocal_1502)
	{
		if (Function_458())
		{
			return 1;
		}
	}
	switch (iLocal_1504)
	{
		case 0x00000000:
			Function_458();
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			if (IS_OBJECT_VALID(&iLocal_1129 + 24))
			{
				DESTROY_OBJECT(&iLocal_1129 + 24);
			}
			*(&iLocal_1129 + 24) = Function_468(&iLocal_4, 0, 1, 0, 0);
			Function_467();
			AI_ACTOR_FORCE_SPEED(&iLocal_4 + 616[02], 4);
			AI_ACTOR_FORCE_SPEED(&iLocal_4 + 616[12], 4);
			iLocal_1504 = 7;
			Function_245(&iLocal_1170);
			return 0;
			break;
		
		case 0x00000007:
			Function_458();
			if (!iLocal_1510[1])
			{
				if (!iLocal_1510[0])
				{
					if (Function_240(&iLocal_1170) <= 0,5f)
					{
						SAY_SINGLE_LINE_STRING(&iLocal_4 + 616[02], "FIGHT_EXPLETIVE", true, true, 3, 0, true, false);
						iLocal_1510[0] = 1;
					}
				}
				else if (Function_240(&iLocal_1170) <= 0,7f)
				{
					SAY_SINGLE_LINE_STRING(&iLocal_4 + 616[12], "FIGHT_EXPLETIVE", false, false, 2, 0, true, false);
					iLocal_1510[1] = 1;
				}
			}
			if (Function_240(&iLocal_1170) <= 2,5f)
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				if (IS_OBJECT_VALID(&iLocal_1129 + 24))
				{
					DESTROY_OBJECT(&iLocal_1129 + 24);
				}
				iLocal_1504 = 106;
				Function_245(&iLocal_1170);
				return 1;
			}
			break;
		
		case 0x0000006A:
			return 1;
			break;
	}
	return 0;
}

void Function_467() //Position: 0x17308 / 94984
{
	var uVar0;
	
	Function_264(&iLocal_4 + 2904[0]);
	Local_1253 = Function_264(&iLocal_4 + 2904[0]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&Local_1253, 2,5f, GET_OBJECT_HEADING(&iLocal_4 + 2904[0]), 90.0f, 7);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3984, 2, 1, 0, 1, 0);
	TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar0, -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 616[02]);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 616[02], bLocal_1223);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 616[02], 0,25f);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	Function_264(&iLocal_4 + 2904[1]);
	Local_1253 = Function_264(&iLocal_4 + 2904[1]);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&Local_1253, 2,5f, GET_OBJECT_HEADING(&iLocal_4 + 2904[1]), 90.0f, 7);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3984, 2, 1, 0, 1, 0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_1253, GET_OBJECT_HEADING(&iLocal_4 + 2904[1]), -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 616[12]);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 616[12], bLocal_1223);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 616[12], 0,25f);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 2,5f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3992, 2, 1, 0, 1, 0);
	Function_264(&iLocal_4 + 2904[2]);
	Local_1253 = Function_264(&iLocal_4 + 2904[2]);
	TASK_SHOOT_ENEMIES_FROM_COVER(0, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_4 + 3912), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 616[22]);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 616[22], bLocal_1223);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 616[22], 0,25f);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	return;
}

var Function_468(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1749E / 95390
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "FBI05_AmbushOutro", 2, 1);
	}
	Function_469(&uVar0);
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

void Function_469(int iParam0) //Position: 0x17529 / 95529
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_471(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_470(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 0, 1, 2,5f, 0, 0);
	return;
}

void Function_470(int iParam0) //Position: 0x17568 / 95592
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(368,4387f, 78,23247f, 2003,596f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,100339f, -1,49528f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_471(var uParam0) //Position: 0x175DD / 95709
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(369,9613f, 78,08808f, 2004,713f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,100339f, -1,49528f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

int Function_472() //Position: 0x17652 / 95826
{
	return 1;
}

int Function_473() //Position: 0x17659 / 95833
{
	Function_264(&iLocal_4 + 2736[2]);
	Function_474(StackVal, "chair", Function_264(&iLocal_4 + 2736[2]));
	iLocal_1489 = 1;
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	return 1;
}

int Function_474(var uParam0, struct<2> Param1) //Position: 0x17681 / 95873
{
	var uVar0;
	
	uVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 10.0f, &uParam0, 1));
	if (IS_OBJECT_VALID(&uVar0))
	{
		HIDE_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 2.0f, &uParam0, 1));
		return 1;
	}
	PRINTSTRING("Could not remove ");
	PRINTSTRING(&uParam0);
	PRINTNL();
	return 0;
}

int Function_475() //Position: 0x176DB / 95963
{
	bool bVar0;
	
	Function_265(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_1049, "tempcutscenevol", 2,802597E-45f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_454();
	Function_262(StackVal, &uLocal_1049, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_476() //Position: 0x17744 / 96068
{
	Function_372(iLocal_1141);
	Function_363(StackVal, Function_372(iLocal_1141), iLocal_1141, Global_46754[0], Function_371(iLocal_1141), 0);
	if (IS_ACTOR_VALID(&bLocal_1150))
	{
		SET_ACTOR_MAX_HEALTH(&bLocal_1150, 300.0f);
	}
	Function_388(&bLocal_1146);
	Function_388(&bLocal_1148);
	Function_388(&bLocal_1150);
	ACTOR_RESET_ANIMS(&bLocal_1148, 1);
	SET_MOVER_FROZEN(&bLocal_1148, 0);
	bLocal_1225 = Function_348();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_1225);
	PRINTNL();
	return;
}

int Function_477() //Position: 0x177CB / 96203
{
	if (!iLocal_1503)
	{
		Function_466();
		AI_QUICK_EXIT_GRINGO(&bLocal_1150, 1);
		DESTROY_OBJECT(&iLocal_4 + 3816);
		TASK_CLEAR(&bLocal_1150);
		if (iLocal_1489)
		{
			Function_264(&iLocal_4 + 2736[2]);
			Function_478(StackVal, "chair", Function_264(&iLocal_4 + 2736[2]));
		}
		Function_256(&iLocal_4 + 2736[0]);
		Function_258(&Global_54076, &iLocal_4 + 1888[4], 1, 1, 0);
		Function_258(&bLocal_1148, &iLocal_4 + 1888[6], 1, 1, 1);
		TASK_CLEAR(&bLocal_1148);
		MEMORY_ALLOW_SHOOTING(&bLocal_1148, false);
		TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1148, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_4 + 3904), -1.0f, 1086324736);
		Function_467();
		SET_PLAYER_POSTURE(0, 0, 0);
		if (!IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_289(&iLocal_4 + 2008[2]);
		}
		else
		{
			Function_258(&bLocal_1152, &iLocal_4 + 2008[2], 1, 1, 1);
		}
		TASK_CLEAR(&bLocal_1146);
		MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1146, 1);
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1146, 0);
		SNAP_ACTOR_TO_GRINGO(&bLocal_1146, &iLocal_4 + 3808, "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&bLocal_1146, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3808), "USeCase1", 4294967295, 1);
		DECOR_SET_BOOL(&iLocal_4 + 3808, "ForceAllowRain", 1);
		TASK_PRIORITY_SET(&bLocal_1146, true);
		DECOR_SET_BOOL(&Global_54076, "Player_DisablePutOnHorse", 1);
		ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 4, 1);
		ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 6, 1);
		ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 1);
		iLocal_1503 = 1;
	}
	iLocal_1241 = 1;
	return 1;
}

int Function_478(var uParam0, struct<2> Param1) //Position: 0x1795C / 96604
{
	var uVar0;
	
	uVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 10.0f, &uParam0, 1));
	if (IS_OBJECT_VALID(&uVar0))
	{
		SHOW_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 10.0f, &uParam0, 1));
		return 1;
	}
	PRINTSTRING("Could not remove ");
	PRINTSTRING(&uParam0);
	PRINTNL();
	return 0;
}

void Function_479() //Position: 0x179BA / 96698
{
	DECOR_SET_BOOL(&Global_54076, "corpse_loot_gringo", 0);
	Function_258(&Global_54076, &iLocal_4 + 1888[4], 1, 1, 1);
	Function_258(&bLocal_1148, &iLocal_4 + 1888[1], 1, 1, 1);
	Function_258(&bLocal_1146, &iLocal_4 + 1960[3], 1, 1, 1);
	if (!IS_ACTOR_VALID(&bLocal_1150))
	{
		Function_376(1);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1148, 0);
	TASK_STAND_STILL(&bLocal_1146, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1148);
	Function_288(&bLocal_1152, 4);
	TASK_CLEAR(&bLocal_1146);
	MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1146, 1);
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1146, 0);
	return;
}

int Function_480() //Position: 0x17A79 / 96889
{
	Function_386(&iLocal_4 + 320, 475, 2, 0);
	Function_386(&iLocal_4 + 320, 468, 2, 0);
	Function_386(&iLocal_4 + 320, 469, 2, 0);
	Function_386(&iLocal_4 + 320, 467, 2, 0);
	Function_386(&iLocal_4 + 320, 474, 2, 0);
	if (Function_381(&iLocal_4 + 320))
	{
		return 1;
	}
	return 0;
}

void Function_481() //Position: 0x17AD3 / 96979
{
	if (Function_602())
	{
		Function_264(&iLocal_4 + 2008[2]);
		Function_390(StackVal, "$/cutscene/FBI_05_CS04/FBI_05_CS04", &uLocal_1460, Function_264(&iLocal_4 + 2008[2]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	if (Function_242(&iLocal_1186))
	{
		if (Function_240(&iLocal_1186) <= 1,6f || Function_485(&iLocal_4 + 672, &Global_54076))
		{
			Function_456(&iLocal_4 + 672, 1);
			Function_484(&iLocal_1186);
		}
	}
	if (!iLocal_1520)
	{
		if (Function_482(&bLocal_1148, &iLocal_4 + 2688[0], 10.0f))
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1148, 1);
			iLocal_1520 = 1;
		}
	}
	return;
}

bool Function_482(bool bParam0, var uParam1, float fParam2) //Position: 0x17B89 / 97161
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_318(&bParam0);
			Function_483(&uParam1);
			if (VDIST(Function_318(&bParam0), Function_483(&uParam1)) >= fParam2)
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

struct<8> Function_483(int iParam0) //Position: 0x17CA7 / 97447
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

void Function_484(vector3 vParam0) //Position: 0x17D15 / 97557
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_485(var uParam0, int iParam1) //Position: 0x17D2C / 97580
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
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

void Function_486() //Position: 0x17D9E / 97694
{
	Function_504();
	switch (bLocal_1142)
	{
		case 0x00000000:
			Function_279(0);
			Function_277(9);
			Function_388(&bLocal_1150);
			Function_388(&bLocal_1148);
			HUD_ENABLE(1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_167(81920);
			if (IS_ACTOR_VALID(&bLocal_1146))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1146);
			}
			if (IS_ACTOR_VALID(&bLocal_1148))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1148);
			}
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[6]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[7]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[8]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[9]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[10]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1148, &iLocal_4 + 1712[11]);
			SET_ACTOR_VOLUME_PARAMETERS(&bLocal_1148, 1, 1);
			iLocal_1521 = 1;
			if (iLocal_1226[0] == 0)
			{
				Function_250(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				if (IS_VEHICLE_CINEMATIC_CAMERA_FORCED_ON())
				{
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
					HUD_ENABLE(1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				CLEAR_AMBIENT_OBJECTS_VOLUME(&Global_44085[Global_46914[3]9] + 8, 15);
				Function_503();
				iLocal_1143 = Global_46754[0];
				if (!Function_276(iLocal_1143))
				{
					Function_275(&Local_1051);
				}
				Function_274(1);
			}
			else
			{
				Function_274(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_276(iLocal_1143) || iLocal_1143 != 4294967295))
			{
				if (Function_240(&iLocal_1170) <= 1,5f)
				{
					Function_274(2);
				}
			}
			break;
		
		case 0x00000002:
			Function_237(1.0f);
			Function_502();
			Function_501();
			Function_480();
			Function_274(6);
			iLocal_1521 = 0;
			break;
		
		case 0x00000006:
			if (Function_491())
			{
				if (IS_ACTOR_VALID(&bLocal_1146))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1146);
				}
				if (IS_ACTOR_VALID(&bLocal_1148))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1148);
				}
				Function_274(7);
			}
			break;
		
		case 0x00000007:
			Function_397(0, 0);
			if (Function_488())
			{
				Function_274(106);
			}
			break;
		
		case 0x0000006A:
			Function_487();
			iLocal_1226[1] = 1;
			iLocal_1141 = 2;
			Function_274(0);
			break;
	}
	return;
}

void Function_487() //Position: 0x17F8B / 98187
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1148);
	return;
}

bool Function_488() //Position: 0x17F98 / 98200
{
	Function_264(&iLocal_4 + 1888[4]);
	Function_390(StackVal, "$/cutscene/FBI_05_CS03/FBI_05_CS03", &uLocal_1460, Function_264(&iLocal_4 + 1888[4]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	if (IS_VOLUME_VALID(&iLocal_4 + 1528[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[5]))
		{
			if (!IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1712[0]))
			{
				Function_258(&bLocal_1148, &iLocal_4 + 2736[1], 1, 1, 1);
				TASK_CLEAR(&bLocal_1148);
				ACTOR_RESET_ANIMS(&bLocal_1148, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1148, "FBI05_gaurd_companion", 1);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1148, "FBI05_gaurd_companion/pre");
				DESTROY_VOLUME(&iLocal_4 + 1528[5]);
			}
		}
	}
	if (bLocal_1461)
	{
		if (!Function_242(&iLocal_1483))
		{
			Function_398(&iLocal_1483);
		}
		else if (Function_313(&Global_54076, &bLocal_1148, 25.0f) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[9]))
		{
			if (iLocal_1507)
			{
				iLocal_1507 = 0;
				Function_245(&iLocal_1483);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1528[5]))
			{
				if (!iLocal_1509)
				{
					if (Function_240(&iLocal_1483) <= 10.0f)
					{
						Function_490();
						Function_245(&iLocal_1483);
						iLocal_1509 = 1;
					}
				}
			}
		}
		else if (!iLocal_1507)
		{
			if (Function_240(&iLocal_1483) <= 10.0f)
			{
				Function_489();
				Function_245(&iLocal_1483);
				iLocal_1507 = 1;
			}
		}
	}
	Function_268(&bLocal_1150);
	Local_1253 = Function_268(&bLocal_1150);
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[1]))
	{
		Function_256(&iLocal_4 + 2736[0]);
		return 1;
	}
	return 0;
}

void Function_489() //Position: 0x18165 / 98661
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_JonRunsAwayBoat", "FBI05_JonRunsAwayBoat", 0, 2, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x181B8 / 98744
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_JonLoitering", "FBI05_JonLoitering", 0, 1, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_491() //Position: 0x18205 / 98821
{
	bool bVar0;
	var uVar1;
	
	if (iLocal_1525 <= 6)
	{
		Function_329(&iLocal_1174, 30.0f, 65.0f, &bLocal_1148, "FBI_Fordham_return", "FBI_Fordham_abandoned", &bLocal_1239, 0, 0, 0, 325, 1);
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1448[7]))
	{
		if (Function_575())
		{
			Function_576("FBI05_carFail");
			Function_617(iLocal_1141);
			Function_613(StackVal, 5, &bLocal_1239, &iLocal_1141, Function_618(iLocal_1141), Function_617(iLocal_1141), 0);
			return 1;
		}
	}
	if (!iLocal_1256)
	{
		if (Function_393(StackVal, &Global_54076, Vector(351,89f, 74,59f, 1963,09f), 200.0f))
		{
			Function_167(1);
			uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_1049, Function_54(), 2,802597E-45f, Vector(351,89f, 74,59f, 1963,09f), Vector(0.0f, 0.0f, 0.0f), Vector(150.0f, 150.0f, 150.0f));
			CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar1, 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar1);
			iLocal_1256 = 1;
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1448[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1448[5]))
		{
			Function_500();
			DESTROY_VOLUME(&iLocal_4 + 1448[5]);
		}
	}
	else if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1712[1]))
	{
		if (!bLocal_1445)
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1148, 0);
			bLocal_1223 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(&bLocal_1148, 1);
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 2944[0], 1, 1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
			TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
			TASK_PRIORITY_SET(&bLocal_1148, true);
			Function_499();
			bLocal_1445 = true;
		}
	}
	if (iLocal_1525 < 0 && iLocal_1525 > 4)
	{
		Function_498();
	}
	if ((IS_ACTOR_RIDING_VEHICLE(&Global_54076) || Function_314(&bLocal_1146, &Global_54076) >= 3.0f) && iLocal_1525 <= 1)
	{
		Function_496();
	}
	if (bLocal_1445)
	{
		if (Function_313(&Global_54076, &bLocal_1146, 15.0f))
		{
			if (!iLocal_1487)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ReturnsNoNastas", "FBI05_ReturnsNoNastas", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
				iLocal_1487 = 1;
			}
		}
	}
	Function_495();
	switch (iLocal_1525)
	{
		case 0x00000000:
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 1,5f, 0, 0);
			TASK_VEHICLE_LEAVE(0);
			TASK_GO_TO_OBJECT(0, &iLocal_4 + 2944[0], 1, 1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 1);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bLocal_1148, 1);
			Function_494();
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1148)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1148, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1148), "FBI05_FordhamBlip");
			}
			Function_211(&bLocal_1146);
			Function_255(10, 0, 1);
			Function_211(&bLocal_1152);
			iLocal_1242 = 0;
			Function_484(&iLocal_1174);
			Function_245(&iLocal_1170);
			iLocal_1525 = 1;
			return 0;
			break;
		
		case 0x00000001:
			if (Function_240(&iLocal_1170) <= 5.0f)
			{
				Function_310("FBI05_obj01c", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_245(&iLocal_1170);
				iLocal_1525 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1712[0]))
			{
				Function_254();
				SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(&bLocal_1150, "Nastas_AGONY", 0, 1, 3, 0);
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1148);
				Function_264(&iLocal_4 + 2736[0]);
				Local_1253 = Function_264(&iLocal_4 + 2736[0]);
				FORCE_LOOK_AT_COORD(&bLocal_1148, &Local_1253, 2,5f);
				Function_245(&iLocal_1170);
				iLocal_1525 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Function_240(&iLocal_1170) <= 0,35f)
			{
				if (Function_493())
				{
					Function_245(&iLocal_1170);
					iLocal_1525 = 5;
				}
				else
				{
					Function_211(&bLocal_1148);
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2736[0])))
					{
						Function_269(&uLocal_1516, 3, 0, 4294967295, 4294967295);
						ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2736[0], 330, 0f, 2, 0);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
						SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2736[0]), "FBI05_Investigate_Blip");
					}
					SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(&bLocal_1150, "Nastas_AGONY", 0, 1, 3, 0);
					Function_246(&iLocal_1170, 3.0f);
					iLocal_1525 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_240(&iLocal_1170) <= 1,2f)
			{
				if (Function_313(&Global_54076, &bLocal_1148, 30.0f))
				{
					Function_492();
					bLocal_1461 = true;
				}
				Function_245(&iLocal_1170);
				iLocal_1525 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_240(&iLocal_1170) <= 5.0f)
			{
				Function_254();
				Function_310("FBI05_obj01d", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_211(&bLocal_1148);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2736[0])))
				{
					Function_269(&uLocal_1516, 3, 0, 4294967295, 4294967295);
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2736[0], 330, 0f, 2, 0);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2736[0]), "FBI05_Investigate_Blip");
				}
				iLocal_1525 = 7;
			}
			break;
		
		case 0x00000007:
			if (bLocal_1448)
			{
				if (!bLocal_1461)
				{
					Function_492();
					bLocal_1461 = true;
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_492() //Position: 0x18761 / 100193
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_HeardShouts", "FBI05_HeardShouts", 0, 1, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_493() //Position: 0x187AC / 100268
{
	var uVar0;
	
	if (bLocal_1248)
	{
		Function_264(&iLocal_4 + 2736[0]);
		Local_1253 = Function_264(&iLocal_4 + 2736[0]);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
		bLocal_1223 = TASK_SEQUENCE_OPEN();
		TASK_FACE_COORD(0, &Local_1253, 0);
		TASK_STAND_STILL(false, 1,25f, 0, 0);
		Function_264(&iLocal_4 + 2736[1]);
		Local_1253 = Function_264(&iLocal_4 + 2736[1]);
		TASK_GO_TO_COORD(0, &Local_1253, 2);
		uVar0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), *(&iLocal_4 + 3520[13]), StackVal);
		TASK_FACE_COORD(0, &uVar0, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
		TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
		return 1;
	}
	if (Function_314(&Global_54076, &bLocal_1148) >= 25.0f)
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
		bLocal_1223 = TASK_SEQUENCE_OPEN();
		Function_264(&iLocal_4 + 2736[1]);
		Local_1253 = Function_264(&iLocal_4 + 2736[1]);
		TASK_GO_TO_COORD(0, &Local_1253, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
		TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
		return 1;
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
	bLocal_1223 = TASK_SEQUENCE_OPEN();
	Function_264(&iLocal_4 + 2736[1]);
	Local_1253 = Function_264(&iLocal_4 + 2736[1]);
	TASK_GO_TO_COORD(0, &Local_1253, 4);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
	TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
	return 0;
	return 0;
}

void Function_494() //Position: 0x188C0 / 100544
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_ArriveWrek", "FBI05_ArriveWrek", 0, 1, 1, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x18909 / 100617
{
	var uVar0;
	
	uVar0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), *(&iLocal_4 + 3520[13]), StackVal);
	if (!Function_482(&bLocal_1148, &iLocal_4 + 2736[1], 2.0f) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1624[4]))
	{
		Function_258(&bLocal_1148, &iLocal_4 + 2736[1], 1, 1, 1);
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1528[6]))
	{
		Function_258(&bLocal_1148, &iLocal_4 + 2736[1], 1, 1, 1);
		TASK_CLEAR(&bLocal_1148);
		ACTOR_RESET_ANIMS(&bLocal_1148, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1148, "FBI05_gaurd_companion", 1);
		SET_ACTION_NODE_FOR_ACTOR(&bLocal_1148, "FBI05_gaurd_companion/pre");
		TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
		SET_MOVER_FROZEN(&bLocal_1148, 1);
		bLocal_1448 = true;
	}
	if (!bLocal_1248)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1148, &iLocal_4 + 1712[0]))
		{
			TASK_CLEAR(&bLocal_1148);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
			SET_ACTOR_FACE_STYLE(&bLocal_1148, 0);
			Function_264(&iLocal_4 + 2736[1]);
			Local_1253 = Function_264(&iLocal_4 + 2736[1]);
			bLocal_1223 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &Local_1253, 1);
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_ACTION_PERFORM(0, "wave/forward");
			TASK_FACE_COORD(0, &uVar0, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
			TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
			bLocal_1248 = true;
		}
	}
	if (!bLocal_1448)
	{
		if (Function_482(&bLocal_1148, &iLocal_4 + 2736[1], 1.0f))
		{
			TASK_CLEAR(&bLocal_1148);
			ACTOR_RESET_ANIMS(&bLocal_1148, 0);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1148, "FBI05_gaurd_companion", 1);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_1148, "FBI05_gaurd_companion/pre");
			TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
			SET_MOVER_FROZEN(&bLocal_1148, 1);
			bLocal_1448 = true;
		}
	}
	return;
}

void Function_496() //Position: 0x18AFF / 101119
{
	if (!Function_242(&iLocal_1174))
	{
		Function_497(&iLocal_1174, 0.0f);
	}
	else if (Function_240(&iLocal_1174) <= 12.0f)
	{
		switch (RAND_INT_RANGE(0, true))
		{
			case 0x00000000:
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_RossWaitJonGetOut", "FBI05_RossWaitJonGetOut", 1, 1, 0, 1, 1, 0, 0, 1000, 0, 0);
				break;
			
			case 0x00000001:
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_JonNoFollowWrek", "FBI05_JonNoFollowWrek", 1, 1, 0, 2, 1, 0, 0, 1000, 0, 0);
				break;
		}
		Function_245(&iLocal_1174);
	}
	return;
}

void Function_497(int iParam0, float fParam1) //Position: 0x18BD6 / 101334
{
	if (!Function_242(&iParam0))
	{
		Function_246(&iParam0, fParam1);
	}
	return;
}

void Function_498() //Position: 0x18BEE / 101358
{
	var uVar0;
	var uVar2;
	float fVar4;
	float fVar5;
	var uVar6;
	
	if (bLocal_1248)
	{
		return;
	}
	Function_268(&Global_54076);
	uVar0 = Function_268(&Global_54076);
	Function_268(&bLocal_1148);
	uVar2 = Function_268(&bLocal_1148);
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 3936, &uVar0, &uVar2, &fVar4, &fVar5, &uVar6);
	if ((fVar5 - fVar4) <= 15.0f)
	{
		if (!Function_242(&iLocal_1474))
		{
			Function_497(&iLocal_1474, 15.0f);
		}
		else if (Function_240(&iLocal_1474) <= 15.0f)
		{
			switch (RAND_INT_RANGE(0, 2))
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_2FarBehindWrek", "FBI05_2FarBehindWrek", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000001:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonNoFollowWrek2", "FBI05_JonNoFollowWrek2", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
			}
			Function_245(&iLocal_1474);
		}
		if (!iLocal_1242)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1148, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1148, "wave", 0);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
			bLocal_1223 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_ACTION_PERFORM(0, "wave/forward");
			TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
			TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
			FORCE_LOOK_AT_ACTOR(&bLocal_1148, &Global_54076, 3212836864);
			iLocal_1242 = 1;
		}
	}
	if ((fVar4 - fVar5) <= 15.0f && !iLocal_1242)
	{
		if (!Function_242(&iLocal_1474))
		{
			Function_497(&iLocal_1474, 15.0f);
		}
		else if (Function_240(&iLocal_1474) <= 15.0f)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_2FarAheadWrek", "FBI05_2FarAheadWrek", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
			iLocal_1242 = 1;
			Function_245(&iLocal_1474);
		}
	}
	if (iLocal_1242 && (fVar5 - fVar4) > 10.0f)
	{
		if (Function_240(&iLocal_1474) <= 5.0f)
		{
			Function_245(&iLocal_1474);
		}
		TASK_CLEAR(&bLocal_1148);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
		bLocal_1223 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_OBJECT(0, &iLocal_4 + 2944[0], 1, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1148, bLocal_1223);
		TASK_SEQUENCE_RELEASE(bLocal_1223, 1);
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1148, 1);
		STOP_FORCE_LOOK_AT_COORD(&bLocal_1148);
		iLocal_1242 = 0;
	}
	return;
}

void Function_499() //Position: 0x18E76 / 102006
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AA", "FBI05_WrekWalkBanter_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_WrekWalkBanter_v2_AB", "FBI05_WrekWalkBanter_v2_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AC1", "FBI05_WrekWalkBanter_v2_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AC2", "FBI05_WrekWalkBanter_v2_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_WrekWalkBanter_v2_AD", "FBI05_WrekWalkBanter_v2_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AE", "FBI05_WrekWalkBanter_v2_AE", 0, 1, 0, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x19026 / 102438
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AA", "FBI05_WrekWalkBanter_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_WrekWalkBanter_v1_AB", "FBI05_WrekWalkBanter_v1_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AC1", "FBI05_WrekWalkBanter_v1_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AC2", "FBI05_WrekWalkBanter_v1_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_WrekWalkBanter_v1_AD", "FBI05_WrekWalkBanter_v1_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AE", "FBI05_WrekWalkBanter_v1_AE", 0, 1, 0, 0, 1);
		Function_307(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x191D6 / 102870
{
	Function_372(iLocal_1141);
	Function_363(StackVal, Function_372(iLocal_1141), iLocal_1141, Global_46754[0], Function_371(iLocal_1141), 5);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Global_44085[Global_46914[3]9] + 8, 15);
	SET_ACTOR_MAX_HEALTH(&bLocal_1146, (GET_ACTOR_MAX_HEALTH(&bLocal_1146) * 2.0f));
	SET_ACTOR_MAX_HEALTH(&bLocal_1148, GET_ACTOR_MAX_HEALTH(&bLocal_1146));
	SET_ACTOR_MAX_HEALTH(&bLocal_1150, GET_ACTOR_MAX_HEALTH(&bLocal_1146));
	Function_376(0);
	SNAP_ACTOR_TO_GRINGO(&bLocal_1150, &iLocal_4 + 3816, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&bLocal_1150, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3816), "USeCase1", 4294967295, 1);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 1);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 1);
	Function_388(&bLocal_1146);
	Function_388(&bLocal_1148);
	Function_388(&bLocal_1150);
	bLocal_1225 = Function_348();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_1225);
	PRINTNL();
	Function_269(&uLocal_1516, 1, 0, 4294967295, 4294967295);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_502() //Position: 0x192EB / 103147
{
	TASK_STAND_STILL(&bLocal_1146, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1148);
	Function_288(&bLocal_1152, 4);
	return;
}

void Function_503() //Position: 0x19314 / 103188
{
	Function_167(2);
	Function_167(1);
	Function_167(4);
	Function_258(&Global_54076, &iLocal_4 + 2216[0], 1, 1, 1);
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[1]);
	}
	else
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[1], 1, 1, 1);
	}
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 3, 1);
	ENABLE_VEHICLE_SEAT(&bLocal_1152, 2, 1);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 3);
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	TASK_STAND_STILL(&bLocal_1146, -1.0f, 0, 0);
	TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1148);
	Function_288(&bLocal_1152, 4);
	return;
}

void Function_504() //Position: 0x193E8 / 103400
{
	var uVar0;
	
	Function_505();
	if (!Function_602())
	{
		return;
	}
	Function_264(&iLocal_4 + 2736[2]);
	Local_1253 = Function_264(&iLocal_4 + 2736[2]);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Local_1253, 1.0f, "chair", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		if (IS_PROP_STREAMED_IN(GET_OBJECT_FROM_PHYSINST(&uVar0)))
		{
			if (!IS_PROP_FIXED(&uVar0))
			{
				SET_PROP_FIXED(&uVar0, 1);
			}
		}
	}
	return;
}

void Function_505() //Position: 0x19444 / 103492
{
	if (IS_ACTOR_VALID(&bLocal_1150))
	{
		if (GET_LAST_ATTACKER(&bLocal_1150) == &Global_54076)
		{
			Function_576("FBI05_informAttacked");
			bLocal_1239 = true;
		}
	}
	return;
}

void Function_506() //Position: 0x19480 / 103552
{
	Function_518();
	switch (bLocal_1142)
	{
		case 0x00000000:
			Function_279(0);
			Function_167(1163268);
			Function_277(9);
			Function_192(32);
			iLocal_1521 = 1;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(4);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1320[0], 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1320[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1320[0]);
			iLocal_1143 = Global_46914[0];
			if (Function_247(&Local_1051))
			{
				if (!Function_276(iLocal_1143))
				{
					Function_275(&Local_1051);
				}
			}
			Function_517();
			iLocal_1472 = 1;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (!bLocal_1506)
			{
				Function_274(1);
			}
			else
			{
				Function_274(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_276(iLocal_1143) || iLocal_1143 != 4294967295))
			{
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				Function_516();
				Function_274(2);
			}
			break;
		
		case 0x00000002:
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 3920, 4, 0, 0, 1, 0);
			AI_ACTOR_FORCE_SPEED(&bLocal_1148, 4);
			Function_237(1.0f);
			Function_372(iLocal_1141);
			Function_363(StackVal, Function_372(iLocal_1141), iLocal_1141, Global_46754[0], Function_371(iLocal_1141), 5);
			Function_269(&uLocal_1516, 1, 0, 4294967295, 4294967295);
			Function_274(8);
			iLocal_1521 = 0;
			break;
		
		case 0x00000008:
			if (Function_508())
			{
				Function_245(&iLocal_1170);
				Function_274(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_507();
				iLocal_1226[0] = 1;
				iLocal_1141 = 1;
				Function_274(0);
			}
			break;
	}
	return;
}

void Function_507() //Position: 0x195DB / 103899
{
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1148);
	TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	return;
}

bool Function_508() //Position: 0x19603 / 103939
{
	Function_575();
	if (iLocal_1523 < 1 && !iLocal_1244)
	{
		Function_337(0);
	}
	if (!Function_242(&iLocal_1206))
	{
		Function_497(&iLocal_1206, 5.0f);
	}
	if ((((((((iLocal_1523 <= 3 && iLocal_1523 == 5) && !iLocal_1251) && (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))) && !Function_138()) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !iLocal_1252) && !iLocal_1244) && !iLocal_1243)
	{
		if (!iLocal_1459)
		{
			if (Function_240(&iLocal_1206) <= 5.0f)
			{
				Function_511();
				iLocal_1459 = 1;
			}
		}
		else
		{
			Function_245(&iLocal_1206);
			iLocal_1459 = 0;
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1168[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1146, &iLocal_4 + 1168[5]))
		{
			DESTROY_VOLUME(&iLocal_4 + 1168[5]);
			ABORT_SCRIPTED_CONVERSATION(1);
			Function_510();
			iLocal_1252 = 1;
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			HUD_ENABLE(1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
	}
	switch (iLocal_1523)
	{
		case 0x00000000:
			if (Function_603(&bLocal_1148, &bLocal_1152, 0) && Function_603(&bLocal_1146, &bLocal_1152, 1))
			{
				if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
				{
					Function_211(&bLocal_1152);
					Function_245(&iLocal_1170);
					if (GET_TASK_STATUS(&bLocal_1148, 43) != 1)
					{
						TASK_CLEAR(&bLocal_1148);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 3920, 4, 0, 0, 1, 0);
						AI_ACTOR_FORCE_SPEED(&bLocal_1148, 4);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[0])))
					{
						ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2104[0], 330, 0f, 2, 0);
					}
					iLocal_1523 = 1;
					return 0;
				}
			}
			if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
			{
				Function_211(&bLocal_1152);
				HUD_CLEAR_OBJECTIVE();
				Function_310("FBI05_obj01a_0", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1247 = 1;
				Function_245(&iLocal_1170);
				iLocal_1523 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_603(&bLocal_1148, &bLocal_1152, 0) && Function_603(&bLocal_1146, &bLocal_1152, 1))
			{
				if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
				{
					Function_211(&bLocal_1152);
					HUD_CLEAR_OBJECTIVE();
					Function_509();
					if (GET_TASK_STATUS(&bLocal_1148, 43) != 1)
					{
						TASK_CLEAR(&bLocal_1148);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 3920, 4, 0, 0, 1, 0);
						AI_ACTOR_FORCE_SPEED(&bLocal_1148, 4);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 2104[0])))
					{
						ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2104[0], 330, 0f, 2, 0);
					}
					if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
					{
						bLocal_1168 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", 0, "@UI.ACCEPT", 0, 0, 0, 0, 4294967295, 0);
					}
					Function_245(&iLocal_1170);
					iLocal_1523 = 2;
				}
			}
			else if (iLocal_1247)
			{
				if (!Function_603(&Global_54076, &bLocal_1152, 2) && !Function_603(&Global_54076, &bLocal_1152, 3))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_310("FBI05_obj01a", 0x40f00000, 1, 2, 0, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_1152, 325, 0, 2, 0);
						SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1152), "FBI05_CarBlip");
					}
					iLocal_1247 = 0;
					Function_245(&iLocal_1170);
					iLocal_1523 = 0;
				}
			}
			break;
		
		case 0x00000002:
			Function_323(0);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_240(&iLocal_1170) <= 8.0f)
			{
				Function_254();
				Function_310("FBI05_obj01b", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_245(&iLocal_1170);
				iLocal_1523 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			Function_323(0);
			if (!iLocal_1244)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1232[2]))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					iLocal_1244 = 1;
					if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&bLocal_1152, &iLocal_4 + 1448[0]))
			{
				Function_256(&iLocal_4 + 2104[0]);
				Function_245(&iLocal_1170);
				iLocal_1523 = 7;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000004:
			ABORT_SCRIPTED_CONVERSATION(1);
			HUD_CLEAR_OBJECTIVE();
			Function_310("FBI05_carOutObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (!Function_242(&iLocal_1194))
			{
				Function_398(&iLocal_1194);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_WalksAwayFromCar", "FBI05_WalksAwayFromCar", 0, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1152)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_1152, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1152), "FBI05_CarBlip");
			}
			Function_256(&iLocal_4 + 2104[0]);
			Function_245(&iLocal_1170);
			Function_245(&iLocal_1194);
			iLocal_1523 = 5;
			return 0;
			break;
		
		case 0x00000005:
			if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
			{
				iLocal_1246 = 0;
				Function_211(&bLocal_1152);
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2104[0], 330, 0f, 2, 0);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
				TASK_CLEAR(&bLocal_1148);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1148, &iLocal_4 + 3920, 4, 0, 0, 1, 0);
				TASK_PRIORITY_SET(&bLocal_1148, true);
				HUD_CLEAR_OBJECTIVE();
				Function_310("FBI05_obj01b", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_245(&iLocal_1194);
				Function_245(&iLocal_1170);
				iLocal_1523 = 3;
				return 0;
			}
			if (Function_240(&iLocal_1170) >= 1,5f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1148, (6,4f - (Function_240(&iLocal_1170) * (6,4f / 1,5f))));
			}
			else if (Function_240(&iLocal_1170) <= 1,5f && Function_240(&iLocal_1170) >= 1,6f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1148, 0.0f);
				TASK_CLEAR(&bLocal_1148);
				TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				if (Function_304(0))
				{
					return 0;
				}
			}
			break;
		
		case 0x00000007:
			iLocal_1472 = 0;
			if (Function_240(&iLocal_1170) >= 3,2f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1148, (6,4f - (Function_240(&iLocal_1170) * (6,4f / 3.0f))));
			}
			else if (Function_240(&iLocal_1170) <= 3,2f && Function_240(&iLocal_1170) >= 3,3f)
			{
				Function_256(&iLocal_4 + 2104[0]);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1148);
				TASK_CLEAR(&bLocal_1148);
				TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
				STOP_VEHICLE(&bLocal_1152);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_509() //Position: 0x19CAA / 105642
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_JonGetsInCar", "FBI05_JonGetsInCar", 0, 1, 1, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510() //Position: 0x19CF7 / 105719
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DrawNearWrek_v1_AA1", "FBI05_DrawNearWrek_v1_AA1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DrawNearWrek_v1_AA2", "FBI05_DrawNearWrek_v1_AA2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DrawNearWrek_v1_AA3", "FBI05_DrawNearWrek_v1_AA3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DrawNearWrek_v1_AA4", "FBI05_DrawNearWrek_v1_AA4", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_DrawNearWrek_v1_AB", "FBI05_DrawNearWrek_v1_AB", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_DrawNearWrek_v1_AC", "FBI05_DrawNearWrek_v1_AC", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_DrawNearWrek_v1_AD", "FBI05_DrawNearWrek_v1_AD", 1, 4, 0, 0, 1);
		Function_307(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x19ED2 / 106194
{
	if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_Banter2wardsWrek_v1_AA"))
	{
		Function_515();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_Banter2wardsWrek_v2_AA"))
	{
		Function_514();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_Banter2wardsWrek_v3_AA1"))
	{
		Function_513();
	}
	else
	{
		Function_512();
		iLocal_1251 = 1;
	}
	return;
}

void Function_512() //Position: 0x19F64 / 106340
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_NoTalkRide", "FBI05_NoTalkRide", 0, 4, 1, 0, 1);
		Function_307(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x19FAD / 106413
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AA1", "FBI05_Banter2wardsWrek_v3_AA1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AA2", "FBI05_Banter2wardsWrek_v3_AA2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AA3", "FBI05_Banter2wardsWrek_v3_AA3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v3_AB", "FBI05_Banter2wardsWrek_v3_AB", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AC1", "FBI05_Banter2wardsWrek_v3_AC1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AC2", "FBI05_Banter2wardsWrek_v3_AC2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v3_AD", "FBI05_Banter2wardsWrek_v3_AD", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v3_AE", "FBI05_Banter2wardsWrek_v3_AE", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v3_AF", "FBI05_Banter2wardsWrek_v3_AF", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v3_AG", "FBI05_Banter2wardsWrek_v3_AG", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v3_AH", "FBI05_Banter2wardsWrek_v3_AH", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AI", "FBI05_Banter2wardsWrek_v3_AI", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v3_AJ", "FBI05_Banter2wardsWrek_v3_AJ", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AK1", "FBI05_Banter2wardsWrek_v3_AK1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AK2", "FBI05_Banter2wardsWrek_v3_AK2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AK3", "FBI05_Banter2wardsWrek_v3_AK3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AK4", "FBI05_Banter2wardsWrek_v3_AK4", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AK5", "FBI05_Banter2wardsWrek_v3_AK5", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v3_AL", "FBI05_Banter2wardsWrek_v3_AL", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v3_AM", "FBI05_Banter2wardsWrek_v3_AM", 0, 4, 0, 0, 1);
		Function_307(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1A567 / 107879
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AA", "FBI05_Banter2wardsWrek_v2_AA", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AB", "FBI05_Banter2wardsWrek_v2_AB", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AC", "FBI05_Banter2wardsWrek_v2_AC", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AD", "FBI05_Banter2wardsWrek_v2_AD", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AE", "FBI05_Banter2wardsWrek_v2_AE", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AF1", "FBI05_Banter2wardsWrek_v2_AF1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AF2", "FBI05_Banter2wardsWrek_v2_AF2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AF3", "FBI05_Banter2wardsWrek_v2_AF3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AG", "FBI05_Banter2wardsWrek_v2_AG", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AH", "FBI05_Banter2wardsWrek_v2_AH", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AI", "FBI05_Banter2wardsWrek_v2_AI", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AJ", "FBI05_Banter2wardsWrek_v2_AJ", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AK", "FBI05_Banter2wardsWrek_v2_AK", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AL1", "FBI05_Banter2wardsWrek_v2_AL1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AL2", "FBI05_Banter2wardsWrek_v2_AL2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AM", "FBI05_Banter2wardsWrek_v2_AM", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AN1", "FBI05_Banter2wardsWrek_v2_AN1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AN2", "FBI05_Banter2wardsWrek_v2_AN2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AN3", "FBI05_Banter2wardsWrek_v2_AN3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AO1", "FBI05_Banter2wardsWrek_v2_AO1", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v2_AO2", "FBI05_Banter2wardsWrek_v2_AO2", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AP1", "FBI05_Banter2wardsWrek_v2_AP1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AP2", "FBI05_Banter2wardsWrek_v2_AP2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v2_AP3", "FBI05_Banter2wardsWrek_v2_AP3", 0, 4, 0, 0, 1);
		Function_307(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1AC43 / 109635
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AA", "FBI05_Banter2wardsWrek_v1_AA", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AB", "FBI05_Banter2wardsWrek_v1_AB", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AC1", "FBI05_Banter2wardsWrek_v1_AC1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AC2", "FBI05_Banter2wardsWrek_v1_AC2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AD1", "FBI05_Banter2wardsWrek_v1_AD1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AD2", "FBI05_Banter2wardsWrek_v1_AD2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v1_AE", "FBI05_Banter2wardsWrek_v1_AE", 2, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_900", "", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AF", "FBI05_Banter2wardsWrek_v1_AF", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AG1", "FBI05_Banter2wardsWrek_v1_AG1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AG2", "FBI05_Banter2wardsWrek_v1_AG2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AG3", "FBI05_Banter2wardsWrek_v1_AG3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v1_AH", "FBI05_Banter2wardsWrek_v1_AH", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AI", "FBI05_Banter2wardsWrek_v1_AI", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1740", "", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v1_AJ", "FBI05_Banter2wardsWrek_v1_AJ", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AK1", "FBI05_Banter2wardsWrek_v1_AK1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AK2", "FBI05_Banter2wardsWrek_v1_AK2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AK3", "FBI05_Banter2wardsWrek_v1_AK3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AK4", "FBI05_Banter2wardsWrek_v1_AK4", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI05_Banter2wardsWrek_v1_AL", "FBI05_Banter2wardsWrek_v1_AL", 1, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AM", "FBI05_Banter2wardsWrek_v1_AM", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AN1", "FBI05_Banter2wardsWrek_v1_AN1", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AN2", "FBI05_Banter2wardsWrek_v1_AN2", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AN3", "FBI05_Banter2wardsWrek_v1_AN3", 0, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI05_Banter2wardsWrek_v1_AN4", "FBI05_Banter2wardsWrek_v1_AN4", 0, 4, 0, 0, 1);
		Function_307(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1B360 / 111456
{
	var uVar0;
	
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&bLocal_1148);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, false) != &bLocal_1148)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	}
	TASK_CLEAR(&bLocal_1146);
	GET_POSITION(&Global_54076, &uVar0);
	TELEPORT_ACTOR(&bLocal_1146, &uVar0, 1, 1, 1);
	SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &Global_54076)
	{
		SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 3);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	}
	Function_285(&bLocal_1152, &bLocal_1148);
	return;
}

void Function_517() //Position: 0x1B3E9 / 111593
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	return;
}

void Function_518() //Position: 0x1B400 / 111616
{
	Function_520();
	Function_519();
	if (!Function_602() || bLocal_1142 != 4)
	{
		return;
	}
	if (!iLocal_1243)
	{
		if (IS_ACTOR_VALID(&bLocal_1152))
		{
			Function_329(&iLocal_1174, 45.0f, 100.0f, &bLocal_1152, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_1239, 0, 0, 0, 325, 1);
		}
	}
	if ((bLocal_1142 > 8 || bLocal_1142 != 55) || iLocal_1523 != 1)
	{
		return;
	}
	return;
}

void Function_519() //Position: 0x1B489 / 111753
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (IS_ACTOR_VALID(&iLocal_4 + 552[02]))
	{
		if (!bLocal_1449)
		{
			if (Function_313(&Global_54076, &iLocal_4 + 552[02], 50.0f))
			{
				if (IS_LAYOUTREF_VALID(&uLocal_1049))
				{
					uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_1049);
					ITERATE_IN_LAYOUT(&uVar0, GET_EVENT_LAYOUT());
					uVar1 = START_OBJECT_ITERATOR(&uVar0);
					while (IS_OBJECT_VALID(&uVar1))
					{
						uVar2 = GET_EVENT_FROM_OBJECT(&uVar1);
						if (IS_EVENT_VALID(&uVar2))
						{
							if (GET_EVENT_TYPE(&uVar2) != 7 || GET_EVENT_TYPE(&uVar2) != 8)
							{
								if (GET_EVENT_PERPETRATOR(&uVar2) != GET_OBJECT_FROM_ACTOR(&Global_54076) && GET_EVENT_TARGET_AS_OBJECT(&uVar2) != GET_OBJECT_FROM_ACTOR(&iLocal_4 + 552[02]))
								{
									MEMORY_CLEAR_ALL(&iLocal_4 + 552[02]);
									TASK_CLEAR(&iLocal_4 + 552[02]);
									TASK_FLEE_ACTOR(&iLocal_4 + 552[02], &Global_54076, 200.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(&iLocal_4 + 552[02], true);
									DESTROY_ITERATOR(&uVar0);
								}
							}
						}
						uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
					}
					DESTROY_ITERATOR(&uVar0);
				}
			}
		}
	}
	return;
}

void Function_520() //Position: 0x1B58E / 112014
{
	var uVar0;
	var uVar1;
	
	Function_268(&Global_54076);
	uVar1 = Function_268(&Global_54076);
	uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/player_lockpick_safe", &uVar1, 1,5f, 0);
	if (IS_GRINGO_VALID(&uVar0))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uVar0));
	}
	return;
}

void Function_521() //Position: 0x1B5FD / 112125
{
	switch (bLocal_1142)
	{
		case 0x00000000:
		case 0x00000006:
			Function_559(&Local_1051, 1);
			uLocal_1049 = CREATE_LAYOUT(Function_54());
			Function_558();
			Function_167(1163268);
			Function_192(32);
			Function_277(9);
			Function_557();
			Function_135(&(Global_43791[Global_46914[3]]), 384);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&Global_44085[Global_46914[3]9] + 8, 15);
			Function_135(&(Global_43791[Global_46914[0]]), 256);
			SET_POP_DENSITY_MULTIPLIER(0,25f);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1142 = 7;
			break;
		
		case 0x00000007:
			if (Function_543())
			{
				if (!Function_247(&Local_1051))
				{
					SET_MAXIMUM_SPOTLIGHT_CASCADE_COUNT(4);
					Function_539();
					bLocal_1506 = true;
					bLocal_1142 = 8;
				}
				else
				{
					Function_539();
					Function_538();
					bLocal_1142 = 9;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_233("$/cutscene/FBI_05/FBI_05", &iLocal_1129, &Local_1051, &iLocal_1141, 116478, 116358, 116024, 115403, 115371, 49332, 0, 1, 1, 2, 2, 0, 1))
			{
				bLocal_1142 = 9;
				Function_285(&bLocal_1152, &bLocal_1148);
			}
			break;
		
		case 0x00000009:
			Function_162(Global_46914[3]);
			Function_530(&uLocal_1261, &uLocal_1049);
			Function_294(&(Local_1315[015]), &bLocal_1146, "FBI_Ross", 0, 0x5f5e100, 1);
			Function_294(&(Local_1315[115]), &bLocal_1148, "FBI_Fordham", 0, 0x5f5e100, 1);
			Function_398(&iLocal_1170);
			Function_398(&iLocal_1174);
			Function_398(&iLocal_1178);
			iLocal_1141 = 0;
			bLocal_1142 = false;
			Function_528(&Local_1051, &iLocal_1141, &bLocal_1142);
			Function_527(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1051);
			switch (iLocal_1141)
			{
				case 0x00000000:
					SET_MAXIMUM_SPOTLIGHT_CASCADE_COUNT(3);
					break;
				
				case 0x00000001:
					Function_526();
					break;
				
				case 0x00000002:
					Function_525();
					break;
				
				case 0x00000003:
					Function_524();
					break;
				
				case 0x00000004:
					Function_523();
					break;
				
				case 0x00000065:
					Function_522();
					break;
			}
			break;
	}
	return;
}

void Function_522() //Position: 0x1B81E / 112670
{
	return;
}

void Function_523() //Position: 0x1B824 / 112676
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 1, 0);
	}
	Function_376(1);
	Function_211(&bLocal_1152);
	Function_211(&bLocal_1150);
	return;
}

void Function_524() //Position: 0x1B878 / 112760
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 1, 0);
	}
	Function_376(0);
	Function_258(&bLocal_1150, &iLocal_4 + 1960[2], 1, 1, 1);
	Function_288(&bLocal_1152, 4);
	Function_211(&bLocal_1152);
	Function_211(&bLocal_1150);
	return;
}

void Function_525() //Position: 0x1B8E7 / 112871
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 1, 0);
	}
	Function_211(&bLocal_1152);
	Function_211(&bLocal_1148);
	Function_255(10, 0, 1);
	return;
}

void Function_526() //Position: 0x1B93E / 112958
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_1168))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_1168);
	}
	if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 1, 0);
	}
	AI_GOAL_LOOK_CLEAR(&bLocal_1148);
	Function_211(&bLocal_1152);
	Function_211(&bLocal_1148);
	Function_255(10, 0, 1);
	return;
}

void Function_527(struct<41> Param0) //Position: 0x1B99C / 113052
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_1141 = 0;
			break;
		
		case 0x00000002:
			iLocal_1141 = 1;
			break;
		
		case 0x00000003:
			iLocal_1141 = 2;
			break;
		
		case 0x00000004:
			iLocal_1141 = 3;
			break;
		
		case 0x00000005:
			iLocal_1141 = 4;
			break;
		
		case 0x00000006:
			iLocal_1141 = 5;
			break;
		
		case 0x00000007:
			iLocal_1141 = 6;
			break;
		
		case 0x00000008:
			iLocal_1141 = 7;
			break;
		
		case 0x00000009:
			iLocal_1141 = 8;
			break;
		
		case 0x0000000A:
			iLocal_1141 = 101;
			break;
	}
}

void Function_528(int iParam0, var uParam1, int iParam2) //Position: 0x1BA31 / 113201
{
	if (Function_247(&iParam0))
	{
		uParam1 = Function_374(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_529();
	}
	return;
}

void Function_529() //Position: 0x1BA6D / 113261
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

int Function_530(struct<2>[] Param0) //Position: 0x1BABE / 113342
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

bool Function_531(struct<13> Param0) //Position: 0x1C1DC / 115164
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
	Function_77(&Param0 + 12, bParam4);
	return 1;
}

int Function_532() //Position: 0x1C2AB / 115371
{
	Function_253(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_285(&bLocal_1152, &bLocal_1148);
	return 1;
}

int Function_533() //Position: 0x1C2CB / 115403
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_LAYOUTREF_VALID(&uLocal_1049))
	{
		uLocal_1144 = CREATE_OBJECT_ITERATOR(&uLocal_1049);
	}
	FORCE_VEHICLE_CINEMATIC_CAMERA(1);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1168[4], 15);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1168[4]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1168[4]);
	Function_255(10, 0, 1);
	RESET_ACTOR_GAITS(&bLocal_1146, 0);
	SET_CRIPPLE_ENABLE(&bLocal_1146, 0);
	SET_ACTOR_FACTION(&bLocal_1146, 20);
	TASK_PRIORITY_SET(&bLocal_1146, true);
	TASK_STAND_STILL(&bLocal_1146, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_1146, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1146, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_1146, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_1146, GET_ACTOR_MAX_HEALTH(&bLocal_1146));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1146, 1);
	Function_534();
	GET_VOLUME_CENTER(&iLocal_4 + 1232[8], &Var0);
	GET_VOLUME_SCALE(&iLocal_4 + 1232[8], &Var2);
	Function_301(&iLocal_4 + 1232[8]);
	CREATE_OBSTACLE_ON_OBJECT(&iLocal_4 + 4168, Function_54(), Var0, Function_301(&iLocal_4 + 1232[8]), Var2);
	Function_258(&Global_54076, &iLocal_4 + 2136[1], 1, 1, 0);
	Function_258(&bLocal_1146, &iLocal_4 + 2136[3], 1, 1, 1);
	Function_258(&bLocal_1148, &iLocal_4 + 2136[5], 1, 1, 1);
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[0]);
	}
	else if (iLocal_1497)
	{
		CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_1152);
	}
	else
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[0], 1, 1, 1);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	if (!ACTOR_HAS_WEAPON(&Global_54076, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 1, 0);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&bLocal_1148);
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, false) != &bLocal_1148)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1148, &bLocal_1152, false);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	TASK_CLEAR(&bLocal_1146);
	if (GET_VEHICLE(&bLocal_1146) != &bLocal_1152)
	{
		SET_ACTOR_IN_VEHICLE(&bLocal_1146, &bLocal_1152, true);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1152, 3) != &Global_54076)
	{
		SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1152, 3);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 0.0f);
	}
	SET_ACTOR_MAX_HEALTH(&bLocal_1148, GET_ACTOR_MAX_HEALTH(&bLocal_1146));
	Function_388(&bLocal_1148);
	bLocal_1225 = Function_348();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_1225);
	PRINTNL();
	Function_285(&bLocal_1152, &bLocal_1148);
	return 1;
}

int Function_534() //Position: 0x1C538 / 116024
{
	if (!IS_ACTOR_VALID(&bLocal_1148))
	{
		Function_535();
		bLocal_1148 = &iLocal_4 + 520[02];
		Function_299(&bLocal_1148);
		RESET_ACTOR_GAITS(&bLocal_1148, 0);
		SET_CRIPPLE_ENABLE(&bLocal_1148, 0);
		TASK_PRIORITY_SET(&bLocal_1148, true);
		TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1148, 0, 0);
		UNK_0x99AFD2D1(&bLocal_1148, 1, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1148, 0);
		SET_ACTOR_FACTION(&bLocal_1148, 20);
		SET_ACTOR_MAX_HEALTH(&bLocal_1148, 300.0f);
		SET_ACTOR_HEALTH(&bLocal_1148, 300.0f);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bLocal_1148, 1);
		Function_351(&bLocal_1148, 85.0f, -1.0f, -1.0f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1148, 1);
		SET_ACTOR_VISION_MAX_RANGE(&bLocal_1148, 80.0f, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&bLocal_1148, 80.0f);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&bLocal_1148, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&bLocal_1148, 80.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1148, 17, false);
	}
	else if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(&bLocal_1148))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1148);
	}
	return 1;
}

void Function_535() //Position: 0x1C62E / 116270
{
	*(&iLocal_4 + 544) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 520[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 641, Vector(774,6809f, 83,65965f, 1241,539f), Vector(0.0f, -29,42593f, 0.0f));
	Function_379(&iLocal_4 + 520[02], &iLocal_4 + 544, 0);
	return;
}

int Function_536() //Position: 0x1C686 / 116358
{
	if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(&Global_21369 + 72);
	}
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[0]);
	}
	else
	{
		Function_258(&bLocal_1152, &iLocal_4 + 2008[0], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1152);
		iLocal_1497 = 1;
	}
	return 1;
}

int Function_537() //Position: 0x1C6FE / 116478
{
	Function_265(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_264(&iLocal_4 + 2008[0]);
	Function_262(StackVal, &uLocal_1049, Function_264(&iLocal_4 + 2008[0]), &iLocal_4 + 1320[0], 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_538() //Position: 0x1C73B / 116539
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_LAYOUTREF_VALID(&uLocal_1049))
	{
		uLocal_1144 = CREATE_OBJECT_ITERATOR(&uLocal_1049);
	}
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1168[4], 15);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1168[4]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1168[4]);
	Function_255(10, 0, 1);
	RESET_ACTOR_GAITS(&bLocal_1146, 0);
	SET_CRIPPLE_ENABLE(&bLocal_1146, 0);
	SET_ACTOR_FACTION(&bLocal_1146, 20);
	TASK_PRIORITY_SET(&bLocal_1146, true);
	TASK_STAND_STILL(&bLocal_1146, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_1146, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1146, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_1146, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_1146, GET_ACTOR_MAX_HEALTH(&bLocal_1146));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1146, 1);
	GET_VOLUME_CENTER(&iLocal_4 + 1232[8], &Var0);
	GET_VOLUME_SCALE(&iLocal_4 + 1232[8], &Var2);
	Function_301(&iLocal_4 + 1232[8]);
	CREATE_OBSTACLE_ON_OBJECT(&iLocal_4 + 4168, Function_54(), Var0, Function_301(&iLocal_4 + 1232[8]), Var2);
	if (!IS_ACTOR_VALID(&bLocal_1152))
	{
		Function_289(&iLocal_4 + 2008[0]);
	}
	Function_272(&bLocal_1152, 1);
	Function_288(&bLocal_1152, 4);
	START_VEHICLE(&bLocal_1152);
	if (!IS_ACTOR_VALID(&bLocal_1148))
	{
		Function_535();
		bLocal_1148 = &iLocal_4 + 520[02];
		Function_299(&bLocal_1148);
		RESET_ACTOR_GAITS(&bLocal_1148, 0);
		SET_CRIPPLE_ENABLE(&bLocal_1148, 0);
		TASK_PRIORITY_SET(&bLocal_1148, true);
		TASK_STAND_STILL(&bLocal_1148, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1148, 0, 0);
		UNK_0x99AFD2D1(&bLocal_1148, 1, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1148, 0);
		SET_ACTOR_FACTION(&bLocal_1148, 20);
		SET_ACTOR_MAX_HEALTH(&bLocal_1148, 300.0f);
		SET_ACTOR_HEALTH(&bLocal_1148, 300.0f);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bLocal_1148, 1);
		Function_351(&bLocal_1148, 85.0f, -1.0f, -1.0f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1148, 1);
		SET_ACTOR_VISION_MAX_RANGE(&bLocal_1148, 80.0f, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&bLocal_1148, 80.0f);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&bLocal_1148, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&bLocal_1148, 80.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1148, 17, false);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bLocal_1146, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_1148, GET_ACTOR_MAX_HEALTH(&bLocal_1146));
	Function_388(&bLocal_1148);
	bLocal_1225 = Function_348();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_1225);
	PRINTNL();
	return;
}

void Function_539() //Position: 0x1C971 / 117105
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
	
	Function_542(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("FBI05_layout");
	*(&iLocal_4 + 1224) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(754,7042f, 78,52522f, 1236,073f), Vector(0.0f, 0.0f, 0.0f), Vector(10,48061f, 10.0f, 39,15748f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1224, &iLocal_4 + 1168[0]);
	*(&iLocal_4 + 1168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(747,3852f, 78,52522f, 1238,061f), Vector(0.0f, -90,2158f, 0.0f), Vector(29,95928f, 10.0f, 21,13177f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1224, &iLocal_4 + 1168[1]);
	*(&iLocal_4 + 1168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(770,7709f, 79,65591f, 1227,848f), Vector(0.0f, 0.0f, 0.0f), Vector(3,711047f, 8,903046f, 2,738106f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1224, &iLocal_4 + 1168[2]);
	*(&iLocal_4 + 1168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(763,5057f, 80,34832f, 1235,046f), Vector(0.0f, 0.0f, 0.0f), Vector(4,798811f, 5,851085f, 8,461024f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1224, &iLocal_4 + 1168[3]);
	*(&iLocal_4 + 1168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(769,5136f, 78,42754f, 1235,129f), Vector(0.0f, 0.0f, 0.0f), Vector(16,49199f, 25,54374f, 17,29126f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1224, &iLocal_4 + 1168[4]);
	*(&iLocal_4 + 1168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(398,0691f, 96,25044f, 1839,669f), Vector(0.0f, -185,3164f, 0.0f), Vector(25,68781f, 53,03576f, 117,8972f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1224, &iLocal_4 + 1168[5]);
	*(&iLocal_4 + 1312) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(514,6799f, 98,30594f, 1826,612f), Vector(0.0f, -88,12146f, 0.0f), Vector(119,3891f, 99,99772f, 10,06492f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[0]);
	*(&iLocal_4 + 1232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(573,3358f, 99,56177f, 1816,982f), Vector(0.0f, 0.0f, 0.0f), Vector(58,11268f, 66,3402f, 137,0674f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[1]);
	*(&iLocal_4 + 1232[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(398,0691f, 96,25044f, 1839,669f), Vector(0.0f, -185,3164f, 0.0f), Vector(21,30032f, 115,3502f, 154,9037f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[2]);
	*(&iLocal_4 + 1232[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(766,3774f, 78,41332f, 1396,973f), Vector(0.0f, -88,61633f, 0.0f), Vector(8,212883f, 44,4762f, 59,72706f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[3]);
	*(&iLocal_4 + 1232[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(591,3914f, 98,55841f, 1814,943f), Vector(0.0f, -186,3047f, 0.0f), Vector(7,419566f, 53,03576f, 63,50355f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[4]);
	*(&iLocal_4 + 1232[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(633,6897f, 97,94424f, 1815,653f), Vector(0.0f, -185,4115f, 0.0f), Vector(5,017893f, 53,03576f, 63,50355f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[5]);
	*(&iLocal_4 + 1232[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(775,0907f, 78,35129f, 1336,407f), Vector(0.0f, -0,1092f, 0.0f), Vector(8,212883f, 44,4762f, 59,72706f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[6]);
	*(&iLocal_4 + 1232[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(582,5807f, 98,55841f, 1819,866f), Vector(0.0f, -186,3047f, 0.0f), Vector(162,4072f, 53,03576f, 91,18114f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[7]);
	*(&iLocal_4 + 1232[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(587,5677f, 101,093f, 1804,184f), Vector(0.0f, -214,6675f, 0.0f), Vector(1,593893f, 5,071055f, 4,023077f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1232[8]);
	*(&iLocal_4 + 1352) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1320[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(763,4524f, 80,16332f, 1245,605f), Vector(0.0f, 0,1493859f, 0.0f), Vector(40,54383f, 18,04197f, 41,51529f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1352, &iLocal_4 + 1320[0]);
	*(&iLocal_4 + 1320[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(357,4796f, 78,61549f, 1986,664f), Vector(0.0f, -40,72097f, 0.0f), Vector(10,3444f, 6,32224f, 13,42867f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1352, &iLocal_4 + 1320[1]);
	*(&iLocal_4 + 1320[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(735,738f, 78,35129f, 1263,614f), Vector(0.0f, 0,1493859f, 0.0f), Vector(29,84087f, 6,32224f, 39,76952f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1352, &iLocal_4 + 1320[2]);
	*(&iLocal_4 + 1440) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1360[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(740,0529f, 81,25661f, 1275,365f), Vector(0.0f, 0.0f, 0.0f), Vector(31,52874f, 8,256212f, 28,00852f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[0]);
	*(&iLocal_4 + 1360[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(740,0529f, 81,64233f, 1277,16f), Vector(0.0f, 0.0f, 0.0f), Vector(18,97453f, 8,256212f, 30,12789f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[1]);
	*(&iLocal_4 + 1360[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(734,5236f, 81,64233f, 1325,519f), Vector(0.0f, 0.0f, 0.0f), Vector(7,074151f, 8,256212f, 145,0459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[2]);
	*(&iLocal_4 + 1360[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(749,3684f, 81,64233f, 1396,213f), Vector(0.0f, 93,24652f, 0.0f), Vector(7,26117f, 8,256212f, 34,7606f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[3]);
	*(&iLocal_4 + 1360[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(762,0547f, 81,64233f, 1434,514f), Vector(0.0f, -3,028033f, 0.0f), Vector(7,26117f, 21,47442f, 81,18225f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[4]);
	*(&iLocal_4 + 1360[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(747,7328f, 81,64233f, 1251,699f), Vector(0.0f, 90,03266f, 0.0f), Vector(7,26117f, 8,256212f, 33,97383f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[5]);
	*(&iLocal_4 + 1360[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(776,4197f, 81,64233f, 1385,994f), Vector(0.0f, 122,7549f, 0.0f), Vector(7,26117f, 8,256212f, 34,7606f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[6]);
	*(&iLocal_4 + 1360[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(787,9889f, 82,92458f, 1359,048f), Vector(0.0f, 181,7395f, 0.0f), Vector(7,26117f, 8,256212f, 39,71492f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[7]);
	*(&iLocal_4 + 1360[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(763,787f, 82,92458f, 1337,726f), Vector(0.0f, 271,1258f, 0.0f), Vector(7,26117f, 8,256212f, 53,42484f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1440, &iLocal_4 + 1360[8]);
	*(&iLocal_4 + 1520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1448[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(287,3313f, 90,38573f, 1888,373f), Vector(0.0f, -97,80096f, 0.0f), Vector(16,16906f, 7,577355f, 16,05389f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[0]);
	*(&iLocal_4 + 1448[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(301,0072f, 89,02029f, 1910,099f), Vector(0.0f, -5,32147f, 0.0f), Vector(32,45829f, 16,98229f, 20,69118f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[1]);
	*(&iLocal_4 + 1448[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(282,1396f, 90,41109f, 1861,376f), Vector(0.0f, -76,61446f, 0.0f), Vector(138,3332f, 16,98229f, 43,77419f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[2]);
	*(&iLocal_4 + 1448[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(337,8277f, 78,40516f, 1909,692f), Vector(0.0f, -93,67036f, 0.0f), Vector(6,298777f, 16,98229f, 13,41166f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[3]);
	*(&iLocal_4 + 1448[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(286,8474f, 90,98055f, 1885,959f), Vector(0.0f, -83,55318f, 0.0f), Vector(67,99723f, 35,36f, 54,41192f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[4]);
	*(&iLocal_4 + 1448[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(316,2639f, 83,09325f, 1910,313f), Vector(0.0f, -79,11249f, 0.0f), Vector(25,44245f, 33,30291f, 13,41166f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[5]);
	*(&iLocal_4 + 1448[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(296,6946f, 91,4112f, 1909,93f), Vector(0.0f, -50,00353f, 0.0f), Vector(9,072896f, 16,71001f, 32,57975f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[6]);
	*(&iLocal_4 + 1448[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(292,4238f, 90,41109f, 1904,593f), Vector(0.0f, -33,29477f, 0.0f), Vector(112,2552f, 53,16642f, 88,32642f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1520, &iLocal_4 + 1448[7]);
	*(&iLocal_4 + 1616) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1528[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(358,6295f, 74,73365f, 1974,667f), Vector(0.0f, -30,41525f, 0.0f), Vector(7,351048f, 10,16397f, 7,375453f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[0]);
	*(&iLocal_4 + 1528[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(359,9365f, 80,46455f, 1988,535f), Vector(5,37787f, 50,03459f, 0.0f), Vector(11,37762f, 4,666167f, 14,58543f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[1]);
	*(&iLocal_4 + 1528[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(362,6865f, 80,37463f, 1990,839f), Vector(7,02528f, 50,03459f, 0.0f), Vector(10,83126f, 4,666167f, 23,70712f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[2]);
	*(&iLocal_4 + 1528[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(368,4425f, 79,31108f, 1995,576f), Vector(6,264449f, 50,20226f, 0.0f), Vector(11,40671f, 4,879772f, 39,90004f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[3]);
	*(&iLocal_4 + 1528[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(353,3559f, 74,73365f, 1982,994f), Vector(0.0f, -40,96615f, 0.0f), Vector(19,41523f, 10,13245f, 12,12306f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[4]);
	*(&iLocal_4 + 1528[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(355,8362f, 73,68557f, 1991,182f), Vector(0.0f, -44,56898f, 0.0f), Vector(10.0f, 10,164f, 2,938993f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[5]);
	*(&iLocal_4 + 1528[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(371,4429f, 78,95001f, 1998,178f), Vector(5,37787f, 50,03459f, 0.0f), Vector(15,46286f, 4,666167f, 1,997874f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[6]);
	*(&iLocal_4 + 1528[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(376,9176f, 73,98427f, 2006,741f), Vector(5,37787f, 50,03459f, 0.0f), Vector(4,288333f, 2,793503f, 1,997874f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[7]);
	*(&iLocal_4 + 1528[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(370,7362f, 74,90338f, 2001,56f), Vector(5,37787f, 50,03459f, 0.0f), Vector(4,288333f, 2,793503f, 1,997874f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[8]);
	*(&iLocal_4 + 1528[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(364,5475f, 74,73365f, 1992,702f), Vector(0.0f, -38,77573f, 0.0f), Vector(53,32754f, 23,06214f, 15,17032f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1528[9]);
	*(&iLocal_4 + 1704) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1624[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(372,6065f, 78,02693f, 2003,463f), Vector(5,37787f, 50,03459f, 0.0f), Vector(3,653121f, 3,714921f, 4,692063f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[0]);
	*(&iLocal_4 + 1624[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(377,5315f, 76,00803f, 2003,12f), Vector(5,37787f, 50,03459f, 0.0f), Vector(2,273019f, 4,346757f, 5,204105f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[1]);
	*(&iLocal_4 + 1624[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(372,0271f, 74,71802f, 2004,098f), Vector(3,719638f, -36,64946f, -7,476742f), Vector(1,765317f, 3,225487f, 2,047752f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[2]);
	*(&iLocal_4 + 1624[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(365,5279f, 75,54311f, 1997,195f), Vector(5,37787f, 50,03459f, 0.0f), Vector(4,288333f, 2,793503f, 3,470452f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[3]);
	*(&iLocal_4 + 1624[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(351,9631f, 74,47399f, 1987,669f), Vector(5,37787f, 50,03459f, 0.0f), Vector(3,074852f, 3,079168f, 3,470452f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[4]);
	*(&iLocal_4 + 1624[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(375,5296f, 76,25392f, 2001,442f), Vector(5,37787f, 50,03459f, 0.0f), Vector(5,729691f, 7,852986f, 17,02078f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[5]);
	*(&iLocal_4 + 1624[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(372,5011f, 78,69061f, 1999,274f), Vector(5,37787f, 50,03459f, 0.0f), Vector(11,70761f, 4,480997f, 10,33408f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[6]);
	*(&iLocal_4 + 1624[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(359,8587f, 68,39693f, 1971,119f), Vector(0,1682787f, -29,50935f, 0,1597698f), Vector(115,4594f, 8,792746f, 82,88964f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[7]);
	*(&iLocal_4 + 1624[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(373,9458f, 71,0646f, 2009,309f), Vector(5,37787f, 50,03459f, 0.0f), Vector(13,03147f, 3,079168f, 10,76506f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1704, &iLocal_4 + 1624[8]);
	*(&iLocal_4 + 1824) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1712[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(359,8351f, 73,94907f, 1971,133f), Vector(0,1682787f, -29,50935f, 0,1597698f), Vector(9,115654f, 8,206367f, 11,79591f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[0]);
	*(&iLocal_4 + 1712[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(318,9435f, 75,56539f, 1904,599f), Vector(0.0f, -26,25985f, 0.0f), Vector(59,28301f, 49,2747f, 104,0935f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[1]);
	*(&iLocal_4 + 1712[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(379,2657f, 75,49315f, 1913,94f), Vector(0.0f, -117,2156f, 0.0f), Vector(30,20152f, 18,89278f, 62,96634f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[2]);
	*(&iLocal_4 + 1712[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(354,6881f, 73,84238f, 1956,387f), Vector(0.0f, 62,736f, 0.0f), Vector(7,173547f, 8,511875f, 6,7237f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[3]);
	*(&iLocal_4 + 1712[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(340,3851f, 74,13269f, 1948,462f), Vector(0.0f, 62,736f, 0.0f), Vector(10,24725f, 8,511875f, 6,7237f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[4]);
	*(&iLocal_4 + 1712[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(354,2288f, 74,13269f, 1955,168f), Vector(0.0f, 62,736f, 0.0f), Vector(13,58986f, 8,511875f, 6,7237f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[5]);
	*(&iLocal_4 + 1712[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(359,2821f, 74,95352f, 1949,019f), Vector(0,1682787f, -29,50935f, 0,1597698f), Vector(9,115654f, 8,206367f, 11,79591f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[6]);
	*(&iLocal_4 + 1712[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(328,1286f, 74,2966f, 1950,978f), Vector(0,1682787f, -29,50935f, 0,1597698f), Vector(21,18171f, 8,206367f, 11,79591f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[7]);
	*(&iLocal_4 + 1712[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(319,47f, 73,87955f, 1931,449f), Vector(-0,2808623f, -121,428f, 0,4823175f), Vector(17,43037f, 19,73222f, 9,818571f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[8]);
	*(&iLocal_4 + 1712[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(323,6973f, 74,9405f, 1944,738f), Vector(0,1662699f, -28,26226f, 0,1639279f), Vector(21,18171f, 8,206367f, 11,79591f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[9]);
	*(&iLocal_4 + 1712[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(322,6597f, 73,9119f, 1924,077f), Vector(-0,1768236f, -145,9163f, 0,341751f), Vector(13,4954f, 19,73222f, 10,2591f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[10]);
	*(&iLocal_4 + 1712[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(319,9195f, 73,90608f, 1921,814f), Vector(-0,1531273f, -163,0158f, 0,287388f), Vector(25,47f, 27,98685f, 9,840277f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[11]);
	*(&iLocal_4 + 1712[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(330,7509f, 73,96165f, 1918,019f), Vector(-0,1531273f, -163,0158f, 0,287388f), Vector(9,531181f, 27,98685f, 6,522169f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1824, &iLocal_4 + 1712[12]);
	*(&iLocal_4 + 1872) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1832[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(329,8887f, 74,51599f, 1960,252f), Vector(0.0f, -117,7701f, 0.0f), Vector(16,46113f, 7,577355f, 7,450965f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1872, &iLocal_4 + 1832[0]);
	*(&iLocal_4 + 1832[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(338,4716f, 74,60163f, 1944,4f), Vector(0.0f, -117,7701f, 0.0f), Vector(11,89671f, 7,577355f, 7,450965f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1872, &iLocal_4 + 1832[1]);
	*(&iLocal_4 + 1832[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(346,5766f, 74,02631f, 1951,795f), Vector(0.0f, -117,7701f, 0.0f), Vector(11,89671f, 7,577355f, 11,84802f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1872, &iLocal_4 + 1832[2]);
	*(&iLocal_4 + 1832[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(362,7803f, 75,66077f, 1944,153f), Vector(0.0f, -117,7701f, 0.0f), Vector(17,45442f, 7,577355f, 15,366f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1872, &iLocal_4 + 1832[3]);
	*(&iLocal_4 + 1880) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1888[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(358,5899f, 78,35647f, 1993,617f), Vector(-2,929729f, -2,190774f, -0,2666136f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[0], &iLocal_4 + 1880);
	*(&iLocal_4 + 1888[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(361,7963f, 77,90121f, 1995,74f), Vector(0.0f, 30,49666f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[1], &iLocal_4 + 1880);
	*(&iLocal_4 + 1888[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(358,8781f, 78,87623f, 1986,543f), Vector(0.0f, 68,63623f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[2], &iLocal_4 + 1880);
	*(&iLocal_4 + 1888[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(357,6982f, 78,73158f, 1988,257f), Vector(0.0f, 12,42976f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[3], &iLocal_4 + 1880);
	*(&iLocal_4 + 1888[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(356,8644f, 78,89484f, 1985,791f), Vector(0.0f, 235,8053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[4], &iLocal_4 + 1880);
	*(&iLocal_4 + 1888[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(357,562f, 78,92635f, 1986,079f), Vector(0.0f, 220,7636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[5], &iLocal_4 + 1880);
	*(&iLocal_4 + 1888[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(358,3359f, 78,77361f, 1987,387f), Vector(0,7276216f, -146,4759f, -0,5617104f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1888[6], &iLocal_4 + 1880);
	*(&iLocal_4 + 1952) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1960[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(290,4321f, 90,40784f, 1905,325f), Vector(-4,581825f, -50,25592f, 3,147366f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[0], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(289,9471f, 90,42127f, 1904,431f), Vector(0.0f, -56,67218f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[1], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(293,9555f, 90,50394f, 1903,294f), Vector(8,512562f, 110,1837f, 7,618086f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[2], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(293,1549f, 90,56281f, 1902,381f), Vector(5,87681f, 119,9217f, 4,719213f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[3], &iLocal_4 + 1952);
	*(&iLocal_4 + 2000) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2008[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(757,208f, 78,32298f, 1249,515f), Vector(0.0f, 447,5527f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[0], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(290,2566f, 90,41211f, 1901,074f), Vector(0.0f, -143,9556f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[1], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(291,7609f, 90,41638f, 1903,362f), Vector(0.0f, 30,63107f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[2], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(631,7386f, 98,195f, 1816,009f), Vector(0.0f, -88,8962f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[3], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(738,9096f, 78,40118f, 1276,92f), Vector(0.0f, -0,1127934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[4], &iLocal_4 + 2000);
	*(&iLocal_4 + 2056) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2064[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(776,7404f, 81,65591f, 1226,746f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[0], &iLocal_4 + 2056);
	*(&iLocal_4 + 2064[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(776,741f, 81,65591f, 1227,666f), Vector(0.0f, 0,04750083f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[1], &iLocal_4 + 2056);
	*(&iLocal_4 + 2064[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[2], &iLocal_4 + 2056);
	*(&iLocal_4 + 2096) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2104[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(291,1565f, 90,3827f, 1902,015f), Vector(0.0f, -138,1969f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[0], &iLocal_4 + 2096);
	*(&iLocal_4 + 2104[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(740,361f, 78,35129f, 1276,814f), Vector(0.0f, 102,4612f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[1], &iLocal_4 + 2096);
	*(&iLocal_4 + 2128) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2136[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(776,4817f, 83,95077f, 1231,419f), Vector(0.0f, -2,18978f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[0], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(759,6575f, 78,4659f, 1246,748f), Vector(0.0f, 91,03735f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[1], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(776,6899f, 82,25591f, 1228,862f), Vector(0.0f, 6,435434f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[2], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(762,3955f, 78,30585f, 1248,678f), Vector(0.0f, -231,7037f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[3], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(776,6744f, 83,67574f, 1232,686f), Vector(0.0f, 360,448f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[4], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(760,8069f, 78,30585f, 1248,679f), Vector(0.0f, 455,8587f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[5], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(760,506f, 79,70472f, 1235,111f), Vector(0.0f, 455,8587f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[6], &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(763,7825f, 79,72314f, 1235,543f), Vector(0.0f, 455,8587f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2136[7], &iLocal_4 + 2128);
	*(&iLocal_4 + 2208) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2216[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(284,9533f, 91,16349f, 1893,736f), Vector(0.0f, 221,2897f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[0], &iLocal_4 + 2208);
	*(&iLocal_4 + 2216[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(286,9816f, 90,57594f, 1895,597f), Vector(0.0f, 201,4434f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[1], &iLocal_4 + 2208);
	*(&iLocal_4 + 2216[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(288,019f, 90,61343f, 1895,229f), Vector(0.0f, 195,7252f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[2], &iLocal_4 + 2208);
	*(&iLocal_4 + 2248[03]) = Vector(355,8554f, 78,85863f, 1985,73f);
	*(&iLocal_4 + 2248[03] + 12) = Vector(0.0f, -218,4987f, 0.0f);
	*(&iLocal_4 + 2248[13]) = Vector(284,961f, 90,45762f, 1900,683f);
	*(&iLocal_4 + 2248[13] + 12) = Vector(0.0f, -17,05782f, 0.0f);
	*(&iLocal_4 + 2248[23]) = Vector(629,2828f, 98,30627f, 1813,489f);
	*(&iLocal_4 + 2248[23] + 12) = Vector(0.0f, 80,561f, 0.0f);
	*(&iLocal_4 + 2248[33]) = Vector(743,439f, 78,48866f, 1278,094f);
	*(&iLocal_4 + 2248[33] + 12) = Vector(0.0f, -339,9262f, 0.0f);
	*(&iLocal_4 + 2248[43]) = Vector(358,7332f, 73,51207f, 1973,776f);
	*(&iLocal_4 + 2248[43] + 12) = Vector(0.0f, -203,8235f, 0.0f);
	*(&iLocal_4 + 2248[53]) = Vector(358,3191f, 73,51224f, 1973,591f);
	*(&iLocal_4 + 2248[53] + 12) = Vector(0.0f, -203,8235f, 0.0f);
	*(&iLocal_4 + 2248[63]) = Vector(743,7215f, 78,48866f, 1264,157f);
	*(&iLocal_4 + 2248[63] + 12) = Vector(0.0f, -1,041323f, 0.0f);
	*(&iLocal_4 + 2248[73]) = Vector(372,7627f, 76,89716f, 1998,079f);
	*(&iLocal_4 + 2248[73] + 12) = Vector(0.0f, 233,1662f, 0.0f);
	*(&iLocal_4 + 2248[83]) = Vector(444,7391f, 95,94712f, 1837,053f);
	*(&iLocal_4 + 2248[83] + 12) = Vector(0.0f, 80,6893f, 0.0f);
	*(&iLocal_4 + 2248[93]) = Vector(754,4494f, 78,4863f, 1271,653f);
	*(&iLocal_4 + 2248[93] + 12) = Vector(0.0f, 102,4612f, 0.0f);
	*(&iLocal_4 + 2248[103]) = Vector(625,7407f, 98,55563f, 1817,464f);
	*(&iLocal_4 + 2248[103] + 12) = Vector(0.0f, -268,7516f, 0.0f);
	*(&iLocal_4 + 2248[113]) = Vector(632,3598f, 98,3733f, 1816,386f);
	*(&iLocal_4 + 2248[113] + 12) = Vector(0.0f, -290,8852f, 0.0f);
	*(&iLocal_4 + 2248[123]) = Vector(744,9272f, 78,35129f, 1278,734f);
	*(&iLocal_4 + 2248[123] + 12) = Vector(0.0f, 166,0616f, 0.0f);
	*(&iLocal_4 + 2248[133]) = Vector(744,3211f, 78,35129f, 1276,001f);
	*(&iLocal_4 + 2248[133] + 12) = Vector(0.0f, 82,89465f, 0.0f);
	*(&iLocal_4 + 2592) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2600[03]) = Vector(758,0623f, 78,52522f, 1245,056f);
	*(&iLocal_4 + 2600[03] + 12) = Vector(0.0f, 21,9018f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(758,0623f, 78,52522f, 1245,056f), Vector(0.0f, 21,9018f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 2592);
	*(&iLocal_4 + 2632) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2640[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(431,6627f, 98,25089f, 1838,886f), Vector(0.0f, 92,39217f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2640[0], &iLocal_4 + 2632);
	*(&iLocal_4 + 2640[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(436,3005f, 98,0575f, 1841,915f), Vector(0.0f, 71,81484f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2640[1], &iLocal_4 + 2632);
	*(&iLocal_4 + 2640[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(779,0988f, 78,22346f, 1336,481f), Vector(0.0f, 92,06625f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2640[2], &iLocal_4 + 2632);
	*(&iLocal_4 + 2640[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(781,6895f, 78,49155f, 1341,429f), Vector(0.0f, 0,3132282f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2640[3], &iLocal_4 + 2632);
	*(&iLocal_4 + 2680) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2688[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(296,41f, 90,41638f, 1911,363f), Vector(0.0f, 249,2162f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2688[0], &iLocal_4 + 2680);
	*(&iLocal_4 + 2704) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(297,3809f, 90,41638f, 1909,888f), Vector(0.0f, 38,97933f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[0], &iLocal_4 + 2704);
	*(&iLocal_4 + 2728) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2736[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(356,7759f, 78,86572f, 1986,653f), Vector(0.0f, -223,9438f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[0], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(360,1846f, 73,46813f, 1975,533f), Vector(0.0f, 11,89991f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[1], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(357,3657f, 78,71796f, 1985,477f), Vector(0.0f, -134,2303f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[2], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(381,9911f, 72,53961f, 2007,199f), Vector(0.0f, -297,0239f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[3], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(329,5219f, 74,30811f, 1939,566f), Vector(0.0f, -297,0239f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[4], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(378,748f, 73,50656f, 1920,397f), Vector(0.0f, -297,0239f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[5], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(355,1098f, 78,8945f, 1987,904f), Vector(0.0f, -131,8703f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[6], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(332,8846f, 74,46652f, 1945,462f), Vector(0.0f, -320,8971f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[7], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(358,8564f, 73,12016f, 1981,384f), Vector(0.0f, -306,4684f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[8], &iLocal_4 + 2728);
	*(&iLocal_4 + 2736[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(377,0568f, 76,38771f, 1997,764f), Vector(0.0f, -235,9191f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2736[9], &iLocal_4 + 2728);
	*(&iLocal_4 + 2824) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2832[03]) = Vector(358,9081f, 78,6151f, 1988,845f);
	*(&iLocal_4 + 2832[03] + 12) = Vector(0.0f, -129,0809f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(358,9081f, 78,6151f, 1988,845f), Vector(0.0f, -129,0809f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 2824);
	*(&iLocal_4 + 2864) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2872[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(367,64f, 76,93506f, 2000,419f), Vector(0.0f, 38,91269f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[0], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(373,3473f, 77,17651f, 1994,178f), Vector(0.0f, 49,39155f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[1], &iLocal_4 + 2864);
	*(&iLocal_4 + 2896) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2904[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(366,8344f, 77,34793f, 1994,961f), Vector(0.0f, 47,20131f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2904[0], &iLocal_4 + 2896);
	*(&iLocal_4 + 2904[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(365,2261f, 77,64458f, 1997,99f), Vector(0.0f, 38,80924f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2904[1], &iLocal_4 + 2896);
	*(&iLocal_4 + 2904[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(377,4592f, 76,31553f, 1999,692f), Vector(0.0f, 137,867f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2904[2], &iLocal_4 + 2896);
	*(&iLocal_4 + 2936) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2944[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(360,9767f, 73,29867f, 1970,138f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[0], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(352,067f, 73,39433f, 1963,218f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[1], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(354,4543f, 73,52461f, 1956,098f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[2], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(338,4532f, 74,6709f, 1947,297f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[3], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(335,9276f, 74,50193f, 1942,931f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[4], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(331,4687f, 77,13346f, 1937,273f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[5], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(328,5948f, 75,16387f, 1930,82f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[6], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(336,7494f, 75,68338f, 1920,666f), Vector(0.0f, -31,38804f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[7], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(337,2968f, 77,36737f, 1914,578f), Vector(0.0f, 62,3465f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[8], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(333,6085f, 79,98409f, 1911,666f), Vector(0.0f, 106,4341f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[9], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(311,5718f, 86,69505f, 1915,661f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[10], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(299,4878f, 89,64005f, 1913,224f), Vector(0.0f, 142,8677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[11], &iLocal_4 + 2936);
	*(&iLocal_4 + 3048) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(363,0242f, 74,71596f, 1996,385f), Vector(-6,259943f, -129,1588f, 1,016743f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3056[0], &iLocal_4 + 3048);
	*(&iLocal_4 + 3056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(353,6245f, 76,08221f, 1988,754f), Vector(-6,259943f, -129,1588f, 1,016743f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3056[1], &iLocal_4 + 3048);
	*(&iLocal_4 + 3080) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3088[03]) = Vector(351,5586f, 73,63214f, 1954,373f);
	*(&iLocal_4 + 3088[03] + 12) = Vector(0.0f, 151,0867f, 0.0f);
	*(&iLocal_4 + 3216[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(351,5586f, 73,63214f, 1954,373f), Vector(0.0f, 151,0867f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3216[0], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[13]) = Vector(350,3836f, 73,49984f, 1963,944f);
	*(&iLocal_4 + 3088[13] + 12) = Vector(0.0f, 151,0867f, 0.0f);
	*(&iLocal_4 + 3216[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(350,3836f, 73,49984f, 1963,944f), Vector(0.0f, 151,0867f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3216[1], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[23]) = Vector(355,9615f, 73,48211f, 1952,021f);
	*(&iLocal_4 + 3088[23] + 12) = Vector(0.0f, 151,0867f, 0.0f);
	*(&iLocal_4 + 3216[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(355,9615f, 73,48211f, 1952,021f), Vector(0.0f, 151,0867f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3216[2], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[33]) = Vector(346,1752f, 74,21378f, 1949,871f);
	*(&iLocal_4 + 3088[33] + 12) = Vector(0.0f, 237,16f, 0.0f);
	*(&iLocal_4 + 3216[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(346,1752f, 74,21378f, 1949,871f), Vector(0.0f, 237,16f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3216[3], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[43]) = Vector(336,3139f, 74,59268f, 1949,009f);
	*(&iLocal_4 + 3088[43] + 12) = Vector(0.0f, 237,16f, 0.0f);
	*(&iLocal_4 + 3216[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(336,3139f, 74,59268f, 1949,009f), Vector(0.0f, 237,16f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3216[4], &iLocal_4 + 3080);
	*(&iLocal_4 + 3264) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3272[03]) = Vector(329,4001f, 73,46249f, 1962,424f);
	*(&iLocal_4 + 3272[03] + 12) = Vector(0.0f, 231,0523f, 0.0f);
	*(&iLocal_4 + 3352[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(329,4001f, 73,46249f, 1962,424f), Vector(0.0f, 231,0523f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3352[0], &iLocal_4 + 3264);
	*(&iLocal_4 + 3272[13]) = Vector(333,2519f, 74,64883f, 1956,18f);
	*(&iLocal_4 + 3272[13] + 12) = Vector(0.0f, 237,16f, 0.0f);
	*(&iLocal_4 + 3352[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(333,2519f, 74,64883f, 1956,18f), Vector(0.0f, 237,16f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3352[1], &iLocal_4 + 3264);
	*(&iLocal_4 + 3272[23]) = Vector(335,0535f, 74,5982f, 1952,298f);
	*(&iLocal_4 + 3272[23] + 12) = Vector(0.0f, 242,9946f, 0.0f);
	*(&iLocal_4 + 3352[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(335,0535f, 74,5982f, 1952,298f), Vector(0.0f, 242,9946f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3352[2], &iLocal_4 + 3264);
	*(&iLocal_4 + 3384) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3392[03]) = Vector(363,3915f, 73,49775f, 1942,363f);
	*(&iLocal_4 + 3392[03] + 12) = Vector(0.0f, 152,1349f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(363,3915f, 73,49775f, 1942,363f), Vector(0.0f, 152,1349f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 3384);
	*(&iLocal_4 + 3392[13]) = Vector(359,9022f, 73,49165f, 1943,997f);
	*(&iLocal_4 + 3392[13] + 12) = Vector(0.0f, 153,8218f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(359,9022f, 73,49165f, 1943,997f), Vector(0.0f, 153,8218f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 3384);
	*(&iLocal_4 + 3448) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3456[03]) = Vector(336,8723f, 74,60868f, 1946,807f);
	*(&iLocal_4 + 3456[03] + 12) = Vector(0.0f, 242,7932f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(336,8723f, 74,60868f, 1946,807f), Vector(0.0f, 242,7932f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 3448);
	*(&iLocal_4 + 3456[13]) = Vector(338,4293f, 74,60164f, 1944,171f);
	*(&iLocal_4 + 3456[13] + 12) = Vector(0.0f, 242,7932f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(338,4293f, 74,60164f, 1944,171f), Vector(0.0f, 242,7932f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 3448);
	*(&iLocal_4 + 3512) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3520[03]) = Vector(346,3132f, 75,12444f, 1976,055f);
	*(&iLocal_4 + 3520[03] + 12) = Vector(-174,8537f, -219,8595f, -180,5414f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(346,3132f, 75,12444f, 1976,055f), Vector(-174,8537f, -219,8595f, -180,5414f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 3512);
	*(&iLocal_4 + 3520[13]) = Vector(359,1889f, 73,46447f, 1971,398f);
	*(&iLocal_4 + 3520[13] + 12) = Vector(-172,6135f, -237,6166f, -177,5972f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(359,1889f, 73,46447f, 1971,398f), Vector(-172,6135f, -237,6166f, -177,5972f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 3512);
	*(&iLocal_4 + 3520[23]) = Vector(360,5503f, 73,47237f, 1967,333f);
	*(&iLocal_4 + 3520[23] + 12) = Vector(-175,5306f, -152,0789f, -185,941f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(360,5503f, 73,47237f, 1967,333f), Vector(-175,5306f, -152,0789f, -185,941f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 3512);
	*(&iLocal_4 + 3520[33]) = Vector(348,9974f, 74,01839f, 1951,432f);
	*(&iLocal_4 + 3520[33] + 12) = Vector(-173,719f, -241,6295f, -176,429f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(348,9974f, 74,01839f, 1951,432f), Vector(-173,719f, -241,6295f, -176,429f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 3512);
	*(&iLocal_4 + 3624) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3632[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(551,4546f, 99,28046f, 1821,368f), Vector(0.0f, 3,451324f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[0], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(489,0941f, 95,20405f, 1845,159f), Vector(0.0f, -84,46474f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[1], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(487,2572f, 95,42502f, 1846,701f), Vector(0.0f, -83,9371f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[2], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(488,7928f, 95,19826f, 1849,304f), Vector(0.0f, -93,72128f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[3], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(485,7691f, 95,34159f, 1848,682f), Vector(0.0f, -93,19532f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[4], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(607,9122f, 98,96656f, 1804,79f), Vector(0.0f, -103,1153f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[5], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(588,0336f, 100,1575f, 1801,064f), Vector(0.0f, -128,5475f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[6], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(584,3115f, 100,0892f, 1804,786f), Vector(0.0f, -118,3171f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[7], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(609,6806f, 97,63907f, 1820,774f), Vector(0.0f, -93,19532f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[8], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(623,9122f, 99,6832f, 1805,005f), Vector(0.0f, -171,3609f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[9], &iLocal_4 + 3624);
	*(&iLocal_4 + 3632[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(613,9749f, 97,29226f, 1822,804f), Vector(0.0f, -291,4095f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3632[10], &iLocal_4 + 3624);
	*(&iLocal_4 + 3728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(327,6187f, 74,18602f, 1937,095f), Vector(0.0f, -115,7008f, 0.0f));
	*(&iLocal_4 + 3736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(326,3043f, 81,63046f, 1911,847f), Vector(0.0f, -270,215f, 0.0f));
	*(&iLocal_4 + 3744) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 3752[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(757,7805f, 78,52522f, 1235,374f), Vector(0.0f, 21,9018f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3752[0], &iLocal_4 + 3744);
	*(&iLocal_4 + 3752[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(757,511f, 78,52522f, 1246,237f), Vector(0.0f, 21,9018f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3752[1], &iLocal_4 + 3744);
	*(&iLocal_4 + 3752[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(754,0998f, 78,52522f, 1248,99f), Vector(0.0f, 21,9018f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3752[2], &iLocal_4 + 3744);
	*(&iLocal_4 + 3752[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(755,9207f, 78,52522f, 1251,2f), Vector(0.0f, 21,9018f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3752[3], &iLocal_4 + 3744);
	*(&iLocal_4 + 3792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "gun_giveaway_high_power_pistol", Vector(769,4281f, 79,45399f, 1227,72f), Vector(0.0f, -90,53369f, 0.0f));
	*(&iLocal_4 + 3800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "rand_idle_stand", Vector(757,6581f, 78,50735f, 1233,298f), Vector(0.0f, 110,6839f, 0.0f));
	*(&iLocal_4 + 3808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "rand_idle_stand", Vector(304,0934f, 88,45897f, 1913,705f), Vector(0.0f, -94,77738f, 0.0f));
	*(&iLocal_4 + 3816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "nastas_sack", Vector(356,7869f, 79,18803f, 1985,151f), Vector(0.0f, -129,575f, 0.0f));
	*(&iLocal_4 + 3824) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(353,8927f, 75,91576f, 1988,918f), Vector(0.0f, -129,7482f, 0.0f), 4);
	*(&iLocal_4 + 3832) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(368,8922f, 74,5469f, 1990,655f), Vector(0.0f, -33,97771f, 0.0f), 1);
	*(&iLocal_4 + 3840) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(364,0461f, 75,27626f, 1986,572f), Vector(0.0f, -37,77921f, 0.0f), 1);
	*(&iLocal_4 + 3848) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(588,1406f, 100,0242f, 1801,142f), Vector(0.0f, -124,4042f, 0.0f), 4);
	*(&iLocal_4 + 3856) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(607,3815f, 98,9688f, 1805,134f), Vector(0.0f, -89,75309f, 0.0f), 4);
	*(&iLocal_4 + 3864) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(584,3474f, 99,93148f, 1804,78f), Vector(0.0f, -112,6753f, 0.0f), 4);
	*(&iLocal_4 + 3872) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(609,2438f, 97,68916f, 1821,275f), Vector(0.0f, -94,10509f, 0.0f), 4);
	*(&iLocal_4 + 3880) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(614,3157f, 97,48988f, 1822,397f), Vector(0.0f, 72,13945f, 0.0f), 4);
	*(&iLocal_4 + 3888) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(370,1209f, 77,02693f, 2001,354f), Vector(0.0f, 137,7516f, 0.0f), 1);
	*(&iLocal_4 + 3896) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(375,9652f, 72,78875f, 2007,827f), Vector(0.0f, 47,4344f, 0.0f), 4);
	*(&iLocal_4 + 3904) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(358,9084f, 78,73647f, 1988,86f), Vector(0.0f, -131,8568f, 0.0f), 4);
	*(&iLocal_4 + 3912) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(377,4194f, 76,26875f, 1999,757f), Vector(0.0f, -223,194f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_4 + 3920) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3928) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3936) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3944) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3952) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3960) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3968) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3976) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3984) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 3992) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
}

vector3 DBÄcùDãD y BÄtJDãwD"mFBÅo¯DâüJD$IâBÆ=DâªªD&¶ÒBÇ-DáÓD(w&BÈìDà£øD)tBÊ~|DßDkD)ÆþBË_DÝÏ×D(öBÏEpDÜfDD'¿BÒºDÛD&4BÖ*DÙÇED$dîBÜTDØ£D#£BÝ©°D×æ°D -ÞBÜ·DÖcDmBÚcïDÕFD BÖñDÓÕ×DJ"BÔÔðDÒ5üD'¼BÓ5öDÐfD×gBÐCDÎê§DeiBÏÀDÍDSrBÏÙ"D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x21C7B / 138363
{
	var uVar10750;
	var uVar17536;
	var uVar57342;
	
}

void CïBÀDåÍCó9ÁBÀ÷Då_Cø¶&BÁÃ)Dåâ*Cý¸´BÃ9Dæ,¢DBÂ_SDæ¡fDABÃ®)DæÐDmBÂÂÀDæIsD
·BÂ¥µDå D!BÂ³Dä±pDNÌBÂjDä§gD  BÁtDä¥,Ï:Bà°:¯R('p   Cè
B¿K¿DåkâCï&CB¿ Då¶3Cô{ðB¿Õ¬DæeD Y¿BÄ¢¾DåÊÙDÙBÄJPDåÑDòUBÄ¶ÏDäê"DÅBÄzñDä6þD
?BÄÎçDã£(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x22363 / 140131
{
	float fVar38142;
	
	StackVal->f_3065 = StackVal;
	return;
	(StackVal >= StackVal - 14858)->f_58147 = StackVal;
	StackVal->f_3774 = StackVal;
}

void Function_542(int iParam0, int iParam1) //Position: 0x229DE / 141790
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

bool Function_543() //Position: 0x22A28 / 141864
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_556(0))
	{
		return 0;
	}
	if (!Function_555("MINI_GAMES_AND_JOBS\\CAR"))
	{
		return 0;
	}
	if (!Function_552())
	{
		return 0;
	}
	if (!Function_381(&iLocal_1063))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_1146))
	{
		bLocal_1146 = Function_544(10, 0, 1, 0, 0, 0, 0, 0, 0);
		Function_299(&bLocal_1146);
		return 0;
	}
	return 1;
}

var Function_544(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x22A9E / 141982
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
		if (!Function_164(&(Global_43791[Global_46722[3]]), 4))
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
		Function_255(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_551(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_547(&Global_15402[iParam014] + 16, &uParam7);
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
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_546(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
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
		Function_545(&bVar1, 0);
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

void Function_545(var uParam0, bool bParam1) //Position: 0x22FDE / 143326
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_546(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x23000 / 143360
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

var Function_547(int iParam0, int iParam1) //Position: 0x23061 / 143457
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_358(iParam0))
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
						Function_548(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_548(var uParam0, int iParam1) //Position: 0x230EF / 143599
{
	Function_550(&uParam0);
	Function_549(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_549(int iParam0) //Position: 0x2311B / 143643
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_550(int iParam0) //Position: 0x23141 / 143681
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

var Function_551(int iParam0, var uParam1) //Position: 0x23217 / 143895
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

bool Function_552() //Position: 0x232BD / 144061
{
	Function_386(&iLocal_4 + 8, 1194, 2, 0);
	Function_386(&iLocal_4 + 8, 641, 2, 0);
	Function_386(&iLocal_4 + 8, 701, 2, 0);
	Function_386(&iLocal_4 + 8, 563, 2, 0);
	Function_386(&iLocal_4 + 8, 476, 2, 0);
	Function_386(&iLocal_4 + 8, 471, 2, 0);
	Function_386(&iLocal_4 + 8, 472, 2, 0);
	Function_386(&iLocal_4 + 8, 470, 2, 0);
	Function_553(&iLocal_4 + 8, "p_gen_barrel04x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_lantern05x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_crate19x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_crateTnt01x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_crate01x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_barrel01x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_wagonWheel01x", 0, 0);
	Function_553(&iLocal_4 + 8, "p_gen_wagonExplode01ax", 0, 0);
	Function_553(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/gun_giveaway_high_power_pistol", 1, 0);
	Function_553(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_553(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/nastas_sack", 1, 0);
	if (Function_381(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_553(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x234FB / 144635
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_554(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_384(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_554(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x23539 / 144697
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_176(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_384(&(Param0[iVar02]), 4);
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

bool Function_555(int iParam0) //Position: 0x23608 / 144904
{
	if (REQUEST_MISSION_AUDIO_BANK(&iParam0))
	{
		return 1;
	}
	return 0;
}

bool Function_556(bool bParam0) //Position: 0x2361A / 144922
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

void Function_557() //Position: 0x2364A / 144970
{
	ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
	ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	return;
}

void Function_558() //Position: 0x236FF / 145151
{
	Function_553(&iLocal_1063, "knl_hostage", 5, 0);
	Function_553(&iLocal_1063, "custom/knl_hostage", 8, 0);
	Function_553(&iLocal_1063, "gent_hog", 5, 0);
	Function_553(&iLocal_1063, "custom/vehicle_duck", 8, 0);
	Function_553(&iLocal_1063, "custom/wave", 8, 0);
	Function_553(&iLocal_1063, "FBI05_injured_guy_in_car", 5, 0);
	Function_553(&iLocal_1063, "custom/FBI05_injured_guy_in_car", 8, 0);
	Function_386(&iLocal_1063, 1194, 2, 0);
	Function_553(&iLocal_1063, "FBI05_Nastas_Backseat", 5, 0);
	Function_553(&iLocal_1063, "custom/FBI05_Nastas_Backseat", 8, 0);
	Function_553(&iLocal_1063, "FBI05_gaurd_companion", 5, 0);
	Function_553(&iLocal_1063, "custom/FBI05_gaurd_companion", 8, 0);
	Function_553(&iLocal_1063, "FBI05", 10, 0);
	Function_553(&iLocal_1063, "fix_car", 1, 0);
	Function_553(&iLocal_1063, "gent_car", 5, 0);
	return;
}

void Function_559(int iParam0, bool bParam1) //Position: 0x238B0 / 145584
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_572(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_247(&iParam0))
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
	if (!Function_247(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_213();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_254();
	Function_236();
	Function_576("");
	Function_571(0);
	Function_570();
	Function_204();
	Function_203();
	ENABLE_JOURNAL_REPLAY(0);
	Function_569();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_562(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_280(0, 0x40400000);
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
	Function_561(13);
	Function_561(14);
	Function_561(25);
	Function_561(24);
	Function_561(12);
	Function_561(27);
	Function_561(26);
	Function_561(15);
	Function_560();
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

void Function_560() //Position: 0x23CF0 / 146672
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

void Function_561(bool bParam0) //Position: 0x23D75 / 146805
{
	if (bParam0 >= 4294967295 || bParam0 <= 32)
	{
		return;
	}
	Global_47080[bParam0] = 0;
	Global_47147 = 1;
	return;
}

var Function_562(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x23D95 / 146837
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
		Function_568(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_567())
		{
			return "";
		}
	}
	if (!Function_565())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_197();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_264(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_264(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_264(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_264(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_564(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_564(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
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
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_74(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
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
		Function_563(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_563(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x240F4 / 147700
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

var Function_564(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2413E / 147774
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

bool Function_565() //Position: 0x241DE / 147934
{
	if (Function_566() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_566() //Position: 0x241F4 / 147956
{
	return Global_21369.f_244;
}

bool Function_567() //Position: 0x241FF / 147967
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_568(var uParam0, bool bParam1, bool bParam2) //Position: 0x2421F / 147999
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

void Function_569() //Position: 0x2424E / 148046
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

void Function_570() //Position: 0x24294 / 148116
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_571(int iParam0) //Position: 0x242AA / 148138
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_207())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_572(int iParam0, int iParam1) //Position: 0x242E3 / 148195
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
			Function_573(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_573(struct<113> Param0) //Position: 0x2436A / 148330
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

void Function_574() //Position: 0x243C8 / 148424
{
	return;
}

bool Function_575() //Position: 0x243CE / 148430
{
	struct<5> Var0;
	
	if (IS_ACTOR_DEAD(&bLocal_1152))
	{
		return 1;
	}
	if (iLocal_1243)
	{
		return 0;
	}
	GET_OBJECT_AXIS(&bLocal_1152, &Var0, 1);
	if (StackVal < 0,2f)
	{
		fLocal_1222 = -1.0f;
		return 0;
	}
	if (fLocal_1222 > 0.0f)
	{
		fLocal_1222 = GET_CURRENT_GAME_TIME();
	}
	return (GET_CURRENT_GAME_TIME() - fLocal_1222) <= 1.0f;
}

void Function_576(char* cParam0) //Position: 0x2441D / 148509
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

int Function_577(int iParam0, int iParam1) //Position: 0x24489 / 148617
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_578(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (GET_CRIME_CRIMINAL(&uVar3) != &iParam0 && Global_41252[GET_CRIME_TYPE(&uVar3)11].f_40 <= iParam1)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_578(var uParam0, int iParam1) //Position: 0x2451F / 148767
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

bool Function_579(int iParam0) //Position: 0x24555 / 148821
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_580(struct<25> Param0) //Position: 0x24573 / 148851
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
			Function_581(&Param0, 1);
			return 1;
		}
	}
	Function_581(&Param0, 0);
	return 0;
}

void Function_581(struct<25> Param0) //Position: 0x245FF / 148991
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

bool Function_582(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2462A / 149034
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
		Function_581(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_601(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_600(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_600(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_586(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_581(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_585(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_584(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_585(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_583(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_576(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_584(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_581(&Param2, 0);
	return 0;
}

void Function_583(char* cParam0) //Position: 0x24A40 / 150080
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

void Function_584(struct<25> Param0) //Position: 0x24B34 / 150324
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

void Function_585(bool bParam0) //Position: 0x24BAC / 150444
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_586(struct<57> Param0) //Position: 0x24BD0 / 150480
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
			return Function_597(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_590(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_597(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_587(&Param0, bVar2);
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
						bVar2 = Function_597(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_587(&Param0, bVar2);
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

var Function_587(int iParam0, bool bParam1) //Position: 0x24D41 / 150849
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
				bParam1 = Function_589(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_588(16);
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
				bParam1 = Function_589(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_588(256);
			}
		}
	}
	return bParam1;
}

bool Function_588(int iParam0) //Position: 0x24E7D / 151165
{
	return 2 | iParam0;
}

int Function_589(int iParam0) //Position: 0x24E87 / 151175
{
	return 4 | iParam0;
}

int Function_590(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x24E91 / 151185
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
				iParam3 = Function_596(&iParam0, &iParam1, bParam4);
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
			return Function_588(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_591(&iParam0, &iParam1, 0, bParam4);
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
			return Function_588(16);
		}
	}
	return 0;
}

int Function_591(int iParam0, vector3 vParam1) //Position: 0x24F4C / 151372
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_595(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_594(iVar0, 3, 1, bParam3))
			{
				if (!Function_600(&iParam0, 8, 1))
				{
					return Function_593(64, 1024, bParam2);
				}
			}
			return Function_592(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_594(iVar0, 2, 1, bParam3))
			{
				if (!Function_600(&iParam0, 32, 1))
				{
					return Function_593(64, 1024, bParam2);
				}
			}
			return Function_592(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_594(iVar0, 1, 1, bParam3))
			{
				if (!Function_600(&iParam0, 64, 1))
				{
					return Function_593(64, 1024, bParam2);
				}
			}
			return Function_592(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_594(iVar0, 3, 1, bParam3))
			{
				if (!Function_600(&iParam0, 128, 1))
				{
					return Function_593(64, 1024, bParam2);
				}
			}
			return Function_592(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_594(iVar0, 1, 1, bParam3))
			{
				if (!Function_600(&iParam0, 1024, 1))
				{
					return Function_593(64, 1024, bParam2);
				}
			}
			return Function_592(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_594(iVar0, 1, 1, bParam3))
			{
				if (!Function_600(&iParam0, 1024, 1))
				{
					return Function_593(64, 1024, bParam2);
				}
			}
			return Function_592(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_592(int iParam0, int iParam1, bool bParam2) //Position: 0x25114 / 151828
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_593(int iParam0, int iParam1, bool bParam2) //Position: 0x25129 / 151849
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_594(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2513E / 151870
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_595(int iParam0) //Position: 0x2515B / 151899
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

int Function_596(var uParam0, vector3 vParam1) //Position: 0x251CE / 152014
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_595(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_594(iVar0, 3, 1, bParam2))
			{
				if (!Function_600(&uParam0, 8, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000009:
			if (Function_594(iVar0, 3, 1, bParam2))
			{
				if (!Function_600(&uParam0, 8, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x0000006E:
			if (Function_594(iVar0, 2, 1, bParam2))
			{
				if (!Function_600(&uParam0, 16, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x0000005B:
			if (Function_594(iVar0, 2, 1, bParam2))
			{
				if (!Function_600(&uParam0, 32, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000031:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&uParam0, 64, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000007:
			if (Function_594(iVar0, 3, 1, bParam2))
			{
				if (!Function_600(&uParam0, 128, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000008:
			if (Function_594(iVar0, 2, 1, bParam2))
			{
				if (!Function_600(&uParam0, 256, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000014:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&uParam0, 512, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000018:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&uParam0, 512, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000057:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&uParam0, 1024, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000058:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&uParam0, 1024, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_597(struct<65> Param0) //Position: 0x253F7 / 152567
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
						return Function_596(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_600(&Param0, 2, 1))
					{
						return Function_589(8);
					}
					return Function_588(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_600(&Param0, 4, 1))
					{
						return Function_589(16);
					}
					return Function_588(16);
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
							return Function_591(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_600(&Param0, 2, 1))
						{
							return Function_589(128);
						}
						return Function_588(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_600(&Param0, 4, 1))
						{
							return Function_589(256);
						}
						return Function_588(256);
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
						return Function_591(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_600(&Param0, 2, 1))
					{
						return Function_589(8);
					}
					return Function_588(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_600(&Param0, 4, 1))
					{
						return Function_589(16);
					}
					return Function_588(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_599(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_600(&Param0, 2, 1))
					{
						return Function_589(8);
					}
					return Function_588(8);
				}
				if (!Function_600(&Param0, 4, 1))
				{
					return Function_589(16);
				}
				return Function_588(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_591(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_598(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_588(128);
							}
							if (!Function_600(&Param0, 2, 1))
							{
								return Function_589(8);
							}
							return Function_588(8);
						}
						if (iParam4 == 2)
						{
							if (Function_598(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_588(256);
							}
							if (!Function_600(&Param0, 4, 1))
							{
								return Function_589(16);
							}
							return Function_588(16);
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

bool Function_598(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x256DD / 153309
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

int Function_599(int iParam0, vector3 vParam1) //Position: 0x257AB / 153515
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_595(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_594(iVar0, 2, 1, bParam2))
			{
				if (!Function_600(&iParam0, 16, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x0000005B:
			if (Function_594(iVar0, 2, 1, bParam2))
			{
				if (!Function_600(&iParam0, 32, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000057:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&iParam0, 1024, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		case 0x00000058:
			if (Function_594(iVar0, 1, 1, bParam2))
			{
				if (!Function_600(&iParam0, 1024, 1))
				{
					return Function_589(64);
				}
			}
			return Function_588(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_600(struct<69> Param0) //Position: 0x258CD / 153805
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

int Function_601(int iParam0) //Position: 0x258F7 / 153847
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_602() //Position: 0x2592D / 153901
{
	switch (bLocal_1142)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

bool Function_603(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2596B / 153963
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&bParam1, bParam2) != &bParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&bParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_604() //Position: 0x25995 / 154005
{
	if (!iLocal_1243 && !iLocal_1521)
	{
		if (IS_ACTOR_VALID(&bLocal_1152))
		{
			if (Function_603(&Global_54076, &bLocal_1152, 2) || Function_603(&Global_54076, &bLocal_1152, 3))
			{
				if (!iLocal_1488)
				{
					iLocal_1488 = 1;
				}
				if (iLocal_1447)
				{
					if (iLocal_1473 == 3)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_JonGetsBakInCar", "FBI05_JonGetsBakInCar", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_JonGetsBakCar", "FBI05_JonGetsBakCar", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					}
					iLocal_1447 = 0;
					iLocal_1508 = 0;
				}
			}
			else if ((iLocal_1141 != 0 || iLocal_1141 != 3) || (iLocal_1141 != 4 && bLocal_1142 <= 9))
			{
				if (!Function_242(&iLocal_1194))
				{
					Function_398(&iLocal_1194);
				}
				else if (iLocal_1488)
				{
					if (!iLocal_1447)
					{
						if (iLocal_1473 == 3)
						{
							switch (RAND_INT_RANGE(0, true))
							{
								case 0x00000000:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_JumpsOutCarBlakwtr", "FBI05_JumpsOutCarBlakwtr", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									iLocal_1447 = 1;
									Function_245(&iLocal_1194);
									break;
								
								case 0x00000001:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JumpsOutCarBlakwtr2", "FBI05_JumpsOutCarBlakwtr2", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									iLocal_1447 = 1;
									Function_245(&iLocal_1194);
									break;
							}
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_JumpsOutCar", "FBI05_JumpsOutCar", 1, 1, 0, 2, 1, 0, 0, 1000, 0, 0);
							iLocal_1447 = 1;
							Function_245(&iLocal_1194);
						}
					}
					else if (!iLocal_1508)
					{
						if (Function_240(&iLocal_1194) <= 10.0f)
						{
							if (Function_313(&Global_54076, &bLocal_1152, 25.0f))
							{
								if (iLocal_1473 == 3)
								{
									switch (RAND_INT_RANGE(0, true))
									{
										case 0x00000000:
											SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_WaitJonGetInCar2", "FBI05_WaitJonGetInCar2", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
											break;
										
										case 0x00000001:
											SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_GetBakInCarFoo", "FBI05_GetBakInCarFoo", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
											break;
									}
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_WaitGetBakOnCar", "FBI05_WaitGetBakOnCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
							}
							else if (iLocal_1473 == 3)
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_WalksAwayFromCar", "FBI05_WalksAwayFromCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
							}
							else
							{
								switch (RAND_INT_RANGE(0, true))
								{
									case 0x00000000:
										SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_RunsAwayNoCar", "FBI05_RunsAwayNoCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
										break;
									
									case 0x00000001:
										SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_WalksAwayInsteadCar", "FBI05_WalksAwayInsteadCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
										break;
									}
							}
							iLocal_1508 = 1;
						}
					}
					else if (Function_240(&iLocal_1194) <= 15.0f)
					{
						Function_245(&iLocal_1194);
						iLocal_1508 = 0;
					}
				}
			}
		}
	}
	return;
}

void Function_605() //Position: 0x25E01 / 155137
{
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		if (IS_ACTOR_VALID(&bLocal_1148))
		{
			if (Function_603(&bLocal_1148, &bLocal_1152, 0))
			{
				if (!iLocal_1490[0])
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1148, 2);
					AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&bLocal_1148, 0);
					iLocal_1048 = 1;
					SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1148, false);
					iLocal_1490[0] = 1;
				}
			}
			else if (iLocal_1490[0])
			{
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1148, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&bLocal_1148, 1);
				iLocal_1048 = 0;
				iLocal_1490[0] = 0;
			}
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		if (IS_ACTOR_VALID(&bLocal_1146))
		{
			if (Function_603(&bLocal_1146, &bLocal_1152, 1))
			{
				if (!iLocal_1490[1])
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1146, false);
					iLocal_1490[1] = 1;
				}
			}
			else if (iLocal_1490[1])
			{
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1146, true);
				iLocal_1490[1] = 0;
			}
		}
	}
	return;
}

void Function_606() //Position: 0x25ED5 / 155349
{
	if (IS_ACTOR_VALID(&bLocal_1152))
	{
		if (IS_ACTOR_VALID(&bLocal_1148))
		{
			if (IS_ACTOR_ALIVE(&bLocal_1148))
			{
				if (Function_603(&bLocal_1148, &bLocal_1152, 0))
				{
					if (!iLocal_1469)
					{
						MEMORY_ALLOW_SHOOTING(&bLocal_1148, false);
						iLocal_1469 = 1;
					}
				}
				else if (iLocal_1469)
				{
					MEMORY_ALLOW_SHOOTING(&bLocal_1148, true);
					iLocal_1469 = 0;
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_1146))
		{
			if (IS_ACTOR_ALIVE(&bLocal_1146))
			{
				if (Function_603(&bLocal_1146, &bLocal_1152, 1))
				{
					if (!iLocal_1470)
					{
						MEMORY_ALLOW_SHOOTING(&bLocal_1146, false);
						iLocal_1470 = 1;
					}
				}
				else if (iLocal_1470)
				{
					MEMORY_ALLOW_SHOOTING(&bLocal_1146, true);
					iLocal_1470 = 0;
				}
			}
		}
	}
	return;
}

void Function_607() //Position: 0x25F7B / 155515
{
	bool bVar0;
	
	Function_611();
	iLocal_1498 = Function_609(&uLocal_1500, &uLocal_1221, 0, 7.0f, iLocal_1241);
	if (IS_ACTOR_VALID(&iLocal_1498))
	{
		if (!IS_ACTOR_ANIMAL(&iLocal_1498))
		{
			if (&iLocal_1498 == &bLocal_1146)
			{
				if (MEMORY_GET_IS_VISIBLE(&bLocal_1146, &Global_54076))
				{
					if (iLocal_1241)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_GunOnRossCombat", "FBI05_GunOnRossCombat", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						bVar0 = RAND_INT_RANGE(0, true);
						switch (bVar0)
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_GunOnRossOutside", "FBI05_GunOnRossOutside", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_GunOnRossWrek", "FBI05_GunOnRossWrek", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							}
						}
				}
			}
			else if (&iLocal_1498 == &bLocal_1148)
			{
				if (MEMORY_GET_IS_VISIBLE(&bLocal_1148, &Global_54076))
				{
					if (iLocal_1141 != 3 && bLocal_1142 > 8)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_GunOnFordCombat", "FBI05_GunOnFordCombat", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
					else if (!iLocal_1241)
					{
						switch (RAND_INT_RANGE(0, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_GunOnFordWrek", "FBI05_GunOnFordWrek", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_GunOnFordOutside", "FBI05_GunOnFordOutside", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
						}
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonTargetsFordham", "FBI05_JonTargetsFordham", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
				}
			}
			else if (!GET_FACTIONS_STATUS(GET_ACTOR_FACTION(&Global_54076), GET_ACTOR_FACTION(&iLocal_1498)) != 4)
			{
				if (MEMORY_GET_IS_VISIBLE(&bLocal_1148, &iLocal_1498) || MEMORY_GET_IS_VISIBLE(&bLocal_1146, &iLocal_1498))
				{
					switch (RAND_INT_RANGE(0, 2))
					{
						case 0x00000000:
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_GunOnAmbWrek", "FBI05_GunOnAmbWrek", 0, 1, 1, 1, 1, 0, 0, 1000, 0, 0);
							break;
						
						case 0x00000001:
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_GunOnAmbChar", "FBI05_GunOnAmbChar", 0, 1, 1, 1, 1, 0, 0, 1000, 0, 0);
							break;
						
						case 0x00000002:
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_GunOnAmbChar2", "FBI05_GunOnAmbChar2", 0, 1, 1, 1, 1, 0, 0, 1000, 0, 0);
							break;
						}
					}
				}
			}
	}
	if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
	{
		if (!iLocal_1258)
		{
			if (!IS_ACTOR_ANIMAL(GET_LAST_ATTACK_TARGET(&Global_54076)))
			{
				if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bLocal_1146)
				{
					if (iLocal_1241)
					{
						if (Function_608(&bLocal_1146))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_AssaultsRossCombat", "FBI05_AssaultsRossCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsRossCombat", "FBI05_ShootsRossCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (Function_608(&bLocal_1146))
					{
						switch (RAND_INT_RANGE(0, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsRossOutsideC", "FBI05_ShootsRossOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsRossWrek", "FBI05_ShootsRossWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
						}
					}
					else
					{
						switch (RAND_INT_RANGE(0, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_AssaultsRossOutsideC", "FBI05_AssaultsRossOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								if (Function_313(&Global_54076, &bLocal_1148, 25.0f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsRossWrek", "FBI05_ShootsRossWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_AssaultsRossWrek", "FBI05_AssaultsRossWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								break;
							}
					}
					iLocal_1258 = 1;
					CLEAR_LAST_ATTACK(&Global_54076);
				}
				else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bLocal_1148)
				{
					if (iLocal_1241)
					{
						if (Function_608(&bLocal_1148))
						{
							switch (RAND_INT_RANGE(0, true))
							{
								case 0x00000000:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_AssaultsFordCombat", "FBI05_AssaultsFordCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								
								case 0x00000001:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonAssaultsFord", "FBI05_JonAssaultsFord", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
							}
						}
						else
						{
							switch (RAND_INT_RANGE(0, true))
							{
								case 0x00000000:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsFordCombat", "FBI05_ShootsFordCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								
								case 0x00000001:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonShootsFord", "FBI05_JonShootsFord", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								}
						}
					}
					else if (Function_608(&bLocal_1148))
					{
						switch (RAND_INT_RANGE(0, 2))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_AssaultsFordOutsideC", "FBI05_AssaultsFordOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								if (Function_313(&Global_54076, &bLocal_1146, 25.0f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_AssaultsFordWrek", "FBI05_AssaultsFordWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_AssaultsFordOutsideC", "FBI05_AssaultsFordOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								break;
						}
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsFordWrek", "FBI05_ShootsFordWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
					iLocal_1258 = 1;
					CLEAR_LAST_ATTACK(&Global_54076);
				}
				else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bLocal_1150)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsFordOutsideC", "FBI05_ShootsFordOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
					iLocal_1258 = 1;
					CLEAR_LAST_ATTACK(&Global_54076);
				}
				else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bLocal_1152)
				{
					if (Function_242(&iLocal_1216))
					{
						Function_245(&iLocal_1216);
					}
					else
					{
						Function_398(&iLocal_1216);
					}
					CLEAR_LAST_ATTACK(&Global_54076);
					iLocal_1220++;
					if (!iLocal_1215)
					{
						iLocal_1215 = 1;
						switch (RAND_INT_RANGE(0, true))
						{
							case 0x00000000:
								if (iLocal_1528 <= 6)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsCarWrek", "FBI05_ShootsCarWrek", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsCar", "FBI05_ShootsCar", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								break;
							
							case 0x00000001:
								if (iLocal_1528 <= 6)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsCarWrek2", "FBI05_ShootsCarWrek2", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsCar2", "FBI05_ShootsCar2", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								break;
							}
					}
					if (iLocal_1220 > 3)
					{
						bLocal_1239 = true;
						Function_576("Car_Attacked");
						iLocal_1258 = 1;
					}
				}
				else if (!GET_FACTIONS_STATUS(GET_ACTOR_FACTION(&Global_54076), GET_ACTOR_FACTION(&iLocal_1498)) != 4)
				{
					if (iLocal_1528 <= 6)
					{
						CLEAR_LAST_ATTACK(&Global_54076);
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsAmbWrek", "FBI05_ShootsAmbWrek", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
						iLocal_1258 = 1;
					}
					else
					{
						if (Function_608(GET_LAST_ATTACK_TARGET(&Global_54076)))
						{
							CLEAR_LAST_ATTACK(&Global_54076);
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_AssaultsAmbWrek", "FBI05_AssaultsAmbWrek", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
						}
						else
						{
							switch (RAND_INT_RANGE(0, true))
							{
								case 0x00000000:
									CLEAR_LAST_ATTACK(&Global_54076);
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsAmbChar", "FBI05_ShootsAmbChar", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								
								case 0x00000001:
									CLEAR_LAST_ATTACK(&Global_54076);
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsAmbChar2", "FBI05_ShootsAmbChar2", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								}
						}
						iLocal_1258 = 1;
					}
				}
			}
		}
		if (Function_242(&iLocal_1216))
		{
			if (Function_240(&iLocal_1216) <= 10.0f)
			{
				CLEAR_LAST_ATTACK(&Global_54076);
				Function_245(&iLocal_1216);
				iLocal_1215 = 0;
			}
		}
	}
	else
	{
		if (GET_LAST_ATTACK_TIME(&Global_54076) == -1.0f)
		{
			if (!iLocal_1446)
			{
				if (Function_242(&iLocal_1202))
				{
					if (iLocal_1528 > 6 && iLocal_1528 == 3)
					{
						if (Function_313(&Global_54076, &bLocal_1146, 25.0f) && iLocal_1141 == 1)
						{
						}
						else if (Function_313(&Global_54076, &bLocal_1148, 35.0f) && iLocal_1141 != 1)
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_JonShootsWalkin", "FBI05_JonShootsWalkin", 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
							iLocal_1446 = 1;
						}
					}
					else if (iLocal_1528 != 3)
					{
						switch (RAND_INT_RANGE(0, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1146, "FBI05_ShootsGunRand", "FBI05_ShootsGunRand", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1446 = 1;
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1148, "FBI05_ShootsGunRand2", "FBI05_ShootsGunRand2", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1446 = 1;
								break;
							}
					}
				}
				else
				{
					Function_398(&iLocal_1202);
				}
			}
		}
		if (Function_242(&iLocal_1202))
		{
			if (Function_240(&iLocal_1202) <= 10.0f)
			{
				CLEAR_LAST_ATTACK(&Global_54076);
				Function_245(&iLocal_1202);
				iLocal_1446 = 0;
			}
		}
	}
	return;
}

bool Function_608(int iParam0) //Position: 0x26DCE / 159182
{
	if (GET_LAST_HIT_WEAPON(&iParam0) != 22 || GET_LAST_HIT_WEAPON(&iParam0) != 4294967295)
	{
		return 1;
	}
	return 0;
}

var Function_609(bool bParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x26DEC / 159212
{
	float fVar0;
	
	if (Function_610(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		if (IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			if (GET_CURRENT_GAME_TIME() <= uParam1)
			{
				fVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
				if (IS_ACTOR_VALID(&fVar0))
				{
					if (IS_ACTOR_VALID(&bParam0))
					{
						if ((bParam4 && (GET_CURRENT_GAME_TIME() - uParam1) <= 5,5f) || (!&bParam4 && (GET_CURRENT_GAME_TIME() - uParam1) <= 2,5f))
						{
							if (Function_313(&bParam0, &Global_54076, 50.0f))
							{
								if (!IS_ACTOR_ANIMAL(&fVar0))
								{
									if (!AI_IS_HOSTILE_OR_ENEMY(&fVar0, &Global_54076))
									{
										if (&bParam2)
										{
											ABORT_SCRIPTED_CONVERSATION(0);
										}
										uParam1 = (GET_CURRENT_GAME_TIME() + &fParam3);
										return &fVar0;
									}
								}
							}
						}
					}
					if (uParam1 <= 0.0f)
					{
						bParam0 = &fVar0;
						uParam1 = GET_CURRENT_GAME_TIME();
					}
				}
				else
				{
					bParam0 = "";
					uParam1 = 0.0f;
				}
			}
		}
	}
	return "";
}

bool Function_610(bool bParam0) //Position: 0x26ECE / 159438
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

void Function_611() //Position: 0x26F14 / 159508
{
	if (Function_242(&iLocal_1216))
	{
		if (Function_240(&iLocal_1216) <= 20.0f)
		{
			if (iLocal_1220 > 1)
			{
				iLocal_1220 = 0;
			}
		}
	}
	return;
}

void Function_612(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x26F3D / 159549
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_613(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x26F6A / 159594
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_614(StackVal, Param4, uParam3, &iParam6);
		Function_226(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_614(struct<2> Param0, var uParam2, var uParam3) //Position: 0x26FAB / 159659
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_616(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_615(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_615(int iParam0) //Position: 0x2702D / 159789
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

var Function_616(struct<2> Param0, bool bParam2) //Position: 0x274DB / 160987
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

struct<8> Function_617(int iParam0) //Position: 0x27547 / 161095
{
	Function_372(iParam0 + 1);
	return StackVal, Function_372(iParam0 + 1);
}

int Function_618(int iParam0) //Position: 0x27554 / 161108
{
	return Function_371(iParam0 + 1);
}

