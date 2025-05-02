//Decompiled with MagicRDR v1.0
//Function Count : 661
//Statics Count : 1767
//Natives Count : 834
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 13;
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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
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
	var uLocal_60 = 8;
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
	var uLocal_94 = 15;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
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
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
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
	var uLocal_156 = 4;
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
	var uLocal_176 = 2;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	float fLocal_185 = 0.0f;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 4;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	struct<32832> Local_197[0];
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
	var uLocal_208 = 2;
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
	var uLocal_220 = 5;
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
	var uLocal_246 = 12;
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
	var uLocal_296 = 1;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 3;
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
	var uLocal_322 = 3;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 2;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 5;
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
	var uLocal_354 = 7;
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
	var uLocal_380 = 3;
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
	var uLocal_400 = 3;
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
	var uLocal_466 = 9;
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
	var uLocal_488 = 5;
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
	var uLocal_520 = 5;
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
	var uLocal_534 = 5;
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
	var uLocal_566 = 5;
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
	var uLocal_580 = 2;
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
	var uLocal_596 = 7;
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
	var uLocal_642 = 6;
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
	var uLocal_682 = 5;
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
	var uLocal_716 = 7;
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
	var uLocal_760 = 5;
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
	var uLocal_792 = 3;
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
	var uLocal_812 = 5;
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
	int iLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 5;
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
	var uLocal_916 = 1;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 3;
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
	char* cLocal_948[64] = "";
	int iLocal_964 = 0;
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
	bool bLocal_976 = false;
	bool bLocal_977 = false;
	bool bLocal_978 = false;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	var uLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992[3] = { 0, 0, 0 };
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	int iLocal_1000 = 17;
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
	int iLocal_1070 = 30;
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
	float fLocal_1210 = 1,401298E-44f;
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
	var uLocal_1235 = 13;
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
	struct<15> Local_1297[6];
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
	var uLocal_1407 = 5;
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
	var uLocal_1437 = 5;
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
	var uLocal_1467 = 5;
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
	struct<2> Local_1479 = { 0, 0 } ;
	var uLocal_1481 = 0;
	struct<2> Local_1482 = { 0, 0 } ;
	var uLocal_1484 = 0;
	struct<5> Local_1485 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	struct<5> Local_1495 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	bool bLocal_1505 = false;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	int iLocal_1515 = 0;
	var uLocal_1516 = 0;
	int iLocal_1517 = 0;
	var uLocal_1518 = 0;
	int iLocal_1519 = 0;
	var uLocal_1520 = 0;
	bool bLocal_1521 = false;
	var uLocal_1522 = 0;
	char[] cLocal_1523[4] = 0;
	var uLocal_1524 = 0;
	bool bLocal_1525 = false;
	int iLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	int iLocal_1529 = 0;
	var uLocal_1530 = 0;
	int iLocal_1531 = 0;
	var uLocal_1532 = 0;
	int iLocal_1533 = 0;
	var uLocal_1534 = 0;
	int iLocal_1535 = 0;
	var uLocal_1536 = 0;
	int iLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	bool bLocal_1547 = false;
	bool bLocal_1548 = false;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	int iLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	int iLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	int iLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	int iLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	int iLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	int iLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	int iLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	int iLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	int iLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	int iLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	int iLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	int iLocal_1599 = 0;
	var uLocal_1600 = 0;
	struct<2> Local_1601 = { 0, 0 } ;
	var uLocal_1603 = 0;
	struct<2> Local_1604 = { 0, 0 } ;
	var uLocal_1606 = 0;
	struct<2> Local_1607 = { 0, 0 } ;
	var uLocal_1609 = 0;
	struct<2> Local_1610 = { 0, 0 } ;
	var uLocal_1612 = 0;
	struct<2> Local_1613 = { 0, 0 } ;
	var uLocal_1615 = 0;
	struct<2> Local_1616 = { 0, 0 } ;
	var uLocal_1618 = 0;
	bool bLocal_1619 = false;
	bool bLocal_1620 = false;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	bool bLocal_1625 = false;
	bool bLocal_1626 = false;
	bool bLocal_1627 = false;
	int iLocal_1628 = 0;
	var uLocal_1629 = 0;
	int iLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	int iLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	int iLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	int iLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	int iLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	int iLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	int iLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	int iLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	bool bLocal_1666 = false;
	int iLocal_1667 = 0;
	bool bLocal_1668 = false;
	int iLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	struct<2> Local_1676 = { 0, 0 } ;
	var uLocal_1678 = 0;
	struct<2> Local_1679 = { 0, 0 } ;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	int iLocal_1684 = 0;
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
	vector3 vLocal_1702[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	int iLocal_1746 = 0;
	int iLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	int iLocal_1754 = 0;
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
	iLocal_988 = 0;
	Local_950 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_962 = 99;
	iLocal_963 = 6;
	iLocal_964 = 1000;
	while (Function_275())
	{
		Function_225();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x44 / 68
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1539);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1543))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1543);
	}
	DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1744, 1);
	UI_EXIT("Rebel04_Detonator");
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
	}
	if (IS_OBJECT_VALID(&uLocal_1623))
	{
		Function_224(&uLocal_1623);
	}
	if (IS_ACTOR_VALID(&bLocal_1505))
	{
	}
	ACTOR_END_FORCE_HOLSTER(&Global_54076);
	if (DECOR_CHECK_EXIST(&Global_54076, "wagoncutfinished"))
	{
		DECOR_REMOVE(&Global_54076, "wagoncutfinished");
	}
	STREAMING_UNLOAD_BOUNDS();
	if (FLASH_GET_BOOL("help", "nShowBombs"))
	{
		FLASH_SET_BOOL("help", "nShowBombs", 0);
	}
	Function_223();
	if (IS_BLIP_VALID(&uLocal_1591))
	{
		REMOVE_BLIP(&uLocal_1591);
	}
	if (IS_BLIP_VALID(&uLocal_1593))
	{
		REMOVE_BLIP(&uLocal_1593);
	}
	if (IS_BLIP_VALID(&iLocal_1595))
	{
		REMOVE_BLIP(&iLocal_1595);
	}
	if (IS_BLIP_VALID(&uLocal_1597))
	{
		REMOVE_BLIP(&uLocal_1597);
	}
	if (IS_BLIP_VALID(&iLocal_1599))
	{
		REMOVE_BLIP(&iLocal_1599);
	}
	if (IS_BLIP_VALID(&uLocal_1527))
	{
		REMOVE_BLIP(&uLocal_1527);
	}
	Function_222();
	if (iLocal_992[0] || iLocal_992[1])
	{
		Function_221();
	}
	if (iLocal_992[1] || iLocal_992[2])
	{
		Function_220();
	}
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_989);
	Function_219(&cLocal_948);
	Function_219(&iLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	if (HUD_IS_FADED() && !HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	if (Function_216(8))
	{
		Function_213(8, 1, 0, 1, 1);
	}
	else if (IS_ACTOR_VALID(&iLocal_989))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_989, 0);
	}
	Function_212();
	if (IS_ACTOR_VALID(&bLocal_1505))
	{
		DESTROY_ACTOR(&bLocal_1505);
	}
	Function_182(bLocal_977, 1, 0, 1, 1, 1, 1, 1);
	Function_178(&iLocal_1000);
	Function_178(&iLocal_1070);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_1192))
	{
		DESTROY_ITERATOR(&uLocal_1192);
	}
	RELEASE_LAYOUT_REF(&cLocal_948);
	if (bLocal_976)
	{
		Function_26(Local_950, 1, 1, 1, 0);
	}
	else if (bLocal_977)
	{
		Function_22(Local_950);
		CLEAR_DECALS();
	}
	else
	{
		Function_2(Local_950);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x298 / 664
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2B9 / 697
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2D6 / 726
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2F9 / 761
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x310 / 784
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

void Function_7(int iParam0) //Position: 0x3B2 / 946
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x3D5 / 981
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

void Function_9() //Position: 0x41F / 1055
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x438 / 1080
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

void Function_11(var uParam0, bool bParam1) //Position: 0x48B / 1163
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

struct<16> Function_12(int iParam0) //Position: 0x5B5 / 1461
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

bool Function_13() //Position: 0x5EF / 1519
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x60A / 1546
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x617 / 1559
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x637 / 1591
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x64E / 1614
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x669 / 1641
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8B0 / 2224
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8DC / 2268
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

bool Function_21(int iParam0) //Position: 0x900 / 2304
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x915 / 2325
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x933 / 2355
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
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
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x9D9 / 2521
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

struct<24> Function_25(char* cParam0) //Position: 0xA18 / 2584
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC6E / 3182
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

void Function_27() //Position: 0xD62 / 3426
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

int Function_28(int iParam0, bool bParam1) //Position: 0xD94 / 3476
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

int Function_29(int iParam0) //Position: 0xDD2 / 3538
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xDEC / 3564
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xE02 / 3586
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10FF / 4351
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

void Function_33(char* cParam0) //Position: 0x1174 / 4468
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x11AE / 4526
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

bool Function_35(var uParam0, int iParam1) //Position: 0x122A / 4650
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x123D / 4669
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

int Function_37(int iParam0) //Position: 0x12DE / 4830
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x131B / 4891
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1331 / 4913
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
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
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x158F / 5519
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x15CD / 5581
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

void Function_42(bool bParam0) //Position: 0x160C / 5644
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

void Function_43() //Position: 0x1661 / 5729
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

void Function_44() //Position: 0x16AC / 5804
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

void Function_45() //Position: 0x17B2 / 6066
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

void Function_46() //Position: 0x17E5 / 6117
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

void Function_47() //Position: 0x1978 / 6520
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

void Function_48() //Position: 0x1B31 / 6961
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B3F / 6975
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

bool Function_50() //Position: 0x1D5C / 7516
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1D71 / 7537
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E18 / 7704
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20B4 / 8372
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

var Function_54() //Position: 0x26F2 / 9970
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26FB / 9979
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x270C / 9996
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

struct<32> Function_57(char* cParam0) //Position: 0x2803 / 10243
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x281E / 10270
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2885 / 10373
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2897 / 10391
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28A9 / 10409
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

int Function_62(int iParam0) //Position: 0x29DD / 10717
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x29EC / 10732
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A25 / 10789
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A62 / 10850
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BFC / 11260
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

int Function_67(bool bParam0) //Position: 0x2E40 / 11840
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2E81 / 11905
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

struct<8> Function_69() //Position: 0x2F0A / 12042
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

struct<8> Function_70() //Position: 0x2FA1 / 12193
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

void Function_71() //Position: 0x3020 / 12320
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x305D / 12381
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

void Function_73() //Position: 0x3269 / 12905
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

bool Function_74(char* cParam0) //Position: 0x3320 / 13088
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3338 / 13112
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

struct<8> Function_76() //Position: 0x3430 / 13360
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x343A / 13370
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x344B / 13387
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3461 / 13409
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x352D / 13613
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x354A / 13642
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

bool Function_82(int iParam0) //Position: 0x3D76 / 15734
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3DB1 / 15793
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3DC0 / 15808
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

bool Function_85(int iParam0) //Position: 0x429D / 17053
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x42B3 / 17075
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x42D2 / 17106
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x42EC / 17132
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4356 / 17238
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

void Function_90(int iParam0) //Position: 0x457E / 17790
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

void Function_91() //Position: 0x461C / 17948
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

void Function_92() //Position: 0x477E / 18302
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

int Function_93(int iParam0, char* cParam1) //Position: 0x47FE / 18430
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B55 / 19285
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

int Function_95(int iParam0) //Position: 0x4BDD / 19421
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BF7 / 19447
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4C22 / 19490
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C50 / 19536
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4EEC / 20204
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

void Function_100(int iParam0, int iParam1) //Position: 0x50C0 / 20672
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

int Function_101(int iParam0, char* cParam1) //Position: 0x532A / 21290
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

int Function_102() //Position: 0x54BA / 21690
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

void Function_103() //Position: 0x555B / 21851
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

void Function_104(int iParam0) //Position: 0x5619 / 22041
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

var Function_105(int iParam0) //Position: 0x567F / 22143
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

int Function_106(int iParam0, bool bParam1) //Position: 0x570E / 22286
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

var Function_107(int iParam0, int iParam1) //Position: 0x58BA / 22714
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

void Function_108() //Position: 0x58FF / 22783
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5915 / 22805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5955 / 22869
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5995 / 22933
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x59A4 / 22948
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

int Function_113(int iParam0) //Position: 0x5B6C / 23404
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

var Function_114() //Position: 0x5C01 / 23553
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5C26 / 23590
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60F5 / 24821
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

var Function_117(int iParam0) //Position: 0x641C / 25628
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x64BF / 25791
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

int Function_119(int iParam0, bool bParam1) //Position: 0x66BC / 26300
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6867 / 26727
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6939 / 26937
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

void Function_122(int iParam0) //Position: 0x7254 / 29268
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73D1 / 29649
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x74DC / 29916
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x7508 / 29960
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

var Function_126(vector3 vParam0) //Position: 0x755F / 30047
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

void Function_127(var uParam0, int iParam1) //Position: 0x75AD / 30125
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7608 / 30216
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

void Function_129() //Position: 0x77A9 / 30633
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77AF / 30639
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

void Function_131(bool bParam0, int iParam1) //Position: 0x785E / 30814
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x78B3 / 30899
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x78C9 / 30921
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

bool Function_134(int iParam0, int iParam1) //Position: 0x791A / 31002
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

void Function_135(var uParam0, int iParam1) //Position: 0x7947 / 31047
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7958 / 31064
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7972 / 31090
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7983 / 31107
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

void Function_139(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7ADF / 31455
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
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7B6A / 31594
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7B97 / 31639
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

int Function_142(int iParam0) //Position: 0x7D47 / 32071
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

void Function_143(bool bParam0, bool bParam1) //Position: 0x7D9E / 32158
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7DC3 / 32195
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7E19 / 32281
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

bool Function_146(bool bParam0) //Position: 0x7E78 / 32376
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7E84 / 32388
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7EA0 / 32416
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

bool Function_149() //Position: 0x7EF2 / 32498
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7F22 / 32546
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

int Function_151(int iParam0, int iParam1) //Position: 0x7F97 / 32663
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7FF4 / 32756
{
	if (iParam0 != 4294967295)
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8383 / 33667
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8622 / 34338
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9430 / 37936
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

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x961D / 38429
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

void Function_171(bool bParam0, var uParam1, int iParam2) //Position: 0x9728 / 38696
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

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9812 / 38930
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
	Function_177();
	Function_176();
	return;
}

void Function_176() //Position: 0x99EF / 39407
{
	Function_178(&iLocal_892 + 8);
	RELEASE_LAYOUT_REF(&iLocal_892);
	return;
}

void Function_177() //Position: 0x9A04 / 39428
{
	Function_178(&iLocal_4 + 8);
	Function_178(&iLocal_4 + 224);
	Function_178(&iLocal_4 + 360);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_178(int iParam0) //Position: 0x9A26 / 39462
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_179(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_179(struct<2>[] Param0, int iParam1) //Position: 0x9A4E / 39502
{
	if (Function_181(&(Param0[iParam12]), 4))
	{
		if (Function_181(&(Param0[iParam12]), 1))
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
			Function_180(&(Param0[iParam12]), 1);
			Function_180(&(Param0[iParam12]), 2);
			Function_180(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_180(struct<13> Param0) //Position: 0x9B99 / 39833
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_181(struct<13> Param0) //Position: 0x9BB6 / 39862
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9BD4 / 39892
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_211());
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
	Function_210();
	CLEAR_PRINTED_OBJECTIVE();
	Function_209();
	Function_207(0);
	Function_206();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_205();
	Function_204();
	Function_210();
	ENABLE_JOURNAL_REPLAY(1);
	Function_203(1);
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
		Function_202(&Global_54076);
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
	Function_199(Global_42825);
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
	Function_198();
	Function_197(1178687);
	Function_195(33039);
	Function_194(0x218003f);
	Function_193(4194560);
	Function_192();
	Function_191();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_188(0, 1, 1);
	}
	else
	{
		Function_188(0, 1, 1);
	}
	Function_187();
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
	Function_183();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_183() //Position: 0x9DE0 / 40416
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
		if (Function_186() > 3)
		{
			bVar0 *= 2;
		}
		Function_184(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_184(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9E37 / 40503
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_185(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_185(bool bParam0) //Position: 0x9E87 / 40583
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_186() //Position: 0x9EB0 / 40624
{
	return Global_21369.f_248;
}

void Function_187() //Position: 0x9EBB / 40635
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

void Function_188(int iParam0, bool bParam1, int iParam2) //Position: 0x9EE5 / 40677
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
			Function_189(Global_43789);
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

void Function_189(int iParam0) //Position: 0x9FF1 / 40945
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_190())
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

bool Function_190() //Position: 0xA070 / 41072
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

void Function_191() //Position: 0xA0D9 / 41177
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

void Function_192() //Position: 0xA0FF / 41215
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

void Function_193(int iParam0) //Position: 0xA125 / 41253
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_194(int iParam0) //Position: 0xA142 / 41282
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_195(int iParam0) //Position: 0xA155 / 41301
{
	Function_196(&Global_43580, iParam0);
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0xA163 / 41315
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_197(bool bParam0) //Position: 0xA182 / 41346
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_198() //Position: 0xA1AF / 41391
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

void Function_199(int iParam0) //Position: 0xA227 / 41511
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
		Function_200(78, 1, 1);
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

int Function_200(bool bParam0, bool bParam1, int iParam2) //Position: 0xA35D / 41821
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_201(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_201(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_201(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_201(bool bParam0) //Position: 0xA3AB / 41899
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

void Function_202(int iParam0) //Position: 0xA49F / 42143
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

void Function_203(bool bParam0) //Position: 0xA522 / 42274
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

void Function_204() //Position: 0xA599 / 42393
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

void Function_205() //Position: 0xA5DD / 42461
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

void Function_206() //Position: 0xA621 / 42529
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_207(int iParam0) //Position: 0xA637 / 42551
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_208())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_208() //Position: 0xA677 / 42615
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

void Function_209() //Position: 0xA69C / 42652
{
	Global_15862 = 0.0f;
	return;
}

void Function_210() //Position: 0xA6A6 / 42662
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

int Function_211() //Position: 0xA6D1 / 42705
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_212() //Position: 0xA6EE / 42734
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

int Function_213(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA820 / 43040
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
		Function_215(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_214(&Global_15402[iParam014] + 8);
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

void Function_214(int iParam0) //Position: 0xAB62 / 43874
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

void Function_215(int iParam0) //Position: 0xAB95 / 43925
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

bool Function_216(int iParam0) //Position: 0xABAC / 43948
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_IS_REGISTERED_AND_VALID: CompanionsList out of bounds.");
		return 0;
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		if (Function_218(iParam0))
		{
			return 1;
		}
	}
	if (Function_217(&Global_15402[iParam014] + 16))
	{
		return 1;
	}
	return 0;
}

bool Function_217(bool bParam0) //Position: 0xAC33 / 44083
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_218(int iParam0) //Position: 0xAC4A / 44106
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_IS_STREAMED: CompanionsList out of bounds.");
		return 0;
	}
	if (STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return 1;
	}
	return 0;
}

void Function_219(int iParam0) //Position: 0xACAE / 44206
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

void Function_220() //Position: 0xAD16 / 44310
{
	Function_178(&iLocal_4 + 360);
	return;
}

void Function_221() //Position: 0xAD24 / 44324
{
	Function_178(&iLocal_4 + 224);
	return;
}

void Function_222() //Position: 0xAD31 / 44337
{
	if (IS_OBJECT_VALID(&uLocal_1672))
	{
		REMOVE_CAMERA_FROM_CHANNEL(&uLocal_1672, 0);
		DESTROY_CAMERA(&uLocal_1672);
		DESTROY_CAMERA_SHOT(&uLocal_1682);
		DESTROY_CAMERA_SHOT(&iLocal_1684);
		CAMERA_RESET(0);
		DESTROY_OBJECT(&uLocal_1674);
		AI_STOP_IGNORING_ACTORS();
		AI_GOAL_LOOK_CLEAR(&Global_54076);
		STREAMING_UNLOAD_SCENE();
	}
	return;
}

void Function_223() //Position: 0xAD76 / 44406
{
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		DESTROY_OBJECT_GLOW(&iLocal_1529);
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		DESTROY_OBJECT_GLOW(&iLocal_1531);
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		DESTROY_OBJECT_GLOW(&iLocal_1533);
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		DESTROY_OBJECT_GLOW(&iLocal_1535);
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		DESTROY_OBJECT_GLOW(&iLocal_1537);
	}
	return;
}

void Function_224(var uParam0) //Position: 0xADD1 / 44497
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

void Function_225() //Position: 0xAE67 / 44647
{
	var uVar0[7];
	int iVar8;
	
	if (Function_274())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "2 - Set Explosives";
		uVar0[4] = "3 - Ambush (no checkpoint)";
		uVar0[5] = "kill all baddies";
		uVar0[6] = "Last Stage";
		iVar8 = Function_260(&uLocal_980, &uVar0, &Local_950 + 4, GET_DEBUG_PADINDEX(), 0);
		if (iVar8 == 0)
		{
			Function_253();
			Function_252();
			Function_251(&bLocal_976, 8);
			iLocal_964 = 1000;
		}
		else if (iVar8 == 1)
		{
			Function_253();
			Function_252();
			Function_246(bLocal_962);
			Function_242(StackVal, 5, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
			iLocal_964 = 1000;
		}
		else if (iVar8 == 2)
		{
			Function_253();
			Function_252();
			Function_237(&bLocal_978, 4);
		}
		else if (iVar8 == 3)
		{
			Function_236();
			Function_231();
			SET_ACTOR_INVULNERABILITY(&bLocal_1505, true);
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_253();
			Function_252();
			iLocal_963 = 0;
			bLocal_962 = true;
			iLocal_964 = 1000;
		}
		else if (iVar8 == 4)
		{
			Function_236();
			Function_231();
			SET_ACTOR_INVULNERABILITY(&bLocal_1505, true);
			Function_230();
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
			}
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_253();
			Function_252();
			bLocal_962 = 2;
			iLocal_963 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar8 == 5)
		{
			Function_229(&iLocal_1517);
			Function_229(&iLocal_1519);
			Function_228(&bLocal_1521);
		}
		else if (iVar8 == 6)
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_253();
			Function_252();
			Function_226(&iLocal_1194);
			iLocal_963 = 0;
			bLocal_962 = 101;
			iLocal_964 = 1000;
		}
	}
	return;
}

void Function_226(int iParam0) //Position: 0xB059 / 45145
{
	Function_227(&iParam0, 0.0f);
	return;
}

void Function_227(vector3 vParam0) //Position: 0xB066 / 45158
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_228(bool bParam0) //Position: 0xB08B / 45195
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

void Function_229(int iParam0) //Position: 0xB0D6 / 45270
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &iParam0);
		}
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
	}
	return;
}

void Function_230() //Position: 0xB125 / 45349
{
	Local_1601 = *(&iLocal_4 + 2712[03]);
	Local_1604 = *(&iLocal_4 + 2712[43]);
	Local_1607 = *(&iLocal_4 + 2712[13]);
	Local_1610 = *(&iLocal_4 + 2712[33]);
	iLocal_1626 = 1;
	bLocal_1525 = 4;
	iLocal_1526 = 0;
	return;
}

void Function_231() //Position: 0xB16F / 45423
{
	if (!IS_ACTOR_VALID(&bLocal_1505))
	{
		Local_1479 = *(&iLocal_4 + 1624[43]);
		Local_1482 = *(&iLocal_4 + 1624[43] + 12);
		bLocal_1505 = Function_232(StackVal, StackVal, &iLocal_4, "player_wagon", 1199, 976, Local_1479, Local_1482, 1, 976, 976, 976, 4);
		ADD_ACTORSET_MEMBER(&iLocal_892 + 120, &bLocal_1505);
	}
	return;
}

int Function_232(int iParam0, int iParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xB1E0 / 45536
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &iParam1, bParam2, Param4, Param6);
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
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			uVar15 = "";
			if (Function_235(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_234(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_233(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (bVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, bVar18, 0);
			bVar18++;
		}
	}
	return &uVar0;
}

bool Function_233(int iParam0, bool[] bParam1) //Position: 0xB433 / 46131
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

var Function_234(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xB467 / 46183
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

bool Function_235(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB483 / 46211
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &iParam1, &iParam2);
}

void Function_236() //Position: 0xB4AF / 46255
{
	if (IS_ACTOR_VALID(&bLocal_1505))
	{
		DESTROY_ACTOR(&bLocal_1505);
	}
	if (IS_OBJECT_VALID(&bLocal_1505 + 16))
	{
		DESTROY_OBJECT(&bLocal_1505 + 16);
	}
	if (IS_OBJECT_VALID(&bLocal_1505 + 24))
	{
		DESTROY_OBJECT(&bLocal_1505 + 24);
	}
	if (IS_OBJECT_VALID(&bLocal_1505 + 32))
	{
		DESTROY_OBJECT(&bLocal_1505 + 32);
	}
	return;
}

void Function_237(bool bParam0, int iParam1) //Position: 0xB505 / 46341
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_238(&iParam1);
	bParam0 = 1;
	return;
}

void Function_238(int iParam0) //Position: 0xB52A / 46378
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_241("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_240(2) || Function_240(8)) || Function_240(9)) || Function_240(10))
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
		Function_241("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_241("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_241("");
	}
	else if (iParam0 == 8)
	{
		Function_239();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_239();
	}
	return;
}

void Function_239() //Position: 0xB621 / 46625
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_240(int iParam0) //Position: 0xB62D / 46637
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

void Function_241(char* cParam0) //Position: 0xB663 / 46691
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_242(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB6CF / 46799
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_243(StackVal, Param4, uParam3, &iParam6);
		Function_238(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_243(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB710 / 46864
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_245(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_244(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_244(int iParam0) //Position: 0xB792 / 46994
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

var Function_245(struct<2> Param0, bool bParam2) //Position: 0xBC40 / 48192
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

struct<8> Function_246(int iParam0) //Position: 0xBCAC / 48300
{
	Function_247(iParam0 + 1);
	return StackVal, Function_247(iParam0 + 1);
}

struct<8> Function_247(int iParam0) //Position: 0xBCB9 / 48313
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_248(&iLocal_4 + 1584[0]);
			return StackVal, Function_248(&iLocal_4 + 1584[0]);
			break;
		
		case 0x00000001:
			Function_248(&iLocal_4 + 1848[0]);
			return StackVal, Function_248(&iLocal_4 + 1848[0]);
			break;
		
		case 0x00000002:
			Function_248(&iLocal_4 + 2064[0]);
			return StackVal, Function_248(&iLocal_4 + 2064[0]);
			break;
		
		default:
			Function_248(&iLocal_4 + 2248[0]);
			return StackVal, Function_248(&iLocal_4 + 2248[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_248(&iLocal_4 + 1584[0]);
	return StackVal, Function_248(&iLocal_4 + 1584[0]);
}

struct<8> Function_248(bool bParam0) //Position: 0xBD88 / 48520
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

int Function_249(int iParam0) //Position: 0xBDB1 / 48561
{
	return Function_250(iParam0 + 1);
}

int Function_250(int iParam0) //Position: 0xBDBE / 48574
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1584[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1848[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 2064[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 2248[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 1584[0]);
}

void Function_251(bool bParam0, int iParam1) //Position: 0xBE8D / 48781
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_238(&iParam1);
	bParam0 = 1;
	return;
}

void Function_252() //Position: 0xBEB2 / 48818
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_253() //Position: 0xBEC7 / 48839
{
	Function_255();
	Function_254(10, 3);
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xBED6 / 48854
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

void Function_255() //Position: 0xC029 / 49193
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
	SET_ACTOR_INVULNERABILITY(Function_50(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_256() //Position: 0xC074 / 49268
{
	Function_257(25, 2);
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0xC080 / 49280
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

void Function_258(int iParam0, int iParam1) //Position: 0xC2AC / 49836
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

bool Function_259() //Position: 0xC3F9 / 50169
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

var Function_260(struct<17> Param0) //Position: 0xC461 / 50273
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_273(&Var12, &Var0);
	uVar15 = Function_272(uParam1, &Var12);
	Function_271(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_270(&Param0, uVar15);
	Function_268(StackVal, &Param0, Var12.f_12);
	Function_266(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_265(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_262(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_261(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_261(int iParam0, int iParam1, int iParam2) //Position: 0xC555 / 50517
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

bool Function_262(struct<17> Param0) //Position: 0xC5B5 / 50613
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
				Function_264(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_264(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_261(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_263(Param1.f_64);
	}
	else
	{
		Function_263(Param1.f_64);
	}
	return 0;
}

void Function_263(bool bParam0) //Position: 0xC748 / 51016
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

void Function_264(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC786 / 51078
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

var Function_265(int iParam0, struct<21> Param1) //Position: 0xC83C / 51260
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_266(vector3 vParam0) //Position: 0xC863 / 51299
{
	switch (Function_267())
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

int Function_267() //Position: 0xC90F / 51471
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

void Function_268(vector3 vParam0) //Position: 0xC94B / 51531
{
	switch (Function_269(&vParam0))
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

int Function_269(bool bParam0) //Position: 0xC9F4 / 51700
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_270(struct<21> Param0) //Position: 0xCB14 / 51988
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

void Function_271(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCCCE / 52430
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

var Function_272(int iParam0, struct<13> Param1) //Position: 0xCD6A / 52586
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_273(struct<17> Param0) //Position: 0xCD86 / 52614
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

bool Function_274() //Position: 0xCDE0 / 52704
{
	return Global_47307;
}

bool Function_275() //Position: 0xCDE9 / 52713
{
	if (IS_EXITFLAG_SET())
	{
		Function_246(bLocal_962);
		Function_242(StackVal, 4, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
		return 0;
	}
	Function_660(StackVal, StackVal, StackVal, StackVal, StackVal, Local_950, bLocal_962, iLocal_963, &bLocal_978, &bLocal_976, &bLocal_977);
	if (bLocal_962 == 99 && bLocal_962 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_246(bLocal_962);
			Function_242(StackVal, 1, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
			return 1;
		}
		if (iLocal_963 < 4 && iLocal_963 > 105)
		{
			if (Function_641(&Local_1297, &uLocal_1235, &uLocal_1289, &uLocal_1192, bLocal_962 != 2))
			{
				if (Function_639(&uLocal_1289))
				{
					Function_246(bLocal_962);
					Function_242(StackVal, 5, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
				}
				return 1;
			}
		}
		if (bLocal_962 != 101)
		{
			if (iLocal_963 < 5 && iLocal_963 > 105)
			{
				Function_638();
			}
		}
		if (Function_637(2048))
		{
			Function_246(bLocal_962);
			Function_242(StackVal, 3, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&iLocal_989))
		{
			Function_241("Rebel04_companion_dead");
			Function_246(bLocal_962);
			Function_242(StackVal, 5, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
			return 1;
		}
		Function_636();
	}
	switch (bLocal_962)
	{
		case 0x00000063:
			Function_603();
			break;
		
		case 0x00000000:
			Function_573();
			break;
		
		case 0x00000001:
			Function_515();
			break;
		
		case 0x00000002:
			Function_348();
			break;
		
		case 0x00000065:
			Function_278();
			break;
		
		case 0x00000064:
			if (Function_277(&bLocal_977))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_276(&bLocal_962, &iLocal_963, &iLocal_964))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_978)
	{
		Function_237(&bLocal_978, 4);
		Function_1();
		return 0;
	}
	if (bLocal_976)
	{
		Function_251(&bLocal_976, 8);
		Function_1();
		return 0;
	}
	if (bLocal_977 && bLocal_962 == 100)
	{
		Function_246(bLocal_962);
		Function_242(StackVal, 5, &bLocal_977, &bLocal_962, Function_249(bLocal_962), Function_246(bLocal_962), 0);
	}
	return 1;
}

bool Function_276(var uParam0, var uParam1, int iParam2) //Position: 0xCFDC / 53212
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

bool Function_277(int iParam0) //Position: 0xD025 / 53285
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_278() //Position: 0xD039 / 53305
{
	switch (iLocal_963)
	{
		case 0x00000000:
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&iLocal_989, GET_ACTOR_MAX_HEALTH(&iLocal_989));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (!iLocal_992[2])
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 2120[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_989, *(&iLocal_4 + 2120[23]), 1, 1, true);
				Function_347();
				bLocal_1505 = &iLocal_892 + 96[02];
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1505, *(&iLocal_4 + 1936[43]), 1, 1, true);
				SET_ACTOR_IN_VEHICLE(&iLocal_989, &bLocal_1505, false);
			}
			else
			{
				Function_346(&iLocal_4 + 960);
			}
			TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
			Function_226(&iLocal_1194);
			iLocal_963 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000002:
			Function_226(&iLocal_1194);
			iLocal_963 = 3;
			break;
		
		case 0x00000003:
			if (Function_279("$/cutscene/REBEL04_END/REBEL04_END", &iLocal_964, &Local_950, &bLocal_962, 78576, 78517, 61955, 57210, 56817, 56810, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_976 = true;
			}
			break;
	}
	return;
}

bool Function_279(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD1DC / 53724
{
	if (!&bParam15)
	{
		Function_292(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_291(&Param2) || Param2.f_40 < 1))
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
				Function_226(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_290())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_289(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(&iParam1 + 4);
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
					Function_289(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_286(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_286(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_284(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_289(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(&iParam1 + 4);
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
						Function_283(1.0f);
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
						Function_281();
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
					Function_280(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_291(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_280(var uParam0, bool bParam1) //Position: 0xD83E / 55358
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
		Function_198();
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

void Function_281() //Position: 0xD90D / 55565
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_282();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_282() //Position: 0xD952 / 55634
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_283(bool bParam0) //Position: 0xD964 / 55652
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

void Function_284(var uParam0, int iParam1) //Position: 0xD981 / 55681
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
			if ((&iVar3 == &Global_54076 && !Function_285(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_285(int iParam0) //Position: 0xDA13 / 55827
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

float Function_286(vector3 vParam0) //Position: 0xDA44 / 55876
{
	if (Function_288(&vParam0))
	{
		if (Function_287(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_287(int iParam0) //Position: 0xDB11 / 56081
{
	return Function_14(iParam0, 2);
}

bool Function_288(int iParam0) //Position: 0xDB1F / 56095
{
	return Function_14(iParam0, 1);
}

int Function_289(bool bParam0) //Position: 0xDB2D / 56109
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

bool Function_290() //Position: 0xDBF0 / 56304
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

bool Function_291(struct<37> Param0) //Position: 0xDC2D / 56365
{
	return Param0.f_36;
}

void Function_292(var uParam0, int iParam1) //Position: 0xDC38 / 56376
{
	Function_293(&uParam0, &iParam1, 0);
	return;
}

void Function_293(int iParam0, bool bParam1, bool bParam2) //Position: 0xDC48 / 56392
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
			Function_294(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_294(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_294(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDDC0 / 56768
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

int Function_295() //Position: 0xDDEA / 56810
{
	return 1;
}

int Function_296() //Position: 0xDDF1 / 56817
{
	switch (bLocal_962)
	{
		case 0x00000063:
			Function_297(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_964 + 24), 0))
			{
				if (IS_OBJECT_VALID(&iLocal_964 + 24))
				{
					DECOR_REMOVE(&Global_54076, "__CameraReady");
					DECOR_REMOVE(&Global_54076, "__CameraGo");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_964 + 24))
					{
						DESTROY_OBJECT(&iLocal_964 + 24);
					}
				}
				AI_STOP_IGNORING_ACTORS();
				Function_297(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_297(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xDEAB / 57003
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
	Function_280(&iParam9, &bParam10);
}

int Function_298() //Position: 0xDF7A / 57210
{
	var uVar0;
	
	switch (bLocal_962)
	{
		case 0x00000063:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 136[12], Vector(-2293,83f, 21,84f, 4963,32f), 324,4f, 1, 1, true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 136[02], Vector(-2291,46f, 21,84f, 4961,65f), 389,17f, 1, 1, true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 136[22], Vector(-2294,88f, 21,84f, 4962,58f), 298,47f, 1, 1, true);
			uVar0 = Function_317(1, 0, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uVar0, *(&iLocal_4 + 1504[23]), 1, 1, true);
				TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
			}
			RESET_ANIM_SET_FOR_ACTOR(&iLocal_989, 0);
			RESET_ACTOR_GAITS(&iLocal_989, 0);
			ACTOR_RESET_ANIMS(&iLocal_989, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_989, *(&iLocal_4 + 1504[13]), 1, 1, true);
			bLocal_1505 = &iLocal_892 + 96[02];
			bLocal_1627 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3520, 2, 1, 0, 1, false);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &bLocal_1505, 0, 2, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_989, bLocal_1627);
			TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
			ENABLE_VEHICLE_SEAT(&bLocal_1505, false, 0);
			ACTOR_POP_NEXT_GAIT(&iLocal_989, 2, 0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1504[03]), 1, 1, true);
			Function_314(&Global_54076, &bLocal_1505);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			return 1;
			break;
		
		case 0x00000065:
			*(&iLocal_964 + 24) = Function_310(&iLocal_4, 0, &Global_54076, 1, 0, 0);
			if (IS_OBJECT_VALID(&iLocal_964 + 24))
			{
			}
			else
			{
				LOG_ERROR("Rebel04 - Outro - Failed to create Marshal01_Outro_cutscene");
			}
			CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_964 + 24, 1);
			DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 2120[13]), 1, 1, true);
			if (!GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1505, false) != &iLocal_989)
			{
				SET_ACTOR_IN_VEHICLE(&iLocal_989, &bLocal_1505, false);
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1505, *(&iLocal_4 + 2120[33]), 1, 1, true);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_989, &iLocal_4 + 3496, 4, 1, 0, 1, false);
			AI_ACTOR_FORCE_SPEED(&iLocal_989, 4);
			AI_ACTOR_FORCE_SPEED(&bLocal_1505, 4);
			AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &bLocal_1505), 4);
			AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &bLocal_1505), 4);
			SET_ACTOR_SPEED(&iLocal_989, 10.0f);
			SET_ACTOR_SPEED(&bLocal_1505, 10.0f);
			SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &bLocal_1505), 10.0f);
			SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, &bLocal_1505), 10.0f);
			Function_299();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

void Function_299() //Position: 0xE27C / 57980
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (SQUAD_IS_VALID(&iLocal_4 + 1264) && SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		SQUADS_MERGE(&iLocal_4 + 1264, &iLocal_4 + 960);
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 960))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 960, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_235(&(Global_46972[6]), 0, 4294967295, 0))
			{
				bVar3 = Function_303(&(Global_46972[6]), 1, 0, 4294967295, 0);
				if (Function_217(bVar3))
				{
					Function_302(&iVar1);
					Function_301(&iVar1);
					uVar2 = CREATE_ACTOR_IN_LAYOUT(&iLocal_4, Function_54(), bVar3, Function_302(&iVar1), Function_301(&iVar1));
					ACCESSORIZE_HORSE(&uVar2, 3);
				}
			}
			if (IS_ACTOR_VALID(&uVar2))
			{
				ACTOR_MOUNT_ACTOR(&iVar1, &uVar2);
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar1, 1.0f);
			SET_ACTOR_FACTION(&iVar1, 21);
			MEMORY_CONSIDER_AS(&iVar1, &Global_54076, 2);
			MEMORY_PREFER_WALKING(&iVar1, 0);
			MEMORY_PREFER_RIDING(&iVar1, true);
			Function_300(StackVal, &iVar1, *(&iLocal_4 + 1504[13]), 0, 3, 2, 1);
		}
		bVar0++;
	}
	return;
}

void Function_300(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xE371 / 58225
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideCurve", &iParam3);
	}
	if (!Function_74(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&uParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&uParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&uParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&uParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, true);
}

struct<8> Function_301(int iParam0) //Position: 0xE490 / 58512
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

struct<8> Function_302(int iParam0) //Position: 0xE4B9 / 58553
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_303(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE4CB / 58571
{
	return Function_304(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_304(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xE4E9 / 58601
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
		Function_309();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_217(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_308(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_308(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_307(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_217(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_307(bVar0))
				{
					Function_306();
				}
				Function_305(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_217(bVar1))
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

void Function_305(int iParam0) //Position: 0xE7E2 / 59362
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

void Function_306() //Position: 0xE896 / 59542
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

bool Function_307(bool bParam0) //Position: 0xE8D1 / 59601
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

void Function_308(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xE8FE / 59646
{
	bool bVar0;
	
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_309() //Position: 0xEA59 / 59993
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_306();
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
	Function_306();
	return;
}

var Function_310(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xEAA5 / 60069
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Rebel04_Cutscene03", 2, 1);
	}
	Function_311(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 10.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_311(var uParam0, int iParam1) //Position: 0xEB38 / 60216
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_313(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_312(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 10.0f, 1, 0);
	return;
}

void Function_312(int iParam0) //Position: 0xEB9A / 60314
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5089f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3530,343f, 9,637941f, 4253,42f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,064207f, -1,369979f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_313(int iParam0) //Position: 0xEC07 / 60423
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3522,858f, 8,261075f, 4251,708f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,04299f, -1,927168f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_314(var uParam0, int iParam1) //Position: 0xEC74 / 60532
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_315(StackVal, &uParam0, Var0);
	return;
}

void Function_315(int iParam0, struct<2> Param1) //Position: 0xEC90 / 60560
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_316(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_316(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_316(int iParam0, struct<2> Param1) //Position: 0xECCB / 60619
{
	struct<2> Var0;
	
	Function_302(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_302(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

var Function_317(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xED4C / 60748
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
		Function_323(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_322())
		{
			return "";
		}
	}
	if (!Function_320())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_198();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_248(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_248(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_248(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_248(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_319(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_319(StackVal, Var4, 0, 1, 1);
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
		Function_318(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_318(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF0A9 / 61609
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

var Function_319(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF0F3 / 61683
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

bool Function_320() //Position: 0xF193 / 61843
{
	if (Function_321() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_321() //Position: 0xF1A9 / 61865
{
	return Global_21369.f_244;
}

bool Function_322() //Position: 0xF1B4 / 61876
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_323(var uParam0, bool bParam1, bool bParam2) //Position: 0xF1D4 / 61908
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

int Function_324() //Position: 0xF203 / 61955
{
	switch (bLocal_962)
	{
		case 0x00000063:
			if (Function_329())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_325();
				}
			}
			if (!DECOR_CHECK_EXIST(&cLocal_948, "cs01silent"))
			{
				DECOR_SET_BOOL(&cLocal_948, "cs01silent", true);
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			if (!DECOR_CHECK_EXIST(&cLocal_948, "cslastsilent"))
			{
				DECOR_SET_BOOL(&cLocal_948, "cslastsilent", true);
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

vector3 Function_325() //Position: 0xF2D6 / 62166
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
	
	Function_328(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Rebel04_layout");
	*(&iLocal_4 + 1304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 1272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-3478,223f, 9,899163f, 4216.0f), Vector(0.0f, 20,67522f, 0.0f), Vector(22,20163f, 19,75863f, 23,16461f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1304, &iLocal_4 + 1272[0]);
	*(&iLocal_4 + 1272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-3493,655f, 21,0144f, 4198,411f), Vector(0.0f, 20,67522f, 0.0f), Vector(22,20163f, 19,75863f, 23,16461f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1304, &iLocal_4 + 1272[1]);
	*(&iLocal_4 + 1272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene04Vol", 2,802597E-45f, Vector(-3505,822f, 9,697827f, 4249,806f), Vector(0,1421043f, -71,63804f, 0,6657096f), Vector(29,17327f, 9,981334f, 41,35008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1304, &iLocal_4 + 1272[2]);
	*(&iLocal_4 + 1336) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageOneVols_set");
	*(&iLocal_4 + 1312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StageOneFinishVol", 2,802597E-45f, Vector(-3440,083f, 6,240331f, 4202,592f), Vector(0.0f, -48,95423f, 0.0f), Vector(33,87334f, 11,08996f, 11,08529f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1336, &iLocal_4 + 1312[0]);
	*(&iLocal_4 + 1312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "NearFinish", 2,802597E-45f, Vector(-3134,154f, 15,55758f, 4175,182f), Vector(0.0f, 62,46721f, 0.0f), Vector(74,17829f, 22,43092f, 34,09418f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1336, &iLocal_4 + 1312[1]);
	*(&iLocal_4 + 1392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageTwoVols_set");
	*(&iLocal_4 + 1344[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "bridgeArea", 2,802597E-45f, Vector(-3457,875f, 17,31899f, 4219,458f), Vector(0.0f, 47,81974f, 0.0f), Vector(112,1611f, 53,66011f, 57,85305f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1344[0]);
	*(&iLocal_4 + 1344[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "explosiveArea", 2,802597E-45f, Vector(-3457,896f, 5,383966f, 4221,612f), Vector(0.0f, 44,13973f, 0.0f), Vector(98,00983f, 10,61445f, 10,87446f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1344[1]);
	*(&iLocal_4 + 1344[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "tooFar", 2,802597E-45f, Vector(-3409,58f, 6,834368f, 4177,324f), Vector(0.0f, 43,89208f, 0.0f), Vector(32,73331f, 32,73331f, 40,21665f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1344[2]);
	*(&iLocal_4 + 1344[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "detonatorVol", 2,802597E-45f, Vector(-3495,605f, 21,46531f, 4198,609f), Vector(0.0f, -57,82624f, 0.0f), Vector(5,337294f, 7,314745f, 9,896396f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1344[3]);
	*(&iLocal_4 + 1344[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "underBridgeVol", 2,802597E-45f, Vector(-3501,084f, 10,1386f, 4257,165f), Vector(0.0f, 44,13973f, 0.0f), Vector(14,71267f, 10,61445f, 15,05843f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1344[4]);
	*(&iLocal_4 + 1464) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageThreeVols_set");
	*(&iLocal_4 + 1400[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SniperVol01", 2,802597E-45f, Vector(-3454,943f, 11,61692f, 4246,938f), Vector(0.0f, 4,064569f, 0.0f), Vector(9,044948f, 6,596849f, 11,61352f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[0]);
	*(&iLocal_4 + 1400[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SniperVol02", 2,802597E-45f, Vector(-3399,42f, 19,17843f, 4219,42f), Vector(0.0f, 42,45923f, 0.0f), Vector(12,35134f, 7,59664f, 17,54981f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[1]);
	*(&iLocal_4 + 1400[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SniperVol03", 2,802597E-45f, Vector(-3459,725f, 12,14528f, 4187,109f), Vector(0.0f, 63,24902f, 0.0f), Vector(9,686968f, 9,350043f, 15,44036f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[2]);
	*(&iLocal_4 + 1400[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "fightVol", 2,802597E-45f, Vector(-3458,604f, 7,237561f, 4229,296f), Vector(0.0f, 44,13973f, 0.0f), Vector(119,009f, 35,47148f, 90,85659f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[3]);
	*(&iLocal_4 + 1400[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nescapeVol", 2,802597E-45f, Vector(-3673,915f, 11,1994f, 4261,455f), Vector(0.0f, 21,78712f, 0.0f), Vector(130,9475f, 34,27554f, 65,42599f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[4]);
	*(&iLocal_4 + 1400[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "gunfightmusictrigger", 2,802597E-45f, Vector(-3458,604f, 4,913518f, 4229,296f), Vector(0.0f, 44,13973f, 0.0f), Vector(119,009f, 18,71213f, 80,44033f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[5]);
	*(&iLocal_4 + 1400[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "TriggerEscapeVol", 2,802597E-45f, Vector(-3472,726f, 7,822988f, 4235,19f), Vector(0.0f, -48,95423f, 0.0f), Vector(33,87334f, 11,08996f, 11,08529f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1400[6]);
	*(&iLocal_4 + 1472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AmbientRestriction", 2,802597E-45f, Vector(-3472f, 21,30707f, 4227,768f), Vector(0.0f, 19,10628f, 0.0f), Vector(337,2555f, 53,66011f, 180,5423f));
	*(&iLocal_4 + 1480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WarningVol", 2,802597E-45f, Vector(-3472,649f, 21,30707f, 4226,859f), Vector(0.0f, 35,52295f, 0.0f), Vector(198,8159f, 53,66011f, 128,1099f));
	*(&iLocal_4 + 1488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "FailVol", 2,802597E-45f, Vector(-3472f, 21,30707f, 4227,768f), Vector(0.0f, 19,10628f, 0.0f), Vector(386,3022f, 53,66011f, 268,6572f));
	*(&iLocal_4 + 1496) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1504[03]) = Vector(-2288.0f, 21,83827f, 4958,324f);
	*(&iLocal_4 + 1504[03] + 12) = Vector(0.0f, 315,7922f, 0.0f);
	*(&iLocal_4 + 1584[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd01", Vector(-2288.0f, 21,83827f, 4958,324f), Vector(0.0f, 315,7922f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1584[0], &iLocal_4 + 1496);
	*(&iLocal_4 + 1504[13]) = Vector(-2284,874f, 21,83827f, 4957,886f);
	*(&iLocal_4 + 1504[13] + 12) = Vector(0.0f, -42,54397f, 0.0f);
	*(&iLocal_4 + 1584[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd01", Vector(-2284,874f, 21,83827f, 4957,886f), Vector(0.0f, -42,54397f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1584[1], &iLocal_4 + 1496);
	*(&iLocal_4 + 1504[23]) = Vector(-2253,501f, 20,081f, 4927,012f);
	*(&iLocal_4 + 1504[23] + 12) = Vector(0.0f, -78,94791f, 0.0f);
	*(&iLocal_4 + 1584[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd01", Vector(-2253,501f, 20,081f, 4927,012f), Vector(0.0f, -78,94791f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1584[2], &iLocal_4 + 1496);
	*(&iLocal_4 + 1616) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1624[03]) = Vector(-3446,319f, 6,227793f, 4205,253f);
	*(&iLocal_4 + 1624[03] + 12) = Vector(0.0f, -228,2806f, 0.0f);
	*(&iLocal_4 + 1848[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-3446,319f, 6,227793f, 4205,253f), Vector(0.0f, -228,2806f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[0], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[13]) = Vector(-3472,854f, 6,023544f, 4228.0f);
	*(&iLocal_4 + 1624[13] + 12) = Vector(0.0f, -122,1057f, 0.0f);
	*(&iLocal_4 + 1848[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd02", Vector(-3472,854f, 6,023544f, 4228.0f), Vector(0.0f, -122,1057f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[1], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[23]) = Vector(-3461,606f, 5,89426f, 4230,812f);
	*(&iLocal_4 + 1624[23] + 12) = Vector(0.0f, -225,954f, 0.0f);
	*(&iLocal_4 + 1848[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(-3461,606f, 5,89426f, 4230,812f), Vector(0.0f, -225,954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[2], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[33]) = Vector(-3461,687f, 5,869079f, 4230,73f);
	*(&iLocal_4 + 1624[33] + 12) = Vector(0.0f, -226,0139f, 0.0f);
	*(&iLocal_4 + 1848[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd02", Vector(-3461,687f, 5,869079f, 4230,73f), Vector(0.0f, -226,0139f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[3], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[43]) = Vector(-3447,984f, 6,019631f, 4211,933f);
	*(&iLocal_4 + 1624[43] + 12) = Vector(0.0f, 135,599f, 0.0f);
	*(&iLocal_4 + 1848[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WagonStart", Vector(-3447,984f, 6,019631f, 4211,933f), Vector(0.0f, 135,599f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[4], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[53]) = Vector(-3570,319f, 7,832234f, 4206,185f);
	*(&iLocal_4 + 1624[53] + 12) = Vector(0.0f, 236,9912f, 0.0f);
	*(&iLocal_4 + 1848[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd02", Vector(-3570,319f, 7,832234f, 4206,185f), Vector(0.0f, 236,9912f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[5], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[63]) = Vector(-3470,076f, 5,805079f, 4232,632f);
	*(&iLocal_4 + 1624[63] + 12) = Vector(0.0f, 134,6294f, 0.0f);
	*(&iLocal_4 + 1848[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WagonEnd", Vector(-3470,076f, 5,805079f, 4232,632f), Vector(0.0f, 134,6294f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[6], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[73]) = Vector(-3449,711f, 6,157222f, 4225,932f);
	*(&iLocal_4 + 1624[73] + 12) = Vector(0.0f, 134,6294f, 0.0f);
	*(&iLocal_4 + 1848[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RiggerVol01Flag", Vector(-3449,711f, 6,157222f, 4225,932f), Vector(0.0f, 134,6294f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[7], &iLocal_4 + 1616);
	*(&iLocal_4 + 1624[83]) = Vector(-3462,813f, 6,023614f, 4216,274f);
	*(&iLocal_4 + 1624[83] + 12) = Vector(0.0f, 134,6294f, 0.0f);
	*(&iLocal_4 + 1848[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RiggerVol02Flag", Vector(-3462,813f, 6,023614f, 4216,274f), Vector(0.0f, 134,6294f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1848[8], &iLocal_4 + 1616);
	*(&iLocal_4 + 1928) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1936[03]) = Vector(-3494,347f, 20,5002f, 4198,715f);
	*(&iLocal_4 + 1936[03] + 12) = Vector(0.0f, -79,46883f, 0.0f);
	*(&iLocal_4 + 2064[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-3494,347f, 20,5002f, 4198,715f), Vector(0.0f, -79,46883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[0], &iLocal_4 + 1928);
	*(&iLocal_4 + 1936[13]) = Vector(-3494,345f, 20,5002f, 4198,72f);
	*(&iLocal_4 + 1936[13] + 12) = Vector(0.0f, -79,05909f, 0.0f);
	*(&iLocal_4 + 2064[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd03", Vector(-3494,345f, 20,5002f, 4198,72f), Vector(0.0f, -79,05909f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[1], &iLocal_4 + 1928);
	*(&iLocal_4 + 1936[23]) = Vector(-3494,438f, 20,50184f, 4197,164f);
	*(&iLocal_4 + 1936[23] + 12) = Vector(0.0f, 288,4482f, 0.0f);
	*(&iLocal_4 + 2064[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(-3494,438f, 20,50184f, 4197,164f), Vector(0.0f, 288,4482f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[2], &iLocal_4 + 1928);
	*(&iLocal_4 + 1936[33]) = Vector(-3509,62f, 19,35814f, 4213,18f);
	*(&iLocal_4 + 1936[33] + 12) = Vector(0.0f, 263,379f, 0.0f);
	*(&iLocal_4 + 2064[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd03", Vector(-3509,62f, 19,35814f, 4213,18f), Vector(0.0f, 263,379f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[3], &iLocal_4 + 1928);
	*(&iLocal_4 + 1936[43]) = Vector(-3526,445f, 7,642694f, 4248,589f);
	*(&iLocal_4 + 1936[43] + 12) = Vector(0.0f, 206,5065f, 0.0f);
	*(&iLocal_4 + 2064[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WagonEnd03", Vector(-3526,445f, 7,642694f, 4248,589f), Vector(0.0f, 206,5065f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2064[4], &iLocal_4 + 1928);
	*(&iLocal_4 + 2112) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2120[03]) = Vector(-3518,309f, 7,211717f, 4246,309f);
	*(&iLocal_4 + 2120[03] + 12) = Vector(178,4563f, -362,5666f, 179,9376f);
	*(&iLocal_4 + 2248[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(-3518,309f, 7,211717f, 4246,309f), Vector(178,4563f, -362,5666f, 179,9376f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2248[0], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[13]) = Vector(-3517,798f, 6,904f, 4248,294f);
	*(&iLocal_4 + 2120[13] + 12) = Vector(0.0f, 270,754f, 0.0f);
	*(&iLocal_4 + 2248[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd04", Vector(-3517,798f, 6,904f, 4248,294f), Vector(0.0f, 270,754f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2248[1], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[23]) = Vector(-3522,221f, 6,903199f, 4248.0f);
	*(&iLocal_4 + 2120[23] + 12) = Vector(0.0f, 117,8508f, 0.0f);
	*(&iLocal_4 + 2248[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart04", Vector(-3522,221f, 6,903199f, 4248.0f), Vector(0.0f, 117,8508f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2248[2], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[33]) = Vector(-3525,057f, 5,789245f, 4261,845f);
	*(&iLocal_4 + 2120[33] + 12) = Vector(0.0f, 282,5563f, 0.0f);
	*(&iLocal_4 + 2248[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd04", Vector(-3525,057f, 5,789245f, 4261,845f), Vector(0.0f, 282,5563f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2248[3], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[43]) = Vector(-3468f, 6,023544f, 4224.0f);
	*(&iLocal_4 + 2120[43] + 12) = Vector(0.0f, -134,8073f, 0.0f);
	*(&iLocal_4 + 2248[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart04", Vector(-3468f, 6,023544f, 4224.0f), Vector(0.0f, -134,8073f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2248[4], &iLocal_4 + 2112);
	*(&iLocal_4 + 2296) = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2304[03]) = Vector(-3440,371f, 6,24046f, 4203,224f);
	*(&iLocal_4 + 2304[03] + 12) = Vector(-0,7655898f, -601,5338f, -0,7378737f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Finish01", Vector(-3440,371f, 6,24046f, 4203,224f), Vector(-0,7655898f, -601,5338f, -0,7378737f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 2296);
	*(&iLocal_4 + 2304[13]) = Vector(-3110,352f, 12,14097f, 4128,871f);
	*(&iLocal_4 + 2304[13] + 12) = Vector(-0,3945088f, -562,3384f, -0,2147815f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Teleport01", Vector(-3110,352f, 12,14097f, 4128,871f), Vector(-0,3945088f, -562,3384f, -0,2147815f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 2296);
	*(&iLocal_4 + 2360) = CREATE_OBJECTSET_IN_LAYOUT("StageTwoSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2368[03]) = Vector(-3493,518f, 20,56432f, 4198,519f);
	*(&iLocal_4 + 2368[03] + 12) = Vector(0.0f, -101,6852f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DetonatorFlag", Vector(-3493,518f, 20,56432f, 4198,519f), Vector(0.0f, -101,6852f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 2360);
	*(&iLocal_4 + 2368[13]) = Vector(-3493,537f, 20,56468f, 4198,513f);
	*(&iLocal_4 + 2368[13] + 12) = Vector(0.0f, -94,27619f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "NearDetonatorFlag", Vector(-3493,537f, 20,56468f, 4198,513f), Vector(0.0f, -94,27619f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 2360);
	*(&iLocal_4 + 2368[23]) = Vector(-3519,637f, 19,1565f, 4212,744f);
	*(&iLocal_4 + 2368[23] + 12) = Vector(0.0f, -101,6852f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nRebelGoto", Vector(-3519,637f, 19,1565f, 4212,744f), Vector(0.0f, -101,6852f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 2360);
	*(&iLocal_4 + 2368[33]) = Vector(-3366,313f, 7,027457f, 4180.0f);
	*(&iLocal_4 + 2368[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BinoFace", Vector(-3366,313f, 7,027457f, 4180.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 2360);
	*(&iLocal_4 + 2368[43]) = Vector(-3474,787f, 6,023544f, 4231,663f);
	*(&iLocal_4 + 2368[43] + 12) = Vector(0.0f, -317,0349f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CrateCrouch01", Vector(-3474,787f, 6,023544f, 4231,663f), Vector(0.0f, -317,0349f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 2360);
	*(&iLocal_4 + 2368[53]) = Vector(-3438,487f, 6,798185f, 4209,191f);
	*(&iLocal_4 + 2368[53] + 12) = Vector(0.0f, -135,0243f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CrateCrouch02", Vector(-3438,487f, 6,798185f, 4209,191f), Vector(0.0f, -135,0243f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 2360);
	*(&iLocal_4 + 2368[63]) = Vector(-3493,518f, 20,56483f, 4198,503f);
	*(&iLocal_4 + 2368[63] + 12) = Vector(0.0f, -673,3619f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Finish02", Vector(-3493,518f, 20,56483f, 4198,503f), Vector(0.0f, -673,3619f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 2360);
	*(&iLocal_4 + 2544) = CREATE_OBJECTSET_IN_LAYOUT("StageThreeSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2552[03]) = Vector(-3716,61f, 7,78138f, 4303,355f);
	*(&iLocal_4 + 2552[03] + 12) = Vector(0.0f, 131,5584f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FailFlag", Vector(-3716,61f, 7,78138f, 4303,355f), Vector(0.0f, 131,5584f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 2544);
	*(&iLocal_4 + 2552[13]) = Vector(-3419,208f, 6,360153f, 4185,171f);
	*(&iLocal_4 + 2552[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "East", Vector(-3419,208f, 6,360153f, 4185,171f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 2544);
	*(&iLocal_4 + 2552[23]) = Vector(-3497,284f, 6,084147f, 4261,284f);
	*(&iLocal_4 + 2552[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "West", Vector(-3497,284f, 6,084147f, 4261,284f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_4 + 2544);
	*(&iLocal_4 + 2552[33]) = Vector(-3232,955f, 6,777454f, 4213,678f);
	*(&iLocal_4 + 2552[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nLoadScene", Vector(-3232,955f, 6,777454f, 4213,678f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_4 + 2544);
	*(&iLocal_4 + 2552[43]) = Vector(-3315,356f, 6,641346f, 4173,79f);
	*(&iLocal_4 + 2552[43] + 12) = Vector(0.0f, 85,6515f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "VGFindPath", Vector(-3315,356f, 6,641346f, 4173,79f), Vector(0.0f, 85,6515f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_4 + 2544);
	*(&iLocal_4 + 2552[53]) = Vector(-3525,056f, 7,601974f, 4252.0f);
	*(&iLocal_4 + 2552[53] + 12) = Vector(0.0f, 85,6515f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Finish03", Vector(-3525,056f, 7,601974f, 4252.0f), Vector(0.0f, 85,6515f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4 + 2544);
	*(&iLocal_4 + 2704) = CREATE_OBJECTSET_IN_LAYOUT("DebugDynamiteLocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2712[03]) = Vector(-3422,89f, 6,226702f, 4188,39f);
	*(&iLocal_4 + 2712[03] + 12) = Vector(0.0f, -54,73079f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dynamite01", Vector(-3422,89f, 6,226702f, 4188,39f), Vector(0.0f, -54,73079f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[13]) = Vector(-3444,717f, 6,227793f, 4206,946f);
	*(&iLocal_4 + 2712[13] + 12) = Vector(0.0f, -54,73079f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dynamite02", Vector(-3444,717f, 6,227793f, 4206,946f), Vector(0.0f, -54,73079f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[23]) = Vector(-3464,716f, 5,773548f, 4227,501f);
	*(&iLocal_4 + 2712[23] + 12) = Vector(0.0f, -54,73079f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dynamite03", Vector(-3464,716f, 5,773548f, 4227,501f), Vector(0.0f, -54,73079f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[33]) = Vector(-3478,33f, 5,773551f, 4241,468f);
	*(&iLocal_4 + 2712[33] + 12) = Vector(0.0f, -54,73079f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dynamite04", Vector(-3478,33f, 5,773551f, 4241,468f), Vector(0.0f, -54,73079f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[43]) = Vector(-3494,834f, 5,773544f, 4255,136f);
	*(&iLocal_4 + 2712[43] + 12) = Vector(0.0f, -54,73079f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dynamite05", Vector(-3494,834f, 5,773544f, 4255,136f), Vector(0.0f, -54,73079f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_4 + 2704);
	*(&iLocal_4 + 2840) = CREATE_OBJECTSET_IN_LAYOUT("FootCoverLocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2848[03]) = Vector(-3431,033f, 7,121822f, 4211,033f);
	*(&iLocal_4 + 2848[03] + 12) = Vector(0.0f, 102,3986f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc01", Vector(-3431,033f, 7,121822f, 4211,033f), Vector(0.0f, 102,3986f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_4 + 2840);
	*(&iLocal_4 + 2848[13]) = Vector(-3451,131f, 6,128746f, 4202,108f);
	*(&iLocal_4 + 2848[13] + 12) = Vector(0.0f, 118,4351f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc02", Vector(-3451,131f, 6,128746f, 4202,108f), Vector(0.0f, 118,4351f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_4 + 2840);
	*(&iLocal_4 + 2848[23]) = Vector(-3425,889f, 6,898062f, 4202,111f);
	*(&iLocal_4 + 2848[23] + 12) = Vector(0.0f, 102,3986f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc03", Vector(-3425,889f, 6,898062f, 4202,111f), Vector(0.0f, 102,3986f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_4 + 2840);
	*(&iLocal_4 + 2848[33]) = Vector(-3427,064f, 7,0265f, 4204,668f);
	*(&iLocal_4 + 2848[33] + 12) = Vector(0.0f, 102,3986f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc04", Vector(-3427,064f, 7,0265f, 4204,668f), Vector(0.0f, 102,3986f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_4 + 2840);
	*(&iLocal_4 + 2848[43]) = Vector(-3456,896f, 6,337747f, 4200,078f);
	*(&iLocal_4 + 2848[43] + 12) = Vector(0.0f, 137,7577f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc05", Vector(-3456,896f, 6,337747f, 4200,078f), Vector(0.0f, 137,7577f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_4 + 2840);
	*(&iLocal_4 + 2848[53]) = Vector(-3455,514f, 6,127533f, 4203,144f);
	*(&iLocal_4 + 2848[53] + 12) = Vector(0.0f, 137,7577f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc06", Vector(-3455,514f, 6,127533f, 4203,144f), Vector(0.0f, 137,7577f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_4 + 2840);
	*(&iLocal_4 + 2848[63]) = Vector(-3423,495f, 7,027458f, 4204,06f);
	*(&iLocal_4 + 2848[63] + 12) = Vector(0.0f, 107,5301f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootCoverLoc07", Vector(-3423,495f, 7,027458f, 4204,06f), Vector(0.0f, 107,5301f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_4 + 2840);
	*(&iLocal_4 + 3024[03]) = Vector(-3473,849f, 6,023546f, 4226,151f);
	*(&iLocal_4 + 3024[03] + 12) = Vector(0.0f, 305,2458f, 0.0f);
	*(&iLocal_4 + 3024[13]) = Vector(-3473,497f, 6,144435f, 4216.0f);
	*(&iLocal_4 + 3024[13] + 12) = Vector(0.0f, 282,8385f, 0.0f);
	*(&iLocal_4 + 3024[23]) = Vector(-3439,497f, 6,454012f, 4233,746f);
	*(&iLocal_4 + 3024[23] + 12) = Vector(0.0f, 376,6348f, 0.0f);
	*(&iLocal_4 + 3024[33]) = Vector(-3451,282f, 6,838257f, 4232.0f);
	*(&iLocal_4 + 3024[33] + 12) = Vector(0.0f, 357,0682f, 0.0f);
	*(&iLocal_4 + 3024[43]) = Vector(-3456,811f, 6,884021f, 4236,165f);
	*(&iLocal_4 + 3024[43] + 12) = Vector(0.0f, 352,4969f, 0.0f);
	*(&iLocal_4 + 3152[03]) = Vector(-3453,649f, 11,96084f, 4244.0f);
	*(&iLocal_4 + 3152[03] + 12) = Vector(0.0f, 357,3806f, 0.0f);
	*(&iLocal_4 + 3152[13]) = Vector(-3400f, 19,07452f, 4218,59f);
	*(&iLocal_4 + 3152[13] + 12) = Vector(0.0f, 376,3231f, 0.0f);
	*(&iLocal_4 + 3152[23]) = Vector(-3457,331f, 12,20574f, 4186,751f);
	*(&iLocal_4 + 3152[23] + 12) = Vector(0.0f, 230,0295f, 0.0f);
	*(&iLocal_4 + 3232[03]) = Vector(-3482,928f, 6,407366f, 4222,287f);
	*(&iLocal_4 + 3232[03] + 12) = Vector(0.0f, 278,0139f, 0.0f);
	*(&iLocal_4 + 3232[13]) = Vector(-3479,569f, 6,833453f, 4208,6f);
	*(&iLocal_4 + 3232[13] + 12) = Vector(0.0f, 261,6193f, 0.0f);
	*(&iLocal_4 + 3232[23]) = Vector(-3438,603f, 6,336581f, 4245,519f);
	*(&iLocal_4 + 3232[23] + 12) = Vector(0.0f, 358,8501f, 0.0f);
	*(&iLocal_4 + 3232[33]) = Vector(-3446,154f, 7,894483f, 4239,659f);
	*(&iLocal_4 + 3232[33] + 12) = Vector(0.0f, 352,4969f, 0.0f);
	*(&iLocal_4 + 3232[43]) = Vector(-3453,19f, 6,983214f, 4235,223f);
	*(&iLocal_4 + 3232[43] + 12) = Vector(0.0f, 352,4969f, 0.0f);
	*(&iLocal_4 + 3360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "look_distance_binocs", "look_distance_binocs", Vector(-3494,158f, 20,50282f, 4197,097f), Vector(0.0f, 287,1017f, 0.0f));
	*(&iLocal_4 + 3368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand_camp", "smoking_stand", Vector(-2287,199f, 21,83827f, 4960.0f), Vector(0.0f, -268,6504f, 0.0f));
	*(&iLocal_4 + 3376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_guntricks_camp", "stand_guntricks_e_any", Vector(-2291,692f, 21,83827f, 4955,316f), Vector(0.0f, 185,6202f, 0.0f));
	*(&iLocal_4 + 3384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_worried_camp", "stand_worried_n_any", Vector(-2292.0f, 21,83827f, 4962,009f), Vector(0.0f, -46,17404f, 0.0f));
	*(&iLocal_4 + 3392) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "LuisaLowCover", Vector(-3512,75f, 7,443497f, 4250,293f), Vector(0.0f, -65,65489f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_4 + 3400) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "BridgePath01");
	PushArrayP();
	*(&iLocal_4 + 3408) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "BridgePath02");
	PushArrayP();
	*(&iLocal_4 + 3416) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "BridgePath03");
}

int HÅ 
A!tEzñCÅ!A0ðEzÓ~Å"©A4*EzÖÅ#.A3.sEzâòÅ#ò×A,¥íE{/2Å$×RA"/(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100) //Position: 0x11BA6 / 72614
{
	var uVar17688;
	
	return 4265310;
	Unknown_Function();
}

void riEê/Å.Ö5@¸VòEê/Å/ÍÖ@¸,EúÓÅ0¿P@¸"E&Å1¢¾@¸B±E[Å2Ú@¸E¶AÅ3E"@¸¿E\Å3Øj@¸ÈÙE|ÇÅ4*@¸ÁEêÅ4G@¸½ERMÅ5b¡@¸Á½EñÅ6-@¸Â|E4ïÅ7 %@¸ÀEUkÅ8T«@¸¾¸EÅ9Ò@¸ÅGEÏÜÅ9¯@¸Â÷E(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218) //Position: 0x11C85 / 72837
{
	var uVar18212;
	int iVar23316;
	int iVar27184;
	
	straddi(StackVal, StackVal, 111);
	*(5.0f * 184) = &iLocal_27;
	return;
	(iLocal_101 * 204)->f_32325 = Global_4555272 <= &fLocal_185 * 192 * -32363;
	return 184, 219 * -32127, &iLocal_135 * 186;
	iLocal_31 = ((StackVal * StackVal) * -32004 % (&uLocal_106 * 64));
	return StackVal, StackVal * 224;
	Unknown_Function();
	(Vector(StackVal, StackVal, StackVal) * Vector(4126, 69 < 128->f_53, IntToFloat(StackVal * -32602 + 65) * 253) * -32706)->f_48 = StackVal;
	PatchTrap7();
	stradd(14063[380317792], 11832 * -32688, 51);
	Unknown_Function();
	Unknown_Function();
	uParam197 = 2 * -32456;
	PatchRet();
	return;
	return uParam69;
	9301->f_21380 = (Global_12927631.f_6405 > 11432 * -32279)->f_43423;
	PatchTrapA();
	PatchRet();
	*(Local_197[1397 * -3183032832] * 250) = 2 * -31884[331943800];
	(*(*(*5365)[Vector(8383 * -32706 * 39, -StackVal, StackVal) + Vector(7450, 14593, 4294958334) * -32021 * 237617795])[StackVal188] * -11299 * -31806)[StackVal33220] = StackVal;
	PatchTrap8();
	*(DESTROY_VOLUME(StackVal, StackVal * 237)) = StackVal;
	return 69;
	return Vector(StackVal, StackVal, &iVar27184 * 231 & 211 >= iVar23316 * 224) * -31848;
	uVar18212 = StackVal;
	return StackVal * 219;
	PatchRet();
	PatchRet();
	Unknown_Function();
}

void Function_328(int iParam0, int iParam1) //Position: 0x129E8 / 76264
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

bool Function_329() //Position: 0x12A32 / 76338
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_336())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_330(&iLocal_1000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_330(struct<2>[] Param0) //Position: 0x12A5E / 76382
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_335();
	iVar1 = 0;
	if (!Function_181(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_334(&(Param0[iVar02]), 8);
		}
		else if (Function_333())
		{
			iVar1 = 1;
			Function_334(&(Param0[iVar02]), 8);
		}
		Function_334(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_181(&(Param0[iVar02]), 4))
		{
			if (!Function_181(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_181(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_181(&(Param0[02]), 8) || iVar1));
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
				Function_334(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_181(&(Param0[iVar02]), 4))
		{
			if (!Function_181(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_334(&(Param0[iVar02]), 2);
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
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_334(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_334(&(Param0[iVar02]), 2);
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
	Function_331();
	return 1;
}

void Function_331() //Position: 0x12E20 / 77344
{
	if (!Function_332(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_332(int iParam0) //Position: 0x12E60 / 77408
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_333() //Position: 0x12E7C / 77436
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

void Function_334(struct<13> Param0) //Position: 0x12EAA / 77482
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_335() //Position: 0x12EBD / 77501
{
	if (!Function_332(128))
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

bool Function_336() //Position: 0x12EFF / 77567
{
	Function_339(&iLocal_4 + 8, 1200, 2, 0);
	Function_339(&iLocal_4 + 8, 977, 2, 0);
	Function_339(&iLocal_4 + 8, 379, 2, 0);
	Function_339(&iLocal_4 + 8, 981, 2, 0);
	Function_339(&iLocal_4 + 8, 380, 2, 0);
	Function_339(&iLocal_4 + 8, 1199, 2, 0);
	Function_339(&iLocal_4 + 8, 976, 2, 0);
	Function_337(&iLocal_4 + 8, "p_gen_detonator01x", 0, 0);
	Function_337(&iLocal_4 + 8, "p_gen_dynamiteCrate01x", 0, 0);
	Function_337(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_337(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_337(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_337(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	if (Function_330(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_337(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x130CC / 78028
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&iParam1, iParam2);
	iVar0 = Function_338(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_334(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_338(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1310A / 78090
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_181(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_334(&(Param0[iVar02]), 4);
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

var Function_339(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x131D9 / 78297
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_181(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_334(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_334(&(Param0[iVar02]), 8);
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

int Function_340() //Position: 0x132B5 / 78517
{
	switch (bLocal_962)
	{
		case 0x00000065:
			if (IS_ACTOR_VALID(&iLocal_892 + 96[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_892 + 96[02]);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_341() //Position: 0x132F0 / 78576
{
	switch (bLocal_962)
	{
		case 0x00000063:
			Function_344(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_342(StackVal, &cLocal_948, Vector(-2291,93f, 21,84f, 4960,02f), &iLocal_892 + 208, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_344(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_342(StackVal, &cLocal_948, *(&iLocal_4 + 2120[13]), &iLocal_4 + 1272[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_344(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_302(&Global_54076);
			Function_342(StackVal, &cLocal_948, Function_302(&Global_54076), &iLocal_964 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 1;
}

void Function_342(char* cParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x133B3 / 78771
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &cParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_343(&uVar1, &cParam0);
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

void Function_343(var uParam0, float fParam1) //Position: 0x13653 / 79443
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

void Function_344(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x136D5 / 79573
{
	var uVar0;
	int iVar1;
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
		iVar1 = Function_50();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, false);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, true);
			AI_IGNORE_ACTOR(&iVar1);
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
				Function_302(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_302(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_345()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_345()));
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
	if (Function_332(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_332(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_345() //Position: 0x13987 / 80263
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

void Function_346(bool bParam0) //Position: 0x13A15 / 80405
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

void Function_347() //Position: 0x13A64 / 80484
{
	(&iLocal_892 + 120) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_892, "startingActorsset", 0);
	*(&iLocal_892 + 128) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_892, "startingActors"));
	*(&iLocal_892 + 96[02]) = Function_232(StackVal, StackVal, &iLocal_892, "player_wagon", 1199, 976, Vector(-2271,176f, 21,696f, 4935,798f), Vector(-3,812975f, -49,11642f, 2,950455f), 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(&iLocal_892 + 120, &iLocal_892 + 96[02]);
	SQUAD_JOIN(&iLocal_892 + 96[02], &iLocal_892 + 128);
	TASK_STAND_STILL(&iLocal_892 + 96[02], -1.0f, 0, 0);
	return;
}

void Function_348() //Position: 0x13B31 / 80689
{
	if (iLocal_963 < 4 && iLocal_963 > 105)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "wagoncutfinished"))
		{
			Function_490();
			Function_485(StackVal, "$/cutscene/REBEL04_END/REBEL04_END", &uLocal_1234, *(&Global_6667[3828] + 88), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
		}
		if (iLocal_963 <= 9)
		{
			STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-3290,108f, 7,545845f, 4176,784f), Vector(2,954f, -137,38f, 0,005f), 1);
		}
		if (IS_OBJECT_VALID(&uLocal_1672))
		{
			Function_484();
		}
		Function_482();
		Function_475(&iLocal_1202, &iLocal_4 + 1480, &iLocal_4 + 1488, "Rebel04_vol_warning", "Rebel04_vol_fail", &bLocal_977, 1, &cLocal_948, &iLocal_4, 330, 1);
		if (!Function_474(&iLocal_892 + 96[02], 1, 1, 4294967295))
		{
			Function_241("Rebel04_fail_wagon_broke");
			bLocal_977 = true;
		}
		Function_472();
		if (iLocal_963 >= 11)
		{
			Function_485(StackVal, "$/cutscene/REBEL04_END/REBEL04_END", &uLocal_1234, *(&iLocal_4 + 2120[03]), 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1);
		}
	}
	switch (iLocal_963)
	{
		case 0x00000000:
			Function_468(0);
			SET_ACTOR_HEALTH(&iLocal_989, GET_ACTOR_MAX_HEALTH(&iLocal_989));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_992[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_991 = Function_467(StackVal, *(&iLocal_4 + 1936[03]), 0, 1, 1);
				if (!Function_466(iLocal_991))
				{
					Function_465(&Local_950);
				}
				Function_463(9);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1936[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_989, *(&iLocal_4 + 1936[23]), 1, 1, true);
				Function_226(&iLocal_1194);
				iLocal_963 = 1;
			}
			else
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_466(iLocal_991) || iLocal_991 != 4294967295)) && Function_462())
			{
				if (!IS_ACTORSET_VALID(&iLocal_4 + 952))
				{
					Function_461();
				}
				Function_460(&iLocal_4 + 952, -1.0f);
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000002:
			SET_DUST_LEVEL_MODIFIER(4294967295);
			if (iLocal_992[1])
			{
				if (IS_OBJECT_VALID(&uLocal_1623))
				{
					Function_224(&uLocal_1623);
				}
				ENABLE_VEHICLE_SEAT(&iLocal_892 + 96[02], false, 1);
				ENABLE_VEHICLE_SEAT(&iLocal_892 + 96[02], true, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1539);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1543))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1543);
				}
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1936[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_989, *(&iLocal_4 + 1936[23]), 1, 1, true);
				TASK_CLEAR(&iLocal_989);
				TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
				Function_347();
				bLocal_1505 = &iLocal_892 + 96[02];
				Function_459(&iLocal_892 + 96[02]);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 96[02], *(&iLocal_4 + 1936[43]), 1, 1, true);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1480, 15);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1480, 24);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
			}
			Function_247(1);
			Function_451(StackVal, Function_247(1), 1, Global_46746[2], Function_250(bLocal_962), 0);
			Function_226(&iLocal_1194);
			iLocal_963 = 4;
			break;
		
		case 0x00000004:
			STREAMING_LOAD_BOUNDS(*(&iLocal_4 + 2552[33]), 200.0f, 0);
			if (!IS_OBJECT_VALID(&uLocal_1549))
			{
				uLocal_1549 = &iLocal_4 + 3528;
			}
			GET_OBJECT_POSITION(&uLocal_1549, &Local_1479);
			if (!IS_GRINGO_VALID(&iLocal_1628))
			{
				iLocal_1628 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_detonator", &Local_1479, 1.0f, 0);
			}
			GRINGO_ALLOW_ACTIVATION(&iLocal_1628, true);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			GIVE_WEAPON_TO_ACTOR(&iLocal_989, 19, false, 1, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_989, 0);
			SET_ACTOR_VISION_MAX_RANGE(&iLocal_989, 100.0f, 1);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&iLocal_989, 180.0f);
			SET_ACTOR_FACE_STYLE(&iLocal_989, 2);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_989, 1);
			Function_449(8, 0, 1);
			bLocal_1627 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &iLocal_4 + 1936[23], 4, 0, 0, 0, 1);
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_989, bLocal_1627);
			TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
			MEMORY_ALLOW_SHOOTING(&iLocal_989, false);
			AI_GOAL_LOOK_CLEAR(&iLocal_989);
			bLocal_1625 = false;
			Function_430();
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			Function_429(1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
			Function_428(&iLocal_1567);
			Function_428(&iLocal_1630);
			Function_428(&iLocal_1634);
			Function_428(&iLocal_1638);
			Function_428(&iLocal_1642);
			Function_428(&iLocal_1650);
			Function_427(&(Local_1297[315]));
			Function_226(&iLocal_1194);
			iLocal_963 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_426();
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 3528, 330, 0f, 2, 0);
				DECOR_SET_INT(&Global_54076, "NumTNT", bLocal_1525);
				DECOR_SET_BOOL(&Global_54076, "NoGringoCamera", true);
				Function_226(&iLocal_1194);
				iLocal_963 = 8;
			}
			break;
		
		case 0x00000008:
			if (!DECOR_CHECK_EXIST(&cLocal_948, "obj03"))
			{
				if (Function_286(&iLocal_1194) < 10,5f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_425("Rebel04_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					STOP_FORCE_LOOK_AT_COORD(&iLocal_989);
					DECOR_SET_BOOL(&cLocal_948, "obj03", true);
				}
			}
			else if (!HUD_IS_SHOWING_OBJECTIVE() && !DECOR_CHECK_EXIST(&cLocal_948, "fillerlines"))
			{
				Function_424();
				DECOR_SET_BOOL(&cLocal_948, "fillerlines", true);
			}
			if ((GET_CURRENT_GRINGO(&Global_54076) != &iLocal_1628 || Function_286(&iLocal_1194) < 30.0f) || !Function_422(&Global_54076, &iLocal_4 + 3528, 15.0f))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 96[02], *(&iLocal_4 + 1936[43]), 1, 1, true);
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_4 + 3528));
				if (!DECOR_CHECK_EXIST(&cLocal_948, "fillerlines") && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_424();
					DECOR_SET_BOOL(&cLocal_948, "fillerlines", true);
				}
				iLocal_1667 = 0;
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_1485 + 8, &iLocal_4 + 3400, 2, 1, 1, 1, false);
				AI_ACTOR_FORCE_SPEED(&Local_1485 + 8, 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &Local_1485), 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &Local_1485), 2);
				SET_ACTOR_SPEED(&Local_1485 + 8, 6.0f);
				SET_ACTOR_SPEED(&Local_1485, 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &Local_1485), 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, &Local_1485), 6.0f);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_1495 + 8, &iLocal_4 + 3416, 2, 1, 1, 1, false);
				AI_ACTOR_FORCE_SPEED(&Local_1495 + 8, 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &Local_1495), 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &Local_1495), 2);
				SET_ACTOR_SPEED(&Local_1495 + 8, 6.0f);
				SET_ACTOR_SPEED(&Local_1495, 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &Local_1495), 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, &Local_1495), 6.0f);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 816[02], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 816[12], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 688[02], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 688[12], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 736[02], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 736[12], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 736[22], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 736[32], 2);
				SET_ACTOR_SPEED(&iLocal_4 + 816[02], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 816[12], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 688[02], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 688[12], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 736[02], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 736[12], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 736[22], 6.0f);
				SET_ACTOR_SPEED(&iLocal_4 + 736[32], 6.0f);
				Function_418(0, 1);
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_REBEL04", &uLocal_1744);
				Function_344(0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0x3f800000, 0);
				*(&iLocal_964 + 24) = Function_414(&cLocal_948, 0, 1, 0, 0);
				if (!IS_OBJECT_VALID(&iLocal_964 + 24))
				{
					LOG_ERROR("Marshal01_Outro - Failed to CREATE_REBEL04_CONVOYREVEAL_CUTSCENE Marshal01_Outro_cutscene");
				}
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_964 + 24, 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_964 + 24, 0);
				DECOR_SET_FLOAT(&cLocal_948, "createdconvoycamera", GET_CURRENT_GAME_TIME());
				STREAMING_UNLOAD_SCENE();
				Function_302(&Global_54076);
				STREAMING_LOAD_BOUNDS_EXT(1, Function_302(&Global_54076), 5.0f, 1);
				Function_226(&iLocal_1194);
				iLocal_963 = 9;
			}
			break;
		
		case 0x00000009:
			if (!DECOR_CHECK_EXIST(&Global_54076, "wagoncutfinished"))
			{
				if (Function_286(&iLocal_1194) < 1.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "createdconvoycamera")) < 4,9f)
					{
						Function_413();
						AI_STOP_IGNORING_ACTORS();
						ADD_BLIP_FOR_ACTOR(&Local_1485, 322, 0, 2, 0);
						ADD_BLIP_FOR_ACTOR(&Local_1495, 322, 0, 2, 0);
						Function_412();
						DECOR_SET_BOOL(&Global_54076, "wagoncutfinished", true);
						Function_297(2, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_1495 + 8, &Local_1485 + 8, &iLocal_4 + 3400, 40.0f, 1, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 736[02], &Local_1495, &iLocal_4 + 3400, -20.0f, 1, -2.0f);
						TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 736[12], &Local_1495, &iLocal_4 + 3400, -20.0f, 1, 2.0f);
					}
					else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "createdconvoycamera")) < 5,5f && IS_OBJECT_VALID(&iLocal_964 + 24))
					{
						DESTROY_OBJECT(&iLocal_964 + 24);
					}
					else if (IS_ACTION_NODE_PLAYING(&Global_54076, "dynamite/Detonator/idle_high"))
					{
						Function_302(&Global_54076);
						STREAMING_LOAD_BOUNDS_EXT(1, Function_302(&Global_54076), 5.0f, 1);
						Function_408();
					}
				}
			}
			else if (!DECOR_CHECK_EXIST(&cLocal_948, "obj03b"))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !Function_140())
				{
					Function_425("Rebel04_obj03b", 0x40f00000, 1, 2, 0, 0, 0, 0);
					DECOR_SET_FLOAT(&cLocal_948, "obj03b", GET_CURRENT_GAME_TIME());
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "obj03b")) < 1.0f && !DECOR_CHECK_EXIST(&cLocal_948, "ndetonhelp"))
			{
				Function_139("Rebel04_obj03_help_detonator", 10.0f, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(&cLocal_948, "ndetonhelp", true);
			}
			Function_398();
			Function_472();
			if (bLocal_1625 && DECOR_CHECK_EXIST(&Global_54076, "wagoncutfinished"))
			{
				if (iLocal_1526 >= 0)
				{
					if ((!IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece07")) && !IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece07"))) && !IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece07")))
					{
						Function_397();
						LOG_ERROR("MANAGE_CARAVAN_PRE_ATTACK");
					}
					else
					{
						Function_396();
					}
				}
				else
				{
					Function_395();
				}
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_989);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_989, 0);
				bLocal_1627 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3488, 4, 0, 0, 1, false);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_989, bLocal_1627);
				TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
				SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_989, &iLocal_4 + 1400[3], 2, true);
				Function_449(8, 0, 1);
				Function_226(&iLocal_1194);
				iLocal_963 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_386();
			Function_472();
			Function_379(5.0f);
			Function_377();
			if (Function_376())
			{
				Function_375();
				DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1744, 1);
				Function_374(&iLocal_1517, 322, 100.0f, 0);
				if (Function_373(&bLocal_1521, 1, 1, 1, 1, 0) >= 0)
				{
					SQUAD_GOALS_CLEAR(&bLocal_1521);
					Function_372(&bLocal_1521);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1521, true, 1, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					Function_371(&bLocal_1521, 322, 1,25f);
				}
				Function_226(&iLocal_1194);
				iLocal_963 = 11;
			}
			break;
		
		case 0x0000000B:
			if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1400[5]) || IS_ACTOR_SHOOTING(&Global_54076)) && !DECOR_CHECK_EXIST(&cLocal_948, "gunfightmusictrigger"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(&cLocal_948, "gunfightmusictrigger", true);
			}
			if (Function_370(&iLocal_1517, 1, 1, 1, 1, 0) != 1 && !DECOR_CHECK_EXIST(&cLocal_948, "gunfightlowmusictrigger"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(&cLocal_948, "gunfightlowmusictrigger", true);
			}
			Function_377();
			Function_379(5.0f);
			if (Function_370(&iLocal_1517, 1, 1, 1, 1, 0) >= 2 && !DECOR_CHECK_EXIST(&cLocal_948, "gunfight_low"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(&cLocal_948, "gunfight_low", true);
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_288(&iLocal_1587))
				{
					Function_428(&iLocal_1587);
					if (Function_369())
					{
						Function_375();
					}
					else
					{
						Function_368();
					}
				}
				else if (Function_286(&iLocal_1587) < 15.0f)
				{
					if (Function_369())
					{
						Function_375();
					}
					else
					{
						Function_368();
					}
					Function_226(&iLocal_1587);
				}
			}
			if (Function_363())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				DECOR_REMOVE(&Global_54076, "NumTNT");
				Function_362();
				if (IS_GRINGO_VALID(&iLocal_1628))
				{
					GRINGO_ALLOW_ACTIVATION(&iLocal_1628, false);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_355(&(Local_1297[315]), &iLocal_4 + 960, "RebelSoldier", 0, 0x5f5e100, 1);
				Function_352();
				Function_449(8, 1, 1);
				ACTOR_START_FORCE_HOLSTER(&iLocal_989, 0, 0);
				Function_226(&iLocal_1194);
				iLocal_963 = 105;
			}
			break;
		
		case 0x00000069:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_286(&iLocal_1194) < 3.0f) || Function_286(&iLocal_1194) < 5.0f)
			{
				Function_226(&iLocal_1194);
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_963 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
				Function_449(8, 0, 1);
				Function_350(&iLocal_4 + 952);
				if (IS_OBJECTSET_VALID(&iLocal_1517))
				{
					Function_349(&iLocal_1517);
				}
				if (IS_OBJECTSET_VALID(&iLocal_1519))
				{
					Function_349(&iLocal_1519);
				}
				iLocal_992[2] = 1;
				ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				if (IS_OBJECT_VALID(&uLocal_1672))
				{
					END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_1672);
					DESTROY_OBJECT(&uLocal_1672);
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_989);
				STREAMING_UNLOAD_SCENE();
				Function_226(&iLocal_1194);
				bLocal_962 = 101;
				iLocal_963 = 2;
			}
			break;
	}
	return;
}

void Function_349(int iParam0) //Position: 0x14BF9 / 84985
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam0) - 1))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_350(int iParam0) //Position: 0x14C44 / 85060
{
	bool bVar0;
	
	Function_351(&iParam0);
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_351(var uParam0) //Position: 0x14C90 / 85136
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

void Function_352() //Position: 0x14CEF / 85231
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_AllDefeated", "Rebel04_AllDefeated", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_353(int iParam0) //Position: 0x14D3E / 85310
{
	Function_354(0, &Global_54076, iParam0, 0);
	Function_354(1, &iLocal_989, iParam0, 0);
	Function_354(2, &iLocal_4 + 864[02], iParam0, 0);
	return;
}

void Function_354(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x14D6A / 85354
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

int Function_355(struct<69> Param0) //Position: 0x14D92 / 85394
{
	if (!Function_361(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_360(&Param0, &iParam2))
	{
		return 0;
	}
	Function_359(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_356(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_356(var uParam0, int iParam1, int iParam2) //Position: 0x14DD8 / 85464
{
	if (iParam1 != 100000000)
	{
		Function_358(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_357(&uParam0, &iParam2);
	}
	return;
}

void Function_357(struct<69> Param0) //Position: 0x14DFF / 85503
{
	Param0.f_68 = 0;
	Function_358(&Param0, 2, &bParam1);
	Function_358(&Param0, 4, &bParam1);
	Function_358(&Param0, 8, &bParam1);
	Function_358(&Param0, 16, &bParam1);
	Function_358(&Param0, 32, &bParam1);
	Function_358(&Param0, 64, &bParam1);
	Function_358(&Param0, 128, &bParam1);
	Function_358(&Param0, 256, &bParam1);
	Function_358(&Param0, 512, &bParam1);
	Function_358(&Param0, 1024, &bParam1);
	return;
}

void Function_358(int iParam0, int iParam1, bool bParam2) //Position: 0x14E7A / 85626
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

void Function_359(struct<65> Param0) //Position: 0x14EB9 / 85689
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_360(int iParam0, char* cParam1) //Position: 0x14EC6 / 85702
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

bool Function_361(struct<61> Param0) //Position: 0x14F53 / 85843
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

void Function_362() //Position: 0x15106 / 86278
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1541))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1541);
	}
	if (IS_BLIP_VALID(&uLocal_1591))
	{
		REMOVE_BLIP(&uLocal_1591);
	}
	if (IS_BLIP_VALID(&uLocal_1593))
	{
		REMOVE_BLIP(&uLocal_1593);
	}
	if (IS_BLIP_VALID(&iLocal_1595))
	{
		REMOVE_BLIP(&iLocal_1595);
	}
	if (IS_BLIP_VALID(&uLocal_1597))
	{
		REMOVE_BLIP(&uLocal_1597);
	}
	if (IS_BLIP_VALID(&iLocal_1599))
	{
		REMOVE_BLIP(&iLocal_1599);
	}
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		DESTROY_OBJECT(&iLocal_1529);
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		DESTROY_OBJECT(&iLocal_1531);
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		DESTROY_OBJECT(&iLocal_1533);
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		DESTROY_OBJECT(&iLocal_1535);
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		DESTROY_OBJECT(&iLocal_1537);
	}
	return;
}

bool Function_363() //Position: 0x151C7 / 86471
{
	if (!Function_376())
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 688[02], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 688[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 736[02], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 736[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 736[22], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 736[32], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 816[02], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 816[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_364(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x1529F / 86687
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_367(&bVar0, 1);
	}
	if (&bParam2)
	{
		Function_367(&bVar0, 2);
	}
	if (&bParam3)
	{
		Function_367(&bVar0, 4);
	}
	if (&bParam4)
	{
		Function_367(&bVar0, 8);
	}
	if (&bParam5)
	{
		Function_367(&bVar0, 1024);
	}
	if (&bParam7)
	{
		Function_367(&bVar0, 16);
	}
	if (&bParam8)
	{
		Function_367(&bVar0, 32);
	}
	if (&bParam6)
	{
		Function_367(&bVar0, 1048576);
	}
	return Function_365(&uParam0, bVar0);
}

int Function_365(int iParam0, int iParam1) //Position: 0x15316 / 86806
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_366(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_366(&iParam1, 64))
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

bool Function_366(var uParam0, int iParam1) //Position: 0x15404 / 87044
{
	return (uParam0 && iParam1) == 0;
}

void Function_367(bool bParam0, bool bParam1) //Position: 0x15411 / 87057
{
	Function_77(&bParam0, bParam1);
	return;
}

void Function_368() //Position: 0x1541F / 87071
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_LuisaTaunts", "Rebel04_LuisaTaunts", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_369() //Position: 0x1546E / 87150
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_370(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x15481 / 87169
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	if (IS_OBJECTSET_VALID(&iParam0))
	{
		bVar3 = false;
		while (bVar3 < (GET_OBJECTSET_SIZE(&iParam0) - 1))
		{
			uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &iParam0);
			if (IS_OBJECT_VALID(&uVar2))
			{
				if (GET_OBJECT_TYPE(&uVar2) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar2);
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (IS_ACTOR_ALIVE(&uVar1))
						{
							bVar4 = true;
							if (bParam1)
							{
								if (IS_ACTOR_CRIPPLED(&uVar1, 3) || IS_ACTOR_CRIPPLED(&uVar1, 4))
								{
									bVar4 = false;
								}
							}
							if (&bParam2)
							{
								if (IS_ACTOR_HOGTIED(&uVar1))
								{
									bVar4 = false;
								}
							}
							if (&bParam3)
							{
								if (IS_ACTOR_BEING_DRAGGED(&uVar1, 1.0f))
								{
									bVar4 = false;
								}
							}
							if (&bParam4)
							{
								bParam4 = &bParam4;
							}
							if (&bParam5)
							{
								if (!IS_ACTOR_RIDING(&uVar1) && !IS_ACTOR_RIDING_VEHICLE(&uVar1))
								{
									bVar4 = false;
								}
							}
							if (bVar4)
							{
								iVar0++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	return iVar0;
}

void Function_371(bool bParam0, bool bParam1, float fParam2) //Position: 0x1555E / 87390
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0)));
			}
			SET_BLIP_MAX_DISTANCE(ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), bParam1, 0, 2, 0), fParam2);
		}
		bVar0++;
	}
	return;
}

void Function_372(bool bParam0) //Position: 0x155C8 / 87496
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

int Function_373(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x155FD / 87549
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	iVar3 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				bVar2 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar1, 3) || IS_ACTOR_CRIPPLED(&uVar1, 4))
					{
						bVar2 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar1))
					{
						bVar2 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar1, 1.0f))
					{
						bVar2 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar1))
					{
						bVar2 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar1) && !IS_ACTOR_RIDING_VEHICLE(&uVar1))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					iVar3++;
				}
			}
		}
		bVar0++;
	}
	return iVar3;
}

void Function_374(int iParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x156C8 / 87752
{
	bool bVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
	{
		uVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0));
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_HUMAN(&uVar1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
				}
				if (&bParam3)
				{
					SET_BLIP_MAX_DISTANCE(ADD_BLIP_FOR_ACTOR(&uVar1, bParam1, 0, 2, 0), fParam2);
				}
				else
				{
					ADD_BLIP_FOR_ACTOR(&uVar1, bParam1, 0, 2, 0);
				}
			}
		}
		bVar0++;
	}
}

void Function_375() //Position: 0x1574E / 87886
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_LuisaShoutsEnc", "Rebel04_LuisaShoutsEnc", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_376() //Position: 0x157A3 / 87971
{
	if (Function_364(&iLocal_4 + 608[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_364(&iLocal_4 + 608[32], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

void Function_377() //Position: 0x157DC / 88028
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar1 = GET_OBJECTSET_SIZE(&iLocal_1517);
	bVar0 = false;
	while (bVar0 <= iVar1)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iLocal_1517));
		Function_378(&uVar2, 0);
		bVar0++;
	}
	iVar1 = GET_OBJECTSET_SIZE(&iLocal_1519);
	bVar0 = false;
	while (bVar0 <= iVar1)
	{
		uVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iLocal_1519));
		Function_378(&uVar3, 0);
		bVar0++;
	}
	iVar1 = 12;
	bVar0 = false;
	while (bVar0 <= iVar1)
	{
		uVar4 = &iLocal_4 + 968[bVar02];
		Function_378(&uVar4, 1);
		bVar0++;
	}
	return;
}

void Function_378(var uParam0, bool bParam1) //Position: 0x15871 / 88177
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	if ((IS_ACTOR_VALID(&uParam0) && IS_ACTOR_DEAD(&uParam0)) && !DECOR_CHECK_EXIST(&uParam0, "frozenAI"))
	{
		if (!bParam1 && (IS_ACTOR_REACTING(&uParam0) || IS_ACTOR_RIDING(&uParam0)))
		{
			return;
		}
		fVar0 = GET_LAST_HIT_TIME(&uParam0);
		bVar1 = DECOR_GET_FLOAT(&uParam0, "explosionDeathTime");
		bVar2 = (fVar0 <= 0.0f && (GET_CURRENT_GAME_TIME() - fVar0) > 2.0f);
		if (!bVar2)
		{
			bVar2 = (bVar1 <= 0.0f && (GET_CURRENT_GAME_TIME() - bVar1) > 1,25f);
		}
		if (bVar2)
		{
			return;
		}
		if (!IS_ACTOR_RAGDOLL(&uParam0))
		{
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uParam0), true);
			SET_MOVER_FROZEN(&uParam0, true);
			SET_ACTOR_FROZEN_AFTER_CORPSIFY(&uParam0, 1);
			DECOR_SET_BOOL(&uParam0, "frozenAI", true);
		}
		else
		{
			fVar6 = 0,1f;
			GET_ACTOR_VELOCITY(&uParam0, &vVar3);
			fVar7 = FABS((((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)) + (vVar3.z * vVar3.z)));
			if (fVar7 > fVar6)
			{
				bVar5 = false;
			}
			else
			{
				bVar5 = true;
			}
			if (!bVar5)
			{
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uParam0), true);
				SET_MOVER_FROZEN(&uParam0, true);
				SET_ACTOR_FROZEN_AFTER_CORPSIFY(&uParam0, 1);
				DECOR_SET_BOOL(&uParam0, "frozenAI", true);
			}
		}
	}
	return;
}

void Function_379(float fParam0) //Position: 0x159AA / 88490
{
	Function_381(StackVal, StackVal, StackVal, StackVal, Local_1485, &bLocal_1619, fParam0);
	Function_381(StackVal, StackVal, StackVal, StackVal, Local_1495, &bLocal_1620, fParam0);
	if (IS_ACTOR_VALID(&Local_1485))
	{
		if ((!IS_ACTOR_ALIVE(&Local_1485 + 8) || GET_ACTOR_IN_VEHICLE_SEAT(&Local_1485, false) == &Local_1485 + 8) && Function_380(&Local_1485, &bLocal_1521, 1))
		{
			SQUAD_LEAVE(&Local_1485);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Local_1485)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Local_1485));
		}
	}
	if (IS_ACTOR_VALID(&Local_1495))
	{
		if ((!IS_ACTOR_ALIVE(&Local_1495 + 8) || GET_ACTOR_IN_VEHICLE_SEAT(&Local_1495, false) == &Local_1495 + 8) && Function_380(&Local_1495, &bLocal_1521, 1))
		{
			SQUAD_LEAVE(&Local_1495);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Local_1495)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Local_1495));
		}
	}
	return;
}

int Function_380(int iParam0, int iParam1, bool bParam2) //Position: 0x15A6E / 88686
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
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

void Function_381(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6) //Position: 0x15AB6 / 88758
{
	struct<5> Var0;
	
	if (!bParam5)
	{
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (DECOR_CHECK_EXIST(&iParam0, "kersploded"))
			{
				if (DECOR_CHECK_EXIST(&iParam0, "teleported"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iParam0, "kersploded")) < fParam6)
					{
						if (IS_OBJECT_VALID(&iParam0 + 16))
						{
							DESTROY_OBJECT(&iParam0 + 16);
						}
						if (IS_OBJECT_VALID(&iParam0 + 24))
						{
							DESTROY_OBJECT(&iParam0 + 24);
						}
						if (IS_OBJECT_VALID(&iParam0 + 32))
						{
							DESTROY_OBJECT(&iParam0 + 32);
						}
						KILL_ACTOR(&iParam0);
						bParam5 = 1;
						if (!bLocal_1619 || !bLocal_1620)
						{
							if (Function_369())
							{
								Function_385();
							}
							else
							{
								Function_384();
							}
						}
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iParam0, "kersploded")) < 0,1f)
				{
					Function_383(&iParam0);
					Var0 = Function_383(&iParam0);
					Var0.f_4 = (StackVal - 10.0f);
					TELEPORT_ACTOR(&iParam0, &Var0, 1, 1, 1);
					DECOR_SET_BOOL(&iParam0, "teleported", true);
				}
				else
				{
					if (!IS_ACTOR_ALIVE(&iParam0 + 8))
					{
						bParam5 = 1;
					}
					else if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam0, false) != &iParam0 + 8)
					{
						bParam5 = 1;
					}
					if (bParam5)
					{
						if (!bLocal_1619 && !bLocal_1620)
						{
							Function_382();
						}
					}
				}
			}
		}
		else
		{
			bParam5 = 1;
		}
	}
}

void Function_382() //Position: 0x15C1A / 89114
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_SoldAband3Wag", "Rebel04_SoldAband3Wag", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

struct<8> Function_383(int iParam0) //Position: 0x15C6D / 89197
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

void Function_384() //Position: 0x15CD9 / 89305
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_DestroysSubsWags", "Rebel04_DestroysSubsWags", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_385() //Position: 0x15D32 / 89394
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_1WagRemains", "Rebel04_1WagRemains", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_386() //Position: 0x15D81 / 89473
{
	if (bLocal_1625)
	{
		if (!Function_288(&iLocal_1575))
		{
			Function_428(&iLocal_1575);
		}
		if (Function_286(&iLocal_1575) < 1.0f)
		{
			Function_394(&iLocal_4 + 856);
			Function_394(&iLocal_4 + 728);
			Function_394(&iLocal_4 + 808);
			if (!iLocal_1667 && (Function_370(&iLocal_1517, 1, 1, 1, 1, 0) >= 5 || (GET_CURRENT_GRINGO(&Global_54076) == &iLocal_1628 && (Function_392(&iLocal_1519, &Global_54076, 100.0f) || Function_392(&iLocal_1517, &Global_54076, 100.0f)))))
			{
				Function_374(&iLocal_1517, 322, 100.0f, 0);
				Function_374(&iLocal_1519, 322, 100.0f, 0);
				iLocal_1667 = 1;
			}
			Function_226(&iLocal_1575);
		}
		Function_389();
		Function_387();
	}
	if (!DECOR_CHECK_EXIST(&cLocal_948, "gunfighttrigger"))
	{
	}
	if (IS_ACTOR_VALID(&Local_1485))
	{
		if (IS_ACTOR_VALID(&Local_1485) && IS_ACTOR_IN_VOLUME(&Local_1485, &iLocal_4 + 1400[4]))
		{
			Function_241("Rebel04_fail_wagons_escaped");
			bLocal_977 = true;
		}
	}
	if (IS_ACTOR_VALID(&Local_1495))
	{
		if (IS_ACTOR_IN_VOLUME(&Local_1495, &iLocal_4 + 1400[4]))
		{
			Function_241("Rebel04_fail_wagons_escaped");
			bLocal_977 = true;
		}
	}
	return;
}

void Function_387() //Position: 0x15EE1 / 89825
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 2.0f, 0.0f);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece01"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece02"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece03"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece04"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece05"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon01_piece06"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece01"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece02"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece03"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece04"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece05"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon02_piece06"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece01"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece02"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece03"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece04"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece05"), Var0);
	Function_388(StackVal, FIND_OBJECT_IN_LAYOUT(&cLocal_948, "wagon03_piece06"), Var0);
	return;
}

void Function_388(bool bParam0, struct<5> Param1) //Position: 0x1612E / 90414
{
	var uVar0;
	struct<2> Var1;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (!DECOR_CHECK_EXIST(&bParam0, "nactivated"))
		{
			uVar0 = GET_PHYSINST_FROM_OBJECT(&bParam0);
			if (IS_PHYSINST_VALID(&uVar0))
			{
				if (IS_PHYSINST_IN_LEVEL(&uVar0) && !IS_PHYSINST_ACTIVE(&uVar0))
				{
					ACTIVATE_PHYSINST(&uVar0);
					DECOR_SET_BOOL(&bParam0, "nactivated", true);
					GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&bParam0), &Var1);
					Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Param1, Var1, StackVal);
					if (Param1 < 0.0f)
					{
						SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&bParam0), &Var1, 0);
					}
					else if (StackVal < 0.0f)
					{
						SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&bParam0), &Var1, 2);
					}
				}
			}
		}
	}
	return;
}

void Function_389() //Position: 0x161D5 / 90581
{
	if (ACTORS_IN_RANGE(&Global_54076, &iLocal_989, 30.0f) && !Function_140())
	{
		if (IS_ACTOR_VALID(&Local_1485) && !bLocal_1619)
		{
			if (!Function_474(&Local_1485, 1, 1, 4294967295))
			{
				Function_390(&Local_1485, &Local_1485 + 8);
				bLocal_1619 = true;
			}
		}
		if (IS_ACTOR_VALID(&Local_1495) && !bLocal_1620)
		{
			if (!Function_474(&Local_1495, 1, 1, 4294967295))
			{
				Function_390(&Local_1495, &Local_1495 + 8);
				bLocal_1620 = true;
			}
		}
	}
	return;
}

void Function_390(int iParam0, int iParam1) //Position: 0x1624F / 90703
{
	REMOVE_OBJECT_FROM_OBJECTSET(&iParam0, &iLocal_1519);
	if (IS_ACTOR_ALIVE(&iParam1))
	{
		if (IS_ACTOR_RIDING_VEHICLE(&iParam1))
		{
			TASK_VEHICLE_LEAVE(&iParam1);
		}
		ADD_OBJECT_TO_OBJECTSET(&iParam1, &iLocal_1517);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iParam1, -1.0f);
	}
	switch (GET_OBJECTSET_SIZE(&iLocal_1519))
	{
		case 0x00000002:
			Function_385();
			break;
		
		case 0x00000001:
			Function_391();
			break;
	}
	return;
}

void Function_391() //Position: 0x162AD / 90797
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_2WagsRemain", "Rebel04_2WagsRemain", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_392(int iParam0, int iParam1, bool bParam2) //Position: 0x162FC / 90876
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam0) - 1))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) == 15)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (!IS_ACTOR_VEHICLE(&uVar2))
					{
						if (IS_ACTOR_ALIVE(&uVar2) && Function_393(&uVar2, &iParam1, bParam2))
						{
							return 1;
						}
					}
					if (Function_393(&uVar2, &iParam1, bParam2))
					{
						return 1;
					}
				}
			}
			if (Function_422(&iParam1, &uVar1, bParam2))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_393(var uParam0, int iParam1, bool bParam2) //Position: 0x16394 / 91028
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

void Function_394(var uParam0) //Position: 0x164A9 / 91305
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (((IS_ACTOR_VALID(&uVar1) && !IS_ACTOR_RIDING(&uVar1)) && !GET_TASK_STATUS(&uVar1, 50) != 1) && DECOR_CHECK_EXIST(&uVar1, "calvary"))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, -1.0f);
			}
			bVar0++;
		}
	}
	return;
}

void Function_395() //Position: 0x1650F / 91407
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_WagonOverDynamit", "Rebel04_WagonOverDynamit", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_396() //Position: 0x16568 / 91496
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BlowsUp1Wag", "Rebel04_BlowsUp1Wag", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397() //Position: 0x165B7 / 91575
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_DetonatesEarly", "Rebel04_DetonatesEarly", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_398() //Position: 0x1660C / 91660
{
	int iVar0;
	bool bVar1;
	
	if (!bLocal_1625)
	{
		if (!Function_288(&iLocal_1575))
		{
			Function_428(&iLocal_1575);
		}
		iVar0 = 0;
		if (Function_286(&iLocal_1575) < 1.0f)
		{
			if (Function_407(&iLocal_1519, &iLocal_4 + 1400[6]))
			{
				iVar0 = 1;
			}
			if (Function_392(&iLocal_1519, &Global_54076, 25.0f) && Function_406(&iLocal_4 + 856, &Global_54076, 3212836864))
			{
				iVar0 = 1;
			}
			Function_226(&iLocal_1575);
		}
		if ((iLocal_1526 < 0 || Function_405(&Global_54076, 1)) || iVar0)
		{
			AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(1);
			AI_SET_ALLOW_HOSTILE_ATTACK_AI(1);
			MEMORY_ALLOW_SHOOTING(&iLocal_989, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_989, &iLocal_4 + 1936[23], 3212836864);
			Function_418(1, 0);
			SET_PATH_LOOPING(&iLocal_4 + 3440, 1);
			SET_PATH_LOOPING(&iLocal_4 + 3448, 1);
			SET_PATH_LOOPING(&iLocal_4 + 3456, 1);
			Function_399(&iLocal_4 + 856, 1);
			Function_399(&iLocal_4 + 728, 1);
			Function_399(&iLocal_4 + 808, 1);
			MEMORY_ATTACK_ON_SIGHT(&Local_1485 + 8, 0);
			MEMORY_ATTACK_ON_SIGHT(&Local_1495 + 8, 0);
			if (!Function_364(&Local_1485 + 8, 1, 1, 1, 1, 0, 0, 0, 0))
			{
				if (Function_364(&Local_1495 + 8, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3416, 4, 1, 0, 1, false);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Local_1495 + 8, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
			}
			else
			{
				if (Function_364(&Local_1485 + 8, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_1485 + 8, &iLocal_4 + 3400, 4, 1, 1, 1, false);
				}
				if (Function_364(&Local_1495 + 8, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_1495 + 8, &iLocal_4 + 3416, 4, 1, 1, 1, false);
				}
			}
			bLocal_1625 = true;
		}
	}
	return;
}

void Function_399(bool bParam0, bool bParam1) //Position: 0x167C3 / 92099
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		SQUAD_GOALS_CLEAR(&bParam0);
		Function_372(&bParam0);
		SQUAD_SET_FACTION(&bParam0, 19);
		Function_403(&bParam0, &iLocal_4 + 960, 4);
		Function_402(&bParam0, &Global_54076, 4);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&bParam0, 0);
		Function_371(&bParam0, 322, 1,25f);
		Function_401(&bParam0, 1);
		Function_400(&bParam0, 150.0f, 180.0f);
		if (bParam1)
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_RIDING(&uVar1))
					{
						if (RAND_INT_RANGE(false, 300000) >= 200000)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&uVar1, &iLocal_4 + 3440, 4, 0, 0, 1, false);
						}
						else if (RAND_INT_RANGE(false, 300000) >= 100000)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&uVar1, &iLocal_4 + 3448, 4, 0, 0, 1, false);
						}
						else
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&uVar1, &iLocal_4 + 3456, 4, 0, 0, 1, false);
						}
						DECOR_SET_BOOL(&uVar1, "calvary", true);
					}
					else
					{
						SQUAD_LEAVE(&uVar1);
						ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_1517);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, -1.0f);
					}
				}
				bVar0++;
			}
		}
		else
		{
			SQUAD_GOAL_ADD_COMBAT(&bParam0, 0, 4294967295, 0);
			bVar2 = false;
			while (bVar2 < (SQUAD_GET_SIZE(&bParam0) - 1))
			{
				uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar2);
				if (IS_ACTOR_VALID(&uVar3))
				{
					if (!IS_ACTOR_RIDING(&uVar3))
					{
						uVar4 = FIND_NEAREST_COVER_LOCATION(StackVal, &iLocal_4 + 2848[bVar23], 2.0f, 90.0f, 7);
						bVar5 = TASK_SEQUENCE_OPEN();
						if (!IS_ACTOR_IN_VOLUME(&uVar3, &iLocal_4 + 1400[3]))
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3464, 4, 0, 0, 1, false);
						}
						if (IS_COVER_LOCATION_VALID(&uVar4))
						{
							TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar4, -1.0f, 1086324736);
						}
						else
						{
							uVar4 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&cLocal_948, Function_54(), *(&iLocal_4 + 2848[bVar23]), *(&iLocal_4 + 2848[bVar23] + 12), 4));
							TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar4, -1.0f, 1086324736);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar3, 1, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar3, 2, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar3, 3, false);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&uVar3, bVar5);
						TASK_SEQUENCE_RELEASE(bVar5, 1);
						SET_ACTOR_UPDATE_PRIORITY(&uVar3, false);
						TASK_PRIORITY_SET(&uVar3, true);
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

void Function_400(var uParam0, bool bParam1, bool bParam2) //Position: 0x169FE / 92670
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (bParam1 <= 0.0f)
			{
				SET_ACTOR_VISION_MAX_RANGE(&uVar1, bParam1, 1);
			}
			if (bParam2 <= 0.0f)
			{
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_401(bool bParam0, bool bParam1) //Position: 0x16A60 / 92768
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
				MEMORY_ALLOW_SHOOTING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_402(bool bParam0, var uParam1, bool bParam2) //Position: 0x16AAF / 92847
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
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_403(bool bParam0, var uParam1, bool bParam2) //Position: 0x16AFB / 92923
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_404(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_404(var uParam0, var uParam1, bool bParam2) //Position: 0x16B52 / 93010
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

var Function_405(var uParam0, bool bParam1) //Position: 0x16BA4 / 93092
{
	int iVar0;
	
	iVar0 = 0;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&uParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&uParam0)))
		{
			case 0x0000002F:
				if (&bParam1)
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000029:
				iVar0 = 1;
				break;
			
			case 0x00000027:
				iVar0 = 1;
				break;
			
			case 0x00000028:
				iVar0 = 1;
				break;
			
			case 0x0000002A:
				iVar0 = 1;
				break;
			
			case 0x0000002B:
				iVar0 = 1;
				break;
			
			case 0x0000002C:
				iVar0 = 1;
				break;
			
			case 0x00000031:
				iVar0 = 1;
				break;
			}
	}
	return iVar0;
}

int Function_406(var uParam0, var uParam1, float fParam2) //Position: 0x16C32 / 93234
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	bVar4 = false;
	bVar4 = false;
	while (bVar4 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (&fParam2 >= 0.0f)
		{
			if (MEMORY_GET_IS_VISIBLE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar4), &uParam1))
			{
				return 1;
			}
		}
		GET_POSITION(&uParam1, &Var0);
		GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar4), &Var2);
		if (VDIST(Var0, Var2) > &fParam2)
		{
			if (MEMORY_GET_IS_VISIBLE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar4), &uParam1))
			{
				return 1;
			}
		}
		bVar4++;
	}
	return 0;
}

bool Function_407(int iParam0, int iParam1) //Position: 0x16CC5 / 93381
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam0) - 1))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) == 15)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (!IS_ACTOR_VEHICLE(&uVar2))
					{
						if (IS_ACTOR_ALIVE(&uVar2) && IS_ACTOR_IN_VOLUME(&uVar2, &iParam1))
						{
							return 1;
						}
					}
					if (IS_ACTOR_IN_VOLUME(&uVar2, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_OBJECT_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_408() //Position: 0x16D5A / 93530
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	struct<2> Var5;
	
	Function_411();
	Local_1676 = Function_411();
	GET_OBJECT_RELATIVE_POSITION(&iLocal_4 + 3528, Local_1679, &Local_1479);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Local_1479, Local_1676, StackVal);
	VNORMALIZE(&Var0);
	Local_1479 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var0, Local_1479, StackVal) * Vector(1,4f, 1,4f, 1,4f), StackVal, StackVal);
	Function_411();
	Var2 = Function_411();
	uVar4 = Function_409(StackVal, StackVal, Local_1479, Var2);
	Var5.f_4 = uVar4;
	STREAMING_LOAD_SCENE_EXT(Local_1479, Var5, 1);
	return;
}

var Function_409(struct<2> Param0, struct<2> Param2) //Position: 0x16DC8 / 93640
{
	var uVar0;
	
	Function_410(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_410(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x16DE2 / 93666
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<8> Function_411() //Position: 0x16E06 / 93702
{
	switch (iLocal_1626)
	{
		case 0x00000001:
			return StackVal, Local_1601;
			break;
		
		case 0x00000002:
			return StackVal, Local_1604;
			break;
		
		case 0x00000003:
			return StackVal, Local_1607;
			break;
		
		case 0x00000004:
			return StackVal, Local_1610;
			break;
		
		case 0x00000005:
			return StackVal, Local_1613;
			break;
	}
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_412() //Position: 0x16E63 / 93795
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_ConvoyArrives", "Rebel04_ConvoyArrives", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413() //Position: 0x16EB6 / 93878
{
	struct<2> Var0;
	struct<2> Var2;
	
	uLocal_1672 = CREATE_CAMERA_IN_LAYOUT(&cLocal_948, "bombCam", 2);
	uLocal_1674 = CREATE_AIMRAMP_IN_LAYOUT(&cLocal_948, "bombCam_AR");
	Function_411();
	Local_1676 = Function_411();
	GET_OBJECT_RELATIVE_POSITION(&iLocal_4 + 3528, Local_1679, &Local_1479);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Local_1479, Local_1676, StackVal);
	VNORMALIZE(&Var0);
	Local_1479 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var0, Local_1479, StackVal) * Vector(1,4f, 1,4f, 1,4f), StackVal, StackVal);
	SET_CAMERA_POSITION(&uLocal_1672, Local_1479);
	SET_CAMERA_ORIENTATION(StackVal, &uLocal_1672, Vector(0,968f, -0,208f, -0,141f), 0);
	SET_CAMERA_TARGET_POSITION(&uLocal_1672, Local_1676, 0);
	SET_CAMERA_FOV(&uLocal_1672, 25,8f);
	CAMERA_RESET(0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uLocal_1672, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uLocal_1672, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	uLocal_1682 = CREATE_CAMERASHOT_IN_LAYOUT(&cLocal_948, Function_54());
	iLocal_1684 = CREATE_CAMERASHOT_IN_LAYOUT(&cLocal_948, Function_54());
	GET_CAMERA_POSITION(&uLocal_1672, &Var2);
	SET_CAMERASHOT_POSITION(&uLocal_1682, Var2);
	SET_CAMERASHOT_TARGET_POSITION(&uLocal_1682, Local_1676, 0);
	SET_CAMERASHOT_FOV(&uLocal_1682, 25,8f);
	SET_CAMERASHOT_POSITION(&iLocal_1684, Var2);
	SET_CAMERASHOT_TARGET_POSITION(&iLocal_1684, Local_1676, 0);
	SET_CAMERASHOT_FOV(&iLocal_1684, 25,8f);
	ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(&uLocal_1672, &uLocal_1682, &iLocal_1684, 0,1f, 4294967295, 0);
	SET_CAMERA_TARGET_POSITION(&uLocal_1672, Local_1676, 0);
	AI_IGNORE_ACTOR(&Global_54076);
	AI_GOAL_LOOK_AT_COORD(&Global_54076, &Local_1676, 1, 0, 3212836864, 3212836864);
	return;
}

var Function_414(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x17037 / 94263
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Rebel04_ConvoyReveal", 2, 1);
	}
	Function_415(&uVar0);
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

void Function_415(int iParam0) //Position: 0x170C5 / 94405
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_417(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_416(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_416(int iParam0) //Position: 0x17100 / 94464
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,9297f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3285,544f, 7,71453f, 4179,534f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,039536f, -2,373571f, -4,9E-05f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_417(int iParam0) //Position: 0x17171 / 94577
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,96167f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3290,108f, 7,545845f, 4176,784f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,0622f, -2,419138f, -4,9E-05f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_418(bool bParam0, bool bParam1) //Position: 0x171E2 / 94690
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!IS_ACTORSET_VALID(&iLocal_4 + 952))
	{
		Function_461();
	}
	if (!IS_ACTORSET_VALID(&iLocal_4 + 1256))
	{
		Function_421();
	}
	bVar0 = false;
	if (!bParam0)
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 1264))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1264, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (bParam1)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &uVar1, *(&iLocal_4 + 3152[bVar03]), 1, 1, true);
				}
				GIVE_WEAPON_TO_ACTOR(&uVar1, 19, false, 1, 1);
				TASK_CROUCH(&uVar1, -1.0f);
				Function_404(&uVar1, &bLocal_1521, 2);
				MEMORY_ALLOW_SHOOTING(&uVar1, false);
				MEMORY_ATTACK_ON_SIGHT(&uVar1, 0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, 75.0f);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 270.0f);
				SET_ACTOR_VISION_MAX_RANGE(&uVar1, 200.0f, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
				ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_4 + 1400[bVar0]);
				AI_SET_NAV_PATHFINDING_ENABLED(&uVar1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar1, 0);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 960))
		{
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 960, bVar0);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (bParam1)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &uVar2, *(&iLocal_4 + 3232[bVar03]), 1, 1, true);
				}
				GIVE_WEAPON_TO_ACTOR(&uVar2, 41, 0,5f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&uVar2, 41, 1);
				bLocal_1627 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(0, 1);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&uVar2, bLocal_1627);
				TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
				Function_404(&uVar2, &bLocal_1521, 2);
				MEMORY_ALLOW_SHOOTING(&uVar2, false);
				MEMORY_ATTACK_ON_SIGHT(&uVar2, 0);
				AI_GOAL_STAND_CLEAR(&uVar2);
			}
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 1264))
		{
			uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1264, bVar0);
			if (IS_ACTOR_VALID(&uVar3))
			{
				if (!ACTOR_HAS_WEAPON(&uVar3, 19))
				{
					LOG_ERROR("sniper doesn't have a rolling block, wtf!?!");
				}
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar3, &iLocal_4 + 3152[bVar03], -1.0f);
				TASK_PRIORITY_SET(&uVar3, true);
			}
			bVar0++;
		}
		SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 960, 0);
		SQUAD_SET_FACTION(&iLocal_4 + 960, 20);
		Function_403(&iLocal_4 + 960, &iLocal_4 + 728, 4);
		Function_403(&iLocal_4 + 960, &iLocal_4 + 808, 4);
		Function_403(&iLocal_4 + 960, &iLocal_4 + 856, 4);
		Function_420(&iLocal_4 + 960, &iLocal_4 + 728, 1);
		Function_420(&iLocal_4 + 960, &iLocal_4 + 808, 1);
		Function_420(&iLocal_4 + 960, &iLocal_4 + 856, 1);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 960))
		{
			uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 960, bVar0);
			if (IS_ACTOR_VALID(&uVar4))
			{
				TASK_CLEAR(&uVar4);
				MEMORY_CLEAR_ALL(&uVar4);
				Function_404(&uVar4, &iLocal_4 + 728, 4);
				Function_404(&uVar4, &iLocal_4 + 808, 4);
				Function_404(&uVar4, &iLocal_4 + 856, 4);
				Function_419(&uVar4, &iLocal_4 + 728);
				Function_419(&uVar4, &iLocal_4 + 808);
				Function_419(&uVar4, &iLocal_4 + 856);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar4, &iLocal_4 + 3024[bVar03], -1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar4, 0,25f);
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar4, &iLocal_4 + 1400[3], 2, true);
				SET_ACTOR_VISION_MAX_RANGE(&uVar4, 150.0f, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_419(var uParam0, int iParam1) //Position: 0x1756F / 95599
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&uParam0) && SQUAD_IS_VALID(&iParam1))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &uVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_420(var uParam0, var uParam1, bool bParam2) //Position: 0x175BA / 95674
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&uParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, bParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_421() //Position: 0x1764D / 95821
{
	*(&iLocal_4 + 1256) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "BridgeRebelSnipersset", 0);
	*(&iLocal_4 + 1264) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "BridgeRebelSnipers"));
	*(&iLocal_4 + 1200[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebelSnipers01", 536, Vector(-3453,863f, 11,94966f, 4244.0f), Vector(0.0f, 365,809f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1256, &iLocal_4 + 1200[02]);
	SQUAD_JOIN(&iLocal_4 + 1200[02], &iLocal_4 + 1264);
	TASK_CROUCH(&iLocal_4 + 1200[02], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 1200[02], true);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[02], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[02], 20);
	*(&iLocal_4 + 1200[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebelSnipers02", 537, Vector(-3400f, 19,07452f, 4218,535f), Vector(0.0f, 356,7866f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1256, &iLocal_4 + 1200[12]);
	SQUAD_JOIN(&iLocal_4 + 1200[12], &iLocal_4 + 1264);
	TASK_CROUCH(&iLocal_4 + 1200[12], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 1200[12], true);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[12], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[12], 20);
	*(&iLocal_4 + 1200[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebelSnipers03", 538, Vector(-3457,323f, 12,20619f, 4186,745f), Vector(0.0f, 233,6512f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1256, &iLocal_4 + 1200[22]);
	SQUAD_JOIN(&iLocal_4 + 1200[22], &iLocal_4 + 1264);
	TASK_CROUCH(&iLocal_4 + 1200[22], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 1200[22], true);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[22], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[22], 20);
	return;
}

bool Function_422(int iParam0, var uParam1, bool bParam2) //Position: 0x17870 / 96368
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_383(&iParam0);
			Function_423(&uParam1);
			if (VDIST(Function_383(&iParam0), Function_423(&uParam1)) >= bParam2)
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

struct<8> Function_423(var uParam0) //Position: 0x1798E / 96654
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_424() //Position: 0x179FC / 96764
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_FillerLinesLuisa", "Rebel04_FillerLinesLuisa", false, 4, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_425(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x17A55 / 96853
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

void Function_426() //Position: 0x17AEA / 97002
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_CS03_v1_AA", "Rebel04_CS03_v1_AA", false, 4, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_427(struct<69> Param0) //Position: 0x17B37 / 97079
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

void Function_428(int iParam0) //Position: 0x17BF7 / 97271
{
	if (!Function_288(&iParam0))
	{
		Function_227(&iParam0, 0.0f);
	}
	return;
}

void Function_429(bool bParam0) //Position: 0x17C0E / 97294
{
	var uVar0;
	
	uVar0 = FIND_OBJECT_IN_OBJECT(&iLocal_4 + 3536, "pickup_tnt");
	if (IS_OBJECT_VALID(&uVar0))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uVar0), bParam0);
	}
	else
	{
		LOG_ERROR("couldn't find TNT gringo in 01x");
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(&iLocal_4 + 3544, "pickup_tnt");
	if (IS_OBJECT_VALID(&uVar0))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uVar0), bParam0);
	}
	else
	{
		LOG_ERROR("couldn't find TNT gringo in 01x1");
	}
	return;
}

void Function_430() //Position: 0x17CBF / 97471
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
	Function_448();
	Function_446(&iLocal_4 + 680);
	Function_444(&iLocal_4 + 680, 0);
	if (!IS_OBJECTSET_VALID(&iLocal_1519))
	{
		iLocal_1519 = CREATE_OBJECTSET_IN_LAYOUT("wagonSet", &cLocal_948, 15, 1);
	}
	else
	{
		Function_443(&iLocal_1519);
	}
	if (!SQUAD_IS_VALID(&bLocal_1521))
	{
		bLocal_1521 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_948, "wagonSquad"));
	}
	else
	{
		Function_228(&bLocal_1521);
	}
	Function_442(&iLocal_4 + 680, &iLocal_1519);
	Local_1485 = &iLocal_4 + 608[02];
	SET_ACTOR_UPDATE_PRIORITY(&Local_1485, false);
	SQUAD_LEAVE(&Local_1485);
	SET_ACTOR_INVULNERABILITY(&Local_1485, true);
	(&Local_1485 + 8) = &iLocal_4 + 608[12];
	SQUAD_JOIN(&Local_1485 + 8, &bLocal_1521);
	SET_ACTOR_UPDATE_PRIORITY(&Local_1485 + 8, false);
	SET_ACTOR_IN_VEHICLE(&Local_1485 + 8, &Local_1485, false);
	Local_1495 = &iLocal_4 + 608[22];
	SET_ACTOR_UPDATE_PRIORITY(&Local_1495, false);
	SQUAD_LEAVE(&Local_1495);
	*(&Local_1495 + 8) = &iLocal_4 + 608[32];
	SQUAD_JOIN(&Local_1495 + 8, &bLocal_1521);
	SET_ACTOR_UPDATE_PRIORITY(&Local_1495 + 8, false);
	SET_ACTOR_IN_VEHICLE(&Local_1495 + 8, &Local_1495, false);
	TASK_STAND_STILL(&Local_1485 + 8, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&Local_1485 + 8, true);
	TASK_STAND_STILL(&Local_1495 + 8, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&Local_1495 + 8, true);
	if (!IS_OBJECTSET_VALID(&iLocal_1517))
	{
		iLocal_1517 = CREATE_OBJECTSET_IN_LAYOUT("nescortSet", &cLocal_948, 15, 1);
	}
	else
	{
		Function_443(&iLocal_1517);
	}
	Function_441();
	Function_436(&iLocal_4 + 856);
	SQUAD_GOALS_CLEAR(&iLocal_4 + 856);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 816[02], &Local_1485, &iLocal_4 + 3400, -15.0f, 1, -3.0f);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 816[12], &Local_1485, &iLocal_4 + 3400, -15.0f, 1, 3.0f);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 856, 2048);
	Function_435();
	Function_436(&iLocal_4 + 728);
	Function_372(&iLocal_4 + 728);
	SQUAD_GOALS_CLEAR(&iLocal_4 + 728);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 688[02], &Local_1485, &iLocal_4 + 3408, 2.0f, 1, 0);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 688[12], &Local_1485, &iLocal_4 + 3416, 2.0f, 1, 0);
	Function_434(&iLocal_4 + 728, &Local_1485, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 728, 2048);
	Function_432();
	Function_436(&iLocal_4 + 808);
	Function_372(&iLocal_4 + 808);
	SQUAD_GOALS_CLEAR(&iLocal_4 + 808);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 736[02], &Local_1495, &iLocal_4 + 3400, -7.0f, 1, -2.0f);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 736[12], &Local_1495, &iLocal_4 + 3400, -7.0f, 1, 2.0f);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 736[22], &Local_1495, &iLocal_4 + 3408, 7.0f, 1, 0);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_4 + 736[32], &Local_1495, &iLocal_4 + 3416, 7.0f, 1, 0);
	Function_434(&iLocal_4 + 808, &Local_1495, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 808, 2048);
	Function_431(&iLocal_4 + 728, 0);
	Function_431(&iLocal_4 + 808, 0);
	Function_431(&iLocal_4 + 856, 0);
	Function_431(&bLocal_1521, 0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1.0f);
	Function_403(&iLocal_4 + 960, &iLocal_4 + 728, 2);
	Function_403(&iLocal_4 + 960, &iLocal_4 + 808, 2);
	Function_403(&iLocal_4 + 960, &iLocal_4 + 856, 2);
	Function_401(&iLocal_4 + 960, 0);
	*(&iLocal_4 + 968[02]) = GET_MOUNT(&iLocal_4 + 816[02]);
	*(&iLocal_4 + 968[12]) = GET_MOUNT(&iLocal_4 + 816[12]);
	*(&iLocal_4 + 968[22]) = GET_MOUNT(&iLocal_4 + 688[02]);
	*(&iLocal_4 + 968[32]) = GET_MOUNT(&iLocal_4 + 688[12]);
	*(&iLocal_4 + 968[42]) = GET_MOUNT(&iLocal_4 + 736[02]);
	*(&iLocal_4 + 968[52]) = GET_MOUNT(&iLocal_4 + 736[12]);
	*(&iLocal_4 + 968[62]) = GET_MOUNT(&iLocal_4 + 736[22]);
	*(&iLocal_4 + 968[72]) = GET_MOUNT(&iLocal_4 + 736[32]);
	iVar0 = 8;
	bVar1 = false;
	while (bVar1 < (GET_NUM_DRAFT_POSITIONS(&Local_1485) - 1))
	{
		uVar2 = GET_DRAFT_ACTOR(bVar1, &Local_1485);
		if (IS_ACTOR_VALID(&uVar2))
		{
			bVar3 = GET_ACTOR_ENUM(&uVar2);
			*(&iLocal_4 + 968[iVar02]) = &uVar2;
			iVar0++;
		}
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < (GET_NUM_DRAFT_POSITIONS(&Local_1495) - 1))
	{
		uVar4 = GET_DRAFT_ACTOR(bVar1, &Local_1495);
		if (IS_ACTOR_VALID(&uVar4))
		{
			bVar5 = GET_ACTOR_ENUM(&uVar4);
			*(&iLocal_4 + 968[iVar02]) = &uVar4;
			iVar0++;
		}
		bVar1++;
	}
	return;
}

void Function_431(var uParam0, bool bParam1) //Position: 0x18169 / 98665
{
	var uVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_VALID(&uVar0))
			{
				HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&uVar0, bParam1);
			}
			bVar1++;
		}
	}
	else
	{
		LOG_ERROR("HUD_SET_SHOOT_BLIP_ENABLED_FOR_SQUAD got invalid squad");
	}
	return;
}

void Function_432() //Position: 0x181EC / 98796
{
	*(&iLocal_4 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "BridgeEscortRearCalvary"));
	*(&iLocal_4 + 736[02]) = Function_433(StackVal, StackVal, &iLocal_4, "Calvary_Rear01", 393, Function_54(), 976, Vector(-3247,541f, 6,77746f, 4208,313f), Vector(0.0f, 67,67883f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 736[02], &iLocal_4 + 808);
	SET_ACTOR_FACTION(&iLocal_4 + 736[02], 21);
	*(&iLocal_4 + 736[12]) = Function_433(StackVal, StackVal, &iLocal_4, "Calvary_Rear02", 391, Function_54(), 980, Vector(-3245,387f, 6,77746f, 4204,227f), Vector(0.0f, 65,36708f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 736[12], &iLocal_4 + 808);
	SET_ACTOR_FACTION(&iLocal_4 + 736[12], 21);
	*(&iLocal_4 + 736[22]) = Function_433(StackVal, StackVal, &iLocal_4, "Calvary_Rear03", 380, Function_54(), 989, Vector(-3207,493f, 7,476081f, 4221,615f), Vector(0.0f, 68,84789f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 736[22], &iLocal_4 + 808);
	SET_ACTOR_FACTION(&iLocal_4 + 736[22], 21);
	*(&iLocal_4 + 736[32]) = Function_433(StackVal, StackVal, &iLocal_4, "Calvary_Rear04", 380, Function_54(), 990, Vector(-3207,34f, 7,476081f, 4214,766f), Vector(0,3678465f, 70,2737f, 1,84267f));
	SQUAD_JOIN(&iLocal_4 + 736[32], &iLocal_4 + 808);
	SET_ACTOR_FACTION(&iLocal_4 + 736[32], 21);
	return;
}

int Function_433(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x183A7 / 99239
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_217(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_217(bParam4))
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

void Function_434(var uParam0, int iParam1, bool bParam2) //Position: 0x184DF / 99551
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
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
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &iParam1, true);
				}
				else
				{
					GET_POSITION(&iParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &iParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_435() //Position: 0x18557 / 99671
{
	(&iLocal_4 + 728) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "BridgeEscortFrontCalvary"));
	*(&iLocal_4 + 688[02]) = Function_433(StackVal, StackVal, &iLocal_4, "Calvary_Front01", 391, Function_54(), 977, Vector(-3272,069f, 6,777458f, 4194,177f), Vector(0.0f, 61,04684f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 688[02], &iLocal_4 + 728);
	SET_ACTOR_FACTION(&iLocal_4 + 688[02], 21);
	*(&iLocal_4 + 688[12]) = Function_433(StackVal, StackVal, &iLocal_4, "Calvary_Front02", 392, Function_54(), 977, Vector(-3267,926f, 6,777459f, 4190,048f), Vector(0.0f, 54,99287f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 688[12], &iLocal_4 + 728);
	SET_ACTOR_FACTION(&iLocal_4 + 688[12], 21);
	return;
}

void Function_436(int iParam0) //Position: 0x1864B / 99915
{
	Function_442(&iParam0, &iLocal_1517);
	Function_440(&iParam0, 0);
	Function_439(&iParam0, 41, 0,5f);
	Function_438(&iParam0, 41, 1, 1);
	Function_401(&iParam0, 0);
	Function_402(&iParam0, &Global_54076, 2);
	Function_403(&iParam0, &iLocal_4 + 960, 2);
	Function_437(&iParam0, 1);
	Function_446(&iParam0);
	Function_444(&iParam0, 0);
	return;
}

void Function_437(var uParam0, bool bParam1) //Position: 0x186AD / 100013
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

void Function_438(var uParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x186EE / 100078
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (uParam2 || !ACTOR_HAS_WEAPON(&uVar1, bParam1))
				{
					GIVE_WEAPON_TO_ACTOR(&uVar1, bParam1, false, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON_IN_HAND(&uVar1, bParam1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(&uVar1, bParam1, &bParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_439(var uParam0, bool bParam1, bool bParam2) //Position: 0x1876A / 100202
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_VALID(&uVar1))
				{
					GIVE_WEAPON_TO_ACTOR(&uVar1, bParam1, bParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_440(var uParam0, bool bParam1) //Position: 0x187BD / 100285
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
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_441() //Position: 0x18804 / 100356
{
	*(&iLocal_4 + 856) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "BridgeEscortVanguard"));
	*(&iLocal_4 + 816[02]) = Function_433(StackVal, StackVal, &iLocal_4, "BridgeCalvary_VG01", 391, Function_54(), 977, Vector(-3288,087f, 7,02842f, 4187,143f), Vector(0.0f, 48,76455f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 816[02], &iLocal_4 + 856);
	SET_ACTOR_FACTION(&iLocal_4 + 816[02], 21);
	*(&iLocal_4 + 816[12]) = Function_433(StackVal, StackVal, &iLocal_4, "BridgeCalvary_VG02", 392, Function_54(), 980, Vector(-3284,559f, 7,035625f, 4179,185f), Vector(0.0f, 53,86485f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 816[12], &iLocal_4 + 856);
	SET_ACTOR_FACTION(&iLocal_4 + 816[12], 21);
	return;
}

int Function_442(int iParam0, int iParam1) //Position: 0x188FA / 100602
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_OBJECTSET_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			ADD_OBJECT_TO_OBJECTSET(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return 1;
}

void Function_443(int iParam0) //Position: 0x18953 / 100691
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_444(int iParam0, bool bParam1) //Position: 0x1899E / 100766
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_445(&uVar1, &bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_445(var uParam0, bool bParam1) //Position: 0x189E1 / 100833
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_446(int iParam0) //Position: 0x18A03 / 100867
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_447(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_447(var uParam0) //Position: 0x18A43 / 100931
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

void Function_448() //Position: 0x18A7A / 100986
{
	*(&iLocal_4 + 680) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "BridgeWagonTrain"));
	*(&iLocal_4 + 608[02]) = Function_232(StackVal, StackVal, &iLocal_4, "BridgeWagon01", 1200, 977, Vector(-3280,48f, 6,77746f, 4187,8f), Vector(0.0f, 72,22764f, 0.0f), 1, 976, 976, 976, 4);
	SQUAD_JOIN(&iLocal_4 + 608[02], &iLocal_4 + 680);
	*(&iLocal_4 + 608[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeDriver01", 379, Vector(-3282,342f, 7,027462f, 4192.0f), Vector(0.0f, 72,94138f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 608[12], &iLocal_4 + 680);
	*(&iLocal_4 + 608[22]) = Function_232(StackVal, StackVal, &iLocal_4, "BridgeWagon03", 1200, 981, Vector(-3228,164f, 6,777454f, 4214,927f), Vector(0.0f, 69,47726f, 0.0f), 1, 976, 976, 976, 4);
	SQUAD_JOIN(&iLocal_4 + 608[22], &iLocal_4 + 680);
	*(&iLocal_4 + 608[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeDriver03", 380, Vector(-3231,709f, 7,027454f, 4217,522f), Vector(0.0f, 58,68979f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 608[32], &iLocal_4 + 680);
	return;
}

void Function_449(int iParam0, bool bParam1, bool bParam2) //Position: 0x18BF0 / 101360
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
						Function_214(&uVar1);
					}
				}
				Function_450(&uVar0);
			}
		}
	}
	return;
}

void Function_450(bool bParam0) //Position: 0x18CFF / 101631
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

void Function_451(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x18D32 / 101682
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
	if (iParam2 != Global_53524.f_48 && !Function_458())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_457(0);
	Function_456();
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
		Function_454(iParam2);
	}
	Function_453(uParam3, iVar0, iVar1);
	Function_452();
}

void Function_452() //Position: 0x18DDB / 101851
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

void Function_453(int iParam0, bool bParam1, bool bParam2) //Position: 0x18E1C / 101916
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

void Function_454(bool bParam0) //Position: 0x18F85 / 102277
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_455() };
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

struct<16> Function_455() //Position: 0x1911D / 102685
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

void Function_456() //Position: 0x19163 / 102755
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_457(bool bParam0) //Position: 0x19187 / 102791
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

bool Function_458() //Position: 0x191B6 / 102838
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_459(int iParam0) //Position: 0x191D1 / 102865
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&iParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_FACTION(&uVar1, 20);
		}
		bVar0++;
	}
	return;
}

void Function_460(var uParam0, bool bParam1) //Position: 0x19249 / 102985
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			uVar0 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TASK_STAND_STILL(&uVar0, bParam1, 0, 0);
			}
			bVar1++;
		}
	}
	return;
}

void Function_461() //Position: 0x19295 / 103061
{
	*(&iLocal_4 + 952) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "BridgeRebelsset", 0);
	*(&iLocal_4 + 960) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "BridgeRebels"));
	*(&iLocal_4 + 864[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebel01", 521, Vector(-3454,242f, 6,031963f, 4204.0f), Vector(0.0f, 285,0161f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 952, &iLocal_4 + 864[02]);
	SQUAD_JOIN(&iLocal_4 + 864[02], &iLocal_4 + 960);
	TASK_CROUCH(&iLocal_4 + 864[02], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 864[02], true);
	SET_ACTOR_FACTION(&iLocal_4 + 864[02], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 864[02], 20);
	*(&iLocal_4 + 864[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebel02", 539, Vector(-3434,24f, 6,721986f, 4218,46f), Vector(0.0f, 26,35292f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 952, &iLocal_4 + 864[12]);
	SQUAD_JOIN(&iLocal_4 + 864[12], &iLocal_4 + 960);
	TASK_CROUCH(&iLocal_4 + 864[12], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 864[12], true);
	SET_ACTOR_FACTION(&iLocal_4 + 864[12], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 864[12], 20);
	*(&iLocal_4 + 864[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebel03", 540, Vector(-3450,091f, 7,241815f, 4233,91f), Vector(0.0f, 7,313087f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 952, &iLocal_4 + 864[22]);
	SQUAD_JOIN(&iLocal_4 + 864[22], &iLocal_4 + 960);
	TASK_CROUCH(&iLocal_4 + 864[22], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 864[22], true);
	SET_ACTOR_FACTION(&iLocal_4 + 864[22], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 864[22], 20);
	*(&iLocal_4 + 864[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebel04", 533, Vector(-3477,745f, 6,023548f, 4224.0f), Vector(0.0f, -67,80376f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 952, &iLocal_4 + 864[32]);
	SQUAD_JOIN(&iLocal_4 + 864[32], &iLocal_4 + 960);
	TASK_CROUCH(&iLocal_4 + 864[32], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 864[32], true);
	SET_ACTOR_FACTION(&iLocal_4 + 864[32], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 864[32], 20);
	*(&iLocal_4 + 864[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BridgeRebel05", 534, Vector(-3477,745f, 6,023548f, 4224.0f), Vector(0.0f, -67,80376f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 952, &iLocal_4 + 864[42]);
	SQUAD_JOIN(&iLocal_4 + 864[42], &iLocal_4 + 960);
	TASK_CROUCH(&iLocal_4 + 864[42], -1.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 864[42], true);
	SET_ACTOR_FACTION(&iLocal_4 + 864[42], 20);
	SET_ACTOR_FACTION(&iLocal_4 + 864[42], 20);
	return;
}

int Function_462() //Position: 0x195C1 / 103873
{
	Function_339(&iLocal_4 + 360, 391, 2, 0);
	Function_339(&iLocal_4 + 360, 392, 2, 0);
	Function_339(&iLocal_4 + 360, 393, 2, 0);
	Function_339(&iLocal_4 + 360, 976, 2, 0);
	Function_339(&iLocal_4 + 360, 980, 2, 0);
	Function_339(&iLocal_4 + 360, 989, 2, 0);
	Function_339(&iLocal_4 + 360, 990, 2, 0);
	Function_339(&iLocal_4 + 360, 521, 2, 0);
	Function_339(&iLocal_4 + 360, 539, 2, 0);
	Function_339(&iLocal_4 + 360, 540, 2, 0);
	Function_339(&iLocal_4 + 360, 533, 2, 0);
	Function_339(&iLocal_4 + 360, 534, 2, 0);
	Function_339(&iLocal_4 + 360, 536, 2, 0);
	Function_339(&iLocal_4 + 360, 537, 2, 0);
	Function_339(&iLocal_4 + 360, 538, 2, 0);
	if (Function_330(&iLocal_4 + 360))
	{
		return 1;
	}
	return 0;
}

void Function_463(int iParam0) //Position: 0x196A7 / 104103
{
	Function_464(&Global_43580, iParam0);
	return;
}

void Function_464(var uParam0, int iParam1) //Position: 0x196B5 / 104117
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_465(int iParam0) //Position: 0x196DD / 104157
{
	if (!Function_291(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_188(1, 0, 1);
		}
	}
	return;
}

bool Function_466(int iParam0) //Position: 0x196F9 / 104185
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

var Function_467(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x19715 / 104213
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

void Function_468(bool bParam0) //Position: 0x197BB / 104379
{
	Function_469(0, 0x40400000);
	Function_205();
	Function_204();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_469(float fParam0, float fParam1) //Position: 0x197F1 / 104433
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
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_471();
	Function_470();
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

void Function_470() //Position: 0x19902 / 104706
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_471() //Position: 0x19936 / 104758
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

void Function_472() //Position: 0x19A3C / 105020
{
	bool bVar0;
	
	if (!Function_288(&iLocal_1571))
	{
		Function_428(&iLocal_1571);
	}
	if (Function_286(&iLocal_1571) < 0,5f)
	{
		if (IS_ACTOR_VALID(&Local_1495) && IS_ACTOR_ALIVE(&Local_1495 + 8))
		{
			Function_383(&Local_1495);
			STREAMING_LOAD_BOUNDS_EXT(0, Function_383(&Local_1495), 100.0f, 1);
		}
		if (IS_ACTOR_VALID(&Local_1485) && IS_ACTOR_ALIVE(&Local_1485 + 8))
		{
			Function_383(&Local_1485);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_383(&Local_1485), 100.0f, 1);
		}
		bVar0 = Function_473(&Global_54076, &iLocal_1517);
		if (IS_OBJECT_VALID(&bVar0))
		{
			Function_248(&bVar0);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_248(&bVar0), 50.0f, 1);
		}
		Function_226(&iLocal_1571);
	}
	return;
}

int Function_473(var uParam0, int iParam1) //Position: 0x19AD8 / 105176
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	
	if (IS_OBJECT_VALID(&uParam0) && IS_OBJECTSET_VALID(&iParam1))
	{
		bVar4 = 0.0f;
		bVar5 = 4294967295;
		GET_OBJECT_POSITION(&uParam0, &Var0);
		bVar6 = false;
		while (bVar6 <= GET_OBJECTSET_SIZE(&iParam1))
		{
			uVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &iParam1);
			if (IS_OBJECT_VALID(&uVar7))
			{
				GET_OBJECT_POSITION(&uVar7, &Var2);
				if (VDIST(Var2, Var0) < bVar4)
				{
					bVar4 = VDIST(Var2, Var0);
					bVar5 = bVar6;
				}
			}
			bVar6++;
		}
		if (bVar5 >= 4294967295)
		{
			return GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, &iParam1);
		}
	}
	return "";
}

bool Function_474(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x19B64 / 105316
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

bool Function_475(struct<2> Param0, int iParam2, bool bParam3, char* cParam4, int iParam5, bool bParam6, char* cParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x19C32 / 105522
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
	{
		Function_241(&cParam4);
		iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_481(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_425(&bParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_480(64);
			}
			if (IS_LAYOUTREF_VALID(&cParam7))
			{
				Function_479(&cParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_479(&iParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&cParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &iParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_481(64))
	{
		Function_478(64);
		if (!Function_477())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_476();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&cParam7) || IS_LAYOUTREF_VALID(&iParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&cParam7))
			{
				Function_479(&cParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_479(&iParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_476() //Position: 0x19DCD / 105933
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

bool Function_477() //Position: 0x19DFB / 105979
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

void Function_478(bool bParam0) //Position: 0x19E42 / 106050
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

void Function_479(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x19EA9 / 106153
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

void Function_480(bool bParam0) //Position: 0x19F64 / 106340
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

bool Function_481(bool bParam0) //Position: 0x19FCB / 106443
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

void Function_482() //Position: 0x1A015 / 106517
{
	if (!bLocal_1625)
	{
		if ((!Function_483(&bLocal_1521, &iLocal_4 + 1472) && !Function_483(&iLocal_4 + 856, &iLocal_4 + 1472)) && iLocal_1526 < 0)
		{
			Function_241("Rebel04_fail_convoy_alerted");
			bLocal_977 = true;
			Function_397();
			LOG_ERROR("MANAGE_PREMATURE_DETONATION");
			GET_PATH_POINT(&iLocal_4 + 3400, false, &Local_1479);
			SQUAD_GOALS_CLEAR(&bLocal_1521);
			Function_372(&bLocal_1521);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1521, false, 1, 4294967295);
			TASK_GO_TO_COORD(false, &Local_1479, 4);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 856);
			Function_372(&iLocal_4 + 856);
			SQUAD_GOAL_ADD_COMBAT(&iLocal_4 + 856, 0, 4294967295, 0);
			Function_372(&iLocal_4 + 728);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 728);
			SQUAD_GOAL_ADD_COMBAT(&iLocal_4 + 728, 0, 4294967295, 0);
			Function_372(&iLocal_4 + 808);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 808);
			SQUAD_GOAL_ADD_COMBAT(&iLocal_4 + 808, 0, 4294967295, 0);
		}
	}
	return;
}

bool Function_483(int iParam0, int iParam1) //Position: 0x1A11E / 106782
{
	bool bVar0;
	char[] cVar1[4];
	
	if (!SQUAD_IS_VALID(&iParam0))
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
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		cVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&cVar1))
		{
			if (!IS_ACTOR_VEHICLE(&cVar1))
			{
				if (IS_ACTOR_ALIVE(&cVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&cVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&cVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_484() //Position: 0x1A1AC / 106924
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	struct<2> Var5;
	
	Function_411();
	Var2 = Function_411();
	GET_CAMERA_POSITION(&uLocal_1672, &Var0);
	uVar4 = Function_409(StackVal, StackVal, Var0, Var2);
	Var5.f_4 = uVar4;
	STREAMING_LOAD_SCENE_EXT(Var0, Var5, 1);
	return;
}

int Function_485(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1A1E0 / 106976
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_488(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_489()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					Function_486();
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
	else if ((!Function_488(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_489()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_488(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_486() //Position: 0x1A448 / 107592
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
			Function_487(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_487(char* cParam0) //Position: 0x1A49C / 107676
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

bool Function_488(int iParam0, struct<2> Param1, float fParam3) //Position: 0x1A5C5 / 107973
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_383(&iParam0);
		if (VDIST(Function_383(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_489() //Position: 0x1A651 / 108113
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_490() //Position: 0x1A660 / 108128
{
	if ((iLocal_1526 <= bLocal_1525 && iLocal_1526 < 0) && !bLocal_1666)
	{
		if (!DECOR_CHECK_EXIST(&uLocal_1672, "ndestroyme"))
		{
			if (!DECOR_CHECK_EXIST(&cLocal_948, "removepushdetonator"))
			{
				DECOR_SET_BOOL(&cLocal_948, "removepushdetonator", true);
			}
			if (FLASH_GET_BOOL("help", "nShowBombs"))
			{
				FLASH_SET_BOOL("help", "nShowBombs", 0);
			}
			DECOR_SET_FLOAT(&uLocal_1672, "ndestroyme", GET_CURRENT_GAME_TIME());
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1672, "ndestroyme")) < 0,5f)
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "NumTNT"))
			{
				DECOR_REMOVE(&Global_54076, "NumTNT");
			}
			if (IS_GRINGO_VALID(&iLocal_1628))
			{
				GRINGO_ALLOW_ACTIVATION(&iLocal_1628, false);
			}
			Function_514();
			Function_449(8, 0, 1);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			Function_222();
			bLocal_1666 = true;
		}
	}
	if (!bLocal_1666)
	{
		if (GET_CURRENT_GRINGO(&Global_54076) == &iLocal_1628)
		{
			if (!DECOR_CHECK_EXIST(&cLocal_948, "firstime"))
			{
				Function_511();
				Function_510();
				DECOR_SET_BOOL(&cLocal_948, "firstime", true);
			}
			if (!IS_OBJECT_VALID(&uLocal_1672) && IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "nidle_high"))
			{
				Function_413();
			}
			if ((!IS_CAMERA_ACTIVE_ON_CHANNEL(&uLocal_1672, 0) || DECOR_CHECK_EXIST(&Global_54076, "wagoncutfinished")) && !DECOR_CHECK_EXIST(&cLocal_948, "nsetupglow"))
			{
				DECOR_SET_BOOL(&cLocal_948, "nsetupglow", true);
				Function_509();
				Function_508();
				Function_449(8, 0, 1);
				Function_226(&iLocal_1567);
			}
			if (IS_OBJECT_VALID(&uLocal_1672))
			{
				if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uLocal_1672, 0))
				{
					SET_CURRENT_CAMERA_ON_CHANNEL(&uLocal_1672, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
				}
				if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uLocal_1672))
				{
					Function_411();
					Function_506(StackVal, Function_411());
				}
			}
			Function_505();
			if (iLocal_1526 <= bLocal_1525)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "UsedDetonator"))
				{
					Function_500();
					DECOR_REMOVE(&Global_54076, "UsedDetonator");
					Function_226(&iLocal_1202);
				}
				if (Function_286(&iLocal_1650) <= 5.0f)
				{
					Function_411();
					if (Function_499(StackVal, Function_411(), 7,5f) && !Function_140())
					{
						Function_498();
						Function_226(&iLocal_1650);
					}
				}
				if (DECOR_CHECK_EXIST(&cLocal_948, "stickdelay"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "stickdelay")) < 0,2f)
					{
						DECOR_REMOVE(&cLocal_948, "stickdelay");
					}
				}
				if (!DECOR_CHECK_EXIST(&Global_54076, "UsedDetonator") && !DECOR_CHECK_EXIST(&cLocal_948, "stickdelay"))
				{
					if (UNK_0xDA674AE0("@DETONATOR.SELECT_LEFT", 1, 0))
					{
						DECOR_SET_FLOAT(&cLocal_948, "stickdelay", GET_CURRENT_GAME_TIME());
						Function_492(1, 0, 0);
					}
					if (UNK_0xDA674AE0("@DETONATOR.SELECT_RIGHT", 1, 0))
					{
						DECOR_SET_FLOAT(&cLocal_948, "stickdelay", GET_CURRENT_GAME_TIME());
						Function_492(0, 0, 0);
					}
				}
			}
		}
		else
		{
			if (IS_OBJECT_VALID(&uLocal_1672))
			{
				if (DECOR_CHECK_EXIST(&cLocal_948, "nsetupglow"))
				{
					DECOR_REMOVE(&cLocal_948, "nsetupglow");
				}
				Function_222();
				Function_223();
				Function_491(0);
				Function_449(8, 0, 1);
			}
			if (UI_ISACTIVE("Rebel04_Detonator"))
			{
				UI_EXIT("Rebel04_Detonator");
			}
		}
	}
	return;
}

void Function_491(bool bParam0) //Position: 0x1AA7B / 109179
{
	if (bParam0)
	{
		if (IS_BLIP_VALID(&uLocal_1591))
		{
			REMOVE_BLIP(&uLocal_1591);
		}
		if (IS_OBJECT_VALID(&iLocal_1529))
		{
			uLocal_1591 = ADD_BLIP_FOR_OBJECT(&iLocal_1529, 404, 0f, 2, 0);
			SET_BLIP_BLINK(&uLocal_1591, 0, 0, 5f);
			SET_BLIP_SCALE(&uLocal_1591, 0,75f);
		}
		if (IS_BLIP_VALID(&uLocal_1593))
		{
			REMOVE_BLIP(&uLocal_1593);
		}
		if (IS_OBJECT_VALID(&iLocal_1531))
		{
			uLocal_1593 = ADD_BLIP_FOR_OBJECT(&iLocal_1531, 404, 0f, 2, 0);
			SET_BLIP_BLINK(&uLocal_1593, 0, 0, 5f);
			SET_BLIP_SCALE(&uLocal_1593, 0,75f);
		}
		if (IS_BLIP_VALID(&iLocal_1595))
		{
			REMOVE_BLIP(&iLocal_1595);
		}
		if (IS_OBJECT_VALID(&iLocal_1533))
		{
			iLocal_1595 = ADD_BLIP_FOR_OBJECT(&iLocal_1533, 404, 0f, 2, 0);
			SET_BLIP_BLINK(&iLocal_1595, 0, 0, 5f);
			SET_BLIP_SCALE(&iLocal_1595, 0,75f);
		}
		if (IS_BLIP_VALID(&uLocal_1597))
		{
			REMOVE_BLIP(&uLocal_1597);
		}
		if (IS_OBJECT_VALID(&iLocal_1535))
		{
			uLocal_1597 = ADD_BLIP_FOR_OBJECT(&iLocal_1535, 404, 0f, 2, 0);
			SET_BLIP_BLINK(&uLocal_1597, 0, 0, 5f);
			SET_BLIP_SCALE(&uLocal_1597, 0,75f);
		}
		if (IS_BLIP_VALID(&iLocal_1599))
		{
			REMOVE_BLIP(&iLocal_1599);
		}
		if (IS_OBJECT_VALID(&iLocal_1537))
		{
			iLocal_1599 = ADD_BLIP_FOR_OBJECT(&iLocal_1537, 404, 0f, 2, 0);
			SET_BLIP_BLINK(&iLocal_1599, 0, 0, 5f);
			SET_BLIP_SCALE(&iLocal_1599, 0,75f);
		}
	}
	else
	{
		if (IS_BLIP_VALID(&uLocal_1591))
		{
			REMOVE_BLIP(&uLocal_1591);
		}
		if (IS_BLIP_VALID(&uLocal_1593))
		{
			REMOVE_BLIP(&uLocal_1593);
		}
		if (IS_BLIP_VALID(&iLocal_1595))
		{
			REMOVE_BLIP(&iLocal_1595);
		}
		if (IS_BLIP_VALID(&uLocal_1597))
		{
			REMOVE_BLIP(&uLocal_1597);
		}
		if (IS_BLIP_VALID(&iLocal_1599))
		{
			REMOVE_BLIP(&iLocal_1599);
		}
	}
	return;
}

void Function_492(int iParam0, int iParam1, float fParam2) //Position: 0x1AC3C / 109628
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 1;
	if (IS_BLIP_VALID(&uLocal_1591))
	{
		SET_BLIP_BLINK(&uLocal_1591, 0, 0, 5f);
		SET_BLIP_SCALE(&uLocal_1591, 0,75f);
	}
	if (IS_BLIP_VALID(&uLocal_1593))
	{
		SET_BLIP_BLINK(&uLocal_1593, 0, 0, 5f);
		SET_BLIP_SCALE(&uLocal_1593, 0,75f);
	}
	if (IS_BLIP_VALID(&iLocal_1595))
	{
		SET_BLIP_BLINK(&iLocal_1595, 0, 0, 5f);
		SET_BLIP_SCALE(&iLocal_1595, 0,75f);
	}
	if (IS_BLIP_VALID(&uLocal_1597))
	{
		SET_BLIP_BLINK(&uLocal_1597, 0, 0, 5f);
		SET_BLIP_SCALE(&uLocal_1597, 0,75f);
	}
	if (IS_BLIP_VALID(&iLocal_1599))
	{
		SET_BLIP_BLINK(&iLocal_1599, 0, 0, 5f);
		SET_BLIP_SCALE(&iLocal_1599, 0,75f);
	}
	bVar1 = iLocal_1626;
	Function_496(iParam0, &iParam1);
	FLASH_SET_INT("help", "nactiveNum", iLocal_1626);
	uVar2 = "@DETONATOR.LOOK_AT_TARGET";
	switch (bLocal_1626)
	{
		case 0x00000001:
			if (IS_BLIP_VALID(&uLocal_1591))
			{
				SET_BLIP_BLINK(&uLocal_1591, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(&uLocal_1591, 1,25f);
			}
			if (UNK_0x062C5047(&uVar2, 1, 0))
			{
				Function_494();
			}
			else if (bVar1 == bLocal_1626 && !bLocal_1626 != 4294967295)
			{
				Function_493(StackVal, Local_1601, &fParam2);
			}
			break;
		
		case 0x00000002:
			if (IS_BLIP_VALID(&uLocal_1593))
			{
				SET_BLIP_BLINK(&uLocal_1593, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(&uLocal_1593, 1,25f);
			}
			if (UNK_0x062C5047(&uVar2, 1, 0))
			{
				Function_494();
			}
			else if (bVar1 == bLocal_1626 && !bLocal_1626 != 4294967295)
			{
				Function_493(StackVal, Local_1604, &fParam2);
			}
			break;
		
		case 0x00000003:
			if (IS_BLIP_VALID(&iLocal_1595))
			{
				SET_BLIP_BLINK(&iLocal_1595, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(&iLocal_1595, 1,25f);
			}
			if (UNK_0x062C5047(&uVar2, 1, 0))
			{
				Function_494();
			}
			else if (bVar1 == bLocal_1626 && !bLocal_1626 != 4294967295)
			{
				Function_493(StackVal, Local_1607, &fParam2);
			}
			break;
		
		case 0x00000004:
			if (IS_BLIP_VALID(&uLocal_1597))
			{
				SET_BLIP_BLINK(&uLocal_1597, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(&uLocal_1597, 1,25f);
			}
			if (UNK_0x062C5047(&uVar2, 1, 0))
			{
				Function_494();
			}
			else if (bVar1 == bLocal_1626 && !bLocal_1626 != 4294967295)
			{
				Function_493(StackVal, Local_1610, &fParam2);
			}
			break;
		
		case 0x00000005:
			if (IS_BLIP_VALID(&iLocal_1599))
			{
				SET_BLIP_BLINK(&iLocal_1599, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(&iLocal_1599, 1,25f);
			}
			if (UNK_0x062C5047(&uVar2, 1, 0))
			{
				Function_494();
			}
			else if (bVar1 == bLocal_1626 && !bLocal_1626 != 4294967295)
			{
				Function_493(StackVal, Local_1613, &fParam2);
			}
			break;
	}
	if (bVar1 == bLocal_1626 && !bLocal_1626 != 4294967295)
	{
		Function_509();
	}
	return;
}

void Function_493(struct<2> Param0, float fParam2) //Position: 0x1AF08 / 110344
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	
	UPDATE_AIMRAMP(&uVar0, &uVar1, &uLocal_1674, "roamNew", 1);
	if (!Function_74(StackVal, Param0))
	{
		GET_CAMERA_POSITION(&uLocal_1672, &Var2);
		GET_CAMERA_DIRECTION(&uLocal_1672, &Var4);
		RESET_CAMERASHOT_TARGET(&uLocal_1682, 0);
		SET_CAMERASHOT_POSITION(&uLocal_1682, Var2);
		SET_CAMERASHOT_DIRECTION(-Vector(Var4, &uLocal_1682, StackVal), 1);
		SET_CAMERASHOT_FOV(&uLocal_1682, 25,8f);
		GET_OBJECT_RELATIVE_POSITION(&iLocal_4 + 3528, Local_1679, &Local_1479);
		Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Local_1479, Param0, StackVal);
		VNORMALIZE(&Var6);
		Local_1479 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var6, Local_1479, StackVal) * Vector(1,4f, 1,4f, 1,4f), StackVal, StackVal);
		RESET_CAMERASHOT_TARGET(&iLocal_1684, 0);
		SET_CAMERASHOT_POSITION(&iLocal_1684, Local_1479);
		SET_CAMERASHOT_TARGET_POSITION(&iLocal_1684, Param0, 0);
		SET_CAMERASHOT_FOV(&iLocal_1684, 25,8f);
		if (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uLocal_1672))
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_1672);
		}
		if (&fParam2 < 0.0f)
		{
			ADD_CAMERA_SHOT_TRANSITION_HOLD(&uLocal_1672, &uLocal_1682, &fParam2, 4294967295);
		}
		ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(&uLocal_1672, &uLocal_1682, &iLocal_1684, 1.0f, 4294967295, 0);
		SET_CAMERA_TARGET_POSITION(&uLocal_1672, Param0, 0);
		Local_1676 = Param0;
		FORCE_LOOK_AT_COORD(&Global_54076, &Local_1676, 3212836864);
	}
	return;
}

void Function_494() //Position: 0x1B031 / 110641
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	iVar4 = Function_495();
	if (IS_ACTOR_VALID(&iVar4))
	{
		if (&iVar4 != &iLocal_1515)
		{
			iLocal_1515 = &iVar4;
			END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_1672);
			RESET_CAMERA_TARGET(&uLocal_1672, 0);
			GET_CAMERA_POSITION(&uLocal_1672, &Var0);
			GET_CAMERA_DIRECTION(&uLocal_1672, &Var2);
			SET_CAMERASHOT_POSITION(&uLocal_1682, Var0);
			SET_CAMERASHOT_DIRECTION(-Vector(Var2, &uLocal_1682, StackVal), 1);
			SET_CAMERASHOT_FOV(&uLocal_1682, 25,8f);
			SET_CAMERASHOT_POSITION(&iLocal_1684, Var0);
			SET_CAMERASHOT_TARGET_OBJECT(&iLocal_1684, &iLocal_1515, 0);
			SET_CAMERASHOT_FOV(&iLocal_1684, 25,8f);
			ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(&uLocal_1672, &uLocal_1682, &iLocal_1684, 1.0f, 4294967295, 0);
			SET_CAMERA_TARGET_OBJECT(&uLocal_1672, &iLocal_1515, 0);
		}
	}
	return;
}

var Function_495() //Position: 0x1B0DE / 110814
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	bool bVar5;
	
	if (((IS_ACTOR_VALID(&Local_1485) && IS_ACTOR_ALIVE(&Local_1485 + 8)) && !DECOR_CHECK_EXIST(&Local_1485, "kersploded")) && !DECOR_CHECK_EXIST(&Local_1485, "teleported"))
	{
		Function_302(&Local_1485);
		Var0 = Function_302(&Local_1485);
		bVar4 = true;
	}
	if (((IS_ACTOR_VALID(&Local_1495) && IS_ACTOR_ALIVE(&Local_1495 + 8)) && !DECOR_CHECK_EXIST(&Local_1495, "kersploded")) && !DECOR_CHECK_EXIST(&Local_1495, "teleported"))
	{
		Function_302(&Local_1495);
		Var2 = Function_302(&Local_1495);
		bVar5 = true;
	}
	if (bVar4 && bVar5)
	{
		Function_411();
		Function_411();
		if (VDIST(Var0, Function_411()) > VDIST(Var2, Function_411()))
		{
			return &Local_1485;
		}
		return &Local_1495;
	}
	if (bVar4)
	{
		return &Local_1485;
	}
	if (bVar5)
	{
		return &Local_1495;
	}
	return "";
}

void Function_496(bool bParam0, bool bParam1) //Position: 0x1B1C7 / 111047
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	bVar2 = false;
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1529, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1529, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1531, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1531, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1533, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1533, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1535, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1535, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1537, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1537, &uLocal_1670);
		}
	}
	switch (bLocal_1626)
	{
		case 0x00000001:
			uVar4 = &iLocal_1529;
			Var0 = Local_1601;
			break;
		
		case 0x00000002:
			uVar4 = &iLocal_1531;
			Var0 = Local_1604;
			break;
		
		case 0x00000003:
			uVar4 = &iLocal_1533;
			Var0 = Local_1607;
			break;
		
		case 0x00000004:
			uVar4 = &iLocal_1535;
			Var0 = Local_1610;
			break;
		
		case 0x00000005:
			uVar4 = &iLocal_1537;
			Var0 = Local_1613;
			break;
		
		default:
			bLocal_1626 = 4294967295;
			break;
	}
	if (!bLocal_1626 != 4294967295)
	{
		if (!&bParam1)
		{
			if (bParam0)
			{
				while (bVar2 < (GET_OBJECTSET_SIZE(&uLocal_1670) - 1))
				{
					uVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uLocal_1670);
					Function_423(&uVar5);
					if (VDIST(Function_423(&uVar5), (&iLocal_4 + 2552[13])) < VDIST(Var0, *(&iLocal_4 + 2552[13])))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(&uVar5, &uLocal_1670);
					}
					else
					{
						bVar2++;
					}
				}
			}
			else
			{
				while (bVar2 < (GET_OBJECTSET_SIZE(&uLocal_1670) - 1))
				{
					uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uLocal_1670);
					Function_423(&uVar6);
					if (VDIST(Function_423(&uVar6), *(&iLocal_4 + 2552[23])) < VDIST(Var0, *(&iLocal_4 + 2552[23])))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(&uVar6, &uLocal_1670);
					}
					else
					{
						bVar2++;
					}
				}
			}
		}
		if (GET_OBJECTSET_SIZE(&uLocal_1670) < 1 && IS_OBJECT_VALID(&uVar4))
		{
			if (IS_OBJECT_IN_OBJECTSET(&uVar4, &uLocal_1670))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar4, &uLocal_1670);
			}
		}
		iVar3 = Function_497(StackVal, &uLocal_1670, Var0, 0, 0x42960000);
		if (&iLocal_1529 == &iVar3)
		{
			bLocal_1626 = true;
		}
		else if (&iLocal_1531 == &iVar3)
		{
			if (bLocal_1525 > 2)
			{
				bLocal_1626 = 2;
			}
		}
		else if (&iLocal_1533 == &iVar3)
		{
			if (bLocal_1525 > 3)
			{
				bLocal_1626 = 3;
			}
		}
		else if (&iLocal_1535 == &iVar3)
		{
			if (bLocal_1525 > 4)
			{
				bLocal_1626 = 4;
			}
		}
		else if (&iLocal_1537 == &iVar3)
		{
			if (bLocal_1525 > 5)
			{
				bLocal_1626 = 5;
			}
		}
	}
	return;
}

