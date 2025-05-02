//Decompiled with MagicRDR v1.0
//Function Count : 517
//Statics Count : 824
//Natives Count : 635
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	struct<2> Local_37 = { 0, 0 } ;
	var uLocal_39 = 0;
	struct<2> Local_40 = { 0, 0 } ;
	var uLocal_42 = 0;
	struct<2> Local_43 = { 0, 0 } ;
	var uLocal_45 = 0;
	float fLocal_46 = 0.0f;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	var uLocal_49 = 0;
	float fLocal_50 = 0.0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[3] = { 0, 0, 0 };
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	char[] cLocal_74[4] = 0;
	var uLocal_75 = 0;
	char[] cLocal_76[4] = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0.0f;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 22;
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
	int iLocal_180 = 0;
	bool bLocal_181 = false;
	int iLocal_182 = 0;
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
	var uLocal_201 = 3;
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
	var uLocal_228 = 3;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 3;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 3;
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
	var uLocal_282 = 3;
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
	var uLocal_309 = 3;
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
	var uLocal_337 = 3;
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
	var uLocal_363 = 3;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 3;
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
	var uLocal_459 = 11;
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
	var uLocal_540 = 3;
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
	var uLocal_626 = 6;
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
	var uLocal_641 = 6;
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
	var uLocal_674 = 6;
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
	int iLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	int iLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	int iLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	int iLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	int iLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	int iLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	bool bLocal_726 = false;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	bool bLocal_729 = false;
	struct<2> Local_730 = { 0, 0 } ;
	var uLocal_732 = 0;
	struct<2> Local_733 = { 0, 0 } ;
	var uLocal_735 = 0;
	struct<2> Local_736 = { 0, 0 } ;
	var uLocal_738 = 0;
	struct<2> Local_739 = { 0, 0 } ;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	bool bLocal_745 = false;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	bool bLocal_748 = false;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	bool bLocal_755 = false;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	struct<31> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<8> Var0;
	int iVar8;
	var uVar9;
	var uVar10;
	struct<2> Var11;
	struct<2> Var13;
	int iVar15;
	struct<2> Var16;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_28 = 0;
	iLocal_29 = 0;
	iLocal_30 = 0;
	iLocal_31 = 0;
	iLocal_32 = 0;
	iLocal_33 = 0;
	uLocal_34 = Vector(-2128,103f, 16,58369f, 2619,343f);
	Local_37 = Vector(-2129,32f, 17,65886f, 2619,586f);
	Local_40 = Vector(0.0f, 0.0f, 0.0f);
	Local_43 = Vector(8,762381f, 3,464221f, 3,192364f);
	fLocal_46 = "";
	bLocal_48 = "";
	fLocal_50 = "";
	uLocal_52 = "";
	uLocal_56 = "";
	uLocal_58 = "";
	uLocal_68 = "";
	uLocal_70 = "";
	iLocal_180 = 1;
	bLocal_726 = false;
	iLocal_727 = 0;
	iLocal_728 = 0;
	bLocal_729 = false;
	Local_730 = Vector(0.0f, 0.0f, 0.0f);
	Local_733 = Vector(0.0f, 0.0f, 0.0f);
	iLocal_746 = 0;
	iLocal_747 = 0;
	bLocal_748 = false;
	iLocal_749 = 0;
	iLocal_750 = 0;
	iLocal_751 = 0;
	iLocal_752 = 0;
	iLocal_753 = 0;
	iLocal_754 = 0;
	bLocal_755 = false;
	iLocal_756 = 0;
	iLocal_757 = 0;
	iLocal_758 = 0;
	iLocal_759 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_513(&iLocal_90);
	DECOR_SET_BOOL(&Global_54076, "SOL_FTE_B_StillRunning", true);
	while (!IS_EXITFLAG_SET())
	{
		GET_POSITION(&Global_54076, &Local_730);
		if (IS_ACTOR_VALID(&fLocal_46))
		{
			GET_POSITION(&fLocal_46, &Local_733);
		}
		if (!iLocal_752)
		{
			if (IS_ACTOR_VALID(&bLocal_48))
			{
				if (GET_LAST_ATTACKER(&bLocal_48) == &Global_54076)
				{
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_512("sol_FTE_Help_AttBanker", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_751 = 1;
					iLocal_180 = 16;
				}
			}
		}
		if (!Function_510(&iLocal_180, &Global_54076, &fLocal_46, &iLocal_182))
		{
			iLocal_754 = 1;
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		if (!iLocal_753)
		{
			if (iLocal_180 > 2)
			{
				if (!iLocal_747)
				{
					if (!IS_ACTOR_ALIVE(&fLocal_50))
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_Sheriff_Died", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iLocal_747 = 1;
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "DestroyGateway"))
		{
			if (IS_OBJECT_VALID(&uLocal_54))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_54)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_54));
				}
				DESTROY_OBJECT(&uLocal_54);
			}
		}
		switch (iLocal_180)
		{
			case 0x00000001:
				if (Function_504(&iLocal_90))
				{
					if (!IS_LAYOUTREF_VALID(&uLocal_58))
					{
						uLocal_58 = CREATE_LAYOUT("SOL_FTE_Layout");
						Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("armv_sol_returnWagon") };
						iLocal_82 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_58, &Var0, 4,203895E-45f, Vector(-2137,558f, 16,373f, 2625,337f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 8.0f, 15.0f));
						Function_501(&iLocal_182, 4);
						Function_500(StackVal, StackVal, &iLocal_182, Vector(-3868,27f, 8,031f, 3646,229f), Vector(0.0f, 143,637f, 0.0f));
						Function_499(&iLocal_182, 0);
						Function_498(&iLocal_182, 1);
						Function_497(&iLocal_182, 1);
						Function_495(&iLocal_182, Global_46760[0], 0);
						Function_494(&iLocal_182, &iLocal_82);
						Function_493(&iLocal_182, 1);
						Function_492(&iLocal_182, 6);
						Function_491(&iLocal_182, 3, 4);
						Function_490(&iLocal_182, 10.0f);
						Function_489(&iLocal_182, 25.0f);
						Function_488(&iLocal_182, 50.0f, 70.0f, 0x41700000);
						Function_487(&iLocal_182, 1);
						Function_486(&iLocal_182, 1);
						Function_485(&iLocal_182, 486);
						Function_485(&iLocal_182, 487);
						Function_485(&iLocal_182, 488);
						Function_485(&iLocal_182, 489);
						Function_485(&iLocal_182, 490);
						Function_485(&iLocal_182, 491);
					}
					if (Function_484(&uLocal_58, &fLocal_46, &uLocal_52, &bLocal_726, &uLocal_88))
					{
						Function_483(&iLocal_182, &fLocal_46);
						Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter"));
						Function_481(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter"));
						fLocal_50 = CREATE_ACTOR_IN_LAYOUT(&uLocal_58, "IntroGuy", 443, Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter")), Function_481(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter")));
						iLocal_72 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_58, "nhelpSquad"));
						SQUAD_JOIN(&fLocal_50, &iLocal_72);
						SQUAD_SET_FACTION(&iLocal_72, 20);
						MEMORY_CONSIDER_AS(&fLocal_50, &Global_54076, false);
						Function_478(&iLocal_72, Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")), 4);
						TASK_CROUCH(&fLocal_50, -1.0f);
						SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,1f);
						SET_CRIPPLE_ENABLE(&fLocal_50, 0);
						SET_ACTOR_ALLOW_DISARM(&fLocal_50, false);
						SET_ACTOR_PROOF(&fLocal_50, 128);
						AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&fLocal_50, 1);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&fLocal_50, 12, 0);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&fLocal_50, 13, 0);
						Function_477(Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")));
						AI_GOAL_LOOK_AT_ACTOR_NEW(&fLocal_50, &Global_54076, -1.0f, 1);
						uLocal_54 = CREATE_GATEWAY_IN_LAYOUT(&uLocal_58, "IntroGateway", FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_IntroGateway"), &Global_54076, 2, 3, 0, 0, 1, 1);
						ADD_BLIP_FOR_OBJECT(&uLocal_54, 330, 0f, 2, 0);
						uLocal_78 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_IntroGateway");
						Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
						uLocal_742 = Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_TeleportHorse"));
						uLocal_80 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_CheckPlayerHorse");
						Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter"));
						Local_736 = Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter"));
						Function_481(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter"));
						Local_739 = Function_481(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_introCharacter"));
						if (!IS_ACTOR_IN_VOLUME(&fLocal_50, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_checkToTeleport")))
						{
							SET_OBJECT_POSITION(&fLocal_50, Local_736);
							SET_OBJECT_ORIENTATION(&fLocal_50, Local_739);
						}
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_Find_IntroGuy", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_Find_IntroGuy", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						iVar8 = 0;
						while (iVar8 <= 4)
						{
							if (!Function_476(&(Global_11398[iVar82]), 2) || Function_476(&(Global_11398[iVar82]), 4))
							{
								bLocal_755 = true;
							}
							iVar8++;
						}
						if (!bLocal_755)
						{
							uLocal_760 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_05");
							SC_CHALLENGE_LAUNCH(&uLocal_760);
							if (!Function_475(&iLocal_706))
							{
								Function_474(&iLocal_706);
							}
							else
							{
								Function_472(&iLocal_706);
							}
						}
						Function_471(Global_46949, 1);
						DECOR_SET_BOOL(&Global_54076, "shakehands_noCam", true);
						fLocal_84 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_58, "vStopAttacks", 4,203895E-45f, Vector(-2148,081f, 17,566f, 2611,195f), Vector(0.0f, 0.0f, 0.0f), Vector(299,2477f, 307,9527f, 299,2477f));
						iLocal_180 = 0;
					}
				}
				break;
			
			case 0x00000000:
				if (!Function_407(&iLocal_182))
				{
					iLocal_180 = 16;
				}
				else
				{
					iLocal_180 = 2;
					if (!SQUAD_IS_VALID(&uLocal_70))
					{
						if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("SOL_AA_Layout")))
						{
							uLocal_70 = Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout"));
							PRINTSTRING("Here's how many are in there: ");
							PRINTINT(SQUAD_GET_SIZE(&uLocal_70));
							PRINTNL();
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_405("sc_challenge_aa_05", &iLocal_706);
				Function_404(&fLocal_50, &iLocal_72);
				if (iLocal_750)
				{
					if (!iLocal_757)
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_TaskFloyd")))
						{
							TASK_CLEAR(&fLocal_50);
							TASK_SHOOT_ENEMIES_FROM_COVER(&fLocal_50, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_46715, "ncover_low")), -1.0f, 5.0f);
							SET_ACTOR_STAY_WITHIN_VOLUME(&fLocal_50, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_IntroGuyStayWithin"), 4, true);
							iLocal_757 = 1;
						}
					}
				}
				if (SQUAD_IS_VALID(&uLocal_70))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_70) == 0)
					{
						if (!Function_475(&iLocal_718))
						{
							Function_474(&iLocal_718);
							SQUAD_SET_FACTION(&iLocal_72, 21);
							MEMORY_CONSIDER_AS(&fLocal_50, &Global_54076, 2);
						}
					}
				}
				if (!bLocal_748)
				{
					if (Function_475(&iLocal_718))
					{
						if (Function_403(&iLocal_718) <= 2.0f)
						{
							if (Function_402(&fLocal_50, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Function_401(&fLocal_50, &Global_54076) >= 30.0f)
								{
									if (GET_NTH_TASK_STATUS(&fLocal_50, 1) == 1)
									{
										Function_400();
										RESET_ANIM_SET_FOR_ACTOR(&fLocal_50, 1);
										SET_ANIM_SET_FOR_ACTOR(&fLocal_50, "nthank_you", 0);
										SET_ACTION_NODE_FOR_ACTOR(&fLocal_50, "nthank_you");
										iLocal_753 = 1;
										bLocal_748 = true;
										if (!Function_475(&iLocal_722))
										{
											Function_474(&iLocal_722);
										}
									}
								}
							}
						}
					}
				}
				if (!iLocal_749)
				{
					if (IS_VOLUME_VALID(&uLocal_78))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_78) && IS_ACTOR_RIDING_VEHICLE(&Global_54076))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_512("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
							iLocal_749 = 1;
						}
					}
				}
				if (iLocal_749)
				{
					if (Function_398(&Global_54076, &uLocal_78) <= 15.0f)
					{
						iLocal_749 = 0;
					}
				}
				if (!iLocal_746)
				{
					if (IS_OBJECT_VALID(&uLocal_54))
					{
						if (Function_396(&uLocal_54, 0, 1, 0, 1, 0))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_54));
							DESTROY_OBJECT(&uLocal_54);
							uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_58, Function_395(), 4,203895E-45f, Vector(-3849,653f, 7,466f, 3690,893f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar9);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar9);
							CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar9, 15);
							DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uVar9);
							uVar10 = GET_ACTORS_HORSE(&Global_54076);
							if (IS_ACTOR_VALID(&uVar10))
							{
								if (IS_ACTOR_IN_VOLUME(&uVar10, &uLocal_80))
								{
									TELEPORT_ACTOR(&uVar10, &uLocal_742, 1, 1, 1);
								}
							}
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&fLocal_50);
							HUD_CLEAR_HELP();
							HUD_CLEAR_HELP_QUEUE();
							if (!Function_394(Global_46949) != 2)
							{
								Function_393(Global_46949, 1);
								Global_6628 = 1;
								SET_PLAYER_ENDLESS_READYMODE(0, 1);
							}
							Function_388(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
							Function_384(&uLocal_58, 0, 1, 0, 0);
							DECOR_SET_BOOL(&Global_54076, "RunningCutscene", true);
							DECOR_SET_BOOL(&Global_54076, "PrintObjThruCut", true);
							Function_474(&iLocal_710);
							Function_472(&iLocal_710);
							SET_PLAYER_POSTURE(0, 1, 0);
							bLocal_181 = GET_WEAPON_IN_HAND(&Global_54076);
							AI_GOAL_LOOK_AT_ACTOR(&fLocal_50, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
							FORCE_LOOK_AT_ACTOR(&fLocal_50, &Global_54076, -1.0f);
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
							ACTOR_START_FORCE_HOLSTER(&fLocal_50, 1, 0);
							Function_383(&Global_54076, 0);
							SET_ACTOR_UPDATE_PRIORITY(&Global_54076, false);
							Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
							Var11 = Function_482(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
							Function_481(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
							Var13 = Function_481(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_teleportJohnCrouch"));
							if (!IS_ACTOR_IN_VOLUME(&fLocal_50, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_checkToTeleport1")))
							{
								SET_OBJECT_POSITION(&fLocal_50, Local_736);
								SET_OBJECT_ORIENTATION(&fLocal_50, Local_739);
							}
							SET_OBJECT_POSITION(&Global_54076, Var11);
							SET_OBJECT_ORIENTATION(&Global_54076, Var13);
							SET_ANIM_SET_FOR_ACTOR(&Global_54076, "AA_tesoro_intro_cover", 0);
							SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "AA_tesoro_intro_cover/Player/Ply_Pre");
							iLocal_746 = 1;
							iLocal_180 = 3;
						}
					}
				}
				if (Function_382(&bLocal_726, &uLocal_68, &fLocal_46, &uLocal_70, &iLocal_182, &fLocal_50))
				{
					if (!Function_381(bLocal_726, 16))
					{
						Function_380(&bLocal_726, 16);
						DECOR_SET_BOOL(&Global_54076, "SOL_FTE_EngagedAA", true);
					}
					iLocal_180 = 7;
				}
				if (!Function_381(bLocal_726, 128))
				{
					if (IS_LAYOUTREF_VALID(&Global_46715))
					{
						if (!IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_46715, "solv_region")))
						{
							iLocal_180 = 16;
						}
					}
				}
				else if (VDIST(Local_730, Local_733) < 50.0f)
				{
					Function_493(&iLocal_182, 0);
				}
				else
				{
					Function_493(&iLocal_182, 1);
				}
				if (!Function_211(&iLocal_182, &iLocal_727, &bLocal_726, &bLocal_48, &iLocal_728, &uLocal_86, &uLocal_58, &uLocal_56, &cLocal_74, &fLocal_50, &fLocal_84, &fLocal_46))
				{
					if (iLocal_727 == 666)
					{
						iLocal_180 = 8;
					}
					else
					{
						iLocal_180 = 16;
					}
				}
				break;
			
			case 0x00000007:
				Function_404(&fLocal_50, &iLocal_72);
				if (SQUAD_IS_VALID(&uLocal_70))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_70) == 0)
					{
						if (!Function_475(&iLocal_718))
						{
							Function_474(&iLocal_718);
							SQUAD_SET_FACTION(&iLocal_72, 21);
							MEMORY_CONSIDER_AS(&fLocal_50, &Global_54076, 2);
						}
					}
				}
				if (!bLocal_748)
				{
					if (Function_475(&iLocal_718))
					{
						if (Function_403(&iLocal_718) <= 2.0f)
						{
							if (Function_402(&fLocal_50, 0x3f800000, 0x42960000, 1, 1, 0))
							{
								if (Function_401(&fLocal_50, &Global_54076) >= 30.0f)
								{
									if (GET_NTH_TASK_STATUS(&fLocal_50, 1) == 1)
									{
										Function_400();
										RESET_ANIM_SET_FOR_ACTOR(&fLocal_50, 1);
										SET_ANIM_SET_FOR_ACTOR(&fLocal_50, "nthank_you", 0);
										SET_ACTION_NODE_FOR_ACTOR(&fLocal_50, "nthank_you");
										iLocal_753 = 1;
										bLocal_748 = true;
										if (!Function_475(&iLocal_722))
										{
											Function_474(&iLocal_722);
										}
									}
								}
							}
						}
					}
				}
				if (!iLocal_758)
				{
					if (bLocal_748)
					{
						if (Function_475(&iLocal_722))
						{
							if (Function_403(&iLocal_722) <= 7.0f)
							{
								if (!IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_TaskFloyd")))
								{
									TASK_CLEAR(&fLocal_50);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&fLocal_50);
									MEMORY_PREFER_RIDING(&fLocal_50, true);
									TASK_GO_NEAR_OBJECT(&fLocal_50, FIND_OBJECT_IN_LAYOUT(&Global_46715, "v_FloydGoToSpot"), 10.0f, 2, 0, 1);
									iLocal_758 = 1;
								}
							}
						}
					}
				}
				iVar15 = Function_209(&bLocal_726, &iLocal_182);
				if (iVar15 == 2)
				{
					iLocal_180 = 2;
				}
				if (!Function_211(&iLocal_182, &iLocal_727, &bLocal_726, &bLocal_48, &iLocal_728, &uLocal_86, &uLocal_58, &uLocal_56, &cLocal_74, &fLocal_50, &fLocal_84, &fLocal_46))
				{
					if (iLocal_727 == 666)
					{
						STOP_VEHICLE(&iLocal_182 + 1408);
						ENABLE_VEHICLE_SEAT(&iLocal_182 + 1408, false, 0);
						ENABLE_VEHICLE_SEAT(&iLocal_182 + 1408, true, 0);
						iLocal_180 = 8;
					}
					else
					{
						iLocal_180 = 16;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_475(&iLocal_710))
				{
					if (Function_403(&iLocal_710) < 0,25f)
					{
						Function_208();
						SET_CAMERA_POSITION(StackVal, GET_GAME_CAMERA(), Vector(-3848,701f, 7,223391f, 3694,126f));
						SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 6,789521f, 0.0f), 0);
						iLocal_180 = 6;
					}
				}
				break;
			
			case 0x00000006:
				if (Function_475(&iLocal_710))
				{
					if (Function_403(&iLocal_710) < 10.0f)
					{
						if (!iLocal_750)
						{
							Function_206(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&fLocal_50)))
							{
								ADD_BLIP_FOR_ACTOR(&fLocal_50, 325, 0, 2, 0);
							}
							AI_STOP_IGNORING_ACTORS();
							AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
							AI_CLEAR_DONT_HARM_ACTOR(&fLocal_50);
							SET_PLAYER_POSTURE(0, 1, 0);
							ATTACH_PLAYER_TO_COVER(0, 1, 1);
							ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
							STOP_FORCE_LOOK_AT_COORD(&fLocal_50);
							AI_GOAL_LOOK_CLEAR(&fLocal_50);
							ACTOR_END_FORCE_HOLSTER(&fLocal_50);
							ACTOR_END_FORCE_HOLSTER(&Global_54076);
							if (bLocal_181 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, bLocal_181, 1);
							}
							RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
							if (!DECOR_CHECK_EXIST(&Global_54076, "BlippedSquad"))
							{
								if (HUD_IS_SHOWING_OBJECTIVE())
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
								}
								Function_509("sol_FTE_MainObjText", 0x40f00000, 1, 2, 0, 0, 0, 0);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
								APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_MainObjText", 0, 0, false);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
								Function_205(Function_479("SOL_AA_Squad", FIND_NAMED_LAYOUT("SOL_AA_Layout")), 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
							}
							if (!Function_475(&iLocal_714))
							{
								Function_474(&iLocal_714);
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							Function_204(&fLocal_50, &uLocal_70);
							Function_203(&fLocal_50, &uLocal_70, 4);
							iLocal_750 = 1;
							iLocal_180 = 2;
						}
					}
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(&bLocal_48))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_48, 325, 0, 2, 0);
					Function_202();
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_509("sol_FTE_ExitWagon", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_ExitWagon", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				}
				else
				{
					Function_200(Function_201(1, 1, 1, 0, 0), 1, 1);
					if (!Function_199())
					{
						Function_197(9, 0, 1);
					}
					else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
					{
						Function_197(9, 0, 1);
					}
					if (!DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
					{
						Function_193(200, 1, 0);
						Function_180(50, 1, 0);
					}
					Function_471(Global_46949, 0);
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
					if (Function_475(&iLocal_706))
					{
						bLocal_745 = Function_403(&iLocal_706);
					}
					if (Function_475(&iLocal_706))
					{
						if (Function_179(460) < 0.0f)
						{
							if (bLocal_745 > Function_179(460))
							{
								Function_178(460, bLocal_745, 0);
							}
						}
						else
						{
							Function_178(460, bLocal_745, 0);
						}
					}
					Function_148(Global_46949);
					Function_93(Global_46949, 1, 1, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				iLocal_180 = 9;
				break;
			
			case 0x00000009:
				if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_48))
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_TalkToBanker", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_TalkToBanker", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						iLocal_180 = 10;
					}
					else
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						Function_200(Function_201(1, 1, 1, 0, 0), 1, 1);
						if (!Function_199())
						{
							Function_197(9, 0, 1);
						}
						else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
						{
							Function_197(9, 0, 1);
						}
						if (!DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
						{
							Function_193(200, 1, 0);
							Function_180(50, 1, 0);
						}
						Function_471(Global_46949, 0);
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						if (Function_475(&iLocal_706))
						{
							bLocal_745 = Function_403(&iLocal_706);
						}
						if (Function_475(&iLocal_706))
						{
							if (Function_179(460) < 0.0f)
							{
								if (bLocal_745 > Function_179(460))
								{
									Function_178(460, bLocal_745, 0);
								}
							}
							else
							{
								Function_178(460, bLocal_745, 0);
							}
						}
						Function_148(Global_46949);
						Function_93(Global_46949, 1, 1, 0);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				break;
			
			case 0x0000000A:
				if (!iLocal_759)
				{
					if (Function_401(&Global_54076, &bLocal_48) > 10.0f)
					{
						Function_89();
						iLocal_759 = 1;
					}
				}
				if (Function_401(&Global_54076, &bLocal_48) > 2.0f)
				{
					Function_202();
					Function_388(1, 0, 1, 1, 1, 1, 0, &cLocal_74, 1, 0, 1, 1, 0x3f800000, 0);
					UI_PUSH("CutsceneWithMessages");
					Function_85(&uLocal_58, 0, 1, 0, 0);
					Function_474(&iLocal_702);
					Function_472(&iLocal_702);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_48)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_48));
					}
					iLocal_752 = 1;
					iLocal_180 = 14;
				}
				break;
			
			case 0x0000000E:
				if (!iLocal_756)
				{
					if (Function_475(&iLocal_702))
					{
						if (Function_403(&iLocal_702) < 3.0f)
						{
							PRINT_BIG("SOL_PrintBig", 5f, 0, 2, 0);
							Var16 = Vector(-2128,779f, 16,584f, 2619,305f);
							TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Var16, 355,774f, 0, 0, false);
							SET_CAMERA_ORIENTATION(StackVal, GET_GAME_CAMERA(), Vector(0.0f, 355,774f, 0.0f), 0);
							iLocal_756 = 1;
						}
					}
				}
				if (Function_475(&iLocal_702))
				{
					if (Function_403(&iLocal_702) < 10.0f)
					{
						if (IS_ACTOR_VALID(&bLocal_48))
						{
							DESTROY_ACTOR(&bLocal_48);
						}
						Function_206(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
						UI_POP("CutsceneWithMessages");
						if (!DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
						{
							Function_193(200, 1, 0);
							Function_180(50, 1, 0);
						}
						if (!DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
						{
							Function_200(Function_201(2, 1, 1, 0, 0), 1, 1);
						}
						else
						{
							Function_200(Function_201(0, 1, 1, 0, 0), 1, 1);
						}
						if (!Function_199())
						{
							Function_197(9, 0, 1);
						}
						else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
						{
							Function_197(9, 0, 1);
						}
						Function_471(Global_46949, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 1);
						if (Function_475(&iLocal_706))
						{
							bLocal_745 = Function_403(&iLocal_706);
						}
						if (Function_475(&iLocal_706))
						{
							if (Function_179(460) < 0.0f)
							{
								if (bLocal_745 > Function_179(460))
								{
									Function_178(460, bLocal_745, 0);
								}
							}
							else
							{
								Function_178(460, bLocal_745, 0);
							}
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_148(Global_46949);
						Function_93(Global_46949, 1, 1, 0);
						iLocal_180 = 16;
					}
				}
				break;
			
			case 0x00000010:
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					cLocal_76 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_region");
					if ((((!IS_VOLUME_VALID(&cLocal_76) || iLocal_751) || iLocal_754) || !IS_ACTOR_ALIVE(&bLocal_48)) || Function_84(0))
					{
						if (Function_84(0))
						{
							if (HUD_IS_SHOWING_HELP_TEXT())
							{
								HUD_CLEAR_HELP();
								HUD_CLEAR_HELP_QUEUE();
							}
							Function_512("SOL_FTE_Help_WantedFail", 0x41200000, 1, 0, 2, 1, 0);
						}
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						TASK_CLEAR(&Global_54076);
						if (Function_394(Global_46949) == 2)
						{
							Function_81(Global_46949);
						}
						if (IS_ACTOR_VALID(&fLocal_50))
						{
							RELEASE_ACTOR(&fLocal_50);
						}
						REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), false);
						Function_74(&Global_11014, &Global_12796, 4, 0);
						Function_64(&iLocal_182, 0);
						Function_5(&iLocal_182, 0);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&fLocal_46)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&fLocal_46));
						}
						if (IS_BLIP_VALID(&(uLocal_60[0])))
						{
							REMOVE_BLIP(&(uLocal_60[0]));
						}
						if (IS_BLIP_VALID(&(uLocal_60[1])))
						{
							REMOVE_BLIP(&(uLocal_60[1]));
						}
						if (IS_BLIP_VALID(&(uLocal_60[2])))
						{
							REMOVE_BLIP(&(uLocal_60[2]));
						}
						if (IS_OBJECT_VALID(&uLocal_52))
						{
							RELEASE_OBJECT_REF(&uLocal_52);
						}
						if (IS_OBJECT_VALID(&uLocal_54))
						{
							DESTROY_OBJECT(&uLocal_54);
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "SOL_FTE_EngagedAA"))
						{
							DECOR_REMOVE(&Global_54076, "SOL_FTE_EngagedAA");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "iLockerOpen"))
						{
							DECOR_REMOVE(&Global_54076, "iLockerOpen");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
						{
							DECOR_REMOVE(&Global_54076, "SOL_UsedSafe");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "SOL_FTE_B_StillRunning"))
						{
							DECOR_REMOVE(&Global_54076, "SOL_FTE_B_StillRunning");
						}
						if (DECOR_CHECK_EXIST(&Global_54076, "nPrintHelp"))
						{
							DECOR_REMOVE(&Global_54076, "nPrintHelp");
						}
						if (IS_VOLUME_VALID(&cLocal_74))
						{
							DESTROY_VOLUME(&cLocal_74);
						}
						if (IS_VOLUME_VALID(&iLocal_82))
						{
							DESTROY_VOLUME(&iLocal_82);
						}
						RELEASE_LAYOUT_OBJECTS(&uLocal_58);
						RELEASE_LAYOUT_REF(&uLocal_58);
						Function_1(&iLocal_90);
						HUD_CLEAR_OBJECTIVE();
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				break;
		}
		WAIT(bLocal_729);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	if (Function_394(Global_46949) == 2)
	{
		Function_81(Global_46949);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	TASK_CLEAR(&Global_54076);
	DECOR_REMOVE(&bLocal_48, "CanBeLasso");
	if (IS_ACTOR_VALID(&fLocal_50))
	{
		RELEASE_ACTOR(&fLocal_50);
	}
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), false);
	Function_74(&Global_11014, &Global_12796, 4, 0);
	Function_64(&iLocal_182, 0);
	Function_5(&iLocal_182, 0);
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&fLocal_46)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&fLocal_46));
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_48)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_48));
	}
	if (IS_BLIP_VALID(&(uLocal_60[0])))
	{
		REMOVE_BLIP(&(uLocal_60[0]));
	}
	if (IS_BLIP_VALID(&(uLocal_60[1])))
	{
		REMOVE_BLIP(&(uLocal_60[1]));
	}
	if (IS_BLIP_VALID(&(uLocal_60[2])))
	{
		REMOVE_BLIP(&(uLocal_60[2]));
	}
	if (IS_OBJECT_VALID(&uLocal_52))
	{
		RELEASE_OBJECT_REF(&uLocal_52);
	}
	if (IS_OBJECT_VALID(&uLocal_54))
	{
		DESTROY_OBJECT(&uLocal_54);
	}
	if (IS_VOLUME_VALID(&cLocal_74))
	{
		DESTROY_VOLUME(&cLocal_74);
	}
	if (IS_VOLUME_VALID(&iLocal_82))
	{
		DESTROY_VOLUME(&iLocal_82);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SOL_FTE_EngagedAA"))
	{
		DECOR_REMOVE(&Global_54076, "SOL_FTE_EngagedAA");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "iLockerOpen"))
	{
		DECOR_REMOVE(&Global_54076, "iLockerOpen");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
	{
		DECOR_REMOVE(&Global_54076, "SOL_UsedSafe");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SOL_FTE_B_StillRunning"))
	{
		DECOR_REMOVE(&Global_54076, "SOL_FTE_B_StillRunning");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "RunningCutscene"))
	{
		DECOR_REMOVE(&Global_54076, "RunningCutscene");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "nPrintHelp"))
	{
		DECOR_REMOVE(&Global_54076, "nPrintHelp");
	}
	RELEASE_LAYOUT_OBJECTS(&uLocal_58);
	RELEASE_LAYOUT_REF(&uLocal_58);
	Function_1(&iLocal_90);
	HUD_CLEAR_OBJECTIVE();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1B8F / 7055
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x1BB7 / 7095
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
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
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x1D02 / 7426
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x1D1F / 7455
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(struct<1305> Param0) //Position: 0x1D3D / 7485
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	Function_64(&Param0, 0);
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_395(), GET_AMBIENT_LAYOUT(), 4294967295, 0);
	iVar2 = 0;
	while (iVar2 < (GET_OBJECTSET_SIZE(&uVar1) - 1))
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar1);
		DECOR_REMOVE(&uVar0, "translib_state");
		iVar2++;
	}
	DESTROY_OBJECTSET(&uVar1);
	Function_63(&Param0);
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		TASK_VEHICLE_LEAVE(&Param0 + 1544);
		TASK_PRIORITY_SET(&Param0 + 1544, true);
		Function_62(&Param0 + 1544, 7);
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1544);
		}
		else
		{
			Function_61(&Param0 + 1544, 4, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1560))
	{
		Function_62(&Param0 + 1560, 7);
		if (Param0.f_1096 == 2)
		{
			Function_61(&Param0 + 1560, 4, 0, 2);
		}
		else
		{
			TASK_CLEAR(&Param0 + 1560);
			TASK_VEHICLE_LEAVE(&Param0 + 1560);
		}
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1560);
		}
		else
		{
			Function_61(&Param0 + 1560, 2, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1592))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1592);
		Function_60(StackVal, &Param0 + 1592, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		START_VEHICLE(&Param0 + 1408);
		SET_VEHICLE_ALLOWED_TO_DRIVE(&Param0 + 1408, 1);
		Function_62(&Param0 + 1408, 7);
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1408);
		}
		else
		{
			RELEASE_ACTOR(&Param0 + 1408);
		}
	}
	switch (Param0.f_1096)
	{
		case 0x00000003:
			Function_58(&Param0);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(&Param0 + 1560))
			{
				SET_ACTOR_FACTION(&Param0 + 1560, 19);
			}
			break;
	}
	if (Function_381(Param0.f_1304, 512))
	{
		HUD_TIMER_DISPLAY(0);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 1576))
	{
		DESTROY_OBJECTSET(&Param0 + 1576);
	}
	uVar3 = Function_57();
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar4 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&uVar3, "trnsNecActors"));
		if (IS_OBJECTSET_VALID(&uVar4))
		{
			DESTROY_OBJECTSET(&uVar4);
		}
		DESTROY_OBJECT(&uVar3);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		if (!Function_381(Param0.f_1304, 1024))
		{
			RELEASE_LAYOUT_REF(&Param0 + 1296);
		}
	}
	Function_1(&Param0 + 1108);
	Function_56(56);
	Function_54(4);
	Function_53();
	Function_27(&Param0 + 1632);
	Function_6(&Param0);
	return;
}

