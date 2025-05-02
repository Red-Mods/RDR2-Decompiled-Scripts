//Decompiled with MagicRDR v1.0
//Function Count : 567
//Statics Count : 1039
//Natives Count : 734
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 8;
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
	var uLocal_40 = 2;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 6;
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
	var uLocal_76 = 7;
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
	var uLocal_106 = 6;
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
	var uLocal_134 = 1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 2;
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
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 1;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 4;
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
	var uLocal_188 = 2;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 4;
	float fLocal_197 = 0.0f;
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
	var uLocal_208 = 8;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	float fLocal_212 = 0.0f;
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
	var uLocal_228 = 9;
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
	var uLocal_264 = 8;
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
	var uLocal_284 = 14;
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
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 14;
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
	var uLocal_402 = 5;
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
	var uLocal_448 = 3;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 10;
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
	int iLocal_568 = 0;
	var uLocal_569 = 0;
	struct<6> Local_570 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	int iLocal_582 = 4;
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
	int iLocal_600 = 9;
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
	int iLocal_646 = 0;
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
	bool bLocal_658 = false;
	int iLocal_659 = 0;
	bool bLocal_660 = false;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	bool bLocal_663 = false;
	var uLocal_664 = 0;
	bool bLocal_665 = false;
	var uLocal_666 = 0;
	bool bLocal_667 = false;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	bool bLocal_671 = false;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	int iLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	int iLocal_679[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_701 = false;
	bool bLocal_702 = false;
	bool bLocal_703 = false;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	int iLocal_708 = 0;
	var uLocal_709 = 0;
	int iLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	bool bLocal_714 = false;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	bool bLocal_724 = false;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	bool bLocal_727 = false;
	int iLocal_728 = 0;
	float fLocal_729 = 0.0f;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	struct<5> Local_732 = { 0, 0, 0, 0, 0 } ;
	var uLocal_737 = 0;
	float fLocal_738 = 0.0f;
	float fLocal_739 = 0.0f;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	bool bLocal_742 = false;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	int iLocal_746 = 0;
	var uLocal_747 = 0;
	int iLocal_748 = 0;
	var uLocal_749 = 0;
	bool bLocal_750 = false;
	int iLocal_751 = 0;
	bool bLocal_752 = false;
	bool bLocal_753 = false;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	var uLocal_759 = 0;
	int iLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	int iLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	bool bLocal_768 = false;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	bool bLocal_772 = false;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	int iLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	bool bLocal_780 = false;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	bool bLocal_784 = false;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	int iLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 13;
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
	struct<15> Local_851[5];
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 5;
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
	var uLocal_961 = 5;
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
	var uLocal_991 = 5;
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
	int iLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	bool bLocal_1015 = false;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
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
	iLocal_1021 = 2;
	iLocal_1022 = 0;
	Local_570 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_658 = 99;
	iLocal_659 = 6;
	iLocal_646 = 1000;
	while (Function_276())
	{
		Function_221();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x48 / 72
{
	Function_220(&(Global_43791[Global_46760[0]]), 256);
	CLEAR_AMBIENT_SPAWN_RESTRICTIONS();
	CLEAR_AMBIENT_MOVE_RESTRICTIONS();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_665);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_663);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_665);
	Function_215();
	Function_212(0, 1, 0, 1, 1);
	*(&Global_15402[014] + 16) = 548;
	Function_211(&iLocal_568);
	Function_211(&iLocal_4);
	Function_210();
	Function_180(bLocal_702, 0, 0, 1, 0, 1, 1, 1);
	Function_176(&iLocal_582);
	Function_176(&iLocal_600);
	Function_174();
	if (IS_ITERATOR_VALID(&uLocal_661))
	{
		DESTROY_ITERATOR(&uLocal_661);
	}
	RELEASE_LAYOUT_REF(&iLocal_568);
	if (bLocal_701)
	{
		Function_26(Local_570, 1, 1, 1, 0);
	}
	else if (bLocal_702)
	{
		Function_22(Local_570);
	}
	else
	{
		Function_2(Local_570);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x103 / 259
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x124 / 292
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x141 / 321
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x164 / 356
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x17B / 379
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

void Function_7(int iParam0) //Position: 0x21D / 541
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x240 / 576
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

void Function_9() //Position: 0x28A / 650
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2A3 / 675
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

void Function_11(var uParam0, bool bParam1) //Position: 0x2F6 / 758
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

struct<16> Function_12(int iParam0) //Position: 0x420 / 1056
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

bool Function_13() //Position: 0x45A / 1114
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x475 / 1141
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x482 / 1154
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x4A2 / 1186
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x4B9 / 1209
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x4D4 / 1236
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x71B / 1819
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x747 / 1863
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

bool Function_21(int iParam0) //Position: 0x76B / 1899
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x780 / 1920
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x79E / 1950
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

struct<16> Function_24(int iParam0) //Position: 0x844 / 2116
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

struct<24> Function_25(char* cParam0) //Position: 0x883 / 2179
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAD9 / 2777
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
		Function_169(&(Global_6667[iVar228]));
		Function_168(4194304);
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

void Function_27() //Position: 0xBCD / 3021
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

int Function_28(int iParam0, bool bParam1) //Position: 0xBFF / 3071
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

int Function_29(int iParam0) //Position: 0xC3D / 3133
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC57 / 3159
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC6D / 3181
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF6A / 3946
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

void Function_33(char* cParam0) //Position: 0xFDF / 4063
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1019 / 4121
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1095 / 4245
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10A8 / 4264
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

int Function_37(int iParam0) //Position: 0x1149 / 4425
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1186 / 4486
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x119C / 4508
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x13FA / 5114
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1438 / 5176
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

void Function_42(bool bParam0) //Position: 0x1477 / 5239
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

void Function_43() //Position: 0x14CC / 5324
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

void Function_44() //Position: 0x1517 / 5399
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

void Function_45() //Position: 0x161D / 5661
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

void Function_46() //Position: 0x1650 / 5712
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

void Function_47() //Position: 0x17E3 / 6115
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

void Function_48() //Position: 0x199C / 6556
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19AA / 6570
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

bool Function_50() //Position: 0x1BC7 / 7111
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1BDC / 7132
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C83 / 7299
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F1F / 7967
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

var Function_54() //Position: 0x255D / 9565
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2566 / 9574
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2577 / 9591
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

struct<32> Function_57(char* cParam0) //Position: 0x266E / 9838
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2689 / 9865
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x26F0 / 9968
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2702 / 9986
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2714 / 10004
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

int Function_62(int iParam0) //Position: 0x2848 / 10312
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2857 / 10327
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2890 / 10384
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x28CD / 10445
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A67 / 10855
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

int Function_67(bool bParam0) //Position: 0x2CAB / 11435
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2CEC / 11500
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

struct<8> Function_69() //Position: 0x2D75 / 11637
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

struct<8> Function_70() //Position: 0x2E0C / 11788
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

void Function_71() //Position: 0x2E8B / 11915
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EC8 / 11976
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

void Function_73() //Position: 0x30D4 / 12500
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

bool Function_74(char* cParam0) //Position: 0x318B / 12683
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31A3 / 12707
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

struct<8> Function_76() //Position: 0x329B / 12955
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x32A5 / 12965
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32B6 / 12982
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x32CC / 13004
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3398 / 13208
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33B5 / 13237
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

bool Function_82(int iParam0) //Position: 0x3BE1 / 15329
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C1C / 15388
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3C2B / 15403
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

bool Function_85(int iParam0) //Position: 0x4108 / 16648
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x411E / 16670
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x413D / 16701
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4157 / 16727
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41C1 / 16833
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

void Function_90(int iParam0) //Position: 0x43E9 / 17385
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

void Function_91() //Position: 0x4487 / 17543
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

void Function_92() //Position: 0x45E9 / 17897
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4669 / 18025
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49C0 / 18880
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

int Function_95(int iParam0) //Position: 0x4A48 / 19016
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A62 / 19042
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A8D / 19085
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4ABB / 19131
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D57 / 19799
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F2B / 20267
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5195 / 20885
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

int Function_102() //Position: 0x5325 / 21285
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

void Function_103() //Position: 0x53C6 / 21446
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

void Function_104(int iParam0) //Position: 0x5484 / 21636
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

var Function_105(int iParam0) //Position: 0x54EA / 21738
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5579 / 21881
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

var Function_107(int iParam0, int iParam1) //Position: 0x5725 / 22309
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

void Function_108() //Position: 0x576A / 22378
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5780 / 22400
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57C0 / 22464
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5800 / 22528
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x580F / 22543
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

int Function_113(int iParam0) //Position: 0x59D7 / 22999
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

var Function_114() //Position: 0x5A6C / 23148
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5A91 / 23185
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F60 / 24416
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

var Function_117(int iParam0) //Position: 0x6287 / 25223
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x632A / 25386
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6527 / 25895
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66D2 / 26322
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x67A4 / 26532
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
			Function_166(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_163(Global_46816[0]);
			Function_153(0);
			Function_151(2, 1);
			Function_151(0, 1);
			Function_151(1, 1);
			break;
		
		case 0x00000003:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_163(Global_46816[0]);
			Function_163(Global_46760[0]);
			Function_149(0, 1);
			Function_149(15, 1);
			Function_149(9, 1);
			Function_149(12, 1);
			Function_149(16, 1);
			Function_151(3, 1);
			break;
		
		case 0x00000005:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_161(21, &bParam2, 4);
			Function_163(Global_46816[0]);
			Function_151(39, 1);
			break;
		
		case 0x00000007:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_148())
				{
					if (!Function_147(4))
					{
						Function_137(4, 0, 0, 1, 0);
					}
				}
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_163(Global_46760[0]);
			Function_163(Global_46816[2]);
			Function_136(&(Global_43791[Global_46816[2]]), 32768);
			Function_220(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_161(9, &bParam2, 4);
			Function_163(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_163(Global_46760[0]);
			Function_163(Global_46796[0]);
			Function_136(&(Global_43791[Global_46796[0]]), 32768);
			Function_220(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_163(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(Global_46760[0]);
			Function_163(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_163(Global_46760[1]);
			Function_163(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_163(Global_46838[0]);
			Function_163(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_163(Global_46796[5]);
			Function_163(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_161(21, &bParam2, 4);
			Function_163(Global_46760[4]);
			Function_163(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_163(Global_46760[4]);
			Function_163(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_220(&(Global_43791[Global_46760[4]]), 256);
			Function_163(Global_46760[4]);
			Function_163(Global_46796[0]);
			Function_136(&(Global_43791[Global_46796[0]]), 32768);
			Function_220(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_163(Global_46760[0]);
			Function_163(Global_46760[5]);
			Function_161(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_163(Global_46796[3]);
			Function_136(&(Global_43791[Global_46796[3]]), 32768);
			Function_220(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_161(9, &bParam2, 4);
			Function_163(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_136(&(Global_43791[Global_46838[1]]), 32768);
			Function_163(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_161(12, &bParam2, 4);
			Function_220(&(Global_43791[Global_46838[1]]), 256);
			Function_163(Global_46816[3]);
			Function_163(Global_46866[0]);
			Function_163(Global_46850[0]);
			Function_153(4);
			Function_149(13, 1);
			Function_149(1, 1);
			Function_149(18, 1);
			Function_151(34, 1);
			Function_151(44, 1);
			Function_151(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_161(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_163(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_163(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_163(Global_46866[0]);
			Function_163(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_163(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_163(Global_46850[0]);
			Function_163(Global_46866[0]);
			Function_163(Global_46866[1]);
			Function_163(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_161(23, &bParam2, 3);
			Function_149(23, 1);
			Function_163(Global_46850[0]);
			Function_163(Global_46850[2]);
			Function_136(&(Global_43791[Global_46850[2]]), 32768);
			Function_220(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_161(19, &bParam2, 4);
			Function_163(Global_46850[0]);
			Function_163(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_161(24, &bParam2, 3);
			Function_149(24, 1);
			Function_163(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_163(Global_46850[0]);
			Function_163(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_163(Global_46866[12]);
			Function_163(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_163(Global_46866[12]);
			Function_163(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_161(25, &bParam2, 10);
			Function_163(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_163(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_163(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_161(13, &bParam2, 4);
			Function_163(Global_46866[2]);
			Function_163(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_147(8))
				{
					Function_137(8, 0, 0, 1, 0);
				}
			}
			Function_163(Global_46850[0]);
			Function_153(9);
			Function_149(7, 1);
			Function_149(11, 1);
			Function_149(3, 1);
			Function_149(20, 1);
			Function_151(57, 1);
			break;
		
		case 0x0000002A:
			Function_161(2, &bParam2, 4);
			Function_163(Global_46914[0]);
			Function_163(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_163(Global_46914[0]);
			Function_163(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_163(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_161(17, &bParam2, 4);
			Function_163(Global_46926[0]);
			Function_163(Global_46914[0]);
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
			Function_220(&(Global_43791[Global_46914[1]]), 256);
			Function_153(11);
			Function_163(Global_46914[1]);
			Function_163(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_163(Global_46914[1]);
			Function_163(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_163(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_163(Global_46914[1]);
			Function_122(11);
			Function_153(12);
			Global_26200[1114].f_40 = 0;
			Function_151(56, 1);
			if (!&bParam2)
			{
				if (!Function_147(9))
				{
					Function_137(9, 0, 0, 0, 0);
				}
				if (!Function_147(10))
				{
					Function_137(10, 0, 0, 1, 0);
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

void Function_122(int iParam0) //Position: 0x70BF / 28863
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x723C / 29244
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7347 / 29511
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x7373 / 29555
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

var Function_126(vector3 vParam0) //Position: 0x73CA / 29642
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

void Function_127(var uParam0, int iParam1) //Position: 0x7418 / 29720
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7473 / 29811
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
		if (!Function_147(bParam0))
		{
			Function_137(bParam0, 1, 0, 0, 1);
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

void Function_129() //Position: 0x7614 / 30228
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x761A / 30234
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76C9 / 30409
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x771E / 30494
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7734 / 30516
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7785 / 30597
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

void Function_135(var uParam0, int iParam1) //Position: 0x77B2 / 30642
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77C3 / 30659
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x77D4 / 30676
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_146(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_147(bParam0))
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
		Function_140(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_139() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_139() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_138(&cVar0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_138(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7930 / 31024
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
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_139() //Position: 0x79BB / 31163
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_140(bool bParam0) //Position: 0x79E8 / 31208
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
			if (Function_144(bParam0, Function_145(bVar24)))
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
			if (Function_144(bParam0, Function_145(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_143(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_142(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_141(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_141(int iParam0) //Position: 0x7B98 / 31640
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

void Function_142(char* cParam0, bool bParam1) //Position: 0x7BEF / 31727
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

var Function_143(int iParam0) //Position: 0x7C14 / 31764
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

bool Function_144(bool bParam0, int iParam1) //Position: 0x7C6A / 31850
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

int Function_145(bool bParam0) //Position: 0x7CC9 / 31945
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_146(int iParam0) //Position: 0x7CD5 / 31957
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_147(int iParam0) //Position: 0x7CF1 / 31985
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

bool Function_148() //Position: 0x7D43 / 32067
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_149(int iParam0, int iParam1) //Position: 0x7D73 / 32115
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_150(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7DE8 / 32232
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7E45 / 32325
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_152(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7EB8 / 32440
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_153(int iParam0) //Position: 0x7F13 / 32531
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_160(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_160(&Global_26200[iParam014] + 88, 0);
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
			Function_138("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_137(14, 1, 0, 0, 0);
				Function_154(14, 1, 0, 0, 0);
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
			Function_138("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_154(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x81D4 / 33236
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_146(3) || uParam3)
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
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_138(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_144(bParam0, bParam1))
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
		Function_140(bParam0);
		if (StackVal && !Function_14(((((!Function_139() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_139() || Global_6623) || Global_6635) || Global_6627), 1))
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
			Function_156();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_155(3, bParam1);
				break;
			
			case 0x00000005:
				Function_155(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_155(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_155(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_155(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_155(2, SHIFT_LEFT(bParam1, 18));
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

void Function_155(int iParam0, bool bParam1) //Position: 0x8473 / 33907
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

void Function_156() //Position: 0x84E2 / 34018
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_159(Global_42827);
			(&Global_42827 + 8) = Function_157(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_159(Global_42827);
			*(&Global_42827 + 8) = Function_157(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_157(int iParam0, int iParam1) //Position: 0x8562 / 34146
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
					if (Function_158(13) && iVar14)
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
					if (Function_158(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_158(23) && iVar15)
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
					if (Function_158(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_158(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_158(27) && iVar16)
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
					if (Function_158(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_158(49) && iVar13)
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
					if (Function_158(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_158(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_158(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_158(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_158(15) && iVar17)
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

int Function_158(int iParam0) //Position: 0x91C5 / 37317
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_159(int iParam0) //Position: 0x91DA / 37338
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

void Function_160(int iParam0, int iParam1) //Position: 0x9229 / 37417
{
	if (!IS_DOOR_VALID(&iParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&iParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&iParam0, "lockMe"))
	{
		DECOR_REMOVE(&iParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&iParam0))
	{
		SET_DOOR_LOCK(&iParam0, 0);
	}
	return;
}

void Function_161(bool bParam0, bool bParam1, int iParam2) //Position: 0x9281 / 37505
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_162(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_166(bParam0, 0, 0);
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

bool Function_162(int iParam0, int iParam1) //Position: 0x92F4 / 37620
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_163(int iParam0) //Position: 0x9308 / 37640
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_165(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_136(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_164(iParam0);
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

var Function_164(int iParam0) //Position: 0x93F9 / 37881
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

bool Function_165(var uParam0, int iParam1) //Position: 0x9451 / 37969
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_166(bool bParam0, bool bParam1, int iParam2) //Position: 0x946E / 37998
{
	if (!Function_167(bParam0))
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

bool Function_167(int iParam0) //Position: 0x94C8 / 38088
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_168(bool bParam0) //Position: 0x94DA / 38106
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

void Function_169(struct<185> Param0) //Position: 0x950E / 38158
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
			Function_170(4, 0, 0);
		}
	}
	return;
}

void Function_170(bool bParam0, var uParam1, int iParam2) //Position: 0x9579 / 38265
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
		Function_171(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_171(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9663 / 38499
{
	int iVar0;
	
	Function_173(bParam0);
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
	Function_172();
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

void Function_172() //Position: 0x97E2 / 38882
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_173(int iParam0) //Position: 0x97EE / 38894
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

void Function_174() //Position: 0x9834 / 38964
{
	Function_175();
	return;
}

void Function_175() //Position: 0x983D / 38973
{
	Function_176(&iLocal_4 + 8);
	Function_176(&iLocal_4 + 144);
	Function_176(&iLocal_4 + 184);
	Function_176(&iLocal_4 + 288);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_176(int iParam0) //Position: 0x9866 / 39014
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

void Function_177(struct<2>[] Param0, int iParam1) //Position: 0x988E / 39054
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

void Function_178(struct<13> Param0) //Position: 0x99D9 / 39385
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_179(struct<13> Param0) //Position: 0x99F6 / 39414
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_180(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9A14 / 39444
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

void Function_181() //Position: 0x9C20 / 39968
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

void Function_182(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9C77 / 40055
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_183(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_183(bool bParam0) //Position: 0x9CC7 / 40135
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_184() //Position: 0x9CF0 / 40176
{
	return Global_21369.f_248;
}

void Function_185() //Position: 0x9CFB / 40187
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_220(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_186(int iParam0, bool bParam1, int iParam2) //Position: 0x9D25 / 40229
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
			Function_136(&(Global_43791[Global_43789]), 131072);
			Function_220(&(Global_43791[Global_43789]), 2097152);
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
				if (Function_165(&(Global_43791[iVar0]), 4) || Function_165(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_220(&(Global_43791[iVar0]), 2097155);
					Function_136(&(Global_43791[iVar0]), 262144);
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

void Function_187(int iParam0) //Position: 0x9E31 / 40497
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
		if (!Function_165(&(Global_43791[iParam0]), 2048))
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

bool Function_188() //Position: 0x9EB0 / 40624
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_165(&(Global_43791[iVar0]), 4) || Function_165(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_189() //Position: 0x9F19 / 40729
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

void Function_190() //Position: 0x9F3F / 40767
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

void Function_191(int iParam0) //Position: 0x9F65 / 40805
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_192(int iParam0) //Position: 0x9F82 / 40834
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_193(int iParam0) //Position: 0x9F95 / 40853
{
	Function_194(&Global_43580, iParam0);
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0x9FA3 / 40867
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_195(bool bParam0) //Position: 0x9FC2 / 40898
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_196() //Position: 0x9FEF / 40943
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

void Function_197(int iParam0) //Position: 0xA067 / 41063
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

int Function_198(bool bParam0, bool bParam1, int iParam2) //Position: 0xA19D / 41373
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

var Function_199(bool bParam0) //Position: 0xA1EB / 41451
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

void Function_200(int iParam0) //Position: 0xA2DF / 41695
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

void Function_201(bool bParam0) //Position: 0xA362 / 41826
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

void Function_202() //Position: 0xA3D9 / 41945
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

void Function_203() //Position: 0xA41D / 42013
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

void Function_204() //Position: 0xA461 / 42081
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_205(int iParam0) //Position: 0xA477 / 42103
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

bool Function_206() //Position: 0xA4B7 / 42167
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

void Function_207() //Position: 0xA4DC / 42204
{
	Global_15862 = 0.0f;
	return;
}

void Function_208() //Position: 0xA4E6 / 42214
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

int Function_209() //Position: 0xA511 / 42257
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_210() //Position: 0xA52E / 42286
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_211(int iParam0) //Position: 0xA537 / 42295
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

int Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA59F / 42399
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
		Function_214(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_213(&Global_15402[iParam014] + 8);
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

void Function_213(bool bParam0) //Position: 0xA8E1 / 43233
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

void Function_214(var uParam0) //Position: 0xA914 / 43284
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_215() //Position: 0xA92B / 43307
{
	if (IS_VOLUME_VALID(&iLocal_4 + 816[0]))
	{
		DESTROY_VOLUME(&iLocal_4 + 816[0]);
	}
	Function_219();
	Function_218();
	Function_217();
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_663);
	if (SQUAD_IS_VALID(&iLocal_4 + 592))
	{
		Function_216(&iLocal_4 + 592);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 512))
	{
		Function_216(&iLocal_4 + 512);
	}
	if (IS_OBJECT_VALID(&iLocal_708))
	{
		DESTROY_OBJECT(&iLocal_708);
	}
	if (IS_ACTOR_VALID(&iLocal_746))
	{
		DESTROY_ACTOR(&iLocal_746);
	}
	Function_213(&bLocal_665);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_663);
	if (IS_OBJECT_VALID(&uLocal_712))
	{
		DESTROY_OBJECT(&uLocal_712);
	}
	if (IS_OBJECT_VALID(&iLocal_710))
	{
		DESTROY_OBJECT(&iLocal_710);
	}
	if (IS_OBJECTSET_VALID(&uLocal_1016))
	{
		DESTROY_OBJECTSET(&uLocal_1016);
	}
	if (IS_OBJECTSET_VALID(&uLocal_1018))
	{
		DESTROY_OBJECTSET(&uLocal_1018);
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xA9FB / 43515
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

void Function_217() //Position: 0xAA46 / 43590
{
	Function_176(&iLocal_4 + 288);
	return;
}

void Function_218() //Position: 0xAA54 / 43604
{
	Function_176(&iLocal_4 + 184);
	return;
}

void Function_219() //Position: 0xAA61 / 43617
{
	Function_176(&iLocal_4 + 144);
	return;
}

void Function_220(var uParam0, int iParam1) //Position: 0xAA6E / 43630
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_221() //Position: 0xAA88 / 43656
{
	var uVar0[12];
	int iVar13;
	
	if (Function_275())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Last Stage";
		uVar0[6] = "Skip Escort";
		uVar0[7] = "test2";
		uVar0[8] = "test3";
		iVar13 = Function_261(&uLocal_638, &uVar0, &Local_570 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_260(&iVar13, &bLocal_658, &iLocal_659, &iLocal_646))
		{
			Function_253();
			Function_252();
		}
		if (iVar13 == 0)
		{
			Function_253();
			Function_252();
			Function_251(&bLocal_701, 8);
		}
		else if (iVar13 == 1)
		{
			Function_253();
			Function_252();
			Function_247(bLocal_658);
			Function_243(StackVal, 5, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
		}
		else if (iVar13 == 2)
		{
			Function_253();
			Function_252();
			Function_238(&bLocal_703, 4);
		}
		else if (iVar13 == 3)
		{
			Function_253();
			Function_252();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_MOVER_FROZEN(&bLocal_663, false);
			Function_236(&bLocal_667);
			bLocal_658 = true;
			iLocal_659 = 0;
			iLocal_646 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_253();
			Function_252();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_222();
			Function_236(&bLocal_667);
			bLocal_658 = 2;
			iLocal_659 = 0;
			iLocal_646 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_253();
			Function_252();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_236(&bLocal_667);
			bLocal_658 = 101;
			iLocal_659 = 0;
			iLocal_646 = 1000;
		}
		else if (iVar13 == 6)
		{
			Function_253();
			iLocal_1021 = 0;
		}
		else if (iVar13 == 7)
		{
			Function_253();
		}
		else if (iVar13 == 8)
		{
			AI_GOAL_LOOK_CLEAR(&iLocal_4 + 552[12]);
			AI_GOAL_LOOK_AT_ACTOR(&iLocal_4 + 552[12], &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
		}
	}
	return;
}

void Function_222() //Position: 0xAC9E / 44190
{
	Function_234(0, 0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_663);
	if (SQUAD_IS_VALID(&iLocal_4 + 592))
	{
		Function_216(&iLocal_4 + 592);
	}
	Function_232();
	Function_231(&iLocal_746, &iLocal_4 + 1464[5], 1, 1, 1);
	if (!IS_ACTOR_ALIVE(&bLocal_665))
	{
		bLocal_665 = Function_223(1, 0, 0, 0, 0, 0, 1, 0);
		Function_231(&bLocal_665, &iLocal_4 + 1464[10], 1, 1, 1);
	}
	else
	{
		Function_231(&bLocal_665, &iLocal_4 + 1464[10], 1, 1, 1);
	}
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_665);
	}
	if (!IS_ACTOR_RIDING(&bLocal_663))
	{
		ACTOR_MOUNT_ACTOR(&bLocal_663, &iLocal_746);
	}
	return;
}

int Function_223(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xAD4F / 44367
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
		Function_230(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_229())
		{
			return "";
		}
	}
	if (!Function_227())
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
		Function_226(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_226(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_226(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_226(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_225(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_225(StackVal, Var4, 0, 1, 1);
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
		Function_224(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_224(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xB0AC / 45228
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

var Function_225(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB0F6 / 45302
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

struct<8> Function_226(bool bParam0) //Position: 0xB196 / 45462
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

bool Function_227() //Position: 0xB1BF / 45503
{
	if (Function_228() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_228() //Position: 0xB1D5 / 45525
{
	return Global_21369.f_244;
}

bool Function_229() //Position: 0xB1E0 / 45536
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_230(var uParam0, bool bParam1, bool bParam2) //Position: 0xB200 / 45568
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

void Function_231(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB22F / 45615
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

void Function_232() //Position: 0xB33F / 45887
{
	if (!IS_ACTOR_VALID(&iLocal_746))
	{
		Function_233();
		iLocal_746 = &iLocal_4 + 600[02];
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_746, 0);
		TASK_STAND_STILL(&iLocal_746, -1.0f, 0, 0);
		SET_ACTORS_HORSE(&bLocal_663, &iLocal_746);
	}
	return;
}

void Function_233() //Position: 0xB380 / 45952
{
	*(&iLocal_4 + 600[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse", 977, Vector(-2180,674f, 16,26433f, 2573,06f), Vector(0.0f, 177,5444f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 600[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 600[02], 20);
	AI_BEHAVIOR_SET_ALLOW(&iLocal_4 + 600[02], 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 600[02], true);
	ACCESSORIZE_HORSE(&iLocal_4 + 600[02], 3);
	return;
}

void Function_234(int iParam0, bool bParam1, bool bParam2) //Position: 0xB3FE / 46078
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
						Function_213(&uVar1);
					}
				}
				Function_235(&uVar0);
			}
		}
	}
	return;
}

void Function_235(bool bParam0) //Position: 0xB50D / 46349
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

void Function_236(bool bParam0) //Position: 0xB540 / 46400
{
	Function_237(&bParam0, 0.0f);
	return;
}

void Function_237(vector3 vParam0) //Position: 0xB54D / 46413
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_238(bool bParam0, int iParam1) //Position: 0xB572 / 46450
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239(&iParam1);
	bParam0 = 1;
	return;
}

void Function_239(int iParam0) //Position: 0xB597 / 46487
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_242("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_241(2) || Function_241(8)) || Function_241(9)) || Function_241(10))
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
		Function_242("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_242("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_242("");
	}
	else if (iParam0 == 8)
	{
		Function_240();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_240();
	}
	return;
}

void Function_240() //Position: 0xB68E / 46734
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_241(int iParam0) //Position: 0xB69A / 46746
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

void Function_242(char* cParam0) //Position: 0xB6D0 / 46800
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_243(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB73C / 46908
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_244(StackVal, Param4, uParam3, &iParam6);
		Function_239(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_244(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB77D / 46973
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_246(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_245(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_245(int iParam0) //Position: 0xB7FF / 47103
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

var Function_246(struct<2> Param0, bool bParam2) //Position: 0xBCAD / 48301
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

struct<8> Function_247(int iParam0) //Position: 0xBD19 / 48409
{
	Function_248(iParam0 + 1);
	return StackVal, Function_248(iParam0 + 1);
}

struct<8> Function_248(int iParam0) //Position: 0xBD26 / 48422
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_226(&iLocal_4 + 992[0]);
			return StackVal, Function_226(&iLocal_4 + 992[0]);
			break;
		
		case 0x00000001:
			Function_226(&iLocal_4 + 1040[0]);
			return StackVal, Function_226(&iLocal_4 + 1040[0]);
			break;
		
		case 0x00000002:
			Function_226(&iLocal_4 + 1464[0]);
			return StackVal, Function_226(&iLocal_4 + 1464[0]);
			break;
		
		default:
			Function_226(&iLocal_4 + 1720[0]);
			return StackVal, Function_226(&iLocal_4 + 1720[0]);
			break;
	}
	Function_226(&iLocal_4 + 992[0]);
	return StackVal, Function_226(&iLocal_4 + 992[0]);
}

int Function_249(int iParam0) //Position: 0xBD91 / 48529
{
	return Function_250(iParam0 + 1);
}

int Function_250(int iParam0) //Position: 0xBD9E / 48542
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 992[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1040[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1464[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1720[0]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 992[0]);
}

void Function_251(bool bParam0, int iParam1) //Position: 0xBE09 / 48649
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239(&iParam1);
	bParam0 = 1;
	return;
}

void Function_252() //Position: 0xBE2E / 48686
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_253() //Position: 0xBE43 / 48707
{
	Function_255();
	Function_254(10, 3);
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xBE52 / 48722
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

void Function_255() //Position: 0xBF9F / 49055
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

void Function_256() //Position: 0xBFEA / 49130
{
	Function_257(25, 2);
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0xBFF6 / 49142
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

void Function_258(int iParam0, int iParam1) //Position: 0xC223 / 49699
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

bool Function_259() //Position: 0xC370 / 50032
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

bool Function_260(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC3D8 / 50136
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
		Function_242("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_261(struct<17> Param0) //Position: 0xC487 / 50311
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

void Function_262(int iParam0, int iParam1, int iParam2) //Position: 0xC57B / 50555
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

bool Function_263(struct<17> Param0) //Position: 0xC5DB / 50651
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

void Function_264(bool bParam0) //Position: 0xC76E / 51054
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

void Function_265(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC7AC / 51116
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

var Function_266(int iParam0, struct<21> Param1) //Position: 0xC862 / 51298
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_267(vector3 vParam0) //Position: 0xC889 / 51337
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

int Function_268() //Position: 0xC935 / 51509
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

void Function_269(vector3 vParam0) //Position: 0xC971 / 51569
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

int Function_270(bool bParam0) //Position: 0xCA1A / 51738
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

var Function_271(struct<21> Param0) //Position: 0xCB3A / 52026
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

void Function_272(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCCF4 / 52468
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

var Function_273(int iParam0, struct<13> Param1) //Position: 0xCD90 / 52624
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_274(struct<17> Param0) //Position: 0xCDAC / 52652
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

bool Function_275() //Position: 0xCE06 / 52742
{
	return Global_47307;
}

bool Function_276() //Position: 0xCE0F / 52751
{
	if (IS_EXITFLAG_SET())
	{
		Function_247(bLocal_658);
		Function_243(StackVal, 4, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
		return 0;
	}
	Function_566(StackVal, StackVal, StackVal, StackVal, StackVal, Local_570, bLocal_658, iLocal_659, &bLocal_703, &bLocal_701, &bLocal_702);
	if (bLocal_658 == 99 && bLocal_658 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076) && !bLocal_1015)
		{
			if (IS_ACTOR_VALID(&iLocal_4 + 552[12]))
			{
				if (!IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
				{
					bLocal_1015 = true;
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_565();
					bLocal_1015 = true;
				}
				else
				{
					bLocal_1015 = true;
				}
			}
			else
			{
				bLocal_1015 = true;
			}
		}
		if (bLocal_1015)
		{
			Function_247(bLocal_658);
			Function_243(StackVal, 1, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
			return 1;
		}
		Function_564(&bLocal_665, &bLocal_663);
		Function_557(Function_561(&uLocal_744, &uLocal_741, 1, 7.0f, iLocal_715));
		if (Function_537(&Local_851, &uLocal_797, &uLocal_1003, &uLocal_661, iLocal_715))
		{
			if (Function_522(&uLocal_1003))
			{
				Function_247(bLocal_658);
				Function_243(StackVal, 5, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
				return 1;
			}
		}
		if (Global_6646 || Global_6647)
		{
			Function_247(bLocal_658);
			Function_243(StackVal, 2, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
			return 1;
		}
		if (Function_521(2048))
		{
			Function_247(bLocal_658);
			Function_243(StackVal, 3, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&bLocal_663) || FIRE_IS_ACTOR_ON_FIRE(&bLocal_663))
		{
			Function_242("Outlaw_dead");
			Function_247(bLocal_658);
			Function_243(StackVal, 5, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
			return 1;
		}
		Function_520();
	}
	switch (bLocal_658)
	{
		case 0x00000063:
			Function_501();
			break;
		
		case 0x00000000:
			Function_474();
			break;
		
		case 0x00000001:
			Function_442();
			break;
		
		case 0x00000002:
			Function_360();
			break;
		
		case 0x00000065:
			Function_279();
			break;
		
		case 0x00000064:
			if (Function_278(&bLocal_702))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_277(&bLocal_658, &iLocal_659, &iLocal_646))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_701)
	{
		Function_251(&bLocal_701, 8);
		Function_1();
		return 0;
	}
	if (bLocal_702 && bLocal_658 == 100)
	{
		Function_247(bLocal_658);
		Function_243(StackVal, 5, &bLocal_702, &bLocal_658, Function_249(bLocal_658), Function_247(bLocal_658), 0);
	}
	if (bLocal_703)
	{
		Function_238(&bLocal_703, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_277(var uParam0, var uParam1, int iParam2) //Position: 0xD05F / 53343
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

bool Function_278(int iParam0) //Position: 0xD0A8 / 53416
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_279() //Position: 0xD0BC / 53436
{
	switch (iLocal_659)
	{
		case 0x00000000:
			Function_356(0);
			SET_ACTOR_HEALTH(&bLocal_663, GET_ACTOR_MAX_HEALTH(&bLocal_663));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_353();
				Function_226(&iLocal_4 + 1776[1]);
				fLocal_729 = Function_226(&iLocal_4 + 1776[1]);
				iLocal_758 = FIND_NEAREST_DOOR(&fLocal_729, 3.0f);
				Function_160(&iLocal_758, 1);
				OPEN_DOOR_DIRECTION_FAST(&iLocal_758, 0);
				bLocal_660 = Global_46736[0];
				if (!Function_352(bLocal_660))
				{
					Function_351(&Local_570);
				}
				Function_231(&Global_54076, &iLocal_4 + 1720[1], 1, 1, 1);
				Function_236(&bLocal_667);
				iLocal_659 = 1;
			}
			else
			{
				Function_236(&bLocal_667);
				iLocal_659 = 3;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_352(bLocal_660) || bLocal_660 != 4294967295))
			{
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000002:
			Function_236(&bLocal_667);
			iLocal_659 = 3;
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/OUTLAW_01_END/OUTLAW_01_END", &iLocal_646, &Local_570, &bLocal_658, 75500, 74624, 73821, 73198, 72882, 56929, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_236(&bLocal_667);
				iLocal_659 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				bLocal_701 = true;
			}
			break;
	}
	return;
}

bool Function_280(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD253 / 53843
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
				Function_236(&iParam1 + 4);
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
						Function_236(&iParam1 + 4);
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
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_287(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_287(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_285(&Global_99170, &Global_10996);
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
						Function_236(&iParam1 + 4);
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
						Function_284(1.0f);
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
						Function_282();
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
					Function_281(1, 1);
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

void Function_281(var uParam0, bool bParam1) //Position: 0xD8B5 / 55477
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

void Function_282() //Position: 0xD984 / 55684
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_283();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_283() //Position: 0xD9C9 / 55753
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_284(bool bParam0) //Position: 0xD9DB / 55771
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

void Function_285(var uParam0, int iParam1) //Position: 0xD9F8 / 55800
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
			if ((&iVar3 == &Global_54076 && !Function_286(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_286(int iParam0) //Position: 0xDA8A / 55946
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

float Function_287(vector3 vParam0) //Position: 0xDABB / 55995
{
	if (Function_289(&vParam0))
	{
		if (Function_288(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_288(int iParam0) //Position: 0xDB88 / 56200
{
	return Function_14(iParam0, 2);
}

bool Function_289(bool bParam0) //Position: 0xDB96 / 56214
{
	return Function_14(bParam0, 1);
}

int Function_290(bool bParam0) //Position: 0xDBA4 / 56228
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

bool Function_291() //Position: 0xDC67 / 56423
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

bool Function_292(struct<37> Param0) //Position: 0xDCA4 / 56484
{
	return Param0.f_36;
}

void Function_293(var uParam0, int iParam1) //Position: 0xDCAF / 56495
{
	Function_294(&uParam0, &iParam1, 0);
	return;
}

void Function_294(int iParam0, bool bParam1, bool bParam2) //Position: 0xDCBF / 56511
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
			Function_295(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_295(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_295(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDE37 / 56887
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

int Function_296() //Position: 0xDE61 / 56929
{
	switch (bLocal_658)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				if (Function_330() && Function_313())
				{
					Function_311();
					Function_309();
					Function_231(&Global_54076, &iLocal_4 + 992[1], 1, 1, 1);
					Function_231(&bLocal_663, &iLocal_4 + 992[3], 1, 1, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_663, "outlaw_sit", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_663, "outlaw_sit");
					SET_REACT_NODE_FOR_ACTOR(&bLocal_663, "outlaw_sit");
					SET_MOVER_FROZEN(&bLocal_663, true);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_663);
					TASK_STAND_STILL(&bLocal_663, -1.0f, 0, 0);
					Function_297();
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_297() //Position: 0xDF54 / 57172
{
	Function_308();
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 552[12], 0.0f);
	AI_SET_NAV_ACTOR_WIDTH(&iLocal_4 + 552[02], 0.0f);
	DECOR_SET_BOOL(&iLocal_4 + 552[12], "CanBeLasso", false);
	DECOR_SET_BOOL(&iLocal_4 + 552[02], "CanBeLasso", false);
	AI_BEHAVIOR_SET_ALLOW(&iLocal_4 + 552[12], 0, 0);
	AI_BEHAVIOR_SET_ALLOW(&iLocal_4 + 552[02], 0, 0);
	Function_307(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 552[02]));
	Function_307(GET_OBJECT_FROM_ACTOR(&iLocal_4 + 552[12]));
	Function_300(&(Local_851[215]), &iLocal_4 + 552[12], "Welsh", 0, 0x5f5e100, 0);
	Function_300(&(Local_851[315]), &iLocal_4 + 552[02], "French", 0, 0x5f5e100, 0);
	Function_299(&iLocal_4 + 592, 322, 4294967295, 0.0f, -1.0f, 1.0f, 512, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 552[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 552[12], 22, 0.0f, 0, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&iLocal_4 + 552[12], 22, 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iLocal_4 + 552[12], 0, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 552[12], 0);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iLocal_4 + 552[12], false);
	SET_ACTOR_ONE_SHOT_DEATH(&iLocal_4 + 552[12], true);
	SQUAD_SET_FACTION(&iLocal_4 + 592, 20);
	Function_298(&bLocal_663, &iLocal_4 + 592, 1);
	uLocal_1016 = CREATE_OBJECTSET_IN_LAYOUT("WelshObjSet", &iLocal_568, 4294967295, 0);
	DECOR_SET_OBJECT(&iLocal_4 + 552[12], "ReturnCorpse", &uLocal_1016);
	uLocal_1018 = CREATE_OBJECTSET_IN_LAYOUT("FrenchObjSet", &iLocal_568, 4294967295, 0);
	DECOR_SET_OBJECT(&iLocal_4 + 552[02], "ReturnCorpse", &uLocal_1018);
	return;
}

void Function_298(var uParam0, var uParam1, bool bParam2) //Position: 0xE132 / 57650
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

void Function_299(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xE184 / 57732
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
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
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
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
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

int Function_300(struct<69> Param0) //Position: 0xE294 / 58004
{
	if (!Function_306(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_305(&Param0, &bParam2))
	{
		return 0;
	}
	Function_304(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_301(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_301(var uParam0, int iParam1, int iParam2) //Position: 0xE2DA / 58074
{
	if (iParam1 != 100000000)
	{
		Function_303(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_302(&uParam0, &iParam2);
	}
	return;
}

void Function_302(struct<69> Param0) //Position: 0xE301 / 58113
{
	Param0.f_68 = 0;
	Function_303(&Param0, 2, &bParam1);
	Function_303(&Param0, 4, &bParam1);
	Function_303(&Param0, 8, &bParam1);
	Function_303(&Param0, 16, &bParam1);
	Function_303(&Param0, 32, &bParam1);
	Function_303(&Param0, 64, &bParam1);
	Function_303(&Param0, 128, &bParam1);
	Function_303(&Param0, 256, &bParam1);
	Function_303(&Param0, 512, &bParam1);
	Function_303(&Param0, 1024, &bParam1);
	return;
}

void Function_303(int iParam0, int iParam1, bool bParam2) //Position: 0xE37C / 58236
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

void Function_304(char* cParam0) //Position: 0xE3BB / 58299
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_305(int iParam0, char* cParam1) //Position: 0xE3C8 / 58312
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

bool Function_306(struct<61> Param0) //Position: 0xE455 / 58453
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

void Function_307(bool bParam0) //Position: 0xE608 / 58888
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

void Function_308() //Position: 0xE63F / 58943
{
	*(&iLocal_4 + 592) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Goon"));
	*(&iLocal_4 + 552[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "French", 584, Vector(-2168,838f, 16,56468f, 2573,682f), Vector(0.0f, 10,39158f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 552[02], &iLocal_4 + 592);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 552[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 552[02], 4, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 552[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 552[02], 19);
	*(&iLocal_4 + 552[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Welsh", 586, Vector(-2170,969f, 16,56469f, 2574,937f), Vector(0.0f, -19,76582f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 552[12], &iLocal_4 + 592);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 552[12]);
	TASK_STAND_STILL(&iLocal_4 + 552[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 552[12], 19);
	return;
}

int Function_309() //Position: 0xE74A / 59210
{
	iLocal_758 = Function_310(Global_46760[0], "narmadillo", "stable01", 1);
	if (IS_DOOR_VALID(&iLocal_758))
	{
		if (IS_DOOR_LOCKED(&iLocal_758))
		{
			Function_160(&iLocal_758, 0);
		}
		OPEN_DOOR_DIRECTION(&iLocal_758, 0);
	}
	else
	{
		return 0;
	}
	iLocal_758 = Function_310(Global_46760[0], "narmadillo", "stable01", 2);
	if (IS_DOOR_VALID(&iLocal_758))
	{
		if (IS_DOOR_LOCKED(&iLocal_758))
		{
			Function_160(&iLocal_758, 0);
		}
		OPEN_DOOR_DIRECTION(&iLocal_758, 1);
	}
	else
	{
		return 0;
	}
	iLocal_758 = Function_310(Global_46760[0], "narmadillo", "stable01", 3);
	if (IS_DOOR_VALID(&iLocal_758))
	{
		if (IS_DOOR_LOCKED(&iLocal_758))
		{
			Function_160(&iLocal_758, 0);
		}
		OPEN_DOOR_DIRECTION(&iLocal_758, 1);
	}
	else
	{
		return 0;
	}
	iLocal_758 = Function_310(Global_46760[0], "narmadillo", "stable01", 4);
	if (IS_DOOR_VALID(&iLocal_758))
	{
		if (IS_DOOR_LOCKED(&iLocal_758))
		{
			Function_160(&iLocal_758, 0);
		}
		OPEN_DOOR_DIRECTION(&iLocal_758, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

var Function_310(int iParam0, char* cParam1, bool bParam3) //Position: 0xE889 / 59529
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

void Function_311() //Position: 0xE92E / 59694
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
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Outlaw01_layout");
	(&iLocal_4 + 728) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 688[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-2170,754f, 16,56471f, 2571,41f), Vector(0.0f, 0.0f, 0.0f), Vector(19,13668f, 14,10021f, 12,20266f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 728, &iLocal_4 + 688[0]);
	*(&iLocal_4 + 688[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-2170,917f, 16,56463f, 2571,684f), Vector(0.0f, 0.0f, 0.0f), Vector(9,987023f, 13,15468f, 12,53735f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 728, &iLocal_4 + 688[1]);
	*(&iLocal_4 + 688[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-1960,618f, 36,0851f, 3291,144f), Vector(-0,3217317f, -11,14473f, -2,231719f), Vector(52,86822f, 13,04008f, 38,78314f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 728, &iLocal_4 + 688[2]);
	*(&iLocal_4 + 688[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene04Vol", 2,802597E-45f, Vector(-1864,444f, 25,09804f, 3305,418f), Vector(0.0f, 0.0f, 0.0f), Vector(10,23051f, 12,62848f, 19,22637f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 728, &iLocal_4 + 688[3]);
	*(&iLocal_4 + 760) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "RestrictAmbient_set");
	*(&iLocal_4 + 736[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "restrict_amb_1", 2,802597E-45f, Vector(-1899,146f, 27,60424f, 3304.0f), Vector(0.0f, 0.0f, 0.0f), Vector(141,7984f, 41,289f, 75,11379f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 760, &iLocal_4 + 736[0]);
	*(&iLocal_4 + 736[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "restrict_amb_2", 2,802597E-45f, Vector(-2174,742f, 16,50545f, 2571,213f), Vector(0.0f, 0.0f, 0.0f), Vector(20,0702f, 13,04943f, 12,0262f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 760, &iLocal_4 + 736[1]);
	*(&iLocal_4 + 808) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage_One_Vols_set");
	*(&iLocal_4 + 768[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Help_Irish", 2,802597E-45f, Vector(-2168,047f, 17,22014f, 2572,301f), Vector(0.0f, 0,7332845f, 0.0f), Vector(3,614251f, 4,604604f, 9,967336f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 808, &iLocal_4 + 768[0]);
	*(&iLocal_4 + 768[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Kill_Irish", 2,802597E-45f, Vector(-2170,894f, 16,50429f, 2571,378f), Vector(0.0f, 0.0f, 0.0f), Vector(12,56848f, 11,32543f, 12,21532f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 808, &iLocal_4 + 768[1]);
	*(&iLocal_4 + 768[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ClearCorpse", 2,802597E-45f, Vector(-2168,248f, 17,22014f, 2574,409f), Vector(0.0f, 0,7332845f, 0.0f), Vector(4,24719f, 4,604604f, 5,421701f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 808, &iLocal_4 + 768[2]);
	*(&iLocal_4 + 768[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ClearFFF", 2,802597E-45f, Vector(-2194,205f, 16,58016f, 2592,439f), Vector(0.0f, 0,7332845f, 0.0f), Vector(7,205051f, 9,478106f, 9,29022f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 808, &iLocal_4 + 768[3]);
	*(&iLocal_4 + 888) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage_Two_Vols_set");
	*(&iLocal_4 + 816[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AtJulio", 4,203895E-45f, Vector(-1956,822f, 35,86242f, 3284,713f), Vector(0.0f, 3,35688f, 0.0f), Vector(18,96849f, 12,22739f, 21,9662f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[0]);
	*(&iLocal_4 + 816[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Start_Fight_Early", 2,802597E-45f, Vector(-1874,506f, 36,83927f, 3303,479f), Vector(0.0f, -17,75551f, 0.0f), Vector(77,02818f, 33,57417f, 30,22754f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[1]);
	*(&iLocal_4 + 816[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nInit_Camp", 2,802597E-45f, Vector(-2008,954f, 39,15295f, 3330,469f), Vector(0.0f, -12,43272f, 0.0f), Vector(22,9329f, 72,74339f, 744,6756f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[2]);
	*(&iLocal_4 + 816[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Comp_MoveTo_FinalPos", 2,802597E-45f, Vector(-1965,355f, 37,63634f, 3288,214f), Vector(0.0f, 0.0f, 0.0f), Vector(24,76578f, 37,41403f, 53,68062f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[3]);
	*(&iLocal_4 + 816[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nMeet_Hill", 2,802597E-45f, Vector(-2001,879f, 37,77444f, 3277,339f), Vector(0.0f, 21,92136f, 0.0f), Vector(95,90931f, 46,23265f, 115,631f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[4]);
	*(&iLocal_4 + 816[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AUDIO_OnFootVol", 2,802597E-45f, Vector(-2180,47f, 16,26094f, 2572,23f), Vector(0.0f, -0,9717818f, 0.0f), Vector(21,77479f, 46,23265f, 22,00113f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[5]);
	*(&iLocal_4 + 816[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CloseDonJulio", 2,802597E-45f, Vector(-2262,327f, 20,45433f, 3121,499f), Vector(0.0f, -31,44803f, 0.0f), Vector(5,616511f, 46,23265f, 626,559f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[6]);
	*(&iLocal_4 + 816[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Julio_slow", 4,203895E-45f, Vector(-1959,609f, 35,86242f, 3286,956f), Vector(0.0f, 3,35688f, 0.0f), Vector(16,94088f, 16,21279f, 32,39426f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 888, &iLocal_4 + 816[7]);
	*(&iLocal_4 + 976) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage_Three_Vols_set");
	*(&iLocal_4 + 896[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Camp_Near_House", 2,802597E-45f, Vector(-1864,539f, 27,79807f, 3299,106f), Vector(0.0f, 0.0f, 0.0f), Vector(8,486137f, 7,427784f, 10,31349f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[0]);
	*(&iLocal_4 + 896[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Defend_Front", 2,802597E-45f, Vector(-1885,7f, 25,57809f, 3305,338f), Vector(0.0f, 0.0f, 0.0f), Vector(26,67559f, 11,94152f, 28,02181f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[1]);
	*(&iLocal_4 + 896[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Defend_Camp", 2,802597E-45f, Vector(-1864,656f, 30,16144f, 3304,586f), Vector(0.0f, 80,9051f, 0.0f), Vector(23,0241f, 11,94152f, 30,98769f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[2]);
	*(&iLocal_4 + 896[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "In_House", 2,802597E-45f, Vector(-1864,589f, 27,03552f, 3305,63f), Vector(0.0f, 0.0f, 0.0f), Vector(5,477431f, 3,408449f, 6,617035f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[3]);
	*(&iLocal_4 + 896[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Alert_Bandits", 4,203895E-45f, Vector(-1896,836f, 25,4424f, 3302,127f), Vector(0.0f, -26,76188f, 0.0f), Vector(9,962561f, 23,42633f, 8,200882f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[4]);
	*(&iLocal_4 + 896[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "FrontSide_Vol", 2,802597E-45f, Vector(-1874,446f, 24,72951f, 3303,231f), Vector(0.0f, -1,468457f, 0.0f), Vector(28,94024f, 33,57417f, 31,61059f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[5]);
	*(&iLocal_4 + 896[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "On_Cliff", 2,802597E-45f, Vector(-1942,141f, 29,01723f, 3291,945f), Vector(0.0f, -1,468457f, 0.0f), Vector(40,4848f, 33,57417f, 31,61059f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[6]);
	*(&iLocal_4 + 896[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Acknowledge_0", 2,802597E-45f, Vector(-1909,971f, 24,13172f, 3296,157f), Vector(0.0f, -92,68867f, 0.0f), Vector(22,81673f, 13,00686f, 32,12043f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[7]);
	*(&iLocal_4 + 896[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "NoHorse", 2,802597E-45f, Vector(-1882,048f, 24,13172f, 3297,468f), Vector(0.0f, -92,68867f, 0.0f), Vector(57,15569f, 19,19901f, 104,7642f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 896[8]);
	*(&iLocal_4 + 984) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 992[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-2164,424f, 16,45662f, 2570,938f), Vector(0.0f, -269,5233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 992[0], &iLocal_4 + 984);
	*(&iLocal_4 + 992[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd01", Vector(-2168,76f, 16,50196f, 2570,128f), Vector(0.0f, -180,8931f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 992[1], &iLocal_4 + 984);
	*(&iLocal_4 + 992[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorse01", Vector(-2183,395f, 16,24631f, 2559,864f), Vector(0.0f, 263,7037f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 992[2], &iLocal_4 + 984);
	*(&iLocal_4 + 992[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart01", Vector(-2167,382f, 16,711f, 2574,94f), Vector(0.0f, 22,42733f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 992[3], &iLocal_4 + 984);
	*(&iLocal_4 + 1032) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1040[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-2169,533f, 16,50275f, 2571,874f), Vector(0.0f, 0,1113825f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[0], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd02", Vector(-2176,985f, 16,42522f, 2570,287f), Vector(0.0f, 89,61227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[1], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(-2168.0f, 16,56471f, 2575,827f), Vector(0.0f, 9,519646f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[2], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd02", Vector(-2177,235f, 16,34307f, 2572,137f), Vector(0.0f, -257,7888f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[3], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Outlaw_Move_To_0", Vector(-2168,795f, 16,56466f, 2572,837f), Vector(0.0f, -177,4014f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[4], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorse02", Vector(-2182,151f, 16,26094f, 2569,792f), Vector(0.0f, 176,7365f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[5], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FrenchCorpse", Vector(-2171,275f, 16,59595f, 2573,587f), Vector(0.0f, 364,4025f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[6], &iLocal_4 + 1032);
	*(&iLocal_4 + 1040[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WelshCorpse", Vector(-2172,515f, 16,5647f, 2574,606f), Vector(0.0f, 24,70284f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1040[7], &iLocal_4 + 1032);
	*(&iLocal_4 + 1112) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1120[03]) = Vector(-1953,356f, 34,4092f, 3287,288f);
	*(&iLocal_4 + 1120[03] + 12) = Vector(0.0f, -100.0f, 0.0f);
	*(&iLocal_4 + 1464[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-1953,356f, 34,4092f, 3287,288f), Vector(0.0f, -100.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[0], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[13]) = Vector(-1953,356f, 34,4092f, 3287,288f);
	*(&iLocal_4 + 1120[13] + 12) = Vector(0.0f, -100.0f, 0.0f);
	*(&iLocal_4 + 1464[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd03", Vector(-1953,356f, 34,4092f, 3287,288f), Vector(0.0f, -100.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[1], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[23]) = Vector(-1950,844f, 33,76809f, 3286,022f);
	*(&iLocal_4 + 1120[23] + 12) = Vector(0.0f, 265,976f, 0.0f);
	*(&iLocal_4 + 1464[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(-1950,844f, 33,76809f, 3286,022f), Vector(0.0f, 265,976f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[2], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[33]) = Vector(-1951,725f, 33,85683f, 3285,96f);
	*(&iLocal_4 + 1120[33] + 12) = Vector(0.0f, 259,9136f, 0.0f);
	*(&iLocal_4 + 1464[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd03", Vector(-1951,725f, 33,85683f, 3285,96f), Vector(0.0f, 259,9136f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[3], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[43]) = Vector(-1943,618f, 32,77796f, 3288,063f);
	*(&iLocal_4 + 1120[43] + 12) = Vector(0.0f, -100.0f, 0.0f);
	*(&iLocal_4 + 1464[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Player_Move_To_0", Vector(-1943,618f, 32,77796f, 3288,063f), Vector(0.0f, -100.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[4], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[53]) = Vector(-1943,001f, 32,70398f, 3286,365f);
	*(&iLocal_4 + 1120[53] + 12) = Vector(0.0f, 259,9136f, 0.0f);
	*(&iLocal_4 + 1464[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Comp_Move_To_0", Vector(-1943,001f, 32,70398f, 3286,365f), Vector(0.0f, 259,9136f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[5], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[63]) = Vector(-1965,191f, 35,64645f, 3276,411f);
	*(&iLocal_4 + 1120[63] + 12) = Vector(0.0f, 187,865f, 0.0f);
	*(&iLocal_4 + 1464[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Comp_Move_To_0a", Vector(-1965,191f, 35,64645f, 3276,411f), Vector(0.0f, 187,865f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[6], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[73]) = Vector(-2063,868f, 29,907f, 3359,679f);
	*(&iLocal_4 + 1120[73] + 12) = Vector(0.0f, 187,865f, 0.0f);
	*(&iLocal_4 + 1464[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Comp_Move_To_1", Vector(-2063,868f, 29,907f, 3359,679f), Vector(0.0f, 187,865f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[7], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[83]) = Vector(-2114,375f, 30,40419f, 3345,771f);
	*(&iLocal_4 + 1120[83] + 12) = Vector(0.0f, 187,865f, 0.0f);
	*(&iLocal_4 + 1464[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Comp_Move_To_2", Vector(-2114,375f, 30,40419f, 3345,771f), Vector(0.0f, 187,865f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[8], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[93]) = Vector(-2141,829f, 25,7781f, 3275,05f);
	*(&iLocal_4 + 1120[93] + 12) = Vector(0.0f, 187,865f, 0.0f);
	*(&iLocal_4 + 1464[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Comp_Move_To_3", Vector(-2141,829f, 25,7781f, 3275,05f), Vector(0.0f, 187,865f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[9], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[103]) = Vector(-1957,554f, 35,95603f, 3293,554f);
	*(&iLocal_4 + 1120[103] + 12) = Vector(0.0f, -100.0f, 0.0f);
	*(&iLocal_4 + 1464[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "P_Horse_Start", Vector(-1957,554f, 35,95603f, 3293,554f), Vector(0.0f, -100.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[10], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[113]) = Vector(-1957,88f, 35,88103f, 3290,12f);
	*(&iLocal_4 + 1120[113] + 12) = Vector(0.0f, -100.0f, 0.0f);
	*(&iLocal_4 + 1464[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "C_Horse_Start", Vector(-1957,88f, 35,88103f, 3290,12f), Vector(0.0f, -100.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[11], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[123]) = Vector(-1955,134f, 34,27042f, 3284,709f);
	*(&iLocal_4 + 1120[123] + 12) = Vector(0.0f, 259,9136f, 0.0f);
	*(&iLocal_4 + 1464[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Final_approach", Vector(-1955,134f, 34,27042f, 3284,709f), Vector(0.0f, 259,9136f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[12], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[133]) = Vector(-1954,189f, 35,86242f, 3290,069f);
	*(&iLocal_4 + 1120[133] + 12) = Vector(0.0f, 3,35688f, 0.0f);
	*(&iLocal_4 + 1464[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "P_Approach", Vector(-1954,189f, 35,86242f, 3290,069f), Vector(0.0f, 3,35688f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[13], &iLocal_4 + 1112);
	*(&iLocal_4 + 1584) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1592[03]) = Vector(-1863,151f, 25,66399f, 3305,209f);
	*(&iLocal_4 + 1592[03] + 12) = Vector(0.0f, -458,1603f, 0.0f);
	*(&iLocal_4 + 1720[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(-1863,151f, 25,66399f, 3305,209f), Vector(0.0f, -458,1603f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[0], &iLocal_4 + 1584);
	*(&iLocal_4 + 1592[13]) = Vector(-1863,748f, 25,66399f, 3303,31f);
	*(&iLocal_4 + 1592[13] + 12) = Vector(0.0f, 139,1903f, 0.0f);
	*(&iLocal_4 + 1720[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd04", Vector(-1863,748f, 25,66399f, 3303,31f), Vector(0.0f, 139,1903f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[1], &iLocal_4 + 1584);
	*(&iLocal_4 + 1592[23]) = Vector(-2066,897f, 34,45525f, 3315,617f);
	*(&iLocal_4 + 1592[23] + 12) = Vector(0.0f, -90.0f, 0.0f);
	*(&iLocal_4 + 1720[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart04", Vector(-2066,897f, 34,45525f, 3315,617f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[2], &iLocal_4 + 1584);
	*(&iLocal_4 + 1592[33]) = Vector(-2064,929f, 33,4594f, 3318,045f);
	*(&iLocal_4 + 1592[33] + 12) = Vector(0.0f, 105.0f, 0.0f);
	*(&iLocal_4 + 1720[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd04", Vector(-2064,929f, 33,4594f, 3318,045f), Vector(0.0f, 105.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[3], &iLocal_4 + 1584);
	*(&iLocal_4 + 1592[43]) = Vector(-1859,133f, 24,924f, 3301,647f);
	*(&iLocal_4 + 1592[43] + 12) = Vector(0.0f, 12,09347f, 0.0f);
	*(&iLocal_4 + 1720[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nHorsePort", Vector(-1859,133f, 24,924f, 3301,647f), Vector(0.0f, 12,09347f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[4], &iLocal_4 + 1584);
	*(&iLocal_4 + 1768) = CREATE_OBJECTSET_IN_LAYOUT("Stage_ThreeSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1776[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "House_Dest", Vector(-1864,53f, 25,79503f, 3304.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1776[0], &iLocal_4 + 1768);
	*(&iLocal_4 + 1776[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nGuard_Pos", Vector(-1864,539f, 25,518f, 3301,321f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1776[1], &iLocal_4 + 1768);
	*(&iLocal_4 + 1776[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Fire_Pos", Vector(-1883,131f, 24,71678f, 3304,897f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1776[2], &iLocal_4 + 1768);
	*(&iLocal_4 + 1808) = CREATE_OBJECTSET_IN_LAYOUT("Julio_CoverSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1816[03]) = Vector(-1894,958f, 24,36841f, 3301,831f);
	*(&iLocal_4 + 1816[03] + 12) = Vector(0.0f, 75,19828f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_01", Vector(-1894,958f, 24,36841f, 3301,831f), Vector(0.0f, 75,19828f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[13]) = Vector(-1892,525f, 24,2181f, 3299,296f);
	*(&iLocal_4 + 1816[13] + 12) = Vector(-148,4207f, 88,53745f, -148,1911f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_02", Vector(-1892,525f, 24,2181f, 3299,296f), Vector(-148,4207f, 88,53745f, -148,1911f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[23]) = Vector(-1889,163f, 23,93758f, 3298,265f);
	*(&iLocal_4 + 1816[23] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_03", Vector(-1889,163f, 23,93758f, 3298,265f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[33]) = Vector(-1889,027f, 24,52248f, 3305,395f);
	*(&iLocal_4 + 1816[33] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_04", Vector(-1889,027f, 24,52248f, 3305,395f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[43]) = Vector(-1886,706f, 24,58213f, 3307,165f);
	*(&iLocal_4 + 1816[43] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_05", Vector(-1886,706f, 24,58213f, 3307,165f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[53]) = Vector(-1892,694f, 24,41572f, 3304,547f);
	*(&iLocal_4 + 1816[53] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_06", Vector(-1892,694f, 24,41572f, 3304,547f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[63]) = Vector(-1879,707f, 24,77106f, 3309,552f);
	*(&iLocal_4 + 1816[63] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_07", Vector(-1879,707f, 24,77106f, 3309,552f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[73]) = Vector(-1885,886f, 24,58002f, 3301,927f);
	*(&iLocal_4 + 1816[73] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_08", Vector(-1885,886f, 24,58002f, 3301,927f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[83]) = Vector(-1876,238f, 24,82199f, 3301,011f);
	*(&iLocal_4 + 1816[83] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_09", Vector(-1876,238f, 24,82199f, 3301,011f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 1808);
	*(&iLocal_4 + 1816[93]) = Vector(-1875,202f, 24,84719f, 3305,638f);
	*(&iLocal_4 + 1816[93] + 12) = Vector(0.0f, 85,90636f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Loc_10", Vector(-1875,202f, 24,84719f, 3305,638f), Vector(0.0f, 85,90636f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 1808);
	*(&iLocal_4 + 2064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Welsh_Go", Vector(-2170,164f, 16,53333f, 2571,016f), Vector(0.0f, -278,4599f, 0.0f));
	*(&iLocal_4 + 2072) = Vector(-2074,29f, 33,36814f, 3310,262f);
	*(&iLocal_4 + 2072 + 12) = Vector(0.0f, 42,73969f, 0.0f);
	*(&iLocal_4 + 2096) = Vector(-2067,583f, 33,50898f, 3317,97f);
	*(&iLocal_4 + 2096 + 12) = Vector(0.0f, 29,03694f, 0.0f);
	*(&iLocal_4 + 2120) = Vector(-1964,863f, 37,05221f, 3288.0f);
	*(&iLocal_4 + 2120 + 12) = Vector(0.0f, 259,3558f, 0.0f);
	*(&iLocal_4 + 2144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Julio_Gateway", Vector(-1964,863f, 37,05221f, 3288.0f), Vector(0.0f, 259,3558f, 0.0f));
	*(&iLocal_4 + 2152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "French_Shoot", Vector(-2168,869f, 16,56469f, 2572,678f), Vector(0.0f, -360,0176f, 0.0f));
	*(&iLocal_4 + 2160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lean_rail_nospawn", "lean_rail_nospawn", Vector(-1866,775f, 25,67158f, 3300,705f), Vector(0.0f, 90,04759f, 0.0f));
	*(&iLocal_4 + 2168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-1884,899f, 24,58605f, 3303,247f), Vector(0.0f, 227,9413f, 0.0f));
	*(&iLocal_4 + 2176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_ground_smoke_indef1", "sit_ground_smoke_indef", Vector(-1881,732f, 24,67928f, 3303,41f), Vector(0.0f, -224,4909f, 0.0f));
	*(&iLocal_4 + 2184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "leaning_stand_indef", "leaning_stand_indef", Vector(-1896,926f, 24,31069f, 3303,085f), Vector(0.0f, -187,924f, 0.0f));
	*(&iLocal_4 + 2192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "sit_ground_smoke_indef3", "sit_ground_smoke_indef", Vector(-1889,994f, 24,49762f, 3304,742f), Vector(0.0f, -5,123277f, 0.0f));
	*(&iLocal_4 + 2200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lean_rail_drink", "lean_rail_drink", Vector(-1889,188f, 24,10474f, 3297,829f), Vector(0.0f, -274,8775f, 0.0f));
	*(&iLocal_4 + 2208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "leaning_stand_indef1", "leaning_stand_indef", Vector(-1884,325f, 24,60854f, 3300,122f), Vector(0.0f, -11,30618f, 0.0f));
	*(&iLocal_4 + 2216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand", "rand_idle_stand", Vector(-1898,213f, 24,25029f, 3301,648f), Vector(0.0f, 78,83821f, 0.0f));
}

struct<400> ÅIA<¾E"%_ÅM]ALpE"¸,ÅRÊA\"E#JùÅnHApXE$}Å¥æAE$ÀÅéºA*¦E%G=Å	@
A¡{E%ÎzÅ	ê!A~E&º@Å
}Ar´E'¡ûÅUA~²E(HÅúA|âE(êÅ>ÂAkÇE)þ®Å(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x108C6 / 67782
{
	float fVar56;
	
}

int Function_313() //Position: 0x10E3C / 69180
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_329(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_323(&iLocal_600))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_665))
		{
			bLocal_665 = Function_223(1, 0, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_663))
		{
			bLocal_663 = Function_314(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

var Function_314(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x10EA2 / 69282
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
		if (!Function_165(&(Global_43791[Global_46722[3]]), 4))
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
		Function_234(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_322(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_317(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_316(&bVar1, 0, 0, 0, 0);
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
		Function_315(&bVar1, 0);
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

void Function_315(var uParam0, bool bParam1) //Position: 0x113E2 / 70626
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_316(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x11404 / 70660
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

var Function_317(int iParam0, int iParam1) //Position: 0x11465 / 70757
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_321(iParam0))
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
						Function_318(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_318(var uParam0, int iParam1) //Position: 0x114F3 / 70899
{
	Function_320(&uParam0);
	Function_319(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_319(int iParam0) //Position: 0x1151F / 70943
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_320(int iParam0) //Position: 0x11545 / 70981
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

bool Function_321(int iParam0) //Position: 0x1161B / 71195
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_322(int iParam0, var uParam1) //Position: 0x11632 / 71218
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

bool Function_323(struct<2>[] Param0) //Position: 0x116D8 / 71384
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_328();
	iVar1 = 0;
	if (!Function_179(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_327(&(Param0[iVar02]), 8);
		}
		else if (Function_326())
		{
			iVar1 = 1;
			Function_327(&(Param0[iVar02]), 8);
		}
		Function_327(&(Param0[iVar02]), 16);
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
				Function_327(&(Param0[iVar02]), 1);
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
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_327(&(Param0[iVar02]), 2);
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
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_327(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_327(&(Param0[iVar02]), 2);
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
	Function_324();
	return 1;
}

void Function_324() //Position: 0x11A9A / 72346
{
	if (!Function_325(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_325(int iParam0) //Position: 0x11ADA / 72410
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_326() //Position: 0x11AF6 / 72438
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

void Function_327(struct<13> Param0) //Position: 0x11B24 / 72484
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_328() //Position: 0x11B37 / 72503
{
	if (!Function_325(128))
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

bool Function_329(bool bParam0) //Position: 0x11B79 / 72569
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

int Function_330() //Position: 0x11BA9 / 72617
{
	Function_331(&iLocal_4 + 144, 584, 2, 0);
	Function_331(&iLocal_4 + 144, 586, 2, 0);
	if (Function_323(&iLocal_4 + 144))
	{
		return 1;
	}
	return 0;
}

var Function_331(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11BD6 / 72662
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
			Function_327(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_327(&(Param0[iVar02]), 8);
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

int Function_332() //Position: 0x11CB2 / 72882
{
	switch (bLocal_658)
	{
		case 0x00000063:
			Function_333(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_333(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_333(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_333(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_333(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x11D1F / 72991
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
	Function_281(&iParam9, &bParam10);
}

int Function_334() //Position: 0x11DEE / 73198
{
	switch (bLocal_658)
	{
		case 0x00000063:
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, Function_337(&Global_54076, 40), 0);
			return 1;
			break;
		
		case 0x00000001:
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_663, 1);
			RESET_REACT_NODE_FOR_ACTOR(&bLocal_663);
			Function_231(&Global_54076, &iLocal_4 + 1040[1], 0, 0, 1);
			Function_231(&bLocal_663, &iLocal_4 + 1040[3], 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 0);
			SET_ACTORS_HORSE(&bLocal_663, &iLocal_746);
			Function_335(&bLocal_663, &iLocal_746, 1);
			MEMORY_PREFER_RIDING(&bLocal_663, true);
			AI_ACTOR_FORCE_SPEED(&bLocal_663, true);
			TASK_CLEAR(&bLocal_663);
			TASK_MOUNT(&bLocal_663, &iLocal_746, 0, 1, 2, 2147483647);
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_335(bool bParam0, int iParam1, bool bParam2) //Position: 0x11ECE / 73422
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			MEMORY_IDENTIFY(&bParam0, &iParam1);
			Function_336(&iParam1);
			uVar0 = Function_336(&iParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&bParam0, &iParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&bParam0, &iParam1, &uVar0);
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

struct<8> Function_336(int iParam0) //Position: 0x11FDF / 73695
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

var Function_337(var uParam0, int iParam1) //Position: 0x1204B / 73803
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

int Function_338() //Position: 0x1205D / 73821
{
	switch (bLocal_658)
	{
		case 0x00000063:
			if (!Function_339() && !Function_323(&iLocal_582))
			{
				return 0;
			}
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_339() //Position: 0x12097 / 73879
{
	Function_331(&iLocal_4 + 8, 977, 2, 0);
	Function_331(&iLocal_4 + 8, 976, 2, 0);
	Function_340(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_340(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_340(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_indef", 1, 0);
	Function_340(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand_indef", 1, 0);
	Function_340(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_340(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	if (Function_323(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_340(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x12273 / 74355
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_341(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_327(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_341(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x122B1 / 74417
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_179(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_327(&(Param0[iVar02]), 4);
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

int Function_342() //Position: 0x12380 / 74624
{
	switch (bLocal_658)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				return 1;
			}
			if (Function_330() && Function_313())
			{
				Function_309();
				Function_311();
				Function_231(&Global_54076, &iLocal_4 + 992[1], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_665))
				{
					Function_231(&bLocal_665, &iLocal_4 + 992[2], 1, 1, 1);
				}
				Function_231(&bLocal_663, &iLocal_4 + 992[3], 1, 1, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_663, "outlaw_sit", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_663, "outlaw_sit");
				SET_REACT_NODE_FOR_ACTOR(&bLocal_663, "outlaw_sit");
				SET_MOVER_FROZEN(&bLocal_663, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_663);
				TASK_STAND_STILL(&bLocal_663, -1.0f, 0, 0);
				Function_297();
			}
			break;
		
		case 0x00000001:
			Function_343();
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_343() //Position: 0x12479 / 74873
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iLocal_4 + 552[12]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_4 + 552[12], &iLocal_4 + 768[2]))
		{
			DESTROY_ACTOR(&iLocal_4 + 552[12]);
			Function_226(&iLocal_4 + 1040[7]);
			Function_344(&iLocal_4 + 1040[7]);
			uLocal_712 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_568, "WelshCorpse", 8,211609E-43f, Function_226(&iLocal_4 + 1040[7]), Function_344(&iLocal_4 + 1040[7]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(&uLocal_712, 10.0f, true, 1092616192);
		}
	}
	else if (GET_OBJECTSET_SIZE(&uLocal_1016) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_1016);
		if (IS_OBJECT_VALID(&uVar0))
		{
			if (IS_OBJECT_IN_VOLUME(&uVar0, &iLocal_4 + 768[2]))
			{
				DESTROY_OBJECT(&uVar0);
				Function_226(&iLocal_4 + 1040[7]);
				Function_344(&iLocal_4 + 1040[7]);
				uLocal_712 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_568, "WelshCorpse", 8,211609E-43f, Function_226(&iLocal_4 + 1040[7]), Function_344(&iLocal_4 + 1040[7]), "dead_ground_male");
				SNAP_OBJECT_TO_GROUND(&uLocal_712, 10.0f, true, 1092616192);
			}
		}
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 552[02]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_4 + 552[02], &iLocal_4 + 768[2]))
		{
			DESTROY_ACTOR(&iLocal_4 + 552[02]);
			Function_226(&iLocal_4 + 1040[6]);
			Function_344(&iLocal_4 + 1040[6]);
			iLocal_710 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_568, "FrenchCorpse", 8,183583E-43f, Function_226(&iLocal_4 + 1040[6]), Function_344(&iLocal_4 + 1040[6]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(&iLocal_710, 10.0f, true, 1092616192);
		}
	}
	else if (GET_OBJECTSET_SIZE(&uLocal_1018) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_1018);
		if (IS_OBJECT_VALID(&uVar0))
		{
			if (IS_OBJECT_IN_VOLUME(&uVar0, &iLocal_4 + 768[2]))
			{
				DESTROY_OBJECT(&uVar0);
				Function_226(&iLocal_4 + 1040[6]);
				Function_344(&iLocal_4 + 1040[6]);
				iLocal_710 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_568, "FrenchCorpse", 8,183583E-43f, Function_226(&iLocal_4 + 1040[6]), Function_344(&iLocal_4 + 1040[6]), "dead_ground_male");
				SNAP_OBJECT_TO_GROUND(&iLocal_710, 10.0f, true, 1092616192);
			}
		}
	}
	return;
}

struct<8> Function_344(var uParam0) //Position: 0x126C3 / 75459
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&uParam0, &Var0);
	return StackVal, Var0;
}

int Function_345() //Position: 0x126EC / 75500
{
	switch (bLocal_658)
	{
		case 0x00000063:
			Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_346(StackVal, &iLocal_568, (&Global_6667[1828] + 88), &iLocal_4 + 688[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_665, true);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_746, true);
			CLEAR_DECALS();
			Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_226(&iLocal_4 + 1040[0]);
			Function_346(StackVal, &iLocal_568, Function_226(&iLocal_4 + 1040[0]), &iLocal_4 + 688[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000065:
			Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_226(&iLocal_4 + 1720[1]);
			Function_346(StackVal, &iLocal_568, Function_226(&iLocal_4 + 1720[1]), &iLocal_646 + 32, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_348(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_346(int iParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x127F2 / 75762
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &iParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_347(&uVar1, &iParam0);
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

void Function_347(var uParam0, float fParam1) //Position: 0x12A92 / 76434
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

void Function_348(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x12B14 / 76564
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
				Function_350(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_350(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_349()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_349()));
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
	if (Function_325(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_168(0x4000000);
	}
	if (Function_325(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_168(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_349() //Position: 0x12DC6 / 77254
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

struct<8> Function_350(int iParam0) //Position: 0x12E54 / 77396
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_351(int iParam0) //Position: 0x12E66 / 77414
{
	if (!Function_292(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_186(1, 0, 1);
		}
	}
	return;
}

bool Function_352(bool bParam0) //Position: 0x12E82 / 77442
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_165(&(Global_43791[bParam0]), 4);
}

void Function_353() //Position: 0x12E9E / 77470
{
	Function_191(32);
	Function_168(116748);
	Function_354(9);
	return;
}

void Function_354(int iParam0) //Position: 0x12EB5 / 77493
{
	Function_355(&Global_43580, iParam0);
	return;
}

void Function_355(var uParam0, int iParam1) //Position: 0x12EC3 / 77507
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_356(bool bParam0) //Position: 0x12EEB / 77547
{
	Function_357(0, 0x40400000);
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

void Function_357(float fParam0, float fParam1) //Position: 0x12F21 / 77601
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
	Function_359();
	Function_358();
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

void Function_358() //Position: 0x13032 / 77874
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_359() //Position: 0x13066 / 77926
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

void Function_360() //Position: 0x1316C / 78188
{
	if (iLocal_659 < 3 && iLocal_659 > 105)
	{
		Function_226(&iLocal_4 + 1720[1]);
		Function_437(StackVal, "$/cutscene/OUTLAW_01_END/OUTLAW_01_END", &uLocal_796, Function_226(&iLocal_4 + 1720[1]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_659)
	{
		case 0x00000000:
			Function_356(0);
			if (!bLocal_714)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SET_ACTOR_HEALTH(&bLocal_663, GET_ACTOR_MAX_HEALTH(&bLocal_663));
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			}
			Function_236(&bLocal_772);
			Function_436(&bLocal_772);
			if (iLocal_679[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_353();
				bLocal_660 = Global_46736[0];
				if (!Function_352(bLocal_660))
				{
					Function_351(&Local_570);
				}
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					Function_231(&bLocal_665, &iLocal_4 + 1464[0], 1, 1, 1);
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_665);
					Function_434(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
				}
				else
				{
					Function_434(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
				}
				Function_236(&bLocal_667);
				iLocal_659 = 1;
			}
			else
			{
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_433()) && (Function_352(bLocal_660) || bLocal_660 != 4294967295))
			{
				Function_428();
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (bLocal_714)
				{
					Function_236(&bLocal_667);
					iLocal_659 = 8;
				}
				else if (Function_426(StackVal, StackVal, StackVal, StackVal, StackVal, Local_570, 2))
				{
					AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
					Function_236(&bLocal_667);
					iLocal_659 = 3;
				}
				else
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_236(&bLocal_667);
					iLocal_659 = 4;
				}
				Function_248(bLocal_658);
				Function_418(StackVal, Function_248(bLocal_658), bLocal_658, Global_46736[0], Function_250(bLocal_658), 2);
			}
			break;
		
		case 0x00000003:
			if (Function_403())
			{
				HUD_ENABLE(1);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				iLocal_715 = 1;
				TASK_STAND_STILL(&bLocal_665, -1.0f, 0, 0);
				ACTOR_END_FORCE_HOLSTER(&Global_54076);
				Function_236(&bLocal_667);
				iLocal_659 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_715 = 1;
			Function_401();
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_665);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_665, &iLocal_4 + 896[8]);
			bLocal_750 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(0, &iLocal_4 + 1120[63], 0);
			TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1120[63], 2, 3212836864);
			TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1120[73], 4, 3212836864);
			TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1120[83], 4, 3212836864);
			TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 1120[93], 4);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_663, bLocal_750);
			TASK_SEQUENCE_RELEASE(bLocal_750, 1);
			TASK_PRIORITY_SET(&bLocal_663, true);
			TASK_CLEAR(&iLocal_4 + 408[32]);
			TASK_USE_GRINGO(&iLocal_4 + 408[32], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2208), "UseCase1", 4294967295, 1);
			AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[32], 1);
			TASK_PRIORITY_SET(&iLocal_4 + 408[32], true);
			MEMORY_ALLOW_SHOOTING(&iLocal_4 + 408[32], false);
			TASK_CLEAR(&iLocal_4 + 408[52]);
			bLocal_750 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2248, 1, 1, 0, 1, false);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2216), "UseCase1", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_4 + 408[52], bLocal_750);
			TASK_SEQUENCE_RELEASE(bLocal_750, 1);
			AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[52], 1);
			TASK_PRIORITY_SET(&iLocal_4 + 408[52], true);
			MEMORY_ALLOW_SHOOTING(&iLocal_4 + 408[52], false);
			Function_236(&bLocal_667);
			iLocal_659 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1776[0], 330, 0f, 2, 0);
				Function_400("Outlaw01_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				iLocal_659 = 7;
			}
			break;
		
		case 0x00000007:
			Function_236(&bLocal_667);
			iLocal_659 = 8;
			break;
		
		case 0x00000008:
			if (Function_391(&bLocal_671, 100.0f, 185.0f, &iLocal_4 + 1776[0], "Outlaw01_camp_return", "Outlaw01_Leave_Camp", &bLocal_702, 1, &iLocal_4, &iLocal_568, 330, 1, 0))
			{
				iLocal_723 = 1;
				Function_389();
			}
			else if (iLocal_723)
			{
				iLocal_723 = 0;
				HUD_CLEAR_OBJECTIVE();
				if (iLocal_1020 >= 3)
				{
					Function_400("Outlaw01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_400("Outlaw01_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
				}
			}
			if (Function_361())
			{
				Function_236(&bLocal_667);
				iLocal_659 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_217();
			iLocal_679[2] = 1;
			Function_236(&bLocal_667);
			bLocal_658 = 101;
			iLocal_659 = 0;
			break;
	}
	return;
}

bool Function_361() //Position: 0x136B6 / 79542
{
	if (IS_VOLUME_VALID(&iLocal_4 + 896[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[5]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 512) > 4)
		{
			Function_388();
			DESTROY_VOLUME(&iLocal_4 + 896[5]);
		}
	}
	if (iLocal_1020 == 0)
	{
		if (!bLocal_727)
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[0]))
			{
				bLocal_727 = true;
				Function_299(&iLocal_4 + 512, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_235(&iLocal_4 + 1776[0]);
				Function_387(&iLocal_4 + 512, 1);
				Function_252();
				Function_400("Outlaw01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
			}
		}
	}
	if (!bLocal_724 && iLocal_1020 >= 0)
	{
		Function_383();
	}
	switch (iLocal_1020)
	{
		case 0x00000000:
			if ((((((Function_382(&iLocal_4 + 512, &Global_54076) || Function_381(&Global_54076, 1)) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[4])) || IS_ACTOR_IN_VOLUME(&bLocal_665, &iLocal_4 + 896[4])) || (Function_378(&iLocal_4 + 512, &Global_54076, 7.0f, 0) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[7]))) || (iLocal_722 && GET_ACTOR_UNDER_RETICLE(&Global_54076, 1) != &iLocal_4 + 408[52])) || bLocal_724)
			{
				if (!bLocal_724)
				{
					Function_252();
					Function_377();
				}
				Function_299(&iLocal_4 + 512, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_235(&iLocal_4 + 1776[0]);
				Function_387(&iLocal_4 + 512, 1);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_376(&iLocal_4 + 512, &Global_54076, 0);
				MEMORY_ALLOW_SHOOTING(&iLocal_4 + 408[32], true);
				MEMORY_ALLOW_SHOOTING(&iLocal_4 + 408[52], true);
				Function_375(&bLocal_768, 1.0f);
				Function_236(&bLocal_667);
				iLocal_1020 = 2;
				return 0;
			}
			break;
		
		case 0x00000002:
			if (Function_373())
			{
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iLocal_4 + 512, 0, &iLocal_4 + 896[2], 4294967295);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 512, 0);
				iLocal_1020 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			if (bLocal_727)
			{
				Function_236(&bLocal_667);
				iLocal_1020 = 4;
				return 0;
			}
			if (Function_287(&bLocal_667) <= 5.0f)
			{
				Function_400("Outlaw01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				iLocal_1020 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_725)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 512) == 1)
				{
					iLocal_725 = 1;
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 512) < 0)
			{
				Function_369();
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				Function_203();
				Function_236(&bLocal_667);
				iLocal_1020 = 5;
				return 0;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[0]))
			{
				Function_236(&bLocal_667);
				iLocal_1020 = 6;
			}
			if (Function_287(&bLocal_667) <= 2.0f)
			{
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1776[0], 330, 0f, 2, 0);
				Function_400("Outlaw01_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				iLocal_1020 = 6;
				return 0;
			}
			break;
		
		case 0x00000006:
			if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[0]) || ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&iLocal_4 + 520[02])) > 1.0f && GET_LAST_ATTACKER(&iLocal_4 + 520[02]) != &Global_54076)) || !IS_ACTOR_ALIVE(&iLocal_4 + 520[02]))
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_GUNFIGHT_02", 0, 4294967295, 4294967295);
				Function_226(&iLocal_4 + 1776[1]);
				fLocal_729 = Function_226(&iLocal_4 + 1776[1]);
				iLocal_758 = FIND_NEAREST_DOOR(&fLocal_729, 3.0f);
				Function_160(&iLocal_758, 1);
				MEMORY_ALLOW_SHOOTING(&iLocal_4 + 520[02], true);
				ADD_BLIP_FOR_ACTOR(&iLocal_4 + 520[02], 322, 0.0f, 2, 0);
				Function_226(&iLocal_4 + 1776[1]);
				fLocal_729 = Function_226(&iLocal_4 + 1776[1]);
				Function_344(&iLocal_4 + 1776[1]);
				Local_732 = Function_344(&iLocal_4 + 1776[1]);
				TASK_CLEAR(&iLocal_4 + 520[02]);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_4 + 520[02], &fLocal_729, -1.0f);
				TASK_PRIORITY_SET(&iLocal_4 + 520[02], true);
				Function_235(&iLocal_4 + 1776[0]);
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[0]))
				{
					Function_368();
				}
				else
				{
					Function_365();
				}
				Function_236(&bLocal_667);
				iLocal_1020 = 8;
				return 0;
			}
			break;
		
		case 0x00000008:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 544) < 0)
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				Function_203();
				if (IS_ACTOR_HOGTIED(&iLocal_4 + 520[02]))
				{
					Function_213(&iLocal_4 + 520[02]);
				}
				Function_236(&bLocal_667);
				iLocal_1020 = 9;
				return 0;
			}
			break;
		
		case 0x00000009:
			if (Function_287(&bLocal_667) <= 2.0f)
			{
				Function_252();
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1776[0], 330, 0f, 2, 0);
				Function_400("Outlaw01_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				iLocal_1020 = 10;
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[3]))
			{
				if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					Function_236(&bLocal_667);
					Function_363(&Global_54076, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
					iLocal_1020 = 12;
					return 0;
				}
			}
			break;
		
		case 0x0000000C:
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			if (IS_BLIP_VALID(&uLocal_704))
			{
				REMOVE_BLIP(&uLocal_704);
			}
			Function_226(&iLocal_4 + 1776[1]);
			fLocal_729 = Function_226(&iLocal_4 + 1776[1]);
			iLocal_758 = FIND_NEAREST_DOOR(&fLocal_729, 3.0f);
			Function_362(&iLocal_758);
			return 1;
			break;
		
		case 0x0000000B:
			Function_138("Outlaw01_skip_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_236(&bLocal_667);
			iLocal_1020 = 0;
			return 0;
			break;
	}
	return 0;
}

void Function_362(int iParam0) //Position: 0x13CAD / 81069
{
	if (!IS_DOOR_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "unlockMe"))
	{
		DECOR_REMOVE(&iParam0, "unlockMe");
	}
	if (DECOR_CHECK_EXIST(&iParam0, "lockMe"))
	{
		DECOR_REMOVE(&iParam0, "lockMe");
	}
	return;
}

void Function_363(var uParam0, bool bParam1) //Position: 0x13D06 / 81158
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
	else if (!&bParam1 || Function_364(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_364(var uParam0, bool bParam1) //Position: 0x13D70 / 81264
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_365() //Position: 0x13D91 / 81297
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Outlaw01_ShootsBoosWindow", "Outlaw01_ShootsBoosWindow", false, 2, 1, 0, 1);
		Function_366(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_366(int iParam0) //Position: 0x13DED / 81389
{
	Function_367(0, &Global_54076, iParam0, 0);
	Function_367(1, &bLocal_663, iParam0, 0);
	Function_367(2, &iLocal_4 + 552[12], iParam0, 0);
	Function_367(3, &iLocal_4 + 552[02], iParam0, 0);
	Function_367(4, &iLocal_4 + 408[52], iParam0, 0);
	Function_367(5, &iLocal_4 + 520[02], iParam0, 0);
	return;
}

void Function_367(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x13E49 / 81481
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_145(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_368() //Position: 0x13E71 / 81521
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Outlaw01_CabinBoss", "Outlaw01_CabinBoss", false, 2, 1, 0, 1);
		Function_366(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_369() //Position: 0x13EBF / 81599
{
	int iVar0;
	int iVar1;
	
	Function_372();
	iVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 544);
	iVar0 |= 2048;
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 544, iVar0);
	iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 544);
	Function_371(&iVar1, 32);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 544, iVar1);
	Function_370(&iLocal_4 + 520[02], 33.0f, -1.0f, -1.0f);
	TASK_CROUCH(&iLocal_4 + 520[02], -1.0f);
	MEMORY_ALLOW_SHOOTING(&iLocal_4 + 520[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 520[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 520[02], 16, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&iLocal_4 + 520[02], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 520[02], 0);
	return;
}

void Function_370(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x13F6A / 81770
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

void Function_371(bool bParam0, bool bParam1) //Position: 0x13FBB / 81851
{
	Function_38(&bParam0, bParam1);
	return;
}

void Function_372() //Position: 0x13FC9 / 81865
{
	*(&iLocal_4 + 544) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Bosses"));
	*(&iLocal_4 + 520[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Boss_0", 402, Vector(-1864,525f, 25,70935f, 3302,966f), Vector(0,6416414f, 0,8361655f, -0,05012913f));
	SQUAD_JOIN(&iLocal_4 + 520[02], &iLocal_4 + 544);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 520[02], false);
	SET_ACTOR_FACTION(&iLocal_4 + 520[02], 19);
	return;
}

bool Function_373() //Position: 0x14050 / 82000
{
	if (bLocal_752 < 0 && Function_287(&bLocal_768) < RAND_FLOAT_RANGE(0,15f, 0,4f))
	{
		Function_236(&bLocal_768);
	}
	else if (bLocal_752 != 0)
	{
		return 0;
	}
	switch (bLocal_752)
	{
		case 0x00000000:
			Function_376(&iLocal_4 + 512, &Global_54076, 0);
			Function_374(&iLocal_4 + 512, &Global_54076, 4);
			TASK_CLEAR(&iLocal_4 + 408[52]);
			MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 408[52], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_4 + 408[52], -1.0f);
			DECOR_SET_BOOL(&iLocal_4 + 408[52], "AiCoverExpose", true);
			TASK_PRIORITY_SET(&iLocal_4 + 408[52], false);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[52], 20, 0,8f);
			bLocal_752++;
			Function_236(&bLocal_768);
			break;
		
		case 0x00000001:
			TASK_CLEAR(&iLocal_4 + 408[42]);
			MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 408[42], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_4 + 408[42], -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 408[52], false);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[42], 20, 0,65f);
			bLocal_752++;
			break;
		
		case 0x00000002:
			TASK_CLEAR(&iLocal_4 + 408[12]);
			MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 408[12], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_4 + 408[12], -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 408[12], false);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 408[12], 13, true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[12], 20, 0,55f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[12], 10, 2.0f);
			bLocal_752++;
			break;
		
		case 0x00000003:
			TASK_CLEAR(&iLocal_4 + 408[32]);
			MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 408[32], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_4 + 408[32], -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 408[32], false);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[32], 20, 0,75f);
			bLocal_752++;
			break;
		
		case 0x00000004:
			TASK_CLEAR(&iLocal_4 + 408[22]);
			MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 408[22], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_4 + 408[22], -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 408[22], false);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 408[22], 13, true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[22], 20, 0,65f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[22], 10, 5.0f);
			bLocal_752++;
			break;
		
		case 0x00000005:
			TASK_CLEAR(&iLocal_4 + 408[02]);
			MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 408[02], 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_4 + 408[02], -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 408[02], false);
			DECOR_SET_BOOL(&iLocal_4 + 408[02], "AiCoverExpose", true);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 408[02], 13, true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[02], 20, 0,45f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[02], 10, 3.0f);
			bLocal_752++;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_374(var uParam0, var uParam1, bool bParam2) //Position: 0x14361 / 82785
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
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_375(bool bParam0, float fParam1) //Position: 0x143AD / 82861
{
	if (!Function_289(&bParam0))
	{
		Function_237(&bParam0, fParam1);
	}
	return;
}

void Function_376(var uParam0, var uParam1, bool bParam2) //Position: 0x143C5 / 82885
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
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
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_377() //Position: 0x1443D / 83005
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_SpottedByOutlaws", "Outlaw01_SpottedByOutlaws", false, 3, 1, 0, 1);
		Function_366(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_378(var uParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x14499 / 83097
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
		if (MEMORY_GET_IS_VISIBLE(&uVar1, &iParam1))
		{
			if (&bParam3)
			{
			}
			if (Function_379(&uVar1, &iParam1) >= &fParam2)
			{
				if (&bParam3)
				{
				}
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

float Function_379(bool bParam0, int iParam1) //Position: 0x144FE / 83198
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_380(&uVar0, &uVar2);
	return iVar4;
}

var Function_380(struct<2> Param0) //Position: 0x1451F / 83231
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

var Function_381(var uParam0, bool bParam1) //Position: 0x1453E / 83262
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

int Function_382(var uParam0, int iParam1) //Position: 0x145CC / 83404
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

void Function_383() //Position: 0x1463E / 83518
{
	switch (iLocal_751)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[7]))
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 408[52], 0);
				TASK_CLEAR(&iLocal_4 + 408[52]);
				TASK_POINT_GUN_AT_OBJECT(&iLocal_4 + 408[52], &Global_54076, -1.0f, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 408[52], true);
				Function_386();
				iLocal_722 = 1;
				Function_236(&bLocal_780);
				iLocal_751 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_287(&bLocal_780) <= 6.0f)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[7]))
				{
					Function_385();
					Function_236(&bLocal_780);
					iLocal_751 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_287(&bLocal_780) <= 5.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 896[7]))
				{
					bLocal_724 = true;
					iLocal_751 = 4294967295;
					Function_384();
				}
			}
			break;
	}
	return;
}

void Function_384() //Position: 0x14732 / 83762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_GangMembScreams", "Outlaw01_GangMembScreams", false, 3, 1, 0, 1);
		Function_366(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_385() //Position: 0x1478C / 83852
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_GangMembWarns", "Outlaw01_GangMembWarns", false, 3, 1, 0, 1);
		Function_366(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_386() //Position: 0x147E2 / 83938
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Outlaw01_GangMembSpots", "Outlaw01_GangMembSpots", false, 3, 1, 0, 1);
		Function_366(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_387(var uParam0, bool bParam1) //Position: 0x14838 / 84024
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

void Function_388() //Position: 0x14887 / 84103
{
	if (IS_ACTOR_VALID(&iLocal_4 + 408[12]))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 408[12], 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[12], 20, 0,75f);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 408[22]))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 408[22], 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[22], 20, 0,65f);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 408[02]))
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 408[02], 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 408[02], 20, 0,85f);
	}
	return;
}

void Function_389() //Position: 0x14920 / 84256
{
	if (Function_289(&bLocal_772))
	{
		if (Function_287(&bLocal_772) <= 12.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			Function_390();
			Function_236(&bLocal_772);
		}
	}
	else
	{
		Function_375(&bLocal_772, 12.0f);
	}
	return;
}

void Function_390() //Position: 0x1495A / 84314
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JonFollowsIrishInstead", "Outlaw01_JonFollowsIrishInstead", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_391(struct<2> Param0, var uParam2, int iParam3, float fParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x149C1 / 84417
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_398(&Global_54076, &iParam3, uParam2))
	{
		Function_242(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_398(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_397(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_400(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_396(1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_395(&uParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_395(&uParam9, 0, 15, 1, &iParam3);
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
	if (Function_397(1))
	{
		Function_394(1);
		if (!Function_393())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_392();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_395(&uParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_395(&uParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_392() //Position: 0x14B6A / 84842
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

bool Function_393() //Position: 0x14B98 / 84888
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

void Function_394(bool bParam0) //Position: 0x14BDF / 84959
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

void Function_395(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x14C46 / 85062
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

void Function_396(bool bParam0) //Position: 0x14D01 / 85249
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

bool Function_397(bool bParam0) //Position: 0x14D68 / 85352
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

bool Function_398(int iParam0, var uParam1, float fParam2) //Position: 0x14DB2 / 85426
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_336(&iParam0);
			Function_399(&uParam1);
			if (VDIST(Function_336(&iParam0), Function_399(&uParam1)) >= fParam2)
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

struct<8> Function_399(bool bParam0) //Position: 0x14ED0 / 85712
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		GET_OBJECT_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_400(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14F3E / 85822
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

void Function_401() //Position: 0x14FD3 / 85971
{
	Function_226(&iLocal_4 + 1776[1]);
	fLocal_729 = Function_226(&iLocal_4 + 1776[1]);
	iLocal_758 = FIND_NEAREST_DOOR(&fLocal_729, 3.0f);
	Function_127(&iLocal_758, 1);
	if (!bLocal_714)
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
		{
			TASK_CLEAR(GET_MOUNT(&Global_54076));
		}
	}
	Function_402(&(Local_851[115]));
	return;
}

void Function_402(struct<69> Param0) //Position: 0x15023 / 86051
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

bool Function_403() //Position: 0x150E3 / 86243
{
	var uVar0;
	
	Function_294(&iLocal_646, 1, 0);
	switch (iLocal_646)
	{
		case 0x000003E8:
			Function_348(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &bLocal_663);
				(&iLocal_646 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				*(&iLocal_646 + 24) = Function_410(&iLocal_4, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_646 + 24))
				{
				}
				else
				{
					LOG_ERROR("Outlaw01_CS03 - Failed to create Outlaw01_CS03_cutscene");
				}
			}
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_646 + 24, 1);
			if (!HUD_IS_FADED())
			{
				iLocal_646 = 1001;
			}
			else
			{
				iLocal_646 = 1008;
			}
			break;
		
		case 0x000003F0:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_646 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_646 + 24), 0))
			{
				Function_409(&Global_54076, 1, 1);
				Function_409(&bLocal_663, 1, 1);
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					if (!IS_ACTOR_VALID(&bLocal_665))
					{
						bLocal_665 = Function_223(1, 0, 0, 0, 0, 0, 1, 0);
						Function_231(&bLocal_665, &iLocal_4 + 1464[0], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_665);
						Function_434(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					}
					else
					{
						Function_231(&bLocal_665, &iLocal_4 + 1464[0], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_665);
						Function_434(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					}
				}
				else
				{
					Function_434(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
				}
				bLocal_742 = GET_MOUNT(&bLocal_663);
				if (!IS_ACTOR_VALID(&bLocal_742))
				{
					Function_408();
					bLocal_742 = &iLocal_4 + 656[02];
					Function_231(&bLocal_742, &iLocal_4 + 1464[11], 1, 1, 1);
					Function_231(&bLocal_663, &iLocal_4 + 1464[2], 1, 1, 1);
					ACTOR_MOUNT_ACTOR(&bLocal_663, &bLocal_742);
					Function_434(&bLocal_663, &iLocal_4 + 1464[2], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_663, -1.0f, 0, 0);
					TASK_STAND_STILL(&bLocal_742, -1.0f, 0, 0);
					if (IS_ACTOR_VALID(&iLocal_746))
					{
						DESTROY_ACTOR(&iLocal_746);
					}
				}
				else
				{
					Function_434(&bLocal_663, &iLocal_4 + 1464[2], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_663, -1.0f, 0, 0);
					TASK_STAND_STILL(&bLocal_742, -1.0f, 0, 0);
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 688[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 688[2]);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 688[2]);
				Function_407(&iLocal_646 + 4);
				iLocal_646 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			TASK_GO_TO_COORD_AND_STAY(StackVal, &Global_54076, &iLocal_4 + 1120[43], 1);
			TASK_PRIORITY_SET(&Global_54076, true);
			TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_663, &iLocal_4 + 1120[53], 1);
			TASK_PRIORITY_SET(&bLocal_663, true);
			iLocal_646 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_287(&iLocal_646 + 4) < 0,25f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
					Function_236(&iLocal_646 + 4);
					iLocal_1023 = 15;
					iLocal_1024 = 15;
					iLocal_646 = 1004;
				}
			}
			else
			{
				Function_236(&iLocal_646 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_405() && Function_404())
			{
				Function_236(&iLocal_646 + 4);
				iLocal_646 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_409(&Global_54076, 0, 1);
				Function_409(&bLocal_663, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_333(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_646 + 24))
				{
					DESTROY_OBJECT(&iLocal_646 + 24);
				}
				iLocal_646 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				iLocal_646 = 1104;
			}
			break;
	}
	return 0;
}

int Function_404() //Position: 0x15529 / 87337
{
	switch (iLocal_1024)
	{
		case 0x0000000F:
			if (Function_287(&iLocal_646 + 4) < 0.0f)
			{
				iLocal_1024 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_287(&iLocal_646 + 4) < 13.0f)
			{
				iLocal_1024 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_287(&iLocal_646 + 4) < 12,75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_405() //Position: 0x1558E / 87438
{
	switch (iLocal_1023)
	{
		case 0x0000000F:
			if (Function_287(&iLocal_646 + 4) < 3.0f)
			{
				Function_406();
				iLocal_1023 = 106;
			}
			break;
		
		case 0x00000019:
			if (Function_287(&iLocal_646 + 4) < 10,5f)
			{
				iLocal_1023 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_287(&iLocal_646 + 4) < 13.0f)
			{
				iLocal_1023 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_287(&iLocal_646 + 4) < 15.0f)
			{
				iLocal_1023 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_287(&iLocal_646 + 4) < 15,75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_406() //Position: 0x15634 / 87604
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_CS03_v1_AA", "Outlaw01_CS03_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_CS03_v1_AB", "Outlaw01_CS03_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_CS03_v1_AC", "Outlaw01_CS03_v1_AC", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_407(bool bParam0) //Position: 0x156ED / 87789
{
	if (!Function_289(&bParam0))
	{
		Function_237(&bParam0, 0.0f);
	}
	return;
}

void Function_408() //Position: 0x15704 / 87812
{
	*(&iLocal_4 + 680) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Comp_Horse_Backup"));
	*(&iLocal_4 + 656[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse_03_1", 976, Vector(-1974,211f, 37,82147f, 3273,789f), Vector(0.0f, 174,0952f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 656[02], &iLocal_4 + 680);
	ACCESSORIZE_HORSE(&iLocal_4 + 656[02], 3);
	return;
}

void Function_409(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15784 / 87940
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

var Function_410(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15834 / 88116
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 6, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Outlaw01_CS03", 6, 1);
	}
	Function_411(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_411(var uParam0, var uParam1) //Position: 0x158BE / 88254
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_417(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_416(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_415(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_414(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_413(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_412(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 4, &uParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 4, 5, 7,75f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 5, 0,5f, 2);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 7,5f, 3);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 7,5f, 0, 0);
	return;
}

void Function_412(int iParam0) //Position: 0x1598D / 88461
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1952,754f, 36,71468f, 3282,714f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,180597f, -1,911888f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_413(int iParam0) //Position: 0x15A02 / 88578
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1969,09f, 40,38677f, 3276,044f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,16711f, -1,966866f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_414(int iParam0) //Position: 0x15A77 / 88695
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1948,145f, 36,54208f, 3287,135f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,330996f, -1,776444f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_415(int iParam0) //Position: 0x15AE4 / 88804
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1939,25f, 34,34254f, 3285,188f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,120793f, 2,063977f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_416(int iParam0) //Position: 0x15B51 / 88913
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1946,901f, 34,48132f, 3286,111f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,011746f, -1,849566f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_417(bool bParam0) //Position: 0x15BBE / 89022
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-1949,852f, 33,73759f, 3279,189f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(-0,068335f, -1,954832f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

void Function_418(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x15C2B / 89131
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
	if (iParam2 != Global_53524.f_48 && !Function_425())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_424(0);
	Function_423();
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
		Function_421(iParam2);
	}
	Function_420(uParam3, iVar0, iVar1);
	Function_419();
}

void Function_419() //Position: 0x15CD4 / 89300
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

void Function_420(int iParam0, bool bParam1, bool bParam2) //Position: 0x15D15 / 89365
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

void Function_421(bool bParam0) //Position: 0x15E7E / 89726
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_422() };
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

struct<16> Function_422() //Position: 0x16016 / 90134
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

void Function_423() //Position: 0x1605C / 90204
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_424(bool bParam0) //Position: 0x16080 / 90240
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

bool Function_425() //Position: 0x160AF / 90287
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

bool Function_426(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x160CA / 90314
{
	if (Function_427(&iParam0) == iParam6 || Function_425())
	{
		return 1;
	}
	return 0;
}

int Function_427(int iParam0) //Position: 0x160E9 / 90345
{
	if (Function_292(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_428() //Position: 0x16102 / 90370
{
	int iVar0;
	
	Function_432();
	iVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 512);
	iVar0 |= 2048;
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 512, iVar0);
	Function_431(&iLocal_4 + 512, 65.0f);
	Function_430(&iLocal_4 + 512, 45.0f, 1,5f, 0,1f);
	Function_429(&iLocal_4 + 512, 1);
	Function_387(&iLocal_4 + 512, 0);
	SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 408[02], &iLocal_4 + 2160, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&iLocal_4 + 408[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2160), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[02], 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iLocal_4 + 408[02], true);
	SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 408[12], &iLocal_4 + 2168, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&iLocal_4 + 408[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2168), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[12], 1);
	TASK_STAND_STILL(&iLocal_4 + 408[32], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 408[32], true);
	AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[32], 1);
	TASK_STAND_STILL(&iLocal_4 + 408[52], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 408[52], true);
	AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[52], 1);
	SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 408[22], &iLocal_4 + 2176, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&iLocal_4 + 408[22], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2176), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[22], 1);
	SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 408[42], &iLocal_4 + 2192, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&iLocal_4 + 408[42], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2192), "UseCase1", 4294967295, 1);
	AI_QUICK_EXIT_GRINGO(&iLocal_4 + 408[42], 1);
	Function_226(&iLocal_4 + 1776[2]);
	iLocal_708 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iLocal_568, "bandit_fire", "amb_campfire_large", Function_226(&iLocal_4 + 1776[2]));
	UNK_0x6745191B(StackVal, &iLocal_708, Vector(0.0f, 0.0f, 0.0f));
	return;
}

void Function_429(var uParam0, bool bParam1) //Position: 0x16348 / 90952
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_430(var uParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x1638C / 91020
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
			Function_370(&uVar1, bParam1, &fParam2, &bParam3);
		}
		bVar0++;
	}
}

void Function_431(var uParam0, bool bParam1) //Position: 0x163DA / 91098
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(&uVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&uVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&uVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_432() //Position: 0x1643B / 91195
{
	*(&iLocal_4 + 512) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Bandits"));
	*(&iLocal_4 + 408[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bandit_0", 397, Vector(-1866,494f, 25,64559f, 3300,537f), Vector(0.0f, 17,5112f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 408[02], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 408[02], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 408[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 408[02], 19);
	*(&iLocal_4 + 408[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bandit_1", 398, Vector(-1884,388f, 24,6069f, 3303,539f), Vector(0.0f, 217,5292f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 408[12], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 408[12], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 408[12], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 408[12], 19);
	*(&iLocal_4 + 408[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bandit_2", 403, Vector(-1881,519f, 24,66298f, 3302,885f), Vector(0.0f, 163,1807f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 408[22], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 408[22], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 408[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 408[22], 19);
	*(&iLocal_4 + 408[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bandit_3", 400, Vector(-1876.0f, 24,59883f, 3298,448f), Vector(1,797911f, 104,8847f, 2,713675f));
	SQUAD_JOIN(&iLocal_4 + 408[32], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 408[32], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 408[32], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 408[32], 19);
	*(&iLocal_4 + 408[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bandit_6", 399, Vector(-1890,118f, 24,4821f, 3304.0f), Vector(0.0f, -14,20155f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 408[42], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 408[42], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 408[42], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 408[42], 19);
	*(&iLocal_4 + 408[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bandit_7", 401, Vector(-1884,485f, 24,63373f, 3307,515f), Vector(0.0f, 25,16624f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 408[52], &iLocal_4 + 512);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 408[52], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 408[52], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 408[52], 19);
	return;
}

int Function_433() //Position: 0x1672C / 91948
{
	Function_331(&iLocal_4 + 288, 397, 2, 0);
	Function_331(&iLocal_4 + 288, 398, 2, 0);
	Function_331(&iLocal_4 + 288, 403, 2, 0);
	Function_331(&iLocal_4 + 288, 400, 2, 0);
	Function_331(&iLocal_4 + 288, 399, 2, 0);
	Function_331(&iLocal_4 + 288, 401, 2, 0);
	Function_331(&iLocal_4 + 288, 402, 2, 0);
	if (Function_323(&iLocal_4 + 288))
	{
		return 1;
	}
	return 0;
}

void Function_434(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x167A2 / 92066
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
				Function_435(StackVal, StackVal, &bParam0, Var0, &bParam2, &iParam3, &bParam4);
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

void Function_435(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x168C2 / 92354
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
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
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_436(vector3 vParam0) //Position: 0x16991 / 92561
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_437(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x169A8 / 92584
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_440(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_441()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					Function_438();
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
	else if ((!Function_440(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_441()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_440(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_438() //Position: 0x16C10 / 93200
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
			Function_439(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_439(char* cParam0) //Position: 0x16C64 / 93284
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

bool Function_440(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x16D8D / 93581
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_336(&bParam0);
		if (VDIST(Function_336(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_441() //Position: 0x16E19 / 93721
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_442() //Position: 0x16E28 / 93736
{
	if (iLocal_659 < 3 && iLocal_659 > 105)
	{
		if (iLocal_1021 <= 3)
		{
			if (Function_472(&iLocal_675, 60.0f, 200.0f, &bLocal_663, "Outlaw_return", "Outlaw_abandoned", &bLocal_702, 1, &iLocal_568, &iLocal_4, 325, 1))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 816[3]))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 4);
				}
			}
			else if ((iLocal_717 && !iLocal_726) && IS_VOLUME_VALID(&iLocal_4 + 816[3]))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 3);
			}
		}
		else if (!Function_471(&iLocal_675, 60.0f, &bLocal_665, "Horse_return", "Horse_abandoned", &bLocal_702, 1, &iLocal_568, &iLocal_4, 334, 1))
		{
			if (Function_472(&iLocal_675, 60.0f, 200.0f, &bLocal_663, "Outlaw_return", "Outlaw_abandoned", &bLocal_702, 1, &iLocal_568, &iLocal_4, 325, 1))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 816[3]))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 4);
				}
			}
			else if ((iLocal_717 && !iLocal_726) && IS_VOLUME_VALID(&iLocal_4 + 816[3]))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 3);
			}
		}
	}
	switch (iLocal_659)
	{
		case 0x00000000:
			Function_356(0);
			Function_470();
			SET_ACTOR_HEALTH(&bLocal_663, GET_ACTOR_MAX_HEALTH(&bLocal_663));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (iLocal_679[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_353();
				bLocal_660 = Global_46736[0];
				if (!Function_352(bLocal_660))
				{
					Function_351(&Local_570);
				}
				Function_231(&Global_54076, &iLocal_4 + 1040[0], 1, 1, 1);
				Function_231(&bLocal_663, &iLocal_4 + 1040[2], 1, 1, 1);
				Function_309();
				Function_236(&bLocal_667);
				iLocal_659 = 1;
			}
			else
			{
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_469()) && (Function_352(bLocal_660) || bLocal_660 != 4294967295))
			{
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_426(StackVal, StackVal, StackVal, StackVal, StackVal, Local_570, 1))
			{
				Local_735 = Vector(-5,027f, 148,468f, 0.0f);
				VSCALE(&Local_735, 5.0f);
				Local_735 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-2179,049f, 18,013f, 2566,635f), Local_735, StackVal);
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Local_735, 0, 0);
				Function_236(&bLocal_667);
				iLocal_659 = 3;
			}
			else
			{
				Function_236(&bLocal_667);
				iLocal_659 = 95;
			}
			Function_248(bLocal_658);
			Function_418(StackVal, Function_248(bLocal_658), bLocal_658, Global_46736[0], Function_250(bLocal_658), 0);
			iLocal_646 = 1000;
			Function_433();
			Function_232();
			if (IS_ACTOR_VALID(&bLocal_665))
			{
				Function_231(&bLocal_665, &iLocal_4 + 1040[5], 1, 1, 1);
			}
			iLocal_754 = Function_468();
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/OUTLAW01_CS02/OUTLAW01_CS02", &iLocal_646, &Local_570, &bLocal_658, 75500, 74624, 73821, 73198, 72882, 56929, 0, 1, 1, 2, 2, 0, 1))
			{
				ACTOR_END_FORCE_HOLSTER(&Global_54076);
				Function_284(1.0f);
				Function_236(&bLocal_667);
				iLocal_659 = 6;
			}
			break;
		
		case 0x0000005F:
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_663, 1);
			RESET_REACT_NODE_FOR_ACTOR(&bLocal_663);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 0);
			Function_231(&Global_54076, &iLocal_4 + 1040[1], 1, 1, 1);
			Function_231(&bLocal_663, &iLocal_4 + 1040[3], 1, 1, 1);
			SET_ACTORS_HORSE(&bLocal_663, &iLocal_746);
			Function_335(&bLocal_663, &iLocal_746, 1);
			MEMORY_PREFER_RIDING(&bLocal_663, true);
			TASK_CLEAR(&bLocal_663);
			TASK_MOUNT(&bLocal_663, &iLocal_746, 0, 1, 2, 2147483647);
			Function_236(&bLocal_667);
			iLocal_659 = 96;
			break;
		
		case 0x00000060:
			if (Function_287(&bLocal_667) <= 1,5f)
			{
				Function_284(1.0f);
				Function_236(&bLocal_667);
				iLocal_659 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_465(1, 1);
				Function_464();
				FORCE_LOOK_AT_ACTOR(&bLocal_663, &Global_54076, -1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_665)))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_665, 334, 0.0f, 2, 0);
				}
				Function_236(&bLocal_667);
				iLocal_659 = 7;
			}
			break;
		
		case 0x00000007:
			Function_465(1, 1);
			if (!IS_ACTOR_RIDING(&bLocal_663))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&iLocal_746)) > 1.0f)
				{
					if (GET_LAST_ATTACKER(&iLocal_746) == &Global_54076)
					{
						Function_242("Outlaw01_Hurt_Irish_Horse");
						bLocal_702 = true;
						return;
					}
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_213(&bLocal_665);
				Function_300(&(Local_851[115]), &bLocal_665, "Horse", 0, 0x5f5e100, 1);
				Function_236(&bLocal_667);
				iLocal_659 = 8;
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_287(&bLocal_667) <= 8.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_400("Outlaw01_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				Function_237(&bLocal_671, 7.0f);
				iLocal_659 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_443())
			{
				Function_234(0, 0, 1);
				Function_236(&bLocal_667);
				iLocal_659 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_219();
			iLocal_679[1] = 1;
			Function_236(&bLocal_667);
			bLocal_658 = 2;
			iLocal_659 = 0;
			break;
	}
	return;
}

bool Function_443() //Position: 0x173C3 / 95171
{
	if (iLocal_1021 >= 2)
	{
		if (iLocal_1021 < 4 && iLocal_1021 > 6)
		{
			Function_458();
			Function_456();
		}
		Function_465(1, 1);
		Function_455();
		if (iLocal_1021 < 8)
		{
			Function_452();
		}
		Function_451();
		if (IS_VOLUME_VALID(&iLocal_4 + 816[2]))
		{
			if (IS_ACTOR_IN_VOLUME(&bLocal_663, &iLocal_4 + 816[2]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[2]))
			{
				Function_428();
				DESTROY_VOLUME(&iLocal_4 + 816[2]);
			}
		}
		if (IS_VOLUME_VALID(&iLocal_4 + 816[6]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[6]))
			{
				Function_450();
				iLocal_721 = 1;
				DESTROY_VOLUME(&iLocal_4 + 816[6]);
			}
		}
		if (!iLocal_728)
		{
			Function_350(&bLocal_663);
			STREAMING_LOAD_BOUNDS_EXT(0, Function_350(&bLocal_663), 20.0f, 1);
		}
		if (IS_VOLUME_VALID(&iLocal_4 + 816[1]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[1]) || Function_378(&iLocal_4 + 512, &Global_54076, 7.0f, 0))
			{
				Function_449();
			}
			else if (SQUAD_IS_VALID(&iLocal_4 + 512))
			{
				if (Function_382(&iLocal_4 + 512, &Global_54076) || Function_378(&iLocal_4 + 512, &Global_54076, 7.0f, 0))
				{
					Function_449();
				}
			}
		}
	}
	if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
	{
		if (!iLocal_726)
		{
			iLocal_726 = 1;
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_663);
		}
	}
	else if (iLocal_726)
	{
		iLocal_726 = 0;
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, true);
	}
	switch (iLocal_1021)
	{
		case 0x00000002:
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_448();
				AUDIO_MUSIC_SET_MOOD("nCHASE_ALT", 0, 4294967295, 4294967295);
				STOP_FORCE_LOOK_AT_COORD(&bLocal_663);
				Function_213(&bLocal_665);
				Function_407(&iLocal_776);
				Function_236(&bLocal_667);
				Function_236(&bLocal_671);
				Function_236(&bLocal_772);
				iLocal_1021 = 3;
				return 0;
			}
			Function_446();
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING(&bLocal_663))
			{
				Function_234(0, 1, 1);
				TASK_CLEAR(&bLocal_663);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_663, &iLocal_4 + 2224, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 4);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_663, 3212836864, 3212836864, 4, 1, 0);
				Function_236(&bLocal_784);
				Function_236(&bLocal_667);
				iLocal_1021 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_287(&bLocal_667) <= 7.0f)
			{
				STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-1933,491f, 33,178f, 3291,625f), Vector(-8,929f, -100,275f, 0.0f), 0);
				HUD_CLEAR_OBJECTIVE();
				Function_400("Outlaw01_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				Function_236(&bLocal_671);
				iLocal_1021 = 5;
				return 0;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[4]))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_234(0, 0, 1);
				Function_400("Outlaw01_obj03_hill", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2144, 330, 0f, 2, 0);
				iLocal_1021 = 6;
				return 0;
			}
			break;
		
		case 0x00000006:
			GET_POSITION(&bLocal_663, &fLocal_729);
			ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 2224, &fLocal_729, &iLocal_4 + 2120, &fLocal_738, &fLocal_739, &uLocal_740);
			if (StackVal || Function_440(fLocal_738 <= fLocal_739, &bLocal_663, *(&iLocal_4 + 2120), 3,5f))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_663);
				Function_236(&bLocal_667);
				iLocal_1021 = 7;
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[7]))
			{
				Function_236(&bLocal_667);
				iLocal_1021 = 7;
				return 0;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[7]) && IS_ACTOR_RIDING(&Global_54076))
			{
				HUD_ENABLE(0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				HUD_CLEAR_OBJECTIVE();
				ABORT_SCRIPTED_CONVERSATION(1);
				TASK_GO_NEAR_OBJECT(&Global_54076, &iLocal_4 + 1464[13], 7.0f, 2, 0, 1);
				iLocal_1021 = 8;
				return 0;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 816[0]))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_363(&Global_54076, 0);
				ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
				Function_235(&iLocal_4 + 2144);
				Function_236(&bLocal_667);
				iLocal_1021 = 9;
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&bLocal_663, &iLocal_4 + 816[0]))
			{
				Function_444();
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!iLocal_728)
				{
					iLocal_728 = 1;
					STREAMING_UNLOAD_BOUNDS();
				}
				return 1;
			}
			if (Function_379(&bLocal_663, &Global_54076) < 60.0f)
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			break;
		
		case 0x00000000:
			Function_435(StackVal, StackVal, &Global_54076, *(&iLocal_4 + 2072), 1, 1, 1);
			TASK_CLEAR(&bLocal_663);
			Function_435(StackVal, StackVal, &bLocal_663, *(&iLocal_4 + 2096), 1, 1, 1);
			iLocal_1021 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_663, &iLocal_4 + 2224, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 4);
				iLocal_1021 = 5;
			}
			break;
	}
	return 0;
}

void Function_444() //Position: 0x17899 / 96409
{
	if (!Function_289(&bLocal_671))
	{
		Function_407(&bLocal_671);
	}
	else if (Function_287(&bLocal_671) <= 30.0f)
	{
		Function_445();
		Function_236(&bLocal_671);
	}
	return;
}

void Function_445() //Position: 0x178CA / 96458
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NoGetOnHorse1", "Outlaw01_NoGetOnHorse1", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x1791F / 96543
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_287(&bLocal_671) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			Function_447();
			SET_ANIM_SET_FOR_ACTOR(&bLocal_663, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_663, "stand_ambient/one_hnd_hrs");
			Function_236(&bLocal_671);
		}
	}
	return;
}

void Function_447() //Position: 0x17986 / 96646
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WaitingOnJohnGetOnHorse", "Outlaw01_WaitingOnJohnGetOnHorse", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x179EF / 96751
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_MountsAndSetsOff", "Outlaw01_MountsAndSetsOff", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x17A4A / 96842
{
	bLocal_714 = true;
	Function_235(&iLocal_4 + 2144);
	Function_213(&bLocal_663);
	Function_235(&iLocal_4 + 1776[0]);
	Function_234(0, 0, 1);
	DESTROY_VOLUME(&iLocal_4 + 816[1]);
	DESTROY_VOLUME(&iLocal_4 + 816[0]);
	Function_236(&bLocal_667);
	iLocal_1021 = 9;
	bLocal_750 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1120[63], 2, 3212836864);
	TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1120[73], 4, 3212836864);
	TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1120[83], 4, 3212836864);
	TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 1120[93], 4);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_663, bLocal_750);
	TASK_SEQUENCE_RELEASE(bLocal_750, 1);
	TASK_PRIORITY_SET(&bLocal_663, true);
	Function_377();
	AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
	Function_299(&iLocal_4 + 512, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_376(&iLocal_4 + 512, &Global_54076, 0);
	MEMORY_ALLOW_SHOOTING(&iLocal_4 + 408[32], true);
	MEMORY_ALLOW_SHOOTING(&iLocal_4 + 408[52], true);
	Function_387(&iLocal_4 + 512, 1);
	Function_375(&bLocal_768, 1.0f);
	iLocal_1020 = 2;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_236(&bLocal_667);
	iLocal_659 = 106;
	return;
}

void Function_450() //Position: 0x17B8E / 97166
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AA1", "Outlaw01_NearDJulioBanter_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AA2", "Outlaw01_NearDJulioBanter_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AA3", "Outlaw01_NearDJulioBanter_v1_AA3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AB", "Outlaw01_NearDJulioBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AC", "Outlaw01_NearDJulioBanter_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AD", "Outlaw01_NearDJulioBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AE", "Outlaw01_NearDJulioBanter_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AF1", "Outlaw01_NearDJulioBanter_v1_AF1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AF2", "Outlaw01_NearDJulioBanter_v1_AF2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AG", "Outlaw01_NearDJulioBanter_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AH1", "Outlaw01_NearDJulioBanter_v1_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_NearDJulioBanter_v1_AH2", "Outlaw01_NearDJulioBanter_v1_AH2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AI1", "Outlaw01_NearDJulioBanter_v1_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AI2", "Outlaw01_NearDJulioBanter_v1_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NearDJulioBanter_v1_AI3", "Outlaw01_NearDJulioBanter_v1_AI3", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451() //Position: 0x18058 / 98392
{
	if (Function_289(&bLocal_784) && !iLocal_717)
	{
		if (Function_379(&Global_54076, &bLocal_663) <= 17.0f || !IS_ACTOR_RIDING(&Global_54076))
		{
			Function_236(&bLocal_784);
		}
		if (Function_287(&bLocal_784) <= 3.0f)
		{
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 3);
			iLocal_717 = 1;
		}
	}
	return;
}

void Function_452() //Position: 0x180A6 / 98470
{
	GET_POSITION(&bLocal_663, &fLocal_729);
	GET_POSITION(&Global_54076, &Local_732);
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 2224, &fLocal_729, &Local_732, &fLocal_738, &fLocal_739, &uLocal_740);
	if ((fLocal_738 - fLocal_739) <= 30.0f)
	{
		Function_454();
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 4);
		iLocal_716 = 1;
	}
	else if ((fLocal_739 - fLocal_738) <= 30.0f)
	{
		Function_453();
		iLocal_716 = 1;
	}
	else if (iLocal_716)
	{
		iLocal_716 = 0;
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_663, 3);
	}
	return;
}

void Function_453() //Position: 0x18126 / 98598
{
	if (Function_289(&bLocal_772))
	{
		if (Function_287(&bLocal_772) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_663, "Outlaw01_2FarAheadDuringRide", "", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
			Function_236(&bLocal_772);
		}
	}
	else
	{
		Function_375(&bLocal_772, 9.0f);
	}
	return;
}

void Function_454() //Position: 0x18193 / 98707
{
	if (Function_289(&bLocal_772))
	{
		if (Function_287(&bLocal_772) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_663, "Outlaw01_2FarBehindDuringRide", "", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_663, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_663, "stand_ambient/one_hnd_hrs");
			Function_236(&bLocal_772);
		}
	}
	else
	{
		Function_375(&bLocal_772, 9.0f);
	}
	return;
}

void Function_455() //Position: 0x1823E / 98878
{
	if (IS_VOLUME_VALID(&iLocal_4 + 816[3]))
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_663, &iLocal_4 + 816[3]))
		{
			iLocal_728 = 1;
			STREAMING_UNLOAD_BOUNDS();
			bLocal_750 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &iLocal_4 + 1120[123], 2);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_663);
			TASK_CLEAR(&bLocal_663);
			TASK_SEQUENCE_PERFORM(&bLocal_663, bLocal_750);
			TASK_SEQUENCE_RELEASE(bLocal_750, 1);
			Function_436(&bLocal_671);
			DESTROY_VOLUME(&iLocal_4 + 816[3]);
		}
	}
	return;
}

void Function_456() //Position: 0x182BC / 99004
{
	if (IS_ACTOR_SHOOTING(&Global_54076))
	{
		if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
		{
			if (Function_379(&Global_54076, &bLocal_663) > 30.0f)
			{
				if (!Function_457(0x42c80000))
				{
					if (Function_287(&iLocal_792) <= 2.0f)
					{
						if (iLocal_757 <= 3)
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_663, "Outlaw01_ShootsRandToDJulio", "", 0, 0, 0, 3, 0, 0, 0, 1000, 0, 0);
							Function_236(&iLocal_792);
							iLocal_757++;
						}
					}
				}
			}
		}
	}
	return;
}

bool Function_457(float fParam0) //Position: 0x18356 / 99158
{
	var uVar0;
	var uVar2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	var uVar9;
	var uVar10;
	float fVar11;
	
	if (IS_LAYOUTREF_VALID(&iLocal_568))
	{
		uVar0 = Vector(-&fParam0, -&fParam0, -&fParam0);
		uVar2 = Vector(&fParam0, &fParam0, &fParam0);
		UNK_0xB89CC342(&Global_54076, &uVar0, &Var4);
		UNK_0xB89CC342(&Global_54076, &uVar2, &Var6);
		uVar8 = CREATE_OBJECT_ITERATOR(&iLocal_568);
		ITERATE_IN_AREA(&uVar8, Var6, Var4);
		uVar9 = START_OBJECT_ITERATOR(&uVar8);
		while (IS_OBJECT_VALID(&uVar9))
		{
			uVar10 = GET_ACTOR_FROM_OBJECT(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				if (IS_ACTOR_HUMAN(&uVar10))
				{
					fVar11 = CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(&Global_54076, &uVar10);
					if (fVar11 > 0,25f)
					{
						DESTROY_ITERATOR(&uVar8);
						return 1;
					}
				}
			}
			uVar9 = OBJECT_ITERATOR_NEXT(&uVar8);
		}
		DESTROY_ITERATOR(&uVar8);
	}
	return 0;
}

void Function_458() //Position: 0x18412 / 99346
{
	if ((((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE()) && !iLocal_716) && !iLocal_721) && Function_379(&Global_54076, &bLocal_663) >= 27.0f)
	{
		if (Function_287(&iLocal_776) <= 4.0f)
		{
			switch (iLocal_754)
			{
				case 0x00000000:
					Function_463();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_236(&iLocal_776);
						iLocal_754++;
					}
					break;
				
				case 0x00000001:
					Function_462();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_236(&iLocal_776);
						iLocal_754++;
					}
					break;
				
				case 0x00000002:
					Function_461();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_236(&iLocal_776);
						iLocal_754++;
					}
					break;
				
				case 0x00000003:
					Function_460();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_236(&iLocal_776);
						iLocal_754++;
					}
					break;
				
				case 0x00000063:
					break;
				
				default:
					Function_459();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_754 = 99;
						Function_236(&iLocal_776);
					}
					break;
				}
			}
	}
	return;
}

void Function_459() //Position: 0x184F3 / 99571
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_NoTalk", "Outlaw01_NoTalk", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x1853A / 99642
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AA", "Outlaw01_WayToDonJulio_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AB", "Outlaw01_WayToDonJulio_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AC1", "Outlaw01_WayToDonJulio_v4_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AC2", "Outlaw01_WayToDonJulio_v4_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AD", "Outlaw01_WayToDonJulio_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AE", "Outlaw01_WayToDonJulio_v4_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AF", "Outlaw01_WayToDonJulio_v4_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG1", "Outlaw01_WayToDonJulio_v4_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG2", "Outlaw01_WayToDonJulio_v4_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG3", "Outlaw01_WayToDonJulio_v4_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AG4", "Outlaw01_WayToDonJulio_v4_AG4", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AH", "Outlaw01_WayToDonJulio_v4_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AI", "Outlaw01_WayToDonJulio_v4_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AJ1", "Outlaw01_WayToDonJulio_v4_AJ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AJ2", "Outlaw01_WayToDonJulio_v4_AJ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AK1", "Outlaw01_WayToDonJulio_v4_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AK2", "Outlaw01_WayToDonJulio_v4_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v4_AL", "Outlaw01_WayToDonJulio_v4_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v4_AM", "Outlaw01_WayToDonJulio_v4_AM", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x18AAD / 101037
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AA", "Outlaw01_WayToDonJulio_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AB", "Outlaw01_WayToDonJulio_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AC1", "Outlaw01_WayToDonJulio_v3_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AC2", "Outlaw01_WayToDonJulio_v3_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AD", "Outlaw01_WayToDonJulio_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AE1", "Outlaw01_WayToDonJulio_v3_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AE2", "Outlaw01_WayToDonJulio_v3_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AF", "Outlaw01_WayToDonJulio_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AG", "Outlaw01_WayToDonJulio_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AH", "Outlaw01_WayToDonJulio_v3_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AI", "Outlaw01_WayToDonJulio_v3_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AJ", "Outlaw01_WayToDonJulio_v3_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AK", "Outlaw01_WayToDonJulio_v3_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AL1", "Outlaw01_WayToDonJulio_v3_AL1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v3_AL2", "Outlaw01_WayToDonJulio_v3_AL2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AM1", "Outlaw01_WayToDonJulio_v3_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v3_AM2", "Outlaw01_WayToDonJulio_v3_AM2", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x18F8E / 102286
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AA", "Outlaw01_WayToDonJulio_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AB1", "Outlaw01_WayToDonJulio_v2_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AB2", "Outlaw01_WayToDonJulio_v2_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AB3", "Outlaw01_WayToDonJulio_v2_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AC", "Outlaw01_WayToDonJulio_v2_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AD1", "Outlaw01_WayToDonJulio_v2_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AD2", "Outlaw01_WayToDonJulio_v2_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AE", "Outlaw01_WayToDonJulio_v2_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AF", "Outlaw01_WayToDonJulio_v2_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AG", "Outlaw01_WayToDonJulio_v2_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AH1", "Outlaw01_WayToDonJulio_v2_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AH2", "Outlaw01_WayToDonJulio_v2_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AI", "Outlaw01_WayToDonJulio_v2_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AJ1", "Outlaw01_WayToDonJulio_v2_AJ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AJ2", "Outlaw01_WayToDonJulio_v2_AJ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AK", "Outlaw01_WayToDonJulio_v2_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AL", "Outlaw01_WayToDonJulio_v2_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AM", "Outlaw01_WayToDonJulio_v2_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v2_AN", "Outlaw01_WayToDonJulio_v2_AN", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v2_AO", "Outlaw01_WayToDonJulio_v2_AO", true, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_463() //Position: 0x19546 / 103750
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AA", "Outlaw01_WayToDonJulio_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AB", "Outlaw01_WayToDonJulio_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AC1", "Outlaw01_WayToDonJulio_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AC2", "Outlaw01_WayToDonJulio_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AD", "Outlaw01_WayToDonJulio_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AE1", "Outlaw01_WayToDonJulio_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AE2", "Outlaw01_WayToDonJulio_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AE3", "Outlaw01_WayToDonJulio_v1_AE3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AF", "Outlaw01_WayToDonJulio_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AG1", "Outlaw01_WayToDonJulio_v1_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AG2", "Outlaw01_WayToDonJulio_v1_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AG3", "Outlaw01_WayToDonJulio_v1_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3160", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AH", "Outlaw01_WayToDonJulio_v1_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WayToDonJulio_v1_AI", "Outlaw01_WayToDonJulio_v1_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw01_WayToDonJulio_v1_AJ", "Outlaw01_WayToDonJulio_v1_AJ", true, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464() //Position: 0x199B8 / 104888
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_IrishRunsToHorse", "Outlaw01_IrishRunsToHorse", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465(bool bParam0, bool bParam1) //Position: 0x19A13 / 104979
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_213(&bLocal_665);
			if (GET_MOUNT(&Global_54076) != &bLocal_665)
			{
				if (GET_MOUNT(&Global_54076) == &iLocal_746)
				{
					iLocal_748 = &bLocal_665;
					bLocal_665 = &iLocal_746;
					iLocal_746 = &iLocal_748;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_665);
					Function_466(&bLocal_665, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_665, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ACTORS_HORSE(&bLocal_663, &iLocal_746);
					GIVE_OBJECT_TO_LAYOUT(&iLocal_746, &iLocal_4);
					if (GET_TASK_STATUS(&bLocal_663, 11) == 1)
					{
						TASK_CLEAR(&bLocal_663);
						TASK_MOUNT(&bLocal_663, &iLocal_746, 0, 1, 2, 2147483647);
					}
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(&bLocal_665, GET_AMBIENT_LAYOUT());
					bLocal_665 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &bLocal_665);
					Function_466(&bLocal_665, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_665, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_665, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		else if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_665)))
		{
			ADD_BLIP_FOR_ACTOR(&bLocal_665, 334, 0, 2, 0);
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(&bLocal_663) != &iLocal_746)
		{
			MEMORY_PREFER_RIDING(&bLocal_663, true);
			SET_ACTORS_HORSE(&bLocal_663, &iLocal_746);
			Function_335(&bLocal_663, &iLocal_746, 1);
		}
	}
	return;
}

void Function_466(int iParam0, int iParam1) //Position: 0x19B6B / 105323
{
	Function_467(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_467(float fParam0) //Position: 0x19B80 / 105344
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

var Function_468() //Position: 0x19D4F / 105807
{
	return Global_53524.f_68;
}

int Function_469() //Position: 0x19D5A / 105818
{
	Function_331(&iLocal_4 + 184, 397, 2, 0);
	Function_331(&iLocal_4 + 184, 398, 2, 0);
	Function_331(&iLocal_4 + 184, 403, 2, 0);
	Function_331(&iLocal_4 + 184, 400, 2, 0);
	Function_331(&iLocal_4 + 184, 399, 2, 0);
	Function_331(&iLocal_4 + 184, 401, 2, 0);
	if (Function_323(&iLocal_4 + 184))
	{
		return 1;
	}
	return 0;
}

void Function_470() //Position: 0x19DBB / 105915
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_663);
	Function_234(0, 0, 1);
	return;
}

bool Function_471(struct<2> Param0, int iParam2, var uParam3, char* cParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x19DCE / 105934
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_242(&cParam4);
		uParam5 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_397(8))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_400(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_396(8);
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_395(&uParam7, 0, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_395(&uParam8, 0, 4294967295, 0, &iParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam2, &uParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam2, "MHDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_397(8))
	{
		Function_394(8);
		if (!Function_393())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_392();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8))) && DECOR_CHECK_EXIST(&iParam2, "MHDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam2));
				DECOR_REMOVE(&iParam2, "MHDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_395(&uParam7, 1, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_395(&uParam8, 1, 4294967295, 0, &iParam2);
			}
		}
	}
	return 0;
}

bool Function_472(struct<2> Param0, int iParam2, int iParam3, float fParam4, char* cParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x19F5F / 106335
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_473(&Global_54076, &iParam3, iParam2))
	{
		Function_242(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_473(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_397(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_400(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_396(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_395(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_395(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_397(2))
	{
		Function_394(2);
		if (!Function_393())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_392();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_213(&iParam3);
				Function_235(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_395(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_395(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_473(var uParam0, var uParam1, bool bParam2) //Position: 0x1A11D / 106781
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

void Function_474() //Position: 0x1A232 / 107058
{
	if (iLocal_659 < 3 && iLocal_659 > 105)
	{
		Function_226(&iLocal_4 + 1040[0]);
		Function_437(StackVal, "$/cutscene/OUTLAW01_CS02/OUTLAW01_CS02", &uLocal_796, Function_226(&iLocal_4 + 1040[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_659)
	{
		case 0x00000000:
			Function_356(0);
			Function_309();
			SET_ACTOR_HEALTH(&bLocal_663, GET_ACTOR_MAX_HEALTH(&bLocal_663));
			Function_353();
			Function_500(1, 1);
			bLocal_660 = Global_46736[0];
			if (!Function_352(bLocal_660))
			{
				Function_351(&Local_570);
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (Function_292(&Local_570))
			{
				Function_236(&bLocal_667);
				iLocal_659 = 1;
			}
			else
			{
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_330()) && (Function_352(bLocal_660) || bLocal_660 != 4294967295))
			{
				Function_231(&Global_54076, &iLocal_4 + 992[1], 1, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, Function_337(&Global_54076, 40), 0);
				Function_231(&bLocal_663, &iLocal_4 + 992[3], 1, 1, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_663, "outlaw_sit", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_663, "outlaw_sit");
				SET_REACT_NODE_FOR_ACTOR(&bLocal_663, "outlaw_sit");
				SET_MOVER_FROZEN(&bLocal_663, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_663);
				TASK_STAND_STILL(&bLocal_663, -1.0f, 0, 0);
				Function_297();
				Function_236(&bLocal_667);
				iLocal_659 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_292(&Local_570))
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					return;
				}
				Function_497();
				Function_248(bLocal_658);
				Function_418(StackVal, Function_248(bLocal_658), bLocal_658, Global_46736[0], Function_250(bLocal_658), 0);
				Function_469();
				Function_236(&bLocal_667);
				iLocal_659 = 6;
			}
			else
			{
				Function_497();
				Function_248(bLocal_658);
				Function_418(StackVal, Function_248(bLocal_658), bLocal_658, Global_46736[0], Function_250(bLocal_658), 0);
				Function_469();
				Function_236(&bLocal_667);
				iLocal_659 = 6;
			}
			break;
		
		case 0x00000006:
			iLocal_715 = 1;
			Function_496();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_GUNFIGHT", 0, 4294967295, 4294967295);
			Function_375(&iLocal_760, 0.0f);
			Function_400("Outlaw01_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_236(&bLocal_667);
			iLocal_659 = 7;
			break;
		
		case 0x00000007:
			if (Function_475())
			{
				Function_236(&bLocal_667);
				iLocal_659 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_287(&bLocal_667) <= 6.0f)
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_363(&Global_54076, 0);
				SET_PLAYER_CONTROL(0, 0, 1, 1);
				ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
				SET_MOVER_FROZEN(&bLocal_663, false);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_679[0] = 1;
				Function_236(&bLocal_667);
				bLocal_658 = true;
				iLocal_659 = 0;
			}
			break;
	}
	return;
}

bool Function_475() //Position: 0x1A514 / 107796
{
	if (Function_287(&iLocal_760) <= 25.0f)
	{
		Function_236(&iLocal_760);
		Function_495(&iLocal_760);
	}
	if (!HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_493();
	}
	if (iLocal_1022 >= 0)
	{
		Function_472(&iLocal_675, 20.0f, 60.0f, &bLocal_663, "Outlaw_return", "Outlaw_abandoned", &bLocal_702, 0, 0, 0, 325, 1);
	}
	if (Function_289(&iLocal_788))
	{
		if (Function_287(&iLocal_788) <= 2,5f)
		{
			CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 552[02]);
			MEMORY_ALLOW_SHOOTING(&iLocal_4 + 552[02], true);
			Function_236(&iLocal_788);
			Function_495(&iLocal_788);
		}
	}
	switch (iLocal_1022)
	{
		case 0x00000000:
			Function_488();
			Function_487();
			Function_484();
			if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 552[02]))
				{
					if ((Function_287(&bLocal_667) <= 4.0f || iLocal_755 <= 2) || IS_ACTOR_HOGTIED(&iLocal_4 + 552[02]))
					{
						if (!iLocal_718)
						{
							iLocal_755 = iLocal_755;
							iLocal_718 = 1;
							ABORT_SCRIPTED_CONVERSATION(0);
							SAY_SINGLE_LINE_STRING(&iLocal_4 + 552[12], "Outlaw01_shootsWelsh", true, true, 0, 0, true, false);
							TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&iLocal_4 + 552[12]);
							TASK_CLEAR(&iLocal_4 + 552[12]);
							Function_226(&iLocal_4 + 2152);
							fLocal_729 = Function_226(&iLocal_4 + 2152);
							TASK_KILL_CHAR(&iLocal_4 + 552[12], &Global_54076);
							TASK_PRIORITY_SET(&iLocal_4 + 552[12], true);
						}
					}
				}
				else if (!IS_ACTOR_ALIVE(&iLocal_4 + 552[02]))
				{
					if (!iLocal_718)
					{
						iLocal_718 = 1;
						ABORT_SCRIPTED_CONVERSATION(0);
						SAY_SINGLE_LINE_STRING(&iLocal_4 + 552[12], "Outlaw01_shootsWelsh", true, true, 0, 0, true, false);
						TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&iLocal_4 + 552[12]);
						TASK_CLEAR(&iLocal_4 + 552[12]);
						Function_226(&iLocal_4 + 2152);
						fLocal_729 = Function_226(&iLocal_4 + 2152);
						TASK_KILL_CHAR(&iLocal_4 + 552[12], &Global_54076);
						TASK_PRIORITY_SET(&iLocal_4 + 552[12], true);
					}
				}
			}
			if (Function_483(&iLocal_4 + 592) < 0)
			{
				HUD_CLEAR_OBJECTIVE();
				iLocal_715 = 0;
				Function_482(&iLocal_4 + 592);
				Function_236(&bLocal_667);
				iLocal_1022 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_287(&bLocal_667) <= 2.0f)
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[0]))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_481();
					Function_234(0, 1, 1);
					Function_479(1, 1);
					Function_236(&bLocal_667);
					Function_236(&bLocal_671);
					iLocal_1022 = 2;
				}
				else
				{
					Function_479(1, 1);
					HUD_CLEAR_OBJECTIVE();
					Function_236(&bLocal_667);
					iLocal_1022 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[0]))
			{
				Function_236(&bLocal_667);
				iLocal_1022 = 3;
			}
			else
			{
				Function_476();
			}
			if (Function_287(&bLocal_667) <= (4.0f + 3.0f))
			{
				Function_400("Outlaw01_Obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_236(&bLocal_667);
				iLocal_1022 = 3;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[0]))
			{
				Function_236(&bLocal_667);
				iLocal_1022 = 4;
			}
			else
			{
				Function_476();
			}
			break;
		
		case 0x00000004:
			Function_234(0, 0, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_476() //Position: 0x1A84F / 108623
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_287(&bLocal_671) <= 10.0f && !HUD_IS_SHOWING_OBJECTIVE())
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[1]))
			{
				Function_478();
				Function_236(&bLocal_671);
			}
			else
			{
				Function_477();
				Function_236(&bLocal_671);
			}
		}
	}
	return;
}

void Function_477() //Position: 0x1A898 / 108696
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WalksAwayFromIrish", "Outlaw01_WalksAwayFromIrish", false, 2, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_478() //Position: 0x1A8F7 / 108791
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_WaitingComeOver", "Outlaw01_WaitingComeOver", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479(int iParam0, bool bParam1) //Position: 0x1A950 / 108880
{
	if (iParam0 == 17)
	{
		if (&bParam1)
		{
		}
	}
	if (!Function_480(iParam0))
	{
		return;
	}
	if (&bParam1)
	{
		Global_41252[iParam011].f_52 = 1;
	}
	else
	{
		Global_41252[iParam011].f_56 = 1;
	}
	return;
}

bool Function_480(int iParam0) //Position: 0x1A98D / 108941
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_481() //Position: 0x1A9A3 / 108963
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsBoth", "Outlaw01_JohnKillsBoth", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482(int iParam0) //Position: 0x1A9F8 / 109048
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			Function_213(&iVar1);
		}
		bVar0++;
	}
	return;
}

int Function_483(int iParam0) //Position: 0x1AA34 / 109108
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

void Function_484() //Position: 0x1AA8A / 109194
{
	float fVar0;
	
	if (((((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE()) && !IS_ANY_SPEECH_PLAYING(&bLocal_663)) && !IS_ANY_SPEECH_PLAYING(&iLocal_4 + 552[12])) && !IS_ANY_SPEECH_PLAYING(&iLocal_4 + 552[02])) && Function_287(&iLocal_1011) <= 5.0f)
	{
		bLocal_753 = RAND_INT_RANGE_DIFFERENT(iLocal_753, 0, 2);
		switch (bLocal_753)
		{
			case 0x00000000:
				if (IS_ACTOR_ALIVE(&bLocal_663) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[1]))
				{
					Function_486();
					fVar0 = RAND_FLOAT_RANGE(0,25f, 2,75f);
					Function_237(&iLocal_1011, fVar0);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
				{
					Function_485();
					fVar0 = RAND_FLOAT_RANGE(0,25f, 2,75f);
					Function_237(&iLocal_1011, fVar0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_ALIVE(&iLocal_4 + 552[02]) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[1]))
				{
					Function_496();
					fVar0 = RAND_FLOAT_RANGE(0,25f, 2,75f);
					Function_237(&iLocal_1011, fVar0);
				}
				break;
			}
	}
	return;
}

void Function_485() //Position: 0x1AB90 / 109456
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_tauntsJon", "Outlaw01_tauntsJon", false, 1, 1, 0, 1);
		Function_366(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_486() //Position: 0x1ABDD / 109533
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_IrishShouts", "Outlaw01_IrishShouts", false, 2, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_487() //Position: 0x1AC2E / 109614
{
	if (!ACTOR_HAS_WEAPON(&iLocal_4 + 552[02], 4))
	{
		if (GET_TASK_STATUS(&iLocal_4 + 552[02], 45) != 1)
		{
			TASK_CLEAR(&iLocal_4 + 552[02]);
			TASK_MELEE_ATTACK(&iLocal_4 + 552[02], &Global_54076, -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 552[02], true);
		}
	}
	if (!ACTOR_HAS_WEAPON(&iLocal_4 + 552[12], 22))
	{
		if (GET_TASK_STATUS(&iLocal_4 + 552[12], 45) != 1)
		{
			TASK_CLEAR(&iLocal_4 + 552[12]);
			TASK_MELEE_ATTACK(&iLocal_4 + 552[12], &Global_54076, -1.0f);
			TASK_PRIORITY_SET(&iLocal_4 + 552[12], true);
		}
	}
	return;
}

void Function_488() //Position: 0x1ACCF / 109775
{
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 768[1]))
	{
		if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]) || IS_ACTOR_ALIVE(&iLocal_4 + 552[02]))
		{
			if (!Function_289(&iLocal_764))
			{
				Function_375(&iLocal_764, 0.0f);
				Function_375(&bLocal_671, 8.0f);
				if (IS_ACTOR_ALIVE(&iLocal_4 + 552[02]))
				{
					if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
					{
						HUD_CLEAR_OBJECTIVE();
						Function_400("Outlaw01_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					else
					{
						HUD_CLEAR_OBJECTIVE();
						Function_400("Outlaw01_obj01_french", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
				else if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_400("Outlaw01_obj01_welsh", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			else if (Function_287(&iLocal_764) <= 6.0f)
			{
				if ((IS_ACTOR_ALIVE(&iLocal_4 + 552[02]) && !IS_ACTOR_HOGTIED(&iLocal_4 + 552[02])) && ACTOR_HAS_WEAPON_IN_HAND(&iLocal_4 + 552[02], 4))
				{
					if (GET_TASK_STATUS(&iLocal_4 + 552[02], 5) != 1)
					{
						SET_ACTOR_ONE_SHOT_DEATH(&bLocal_663, true);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 552[02], 31, -1.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_4 + 552[02], 28, -1.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 552[02], 0, false);
						TASK_CLEAR(&iLocal_4 + 552[02]);
						TASK_KILL_CHAR(&iLocal_4 + 552[02], &bLocal_663);
						TASK_PRIORITY_SET(&iLocal_4 + 552[02], true);
					}
				}
				else
				{
					Function_472(&iLocal_675, 60.0f, 200.0f, &bLocal_663, "Outlaw_return", "Outlaw_abandoned", &bLocal_702, 0, &iLocal_4, &iLocal_568, 325, 1);
				}
			}
			else
			{
				Function_489();
			}
		}
	}
	else
	{
		if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
		{
			if (GET_TASK_STATUS(&iLocal_4 + 552[12], 0) == 1)
			{
				if (iLocal_718)
				{
					TASK_CLEAR(&iLocal_4 + 552[12]);
					TASK_KILL_CHAR(&iLocal_4 + 552[12], &Global_54076);
					TASK_PRIORITY_SET(&iLocal_4 + 552[12], true);
				}
			}
		}
		if (Function_289(&iLocal_764))
		{
			Function_236(&iLocal_764);
			Function_436(&iLocal_764);
		}
	}
	return;
}

void Function_489() //Position: 0x1AF25 / 110373
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 2);
	if (Function_287(&bLocal_671) <= 10.0f)
	{
		switch (bVar0)
		{
			case 0x00000000:
				Function_492();
				Function_236(&bLocal_671);
				break;
			
			case 0x00000001:
				Function_491();
				Function_236(&bLocal_671);
				break;
			
			case 0x00000002:
				Function_490();
				Function_236(&bLocal_671);
				break;
			}
	}
	return;
}

void Function_490() //Position: 0x1AF7E / 110462
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_RunsAwayFromFrench", "Outlaw01_RunsAwayFromFrench", false, 1, 1, 0, 1);
		Function_366(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_491() //Position: 0x1AFDE / 110558
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_jonRunsAway", "Outlaw01_jonRunsAway", false, 1, 1, 0, 1);
		Function_366(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_492() //Position: 0x1B02F / 110639
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_AbandonsIrish", "Outlaw01_AbandonsIrish", false, 2, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_493() //Position: 0x1B084 / 110724
{
	if (IS_ACTOR_HOGTIED(&iLocal_4 + 552[02]))
	{
		if (!DECOR_GET_BOOL(&iLocal_4 + 552[02], "dxHogtie"))
		{
			DECOR_SET_BOOL(&iLocal_4 + 552[02], "dxHogtie", true);
			Function_494();
		}
	}
	if (IS_ACTOR_HOGTIED(&iLocal_4 + 552[12]))
	{
		if (!DECOR_GET_BOOL(&iLocal_4 + 552[12], "dxHogtie"))
		{
			DECOR_SET_BOOL(&iLocal_4 + 552[12], "dxHogtie", true);
			Function_494();
		}
	}
	return;
}

void Function_494() //Position: 0x1B116 / 110870
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_HogTiesInstead", "Outlaw01_HogTiesInstead", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495(vector3 vParam0) //Position: 0x1B16D / 110957
{
	if (Function_289(&vParam0))
	{
		if (!Function_288(&vParam0))
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

void Function_496() //Position: 0x1B231 / 111153
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_FrenchTauntsJohn", "Outlaw01_FrenchTauntsJohn", false, 1, 1, 0, 1);
		Function_366(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_497() //Position: 0x1B28D / 111245
{
	Function_284(1.0f);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_498();
	bLocal_753 = 2;
	return;
}

void Function_498() //Position: 0x1B2A5 / 111269
{
	SQUAD_SET_FACTION(&iLocal_4 + 592, 19);
	Function_374(&iLocal_4 + 592, &bLocal_663, 1);
	Function_499(&iLocal_4 + 592);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 552[02], 0);
	MEMORY_ALLOW_SHOOTING(&iLocal_4 + 552[02], false);
	Function_370(&iLocal_4 + 552[02], 60.0f, 1,5f, 0.0f);
	AI_SET_BURST_DURATION(&iLocal_4 + 552[02], 1,5f);
	AI_SET_BURST_DURATION_RANDOMNESS(&iLocal_4 + 552[02], 0.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iLocal_4 + 552[02], true);
	SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 552[02], &iLocal_4 + 768[1], 4, true);
	Function_226(&iLocal_4 + 2152);
	fLocal_729 = Function_226(&iLocal_4 + 2152);
	bLocal_750 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_POINT_GUN_AT_OBJECT(0, &Global_54076, 1.0f, 1);
	TASK_SHOOT_FROM_POSITION(0, &Global_54076, &fLocal_729);
	TASK_SEQUENCE_CLOSE();
	SET_ACTOR_MAX_SPEED(&iLocal_4 + 552[02], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 552[02], bLocal_750);
	TASK_PRIORITY_SET(&iLocal_4 + 552[02], true);
	TASK_SEQUENCE_RELEASE(bLocal_750, 1);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iLocal_4 + 552[12], 2,25f);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iLocal_4 + 552[12], 0);
	SET_ACTOR_MAX_SPEED(&iLocal_4 + 552[12], 2);
	TASK_KILL_CHAR(&iLocal_4 + 552[12], &Global_54076);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&iLocal_4 + 552[12], 8, "KnifeDancing");
	Function_375(&iLocal_1011, 0.0f);
	Function_375(&iLocal_788, 0.0f);
	return;
}

void Function_499(int iParam0) //Position: 0x1B406 / 111622
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_500(int iParam0, bool bParam1) //Position: 0x1B43B / 111675
{
	if (iParam0 == 17)
	{
		if (&bParam1)
		{
		}
	}
	if (!Function_480(iParam0))
	{
		return;
	}
	if (&bParam1)
	{
		Global_41252[iParam011].f_52 = 0;
	}
	else
	{
		Global_41252[iParam011].f_56 = 0;
	}
	return;
}

void Function_501() //Position: 0x1B478 / 111736
{
	switch (iLocal_659)
	{
		case 0x00000006:
			Function_512(&Local_570, 1);
			iLocal_568 = CREATE_LAYOUT("MissionName_DynamicLayout");
			Function_511();
			*(&Global_15402[014] + 16) = 549;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_09", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((!Function_292(&Local_570) && Local_570.f_40 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Outlaw_01/Outlaw_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2168,76f, 16,50196f, 2570,128f), -180.0f, 1, 1, 1);
				Global_99147 = 1;
				iLocal_659 = 7;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Outlaw_01/Outlaw_01"))
				{
				}
				if (!Function_292(&Local_570))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2168,76f, 16,50196f, 2570,128f), -180.0f, 1, 1, 1);
				}
				iLocal_659 = 8;
			}
			break;
		
		case 0x00000007:
			if (Function_280("$/cutscene/Outlaw_01/Outlaw_01", &iLocal_646, &Local_570, &bLocal_658, 75500, 74624, 73821, 73198, 72882, 56929, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_659 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_510())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_311();
				}
				iLocal_659 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_661 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 768[3], 15);
			RESET_ACTOR_GAITS(&bLocal_663, 0);
			SET_CRIPPLE_ENABLE(&bLocal_663, 0);
			SET_ACTOR_FACTION(&bLocal_663, 20);
			TASK_PRIORITY_SET(&bLocal_663, true);
			TASK_STAND_STILL(&bLocal_663, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_663, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_663, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_663, GET_ACTOR_MAX_HEALTH(&bLocal_663));
			RESET_ACTOR_GAITS(&bLocal_665, 0);
			TASK_PRIORITY_SET(&bLocal_665, true);
			TASK_STAND_STILL(&bLocal_665, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_665, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_665, GET_ACTOR_MAX_HEALTH(&bLocal_665));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736[0]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736[1]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736[1]);
			Function_136(&(Global_43791[Global_46760[0]]), 256);
			SET_WEAPONENUM_LOCKED(16, 0);
			Function_508(&uLocal_797, &iLocal_568);
			Function_300(&(Local_851[015]), &bLocal_663, "Outlaw", 1, 0x5f5e100, 1);
			Function_505(&(Local_851[415]), &iLocal_568, 0x5f5e100);
			Function_407(&bLocal_667);
			Function_407(&bLocal_671);
			Function_407(&iLocal_675);
			Function_407(&iLocal_792);
			bLocal_658 = false;
			iLocal_659 = 0;
			Function_503(&Local_570, &bLocal_658, &iLocal_659);
			Function_502(StackVal, StackVal, StackVal, StackVal, StackVal, Local_570);
			switch (bLocal_658)
			{
				case 0x00000000:
					Function_309();
					break;
				
				case 0x00000001:
					Function_309();
					break;
				
				case 0x00000002:
					Function_222();
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_502(struct<41> Param0) //Position: 0x1B7CF / 112591
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_658 = false;
			break;
		
		case 0x00000002:
			bLocal_658 = true;
			break;
		
		case 0x00000003:
			bLocal_658 = 2;
			break;
		
		case 0x00000004:
			bLocal_658 = 3;
			break;
		
		case 0x00000005:
			bLocal_658 = 4;
			break;
		
		case 0x00000006:
			bLocal_658 = 5;
			break;
		
		case 0x00000007:
			bLocal_658 = 6;
			break;
		
		case 0x00000008:
			bLocal_658 = 7;
			break;
		
		case 0x00000009:
			bLocal_658 = 8;
			break;
		
		case 0x0000000A:
			bLocal_658 = 101;
			break;
	}
}

void Function_503(int iParam0, var uParam1, int iParam2) //Position: 0x1B864 / 112740
{
	if (Function_292(&iParam0))
	{
		uParam1 = Function_427(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_504();
	}
	return;
}

void Function_504() //Position: 0x1B8A0 / 112800
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

int Function_505(struct<69> Param0) //Position: 0x1B8F1 / 112881
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Layout invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Function_76();
	Function_76();
	Param0 = CREATE_POINT_IN_LAYOUT(&uParam1, "nMFT_Dummy", Function_76(), Function_76());
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	Param0.f_56 = 8;
	Param0.f_60 = 2;
	if (!Function_305(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_304(&Param0, 0);
	Param0.f_68 = 0;
	Function_301(&Param0, &iParam2, 0);
	Function_506(&Param0, 3);
	return 1;
}

void Function_506(int iParam0, int iParam1) //Position: 0x1BA12 / 113170
{
	if (iParam1 != 100000000)
	{
		Function_507(&iParam0, iParam1);
	}
	else
	{
		Function_302(&iParam0, 1);
	}
	return;
}

void Function_507(int iParam0, bool bParam1) //Position: 0x1BA34 / 113204
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_508(struct<2>[] Param0) //Position: 0x1BA61 / 113249
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_509(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_509(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_509(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_509(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_509(struct<13> Param0) //Position: 0x1C14A / 115018
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

bool Function_510() //Position: 0x1C219 / 115225
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_329(0))
		{
			return 0;
		}
		if (!Function_339())
		{
			return 0;
		}
		if (!Function_323(&iLocal_582))
		{
			return 0;
		}
		if (!Function_323(&iLocal_600))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_663))
		{
			bLocal_663 = Function_314(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_665))
		{
			bLocal_665 = Function_223(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_665, 1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_511() //Position: 0x1C29C / 115356
{
	Function_340(&iLocal_582, "custom/stand_ambient", 8, 0);
	Function_340(&iLocal_582, "dead_ground_male", 5, 0);
	Function_340(&iLocal_582, "custom/dead_ground_male", 8, 0);
	Function_340(&iLocal_582, "Outlaw01", 10, 0);
	Function_340(&iLocal_600, "custom/outlaw_sit", 8, 0);
	Function_340(&iLocal_600, "outlaw_sit", 5, 0);
	Function_340(&iLocal_600, "knf", 5, 0);
	Function_340(&iLocal_600, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_340(&iLocal_600, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_340(&iLocal_600, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_indef", 1, 0);
	Function_340(&iLocal_600, "$/content/scripting/gringo/simplegringo/leaning_stand_indef", 1, 0);
	Function_340(&iLocal_600, "$/content/scripting/gringo/simplegringo/lean_rail_drink", 1, 0);
	Function_340(&iLocal_600, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	return;
}

void Function_512(int iParam0, bool bParam1) //Position: 0x1C504 / 115972
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_518(0, 0);
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
	Function_210();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_252();
	Function_283();
	Function_242("");
	Function_517(0);
	Function_516();
	Function_203();
	Function_202();
	ENABLE_JOURNAL_REPLAY(0);
	Function_515();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_223(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_357(0, 0x40400000);
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
	Function_514(13);
	Function_514(14);
	Function_514(25);
	Function_514(24);
	Function_514(12);
	Function_514(27);
	Function_514(26);
	Function_514(15);
	Function_513();
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

void Function_513() //Position: 0x1C944 / 117060
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

void Function_514(int iParam0) //Position: 0x1C9C9 / 117193
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_515() //Position: 0x1C9E9 / 117225
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

void Function_516() //Position: 0x1CA2F / 117295
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_517(int iParam0) //Position: 0x1CA45 / 117317
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

void Function_518(int iParam0, int iParam1) //Position: 0x1CA7E / 117374
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
			Function_519(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_519(struct<113> Param0) //Position: 0x1CB05 / 117509
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

void Function_520() //Position: 0x1CB63 / 117603
{
	return;
}

bool Function_521(int iParam0) //Position: 0x1CB69 / 117609
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_522(struct<25> Param0) //Position: 0x1CB87 / 117639
{
	bool bVar0;
	
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000002:
					if (!Param0.f_20)
					{
						iLocal_755 = 4;
						bVar0 = RAND_INT_RANGE(false, true);
						if (bVar0 == 0)
						{
							Function_536();
							Function_236(&iLocal_1011);
						}
						else
						{
							Function_535();
							Function_236(&iLocal_1011);
						}
					}
					break;
				
				case 0x00000003:
					if (!Param0.f_20)
					{
						iLocal_755 = 4;
						bVar0 = RAND_INT_RANGE(false, true);
						if (bVar0 == 0)
						{
							if (IS_ACTOR_ALIVE(&iLocal_4 + 552[12]))
							{
								Function_534();
								Function_236(&iLocal_1011);
							}
							else
							{
								Function_533();
								Function_236(&iLocal_1011);
							}
						}
						else
						{
							Function_532();
							Function_236(&iLocal_1011);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_658 == 0)
					{
						Function_531();
						Function_236(&iLocal_1011);
					}
					else if (bLocal_658 == 1)
					{
						if (!Param0.f_20)
						{
							Function_530();
						}
						else
						{
							Function_529();
						}
					}
					break;
				
				case 0x00000002:
					iLocal_755 = 4;
					if (IS_ACTOR_VALID(&iLocal_4 + 552[12]))
					{
						Function_528();
						Function_236(&iLocal_1011);
					}
					break;
				
				case 0x00000003:
					iLocal_755 = 4;
					if (IS_ACTOR_VALID(&iLocal_4 + 552[02]))
					{
						Function_527();
						Function_236(&iLocal_1011);
					}
					break;
				
				case 0x00000004:
					if (iLocal_756 <= 2)
					{
						Function_526();
						iLocal_756++;
					}
					break;
			}
			break;
		
		case 0x00000020:
			break;
		
		case 0x00000040:
			break;
		
		case 0x00000080:
		case 0x00000100:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_658 != 1 || bLocal_658 != 2)
					{
						if (!iLocal_719)
						{
							Function_525();
							iLocal_719 = 1;
						}
					}
					break;
			}
			break;
		
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_658 == 1)
					{
						if (!iLocal_720)
						{
							Function_524();
							iLocal_720 = 1;
						}
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
			Function_523(&Param0, 1);
			return 1;
		}
	}
	Function_523(&Param0, 0);
	return 0;
}

void Function_523(struct<25> Param0) //Position: 0x1CDA6 / 118182
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

void Function_524() //Position: 0x1CDD1 / 118225
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_BumpsIrishDuringRide", "Outlaw01_BumpsIrishDuringRide", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x1CE34 / 118324
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_AssaultIrishToDJulio", "Outlaw01_AssaultIrishToDJulio", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x1CE97 / 118423
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_ShootsAmbToDJulio", "Outlaw01_ShootsAmbToDJulio", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527() //Position: 0x1CEF4 / 118516
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_JohnShootsFrenchNoKill", "Outlaw01_JohnShootsFrenchNoKill", false, 1, 1, 0, 1);
		Function_366(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_528() //Position: 0x1CF5C / 118620
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_shootsWelsh", "Outlaw01_shootsWelsh", false, 1, 1, 0, 1);
		Function_366(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_529() //Position: 0x1CFAD / 118701
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_ShootsIrishHorseRide", "Outlaw01_ShootsIrishHorseRide", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x1D010 / 118800
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_ShootsIrishToDJulio", "Outlaw01_ShootsIrishToDJulio", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_531() //Position: 0x1D071 / 118897
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnShootsIrish", "Outlaw01_JohnShootsIrish", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_532() //Position: 0x1D0CA / 118986
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_jonKillsFrench", "Outlaw01_jonKillsFrench", false, 1, 1, 0, 1);
		Function_366(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_533() //Position: 0x1D121 / 119073
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsFrench02", "Outlaw01_JohnKillsFrench02", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_534() //Position: 0x1D17E / 119166
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsFrench01", "Outlaw01_JohnKillsFrench01", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535() //Position: 0x1D1DB / 119259
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Outlaw01_JohnKillsWelsh2", "Outlaw01_JohnKillsWelsh2", false, 1, 1, 0, 1);
		Function_366(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_536() //Position: 0x1D235 / 119349
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnKillsWelsh", "Outlaw01_JohnKillsWelsh", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_537(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1D28C / 119436
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
		Function_523(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_556(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_555(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_555(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_541(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_523(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_540(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_539(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_540(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_538(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_242(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_539(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_523(&Param2, 0);
	return 0;
}

void Function_538(char* cParam0) //Position: 0x1D6A2 / 120482
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

void Function_539(struct<25> Param0) //Position: 0x1D796 / 120726
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

void Function_540(bool bParam0) //Position: 0x1D80E / 120846
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_541(struct<57> Param0) //Position: 0x1D832 / 120882
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
			return Function_552(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_545(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_552(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_542(&Param0, bVar2);
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
						bVar2 = Function_552(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_542(&Param0, bVar2);
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

var Function_542(int iParam0, bool bParam1) //Position: 0x1D9A3 / 121251
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
				bParam1 = Function_544(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_543(16);
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
				bParam1 = Function_544(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_543(256);
			}
		}
	}
	return bParam1;
}

bool Function_543(int iParam0) //Position: 0x1DADF / 121567
{
	return 2 | iParam0;
}

int Function_544(int iParam0) //Position: 0x1DAE9 / 121577
{
	return 4 | iParam0;
}

int Function_545(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1DAF3 / 121587
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
				iParam3 = Function_551(&iParam0, &iParam1, bParam4);
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
			return Function_543(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_546(&iParam0, &iParam1, 0, bParam4);
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
			return Function_543(16);
		}
	}
	return 0;
}

int Function_546(int iParam0, vector3 vParam1) //Position: 0x1DBAE / 121774
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_550(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_549(iVar0, 3, 1, bParam3))
			{
				if (!Function_555(&iParam0, 8, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_549(iVar0, 2, 1, bParam3))
			{
				if (!Function_555(&iParam0, 32, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_549(iVar0, 1, 1, bParam3))
			{
				if (!Function_555(&iParam0, 64, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_549(iVar0, 3, 1, bParam3))
			{
				if (!Function_555(&iParam0, 128, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_549(iVar0, 1, 1, bParam3))
			{
				if (!Function_555(&iParam0, 1024, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_549(iVar0, 1, 1, bParam3))
			{
				if (!Function_555(&iParam0, 1024, 1))
				{
					return Function_548(64, 1024, bParam2);
				}
			}
			return Function_547(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_547(int iParam0, int iParam1, bool bParam2) //Position: 0x1DD76 / 122230
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_548(int iParam0, int iParam1, bool bParam2) //Position: 0x1DD8B / 122251
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_549(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1DDA0 / 122272
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_550(int iParam0) //Position: 0x1DDBD / 122301
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

int Function_551(var uParam0, vector3 vParam1) //Position: 0x1DE30 / 122416
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_550(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_549(iVar0, 3, 1, bParam2))
			{
				if (!Function_555(&uParam0, 8, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000009:
			if (Function_549(iVar0, 3, 1, bParam2))
			{
				if (!Function_555(&uParam0, 8, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x0000006E:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_555(&uParam0, 16, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x0000005B:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_555(&uParam0, 32, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000031:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&uParam0, 64, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000007:
			if (Function_549(iVar0, 3, 1, bParam2))
			{
				if (!Function_555(&uParam0, 128, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000008:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_555(&uParam0, 256, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000014:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&uParam0, 512, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000018:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&uParam0, 512, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000057:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&uParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000058:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&uParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_552(struct<65> Param0) //Position: 0x1E059 / 122969
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
						return Function_551(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_555(&Param0, 2, 1))
					{
						return Function_544(8);
					}
					return Function_543(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_555(&Param0, 4, 1))
					{
						return Function_544(16);
					}
					return Function_543(16);
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
							return Function_546(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_555(&Param0, 2, 1))
						{
							return Function_544(128);
						}
						return Function_543(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_555(&Param0, 4, 1))
						{
							return Function_544(256);
						}
						return Function_543(256);
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
						return Function_546(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_555(&Param0, 2, 1))
					{
						return Function_544(8);
					}
					return Function_543(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_555(&Param0, 4, 1))
					{
						return Function_544(16);
					}
					return Function_543(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_554(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_555(&Param0, 2, 1))
					{
						return Function_544(8);
					}
					return Function_543(8);
				}
				if (!Function_555(&Param0, 4, 1))
				{
					return Function_544(16);
				}
				return Function_543(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_546(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_553(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_543(128);
							}
							if (!Function_555(&Param0, 2, 1))
							{
								return Function_544(8);
							}
							return Function_543(8);
						}
						if (iParam4 == 2)
						{
							if (Function_553(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_543(256);
							}
							if (!Function_555(&Param0, 4, 1))
							{
								return Function_544(16);
							}
							return Function_543(16);
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

bool Function_553(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1E33F / 123711
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

int Function_554(int iParam0, vector3 vParam1) //Position: 0x1E40D / 123917
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_550(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_555(&iParam0, 16, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x0000005B:
			if (Function_549(iVar0, 2, 1, bParam2))
			{
				if (!Function_555(&iParam0, 32, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000057:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&iParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		case 0x00000058:
			if (Function_549(iVar0, 1, 1, bParam2))
			{
				if (!Function_555(&iParam0, 1024, 1))
				{
					return Function_544(64);
				}
			}
			return Function_543(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_555(struct<69> Param0) //Position: 0x1E52F / 124207
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

int Function_556(int iParam0) //Position: 0x1E559 / 124249
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

void Function_557(int iParam0) //Position: 0x1E58F / 124303
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (&iParam0 == &bLocal_663)
		{
			if (MEMORY_GET_IS_VISIBLE(&bLocal_663, &Global_54076))
			{
				switch (bLocal_658)
				{
					case 0x00000000:
						Function_560();
						break;
					
					case 0x00000001:
						Function_559();
						break;
					}
			}
		}
		else if (MEMORY_GET_IS_VISIBLE(&bLocal_663, &Global_54076))
		{
			if (bLocal_658 == 1)
			{
				Function_558();
			}
		}
	}
	return;
}

void Function_558() //Position: 0x1E5F1 / 124401
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_GunOnAmbToDJulio", "Outlaw01_GunOnAmbToDJulio", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x1E64C / 124492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_GunOnIrishToDJulio", "Outlaw01_GunOnIrishToDJulio", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1E6AB / 124587
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw01_JohnTargetsIrish", "Outlaw01_JohnTargetsIrish", false, 1, 1, 0, 1);
		Function_366(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

var Function_561(bool bParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1E706 / 124678
{
	float fVar0;
	
	if (Function_563(GET_WEAPON_IN_HAND(&Global_54076)))
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
							if (Function_562(&bParam0, &Global_54076, 50.0f))
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

bool Function_562(var uParam0, var uParam1, float fParam2) //Position: 0x1E7E8 / 124904
{
	float fVar0;
	
	fVar0 = Function_379(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

bool Function_563(bool bParam0) //Position: 0x1E807 / 124935
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

void Function_564(int iParam0, int iParam1) //Position: 0x1E84D / 125005
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
				{
					iParam0 = &iVar0;
					Function_466(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_466(&iParam0, 0);
			}
		}
	}
	else
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (!&iParam0 != &iVar0)
			{
				if (IS_ACTOR_VALID(&iParam1))
				{
					if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
						}
						iParam0 = &iVar0;
						Function_466(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_466(&iParam0, 0);
				}
			}
		}
	}
	return;
}

void Function_565() //Position: 0x1E931 / 125233
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw01_WelshKillsJon", "Outlaw01_WelshKillsJon", false, 1, 1, 0, 1);
		Function_366(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1E986 / 125318
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