int Function_497(var uParam0, struct<2> Param1, float fParam3, float fParam4) //Position: 0x1B48D / 111757
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	bool bVar6;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(&uParam0) < 0)
	{
		return "";
	}
	bVar6 = false;
	while (bVar6 < (GET_OBJECTSET_SIZE(&uParam0) - 1))
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uParam0);
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Param1, Var4);
		if ((bVar2 >= bVar3 && bVar2 <= &fParam3) && bVar2 >= &fParam4)
		{
			bVar3 = bVar2;
			uVar1 = &fVar0;
		}
		bVar6++;
	}
	return &uVar1;
}

void Function_498() //Position: 0x1B51B / 111899
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_WagonInRange", "Rebel04_WagonInRange", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_499(struct<2> Param0, float fParam2) //Position: 0x1B56C / 111980
{
	if (IS_ACTOR_VALID(&Local_1485))
	{
		if (Function_488(StackVal, &Local_1485, Param0, fParam2))
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(&Local_1495))
	{
		if (Function_488(StackVal, &Local_1495, Param0, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void Function_500() //Position: 0x1B5AB / 112043
{
	switch (bLocal_1626)
	{
		case 0x00000001:
			if (IS_BLIP_VALID(&uLocal_1591))
			{
				REMOVE_BLIP(&uLocal_1591);
			}
			if (IS_OBJECT_VALID(&iLocal_1529))
			{
				Function_502(StackVal, &iLocal_1529, Local_1601, 1);
				Function_501(StackVal, &iLocal_1529, Local_1601);
			}
			break;
		
		case 0x00000002:
			if (IS_BLIP_VALID(&uLocal_1593))
			{
				REMOVE_BLIP(&uLocal_1593);
			}
			if (IS_OBJECT_VALID(&iLocal_1531))
			{
				Function_502(StackVal, &iLocal_1531, Local_1604, 2);
				Function_501(StackVal, &iLocal_1531, Local_1604);
			}
			break;
		
		case 0x00000003:
			if (IS_BLIP_VALID(&iLocal_1595))
			{
				REMOVE_BLIP(&iLocal_1595);
			}
			if (IS_OBJECT_VALID(&iLocal_1533))
			{
				Function_502(StackVal, &iLocal_1533, Local_1607, 3);
				Function_501(StackVal, &iLocal_1535, Local_1607);
			}
			break;
		
		case 0x00000004:
			if (IS_BLIP_VALID(&uLocal_1597))
			{
				REMOVE_BLIP(&uLocal_1597);
			}
			if (IS_OBJECT_VALID(&iLocal_1535))
			{
				Function_502(StackVal, &iLocal_1535, Local_1610, 4);
				Function_501(StackVal, &iLocal_1535, Local_1610);
			}
			break;
		
		case 0x00000005:
			if (IS_BLIP_VALID(&iLocal_1599))
			{
				REMOVE_BLIP(&iLocal_1599);
			}
			if (IS_OBJECT_VALID(&iLocal_1537))
			{
				Function_502(StackVal, &iLocal_1537, Local_1613, 5);
				Function_501(StackVal, &iLocal_1537, Local_1613);
			}
			break;
	}
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1529, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1529, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1531, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1531, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1533, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1533, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1535, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1535, &uLocal_1670);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1537, &uLocal_1670))
		{
			ADD_OBJECT_TO_OBJECTSET(&iLocal_1537, &uLocal_1670);
		}
	}
	Function_492(1, 1, 1.0f);
	return;
}