void Function_6(struct<1093> Param0) //Position: 0x1FBC / 8124
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj");
	}
	if (Param0.f_984 == 5)
	{
		if (Function_381(Param0.f_1048, 32768))
		{
			Function_26(256);
		}
	}
	Function_25();
	Function_23(1);
	if (Function_381(Param0.f_1048, 32))
	{
		if (Function_21(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_93(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_12(Param0.f_1092);
					break;
				
				default:
					Function_81(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_7(&Param0, 0);
	}
	if (IS_VOLUME_VALID(&Param0 + 944))
	{
		DESTROY_VOLUME(&Param0 + 944);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		DESTROY_OBJECTSET(&Param0 + 992);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 32))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0 + 32);
		DESTROY_LAYOUT(&Param0 + 32);
	}
	if (Function_381(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_381(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_7(int iParam0, bool bParam1) //Position: 0x213C / 8508
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_11(&iParam0 + 1024);
		Function_10(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_9(&iParam0 + 1024);
			Function_11(&iParam0 + 1024);
			Function_8(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_10(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_8(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x21B3 / 8627
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_9(int iParam0) //Position: 0x222C / 8748
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_10(var uParam0, bool bParam1, bool bParam2) //Position: 0x2264 / 8804
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
				if (!Function_402(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_11(int iParam0) //Position: 0x22ED / 8941
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

void Function_12(bool bParam0) //Position: 0x2322 / 8994
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_21(bParam0))
	{
		return;
	}
	iVar0 = Function_20(bParam0);
	if (StackVal == 2)
	{
		Function_16("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_13(int iParam0) //Position: 0x23C8 / 9160
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

bool Function_14() //Position: 0x2407 / 9223
{
	if (Function_381(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<24> Function_15(char* cParam0) //Position: 0x2422 / 9250
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

void Function_16(bool bParam0, bool bParam1) //Position: 0x2678 / 9848
{
	struct<4> Var0;
	
	if (!Function_21(bParam1))
	{
		return;
	}
	switch (Function_20(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_17(Function_18(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_20(bParam1), Function_18(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_20(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_17(int iParam0) //Position: 0x27A2 / 10146
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

int Function_18(bool bParam0) //Position: 0x27DC / 10204
{
	if (!Function_19(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_19(int iParam0) //Position: 0x27FC / 10236
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_20(bool bParam0) //Position: 0x2813 / 10259
{
	if (!Function_19(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_21(int iParam0) //Position: 0x282E / 10286
{
	if (!Function_19(iParam0))
	{
		return 0;
	}
	if (!Function_22(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_22(int iParam0) //Position: 0x2852 / 10322
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_23(int iParam0) //Position: 0x2867 / 10343
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_24())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_24() //Position: 0x28A7 / 10407
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

void Function_25() //Position: 0x28CC / 10444
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_26(int iParam0) //Position: 0x28E2 / 10466
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_27(int iParam0) //Position: 0x28FF / 10495
{
	Function_28(&iParam0);
	return;
}

void Function_28(struct<261> Param0) //Position: 0x290B / 10507
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(&Param0 + 16))
	{
		DESTROY_ITERATOR(&Param0 + 16);
	}
	if (IS_ACTORSET_VALID(&Param0 + 64))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(&Param0 + 64);
	}
	if (SQUAD_IS_VALID(&Param0 + 80))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar2);
			CLEAR_ACTOR_MAX_SPEED(&uVar0);
			if (Param0.f_260 == 0)
			{
				Function_42(&Param0, &uVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&Param0 + 80));
	}
	if (IS_ACTORSET_VALID(&Param0 + 88))
	{
		if (Param0.f_260 == 0)
		{
			Function_33(&Param0 + 88, 2, 0, 2);
		}
		else
		{
			Function_31(&Param0 + 88);
		}
		DESTROY_ACTORSET(&Param0 + 88);
	}
	if (!Function_381(Param0.f_128, 16))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0);
		DESTROY_LAYOUT(&Param0);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 136))
	{
		Function_30(&Param0 + 136);
		DESTROY_OBJECTSET(&Param0 + 136);
	}
	iVar1 = Function_29(&Param0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

int Function_29(int iParam0) //Position: 0x2A4D / 10829
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(&iParam0 + 16);
	return &iVar0;
}

void Function_30(var uParam0) //Position: 0x2A72 / 10866
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

void Function_31(int iParam0) //Position: 0x2AC1 / 10945
{
	bool bVar0;
	
	Function_32(&iParam0);
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

void Function_32(int iParam0) //Position: 0x2B0D / 11021
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&iParam0, GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_33(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2B6C / 11116
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			uVar0 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_34(&uVar0, &iParam1, &iParam2, &bParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(&uParam0);
		return 1;
	}
	return 0;
}

int Function_34(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2BDF / 11231
{
	char* cVar0[32];
	
	Function_41();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_40(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_39(&uParam0, 0);
	Function_38(&uParam0, iParam1);
	Function_37(&uParam0, &iParam2);
	Function_36(&uParam0, iParam3);
	if (Function_35(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x2E4B / 11851
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_36(var uParam0, bool bParam1) //Position: 0x2E6F / 11887
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x2E93 / 11923
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_38(var uParam0, bool bParam1) //Position: 0x2EB9 / 11961
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_39(var uParam0, bool bParam1) //Position: 0x2EE0 / 12000
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_40(bool bParam0) //Position: 0x2F04 / 12036
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_41() //Position: 0x2F23 / 12067
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

int Function_42(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2F72 / 12146
{
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (Function_52(&bParam1, &bParam0 + 80, 1))
	{
		SQUAD_LEAVE(&bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam1)))
		{
			if (GET_MOUNT(&bParam1) != Function_43(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (&bParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(&bParam1));
				}
				else
				{
					Function_61(GET_MOUNT(&bParam1), iParam2, 0, 2);
				}
			}
		}
		if (&bParam3 == 1)
		{
			DESTROY_ACTOR(&bParam1);
		}
		else
		{
			Function_61(&bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(&bParam0 + 88, &bParam1))
	{
		REMOVE_ACTORSET_MEMBER(&bParam0 + 88, &bParam1);
		if (&bParam3 == 1)
		{
			DESTROY_ACTOR(&bParam1);
		}
		else
		{
			Function_61(&bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_43(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0x3034 / 12340
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
		Function_51(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_50())
		{
			return "";
		}
	}
	if (!Function_48())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_47();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_482(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_482(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_482(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_482(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_46(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_46(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), bVar0, Vector(&bParam2, &bParam3, &bParam4), Vector(0.0f, &bParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), 993, Vector(&bParam2, &bParam3, &bParam4), Vector(0.0f, &bParam5, 0.0f));
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
				Var8 = Vector(&bParam2, &bParam3, &bParam4);
				if (!Function_45(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), bVar0, Vector(&bParam2, &bParam3, &bParam4), Vector(0.0f, &bParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_395(), 993, Vector(&bParam2, &bParam3, &bParam4), Vector(0.0f, &bParam5, 0.0f));
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
		Function_44(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3391 / 13201
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

bool Function_45(char* cParam0) //Position: 0x33DB / 13275
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

var Function_46(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x33F3 / 13299
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

void Function_47() //Position: 0x3493 / 13459
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

bool Function_48() //Position: 0x350B / 13579
{
	if (Function_49() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_49() //Position: 0x3521 / 13601
{
	return Global_21369.f_244;
}

bool Function_50() //Position: 0x352C / 13612
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_51(var uParam0, bool bParam1, bool bParam2) //Position: 0x354C / 13644
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_380(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_380(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_52(int iParam0, int iParam1, bool bParam2) //Position: 0x357B / 13691
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

void Function_53() //Position: 0x35C3 / 13763
{
	int iVar0;
	
	iVar0 = Function_57();
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_OBJECT(&iVar0);
	}
	return;
}

void Function_54(int iParam0) //Position: 0x35DE / 13790
{
	Function_55(&Global_43580, iParam0);
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x35EC / 13804
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_56(var uParam0) //Position: 0x360B / 13835
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

int Function_57() //Position: 0x361E / 13854
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = &Global_43578;
	if (IS_LAYOUTREF_VALID(&uVar2))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar2);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "transDataObj");
		iVar0 = START_OBJECT_ITERATOR(&uVar1);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			iVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Global_43578, "transDataObj", Vector(1.0f, 400.0f, 1.0f), Vector(0.0f, 0.0f, 0.0f));
			if (!IS_OBJECT_VALID(&iVar0))
			{
				LOG_ERROR("TRANSPORT_GetExternalObject - Could not create external object?");
			}
		}
		if (IS_ITERATOR_VALID(&uVar1))
		{
			DESTROY_ITERATOR(&uVar1);
		}
	}
	return &iVar0;
}

void Function_58(struct<1305> Param0) //Position: 0x36F6 / 14070
{
	if (Function_381(Param0.f_1304, 0x10000000))
	{
		UI_EXIT("WHATEVA_prog");
		UI_EXIT("WHATEVA");
		HUD_TIMER_DISPLAY(0);
		UI_POP("Stagecoach_Job");
		Function_59(&Param0 + 1304, 0x10000000);
	}
	return;
}

void Function_59(bool bParam0, int iParam1) //Position: 0x3752 / 14162
{
	bParam0 = (bParam0 - (bParam0 && iParam1));
	return;
}

void Function_60(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x3768 / 14184
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
	if (!Function_45(StackVal, Param1))
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

int Function_61(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3887 / 14471
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_34(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_34(&bParam0, &iParam1, &iParam2, &bParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_62(var uParam0, bool bParam1) //Position: 0x3975 / 14709
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "translib_state", bParam1);
	return;
}

void Function_63(struct<1305> Param0) //Position: 0x3998 / 14744
{
	var uVar0;
	
	if (IS_OBJECTSET_VALID(&Param0 + 1576))
	{
		while (GET_OBJECTSET_SIZE(&Param0 + 1576) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 1576);
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					MAKE_ACTOR_READY_FOR_ACTION(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					if (Function_381(Param0.f_1304, 0x8000000))
					{
						Function_61(GET_ACTOR_FROM_OBJECT(&uVar0), 2, 0, 4);
					}
					else
					{
						Function_61(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0, 2);
					}
				}
				else
				{
					RELEASE_OBJECT_REF(&uVar0);
				}
			}
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &Param0 + 1576);
			CLEAN_OBJECTSET(&Param0 + 1576);
		}
	}
	return;
}

void Function_64(int iParam0, int iParam1) //Position: 0x3A37 / 14903
{
	Function_65(&iParam0, iParam1);
	return;
}

void Function_65(struct<1493> Param0) //Position: 0x3A45 / 14917
{
	struct<2> Var0;
	var uVar2;
	struct<8> Var4;
	float fVar12;
	
	if (IS_BLIP_VALID(Function_73(&Param0)))
	{
		REMOVE_BLIP(Function_73(&Param0));
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0 + 1408)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Param0 + 1408));
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0 + 1544)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Param0 + 1544));
		}
	}
	if (Function_72(&Param0))
	{
		Function_71();
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		if (IS_OBJECT_VALID(&Param0 + 1528))
		{
			Function_70(&Param0 + 1528);
		}
	}
	if (iParam1 == 1)
	{
		if (Function_69(&Param0))
		{
			if (IS_LAYOUTREF_VALID(&Param0 + 1296))
			{
				if (IS_VOLUME_VALID(&Param0 + 1496))
				{
					if (StackVal && !Function_45(Param0.f_1096 != 3, *(&Param0 + 1504)))
					{
						Var0 = *(&Param0 + 1504);
						if (Param0.f_1492 == Global_46850[0])
						{
							fVar12 = 9.0f;
						}
						else
						{
							fVar12 = 12.0f;
						}
					}
					else
					{
						GET_VOLUME_CENTER(&Param0 + 1496, &Var0);
						fVar12 = 6.0f;
					}
					FIND_GROUND_INTERSECTION(&Var0, 40.0f, &Var0, &uVar2);
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transGateway") };
					*(&Param0 + 1528) = Function_68(StackVal, StackVal, &Param0 + 1296, &Var4, Var0, Vector(0.0f, 0.0f, 0.0f), &Global_54076, fVar12, 1, 3, 330, 4, 1, -1.0f, -1.0f, 0);
					Function_66(StackVal, Var0, 0, 16, 1);
				}
			}
		}
		else if (!GET_VEHICLE(&Global_54076) != &Param0 + 1408)
		{
			ADD_BLIP_FOR_ACTOR(&Param0 + 1408, 325, 0, 2, 0);
		}
		else if (!GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408)
		{
			ADD_BLIP_FOR_ACTOR(&Param0 + 1544, 325, 0, 2, 0);
		}
	}
	return;
}

void Function_66(struct<2> Param0, var uParam2, var uParam3, var uParam4) //Position: 0x3C0F / 15375
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = uParam3;
	if (uParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (uParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_67(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_67(float fParam0) //Position: 0x3CD0 / 15568
{
	float fVar0;
	
	if (!IS_OBJECTSET_VALID(&fParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&fParam0) >= 0)
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &fParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&fVar0, &fParam0);
		CLEAN_OBJECTSET(&fParam0);
		if (IS_OBJECT_VALID(&fVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&fVar0));
		}
	}
	return;
}

var Function_68(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x3D19 / 15641
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

bool Function_69(struct<1305> Param0) //Position: 0x3E04 / 15876
{
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (Function_381(Param0.f_1304, 8))
		{
			if (IS_ACTOR_VALID(&Param0 + 1544))
			{
				if (GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408 && GET_VEHICLE(&Global_54076) != &Param0 + 1408)
				{
					return 1;
				}
			}
		}
		if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
		{
			return 1;
		}
	}
	return 0;
}

void Function_70(var uParam0) //Position: 0x3E70 / 15984
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

void Function_71() //Position: 0x3F06 / 16134
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

bool Function_72(struct<1049> Param0) //Position: 0x3F31 / 16177
{
	if (Function_381(Param0.f_1048, 16))
	{
		return 1;
	}
	return 0;
}

var Function_73(int iParam0) //Position: 0x3F4B / 16203
{
	return &iParam0 + 48;
}

void Function_74(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x3F57 / 16215
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_476(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_476(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_476(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_80(&(Param0[iVar02]), 8);
	}
	Function_80(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_79(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_75(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_75(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x4000 / 16384
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_78(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_77(Global_43790), Function_76(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_476(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_476(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_78(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_77(Global_43790), Function_76(Global_43790), false, 0);
	}
}

int Function_76(int iParam0) //Position: 0x4166 / 16742
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

int Function_77(int iParam0) //Position: 0x4191 / 16785
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

void Function_78(var uParam0, int iParam1) //Position: 0x41C5 / 16837
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_79(int iParam0) //Position: 0x41D6 / 16854
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

void Function_80(var uParam0, int iParam1) //Position: 0x427F / 17023
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_81(bool bParam0) //Position: 0x4299 / 17049
{
	int iVar0;
	
	if (!Function_21(bParam0))
	{
		Function_82();
		return;
	}
	iVar0 = Function_20(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_16("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_82() //Position: 0x42EC / 17132
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
			Function_83(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_83(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4533 / 17715
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_84(int iParam0) //Position: 0x455F / 17759
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

var Function_85(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x45D5 / 17877
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_395(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "SolomonFolly_Cutscene", 2, 1);
	}
	Function_86(&uVar0);
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

void Function_86(int iParam0) //Position: 0x4664 / 18020
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_88(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_87(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_87(int iParam0) //Position: 0x46AE / 18094
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2110,398f, 18,19664f, 2616,97f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,040912f, 1,25152f, -0,001435f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_88(var uParam0) //Position: 0x4727 / 18215
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2106,158f, 20,49886f, 2617,459f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,044474f, 1,351706f, -0,001436f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_89() //Position: 0x47A0 / 18336
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SoloFolly_ReturnsSafeNoOpen", "SoloFolly_ReturnsSafeNoOpen", false, 3, 1, 0, 1);
		Function_90(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_90(bool bParam0) //Position: 0x47FF / 18431
{
	Function_91(0, &Global_54076, bParam0, 0);
	Function_91(1, &bLocal_48, bParam0, 0);
	Function_91(2, &fLocal_50, bParam0, 0);
	return;
}

void Function_91(bool bParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x4824 / 18468
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_381(bParam2, Function_92(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_92(bool bParam0) //Position: 0x484C / 18508
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4858 / 18520
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_21(bParam0))
	{
		Function_82();
		return;
	}
	bVar0 = Function_20(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_199())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_18(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		if (Function_199())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_142();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_199())
	{
		Function_141();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_16("DEED_COMPLETE", bParam0);
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
			Function_134(bParam0);
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
						switch (Function_18(bParam0))
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
			Function_96(1);
			Function_95(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_94(bParam0, &Var14);
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

void Function_94(int iParam0, struct<41> Param1) //Position: 0x4AB6 / 19126
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_95(bool bParam0, int iParam1) //Position: 0x4AF4 / 19188
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

void Function_96(bool bParam0) //Position: 0x4B33 / 19251
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_125();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_97();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_59(&Global_99144, 1);
		Function_59(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_97() //Position: 0x4B88 / 19336
{
	Function_123();
	Function_122();
	Function_122();
	Function_121();
	Function_121();
	Function_120();
	Function_120();
	Function_105(0);
	Function_105(0);
	Function_102();
	Function_101();
	Function_100();
	Function_99();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_98();
	return;
}

void Function_98() //Position: 0x4BD3 / 19411
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

void Function_99() //Position: 0x4CD9 / 19673
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

void Function_100() //Position: 0x4D0C / 19724
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

void Function_101() //Position: 0x4E9F / 20127
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

void Function_102() //Position: 0x5058 / 20568
{
	Function_103(&Global_42918, 1, 0);
	return;
}

void Function_103(struct<2317> Param0) //Position: 0x5066 / 20582
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
	
	uVar0 = Function_104();
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

var Function_104() //Position: 0x5283 / 21123
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_105(int iParam0) //Position: 0x5298 / 21144
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
					iVar2 = ((Function_119((50 + iVar4)) + Function_119((183 + iVar4))) + Function_119((90 + iVar4)));
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
	Function_106(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_106(int iParam0, bool bParam1, bool bParam2) //Position: 0x533F / 21311
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
		Function_118(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_117(iParam0);
	if (&bParam2)
	{
		Function_107(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_107(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x55DB / 21979
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_116(390))), 32);
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
					bVar19 = (Function_179(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_179(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_114(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_111(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_109(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_108(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_395(), &Var9);
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

var Function_108(int iParam0) //Position: 0x5C19 / 23577
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_109(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5C2A / 23594
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_110("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_110(char* cParam0) //Position: 0x5D21 / 23841
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_111(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5D3C / 23868
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_113(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_112(Function_113(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_112(int iParam0, int iParam1) //Position: 0x5DA3 / 23971
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_113(int iParam0, bool bParam1) //Position: 0x5DB5 / 23989
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_114(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5DC7 / 24007
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
	if (((Function_115(iParam0) != 19 || Function_115(iParam0) != 17) || Function_115(iParam0) != 10) || Function_115(iParam0) != 9)
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

int Function_115(int iParam0) //Position: 0x5EFB / 24315
{
	return Global_55480[iParam016].f_96;
}

var Function_116(int iParam0) //Position: 0x5F0A / 24330
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_117(int iParam0) //Position: 0x5F47 / 24391
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

int Function_118(int iParam0, bool bParam1, bool bParam2) //Position: 0x60E1 / 24801
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

int Function_119(bool bParam0) //Position: 0x6325 / 25381
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_120() //Position: 0x6366 / 25446
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
		iVar2 = ((Function_119((50 + iVar3) + 15) + Function_119((183 + iVar3) + 15)) + Function_119((90 + iVar3) + 15));
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
	Function_106(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_121() //Position: 0x63EF / 25583
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
			iVar2 = ((Function_119((50 + iVar3) + 8) + Function_119((183 + iVar3) + 8)) + Function_119((90 + iVar3) + 8));
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
	Function_106(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_122() //Position: 0x6486 / 25734
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
		iVar2 = ((Function_119((50 + iVar3)) + Function_119((183 + iVar3))) + Function_119((90 + iVar3)));
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
	Function_106(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_123() //Position: 0x6505 / 25861
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_124(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_106(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x6542 / 25922
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
	Function_118(iParam0, bParam1, 1);
	Function_117(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_107(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_125() //Position: 0x674E / 26446
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_14())
	{
		Function_131(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_131(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_126(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_126(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_45(StackVal, Var0))
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

struct<8> Function_126(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x6805 / 26629
{
	int iVar0;
	
	iVar0 = Function_129(&uParam2, &fParam3);
	if (Function_128(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_380(&Global_99144, 1);
			Function_59(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_380(&Global_99144, 2);
			Function_59(&Global_99144, 1);
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
		Function_380(&Global_99144, 2);
		Function_59(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_127();
	return StackVal, Function_127();
}

struct<8> Function_127() //Position: 0x68FD / 26877
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_128(int iParam0) //Position: 0x6907 / 26887
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_129(bool bParam0, bool bParam1) //Position: 0x691D / 26909
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
				fVar2 = Function_130(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_130(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_128(iVar0) && !&bParam1)
	{
		iVar0 = Function_129(&bParam0, 1);
	}
	return iVar0;
}

float Function_130(struct<2> Param0, struct<2> Param2) //Position: 0x69E9 / 27113
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_131(float fParam0, int iParam1) //Position: 0x6A06 / 27142
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_133(&Global_54076, &Var3);
	if (!Function_132(Global_46760[0]))
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
	if (!Function_132(Global_46760[2]))
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
	if (!Function_132(Global_46760[1]))
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
	if (!Function_132(Global_46796[1]))
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
	if (!Function_132(Global_46796[3]))
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
	if (!Function_132(Global_46796[2]))
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
	if (!Function_132(Global_46796[4]))
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
	if (!Function_132(Global_46816[0]))
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
	if (!Function_132(Global_46816[1]))
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
	if (!Function_132(Global_46816[2]))
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
	if (!Function_132(Global_46838[0]))
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
	if (!Function_132(Global_46850[0]))
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
	if (!Function_132(Global_46850[1]))
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
	if (!Function_132(Global_46850[2]))
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
	if (!Function_132(Global_46866[0]))
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
	if (!Function_132(Global_46866[1]))
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
	if (!Function_132(Global_46866[2]))
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
	if (!Function_132(Global_46894[2]))
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
	if (!Function_132(Global_46894[3]))
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
	if (!Function_132(Global_46894[0]))
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
	if (!Function_132(Global_46914[0]))
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
	if (!Function_132(Global_46926[2]))
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
	if (!Function_132(Global_46926[1]))
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
	if (!Function_132(Global_46926[0]))
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
	if (!Function_132(Global_46838[1]))
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
	if (!Function_132(Global_46894[1]))
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
	Function_380(&Global_99144, 2);
	Function_59(&Global_99144, 1);
	iParam1 = 0;
	if (Function_45(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_132(int iParam0) //Position: 0x7232 / 29234
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_381(bVar0, 0x1000000) || Function_381(bVar0, 0x2000000)) || Function_381(bVar0, 0x4000000)) || !Function_381(bVar0, 0x10000000));
}

void Function_133(var uParam0, int iParam1) //Position: 0x726D / 29293
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_134(bool bParam0) //Position: 0x727C / 29308
{
	int iVar0;
	int iVar1;
	
	if (!Function_19(bParam0))
	{
		return;
	}
	switch (Function_20(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_18(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_139(12, 1, 0, 0);
				Function_138(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_139(13, 1, 0, 0);
				Function_138(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_139(14, 1, 0, 0);
				Function_138(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_139(15, 1, 0, 0);
				Function_138(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_139(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_18(bParam0))
			{
				case 0x00000000:
					if (Function_137(bParam0) == 1)
					{
						iVar0 = Function_136(bParam0);
						if (Function_135(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_138(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_138(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_138(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_138(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_138(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_138(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_138(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_138(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_138(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_138(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_138(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_138(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_138(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_138(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_138(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_138(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_138(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_138(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_138(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_138(4, 19);
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
								Function_139(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_139(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_139(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_136(bParam0) == 0)
			{
				if (Function_137(bParam0) == 1)
				{
					Function_139(458, 1, 0, 0);
					iVar0 = Function_18(bParam0);
					if (Function_135(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_138(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_138(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_138(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_138(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_138(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_138(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_138(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_138(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_137(bParam0) == 1)
			{
				Function_139(400, 1, 0, 0);
			}
			switch (Function_18(bParam0))
			{
				case 0x00000001:
					Function_139(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_138(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_138(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_138(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_139(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_138(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_138(6, 9);
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

bool Function_135(int iParam0) //Position: 0x7758 / 30552
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_136(bool bParam0) //Position: 0x776E / 30574
{
	if (!Function_19(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_137(bool bParam0) //Position: 0x778D / 30605
{
	if (!Function_19(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_138(int iParam0, int iParam1) //Position: 0x77A7 / 30631
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

int Function_139(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x7811 / 30737
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
	Function_118(iParam0, TO_FLOAT(bParam1), 1);
	Function_117(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_107(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_140(iParam0);
	return 1;
}

void Function_140(int iParam0) //Position: 0x7A39 / 31289
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

void Function_141() //Position: 0x7AD7 / 31447
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
	PLAYSTAT_INT("HC_MONEY", Function_119(0));
	PLAYSTAT_INT("HC_FAME", Function_119(3));
	PLAYSTAT_INT("HC_HONOR", Function_119(1));
	return;
}

void Function_142() //Position: 0x7C39 / 31801
{
	int iVar0;
	int iVar1;
	
	if (!Function_147(Global_10966))
	{
		return;
	}
	iVar0 = Function_119(24);
	iVar1 = Function_146(Global_10966);
	if (!Function_147(iVar0) && Function_145(iVar1) < 0)
	{
		Function_106(24, Global_10966, 0);
		Function_143(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_145(Function_146(iVar0)))
	{
		Function_106(24, Global_10966, 0);
		Function_143(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_143(int iParam0, char* cParam1) //Position: 0x7CB9 / 31929
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
		Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x8013 / 32787
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

int Function_145(int iParam0) //Position: 0x809B / 32923
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_146(int iParam0) //Position: 0x80B5 / 32949
{
	if (!Function_147(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_147(int iParam0) //Position: 0x80CF / 32975
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_148(bool bParam0) //Position: 0x80E5 / 32997
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_18(bParam0) == Global_46760[2])
	{
		if (Function_177(2) && !Function_176(2))
		{
			Function_168(2, 2, 0, 0, 1);
		}
	}
	if (Function_18(bParam0) == Global_46796[3])
	{
		if (Function_177(6) && !Function_176(6))
		{
			Function_168(6, 16, 0, 0, 1);
		}
	}
	if (!Function_177(10) || Function_176(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_137(Global_46948);
	if (Global_46948 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_137(Global_46950);
	if (Global_46950 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_137(Global_46952);
	if (Global_46952 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_137(Global_46951);
	if (Global_46951 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_137(Global_46953);
	if (Global_46953 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != bParam0)
	{
		return;
	}
	Function_138(2, 24);
	Function_149(10, 0, 1);
	return;
}

void Function_149(bool bParam0, bool bParam1, bool bParam2) //Position: 0x82A3 / 33443
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_176(bParam0))
	{
		if (!Function_177(bParam0))
		{
			Function_153(bParam0, 1, 0, 0, 1);
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
		Function_139(457, 1, 0, 0);
		Function_152(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_151(0, 0, 1, 1))
			{
				Function_96(1);
				Function_95(1, 0);
			}
			else
			{
				Function_150();
			}
		}
	}
	return;
}

void Function_150() //Position: 0x8444 / 33860
{
	return;
}

bool Function_151(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x844A / 33866
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

void Function_152(bool bParam0, int iParam1) //Position: 0x84F9 / 34041
{
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x854E / 34126
{
	char* cVar0[32];
	
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_166(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_177(bParam0))
	{
		Function_139(456, 1, 0, 0);
		Function_152(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_151(0, 0, 1, 1))
			{
				Function_96(1);
				Function_95(1, 5);
			}
			else
			{
				Function_150();
			}
		}
		Function_161(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_160() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_160() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_512(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_14())
		{
			if (!Function_159(Global_119934, 2))
			{
				Function_154(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_154(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x86AA / 34474
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_156(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_155(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_155(char* cParam0) //Position: 0x871F / 34591
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

bool Function_156(int iParam0, var uParam1, int iParam2) //Position: 0x8759 / 34649
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
		if (Function_158(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_157(uVar0))
		{
			case 0x00000002:
				if (!Function_159(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_157(char* cParam0) //Position: 0x87D5 / 34773
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

int Function_158(int iParam0) //Position: 0x8876 / 34934
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_59(&iVar1, 2147483648);
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

bool Function_159(int iParam0, int iParam1) //Position: 0x88B3 / 34995
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_160() //Position: 0x88C6 / 35014
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_161(bool bParam0) //Position: 0x88F3 / 35059
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
			if (Function_165(bParam0, Function_92(bVar24)))
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
			if (Function_165(bParam0, Function_92(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_164(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_163(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_162(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_162(int iParam0) //Position: 0x8AA3 / 35491
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_167(iParam0))
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

void Function_163(bool bParam0, bool bParam1) //Position: 0x8AFA / 35578
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

var Function_164(int iParam0) //Position: 0x8B1F / 35615
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_167(iParam0))
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

bool Function_165(bool bParam0, int iParam1) //Position: 0x8B75 / 35701
{
	int iVar0;
	
	if (!Function_167(bParam0))
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

bool Function_166(int iParam0) //Position: 0x8BD4 / 35796
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_167(int iParam0) //Position: 0x8BF0 / 35824
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_168(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8C06 / 35846
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_167(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_166(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_175(bParam0, 2))
	{
		Function_139(456, 1, 0, 0);
		Function_152(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_512(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_165(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_152(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_151(0, 0, 1, 1))
			{
				Function_96(1);
				Function_95(1, 0);
			}
			else
			{
				Function_150();
			}
		}
		Function_161(bParam0);
		if (StackVal && !Function_381(((((!Function_160() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_381((((Function_160() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_14())
		{
			if (!Function_159(Global_119934, 2))
			{
				Function_154(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_170();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_169(3, bParam1);
				break;
			
			case 0x00000005:
				Function_169(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_169(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_169(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_169(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_169(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_138(2, 24);
				break;
			
			case 0x00000003:
				Function_138(2, 25);
				break;
			
			case 0x0000000F:
				Function_138(2, 26);
				break;
			
			case 0x0000000D:
				Function_138(2, 27);
				break;
			
			case 0x0000000E:
				Function_138(2, 28);
				break;
			}
	}
}

void Function_169(int iParam0, bool bParam1) //Position: 0x8EA5 / 36517
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

void Function_170() //Position: 0x8F14 / 36628
{
	if (Function_167(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_174(Global_42827);
			*(&Global_42827 + 8) = Function_171(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_174(Global_42827);
			*(&Global_42827 + 8) = Function_171(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_171(int iParam0, int iParam1) //Position: 0x8F94 / 36756
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
					if (Function_173(6, 0) || Function_173(12, 0))
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
					if (Function_172(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_173(5, 0))
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
					if (Function_172(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_172(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_172(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_172(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_173(26, 0))
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
					if (Function_172(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_172(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_172(27) && iVar16)
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
					if (Function_172(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_172(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_172(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_172(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_173(17, 0) && iVar13)
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
					if (Function_172(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_173(6, 0) && Function_172(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_172(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_173(9, 0) && Function_172(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_172(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_173(8, 0) && iVar17)
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
	if (Function_45(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_45(StackVal, vVar2))
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
	if (!Function_45(StackVal, vVar2))
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

int Function_172(int iParam0) //Position: 0x9BF7 / 39927
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_173(int iParam0, bool bParam1) //Position: 0x9C0C / 39948
{
	int iVar0;
	
	iVar0 = Function_146(iParam0);
	if (!Function_19(iVar0))
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

int Function_174(int iParam0) //Position: 0x9C4A / 40010
{
	int iVar0;
	int iVar1;
	
	if (!Function_167(iParam0))
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

bool Function_175(int iParam0, int iParam1) //Position: 0x9C99 / 40089
{
	int iVar0;
	
	if (!Function_167(iParam0))
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

bool Function_176(int iParam0) //Position: 0x9CC6 / 40134
{
	if (!Function_167(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_175(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_177(int iParam0) //Position: 0x9D17 / 40215
{
	if (!Function_167(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_175(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_178(int iParam0, bool bParam1, bool bParam2) //Position: 0x9D69 / 40297
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_118(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_117(iParam0);
	if (&bParam2)
	{
		Function_107(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_179(int iParam0) //Position: 0x9FD6 / 40918
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_180(int iParam0, bool bParam1, bool bParam2) //Position: 0xA00F / 40975
{
	int iVar0;
	bool bVar1;
	
	if (Function_192(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_199())
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
	iVar0 = Function_119(3);
	Function_189();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_187(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_159(Global_119936, 4))
			{
				Function_154(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_139(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_179(3));
	iVar0 = Function_119(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_182(4, Function_186(Global_21369.f_248), 1);
				Function_181(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_182(4, Function_186(Global_21369.f_248), 1);
				Function_181(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_182(4, Function_186(Global_21369.f_248), 1);
				Function_181(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_182(4, Function_186(Global_21369.f_248), 1);
				Function_181(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_182(4, Function_186(Global_21369.f_248), 1);
				Function_181(Global_21369.f_244, Global_21369.f_248);
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

void Function_181(int iParam0, int iParam1) //Position: 0xA1E3 / 41443
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

int Function_182(int iParam0, char* cParam1) //Position: 0xA44D / 42061
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
	Function_143(iParam0, &cParam1, 0, 1);
	iVar1 = Function_183();
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

int Function_183() //Position: 0xA5DD / 42461
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
	Function_184();
	return 0;
}

void Function_184() //Position: 0xA67E / 42622
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_185(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_185(int iParam0) //Position: 0xA73C / 42812
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

var Function_186(int iParam0) //Position: 0xA7A2 / 42914
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

int Function_187(int iParam0, bool bParam1) //Position: 0xA831 / 43057
{
	bool bVar0;
	int iVar1;
	
	Function_139(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_188(iParam0, 4294967295);
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
	iVar1 = Function_183();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_188(int iParam0, int iParam1) //Position: 0xA9DD / 43485
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

void Function_189() //Position: 0xAA22 / 43554
{
	Function_191(3, 0.0f);
	Function_190(3, 10000.0f);
	return;
}

int Function_190(int iParam0, int iParam1) //Position: 0xAA38 / 43576
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_191(int iParam0, int iParam1) //Position: 0xAA78 / 43640
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_192(int iParam0) //Position: 0xAAB8 / 43704
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_193(int iParam0, bool bParam1, bool bParam2) //Position: 0xAAC7 / 43719
{
	int iVar0;
	bool bVar1;
	
	if (Function_192(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_199())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_119(1);
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
			Function_187(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_159(Global_119936, 1))
				{
					Function_154(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_196(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_159(Global_119936, 2))
				{
					Function_154(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_139(1, bVar1, 0, 0);
	}
	else
	{
		Function_195(1, (4294967295 * bVar1), 0);
	}
	if (Function_119(1) <= 4294962296)
	{
		Function_106(1, 4294962296, 0);
	}
	else if (Function_119(1) >= 5000)
	{
		Function_106(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_179(1));
	iVar0 = Function_119(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_182(2, Function_194(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_182(2, Function_194(Global_21369.f_244), 0);
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
				Function_182(2, Function_194(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_182(2, Function_194(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_182(2, Function_194(Global_21369.f_244), 1);
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
				Function_182(2, Function_194(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_182(2, Function_194(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_182(2, Function_194(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_182(2, Function_194(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_182(2, Function_194(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_182(2, Function_194(Global_21369.f_244), 1);
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
				Function_182(2, Function_194(Global_21369.f_244), 0);
			}
			break;
	}
	Function_181(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_194(int iParam0) //Position: 0xADEE / 44526
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

int Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0xAE91 / 44689
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
	Function_117(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_107(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_196(int iParam0, bool bParam1) //Position: 0xB08E / 45198
{
	bool bVar0;
	int iVar1;
	
	Function_195(iParam0, bParam1, 0);
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
	iVar1 = Function_188(iParam0, 4294967295);
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
	iVar1 = Function_183();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_197(bool bParam0, bool bParam1, int iParam2) //Position: 0xB239 / 45625
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_198(bParam0), Function_104()) == 0)
		{
			ADD_ITEM(Function_198(bParam0), Function_104(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_198(bParam0), Function_104(), &iParam2);
	return 1;
}

var Function_198(bool bParam0) //Position: 0xB287 / 45703
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_199() //Position: 0xB37B / 45947
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB3A6 / 45990
{
	bool bVar0;
	
	bVar0 = Function_119(0);
	if ((Function_119(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_139(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_119(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_139(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_119(597) + Function_119(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB478 / 46200
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_119(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_198(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_202() //Position: 0xB57F / 46463
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_203(float fParam0, var uParam1, bool bParam2) //Position: 0xB594 / 46484
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
				MEMORY_CONSIDER_AS(&fParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_204(var uParam0, bool bParam1) //Position: 0xB5E6 / 46566
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uParam0, &uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_205(var uParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0xB622 / 46626
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
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_206(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xB732 / 46898
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
		uVar0 = Function_104();
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
		Function_139(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_202();
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
	Function_207(&iParam9, &iParam10);
}

void Function_207(var uParam0, bool bParam1) //Position: 0xB801 / 47105
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
		Function_47();
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

void Function_208() //Position: 0xB8D0 / 47312
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "SoloFollyFTE_LawAskHelp_v1_AA", "SoloFollyFTE_LawAskHelp_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "SoloFollyFTE_LawAskHelp_v1_AB", "SoloFollyFTE_LawAskHelp_v1_AB", false, 1, 1, 0, 1);
		Function_90(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_209(bool bParam0, bool bParam1) //Position: 0xB97C / 47484
{
	Function_380(&bParam0, 128);
	if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		Function_210("sol_FTE_BackInWagon", 0, -1.0f, 2, 0, 0);
		Function_64(&bParam1, 1);
		return 2;
	}
	return 0;
}

int Function_210(char* cParam0) //Position: 0xB9BE / 47550
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			*(&Global_99485[iVar019] + 64) = &iParam1;
			Global_99485[iVar019].f_72 = fParam2;
			Global_99485[iVar019].f_76 = iParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_211(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* cParam8, float fParam9, float fParam10, float fParam11) //Position: 0xBA4B / 47691
{
	int iVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	
	iParam1 = 0;
	if (!iLocal_33)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &fParam10))
		{
			Function_492(&iParam0, 0);
			iLocal_33 = 1;
		}
	}
	if (!Function_381(bParam2, 4096))
	{
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_46715, "solv_region")) || IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_46715, "chov_armadillo")))
			{
				Function_493(&iParam0, 0);
			}
			else
			{
				Function_493(&iParam0, 1);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!iLocal_29)
				{
					if (!Function_173(23, 0))
					{
						if (DECOR_CHECK_EXIST(&Global_54076, "nPrintHelp"))
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_210("sol_FTE_Help_Stagecoach_01", 0, -1.0f, 1, 0, 0);
								Function_210("sol_FTE_Help_Stagecoach_02", 0, -1.0f, 1, 0, 0);
								Function_210("sol_FTE_Help_Stagecoach_03", 0, -1.0f, 1, 0, 0);
								iLocal_29 = 1;
							}
						}
					}
				}
				if (IS_ACTOR_VALID(&fParam9))
				{
					if (IS_ACTOR_ALIVE(&fParam9))
					{
						DESTROY_ACTOR(&fParam9);
					}
				}
				Function_380(&bParam2, 4096);
			}
		}
	}
	else if (!Function_381(bParam2, 8192))
	{
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_region")))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				Function_493(&iParam0, 0);
				Function_375(&iParam0);
				Function_380(&bParam2, 8192);
			}
		}
	}
	if (Function_381(bParam2, 128))
	{
		if (!iLocal_28)
		{
			Function_374(&iParam0, &Global_54076);
			if (GET_NUM_DRAFT_POSITIONS(&fParam11) == 2)
			{
				Function_374(&iParam0, GET_DRAFT_ACTOR(false, &fParam11));
				Function_374(&iParam0, GET_DRAFT_ACTOR(true, &fParam11));
			}
			iLocal_28 = 1;
		}
		iVar0 = Function_227(&iParam0, 0);
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_381(bParam2, 4096))
				{
					if (Function_226(&iParam0))
					{
						if (!iLocal_31)
						{
							AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
							iLocal_31 = 1;
						}
					}
				}
				if (Function_84(0) && !iLocal_30)
				{
					iLocal_30 = 1;
					iParam1 = 4294966630;
					return 0;
					iVar0 = 11;
				}
				if (!Function_381(bParam2, 16384))
				{
					if (Function_225(&iParam0 + 1632))
					{
						uVar1 = Function_223(&iParam0 + 1632);
						if (SQUAD_IS_VALID(&uVar1))
						{
							if (SQUAD_GET_SIZE(&uVar1) != 0)
							{
								bVar2 = Function_220(&Global_54076, &uVar1);
								if (IS_ACTOR_VALID(&bVar2))
								{
									if (Function_401(&Global_54076, &bVar2) > 15.0f)
									{
										if (iParam4 == 0)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (iParam4 == 1)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (iParam4 == 2)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (iParam4 == 3)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (iParam4 == 4)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (iParam4 == 5)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										else if (iParam4 == 6)
										{
											SAY_SINGLE_LINE_CONTEXT(&bVar2, 96, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
										}
										iParam4++;
										Function_380(&bParam2, 16384);
									}
								}
							}
						}
					}
				}
				if (Function_218(Global_46760[0]) && !Function_381(bParam2, 512))
				{
					if (!IS_ACTOR_VALID(&uParam3))
					{
						uParam3 = Function_215(&Global_11014, &Global_12796, 4, 1, 0, 1);
						if (IS_ACTOR_VALID(&uParam3))
						{
							DECOR_SET_BOOL(&uParam3, "CanBeLasso", false);
							TELEPORT_ACTOR(&uParam3, &uLocal_34, 1, 1, 1);
							Function_380(&bParam2, 512);
							uParam5 = Function_213("narmadillo", "ruinedbank", 1);
							if (IS_DOOR_VALID(&uParam5))
							{
								Function_212(&uParam5, 1);
							}
							Var3 = Vector(-2130,153f, 16,612f, 2625,597f);
							uParam7 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam6, Function_395(), "$/content/scripting/gringo/simplegringo/shakehands_link", Var3, Vector(0.0f, -17,615f, 0.0f));
							SET_ACTOR_UPDATE_PRIORITY(&uParam3, false);
							AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam3, 0);
							TASK_PRIORITY_SET(&uParam3, true);
							TASK_FACE_ACTOR(&uParam3, &Global_54076, 1, 3212836864);
							RESET_ANIM_SET_FOR_ACTOR(&uParam3, 1);
							SET_ANIM_SET_FOR_ACTOR(&uParam3, "excited_return", 0);
							SET_ACTION_NODE_FOR_ACTOR(&uParam3, "excited_return/mobile_and_loop/loop");
							cParam8 = CREATE_VOLUME_IN_LAYOUT(&uParam6, "AmbientRestriction", 2,802597E-45f, Local_37, Local_40, Local_43);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&cParam8);
						}
					}
				}
				break;
			
			case 0x0000000B:
				iParam1 = 4294966630;
				return 0;
				break;
			
			case 0x00000009:
				break;
			
			case 0x00000008:
				Function_380(&bParam2, 32768);
				iParam1 = 666;
				Function_64(&iParam0, 0);
				return 0;
				break;
			
			case 0x0000000A:
				iParam1 = 4294966630;
				Function_64(&iParam0, 0);
				return 0;
				break;
			
			case 0x00000012:
				Function_210("SOL_Help_KilledAnimals", 0, -1.0f, 1, 0, 0);
				Function_64(&iParam0, 0);
				return 0;
				break;
			
			case 0x00000002:
				Function_59(&bParam2, 16384);
				break;
			
			case 0x00000007:
				break;
			
			default:
				LOG_ERROR("Got some weird case in the SOL_FTE transport.  See Ben J or Ryan P.");
				break;
			}
	}
	return 1;
}

void Function_212(var uParam0, int iParam1) //Position: 0xC0A1 / 49313
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

int Function_213(var uParam0, var uParam1, int iParam2) //Position: 0xC0F9 / 49401
{
	return Function_214(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_214(int iParam0, char* cParam1, bool bParam3) //Position: 0xC10D / 49421
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_135(iParam0))
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

var Function_215(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xC1B2 / 49586
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_476(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_476(&(Param0[iVar02]), 2))
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
			if (!Function_476(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_78(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_217(StackVal, &Global_10996, Function_395(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_476(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_78(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_78(&(Param0[iVar02]), 1);
	Function_216(&vParam1[iVar03] + 16, 1);
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

int Function_216(int iParam0, bool bParam1) //Position: 0xC379 / 50041
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

var Function_217(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xC42B / 50219
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_395(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

bool Function_218(int iParam0) //Position: 0xC552 / 50514
{
	if (!Function_135(iParam0))
	{
		return 1;
	}
	return Function_219(&(Global_43791[iParam0]), 4);
}

int Function_219(var uParam0, int iParam1) //Position: 0xC56E / 50542
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_220(int iParam0, int iParam1) //Position: 0xC58B / 50571
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
		if (Function_221(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_221(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0);
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

float Function_221(bool bParam0, int iParam1) //Position: 0xC64E / 50766
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_222(&uVar0, &uVar2);
	return iVar4;
}

var Function_222(struct<2> Param0) //Position: 0xC66F / 50799
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

var Function_223(int iParam0) //Position: 0xC68E / 50830
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return "";
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		return "";
	}
	Function_224(&uVar0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 25);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "atkSquad");
	(&iParam0 + 80) = GET_SQUAD_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar0));
	if (!SQUAD_IS_VALID(&iParam0 + 80))
	{
	}
	if (IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
	}
	return &iParam0 + 80;
}

int Function_224(int iParam0) //Position: 0xC709 / 50953
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_395());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_395());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_225(int iParam0) //Position: 0xC73F / 51007
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		if (SQUAD_GET_SIZE(&iParam0 + 80) >= 0)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_226(struct<1305> Param0) //Position: 0xC761 / 51041
{
	return Function_381(Param0.f_1304, 0x1000000);
}

int Function_227(struct<1541> Param0) //Position: 0xC775 / 51061
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	bool bVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	
	bVar0 = false;
	Function_373(&Param0);
	if (!Function_381(Param0.f_1304, 64))
	{
		return 24;
	}
	if (!IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		return 25;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 26;
	}
	switch (Function_348(&Param0))
	{
		case 0x00000002:
			Function_342(&Param0, 2);
			break;
		
		case 0x00000003:
			Function_342(&Param0, 3);
			break;
		
		case 0x00000004:
			Function_342(&Param0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_341(&Param0))
	{
		case 0x00000002:
			if (bVar0 <= 9)
			{
				return 9;
			}
			break;
		
		case 0x00000003:
			if (bVar0 <= 11)
			{
				return 11;
			}
			break;
		
		case 0x00000004:
			if (bVar0 <= 10)
			{
				return 10;
			}
			break;
	}
	if (!Function_381(Param0.f_1304, 128) && !Function_381(Param0.f_1304, 1))
	{
		Function_333(&Param0);
	}
	if (Function_72(&Param0))
	{
		if (Function_332(&Param0))
		{
			Function_329(&Param0);
			Function_64(&Param0, 1);
		}
		if (Function_328(&Param0 + 1340, 5.0f))
		{
			Function_321(&Param0);
		}
		if (!Function_381(Param0.f_1304, 32768))
		{
			fVar6 = Function_320(0x3e800000);
			if (fVar6 < 0.0f)
			{
				Param0.f_1536 = (IntToFloat(FLOOR((0,09f * fVar6))) + 5.0f);
				if (Function_381(Param0.f_1304, 512))
				{
					HUD_TIMER_COUNTDOWN(Param0.f_1536);
					HUD_TIMER_DISPLAY(1);
					Function_472(&Param0 + 1324);
				}
				if (Function_318(&Param0) == 3)
				{
					Function_317(&Param0);
				}
				Function_380(&Param0 + 1304, 32768);
			}
		}
		if (Function_316(&Param0 + 1324, Param0.f_1536))
		{
			if (bVar0 <= 17)
			{
				HUD_TIMER_DISPLAY(0);
				bVar0 = 17;
			}
		}
		if (Function_318(&Param0) == 3)
		{
			if (!Function_381(Param0.f_1304, 0x20000000))
			{
				if (Function_315(&Param0))
				{
				}
			}
			else if (VDIST(Global_54078, *(&Param0 + 1504)) > 100.0f && !Function_381(Param0.f_1304, 0x40000000))
			{
				Function_314(&Param0);
			}
		}
	}
	iVar1 = Function_305(&Param0);
	if (bVar0 <= iVar1)
	{
		bVar0 = iVar1;
	}
	if (Function_381(Param0.f_1304, 8))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1544) || IS_ACTOR_DEAD(&Param0 + 1544))
		{
			if (bVar0 <= 23)
			{
				bVar0 = 23;
			}
		}
		else
		{
			iVar1 = Function_304(&Param0);
			if (bVar0 <= iVar1)
			{
				bVar0 = iVar1;
			}
		}
	}
	if (Function_381(Param0.f_1304, 16))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1560) || IS_ACTOR_DEAD(&Param0 + 1560))
		{
			if (bVar0 <= 22)
			{
				bVar0 = 22;
			}
		}
		else
		{
			iVar1 = Function_302(&Param0);
			if (bVar0 <= iVar1)
			{
				bVar0 = iVar1;
			}
		}
	}
	if (IS_OBJECTSET_VALID(&Param0 + 1576))
	{
		bVar5 = false;
		while (bVar5 < (GET_OBJECTSET_SIZE(&Param0 + 1576) - 1))
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, &Param0 + 1576));
			if (!IS_ACTOR_VALID(&uVar2) || !IS_ACTOR_ALIVE(&uVar2))
			{
				Function_380(&Param0 + 1304, 0x8000000);
				Function_301(&uVar2);
				Function_63(&Param0);
				if (bVar0 <= 21)
				{
					bVar0 = 21;
				}
			}
			else if (Function_298(&uVar2, &uVar8, &uVar7, 0, 0, 0x40400000))
			{
				if (bVar0 <= 20)
				{
					bVar0 = 20;
				}
			}
			bVar5++;
		}
		DESTROY_OBJECTSET(&Param0 + 1576);
	}
	if (Function_135(Param0.f_1492))
	{
		if (!Function_381(Param0.f_1304, 65536))
		{
			if (IS_ACTOR_IN_VOLUME(&Param0 + 1408, &Global_44085[Param0.f_14929] + 8))
			{
				Function_493(&Param0, 0);
				Function_375(&Param0);
				Function_380(&Param0 + 1304, 65536);
			}
		}
	}
	if (IS_VOLUME_VALID(&Param0 + 1496))
	{
		if (IS_OBJECT_VALID(&Param0 + 1528))
		{
			bVar9 = false;
			if (Function_381(Param0.f_1304, 4))
			{
				bVar9 = GATEWAY_UPDATE(&Param0 + 1528);
			}
			else
			{
				bVar9 = Function_396(&Param0 + 1528, 0, 1, 0, 0, 0);
			}
			if (bVar9 == 1)
			{
				if (Function_318(&Param0) == 3)
				{
					Function_58(&Param0);
				}
				if (bVar0 <= 8)
				{
					if (&bParam1)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
					bVar0 = 8;
				}
			}
			else if (VDIST(Global_54078, *(&Param0 + 1504)) > (Param0.f_1540 + 175.0f))
			{
				Function_472(&Param0 + 1388);
				Param0.f_1404 = 0;
			}
			else if (Function_316(&Param0 + 1388, 7.0f))
			{
				if (Param0.f_1404 > 2)
				{
					Function_342(&Param0, 3);
					return 13;
				}
				Function_297(&Param0, 1);
				Function_296(&Param0, "pm_esc_wdir", 1);
				Function_472(&Param0 + 1388);
				Param0.f_1404++;
			}
		}
	}
	if (Function_295(&Param0) && IS_ACTOR_VALID(&Param0 + 1408))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&Param0 + 1544), &Var3);
		Function_294(StackVal, &Param0, Var3);
	}
	if (Function_381(Param0.f_1304, 256))
	{
		iVar1 = Function_241(&Param0, &bParam1);
		if (bVar0 <= iVar1)
		{
			bVar0 = iVar1;
		}
	}
	if (bVar0 > 10)
	{
		if (Function_381(Param0.f_1304, 512))
		{
			HUD_TIMER_DISPLAY(0);
		}
		if (Function_318(&Param0) == 3)
		{
			Function_58(&Param0);
		}
	}
	if (Function_72(&Param0))
	{
		Function_233(&Param0, 0, 1);
	}
	else
	{
		Function_228(StackVal, &Param0, Global_54078, 1, 0x41c80000, 0x42c80000);
	}
	return bVar0;
}

var Function_228(struct<1049> Param0) //Position: 0xCCD4 / 52436
{
	var uVar0;
	
	Function_232(&Param0);
	Function_229(&Param0);
	Function_233(&Param0, &iParam3, 0);
	if (IS_OBJECT_VALID(&Param0))
	{
		Function_482(&Param0);
		uVar0 = Function_482(&Param0);
		if (!IS_BLIP_VALID(&Param0 + 48))
		{
			if (WOULD_ACTOR_BE_VISIBLE(false, &uVar0, 3212836864) || VDIST(Param1, *(&Param0 + 8)) > &bParam4)
			{
				Param0.f_40 = 1;
			}
		}
	}
	if (VDIST(Param1, *(&Param0 + 8)) < &fParam5)
	{
		Param0.f_40 = 0;
	}
	else if ((!IS_BLIP_VALID(&Param0 + 48) && Param0.f_40 != 0) && IS_OBJECT_VALID(&Param0))
	{
		*(&Param0 + 48) = ADD_BLIP_FOR_OBJECT(&Param0, Param0.f_56, 0f, 2, 0);
	}
	if (!Function_381(Param0.f_1048, 4096))
	{
		if (!Param0.f_56 != 4294967295)
		{
			if ((!IS_BLIP_VALID(&Param0 + 48) && Param0.f_40 != 1) && IS_OBJECT_VALID(&Param0))
			{
				*(&Param0 + 48) = ADD_BLIP_FOR_OBJECT(&Param0, Param0.f_56, 0f, 2, 0);
				SET_BLIP_BLINK(&Param0 + 48, 1, 0, 5f);
			}
		}
		if (Param0.f_40 != 0 && IS_BLIP_VALID(&Param0 + 48))
		{
			REMOVE_BLIP(&Param0 + 48);
		}
	}
	if (Param0.f_40 != 1 && SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_7(&Param0, 1);
	}
	return Param0.f_40;
}

void Function_229(int iParam0) //Position: 0xCE25 / 52773
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	struct<2> Var6;
	var uVar8;
	bool bVar9;
	
	if (SQUAD_IS_VALID(&iParam0 + 1024) && Function_316(&iParam0 + 1032, 7.0f))
	{
		Function_231(&iParam0);
		Var0 = Function_231(&iParam0);
		if (Function_45(StackVal, Var0))
		{
			bVar9 = false;
			while (bVar9 < (SQUAD_GET_SIZE(&iParam0 + 1024) - 1))
			{
				uVar8 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 1024, bVar9);
				Var6 = Vector(0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f));
				ROTATE_VECTOR_XZ(&Var6, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				uVar2 = Vector(StackVal, StackVal, StackVal) + Vector(Var6, Var0, StackVal);
				FIND_GROUND_INTERSECTION(&uVar2, 100.0f, &uVar2, &uVar4);
				TASK_BIRD_LAND_AT_COORD(&uVar8, &uVar2);
				bVar9++;
			}
			Function_230(&iParam0 + 1024, 1);
			Function_472(&iParam0 + 1032);
		}
		else
		{
			Function_7(&iParam0, 1);
		}
	}
	return;
}

void Function_230(var uParam0, bool bParam1) //Position: 0xCEDD / 52957
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

struct<8> Function_231(int iParam0) //Position: 0xCF1E / 53022
{
	return StackVal, *(&iParam0 + 8);
}

void Function_232(int iParam0) //Position: 0xCF2B / 53035
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

void Function_233(bool bParam0, int iParam1, int iParam2) //Position: 0xCF37 / 53047
{
	if (&iParam2 == 1)
	{
		if (Function_240(&bParam0, &iParam1, &iParam2))
		{
			Function_239(&bParam0);
		}
		else if (Function_238(&bParam0, &iParam1))
		{
			Function_236(&bParam0);
		}
		if (Function_235(&bParam0, &iParam1, &iParam2))
		{
			Function_234(&bParam0);
		}
	}
	else if (Function_240(&bParam0, &iParam1, 0))
	{
		Function_239(&bParam0);
	}
	else if (Function_235(&bParam0, &iParam1, 0))
	{
		Function_234(&bParam0);
	}
	else if (Function_238(&bParam0, &iParam1))
	{
		Function_236(&bParam0);
	}
	return;
}

void Function_234(struct<909> Param0) //Position: 0xCFC6 / 53190
{
	char* cVar0[32];
	
	if (Param0.f_908 <= Param0.f_620)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, &Param0 + 620[Param0.f_9084], 32);
		if ((*&Param0 + 724)[Param0.f_908] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, &Param0 + 620[Param0.f_9084], &Param0 + 756[Param0.f_9086], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_512(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

bool Function_235(struct<909> Param0) //Position: 0xD06E / 53358
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, *(&Param0 + 8));
	bVar3 = VDIST(Global_54078, *(&Param0 + 20));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_99146 != 1 || Global_6637 != 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_160() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_908 <= Param0.f_756)
	{
		if (STRING_LENGTH(&Param0 + 620[Param0.f_9084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_236(struct<1049> Param0) //Position: 0xD115 / 53525
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_381(Param0.f_1048, 8) && Param0.f_612 > 3)
	{
		if (VDIST(Global_54078, *(&Param0 + 8)) < VDIST(Global_54078, *(&Param0 + 20)) && IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
			{
				Function_237(&Param0 + 508[Param0.f_6124], 3.0f, 0, 2, 1, 0);
				Param0.f_612++;
				Function_472(&Param0 + 60);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(&Param0 + 400[Param0.f_5044]))
		{
			Function_237(&Param0 + 400[Param0.f_5044], 3.0f, 0, 2, 1, 0);
			Param0.f_504++;
			Param0.f_504 = (Param0.f_504 % 3);
			Function_472(&Param0 + 60);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_237(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD212 / 53778
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_238(int iParam0, int iParam1) //Position: 0xD297 / 53911
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&iParam0 + 8)) >= VDIST(Global_54078, *(&iParam0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&iParam0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&iParam0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&iParam0 + 400[04]))
	{
		iVar0 = 0;
	}
	else if (Function_160())
	{
		iVar0 = 0;
	}
	else if (Function_316(&iParam0 + 60, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_239(struct<181> Param0) //Position: 0xD343 / 54083
{
	char* cVar0[32];
	
	if (Param0.f_180 <= Param0.f_76)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, &Param0 + 76[Param0.f_1804], 32);
		if ((*&Param0 + 184)[Param0.f_180] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, &Param0 + 76[Param0.f_1804], &Param0 + 248[Param0.f_1806], "", "", "", "", 0, (*&Param0 + 216)[Param0.f_180], 0, 0);
		}
		else
		{
			Function_509(&Param0 + 76[Param0.f_1804], 8,5f, (*&Param0 + 216)[Param0.f_180], 2, 0, 0, 0, 0);
		}
		Param0.f_180++;
	}
	return;
}

bool Function_240(struct<181> Param0) //Position: 0xD3F7 / 54263
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, *(&Param0 + 8)) >= VDIST(Global_54078, *(&Param0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&Param0 + 76[04]))
	{
		iVar0 = 0;
	}
	else if (Function_160() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_180 <= Param0.f_76)
	{
		if (STRING_LENGTH(&Param0 + 76[Param0.f_1804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int Function_241(struct<2069> Param0) //Position: 0xD4BA / 54458
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!Function_381(Param0.f_1304, 0x1000000) && IS_SCRIPT_VALID(&Param0 + 1624))
	{
		Function_293(&Param0 + 1632);
		if (SQUAD_IS_VALID(&Param0 + 1632 + 80))
		{
			Function_291(&Param0, GET_ACTOR_FACTION(Function_292(&Param0 + 1632 + 80)));
			if (&bParam1)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			}
			Function_380(&Param0 + 1304, 0x1000000);
		}
	}
	else if (Function_381(Param0.f_1304, 0x1000000) && !IS_SCRIPT_VALID(&Param0 + 1624))
	{
		if (!Function_381(Param0.f_1304, 262144) || Param0.f_2068 < 0)
		{
			Function_472(&Param0 + 2024);
			Function_290(&Param0);
			Function_288(&Param0);
			Function_270(&Param0);
			Function_59(&Param0 + 1304, 0x1000000);
			Function_59(&Param0 + 1304, 131072);
		}
		if (&bParam1)
		{
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
		}
		Function_59(&Param0 + 1304, 0x1000000);
	}
	if (Function_381(Param0.f_1304, 1048576))
	{
		if (!Function_381(Param0.f_1304, 2097152))
		{
			Function_472(&Param0 + 2024);
			Function_290(&Param0);
			Function_288(&Param0);
			Function_270(&Param0);
			Function_380(&Param0 + 1304, 2097152);
		}
		if (Global_43790 != 3 || Global_43790 != 4)
		{
			if (Function_381(Param0.f_1304, 0x1000000))
			{
				Function_375(&Param0);
				Param0.f_2068++;
			}
			Function_59(&Param0 + 1304, 1048576);
		}
	}
	else if (!(Global_43790 != 3 || Global_43790 != 4))
	{
		Function_380(&Param0 + 1304, 1048576);
	}
	if ((((Function_316(&Param0 + 2024, Param0.f_2040) && Function_381(Param0.f_1304, 1048576)) && !Function_381(Param0.f_1304, 0x1000000)) && !IS_SCRIPT_VALID(&Param0 + 1624)) && Param0.f_2068 < 0)
	{
		if (Function_268(StackVal, &Global_54076, *(&Param0 + 1464)) < 150.0f || Function_381(Param0.f_1304, 8388608))
		{
			Function_266(&Param0);
			if (Function_254(&Param0 + 1632))
			{
				if (!Function_381(Param0.f_1304, 131072))
				{
					if (Function_381(Param0.f_1304, 2048))
					{
						Function_253(&Param0 + 1632, 1);
						iVar1 = 0;
						while (iVar1 < 5)
						{
							if (Function_252((*&Param0 + 1968)[iVar1]) && !(*&Param0 + 1968)[iVar1] != 0)
							{
								Function_248(&Param0 + 1632, (*&Param0 + 1968)[iVar1]);
							}
							iVar1++;
						}
					}
					else
					{
						Function_245(&Param0 + 1632, 8);
					}
					Function_380(&Param0 + 1304, 131072);
				}
				*(&Param0 + 1624) = Function_243(&Param0 + 1632);
				if (IS_SCRIPT_VALID(&Param0 + 1624))
				{
					if (iVar0 <= 2)
					{
						if (Function_381(Param0.f_1304, 262144))
						{
							Param0.f_2068 = (Param0.f_2068 - 1);
							if (Param0.f_2068 < 0)
							{
								Function_242(&Param0 + 2024);
							}
						}
						iVar0 = 2;
					}
				}
				else
				{
					LOG_ERROR("Invalid transport attack script");
				}
			}
			else
			{
				Param0.f_2040 = (Param0.f_2040 + 1.0f);
			}
		}
	}
	return iVar0;
}

void Function_242(vector3 vParam0) //Position: 0xD80F / 55311
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

var Function_243(struct<273> Param0) //Position: 0xD826 / 55334
{
	int iVar0;
	
	if (!Param0.f_272 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_244(&Param0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", &Param0, 84, 0);
	return &iVar0;
}

void Function_244(struct<201> Param0) //Position: 0xD8B0 / 55472
{
	int iVar0;
	int iVar1;
	
	if (Function_381(Param0.f_128, 64))
	{
		iVar1 = 0;
		while (iVar1 <= Param0.f_144)
		{
			if (!(*&Param0 + 144)[iVar1] != 0 && Function_252((*&Param0 + 144)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		Param0.f_200 = iVar0;
	}
	else
	{
		Param0.f_200 = Param0.f_144;
	}
	return;
}

int Function_245(struct<273> Param0) //Position: 0xD90F / 55567
{
	bool bVar0;
	bool bVar1;
	
	if (Param0.f_272 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_POPSET_TYPE - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	bVar1 = false;
	bVar0 = Function_246(iParam1, bVar1);
	while (bVar0 == 0 && Function_252(bVar0))
	{
		bVar1++;
		bVar0 = Function_246(iParam1, bVar1);
		Function_248(&Param0, bVar0);
	}
	PRINTSTRING("Number of actorenums: ");
	PRINTINT(bVar1);
	PRINTNL();
	return 1;
}

bool Function_246(int iParam0, bool bParam1) //Position: 0xD9DC / 55772
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_247(&(Global_46972[0]), bParam1);
			break;
		
		case 0x00000002:
			return Function_247(&(Global_46972[1]), bParam1);
			break;
		
		case 0x00000004:
			return Function_247(&(Global_46972[2]), bParam1);
			break;
		
		case 0x00000008:
			return Function_247(&(Global_46972[3]), bParam1);
			break;
		
		case 0x00000010:
			return Function_247(&(Global_46972[4]), bParam1);
			break;
		
		case 0x00000020:
			return Function_247(&(Global_46972[5]), bParam1);
			break;
		
		case 0x00000040:
			return Function_247(&(Global_46972[6]), bParam1);
			break;
		
		case 0x00000080:
			return Function_247(&(Global_46972[7]), bParam1);
			break;
		
		case 0x00000100:
			return Function_247(&(Global_46972[8]), bParam1);
			break;
		
		case 0x00000200:
			return Function_247(&(Global_46972[9]), bParam1);
			break;
		
		case 0x00000400:
			return Function_247(&(Global_46972[10]), bParam1);
			break;
		
		case 0x00000800:
			return Function_247(&(Global_46972[11]), bParam1);
			break;
		
		case 0x00001000:
			return Function_247(&(Global_46972[12]), bParam1);
			break;
		
		case 0x00002000:
			return Function_247(&(Global_46972[13]), bParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_247(var uParam0, bool bParam1) //Position: 0xDB69 / 56169
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get an indexed member of an invalid popset");
		return 4294967295;
	}
	iVar2 = GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0);
	if (bParam1 > iVar2 && bParam1 <= 0)
	{
		bVar1 = GET_ACTORENUM_IN_POPULATION(&uParam0, bParam1);
	}
	else
	{
		return 4294967295;
	}
	if (!Function_252(bVar1))
	{
		LOG_ERROR("Did an index on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	return bVar0;
}

int Function_248(struct<273> Param0) //Position: 0xDC19 / 56345
{
	int iVar0;
	
	if (Param0.f_272 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_252(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_250(&Param0, 0);
	iVar0 = 0;
	while (iVar0 <= Param0.f_144)
	{
		if ((*&Param0 + 144)[iVar0] != 0 || !Function_252((*&Param0 + 144)[iVar0]))
		{
			(*&Param0 + 144)[iVar0] = bParam1;
			iVar0 = Param0.f_144;
		}
		iVar0++;
	}
	Function_249(&Param0, 0);
	return 1;
}

int Function_249(struct<329> Param0) //Position: 0xDCF0 / 56560
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_29(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			DECOR_SET_BOOL(&iParam1, "catk_bdi", Param0.f_272);
			DECOR_SET_FLOAT(&iParam1, "catk_spx", Param0.f_284);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spz");
			DECOR_SET_FLOAT(&iParam1, "catk_scx", Param0.f_296);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scz");
			DECOR_SET_BOOL(&iParam1, "catk_krd", Param0.f_276);
			DECOR_SET_BOOL(&iParam1, "catk_krt", Param0.f_280);
			DECOR_SET_OBJECT(&iParam1, "catk_atv", &Param0 + 312);
			DECOR_SET_INT(&iParam1, "catk_ats", Param0.f_320);
			DECOR_SET_BOOL(&iParam1, "catk_bus", Param0.f_324);
			DECOR_SET_OBJECT(&iParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(&Param0 + 80));
			DECOR_SET_INT(&iParam1, "catk_wtm", Param0.f_328);
			DECOR_SET_BOOL(&iParam1, "catk_ovr", Param0.f_260);
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_252((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(&iParam1, &cVar5, (*&Param0 + 144)[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncWrite - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncWrite - invalid write attempted");
	}
	return 1;
}

int Function_250(struct<329> Param0) //Position: 0xDF64 / 57188
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_251(&Param0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_29(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			Param0.f_272 = DECOR_GET_BOOL(&iParam1, "catk_bdi");
			Param0.f_284 = DECOR_GET_FLOAT(&iParam1, "catk_spx");
			(&Param0 + 284)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_spy");
			(&Param0 + 284)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_spz");
			Param0.f_296 = DECOR_GET_FLOAT(&iParam1, "catk_scx");
			(&Param0 + 296)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_scy");
			(&Param0 + 296)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_scz");
			Param0.f_276 = DECOR_GET_BOOL(&iParam1, "catk_krd");
			Param0.f_280 = DECOR_GET_BOOL(&iParam1, "catk_krt");
			(&Param0 + 312) = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_atv"));
			Param0.f_320 = DECOR_GET_INT(&iParam1, "catk_ats");
			Param0.f_324 = DECOR_GET_BOOL(&iParam1, "catk_bus");
			*(&Param0 + 80) = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_asq"));
			Param0.f_328 = DECOR_GET_INT(&iParam1, "catk_wtm");
			Param0.f_260 = DECOR_GET_BOOL(&iParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_252((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*&Param0 + 144)[bVar0] = DECOR_GET_INT(&iParam1, &cVar5);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncRead - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncRead - invalid read attempted");
	}
	return 1;
}

void Function_251(int iParam0) //Position: 0xE1CE / 57806
{
	char* cVar0[16];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		strcpy(&cVar0, "catkslay", 16);
		memcpy(&cVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&cVar0), 4);
		iParam0 = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

bool Function_252(bool bParam0) //Position: 0xE23E / 57918
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_253(int iParam0, bool bParam1) //Position: 0xE255 / 57941
{
	if (bParam1)
	{
		Function_380(&iParam0 + 128, 64);
	}
	else
	{
		Function_59(&iParam0 + 128, 64);
	}
	return;
}

bool Function_254(struct<325> Param0) //Position: 0xE277 / 57975
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	struct<6> Var11;
	
	Function_251(&Param0);
	if (Param0.f_320 == 0)
	{
		Param0.f_320 = 3;
		DECOR_SET_BOOL(&Param0, "catk_bus", Param0.f_324);
	}
	if (Function_45(StackVal, *(&Param0 + 284)))
	{
		if (Function_45(StackVal, *(&Param0 + 296)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_265(StackVal, &Param0, Global_54078);
			}
			else
			{
				return 0;
			}
		}
		Function_265(StackVal, &Param0, *(&Param0 + 296));
		if (Param0.f_36 > 0,5f)
		{
			Param0.f_36 = 0,5f;
		}
		if ((Param0.f_40 - Param0.f_36) > 6.0f)
		{
			Param0.f_40 = (Param0.f_36 + 6.0f);
		}
		if (Param0.f_44 >= 0.0f)
		{
			Param0.f_44 = 15.0f;
		}
		Function_264(&Var3, 4294967295, 5.0f, 1, 4294967295);
		Function_263(StackVal, &Var11, 0, *(&Param0 + 296), 0.0f, Param0.f_36, Param0.f_40, Param0.f_44, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			Var1 = Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			if (!Function_45(StackVal, Var1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_45(StackVal, Var1))
		{
			*(&Param0 + 284) = *(&Param0 + 296);
			return 0;
		}
		*(&Param0 + 284) = Var1;
	}
	Function_244(&Param0);
	Param0.f_272 = 1;
	if (!Function_255(&Param0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_249(&Param0, 0);
	return 1;
}

bool Function_255(int iParam0) //Position: 0xE41A / 58394
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 8))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ncatk_dobj"), 4);
		*(&iParam0 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, &iParam0, &uVar0, *(&iParam0 + 284), Vector(0.0f, 0.0f, 0.0f));
		if (!IS_OBJECT_VALID(&iParam0 + 8))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		*(&iParam0 + 16) = CREATE_OBJECT_ITERATOR(&iParam0);
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(&iParam0 + 16, 8);
	ITERATE_ON_PARTIAL_NAME(&iParam0 + 16, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(&iParam0 + 16)));
	PRINTNL();
	return 1;
}

struct<8> Function_256(struct<45> Param0) //Position: 0xE5A1 / 58785
{
	struct<2> Var0;
	
	if (&bParam14)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		GET_OBJECT_POSITION(&Param0, &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(&Param0));
	}
	else if (!Function_45(StackVal, *(&Param0 + 8)))
	{
		if (Global_47151[34])
		{
			PRINTVECTOR(*(&Param0 + 8));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 8));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_262(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_260();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_259(Param0.f_24);
	Function_258(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_257(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param6.f_28 == 0.0f)
	{
		Param0.f_44 = Param6.f_28;
	}
	if (Param0.f_44 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_44, (-1.0f * Param0.f_44));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_127();
	return StackVal, Function_127();
}

void Function_257(struct<33> Param0) //Position: 0xE6D4 / 59092
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_258(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0xE800 / 59392
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_259(bool bParam0) //Position: 0xE851 / 59473
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_260() //Position: 0xE904 / 59652
{
	float fVar0;
	bool bVar1;
	
	Function_261(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_261(var uParam0, int iParam1) //Position: 0xE918 / 59672
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_262(bool bParam0) //Position: 0xE9A9 / 59817
{
	if (&bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &bParam0), &bParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_263(struct<45> Param0) //Position: 0xE9F0 / 59888
{
	Param0.f_24 = iParam1;
	*(&Param0 + 8) = Param2;
	Param0.f_20 = fParam4;
	Param0.f_28 = uParam5;
	Param0.f_32 = uParam6;
	Param0.f_36 = &iParam9;
	Param0.f_40 = &uParam7;
	Param0.f_44 = &iParam8;
}

void Function_264(struct<21> Param0) //Position: 0xEA36 / 59958
{
	Param0 = iParam1;
	Param0.f_4 = fParam2;
	Param0.f_8 = iParam3;
	Param0.f_16 = iParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

int Function_265(struct<273> Param0) //Position: 0xEA65 / 60005
{
	int iVar0;
	
	iVar0 = Function_29(&Param0);
	if (Function_45(StackVal, Param1))
	{
		return 0;
	}
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_250(&Param0, &iVar0);
	}
	*(&Param0 + 296) = Param1;
	*(&Param0 + 284) = Vector(0.0f, 0.0f, 0.0f);
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_249(&Param0, &iVar0);
	}
	return 1;
}

void Function_266(struct<2053> Param0) //Position: 0xEACF / 60111
{
	struct<2> Var0;
	var uVar2;
	
	if (Param0.f_2052 == 1)
	{
		uVar2 = Vector(RAND_FLOAT_RANGE(-5.0f, 5.0f), 0.0f, RAND_FLOAT_RANGE(45.0f, 55.0f));
	}
	else if (Function_267())
	{
		uVar2 = Vector(RAND_FLOAT_RANGE(-2,5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f));
	}
	else
	{
		uVar2 = Vector(RAND_FLOAT_RANGE(0.0f, 2,5f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f));
	}
	GET_ACTOR_OFFSET_WORLD_COORDS(&Param0 + 1408, &uVar2, &Var0);
	Function_265(StackVal, &Param0 + 1632, Var0);
	return;
}

bool Function_267() //Position: 0xEB59 / 60249
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

float Function_268(int iParam0, struct<2> Param1) //Position: 0xEB6C / 60268
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_269(&iParam0);
		Var0 = Function_269(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_269(int iParam0) //Position: 0xEBE3 / 60387
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

void Function_270(struct<2057> Param0) //Position: 0xEC4F / 60495
{
	Function_287(&Param0 + 1632, 3);
	Function_286(&Param0 + 1632, 2);
	Function_285(&Param0 + 1632, 1);
	Function_284(&Param0 + 1632, Param0.f_2056);
	Function_283(&Param0 + 1632, 1);
	Function_282(&Param0 + 1632, 0,5f, 15.0f, 3,5f);
	Function_281(&Param0 + 1632, 1);
	Function_280(&Param0 + 1632, 1);
	Function_279(&Param0 + 1632, 1);
	Function_278(&Param0 + 1632, 1, 4294967295);
	Function_277(&Param0 + 1632, 1);
	Function_276(&Param0 + 1632, 1, 976, 0);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_271(&Param0 + 1632, &Global_54076);
	}
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		Function_271(&Param0 + 1632, &Param0 + 1544);
	}
	if (IS_ACTOR_VALID(&Param0 + 1560))
	{
		Function_271(&Param0 + 1632, &Param0 + 1560);
	}
	return;
}

int Function_271(var uParam0, var uParam1) //Position: 0xED3E / 60734
{
	return Function_272(&uParam0, &uParam1);
}

int Function_272(struct<129> Param0) //Position: 0xED4D / 60749
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	Function_275(&Param0);
	if (!IS_ACTOR_IN_ACTORSET(&Param0 + 64, &iParam1))
	{
		DECOR_SET_BOOL(&iParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(&Param0 + 64, &iParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(&iParam1));
		PRINTNL();
		if (!Function_381(Param0.f_128, 1024))
		{
			Function_273(&Param0, &iParam1);
		}
	}
	return 1;
}

void Function_273(int iParam0, var uParam1) //Position: 0xEDD8 / 60888
{
	var uVar0;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	Function_274(&iParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("catkavol"), 4);
	iVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, &uVar0, 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	if (IS_VOLUME_VALID(&iVar4))
	{
		if (SQUAD_IS_VALID(&iParam0 + 80))
		{
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&iVar4), GET_OBJECT_FROM_ACTOR(&uParam1), Function_395(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(&iParam0 + 80) - 1))
			{
				uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 80, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar6, &iVar4);
				bVar5++;
			}
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_AddAvoidanceVolume got an invalid volume somehow?");
	}
	return;
}

int Function_274(int iParam0) //Position: 0xEEBD / 61117
{
	var uVar0;
	
	Function_251(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 136))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("navoidVols"), 4);
		*(&iParam0 + 136) = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, &iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(&iParam0 + 136))
		{
			return 0;
		}
	}
	return 1;
}

int Function_275(int iParam0) //Position: 0xEF0D / 61197
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(&iParam0 + 64))
	{
		Function_251(&iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntargetSet"), 4);
		*(&iParam0 + 64) = CREATE_ACTORSET_IN_LAYOUT(&iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(&iParam0 + 64))
		{
			return 0;
		}
	}
	return 1;
}

int Function_276(struct<121> Param0) //Position: 0xEF5B / 61275
{
	if (iParam1 == 1)
	{
		Function_380(&Param0 + 128, 1);
	}
	else
	{
		Function_59(&Param0 + 128, 1);
	}
	if (&iParam2 > 976 || &iParam2 <= 1050)
	{
		Param0.f_116 = 4294967295;
	}
	else
	{
		Param0.f_116 = &iParam2;
	}
	Param0.f_120 = &uParam3;
	return 1;
}

void Function_277(int iParam0, int iParam1) //Position: 0xEFAA / 61354
{
	if (iParam1 == 1)
	{
		Function_380(&iParam0 + 128, 8);
	}
	else
	{
		Function_59(&iParam0 + 128, 8);
	}
	return;
}

void Function_278(struct<125> Param0) //Position: 0xEFCD / 61389
{
	if (iParam1 == 1)
	{
		Function_380(&Param0 + 128, 4);
	}
	else
	{
		Function_59(&Param0 + 128, 4);
	}
	Param0.f_124 = &iParam2;
	Function_380(&Param0 + 128, 128);
	return;
}

void Function_279(int iParam0, int iParam1) //Position: 0xF000 / 61440
{
	if (&iParam1 == 0)
	{
		Function_380(&iParam0 + 128, 4096);
	}
	else
	{
		Function_59(&iParam0 + 128, 4096);
	}
	return;
}

void Function_280(int iParam0, int iParam1) //Position: 0xF026 / 61478
{
	if (&iParam1 == 0)
	{
		Function_380(&iParam0 + 128, 2048);
	}
	else
	{
		Function_59(&iParam0 + 128, 2048);
	}
	return;
}

int Function_281(int iParam0, int iParam1) //Position: 0xF04C / 61516
{
	if (iParam1 == 1)
	{
		Function_380(&iParam0 + 128, 512);
	}
	else
	{
		Function_59(&iParam0 + 128, 512);
	}
	return 1;
}

void Function_282(struct<45> Param0) //Position: 0xF072 / 61554
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	Param0.f_36 = fParam1;
	Param0.f_40 = fParam2;
	Param0.f_44 = &fParam3;
}

void Function_283(int iParam0, int iParam1) //Position: 0xF0DF / 61663
{
	if (&iParam1 == 0)
	{
		Function_380(&iParam0 + 128, 8192);
	}
	else
	{
		Function_59(&iParam0 + 128, 8192);
	}
	return;
}

int Function_284(struct<53> Param0) //Position: 0xF105 / 61701
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	Param0.f_52 = iParam1;
	return 1;
}

void Function_285(int iParam0, int iParam1) //Position: 0xF121 / 61729
{
	if (iParam1 == 1)
	{
		Function_380(&iParam0 + 128, 256);
	}
	else
	{
		Function_59(&iParam0 + 128, 256);
	}
	return;
}

int Function_286(struct<61> Param0) //Position: 0xF146 / 61766
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	Param0.f_60 = iParam1;
	return 1;
}

int Function_287(struct<325> Param0) //Position: 0xF162 / 61794
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	Param0.f_320 = iParam1;
	Param0.f_324 = 1;
	return 1;
}

void Function_288(struct<2065> Param0) //Position: 0xF186 / 61830
{
	if (Function_381(Param0.f_1304, 524288) && (Param0.f_2060 < 0 && Param0.f_2064 < 1))
	{
		Function_289(&Param0, RAND_INT_RANGE(Param0.f_2060, Param0.f_2064));
	}
	else
	{
		Function_289(&Param0, 1);
	}
	return;
}

void Function_289(struct<2057> Param0) //Position: 0xF1CD / 61901
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	Param0.f_2056 = iParam1;
	return;
}

void Function_290(struct<2049> Param0) //Position: 0xF1E4 / 61924
{
	if (Param0.f_2044 >= Param0.f_2048)
	{
		Param0.f_2040 = RAND_FLOAT_RANGE(Param0.f_2044, Param0.f_2048);
		Param0.f_2044 = (Param0.f_2044 + 6.0f);
		Param0.f_2048 = (Param0.f_2048 + 6.0f);
	}
	else
	{
		Param0.f_2040 = 0.0f;
	}
	return;
}

void Function_291(struct<921> Param0) //Position: 0xF235 / 62005
{
	Param0.f_920 = iParam1;
	return;
}

var Function_292(var uParam0) //Position: 0xF243 / 62019
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_293(int iParam0) //Position: 0xF290 / 62096
{
	if (IS_OBJECT_VALID(Function_29(&iParam0)))
	{
		Function_250(&iParam0, 0);
		Function_249(&iParam0, 0);
	}
	return;
}

void Function_294(int iParam0, struct<2> Param1) //Position: 0xF2B2 / 62130
{
	(&iParam0 + 8) = Param1;
	return;
}

int Function_295(struct<1305> Param0) //Position: 0xF2C2 / 62146
{
	if (Function_381(Param0.f_1304, 128))
	{
		return 1;
	}
	return 0;
}

var Function_296(int iParam0, char* cParam1) //Position: 0xF2DC / 62172
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(&iParam0 + 76[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(&iParam0 + 76[iVar24], &cParam1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		iVar0 = 0;
	}
	strcpy(&iParam0 + 76[iVar24], &cParam1, 16);
	(*&iParam0 + 184)[iVar2] = 0;
	(*&iParam0 + 216)[iVar2] = &iParam2;
	return iVar0;
}

void Function_297(struct<181> Param0) //Position: 0xF35E / 62302
{
	int iVar0;
	
	if (&bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (Param0.f_76 - 1))
	{
		strcpy(&Param0 + 76[iVar04], "", 16);
		(*&Param0 + 184)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_180 = 0;
	return;
}

bool Function_298(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xF3AC / 62380
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_401(&iParam0, &Global_54076);
		if (!Function_381(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_299(&iParam0);
				return 1;
			}
		}
		if (!Function_381(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_299(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_299(&iParam0);
				return 1;
			}
		}
		if (!Function_381(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_299(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_299(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_381(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_299(&iParam0);
				return 1;
			}
		}
		if (!Function_381(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_299(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_299(int iParam0) //Position: 0xF575 / 62837
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_300(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_300(int iParam0) //Position: 0xF5B2 / 62898
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_301(int iParam0) //Position: 0xF5CB / 62923
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "transNecType");
}

int Function_302(struct<1305> Param0) //Position: 0xF5E9 / 62953
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	if (!Function_381(Param0.f_1304, 16))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Param0 + 1560))
	{
		return 0;
	}
	Function_133(&Param0 + 1560, &Var2);
	iVar1 = Function_303(&Param0 + 1560);
	switch (iVar1)
	{
		case 0x00000000:
			Function_62(&Param0 + 1560, 5);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000005:
			if (VDIST(Global_54078, Var2) < 350.0f)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
			switch (Param0.f_1096)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (!IS_ACTOR_RIDING_VEHICLE(&Param0 + 1560) || !IS_ACTOR_ALIVE(&Param0 + 1560))
					{
						KILL_ACTOR(&Param0 + 1560);
						Function_62(&Param0 + 1560, 7);
					}
					break;
				
				case 0x00000002:
					if (IS_ACTOR_VALID(&Param0 + 1560))
					{
						if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&Param0 + 1560)))
						{
							KILL_ACTOR(&Param0 + 1560);
							if (iVar0 <= 22)
							{
								iVar0 = 22;
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			KILL_ACTOR(&Param0 + 1560);
			break;
		
		case 0x00000007:
			break;
	}
	return iVar0;
}

var Function_303(int iParam0) //Position: 0xF738 / 63288
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "translib_state");
}

int Function_304(struct<1305> Param0) //Position: 0xF758 / 63320
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	iVar1 = 0;
	if (!Function_381(Param0.f_1304, 8))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Param0 + 1544))
	{
		return 0;
	}
	iVar0 = Function_303(&Param0 + 1544);
	GET_POSITION(&Param0 + 1544, &Var2);
	GET_ACTOR_VELOCITY(&Param0 + 1408, &Var4);
	if (Function_381(Param0.f_1304, 128) == 1)
	{
		if (!GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408)
		{
			if (VDIST(Global_54078, Var2) < 100.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			if (!Function_381(Param0.f_1304, 2))
			{
				if (Function_381(Param0.f_1304, 0x2000000))
				{
					if (VDIST(Global_54078, Var2) > 25.0f)
					{
						Function_297(&Param0, 1);
						Function_296(&Param0, "pm_trn_wait", 1);
						Function_59(&Param0 + 1304, 0x2000000);
					}
				}
				else if (VDIST(Global_54078, Var2) < (25.0f * 2.0f))
				{
					Function_297(&Param0, 1);
					Function_296(&Param0, "pm_trn_retg", 1);
					Function_380(&Param0 + 1304, 0x2000000);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			SET_ACTOR_FACTION(&Param0 + 1544, 1);
			TASK_CLEAR(&Param0 + 1544);
			TASK_FACE_ACTOR(&Param0 + 1544, &Global_54076, 1, 3212836864);
			TASK_PRIORITY_SET(&Param0 + 1544, false);
			SET_ACTOR_FACE_STYLE(&Param0 + 1544, 0);
			Function_62(&Param0 + 1544, 1);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			SET_ACTOR_FACTION(&Param0 + 1544, GET_ACTOR_FACTION(&Global_54076));
			switch (Param0.f_1096)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					GIVE_WEAPON_TO_ACTOR(&Param0 + 1544, 42, false, 1, 1);
					break;
				
				case 0x00000002:
					break;
			}
			if (!IS_ACTOR_RIDING_VEHICLE(&Param0 + 1544))
			{
				Function_62(&Param0 + 1544, 2);
			}
			else
			{
				Function_62(&Param0 + 1544, 5);
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(&Param0 + 1544);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&Param0 + 1544, &Param0 + 1408, 1, 2, 0);
			TASK_PRIORITY_SET(&Param0 + 1544, true);
			Function_472(&Param0 + 1372);
			Function_62(&Param0 + 1544, 3);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(&Param0 + 1544))
			{
				Function_62(&Param0 + 1544, 4);
			}
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_RIDING_VEHICLE(&Param0 + 1544))
			{
				Function_62(&Param0 + 1544, 2);
			}
			if (VDIST(Global_54078, Var2) < 350.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			switch (Param0.f_1096)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(&Param0 + 1544, 14))
					{
						if (!ACTOR_HAS_WEAPON_IN_HAND(&Param0 + 1544, 14))
						{
							ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 1544, 14, 1);
							TASK_CLEAR(&Param0 + 1544);
						}
					}
					break;
				
				case 0x00000002:
					if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
					{
						if (Function_316(&Param0 + 1356, 20.0f) && VMAG(Var4) > 9.0f)
						{
							if (iVar1 <= 3)
							{
								iVar1 = 3;
							}
							Function_472(&Param0 + 1356);
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			TASK_CLEAR(&Param0 + 1544);
			TASK_FLEE_ACTOR(&Param0 + 1544, &Global_54076, 50.0f, -1.0f, 0, 0, 0);
			Function_62(&Param0 + 1544, 7);
			break;
		
		case 0x00000007:
			if (IS_BLIP_VALID(Function_73(&Param0)))
			{
				SET_BLIP_BLINK(Function_73(&Param0), 0, 0, 5f);
			}
			break;
	}
	return iVar1;
}

int Function_305(struct<1489> Param0) //Position: 0xFB0D / 64269
{
	int iVar0;
	struct<2> Var1;
	struct<5> Var3;
	var uVar9;
	float fVar10;
	struct<2> Var11;
	float fVar13;
	
	iVar0 = 0;
	if (!IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (Param0.f_1096 != 1 && IS_ACTOR_VALID(&Param0 + 1560))
		{
			KILL_ACTOR(&Param0 + 1560);
		}
		if (iVar0 <= 18)
		{
			return 18;
		}
	}
	if (!Function_313(&Param0 + 1408, 0, 1, 4294967295))
	{
		if (Param0.f_1096 == 3)
		{
			Function_308(&Param0);
		}
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	else if (Param0.f_1096 == 3)
	{
		if ((!IS_OBJECT_VALID(&Param0 + 1432[0]) || !IS_OBJECT_VALID(&Param0 + 1432[1])) || !IS_OBJECT_VALID(&Param0 + 1432[2]))
		{
			if (iVar0 <= 18)
			{
				iVar0 = 18;
			}
			Function_308(&Param0);
		}
	}
	if (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) < 0 && GET_NUM_DRAFTED_ACTORS(&Param0 + 1408) >= 0)
	{
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		Function_133(&Param0 + 1408, &Var1);
	}
	if (Param0.f_1096 == 3)
	{
		GET_ACTOR_VELOCITY(&Param0 + 1408, &Var3);
		if (StackVal >= -6.0f)
		{
			Function_308(&Param0);
		}
		if (Function_475(&Param0 + 1308))
		{
			if (Function_403(&Param0 + 1308) < 0,25f)
			{
				if (GET_LAST_HIT_TIME(&Global_54076) < (GET_CURRENT_GAME_TIME() - Function_403(&Param0 + 1308)))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1408, false) == &Global_54076)
					{
						Param0.f_1488 = (Param0.f_1488 - (1.0f * 6.0f));
					}
				}
				FIND_GROUND_INTERSECTION(&Var1, 5.0f, &Var5, &uVar7);
				uVar9 = START_CURVE_QUERY(&Param0 + 1296, Var5, 8, 0.0f, 5.0f, 0,5f, 0);
				fVar10 = 0.0f;
				Var11 = Vector(0.0f, 0.0f, 0.0f);
				if (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar9) >= 0)
				{
					fVar10 = 0,07f;
					if (GET_LAST_NEAREST_POINT(1, &Var11))
					{
						if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Var11, StackVal)) > 7,5f)
						{
							fVar10 = 0,035f;
						}
					}
				}
				else
				{
					fVar10 = 1.0f;
				}
				if (Global_6631)
				{
					fVar10 = (fVar10 * 0,75f);
				}
				DESTROY_OBJECT(&uVar9);
				if (GET_VEHICLE_BUMP_COUNT(&Param0 + 1408) >= 0)
				{
					Param0.f_1488 = (Param0.f_1488 - (IntToFloat(GET_VEHICLE_BUMP_COUNT(&Param0 + 1408)) * fVar10));
				}
				else if (GET_VEHICLE_BUMP_COUNT(&Param0 + 1408) == 0)
				{
					fVar13 = Function_307(&Param0 + 1408, 0);
					if (fVar13 >= 10.0f || (fVar13 >= (10.0f + 2,5f) && Global_6631))
					{
						if (fVar13 < (10.0f / 5.0f))
						{
							Param0.f_1488 = (Param0.f_1488 + 0,075f);
							if (Param0.f_1488 < 100.0f)
							{
								Param0.f_1488 = 100.0f;
							}
						}
					}
				}
				if (Param0.f_1488 >= 1.0f)
				{
					Function_308(&Param0);
					if (iVar0 <= 19)
					{
						iVar0 = 19;
					}
				}
				Function_472(&Param0 + 1308);
				RESET_VEHICLE_BUMP_COUNT(&Param0 + 1408);
			}
		}
		Function_306(&Param0);
	}
	if (Function_381(Param0.f_1304, 128))
	{
		if (IS_ACTOR_VALID(&Param0 + 1408))
		{
			Function_133(&Param0 + 1408, &Var1);
			if (VDIST(Global_54078, Var1) < 100.0f)
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (!Function_381(Param0.f_1304, 2))
			{
				if (Function_381(Param0.f_1304, 0x4000000))
				{
					if (VDIST(Global_54078, Var1) > 25.0f)
					{
						Function_297(&Param0, 1);
						Function_296(&Param0, "wagon_return", 1);
						Function_59(&Param0 + 1304, 0x4000000);
					}
				}
				else if (VDIST(Global_54078, Var1) < (25.0f * 2.0f))
				{
					Function_297(&Param0, 1);
					Function_296(&Param0, "pm_trn_retw", 1);
					Function_380(&Param0 + 1304, 0x4000000);
				}
			}
		}
	}
	else if (GET_PLAYER_ACTOR(0) == GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1408, false))
	{
		if (iVar0 <= 1)
		{
			Function_472(&Param0 + 2024);
			Function_472(&Param0 + 1356);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_306(struct<1489> Param0) //Position: 0xFF00 / 65280
{
	if (Function_381(Param0.f_1304, 0x10000000))
	{
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_TEXT("WHATEVA_prog", "pm_trn_dynamite");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", Param0.f_1488);
	}
	return;
}

float Function_307(var uParam0, bool bParam1) //Position: 0xFF72 / 65394
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_308(struct<1489> Param0) //Position: 0xFF93 / 65427
{
	bool bVar0;
	float fVar1;
	var uVar3;
	struct<25> Var4;
	
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (GET_VEHICLE(GET_PLAYER_ACTOR(0)) == &Param0 + 1408)
		{
			Function_482(&Param0 + 1408);
			*(&Var4 + 12) = Function_482(&Param0 + 1408);
			Function_481(&Param0 + 1408);
			Var4 = Function_481(&Param0 + 1408);
			Var4.f_24 = 0;
			Function_310(&Param0 + 1296, 0, &Var4, GET_PLAYER_ACTOR(0), &Param0 + 1408, 1, 0, 0);
		}
	}
	Param0.f_1488 = 0.0f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) - 1))
	{
		uVar3 = GET_DRAFT_ACTOR(bVar0, &Param0 + 1408);
		if (IS_ACTOR_VALID(&uVar3))
		{
			KILL_ACTOR(&uVar3);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (GET_NUM_AVAILABLE_SEATS(&Param0 + 1408) - 1))
	{
		uVar3 = GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1408, bVar0);
		if (IS_ACTOR_VALID(&uVar3))
		{
			KILL_ACTOR(&uVar3);
		}
		bVar0++;
	}
	if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
	{
		Function_309(&Global_54078, "FireBottleExplosion", 0, 1);
	}
	GET_POSITION(&Param0 + 1408, &fVar1);
	Function_309(&fVar1, "DynamiteExplosion", 0, 1);
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (IS_OBJECT_VALID(&Param0 + 1432[bVar0]))
		{
			DESTROY_OBJECT(&Param0 + 1432[bVar0]);
		}
		bVar0++;
	}
	return;
}

void Function_309(float fParam0, float fParam1, float fParam2, int iParam3) //Position: 0x100F9 / 65785
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &iParam3);
}

var Function_310(var uParam0, bool bParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, Vector3 vParam7) //Position: 0x10119 / 65817
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_395(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WagonCrash", 1, 1);
	}
	Function_311(&uVar0, &uParam2, &fParam3, &fParam4);
	if (vParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return &uVar0;
}

void Function_311(var uParam0, float fParam1, bool bParam2, var uParam3) //Position: 0x101A6 / 65958
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_312(&uVar0, &fParam1, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_312(var uParam0, struct<25> Param1) //Position: 0x101ED / 66029
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	Var0 = Vector(9,270768f, 7,965437f, 3,153887f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &uParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
}

bool Function_313(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x102EA / 66282
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&uParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_314(int iParam0) //Position: 0x103B8 / 66488
{
	if (IS_ACTOR_VALID(&iParam0 + 1592))
	{
		TELEPORT_ACTOR(&iParam0 + 1592, &iParam0 + 1604, 1, 1, 1);
		TASK_STAND_STILL(&iParam0 + 1592, -1.0f, 0, 0);
		TASK_FACE_ACTOR(&iParam0 + 1592, &Global_54076, 1, 3212836864);
		TASK_PRIORITY_SET(&iParam0 + 1592, false);
		if (IS_MOVER_FROZEN(&iParam0 + 1592))
		{
			SET_MOVER_FROZEN(&iParam0 + 1592, false);
		}
	}
	Function_380(&iParam0 + 1304, 0x40000000);
	return 1;
}

bool Function_315(struct<1617> Param0) //Position: 0x10431 / 66609
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	int iVar12;
	
	iVar12 = 1;
	if (!IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		return 0;
	}
	if (Function_45(StackVal, *(&Param0 + 1504)))
	{
		return 0;
	}
	Var0 = *(&Param0 + 1504);
	if ((((((Param0.f_1492 != Global_46760[0] || Param0.f_1492 != Global_46914[0]) || Param0.f_1492 != Global_46816[0]) || Param0.f_1492 != Global_46816[1]) || Param0.f_1492 != Global_46866[0]) || Param0.f_1492 != Global_46850[0]) || Param0.f_1492 != Global_46926[1])
	{
		Var2 = Vector(-1.0f, -5.0f, 1.0f);
		if (Function_252(Param0.f_1600))
		{
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, *(&Param0 + 1504), StackVal);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportContact") };
			Function_127();
			*(&Param0 + 1592) = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1296, &Var4, Param0.f_1600, Var0, Function_127());
			Param0.f_1616 = 1;
		}
		else
		{
			return 0;
		}
		iVar12 = 0;
	}
	if (iVar12 == 1)
	{
		Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportContact") };
		Var0 = (Var0 + 1.0f);
		if (Function_252(Param0.f_1600))
		{
			Function_127();
			*(&Param0 + 1592) = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1296, &Var4, Param0.f_1600, Var0, Function_127());
			Param0.f_1616 = 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1592))
	{
		MEMORY_CONSIDER_AS(&Param0 + 1592, &Global_54076, 5);
		MEMORY_IDENTIFY(&Param0 + 1592, &Global_54076);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Param0 + 1592, true);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&Param0 + 1592, 0);
		if (iVar12 == 1)
		{
			TASK_CLEAR(&Param0 + 1592);
			TASK_FACE_ACTOR(&Param0 + 1592, &Global_54076, 1, 3212836864);
			TASK_STAND_STILL(&Param0 + 1592, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&Param0 + 1592, false);
			SET_ACTOR_FACE_STYLE(&Param0 + 1592, 0);
			RESET_ANIM_SET_FOR_ACTOR(&Param0 + 1592, 0);
			SET_ANIM_SET_FOR_ACTOR(&Param0 + 1592, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 1592, "stand_ambient/help_loop");
		}
		else
		{
			AI_IGNORE_ACTOR(&Param0 + 1592);
			SET_MOVER_FROZEN(&Param0 + 1592, true);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1592);
		if (IS_VOLUME_VALID(&Param0 + 1496))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1592, &Param0 + 1496);
		}
	}
	Function_380(&Param0 + 1304, 0x20000000);
	return 1;
}

bool Function_316(int iParam0, float fParam1) //Position: 0x106BF / 67263
{
	if (Function_475(&iParam0))
	{
		if (Function_403(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_317(struct<1489> Param0) //Position: 0x106DD / 67293
{
	if (!Function_381(Param0.f_1304, 0x10000000))
	{
		HUD_ENABLE(1);
		UI_PUSH("Stagecoach_Job");
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", Param0.f_1488);
		UI_SET_TEXT("WHATEVA", "pm_trn_dynamite");
		Function_380(&Param0 + 1304, 0x10000000);
	}
	return;
}

int Function_318(struct<1097> Param0) //Position: 0x10771 / 67441
{
	int iVar0;
	
	if (Function_319() != 4294967295)
	{
		iVar0 = Function_319();
	}
	else
	{
		iVar0 = Param0.f_1096;
	}
	return iVar0;
}

int Function_319() //Position: 0x10790 / 67472
{
	if (DECOR_CHECK_EXIST(Function_57(), "trnsMissType"))
	{
		return DECOR_GET_INT(Function_57(), "trnsMissType");
	}
	return 4294967295;
}

var Function_320(int iParam0) //Position: 0x107C8 / 67528
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (StackVal == 3)
	{
		return -1.0f;
	}
	if (StackVal == 0)
	{
		return -2.0f;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		return -3.0f;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&Global_42834 + 16) - 1))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_42834 + 16);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(&uVar2), 0.0f, 1.0f, &iParam0));
		}
		bVar0++;
	}
	return iVar1;
}

void Function_321(int iParam0) //Position: 0x10849 / 67657
{
	Function_322(&iParam0);
	return;
}

void Function_322(char* cParam0) //Position: 0x10855 / 67669
{
	Function_327(&cParam0);
	switch (cParam0.f_1096)
	{
		case 0x00000001:
			Function_323(&cParam0, "pm_trn_inlh", 0);
			break;
		
		case 0x00000003:
			Function_323(&cParam0, "pm_trn_indh", 0);
			break;
		
		case 0x00000002:
			Function_323(&cParam0, "pm_trn_insh", 0);
			break;
	}
	return;
}

int Function_323(struct<1093> Param0) //Position: 0x108C9 / 67785
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(&cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_381(Param0.f_1048, 32))
	{
		if (!Function_21(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	uVar21 = Function_326(Function_20(Param0.f_1092), Function_136(Param0.f_1092));
	iVar22 = Function_324(Function_20(Param0.f_1092), Function_136(Param0.f_1092));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(&uVar21, &uVar20))
	{
		ADD_TIME(&uVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(&uVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(&Param0 + 620[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(&Param0 + 620[iVar174], &cParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(&Param0 + 620[iVar174], &cParam1, 16);
			if (&iParam2 == 1)
			{
				(*&Param0 + 724)[iVar17] = &iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_324(int iParam0, int iParam1) //Position: 0x10A3D / 68157
{
	int iVar0;
	bool bVar1;
	
	if (!Function_325(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= Global_21684)
	{
		if (Function_20(bVar1) != iParam0 && Function_136(bVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[bVar17].f_12);
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_325(int iParam0) //Position: 0x10A89 / 68233
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_326(int iParam0, int iParam1) //Position: 0x10A9E / 68254
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 <= Global_21684)
	{
		if (Function_20(bVar1) != iParam0 && Function_136(bVar1) != iParam1)
		{
			if (IS_LATER_THAN(&Global_21684[bVar17] + 40, &iVar0))
			{
				iVar0 = &Global_21684[bVar17] + 40;
			}
		}
		bVar1++;
	}
	return &iVar0;
}

void Function_327(struct<909> Param0) //Position: 0x10AEF / 68335
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_620 - 1))
	{
		strcpy(&Param0 + 620[iVar04], "", 16);
		(*&Param0 + 724)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_908 = 0;
	return;
}

bool Function_328(var uParam0, int iParam1) //Position: 0x10B2F / 68399
{
	if (Function_316(&uParam0, iParam1))
	{
		Function_242(&uParam0);
		return 1;
	}
	return 0;
}

void Function_329(int iParam0) //Position: 0x10B49 / 68425
{
	Function_330(&iParam0);
	return;
}

void Function_330(struct<1493> Param0) //Position: 0x10B55 / 68437
{
	char* cVar0[32];
	
	if (!Function_381(Param0.f_1304, 2))
	{
		Function_297(&Param0, 1);
		if (Function_69(&Param0))
		{
			strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[Param0.f_14929] + 8)), 32);
			Param0.f_1100 = 0;
			switch (Param0.f_1096)
			{
				case 0x00000001:
					Function_296(&Param0, "pm_trn_inl", 1);
					Function_331(&Param0, &cVar0, 0);
					break;
				
				case 0x00000003:
					Function_296(&Param0, "pm_trn_inb", 1);
					Function_331(&Param0, &cVar0, 0);
					break;
				
				case 0x00000002:
					Function_296(&Param0, "pm_trn_ins", 1);
					Function_331(&Param0, &cVar0, 0);
					break;
				
				case 0x00000004:
					Function_296(&Param0, "pm_trn_ind", 1);
					Function_331(&Param0, &cVar0, 0);
					break;
			}
		}
		else if (!GET_VEHICLE(&Global_54076) != &Param0 + 1408)
		{
			Function_296(&Param0, "wagon_return", 1);
			Param0.f_1100 = 2;
		}
		else if (!GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408)
		{
			Function_296(&Param0, "pm_trn_wait", 1);
			Param0.f_1100 = 1;
		}
	}
	return;
}

int Function_331(int iParam0, char* cParam1) //Position: 0x10CAD / 68781
{
	if (IS_STRING_VALID(&cParam1))
	{
		strcpy(&iParam0 + 248[06], &cParam1, 24);
		(*&iParam0 + 184)[0] = 1;
	}
	else
	{
		strcpy(&iParam0 + 248[06], "", 24);
		(*&iParam0 + 184)[0] = 0;
	}
	if (IS_STRING_VALID(&cParam2))
	{
		strcpy(&iParam0 + 248[16], &cParam2, 24);
		(*&iParam0 + 184)[1] = 1;
	}
	else
	{
		strcpy(&iParam0 + 248[16], "", 24);
		(*&iParam0 + 184)[1] = 0;
	}
	return 1;
}

bool Function_332(struct<1101> Param0) //Position: 0x10D24 / 68900
{
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		switch (Param0.f_1100)
		{
			case 0x00000001:
				if (IS_ACTOR_VALID(&Param0 + 1544))
				{
					if (GET_VEHICLE(&Param0 + 1544) == &Param0 + 1408)
					{
						if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
						{
							Param0.f_1100 = 0;
						}
						else
						{
							Param0.f_1100 = 2;
						}
						return 1;
					}
				}
				break;
			
			case 0x00000000:
				if (!GET_VEHICLE(&Global_54076) != &Param0 + 1408)
				{
					Param0.f_1100 = 2;
					return 1;
				}
				break;
			
			case 0x00000002:
				if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
				{
					Param0.f_1100 = 0;
					return 1;
				}
				break;
			}
	}
	return 0;
}

int Function_333(struct<1305> Param0) //Position: 0x10DD9 / 69081
{
	if (!Function_381(Param0.f_1304, 64))
	{
		LOG_ERROR("Cannot launch transport without TRANSPORT_INIT_TRANSPORT being properly called");
		return 0;
	}
	Function_373(&Param0);
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		Function_62(&Param0 + 1544, 2);
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		RESET_VEHICLE_BUMP_COUNT(&Param0 + 1408);
	}
	if (IS_VOLUME_VALID(&Param0 + 1496))
	{
		Function_494(&Param0, &Param0 + 1496);
	}
	if (Param0.f_1096 == 2)
	{
		Function_380(&Param0 + 1304, 512);
	}
	if (Param0.f_1096 == 3)
	{
		Function_472(&Param0 + 1308);
	}
	Function_472(&Param0 + 1372);
	Function_339(&Param0 + 1372);
	Function_329(&Param0);
	Function_64(&Param0, 1);
	Function_472(&Param0 + 1340);
	Function_335(&Param0);
	Function_334(&Param0, 1);
	Function_380(&Param0 + 1304, 128);
	return 1;
}

void Function_334(int iParam0, int iParam1) //Position: 0x10EFE / 69374
{
	if (iParam1 == 1)
	{
		Function_380(&iParam0 + 1048, 4);
	}
	else
	{
		Function_59(&iParam0 + 1048, 4);
	}
	return;
}

void Function_335(struct<1093> Param0) //Position: 0x10F21 / 69409
{
	if (Function_381(Param0.f_1048, 4))
	{
		Function_338();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_337(1);
	if (Function_381(Param0.f_1048, 32))
	{
		if (Function_19(Param0.f_1092))
		{
			Function_336(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_7(&Param0, 0);
	}
	Function_380(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_381(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_342(&Param0, 1);
	return;
}

void Function_336(bool bParam0, int iParam1) //Position: 0x10FB0 / 69552
{
	int iVar0;
	
	if (!Function_21(bParam0))
	{
		Function_82();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_20(bParam0);
	Global_21684[bParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_96(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_18(bParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_337(int iParam0) //Position: 0x11018 / 69656
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_24())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_338() //Position: 0x11051 / 69713
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_339(vector3 vParam0) //Position: 0x11067 / 69735
{
	if (Function_475(&vParam0))
	{
		if (!Function_340(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_380(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_340(int iParam0) //Position: 0x1112B / 69931
{
	return Function_381(iParam0, 2);
}

int Function_341(struct<1089> Param0) //Position: 0x11139 / 69945
{
	return Param0.f_1088;
}

void Function_342(struct<1089> Param0) //Position: 0x11145 / 69957
{
	int iVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				iVar0 = Function_347(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_346(&Param0) != 1)
				{
					Function_344(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_193(200, 1, 0);
				}
				else
				{
					Function_180(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_200(Param0.f_616, 1, 1);
				}
				else
				{
					Function_343(Param0.f_616, 1);
				}
			}
			else if (Param0.f_1088 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_343(bool bParam0, bool bParam1) //Position: 0x1122A / 70186
{
	bool bVar0;
	
	bVar0 = Function_119(0);
	if ((Function_119(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_195(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_119(0));
	return 1;
}

void Function_344(int iParam0, char* cParam1, bool bParam2) //Position: 0x112BB / 70331
{
	char* cVar0[32];
	
	if (!Function_166(3))
	{
		return;
	}
	if (Function_14())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (&bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_345())
						{
							Function_168(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_168(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_168(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_345())
					{
						Function_168(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_168(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_168(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_168(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

bool Function_345() //Position: 0x113D1 / 70609
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_381(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_346(struct<1049> Param0) //Position: 0x11401 / 70657
{
	return !Function_381(Param0.f_1048, 16384);
}

var Function_347(struct<921> Param0) //Position: 0x11414 / 70676
{
	return Param0.f_920;
}

int Function_348(struct<1085> Param0) //Position: 0x11420 / 70688
{
	Param0.f_1084 = Function_349(&Param0);
	Function_232(&Param0);
	return Param0.f_1084;
}

var Function_349(int iParam0) //Position: 0x1143E / 70718
{
	int iVar0;
	var uVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_371(0))
	{
		uVar1[0] = "Pass";
		uVar1[1] = "Fail";
		uVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_357(&iParam0 + 1052, &uVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_350();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_350();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_350();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_350() //Position: 0x114E6 / 70886
{
	Function_352();
	Function_351(10, 3);
	return;
}

void Function_351(int iParam0, int iParam1) //Position: 0x114F5 / 70901
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

void Function_352() //Position: 0x11642 / 71234
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_356())
	{
		Function_355(10, 3);
	}
	else
	{
		Function_353();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_104(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_104());
	UI_POP("nDebugMenu");
	return;
}

void Function_353() //Position: 0x1168D / 71309
{
	Function_354(25, 2);
	return;
}

void Function_354(int iParam0, int iParam1) //Position: 0x11699 / 71321
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

void Function_355(int iParam0, int iParam1) //Position: 0x118C5 / 71877
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

bool Function_356() //Position: 0x11A12 / 72210
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
				if (!Function_381(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_357(struct<17> Param0) //Position: 0x11A7A / 72314
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_370(&Var12, &Var0);
	uVar15 = Function_369(uParam1, &Var12);
	Function_368(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_367(&Param0, uVar15);
	Function_365(StackVal, &Param0, Var12.f_12);
	Function_363(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_362(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_359(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_358(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_358(int iParam0, int iParam1, int iParam2) //Position: 0x11B6E / 72558
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

bool Function_359(struct<17> Param0) //Position: 0x11BCE / 72654
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
				Function_361(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_361(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_358(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_360(Param1.f_64);
	}
	else
	{
		Function_360(Param1.f_64);
	}
	return 0;
}

void Function_360(bool bParam0) //Position: 0x11D61 / 73057
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

void Function_361(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x11D9F / 73119
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

var Function_362(int iParam0, struct<21> Param1) //Position: 0x11E55 / 73301
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_363(vector3 vParam0) //Position: 0x11E7C / 73340
{
	switch (Function_364())
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

int Function_364() //Position: 0x11F28 / 73512
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

void Function_365(vector3 vParam0) //Position: 0x11F64 / 73572
{
	switch (Function_366(&vParam0))
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

int Function_366(bool bParam0) //Position: 0x1200D / 73741
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_381(bParam0, 0x40000000))
		{
			Function_380(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_381(bParam0, 0x40000000))
		{
			Function_380(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_59(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_381(bParam0, 0x20000000))
		{
			Function_380(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_381(bParam0, 0x20000000))
		{
			Function_380(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_59(&bParam0, 0x20000000);
	return 0;
}

var Function_367(struct<21> Param0) //Position: 0x1212D / 74029
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

void Function_368(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x122E7 / 74471
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

var Function_369(int iParam0, struct<13> Param1) //Position: 0x12383 / 74627
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_370(struct<17> Param0) //Position: 0x1239F / 74655
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

bool Function_371(int iParam0) //Position: 0x123F9 / 74745
{
	if (!Function_372(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_372(int iParam0) //Position: 0x1240E / 74766
{
	if (iParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

void Function_373(int iParam0) //Position: 0x12435 / 74805
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1296))
	{
		strcpy(&cVar0, "transportStructLay", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&cVar0) };
		*(&iParam0 + 1296) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 1296))
		{
			LOG_ERROR("couldn't create library transport layout");
		}
		Function_59(&iParam0 + 1304, 1024);
	}
	return;
}

int Function_374(int iParam0, bool bParam1) //Position: 0x124C0 / 74944
{
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("TRANSPORT_ADD_ATTACK_TARGET - Attack data not initialized, tell Ben.");
		return 0;
	}
	return Function_271(&iParam0 + 1632, &bParam1);
}

void Function_375(int iParam0) //Position: 0x12528 / 75048
{
	Function_378(&iParam0 + 1632);
	Function_376(&iParam0 + 1632, &Global_54076);
	return;
}

void Function_376(int iParam0, int iParam1) //Position: 0x12544 / 75076
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		Function_377(&iParam0 + 80, 2, GET_OBJECT_FROM_ACTOR(&iParam1), 4, 1);
	}
	return;
}

int Function_377(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1256C / 75116
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar2 = SQUAD_GET_SIZE(&uParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_34(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(&uParam0);
		return 1;
	}
	return 0;
}

void Function_378(int iParam0) //Position: 0x125CF / 75215
{
	Function_379(&iParam0);
	return;
}

void Function_379(int iParam0) //Position: 0x125DB / 75227
{
	if (IS_ACTORSET_VALID(&iParam0 + 64))
	{
		DISBAND_ACTORSET(&iParam0 + 64);
	}
	return;
}

void Function_380(bool bParam0, int iParam1) //Position: 0x125F7 / 75255
{
	bParam0 = (bParam0 || iParam1);
	return;
}

bool Function_381(bool bParam0, bool bParam1) //Position: 0x12608 / 75272
{
	return (bParam0 && bParam1) == 0;
}

bool Function_382(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x12615 / 75285
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "SOL_GotPop") || !Function_381(uParam0, 524288))
	{
		if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (&iParam2 == GET_VEHICLE(&Global_54076))
			{
				if (!Function_381(uParam0, 262144))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_509("sol_FTE_returnWagonObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_returnWagonObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
					Function_380(&uParam0, 262144);
				}
				DECOR_SET_BOOL(&Global_54076, "nPrintHelp", true);
				DECOR_SET_BOOL(&Global_54076, "SOL_aggroInWagon", true);
				if (IS_BLIP_VALID(&uParam1))
				{
					REMOVE_BLIP(&uParam1);
				}
				Function_64(&uParam4, 1);
				return 1;
			}
		}
		if (!Function_381(uParam0, 131072))
		{
			if (SQUAD_IS_VALID(&uParam3))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uParam3) == 0)
				{
					if (!IS_BLIP_VALID(&uParam1))
					{
						uParam1 = ADD_BLIP_FOR_ACTOR(&iParam2, 325, 0, 2, 0);
						DECOR_SET_FLOAT(&Global_54076, "ThanksMessage", GET_CURRENT_GAME_TIME());
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_509("sol_FTE_GetInWagonObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_GetInWagonObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
						if (IS_ACTOR_VALID(&uParam5))
						{
							if (IS_ACTOR_ALIVE(&uParam5))
							{
								ACTOR_START_FORCE_HOLSTER(&uParam5, 0, 0);
								TASK_CLEAR(&uParam5);
								TASK_PRIORITY_SET(&uParam5, true);
								bVar0 = TASK_SEQUENCE_OPEN();
								TASK_FACE_ACTOR(false, &Global_54076, 0, 3212836864);
								TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&uParam5, bVar0);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam5)))
								{
									REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam5));
								}
							}
						}
						Function_380(&uParam0, 131072);
					}
				}
			}
		}
	}
	return 0;
}

void Function_383(var uParam0, bool bParam1) //Position: 0x128CE / 75982
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
	else if (!&bParam1 || Function_307(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

var Function_384(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x12938 / 76088
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_395(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nSOL_Intro", 2, 1);
	}
	Function_385(&uVar0);
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

void Function_385(int iParam0) //Position: 0x129BB / 76219
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_387(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_386(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1.0f, 1);
	return;
}

void Function_386(int iParam0) //Position: 0x12A05 / 76293
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,97088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3851,368f, 8,977757f, 3697,214f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,042171f, -0,108678f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_387(float fParam0) //Position: 0x12A7A / 76410
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 51,97088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-3853,791f, 8,977757f, 3696,826f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,049323f, 0,297922f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_388(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, char* cParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x12AEF / 76527
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
	Function_202();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_104();
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
			if (IS_VOLUME_VALID(&cParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&cParam7);
				DELETE_PROJECTILES_IN_VOLUME(&cParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_392(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_395(), 2, Function_392(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_139(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_391()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_391()));
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
	if (Function_390(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_389(0x4000000);
	}
	if (Function_390(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_389(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_389(bool bParam0) //Position: 0x12DA1 / 77217
{
	bool bVar0;
	
	if (Function_381(bParam0, 1) && Function_381(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_390(int iParam0) //Position: 0x12DD5 / 77269
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_391() //Position: 0x12DF1 / 77297
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

struct<8> Function_392(int iParam0) //Position: 0x12E7F / 77439
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_393(int iParam0, int iParam1) //Position: 0x12E91 / 77457
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_21(iParam0))
	{
		Function_82();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_20(iParam0);
	if (StackVal != 2)
	{
		Function_16("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_96(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_18(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

int Function_394(int iParam0) //Position: 0x12FA2 / 77730
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_395() //Position: 0x12FBC / 77756
{
	bool bVar0;
	
	return &bVar0;
}

bool Function_396(float fParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x12FC5 / 77765
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&fParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&fParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&fParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&fParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&fParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&fParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &fParam1, &fParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_383(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_307(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_307(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_397(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_397(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&fParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_397(vector3 vParam0) //Position: 0x131FA / 78330
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_45(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_45(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_398(var uParam0, var uParam1) //Position: 0x13270 / 78448
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_269(&uParam0);
		Var0 = Function_269(&uParam0);
		Function_399(&uParam1);
		Var2 = Function_399(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_399(var uParam0) //Position: 0x132EE / 78574
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_400() //Position: 0x13300 / 78592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "SoloFolly_ThanxPlayer", "SoloFolly_ThanxPlayer", false, 3, 1, 0, 1);
		Function_90(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_401(float fParam0, bool bParam1) //Position: 0x13353 / 78675
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

bool Function_402(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13448 / 78920
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

float Function_403(vector3 vParam0) //Position: 0x13468 / 78952
{
	if (Function_475(&vParam0))
	{
		if (Function_340(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_404(var uParam0, int iParam1) //Position: 0x13535 / 79157
{
	if (!iLocal_32)
	{
		if (IS_ACTOR_VALID(&uParam0))
		{
			if (IS_ACTOR_ALIVE(&uParam0))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe"))
				{
					ACTOR_END_FORCE_HOLSTER(&uParam0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam0, 0);
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					TASK_CLEAR(&uParam0);
					MEMORY_CONSIDER_AS(&uParam0, &Global_54076, 4);
					MEMORY_IDENTIFY(&uParam0, &Global_54076);
					SQUAD_SET_FACTION(&iParam1, 19);
					TASK_KILL_CHAR(&uParam0, &Global_54076);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
					{
						ADD_BLIP_FOR_ACTOR(&uParam0, 322, 0, 2, 0);
					}
					SAY_SINGLE_LINE_STRING(&uParam0, "TOUGH_02", false, false, 3, 0, true, false);
					iLocal_32 = 1;
				}
			}
		}
	}
	return;
}

void Function_405(var uParam0, int iParam1) //Position: 0x135EF / 79343
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_406(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_475(&iParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_403(&iParam1);
		}
	}
	return;
}

var Function_406(int iParam0) //Position: 0x13632 / 79410
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_407(struct<2049> Param0) //Position: 0x13665 / 79461
{
	struct<2> Var0;
	bool bVar2;
	
	Function_373(&Param0);
	if (!Function_438(&Param0))
	{
		LOG_ERROR("TRANSPORT Invalid scene creation. Ending.");
		return 0;
	}
	Param0.f_1616 = 0;
	switch (Function_318(&Param0))
	{
		case 0x00000002:
			Function_493(&Param0, 0);
			break;
		
		case 0x00000003:
		case 0x00000001:
			switch (Param0.f_1104)
			{
				case 0x00000000:
					Function_492(&Param0, RAND_INT_RANGE(5, 5));
					Function_491(&Param0, 2, 3);
					Function_490(&Param0, 14.0f);
					Function_489(&Param0, 28.0f);
					break;
				
				case 0x00000001:
					Function_492(&Param0, RAND_INT_RANGE(8, 8));
					Function_491(&Param0, 3, 4);
					Function_490(&Param0, 12.0f);
					Function_489(&Param0, 24.0f);
					break;
				
				case 0x00000002:
					Function_492(&Param0, RAND_INT_RANGE(12, 12));
					Function_491(&Param0, 4, 6);
					Function_490(&Param0, 10.0f);
					Function_489(&Param0, 20.0f);
					break;
				
				default:
					Function_492(&Param0, RAND_INT_RANGE(8, 8));
					Function_491(&Param0, 3, 4);
					Function_490(&Param0, 12.0f);
					Function_489(&Param0, 24.0f);
					break;
			}
			Function_374(&Param0, &Global_54076);
			Function_488(&Param0, 30.0f, 60.0f, 0x41700000);
			Function_493(&Param0, 1);
			bVar2 = false;
			while (bVar2 < (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) - 1))
			{
				if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar2, &Param0 + 1408)))
				{
					Function_374(&Param0, GET_DRAFT_ACTOR(bVar2, &Param0 + 1408));
				}
				bVar2++;
			}
			break;
		
		default:
			Function_493(&Param0, 1);
			Function_374(&Param0, &Global_54076);
			break;
	}
	if (Function_318(&Param0) == 3)
	{
		*(&Param0 + 1432[0]) = DECOR_GET_OBJECT(&Param0 + 1408, "tranExplo0");
		*(&Param0 + 1432[1]) = DECOR_GET_OBJECT(&Param0 + 1408, "tranExplo1");
		*(&Param0 + 1432[2]) = DECOR_GET_OBJECT(&Param0 + 1408, "tranExplo2");
	}
	Function_231(&Param0);
	if (Function_45(StackVal, Function_231(&Param0)))
	{
		LOG_ERROR("Must set a start position using TRANSPORT_SET_STARTPOS");
		return 0;
	}
	if (Param0.f_1096 != 0 || Param0.f_1096 != 4294967295)
	{
		Param0.f_1096 = 4;
	}
	if (!IS_VOLUME_VALID(&Param0 + 1496))
	{
		LOG_ERROR("Use TRANSPORT_SET_DESTINATION_VOLUME/REGION before initializing");
	}
	if (Param0.f_1492 == 0)
	{
		Param0.f_1492 = 4294967294;
	}
	if (Param0.f_2044 != 0.0f && Param0.f_2048 != 0.0f)
	{
		Param0.f_2044 = 12.0f;
		Param0.f_2048 = 24.0f;
	}
	Function_59(&Param0 + 1304, 1048576);
	Function_59(&Param0 + 1304, 2097152);
	Function_59(&Param0 + 1304, 0x1000000);
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Param0 + 1544, 0,1f);
	}
	if (IS_ACTOR_VALID(&Param0 + 1560))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Param0 + 1560, 0,1f);
	}
	Function_433(&Param0, Function_434(0, 2, 2));
	Function_432(&Param0, 1);
	Function_291(&Param0, 13);
	Function_431(&Param0, 2);
	Function_482(&Param0 + 1408);
	Var0 = Function_482(&Param0 + 1408);
	Function_294(StackVal, &Param0, Var0);
	Function_410(StackVal, &Param0, &Param0 + 1544, 396, Var0, 1, 1, 0);
	Function_380(&Param0 + 1304, 64);
	Function_26(56);
	Function_408(4);
	return 1;
}

void Function_408(int iParam0) //Position: 0x13A52 / 80466
{
	Function_409(&Global_43580, iParam0);
	return;
}

void Function_409(var uParam0, bool bParam1) //Position: 0x13A60 / 80480
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_410(struct<1093> Param0) //Position: 0x13A88 / 80520
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_430(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_45(StackVal, Param3))
	{
		*(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_380(&Param0 + 1048, 4);
	}
	else
	{
		Function_59(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_19(Param0.f_1092))
		{
			Function_429(Param0.f_1092, 1);
			Function_380(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_380(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_414(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_413(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_472(&Param0 + 1032);
	}
	Function_472(&Param0 + 60);
	Function_411(0);
}

void Function_411(int iParam0) //Position: 0x13BFF / 80895
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_412(105)), 0);
	return;
}

int Function_412(int iParam0) //Position: 0x13C22 / 80930
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_413(var uParam0, bool bParam1) //Position: 0x13C39 / 80953
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

void Function_414(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x13C80 / 81024
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_427(10.0f);
	Var12 = { StackVal, Function_427(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_252(&bParam4) || &bParam4 != 0)
		{
			bVar14 = Function_417(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &bParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_415(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_415(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_415(vector3 vParam0) //Position: 0x13D7A / 81274
{
	struct<2> Var0;
	
	if (!Function_416(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_416(int iParam0) //Position: 0x13EC7 / 81607
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

var Function_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x13EEB / 81643
{
	return Function_418(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_418(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x13F08 / 81672
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_421(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_421(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_421(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_421(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_421(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_421(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_421(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_421(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_421(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_421(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_421(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_421(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_421(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_421(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_419(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_419(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x1416D / 82285
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_420(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_420(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_420(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_420(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_420(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_420(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_420(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_420(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_420(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_420(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_420(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_420(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_420(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_420(&(Global_46972[13]), &bVar0);
	}
	return Function_421(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_420(var uParam0, bool bParam1) //Position: 0x142DC / 82652
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_421(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x143A0 / 82848
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_426();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_252(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_425(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_425(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_424(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_252(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_424(bVar0))
				{
					Function_423();
				}
				Function_422(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_252(bVar1))
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

void Function_422(int iParam0) //Position: 0x14699 / 83609
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

void Function_423() //Position: 0x1474D / 83789
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

bool Function_424(bool bParam0) //Position: 0x14788 / 83848
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

void Function_425(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x147B5 / 83893
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

void Function_426() //Position: 0x14910 / 84240
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_423();
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
	Function_423();
	return;
}

struct<8> Function_427(int iParam0) //Position: 0x1495C / 84316
{
	Function_428(iParam0, 10);
	return StackVal, Function_428(iParam0, 10);
}

struct<8> Function_428(var uParam0, int iParam1) //Position: 0x14969 / 84329
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_429(int iParam0, int iParam1) //Position: 0x14984 / 84356
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_21(iParam0))
	{
		Function_82();
		return;
	}
	iVar0 = Function_20(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_96(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_18(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_430(int iParam0) //Position: 0x14A2B / 84523
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&cVar0, "procMisslayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&cVar0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_431(struct<917> Param0) //Position: 0x14AA6 / 84646
{
	Param0.f_916 = iParam1;
	return;
}

void Function_432(struct<913> Param0) //Position: 0x14AB4 / 84660
{
	Param0.f_912 = iParam1;
	return;
}

void Function_433(struct<1093> Param0) //Position: 0x14AC2 / 84674
{
	if (Function_19(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_380(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_434(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14B19 / 84761
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_437(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_435(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_435(bParam0, bParam1, bParam2, 4294967295);
}

int Function_435(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x14B77 / 84855
{
	var uVar0;
	
	if (!Function_325(bParam2))
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
	uVar0 = Function_437(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_436(uVar0);
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

var Function_436(int iParam0) //Position: 0x14CDB / 85211
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

var Function_437(int iParam0, int iParam1, int iParam2) //Position: 0x14D19 / 85273
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_438(struct<1569> Param0) //Position: 0x14D39 / 85305
{
	var uVar0;
	int iVar1;
	var uVar2;
	char* cVar6[32];
	struct<2> Var14;
	struct<2> Var16;
	var uVar18;
	var uVar20;
	bool bVar22;
	
	uVar2 = 3;
	Function_470();
	if (Function_45(StackVal, Function_470()))
	{
		if (!Function_467(&Param0))
		{
			LOG_ERROR("TRANSPORT could not find a suitable starting position");
			return 0;
		}
	}
	Function_470();
	Function_466(StackVal, StackVal, &Param0, Function_470(), Vector(0.0f, 0.0f, 0.0f));
	Function_231(&Param0);
	if (StackVal || Function_45(!IS_LAYOUTREF_VALID(&Param0 + 1296), Function_231(&Param0)))
	{
		return 0;
	}
	if (!Function_319() != 4294967295)
	{
		Function_465(&Param0, Function_319());
	}
	if (IS_ACTOR_VALID(Function_464()))
	{
		Function_463(&Param0, Function_464());
		GIVE_OBJECT_TO_LAYOUT(&Param0 + 1408, &Param0 + 1296);
	}
	if (!Function_381(Param0.f_1304, 16384))
	{
		if (Function_252(Param0.f_1416) && !Param0.f_1416 != 0)
		{
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transVeh") };
			Function_231(&Param0);
			*(&Param0 + 1408) = Function_459(StackVal, StackVal, &Param0 + 1296, &cVar6, Param0.f_1416, 977, Function_231(&Param0), *(&Param0 + 1476), 1, 976, 976, 976, 4);
			Function_231(&Param0);
			uVar18 = Function_231(&Param0);
			strcpy(&cVar6, GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_1416), 32);
		}
		else
		{
			return 0;
		}
	}
	if (!Function_381(Param0.f_1304, 16384))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1408))
		{
			return 0;
		}
	}
	bVar22 = false;
	while (bVar22 < (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) - 1))
	{
		uVar0 = GET_DRAFT_ACTOR(bVar22, &Param0 + 1408);
		if (IS_ACTOR_VALID(&uVar0))
		{
			SET_ACTOR_CAN_BE_HARDLOCKED(&uVar0, 0);
		}
		bVar22++;
	}
	if (Param0.f_1096 != 3 && !Function_381(Param0.f_1304, 16384))
	{
		Function_457(&Param0 + 1408, &uVar2);
	}
	Function_455(&Param0, Function_456());
	Function_453(&Param0, Function_454());
	if (IS_ACTOR_VALID(Function_452()))
	{
		Function_451(&Param0, Function_452());
	}
	else if (Function_252(Function_450()))
	{
		Function_449(&Param0, Function_450());
	}
	if (Function_381(Param0.f_1304, 8))
	{
		if (IS_ACTOR_VALID(Function_452()))
		{
			Function_451(&Param0, Function_452());
		}
		if (!Function_381(Param0.f_1304, 8192))
		{
			if (!Function_252(Param0.f_1552))
			{
				LOG_ERROR("Invalid transport companion actorenum?");
				Param0.f_1552 = Function_417(4, 0, 0, 4294967295, 0);
			}
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportComp") };
			Var14 = 3.0f;
			Var14.f_4 = 3.0f;
			Var14.f_8 = 1.0f;
			Function_127();
			Var16 = Function_127();
			*(&Param0 + 1544) = Function_447(StackVal, StackVal, &Param0 + 1296, &cVar6, Param0.f_1552, Var14, Var16, GET_OBJECT_FROM_ACTOR(&Param0 + 1408));
		}
		if (!IS_ACTOR_VALID(&Param0 + 1544))
		{
			return 0;
		}
		MEMORY_CONSIDER_AS(&Param0 + 1544, &Global_54076, 5);
		MEMORY_IDENTIFY(&Param0 + 1544, &Global_54076);
		MEMORY_REPORT_POSITION_AUTO(&Param0 + 1544, &Global_54076, true);
		SET_ACTOR_CAN_BE_HARDLOCKED(&Param0 + 1544, 0);
		SET_ACTOR_UPDATE_PRIORITY(&Param0 + 1544, false);
		TASK_CLEAR(&Param0 + 1544);
		MAKE_ACTOR_READY_FOR_ACTION(&Param0 + 1544, 1);
	}
	if (IS_OBJECTSET_VALID(Function_446()))
	{
		*(&Param0 + 1576) = Function_446();
	}
	if (IS_ACTOR_VALID(Function_445()))
	{
		Function_443(&Param0, Function_445());
	}
	else if (Function_252(Function_442()))
	{
		Function_441(&Param0, Function_442());
	}
	if (Function_381(Param0.f_1304, 16))
	{
		if (IS_ACTOR_VALID(Function_445()))
		{
			Function_443(&Param0, Function_445());
		}
		if (!Function_381(Param0.f_1304, 4096))
		{
			if (!Function_252(Param0.f_1568))
			{
				LOG_ERROR("Invalid transport passenger actorenum?");
				Param0.f_1568 = Function_417(2, 0, 0, 4294967295, 0);
			}
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transportPass") };
			Var14 = 3.0f;
			Var14.f_4 = 3.0f;
			Var14.f_8 = 1.0f;
			Function_127();
			Var16 = Function_127();
			*(&Param0 + 1560) = Function_447(StackVal, StackVal, &Param0 + 1296, &cVar6, Param0.f_1568, Var14, Var16, GET_OBJECT_FROM_ACTOR(&Param0 + 1408));
		}
		if (!IS_ACTOR_VALID(&Param0 + 1560))
		{
			return 0;
		}
		if (Param0.f_1096 == 1)
		{
			Function_440(&Param0);
		}
		else if (Param0.f_1096 == 2)
		{
			Function_439(&Param0);
		}
		MEMORY_CONSIDER_AS(&Param0 + 1560, Function_104(), 5);
		MEMORY_IDENTIFY(&Param0 + 1560, Function_104());
		MEMORY_REPORT_POSITION_AUTO(&Param0 + 1560, Function_104(), true);
		DELETE_ALL_INVENTORY_FROM_ACTOR(&Param0 + 1560);
		SET_ACTOR_CAN_BE_HARDLOCKED(&Param0 + 1560, 0);
		TASK_CLEAR(&Param0 + 1560);
	}
	if (Param0.f_1096 == 1)
	{
		cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("transCorpse") };
		GET_OBJECT_RELATIVE_POSITION(StackVal, GET_OBJECT_FROM_ACTOR(&Param0 + 1544), Vector(1.0f, 0.0f, 0.0f), &uVar18);
		GET_OBJECT_RELATIVE_POSITION(StackVal, GET_OBJECT_FROM_ACTOR(&Param0 + 1544), Vector(0.0f, 0.0f, -1.0f), &uVar20);
		if (FIND_GROUND_INTERSECTION(&uVar18, 50.0f, &Var14, &Var16))
		{
			iVar1 = CREATE_CORPSE_IN_LAYOUT(&Param0 + 1296, &cVar6, Param0.f_1552, Var14, Var16, "dead_ground_male", "inj_deadpose_1");
		}
		else if (FIND_GROUND_INTERSECTION(&uVar20, 50.0f, &Var14, &Var16))
		{
			iVar1 = CREATE_CORPSE_IN_LAYOUT(&Param0 + 1296, &cVar6, Param0.f_1552, Var14, Var16, "dead_ground_male", "inj_deadpose_1");
		}
		if (!IS_OBJECT_VALID(&iVar1))
		{
		}
	}
	return 1;
}

int Function_439(int iParam0) //Position: 0x152F6 / 86774
{
	char* cVar0[32];
	struct<2> Var8;
	char* cVar10[8];
	
	if (IS_ACTOR_VALID(&iParam0 + 1560))
	{
		strcpy(&cVar0, "ntranslook", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502(&cVar0) };
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		cVar10 = Vector(0.0f, 0.0f, 0.0f);
		TASK_CLEAR(&iParam0 + 1560);
		TASK_STAND_STILL(&iParam0 + 1560, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&iParam0 + 1560, true);
		Var8 = Vector(0.0f, 1,35f, 0,4f);
		cVar10 = Vector(0.0f, 0.0f, 0.0f);
		*(&iParam0 + 1424) = ATTACH_OBJECTS_NO_DRV(&iParam0 + 1560, GET_OBJECT_FROM_ACTOR(&iParam0 + 1408), Function_395(), Var8, cVar10);
		SET_ANIM_SET_FOR_ACTOR(&iParam0 + 1560, "lay_wounded_psg", 0);
		SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 1560, "lay_wounded_psg/1");
		return 1;
	}
	return 0;
}

int Function_440(int iParam0) //Position: 0x153CF / 86991
{
	if (!IS_ACTOR_VALID(&iParam0 + 1560))
	{
		return 0;
	}
	SET_ACTOR_IN_VEHICLE(&iParam0 + 1560, &iParam0 + 1408, 2);
	TASK_CLEAR(&iParam0 + 1560);
	TASK_STAND_STILL(&iParam0 + 1560, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iParam0 + 1560, true);
	return 1;
}

int Function_441(struct<1569> Param0) //Position: 0x1541B / 87067
{
	if (!Function_252(bParam1))
	{
		return 0;
	}
	Param0.f_1568 = bParam1;
	return 1;
}

bool Function_442() //Position: 0x15435 / 87093
{
	return DECOR_GET_INT(Function_57(), "trnsPassengerAE");
}

int Function_443(struct<1569> Param0) //Position: 0x15453 / 87123
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	*(&Param0 + 1560) = &iParam1;
	Param0.f_1568 = Function_444(GET_OBJECT_FROM_ACTOR(&iParam1));
	Function_380(&Param0 + 1304, 4096);
	GIVE_OBJECT_TO_LAYOUT(&Param0 + 1560, &Param0 + 1296);
	return 1;
}

var Function_444(bool bParam0) //Position: 0x1549D / 87197
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bParam0));
	}
	return 4294967295;
}

int Function_445() //Position: 0x154BA / 87226
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_57(), "trnsPassenger"));
}

var Function_446() //Position: 0x154D9 / 87257
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_57(), "trnsNecActors"));
}

var Function_447(var uParam0, char* cParam1, bool bParam2, struct<2> Param3, struct<2> Param5, bool bParam7) //Position: 0x154F8 / 87288
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Param3;
	Var2 = Param5;
	Function_448(&bParam7, 0, &Var0, &Var2);
	uVar4 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &cParam1, bParam2, Var0, Var2);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&uVar4), 50.0f, false, 1092616192);
	return &uVar4;
}

void Function_448(var uParam0, bool bParam1, struct<2> Param2) //Position: 0x15547 / 87367
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_397(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

int Function_449(struct<1553> Param0) //Position: 0x15674 / 87668
{
	if (!Function_252(iParam1))
	{
		return 0;
	}
	Param0.f_1552 = iParam1;
	return 1;
}

int Function_450() //Position: 0x1568E / 87694
{
	return DECOR_GET_INT(Function_57(), "trnsCompanionAE");
}

int Function_451(struct<1553> Param0) //Position: 0x156AC / 87724
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	*(&Param0 + 1544) = &iParam1;
	Param0.f_1552 = Function_444(GET_OBJECT_FROM_ACTOR(&iParam1));
	Function_380(&Param0 + 1304, 8192);
	GIVE_OBJECT_TO_LAYOUT(&Param0 + 1544, &Param0 + 1296);
	return 1;
}

int Function_452() //Position: 0x156F6 / 87798
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_57(), "trnsCompanion"));
}

void Function_453(int iParam0, int iParam1) //Position: 0x15715 / 87829
{
	if (&iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 16);
	}
	else
	{
		Function_59(&iParam0 + 1304, 16);
	}
	return;
}

int Function_454() //Position: 0x1573B / 87867
{
	if (DECOR_CHECK_EXIST(Function_57(), "trnsNeedPass"))
	{
		return DECOR_GET_BOOL(Function_57(), "trnsNeedPass");
	}
	return 0;
}

void Function_455(int iParam0, int iParam1) //Position: 0x15773 / 87923
{
	if (&iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 8);
	}
	else
	{
		Function_59(&iParam0 + 1304, 8);
	}
	return;
}

int Function_456() //Position: 0x15799 / 87961
{
	if (DECOR_CHECK_EXIST(Function_57(), "trnsNeedComp"))
	{
		return DECOR_GET_BOOL(Function_57(), "trnsNeedComp");
	}
	return 0;
}

void Function_457(var uParam0, var[] uParam1) //Position: 0x157D1 / 88017
{
	var uVar0;
	var uVar1[3];
	struct<2> Var5;
	struct<2> Var7[3];
	struct<2> Var14[3];
	struct<4> Var21[3];
	var uVar34[3];
	int iVar38;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	uVar0 = Function_458(GET_OBJECT_FROM_ACTOR(&uParam0));
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		GET_POSITION(&uParam0, &Var5);
		Var7[02] = Vector(0,1f, 1,22f, 0.0f);
		Var7[12] = Vector(0,05f, 1,22f, 0,3f);
		Var7[22] = Vector(-0,1f, 1,22f, 0,45f);
		Var14[02] = Vector(0.0f, 0.0f, 0.0f);
		Var14[12] = Vector(0.0f, 95.0f, 0.0f);
		Var14[22] = Vector(0.0f, -135.0f, 0.0f);
		memcpy(&(Var21[04]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntransTntA"), 4);
		memcpy(&(Var21[14]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntransTntB"), 4);
		memcpy(&(Var21[24]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_502("ntransTntC"), 4);
		uVar34[0] = "tranExplo0";
		uVar34[1] = "tranExplo1";
		uVar34[2] = "tranExplo2";
		iVar38 = 0;
		while (iVar38 < 2)
		{
			if (!IS_OBJECT_VALID(&(uVar1[iVar38])))
			{
				uVar1[iVar38] = CREATE_PROP_IN_LAYOUT(StackVal, &uVar0, &(Var21[iVar384]), "$/fragments/p_gen_crateTnt01x", Var5, Vector(0.0f, 0.0f, 0.0f), true);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&(uVar1[iVar38]), &uParam0, false);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uVar1[iVar38]), 0);
				uParam1[iVar38] = &uVar1[iVar38];
				if (IS_OBJECT_VALID(&(uVar1[iVar38])))
				{
					ATTACH_OBJECTS(&(uVar1[iVar38]), &uParam0, Function_395(), Var7[iVar382], Var14[iVar382], 4294967295);
					GIVE_OBJECT_TO_ACTOR(&(uVar1[iVar38]), &uParam0);
					DECOR_SET_OBJECT(&uParam0, &(uVar34[iVar38]), &(uVar1[iVar38]));
				}
			}
			iVar38++;
		}
	}
	else
	{
		LOG_ERROR("TRANSPORT_ATTACH_EXPLOSIVES got an invalid layout from the object.");
	}
	return;
}

var Function_458(bool bParam0) //Position: 0x15A1E / 88606
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (GET_OBJECT_TYPE(&bParam0) == 1)
		{
			iVar0 = GET_LAYOUT_FROM_OBJECT(&bParam0);
		}
		while (!IS_LAYOUTREF_VALID(&iVar0) && IS_OBJECT_VALID(&bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(&bParam0);
			if (GET_OBJECT_TYPE(&bParam0) == 1)
			{
				iVar0 = GET_LAYOUT_FROM_OBJECT(&bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	return "";
}

var Function_459(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x15A85 / 88709
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
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
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
			if (Function_462(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_461(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_460(bVar16, &iVar1))
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

bool Function_460(int iParam0, bool[] bParam1) //Position: 0x15CD8 / 89304
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

var Function_461(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x15D0C / 89356
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_462(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x15D28 / 89384
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

int Function_463(struct<1417> Param0) //Position: 0x15D54 / 89428
{
	if (!IS_ACTOR_VALID(&cParam1))
	{
		return 0;
	}
	(&Param0 + 1408) = &cParam1;
	Param0.f_1416 = Function_444(GET_OBJECT_FROM_ACTOR(&cParam1));
	Function_380(&Param0 + 1304, 16384);
	return 1;
}

var Function_464() //Position: 0x15D8C / 89484
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_57(), "trnsVehicle"));
}

int Function_465(struct<1097> Param0) //Position: 0x15DA9 / 89513
{
	if (!Param0.f_1096 != 0)
	{
		return 0;
	}
	if (iParam1 > 5)
	{
		LOG_ERROR("Invalid mission type passed to TRANSPORT_SET_MISSION_TYPE");
		return 0;
	}
	Param0.f_1096 = iParam1;
	return 1;
}

int Function_466(int iParam0, struct<2> Param1, struct<2> Param3) //Position: 0x15E0D / 89613
{
	if (Function_45(StackVal, Param1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_294(StackVal, &iParam0, Param1);
	*(&iParam0 + 1464) = Param1;
	*(&iParam0 + 1476) = Param3;
	return 1;
}

bool Function_467(bool bParam0) //Position: 0x15E5A / 89690
{
	struct<8> Var0;
	struct<6> Var8;
	struct<2> Var14;
	var uVar16;
	int iVar18;
	struct<2> Var19;
	var uVar21;
	var uVar23;
	var uVar25;
	
	Function_231(&bParam0);
	if (Function_45(StackVal, Function_231(&bParam0)))
	{
		iVar18 = 0;
		Function_264(&Var0, 1, 5.0f, 64, 4294967295);
		Function_263(StackVal, &Var8, 0, Var14, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
		Var14 = Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
		while (Function_45(StackVal, Var14) && iVar18 > 10)
		{
			Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
			Var14 = Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
			if (Function_45(StackVal, Var14))
			{
				iVar18++;
			}
			else
			{
				iVar18 = 100;
			}
		}
		if (Function_45(StackVal, Var14))
		{
			LOG_ERROR("Couldn't create spawn point for transport");
			return 0;
		}
		Function_231(&bParam0);
		Var14 = Function_231(&bParam0);
		if (!FIND_GROUND_INTERSECTION(&Var14, 100.0f, &Var14, &uVar16))
		{
			PRINTVECTOR(Var14);
		}
		Function_231(&bParam0);
		if (Function_468(StackVal, Function_231(&bParam0), 0.0f, 60.0f, &Var19, &uVar21, &uVar23, 0x41c80000, 0))
		{
			Function_231(&bParam0);
			uVar25 = Vector(StackVal, StackVal, StackVal) - Vector(Var19, Function_231(&bParam0), StackVal);
			*(&bParam0 + 1476) = Vector(0.0f, 0.0f, 0.0f);
			(&bParam0 + 1476)->f_4 = UNK_0x9C40E671(&uVar25);
		}
	}
	return 1;
}

bool Function_468(struct<2> Param0, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, float fParam7, bool bParam8) //Position: 0x15F84 / 89988
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	Function_127();
	Var0 = Function_127();
	bVar15 = -1.0f;
	if (&bParam8)
	{
		uVar5 = START_CURVE_QUERY(&Global_43578, Param0, 2096, fParam2, fParam3, 20.0f, 0);
	}
	else
	{
		uVar5 = START_CURVE_QUERY(&Global_43578, Param0, 16, fParam2, fParam3, 2.0f, 0);
	}
	if (!IS_CURVE_QUERY_VALID(&uVar5))
	{
		UNK_0xDF93BD7C(&uVar5);
	}
	else if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar5) < 0)
	{
		UNK_0xDF93BD7C(&uVar5);
	}
	else
	{
		iVar18 = GET_NUM_POINTS_IN_CURVE_QUERY(&uVar5);
		bVar16 = false;
		while (bVar16 < (iVar18 - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar5, bVar16, &vVar6);
			Function_469(&vVar6);
			Var2 = Function_469(&vVar6);
			if (bVar15 > 0.0f || bVar15 < VDIST(Param0, Var2))
			{
				vVar9 = { StackVal, StackVal, vVar6 };
				bVar15 = VDIST(Param0, Var2);
				bVar17 = bVar16;
				Var0 = Var2;
			}
			bVar16++;
		}
		uVar4 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar5, bVar17);
		uParam4 = Var0;
		if (&fParam7 >= 0.0f)
		{
			fParam7 = 25.0f;
		}
		if (IS_OBJECT_VALID(&uVar4))
		{
			UNK_0x19D652F9(&uVar4, &fParam7, &vVar9, &uVar12);
			Function_469(&uVar12);
			bParam5 = Function_469(&uVar12);
			UNK_0x19D652F9(&uVar4, -&fParam7, &vVar9, &uVar12);
			Function_469(&uVar12);
			fParam6 = Function_469(&uVar12);
		}
		else
		{
			Function_127();
			fParam6 = Function_127();
			Function_127();
			bParam5 = Function_127();
		}
		UNK_0xDF93BD7C(&uVar5);
		return 1;
	}
	return 0;
}

struct<8> Function_469(vector3 vParam0) //Position: 0x160D2 / 90322
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

struct<8> Function_470() //Position: 0x160F4 / 90356
{
	struct<2> Var0;
	
	Var0 = DECOR_GET_FLOAT(Function_57(), "trnsStartPosX");
	Var0.f_4 = DECOR_GET_FLOAT(Function_57(), "trnsStartPosY");
	Var0.f_8 = DECOR_GET_FLOAT(Function_57(), "trnsStartPosZ");
	return StackVal, Var0;
}

void Function_471(int iParam0, int iParam1) //Position: 0x1614A / 90442
{
	if (!Function_21(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_472(int iParam0) //Position: 0x16165 / 90469
{
	Function_473(&iParam0, 0.0f);
	return;
}

void Function_473(vector3 vParam0) //Position: 0x16172 / 90482
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_380(&vParam0, 1);
	Function_59(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_474(int iParam0) //Position: 0x16197 / 90519
{
	if (!Function_475(&iParam0))
	{
		Function_473(&iParam0, 0.0f);
	}
	return;
}

bool Function_475(int iParam0) //Position: 0x161AE / 90542
{
	return Function_381(iParam0, 1);
}

bool Function_476(var uParam0, int iParam1) //Position: 0x161BC / 90556
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_477(int iParam0) //Position: 0x161D9 / 90585
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_IGNORE_ACTOR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_478(var uParam0, var uParam1, int iParam2) //Position: 0x1621E / 90654
{
	bool bVar0;
	var uVar1;
	
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
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_203(&uVar1, &uParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

var Function_479(bool bParam0, bool bParam1) //Position: 0x16275 / 90741
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	if (!IS_LAYOUTREF_VALID(&bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return &iVar0;
	}
	uVar2 = CREATE_OBJECT_ITERATOR(&bParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 25);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3) && !bVar1)
	{
		uVar4 = GET_OBJECT_NAME(&iVar3);
		if (STRING_CONTAINS_STRING(&uVar4, &bParam0) || Function_480(&bParam0, &uVar4))
		{
			bVar1 = true;
			iVar0 = GET_SQUAD_FROM_OBJECT(&iVar3);
		}
		else
		{
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
	}
	DESTROY_ITERATOR(&uVar2);
	return &iVar0;
}

int Function_480(char* cParam0) //Position: 0x16331 / 90929
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, &cParam0, 64);
	strcpy(&cVar16, &cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

struct<8> Function_481(bool bParam0) //Position: 0x1635E / 90974
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

struct<8> Function_482(bool bParam0) //Position: 0x16387 / 91015
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

int Function_483(struct<1417> Param0) //Position: 0x163B0 / 91056
{
	if (!IS_ACTOR_VALID(&iParam1) || !IS_ACTOR_VEHICLE(&iParam1))
	{
		LOG_ERROR("TRANSPORT_SET_CUSTOM_VEHICLE recieved an invalid vehicle");
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		LOG_ERROR("TRANSPORT_SET_CUSTOM_VEHICLE - system already has a vehicle set");
		return 0;
	}
	*(&Param0 + 1408) = &iParam1;
	Param0.f_1416 = Function_444(GET_OBJECT_FROM_ACTOR(&iParam1));
	Function_380(&Param0 + 1304, 16384);
	return 1;
}

bool Function_484(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x16482 / 91266
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	bool bVar10;
	var uVar11;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	Var6 = Vector(0.0f, 0.0f, 0.0f);
	if (!Function_381(bParam3, 1))
	{
		Var8 = Vector(-3873,881f, 8,031f, 3659,863f);
		uParam1 = Function_459(StackVal, StackVal, &uParam0, Function_395(), 1199, 976, Var8, Vector(0.0f, 187,033f, 0.0f), 1, 976, 976, 976, 4);
		MEMORY_CONSIDER_AS(&uParam1, &Global_54076, false);
		uParam4 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uParam1, Function_395(), "ClimbOntoWagon", Vector(0.0f, 0.0f, 3,3f), Vector(0.0f, 0.0f, 0.0f)));
		bVar10 = false;
		while (bVar10 < (GET_NUM_DRAFTED_ACTORS(&uParam1) - 1))
		{
			if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar10, &uParam1)))
			{
				AI_DONT_HARM_ACTOR(GET_DRAFT_ACTOR(bVar10, &uParam1));
				SET_ACTOR_MAX_HEALTH(GET_DRAFT_ACTOR(bVar10, &uParam1), 50.0f);
				SET_ACTOR_HEALTH(GET_DRAFT_ACTOR(bVar10, &uParam1), GET_ACTOR_MAX_HEALTH(GET_DRAFT_ACTOR(bVar10, &uParam1)));
				Function_44(GET_DRAFT_ACTOR(bVar10, &uParam1), 0, 1, 1, 1, 0, 1);
			}
			bVar10++;
		}
		Var0 = -0,447f;
		Var0.f_4 = 1,12f;
		Var0.f_8 = 0,8f;
		GET_OBJECT_RELATIVE_POSITION(&uParam1, Var0, &Var4);
		GET_OBJECT_RELATIVE_ORIENTATION(&uParam1, Var2, &Var6);
		uParam2 = CREATE_PROP_IN_LAYOUT(&uParam0, Function_395(), "p_gen_safe02x", Var4, Var6, true);
		uVar11 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uParam2, Function_395(), "Player_Lockpick_Safe_NoProp", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)));
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uVar11), "SOL_Safe", false);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam2, &uParam1, false);
		SET_PROP_AI_OBSTACLE_ENABLED(&uParam2, 0);
		ATTACH_OBJECTS(&uParam2, &uParam1, Function_395(), Var0, Var2, 4294967295);
		Function_380(&bParam3, 1);
	}
	if (!Function_381(bParam3, 2))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("SOL_AA_Layout")))
		{
			DECOR_SET_BOOL(&Global_54076, "SOL_FTE_SquadReady", true);
			Function_380(&bParam3, 2);
			return 1;
		}
	}
	return 0;
}

void Function_485(struct<1969> Param0) //Position: 0x166C3 / 91843
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1968)
	{
		if ((*&Param0 + 1968)[iVar0] != 0 || !Function_252((*&Param0 + 1968)[iVar0]))
		{
			(*&Param0 + 1968)[iVar0] = iParam1;
			iVar0 = Param0.f_1968;
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

void Function_486(int iParam0, int iParam1) //Position: 0x16715 / 91925
{
	if (&iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 2048);
	}
	else
	{
		Function_59(&iParam0 + 1304, 2048);
	}
	return;
}

void Function_487(struct<2053> Param0) //Position: 0x1673D / 91965
{
	Param0.f_2052 = &iParam1;
	return;
}

void Function_488(int iParam0, float fParam1, float fParam2, int iParam3) //Position: 0x1674C / 91980
{
	Function_282(&iParam0 + 1632, fParam1, fParam2, &iParam3);
}

void Function_489(struct<2049> Param0) //Position: 0x16764 / 92004
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	Param0.f_2048 = fParam1;
	return;
}

void Function_490(struct<2045> Param0) //Position: 0x1677C / 92028
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	Param0.f_2044 = fParam1;
	return;
}

void Function_491(struct<2065> Param0) //Position: 0x16794 / 92052
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	if (iParam2 > 1 || iParam2 >= iParam1)
	{
		iParam2 = iParam1 + 1;
	}
	Param0.f_2060 = iParam1;
	Param0.f_2064 = iParam2;
	Function_380(&Param0 + 1304, 524288);
	return;
}

void Function_492(struct<2069> Param0) //Position: 0x167D3 / 92115
{
	if (bParam1 <= 0)
	{
		bParam1 = false;
	}
	Param0.f_2068 = bParam1;
	Function_380(&Param0 + 1304, 262144);
	return;
}

void Function_493(int iParam0, int iParam1) //Position: 0x167F7 / 92151
{
	if (iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 256);
	}
	else
	{
		Function_59(&iParam0 + 1304, 256);
	}
	return;
}

int Function_494(int iParam0, int iParam1) //Position: 0x1681E / 92190
{
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	*(&iParam0 + 1496) = &iParam1;
	return 1;
}

int Function_495(struct<1493> Param0) //Position: 0x1683E / 92222
{
	int iVar0;
	var uVar1;
	
	if (!Function_135(iParam1))
	{
		LOG_ERROR("Invalid region criteria passed to TRANSPORT_SET_DESTINATION_REGION");
		return (0 || !IS_VOLUME_VALID(&Global_44085[iParam19] + 8));
		LOG_ERROR("Invalid region volume found for to TRANSPORT_SET_DESTINATION_REGION");
		return 0;
	}
	Param0.f_1492 = iParam1;
	if (Function_318(&Param0) == 3)
	{
		if (iParam1 == Global_46760[0])
		{
			*(&Param0 + 1504) = Vector(-2137,573f, 16,097f, 2608,122f);
			*(&Param0 + 1604) = Vector(-2138,072f, 16,387f, 2605,557f);
		}
		else if (iParam1 == Global_46914[0])
		{
			*(&Param0 + 1504) = Vector(786,585f, 78,306f, 1318,052f);
			*(&Param0 + 1604) = Vector(781,586f, 78,479f, 1318,092f);
		}
		else if (iParam1 == Global_46816[0])
		{
			*(&Param0 + 1504) = Vector(-829,292f, 92,14f, 2404,836f);
			*(&Param0 + 1604) = Vector(-830,639f, 92,316f, 2401,437f);
		}
		else if (iParam1 == Global_46816[1])
		{
			*(&Param0 + 1504) = Vector(165,194f, 73,036f, 2203,197f);
			*(&Param0 + 1604) = Vector(166,894f, 73,755f, 2195,46f);
		}
		else if (iParam1 == Global_46866[0])
		{
			*(&Param0 + 1504) = Vector(-2749,39f, 31,862f, 4300,488f);
			*(&Param0 + 1604) = Vector(-2747,507f, 31,86f, 4297,798f);
		}
		else if (iParam1 == Global_46850[0])
		{
			*(&Param0 + 1504) = Vector(-4260,107f, 19,033f, 4465,096f);
			*(&Param0 + 1604) = Vector(-4262,798f, 18,816f, 4462,007f);
		}
		else if (iParam1 == Global_46926[1])
		{
			*(&Param0 + 1504) = Vector(-424,384f, 151,02f, 1614,085f);
			*(&Param0 + 1604) = Vector(-429,38f, 151,344f, 1615,145f);
		}
	}
	if (Function_135(Param0.f_1492) && &iParam2 != 1)
	{
		uVar1 = GET_VOLUME_FROM_OBJECT(Function_496(Param0.f_1492));
		if (IS_VOLUME_VALID(&uVar1))
		{
		}
		else
		{
			LOG_ERROR("Parking volume does not exist");
		}
	}
	if (IS_VOLUME_VALID(&uVar1) && &iParam2 != 1)
	{
		iVar0 = Function_494(&Param0, &uVar1);
	}
	else
	{
		iVar0 = Function_494(&Param0, &Global_44085[iParam19] + 8);
	}
	return iVar0;
}

var Function_496(int iParam0) //Position: 0x16B25 / 92965
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_135(iParam0))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 6);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(&iVar0)))
		{
			DESTROY_ITERATOR(&cVar1);
			return &iVar0;
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&cVar1);
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

void Function_497(int iParam0, int iParam1) //Position: 0x16BC5 / 93125
{
	if (&iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 4);
	}
	else
	{
		Function_59(&iParam0 + 1304, 4);
	}
	return;
}

void Function_498(int iParam0, int iParam1) //Position: 0x16BE9 / 93161
{
	if (&iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 2);
	}
	else
	{
		Function_59(&iParam0 + 1304, 2);
	}
	return;
}

void Function_499(int iParam0, int iParam1) //Position: 0x16C0D / 93197
{
	if (iParam1 == 1)
	{
		Function_380(&iParam0 + 1304, 1);
	}
	else
	{
		Function_59(&iParam0 + 1304, 1);
	}
	return;
}

int Function_500(var uParam0, struct<2> Param1, struct<2> Param3) //Position: 0x16C30 / 93232
{
	return Function_466(StackVal, StackVal, &uParam0, Param1, Param3);
}

var Function_501(var uParam0, int iParam1) //Position: 0x16C46 / 93254
{
	int iVar0;
	int iVar1;
	
	iVar1 = Function_319();
	if (iVar1 == 4294967295)
	{
		iVar0 = Function_465(&uParam0, iParam1);
	}
	else
	{
		iVar0 = Function_465(&uParam0, iVar1);
	}
	return iVar0;
}

struct<32> Function_502(struct<8> Param0) //Position: 0x16C70 / 93296
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_503("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_503(char* cParam0) //Position: 0x16CDC / 93404
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_504(struct<2>[] Param0) //Position: 0x16CFE / 93438
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_508();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_507(&(Param0[iVar02]), 8);
		}
		else if (Function_506())
		{
			iVar1 = 1;
			Function_507(&(Param0[iVar02]), 8);
		}
		Function_507(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_507(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_507(&(Param0[iVar02]), 2);
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
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_507(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_507(&(Param0[iVar02]), 2);
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
	Function_505();
	return 1;
}

void Function_505() //Position: 0x170C0 / 94400
{
	if (!Function_390(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_506() //Position: 0x17100 / 94464
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

void Function_507(struct<13> Param0) //Position: 0x1712E / 94510
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_508() //Position: 0x17141 / 94529
{
	if (!Function_390(128))
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

void Function_509(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x17183 / 94595
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
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_510(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x17218 / 94744
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	bool bVar5;
	var uVar6;
	
	GET_POSITION(&uParam1, &Var0);
	switch (uParam0)
	{
		case 0x00000001:
		case 0x00000010:
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&uParam2))
			{
				GET_POSITION(&uParam2, &Var2);
				if (VDIST(Var2, Var0) < 200.0f)
				{
					Function_511(&iParam3);
					return 0;
				}
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&uParam2))
			{
				GET_POSITION(&uParam2, &Var2);
				if (VDIST(Var2, Var0) < 75.0f)
				{
					Function_511(&iParam3);
					return 0;
				}
			}
			break;
	}
	if (!Function_218(Global_46760[0]))
	{
		if (IS_ACTOR_VALID(&uParam2))
		{
			bVar4 = true;
			bVar5 = false;
			while (bVar5 < 3)
			{
				uVar6 = GET_DRAFT_ACTOR(bVar5, &uParam2);
				if (IS_ACTOR_VALID(&uVar6))
				{
					if (IS_ACTOR_ALIVE(&uVar6))
					{
						bVar4 = false;
					}
				}
				bVar5++;
			}
			if (bVar4)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam2)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam2));
				}
				if (!iLocal_27)
				{
					Function_210("SOL_Help_KilledAnimals", 0, -1.0f, 1, 0, 0);
					Function_511(&iParam3);
					iLocal_27 = 1;
					return 0;
				}
			}
		}
	}
	return 1;
}

void Function_511(int iParam0) //Position: 0x17354 / 95060
{
	Function_342(&iParam0, 3);
	return;
}

void Function_512(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x17361 / 95073
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_513(int iParam0) //Position: 0x173EC / 95212
{
	Function_516(&iParam0, 1199, 2, 1);
	Function_516(&iParam0, 976, 3, 1);
	Function_516(&iParam0, 486, 3, 1);
	Function_516(&iParam0, 487, 3, 1);
	Function_516(&iParam0, 488, 3, 1);
	Function_516(&iParam0, 489, 3, 1);
	Function_516(&iParam0, 490, 3, 1);
	Function_516(&iParam0, 491, 3, 1);
	Function_516(&iParam0, 443, 3, 1);
	Function_514(&iParam0, "p_gen_safe02x", 0, 1);
	Function_514(&iParam0, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	Function_514(&iParam0, "Player_Lockpick_Safe_NoProp", 1, 0);
	Function_514(&iParam0, "ClimbOntoWagon", 1, 0);
	Function_514(&iParam0, "action_areas", 10, 0);
	Function_514(&iParam0, "stand_shakehands", 5, 0);
	Function_514(&iParam0, "custom/stand_shakehands", 8, 0);
	Function_514(&iParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_514(&iParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_514(&iParam0, "excited_return", 5, 0);
	Function_514(&iParam0, "custom/excited_return", 8, 0);
	Function_514(&iParam0, "nthank_you", 5, 0);
	Function_514(&iParam0, "custom/thank_you", 8, 0);
	return;
}

var Function_514(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1760C / 95756
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_515(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_507(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_515(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1764A / 95818
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_507(&(Param0[iVar02]), 4);
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

var Function_516(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x17719 / 96025
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_507(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_507(&(Param0[iVar02]), 8);
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