void Function_501(int iParam0, struct<2> Param1) //Position: 0x1B7A9 / 112553
{
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		if (VDIST(Param1, Local_1601) >= 5.0f && &iLocal_1529 == &iParam0)
		{
			if (IS_BLIP_VALID(&uLocal_1591))
			{
				REMOVE_BLIP(&uLocal_1591);
			}
			Function_502(StackVal, &iLocal_1529, Local_1601, 1);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		if (VDIST(Param1, Local_1604) >= 5.0f && &iLocal_1531 == &iParam0)
		{
			if (IS_BLIP_VALID(&uLocal_1593))
			{
				REMOVE_BLIP(&uLocal_1593);
			}
			Function_502(StackVal, &iLocal_1531, Local_1604, 2);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		if (VDIST(Param1, Local_1607) >= 5.0f && &iLocal_1533 == &iParam0)
		{
			if (IS_BLIP_VALID(&iLocal_1595))
			{
				REMOVE_BLIP(&iLocal_1595);
			}
			Function_502(StackVal, &iLocal_1533, Local_1607, 3);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		if (VDIST(Param1, Local_1610) >= 5.0f && &iLocal_1535 == &iParam0)
		{
			if (IS_BLIP_VALID(&uLocal_1597))
			{
				REMOVE_BLIP(&uLocal_1597);
			}
			Function_502(StackVal, &iLocal_1535, Local_1610, 4);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		if (VDIST(Param1, Local_1613) >= 5.0f && &iLocal_1537 == &iParam0)
		{
			if (IS_BLIP_VALID(&iLocal_1599))
			{
				REMOVE_BLIP(&iLocal_1599);
			}
			Function_502(StackVal, &iLocal_1537, Local_1613, 5);
		}
	}
	return;
}

void Function_502(int iParam0, struct<2> Param1, bool bParam3) //Position: 0x1B8F9 / 112889
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Function_504(StackVal, &Local_1485, Param1);
	Function_504(StackVal, &Local_1495, Param1);
	Function_226(&iLocal_1567);
	Function_503(&Param1, "BuriedDynamiteExplosion", 0, 1);
	DESTROY_OBJECT(&iParam0);
	FLASH_SET_INT("help", "explodedNum", bParam3);
	iLocal_1526++;
	iVar1 = 12;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		uVar2 = &iLocal_4 + 968[iVar02];
		if (StackVal && Function_488(IS_ACTOR_VALID(&uVar2), &uVar2, Param1, 7,5f))
		{
			DECOR_SET_FLOAT(&uVar2, "explosionDeathTime", GET_CURRENT_GAME_TIME());
		}
		iVar0++;
	}
}

void Function_503(float fParam0, float fParam1, float fParam2, var uParam3) //Position: 0x1B9C3 / 113091
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &uParam3);
}

void Function_504(int iParam0, struct<2> Param1) //Position: 0x1B9E3 / 113123
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar6;
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
	struct<5> Var21;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_488(StackVal, &iParam0, Param1, 7,5f) && !DECOR_CHECK_EXIST(&iParam0, "kersploded"))
		{
			uVar2 = GET_ACTOR_IN_VEHICLE_SEAT(&iParam0, false);
			if (IS_ACTOR_VALID(&uVar2))
			{
				KILL_ACTOR(&uVar2);
				DECOR_SET_FLOAT(&uVar2, "explosionDeathTime", GET_CURRENT_GAME_TIME());
				ENABLE_VEHICLE_SEAT(&iParam0, false, 0);
			}
			uVar2 = GET_ACTOR_IN_VEHICLE_SEAT(&iParam0, true);
			if (IS_ACTOR_VALID(&uVar2))
			{
				DECOR_SET_FLOAT(&uVar2, "explosionDeathTime", GET_CURRENT_GAME_TIME());
				KILL_ACTOR(&uVar2);
				ENABLE_VEHICLE_SEAT(&iParam0, true, 0);
			}
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&iParam0) - 1))
			{
				iVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar3 = GET_ACTOR_ENUM(&iVar1);
					Function_302(&iVar1);
					uVar4 = Function_302(&iVar1);
					Function_301(&iVar1);
					uVar6 = Function_301(&iVar1);
					DETACH_DRAFT_FROM_VEHICLE_BY_ACTOR(&iVar1, &iParam0);
					DECOR_SET_FLOAT(&iVar1, "explosionDeathTime", GET_CURRENT_GAME_TIME());
				}
				bVar0++;
			}
			DECOR_SET_FLOAT(&iParam0, "kersploded", GET_CURRENT_GAME_TIME());
			REMOVE_ALL_OBJECT_ATTACHMENTS(&iParam0);
			uVar8 = GET_PHYSINST_FROM_ACTOR(&iParam0);
			if (&iParam0 == &Local_1495)
			{
				Function_383(&iParam0);
				Local_1479 = Function_383(&iParam0);
				Function_301(&iParam0);
				Local_1482 = Function_301(&iParam0);
				uVar9 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon03_piece01", "p_gen_wagonExplode01ax", Local_1479, Local_1482, false);
				uVar10 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon03_piece02", "p_gen_wagonExplode01bx", Local_1479, Local_1482, false);
				uVar11 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon03_piece03", "p_gen_wagonExplode01cx", Local_1479, Local_1482, false);
				uVar12 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon03_piece04", "p_gen_wagonExplode01dx", Local_1479, Local_1482, false);
				uVar13 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon03_piece05", "p_gen_wagonExplode01ex", Local_1479, Local_1482, false);
				uVar14 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon03_piece06", "p_gen_wagonExplode01fx", Local_1479, Local_1482, false);
				SET_PROP_AI_OBSTACLE_ENABLED(&uVar9, 1);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar9, &uVar10, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar9, &uVar11, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar9, &uVar12, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar9, &uVar13, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar9, &uVar14, 0);
			}
			else if (&iParam0 == &Local_1485)
			{
				Function_383(&iParam0);
				Local_1479 = Function_383(&iParam0);
				Function_301(&iParam0);
				Local_1482 = Function_301(&iParam0);
				uVar15 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon01_piece01", "p_gen_wagonExplode01ax", Local_1479, Local_1482, false);
				uVar16 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon01_piece02", "p_gen_wagonExplode01bx", Local_1479, Local_1482, false);
				uVar17 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon01_piece03", "p_gen_wagonExplode01cx", Local_1479, Local_1482, false);
				uVar18 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon01_piece04", "p_gen_wagonExplode01dx", Local_1479, Local_1482, false);
				uVar19 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon01_piece05", "p_gen_wagonExplode01ex", Local_1479, Local_1482, false);
				uVar20 = CREATE_PROP_IN_LAYOUT(&cLocal_948, "wagon01_piece06", "p_gen_wagonExplode01fx", Local_1479, Local_1482, false);
				SET_PROP_AI_OBSTACLE_ENABLED(&uVar15, 1);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar15, &uVar16, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar15, &uVar17, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar15, &uVar18, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar15, &uVar19, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar15, &uVar20, 0);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
			}
			HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&iParam0));
			Function_383(&iParam0);
			Var21 = Function_383(&iParam0);
			Var21.f_4 = (StackVal - 10.0f);
			TELEPORT_ACTOR(&iParam0, &Var21, 1, 1, 1);
			DECOR_SET_BOOL(&iParam0, "teleported", true);
		}
	}
	return;
}

void Function_505() //Position: 0x1BF39 / 114489
{
	if (IS_BLIP_VALID(&uLocal_1591) && !IS_OBJECT_VALID(&iLocal_1529))
	{
		REMOVE_BLIP(&uLocal_1591);
	}
	if (IS_BLIP_VALID(&uLocal_1593) && !IS_OBJECT_VALID(&iLocal_1531))
	{
		REMOVE_BLIP(&uLocal_1593);
	}
	if (IS_BLIP_VALID(&iLocal_1595) && !IS_OBJECT_VALID(&iLocal_1533))
	{
		REMOVE_BLIP(&iLocal_1595);
	}
	if (IS_BLIP_VALID(&uLocal_1597) && !IS_OBJECT_VALID(&iLocal_1535))
	{
		REMOVE_BLIP(&uLocal_1597);
	}
	if (IS_BLIP_VALID(&iLocal_1599) && !IS_OBJECT_VALID(&iLocal_1537))
	{
		REMOVE_BLIP(&iLocal_1599);
	}
	return;
}

void Function_506(struct<2> Param0) //Position: 0x1BFC1 / 114625
{
	struct<2> Var0;
	struct<2> Var2;
	float fVar4;
	float fVar5;
	var uVar6;
	struct<2> Var7;
	var uVar9;
	float fVar11;
	
	UPDATE_AIMRAMP(&fVar4, &fVar5, &uLocal_1674, "roamNew", 1);
	if (IS_USING_KEYBOARD_AND_MOUSE())
	{
		fVar4 = (fVar4 * 0,25f);
		fVar5 = (fVar5 * 0,25f);
	}
	uVar6 = "@DETONATOR.LOOK_AT_TARGET";
	if (!UNK_0x062C5047(&uVar6, 1, 0))
	{
		if (IS_ACTOR_VALID(&iLocal_1515))
		{
			iLocal_1515 = "";
			RESET_CAMERA_TARGET(&uLocal_1672, 0);
			END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_1672);
			RESET_CAMERA_TARGET(&uLocal_1672, 0);
			RESET_CAMERASHOT_TARGET(&uLocal_1682, 0);
			RESET_CAMERASHOT_TARGET(&iLocal_1684, 0);
			GET_CAMERA_POSITION(&uLocal_1672, &Var0);
			GET_CAMERA_DIRECTION(&uLocal_1672, &Var2);
			SET_CAMERASHOT_POSITION(&uLocal_1682, Var0);
			SET_CAMERASHOT_DIRECTION(-Vector(Var2, &uLocal_1682, StackVal), 1);
			SET_CAMERASHOT_FOV(&uLocal_1682, 25,8f);
			SET_CAMERASHOT_POSITION(&iLocal_1684, Var0);
			SET_CAMERASHOT_TARGET_POSITION(&iLocal_1684, Param0, 0);
			SET_CAMERASHOT_FOV(&iLocal_1684, 25,8f);
			ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(&uLocal_1672, &uLocal_1682, &iLocal_1684, 1.0f, 4294967295, 0);
			Local_1676 = Param0;
			SET_CAMERA_TARGET_POSITION(&uLocal_1672, Local_1676, 0);
		}
		else if (!Function_74(StackVal, Param0))
		{
			if ((fVar4 == 0.0f || fVar5 == 0.0f) || (IS_USING_KEYBOARD_AND_MOUSE() && GET_LAST_MOUSE_MOVEMENT() > 1,5f))
			{
				Function_423(&uLocal_1672);
				Var0 = Function_423(&uLocal_1672);
				uVar9 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Local_1676, StackVal);
				fVar11 = (TAN_DEGREE(GET_CAMERA_FOV(&uLocal_1672)) * 57,2958f);
				Function_507(&uVar9, (fVar5 * fVar11));
				Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Function_507(&uVar9, (fVar5 * fVar11)), Var0, StackVal);
				Var7.f_4 = (StackVal + (fVar4 * fVar11));
				if (VDIST(Var7, Param0) >= 40.0f)
				{
					Local_1676 = Var7;
					RESET_CAMERASHOT_TARGET(&uLocal_1682, 0);
					RESET_CAMERASHOT_TARGET(&iLocal_1684, 0);
					SET_CAMERA_TARGET_POSITION(&uLocal_1672, Var7, 0);
					iLocal_1515 = "";
				}
			}
			else if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Local_1676, Param0, StackVal)) < 0,002f)
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_1672);
				RESET_CAMERA_TARGET(&uLocal_1672, 0);
				RESET_CAMERASHOT_TARGET(&uLocal_1682, 0);
				RESET_CAMERASHOT_TARGET(&iLocal_1684, 0);
				GET_CAMERA_POSITION(&uLocal_1672, &Var0);
				GET_CAMERA_DIRECTION(&uLocal_1672, &Var2);
				SET_CAMERASHOT_POSITION(&uLocal_1682, Var0);
				SET_CAMERASHOT_DIRECTION(-Vector(Var2, &uLocal_1682, StackVal), 1);
				SET_CAMERASHOT_FOV(&uLocal_1682, 25,8f);
				SET_CAMERASHOT_POSITION(&iLocal_1684, Var0);
				SET_CAMERASHOT_TARGET_POSITION(&iLocal_1684, Param0, 0);
				SET_CAMERASHOT_FOV(&iLocal_1684, 25,8f);
				ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(&uLocal_1672, &uLocal_1682, &iLocal_1684, 1.0f, 4294967295, 0);
				Local_1676 = Param0;
				SET_CAMERA_TARGET_POSITION(&uLocal_1672, Local_1676, 0);
			}
		}
	}
	else
	{
		Function_494();
	}
	return;
}

struct<8> Function_507(struct<2> Param0) //Position: 0x1C252 / 115282
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

void Function_508() //Position: 0x1C26C / 115308
{
	FLASH_SET_INT("help", "explodedNum", false);
	FLASH_SET_INT("help", "totalBombs", false);
	FLASH_SET_INT("help", "nactiveNum", false);
	if (!FLASH_GET_BOOL("help", "nShowBombs"))
	{
		FLASH_SET_BOOL("help", "nShowBombs", 1);
	}
	if (FLASH_GET_INT("help", "totalBombs") != bLocal_1525)
	{
		FLASH_SET_INT("help", "totalBombs", bLocal_1525);
	}
	if (FLASH_GET_INT("help", "nactiveNum") != bLocal_1626)
	{
		FLASH_SET_INT("help", "nactiveNum", bLocal_1626);
	}
	if (!IS_OBJECT_VALID(&iLocal_1529))
	{
		FLASH_SET_INT("help", "explodedNum", true);
	}
	if (!IS_OBJECT_VALID(&iLocal_1531) && bLocal_1525 < 1)
	{
		FLASH_SET_INT("help", "explodedNum", 2);
	}
	if (!IS_OBJECT_VALID(&iLocal_1533) && bLocal_1525 < 2)
	{
		FLASH_SET_INT("help", "explodedNum", 3);
	}
	if (!IS_OBJECT_VALID(&iLocal_1535) && bLocal_1525 < 3)
	{
		FLASH_SET_INT("help", "explodedNum", 4);
	}
	if (!IS_OBJECT_VALID(&iLocal_1537) && bLocal_1525 < 4)
	{
		FLASH_SET_INT("help", "explodedNum", 5);
	}
	return;
}

void Function_509() //Position: 0x1C42E / 115758
{
	Function_223();
	switch (bLocal_1626)
	{
		case 0x00000001:
			if (IS_OBJECT_VALID(&iLocal_1529))
			{
				CREATE_OBJECT_GLOW(StackVal, &iLocal_1529, 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), 1);
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(&iLocal_1531))
			{
				CREATE_OBJECT_GLOW(StackVal, &iLocal_1531, 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), 1);
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(&iLocal_1533))
			{
				CREATE_OBJECT_GLOW(StackVal, &iLocal_1533, 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), 1);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&iLocal_1535))
			{
				CREATE_OBJECT_GLOW(StackVal, &iLocal_1535, 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), 1);
			}
			break;
		
		case 0x00000005:
			if (IS_OBJECT_VALID(&iLocal_1537))
			{
				CREATE_OBJECT_GLOW(StackVal, &iLocal_1537, 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), 1);
			}
			break;
	}
	return;
}

void Function_510() //Position: 0x1C4DF / 115935
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_505();
	bLocal_1525 = false;
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1529, &uLocal_1670);
		bLocal_1525++;
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1531, &uLocal_1670);
		bLocal_1525++;
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1533, &uLocal_1670);
		bLocal_1525++;
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1535, &uLocal_1670);
		bLocal_1525++;
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1537, &uLocal_1670);
		bLocal_1525++;
	}
	bVar1 = 0.0f;
	bVar2 = 0.0f;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_1670) - 1))
	{
		GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_1670), &Local_1479);
		bVar1 = VDIST((&iLocal_4 + 2552[13]), Local_1479);
		if (bVar1 > bVar2 || bVar2 != 0.0f)
		{
			bVar2 = bVar1;
			bLocal_1626 = bVar0 + 1;
		}
		bVar0++;
	}
	return;
}

void Function_511() //Position: 0x1C5DE / 116190
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4[5];
	int iVar15;
	struct<2> Var16;
	
	if (IS_OBJECT_VALID(&iLocal_1529))
	{
		DESTROY_OBJECT(&iLocal_1529);
	}
	if (IS_OBJECT_VALID(&iLocal_1531))
	{
		DESTROY_OBJECT(&iLocal_1531);
	}
	if (IS_OBJECT_VALID(&iLocal_1533))
	{
		DESTROY_OBJECT(&iLocal_1533);
	}
	if (IS_OBJECT_VALID(&iLocal_1535))
	{
		DESTROY_OBJECT(&iLocal_1535);
	}
	if (IS_OBJECT_VALID(&iLocal_1537))
	{
		DESTROY_OBJECT(&iLocal_1537);
	}
	if (IS_BLIP_VALID(&uLocal_1591))
	{
		REMOVE_BLIP(&uLocal_1591);
	}
	if (IS_BLIP_VALID(&uLocal_1593))
	{
		REMOVE_BLIP(&uLocal_1593);
	}
	if (IS_BLIP_VALID(&iLocal_1595))
	{
		REMOVE_BLIP(&iLocal_1595);
	}
	if (IS_BLIP_VALID(&uLocal_1597))
	{
		REMOVE_BLIP(&uLocal_1597);
	}
	if (IS_BLIP_VALID(&iLocal_1599))
	{
		REMOVE_BLIP(&iLocal_1599);
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 960))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 960, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			uVar2 = Function_513(&iVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				DESTROY_OBJECT(&uVar2);
			}
			uVar2 = Function_512(&iVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				DESTROY_OBJECT(&uVar2);
			}
		}
		bVar0++;
	}
	iVar3 = 0;
	if (!Function_74(StackVal, Local_1601))
	{
		Var4[02] = Local_1601;
		iVar3++;
	}
	if (!Function_74(StackVal, Local_1604))
	{
		Var4[12] = Local_1604;
		iVar3++;
	}
	if (!Function_74(StackVal, Local_1607))
	{
		Var4[22] = Local_1607;
		iVar3++;
	}
	if (!Function_74(StackVal, Local_1610))
	{
		Var4[32] = Local_1610;
		iVar3++;
	}
	if (!Function_74(StackVal, Local_1613))
	{
		Var4[42] = Local_1613;
		iVar3++;
	}
	bVar0 = false;
	while (bVar0 < (iVar3 - 1))
	{
		iVar15 = bVar0 + 1;
		while (iVar15 < (iVar3 - 1))
		{
			if (StackVal && !Function_74((StackVal && !Function_74(VDIST(Var4[iVar152], *(&iLocal_4 + 2552[13])) > VDIST(Var4[bVar02], *(&iLocal_4 + 2552[13])), Var4[bVar02])), Var4[iVar152]))
			{
				Var16 = Var4[bVar02];
				Var4[bVar02] = Var4[iVar152];
				Var4[iVar152] = Var16;
			}
			iVar15++;
		}
		bVar0++;
	}
	Local_1601 = Var4[02];
	Local_1604 = Var4[12];
	Local_1607 = Var4[22];
	Local_1610 = Var4[32];
	Local_1613 = Var4[42];
	if (!Function_74(StackVal, Local_1601) && !IS_OBJECT_VALID(&iLocal_1529))
	{
		iLocal_1529 = CREATE_PROP_IN_LAYOUT(&cLocal_948, Function_54(), "$/fragments/p_gen_dynamite04x", Local_1601, Local_1482, true);
		SNAP_OBJECT_TO_GROUND(&iLocal_1529, 2.0f, true, 1092616192);
		uLocal_1591 = ADD_BLIP_FOR_OBJECT(&iLocal_1529, 404, 0f, 2, 0);
	}
	if (!Function_74(StackVal, Local_1604) && !IS_OBJECT_VALID(&iLocal_1531))
	{
		iLocal_1531 = CREATE_PROP_IN_LAYOUT(&cLocal_948, Function_54(), "$/fragments/p_gen_dynamite04x", Local_1604, Local_1482, true);
		SNAP_OBJECT_TO_GROUND(&iLocal_1531, 2.0f, true, 1092616192);
		uLocal_1593 = ADD_BLIP_FOR_OBJECT(&iLocal_1531, 404, 0f, 2, 0);
	}
	if (!Function_74(StackVal, Local_1607) && !IS_OBJECT_VALID(&iLocal_1533))
	{
		iLocal_1533 = CREATE_PROP_IN_LAYOUT(&cLocal_948, Function_54(), "$/fragments/p_gen_dynamite04x", Local_1607, Local_1482, true);
		SNAP_OBJECT_TO_GROUND(&iLocal_1533, 2.0f, true, 1092616192);
		iLocal_1595 = ADD_BLIP_FOR_OBJECT(&iLocal_1533, 404, 0f, 2, 0);
	}
	if (!Function_74(StackVal, Local_1610) && !IS_OBJECT_VALID(&iLocal_1535))
	{
		iLocal_1535 = CREATE_PROP_IN_LAYOUT(&cLocal_948, Function_54(), "$/fragments/p_gen_dynamite04x", Local_1610, Local_1482, true);
		SNAP_OBJECT_TO_GROUND(&iLocal_1535, 2.0f, true, 1092616192);
		uLocal_1597 = ADD_BLIP_FOR_OBJECT(&iLocal_1535, 404, 0f, 2, 0);
	}
	if (!Function_74(StackVal, Local_1613) && !IS_OBJECT_VALID(&iLocal_1537))
	{
		iLocal_1537 = CREATE_PROP_IN_LAYOUT(&cLocal_948, Function_54(), "$/fragments/p_gen_dynamite04x", Local_1613, Local_1482, true);
		SNAP_OBJECT_TO_GROUND(&iLocal_1537, 2.0f, true, 1092616192);
		iLocal_1599 = ADD_BLIP_FOR_OBJECT(&iLocal_1537, 404, 0f, 2, 0);
	}
	if (IS_BLIP_VALID(&uLocal_1591))
	{
		SET_BLIP_BLINK(&uLocal_1591, 1, 0, 5f);
		SET_BLIP_SCALE(&uLocal_1591, 1,25f);
	}
	if (IS_BLIP_VALID(&uLocal_1593))
	{
		SET_BLIP_SCALE(&uLocal_1593, 0,75f);
	}
	if (IS_BLIP_VALID(&iLocal_1595))
	{
		SET_BLIP_SCALE(&iLocal_1595, 0,75f);
	}
	if (IS_BLIP_VALID(&uLocal_1597))
	{
		SET_BLIP_SCALE(&uLocal_1597, 0,75f);
	}
	if (IS_BLIP_VALID(&iLocal_1599))
	{
		SET_BLIP_SCALE(&iLocal_1599, 0,75f);
	}
	return;
}

var Function_512(int iParam0) //Position: 0x1CAFB / 117499
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (&vLocal_1702[iVar03] == &iParam0)
			{
				return &vLocal_1702[iVar03] + 16;
			}
			iVar0++;
		}
	}
	return "";
}

var Function_513(int iParam0) //Position: 0x1CB37 / 117559
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (&vLocal_1702[iVar03] == &iParam0)
			{
				return &vLocal_1702[iVar03] + 8;
			}
			iVar0++;
		}
	}
	return "";
}

void Function_514() //Position: 0x1CB73 / 117619
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_AllDetonated", "Rebel04_AllDetonated", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1CBC4 / 117700
{
	if (iLocal_963 < 3 && iLocal_963 > 105)
	{
		Function_567();
		Function_566();
		if (iLocal_963 > 9)
		{
			Function_563();
		}
	}
	switch (iLocal_963)
	{
		case 0x00000000:
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1472, 15);
			Function_468(0);
			Function_463(9);
			SET_ACTOR_HEALTH(&iLocal_989, GET_ACTOR_MAX_HEALTH(&iLocal_989));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_992[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_991 = Function_467(StackVal, (&iLocal_4 + 1624[03]), 0, 1, 1);
				if (!Function_466(iLocal_991))
				{
					Function_465(&Local_950);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1624[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_989, *(&iLocal_4 + 1624[23]), 1, 1, true);
				Function_226(&iLocal_1194);
				iLocal_963 = 1;
			}
			else
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_466(Global_46746[0])) && Function_562())
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000002:
			if (!iLocal_992[0])
			{
				Function_347();
				bLocal_1505 = &iLocal_892 + 96[02];
				Function_459(&iLocal_892 + 96[02]);
				Function_355(&(Local_1297[115]), &bLocal_1505, "Wagon", 0, 0x5f5e100, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 96[02], *(&iLocal_4 + 1624[63]), 1, 1, true);
				TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1624[13]), 1, 1, true);
			}
			if (IS_OBJECT_VALID(&uLocal_1623))
			{
				Function_224(&uLocal_1623);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
			}
			if (!IS_ACTORSET_VALID(&iLocal_4 + 1256))
			{
				Function_421();
				Function_561();
			}
			if (!IS_ACTORSET_VALID(&iLocal_4 + 952))
			{
				Function_461();
			}
			Function_557();
			SET_DUST_LEVEL_MODIFIER(4294967295);
			if (Function_555(StackVal, StackVal, StackVal, StackVal, StackVal, Local_950, bLocal_962))
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 3;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(&iLocal_1194);
				iLocal_963 = 4;
			}
			Function_247(bLocal_962);
			Function_451(StackVal, Function_247(bLocal_962), bLocal_962, Global_46746[2], Function_250(bLocal_962), 0);
			break;
		
		case 0x00000003:
			if (Function_540())
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			if (!SQUAD_IS_VALID(&cLocal_1523))
			{
				cLocal_1523 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_948, Function_54()));
			}
			if (!IS_OBJECT_VALID(&uLocal_1549))
			{
				uLocal_1549 = &iLocal_4 + 3528;
			}
			GET_OBJECT_POSITION(&uLocal_1549, &Local_1479);
			if (!IS_GRINGO_VALID(&iLocal_1628))
			{
				iLocal_1628 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_detonator", &Local_1479, 1.0f, 0);
			}
			GRINGO_ALLOW_ACTIVATION(&iLocal_1628, false);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
			if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], false) != &iLocal_989)
			{
				if (!SET_ACTOR_IN_VEHICLE(&iLocal_989, &iLocal_892 + 96[02], false))
				{
					LOG_ERROR("couldn't set the mexgirl in the wagon");
				}
			}
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_989);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_989, 0);
			bLocal_1627 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3472, 2, 0, 0, 1, false);
			TASK_VEHICLE_LEAVE(false);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3480, 2, 0, 0, 1, false);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3360), "UseCase1", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_989, bLocal_1627);
			TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
			Function_449(8, 0, 1);
			ENABLE_VEHICLE_SEAT(&iLocal_892 + 96[02], false, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_892 + 96[02], true, 0);
			AI_ACTOR_FORCE_SPEED(&iLocal_989, 4);
			AI_SET_NAV_PATHFINDING_ENABLED(&iLocal_989, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_989, true);
			bLocal_1548 = false;
			bLocal_1547 = false;
			bLocal_1525 = false;
			Function_428(&iLocal_1551);
			Function_164(Global_46838[2]);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
			Function_429(0);
			Function_355(&(Local_1297[315]), &iLocal_4 + 960, "RebelSoldier", 0, 0x5f5e100, 1);
			Function_226(&iLocal_1194);
			iLocal_963 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_539();
				Function_226(&iLocal_1194);
				iLocal_963 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_286(&iLocal_1194) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_425("Rebel04_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_226(&iLocal_1194);
				Function_226(&iLocal_1202);
				Function_226(&iLocal_1206);
				iLocal_963 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_286(&iLocal_1194) <= 8.0f)
			{
				Function_139("Rebel04_obj02_help_plant_dyn", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_INT(&cLocal_948, "nhelpstate", false);
				Function_428(&iLocal_1579);
				Function_428(&iLocal_1658);
				Function_226(&iLocal_1194);
				Function_226(&iLocal_1202);
				Function_226(&iLocal_1206);
				iLocal_963 = 9;
			}
			break;
		
		case 0x00000009:
			if (((bLocal_1525 >= 0 && !DECOR_CHECK_EXIST(&cLocal_948, "waitingforinstr")) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && Function_286(&iLocal_1194) < 10.0f)
			{
				Function_538();
				DECOR_SET_BOOL(&cLocal_948, "waitingforinstr", true);
			}
			if (!DECOR_CHECK_EXIST(&cLocal_948, "alertedconvoy"))
			{
				Function_523();
				Function_522();
				Function_519();
			}
			if ((bLocal_1525 < 0 && !HUD_IS_SHOWING_SMALL_TEXT()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_1547)
				{
					Function_462();
					Function_518();
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					Function_226(&iLocal_1194);
					iLocal_963 = 106;
				}
				else if (bLocal_1548)
				{
					SNAP_ACTOR_TO_GRINGO(&iLocal_989, &iLocal_4 + 3360, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_989, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3360), "UseCase1", 4294967295, 1);
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 3528, 330, 0f, 2, 0);
					Function_462();
					Function_517();
					Function_226(&iLocal_1194);
					iLocal_963 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_286(&iLocal_1194) <= 5.0f)
			{
				Function_425("Rebel04_obj02b", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_226(&iLocal_1194);
				iLocal_963 = 11;
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1344[3]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 3528)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_4 + 3528));
				}
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				if (HUD_IS_SHOWING_SMALL_TEXT())
				{
					HUD_CLEAR_SMALL_TEXT();
					HUD_CLEAR_SMALL_TEXT_QUEUE();
				}
				Function_518();
				Function_226(&iLocal_1194);
				iLocal_963 = 106;
			}
			break;
		
		case 0x00000069:
			if (Function_286(&iLocal_1194) <= 4.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_226(&iLocal_1194);
				iLocal_963 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING() && Function_462())
			{
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				if (!IS_OBJECTSET_VALID(&uLocal_1686))
				{
					uLocal_1686 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &cLocal_948, 4294967295, 1);
				}
				while (SQUAD_GET_SIZE(&cLocal_1523) >= 0)
				{
					uLocal_1698 = SQUAD_GET_ACTOR_BY_INDEX(&cLocal_1523, false);
					if (IS_ACTOR_VALID(&uLocal_1698))
					{
						if (!IS_OBJECT_IN_OBJECTSET(&uLocal_1698, &uLocal_1686))
						{
							ADD_OBJECT_TO_OBJECTSET(&uLocal_1698, &uLocal_1686);
						}
						SQUAD_LEAVE(&uLocal_1698);
					}
				}
				if (IS_OBJECTSET_VALID(&uLocal_1686))
				{
					if (GET_OBJECTSET_SIZE(&uLocal_1686) >= 0)
					{
						Function_516(&uLocal_1686, &iLocal_4 + 960);
					}
					DESTROY_OBJECTSET(&uLocal_1686);
				}
				if (FLASH_GET_BOOL("help", "nShowBombs"))
				{
					FLASH_SET_BOOL("help", "nShowBombs", 0);
				}
				Function_221();
				iLocal_992[1] = 1;
				Function_226(&iLocal_1194);
				bLocal_962 = 2;
				iLocal_963 = 2;
			}
			break;
	}
	return;
}

void Function_516(var uParam0, bool bParam1) //Position: 0x1D436 / 119862
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&bParam1) && IS_OBJECTSET_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
		{
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					SQUAD_JOIN(&uVar2, &bParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_517() //Position: 0x1D494 / 119956
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_AllPlacedWaiting", "Rebel04_AllPlacedWaiting", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_518() //Position: 0x1D4ED / 120045
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_PlantsChargesMeetsUp", "Rebel04_PlantsChargesMeetsUp", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1D54E / 120142
{
	if (!Function_288(&iLocal_1654))
	{
		Function_428(&iLocal_1654);
		DECOR_SET_INT(&cLocal_948, "burrystage", false);
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_286(&iLocal_1654) < 300.0f && DECOR_GET_INT(&cLocal_948, "burrystage") != 4)
		{
			Function_521();
			Function_241("Rebel04_fail_convoy_arrived");
			bLocal_977 = true;
		}
		else if (Function_286(&iLocal_1654) < 240.0f && DECOR_GET_INT(&cLocal_948, "burrystage") != 3)
		{
			Function_520();
			DECOR_SET_INT(&cLocal_948, "burrystage", 4);
		}
		else if (Function_286(&iLocal_1654) < 180.0f && DECOR_GET_INT(&cLocal_948, "burrystage") != 2)
		{
			Function_520();
			DECOR_SET_INT(&cLocal_948, "burrystage", 3);
		}
		else if (Function_286(&iLocal_1654) < 120.0f && DECOR_GET_INT(&cLocal_948, "burrystage") != 1)
		{
			Function_538();
			DECOR_SET_INT(&cLocal_948, "burrystage", 2);
		}
		else if (Function_286(&iLocal_1654) < 60.0f && DECOR_GET_INT(&cLocal_948, "burrystage") != 0)
		{
			Function_538();
			DECOR_SET_INT(&cLocal_948, "burrystage", true);
		}
	}
	return;
}

void Function_520() //Position: 0x1D6D7 / 120535
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_RuningOutOfTime", "Rebel04_RuningOutOfTime", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_521() //Position: 0x1D72E / 120622
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_OutOfTime", "Rebel04_OutOfTime", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1D779 / 120697
{
	bool bVar0;
	
	bVar0 = false;
	if (DECOR_CHECK_EXIST(&cLocal_948, "printedobjsmall"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "printedobjsmall")) < 1.0f)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (DECOR_CHECK_EXIST(&cLocal_948, "nsaidsmall"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "nsaidsmall")) > 1.0f)
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0 && DECOR_CHECK_EXIST(&cLocal_948, "nhelpstate"))
	{
		switch (DECOR_GET_INT(&cLocal_948, "nhelpstate"))
		{
			case 0x00000000:
				Function_139("Rebel04_obj02_help_plant_dyn_road", -1.0f, 1, 0, 2, 1, 0);
				DECOR_SET_INT(&cLocal_948, "nhelpstate", true);
				DECOR_SET_FLOAT(&cLocal_948, "helpstatetime", GET_CURRENT_GAME_TIME());
				break;
			
			case 0x00000001:
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1344[1]) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "helpstatetime")) < 5.0f)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_139("Rebel04_obj02_help_plant_dyn_distance", 0x41200000, 1, 0, 2, 1, 0);
					DECOR_SET_INT(&cLocal_948, "nhelpstate", 4294967295);
				}
				break;
			
			default:
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					if (!DECOR_CHECK_EXIST(&cLocal_948, "dynamite_help_bridge") && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1344[4]))
					{
						Function_139("Rebel04_obj02_help_plant_dyn_bridge", 0x41200000, 1, 0, 2, 1, 0);
						DECOR_SET_FLOAT(&cLocal_948, "dynamite_help_bridge", GET_CURRENT_GAME_TIME());
					}
					else if (!DECOR_CHECK_EXIST(&cLocal_948, "dynamite_help_tooclose") && bLocal_1525 < 0)
					{
						Function_139("Rebel04_obj02_help_plant_dyn_tooclose", 0x41200000, 1, 0, 2, 1, 0);
						DECOR_SET_BOOL(&cLocal_948, "dynamite_help_tooclose", true);
					}
					else
					{
						if (!DECOR_CHECK_EXIST(&cLocal_948, "inumplanted"))
						{
							DECOR_SET_INT(&cLocal_948, "inumplanted", false);
						}
						switch (bLocal_1525)
						{
							case 0x00000000:
								if (!DECOR_GET_INT(&cLocal_948, "inumplanted") != bLocal_1525)
								{
									Function_139("Rebel04_obj02_help_charges_left_5", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(&cLocal_948, "inumplanted", bLocal_1525);
								}
								break;
							
							case 0x00000001:
								if (!DECOR_GET_INT(&cLocal_948, "inumplanted") != bLocal_1525)
								{
									Function_139("Rebel04_obj02_help_charges_left_4", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(&cLocal_948, "inumplanted", bLocal_1525);
								}
								break;
							
							case 0x00000002:
								if (!DECOR_GET_INT(&cLocal_948, "inumplanted") != bLocal_1525)
								{
									Function_139("Rebel04_obj02_help_charges_left_3", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(&cLocal_948, "inumplanted", bLocal_1525);
								}
								break;
							
							case 0x00000003:
								if (!DECOR_GET_INT(&cLocal_948, "inumplanted") != bLocal_1525)
								{
									Function_139("Rebel04_obj02_help_charges_left_2", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(&cLocal_948, "inumplanted", bLocal_1525);
								}
								break;
							
							case 0x00000004:
								if (!DECOR_GET_INT(&cLocal_948, "inumplanted") != bLocal_1525)
								{
									Function_139("Rebel04_obj02_help_charges_left_1", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(&cLocal_948, "inumplanted", bLocal_1525);
								}
								break;
							
							case 0x00000005:
								break;
							}
						}
				}
				break;
			}
	}
	return;
}

void Function_523() //Position: 0x1DC9A / 122010
{
	if (bLocal_1525 > 5)
	{
		if (!bLocal_1548)
		{
			bLocal_1548 = true;
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1539);
			}
		}
	}
	else if (!bLocal_1548 && !bLocal_1547)
	{
		if ((((IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "pointing") || IS_ACTOR_RIDING(&Global_54076)) || IS_ACTOR_RIDING_VEHICLE(&Global_54076)) || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "jump")) || !IS_ACTOR_ON_GROUND(&Global_54076))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1539);
			}
		}
		else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1344[3]) && IS_ACTOR_IN_VOLUME(&iLocal_989, &iLocal_4 + 1344[3]))
		{
			if (bLocal_1525 >= 0)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1543))
				{
					uLocal_1543 = ADD_SCRIPT_USE_CONTEXT("Rebel04_obj02_use_context_skip", 100, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
					if (!DECOR_CHECK_EXIST(&cLocal_948, "saidskip"))
					{
						Function_537();
						DECOR_SET_BOOL(&cLocal_948, "saidskip", true);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1543))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1543))
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1543))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1543);
						}
						bLocal_1547 = true;
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1539);
				}
			}
			else if (!DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_GoesToLuisaB4Dyn"))
			{
				Function_536();
				DECOR_SET_FLOAT(&cLocal_948, "Rebel04_GoesToLuisaB4Dyn", GET_CURRENT_GAME_TIME());
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_GoesToLuisaB4Dyn")) < 15.0f)
			{
				DECOR_REMOVE(&cLocal_948, "Rebel04_GoesToLuisaB4Dyn");
			}
		}
		else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1344[3]))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1543))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1543);
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1344[1]))
			{
				if (DECOR_CHECK_EXIST(&cLocal_948, "outexplosivearea"))
				{
					DECOR_REMOVE(&Global_54076, "outexplosivearea");
				}
				if (!ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
					SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
				}
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
				{
					uLocal_1539 = ADD_SCRIPT_USE_CONTEXT("Rebel04_obj02_use_context_bury", 100, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
				}
				Function_525();
				if (DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_PLAY_LeavesRoad"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_PLAY_LeavesRoad")) < 15.0f)
					{
						DECOR_REMOVE(&cLocal_948, "Rebel04_PLAY_LeavesRoad");
					}
				}
			}
			else
			{
				if (ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1539);
					if (!DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_PLAY_LeavesRoad"))
					{
						Function_524();
						DECOR_SET_FLOAT(&cLocal_948, "Rebel04_PLAY_LeavesRoad", GET_CURRENT_GAME_TIME());
					}
				}
			}
		}
	}
	return;
}

void Function_524() //Position: 0x1E08A / 123018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_LeavesRoad", "Rebel04_LeavesRoad", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x1E0D7 / 123095
{
	var uVar0;
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1539))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1539))
		{
			bLocal_1525++;
			switch (bLocal_1525)
			{
				case 0x00000000:
					bLocal_1525 = bLocal_1525;
					break;
				
				case 0x00000001:
					Function_535();
					DECOR_SET_FLOAT(&cLocal_948, "nsaidsmall", GET_CURRENT_GAME_TIME());
					GET_POSITION(&Global_54076, &Local_1479);
					Local_1479 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Local_1479, StackVal);
					FIND_GROUND_INTERSECTION(&Local_1479, 5.0f, &Local_1601, &Local_1482);
					if (!IS_BLIP_VALID(&uLocal_1591))
					{
						uLocal_1591 = ADD_BLIP_FOR_COORD(&Local_1601, 404, 0, 2, 0);
					}
					if (!ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "pointing/down");
					Function_226(&iLocal_1579);
					uVar0 = Function_532(&Global_54076, &iLocal_4 + 960);
					if (IS_ACTOR_VALID(&uVar0))
					{
						Function_531(&uVar0, bLocal_1525);
					}
					break;
				
				case 0x00000002:
					GET_POSITION(&Global_54076, &Local_1479);
					Local_1479 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Local_1479, StackVal);
					FIND_GROUND_INTERSECTION(&Local_1479, 5.0f, &Local_1604, &Local_1482);
					if (VDIST(Local_1479, Local_1601) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(&cLocal_948, "tooclosewarn"))
						{
							Function_530();
						}
						else
						{
							DECOR_SET_BOOL(&cLocal_948, "tooclosewarn", true);
							Function_529();
						}
					}
					else
					{
						Function_530();
					}
					DECOR_SET_FLOAT(&cLocal_948, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(&uLocal_1593))
					{
						uLocal_1593 = ADD_BLIP_FOR_COORD(&Local_1604, 404, 0, 2, 0);
					}
					if (!ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "pointing/down");
					Function_226(&iLocal_1579);
					uVar0 = Function_532(&Global_54076, &iLocal_4 + 960);
					if (IS_ACTOR_VALID(&uVar0))
					{
						Function_531(&uVar0, bLocal_1525);
					}
					break;
				
				case 0x00000003:
					GET_POSITION(&Global_54076, &Local_1479);
					Local_1479 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Local_1479, StackVal);
					FIND_GROUND_INTERSECTION(&Local_1479, 5.0f, &Local_1607, &Local_1482);
					if (VDIST(Local_1479, Local_1601) >= 5.0f || VDIST(Local_1479, Local_1604) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(&cLocal_948, "tooclosewarn"))
						{
							Function_528();
						}
						else
						{
							DECOR_SET_BOOL(&cLocal_948, "tooclosewarn", true);
							Function_529();
						}
					}
					else
					{
						Function_528();
					}
					DECOR_SET_FLOAT(&cLocal_948, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(&iLocal_1595))
					{
						iLocal_1595 = ADD_BLIP_FOR_COORD(&Local_1607, 404, 0, 2, 0);
						SET_BLIP_BLINK(&iLocal_1595, 0, 0, 5f);
					}
					if (!ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "pointing/down");
					Function_226(&iLocal_1579);
					uVar0 = Function_532(&Global_54076, &iLocal_4 + 960);
					if (IS_ACTOR_VALID(&uVar0))
					{
						Function_531(&uVar0, bLocal_1525);
					}
					break;
				
				case 0x00000004:
					GET_POSITION(&Global_54076, &Local_1479);
					Local_1479 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Local_1479, StackVal);
					FIND_GROUND_INTERSECTION(&Local_1479, 5.0f, &Local_1610, &Local_1482);
					if ((VDIST(Local_1479, Local_1601) >= 5.0f || VDIST(Local_1479, Local_1604) >= 5.0f) || VDIST(Local_1479, Local_1607) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(&cLocal_948, "tooclosewarn"))
						{
							Function_527();
						}
						else
						{
							DECOR_SET_BOOL(&cLocal_948, "tooclosewarn", true);
							Function_529();
						}
					}
					else
					{
						Function_527();
					}
					DECOR_SET_FLOAT(&cLocal_948, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(&uLocal_1597))
					{
						uLocal_1597 = ADD_BLIP_FOR_COORD(&Local_1610, 404, 0, 2, 0);
						SET_BLIP_BLINK(&uLocal_1597, 0, 0, 5f);
					}
					if (!ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "pointing/down");
					Function_226(&iLocal_1579);
					uVar0 = Function_532(&Global_54076, &iLocal_4 + 960);
					if (IS_ACTOR_VALID(&uVar0))
					{
						Function_531(&uVar0, bLocal_1525);
					}
					break;
				
				case 0x00000005:
					GET_POSITION(&Global_54076, &Local_1479);
					Local_1479 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Local_1479, StackVal);
					FIND_GROUND_INTERSECTION(&Local_1479, 5.0f, &Local_1613, &Local_1482);
					if (((VDIST(Local_1479, Local_1601) >= 5.0f || VDIST(Local_1479, Local_1604) >= 5.0f) || VDIST(Local_1479, Local_1607) >= 5.0f) || VDIST(Local_1479, Local_1610) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(&cLocal_948, "tooclosewarn"))
						{
							Function_526();
						}
						else
						{
							DECOR_SET_BOOL(&cLocal_948, "tooclosewarn", true);
							Function_529();
						}
					}
					else
					{
						Function_526();
					}
					DECOR_SET_FLOAT(&cLocal_948, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(&iLocal_1599))
					{
						iLocal_1599 = ADD_BLIP_FOR_COORD(&Local_1613, 404, 0, 2, 0);
						SET_BLIP_BLINK(&iLocal_1599, 0, 0, 5f);
					}
					if (!ACTOR_HAS_ANIM_SET(&Global_54076, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						SET_ANIM_SET_FOR_ACTOR(&Global_54076, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "pointing/down");
					Function_226(&iLocal_1579);
					uVar0 = Function_532(&Global_54076, &iLocal_4 + 960);
					if (IS_ACTOR_VALID(&uVar0))
					{
						Function_531(&uVar0, bLocal_1525);
					}
					break;
				
				default:
					break;
				}
			}
	}
	return;
}

void Function_526() //Position: 0x1E707 / 124679
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place5Here", "Rebel04_Place5Here", 2, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527() //Position: 0x1E754 / 124756
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place4Here", "Rebel04_Place4Here", 2, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x1E7A1 / 124833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place3Here", "Rebel04_Place3Here", 2, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_529() //Position: 0x1E7EE / 124910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_2Close2EachOther", "Rebel04_2Close2EachOther", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x1E847 / 124999
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place2Here", "Rebel04_Place2Here", 2, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_531(var uParam0, bool bParam1) //Position: 0x1E894 / 125076
{
	struct<9> Var0;
	
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	TASK_CLEAR(&uParam0);
	Function_383(&uParam0);
	vVar0 = Function_383(&uParam0);
	DECOR_SET_FLOAT(&uParam0, "original_x", vVar0.x);
	DECOR_SET_FLOAT(&uParam0, "original_y", vVar0.y);
	DECOR_SET_FLOAT(&uParam0, "original_z", vVar0.z);
	TASK_CLEAR(&uParam0);
	TASK_PRIORITY_SET(&uParam0, true);
	SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
	SET_ACTOR_FACE_STYLE(&uParam0, 2);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uParam0);
	SQUAD_JOIN(&uParam0, &cLocal_1523);
	AI_GOAL_LOOK_AT_ACTOR_NEW(&uParam0, &Global_54076, -1f, 0);
	DECOR_SET_INT(&uParam0, "riggerindex", bParam1);
	return;
}

float Function_532(int iParam0, int iParam1) //Position: 0x1E948 / 125256
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		if (Function_533(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_533(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_533(bool bParam0, int iParam1) //Position: 0x1EA0B / 125451
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_534(&uVar0, &uVar2);
	return iVar4;
}

var Function_534(struct<2> Param0) //Position: 0x1EA2C / 125484
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_535() //Position: 0x1EA4B / 125515
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place1Here", "Rebel04_Place1Here", 2, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x1EA98 / 125592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_GoesToLuisaB4Dyn", "Rebel04_GoesToLuisaB4Dyn", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x1EAF1 / 125681
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_MeetsLuisaEarly", "Rebel04_MeetsLuisaEarly", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1EB48 / 125768
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_WaitingForInstr", "Rebel04_WaitingForInstr", false, 2, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x1EB9F / 125855
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_WhereAt", "Rebel04_WhereAt", false, 1, 1, 0, 1);
		Function_353(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_540() //Position: 0x1EBE6 / 125926
{
	Function_293(&iLocal_964, 1, 0);
	switch (iLocal_964)
	{
		case 0x000003E8:
			Function_344(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			(&iLocal_964 + 24) = Function_547(&iLocal_4, 0, &Global_54076, 1, 0, 0);
			if (IS_OBJECT_VALID(&iLocal_964 + 24))
			{
			}
			else
			{
				LOG_ERROR("Rebel04_Cutscene02 - Failed to create Rebel04_Cutscene02_cutscene");
			}
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
			iLocal_1746 = 15;
			iLocal_1747 = 15;
			Function_226(&iLocal_964 + 4);
			iLocal_964 = 1004;
			break;
		
		case 0x000003EC:
			if (Function_545() && Function_542())
			{
				Function_226(&iLocal_964 + 4);
				iLocal_964 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_541(&Global_54076, 0, 1);
				Function_541(&iLocal_989, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_297(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_964 + 24))
				{
					DESTROY_OBJECT(&iLocal_964 + 24);
				}
				iLocal_964 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 96[02], *(&iLocal_4 + 1624[63]), 1, 1, true);
				if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], false) != &iLocal_989)
				{
					SET_ACTOR_IN_VEHICLE(&iLocal_989, &iLocal_892 + 96[02], false);
				}
				TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(0);
				}
				if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					ACTOR_DISMOUNT_NOW(&Global_54076);
				}
				else if (IS_ACTOR_RIDING(&Global_54076))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, GET_MOUNT(&Global_54076), *(&iLocal_4 + 1624[53]), 1, 1, true);
					ACTOR_DISMOUNT_NOW(&Global_54076);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1624[13]), 1, 1, true);
				RESET_ACTOR_GAITS(&Global_54076, 0);
				iLocal_964 = 1104;
			}
			break;
	}
	return 0;
}

void Function_541(int iParam0, bool bParam1, bool bParam2) //Position: 0x1EE54 / 126548
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&iParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			FIRE_STOP_ON_ACTOR(&iParam0);
		}
		SET_ACTOR_INVULNERABILITY(&iParam0, true);
		CLEAR_ACTOR_MIN_SPEED(&iParam0);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&iParam0);
		RESET_ACTOR_GAITS(&iParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&iParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&iParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&iParam0);
		SET_ACTOR_INVULNERABILITY(&iParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
	}
	return;
}

int Function_542() //Position: 0x1EF04 / 126724
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_1747)
	{
		case 0x0000000F:
			if (Function_286(&iLocal_964 + 4) < 0.0f)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], true) == &Global_54076)
				{
					iLocal_1754 = 1;
				}
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_989, false);
				if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], false) != &iLocal_989)
				{
					if (!SET_ACTOR_IN_VEHICLE(&iLocal_989, &iLocal_892 + 96[02], false))
					{
						LOG_ERROR("couldn't set the mexgirl in the wagon");
					}
				}
				if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], true) != &Global_54076 && iLocal_1754)
				{
					if (!SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_892 + 96[02], true))
					{
						LOG_ERROR("couldn't set the player in the wagon");
					}
				}
				AI_ACTOR_FORCE_SPEED(&iLocal_989, 2);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_989, &iLocal_4 + 1624[63], 2);
				iVar0 = 1;
				GET_ACTOR_VEHICLE_STATE(&Global_54076, &iVar0, &iVar1);
				if (iVar1 != 1)
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_544(StackVal, StackVal, &Global_54076, *(&iLocal_4 + 1624[03]), 1, 1, 1);
					}
					else
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1624[03]), 1, 1, true);
					}
					TASK_FOLLOW_OBJECT_ALONG_PATH(&Global_54076, &iLocal_989, &iLocal_4 + 3416, 0.0f, 1, 0);
					AI_ACTOR_FORCE_SPEED(&iLocal_989, 2);
				}
				iLocal_1747 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_286(&iLocal_964 + 4) < 2.0f)
			{
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_989, 5);
				iLocal_1747 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_286(&iLocal_964 + 4) < 10.0f)
			{
				SET_ACTOR_FACE_STYLE(&Global_54076, 2);
				if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					bLocal_1627 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_FACE_ACTOR(0, Function_543(&Global_54076, &iLocal_4 + 952), 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1627);
					TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
				}
				else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					uLocal_1748 = Vector(10.0f, 0.0f, 2.0f);
					UNK_0xB89CC342(&Global_54076, &uLocal_1748, &uLocal_1751);
					TASK_GO_TO_COORD(GET_MOUNT(&Global_54076), &uLocal_1751, 1);
					bLocal_1627 = TASK_SEQUENCE_OPEN();
					TASK_DISMOUNT(false, 0);
					TASK_FACE_ACTOR(0, Function_543(&Global_54076, &iLocal_4 + 952), 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1627);
					TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
				}
				else
				{
					TASK_FACE_ACTOR(&Global_54076, &iLocal_989, 0, 3212836864);
				}
				iLocal_1747 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_286(&iLocal_964 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var Function_543(int iParam0, int iParam1) //Position: 0x1F1C3 / 127427
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&iParam1) - 1))
	{
		if (Function_533(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_533(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0), &iParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(&iParam1, bVar1);
	}
	LOG_WARNING("\Couldn't find a closest actorset member from 'Them' to 'Me' in GET_CLOSEST_ACTORSET_MEMBER!");
	return "";
}

void Function_544(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x1F28C / 127628
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

int Function_545() //Position: 0x1F35B / 127835
{
	switch (iLocal_1746)
	{
		case 0x0000000F:
			if (Function_286(&iLocal_964 + 4) < 2.0f)
			{
				Function_546();
				iLocal_1746 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_286(&iLocal_964 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_546() //Position: 0x1F3A4 / 127908
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_CS02_v1_AA1", "Rebel04_CS02_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_CS02_v1_AA2", "Rebel04_CS02_v1_AA2", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_CS02_v1_AB", "Rebel04_CS02_v1_AB", true, 4, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_547(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1F45B / 128091
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 6, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Rebel04_Cutscene02", 6, 1);
	}
	Function_548(&uVar0, &uParam2);
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

void Function_548(var uParam0, int iParam1) //Position: 0x1F4EA / 128234
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_554(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_553(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_552(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_551(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_550(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_549(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 2, 3, 3.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 5, 4.0f, 3);
	return;
}

void Function_549(int iParam0) //Position: 0x1F5A0 / 128416
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,85547f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3451,146f, 7,055765f, 4209,637f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,181064f, -1,367817f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_550(int iParam0) //Position: 0x1F615 / 128533
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3446,145f, 7,02662f, 4205,365f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,200557f, 2,957253f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_551(int iParam0) //Position: 0x1F68A / 128650
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,63659f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3446,863f, 7,148807f, 4222,19f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,010582f, 1,416742f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_552(int iParam0) //Position: 0x1F6FF / 128767
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,63659f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3446,128f, 7,154627f, 4220,092f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,010582f, 1,511308f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_553(int iParam0) //Position: 0x1F774 / 128884
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,16827f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3442,194f, 7,502315f, 4210,917f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,066688f, 2,089116f, 0,000634f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_554(int iParam0) //Position: 0x1F7ED / 129005
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,8671f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3438,417f, 7,38152f, 4206,363f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,073068f, 1,970953f, 0,000634f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

bool Function_555(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x1F85E / 129118
{
	if (Function_556(&iParam0) == iParam6 || Function_458())
	{
		return 1;
	}
	return 0;
}

int Function_556(int iParam0) //Position: 0x1F87D / 129149
{
	if (Function_291(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_557() //Position: 0x1F896 / 129174
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		if (!iLocal_992[0])
		{
			bVar0 = Function_560(&Global_54076, &iLocal_4 + 3512);
		}
		else
		{
			bVar0 = Function_559(StackVal, (&iLocal_4 + 1624[73]), &iLocal_4 + 3512);
		}
		if (!IS_OBJECTSET_VALID(&uVar1))
		{
			uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &cLocal_948, 9, 1);
		}
		GET_PATH_POINT(&iLocal_4 + 3512, bVar0, &Var2);
		uLocal_1734 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cLocal_948, Function_54(), 2, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
		DECOR_SET_INT(&uLocal_1734, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(&uLocal_1734, &uVar1);
		if (bVar0 >= 0)
		{
			GET_PATH_POINT(&iLocal_4 + 3512, (bVar0 - 1), &Var2);
		}
		uLocal_1736 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cLocal_948, Function_54(), 2, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
		DECOR_SET_INT(&uLocal_1736, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(&uLocal_1736, &uVar1);
		if (!iLocal_992[0])
		{
			bVar0 = Function_560(&Global_54076, &iLocal_4 + 3504);
		}
		else
		{
			bVar0 = Function_559(StackVal, *(&iLocal_4 + 1624[83]), &iLocal_4 + 3504);
		}
		GET_PATH_POINT(&iLocal_4 + 3504, bVar0, &Var2);
		uLocal_1738 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cLocal_948, Function_54(), 2, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
		DECOR_SET_INT(&uLocal_1738, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(&uLocal_1738, &uVar1);
		if (bVar0 >= 0)
		{
			GET_PATH_POINT(&iLocal_4 + 3504, (bVar0 - 1), &Var2);
		}
		uLocal_1740 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cLocal_948, Function_54(), 2, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
		DECOR_SET_INT(&uLocal_1740, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(&uLocal_1740, &uVar1);
		if (bVar0 <= (GET_NUM_PATH_POINTS(&iLocal_4 + 3504) - 2))
		{
			GET_PATH_POINT(&iLocal_4 + 3504, bVar0 + 1, &Var2);
		}
		uLocal_1742 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cLocal_948, Function_54(), 2, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
		DECOR_SET_INT(&uLocal_1742, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(&uLocal_1742, &uVar1);
		bVar4 = false;
		while (bVar4 <= SQUAD_GET_SIZE(&iLocal_4 + 960))
		{
			iVar5 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 960, bVar4);
			if (IS_ACTOR_VALID(&iVar5))
			{
				Function_558(&iVar5, bVar4);
				Function_302(&iVar5);
				uVar6 = Function_497(StackVal, &uVar1, Function_302(&iVar5), 0.0f, 200.0f);
				SET_ACTOR_STAY_WITHIN_VOLUME(&iVar5, GET_VOLUME_FROM_OBJECT(&uVar6), 1, true);
				SET_ACTOR_FACE_STYLE(&iVar5, 0);
				TASK_FACE_ACTOR(&iVar5, &Global_54076, 1, 3212836864);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iVar5, &Global_54076, -1f, 0);
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar6, &uVar1);
			}
			bVar4++;
		}
		DESTROY_OBJECTSET(&uVar1);
	}
	return;
}

void Function_558(var uParam0, bool bParam1) //Position: 0x1FB59 / 129881
{
	char* cVar0[64];
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		vLocal_1702[bParam13] = &uParam0;
		strcpy(&cVar0, "leftdyna", 64);
		stradd(&cVar0, INT_TO_STRING(bParam1), 64);
		*(&vLocal_1702[bParam13] + 8) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &cLocal_948, &cVar0, "p_gen_dynamite02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&vLocal_1702[bParam13] + 8, &uParam0, 0);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(&vLocal_1702[bParam13] + 8, 0);
		SET_OBJECT_COLLIDE_WITH_WORLD(&vLocal_1702[bParam13] + 8, 0);
		ATTACH_OBJECTS_USING_LOCATOR(&vLocal_1702[bParam13] + 8, &uParam0, "wrist_l_Attachment", "grab", 4294967295);
		strcpy(&cVar0, "nrightdyna", 64);
		stradd(&cVar0, INT_TO_STRING(bParam1), 64);
		*(&vLocal_1702[bParam13] + 16) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &cLocal_948, &cVar0, "p_gen_dynamite02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&vLocal_1702[bParam13] + 16, &Global_54076, 0);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(&vLocal_1702[bParam13] + 16, 0);
		SET_OBJECT_COLLIDE_WITH_WORLD(&vLocal_1702[bParam13] + 16, 0);
		ATTACH_OBJECTS_USING_LOCATOR(&vLocal_1702[bParam13] + 16, &uParam0, "wrist_r_Attachment", "grab", 4294967295);
		RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(&uParam0, "dynamite", 0);
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "dynamite/Mex_Hold");
		SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, false);
	}
	return;
}

bool Function_559(struct<2> Param0, int iParam2) //Position: 0x1FCF7 / 130295
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
	while (bVar0 < (GET_NUM_PATH_POINTS(&iParam2) - 1))
	{
		GET_PATH_POINT(&iParam2, bVar0, &Var1);
		bVar5 = VDIST(Param0, Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

bool Function_560(int iParam0, bool bParam1) //Position: 0x1FD4C / 130380
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
		Function_302(&iParam0);
		bVar5 = VDIST(Function_302(&iParam0), Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

void Function_561() //Position: 0x1FDA3 / 130467
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTORSET_VALID(&iLocal_4 + 1256))
	{
		Function_421();
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 1264))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1264, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &uVar1, *(&iLocal_4 + 3152[bVar03]), 1, 1, true);
			GIVE_WEAPON_TO_ACTOR(&uVar1, 19, false, 1, 1);
			TASK_CROUCH(&uVar1, -1.0f);
			Function_404(&uVar1, &bLocal_1521, 2);
			MEMORY_ALLOW_SHOOTING(&uVar1, false);
			MEMORY_ATTACK_ON_SIGHT(&uVar1, 0);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, 75.0f);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 270.0f);
			SET_ACTOR_VISION_MAX_RANGE(&uVar1, 200.0f, 1);
			ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_4 + 1400[bVar0]);
			AI_SET_NAV_PATHFINDING_ENABLED(&uVar1, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar1, 0);
		}
		bVar0++;
	}
	return;
}

int Function_562() //Position: 0x1FE78 / 130680
{
	Function_339(&iLocal_4 + 224, 521, 2, 0);
	Function_339(&iLocal_4 + 224, 539, 2, 0);
	Function_339(&iLocal_4 + 224, 540, 2, 0);
	Function_339(&iLocal_4 + 224, 533, 2, 0);
	Function_339(&iLocal_4 + 224, 534, 2, 0);
	Function_339(&iLocal_4 + 224, 536, 2, 0);
	Function_339(&iLocal_4 + 224, 537, 2, 0);
	Function_339(&iLocal_4 + 224, 538, 2, 0);
	if (Function_330(&iLocal_4 + 224))
	{
		return 1;
	}
	return 0;
}

void Function_563() //Position: 0x1FEF3 / 130803
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(&cLocal_1523))
	{
		if (SQUAD_GET_SIZE(&cLocal_1523) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&cLocal_1523))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&cLocal_1523, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (DECOR_CHECK_EXIST(&iVar1, "riggerindex"))
					{
						bVar2 = DECOR_GET_INT(&iVar1, "riggerindex");
						switch (bVar2)
						{
							case 0x00000001:
								Function_564(&iVar1, &uLocal_1688, &iLocal_1529, &Local_1601);
								break;
							
							case 0x00000002:
								Function_564(&iVar1, &uLocal_1690, &iLocal_1531, &Local_1604);
								break;
							
							case 0x00000003:
								Function_564(&iVar1, &uLocal_1692, &iLocal_1533, &Local_1607);
								break;
							
							case 0x00000004:
								Function_564(&iVar1, &uLocal_1694, &iLocal_1535, &Local_1610);
								break;
							
							case 0x00000005:
								Function_564(&iVar1, &uLocal_1696, &iLocal_1537, &Local_1613);
								break;
							}
						}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_564(int iParam0, var uParam1, var uParam2, struct<2> Param3) //Position: 0x1FFE7 / 131047
{
	struct<9> Var0;
	bool bVar9;
	struct<2> Var10;
	struct<2> Var12;
	struct<2> Var14;
	struct<2> Var16;
	
	uParam2 = &uParam2;
	if (IS_ACTOR_VALID(&iParam0) && DECOR_CHECK_EXIST(&iParam0, "riggerindex"))
	{
		uParam1 = &uParam1;
		vVar0 = Vector(0.0f, 0.0f, 0.0f);
		vVar0 = DECOR_GET_FLOAT(&iParam0, "original_x");
		vVar0.f_4 = DECOR_GET_FLOAT(&iParam0, "original_y");
		vVar0.f_8 = DECOR_GET_FLOAT(&iParam0, "original_z");
		uVar2 = Vector(0.0f, 0.0f, 0.0f);
		if (!DECOR_CHECK_EXIST(&iParam0, "rigtaskseq01"))
		{
			DECOR_SET_BOOL(&iParam0, "rigtaskseq01", true);
		}
		else if (!DECOR_CHECK_EXIST(&iParam0, "rigtaskseq02") && DECOR_CHECK_EXIST(&iParam0, "rigtaskseq01"))
		{
			if (StackVal && !Function_488(!Function_565(StackVal, &cLocal_1523, Param3, 2.0f), &Global_54076, Param3, 1.0f))
			{
				Function_302(&iParam0);
				if (VDIST(Function_302(&iParam0), Param3) < 10.0f)
				{
					TASK_GO_TO_COORD(&iParam0, &Param3, 2);
				}
				else
				{
					TASK_GO_TO_COORD(&iParam0, &Param3, 1);
				}
				AI_GOAL_LOOK_CLEAR(&iParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
				DECOR_SET_BOOL(&iParam0, "rigtaskseq02", true);
			}
			else if (!GET_TASK_STATUS(&iParam0, 66) != 1)
			{
				Function_302(&iParam0);
				Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Function_302(&iParam0), Param3, StackVal);
				Var4 = Vector(Var4, StackVal, StackVal) / Vector(2.0f, 2.0f, 2.0f);
				Function_302(&iParam0);
				Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Function_302(&iParam0), StackVal);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iParam0, &Var6, Function_316(1, &iParam0, Var6));
			}
		}
		else if (DECOR_CHECK_EXIST(&iParam0, "rigtaskseq02") && !DECOR_CHECK_EXIST(&iParam0, "rigtaskseq03"))
		{
			if (GET_TASK_STATUS(&iParam0, 13) == 1 && GET_TASK_STATUS(&iParam0, 1) != 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(&iParam0, "dynamite", 0);
				TASK_ACTION_PERFORM(&iParam0, "dynamite/Mex_Burry");
				SET_MOVER_FROZEN(&iParam0, true);
			}
			else if (GET_TASK_STATUS(&iParam0, 13) == 1)
			{
				if (GET_CURR_ACTION_NODE_PLAY_TIME(&iParam0) < 10.0f && IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "nmex_burry"))
				{
					REMOVE_ALL_OBJECT_ATTACHMENTS(&iParam0);
					DECOR_SET_BOOL(&iParam0, "rigtaskseq03", true);
				}
			}
		}
		else if (DECOR_CHECK_EXIST(&iParam0, "rigtaskseq03") && !DECOR_CHECK_EXIST(&iParam0, "rigtaskcomplete"))
		{
			if (GET_TASK_STATUS(&iParam0, 13) == 0)
			{
				SET_MOVER_FROZEN(&iParam0, false);
				bVar8 = Function_513(&iParam0);
				bVar9 = Function_512(&iParam0);
				Function_248(&bVar8);
				GET_OBJECT_RELATIVE_OFFSET(&iParam0, Function_248(&bVar8), &Var10);
				Function_248(&bVar9);
				GET_OBJECT_RELATIVE_OFFSET(&iParam0, Function_248(&bVar9), &Var14);
				Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Var14, Var10, StackVal);
				Var16 = Vector(Var16, StackVal, StackVal) / Vector(2.0f, 2.0f, 2.0f);
				GET_OBJECT_RELATIVE_POSITION(&iParam0, Var16, &Var12);
				Param3 = Var12;
				bLocal_1627 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &iLocal_4 + 3232[(DECOR_GET_INT(&iParam0, "riggerindex") - 1)3], 4, 0,5f, 20.0f, 0, 1);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam0, bLocal_1627);
				TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
				AI_GOAL_STAND_AT_COORD(&iParam0, *(&iLocal_4 + 3232[(DECOR_GET_INT(&iParam0, "riggerindex") - 1)3]), 1);
				AI_GOAL_LOOK_CLEAR(&iParam0);
				DECOR_SET_BOOL(&iParam0, "rigtaskcomplete", true);
				DECOR_REMOVE_ALL(&iParam0);
			}
		}
	}
}

bool Function_565(var uParam0, struct<2> Param1, float fParam3) //Position: 0x203BF / 132031
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_74(StackVal, Param1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_383(&uVar1);
				if (VDIST(Function_383(&uVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_566() //Position: 0x20434 / 132148
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	struct<2> Var4;
	
	if (IS_VOLUME_VALID(&uLocal_1734))
	{
		bVar0 = Function_560(&Global_54076, &iLocal_4 + 3512);
		GET_PATH_POINT(&iLocal_4 + 3512, bVar0, &Var1);
		if (DECOR_GET_INT(&uLocal_1734, "npathpoint") != bVar0)
		{
			SET_OBJECT_POSITION_ON_GROUND(&uLocal_1734, Var1);
			DECOR_SET_INT(&uLocal_1734, "npathpoint", bVar0);
		}
		if (bVar0 >= 0)
		{
			GET_PATH_POINT(&iLocal_4 + 3512, (bVar0 - 1), &Var1);
		}
		if (DECOR_GET_INT(&uLocal_1736, "npathpoint") != (bVar0 - 1))
		{
			SET_OBJECT_POSITION_ON_GROUND(&uLocal_1736, Var1);
			DECOR_SET_INT(&uLocal_1736, "npathpoint", (bVar0 - 1));
		}
	}
	if (IS_VOLUME_VALID(&uLocal_1736))
	{
		bVar3 = Function_560(&Global_54076, &iLocal_4 + 3504);
		GET_PATH_POINT(&iLocal_4 + 3504, bVar3, &Var4);
		if (DECOR_GET_INT(&uLocal_1738, "npathpoint") != bVar3)
		{
			SET_OBJECT_POSITION_ON_GROUND(&uLocal_1738, Var4);
			DECOR_SET_INT(&uLocal_1738, "npathpoint", bVar3);
		}
		if (bVar3 >= 0)
		{
			GET_PATH_POINT(&iLocal_4 + 3504, (bVar3 - 1), &Var4);
		}
		if (DECOR_GET_INT(&uLocal_1740, "npathpoint") != (bVar3 - 1))
		{
			SET_OBJECT_POSITION_ON_GROUND(&uLocal_1740, Var4);
			DECOR_SET_INT(&uLocal_1740, "npathpoint", (bVar3 - 1));
		}
		if (bVar3 <= (GET_NUM_PATH_POINTS(&iLocal_4 + 3504) - 2))
		{
			GET_PATH_POINT(&iLocal_4 + 3504, bVar3 + 1, &Var4);
		}
		if (DECOR_GET_INT(&uLocal_1742, "npathpoint") != bVar3 + 1)
		{
			SET_OBJECT_POSITION_ON_GROUND(&uLocal_1742, Var4);
			DECOR_SET_INT(&uLocal_1742, "npathpoint", bVar3 + 1);
		}
	}
	return;
}

void Function_567() //Position: 0x205FD / 132605
{
	if (!DECOR_CHECK_EXIST(&cLocal_948, "alertedconvoy"))
	{
		if (iLocal_963 >= 9)
		{
			Function_563();
		}
		if (!Function_474(&iLocal_892 + 96[02], 1, 1, 4294967295))
		{
			Function_241("Rebel04_fail_wagon_broke");
			bLocal_977 = true;
			return;
		}
		if (Function_572() && !GET_WEAPON_IN_HAND(&Global_54076) != 23)
		{
			DECOR_SET_FLOAT(&cLocal_948, "alertedconvoy", GET_CURRENT_GAME_TIME());
			return;
		}
		if (Function_475(&iLocal_1202, &iLocal_4 + 1480, &iLocal_4 + 1488, "Rebel04_vol_warning", "Rebel04_vol_fail", &bLocal_977, 1, &cLocal_948, &iLocal_4, 330, 1))
		{
			return;
		}
		if (Function_570(&iLocal_989, "Rebel04_assaulted_luisa", &fLocal_1210, &bLocal_977, 1, 0x41200000, 1, 0, 1))
		{
			return;
		}
		if (Function_569(&iLocal_4 + 960, "Rebel04_assaulted_rebels", &fLocal_1210, &bLocal_977, 1, 0x41200000, 1, 0, 1))
		{
			return;
		}
		if (SQUAD_IS_VALID(&cLocal_1523))
		{
			if (Function_569(&cLocal_1523, "Rebel04_assaulted_rebels", &fLocal_1210, &bLocal_977, 1, 0x41200000, 1, 0, 1))
			{
				return;
			}
		}
		if (IS_OBJECTSET_VALID(&uLocal_1686))
		{
			if (Function_568(&uLocal_1686, "Rebel04_assaulted_rebels", &fLocal_1210, &bLocal_977, 1, 0x41200000, 1, 0, 1))
			{
				return;
			}
		}
	}
	if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "alertedconvoy")) < 1.0f)
	{
		Function_241("Rebel04_fail_convoy_alerted");
		bLocal_977 = true;
	}
	return;
}

bool Function_568(var uParam0, char* cParam1, float fParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2080C / 133132
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
			if (IS_OBJECT_VALID(&bVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&bVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (Function_570(&uVar2, &cParam1, &fParam2, &uParam3, &iParam4, &fParam5, &bParam6, &bParam7, &bParam8))
					{
						return 1;
					}
				}
			}
			bVar0++;
		}
	}
	else if (&bParam7)
	{
	}
	return 0;
}

bool Function_569(var uParam0, char* cParam1, float fParam2, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7, bool bParam8) //Position: 0x20889 / 133257
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (Function_570(&uVar1, &cParam1, &fParam2, &iParam3, &iParam4, &fParam5, &iParam6, &bParam7, &bParam8))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	else if (&bParam7)
	{
	}
	return 0;
}

bool Function_570(var uParam0, char* cParam1, float fParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x208F4 / 133364
{
	if (uParam3 == 1)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_571(&uParam0, &cParam1, &fParam2, &uParam3, &iParam4, &fParam5, &uParam6, 0);
	}
	else if (&bParam7)
	{
	}
	if (uParam3 == 1)
	{
		return 1;
	}
	if (&bParam8)
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			if (!GET_ACTORS_HORSE(&uParam0) != GET_MOUNT(&uParam0))
			{
				SET_ACTORS_HORSE(&uParam0, GET_MOUNT(&uParam0));
			}
		}
		if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&uParam0)))
		{
			Function_571(GET_ACTORS_HORSE(&uParam0), &cParam1, &fParam2, &uParam3, &iParam4, &fParam5, &uParam6, 1);
		}
		else if (&bParam7)
		{
		}
	}
	return uParam3;
}

void Function_571(bool bParam0, char* cParam1) //Position: 0x209A3 / 133539
{
	char* cVar0[32];
	char* cVar8[32];
	var uVar16[10];
	int iVar27;
	int iVar28;
	char* cVar29[32];
	var uVar37[10];
	int iVar48;
	int iVar49;
	char* cVar50[32];
	
	if ((uParam6 && GET_WEAPON_IN_HAND(&Global_54076) != 21) && GET_LAST_ATTACKER(&bParam0) != &Global_54076)
	{
		uParam3 = 1;
		if (!&bParam7)
		{
			Function_241(&cParam1);
		}
		else
		{
			strcpy(&cVar0, &cParam1, 32);
			stradd(&cVar0, "_horse", 32);
			Function_241(&cVar0);
		}
		return;
	}
	if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bParam0)
	{
		if ((uParam6 && GET_WEAPON_IN_HAND(&Global_54076) != 21) || IS_ACTOR_DEAD(&bParam0))
		{
			uParam3 = 1;
			if (!&bParam7)
			{
				Function_241(&cParam1);
			}
			else
			{
				strcpy(&cVar8, &cParam1, 32);
				stradd(&cVar8, "_horse", 32);
				Function_241(&cVar8);
			}
			return;
		}
		iVar27 = 0;
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= 10)
		{
			if ((fParam2[iVar28] + &fParam5) <= GET_CURRENT_GAME_TIME() && fParam2[iVar28] < 0.0f)
			{
				uVar16[iVar27] = fParam2[iVar28];
				iVar27++;
			}
			fParam2[iVar28] = -1.0f;
			iVar28++;
		}
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= iVar27)
		{
			fParam2[iVar28] = uVar16[iVar28];
			iVar28++;
		}
		fParam2[iVar27] = GET_CURRENT_GAME_TIME();
		iVar27++;
		CLEAR_LAST_ATTACK(&Global_54076);
		if (iVar27 <= &iParam4 && fParam2[(iVar27 - 1)] > (fParam2[0] + &fParam5))
		{
			uParam3 = 1;
			if (!&bParam7)
			{
				Function_241(&cParam1);
			}
			else
			{
				strcpy(&cVar29, &cParam1, 32);
				stradd(&cVar29, "_horse", 32);
				Function_241(&cVar29);
			}
		}
	}
	else if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
	{
		if (GET_LAST_ATTACK_TARGET(GET_MOUNT(&Global_54076)) == &bParam0)
		{
			iVar48 = 0;
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= 10)
			{
				if ((fParam2[iVar49] + &fParam5) <= GET_CURRENT_GAME_TIME() && fParam2[iVar49] < 0.0f)
				{
					uVar37[iVar48] = fParam2[iVar49];
					iVar48++;
				}
				fParam2[iVar49] = -1.0f;
				iVar49++;
			}
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= iVar48)
			{
				fParam2[iVar49] = uVar37[iVar49];
				iVar49++;
			}
			fParam2[iVar48] = GET_CURRENT_GAME_TIME();
			iVar48++;
			CLEAR_LAST_ATTACK(GET_MOUNT(&Global_54076));
			if (iVar48 <= &iParam4 && fParam2[(iVar48 - 1)] > (fParam2[0] + &fParam5))
			{
				uParam3 = 1;
				if (!&bParam7)
				{
					Function_241(&cParam1);
				}
				else
				{
					strcpy(&cVar50, &cParam1, 32);
					stradd(&cVar50, "_horse", 32);
					Function_241(&cVar50);
				}
			}
		}
	}
}

int Function_572() //Position: 0x20C2A / 134186
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (IS_LAYOUTREF_VALID(&cLocal_948))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&cLocal_948);
		ITERATE_IN_LAYOUT(&uVar0, GET_EVENT_LAYOUT());
		uVar1 = START_OBJECT_ITERATOR(&uVar0);
		while (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_EVENT_FROM_OBJECT(&uVar1);
			if (IS_EVENT_VALID(&uVar2))
			{
				if (GET_EVENT_TYPE(&uVar2) != 17 || GET_EVENT_TYPE(&uVar2) != 91)
				{
					DESTROY_ITERATOR(&uVar0);
					return 1;
				}
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return 0;
}

void Function_573() //Position: 0x20CA2 / 134306
{
	if (iLocal_963 < 6 && iLocal_963 > 105)
	{
		if (iLocal_963 < 8)
		{
			Function_601();
			if (bLocal_1668 && !iLocal_1669)
			{
				iLocal_1669 = 1;
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_226(&iLocal_1194);
				iLocal_963 = 9;
			}
		}
		Function_595();
		Function_594(&iLocal_1202, 100.0f, 200.0f, &iLocal_989, "Rebel04_obj_return", "Rebel04_too_far", &bLocal_977, 0, &iLocal_4, &cLocal_948, 325, 1);
	}
	switch (iLocal_963)
	{
		case 0x00000000:
			Function_468(0);
			SET_ACTOR_HEALTH(&iLocal_989, GET_ACTOR_MAX_HEALTH(&iLocal_989));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (Function_291(&Local_950))
			{
				TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Global_54076, &iLocal_4 + 1584[0], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_989, &iLocal_4 + 1584[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
				Function_226(&iLocal_1194);
				iLocal_963 = 1;
			}
			else
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 2;
			}
			break;
		
		case 0x00000002:
			Function_247(bLocal_962);
			Function_451(StackVal, Function_247(bLocal_962), bLocal_962, Global_46746[2], Function_250(bLocal_962), 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!IS_ACTORSET_VALID(&iLocal_892 + 120))
			{
				Function_347();
			}
			bLocal_1505 = &iLocal_892 + 96[02];
			Function_459(&bLocal_1505);
			Function_355(&(Local_1297[115]), &bLocal_1505, "Wagon", 0, 0x5f5e100, 1);
			Function_362();
			Function_593();
			if (IS_ACTOR_VALID(&bLocal_1505))
			{
			}
			if (!GET_TASK_STATUS(&iLocal_989, 0) != 1)
			{
				bLocal_1627 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3520, 2, 1, 0, 1, false);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &bLocal_1505, 0, 2, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_989, bLocal_1627);
				TASK_SEQUENCE_RELEASE(bLocal_1627, 1);
				ENABLE_VEHICLE_SEAT(&bLocal_1505, false, 0);
			}
			Function_449(8, 1, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_989, true);
			FORCE_LOOK_AT_ACTOR(&iLocal_989, &Global_54076, 3212836864);
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1505, -1.0f, -1.0f, 1, 1, 1);
			Function_591();
			uLocal_1623 = Function_590(&cLocal_948, Function_54(), &iLocal_4 + 1312[0], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1623)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1623));
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			bLocal_1668 = false;
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
			Function_226(&iLocal_1194);
			iLocal_963 = 6;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(&iLocal_989))
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				Function_589();
				Function_226(&iLocal_1194);
				iLocal_963 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_286(&iLocal_1194) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						Function_425("Rebel04_obj01c", 7,5f, 1, 2, 0, 0, 0, 0);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
					{
						Function_425("Rebel04_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
					}
					else
					{
						Function_425("Rebel04_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
					}
				}
				Function_227(&iLocal_1662, 20.0f);
				Function_226(&iLocal_1194);
				Function_226(&iLocal_1202);
				Function_226(&iLocal_1206);
				iLocal_963 = 8;
			}
			break;
		
		case 0x00000008:
			Function_578();
			Function_575();
			if (GATEWAY_UPDATE(&uLocal_1623))
			{
				Function_224(&uLocal_1623);
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
				{
					uLocal_1698 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
					FREE_FROM_HOGTIE(&uLocal_1698);
					TELEPORT_ACTOR(&uLocal_1698, &iLocal_4 + 1624[43], 1, 1, 1);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
				}
				Function_226(&iLocal_1194);
				iLocal_963 = 105;
			}
			break;
		
		case 0x00000009:
			if (HUD_IS_FADED())
			{
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
				Function_383(&Global_54076);
				Function_423(&iLocal_4 + 1312[0]);
				Function_574(VDIST(Function_383(&Global_54076), Function_423(&iLocal_4 + 1312[0])));
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_SMALL_TEXT();
				SET_ACTOR_SPEED(&iLocal_989, 0.0f);
				TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(&iLocal_989, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 96[02], *(&iLocal_4 + 2304[13]), 1, 1, true);
				if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], false) != &iLocal_989)
				{
					SET_ACTOR_IN_VEHICLE(&iLocal_989, &iLocal_892 + 96[02], false);
				}
				if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_892 + 96[02], true) != &Global_54076)
				{
					SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_892 + 96[02], true);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				HUD_ENABLE(0);
				Function_188(1, 0, 1);
				Function_463(9);
				Function_226(&iLocal_1194);
				iLocal_963 = 10;
			}
			break;
		
		case 0x0000000A:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_989, &iLocal_4 + 3424, 4, 0, 0, 1, false);
				AI_ACTOR_FORCE_SPEED(&iLocal_989, 4);
				Function_226(&iLocal_1194);
				iLocal_963 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_286(&iLocal_1194) < 1.0f)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&Global_54076);
				Function_226(&iLocal_1194);
				iLocal_963 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				HUD_ENABLE(1);
				Function_226(&iLocal_1194);
				iLocal_963 = 8;
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_286(&iLocal_1194) < 5.0f)
			{
				Function_226(&iLocal_1194);
				iLocal_963 = 106;
			}
			break;
		
		case 0x0000006A:
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_989, 2);
			CLEAR_PLAYER_CONTROL_HORSE_FOLLOW(0);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			iLocal_992[0] = 1;
			Function_226(&iLocal_1194);
			bLocal_962 = true;
			iLocal_963 = 2;
			break;
	}
	return;
}

void Function_574(bool bParam0) //Position: 0x2128B / 135819
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_575() //Position: 0x212A3 / 135843
{
	bool bVar0;
	var uVar1;
	
	if ((StackVal || Function_488(IS_ACTOR_IN_VOLUME(&iLocal_989, &iLocal_4 + 1312[1]), &Global_54076, *(&iLocal_4 + 2304[03]), 200.0f)) && Function_562())
	{
		if (!IS_ACTORSET_VALID(&iLocal_4 + 1256))
		{
			Function_421();
			Function_561();
			Function_463(9);
		}
		if (!SQUAD_IS_VALID(&iLocal_4 + 960))
		{
			Function_461();
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 960))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 960, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					TASK_CROUCH(&uVar1, -1.0f);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar1, 1);
				}
				bVar0++;
			}
			Function_355(&(Local_1297[315]), &iLocal_4 + 960, "RebelSoldier", 0, 0x5f5e100, 1);
		}
	}
	if ((((Function_488(StackVal, &Global_54076, *(&iLocal_4 + 2304[03]), 50.0f) && (IS_ACTOR_RIDING(&Global_54076) || IS_ACTOR_RIDING_VEHICLE(&Global_54076))) && Function_577(&Global_54076, &iLocal_989, 20.0f)) && !DECOR_CHECK_EXIST(&cLocal_948, "arrivespot")) && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Function_576();
		AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
		FORCE_VEHICLE_CINEMATIC_CAMERA(0);
		DECOR_SET_BOOL(&cLocal_948, "arrivespot", true);
	}
	return;
}

void Function_576() //Position: 0x213DA / 136154
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_ArriveSpot", "Rebel04_ArriveSpot", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_577(var uParam0, int iParam1, float fParam2) //Position: 0x21427 / 136231
{
	float fVar0;
	
	fVar0 = Function_533(&uParam0, &iParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_578() //Position: 0x21446 / 136262
{
	var uVar0;
	var uVar2;
	float fVar4;
	float fVar5;
	var uVar6;
	
	if (IS_ACTOR_RIDING(&Global_54076) || IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		if (Function_393(&Global_54076, &iLocal_989, 25.0f) && !Function_140())
		{
			if (!Function_288(&iLocal_1583))
			{
				Function_428(&iLocal_1583);
			}
			if (!DECOR_CHECK_EXIST(&cLocal_948, "nearfinishbanter"))
			{
				GET_VOLUME_CENTER(&iLocal_4 + 1312[1], &uVar0);
				Function_302(&iLocal_989);
				uVar2 = Function_302(&iLocal_989);
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 3424, &uVar0, &uVar2, &fVar4, &fVar5, &uVar6);
				if (fVar5 < fVar4 && Function_393(&Global_54076, &iLocal_989, 25.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_286(&iLocal_1583) < 5.0f)
						{
							Function_588();
							DECOR_SET_BOOL(&cLocal_948, "nearfinishbanter", true);
						}
					}
					else if (!DECOR_CHECK_EXIST(&cLocal_948, "nearfinishbanter"))
					{
						Function_226(&iLocal_1583);
						ABORT_SCRIPTED_CONVERSATION(1);
					}
				}
				if (!bLocal_1668)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_286(&iLocal_1583) < 10.0f)
						{
							if (!DECOR_CHECK_EXIST(&cLocal_948, "firstbanter") && !AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_V1_AA"))
							{
								Function_587();
								DECOR_SET_BOOL(&cLocal_948, "firstbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_v2_AA") && !DECOR_CHECK_EXIST(&cLocal_948, "secondbanter"))
							{
								Function_586();
								DECOR_SET_BOOL(&cLocal_948, "secondbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_v4_AA") && !DECOR_CHECK_EXIST(&cLocal_948, "fourthbanter"))
							{
								Function_585();
								DECOR_SET_BOOL(&cLocal_948, "fourthbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_v3_AA") && !DECOR_CHECK_EXIST(&cLocal_948, "thirdbanter"))
							{
								Function_584();
								DECOR_SET_BOOL(&cLocal_948, "thirdbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_NoTalkAnymore"))
							{
							}
							else if (!DECOR_CHECK_EXIST(&cLocal_948, "notalk"))
							{
								Function_583();
								DECOR_SET_BOOL(&cLocal_948, "notalk", true);
							}
						}
					}
					else
					{
						Function_226(&iLocal_1583);
					}
				}
			}
		}
	}
	else if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
	{
		if (!Function_577(&Global_54076, &iLocal_989, 25.0f))
		{
			if (!DECOR_CHECK_EXIST(&cLocal_948, "ranoff") && !DECOR_CHECK_EXIST(&cLocal_948, "inwagononce"))
			{
				Function_582();
				DECOR_SET_BOOL(&cLocal_948, "ranoff", true);
			}
		}
		else if (Function_286(&iLocal_1662) < 20.0f)
		{
			if (!DECOR_CHECK_EXIST(&cLocal_948, "thisorthat") && !DECOR_CHECK_EXIST(&cLocal_948, "inwagononce"))
			{
				Function_581();
				DECOR_SET_BOOL(&cLocal_948, "thisorthat", true);
				Function_226(&iLocal_1662);
			}
			else if (DECOR_CHECK_EXIST(&cLocal_948, "inwagononce"))
			{
				Function_580();
				Function_226(&iLocal_1662);
			}
			else
			{
				Function_579();
				Function_226(&iLocal_1662);
			}
		}
	}
	else if (Function_286(&iLocal_1662) < 5.0f)
	{
		ABORT_SCRIPTED_CONVERSATION(1);
	}
	return;
}

void Function_579() //Position: 0x2181B / 137243
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_waitingForGetOn", "Rebel04_waitingForGetOn", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_580() //Position: 0x21872 / 137330
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_WaitingOnJonChoice", "Rebel04_WaitingOnJonChoice", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x218CF / 137423
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_ThisOrThat", "Rebel04_ThisOrThat", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_582() //Position: 0x2191C / 137500
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_JonWalkOff", "Rebel04_JonWalkOff", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_583() //Position: 0x21969 / 137577
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NoTalkAnymore", "Rebel04_NoTalkAnymore", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_584() //Position: 0x219BC / 137660
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AA", "Rebel04_BanterBush_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AB", "Rebel04_BanterBush_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AC", "Rebel04_BanterBush_v3_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AD", "Rebel04_BanterBush_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AE", "Rebel04_BanterBush_v3_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AF", "Rebel04_BanterBush_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AG", "Rebel04_BanterBush_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AH1", "Rebel04_BanterBush_v3_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AH2", "Rebel04_BanterBush_v3_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AI1", "Rebel04_BanterBush_v3_AI1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AI2", "Rebel04_BanterBush_v3_AI2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AI3", "Rebel04_BanterBush_v3_AI3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AJ", "Rebel04_BanterBush_v3_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AK1", "Rebel04_BanterBush_v3_AK1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AK2", "Rebel04_BanterBush_v3_AK2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AK3", "Rebel04_BanterBush_v3_AK3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AL", "Rebel04_BanterBush_v3_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AM", "Rebel04_BanterBush_v3_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AN1", "Rebel04_BanterBush_v3_AN1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AN2", "Rebel04_BanterBush_v3_AN2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AO", "Rebel04_BanterBush_v3_AO", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AP1", "Rebel04_BanterBush_v3_AP1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AP2", "Rebel04_BanterBush_v3_AP2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AQ", "Rebel04_BanterBush_v3_AQ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AR1", "Rebel04_BanterBush_v3_AR1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AR2", "Rebel04_BanterBush_v3_AR2", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_585() //Position: 0x22058 / 139352
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AA", "Rebel04_BanterBush_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AB", "Rebel04_BanterBush_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AC1", "Rebel04_BanterBush_v4_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AC2", "Rebel04_BanterBush_v4_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AD", "Rebel04_BanterBush_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AE1", "Rebel04_BanterBush_v4_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AE2", "Rebel04_BanterBush_v4_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AF", "Rebel04_BanterBush_v4_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AG", "Rebel04_BanterBush_v4_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AH", "Rebel04_BanterBush_v4_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AI1", "Rebel04_BanterBush_v4_AI1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AI2", "Rebel04_BanterBush_v4_AI2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AI3", "Rebel04_BanterBush_v4_AI3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AJ", "Rebel04_BanterBush_v4_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AK", "Rebel04_BanterBush_v4_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AL1", "Rebel04_BanterBush_v4_AL1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AL2", "Rebel04_BanterBush_v4_AL2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AM", "Rebel04_BanterBush_v4_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AN", "Rebel04_BanterBush_v4_AN", true, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_586() //Position: 0x22531 / 140593
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AA", "Rebel04_BanterBush_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AB", "Rebel04_BanterBush_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AC", "Rebel04_BanterBush_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AD", "Rebel04_BanterBush_v2_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AE", "Rebel04_BanterBush_v2_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AF", "Rebel04_BanterBush_v2_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AG", "Rebel04_BanterBush_v2_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AH1", "Rebel04_BanterBush_v2_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AH2", "Rebel04_BanterBush_v2_AH2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AI", "Rebel04_BanterBush_v2_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AJ", "Rebel04_BanterBush_v2_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AK", "Rebel04_BanterBush_v2_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AL", "Rebel04_BanterBush_v2_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AM", "Rebel04_BanterBush_v2_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AN", "Rebel04_BanterBush_v2_AN", true, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_587() //Position: 0x22900 / 141568
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AA", "Rebel04_BanterBush_V1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AB", "Rebel04_BanterBush_V1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AC", "Rebel04_BanterBush_V1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AD1", "Rebel04_BanterBush_V1_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AD2", "Rebel04_BanterBush_V1_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AD3", "Rebel04_BanterBush_V1_AD3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AE", "Rebel04_BanterBush_V1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AF", "Rebel04_BanterBush_V1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AG", "Rebel04_BanterBush_V1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AH1", "Rebel04_BanterBush_V1_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AH2", "Rebel04_BanterBush_V1_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AI1", "Rebel04_BanterBush_V1_AI1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AI2", "Rebel04_BanterBush_V1_AI2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AJ", "Rebel04_BanterBush_V1_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AK", "Rebel04_BanterBush_V1_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AL", "Rebel04_BanterBush_V1_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AM", "Rebel04_BanterBush_V1_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AN", "Rebel04_BanterBush_V1_AN", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AO", "Rebel04_BanterBush_V1_AO", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AP1", "Rebel04_BanterBush_V1_AP1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AP2", "Rebel04_BanterBush_V1_AP2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AQ1", "Rebel04_BanterBush_V1_AQ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AQ2", "Rebel04_BanterBush_V1_AQ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AR1", "Rebel04_BanterBush_V1_AR1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AR2", "Rebel04_BanterBush_V1_AR2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AS", "Rebel04_BanterBush_V1_AS", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AT1", "Rebel04_BanterBush_V1_AT1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AT2", "Rebel04_BanterBush_V1_AT2", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_588() //Position: 0x2301C / 143388
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AA", "Rebel04_NearBushBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_NearBushBanter_v1_AB", "Rebel04_NearBushBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AC1", "Rebel04_NearBushBanter_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AC2", "Rebel04_NearBushBanter_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_NearBushBanter_v1_AD", "Rebel04_NearBushBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AE1", "Rebel04_NearBushBanter_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AE2", "Rebel04_NearBushBanter_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_NearBushBanter_v1_AF", "Rebel04_NearBushBanter_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AG", "Rebel04_NearBushBanter_v1_AG", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_589() //Position: 0x232BD / 144061
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_Ready2Leave", "Rebel04_Ready2Leave", false, 1, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_590(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x2330C / 144140
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

void Function_591() //Position: 0x2339D / 144285
{
	if (!IS_ACTORSET_VALID(&iLocal_892 + 192))
	{
		Function_592();
	}
	TASK_USE_GRINGO(&iLocal_892 + 136[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3368), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO(&iLocal_892 + 136[22], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3376), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO(&iLocal_892 + 136[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3384), "UseCase1", 4294967295, 1);
	Function_355(&(Local_1297[215]), &iLocal_892 + 200, "RebelSoldier", 0, 0x5f5e100, 1);
	return;
}

void Function_592() //Position: 0x2343F / 144447
{
	*(&iLocal_892 + 192) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_892, "CutsceneActorsset", 0);
	*(&iLocal_892 + 200) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_892, "CutsceneActors"));
	*(&iLocal_892 + 136[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_892, "GuardSitting", 535, Vector(-2291,46f, 21,84f, 4961,65f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_892 + 192, &iLocal_892 + 136[02]);
	SQUAD_JOIN(&iLocal_892 + 136[02], &iLocal_892 + 200);
	*(&iLocal_892 + 136[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_892, "Guard02", 537, Vector(-2293,83f, 21,84f, 4963,32f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_892 + 192, &iLocal_892 + 136[12]);
	SQUAD_JOIN(&iLocal_892 + 136[12], &iLocal_892 + 200);
	*(&iLocal_892 + 136[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_892, "Guard01", 533, Vector(-2294,88f, 21,84f, 4962,58f), Vector(0.0f, 0.0f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_892 + 192, &iLocal_892 + 136[22]);
	SQUAD_JOIN(&iLocal_892 + 136[22], &iLocal_892 + 200);
	return;
}

void Function_593() //Position: 0x2358F / 144783
{
	if (IS_OBJECTSET_VALID(&iLocal_1517))
	{
		Function_443(&iLocal_1517);
		DESTROY_OBJECTSET(&iLocal_1517);
	}
	if (IS_OBJECTSET_VALID(&iLocal_1519))
	{
		Function_443(&iLocal_1519);
		DESTROY_OBJECTSET(&iLocal_1519);
	}
	if (IS_ACTOR_VALID(&Local_1485 + 8))
	{
		DESTROY_ACTOR(&Local_1485 + 8);
	}
	if (IS_ACTOR_VALID(&Local_1495 + 8))
	{
		DESTROY_ACTOR(&Local_1495 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1485 + 16))
	{
		DESTROY_OBJECT(&Local_1485 + 16);
	}
	if (IS_OBJECT_VALID(&Local_1485 + 24))
	{
		DESTROY_OBJECT(&Local_1485 + 24);
	}
	if (IS_OBJECT_VALID(&Local_1485 + 32))
	{
		DESTROY_OBJECT(&Local_1485 + 32);
	}
	if (IS_OBJECT_VALID(&Local_1495 + 16))
	{
		DESTROY_OBJECT(&Local_1495 + 16);
	}
	if (IS_OBJECT_VALID(&Local_1495 + 24))
	{
		DESTROY_OBJECT(&Local_1495 + 24);
	}
	return;
}

int Function_594(struct<2> Param0, var uParam2, int iParam3, var uParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11) //Position: 0x23656 / 144982
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_393(&Global_54076, &iParam3, uParam2))
	{
		Function_241(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_393(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_481(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&uParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_425(&uParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_480(2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_479(&uParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_479(&uParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &uParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_481(2))
	{
		Function_478(2);
		if (!Function_477())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_476();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_214(&iParam3);
				Function_450(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_479(&uParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_479(&uParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_595() //Position: 0x23814 / 145428
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&bLocal_1505))
	{
		if (GET_NUM_DRAFTED_ACTORS(&bLocal_1505) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1505))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bLocal_1505);
				if ((IS_ACTOR_VALID(&uVar1) && !HUD_IS_SHOWING_SMALL_TEXT()) && !HUD_IS_SHOWING_OBJECTIVE())
				{
					if (Function_600(&uVar1, &Global_54076))
					{
						if (GET_NUM_DRAFTED_ACTORS(&bLocal_1505) == 2)
						{
							Function_599();
						}
					}
					else if (GET_LAST_ATTACKER(&uVar1) != &Global_54076 && GET_NUM_DRAFTED_ACTORS(&bLocal_1505) != 2)
					{
						if (Function_598(GET_WEAPON_IN_HAND(&Global_54076)))
						{
							Function_597();
						}
						CLEAR_LAST_ATTACK(&uVar1);
					}
				}
				bVar0++;
			}
		}
		else
		{
			Function_596();
			Function_241("Rebel04_fail_wagon_broke");
			bLocal_977 = true;
		}
		if (!DECOR_CHECK_EXIST(&iLocal_989, "ninvehicle"))
		{
			if (IS_ACTOR_RIDING_VEHICLE(&iLocal_989))
			{
				DECOR_SET_BOOL(&iLocal_989, "ninvehicle", true);
			}
		}
		else if (!IS_ACTOR_RIDING_VEHICLE(&iLocal_989) && !GET_TASK_STATUS(&iLocal_989, 54) != 1)
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_989, &bLocal_1505, 0, 2, 0);
		}
	}
	else
	{
		Function_241("Rebel04_fail_wagon_destroyed");
		bLocal_977 = true;
	}
	return;
}

void Function_596() //Position: 0x23962 / 145762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_KillsHorsesFails", "Rebel04_KillsHorsesFails", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_597() //Position: 0x239BB / 145851
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_Shoots1WagHors", "Rebel04_Shoots1WagHors", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_598(bool bParam0) //Position: 0x23A10 / 145936
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

void Function_599() //Position: 0x23A56 / 146006
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_Kills1WagHors", "Rebel04_Kills1WagHors", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_600(int iParam0, int iParam1) //Position: 0x23AA9 / 146089
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
	{
		if (IS_ACTOR_DEAD(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_601() //Position: 0x23ADF / 146143
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	float fVar6;
	float fVar7;
	var uVar8;
	
	if (!DECOR_CHECK_EXIST(&iLocal_989, "runmovetype"))
	{
		DECOR_SET_BOOL(&iLocal_989, "runmovetype", false);
	}
	iVar0 = 1;
	GET_ACTOR_VEHICLE_STATE(&Global_54076, &iVar0, &iVar1);
	if ((GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1505, true) != &Global_54076 || iVar1 != 2) || iVar1 != 1)
	{
		if (!DECOR_CHECK_EXIST(&cLocal_948, "inwagon"))
		{
			Function_449(8, 0, 1);
			DECOR_SET_BOOL(&cLocal_948, "inwagon", true);
			DECOR_SET_BOOL(&cLocal_948, "inwagononce", true);
			AUDIO_MUSIC_SET_MOOD("JOURNEY", 0, 4294967295, 4294967295);
			STOP_FORCE_LOOK_AT_COORD(&iLocal_989);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&Global_54076);
		}
		if (IS_OBJECT_VALID(&uLocal_1623))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1623)))
			{
				ADD_BLIP_FOR_OBJECT(&uLocal_1623, 330, 0f, 2, 0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				if (iLocal_963 <= 8)
				{
					Function_602();
				}
			}
		}
	}
	else
	{
		if (DECOR_CHECK_EXIST(&cLocal_948, "inwagon"))
		{
			Function_449(8, 1, 1);
			DECOR_REMOVE(&cLocal_948, "inwagon");
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
		}
		if (IS_OBJECT_VALID(&uLocal_1623))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1623)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1623));
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Function_425("Rebel04_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
			}
		}
	}
	if (((IS_ACTOR_RIDING(&Global_54076) || IS_ACTOR_RIDING_VEHICLE(&Global_54076)) && IS_ACTOR_RIDING_VEHICLE(&iLocal_989)) && DECOR_CHECK_EXIST(&cLocal_948, "luisastopped"))
	{
		if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_577(&Global_54076, &iLocal_989, 25.0f)) && DECOR_CHECK_EXIST(&cLocal_948, "inwagononce"))
		{
			if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_GetsBakOnWags", "Rebel04_GetsBakOnWags", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				LOG_ERROR("Rebel04_GetsBakOnWags");
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_GetsBakOnHors", "Rebel04_GetsBakOnHors", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				LOG_ERROR("Rebel04_GetsBakOnHors");
			}
		}
		STOP_FORCE_LOOK_AT_COORD(&iLocal_989);
		TASK_OVERRIDE_SET_MOVETYPE(&iLocal_989, 4);
		DECOR_REMOVE(&cLocal_948, "luisastopped");
	}
	if (DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_GetsBakOnWags"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_GetsBakOnWags")) < 15.0f)
		{
			DECOR_REMOVE(&cLocal_948, "Rebel04_GetsBakOnWags");
		}
	}
	if (DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_GetsBakOnHors"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_GetsBakOnHors")) < 15.0f)
		{
			DECOR_REMOVE(&cLocal_948, "Rebel04_GetsBakOnHors");
		}
	}
	if (DECOR_CHECK_EXIST(&cLocal_948, "inwagon"))
	{
		if ((GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1505, true) != &Global_54076 && !GET_TASK_STATUS(&iLocal_989, 43) != 1) && IS_ACTOR_RIDING_VEHICLE(&iLocal_989))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_989, &iLocal_4 + 3424, 4, 0, 0, 1, false);
		}
		if (!bLocal_1668)
		{
			if (((StackVal && !Function_488(((((!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545) && IS_ACTOR_RIDING_VEHICLE(&Global_54076)) && GET_TASK_STATUS(&iLocal_989, 43) != 1) && iVar1 != 1) && !IS_ACTOR_IN_VOLUME(&iLocal_989, &iLocal_4 + 1312[1])), &Global_54076, *(&iLocal_4 + 2304[03]), 200.0f)) && IS_ACTOR_RIDING_VEHICLE(&iLocal_989)) && !DECOR_CHECK_EXIST(&cLocal_948, "nearfinishbanter"))
			{
				uLocal_1545 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, "@UI.ACCEPT", false, 0, 0, 0, 4294967295, 0);
			}
			else if ((StackVal && (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545) || Function_488(((!IS_ACTOR_RIDING_VEHICLE(&Global_54076) || iVar1 != 3) || GET_LAST_ATTACK_TARGET(&Global_54076) != &bLocal_1505), &Global_54076, *(&iLocal_4 + 2304[03]), 200.0f))) || DECOR_CHECK_EXIST(&cLocal_948, "nearfinishbanter"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
			}
			if ((((IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545) && iVar1 != 1) && !bLocal_977) && !UNK_0x062C5047("@GENERIC.USE", 1, 0)) && !UNK_0xDA674AE0("@GENERIC.USE", 1, 0))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1545))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					bLocal_1668 = true;
					Function_89(17, 1, 0, 0);
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
				}
			}
		}
	}
	else
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1545))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1545);
		}
		if ((!GET_TASK_STATUS(&iLocal_989, 43) != 1 && IS_ACTOR_RIDING_VEHICLE(&iLocal_989)) && IS_ACTOR_RIDING(&Global_54076))
		{
			if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076) && Function_577(&Global_54076, &iLocal_989, 25.0f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_JonMounts", "Rebel04_JonMounts", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&cLocal_948, "Rebel04_JonMounts", GET_CURRENT_GAME_TIME());
			}
			AUDIO_MUSIC_SET_MOOD("JOURNEY", 0, 4294967295, 4294967295);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_989, &iLocal_4 + 3424, 4, 0, 0, 1, false);
		}
		if (DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_JonMounts"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_JonMounts")) < 15.0f)
			{
				DECOR_REMOVE(&cLocal_948, "Rebel04_JonMounts");
			}
		}
		if ((((!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_RIDING_VEHICLE(&Global_54076)) && !DECOR_CHECK_EXIST(&cLocal_948, "luisastopped")) && IS_ACTOR_RIDING_VEHICLE(&iLocal_989)) && DECOR_CHECK_EXIST(&cLocal_948, "inwagononce"))
		{
			DECOR_SET_BOOL(&cLocal_948, "luisastopped", false);
			TASK_OVERRIDE_SET_MOVETYPE(&iLocal_989, 5);
			if (DECOR_CHECK_EXIST(&cLocal_948, "inwagononce"))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_JonJumpsOffWag", "Rebel04_JonJumpsOffWag", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			}
		}
		if (DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_JonJumpsOffWag"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_JonJumpsOffWag")) < 15.0f)
			{
				DECOR_REMOVE(&cLocal_948, "Rebel04_JonJumpsOffWag");
			}
		}
		Function_302(&Global_54076);
		uVar2 = Function_302(&Global_54076);
		Function_302(&bLocal_1505);
		uVar4 = Function_302(&bLocal_1505);
		ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 3424, &uVar2, &uVar4, &fVar6, &fVar7, &uVar8);
		if (!DECOR_CHECK_EXIST(&bLocal_1505, "Rebel04_2FarAhead"))
		{
			if (fVar6 < (fVar7 + 30.0f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_2FarAhead", "Rebel04_2FarAhead", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&bLocal_1505, "Rebel04_2FarAhead", GET_CURRENT_GAME_TIME());
				LOG_ERROR("Rebel04_2FarAhead");
			}
		}
		else if ((fVar6 - fVar7) > 10.0f || (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bLocal_1505, "Rebel04_2FarAhead")) < 20.0f)
		{
			DECOR_REMOVE(&bLocal_1505, "Rebel04_2FarAhead");
		}
		if (!DECOR_CHECK_EXIST(&bLocal_1505, "Rebel04_WrongDir"))
		{
			if ((fVar6 + 30.0f) > fVar7)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_WrongDir", "Rebel04_WrongDir", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&bLocal_1505, "Rebel04_WrongDir", GET_CURRENT_GAME_TIME());
				LOG_ERROR("Rebel04_WrongDir");
			}
		}
		else if ((fVar7 - fVar6) > 10.0f || (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bLocal_1505, "Rebel04_WrongDir")) < 20.0f)
		{
			DECOR_REMOVE(&bLocal_1505, "Rebel04_WrongDir");
		}
		if (!DECOR_CHECK_EXIST(&bLocal_1505, "Rebel04_WrongDir") && !DECOR_CHECK_EXIST(&bLocal_1505, "Rebel04_2FarAhead"))
		{
			if (!DECOR_CHECK_EXIST(&bLocal_1505, "playergotclose"))
			{
				if ((Function_577(&Global_54076, &bLocal_1505, 10.0f) && !IS_ACTOR_RIDING(&Global_54076)) && !IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					DECOR_SET_BOOL(&bLocal_1505, "playergotclose", true);
				}
			}
			else if (!Function_577(&Global_54076, &bLocal_1505, 25.0f))
			{
				if (!DECOR_CHECK_EXIST(&bLocal_1505, "Rebel04_RunsOffInstead"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_RunsOffInstead", "Rebel04_RunsOffInstead", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&bLocal_1505, "Rebel04_RunsOffInstead", GET_CURRENT_GAME_TIME());
					LOG_ERROR("Rebel04_RunsOffInstead");
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bLocal_1505, "Rebel04_RunsOffInstead")) < 20.0f || Function_577(&Global_54076, &bLocal_1505, 10.0f))
			{
				DECOR_REMOVE(&bLocal_1505, "Rebel04_RunsOffInstead");
			}
		}
	}
	return;
}

void Function_602() //Position: 0x24679 / 149113
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_OnWagon", "Rebel04_OnWagon", false, 2, 1, 0, 1);
		Function_353(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_603() //Position: 0x246C0 / 149184
{
	switch (iLocal_963)
	{
		case 0x00000006:
			Function_627(&Local_950, 1);
			if (!Function_291(&Local_950))
			{
				(*&Global_53524 + 76)[0] = 0;
			}
			cLocal_948 = CREATE_LAYOUT(Function_54());
			Function_463(9);
			Function_626();
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_04", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((!Function_291(&Local_950) && (Local_950.f_40 >= 1 && iLocal_988 != 0)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_04/REBEL_04"))
			{
				uLocal_1232 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &cLocal_948, "Cutscene01Vol", 2,802597E-45f, Vector(-2092.0f, 16,44941f, 2604.0f), Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 50.0f, 25.0f));
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1232);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1232);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_1232, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uLocal_1232);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2291,93f, 21,84f, 4960,02f), 0.0f, 1, 1, true);
				Global_99147 = 1;
				iLocal_963 = 7;
			}
			else
			{
				iLocal_963 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_616())
				{
					if (!IS_LAYOUTREF_VALID(&iLocal_892))
					{
						Function_615();
						Function_347();
						Function_592();
					}
					else if (Function_612(StackVal, "$/cutscene/REBEL_04/REBEL_04", &uLocal_1234, *(&Global_6667[3828] + 88), 153171, 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
					{
						iLocal_963 = 8;
					}
				}
			}
			break;
		
		case 0x00000008:
			if (Function_279("$/cutscene/REBEL_04/REBEL_04", &iLocal_964, &Local_950, &bLocal_962, 78576, 152429, 61955, 57210, 56817, 152379, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_609(&uLocal_1700, 1);
				Function_226(&iLocal_1194);
				iLocal_963 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_616())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_892))
				{
					Function_615();
				}
				else if (Function_329())
				{
					if (!IS_LAYOUTREF_VALID(&iLocal_4))
					{
						Function_325();
					}
					iLocal_963 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_1192 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			SET_CRIPPLE_ENABLE(&iLocal_989, 0);
			SET_ACTOR_FACTION(&iLocal_989, 20);
			TASK_PRIORITY_SET(&iLocal_989, true);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_989, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_989, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_989, GET_ACTOR_MAX_HEALTH(&iLocal_989));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1472);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1472);
			bLocal_1525 = false;
			bLocal_1547 = false;
			bLocal_1548 = false;
			Local_1616 = Local_1616;
			Local_1616 = Vector(0.0f, 0,4f, 0.0f);
			Local_1679 = Vector(0,3f, 1.0f, 0,25f);
			uLocal_1670 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &cLocal_948, 17, 1);
			Function_428(&uLocal_1646);
			Function_428(&iLocal_1194);
			Function_428(&iLocal_1198);
			Function_428(&iLocal_1202);
			Function_428(&iLocal_1206);
			Function_428(&iLocal_1555);
			Function_428(&iLocal_1559);
			Function_428(&iLocal_1563);
			Function_428(&iLocal_1662);
			CLEAR_DECALS();
			Function_607(&uLocal_1235, &cLocal_948);
			Function_355(&(Local_1297[015]), &iLocal_989, "MexGirl", 0, 0x5f5e100, 1);
			Function_164(Global_46866[12]);
			if (iLocal_988 == 2)
			{
				Function_230();
			}
			bLocal_962 = iLocal_988;
			iLocal_963 = 0;
			Function_605(&Local_950, &bLocal_962, &iLocal_963);
			Function_604(StackVal, StackVal, StackVal, StackVal, Function_325(), Local_950);
			if (bLocal_962 != 2 && iLocal_988 == 2)
			{
				bLocal_962 = 101;
			}
			break;
	}
	return;
}

void Function_604(struct<41> Param0) //Position: 0x24A5C / 150108
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_962 = false;
			break;
		
		case 0x00000002:
			bLocal_962 = true;
			break;
		
		case 0x00000003:
			bLocal_962 = 2;
			break;
		
		case 0x00000004:
			bLocal_962 = 101;
			break;
	}
}

void Function_605(int iParam0, var uParam1, int iParam2) //Position: 0x24AA2 / 150178
{
	if (Function_291(&iParam0))
	{
		uParam1 = Function_556(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_606();
	}
	return;
}

void Function_606() //Position: 0x24ADE / 150238
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

int Function_607(struct<2>[] Param0) //Position: 0x24B2F / 150319
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_608(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_608(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_608(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_608(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_608(struct<13> Param0) //Position: 0x25208 / 152072
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

void Function_609(var uParam0, bool bParam1) //Position: 0x252D7 / 152279
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_PHYSINST_FROM_OBJECT(&uVar1);
			if (IS_PHYSINST_VALID(&uVar2))
			{
				SHOW_PHYSINST(&uVar2);
			}
		}
		bVar0++;
	}
	if (&bParam1)
	{
		DESTROY_OBJECTSET(&uParam0);
	}
	return;
}

int Function_610() //Position: 0x2533B / 152379
{
	switch (bLocal_962)
	{
		case 0x00000063:
			if (Function_329())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_325();
				}
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_611() //Position: 0x2536D / 152429
{
	return 1;
}

bool Function_612(var uParam0, var uParam1, struct<2> Param2, var uParam4, bool bParam5, float fParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, bool bParam12, var uParam13) //Position: 0x25374 / 152436
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_488(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_489()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
		if ((uParam13 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam8, &uParam9, &uParam10, &uParam11);
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
				Call_Loc(&uParam4);
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
	else if ((!Function_488(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_489()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_488(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

int Function_613() //Position: 0x25653 / 153171
{
	struct<2> Var0;
	struct<5> Var2;
	bool bVar8;
	bool bVar9;
	
	if (Function_614(&cLocal_948, &uLocal_1700, &iLocal_1070))
	{
		bVar8 = false;
		while (bVar8 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar8, &Var0, &Var2))
			{
				bVar9 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar8);
				if (Function_217(bVar9))
				{
					if (bVar9 == 830)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 136[22], Var0, 1, 1, true);
						TASK_STAND_STILL(&iLocal_892 + 136[22], -1.0f, 0, 0);
					}
					if (bVar9 == 833)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 136[12], Var0, 1, 1, true);
						TASK_STAND_STILL(&iLocal_892 + 136[12], -1.0f, 0, 0);
					}
					if (bVar9 == 834)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_892 + 136[02], Var0, 1, 1, true);
						TASK_STAND_STILL(&iLocal_892 + 136[02], -1.0f, 0, 0);
					}
					if (bVar9 == 573)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_989, Var0, 1, 1, true);
						TASK_STAND_STILL(&iLocal_989, -1.0f, 0, 0);
					}
					if (bVar9 == 2)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Var0, 1, 1, true);
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					}
					Function_487(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar8), (Var4 + 180.0f), (Var0 + 180.0f));
				}
			}
			bVar8++;
		}
		return 1;
	}
	return 0;
}

bool Function_614(bool bParam0, int iParam1, int iParam2) //Position: 0x2578F / 153487
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	char* cVar5[64];
	char* cVar21[64];
	
	if (!IS_OBJECTSET_VALID(&iParam1))
	{
		iParam1 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &bParam0, 4294967295, 1);
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(bVar0, &Var1, &Var3))
			{
				cVar21 = CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0);
				if (!STRING_CONTAINS_STRING(&cVar21, "x_"))
				{
					Function_337(&iParam2, CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0), 0, 0);
					strcpy(&cVar5, "CUTSCENE_PROP: ", 64);
					stradd(&cVar5, &cVar21, 64);
				}
			}
			bVar0++;
		}
		return 0;
	}
	if (Function_330(&iParam2))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(bVar0, &Var1, &Var3))
			{
				cVar21 = CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0);
				if (!STRING_CONTAINS_STRING(&cVar21, "x_"))
				{
					uVar22 = CREATE_PROP_IN_LAYOUT(&bParam0, Function_54(), &cVar21, Var1, Var3, true);
					ADD_OBJECT_TO_OBJECTSET(&uVar22, &iParam1);
					HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar22));
				}
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

void Function_615() //Position: 0x25885 / 153733
{
	var uVar0;
	
	Function_328(4, 1);
	uVar0 = &uVar0;
	iLocal_892 = CREATE_LAYOUT("Rebel04Pre_layout");
	*(&iLocal_892 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_892, "Cutscene01Vol", 2,802597E-45f, Vector(-2258,333f, 24,41583f, 4922,302f), Vector(0.0f, 43,52164f, 0.0f), Vector(156,9209f, 15,29848f, 57,87912f));
	*(&iLocal_892 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_892, "nWanderVol", 2,802597E-45f, Vector(-2293,979f, 21,83827f, 4962,021f), Vector(0.0f, 43,52164f, 0.0f), Vector(23,87516f, 15,29848f, 21,41901f));
	return;
}

bool Function_616() //Position: 0x25939 / 153913
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_625(0))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_989))
		{
			iLocal_989 = Function_618(8, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_617())
		{
			return 0;
		}
	}
	return 1;
}

bool Function_617() //Position: 0x25978 / 153976
{
	Function_339(&iLocal_892 + 8, 1199, 2, 0);
	Function_339(&iLocal_892 + 8, 976, 2, 0);
	Function_339(&iLocal_892 + 8, 535, 2, 0);
	Function_339(&iLocal_892 + 8, 537, 2, 0);
	Function_339(&iLocal_892 + 8, 533, 2, 0);
	if (Function_330(&iLocal_892 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_618(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x259D2 / 154066
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
		Function_449(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_624(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_620(&Global_15402[iParam014] + 16, &uParam7);
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
		Function_619(&bVar1, 0, 0, 0, 0);
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
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, false);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_445(&bVar1, 0);
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

void Function_619(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x25F12 / 155410
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

var Function_620(int iParam0, int iParam1) //Position: 0x25F73 / 155507
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_217(iParam0))
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
						Function_621(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_621(var uParam0, int iParam1) //Position: 0x26001 / 155649
{
	Function_623(&uParam0);
	Function_622(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_622(int iParam0) //Position: 0x2602D / 155693
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_623(int iParam0) //Position: 0x26053 / 155731
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

var Function_624(int iParam0, var uParam1) //Position: 0x26129 / 155945
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

bool Function_625(bool bParam0) //Position: 0x261CF / 156111
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

void Function_626() //Position: 0x261FF / 156159
{
	Function_337(&iLocal_1000, "dynamite", 5, 0);
	Function_337(&iLocal_1000, "custom/dynamite", 8, 0);
	Function_337(&iLocal_1000, "pointing", 5, 0);
	Function_337(&iLocal_1000, "custom/pointing", 8, 0);
	Function_337(&iLocal_1000, "pickup_dynamite", 5, 0);
	Function_337(&iLocal_1000, "custom/pickup_dynamite", 8, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplode01ax", 0, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplode01bx", 0, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplode01cx", 0, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplode01dx", 0, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplode01ex", 0, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplode01fx", 0, 0);
	Function_337(&iLocal_1000, "p_gen_wagonExplodeYoke01x", 0, 0);
	Function_337(&iLocal_1000, "Rebel04", 10, 0);
	Function_337(&iLocal_1000, "nminigames", 10, 0);
	Function_339(&iLocal_1000, 242, 3, 0);
	return;
}

void Function_627(int iParam0, bool bParam1) //Position: 0x263C9 / 156617
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_634(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_291(&iParam0))
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
	if (!Function_291(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_633();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_252();
	Function_282();
	Function_241("");
	Function_632(0);
	Function_631();
	Function_205();
	Function_204();
	ENABLE_JOURNAL_REPLAY(0);
	Function_630();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_317(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_469(0, 0x40400000);
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
	Function_629(13);
	Function_629(14);
	Function_629(25);
	Function_629(24);
	Function_629(12);
	Function_629(27);
	Function_629(26);
	Function_629(15);
	Function_628();
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

void Function_628() //Position: 0x26809 / 157705
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

void Function_629(int iParam0) //Position: 0x2688E / 157838
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_630() //Position: 0x268AE / 157870
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

void Function_631() //Position: 0x268F4 / 157940
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_632(int iParam0) //Position: 0x2690A / 157962
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_208())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_633() //Position: 0x26943 / 158019
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_634(int iParam0, int iParam1) //Position: 0x2694C / 158028
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
			Function_635(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_635(struct<113> Param0) //Position: 0x269D3 / 158163
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

void Function_636() //Position: 0x26A31 / 158257
{
	return;
}

bool Function_637(int iParam0) //Position: 0x26A37 / 158263
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_638() //Position: 0x26A55 / 158293
{
	if (!DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_ShootsRand"))
	{
		if (IS_ACTOR_SHOOTING(&Global_54076) && !IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_ShootsRand", "Rebel04_ShootsRand", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			DECOR_SET_FLOAT(&cLocal_948, "Rebel04_ShootsRand", GET_CURRENT_GAME_TIME());
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_ShootsRand")) < 20.0f)
	{
		DECOR_REMOVE(&cLocal_948, "Rebel04_ShootsRand");
	}
	if (!DECOR_CHECK_EXIST(&cLocal_948, "Rebel04_GunOnAmb"))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
		{
			if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iLocal_989)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_GunOnAmb", "Rebel04_GunOnAmb", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_989, "Rebel04_GunOnLuisaAmbu", "Rebel04_GunOnLuisaAmbu", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			}
			DECOR_SET_FLOAT(&cLocal_948, "Rebel04_GunOnAmb", GET_CURRENT_GAME_TIME());
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&cLocal_948, "Rebel04_GunOnAmb")) < 20.0f)
	{
		DECOR_REMOVE(&cLocal_948, "Rebel04_GunOnAmb");
	}
	return;
}

bool Function_639(struct<25> Param0) //Position: 0x26C5A / 158810
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
			Function_640(&Param0, 1);
			return 1;
		}
	}
	Function_640(&Param0, 0);
	return 0;
}

void Function_640(struct<25> Param0) //Position: 0x26CE6 / 158950
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

bool Function_641(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x26D11 / 158993
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
		Function_640(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_659(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_658(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_658(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_645(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_640(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_644(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_643(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_644(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_642(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_241(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_643(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_640(&Param2, 0);
	return 0;
}

void Function_642(char* cParam0) //Position: 0x27127 / 160039
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

void Function_643(struct<25> Param0) //Position: 0x2721B / 160283
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

void Function_644(bool bParam0) //Position: 0x27293 / 160403
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_645(struct<57> Param0) //Position: 0x272B7 / 160439
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
			return Function_656(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_649(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_656(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_646(&Param0, bVar2);
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
						bVar2 = Function_656(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_646(&Param0, bVar2);
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

var Function_646(int iParam0, bool bParam1) //Position: 0x27428 / 160808
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
				bParam1 = Function_648(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_647(16);
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
				bParam1 = Function_648(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_647(256);
			}
		}
	}
	return bParam1;
}

bool Function_647(int iParam0) //Position: 0x27564 / 161124
{
	return 2 | iParam0;
}

int Function_648(int iParam0) //Position: 0x2756E / 161134
{
	return 4 | iParam0;
}

int Function_649(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x27578 / 161144
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
				iParam3 = Function_655(&iParam0, &iParam1, bParam4);
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
			return Function_647(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_650(&iParam0, &iParam1, 0, bParam4);
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
			return Function_647(16);
		}
	}
	return 0;
}

int Function_650(int iParam0, vector3 vParam1) //Position: 0x27633 / 161331
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_654(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_653(iVar0, 3, 1, bParam3))
			{
				if (!Function_658(&iParam0, 8, 1))
				{
					return Function_652(64, 1024, bParam2);
				}
			}
			return Function_651(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_653(iVar0, 2, 1, bParam3))
			{
				if (!Function_658(&iParam0, 32, 1))
				{
					return Function_652(64, 1024, bParam2);
				}
			}
			return Function_651(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_653(iVar0, 1, 1, bParam3))
			{
				if (!Function_658(&iParam0, 64, 1))
				{
					return Function_652(64, 1024, bParam2);
				}
			}
			return Function_651(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_653(iVar0, 3, 1, bParam3))
			{
				if (!Function_658(&iParam0, 128, 1))
				{
					return Function_652(64, 1024, bParam2);
				}
			}
			return Function_651(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_653(iVar0, 1, 1, bParam3))
			{
				if (!Function_658(&iParam0, 1024, 1))
				{
					return Function_652(64, 1024, bParam2);
				}
			}
			return Function_651(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_653(iVar0, 1, 1, bParam3))
			{
				if (!Function_658(&iParam0, 1024, 1))
				{
					return Function_652(64, 1024, bParam2);
				}
			}
			return Function_651(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_651(int iParam0, int iParam1, bool bParam2) //Position: 0x277FB / 161787
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_652(int iParam0, int iParam1, bool bParam2) //Position: 0x27810 / 161808
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_653(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x27825 / 161829
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_654(int iParam0) //Position: 0x27842 / 161858
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

int Function_655(var uParam0, vector3 vParam1) //Position: 0x278B5 / 161973
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_654(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_653(iVar0, 3, 1, bParam2))
			{
				if (!Function_658(&uParam0, 8, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000009:
			if (Function_653(iVar0, 3, 1, bParam2))
			{
				if (!Function_658(&uParam0, 8, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x0000006E:
			if (Function_653(iVar0, 2, 1, bParam2))
			{
				if (!Function_658(&uParam0, 16, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x0000005B:
			if (Function_653(iVar0, 2, 1, bParam2))
			{
				if (!Function_658(&uParam0, 32, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000031:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&uParam0, 64, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000007:
			if (Function_653(iVar0, 3, 1, bParam2))
			{
				if (!Function_658(&uParam0, 128, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000008:
			if (Function_653(iVar0, 2, 1, bParam2))
			{
				if (!Function_658(&uParam0, 256, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000014:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&uParam0, 512, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000018:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&uParam0, 512, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000057:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&uParam0, 1024, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000058:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&uParam0, 1024, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_656(struct<65> Param0) //Position: 0x27ADE / 162526
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
						return Function_655(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_658(&Param0, 2, 1))
					{
						return Function_648(8);
					}
					return Function_647(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_658(&Param0, 4, 1))
					{
						return Function_648(16);
					}
					return Function_647(16);
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
							return Function_650(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_658(&Param0, 2, 1))
						{
							return Function_648(128);
						}
						return Function_647(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_658(&Param0, 4, 1))
						{
							return Function_648(256);
						}
						return Function_647(256);
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
						return Function_650(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_658(&Param0, 2, 1))
					{
						return Function_648(8);
					}
					return Function_647(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_658(&Param0, 4, 1))
					{
						return Function_648(16);
					}
					return Function_647(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_657(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_658(&Param0, 2, 1))
					{
						return Function_648(8);
					}
					return Function_647(8);
				}
				if (!Function_658(&Param0, 4, 1))
				{
					return Function_648(16);
				}
				return Function_647(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_650(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_474(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_647(128);
							}
							if (!Function_658(&Param0, 2, 1))
							{
								return Function_648(8);
							}
							return Function_647(8);
						}
						if (iParam4 == 2)
						{
							if (Function_474(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_647(256);
							}
							if (!Function_658(&Param0, 4, 1))
							{
								return Function_648(16);
							}
							return Function_647(16);
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

int Function_657(int iParam0, vector3 vParam1) //Position: 0x27DC4 / 163268
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_654(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_653(iVar0, 2, 1, bParam2))
			{
				if (!Function_658(&iParam0, 16, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x0000005B:
			if (Function_653(iVar0, 2, 1, bParam2))
			{
				if (!Function_658(&iParam0, 32, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000057:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&iParam0, 1024, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		case 0x00000058:
			if (Function_653(iVar0, 1, 1, bParam2))
			{
				if (!Function_658(&iParam0, 1024, 1))
				{
					return Function_648(64);
				}
			}
			return Function_647(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_658(struct<69> Param0) //Position: 0x27EE6 / 163558
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

int Function_659(bool bParam0) //Position: 0x27F10 / 163600
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

void Function_660(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x27F46 / 163654
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

