//Decompiled with MagicRDR v1.0
//Function Count : 573
//Statics Count : 1206
//Natives Count : 720
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 14;
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
	var uLocal_64 = 1;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 2;
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
	var uLocal_120 = 2;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 3;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 3;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 5;
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
	var uLocal_162 = 6;
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
	int iLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 4;
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
	var uLocal_246 = 6;
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
	var uLocal_262 = 8;
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
	var uLocal_282 = 6;
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
	var uLocal_298 = 8;
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
	var uLocal_318 = 9;
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
	char[] cLocal_470[4] = 0;
	var uLocal_471 = 0;
	struct<6> Local_472 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 11;
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
	int iLocal_530 = 8;
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
	int iLocal_564 = 0;
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
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	bool bLocal_578 = false;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	bool bLocal_581 = false;
	var uLocal_582 = 0;
	bool bLocal_583 = false;
	var uLocal_584 = 0;
	int iLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	int iLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	float fLocal_593 = 0.0f;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	int iLocal_597[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	bool bLocal_611 = false;
	bool bLocal_612 = false;
	bool bLocal_613 = false;
	var uLocal_614 = 0;
	var uLocal_615 = 13;
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
	struct<15> Local_669[9];
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 5;
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
	var uLocal_839 = 5;
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
	var uLocal_869 = 5;
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
	var uLocal_899 = 5;
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
	var uLocal_929 = 5;
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
	bool bLocal_949 = false;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	bool bLocal_954 = false;
	int iLocal_955 = 0;
	bool bLocal_956 = false;
	bool bLocal_957 = false;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964[6] = { 0, 0, 0, 0, 0, 0 };
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
	struct<2> Local_984 = { 0, 0 } ;
	var uLocal_986 = 0;
	struct<2> Local_987 = { 0, 0 } ;
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
	bool bLocal_1002 = false;
	var uLocal_1003 = 0;
	bool bLocal_1004 = false;
	var uLocal_1005 = 0;
	bool bLocal_1006 = false;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	bool bLocal_1012 = false;
	bool bLocal_1013 = false;
	bool bLocal_1014 = false;
	int iLocal_1015[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	bool bLocal_1027 = false;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	int iLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	int iLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	int iLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	int iLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	int iLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	int iLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	int iLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	int iLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	int iLocal_1070[4] = { 0, 0, 0, 0 };
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	struct<149> Local_1096 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_472 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_576 = 99;
	iLocal_577 = 6;
	iLocal_564 = 1000;
	while (Function_231())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x3D / 61
{
	var uVar0;
	
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_581);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_583);
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		uVar0 = GET_MOUNT(&bLocal_581);
		if (IS_ACTOR_VALID(&uVar0))
		{
			DESTROY_ACTOR(&uVar0);
		}
	}
	Function_228(3, 1, 0, 1, 1);
	Function_227(&cLocal_470);
	Function_227(&iLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_226();
	Function_225();
	Function_195(bLocal_612, 1, 0, 1, 1, 1, 1, 1);
	if (iLocal_576 == 0)
	{
	}
	else if (iLocal_576 == 1)
	{
	}
	else if (iLocal_576 == 2)
	{
	}
	else if (iLocal_576 == 3)
	{
	}
	else if (iLocal_576 == 4)
	{
	}
	else if (iLocal_576 == 101)
	{
	}
	Function_189();
	Function_185(&iLocal_484);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_579))
	{
		DESTROY_ITERATOR(&uLocal_579);
	}
	RELEASE_LAYOUT_REF(&cLocal_470);
	if (bLocal_611)
	{
		Function_26(Local_472, 1, 1, 1, 0);
	}
	else if (bLocal_612)
	{
		Function_22(Local_472);
	}
	else
	{
		Function_2(Local_472);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x138 / 312
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x159 / 345
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x176 / 374
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x199 / 409
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x1B0 / 432
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

void Function_7(int iParam0) //Position: 0x252 / 594
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x275 / 629
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

void Function_9() //Position: 0x2BF / 703
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2D8 / 728
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

void Function_11(var uParam0, bool bParam1) //Position: 0x32B / 811
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

struct<16> Function_12(int iParam0) //Position: 0x455 / 1109
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

bool Function_13() //Position: 0x48F / 1167
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x4AA / 1194
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x4B7 / 1207
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x4D7 / 1239
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x4EE / 1262
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x509 / 1289
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x750 / 1872
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x77C / 1916
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

bool Function_21(int iParam0) //Position: 0x7A0 / 1952
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x7B5 / 1973
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x7D3 / 2003
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

struct<16> Function_24(int iParam0) //Position: 0x879 / 2169
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

struct<24> Function_25(char* cParam0) //Position: 0x8B8 / 2232
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB0E / 2830
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

void Function_27() //Position: 0xC02 / 3074
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

int Function_28(int iParam0, bool bParam1) //Position: 0xC34 / 3124
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

int Function_29(int iParam0) //Position: 0xC72 / 3186
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC8C / 3212
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xCA2 / 3234
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF9F / 3999
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

void Function_33(char* cParam0) //Position: 0x1014 / 4116
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x104E / 4174
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

bool Function_35(var uParam0, int iParam1) //Position: 0x10CA / 4298
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10DD / 4317
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

int Function_37(int iParam0) //Position: 0x117E / 4478
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x11BB / 4539
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11D1 / 4561
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x142F / 5167
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x146D / 5229
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

void Function_42(bool bParam0) //Position: 0x14AC / 5292
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

void Function_43() //Position: 0x1501 / 5377
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

void Function_44() //Position: 0x154C / 5452
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

void Function_45() //Position: 0x1652 / 5714
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

void Function_46() //Position: 0x1685 / 5765
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

void Function_47() //Position: 0x1818 / 6168
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

void Function_48() //Position: 0x19D1 / 6609
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19DF / 6623
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

bool Function_50() //Position: 0x1BFC / 7164
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1C11 / 7185
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CB8 / 7352
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F54 / 8020
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

var Function_54() //Position: 0x2592 / 9618
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x259B / 9627
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25AC / 9644
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

struct<32> Function_57(char* cParam0) //Position: 0x26A3 / 9891
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26BE / 9918
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2725 / 10021
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2737 / 10039
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2749 / 10057
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

int Function_62(int iParam0) //Position: 0x287D / 10365
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x288C / 10380
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x28C5 / 10437
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2902 / 10498
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A9C / 10908
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

int Function_67(bool bParam0) //Position: 0x2CE0 / 11488
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2D21 / 11553
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

struct<8> Function_69() //Position: 0x2DAA / 11690
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

struct<8> Function_70() //Position: 0x2E41 / 11841
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

void Function_71() //Position: 0x2EC0 / 11968
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EFD / 12029
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

void Function_73() //Position: 0x3109 / 12553
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

bool Function_74(char* cParam0) //Position: 0x31C0 / 12736
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x31D8 / 12760
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

struct<8> Function_76() //Position: 0x32D0 / 13008
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x32DA / 13018
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32EB / 13035
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3301 / 13057
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x33CD / 13261
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33EA / 13290
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

bool Function_82(int iParam0) //Position: 0x3C16 / 15382
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C51 / 15441
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3C60 / 15456
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
						else if (iVar0 != Global_46796[3])
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

bool Function_85(int iParam0) //Position: 0x413E / 16702
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x4154 / 16724
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x4173 / 16755
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x418D / 16781
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41F7 / 16887
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

void Function_90(int iParam0) //Position: 0x441F / 17439
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

void Function_91() //Position: 0x44BD / 17597
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

void Function_92() //Position: 0x461F / 17951
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

int Function_93(int iParam0, char* cParam1) //Position: 0x469F / 18079
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49F6 / 18934
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

int Function_95(int iParam0) //Position: 0x4A7E / 19070
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A98 / 19096
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4AC3 / 19139
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4AF1 / 19185
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D8D / 19853
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F61 / 20321
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

int Function_101(int iParam0, char* cParam1) //Position: 0x51CB / 20939
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

int Function_102() //Position: 0x535B / 21339
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

void Function_103() //Position: 0x53FC / 21500
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

void Function_104(int iParam0) //Position: 0x54BA / 21690
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

var Function_105(int iParam0) //Position: 0x5520 / 21792
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

int Function_106(int iParam0, bool bParam1) //Position: 0x55AF / 21935
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

var Function_107(int iParam0, int iParam1) //Position: 0x575B / 22363
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

void Function_108() //Position: 0x57A0 / 22432
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x57B6 / 22454
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57F6 / 22518
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5836 / 22582
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5845 / 22597
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

int Function_113(int iParam0) //Position: 0x5A0D / 23053
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

var Function_114() //Position: 0x5AA2 / 23202
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5AC7 / 23239
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F96 / 24470
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

var Function_117(int iParam0) //Position: 0x62BD / 25277
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6360 / 25440
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

int Function_119(int iParam0, bool bParam1) //Position: 0x655D / 25949
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6708 / 26376
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x67DA / 26586
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

void Function_122(int iParam0) //Position: 0x70F5 / 28917
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7272 / 29298
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x737D / 29565
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x73A9 / 29609
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

var Function_126(vector3 vParam0) //Position: 0x7400 / 29696
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

void Function_127(var uParam0, int iParam1) //Position: 0x744E / 29774
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x74A9 / 29865
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

void Function_129() //Position: 0x764A / 30282
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7650 / 30288
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76FF / 30463
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7754 / 30548
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x776A / 30570
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

bool Function_134(int iParam0, int iParam1) //Position: 0x77BB / 30651
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

void Function_135(var uParam0, int iParam1) //Position: 0x77E8 / 30696
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77F9 / 30713
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7813 / 30739
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7824 / 30756
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

void Function_139(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7980 / 31104
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

bool Function_140() //Position: 0x7A0B / 31243
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7A38 / 31288
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

int Function_142(int iParam0) //Position: 0x7BE8 / 31720
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7C3F / 31807
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

var Function_144(int iParam0) //Position: 0x7C64 / 31844
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7CBA / 31930
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

bool Function_146(bool bParam0) //Position: 0x7D19 / 32025
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7D25 / 32037
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D41 / 32065
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

bool Function_149() //Position: 0x7D93 / 32147
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7DC3 / 32195
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

int Function_151(int iParam0, int iParam1) //Position: 0x7E38 / 32312
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E95 / 32405
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

int Function_153(int iParam0, int iParam1) //Position: 0x7F08 / 32520
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F63 / 32611
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8224 / 33316
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

void Function_156(int iParam0, bool bParam1) //Position: 0x84C3 / 33987
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

void Function_157() //Position: 0x8532 / 34098
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

int Function_158(int iParam0, int iParam1) //Position: 0x85B2 / 34226
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

int Function_159(int iParam0) //Position: 0x9215 / 37397
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x922A / 37418
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

void Function_161(var uParam0, int iParam1) //Position: 0x9279 / 37497
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x92D1 / 37585
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

bool Function_163(int iParam0, int iParam1) //Position: 0x9344 / 37700
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9358 / 37720
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

var Function_165(int iParam0) //Position: 0x9449 / 37961
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

bool Function_166(var uParam0, int iParam1) //Position: 0x94A1 / 38049
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x94BE / 38078
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

bool Function_168(int iParam0) //Position: 0x9518 / 38168
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x952A / 38186
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

void Function_170(struct<185> Param0) //Position: 0x955E / 38238
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

void Function_171(bool bParam0, var uParam1, int iParam2) //Position: 0x95C9 / 38345
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

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x96B3 / 38579
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

void Function_173() //Position: 0x9832 / 38962
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x983E / 38974
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

void Function_175() //Position: 0x9884 / 39044
{
	Function_176();
	return;
}

void Function_176() //Position: 0x988D / 39053
{
	Function_185(&iLocal_4 + 8);
	Function_177(&Global_11544, &Global_13580, 7, 0);
	Function_177(&Global_11544, &Global_13580, 2, 0);
	Function_177(&Global_11544, &Global_13580, 13, 0);
	Function_177(&Global_11544, &Global_13580, 4, 0);
	Function_177(&Global_11544, &Global_13580, 0, 0);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x98D8 / 39128
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_184(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_184(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_184(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_183(&(Param0[iVar02]), 8);
	}
	Function_183(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_182(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_178(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_178(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x9980 / 39296
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_181(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_184(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_184(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_181(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
	}
}

int Function_179(int iParam0) //Position: 0x9AE6 / 39654
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

int Function_180(int iParam0) //Position: 0x9B11 / 39697
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

void Function_181(var uParam0, int iParam1) //Position: 0x9B45 / 39749
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_182(int iParam0) //Position: 0x9B56 / 39766
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

void Function_183(var uParam0, int iParam1) //Position: 0x9BFF / 39935
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_184(var uParam0, int iParam1) //Position: 0x9C19 / 39961
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185(int iParam0) //Position: 0x9C36 / 39990
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_186(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_186(struct<2>[] Param0, int iParam1) //Position: 0x9C5E / 40030
{
	if (Function_188(&(Param0[iParam12]), 4))
	{
		if (Function_188(&(Param0[iParam12]), 1))
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
			Function_187(&(Param0[iParam12]), 1);
			Function_187(&(Param0[iParam12]), 2);
			Function_187(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_187(struct<13> Param0) //Position: 0x9DA9 / 40361
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_188(struct<13> Param0) //Position: 0x9DC6 / 40390
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_189() //Position: 0x9DE4 / 40420
{
	DECOR_REMOVE(&Global_54076, "herding");
	AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
	if (IS_BLIP_VALID(&bLocal_1002))
	{
		REMOVE_BLIP(&bLocal_1002);
	}
	if (IS_OBJECT_VALID(&Local_1096 + 8))
	{
		DESTROY_OBJECT(&Local_1096 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1096))
	{
		DESTROY_OBJECT(&Local_1096);
	}
	if (IS_OBJECT_VALID(&Local_1144 + 8))
	{
		DESTROY_OBJECT(&Local_1144 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1144))
	{
		DESTROY_OBJECT(&Local_1144);
	}
	if (IS_OBJECT_VALID(&bLocal_1004))
	{
		DESTROY_OBJECT(&bLocal_1004);
	}
	if (IS_ACTOR_VALID(&uLocal_1008))
	{
		RELEASE_ACTOR(&uLocal_1008);
	}
	if (SQUAD_IS_VALID(&Local_1096 + 64))
	{
		Function_193(&Local_1096 + 64, 0, 0);
		RELEASE_OBJECT_REF(&Local_1096 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1096 + 72))
	{
		Function_193(&Local_1096 + 72, 0, 0);
		RELEASE_OBJECT_REF(&Local_1096 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1096 + 80))
	{
		Function_193(&Local_1096 + 80, 0, 0);
		RELEASE_OBJECT_REF(&Local_1096 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1096 + 88))
	{
		Function_193(&Local_1096 + 88, 0, 0);
		RELEASE_OBJECT_REF(&Local_1096 + 88);
	}
	if (SQUAD_IS_VALID(&Local_1144 + 64))
	{
		Function_193(&Local_1144 + 64, 0, 0);
		RELEASE_OBJECT_REF(&Local_1144 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1144 + 72))
	{
		Function_193(&Local_1144 + 72, 0, 0);
		RELEASE_OBJECT_REF(&Local_1144 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1144 + 80))
	{
		Function_193(&Local_1144 + 80, 0, 0);
		RELEASE_OBJECT_REF(&Local_1144 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1144 + 88))
	{
		Function_193(&Local_1144 + 88, 0, 0);
		RELEASE_OBJECT_REF(&Local_1144 + 88);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		Function_191(&Global_11544, &Global_13580, &iLocal_4 + 408, 0);
		RELEASE_OBJECT_REF(&iLocal_4 + 408);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_193(&iLocal_4 + 264, 0, 0);
		RELEASE_OBJECT_REF(&iLocal_4 + 264);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 456))
	{
		if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
		{
			CLEAR_ACTOR_MIN_SPEED(&iLocal_4 + 416[02]);
			CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 416[02]);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_4 + 416[02]);
			Function_190(StackVal, &iLocal_4 + 416[02], *(&iLocal_4 + 1496), 0, 3, 2, 1);
		}
		if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
		{
			CLEAR_ACTOR_MIN_SPEED(&iLocal_4 + 416[12]);
			CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 416[12]);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_4 + 416[12]);
			Function_190(StackVal, &iLocal_4 + 416[12], *(&iLocal_4 + 1496), 0, 3, 2, 1);
		}
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_581);
	if (IS_OBJECT_VALID(&uLocal_1080))
	{
		DESTROY_OBJECT(&uLocal_1080);
	}
	return;
}

void Function_190(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xA074 / 41076
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
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
}

void Function_191(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xA193 / 41363
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam2))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam2))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam2, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_192(&uParam0, &uParam1, &uVar1, &iParam3);
			}
		}
		bVar0++;
	}
}

void Function_192(var uParam0, vector3[] vParam1, int iParam2, var uParam3) //Position: 0xA1EE / 41454
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16) == &iParam2)
			{
				Function_177(&uParam0, &vParam1, iVar0, &uParam3);
			}
		}
		iVar0++;
	}
}

void Function_193(var uParam0, bool bParam1, bool bParam2) //Position: 0xA23F / 41535
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
				if (!Function_194(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_194(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xA2C8 / 41672
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA2E8 / 41704
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_224());
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
	Function_223();
	CLEAR_PRINTED_OBJECTIVE();
	Function_222();
	Function_220(0);
	Function_219();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_218();
	Function_217();
	Function_223();
	ENABLE_JOURNAL_REPLAY(1);
	Function_216(1);
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
		Function_215(&Global_54076);
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
	Function_212(Global_42825);
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
	Function_211();
	Function_210(1178687);
	Function_208(33039);
	Function_207(0x218003f);
	Function_206(4194560);
	Function_205();
	Function_204();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_201(0, 1, 1);
	}
	else
	{
		Function_201(0, 1, 1);
	}
	Function_200();
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
	Function_196();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_196() //Position: 0xA4F4 / 42228
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
		if (Function_199() > 3)
		{
			bVar0 *= 2;
		}
		Function_197(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA54B / 42315
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_198(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_198(bool bParam0) //Position: 0xA59B / 42395
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_199() //Position: 0xA5C4 / 42436
{
	return Global_21369.f_248;
}

void Function_200() //Position: 0xA5CF / 42447
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

void Function_201(int iParam0, bool bParam1, int iParam2) //Position: 0xA5F9 / 42489
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
			Function_202(Global_43789);
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

void Function_202(int iParam0) //Position: 0xA705 / 42757
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_203())
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

bool Function_203() //Position: 0xA784 / 42884
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

void Function_204() //Position: 0xA7ED / 42989
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

void Function_205() //Position: 0xA813 / 43027
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

void Function_206(int iParam0) //Position: 0xA839 / 43065
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_207(int iParam0) //Position: 0xA856 / 43094
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_208(int iParam0) //Position: 0xA869 / 43113
{
	Function_209(&Global_43580, iParam0);
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0xA877 / 43127
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_210(bool bParam0) //Position: 0xA896 / 43158
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_211() //Position: 0xA8C3 / 43203
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

void Function_212(int iParam0) //Position: 0xA93B / 43323
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
		Function_213(78, 1, 1);
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

int Function_213(bool bParam0, bool bParam1, int iParam2) //Position: 0xAA71 / 43633
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_214(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_214(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_214(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_214(bool bParam0) //Position: 0xAABF / 43711
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

void Function_215(int iParam0) //Position: 0xABB3 / 43955
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

void Function_216(bool bParam0) //Position: 0xAC36 / 44086
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

void Function_217() //Position: 0xACAD / 44205
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

void Function_218() //Position: 0xACF1 / 44273
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

void Function_219() //Position: 0xAD35 / 44341
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_220(int iParam0) //Position: 0xAD4B / 44363
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_221())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_221() //Position: 0xAD8B / 44427
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

void Function_222() //Position: 0xADB0 / 44464
{
	Global_15862 = 0.0f;
	return;
}

void Function_223() //Position: 0xADBA / 44474
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

int Function_224() //Position: 0xADE5 / 44517
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_225() //Position: 0xAE02 / 44546
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

void Function_226() //Position: 0xAF34 / 44852
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_227(int iParam0) //Position: 0xAF3D / 44861
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

int Function_228(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xAFA5 / 44965
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
		Function_230(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_229(&Global_15402[iParam014] + 8);
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

void Function_229(int iParam0) //Position: 0xB2E7 / 45799
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

void Function_230(var uParam0) //Position: 0xB31A / 45850
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

bool Function_231() //Position: 0xB331 / 45873
{
	if (IS_EXITFLAG_SET())
	{
		Function_571(iLocal_576);
		Function_567(StackVal, 4, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
		return 0;
	}
	Function_566(StackVal, StackVal, StackVal, StackVal, StackVal, Local_472, iLocal_576, iLocal_577, &bLocal_613, &bLocal_611, &bLocal_612);
	if (iLocal_576 == 99 && iLocal_576 == 100)
	{
		if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_565(8), Function_564(8)))
		{
			Function_563(8);
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_571(iLocal_576);
			Function_567(StackVal, 1, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_571(iLocal_576);
			Function_567(StackVal, 2, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
			return 1;
		}
		if (Function_562(2048))
		{
			Function_571(iLocal_576);
			Function_567(StackVal, 3, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
			return 1;
		}
		if (Function_560(&Global_54076, 0))
		{
			Function_571(iLocal_576);
			Function_567(StackVal, 2, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
			return 1;
		}
		if (Function_540(&Local_669, &uLocal_615, &uLocal_941, &uLocal_579, uLocal_614))
		{
			if (Function_538(&uLocal_941))
			{
				Function_571(iLocal_576);
				Function_567(StackVal, 5, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
				return 1;
			}
		}
		Function_537(&bLocal_583, &bLocal_581);
		Function_536();
	}
	switch (iLocal_576)
	{
		case 0x00000063:
			Function_477();
			break;
		
		case 0x00000000:
			Function_438();
			break;
		
		case 0x00000001:
			Function_425();
			break;
		
		case 0x00000002:
			Function_417();
			break;
		
		case 0x00000003:
			Function_399();
			break;
		
		case 0x00000004:
			Function_307();
			break;
		
		case 0x00000065:
			Function_240();
			break;
		
		case 0x00000064:
			if (Function_239(&bLocal_612))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_238(&iLocal_576, &iLocal_577, &iLocal_564))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_611)
	{
		Function_237(&bLocal_611, 8);
		Function_1();
		return 0;
	}
	if (bLocal_612 && iLocal_576 == 100)
	{
		Function_571(iLocal_576);
		Function_567(StackVal, 5, &bLocal_612, &iLocal_576, Function_572(iLocal_576), Function_571(iLocal_576), 0);
	}
	if (bLocal_613)
	{
		Function_232(&bLocal_613, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_232(var uParam0, int iParam1) //Position: 0xB53B / 46395
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233(&iParam1);
	uParam0 = 1;
	return;
}

void Function_233(int iParam0) //Position: 0xB560 / 46432
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_236("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_235(2) || Function_235(8)) || Function_235(9)) || Function_235(10))
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
		Function_236("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_236("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_236("");
	}
	else if (iParam0 == 8)
	{
		Function_234();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_234();
	}
	return;
}

void Function_234() //Position: 0xB657 / 46679
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_235(int iParam0) //Position: 0xB663 / 46691
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

void Function_236(char* cParam0) //Position: 0xB699 / 46745
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_237(var uParam0, int iParam1) //Position: 0xB705 / 46853
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_238(var uParam0, var uParam1, int iParam2) //Position: 0xB72A / 46890
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

bool Function_239(int iParam0) //Position: 0xB773 / 46963
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_240() //Position: 0xB787 / 46983
{
	Function_306(&cLocal_470);
	switch (iLocal_577)
	{
		case 0x00000000:
			Function_302(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_298();
				bLocal_578 = Global_46736[2];
				if (!Function_297(bLocal_578))
				{
					Function_295(&Local_472);
				}
				Function_294(&Global_54076, &iLocal_4 + 1256[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_583, true);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 1;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(bLocal_578) || bLocal_578 != 4294967295))
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			Function_274();
			if (iLocal_597[4] == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
					{
						Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1256[4], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 456))
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 312))
					{
						Function_273(&iLocal_4 + 456, &iLocal_4 + 312);
					}
				}
				if (SQUAD_IS_VALID(&Local_1096 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 64);
					Function_272(&Local_1096 + 64);
					Function_271(&Local_1096 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1144 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1144 + 64);
					Function_272(&Local_1144 + 64);
					Function_271(&Local_1144 + 64);
				}
			}
			if (SQUAD_IS_VALID(&Local_1096 + 88))
			{
				Function_270(&Local_1096 + 88, &Local_1144 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				Function_271(&Local_1096 + 64);
				Function_270(&Local_1096 + 64, &Local_1144 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1144 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1144 + 64);
				Function_272(&Local_1144 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1144 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 800, -1.0f);
			}
			Function_293(&iLocal_585);
			iLocal_577 = 3;
			break;
		
		case 0x00000003:
			if (Function_241())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 312))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 312);
					Function_272(&iLocal_4 + 312);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 456))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 456);
					Function_272(&iLocal_4 + 456);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_611 = true;
			}
			break;
	}
	return;
}

bool Function_241() //Position: 0xBABA / 47802
{
	var uVar0;
	
	if (Function_269(&iLocal_564 + 4))
	{
		if (Function_267(&iLocal_564 + 4) <= 2.0f)
		{
			Function_265(&iLocal_564, 1, 0);
		}
	}
	switch (iLocal_564)
	{
		case 0x000003E8:
			Function_261(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &bLocal_581);
				*(&iLocal_564 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				*(&iLocal_564 + 24) = Function_255(&iLocal_4, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_564 + 24))
				{
				}
				else
				{
					LOG_ERROR("ranch07_cutsceneLast - Failed to create ranch07_cutsceneLast_cutscene");
				}
			}
			iLocal_564 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_564 + 24), 0))
			{
				Function_254(&Global_54076, 1, 1);
				Function_254(&bLocal_581, 1, 1);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 464[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 464[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 464[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 464[1]);
				Function_252(&iLocal_564 + 4);
				iLocal_564 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_294(&bLocal_583, &iLocal_4 + 1256[1], 1, 1, 1);
			Function_250(&Global_54076, &iLocal_4 + 1256[1], 1, 1, 1);
			Function_250(&bLocal_581, &iLocal_4 + 1256[4], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_581))
			{
				TASK_CLEAR(&bLocal_581);
				TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_581, true);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1256[7], &uLocal_990);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uLocal_990, 3.0f, 2);
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 416[02], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 416[02], true);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
			{
				Function_250(&iLocal_4 + 416[12], &iLocal_4 + 1256[8], 1, 1, 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1256[8], &uLocal_993);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 416[12], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 416[12], true);
			}
			iLocal_564 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_267(&iLocal_564 + 4) < 0,75f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
					Function_293(&iLocal_564 + 4);
					iLocal_1192 = 6;
					iLocal_1193 = 6;
					iLocal_564 = 1004;
				}
			}
			else
			{
				Function_293(&iLocal_564 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_246() && Function_245())
			{
				Function_293(&iLocal_564 + 4);
				iLocal_564 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				HUD_TIMER_DISPLAY(0);
				Function_254(&Global_54076, 0, 1);
				Function_254(&bLocal_581, 0, 1);
				AI_GOAL_LOOK_CLEAR(&bLocal_581);
				AI_GOAL_LOOK_CLEAR(&Global_54076);
				TASK_CLEAR(&Global_54076);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_242(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_564 + 24))
				{
					DESTROY_OBJECT(&iLocal_564 + 24);
				}
				iLocal_564 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_250(&bLocal_581, &iLocal_4 + 1256[3], 1, 1, 1);
				iLocal_564 = 1104;
			}
			break;
	}
	return 0;
}

void Function_242(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xBE9B / 48795
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
		Function_244();
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
	Function_243(&iParam9, &bParam10);
}

void Function_243(var uParam0, bool bParam1) //Position: 0xBF6A / 49002
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
		Function_211();
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

void Function_244() //Position: 0xC03A / 49210
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_245() //Position: 0xC04F / 49231
{
	switch (iLocal_1193)
	{
		case 0x00000006:
			if (Function_267(&iLocal_564 + 4) < 0.0f)
			{
				if (SQUAD_IS_VALID(&Local_1144 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1144 + 64);
					Function_272(&Local_1144 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1144 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 800, -1.0f);
				}
				iLocal_1193 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_267(&iLocal_564 + 4) < 5.0f)
			{
				AI_GOAL_LOOK_AT_ACTOR(&bLocal_581, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
				AI_GOAL_LOOK_AT_ACTOR(&Global_54076, &bLocal_581, 0, 1065353216, 3212836864, 3212836864, 0);
				iLocal_1193 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_267(&iLocal_564 + 4) < 10.0f)
			{
				iLocal_1193 = 34;
			}
			break;
		
		case 0x00000022:
			if (Function_267(&iLocal_564 + 4) < 14.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1256[3], &uLocal_978);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &iLocal_4 + 1776, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
				{
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1,5f, 0, 0);
					TASK_FOLLOW_PATH(0, &iLocal_4 + 1776, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_4 + 416[02], bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 416[02], true);
				}
				iLocal_1193 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_267(&iLocal_564 + 4) < 14,5f)
			{
				iLocal_1193 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_267(&iLocal_564 + 4) < 15,5f)
			{
				iLocal_1193 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_267(&iLocal_564 + 4) < 20.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_246() //Position: 0xC248 / 49736
{
	switch (iLocal_1192)
	{
		case 0x00000006:
			if (Function_267(&iLocal_564 + 4) < 0.0f)
			{
				iLocal_1192 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_267(&iLocal_564 + 4) < 6.0f)
			{
				Function_247();
				iLocal_1192 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_267(&iLocal_564 + 4) < 10,5f)
			{
				iLocal_1192 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_267(&iLocal_564 + 4) < 13,5f)
			{
				iLocal_1192 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_267(&iLocal_564 + 4) < 20.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_247() //Position: 0xC2EA / 49898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_EndCut_v1_AA", "Ranch07_EndCut_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_EndCut_v1_AB", "Ranch07_EndCut_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_EndCut_v1_AC", "Ranch07_EndCut_v1_AC", true, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_EndCut_v1_AD", "Ranch07_EndCut_v1_AD", false, 4, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_248(int iParam0) //Position: 0xC3E0 / 50144
{
	Function_249(0, &Global_54076, iParam0, 0);
	Function_249(1, &bLocal_581, iParam0, 0);
	if (SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		Function_249(2, &iLocal_4 + 320[42], iParam0, 0);
		Function_249(3, &iLocal_4 + 320[02], iParam0, 0);
		Function_249(4, &iLocal_4 + 320[12], iParam0, 0);
		Function_249(5, &iLocal_4 + 320[22], iParam0, 0);
		Function_249(6, &iLocal_4 + 320[32], iParam0, 0);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 456))
	{
		Function_249(7, &iLocal_4 + 416[02], iParam0, 0);
		Function_249(8, &iLocal_4 + 416[12], iParam0, 0);
	}
	return;
}

void Function_249(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0xC485 / 50309
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_250(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xC4AD / 50349
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
				Function_251(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_251(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xC5CD / 50637
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

void Function_252(int iParam0) //Position: 0xC69C / 50844
{
	if (!Function_269(&iParam0))
	{
		Function_253(&iParam0, 0.0f);
	}
	return;
}

void Function_253(vector3 vParam0) //Position: 0xC6B3 / 50867
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_254(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC6D8 / 50904
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

var Function_255(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC788 / 51080
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ranch07_cutsceneLast", 4, 1);
	}
	Function_256(&uVar0, &uParam2);
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

void Function_256(var uParam0, int iParam1) //Position: 0xC819 / 51225
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_260(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_259(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_258(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_257(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 2, 3, 20.0f, 2, 0);
	return;
}

void Function_257(int iParam0) //Position: 0xC8A8 / 51368
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 33,69f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-659,0156f, 103,1961f, 2592,759f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,051159f, 3,001771f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_258(int iParam0) //Position: 0xC91D / 51485
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 33,69f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-649,8079f, 103,1961f, 2596,424f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,055756f, 2,46803f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_259(int iParam0) //Position: 0xC98A / 51594
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,88042f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-645,8021f, 103,5081f, 2613,703f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,098282f, 0,891085f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_260(float fParam0) //Position: 0xC9F7 / 51703
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 36,88042f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-642,6305f, 103,6084f, 2611,829f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(-0,115683f, 0,970925f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_261(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xCA64 / 51812
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
	Function_244();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
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
				Function_264(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_264(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_263()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_263()));
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
	if (Function_262(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_262(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_262(int iParam0) //Position: 0xCD16 / 52502
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_263() //Position: 0xCD32 / 52530
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

struct<8> Function_264(int iParam0) //Position: 0xCDC0 / 52672
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_265(int iParam0, bool bParam1, bool bParam2) //Position: 0xCDD2 / 52690
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
			Function_266(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_266(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_266(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCF4A / 53066
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

float Function_267(vector3 vParam0) //Position: 0xCF74 / 53108
{
	if (Function_269(&vParam0))
	{
		if (Function_268(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_268(int iParam0) //Position: 0xD041 / 53313
{
	return Function_14(iParam0, 2);
}

bool Function_269(int iParam0) //Position: 0xD04F / 53327
{
	return Function_14(iParam0, 1);
}

void Function_270(var uParam0, var uParam1) //Position: 0xD05D / 53341
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (SQUAD_IS_VALID(&uParam1))
		{
			while (SQUAD_GET_SIZE(&uParam0) >= 0)
			{
				iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, false);
				if (IS_ACTOR_VALID(&iVar0))
				{
					SQUAD_LEAVE(&iVar0);
					SQUAD_JOIN(&iVar0, &uParam1);
				}
			}
		}
	}
	return;
}

void Function_271(int iParam0) //Position: 0xD0AA / 53418
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_272(int iParam0) //Position: 0xD0F9 / 53497
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

void Function_273(var uParam0, bool bParam1) //Position: 0xD12E / 53550
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&uParam0) && SQUAD_IS_VALID(&bParam1))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1) && IS_ACTOR_VALID(&uVar2))
			{
				if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_MOUNTED(&uVar1))
				{
					ACTOR_MOUNT_ACTOR(&uVar2, &uVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_274() //Position: 0xD1A5 / 53669
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1256[4], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_287();
		if (SQUAD_IS_VALID(&iLocal_4 + 312))
		{
			Function_291(&iLocal_4 + 312, 0);
			Function_290(&iLocal_4 + 312, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 272[02]))
			{
				Function_294(&iLocal_4 + 272[02], &iLocal_4 + 1256[7], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 272[12]))
			{
				Function_294(&iLocal_4 + 272[12], &iLocal_4 + 1256[8], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 456))
	{
		Function_286();
		if (SQUAD_IS_VALID(&iLocal_4 + 456))
		{
			SQUAD_SET_FACTION(&iLocal_4 + 456, 20);
			Function_285(&iLocal_4 + 456, 1);
			Function_288(&iLocal_4 + 456, 0, 0, 0);
			Function_291(&iLocal_4 + 456, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
			{
				Function_294(&iLocal_4 + 416[02], &iLocal_4 + 1256[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
			{
				Function_294(&iLocal_4 + 416[12], &iLocal_4 + 1256[6], 1, 1, 1);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 312))
			{
				Function_273(&iLocal_4 + 456, &iLocal_4 + 312);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 456, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_275();
	return;
}

void Function_275() //Position: 0xD3B6 / 54198
{
	Function_284();
	(&Local_1144 + 24) = &iLocal_4 + 1832;
	if (!SQUAD_IS_VALID(&Local_1144 + 64))
	{
		*(&Local_1144 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1144 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1144 + 64);
			Function_280(&Local_1144, &cLocal_470, &iLocal_4 + 1384, &iLocal_1070, 5, 4,5f, 7.0f, 1,5f, 1);
			Function_291(&Local_1144 + 64, 0);
			Function_279(&Local_1144 + 64, 1);
			Function_278(&Local_1144 + 64, 0);
			Function_277(&Local_1144 + 64, 0);
			Function_276(&Local_1144 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1144 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 800, -1.0f);
		}
	}
	return;
}

void Function_276(var uParam0, var uParam1, bool bParam2) //Position: 0xD496 / 54422
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
				DECOR_SET_BOOL(&uVar1, &uParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_277(var uParam0, bool bParam1) //Position: 0xD4E4 / 54500
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
				SET_ACTOR_CAN_BE_BUMPTARGETED(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_278(var uParam0, bool bParam1) //Position: 0xD52B / 54571
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
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_279(var uParam0, bool bParam1) //Position: 0xD572 / 54642
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
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_280(struct<113> Param0) //Position: 0xD5BC / 54716
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	char* cVar18[64];
	var uVar34;
	char* cVar35[64];
	
	if (SQUAD_IS_VALID(&Param0 + 64))
	{
		if (!Param0.f_112 != 0)
		{
			if (IS_STRING_VALID(&Param0 + 104))
			{
				if (IS_OBJECT_VALID(&bParam2))
				{
					Function_283(&bParam2);
					Var36 = Function_283(&bParam2);
					Function_282(&bParam2);
					Var38 = Function_282(&bParam2);
					PRINTVECTOR(Var36);
					PRINTNL();
					bVar46 = RAND_FLOAT_RANGE(fParam5, bParam6);
					Var40 = Var36;
					Var40 = (Var40 - ((IntToFloat(iParam4) * bVar46) / 2.0f));
					Var40.f_4 = (StackVal + fParam7);
					Var40.f_8 = (StackVal - ((IntToFloat((Param0.f_112 / iParam4)) * bVar46) / 2.0f));
					PRINTVECTOR(Var40);
					PRINTNL();
					Var42 = Var40;
					Var44 = Var38;
					PRINTVECTOR(Var42);
					PRINTNL();
					bVar0 = false;
					while (bVar0 < (Param0.f_112 - 1))
					{
						strcpy(&cVar2, &Param0 + 104, 64);
						strcpy(&cVar18, "_", 64);
						stradd(&cVar2, &cVar18, 64);
						cVar35 = INT_TO_STRING(bVar0);
						stradd(&cVar2, &cVar35, 64);
						if (iVar1 > iParam4)
						{
							iVar1 = 0;
							Var42 = Var40;
							bVar46 = RAND_FLOAT_RANGE(fParam5, bParam6);
							Var42.f_8 = (StackVal + bVar46);
						}
						if (bParam8)
						{
							Var44.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						}
						bVar47 = RAND_INT_RANGE(false, (iParam3 - 1));
						bVar48 = iParam3[bVar47];
						if (Function_281(bVar48))
						{
							uVar34 = CREATE_ACTOR_IN_LAYOUT(&cParam1, &cVar2, bVar48, Var42, Var44);
							if (IS_ACTOR_VALID(&uVar34))
							{
								SNAP_OBJECT_TO_GROUND(&uVar34, 20.0f, false, 1092616192);
								SQUAD_JOIN(&uVar34, &Param0 + 64);
								PRINTSTRING(&cVar2);
								PRINTNL();
								PRINTVECTOR(Var42);
								PRINTNL();
							}
						}
						bVar46 = RAND_FLOAT_RANGE(fParam5, bParam6);
						Var42 = (Var42 + bVar46);
						iVar1++;
						bVar0++;
					}
				}
			}
		}
	}
}

bool Function_281(int iParam0) //Position: 0xD770 / 55152
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_282(int iParam0) //Position: 0xD787 / 55175
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

struct<8> Function_283(bool bParam0) //Position: 0xD7B0 / 55216
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

void Function_284() //Position: 0xD7D9 / 55257
{
	iLocal_1070[0] = 1008;
	iLocal_1070[1] = 1009;
	iLocal_1070[2] = 1010;
	iLocal_1070[3] = 1011;
	*(&Local_1144 + 152[0]) = &Global_54076;
	*(&Local_1144 + 152[1]) = &bLocal_581;
	*(&Local_1144 + 152[2]) = &iLocal_4 + 416[02];
	*(&Local_1144 + 152[3]) = &iLocal_4 + 416[12];
	Local_1144.f_112 = 15;
	PRINTINT(Local_1144.f_112);
	PRINTNL();
	*(&Local_1144 + 104) = "HOME01_COWS02";
	if (!Function_269(&Local_1144 + 132))
	{
		Function_252(&Local_1144 + 132);
	}
	else
	{
		Function_293(&Local_1144 + 132);
	}
	if (!IS_OBJECT_VALID(&Local_1144))
	{
		Local_1144 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_470, "COWS_02_BASE", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1144))
		{
		}
	}
	if (!IS_OBJECT_VALID(&Local_1144 + 8))
	{
		*(&Local_1144 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_470, "COWS_02_CENTER", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1144 + 8))
		{
		}
	}
	if (!SQUAD_IS_VALID(&Local_1144 + 72))
	{
		*(&Local_1144 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "STRAGGLE_SQUAD02"));
		if (SQUAD_IS_VALID(&Local_1144 + 72))
		{
			SQUAD_GOALS_CLEAR(&Local_1144 + 72);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1144 + 80))
	{
		*(&Local_1144 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "RETURN_SQUAD02"));
		if (SQUAD_IS_VALID(&Local_1144 + 80))
		{
			SQUAD_GOALS_CLEAR(&Local_1144 + 80);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1144 + 88))
	{
		*(&Local_1144 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "GOAL_SQUAD02"));
		if (SQUAD_IS_VALID(&Local_1144 + 88))
		{
			SQUAD_GOALS_CLEAR(&Local_1144 + 88);
		}
	}
	if (!IS_VOLUME_VALID(&Local_1144 + 56))
	{
		*(&Local_1144 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &cLocal_470, "HERD_VOLUME_MEDIUM", 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(9.0f, 9.0f, 9.0f));
		if (IS_VOLUME_VALID(&Local_1144 + 56))
		{
			if (IS_OBJECT_VALID(&Local_1144 + 8))
			{
				ATTACH_OBJECTS(StackVal, StackVal, &Local_1144 + 56, &Local_1144 + 8, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
		}
	}
	(&Local_1144 + 24) = "";
	(&Local_1144 + 16) = "";
	Local_1144.f_148 = 0;
	return;
}

void Function_285(var uParam0, bool bParam1) //Position: 0xDA7D / 55933
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
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_286() //Position: 0xDAC4 / 56004
{
	*(&iLocal_4 + 456) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 416[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 33, Vector(-860.0f, 101,3961f, 2672f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 416[02], &iLocal_4 + 456);
	*(&iLocal_4 + 416[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 34, Vector(-864,0001f, 100,3922f, 2708f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 416[12], &iLocal_4 + 456);
	return;
}

void Function_287() //Position: 0xDB50 / 56144
{
	*(&iLocal_4 + 312) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 272[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 980, Vector(-864,0001f, 102,4f, 2668f), Vector(0.0f, 154,7027f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 272[02], &iLocal_4 + 312);
	*(&iLocal_4 + 272[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 981, Vector(-864,0001f, 100,3922f, 2712f), Vector(0.0f, -45,79245f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 272[12], &iLocal_4 + 312);
	return;
}

void Function_288(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xDBE6 / 56294
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_289(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_289(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDC21 / 56353
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

void Function_290(var uParam0, bool bParam1) //Position: 0xDC6B / 56427
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
				ACCESSORIZE_HORSE(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_291(var uParam0, bool bParam1) //Position: 0xDCB3 / 56499
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

void Function_292() //Position: 0xDCFA / 56570
{
	*(&iLocal_4 + 264) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 240[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 977, Vector(-813,6013f, 93,36469f, 2430,015f), Vector(0.0f, 77,46044f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 240[02], &iLocal_4 + 264);
	return;
}

void Function_293(int iParam0) //Position: 0xDD4F / 56655
{
	Function_253(&iParam0, 0.0f);
	return;
}

void Function_294(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDD5C / 56668
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

void Function_295(int iParam0) //Position: 0xDE6C / 56940
{
	if (!Function_296(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_201(1, 0, 1);
		}
	}
	return;
}

bool Function_296(struct<37> Param0) //Position: 0xDE88 / 56968
{
	return Param0.f_36;
}

bool Function_297(bool bParam0) //Position: 0xDE93 / 56979
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_298() //Position: 0xDEAF / 57007
{
	Function_169(16396);
	Function_301(12);
	Function_301(13);
	Function_301(11);
	Function_301(35);
	Function_301(6);
	Function_301(9);
	Function_299(9);
	return;
}

void Function_299(int iParam0) //Position: 0xDEDD / 57053
{
	Function_300(&Global_43580, iParam0);
	return;
}

void Function_300(var uParam0, int iParam1) //Position: 0xDEEB / 57067
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_301(int iParam0) //Position: 0xDF13 / 57107
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_302(bool bParam0) //Position: 0xDF33 / 57139
{
	Function_303(0, 0x40400000);
	Function_218();
	Function_217();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_303(float fParam0, float fParam1) //Position: 0xDF69 / 57193
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
	Function_305();
	Function_304();
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

void Function_304() //Position: 0xE07A / 57466
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_305() //Position: 0xE0AE / 57518
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

void Function_306(char* cParam0) //Position: 0xE1B4 / 57780
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&cParam0);
		if (IS_ITERATOR_VALID(&uVar0))
		{
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				while (IS_OBJECT_VALID(&uVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if (((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073)
						{
							DESTROY_OBJECT(&uVar1);
						}
					}
					uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
				}
			}
			DESTROY_ITERATOR(&uVar0);
		}
	}
	return;
}

void Function_307() //Position: 0xE2F1 / 58097
{
	Function_306(&cLocal_470);
	if (!iLocal_1030)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_395(&iLocal_964);
			}
			else
			{
				iLocal_950 = 0;
				iLocal_1030 = 0;
			}
		}
	}
	if (((iLocal_577 < 5 && iLocal_577 > 105) && !iLocal_577 != 104) && !iLocal_577 != 103)
	{
		Function_394(&Local_1144 + 64, &Local_1144 + 88, &iLocal_4 + 760);
		Function_394(&Local_1144 + 80, &Local_1144 + 88, &iLocal_4 + 760);
		Function_393(&Local_1144);
		if (bLocal_1012)
		{
			Function_389(&Local_1144, 0);
			if (iLocal_577 > 8)
			{
				Function_388(&Local_1144, 0);
				Function_387(&Local_1144, 0, 0x41700000);
			}
			if (Function_267(&iLocal_1034) <= 0,2f)
			{
				if (!bLocal_1013)
				{
					Function_383(&Local_1144 + 80, &iLocal_1038, 3.0f, &iLocal_4 + 1832, 20.0f);
				}
				Function_293(&iLocal_1034);
			}
		}
		if (!iLocal_1033)
		{
			if (IS_OBJECT_VALID(&Local_1144 + 8) && IS_ACTOR_VALID(&bLocal_581))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 888))
				{
					if (IS_OBJECT_IN_VOLUME(&Local_1144 + 8, &iLocal_4 + 888) || IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 888))
					{
						iLocal_1033 = 1;
					}
				}
			}
		}
		Function_382();
		Function_381(&Global_54076);
		Function_361();
	}
	switch (iLocal_577)
	{
		case 0x00000000:
			Function_302(0);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_597[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_298();
				bLocal_578 = Global_46736[2];
				if (!Function_297(bLocal_578))
				{
					Function_295(&Local_472);
				}
				Function_294(&Global_54076, &iLocal_4 + 1176[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_583, true);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 1;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(bLocal_578) || bLocal_578 != 4294967295))
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(15);
			AUDIO_MUSIC_SET_MOOD("nHERDING_2", 0, 4294967295, 4294967295);
			iLocal_953 = 0;
			iLocal_950 = 0;
			iLocal_951 = 0;
			iLocal_958 = 0;
			iLocal_959 = 0;
			iLocal_960 = 0;
			iLocal_961 = 0;
			iLocal_952 = 0;
			bLocal_1012 = false;
			iLocal_1028 = 0;
			iLocal_1033 = 0;
			Function_359();
			if (iLocal_597[3] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_294(&Global_54076, &iLocal_4 + 1176[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						Function_294(&bLocal_583, &iLocal_4 + 1176[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
						}
					}
				}
				else
				{
					bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
				}
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					Function_294(&bLocal_581, &iLocal_4 + 1176[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
					{
						Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1176[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_581))
			{
				Function_351(3, 0, 1);
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
				TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_581, true);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 88))
			{
				Function_270(&Local_1096 + 88, &Local_1144 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1096 + 64);
				Function_271(&Local_1096 + 64);
				Function_270(&Local_1096 + 64, &Local_1144 + 64);
			}
			Function_344(&(Local_669[015]), &bLocal_581, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[115]), &iLocal_4 + 456, "Rancher", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[215]), &Local_1144 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[315]), &Local_1144 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[415]), &Local_1144 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[515]), &Local_1144 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_343(&(Local_669[615]));
			Function_343(&(Local_669[715]));
			Function_343(&(Local_669[815]));
			if (HUD_IS_FADED())
			{
				Function_293(&iLocal_585);
				iLocal_577 = 5;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			Function_342(iLocal_576);
			Function_333(StackVal, Function_342(iLocal_576), iLocal_576, Global_46736[2], Function_341(iLocal_576), 2);
			bLocal_954 = Function_332();
			PRINTINT(bLocal_954);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&iLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_583)) && SQUAD_IS_VALID(&Local_1144 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1144 + 64, (SQUAD_GET_SIZE(&Local_1144 + 64) - 1))))
			{
				if (((Function_331(&bLocal_581, 1, 0x41700000) && Function_331(&iLocal_4 + 240[02], 1, 0x41700000)) && Function_331(&bLocal_583, 1, 0x41700000)) && Function_331(SQUAD_GET_ACTOR_BY_INDEX(&Local_1144 + 64, (SQUAD_GET_SIZE(&Local_1144 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_581) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_293(&iLocal_585);
						iLocal_577 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_294(&Global_54076, &iLocal_4 + 1176[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_583))
							{
								Function_294(&bLocal_583, &iLocal_4 + 1176[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
								}
							}
						}
						else
						{
							bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
						}
						if (IS_ACTOR_VALID(&bLocal_581))
						{
							Function_294(&bLocal_581, &iLocal_4 + 1176[1], 1, 1, 1);
							if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
							{
								if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1144 + 64))
			{
				Function_330();
				Function_329();
				Function_271(&Local_1144 + 64);
				Function_327(&Local_1144 + 64, &iLocal_4 + 632);
				Function_326(&Local_1096 + 64, 2, 1);
				Function_326(&Local_1096 + 88, 2, 1);
				Function_326(&Local_1096 + 72, 2, 1);
			}
			CAMERA_RESET(0);
			Function_293(&iLocal_585);
			iLocal_577 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_BLIP_VALID(&bLocal_1002))
				{
					bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1384, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&bLocal_1002))
					{
						SET_BLIP_PRIORITY(&bLocal_1002, 3);
					}
				}
				if (!IS_OBJECT_VALID(&bLocal_1004))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1384, &Local_984);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1384, &Local_987);
					bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1080))
				{
					if (IS_OBJECT_VALID(&Local_1144 + 8))
					{
						uLocal_1080 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_470, "RANCH07_CAMERA_FOCUS", &Local_1144 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1080))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1080, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, &uLocal_1080, &Local_1144 + 8, Vector(0.0f, 0.0f, 0.0f), 1,5f);
						}
					}
				}
				Function_283(&iLocal_4 + 1384);
				uLocal_978 = Function_283(&iLocal_4 + 1384);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					CLEAR_ACTOR_MIN_SPEED(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_581);
					Function_351(3, 0, 1);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_581, 1);
					SET_ACTOR_MAX_SPEED(&bLocal_581, 4);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, 2);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &uLocal_978, 0);
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1144 + 8, &iLocal_4 + 1832, 20.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
				{
					Function_283(&iLocal_4 + 1384);
					uLocal_990 = Function_283(&iLocal_4 + 1384);
					SET_ACTOR_MAX_SPEED(&iLocal_4 + 416[02], 4);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &uLocal_990, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1144 + 8, &iLocal_4 + 1824, -4.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_4 + 416[02], bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 416[02], 2);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
				{
					SET_ACTOR_MAX_SPEED(&iLocal_4 + 416[12], 4);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &uLocal_990, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1144 + 8, &iLocal_4 + 1840, -4.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_4 + 416[12], bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 416[12], 2);
				}
				if (iLocal_597[3] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1144 + 64))
					{
						Function_330();
						Function_329();
						Function_271(&Local_1144 + 64);
						Function_327(&Local_1144 + 64, &iLocal_4 + 632);
						Function_326(&Local_1096 + 64, 2, 1);
						Function_326(&Local_1096 + 88, 2, 1);
						Function_326(&Local_1096 + 72, 2, 1);
					}
				}
				bLocal_1014 = false;
				if (SQUAD_IS_VALID(&Local_1144 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1144 + 72);
					Function_272(&Local_1144 + 72);
				}
				*(&Local_1144 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1144 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1144 + 80);
					Function_272(&Local_1144 + 80);
				}
				*(&Local_1144 + 16) = &iLocal_4 + 1384;
				GET_OBJECT_POSITION(&iLocal_4 + 1384, &uLocal_981);
				if (SQUAD_IS_VALID(&Local_1144 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1144 + 88);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 800, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1144 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				}
				Function_325();
				Function_293(&iLocal_585);
				iLocal_577 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_267(&iLocal_585) <= 5.0f)
			{
				Function_324("ranch07_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_267(&iLocal_585) <= 8.0f)
			{
				if (IS_OBJECT_VALID(&uLocal_1080))
				{
					SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1080, 1);
				}
				Function_139("ranch07_obj05_start1", 4.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_267(&iLocal_585) <= 5.0f)
			{
				if (IS_OBJECT_VALID(&uLocal_1080))
				{
					SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1080, 0);
				}
				Function_139("ranch07_obj05_start2", 10.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, &cLocal_470, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					REMOVE_BLIP(&bLocal_1002);
				}
				if (IS_OBJECT_VALID(&bLocal_1004))
				{
					DESTROY_OBJECT(&bLocal_1004);
				}
				if (bLocal_1012)
				{
					Function_320();
				}
			}
			else
			{
				if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (!bLocal_1012)
					{
						Function_244();
						Function_319();
					}
				}
				if (bLocal_1014)
				{
					if (Function_312(&fLocal_593, 245.0f, 385.0f, &Local_1144 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0))
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
					}
					else
					{
						if (!IS_BLIP_VALID(&bLocal_1002))
						{
							bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1384, 330, 0f, 2, 0);
							if (IS_BLIP_VALID(&bLocal_1002))
							{
							}
						}
						if (!IS_OBJECT_VALID(&bLocal_1004))
						{
							GET_OBJECT_POSITION(&iLocal_4 + 1384, &Local_984);
							GET_OBJECT_ORIENTATION(&iLocal_4 + 1384, &Local_987);
							bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
							if (IS_OBJECT_VALID(&bLocal_1004))
							{
							}
						}
					}
				}
				else if (Function_312(&fLocal_593, 190.0f, 330.0f, &Local_1144 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0))
				{
					if (IS_BLIP_VALID(&bLocal_1002))
					{
						REMOVE_BLIP(&bLocal_1002);
					}
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
						DESTROY_OBJECT(&bLocal_1004);
					}
				}
				else
				{
					if (!IS_BLIP_VALID(&bLocal_1002))
					{
						bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1384, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(&bLocal_1002))
						{
						}
					}
					if (!IS_OBJECT_VALID(&bLocal_1004))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1384, &Local_984);
						GET_OBJECT_ORIENTATION(&iLocal_4 + 1384, &Local_987);
						bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
						}
					}
				}
				if (((SQUAD_IS_VALID(&Local_1144 + 64) && SQUAD_IS_VALID(&Local_1144 + 88)) && SQUAD_IS_VALID(&Local_1144 + 72)) && SQUAD_IS_VALID(&Local_1144 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1144 + 64) != 0 && SQUAD_GET_SIZE(&Local_1144 + 72) != 0) && SQUAD_GET_SIZE(&Local_1144 + 80) != 0)
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
						Function_311(&Local_1144 + 64);
						Function_311(&Local_1144 + 72);
						Function_311(&Local_1144 + 80);
						Function_311(&Local_1144 + 88);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_293(&iLocal_585);
						iLocal_577 = 11;
					}
				}
				if (Local_1144.f_148)
				{
					if (Function_267(&Local_1144 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1144 + 16)) && IS_OBJECT_VALID(&Local_1144 + 8))
						{
							if (Function_308(&bLocal_581, &Local_1144 + 16, 25.0f))
							{
								if (Function_308(&Global_54076, &Local_1144 + 16, 25.0f) && Function_308(&Global_54076, &Local_1144 + 8, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1144 + 64) && SQUAD_IS_VALID(&Local_1144 + 80)) && SQUAD_IS_VALID(&Local_1144 + 72)) && SQUAD_IS_VALID(&Local_1144 + 88))
									{
										Function_270(&Local_1144 + 64, &Local_1144 + 88);
										Function_270(&Local_1144 + 80, &Local_1144 + 88);
										Function_270(&Local_1144 + 72, &Local_1144 + 88);
									}
									Function_293(&Local_1144 + 132);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_267(&iLocal_585) <= 5.0f)
			{
				Function_244();
				Function_293(&iLocal_585);
				iLocal_577 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_597[4] = 1;
				Function_293(&iLocal_585);
				iLocal_576 = 101;
				iLocal_577 = 0;
			}
			break;
	}
	return;
}

bool Function_308(bool bParam0, var uParam1, float fParam2) //Position: 0xF403 / 62467
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_310(&bParam0);
			Function_309(&uParam1);
			if (VDIST(Function_310(&bParam0), Function_309(&uParam1)) >= fParam2)
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

struct<8> Function_309(int iParam0) //Position: 0xF521 / 62753
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

struct<8> Function_310(int iParam0) //Position: 0xF58F / 62863
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

void Function_311(bool bParam0) //Position: 0xF5FB / 62971
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

bool Function_312(struct<2> Param0, float fParam2, int iParam3, bool bParam4, char* cParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0xF64F / 63055
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_308(&Global_54076, &iParam3, fParam2))
	{
		Function_236(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_308(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_318(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_324(&bParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_317(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_316(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_316(&iParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
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
	if (Function_318(1))
	{
		Function_315(1);
		if (!Function_314())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_313();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_316(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_316(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_313() //Position: 0xF7F8 / 63480
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

bool Function_314() //Position: 0xF826 / 63526
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

void Function_315(int iParam0) //Position: 0xF86D / 63597
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, iParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_316(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xF8D4 / 63700
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

void Function_317(int iParam0) //Position: 0xF98F / 63887
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, iParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_318(bool bParam0) //Position: 0xF9F6 / 63990
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

void Function_319() //Position: 0xFA40 / 64064
{
	bLocal_1012 = true;
	if (iLocal_576 == 4)
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1144 + 64, &Local_1144 + 96, &Global_54076, 22.0f, 6.0f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1144 + 64, &Local_1144 + 96, &Global_54076, 23.0f, 1.0f, 15.0f, 10.0f, 0);
	}
	else
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1096 + 64, &Local_1096 + 96, &Global_54076, 15.0f, 4,5f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1096 + 64, &Local_1096 + 96, &Global_54076, 23.0f, 1.0f, 9.0f, 7.0f, 0);
	}
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	return;
}

void Function_320() //Position: 0xFAE3 / 64227
{
	int iVar0;
	var uVar1;
	
	bLocal_1012 = false;
	if (iLocal_576 == 4)
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1144 + 64, &Local_1144 + 96, &Global_54076);
		if (IS_OBJECT_VALID(&Local_1144 + 8))
		{
			iVar0 = GET_BLIP_ON_OBJECT(&Local_1144 + 8);
			if (IS_BLIP_VALID(&iVar0))
			{
				REMOVE_BLIP(&iVar0);
			}
		}
		if (IS_OBJECT_VALID(&Local_1144))
		{
			uVar1 = GET_BLIP_ON_OBJECT(&Local_1144);
			if (IS_BLIP_VALID(&uVar1))
			{
				REMOVE_BLIP(&uVar1);
			}
		}
		Function_311(&Local_1144 + 64);
		Function_311(&Local_1144 + 72);
		Function_311(&Local_1144 + 80);
		Function_311(&Local_1144 + 88);
	}
	else
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1096 + 64, &Local_1096 + 96, &Global_54076);
		if (IS_OBJECT_VALID(&Local_1096 + 8))
		{
			iVar0 = GET_BLIP_ON_OBJECT(&Local_1096 + 8);
			if (IS_BLIP_VALID(&iVar0))
			{
				REMOVE_BLIP(&iVar0);
			}
		}
		if (IS_OBJECT_VALID(&Local_1096))
		{
			uVar1 = GET_BLIP_ON_OBJECT(&Local_1096);
			if (IS_BLIP_VALID(&uVar1))
			{
				REMOVE_BLIP(&uVar1);
			}
		}
		Function_311(&Local_1096 + 64);
		Function_311(&Local_1096 + 72);
		Function_311(&Local_1096 + 80);
		Function_311(&Local_1096 + 88);
	}
	DECOR_REMOVE(&Global_54076, "herding");
	return;
}

bool Function_321(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10) //Position: 0xFC0B / 64523
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_318(16))
			{
				if (&bParam7)
				{
					Function_244();
				}
				if (!Function_323())
				{
					Function_324(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_317(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_236(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_318(8))
		{
			if (&bParam7)
			{
				Function_244();
			}
			if (!Function_323())
			{
				Function_324(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_317(8);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_316(&iParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_316(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_318(8))
	{
		Function_315(8);
		if (!Function_314())
		{
			Function_322();
			Function_313();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_316(&iParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_316(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_322() //Position: 0xFD81 / 64897
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_323() //Position: 0xFD8D / 64909
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_324(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xFD9A / 64922
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

void Function_325() //Position: 0xFE2F / 65071
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_smallToLarge", "Ranch07_smallToLarge", false, 2, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_326(var uParam0, bool bParam1, int iParam2) //Position: 0xFE80 / 65152
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
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_VOLUME_PARAMETERS(&uVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return 1;
}

void Function_327(var uParam0, int[] iParam1) //Position: 0xFEC8 / 65224
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_328(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_328(bool bParam0, int iParam1) //Position: 0xFF11 / 65297
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_329() //Position: 0xFF6F / 65391
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1144 + 64, &Local_1144 + 96, &Local_1144 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_330() //Position: 0xFF9A / 65434
{
	Function_272(&Local_1144 + 64);
	SQUAD_GOALS_CLEAR(&Local_1144 + 64);
	(&Local_1144 + 96) = UNK_0x48588CCB(&Local_1144 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1144 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1144 + 64, &Local_1144 + 96);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1144 + 64, &Local_1144 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1144 + 64, &Local_1144 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1144 + 64, &Local_1144 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1144 + 64, &Local_1144 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1144 + 64, &Local_1144 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		if (IS_VOLUME_VALID(&Local_1144 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_581);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1144 + 56);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_581, &Local_1144 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1144 + 64, &Local_1144 + 96, &bLocal_581, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
	{
		if (IS_VOLUME_VALID(&Local_1144 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 416[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 416[02], &Local_1144 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1144 + 64, &Local_1144 + 96, &iLocal_4 + 416[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
	{
		if (IS_VOLUME_VALID(&Local_1144 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_4 + 416[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 416[12], &Local_1144 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1144 + 64, &Local_1144 + 96, &iLocal_4 + 416[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	bLocal_1012 = true;
	return;
}

int Function_331(bool bParam0, bool bParam1, float fParam2) //Position: 0x10176 / 65910
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_332() //Position: 0x10218 / 66072
{
	return Global_53524.f_68;
}

void Function_333(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x10223 / 66083
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (bParam2 != Global_53524.f_48 && !Function_340())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_339(0);
	Function_338();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_336(bParam2);
	}
	Function_335(uParam3, iVar0, iVar1);
	Function_334();
}

void Function_334() //Position: 0x102CC / 66252
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

void Function_335(int iParam0, bool bParam1, bool bParam2) //Position: 0x1030D / 66317
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

void Function_336(bool bParam0) //Position: 0x10476 / 66678
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_337() };
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

struct<16> Function_337() //Position: 0x1060E / 67086
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

void Function_338() //Position: 0x10654 / 67156
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_339(bool bParam0) //Position: 0x10678 / 67192
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

bool Function_340() //Position: 0x106A7 / 67239
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_341(bool bParam0) //Position: 0x106C2 / 67266
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 920[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 968[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1032[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 1112[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 1176[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1256[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 920[0]);
}

struct<8> Function_342(bool bParam0) //Position: 0x107BD / 67517
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_283(&iLocal_4 + 920[0]);
			return StackVal, Function_283(&iLocal_4 + 920[0]);
			break;
		
		case 0x00000001:
			Function_283(&iLocal_4 + 968[0]);
			return StackVal, Function_283(&iLocal_4 + 968[0]);
			break;
		
		case 0x00000002:
			Function_283(&iLocal_4 + 1032[0]);
			return StackVal, Function_283(&iLocal_4 + 1032[0]);
			break;
		
		case 0x00000003:
			Function_283(&iLocal_4 + 1112[0]);
			return StackVal, Function_283(&iLocal_4 + 1112[0]);
			break;
		
		case 0x00000004:
			Function_283(&iLocal_4 + 1176[0]);
			return StackVal, Function_283(&iLocal_4 + 1176[0]);
			break;
		
		default:
			Function_283(&iLocal_4 + 1256[0]);
			return StackVal, Function_283(&iLocal_4 + 1256[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_283(&iLocal_4 + 920[0]);
	return StackVal, Function_283(&iLocal_4 + 920[0]);
}

void Function_343(struct<69> Param0) //Position: 0x108B8 / 67768
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

int Function_344(struct<69> Param0) //Position: 0x10978 / 67960
{
	if (!Function_350(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_349(&Param0, &bParam2))
	{
		return 0;
	}
	Function_348(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_345(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_345(var uParam0, int iParam1, int iParam2) //Position: 0x109BE / 68030
{
	if (iParam1 != 100000000)
	{
		Function_347(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_346(&uParam0, &iParam2);
	}
	return;
}

void Function_346(struct<69> Param0) //Position: 0x109E5 / 68069
{
	Param0.f_68 = 0;
	Function_347(&Param0, 2, &bParam1);
	Function_347(&Param0, 4, &bParam1);
	Function_347(&Param0, 8, &bParam1);
	Function_347(&Param0, 16, &bParam1);
	Function_347(&Param0, 32, &bParam1);
	Function_347(&Param0, 64, &bParam1);
	Function_347(&Param0, 128, &bParam1);
	Function_347(&Param0, 256, &bParam1);
	Function_347(&Param0, 512, &bParam1);
	Function_347(&Param0, 1024, &bParam1);
	return;
}

void Function_347(int iParam0, int iParam1, bool bParam2) //Position: 0x10A60 / 68192
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

void Function_348(struct<65> Param0) //Position: 0x10A9F / 68255
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_349(int iParam0, char* cParam1) //Position: 0x10AAC / 68268
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

bool Function_350(struct<61> Param0) //Position: 0x10B39 / 68409
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

void Function_351(int iParam0, bool bParam1, bool bParam2) //Position: 0x10CEC / 68844
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
						Function_229(&uVar1);
					}
				}
				Function_352(&uVar0);
			}
		}
	}
	return;
}

void Function_352(bool bParam0) //Position: 0x10DFB / 69115
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

bool Function_353(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x10E2E / 69166
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
		Function_358(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_357())
		{
			return "";
		}
	}
	if (!Function_355())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_211();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_283(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_283(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_283(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_283(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_354(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_354(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
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
				Var8 = Vector(&fParam2, &fParam3, &fParam4);
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
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
		Function_289(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_354(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1118B / 70027
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

bool Function_355() //Position: 0x1122B / 70187
{
	if (Function_356() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_356() //Position: 0x11241 / 70209
{
	return Global_21369.f_244;
}

bool Function_357() //Position: 0x1124C / 70220
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_358(var uParam0, bool bParam1, bool bParam2) //Position: 0x1126C / 70252
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

void Function_359() //Position: 0x1129B / 70299
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1176[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_287();
		if (SQUAD_IS_VALID(&iLocal_4 + 312))
		{
			Function_291(&iLocal_4 + 312, 0);
			Function_290(&iLocal_4 + 312, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 456))
	{
		Function_286();
		if (SQUAD_IS_VALID(&iLocal_4 + 456))
		{
			Function_285(&iLocal_4 + 456, 1);
			SQUAD_SET_FACTION(&iLocal_4 + 456, 20);
			Function_288(&iLocal_4 + 456, 0, 0, 0);
			Function_291(&iLocal_4 + 456, 0);
			if (SQUAD_IS_VALID(&iLocal_4 + 312))
			{
				Function_273(&iLocal_4 + 456, &iLocal_4 + 312);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 456, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_360();
	return;
}

void Function_360() //Position: 0x1140F / 70671
{
	Function_284();
	*(&Local_1144 + 24) = &iLocal_4 + 1832;
	if (!SQUAD_IS_VALID(&Local_1144 + 64))
	{
		*(&Local_1144 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1144 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1144 + 64);
			Function_280(&Local_1144, &cLocal_470, &iLocal_4 + 1376, &iLocal_1070, 5, 4,5f, 7.0f, 1,5f, 1);
			Function_291(&Local_1144 + 64, 0);
			Function_279(&Local_1144 + 64, 1);
			Function_278(&Local_1144 + 64, 0);
			Function_277(&Local_1144 + 64, 0);
			Function_276(&Local_1144 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1144 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 792, -1.0f);
		}
	}
	return;
}

void Function_361() //Position: 0x114EF / 70895
{
	if (Function_267(&iLocal_1046) <= 0,1f)
	{
		switch (iLocal_953)
		{
			case 0x00000000:
				Function_293(&iLocal_589);
				Function_293(&iLocal_1062);
				Function_293(&iLocal_1066);
				iLocal_953++;
				break;
			
			case 0x00000001:
				if (iLocal_577 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_380();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_953++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_364(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (!iLocal_1028)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_953++;
					}
				}
				break;
			
			case 0x00000003:
				Function_364(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (!iLocal_1033)
				{
					if (Function_267(&iLocal_589) <= 5.0f)
					{
						if (SQUAD_GET_SIZE(&Local_1144 + 72) <= 4 || SQUAD_GET_SIZE(&Local_1144 + 80) <= 4)
						{
							Function_363();
							Function_293(&iLocal_589);
						}
					}
				}
				if (SQUAD_GET_SIZE(&Local_1144 + 72) != 0 && SQUAD_GET_SIZE(&Local_1144 + 80) != 0)
				{
					if (Function_267(&iLocal_589) <= 3.0f)
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 416[02], 24.0f))
							{
								if (Function_362(RAND_INT_RANGE(false, true)))
								{
									SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 416[02], "Ranch07_goodJob6", &Global_54076, 1, 0, 0, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 416[02], "Ranch07_greatJob6", &Global_54076, 1, 0, 0, 0, 0);
								}
							}
						}
						Function_293(&iLocal_589);
					}
					if (Function_267(&iLocal_1062) <= 4.0f)
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 416[12], 24.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 416[12], "Ranch07_greatJob7", &Global_54076, 1, 0, 0, 0, 0);
							}
						}
						Function_293(&iLocal_1062);
					}
				}
				break;
			
			case 0x00000004:
				iLocal_953++;
				break;
		}
		Function_293(&iLocal_1046);
	}
	return;
}

bool Function_362(bool bParam0) //Position: 0x11705 / 71429
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

void Function_363() //Position: 0x11717 / 71447
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_loseHerdControl", "Ranch07_loseHerdControl", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_364(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x1176E / 71534
{
	if (Function_267(&iLocal_1042) <= 6.0f)
	{
		Function_372();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_offHorse", "Ranch07_offHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		if (!IS_ACTOR_RIDING(&bLocal_581))
		{
			if (&bParam0)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_371();
				Function_293(&iLocal_1042);
			}
		}
		if (&bParam5)
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, 1,15f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_rideIntoBonHorse", "Ranch07_rideIntoBonHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		if (!iLocal_1033)
		{
			if (&bParam1)
			{
				Function_283(&Local_1144 + 16);
				if (!Function_370(StackVal, &Local_1144 + 64, Function_283(&Local_1144 + 16), 135.0f))
				{
					if (&bParam1)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_herdWrongDirec", "Ranch07_herdWrongDirec", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_293(&iLocal_1042);
					}
				}
				if (SQUAD_GET_SIZE(&Local_1144 + 72) <= 3 || SQUAD_GET_SIZE(&Local_1144 + 80) <= 3)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_herdBadly", "Ranch07_herdBadly", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_293(&iLocal_1042);
				}
				else if (SQUAD_GET_SIZE(&Local_1144 + 72) <= 1 || SQUAD_GET_SIZE(&Local_1144 + 80) <= 1)
				{
					if (!Function_308(&Global_54076, &Local_1144 + 8, 35.0f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_returnStragglers", "Ranch07_returnStragglers", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_293(&iLocal_1042);
					}
				}
			}
			if (&bParam2)
			{
				if (SQUAD_IS_VALID(&Local_1144 + 72) && SQUAD_IS_VALID(&Local_1144 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1144 + 72) != 0 && SQUAD_GET_SIZE(&Local_1144 + 80) != 0)
					{
						if (!Function_308(&Global_54076, &Local_1144 + 8, &fParam3) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_581, &fParam3))
						{
							if (!iLocal_1028)
							{
								bLocal_1006 = &iLocal_4 + 1832;
								if (Function_369(&Global_54076, &bLocal_581, &bLocal_1006))
								{
									iLocal_1028 = 1;
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_368();
									Function_293(&iLocal_1042);
								}
								else
								{
									iLocal_1028 = 1;
									ABORT_SCRIPTED_CONVERSATION(1);
									if (Function_362(RAND_INT_RANGE(false, true)))
									{
										Function_367();
									}
									else
									{
										Function_366();
									}
									Function_293(&iLocal_1042);
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, &fParam4) && Function_308(&Global_54076, &Local_1144 + 8, &fParam4))
			{
				if (&bParam2)
				{
					if (iLocal_1028)
					{
						iLocal_1028 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_365();
						Function_293(&iLocal_1042);
					}
				}
			}
		}
	}
}

void Function_365() //Position: 0x11AB5 / 72373
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_comesBack", "Ranch07_comesBack", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_366() //Position: 0x11B00 / 72448
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_wrongDirec", "Ranch07_wrongDirec", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_367() //Position: 0x11B4D / 72525
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_farAhead", "Ranch07_farAhead", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_368() //Position: 0x11B96 / 72598
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_farBehind", "Ranch07_farBehind", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_369(var uParam0, bool bParam1, int iParam2) //Position: 0x11BE1 / 72673
{
	var uVar0;
	var uVar2;
	float fVar4;
	var uVar5;
	float fVar6;
	var uVar7;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			if (IS_OBJECT_VALID(&iParam2))
			{
				GET_OBJECT_POSITION(&uParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(&iParam2, &uVar0, &fVar4, &uVar5);
				GET_OBJECT_POSITION(&bParam1, &uVar2);
				ESTIMATE_DISTANCE_ALONG_PATH(&iParam2, &uVar2, &fVar6, &uVar7);
				if (fVar4 > fVar6)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_370(var uParam0, struct<2> Param1, float fParam3) //Position: 0x11C40 / 72768
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				GET_POSITION(&uVar1, &Var2);
				uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1, StackVal);
				UNK_0x44986367(&uVar4, GET_HEADING(&uVar1));
				fVar8 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar4, &uVar6);
				fVar9 = (fVar9 + fVar8);
			}
			bVar0++;
		}
		fVar10 = (fVar9 / IntToFloat(SQUAD_GET_SIZE(&uParam0)));
		if (fVar10 >= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void Function_371() //Position: 0x11CCC / 72908
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_pullBonOff", "Ranch07_pullBonOff", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372() //Position: 0x11D19 / 72985
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_581)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_379(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_378();
						Function_293(&iLocal_1042);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_377();
						Function_293(&iLocal_1042);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_377();
					Function_293(&iLocal_1042);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_gunBonnie", "Ranch07_gunBonnie", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		else if (&iVar0 == &iLocal_4 + 240[02])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_379(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_376();
						Function_293(&iLocal_1042);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_376();
						Function_293(&iLocal_1042);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_376();
					Function_293(&iLocal_1042);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_gunBonnie", "Ranch07_gunBonnie", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_379(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_375();
						Function_293(&iLocal_1042);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_374();
						Function_293(&iLocal_1042);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_374();
					Function_293(&iLocal_1042);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_gunOnChar", "Ranch07_gunOnChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		else if (IS_ACTOR_SHOOTING(&Global_54076))
		{
			if (IS_WEAPON_DRAWN(&Global_54076))
			{
				if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
				{
					if (((Function_373(&Local_1096 + 64, &Global_54076) || Function_373(&Local_1096 + 72, &Global_54076)) || Function_373(&Local_1096 + 80, &Global_54076)) || Function_373(&Local_1096 + 88, &Global_54076))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_lassosCow", "Ranch07_lassosCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_293(&iLocal_1042);
					}
				}
			}
		}
	}
	else if (!iLocal_576 != 0)
	{
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_379(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_shootRandom", "Ranch07_shootRandom", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_293(&iLocal_1042);
					}
				}
			}
		}
	}
	return;
}

int Function_373(var uParam0, int iParam1) //Position: 0x1205E / 73822
{
	bool bVar0;
	int iVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (GET_LASSO_USER(&iParam1) == &iVar1)
					{
						return 1;
					}
				}
				bVar0++;
			}
		}
	}
	return 0;
}

void Function_374() //Position: 0x120B8 / 73912
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_assaultChar", "Ranch07_assaultChar", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375() //Position: 0x12107 / 73991
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_shootChar", "Ranch07_shootChar", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_376() //Position: 0x12152 / 74066
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_shootBonsHorse", "Ranch07_shootBonsHorse", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_377() //Position: 0x121A7 / 74151
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_assaultBonnie", "Ranch07_assaultBonnie", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_378() //Position: 0x121FA / 74234
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_shootBonnie", "Ranch07_shootBonnie", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_379(bool bParam0) //Position: 0x12249 / 74313
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

void Function_380() //Position: 0x1228F / 74383
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_remindHerd", "Ranch07_remindHerd", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_381(var uParam0) //Position: 0x122DC / 74460
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_LASSO_TARGET(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (GET_TASK_STATUS(&uVar0, 4294967295) == 1)
			{
				TASK_CLEAR(&uVar0);
			}
		}
	}
	return;
}

void Function_382() //Position: 0x12311 / 74513
{
	if (SQUAD_IS_VALID(&Local_1144 + 64))
	{
		switch (iLocal_952)
		{
			case 0x00000000:
				iLocal_952++;
				break;
			
			case 0x00000001:
				if (IS_VOLUME_VALID(&iLocal_4 + 712))
				{
					if (IS_OBJECT_VALID(&Local_1144 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1144 + 8, &iLocal_4 + 712))
						{
							iLocal_952++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (SQUAD_GOAL_IS_VALID(&Local_1144 + 96))
				{
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1144 + 64, &Local_1144 + 96, &iLocal_4 + 1832);
					SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1144 + 64, &Local_1144 + 96, &iLocal_4 + 1832, 75.0f, 1.0f, 0,25f, 1082130432);
					iLocal_952++;
				}
				break;
			
			case 0x00000003:
				iLocal_952++;
				break;
			}
	}
	return;
}

void Function_383(var uParam0, int iParam1, float fParam2, var uParam3, bool bParam4) //Position: 0x123DF / 74719
{
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		if (SQUAD_IS_VALID(&uParam0))
		{
			switch (iLocal_951)
			{
				case 0x00000000:
					iLocal_951++;
					break;
				
				case 0x00000001:
					if (Function_267(&iParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(&uParam0))
						{
							if (SQUAD_GET_SIZE(&uParam0) > 1)
							{
								if (!bLocal_1014)
								{
									uLocal_1008 = Function_385(&uParam0, &Local_1144 + 8);
									if (IS_ACTOR_VALID(&uLocal_1008))
									{
										uLocal_978 = Vector(0.0f, 0.0f, 0.0f);
										SET_ACTOR_MAX_SPEED(&bLocal_581, 4);
										bLocal_949 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &uLocal_1008, &uLocal_978, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
										TASK_SEQUENCE_RELEASE(bLocal_949, 1);
										TASK_PRIORITY_SET(&bLocal_581, true);
										bLocal_1014 = true;
									}
								}
								else if (!Function_384(&uLocal_1008, &uParam0, 0))
								{
									bLocal_1014 = false;
								}
							}
							else if (!GET_TASK_STATUS(&bLocal_581, 72) != 1)
							{
								SET_ACTOR_MAX_SPEED(&bLocal_581, 4);
								bLocal_949 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1144 + 8, &uParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
								TASK_SEQUENCE_RELEASE(bLocal_949, 1);
								TASK_PRIORITY_SET(&bLocal_581, true);
								bLocal_1014 = false;
							}
						}
						Function_293(&iParam1);
					}
					break;
				
				case 0x00000003:
					iLocal_951++;
					break;
			}
		}
	}
}

bool Function_384(int iParam0, int iParam1, bool bParam2) //Position: 0x1253D / 75069
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

var Function_385(var uParam0, int iParam1) //Position: 0x12585 / 75141
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			bVar1 = 4294967295;
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				if (bVar0 >= 4294967295)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				}
				if (IS_ACTOR_VALID(&uVar2))
				{
					fVar3 = Function_386(&iParam1, &uVar2);
					if (bVar1 > 0 || fVar3 < fVar4)
					{
						fVar4 = fVar3;
						bVar1 = bVar0;
					}
				}
				bVar0++;
			}
			if (bVar1 > 0)
			{
				return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			}
		}
	}
	return "";
}

var Function_386(int iParam0, int iParam1) //Position: 0x1260A / 75274
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_309(&iParam0);
			Var0 = Function_309(&iParam0);
			Function_309(&iParam1);
			Var2 = Function_309(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_387(struct<149> Param0) //Position: 0x126A7 / 75431
{
	bool bVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (SQUAD_IS_VALID(&Param0 + 80))
	{
		if (SQUAD_IS_VALID(&Param0 + 72))
		{
			if (SQUAD_IS_VALID(&Param0 + 64))
			{
				if (IS_OBJECT_VALID(&Param0 + 8))
				{
					if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
					{
						fVar3 = 6.0f;
						fVar4 = 12.0f;
					}
					else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
					{
						fVar3 = 9.0f;
						fVar4 = 20.0f;
					}
					else
					{
						fVar3 = 10.0f;
						fVar4 = 23.0f;
					}
					if (!Param0.f_148)
					{
						if (SQUAD_GET_SIZE(&Param0 + 64) != 0 && SQUAD_GET_SIZE(&Param0 + 72) != 0)
						{
							if (SQUAD_GET_SIZE(&Param0 + 80) == 1)
							{
								bVar0 = false;
								while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
								{
									iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar0);
									if (IS_ACTOR_VALID(&iVar1))
									{
										if (!Function_308(&iVar1, &Param0 + 16, fVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(&iVar1);
											TASK_CLEAR(&iVar1);
											SQUAD_LEAVE(&iVar1);
											SQUAD_JOIN(&iVar1, &Param0 + 64);
											if (DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(&iVar1, "bRejoinInProgress");
											}
											if (&bParam1)
											{
												uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
												if (IS_BLIP_VALID(&uVar2))
												{
													REMOVE_BLIP(&uVar2);
												}
											}
											if (DECOR_GET_BOOL(&iVar1, "bIsStraggler"))
											{
												Param0.f_124++;
												DECOR_REMOVE(&iVar1, "bIsStraggler");
											}
										}
									}
									bVar0++;
								}
							}
						}
					}
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
					{
						iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar0);
						if (IS_ACTOR_VALID(&iVar1))
						{
							if (&bParam1)
							{
								uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
								if (!IS_BLIP_VALID(&uVar2))
								{
									uVar2 = ADD_BLIP_FOR_ACTOR(&iVar1, 425, 0, 2, 0);
									SET_BLIP_FLAG(&uVar2, 4096, 0);
								}
								else if (!GET_BLIP_ICON(&uVar2) != 425)
								{
									CHANGE_BLIP_ICON(&uVar2, 425);
									SET_BLIP_FLAG(&uVar2, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(&iVar1, 26) != 1)
							{
								if (!GET_LASSO_TARGET(&Global_54076) != &iVar1)
								{
									Param0.f_128 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&iVar1, Param0.f_128);
									TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
									TASK_PRIORITY_SET(&iVar1, true);
								}
							}
							if (Function_308(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_308(&iVar1, &Param0 + 16, fVar4))
								{
								}
								else
								{
									CLEAR_ACTOR_MAX_SPEED(&iVar1);
									TASK_CLEAR(&iVar1);
									SQUAD_LEAVE(&iVar1);
									SQUAD_JOIN(&iVar1, &Param0 + 64);
									if (DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(&iVar1, "bRejoinInProgress");
									}
									if (&bParam1)
									{
										uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
										if (IS_BLIP_VALID(&uVar2))
										{
											REMOVE_BLIP(&uVar2);
										}
									}
									if (DECOR_GET_BOOL(&iVar1, "bIsStraggler"))
									{
										Param0.f_124++;
										DECOR_REMOVE(&iVar1, "bIsStraggler");
									}
								}
							}
							if (Function_267(&Param0 + 132) <= &fParam2)
							{
								Function_293(&Param0 + 132);
							}
						}
						bVar0++;
					}
				}
			}
		}
	}
	return;
}

void Function_388(struct<153> Param0) //Position: 0x12A31 / 76337
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if (SQUAD_IS_VALID(&Param0 + 64))
	{
		if (SQUAD_IS_VALID(&Param0 + 72))
		{
			if (SQUAD_IS_VALID(&Param0 + 80))
			{
				if (IS_OBJECT_VALID(&Param0 + 8))
				{
					if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
					{
						iVar4 = 1;
						fVar7 = 7.0f;
						fVar5 = 12.0f;
						fVar6 = 14.0f;
					}
					else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
					{
						iVar4 = 3;
						fVar7 = 12.0f;
						fVar5 = 20.0f;
						fVar6 = 22.0f;
					}
					else
					{
						iVar4 = 3;
						fVar7 = 15.0f;
						fVar5 = 23.0f;
						fVar6 = 25.0f;
					}
					if (SQUAD_GET_SIZE(&Param0 + 64) < iVar4)
					{
						if (!Param0.f_148)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 64) - 1))
							{
								iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 64, bVar2);
								if (IS_ACTOR_VALID(&iVar0))
								{
									if (!Function_308(&iVar0, &Param0 + 16, fVar7))
									{
										SET_ACTOR_MAX_SPEED(&iVar0, 4);
										SQUAD_LEAVE(&iVar0);
										SQUAD_JOIN(&iVar0, &Param0 + 80);
										Param0.f_128 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
										TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
										TASK_PRIORITY_SET(&iVar0, true);
										if (&bParam1)
										{
											iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
											if (!IS_BLIP_VALID(&iVar1))
											{
												iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 425, 0, 2, 0);
												SET_BLIP_FLAG(&iVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(&iVar1, 425);
												SET_BLIP_FLAG(&iVar1, 4096, 0);
											}
										}
									}
									else
									{
										CLEAR_ACTOR_MAX_SPEED(&iVar0);
										TASK_CLEAR(&iVar0);
										SQUAD_LEAVE(&iVar0);
										SQUAD_JOIN(&iVar0, &Param0 + 88);
										if (DECOR_GET_BOOL(&iVar0, "bRejoinInProgress"))
										{
											DECOR_SET_BOOL(&iVar0, "bRejoinInProgress", false);
										}
										if (&bParam1)
										{
											iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
											if (IS_BLIP_VALID(&iVar1))
											{
												REMOVE_BLIP(&iVar1);
											}
										}
									}
								}
								if (SQUAD_GET_SIZE(&Param0 + 64) == 0)
								{
									Param0.f_148 = 1;
									Function_293(&Param0 + 132);
								}
								bVar2++;
							}
						}
					}
					else
					{
						bVar2 = false;
						while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 64) - 1))
						{
							iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 64, bVar2);
							if (IS_ACTOR_VALID(&iVar0))
							{
								if (!Function_308(&iVar0, &Param0 + 8, fVar6))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									Param0.f_128 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
									TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
									TASK_PRIORITY_SET(&iVar0, true);
									if (&bParam1)
									{
										iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
										if (!IS_BLIP_VALID(&iVar1))
										{
											iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(&iVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(&iVar1, 425);
											SET_BLIP_FLAG(&iVar1, 4096, 0);
										}
									}
									if (!DECOR_GET_BOOL(&iVar0, "bIsStraggler"))
									{
										Param0.f_120++;
										DECOR_SET_BOOL(&iVar0, "bIsStraggler", true);
									}
								}
							}
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 72) - 1))
					{
						iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 72, bVar2);
						if (IS_ACTOR_VALID(&iVar0))
						{
							if (&bParam1)
							{
								iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
								if (!IS_BLIP_VALID(&iVar1))
								{
									iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 425, 0, 2, 0);
									SET_BLIP_FLAG(&iVar1, 4096, 0);
								}
								else if (!GET_BLIP_ICON(&iVar1) != 425)
								{
									CHANGE_BLIP_ICON(&iVar1, 425);
									SET_BLIP_FLAG(&iVar1, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(&iVar0, 26) != 1)
							{
								if (!GET_LASSO_TARGET(&Global_54076) != &iVar0)
								{
									Param0.f_128 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
									TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
									TASK_PRIORITY_SET(&iVar0, true);
								}
							}
							if (IS_OBJECT_VALID(&Param0 + 8) && IS_OBJECT_VALID(&Param0 + 16))
							{
								if (Function_308(&iVar0, &Param0 + 8, fVar5) || Function_308(&iVar0, &Param0 + 16, fVar5))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_308(&iVar0, &Param0 + 8, fVar5))
									{
									}
									else if (Function_308(&iVar0, &Param0 + 16, fVar5))
									{
									}
									Param0.f_128 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
									TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
									TASK_PRIORITY_SET(&iVar0, true);
									if (&bParam1)
									{
										iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
										if (!IS_BLIP_VALID(&iVar1))
										{
											iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(&iVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(&iVar1, 425);
											SET_BLIP_FLAG(&iVar1, 4096, 0);
										}
									}
								}
								else
								{
									bVar3 = false;
									while (bVar3 < (Param0.f_152 - 1))
									{
										if (IS_ACTOR_VALID(&Param0 + 152[bVar3]))
										{
											if (IS_ACTOR_PLAYER(&Param0 + 152[bVar3]))
											{
												if (Function_308(&iVar0, &Param0 + 152[bVar3], 7.0f))
												{
													PRINTINT(bVar3);
													PRINTNL();
													SET_ACTOR_MAX_SPEED(&iVar0, 4);
													SQUAD_LEAVE(&iVar0);
													SQUAD_JOIN(&iVar0, &Param0 + 80);
													Param0.f_128 = TASK_SEQUENCE_OPEN();
													TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
													TASK_SEQUENCE_CLOSE();
													TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
													TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
													TASK_PRIORITY_SET(&iVar0, true);
													if (&bParam1)
													{
														iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
														if (!IS_BLIP_VALID(&iVar1))
														{
															iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 425, 0, 2, 0);
															SET_BLIP_FLAG(&iVar1, 4096, 0);
														}
														else
														{
															CHANGE_BLIP_ICON(&iVar1, 425);
															SET_BLIP_FLAG(&iVar1, 4096, 0);
														}
													}
												}
											}
											else if (Function_308(&iVar0, &Param0 + 152[bVar3], 15.0f))
											{
												PRINTINT(bVar3);
												PRINTNL();
												SET_ACTOR_MAX_SPEED(&iVar0, 4);
												SQUAD_LEAVE(&iVar0);
												SQUAD_JOIN(&iVar0, &Param0 + 80);
												Param0.f_128 = TASK_SEQUENCE_OPEN();
												TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
												TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
												TASK_PRIORITY_SET(&iVar0, true);
												if (&bParam1)
												{
													iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
													if (!IS_BLIP_VALID(&iVar1))
													{
														iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 425, 0, 2, 0);
														SET_BLIP_FLAG(&iVar1, 4096, 0);
													}
													else
													{
														CHANGE_BLIP_ICON(&iVar1, 425);
														SET_BLIP_FLAG(&iVar1, 4096, 0);
													}
												}
												if (DECOR_GET_BOOL(&iVar0, "bIsStraggler"))
												{
													DECOR_REMOVE(&iVar0, "bIsStraggler");
												}
											}
										}
										bVar3++;
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
	}
	return;
}

void Function_389(struct<113> Param0) //Position: 0x1314D / 78157
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (IS_OBJECT_VALID(&Param0 + 8))
	{
		if (SQUAD_IS_VALID(&Param0 + 64))
		{
			if (SQUAD_IS_VALID(&Param0 + 72))
			{
				if (SQUAD_IS_VALID(&Param0 + 88))
				{
					if (SQUAD_IS_VALID(&Param0 + 80))
					{
						if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
						{
							iVar6 = 1;
						}
						else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
						{
							iVar6 = 3;
						}
						else
						{
							iVar6 = 3;
						}
						if (SQUAD_GET_SIZE(&Param0 + 64) < iVar6)
						{
							if (SQUAD_GET_SIZE(&Param0 + 88) > 1)
							{
								if (&bParam1)
								{
									bVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&bVar4))
									{
										REMOVE_BLIP(&bVar4);
									}
									uVar5 = GET_BLIP_ON_OBJECT(&Param0);
									if (IS_BLIP_VALID(&uVar5))
									{
										REMOVE_BLIP(&uVar5);
									}
								}
								if (IS_OBJECT_VALID(&Param0 + 16))
								{
									GET_OBJECT_POSITION(&Param0 + 16, &Var0);
									GET_OBJECT_ORIENTATION(&Param0 + 16, &Var2);
								}
							}
							else if (SQUAD_GET_SIZE(&Param0 + 80) > 1)
							{
								if (&bParam1)
								{
									bVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&bVar4))
									{
										REMOVE_BLIP(&bVar4);
									}
									uVar5 = GET_BLIP_ON_OBJECT(&Param0);
									if (IS_BLIP_VALID(&uVar5))
									{
										REMOVE_BLIP(&uVar5);
									}
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 80, &Var0);
								Function_392(StackVal, Var0, &Param0 + 24);
								Var0 = Function_392(StackVal, Var0, &Param0 + 24);
								Function_390(&Param0 + 64);
								Var2 = Function_390(&Param0 + 64);
							}
							else if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
							{
								if (&bParam1)
								{
									bVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&bVar4))
									{
										REMOVE_BLIP(&bVar4);
									}
									uVar5 = GET_BLIP_ON_OBJECT(&Param0);
									if (IS_BLIP_VALID(&uVar5))
									{
										REMOVE_BLIP(&uVar5);
									}
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 72, &Var0);
								Function_392(StackVal, Var0, &Param0 + 24);
								Var0 = Function_392(StackVal, Var0, &Param0 + 24);
								Function_390(&Param0 + 72);
								Var2 = Function_390(&Param0 + 72);
							}
							else
							{
								if (&bParam1)
								{
									bVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&bVar4))
									{
										REMOVE_BLIP(&bVar4);
									}
									uVar5 = GET_BLIP_ON_OBJECT(&Param0);
									if (IS_BLIP_VALID(&uVar5))
									{
										REMOVE_BLIP(&uVar5);
									}
								}
								if (IS_OBJECT_VALID(&Param0 + 16))
								{
									GET_OBJECT_POSITION(&Param0 + 16, &Var0);
									GET_OBJECT_ORIENTATION(&Param0 + 16, &Var2);
								}
							}
						}
						else
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
							{
								Function_283(&Param0);
								if (!Function_74(StackVal, Function_283(&Param0)))
								{
									uVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(&uVar5))
									{
										SET_BLIP_SCALE(&uVar5, 2,5f);
										SET_BLIP_NAME(&uVar5, "nBLIP_HERD");
										SET_BLIP_FLAG(&uVar5, 4096, 0);
										SET_BLIP_PRIORITY(&uVar5, true);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
							{
								Function_283(&Param0 + 8);
								if (!Function_74(StackVal, Function_283(&Param0 + 8)))
								{
									bVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(&bVar4))
									{
										SET_BLIP_SCALE(&bVar4, 1.0f);
										SET_BLIP_PRIORITY(&bVar4, 2);
									}
								}
							}
							SQUAD_COMPUTE_CENTROID(&Param0 + 64, &Var0);
							Function_390(&Param0 + 64);
							Var2 = Function_390(&Param0 + 64);
						}
						SET_OBJECT_POSITION(&Param0 + 8, Var0);
						SET_OBJECT_POSITION(&Param0, Var0);
						SET_OBJECT_ORIENTATION(&Param0, Var2);
						GET_OBJECT_POSITION(&Param0 + 8, &Param0 + 32);
					}
				}
			}
		}
	}
	return;
}

struct<8> Function_390(int iParam0) //Position: 0x1349A / 79002
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<9> Var6;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		UNK_0x44986367(&Var4, Function_391(&uVar1));
		vVar6 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, vVar6, StackVal);
		bVar0++;
	}
	vVar6 = (vVar6.x / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	vVar6.f_4 = 0.0f;
	vVar6.f_8 = (vVar6.z / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	Var2.f_4 = UNK_0x9C40E671(&vVar6);
	return StackVal, Var2;
}

var Function_391(int iParam0) //Position: 0x1350C / 79116
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_392(struct<2> Param0, int iParam2) //Position: 0x13518 / 79128
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	
	bVar1 = 4294967295;
	if (!Function_74(StackVal, Param0))
	{
		if (IS_OBJECT_VALID(&iParam2))
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_PATH_POINTS(&iParam2) - 1))
			{
				GET_PATH_POINT(&iParam2, bVar0, &Var6);
				Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Param0, StackVal);
				if (bVar1 > 0 || VMAG(Var2) > VMAG(Var4))
				{
					Var4 = Var2;
					bVar1 = bVar0;
				}
				bVar0++;
			}
		}
	}
	if (bVar1 > 0)
	{
		GET_PATH_POINT(&iParam2, bVar1, &Var6);
		return StackVal, Var6;
	}
	GET_PATH_POINT(&iParam2, (GET_NUM_PATH_POINTS(&iParam2) - 1), &Var6);
	return StackVal, Var6;
}

void Function_393(struct<125> Param0) //Position: 0x135B8 / 79288
{
	bool bVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
	{
		fVar2 = 7.0f;
	}
	else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
	{
		fVar2 = 12.0f;
	}
	else
	{
		fVar2 = 15.0f;
	}
	if (SQUAD_IS_VALID(&Param0 + 64))
	{
		if (SQUAD_IS_VALID(&Param0 + 88))
		{
			if (SQUAD_IS_VALID(&Param0 + 72))
			{
				if (SQUAD_IS_VALID(&Param0 + 80))
				{
					if (IS_OBJECT_VALID(&Param0 + 16))
					{
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 64) - 1))
						{
							iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 64, bVar0);
							if (IS_ACTOR_VALID(&iVar1))
							{
								if (Function_308(&iVar1, &Param0 + 16, fVar2))
								{
									SQUAD_LEAVE(&iVar1);
									SQUAD_JOIN(&iVar1, &Param0 + 88);
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 72) - 1))
						{
							iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 72, bVar0);
							if (IS_ACTOR_VALID(&iVar1))
							{
								if (Function_308(&iVar1, &Param0 + 16, fVar2))
								{
									SQUAD_LEAVE(&iVar1);
									SQUAD_JOIN(&iVar1, &Param0 + 88);
									if (DECOR_GET_BOOL(&iVar1, "bIsStraggler"))
									{
										Param0.f_124++;
										DECOR_REMOVE(&iVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
						{
							iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar0);
							if (IS_ACTOR_VALID(&iVar1))
							{
								if (Function_308(&iVar1, &Param0 + 16, fVar2))
								{
									CLEAR_ACTOR_MAX_SPEED(&iVar1);
									TASK_CLEAR(&iVar1);
									if (DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(&iVar1, "bRejoinInProgress");
									}
									uVar3 = GET_BLIP_ON_ACTOR(&iVar1);
									if (IS_BLIP_VALID(&uVar3))
									{
										REMOVE_BLIP(&uVar3);
									}
									SQUAD_LEAVE(&iVar1);
									SQUAD_JOIN(&iVar1, &Param0 + 88);
									if (DECOR_GET_BOOL(&iVar1, "bIsStraggler"))
									{
										Param0.f_124++;
										DECOR_REMOVE(&iVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
					}
				}
			}
		}
	}
	return;
}

void Function_394(var uParam0, var uParam1, int iParam2) //Position: 0x13819 / 79897
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (SQUAD_IS_VALID(&uParam1))
		{
			if (IS_VOLUME_VALID(&iParam2))
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam2))
						{
							SQUAD_LEAVE(&uVar1);
							SQUAD_JOIN(&uVar1, &uParam1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_395(int[] iParam0) //Position: 0x1388B / 80011
{
	switch (iLocal_950)
	{
		case 0x00000000:
			iLocal_950++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID(&(iParam0[0])))
			{
				iParam0[0] = Function_397("hennigansRanch", "stable01", 1);
				if (IS_DOOR_VALID(&(iParam0[0])))
				{
					Function_161(&(iParam0[0]), 0);
					if (iLocal_576 == 0)
					{
						CLOSE_DOOR_FAST(&(iParam0[0]));
					}
					else if (iLocal_576 == 1)
					{
						CLOSE_DOOR_FAST(&(iParam0[0]));
					}
					else
					{
						CLOSE_DOOR_FAST(&(iParam0[0]));
					}
				}
			}
			else if (IS_DOOR_VALID(&(iParam0[0])))
			{
				Function_161(&(iParam0[0]), 0);
				if (iLocal_576 == 0)
				{
					CLOSE_DOOR_FAST(&(iParam0[0]));
				}
				else if (iLocal_576 == 1)
				{
					CLOSE_DOOR_FAST(&(iParam0[0]));
				}
				else
				{
					CLOSE_DOOR_FAST(&(iParam0[0]));
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[1])))
			{
				iParam0[1] = Function_397("hennigansRanch", "stable01", 2);
				if (IS_DOOR_VALID(&(iParam0[1])))
				{
					Function_161(&(iParam0[1]), 0);
					if (iLocal_576 == 0)
					{
						CLOSE_DOOR_FAST(&(iParam0[1]));
					}
					else if (iLocal_576 == 1)
					{
						CLOSE_DOOR_FAST(&(iParam0[1]));
					}
					else
					{
						CLOSE_DOOR_FAST(&(iParam0[1]));
					}
				}
			}
			else if (IS_DOOR_VALID(&(iParam0[1])))
			{
				Function_161(&(iParam0[1]), 0);
				if (iLocal_576 == 0)
				{
					CLOSE_DOOR_FAST(&(iParam0[1]));
				}
				else if (iLocal_576 == 1)
				{
					CLOSE_DOOR_FAST(&(iParam0[1]));
				}
				else
				{
					CLOSE_DOOR_FAST(&(iParam0[1]));
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[2])))
			{
				iParam0[2] = Function_397("hennigansRanch", "stable02", 1);
				if (IS_DOOR_VALID(&(iParam0[2])))
				{
					Function_161(&(iParam0[2]), 0);
					if (iLocal_576 == 0)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
					}
					else if (iLocal_576 == 1)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
					}
					else if (iLocal_576 == 2)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
					}
					else
					{
						OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
					}
				}
			}
			else if (IS_DOOR_VALID(&(iParam0[2])))
			{
				Function_161(&(iParam0[2]), 0);
				if (iLocal_576 == 0)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
				}
				else if (iLocal_576 == 1)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
				}
				else if (iLocal_576 == 2)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
				}
				else
				{
					OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[3])))
			{
				iParam0[3] = Function_397("hennigansRanch", "stable02", 7);
				if (IS_DOOR_VALID(&(iParam0[3])))
				{
					Function_161(&(iParam0[3]), 0);
					if (iLocal_576 == 0)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
					}
					else if (iLocal_576 == 1)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
					}
					else if (iLocal_576 == 2)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
					}
					else
					{
						OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
					}
				}
			}
			else if (IS_DOOR_VALID(&(iParam0[3])))
			{
				Function_161(&(iParam0[3]), 0);
				if (iLocal_576 == 0)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
				}
				else if (iLocal_576 == 1)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
				}
				else if (iLocal_576 == 2)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
				}
				else
				{
					OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[4])))
			{
				iParam0[4] = Function_397("hennigansRanch", "stable02", 8);
				if (IS_DOOR_VALID(&(iParam0[4])))
				{
					Function_161(&(iParam0[4]), 0);
					if (iLocal_576 == 0)
					{
						CLOSE_DOOR_FAST(&(iParam0[4]));
					}
					else if (iLocal_576 == 1)
					{
						CLOSE_DOOR_FAST(&(iParam0[4]));
					}
					else if (iLocal_576 == 2)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[4]), 0);
					}
					else
					{
						OPEN_DOOR_DIRECTION(&(iParam0[4]), 0);
					}
				}
			}
			else if (IS_DOOR_VALID(&(iParam0[4])))
			{
				Function_161(&(iParam0[4]), 0);
				if (iLocal_576 == 0)
				{
					CLOSE_DOOR_FAST(&(iParam0[4]));
				}
				else if (iLocal_576 == 1)
				{
					if (iLocal_597[0] == 0)
					{
						CLOSE_DOOR_FAST(&(iParam0[4]));
					}
					else
					{
						OPEN_DOOR_DIRECTION(&(iParam0[4]), 0);
					}
				}
				else if (iLocal_576 == 2)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[4]), 0);
				}
				else
				{
					OPEN_DOOR_DIRECTION(&(iParam0[4]), 0);
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[5])))
			{
				iParam0[5] = Function_397("hennigansRanch", "stable02", 9);
				if (IS_DOOR_VALID(&(iParam0[5])))
				{
					Function_161(&(iParam0[5]), 0);
					if (iLocal_576 == 0)
					{
						CLOSE_DOOR_FAST(&(iParam0[5]));
					}
					else if (iLocal_576 == 1)
					{
						CLOSE_DOOR_FAST(&(iParam0[5]));
					}
					else if (iLocal_576 == 2)
					{
						OPEN_DOOR_DIRECTION(&(iParam0[5]), 1);
					}
					else
					{
						OPEN_DOOR_DIRECTION(&(iParam0[5]), 1);
					}
				}
			}
			else if (IS_DOOR_VALID(&(iParam0[5])))
			{
				Function_161(&(iParam0[5]), 0);
				if (iLocal_576 == 0)
				{
					CLOSE_DOOR_FAST(&(iParam0[5]));
				}
				else if (iLocal_576 == 1)
				{
					if (iLocal_597[0] == 0)
					{
						CLOSE_DOOR_FAST(&(iParam0[5]));
					}
					else
					{
						OPEN_DOOR_DIRECTION(&(iParam0[5]), 1);
					}
				}
				else if (iLocal_576 == 2)
				{
					OPEN_DOOR_DIRECTION(&(iParam0[5]), 1);
				}
				else
				{
					OPEN_DOOR_DIRECTION(&(iParam0[5]), 1);
				}
			}
			iLocal_950++;
			break;
		
		case 0x00000002:
			if (iLocal_576 == 0)
			{
				if (iLocal_577 > 15)
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 808))
					{
						if (SQUAD_IS_VALID(&iLocal_4 + 408))
						{
							if (Function_396(&iLocal_4 + 408, &iLocal_4 + 808))
							{
								if (IS_DOOR_VALID(&(iLocal_964[4])))
								{
									OPEN_DOOR_DIRECTION(&(iLocal_964[4]), 1);
								}
								if (IS_DOOR_VALID(&(iLocal_964[5])))
								{
									OPEN_DOOR_DIRECTION(&(iLocal_964[5]), 0);
								}
								iLocal_950++;
							}
						}
					}
				}
			}
			else if (iLocal_576 == 1)
			{
				if (iLocal_577 > 6)
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 808))
					{
						if (SQUAD_IS_VALID(&iLocal_4 + 408))
						{
							if (Function_396(&iLocal_4 + 408, &iLocal_4 + 808))
							{
								if (IS_DOOR_VALID(&(iLocal_964[4])))
								{
									OPEN_DOOR_DIRECTION(&(iLocal_964[4]), 1);
								}
								if (IS_DOOR_VALID(&(iLocal_964[5])))
								{
									OPEN_DOOR_DIRECTION(&(iLocal_964[5]), 0);
								}
								iLocal_950++;
							}
						}
					}
				}
			}
			else
			{
				iLocal_950++;
			}
			break;
		
		case 0x00000003:
			iLocal_950++;
			iLocal_1030 = 1;
			break;
	}
	return;
}

bool Function_396(var uParam0, int iParam1) //Position: 0x13FAA / 81834
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
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
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_397(var uParam0, var uParam1, int iParam2) //Position: 0x1403A / 81978
{
	return Function_398(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_398(int iParam0, char* cParam1, bool bParam3) //Position: 0x1404E / 81998
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

void Function_399() //Position: 0x140F3 / 82163
{
	Function_306(&cLocal_470);
	if (!iLocal_1030)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_395(&iLocal_964);
			}
			else
			{
				iLocal_950 = 0;
				iLocal_1030 = 0;
			}
		}
	}
	if (((iLocal_577 < 5 && iLocal_577 > 105) && !iLocal_577 != 104) && !iLocal_577 != 103)
	{
		Function_394(&Local_1096 + 64, &Local_1096 + 88, &iLocal_4 + 792);
		Function_394(&Local_1096 + 64, &Local_1096 + 88, &iLocal_4 + 896);
		Function_394(&Local_1096 + 80, &Local_1096 + 88, &iLocal_4 + 792);
		Function_394(&Local_1096 + 80, &Local_1096 + 88, &iLocal_4 + 896);
		Function_393(&Local_1096);
		if (bLocal_1012)
		{
			Function_389(&Local_1096, 0);
			Function_388(&Local_1096, 0);
			Function_387(&Local_1096, 0, 0x41700000);
		}
		Function_414();
		Function_413();
		Function_381(&Global_54076);
		Function_410();
	}
	switch (iLocal_577)
	{
		case 0x00000000:
			Function_302(0);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_597[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_298();
				bLocal_578 = Global_46736[2];
				if (!Function_297(bLocal_578))
				{
					Function_295(&Local_472);
				}
				Function_294(&Global_54076, &iLocal_4 + 1112[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_583, true);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 1;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(bLocal_578) || bLocal_578 != 4294967295))
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
			iLocal_953 = 0;
			iLocal_950 = 0;
			iLocal_951 = 0;
			iLocal_958 = 0;
			iLocal_959 = 0;
			iLocal_960 = 0;
			iLocal_961 = 0;
			iLocal_952 = 0;
			iLocal_1028 = 0;
			bLocal_1012 = false;
			Function_402();
			if (iLocal_597[2] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_294(&Global_54076, &iLocal_4 + 1112[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						Function_294(&bLocal_583, &iLocal_4 + 1112[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
						}
					}
					else
					{
						bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					Function_294(&bLocal_581, &iLocal_4 + 1112[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
					{
						Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1112[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_581))
			{
				Function_351(3, 0, 1);
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
				TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_581, true);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 88))
			{
				Function_270(&Local_1096 + 88, &Local_1096 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1096 + 64);
				Function_271(&Local_1096 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 792, -1.0f);
			}
			Function_344(&(Local_669[015]), &bLocal_581, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[115]), &iLocal_4 + 408, "Rancher", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[215]), &iLocal_4 + 456, "Rancher", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[315]), &Local_1096 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[415]), &Local_1144 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[515]), &Local_1096 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[615]), &Local_1096 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[715]), &Local_1096 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_343(&(Local_669[815]));
			Function_345(&(Local_669[115]), 1024, 1);
			if (HUD_IS_FADED())
			{
				Function_293(&iLocal_585);
				iLocal_577 = 5;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			Function_342(iLocal_576);
			Function_333(StackVal, Function_342(iLocal_576), iLocal_576, Global_46736[2], Function_341(iLocal_576), 2);
			bLocal_954 = Function_332();
			PRINTINT(bLocal_954);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&iLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_583)) && SQUAD_IS_VALID(&Local_1096 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1096 + 64, (SQUAD_GET_SIZE(&Local_1096 + 64) - 1))))
			{
				if (((Function_331(&bLocal_581, 1, 0x41700000) && Function_331(&iLocal_4 + 240[02], 1, 0x41700000)) && Function_331(&bLocal_583, 1, 0x41700000)) && Function_331(SQUAD_GET_ACTOR_BY_INDEX(&Local_1096 + 64, (SQUAD_GET_SIZE(&Local_1096 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_581) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_293(&iLocal_585);
						iLocal_577 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_294(&Global_54076, &iLocal_4 + 1112[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_583))
							{
								Function_294(&bLocal_583, &iLocal_4 + 1112[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
								}
							}
							else
							{
								bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_581))
						{
							Function_294(&bLocal_581, &iLocal_4 + 1112[1], 1, 1, 1);
							if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
							{
								Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1112[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1096 + 64);
				Function_272(&Local_1096 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
				TASK_GO_NEAR_COORD(false, &iLocal_4 + 1664, 4.0f, 1);
			}
			CAMERA_RESET(0);
			Function_293(&iLocal_585);
			iLocal_577 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1080))
				{
					if (IS_OBJECT_VALID(&Local_1096 + 8))
					{
						uLocal_1080 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_470, "RANCH07_CAMERA_FOCUS", &Local_1096 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1080))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1080, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, &uLocal_1080, &Local_1096 + 8, Vector(0.0f, 0.0f, 0.0f), 1,5f);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 408))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
					{
						CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 320[02]);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
					{
						CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 320[12]);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1032[4], &uLocal_996);
						CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 320[22]);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[22], 1);
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uLocal_996, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[22], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[22], 2);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1032[5], &uLocal_999);
						CLEAR_ACTOR_MAX_SPEED(&iLocal_4 + 320[32]);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[32], 1);
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uLocal_999, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[32], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[32], 2);
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 456))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
					{
						TASK_WANDER_IN_VOLUME(&iLocal_4 + 416[02], &iLocal_4 + 856, -1f);
						TASK_PRIORITY_SET(&iLocal_4 + 416[02], 2);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
					{
						TASK_WANDER_IN_VOLUME(&iLocal_4 + 416[12], &iLocal_4 + 864, -1f);
						TASK_PRIORITY_SET(&iLocal_4 + 416[12], 2);
					}
				}
				if (iLocal_597[2] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1096 + 64))
					{
						SQUAD_GOALS_CLEAR(&Local_1096 + 64);
						Function_272(&Local_1096 + 64);
						SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
						TASK_GO_NEAR_COORD(false, &iLocal_4 + 1664, 4.0f, 1);
					}
				}
				bLocal_1014 = false;
				if (SQUAD_IS_VALID(&Local_1096 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 72);
					Function_272(&Local_1096 + 72);
				}
				(&Local_1096 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1096 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 80);
					Function_272(&Local_1096 + 80);
				}
				*(&Local_1096 + 16) = &iLocal_4 + 1376;
				GET_OBJECT_POSITION(&iLocal_4 + 1376, &uLocal_981);
				if (SQUAD_IS_VALID(&Local_1096 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 88);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 792, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				}
				Function_401();
				Function_293(&iLocal_585);
				iLocal_577 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!IS_BLIP_VALID(&bLocal_1002))
				{
					bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1376, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&bLocal_1002))
					{
						SET_BLIP_PRIORITY(&bLocal_1002, 3);
					}
				}
				if (!IS_OBJECT_VALID(&bLocal_1004))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1376, &Local_984);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1376, &Local_987);
					bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
					}
				}
				Function_400();
				Function_324("ranch07_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_267(&iLocal_585) <= 8.0f)
			{
				Function_139("ranch07_obj04_start1", 10.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, &cLocal_470, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					REMOVE_BLIP(&bLocal_1002);
				}
				if (IS_OBJECT_VALID(&bLocal_1004))
				{
					DESTROY_OBJECT(&bLocal_1004);
				}
				if (bLocal_1012)
				{
					Function_320();
				}
			}
			else
			{
				if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (!bLocal_1012)
					{
						Function_244();
						Function_319();
					}
				}
				if (bLocal_1014)
				{
					if (Function_312(&fLocal_593, 245.0f, 385.0f, &Local_1096 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0))
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
					}
					else
					{
						if (!IS_BLIP_VALID(&bLocal_1002))
						{
							bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1376, 330, 0f, 2, 0);
							if (IS_BLIP_VALID(&bLocal_1002))
							{
							}
						}
						if (!IS_OBJECT_VALID(&bLocal_1004))
						{
							GET_OBJECT_POSITION(&iLocal_4 + 1376, &Local_984);
							GET_OBJECT_ORIENTATION(&iLocal_4 + 1376, &Local_987);
							bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
							if (IS_OBJECT_VALID(&bLocal_1004))
							{
							}
						}
					}
				}
				else if (Function_312(&fLocal_593, 190.0f, 330.0f, &Local_1096 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0))
				{
					if (IS_BLIP_VALID(&bLocal_1002))
					{
						REMOVE_BLIP(&bLocal_1002);
					}
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
						DESTROY_OBJECT(&bLocal_1004);
					}
				}
				else
				{
					if (!IS_BLIP_VALID(&bLocal_1002))
					{
						bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1376, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(&bLocal_1002))
						{
						}
					}
					if (!IS_OBJECT_VALID(&bLocal_1004))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1376, &Local_984);
						GET_OBJECT_ORIENTATION(&iLocal_4 + 1376, &Local_987);
						bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
						}
					}
				}
				if (((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 88)) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1096 + 64) != 0 && SQUAD_GET_SIZE(&Local_1096 + 72) != 0) && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
						Function_311(&Local_1096 + 64);
						Function_311(&Local_1096 + 72);
						Function_311(&Local_1096 + 80);
						Function_311(&Local_1096 + 88);
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1096)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1096));
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1096 + 8)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1096 + 8));
						}
						if (IS_OBJECT_VALID(&uLocal_1080))
						{
							DESTROY_OBJECT(&uLocal_1080);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_293(&iLocal_585);
						iLocal_577 = 106;
					}
				}
				if (Local_1096.f_148)
				{
					if (Function_267(&Local_1096 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1096 + 16)) && IS_OBJECT_VALID(&Local_1096 + 8))
						{
							if (Function_308(&bLocal_581, &Local_1096 + 16, 25.0f))
							{
								if (Function_308(&Global_54076, &Local_1096 + 16, 25.0f) && Function_308(&Global_54076, &Local_1096 + 8, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 80)) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 88))
									{
										Function_270(&Local_1096 + 64, &Local_1096 + 88);
										Function_270(&Local_1096 + 80, &Local_1096 + 88);
										Function_270(&Local_1096 + 72, &Local_1096 + 88);
									}
									Function_293(&Local_1096 + 132);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_597[3] = 1;
			Function_293(&iLocal_585);
			iLocal_576 = 4;
			iLocal_577 = 0;
			break;
	}
	return;
}

void Function_400() //Position: 0x15189 / 86409
{
	if (SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		SQUAD_GOALS_CLEAR(&iLocal_4 + 408);
		Function_272(&iLocal_4 + 408);
		Function_191(&Global_11544, &Global_13580, &iLocal_4 + 408, 0);
		RELEASE_OBJECT_REF(&iLocal_4 + 408);
	}
	return;
}

void Function_401() //Position: 0x151C6 / 86470
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_herdPasture", "Ranch07_herdPasture", false, 2, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402() //Position: 0x15215 / 86549
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1112[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_287();
		if (SQUAD_IS_VALID(&iLocal_4 + 312))
		{
			Function_291(&iLocal_4 + 312, 0);
			Function_290(&iLocal_4 + 312, 3);
			Function_288(&iLocal_4 + 312, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		Function_405();
		if (SQUAD_IS_VALID(&iLocal_4 + 408))
		{
			SQUAD_SET_FACTION(&iLocal_4 + 408, 20);
			Function_285(&iLocal_4 + 408, 1);
			Function_288(&iLocal_4 + 408, 0, 0, 0);
			Function_291(&iLocal_4 + 408, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
			{
				Function_294(&iLocal_4 + 320[02], &iLocal_4 + 1032[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
			{
				Function_294(&iLocal_4 + 320[12], &iLocal_4 + 1032[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
			{
				Function_294(&iLocal_4 + 320[22], &iLocal_4 + 1032[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
			{
				Function_294(&iLocal_4 + 320[32], &iLocal_4 + 1032[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 408, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 456))
	{
		Function_286();
		if (SQUAD_IS_VALID(&iLocal_4 + 456))
		{
			SQUAD_SET_FACTION(&iLocal_4 + 456, 20);
			Function_285(&iLocal_4 + 456, 1);
			Function_288(&iLocal_4 + 456, 0, 0, 0);
			Function_291(&iLocal_4 + 456, 0);
			if (SQUAD_IS_VALID(&iLocal_4 + 312))
			{
				Function_273(&iLocal_4 + 456, &iLocal_4 + 312);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 456, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_403();
	return;
}

void Function_403() //Position: 0x15486 / 87174
{
	Function_404();
	*(&Local_1096 + 24) = &iLocal_4 + 1808;
	if (!SQUAD_IS_VALID(&Local_1096 + 64))
	{
		*(&Local_1096 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 64);
			Function_280(&Local_1096, &cLocal_470, &iLocal_4 + 1368, &iLocal_1070, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_291(&Local_1096 + 64, 0);
			Function_279(&Local_1096 + 64, 1);
			Function_278(&Local_1096 + 64, 0);
			Function_277(&Local_1096 + 64, 0);
			Function_276(&Local_1096 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 768, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1144 + 64))
	{
		*(&Local_1144 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1144 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1144 + 64);
			Function_280(&Local_1144, &cLocal_470, &iLocal_4 + 1376, &iLocal_1070, 5, 4,5f, 7.0f, 1,5f, 1);
			Function_291(&Local_1144 + 64, 0);
			Function_279(&Local_1144 + 64, 1);
			Function_278(&Local_1144 + 64, 0);
			Function_277(&Local_1144 + 64, 0);
			Function_276(&Local_1144 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1144 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 792, -1.0f);
		}
	}
	return;
}

void Function_404() //Position: 0x15631 / 87601
{
	iLocal_1070[0] = 1008;
	iLocal_1070[1] = 1009;
	iLocal_1070[2] = 1010;
	iLocal_1070[3] = 1011;
	*(&Local_1096 + 152[0]) = &Global_54076;
	*(&Local_1096 + 152[1]) = &bLocal_581;
	Local_1096.f_112 = 5;
	PRINTINT(Local_1096.f_112);
	PRINTNL();
	*(&Local_1096 + 104) = "HOME01_COWS01";
	if (!Function_269(&Local_1096 + 132))
	{
		Function_252(&Local_1096 + 132);
	}
	else
	{
		Function_293(&Local_1096 + 132);
	}
	if (!IS_OBJECT_VALID(&Local_1096))
	{
		Local_1096 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_470, "COWS_01_BASE", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1096))
		{
		}
	}
	if (!IS_OBJECT_VALID(&Local_1096 + 8))
	{
		*(&Local_1096 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_470, "COWS_01_CENTER", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1096 + 8))
		{
		}
	}
	if (!SQUAD_IS_VALID(&Local_1096 + 72))
	{
		*(&Local_1096 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 72))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 72);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1096 + 80))
	{
		*(&Local_1096 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 80))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 80);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1096 + 88))
	{
		*(&Local_1096 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 88))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 88);
		}
	}
	(&Local_1096 + 24) = "";
	(&Local_1096 + 16) = "";
	Local_1096.f_148 = 0;
	Local_1144.f_112 = 10;
	PRINTINT(Local_1144.f_112);
	PRINTNL();
	*(&Local_1144 + 104) = "HOME01_COWS02";
	return;
}

void Function_405() //Position: 0x15850 / 88144
{
	*(&iLocal_4 + 408) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 320[02]) = Function_406(StackVal, StackVal, &Global_11544, &Global_13580, 7, Vector(-912,0001f, 90,35291f, 2448f), Vector(0.0f, 220,1252f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 320[02], &iLocal_4 + 408);
	*(&iLocal_4 + 320[12]) = Function_406(StackVal, StackVal, &Global_11544, &Global_13580, 2, Vector(-928,0001f, 90,35291f, 2464.0f), Vector(0.0f, 252,1027f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 320[12], &iLocal_4 + 408);
	*(&iLocal_4 + 320[22]) = Function_406(StackVal, StackVal, &Global_11544, &Global_13580, 13, Vector(-924,7995f, 90,35291f, 2453,404f), Vector(0.0f, 260,8762f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 320[22], &iLocal_4 + 408);
	*(&iLocal_4 + 320[32]) = Function_406(StackVal, StackVal, &Global_11544, &Global_13580, 4, Vector(-920,0001f, 90,35291f, 2451,392f), Vector(0.0f, -167,2988f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 320[32], &iLocal_4 + 408);
	*(&iLocal_4 + 320[42]) = Function_406(StackVal, StackVal, &Global_11544, &Global_13580, 0, Vector(-896,0966f, 90,35291f, 2443,538f), Vector(0.0f, -16,606f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 320[42], &iLocal_4 + 408);
	return;
}

int Function_406(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x1599F / 88479
{
	var uVar0;
	var uVar1;
	
	uVar0 = fParam2;
	uVar1 = Function_407(&iParam0, &fParam1, uVar0, &iParam7, 0, 1);
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

var Function_407(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x15A8F / 88719
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_184(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_184(&(Param0[iVar02]), 2))
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
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_409(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_181(&(Param0[iVar02]), 1);
	Function_408(&vParam1[iVar03] + 16, 1);
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

int Function_408(int iParam0, bool bParam1) //Position: 0x15C56 / 89174
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

var Function_409(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x15D08 / 89352
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_54(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_410() //Position: 0x15E2F / 89647
{
	if (Function_267(&iLocal_1046) <= 0,1f)
	{
		switch (iLocal_953)
		{
			case 0x00000000:
				Function_293(&iLocal_589);
				Function_293(&iLocal_1062);
				Function_293(&iLocal_1066);
				iLocal_953++;
				break;
			
			case 0x00000001:
				Function_412(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (Function_267(&iLocal_589) <= 5.0f)
				{
					if ((SQUAD_GET_SIZE(&Local_1096 + 72) <= 2 || SQUAD_GET_SIZE(&Local_1096 + 80) <= 2) || !Function_308(&Global_54076, &Local_1096 + 8, (190.0f - 30.0f)))
					{
						Function_411();
						Function_293(&iLocal_589);
					}
				}
				if (SQUAD_GET_SIZE(&Local_1096 + 72) != 0 && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
				{
					if (Function_267(&iLocal_589) <= 3.0f)
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[02], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[02], "Ranch07_greatJob1", &Global_54076, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[22], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[22], "Ranch07_greatJob3", &Global_54076, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
						{
							if (IS_ACTOR_VALID(&iLocal_4 + 416[02]))
							{
								if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 416[02], 36.0f))
								{
									SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 416[02], "Ranch07_greatJob6", &Global_54076, 1, 0, 0, 0, 0);
								}
							}
						}
						Function_293(&iLocal_589);
					}
					if (Function_267(&iLocal_1062) <= 4.0f)
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[12], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[12], "Ranch07_greatJob2", &Global_54076, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[32], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[32], "Ranch07_greatJob4", &Global_54076, 1, 0, 0, 0, 0);
							}
						}
						Function_293(&iLocal_1062);
					}
					if (Function_267(&iLocal_1066) <= 5.0f)
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 320[42]))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[42], 36.0f))
							{
								SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[42], "Ranch07_greatJob5", &Global_54076, 1, 0, 0, 0, 0);
							}
						}
						if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
						{
							if (IS_ACTOR_VALID(&iLocal_4 + 416[12]))
							{
								if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 416[12], 36.0f))
								{
								}
							}
						}
						Function_293(&iLocal_1066);
					}
				}
				break;
			
			case 0x00000002:
				iLocal_953++;
				break;
		}
		Function_293(&iLocal_1046);
	}
	return;
}

void Function_411() //Position: 0x1615A / 90458
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_notWellHerd", "Ranch07_notWellHerd", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x161A9 / 90537
{
	if (Function_267(&iLocal_1042) <= 6.0f)
	{
		Function_372();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_offHorse", "Ranch07_offHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		if (!IS_ACTOR_RIDING(&bLocal_581))
		{
			if (&bParam0)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_371();
				Function_293(&iLocal_1042);
			}
		}
		if (&bParam5)
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, 1,15f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_rideIntoBonHorse", "Ranch07_rideIntoBonHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		Function_283(&Local_1096 + 16);
		if (!Function_370(StackVal, &Local_1096 + 64, Function_283(&Local_1096 + 16), 135.0f))
		{
			if (&bParam1)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_herdWrongDirec", "Ranch07_herdWrongDirec", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		if (&bParam2)
		{
			if (SQUAD_IS_VALID(&Local_1096 + 72) && SQUAD_IS_VALID(&Local_1096 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1096 + 72) != 0 && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
				{
					if (!Function_308(&Global_54076, &Local_1096 + 8, &fParam3) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_581, &fParam3))
					{
						if (!iLocal_1028)
						{
							if (iLocal_576 == 0)
							{
								bLocal_1006 = &iLocal_4 + 1760;
							}
							else if (iLocal_576 == 1)
							{
								bLocal_1006 = &iLocal_4 + 1784;
							}
							else if (iLocal_576 == 2)
							{
								bLocal_1006 = &iLocal_4 + 1800;
							}
							else if (iLocal_576 == 3)
							{
								bLocal_1006 = &iLocal_4 + 1808;
							}
							if (Function_369(&Global_54076, &bLocal_581, &bLocal_1006))
							{
								iLocal_1028 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_368();
								Function_293(&iLocal_1042);
							}
							else
							{
								iLocal_1028 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								if (Function_362(RAND_INT_RANGE(false, true)))
								{
									Function_367();
								}
								else
								{
									Function_366();
								}
								Function_293(&iLocal_1042);
							}
						}
					}
				}
			}
		}
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, &fParam4) && Function_308(&Global_54076, &Local_1096 + 8, &fParam4))
		{
			if (&bParam2)
			{
				if (iLocal_1028)
				{
					iLocal_1028 = 0;
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_365();
					Function_293(&iLocal_1042);
				}
			}
		}
	}
}

void Function_413() //Position: 0x16443 / 91203
{
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		switch (iLocal_951)
		{
			case 0x00000000:
				iLocal_951++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_581);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_581);
				Function_351(3, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_581, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, true);
				GET_OBJECT_POSITION(&iLocal_4 + 1176[3], &uLocal_978);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 1768, 3, 0, 0, 1, false);
				TASK_GO_NEAR_COORD(false, &uLocal_978, 3.0f, 4);
				TASK_FACE_COORD(0, &iLocal_4 + 1464, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				iLocal_951++;
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(&bLocal_581, 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR(&bLocal_581, "waving_on_horse", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_581, "waving_on_horse/forward");
					iLocal_951++;
				}
				break;
			
			case 0x00000003:
				iLocal_951++;
				break;
			}
	}
	return;
}

void Function_414() //Position: 0x1656F / 91503
{
	if (SQUAD_IS_VALID(&Local_1096 + 64))
	{
		switch (iLocal_952)
		{
			case 0x00000000:
				iLocal_952++;
				break;
			
			case 0x00000001:
				if (iLocal_577 > 8)
				{
					if (Function_267(&iLocal_585) <= 2.0f)
					{
						Function_416();
						Function_415();
						Function_271(&Local_1096 + 64);
						Function_327(&Local_1096 + 64, &iLocal_4 + 576);
						Function_326(&Local_1096 + 64, 2, 1);
						Function_326(&Local_1096 + 88, 2, 1);
						Function_326(&Local_1096 + 72, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1096 + 64, &Local_1096 + 96, 1, 0,5f, 1.0f);
						_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1096 + 64, &Local_1096 + 96, 0, 16, (4,5f - 0,5f));
						iLocal_952++;
					}
				}
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(&iLocal_4 + 696))
				{
					if (IS_OBJECT_VALID(&Local_1096 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1096 + 8, &iLocal_4 + 696))
						{
							iLocal_952++;
						}
					}
				}
				break;
			
			case 0x00000003:
				if (SQUAD_GOAL_IS_VALID(&Local_1096 + 96))
				{
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1096 + 64, &Local_1096 + 96, &iLocal_4 + 1808);
					SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1096 + 64, &Local_1096 + 96, &iLocal_4 + 1816, 1000.0f, 0,85f, 1.0f, 1082130432);
					_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1096 + 64, &Local_1096 + 96, 0, 16, 4,5f);
					SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1096 + 64, &Local_1096 + 96, 1, 1.0f, 1,5f);
					iLocal_952++;
				}
				break;
			
			case 0x00000004:
				if (IS_VOLUME_VALID(&iLocal_4 + 704))
				{
					if (IS_OBJECT_VALID(&Local_1096 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1096 + 8, &iLocal_4 + 704))
						{
							iLocal_952++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (SQUAD_GOAL_IS_VALID(&Local_1096 + 96))
				{
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1096 + 64, &Local_1096 + 96, &iLocal_4 + 1816);
					SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1096 + 64, &Local_1096 + 96, &iLocal_4 + 1816, 100.0f, 0,85f, 0,5f, 1082130432);
					iLocal_952++;
				}
				break;
			
			case 0x00000006:
				iLocal_952++;
				break;
			}
	}
	return;
}

void Function_415() //Position: 0x16798 / 92056
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1096 + 64, &Local_1096 + 96, &Local_1096 + 24, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_416() //Position: 0x167C3 / 92099
{
	Function_272(&Local_1096 + 64);
	SQUAD_GOALS_CLEAR(&Local_1096 + 64);
	*(&Local_1096 + 96) = UNK_0x48588CCB(&Local_1096 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1096 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1096 + 64, &Local_1096 + 96);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1096 + 64, &Local_1096 + 96, 1, 8, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1096 + 64, &Local_1096 + 96, 1, 15, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1096 + 64, &Local_1096 + 96, 1, 16, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1096 + 64, &Local_1096 + 96, 1, 26, 0,75f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1096 + 64, &Local_1096 + 96, &Global_54076, 15.0f, 4,5f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1096 + 64, &Local_1096 + 96, &Global_54076, 16.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1096 + 64, &Local_1096 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1096 + 64, &Local_1096 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1096 + 64, &Local_1096 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1096 + 64, &Local_1096 + 96, &bLocal_581, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	bLocal_1012 = true;
	return;
}

void Function_417() //Position: 0x16918 / 92440
{
	Function_306(&cLocal_470);
	if (!iLocal_1030)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_395(&iLocal_964);
			}
			else
			{
				iLocal_950 = 0;
				iLocal_1030 = 0;
			}
		}
	}
	if (((iLocal_577 < 5 && iLocal_577 > 105) && !iLocal_577 != 104) && !iLocal_577 != 103)
	{
		Function_394(&Local_1096 + 64, &Local_1096 + 88, &iLocal_4 + 752);
		Function_393(&Local_1096);
		if (bLocal_1012)
		{
			Function_389(&Local_1096, 0);
			Function_388(&Local_1096, 0);
			Function_387(&Local_1096, 0, 0x41700000);
		}
		Function_424();
		Function_381(&Global_54076);
		Function_423();
	}
	switch (iLocal_577)
	{
		case 0x00000000:
			Function_302(0);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_597[1] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_298();
				bLocal_578 = Global_46736[2];
				if (!Function_297(bLocal_578))
				{
					Function_295(&Local_472);
				}
				Function_294(&Global_54076, &iLocal_4 + 1032[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_583, true);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 1;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(bLocal_578) || bLocal_578 != 4294967295))
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
			iLocal_953 = 0;
			iLocal_950 = 0;
			iLocal_951 = 0;
			iLocal_958 = 0;
			iLocal_959 = 0;
			iLocal_960 = 0;
			iLocal_961 = 0;
			bLocal_1012 = false;
			iLocal_1028 = 0;
			Function_420();
			if (iLocal_597[1] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_294(&Global_54076, &iLocal_4 + 1032[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						Function_294(&bLocal_583, &iLocal_4 + 1032[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
						}
					}
					else
					{
						bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					Function_294(&bLocal_581, &iLocal_4 + 1032[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
					{
						Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1032[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_581))
			{
				Function_351(3, 0, 1);
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
				TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_581, true);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 88))
			{
				Function_270(&Local_1096 + 88, &Local_1096 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1096 + 64);
				Function_271(&Local_1096 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 784, -1.0f);
			}
			Function_344(&(Local_669[015]), &bLocal_581, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[115]), &iLocal_4 + 408, "Rancher", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[215]), &Local_1096 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[315]), &Local_1096 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[415]), &Local_1096 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[515]), &Local_1096 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_343(&(Local_669[615]));
			Function_343(&(Local_669[715]));
			Function_343(&(Local_669[815]));
			Function_345(&(Local_669[115]), 1024, 1);
			if (HUD_IS_FADED())
			{
				Function_293(&iLocal_585);
				iLocal_577 = 5;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			Function_342(iLocal_576);
			Function_333(StackVal, Function_342(iLocal_576), iLocal_576, Global_46736[2], Function_341(iLocal_576), 2);
			bLocal_954 = Function_332();
			PRINTINT(bLocal_954);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&iLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_583)) && SQUAD_IS_VALID(&Local_1096 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1096 + 64, (SQUAD_GET_SIZE(&Local_1096 + 64) - 1))))
			{
				if (((Function_331(&bLocal_581, 1, 0x41700000) && Function_331(&iLocal_4 + 240[02], 1, 0x41700000)) && Function_331(&bLocal_583, 1, 0x41700000)) && Function_331(SQUAD_GET_ACTOR_BY_INDEX(&Local_1096 + 64, (SQUAD_GET_SIZE(&Local_1096 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_581) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_293(&iLocal_585);
						iLocal_577 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_294(&Global_54076, &iLocal_4 + 1032[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_583))
							{
								Function_294(&bLocal_583, &iLocal_4 + 1032[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
								}
							}
							else
							{
								bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_581))
						{
							Function_294(&bLocal_581, &iLocal_4 + 1032[1], 1, 1, 1);
							if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
							{
								Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1032[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				Function_416();
				Function_419();
				Function_271(&Local_1096 + 64);
				Function_327(&Local_1096 + 64, &iLocal_4 + 536);
				Function_326(&Local_1096 + 64, 2, 1);
				Function_326(&Local_1096 + 88, 2, 1);
				Function_326(&Local_1096 + 72, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1096 + 64, &Local_1096 + 96, 1, 0,5f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_293(&iLocal_585);
			iLocal_577 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1080))
				{
					if (IS_OBJECT_VALID(&Local_1096 + 8))
					{
						uLocal_1080 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_470, "RANCH07_CAMERA_FOCUS", &Local_1096 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1080))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1080, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, &uLocal_1080, &Local_1096 + 8, Vector(0.0f, 0.0f, 0.0f), 1,5f);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 408))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 408);
					if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 968[4], &uLocal_990);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], 1);
						TASK_CLEAR(&iLocal_4 + 320[02]);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1032[5], &uLocal_993);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], 1);
						TASK_CLEAR(&iLocal_4 + 320[12]);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1032[6], &uLocal_996);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[22], 0);
						SET_ACTOR_MAX_SPEED(&iLocal_4 + 320[22], true);
						SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[22], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[22], "guide_herd/moving_version/start");
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(0, &iLocal_4 + 1416, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1096 + 8, &iLocal_4 + 1728, 4.0f, 1, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[22], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[22], 2);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1032[7], &uLocal_999);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[32], 0);
						SET_ACTOR_MAX_SPEED(&iLocal_4 + 320[32], true);
						SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[32], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[32], "guide_herd/moving_version/start");
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(0, &iLocal_4 + 1416, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1096 + 8, &iLocal_4 + 1736, 4.0f, 1, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[32], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[32], 2);
					}
				}
				if (iLocal_597[1] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1096 + 64))
					{
						Function_416();
						Function_419();
						Function_271(&Local_1096 + 64);
						Function_327(&Local_1096 + 64, &iLocal_4 + 536);
						Function_326(&Local_1096 + 64, 2, 1);
						Function_326(&Local_1096 + 88, 2, 1);
						Function_326(&Local_1096 + 72, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1096 + 64, &Local_1096 + 96, 1, 0,5f, 1.0f);
					}
				}
				bLocal_1014 = false;
				if (SQUAD_IS_VALID(&Local_1096 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 72);
					Function_272(&Local_1096 + 72);
				}
				*(&Local_1096 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1096 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 80);
					Function_272(&Local_1096 + 80);
				}
				*(&Local_1096 + 16) = &iLocal_4 + 1368;
				GET_OBJECT_POSITION(&iLocal_4 + 1368, &uLocal_981);
				if (SQUAD_IS_VALID(&Local_1096 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 88);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 784, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				}
				Function_418();
				Function_293(&iLocal_585);
				iLocal_577 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!IS_BLIP_VALID(&bLocal_1002))
				{
					bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1376, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&bLocal_1002))
					{
						SET_BLIP_PRIORITY(&bLocal_1002, 3);
					}
				}
				if (!IS_OBJECT_VALID(&bLocal_1004))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1376, &Local_984);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1376, &Local_987);
					bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
					}
				}
				Function_324("ranch07_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_267(&iLocal_585) <= 8.0f)
			{
				Function_139("ranch07_obj03_start2", 4.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_267(&iLocal_585) <= 5.0f)
			{
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, &cLocal_470, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					REMOVE_BLIP(&bLocal_1002);
				}
				if (IS_OBJECT_VALID(&bLocal_1004))
				{
					DESTROY_OBJECT(&bLocal_1004);
				}
				if (bLocal_1012)
				{
					Function_320();
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&bLocal_1002))
				{
					bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1376, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&bLocal_1002))
					{
					}
				}
				if (!IS_OBJECT_VALID(&bLocal_1004))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1376, &Local_984);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1376, &Local_987);
					bLocal_1004 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
					}
				}
				if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (!bLocal_1012)
					{
						Function_244();
						Function_319();
					}
				}
				if (bLocal_1014)
				{
					Function_312(&fLocal_593, 245.0f, 385.0f, &Local_1096 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_312(&fLocal_593, 190.0f, 330.0f, &Local_1096 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0);
				}
				if (((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 88)) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1096 + 64) != 0 && SQUAD_GET_SIZE(&Local_1096 + 72) != 0) && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
						Function_311(&Local_1096 + 64);
						Function_311(&Local_1096 + 72);
						Function_311(&Local_1096 + 80);
						Function_311(&Local_1096 + 88);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_293(&iLocal_585);
						iLocal_577 = 106;
					}
				}
				if (Local_1096.f_148)
				{
					if (Function_267(&Local_1096 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1096 + 16)) && IS_OBJECT_VALID(&Local_1096 + 8))
						{
							if (Function_308(&bLocal_581, &Local_1096 + 16, 25.0f))
							{
								if (Function_308(&Global_54076, &Local_1096 + 16, 25.0f) && Function_308(&Global_54076, &Local_1096 + 8, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 80)) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 88))
									{
										Function_270(&Local_1096 + 64, &Local_1096 + 88);
										Function_270(&Local_1096 + 80, &Local_1096 + 88);
										Function_270(&Local_1096 + 72, &Local_1096 + 88);
									}
									Function_293(&Local_1096 + 132);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_597[2] = 1;
			Function_293(&iLocal_585);
			iLocal_576 = 3;
			iLocal_577 = 0;
			break;
	}
	return;
}

void Function_418() //Position: 0x17935 / 96565
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowsDownRoad", "Ranch07_cowsDownRoad", false, 2, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419() //Position: 0x17986 / 96646
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1096 + 64, &Local_1096 + 96, &Local_1096 + 24, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_420() //Position: 0x179B1 / 96689
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1032[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		Function_405();
		if (SQUAD_IS_VALID(&iLocal_4 + 408))
		{
			SQUAD_SET_FACTION(&iLocal_4 + 408, 20);
			Function_285(&iLocal_4 + 408, 1);
			Function_288(&iLocal_4 + 408, 0, 0, 0);
			Function_291(&iLocal_4 + 408, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
			{
				Function_294(&iLocal_4 + 320[02], &iLocal_4 + 1032[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
			{
				Function_294(&iLocal_4 + 320[12], &iLocal_4 + 1032[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
			{
				Function_294(&iLocal_4 + 320[22], &iLocal_4 + 1032[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
			{
				Function_294(&iLocal_4 + 320[32], &iLocal_4 + 1032[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 408, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_421();
	return;
}

void Function_421() //Position: 0x17B50 / 97104
{
	Function_422();
	*(&Local_1096 + 24) = &iLocal_4 + 1800;
	if (!SQUAD_IS_VALID(&Local_1096 + 64))
	{
		*(&Local_1096 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 64);
			Function_280(&Local_1096, &cLocal_470, &iLocal_4 + 1360, &iLocal_1070, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_291(&Local_1096 + 64, 0);
			Function_279(&Local_1096 + 64, 1);
			Function_278(&Local_1096 + 64, 0);
			Function_277(&Local_1096 + 64, 0);
			Function_276(&Local_1096 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 768, -1.0f);
		}
	}
	return;
}

void Function_422() //Position: 0x17C30 / 97328
{
	iLocal_1070[0] = 1008;
	iLocal_1070[1] = 1009;
	iLocal_1070[2] = 1010;
	iLocal_1070[3] = 1011;
	*(&Local_1096 + 152[0]) = &Global_54076;
	*(&Local_1096 + 152[1]) = &bLocal_581;
	Local_1096.f_112 = 5;
	PRINTINT(Local_1096.f_112);
	PRINTNL();
	*(&Local_1096 + 104) = "HOME01_COWS01";
	if (!Function_269(&Local_1096 + 132))
	{
		Function_252(&Local_1096 + 132);
	}
	else
	{
		Function_293(&Local_1096 + 132);
	}
	if (!IS_OBJECT_VALID(&Local_1096))
	{
		Local_1096 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_470, "COWS_01_BASE", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1096))
		{
		}
	}
	if (!IS_OBJECT_VALID(&Local_1096 + 8))
	{
		*(&Local_1096 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_470, "COWS_01_CENTER", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1096 + 8))
		{
		}
	}
	if (!SQUAD_IS_VALID(&Local_1096 + 72))
	{
		*(&Local_1096 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 72))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 72);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1096 + 80))
	{
		*(&Local_1096 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 80))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 80);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1096 + 88))
	{
		*(&Local_1096 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 88))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 88);
		}
	}
	(&Local_1096 + 24) = "";
	(&Local_1096 + 16) = "";
	Local_1096.f_148 = 0;
	return;
}

void Function_423() //Position: 0x17E27 / 97831
{
	if (Function_267(&iLocal_1046) <= 0,1f)
	{
		switch (iLocal_953)
		{
			case 0x00000000:
				Function_293(&iLocal_589);
				Function_293(&iLocal_1062);
				Function_293(&iLocal_1066);
				iLocal_953++;
				break;
			
			case 0x00000001:
				Function_412(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (SQUAD_GET_SIZE(&Local_1096 + 72) != 0 && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
				{
					if (Function_267(&iLocal_589) <= 3.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[02], "Ranch07_goodJob1", &Global_54076, 1, 0, 0, 0, 0);
						}
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[22], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[22], "Ranch07_goodJob3", &Global_54076, 1, 0, 0, 0, 0);
						}
						Function_293(&iLocal_589);
					}
					if (Function_267(&iLocal_1062) <= 4.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[12], "Ranch07_goodJob2", &Global_54076, 1, 0, 0, 0, 0);
						}
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[32], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[32], "Ranch07_goodJob5", &Global_54076, 1, 0, 0, 0, 0);
						}
						Function_293(&iLocal_1062);
					}
					if (Function_267(&iLocal_1066) <= 5.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[42], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[42], "Ranch07_goodJob4", &Global_54076, 1, 0, 0, 0, 0);
						}
						Function_293(&iLocal_1066);
					}
				}
				break;
			
			case 0x00000002:
				iLocal_953++;
				break;
		}
		Function_293(&iLocal_1046);
	}
	return;
}

void Function_424() //Position: 0x18027 / 98343
{
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		switch (iLocal_951)
		{
			case 0x00000000:
				iLocal_951++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_581);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_581);
				Function_351(3, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_581, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, true);
				GET_OBJECT_POSITION(&iLocal_4 + 1112[3], &uLocal_978);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(0, &uLocal_978, 0);
				TASK_GO_NEAR_COORD(false, &uLocal_978, 3.0f, 3);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				iLocal_951++;
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(&bLocal_581, 61) == 0)
				{
					iLocal_951++;
				}
				break;
			
			case 0x00000003:
				SET_ANIM_SET_FOR_ACTOR(&bLocal_581, "waving_on_horse", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_581, "waving_on_horse/back");
				iLocal_951++;
				break;
			
			case 0x00000004:
				iLocal_951++;
				break;
			}
	}
	return;
}

void Function_425() //Position: 0x18150 / 98640
{
	Function_306(&cLocal_470);
	if (!iLocal_1030)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_395(&iLocal_964);
			}
			else
			{
				iLocal_950 = 0;
				iLocal_1030 = 0;
			}
		}
	}
	if (((iLocal_577 < 5 && iLocal_577 > 105) && !iLocal_577 != 104) && !iLocal_577 != 103)
	{
		Function_394(&Local_1096 + 64, &Local_1096 + 88, &iLocal_4 + 744);
		Function_393(&Local_1096);
		if (bLocal_1012)
		{
			Function_389(&Local_1096, 0);
			if (iLocal_577 > 8)
			{
				Function_388(&Local_1096, 0);
				Function_387(&Local_1096, 0, 0x41700000);
			}
		}
		Function_437();
		Function_436();
		Function_432();
		Function_431();
		Function_430();
		Function_381(&Global_54076);
		Function_429();
	}
	switch (iLocal_577)
	{
		case 0x00000000:
			Function_302(0);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_597[0] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_298();
				bLocal_578 = Global_46736[2];
				if (!Function_297(bLocal_578))
				{
					Function_295(&Local_472);
				}
				Function_294(&Global_54076, &iLocal_4 + 968[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_583, true);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 1;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(bLocal_578) || bLocal_578 != 4294967295))
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
			iLocal_953 = 0;
			iLocal_950 = 0;
			iLocal_951 = 0;
			iLocal_958 = 0;
			iLocal_959 = 0;
			iLocal_960 = 0;
			iLocal_961 = 0;
			iLocal_1028 = 0;
			bLocal_1012 = false;
			Function_427();
			if (iLocal_597[0] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_294(&Global_54076, &iLocal_4 + 968[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						Function_294(&bLocal_583, &iLocal_4 + 968[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
						}
					}
					else
					{
						bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					Function_294(&bLocal_581, &iLocal_4 + 968[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
					{
						Function_294(&iLocal_4 + 240[02], &iLocal_4 + 968[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
						}
					}
				}
			}
			Function_344(&(Local_669[015]), &bLocal_581, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[115]), &iLocal_4 + 408, "Rancher", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[215]), &Local_1096 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[315]), &Local_1096 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[415]), &Local_1096 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[515]), &Local_1096 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_343(&(Local_669[615]));
			Function_343(&(Local_669[715]));
			Function_343(&(Local_669[815]));
			Function_345(&(Local_669[115]), 1024, 1);
			if (HUD_IS_FADED())
			{
				Function_293(&iLocal_585);
				iLocal_577 = 5;
			}
			else
			{
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			Function_342(iLocal_576);
			Function_333(StackVal, Function_342(iLocal_576), iLocal_576, Global_46736[2], Function_341(iLocal_576), 2);
			bLocal_954 = Function_332();
			PRINTINT(bLocal_954);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&iLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_583)) && SQUAD_IS_VALID(&Local_1096 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1096 + 64, (SQUAD_GET_SIZE(&Local_1096 + 64) - 1))))
			{
				if (((Function_331(&bLocal_581, 1, 0x41700000) && Function_331(&iLocal_4 + 240[02], 1, 0x41700000)) && Function_331(&bLocal_583, 1, 0x41700000)) && Function_331(SQUAD_GET_ACTOR_BY_INDEX(&Local_1096 + 64, (SQUAD_GET_SIZE(&Local_1096 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_581) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_293(&iLocal_585);
						iLocal_577 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_294(&Global_54076, &iLocal_4 + 968[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_583))
							{
								Function_294(&bLocal_583, &iLocal_4 + 968[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
								}
							}
							else
							{
								bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_581))
						{
							Function_294(&bLocal_581, &iLocal_4 + 968[1], 1, 1, 1);
							if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
							{
								Function_294(&iLocal_4 + 240[02], &iLocal_4 + 968[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1096 + 64))
			{
				Function_416();
				Function_426();
				Function_271(&Local_1096 + 64);
				Function_327(&Local_1096 + 64, &iLocal_4 + 496);
				Function_326(&Local_1096 + 64, 2, 1);
				Function_326(&Local_1096 + 88, 2, 1);
				Function_326(&Local_1096 + 72, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1096 + 64, &Local_1096 + 96, 1, 0,5f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_293(&iLocal_585);
			iLocal_577 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1080))
				{
					if (IS_OBJECT_VALID(&Local_1096 + 8))
					{
						uLocal_1080 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_470, "RANCH07_CAMERA_FOCUS", &Local_1096 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1080))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1080, 0);
							SET_CAMERA_FOCUS_OBJECT(StackVal, &uLocal_1080, &Local_1096 + 8, Vector(0.0f, 0.0f, 0.0f), 1,5f);
						}
					}
				}
				if (iLocal_597[0] == 0)
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], 1);
						GET_OBJECT_POSITION(&iLocal_4 + 1032[4], &uLocal_990);
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uLocal_990, 2);
						TASK_FACE_COORD(0, &iLocal_4 + 1392, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[02], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[02], 2);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], 1);
						GET_OBJECT_POSITION(&iLocal_4 + 1032[5], &uLocal_993);
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uLocal_993, 2);
						TASK_FACE_COORD(0, &iLocal_4 + 1392, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[12], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[12], 2);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[22], 1);
						GET_OBJECT_POSITION(&iLocal_4 + 1032[6], &uLocal_996);
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH(0, &iLocal_4 + 1848, 2, 1, 1, 1, false);
						TASK_GO_TO_COORD(0, &uLocal_996, 2);
						TASK_FACE_COORD(0, &iLocal_4 + 1416, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[22], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[22], 2);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[32], 1);
						GET_OBJECT_POSITION(&iLocal_4 + 1032[7], &uLocal_999);
						bLocal_949 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH(0, &iLocal_4 + 1856, 2, 1, 1, 1, false);
						TASK_GO_TO_COORD(0, &uLocal_999, 2);
						TASK_FACE_COORD(0, &iLocal_4 + 1416, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[32], bLocal_949);
						TASK_SEQUENCE_RELEASE(bLocal_949, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 320[32], 2);
					}
				}
				if (iLocal_597[0] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1096 + 64))
					{
						Function_416();
						Function_426();
						Function_271(&Local_1096 + 64);
						Function_327(&Local_1096 + 64, &iLocal_4 + 496);
						Function_326(&Local_1096 + 64, 2, 1);
						Function_326(&Local_1096 + 88, 2, 1);
						Function_326(&Local_1096 + 72, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1096 + 64, &Local_1096 + 96, 1, 0,5f, 1.0f);
					}
				}
				bLocal_1014 = false;
				if (SQUAD_IS_VALID(&Local_1096 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 72);
					Function_272(&Local_1096 + 72);
				}
				*(&Local_1096 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1096 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 80);
					Function_272(&Local_1096 + 80);
				}
				*(&Local_1096 + 16) = &iLocal_4 + 1360;
				GET_OBJECT_POSITION(&iLocal_4 + 1360, &uLocal_981);
				if (SQUAD_IS_VALID(&Local_1096 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1096 + 88);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 776, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				}
				Function_293(&iLocal_585);
				iLocal_577 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_267(&iLocal_585) <= 0,5f)
			{
				Function_324("ranch07_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_267(&iLocal_585) <= 8.0f)
			{
				Function_139("ranch07_obj02_start2", 4.0f, 1, 0, 2, 1, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_267(&iLocal_585) <= 5.0f)
			{
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, &cLocal_470, 0, 334))
			{
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					REMOVE_BLIP(&bLocal_1002);
				}
				if (IS_OBJECT_VALID(&bLocal_1004))
				{
					DESTROY_OBJECT(&bLocal_1004);
				}
				if (bLocal_1012)
				{
					Function_320();
				}
			}
			else
			{
				if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (!bLocal_1012)
					{
						Function_244();
						Function_319();
					}
				}
				if (bLocal_1014)
				{
					Function_312(&fLocal_593, 245.0f, 385.0f, &Local_1096 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_312(&fLocal_593, 190.0f, 330.0f, &Local_1096 + 8, "Herd_return", "Herd_abandoned", &bLocal_612, 0, 0, 0, 4294967295, 1, 0);
				}
				if (((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 88)) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1096 + 64) != 0 && SQUAD_GET_SIZE(&Local_1096 + 72) != 0) && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
						Function_311(&Local_1096 + 64);
						Function_311(&Local_1096 + 72);
						Function_311(&Local_1096 + 80);
						Function_311(&Local_1096 + 88);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_244();
						Function_293(&iLocal_585);
						iLocal_577 = 106;
					}
				}
				if (Local_1096.f_148)
				{
					if (Function_267(&Local_1096 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1096 + 16)) && IS_OBJECT_VALID(&Local_1096 + 8))
						{
							if (Function_308(&bLocal_581, &Local_1096 + 16, 25.0f))
							{
								if (Function_308(&Global_54076, &Local_1096 + 16, 25.0f) && Function_308(&Global_54076, &Local_1096 + 8, 25.0f))
								{
									LOG_ERROR("RANCH07 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH07 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 80)) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 88))
									{
										Function_270(&Local_1096 + 64, &Local_1096 + 88);
										Function_270(&Local_1096 + 80, &Local_1096 + 88);
										Function_270(&Local_1096 + 72, &Local_1096 + 88);
									}
									Function_293(&Local_1096 + 132);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_597[1] = 1;
			Function_293(&iLocal_585);
			iLocal_576 = 2;
			iLocal_577 = 0;
			break;
	}
	return;
}

void Function_426() //Position: 0x18F92 / 102290
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1096 + 64, &Local_1096 + 96, &Local_1096 + 24, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_427() //Position: 0x18FBD / 102333
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 968[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		Function_405();
		if (SQUAD_IS_VALID(&iLocal_4 + 408))
		{
			Function_288(&iLocal_4 + 408, 0, 0, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 408, 20);
			Function_285(&iLocal_4 + 408, 1);
			Function_291(&iLocal_4 + 408, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 408, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_428();
	return;
}

void Function_428() //Position: 0x190C0 / 102592
{
	Function_422();
	*(&Local_1096 + 24) = &iLocal_4 + 1784;
	if (!SQUAD_IS_VALID(&Local_1096 + 64))
	{
		*(&Local_1096 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 64);
			Function_280(&Local_1096, &cLocal_470, &iLocal_4 + 1344, &iLocal_1070, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_291(&Local_1096 + 64, 0);
			Function_279(&Local_1096 + 64, 1);
			Function_278(&Local_1096 + 64, 0);
			Function_277(&Local_1096 + 64, 0);
			Function_276(&Local_1096 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 768, -1.0f);
		}
	}
	return;
}

void Function_429() //Position: 0x191A0 / 102816
{
	if (Function_267(&iLocal_1046) <= 0,1f)
	{
		switch (iLocal_953)
		{
			case 0x00000000:
				Function_293(&iLocal_589);
				Function_293(&iLocal_1062);
				Function_293(&iLocal_1066);
				iLocal_953++;
				break;
			
			case 0x00000001:
				Function_412(1, 1, 1, 0x42340000, 0x41f00000, 1);
				if (SQUAD_GET_SIZE(&Local_1096 + 72) != 0 && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
				{
					if (Function_267(&iLocal_589) <= 3.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[02], "Ranch07_ranchhandCheer1", &Global_54076, 1, 0, 0, 0, 0);
						}
						Function_293(&iLocal_589);
					}
					if (Function_267(&iLocal_1062) <= 4.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[12], "Ranch07_ranchhandCheer2", &Global_54076, 1, 0, 0, 0, 0);
						}
						Function_293(&iLocal_1062);
					}
					if (Function_267(&iLocal_1066) <= 5.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[42], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[42], "Ranch07_ranchhandCheer3", &Global_54076, 1, 0, 0, 0, 0);
						}
						Function_293(&iLocal_1066);
					}
				}
				break;
			
			case 0x00000002:
				iLocal_953++;
				break;
		}
		Function_293(&iLocal_1046);
	}
	return;
}

void Function_430() //Position: 0x19333 / 103219
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
	{
		switch (iLocal_961)
		{
			case 0x00000000:
				iLocal_961++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS(&iLocal_4 + 320[32], 23) == 0)
				{
					iLocal_961++;
				}
				break;
			
			case 0x00000002:
				if (SQUAD_IS_VALID(&Local_1096 + 88))
				{
					if (SQUAD_GET_SIZE(&Local_1096 + 88) > 1)
					{
						SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[32], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[32], "guide_herd/start");
						iLocal_961++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_961++;
				break;
			}
	}
	return;
}

void Function_431() //Position: 0x193FA / 103418
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
	{
		switch (iLocal_960)
		{
			case 0x00000000:
				iLocal_960++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS(&iLocal_4 + 320[22], 23) == 0)
				{
					iLocal_960++;
				}
				break;
			
			case 0x00000002:
				if (SQUAD_IS_VALID(&Local_1096 + 88))
				{
					if (SQUAD_GET_SIZE(&Local_1096 + 88) > 1)
					{
						SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[22], "guide_herd", 0);
						SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[22], "guide_herd/start");
						iLocal_960++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_960++;
				break;
			}
	}
	return;
}

void Function_432() //Position: 0x194C1 / 103617
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
	{
		switch (iLocal_959)
		{
			case 0x00000000:
				iLocal_959++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS(&iLocal_4 + 320[12], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[12], "guide_herd/start");
					Function_293(&iLocal_1058);
					iLocal_959++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 7)
				{
					if ((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 80))
					{
						if ((SQUAD_GET_SIZE(&Local_1096 + 64) != 0 && SQUAD_GET_SIZE(&Local_1096 + 72) != 0) && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
						{
							iLocal_959 = 3;
						}
						else
						{
							if (Function_267(&iLocal_1058) <= 3.0f)
							{
								Function_433(&iLocal_4 + 320[12], &Local_1096 + 64, 2);
								Function_293(&iLocal_1058);
							}
							if ((!Function_396(&Local_1096 + 64, &iLocal_4 + 880) && !Function_396(&Local_1096 + 72, &iLocal_4 + 880)) && !Function_396(&Local_1096 + 80, &iLocal_4 + 880))
							{
								if (IS_ACTION_NODE_PLAYING(&iLocal_4 + 320[12], "guide_herd/start"))
								{
									RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], 1);
								}
							}
							else if (!IS_ACTION_NODE_PLAYING(&iLocal_4 + 320[12], "guide_herd/start"))
							{
								SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], "guide_herd", 0);
								SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[12], "guide_herd/start");
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 968[5], &uLocal_993);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], 1);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_993, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[12], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 320[12], 2);
				iLocal_959++;
				break;
			
			case 0x00000004:
				iLocal_959++;
				break;
			}
	}
	return;
}

void Function_433(var uParam0, var uParam1, bool bParam2) //Position: 0x1970C / 104204
{
	struct<2> Var0;
	int iVar2;
	
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (IS_ACTOR_VALID(&uParam0))
		{
			iVar2 = Function_434(&uParam1, &uParam0, 0, 0);
			if (IS_ACTOR_VALID(&iVar2))
			{
				GET_OBJECT_POSITION(&iVar2, &Var0);
				PRINTVECTOR(Var0);
				TASK_FACE_COORD(&uParam0, &Var0, 0);
				TASK_PRIORITY_SET(&uParam0, bParam2);
			}
		}
	}
	return;
}

int Function_434(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x19762 / 104290
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_435(&uVar4, &uParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

var Function_435(float fParam0, bool bParam1) //Position: 0x1982D / 104493
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

void Function_436() //Position: 0x19922 / 104738
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
	{
		switch (iLocal_958)
		{
			case 0x00000000:
				iLocal_958++;
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS(&iLocal_4 + 320[02], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[02], "guide_herd/start");
					Function_293(&iLocal_1054);
					iLocal_958++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 7)
				{
					if ((SQUAD_IS_VALID(&Local_1096 + 64) && SQUAD_IS_VALID(&Local_1096 + 72)) && SQUAD_IS_VALID(&Local_1096 + 80))
					{
						if ((SQUAD_GET_SIZE(&Local_1096 + 64) != 0 && SQUAD_GET_SIZE(&Local_1096 + 72) != 0) && SQUAD_GET_SIZE(&Local_1096 + 80) != 0)
						{
							iLocal_958 = 3;
						}
						else
						{
							if (Function_267(&iLocal_1054) <= 1.0f)
							{
								Function_433(&iLocal_4 + 320[02], &Local_1096 + 64, 2);
								Function_293(&iLocal_1054);
							}
							if ((!Function_396(&Local_1096 + 64, &iLocal_4 + 872) && !Function_396(&Local_1096 + 72, &iLocal_4 + 872)) && !Function_396(&Local_1096 + 80, &iLocal_4 + 872))
							{
								if (IS_ACTION_NODE_PLAYING(&iLocal_4 + 320[02], "guide_herd/start"))
								{
									RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], 1);
								}
							}
							else if (!IS_ACTION_NODE_PLAYING(&iLocal_4 + 320[02], "guide_herd/start"))
							{
								SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], "guide_herd", 0);
								SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[02], "guide_herd/start");
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 968[4], &uLocal_990);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], 1);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_990, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[02], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 320[02], 2);
				iLocal_958++;
				break;
			
			case 0x00000004:
				iLocal_958++;
				break;
			}
	}
	return;
}

void Function_437() //Position: 0x19B6D / 105325
{
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		switch (iLocal_951)
		{
			case 0x00000000:
				iLocal_951++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_581);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_581);
				Function_351(3, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_581, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, true);
				GET_OBJECT_POSITION(&iLocal_4 + 1032[3], &uLocal_978);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(&iLocal_4 + 720))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 720))
					{
						TASK_FACE_COORD(0, &iLocal_4 + 1440, 0);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 1792, 2, 1, 1, 1, false);
					}
				}
				TASK_GO_NEAR_COORD(false, &uLocal_978, 3.0f, 4);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				iLocal_951++;
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(&bLocal_581, 61) == 0)
				{
					iLocal_951++;
				}
				break;
			
			case 0x00000003:
				SET_ANIM_SET_FOR_ACTOR(&bLocal_581, "waving_on_horse", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_581, "waving_on_horse/back");
				iLocal_951++;
				break;
			
			case 0x00000004:
				iLocal_951++;
				break;
			}
	}
	return;
}

void Function_438() //Position: 0x19CC3 / 105667
{
	Function_306(&cLocal_470);
	if (!iLocal_1030)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_395(&iLocal_964);
			}
			else
			{
				iLocal_950 = 0;
				iLocal_1030 = 0;
			}
		}
	}
	if (!iLocal_1031)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_473();
			}
			else
			{
				iLocal_955 = 0;
				iLocal_1031 = 0;
			}
		}
	}
	if (!iLocal_1032)
	{
		if (iLocal_577 > 2)
		{
			if (Function_297(Global_46816[0]))
			{
				Function_472();
			}
			else
			{
				iLocal_963 = 0;
				iLocal_1032 = 0;
			}
		}
	}
	if (((iLocal_577 < 5 && iLocal_577 > 105) && !iLocal_577 != 104) && !iLocal_577 != 103)
	{
		Function_468(1, 0);
		Function_467();
		Function_466();
		Function_465();
		Function_464();
		Function_463();
		Function_462();
		Function_461();
		if (iLocal_577 <= 15 && iLocal_577 >= 17)
		{
			if (Function_459(&fLocal_593, (2.0f * 60.0f), (2.0f * 200.0f), &bLocal_581, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_612, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					REMOVE_BLIP(&bLocal_1002);
				}
				if (IS_OBJECT_VALID(&bLocal_1004))
				{
					Function_458(&bLocal_1004);
				}
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
					{
						Function_351(3, 1, 1);
					}
				}
			}
			else
			{
				if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, 0, 0, 334))
				{
					if (IS_BLIP_VALID(&bLocal_1002))
					{
						REMOVE_BLIP(&bLocal_1002);
					}
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
						Function_458(&bLocal_1004);
					}
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_583, 334, 0, 2, 0);
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_583));
						}
					}
					if (!IS_BLIP_VALID(&bLocal_1002))
					{
						bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1352, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							SET_BLIP_PRIORITY(&bLocal_1002, 3);
						}
					}
					if (!IS_OBJECT_VALID(&bLocal_1004))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1352, &Local_984);
						GET_OBJECT_ORIENTATION(&iLocal_4 + 1352, &Local_987);
						bLocal_1004 = Function_457(StackVal, StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, &Global_54076, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
						}
					}
					if (IS_OBJECT_VALID(&bLocal_1004))
					{
						if (GATEWAY_UPDATE(&bLocal_1004))
						{
							if (IS_BLIP_VALID(&bLocal_1002))
							{
								REMOVE_BLIP(&bLocal_1002);
							}
							if (IS_OBJECT_VALID(&bLocal_1004))
							{
								Function_458(&bLocal_1004);
							}
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
							if (IS_ACTOR_VALID(&bLocal_581))
							{
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
								{
									Function_351(3, 0, 1);
								}
							}
							Function_244();
							Function_293(&iLocal_585);
							iLocal_577 = 106;
						}
					}
				}
				if (IS_BLIP_VALID(Function_456(3)))
				{
					Function_351(3, 0, 1);
				}
			}
		}
		Function_443();
	}
	switch (iLocal_577)
	{
		case 0x00000000:
			Function_302(0);
			if (Function_296(&Local_472))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			TASK_CLEAR(&bLocal_581);
			TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_581, true);
			TASK_CLEAR(&bLocal_583);
			TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_583, true);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_298();
			bLocal_578 = Global_46816[0];
			if (!Function_297(bLocal_578))
			{
				Function_295(&Local_472);
			}
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 816);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 816);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 816, 15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 824);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 824);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 824, 15);
			if (Function_296(&Local_472))
			{
				Function_294(&Global_54076, &iLocal_4 + 920[0], 1, 1, 1);
			}
			Function_293(&iLocal_585);
			iLocal_577 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(bLocal_578) || bLocal_578 != 4294967295))
			{
				Function_293(&iLocal_585);
				iLocal_577 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_951 = 0;
			iLocal_958 = 0;
			iLocal_959 = 0;
			iLocal_960 = 0;
			iLocal_961 = 0;
			iLocal_962 = 0;
			iLocal_953 = 0;
			iLocal_963 = 0;
			iLocal_950 = 0;
			iLocal_1030 = 0;
			iLocal_1032 = 0;
			bLocal_1012 = false;
			bLocal_1027 = false;
			iLocal_1028 = 0;
			iLocal_1029 = 0;
			Function_442(&iLocal_1015);
			if (Function_296(&Local_472))
			{
				iLocal_955 = 0;
				iLocal_1031 = 0;
				if (IS_VOLUME_VALID(&iLocal_4 + 848))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 848);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 848);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 848, 15);
				}
				Function_294(&Global_54076, &iLocal_4 + 920[0], 1, 1, 1);
				Function_294(&bLocal_581, &iLocal_4 + 920[1], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (IS_GRINGO_VALID(&(uLocal_1082[0])))
					{
						Function_294(&bLocal_583, &iLocal_4 + 920[2], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
				{
					if (IS_GRINGO_VALID(&(uLocal_1082[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 240[02], GET_OBJECT_FROM_GRINGO(&(uLocal_1082[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&iLocal_4 + 240[02], &(uLocal_1082[1]), "UseCase1", true, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 240[02], true);
					}
				}
			}
			Local_1096.f_120 = 0;
			Local_1096.f_124 = 0;
			Local_1144.f_120 = 0;
			Local_1144.f_124 = 0;
			bLocal_956 = (Local_1096.f_120 + Local_1144.f_120);
			bLocal_957 = (Local_1096.f_124 + Local_1144.f_124);
			PRINTINT(bLocal_956);
			PRINTNL();
			PRINTINT(bLocal_957);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(bLocal_957) / TO_FLOAT(bLocal_956)));
			PRINTNL();
			Global_21684[Local_4727].f_24 = bLocal_956;
			PRINTINT(Global_21684[Local_4727].f_24);
			PRINTNL();
			Global_21684[Local_4727].f_28 = (TO_FLOAT(bLocal_957) / TO_FLOAT(bLocal_956));
			PRINTFLOAT(Global_21684[Local_4727].f_28);
			PRINTNL();
			Function_440();
			Function_344(&(Local_669[015]), &bLocal_581, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_344(&(Local_669[115]), &iLocal_4 + 408, "Rancher", 0, 0x5f5e100, 1);
			Function_344(&(Local_669[215]), &Local_1096 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_343(&(Local_669[315]));
			Function_343(&(Local_669[415]));
			Function_343(&(Local_669[515]));
			Function_343(&(Local_669[615]));
			Function_343(&(Local_669[715]));
			Function_343(&(Local_669[815]));
			if (HUD_IS_FADED())
			{
				Function_293(&iLocal_585);
				iLocal_577 = 5;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			Function_342(iLocal_576);
			Function_333(StackVal, Function_342(iLocal_576), iLocal_576, Global_46736[2], Function_341(iLocal_576), 0);
			bLocal_954 = Function_332();
			PRINTINT(bLocal_954);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((IS_ACTOR_VALID(&bLocal_581) && IS_ACTOR_VALID(&iLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_583))
			{
				if ((Function_331(&bLocal_581, 1, 0x41700000) && Function_331(&iLocal_4 + 240[02], 1, 0x41700000)) && Function_331(&bLocal_583, 1, 0x41700000))
				{
					Function_293(&iLocal_585);
					iLocal_577 = 104;
				}
			}
			if (!IS_ACTOR_VALID(&bLocal_583))
			{
				bLocal_583 = Function_353(1, 1, 0, 0, 0, 0, 1, 0);
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_296(&Local_472))
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			}
			Function_293(&iLocal_585);
			iLocal_577 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_585);
				iLocal_577 = 6;
			}
			break;
		
		case 0x00000006:
			Function_293(&iLocal_585);
			iLocal_577 = 7;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&bLocal_583))
			{
				if (!IS_ACTOR_DEAD(&bLocal_583))
				{
					if (!IS_BLIP_VALID(&bLocal_1002))
					{
						bLocal_1002 = ADD_BLIP_FOR_ACTOR(&bLocal_583, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&bLocal_1002))
						{
						}
					}
					Function_324("ranch07_obj00", 7,5f, 1, 2, 0, 0, 0, 0);
				}
			}
			Function_293(&iLocal_585);
			Function_293(&iLocal_589);
			Function_293(&fLocal_593);
			iLocal_577 = 8;
			break;
		
		case 0x00000008:
			if (Function_459(&fLocal_593, 60.0f, 200.0f, &bLocal_581, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_612, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					REMOVE_BLIP(&bLocal_1002);
				}
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
					{
						Function_351(3, 1, 1);
					}
				}
			}
			else
			{
				if (!IS_ACTOR_VALID(&bLocal_583))
				{
					if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, 0, 0, 334))
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_ACTOR_VALID(&bLocal_583))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
							{
								ADD_BLIP_FOR_ACTOR(&bLocal_583, 334, 0, 2, 0);
							}
						}
					}
					else if (IS_ACTOR_VALID(&bLocal_583))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_583));
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(&bLocal_581))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
						{
							Function_351(3, 0, 1);
						}
					}
					if (!IS_BLIP_VALID(&bLocal_1002))
					{
						bLocal_1002 = ADD_BLIP_FOR_ACTOR(&bLocal_583, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&bLocal_1002))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_583)
					{
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						Function_244();
						Function_293(&iLocal_585);
						iLocal_577 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_267(&iLocal_585) <= 0,5f)
			{
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_581, 3212836864, 3212836864, 4, 1, 0);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					Function_351(3, 1, 1);
				}
				Function_439();
				Function_293(&iLocal_585);
				iLocal_577 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_267(&iLocal_585) <= 2,5f)
			{
				Function_324("ranch07_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_459(&fLocal_593, (2.0f * 60.0f), (2.0f * 200.0f), &bLocal_581, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_612, 0, 0, 0, 325, 1))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
				{
					Function_351(3, 1, 1);
				}
			}
			else if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
				{
					Function_351(3, 0, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_583, 334, 0, 2, 0);
					}
				}
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
				{
					Function_351(3, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_583));
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_581))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 720) && IS_VOLUME_VALID(&iLocal_4 + 728))
				{
					if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 720) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 728)) || IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 728))
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL_HIGH", 0, 4294967295, 4294967295);
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
						if (IS_BLIP_VALID(&bLocal_1002))
						{
							REMOVE_BLIP(&bLocal_1002);
						}
						if (IS_OBJECT_VALID(&bLocal_1004))
						{
							DESTROY_OBJECT(&bLocal_1004);
						}
						if (IS_ACTOR_VALID(&iLocal_4 + 320[42]))
						{
							RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[42], 1);
							SET_ACTOR_FACE_STYLE(&iLocal_4 + 320[42], 0);
							TASK_FACE_ACTOR(&iLocal_4 + 320[42], &Global_54076, 1, 3212836864);
							TASK_PRIORITY_SET(&iLocal_4 + 320[42], 2);
						}
						Function_244();
						Function_293(&iLocal_585);
						iLocal_577 = 12;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_VALID(&iLocal_4 + 320[42]))
			{
				if (ACTORS_IN_RANGE(&bLocal_581, &iLocal_4 + 320[42], 8.0f))
				{
					SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[42], "Ranch07_greetBonnie", &bLocal_581, 1, 0, 0, 0, 0);
				}
				else if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 320[42], 8.0f))
				{
					SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 320[42], "Ranch07_greetJon", &Global_54076, 1, 0, 0, 0, 0);
				}
				SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[42], "quest_talking", 0);
				SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 320[42], "quest_talking/hi");
			}
			Function_293(&iLocal_585);
			iLocal_577 = 13;
			break;
		
		case 0x0000000D:
			if ((Function_267(&iLocal_585) <= 3.0f && !IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_267(&iLocal_585) <= 10.0f)
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 320[42]))
				{
					if (!IS_SCRIPTED_SPEECH_PLAYING(&iLocal_4 + 320[42]) || Function_267(&iLocal_585) <= 10.0f)
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 320[42]))
						{
							RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[42], 1);
							bLocal_949 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_COORD(false, &iLocal_4 + 1520, 2.0f, 1);
							TASK_GO_NEAR_COORD(false, &iLocal_4 + 1544, 5.0f, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[42], bLocal_949);
							TASK_SEQUENCE_RELEASE(bLocal_949, 1);
							TASK_PRIORITY_SET(&iLocal_4 + 320[42], 2);
						}
						Function_293(&iLocal_585);
						iLocal_577 = 14;
					}
				}
				else
				{
					LOG_ERROR("RANCH07 - WARNING - The RANCHHAND_01_05 pers char is NOT valid!!!");
					Function_293(&iLocal_585);
					iLocal_577 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_459(&fLocal_593, (2.0f * 60.0f), (2.0f * 200.0f), &bLocal_581, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_612, 0, 0, 0, 325, 1))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
				{
					Function_351(3, 1, 1);
				}
			}
			else if (Function_321(&fLocal_593, 60.0f, &bLocal_583, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_612, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
				{
					Function_351(3, 0, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_583, 334, 0, 2, 0);
					}
				}
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
				{
					Function_351(3, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_583)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_583));
					}
				}
				if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_581))
				{
					if (bLocal_1027)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, (3.0f * 6.0f)))
						{
							if (IS_BLIP_VALID(&bLocal_1002))
							{
								REMOVE_BLIP(&bLocal_1002);
							}
							if (IS_OBJECT_VALID(&bLocal_1004))
							{
								DESTROY_OBJECT(&bLocal_1004);
							}
							Function_351(3, 0, 1);
							REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_581);
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
							Function_244();
							Function_293(&iLocal_585);
							iLocal_577 = 15;
						}
					}
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if ((IS_VOLUME_VALID(&iLocal_4 + 720) && IS_VOLUME_VALID(&iLocal_4 + 736)) && IS_OBJECT_VALID(&iLocal_4 + 1344))
					{
						if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 720) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 736)) || Function_308(&Global_54076, &iLocal_4 + 1344, 30.0f))
						{
							if (IS_BLIP_VALID(&bLocal_1002))
							{
								REMOVE_BLIP(&bLocal_1002);
							}
							if (IS_OBJECT_VALID(&bLocal_1004))
							{
								DESTROY_OBJECT(&bLocal_1004);
							}
							Function_351(3, 0, 1);
							REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_581);
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
							Function_244();
							Function_293(&iLocal_585);
							iLocal_577 = 15;
						}
					}
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_581)))
			{
				Function_351(3, 0, 1);
			}
			if (!IS_BLIP_VALID(&bLocal_1002))
			{
				bLocal_1002 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1352, 330, 0f, 2, 0);
				if (IS_BLIP_VALID(&bLocal_1002))
				{
					SET_BLIP_PRIORITY(&bLocal_1002, 3);
				}
			}
			if (!IS_OBJECT_VALID(&bLocal_1004))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1352, &Local_984);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1352, &Local_987);
				bLocal_1004 = Function_457(StackVal, StackVal, &cLocal_470, "RANCH07GATEWAY01", Local_984, Local_987, &Global_54076, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(&bLocal_1004))
				{
				}
			}
			Function_293(&iLocal_585);
			iLocal_577 = 16;
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_324("ranch07_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&iLocal_585);
				Function_293(&iLocal_589);
				Function_293(&fLocal_593);
				iLocal_577 = 17;
			}
			break;
		
		case 0x00000011:
			break;
		
		case 0x0000006A:
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_581);
			iLocal_597[0] = 1;
			Function_293(&iLocal_585);
			iLocal_576 = 1;
			iLocal_577 = 0;
			break;
	}
	return;
}

void Function_439() //Position: 0x1AFA0 / 110496
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPen", "Ranch07_cowPen", false, 2, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x1AFE5 / 110565
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 920[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 408))
	{
		Function_405();
		if (SQUAD_IS_VALID(&iLocal_4 + 408))
		{
			SQUAD_SET_FACTION(&iLocal_4 + 408, 20);
			Function_285(&iLocal_4 + 408, 1);
			Function_288(&iLocal_4 + 408, 0, 0, 0);
			Function_291(&iLocal_4 + 408, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 408, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_441();
	return;
}

void Function_441() //Position: 0x1B0E8 / 110824
{
	Function_422();
	(&Local_1096 + 24) = &iLocal_4 + 1784;
	if (!SQUAD_IS_VALID(&Local_1096 + 64))
	{
		*(&Local_1096 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_470, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1096 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1096 + 64);
			Function_280(&Local_1096, &cLocal_470, &iLocal_4 + 1344, &iLocal_1070, 3, 3.0f, 4,5f, 1,5f, 1);
			Function_291(&Local_1096 + 64, 0);
			Function_279(&Local_1096 + 64, 1);
			Function_278(&Local_1096 + 64, 0);
			Function_277(&Local_1096 + 64, 0);
			Function_276(&Local_1096 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1096 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 768, -1.0f);
		}
	}
	return;
}

void Function_442(int[] iParam0) //Position: 0x1B1C8 / 111048
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		iParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_443() //Position: 0x1B1ED / 111085
{
	if (Function_267(&iLocal_1046) <= 0,1f)
	{
		switch (iLocal_953)
		{
			case 0x00000000:
				iLocal_953++;
				break;
			
			case 0x00000001:
				if (iLocal_577 > 8)
				{
					Function_451(0, 1, 35.0f, 25.0f, 0);
					if (Global_6646 || Global_6647)
					{
						if (!iLocal_1015[0])
						{
							if (!Function_140())
							{
								iLocal_1015[0] = 1;
								Function_450();
							}
						}
					}
					if (!Function_140())
					{
						if (Function_267(&iLocal_589) <= 15.0f)
						{
							Function_293(&iLocal_589);
							Function_449();
						}
					}
					if (IS_ACTOR_VALID(&bLocal_583))
					{
						if (GET_MOUNT(&Global_54076) == &bLocal_583)
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							iLocal_953++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (bLocal_954 == 0)
						{
							Function_448();
						}
						else if (bLocal_954 == 1)
						{
							Function_447();
						}
						else if (bLocal_954 > 2)
						{
							Function_446();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_953++;
						}
					}
				}
				break;
			
			case 0x00000003:
				Function_451(1, 1, 0x420c0000, 0x41c80000, 1);
				if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_581))
				{
					if ((IS_VOLUME_VALID(&iLocal_4 + 720) && IS_VOLUME_VALID(&iLocal_4 + 728)) && IS_VOLUME_VALID(&iLocal_4 + 904))
					{
						if (((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 720) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 728)) || IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 728)) || IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 904))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_293(&iLocal_589);
							iLocal_953 = 5;
						}
					}
				}
				if (!iLocal_1028)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_293(&iLocal_589);
						iLocal_953 = 4;
					}
				}
				break;
			
			case 0x00000004:
				Function_451(1, 1, 0x420c0000, 0x41c80000, 1);
				if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_581))
				{
					if ((IS_VOLUME_VALID(&iLocal_4 + 720) && IS_VOLUME_VALID(&iLocal_4 + 728)) && IS_VOLUME_VALID(&iLocal_4 + 904))
					{
						if (((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 720) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 728)) || IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 728)) || IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 904))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_293(&iLocal_589);
							iLocal_953 = 5;
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_451(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				if (bLocal_1027)
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					iLocal_953++;
				}
				break;
			
			case 0x00000006:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_445();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_953++;
					}
				}
				break;
			
			case 0x00000007:
				Function_451(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				if (!iLocal_1028)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_293(&iLocal_589);
						iLocal_953++;
					}
				}
				break;
			
			case 0x00000008:
				Function_451(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				if (Function_267(&iLocal_589) <= 5.0f)
				{
					Function_293(&iLocal_589);
					iLocal_953++;
				}
				break;
			
			case 0x00000009:
				if (!Function_140())
				{
					if (Function_267(&iLocal_589) <= 15.0f)
					{
						Function_444();
						Function_293(&iLocal_589);
					}
				}
				Function_451(1, 1, (35.0f + 3.0f), (25.0f + 3.0f), 1);
				break;
			
			case 0x0000000A:
				iLocal_953++;
				break;
		}
		Function_293(&iLocal_1046);
	}
	return;
}

void Function_444() //Position: 0x1B54C / 111948
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_behindHerd", "Ranch07_behindHerd", false, 2, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x1B599 / 112025
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_startHerd", "Ranch07_startHerd", false, 2, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x1B5E4 / 112100
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_noTalk", "Ranch07_noTalk", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_447() //Position: 0x1B629 / 112169
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v2_AA", "Ranch07_cowPenTalk_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AB1", "Ranch07_cowPenTalk_v2_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AB2", "Ranch07_cowPenTalk_v2_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AB3", "Ranch07_cowPenTalk_v2_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v2_AC", "Ranch07_cowPenTalk_v2_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AD1", "Ranch07_cowPenTalk_v2_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v2_AD2", "Ranch07_cowPenTalk_v2_AD2", false, 1, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x1B806 / 112646
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v1_AA", "Ranch07_cowPenTalk_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v1_AB", "Ranch07_cowPenTalk_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v1_AC1", "Ranch07_cowPenTalk_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_cowPenTalk_v1_AC2", "Ranch07_cowPenTalk_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_cowPenTalk_v1_AD", "Ranch07_cowPenTalk_v1_AD", true, 1, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x1B95F / 112991
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_noToHorse", "Ranch07_noToHorse", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x1B9AA / 113066
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_trouble_v1_AA1", "Ranch07_trouble_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_trouble_v1_AA2", "Ranch07_trouble_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch07_trouble_v1_AB", "Ranch07_trouble_v1_AB", true, 1, 1, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1BA73 / 113267
{
	if (Function_267(&iLocal_1042) <= 6.0f)
	{
		Function_372();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_offHorse", "Ranch07_offHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		if (!IS_ACTOR_RIDING(&bLocal_581))
		{
			if (&bParam0)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_371();
				Function_293(&iLocal_1042);
			}
		}
		if (&bParam4)
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, 1,15f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_581, "Ranch07_rideIntoBonHorse", "Ranch07_rideIntoBonHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_293(&iLocal_1042);
			}
		}
		if (&bParam1)
		{
			if (!Function_453(&Global_54076, &bLocal_581, &iParam2))
			{
				if (!iLocal_1028)
				{
					iLocal_1028 = 1;
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_452();
					Function_293(&iLocal_1042);
				}
			}
		}
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_581, &iParam3))
		{
			if (&bParam1)
			{
				if (iLocal_1028)
				{
					iLocal_1028 = 0;
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_365();
					Function_293(&iLocal_1042);
				}
			}
		}
	}
}

void Function_452() //Position: 0x1BBC6 / 113606
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch07_refuseHerd", "Ranch07_refuseHerd", false, 2, 0, 0, 1);
		Function_248(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_453(var uParam0, var uParam1, float fParam2) //Position: 0x1BC13 / 113683
{
	float fVar0;
	
	fVar0 = Function_454(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_454(var uParam0, int iParam1) //Position: 0x1BC32 / 113714
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_455(&uVar0, &uVar2);
	return iVar4;
}

var Function_455(struct<2> Param0) //Position: 0x1BC53 / 113747
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

var Function_456(int iParam0) //Position: 0x1BC72 / 113778
{
	return &Global_15402[iParam014] + 104;
}

var Function_457(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x1BC82 / 113794
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
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

void Function_458(bool bParam0) //Position: 0x1BD6D / 114029
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

bool Function_459(struct<2> Param0, int iParam2, int iParam3, float fParam4, char* cParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1BE03 / 114179
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_460(&Global_54076, &iParam3, iParam2))
	{
		Function_236(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_460(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_318(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_324(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				}
				Function_317(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_316(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_316(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_318(2))
	{
		Function_315(2);
		if (!Function_314())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_313();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_229(&iParam3);
				Function_352(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_316(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_316(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_460(var uParam0, var uParam1, bool bParam2) //Position: 0x1BFC1 / 114625
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

void Function_461() //Position: 0x1C0EB / 114923
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[42]))
	{
		switch (iLocal_962)
		{
			case 0x00000000:
				iLocal_962++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1696)))
				{
					TASK_CLEAR(&iLocal_4 + 320[42]);
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 320[42], &iLocal_4 + 1696, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 320[42], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1696), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 320[42], 2);
					iLocal_962++;
				}
				break;
			
			case 0x00000003:
				iLocal_962++;
				break;
			}
	}
	return;
}

void Function_462() //Position: 0x1C1A6 / 115110
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[32]))
	{
		switch (iLocal_961)
		{
			case 0x00000000:
				iLocal_961++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1720)))
				{
					TASK_CLEAR(&iLocal_4 + 320[32]);
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 320[32], &iLocal_4 + 1720, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 320[32], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1720), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 320[32], 2);
					iLocal_961++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 15)
				{
					iLocal_961++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[32], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1032[7], &uLocal_999);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 1856, 2, 1, 1, 1, false);
				TASK_GO_TO_COORD(0, &uLocal_999, 2);
				TASK_FACE_COORD(0, &iLocal_4 + 1416, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[32], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 320[32], 2);
				iLocal_961++;
				break;
			
			case 0x00000004:
				iLocal_961++;
				break;
			}
	}
	return;
}

void Function_463() //Position: 0x1C2FC / 115452
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[22]))
	{
		switch (iLocal_960)
		{
			case 0x00000000:
				iLocal_960++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1688)))
				{
					TASK_CLEAR(&iLocal_4 + 320[22]);
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 320[22], &iLocal_4 + 1688, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 320[22], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1688), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 320[22], 2);
					iLocal_960++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 15)
				{
					iLocal_960++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[22], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1032[6], &uLocal_996);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &iLocal_4 + 1848, 2, 1, 1, 1, false);
				TASK_GO_TO_COORD(0, &uLocal_996, 2);
				TASK_FACE_COORD(0, &iLocal_4 + 1416, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[22], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 320[22], 2);
				iLocal_960++;
				break;
			
			case 0x00000004:
				iLocal_960++;
				break;
			}
	}
	return;
}

void Function_464() //Position: 0x1C452 / 115794
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[12]))
	{
		switch (iLocal_959)
		{
			case 0x00000000:
				iLocal_959++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(&(uLocal_1082[3])))
				{
					TASK_CLEAR(&iLocal_4 + 320[12]);
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 320[12], GET_OBJECT_FROM_GRINGO(&(uLocal_1082[3])), "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 320[12], &(uLocal_1082[3]), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 320[12], 2);
					iLocal_959++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 15)
				{
					iLocal_959++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[12], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1032[5], &uLocal_993);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_993, 2);
				TASK_FACE_COORD(0, &iLocal_4 + 1392, 0);
				TASK_STAND_STILL(false, -1.0f, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[12], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 320[12], 2);
				iLocal_959++;
				break;
			
			case 0x00000004:
				iLocal_959++;
				break;
			}
	}
	return;
}

void Function_465() //Position: 0x1C599 / 116121
{
	if (IS_ACTOR_VALID(&iLocal_4 + 320[02]))
	{
		switch (iLocal_958)
		{
			case 0x00000000:
				iLocal_958++;
				break;
			
			case 0x00000001:
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1712)))
				{
					TASK_CLEAR(&iLocal_4 + 320[02]);
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 320[02], &iLocal_4 + 1712, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 320[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1712), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 320[02], 2);
					iLocal_958++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_577 > 15)
				{
					iLocal_958++;
				}
				break;
			
			case 0x00000003:
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 320[02], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1032[4], &uLocal_990);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_990, 2);
				TASK_FACE_COORD(0, &iLocal_4 + 1392, 0);
				TASK_STAND_STILL(false, -1.0f, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 320[02], bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 320[02], 2);
				iLocal_958++;
				break;
			
			case 0x00000004:
				iLocal_958++;
				break;
			}
	}
	return;
}

void Function_466() //Position: 0x1C6E0 / 116448
{
	if (IS_ACTOR_VALID(&bLocal_581))
	{
		switch (iLocal_951)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					MEMORY_PREFER_RIDING(&bLocal_581, false);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_581);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_581);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_581);
					Function_351(3, 0, 1);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 1640, 1, 3212836864);
					TASK_FOLLOW_PATH(0, &iLocal_4 + 1744, 1, 1, 1, 1, false);
					TASK_FOLLOW_PATH(0, &iLocal_4 + 1752, 2, 1, 0, 1, false);
					TASK_MOUNT(false, &iLocal_4 + 240[02], 0, 1, 4, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&bLocal_581, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, true);
				}
				Function_293(&iLocal_1038);
				iLocal_951++;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
				{
					if (GET_MOUNT(&bLocal_581) == &iLocal_4 + 240[02])
					{
						iLocal_951++;
					}
				}
				if (iLocal_1029)
				{
					iLocal_1029 = 0;
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &iLocal_4 + 240[02], 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
				if (Function_267(&iLocal_1038) <= 35.0f)
				{
					LOG_ERROR("UPDATE_COMPANION_STAGE01 - Timeout!!! Waiting for companion to mount their horse.");
					MEMORY_PREFER_RIDING(&bLocal_581, true);
					bLocal_949 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &iLocal_4 + 240[02], 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
					TASK_SEQUENCE_RELEASE(bLocal_949, 1);
					TASK_PRIORITY_SET(&bLocal_581, true);
					Function_293(&iLocal_1038);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
				{
					TASK_CLEAR(&iLocal_4 + 240[02]);
				}
				MEMORY_PREFER_RIDING(&bLocal_581, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, true);
				GET_OBJECT_POSITION(&iLocal_4 + 1488, &uLocal_978);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(0, &uLocal_978, 0);
				TASK_GO_NEAR_COORD(false, &uLocal_978, 3.0f, 5);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 1760, 5, 1, 0, 1, false);
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 968[3], 5, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_581, 3.0f);
				iLocal_951++;
				break;
			
			case 0x00000003:
				if (IS_VOLUME_VALID(&iLocal_4 + 832))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 832))
					{
						if (GET_MOUNT(&Global_54076) == &bLocal_583)
						{
							iLocal_951 = 6;
						}
						else
						{
							iLocal_951 = 4;
						}
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 840))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_581, &iLocal_4 + 840))
					{
						iLocal_951 = 7;
					}
				}
				break;
			
			case 0x00000004:
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				iLocal_951++;
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_583)
					{
						iLocal_951++;
					}
				}
				break;
			
			case 0x00000006:
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_581, true);
				GET_OBJECT_POSITION(&iLocal_4 + 968[3], &uLocal_978);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_581, &iLocal_4 + 1760, 5, 0, 0, 1, false);
				TASK_GO_TO_COORD(0, &uLocal_978, 5);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_581, 5.0f);
				iLocal_951++;
				break;
			
			case 0x00000007:
				if (GET_TASK_STATUS(&bLocal_581, 1) == 0)
				{
					bLocal_1027 = true;
					iLocal_951++;
				}
				break;
			
			case 0x00000008:
				SET_ACTOR_FACE_STYLE(&bLocal_581, 0);
				bLocal_949 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_581, bLocal_949);
				TASK_SEQUENCE_RELEASE(bLocal_949, 1);
				TASK_PRIORITY_SET(&bLocal_581, true);
				iLocal_951++;
				break;
			
			case 0x00000009:
				iLocal_951++;
				break;
			}
	}
	return;
}

void Function_467() //Position: 0x1CB2B / 117547
{
	if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
	{
		if (!IS_ACTOR_VALID(&bLocal_583) || !IS_ACTOR_ALIVE(&bLocal_583))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 240[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 240[02], 0);
			}
		}
	}
	return;
}

void Function_468(bool bParam0, bool bParam1) //Position: 0x1CB6D / 117613
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_229(&bLocal_583);
			if (GET_MOUNT(&Global_54076) != &bLocal_583)
			{
				if (GET_MOUNT(&Global_54076) == &iLocal_4 + 240[02])
				{
					iLocal_1029 = 1;
					TASK_CLEAR(&iLocal_4 + 240[02]);
					uLocal_1010 = &bLocal_583;
					bLocal_583 = &iLocal_4 + 240[02];
					*(&iLocal_4 + 240[02]) = &uLocal_1010;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_583);
					Function_470(&bLocal_583, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_583, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(&bLocal_583, 0);
					SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
					SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
					SET_ALLOW_RIDE_BY_AI(&iLocal_4 + 240[02], 1);
					GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 240[02], &iLocal_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(&bLocal_583, GET_AMBIENT_LAYOUT());
					bLocal_583 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &bLocal_583);
					Function_470(&bLocal_583, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_583, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_583, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(&bLocal_581) != &iLocal_4 + 240[02])
		{
			MEMORY_PREFER_RIDING(&bLocal_581, true);
			SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
			Function_469(&bLocal_581, &iLocal_4 + 240[02], 1);
		}
	}
	return;
}

void Function_469(var uParam0, var uParam1, bool bParam2) //Position: 0x1CCD1 / 117969
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_310(&uParam1);
			uVar0 = Function_310(&uParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &uParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &uParam1, &uVar0);
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

void Function_470(int iParam0, int iParam1) //Position: 0x1CDE2 / 118242
{
	Function_471(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_471(float fParam0) //Position: 0x1CDF7 / 118263
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

void Function_472() //Position: 0x1CFC6 / 118726
{
	var uVar0;
	
	switch (iLocal_963)
	{
		case 0x00000000:
			iLocal_963++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(&(uLocal_1082[2])))
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 1336), &uVar0);
				uLocal_1082[2] = LOCATE_GRINGO_OF_TYPE("rand_idle_nearwall_nospawn", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_963++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(&(uLocal_1082[3])))
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 1336), &uVar0);
				uLocal_1082[3] = LOCATE_GRINGO_OF_TYPE("repair_kneel_nospawn", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_963++;
			}
			break;
		
		case 0x00000003:
			iLocal_963++;
			break;
		
		case 0x00000004:
			iLocal_963++;
			break;
		
		case 0x00000005:
			iLocal_1032 = 1;
			iLocal_963++;
			break;
	}
	return;
}

int Function_473() //Position: 0x1D0D0 / 118992
{
	switch (iLocal_955)
	{
		case 0x00000000:
			Function_293(&iLocal_1062);
			iLocal_955++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(&(uLocal_1082[0])) && !IS_GRINGO_VALID(&(uLocal_1082[1])))
			{
				Function_476(StackVal, *(&iLocal_4 + 1568), &(uLocal_1082[0]), &(uLocal_1082[1]));
			}
			else
			{
				iLocal_955 = 2;
			}
			if (Function_267(&iLocal_1062) <= 3.0f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
				uLocal_1082[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 1592, 1,5f, 0);
				if (IS_GRINGO_VALID(&(uLocal_1082[0])))
				{
				}
				uLocal_1082[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 1616, 1,5f, 0);
				if (IS_GRINGO_VALID(&(uLocal_1082[1])))
				{
				}
				Function_293(&iLocal_1062);
				iLocal_955 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_GRINGO_VALID(&(uLocal_1082[0])) && IS_GRINGO_VALID(&(uLocal_1082[1])))
			{
				Function_283(GET_OBJECT_FROM_GRINGO(&(uLocal_1082[0])));
				Function_474(StackVal, Function_283(GET_OBJECT_FROM_GRINGO(&(uLocal_1082[0]))), 0, 0);
				Function_283(GET_OBJECT_FROM_GRINGO(&(uLocal_1082[1])));
				Function_474(StackVal, Function_283(GET_OBJECT_FROM_GRINGO(&(uLocal_1082[1]))), 0, 0);
			}
			iLocal_955++;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&bLocal_583) && IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					if (IS_GRINGO_VALID(&(uLocal_1082[0])))
					{
						Function_294(&bLocal_583, &iLocal_4 + 920[2], 1, 1, 1);
						TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
						TASK_PRIORITY_SET(&bLocal_583, true);
					}
					else
					{
						Function_294(&bLocal_583, &iLocal_4 + 920[2], 1, 1, 1);
						TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
						TASK_PRIORITY_SET(&bLocal_583, true);
					}
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
				{
					if (IS_GRINGO_VALID(&(uLocal_1082[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 240[02], GET_OBJECT_FROM_GRINGO(&(uLocal_1082[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&iLocal_4 + 240[02], &(uLocal_1082[1]), "UseCase1", true, 1);
						TASK_PRIORITY_SET(&iLocal_4 + 240[02], true);
					}
					else
					{
						Function_294(&iLocal_4 + 240[02], &iLocal_4 + 920[3], 1, 1, 1);
						TASK_STAND_STILL(&iLocal_4 + 240[02], -1.0f, 0, 0);
						TASK_PRIORITY_SET(&iLocal_4 + 240[02], true);
					}
				}
			}
			iLocal_955++;
			break;
		
		case 0x00000004:
			iLocal_1031 = 1;
			iLocal_955++;
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

int Function_474(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x1D38E / 119694
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_476(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam2)
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 1);
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_475(&(uVar0[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar4) && !&iVar4 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar4);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[0]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_475(&(uVar0[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[1]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_475(var uParam0, int iParam1) //Position: 0x1D50B / 120075
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_476(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1D51A / 120090
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_13())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &bParam0, 2.0f, 0);
		}
	}
}

void Function_477() //Position: 0x1D664 / 120420
{
	switch (iLocal_577)
	{
		case 0x00000006:
			Function_528(&Local_472, 1);
			cLocal_470 = CREATE_LAYOUT("ranch07_DynamicLayout");
			Function_527();
			iLocal_955 = 0;
			iLocal_963 = 0;
			iLocal_950 = 0;
			iLocal_1030 = 0;
			iLocal_1032 = 0;
			iLocal_1031 = 0;
			Function_252(&iLocal_585);
			Function_252(&iLocal_1062);
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
			Function_298();
			iLocal_577 = 7;
			break;
		
		case 0x00000007:
			if (Function_524())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_522();
				}
				if (!Function_296(&Local_472))
				{
					iLocal_577 = 8;
				}
				else
				{
					iLocal_577 = 11;
				}
			}
			break;
		
		case 0x00000008:
			bLocal_954 = Function_332();
			PRINTINT(bLocal_954);
			PRINTNL();
			Function_294(&Global_54076, &iLocal_4 + 920[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_581))
			{
				TASK_CLEAR(&bLocal_581);
				TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_581, true);
				Function_294(&bLocal_581, &iLocal_4 + 920[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_583))
			{
				TASK_CLEAR(&bLocal_583);
				TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_583, true);
				Function_294(&bLocal_583, &iLocal_4 + 920[2], 1, 1, 1);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 848))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 848);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 848);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 848, 15);
			}
			iLocal_577 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_297(Global_46816[0]) || bLocal_578 != 4294967295))
			{
				Function_521();
				Function_293(&iLocal_585);
				Function_293(&iLocal_1062);
				iLocal_577 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_473() || Function_267(&iLocal_585) < 5.0f)
			{
				if (Function_486("$/cutscene/r7/r7", &iLocal_564, &Local_472, &iLocal_576, 132229, 132030, 131041, 130888, 130804, 127141, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_293(&iLocal_585);
					Function_293(&iLocal_1062);
					iLocal_577 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_579 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_351(3, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_581, 0);
			SET_CRIPPLE_ENABLE(&bLocal_581, 0);
			SET_ACTOR_FACTION(&bLocal_581, 20);
			TASK_PRIORITY_SET(&bLocal_581, true);
			TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_581, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_581, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_581, GET_ACTOR_MAX_HEALTH(&bLocal_581));
			RESET_ACTOR_GAITS(&bLocal_583, 0);
			TASK_PRIORITY_SET(&bLocal_583, true);
			TASK_STAND_STILL(&bLocal_583, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_583, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_583, GET_ACTOR_MAX_HEALTH(&bLocal_583));
			SET_ALLOW_RIDE_BY_AI(&bLocal_583, 0);
			Function_252(&iLocal_1042);
			Function_252(&iLocal_1046);
			Function_252(&iLocal_1034);
			Function_252(&iLocal_1038);
			Function_252(&iLocal_1050);
			Function_252(&iLocal_1054);
			Function_252(&iLocal_1058);
			Function_293(&iLocal_1062);
			Function_252(&iLocal_1066);
			Function_484("FTR_SONG_01", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_482(&uLocal_615, &cLocal_470);
			Function_293(&iLocal_585);
			Function_252(&iLocal_589);
			Function_252(&fLocal_593);
			iLocal_576 = 0;
			iLocal_577 = 0;
			Function_479(&Local_472, &iLocal_576, &iLocal_577);
			Function_478(StackVal, StackVal, StackVal, StackVal, Function_522(), Local_472);
			switch (iLocal_576)
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
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_478(struct<41> Param0) //Position: 0x1DA0B / 121355
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_576 = 0;
			break;
		
		case 0x00000002:
			iLocal_576 = 101;
			break;
	}
}

void Function_479(int iParam0, var uParam1, int iParam2) //Position: 0x1DA37 / 121399
{
	if (Function_296(&iParam0))
	{
		uParam1 = Function_481(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_480();
	}
	return;
}

void Function_480() //Position: 0x1DA73 / 121459
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

var Function_481(int iParam0) //Position: 0x1DAC4 / 121540
{
	if (Function_296(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_482(struct<2>[] Param0) //Position: 0x1DADD / 121565
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_483(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_483(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_483(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_483(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_483(struct<13> Param0) //Position: 0x1E1B6 / 123318
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

void Function_484(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1E285 / 123525
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_485(uParam1), &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

var Function_485(bool bParam0) //Position: 0x1E2A7 / 123559
{
	float fVar0;
	
	switch (bParam0)
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
	fVar0 = "";
	return &fVar0;
}

bool Function_486(var uParam0, int iParam1, struct<41> Param2) //Position: 0x1E7FC / 124924
{
	if (!&bParam15)
	{
		Function_494(&iParam1, &uParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_296(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &uParam11, &uParam12, &uParam13, &uParam14);
				Call_Loc(uParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_293(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_493())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_492(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
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
					Function_492(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_267(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_267(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&uParam5);
					if (StackVal)
					{
						Function_490(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_492(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&uParam6);
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
						Function_489(1.0f);
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
				Call_Loc(&uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_487();
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
				Call_Loc(&uParam8);
				if (StackVal)
				{
					Function_243(1, 1);
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
				Call_Loc(&uParam9);
				if (StackVal)
				{
					Call_Loc(&uParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_296(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_487() //Position: 0x1EE5E / 126558
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_488();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_488() //Position: 0x1EEA3 / 126627
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_489(bool bParam0) //Position: 0x1EEB5 / 126645
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

void Function_490(var uParam0, int iParam1) //Position: 0x1EED2 / 126674
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
			if ((&iVar3 == &Global_54076 && !Function_491(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_491(int iParam0) //Position: 0x1EF64 / 126820
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

int Function_492(bool bParam0) //Position: 0x1EF95 / 126869
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

bool Function_493() //Position: 0x1F058 / 127064
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

void Function_494(var uParam0, var uParam1) //Position: 0x1F095 / 127125
{
	Function_265(&uParam0, &uParam1, 0);
	return;
}

int Function_495() //Position: 0x1F0A5 / 127141
{
	switch (iLocal_576)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				if (Function_496())
				{
					Function_522();
					Function_294(&Global_54076, &iLocal_4 + 920[0], 1, 1, 1);
					Function_294(&bLocal_581, &iLocal_4 + 920[1], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				Function_294(&bLocal_581, &iLocal_4 + 920[1], 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_583))
				{
					Function_294(&bLocal_583, &iLocal_4 + 1256[1], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_583))
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_583);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_581))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
				{
					Function_294(&iLocal_4 + 240[02], &iLocal_4 + 1256[4], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&bLocal_581) && !IS_ACTOR_MOUNTED(&iLocal_4 + 240[02]))
					{
						ACTOR_MOUNT_ACTOR(&bLocal_581, &iLocal_4 + 240[02]);
					}
				}
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_496() //Position: 0x1F1E1 / 127457
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_505(&iLocal_530))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_583))
		{
			bLocal_583 = Function_353(1, 1, -813,974f, 93,42f, 2431,932f, 73,384f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_581))
		{
			bLocal_581 = Function_497(3, 0, 1, -788,77f, 93,654f, 2408,104f, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

var Function_497(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x1F250 / 127568
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
		Function_351(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_504(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_500(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &fParam3;
			Var3.f_4 = &fParam4;
			Var3.f_8 = &fParam5;
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
		Function_499(&bVar1, 0, 0, 0, 0);
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
		Function_498(&bVar1, 0);
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

void Function_498(var uParam0, bool bParam1) //Position: 0x1F790 / 128912
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_499(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x1F7B2 / 128946
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

var Function_500(int iParam0, int iParam1) //Position: 0x1F813 / 129043
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_281(iParam0))
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
						Function_501(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_501(var uParam0, int iParam1) //Position: 0x1F8A1 / 129185
{
	Function_503(&uParam0);
	Function_502(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_502(int iParam0) //Position: 0x1F8CD / 129229
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_503(int iParam0) //Position: 0x1F8F3 / 129267
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

var Function_504(int iParam0, var uParam1) //Position: 0x1F9C9 / 129481
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

bool Function_505(struct<2>[] Param0) //Position: 0x1FA6F / 129647
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_509();
	iVar1 = 0;
	if (!Function_188(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_508(&(Param0[iVar02]), 8);
		}
		else if (Function_507())
		{
			iVar1 = 1;
			Function_508(&(Param0[iVar02]), 8);
		}
		Function_508(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_188(&(Param0[iVar02]), 4))
		{
			if (!Function_188(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_188(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_188(&(Param0[02]), 8) || iVar1));
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
				Function_508(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_188(&(Param0[iVar02]), 4))
		{
			if (!Function_188(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
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
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
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
	Function_506();
	return 1;
}

void Function_506() //Position: 0x1FE31 / 130609
{
	if (!Function_262(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_507() //Position: 0x1FE71 / 130673
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

void Function_508(struct<13> Param0) //Position: 0x1FE9F / 130719
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_509() //Position: 0x1FEB2 / 130738
{
	if (!Function_262(128))
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

int Function_510() //Position: 0x1FEF4 / 130804
{
	switch (iLocal_576)
	{
		case 0x00000063:
			Function_242(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_242(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_242(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_511() //Position: 0x1FF48 / 130888
{
	switch (iLocal_576)
	{
		case 0x00000063:
			Function_294(&bLocal_581, &iLocal_4 + 920[1], 1, 1, 1);
			Function_294(&bLocal_583, &iLocal_4 + 920[2], 1, 1, 1);
			Function_294(&Global_54076, &iLocal_4 + 920[0], 0, 1, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			return 1;
			break;
		
		case 0x00000065:
			ACTOR_POP_NEXT_GAIT(&bLocal_581, 2, 0);
			TASK_GO_NEAR_COORD(&bLocal_581, &iLocal_4 + 1496, 5.0f, 3);
			TASK_PRIORITY_SET(&bLocal_581, true);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_512() //Position: 0x1FFE1 / 131041
{
	switch (iLocal_576)
	{
		case 0x00000063:
			if (!Function_513() && !Function_505(&iLocal_484))
			{
				return 0;
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_513() //Position: 0x20012 / 131090
{
	Function_516(&iLocal_4 + 8, 977, 2, 0);
	Function_516(&iLocal_4 + 8, 980, 2, 0);
	Function_516(&iLocal_4 + 8, 981, 2, 0);
	Function_516(&iLocal_4 + 8, 33, 2, 0);
	Function_516(&iLocal_4 + 8, 34, 2, 0);
	Function_516(&iLocal_4 + 8, Global_13580[73], 2, 0);
	Function_516(&iLocal_4 + 8, Global_13580[23], 2, 0);
	Function_516(&iLocal_4 + 8, Global_13580[133], 2, 0);
	Function_516(&iLocal_4 + 8, Global_13580[43], 2, 0);
	Function_516(&iLocal_4 + 8, Global_13580[03], 2, 0);
	Function_514(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	Function_514(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_514(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_514(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_back_nospawn", 1, 0);
	if (Function_505(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_514(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x201D5 / 131541
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
		Function_508(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_515(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x20213 / 131603
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_508(&(Param0[iVar02]), 4);
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

var Function_516(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x202E2 / 131810
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_508(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_508(&(Param0[iVar02]), 8);
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

int Function_517() //Position: 0x203BE / 132030
{
	switch (iLocal_576)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-789,73f, 95,131f, 2412,583f), Vector(-0,556f, -0,187f, 0,81f));
				return 1;
			}
			if (Function_496())
			{
				Function_522();
				Function_294(&Global_54076, &iLocal_4 + 920[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_581))
				{
					Function_294(&bLocal_581, &iLocal_4 + 920[1], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_581, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_581, true);
				}
			}
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(Function_522(), Vector(-671,905f, 103,794f, 2619,115f), Vector(0,82f, -0,02f, -0,572f));
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_518() //Position: 0x20485 / 132229
{
	switch (iLocal_576)
	{
		case 0x00000063:
			Function_261(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_519(StackVal, &cLocal_470, (&Global_6667[528] + 88), &iLocal_4 + 464[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_261(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_283(&iLocal_4 + 1256[0]);
			Function_519(StackVal, &cLocal_470, Function_283(&iLocal_4 + 1256[0]), &iLocal_4 + 464[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_261(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_519(char* cParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x2052E / 132398
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
				Function_520(&uVar1, &cParam0);
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

void Function_520(var uParam0, int iParam1) //Position: 0x207CE / 133070
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

void Function_521() //Position: 0x20850 / 133200
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_292();
		if (SQUAD_IS_VALID(&iLocal_4 + 264))
		{
			Function_291(&iLocal_4 + 264, 0);
			Function_290(&iLocal_4 + 264, 3);
			Function_288(&iLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 240[02]))
			{
				Function_294(&iLocal_4 + 240[02], &iLocal_4 + 920[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_581, &iLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_581, &iLocal_4 + 240[02]);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

vector3 Function_522() //Position: 0x208EF / 133359
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Ranch07_layout");
	*(&iLocal_4 + 488) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 464[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-788,2553f, 93,65432f, 2411,315f), Vector(0.0f, -34,29419f, 0.0f), Vector(8.0f, 5.0f, 9.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 488, &iLocal_4 + 464[0]);
	*(&iLocal_4 + 464[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-673,4725f, 101,3961f, 2619,555f), Vector(0.0f, 35,20502f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 488, &iLocal_4 + 464[1]);
	*(&iLocal_4 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 496[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-903,6633f, 95,78069f, 2437,63f), Vector(0.0f, 288,5281f, 0.0f), Vector(10.0f, 20.0f, 35.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 496[0]);
	*(&iLocal_4 + 496[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-937,5132f, 95,78069f, 2470,122f), Vector(0.0f, 176,9309f, 0.0f), Vector(5.0f, 20.0f, 25.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 496[1]);
	*(&iLocal_4 + 496[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-884,3207f, 95,78069f, 2473,582f), Vector(0.0f, 354,9223f, 0.0f), Vector(5.0f, 20.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 496[2]);
	*(&iLocal_4 + 568) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-879,9971f, 95,78069f, 2418,414f), Vector(0.0f, 204,3988f, 0.0f), Vector(100.0f, 20.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 568, &iLocal_4 + 536[0]);
	*(&iLocal_4 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-902,8494f, 95,78069f, 2487,049f), Vector(0.0f, 111,7856f, 0.0f), Vector(100.0f, 20.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 568, &iLocal_4 + 536[1]);
	*(&iLocal_4 + 536[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-955,0688f, 95,78069f, 2383,427f), Vector(0.0f, 121,9511f, 0.0f), Vector(100.0f, 20.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 568, &iLocal_4 + 536[2]);
	*(&iLocal_4 + 624) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 576[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-860,9365f, 106,0211f, 2406,194f), Vector(0.0f, 298,6861f, 0.0f), Vector(225.0f, 40.0f, 250.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 624, &iLocal_4 + 576[0]);
	*(&iLocal_4 + 576[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1096,599f, 106,0211f, 2438,94f), Vector(0.0f, 134,6574f, 0.0f), Vector(100.0f, 40.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 624, &iLocal_4 + 576[1]);
	*(&iLocal_4 + 576[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1012,014f, 106,0211f, 2653,124f), Vector(0.0f, 205,8177f, 0.0f), Vector(100.0f, 40.0f, 600.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 624, &iLocal_4 + 576[2]);
	*(&iLocal_4 + 576[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-763,4716f, 106,0211f, 2773,4f), Vector(0.0f, 114,8174f, 0.0f), Vector(100.0f, 40.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 624, &iLocal_4 + 576[3]);
	*(&iLocal_4 + 576[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-766,6274f, 106,0211f, 2617,476f), Vector(0.0f, 208,4689f, 0.0f), Vector(100.0f, 40.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 624, &iLocal_4 + 576[4]);
	*(&iLocal_4 + 688) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 632[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-771,2646f, 106,0211f, 2515,486f), Vector(0.0f, 110,5579f, 0.0f), Vector(100.0f, 40.0f, 800.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 688, &iLocal_4 + 632[0]);
	*(&iLocal_4 + 632[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-798,6281f, 106,0211f, 2799,974f), Vector(0.0f, 110,5579f, 0.0f), Vector(100.0f, 40.0f, 800.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 688, &iLocal_4 + 632[1]);
	*(&iLocal_4 + 632[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-952,3527f, 106,0211f, 2697,731f), Vector(0.0f, 27,28753f, 0.0f), Vector(100.0f, 40.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 688, &iLocal_4 + 632[2]);
	*(&iLocal_4 + 632[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-564,9714f, 100,7264f, 2577,972f), Vector(0.0f, 23,91841f, 0.0f), Vector(100.0f, 40.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 688, &iLocal_4 + 632[3]);
	*(&iLocal_4 + 632[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-798,803f, 106,0211f, 2799,432f), Vector(0.0f, 100,0964f, 0.0f), Vector(200.0f, 40.0f, 500.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 688, &iLocal_4 + 632[4]);
	*(&iLocal_4 + 632[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-647,6856f, 106,0211f, 2734,644f), Vector(0.0f, 114,2559f, 0.0f), Vector(200.0f, 40.0f, 500.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 688, &iLocal_4 + 632[5]);
	*(&iLocal_4 + 696) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1028.0f, 104,4078f, 2544.0f), Vector(0.0f, 110,5579f, 0.0f), Vector(10.0f, 40.0f, 300.0f));
	*(&iLocal_4 + 704) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-881,525f, 101,3961f, 2661,268f), Vector(0.0f, 119,9617f, 0.0f), Vector(10.0f, 40.0f, 300.0f));
	*(&iLocal_4 + 712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-699,9998f, 99,38824f, 2636f), Vector(0.0f, 23,80697f, 0.0f), Vector(10.0f, 40.0f, 300.0f));
	*(&iLocal_4 + 720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-904,0001f, 90,35291f, 2452.0f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 20.0f, 15.0f));
	*(&iLocal_4 + 728) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-892,9882f, 90,35291f, 2442,717f), Vector(0.0f, 97,50095f, 0.0f), Vector(14.0f, 20.0f, 10.0f));
	*(&iLocal_4 + 736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-909,5804f, 90,35291f, 2466,531f), Vector(0.0f, 20.0f, 0.0f), Vector(13,5f, 20.0f, 12,5f));
	*(&iLocal_4 + 744) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-927,6491f, 93,58073f, 2446,745f), Vector(0.0f, 41,29619f, 0.0f), Vector(10.0f, 10.0f, 5.0f));
	*(&iLocal_4 + 752) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-971,6417f, 94,81188f, 2457,61f), Vector(0.0f, 31,21863f, 0.0f), Vector(6.0f, 10.0f, 50.0f));
	*(&iLocal_4 + 760) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-655,9999f, 101,889f, 2608f), Vector(0.0f, 209,5694f, 0.0f), Vector(10.0f, 40.0f, 300.0f));
	*(&iLocal_4 + 768) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-909,5804f, 90,35291f, 2466,531f), Vector(0.0f, 33,15662f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
	*(&iLocal_4 + 776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-942,2333f, 90,10246f, 2440,347f), Vector(0.0f, 16,43982f, 0.0f), Vector(4.0f, 10.0f, 4.0f));
	*(&iLocal_4 + 784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-977,9823f, 91,08732f, 2462,137f), Vector(0.0f, 16,43982f, 0.0f), Vector(4.0f, 10.0f, 4.0f));
	*(&iLocal_4 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-864,0001f, 100,3922f, 2692f), Vector(0.0f, 20.0f, 0.0f), Vector(9.0f, 10.0f, 9.0f));
	*(&iLocal_4 + 800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-655,9999f, 101,889f, 2608f), Vector(0.0f, 20.0f, 0.0f), Vector(7.0f, 10.0f, 7.0f));
	*(&iLocal_4 + 808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-925,9075f, 93,58073f, 2448,82f), Vector(0.0f, 41,29619f, 0.0f), Vector(6.0f, 10.0f, 3,5f));
	*(&iLocal_4 + 816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-911,7271f, 90,35291f, 2464,454f), Vector(0.0f, -48,56495f, 0.0f), Vector(50.0f, 20.0f, 30.0f));
	*(&iLocal_4 + 824) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-952,0465f, 90,10287f, 2446,679f), Vector(0.0f, 28,8395f, 0.0f), Vector(60.0f, 20.0f, 15.0f));
	*(&iLocal_4 + 832) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-813,2411f, 92,08532f, 2408,456f), Vector(0.0f, 72,45203f, 0.0f), Vector(40.0f, 10.0f, 3,5f));
	*(&iLocal_4 + 840) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-895,1879f, 90,17947f, 2432,404f), Vector(0.0f, 18,9082f, 0.0f), Vector(20.0f, 10.0f, 3,5f));
	*(&iLocal_4 + 848) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-814,0319f, 93,9448f, 2430,977f), Vector(0.0f, -13,24648f, 0.0f), Vector(4.0f, 5.0f, 4,5f));
	*(&iLocal_4 + 856) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-863,2034f, 101,3961f, 2670,576f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 864) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-865,6187f, 100,3922f, 2711,42f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-906,7574f, 90,35291f, 2463,95f), Vector(0.0f, 8,591821f, 0.0f), Vector(35.0f, 10.0f, 30.0f));
	*(&iLocal_4 + 880) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-916,0542f, 90,35291f, 2470,593f), Vector(0.0f, 246,2103f, 0.0f), Vector(35.0f, 10.0f, 30.0f));
	*(&iLocal_4 + 888) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-703,7247f, 99,38824f, 2637,644f), Vector(0.0f, 23,80697f, 0.0f), Vector(10.0f, 40.0f, 300.0f));
	*(&iLocal_4 + 896) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-859,8002f, 101,3961f, 2698,955f), Vector(0.0f, 93,22655f, 0.0f), Vector(10.0f, 40.0f, 300.0f));
	*(&iLocal_4 + 904) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-895,34f, 90,35291f, 2435,026f), Vector(0.0f, 108,8719f, 0.0f), Vector(14.0f, 20.0f, 10.0f));
	*(&iLocal_4 + 912) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 920[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-790,0705f, 93,23322f, 2413,138f), Vector(0.0f, 145,5338f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 920[0], &iLocal_4 + 912);
	*(&iLocal_4 + 920[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-788,391f, 93,613f, 2407,269f), Vector(0.0f, 205,9146f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 920[1], &iLocal_4 + 912);
	*(&iLocal_4 + 920[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,988f, 93,42173f, 2432f), Vector(0.0f, 74,3837f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 920[2], &iLocal_4 + 912);
	*(&iLocal_4 + 920[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,6116f, 93,36469f, 2430,024f), Vector(0.0f, 78,15494f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 920[3], &iLocal_4 + 912);
	*(&iLocal_4 + 960) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 968[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-900,0001f, 90,35291f, 2480.0f), Vector(0.0f, -316,7479f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 968[0], &iLocal_4 + 960);
	*(&iLocal_4 + 968[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-912,0001f, 90,35291f, 2450,22f), Vector(0.0f, -278,0617f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 968[1], &iLocal_4 + 960);
	*(&iLocal_4 + 968[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-898,5307f, 90,35291f, 2477,698f), Vector(0.0f, -316,7479f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 968[2], &iLocal_4 + 960);
	*(&iLocal_4 + 968[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-912,0001f, 90,35291f, 2452f), Vector(0.0f, -277,8632f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 968[3], &iLocal_4 + 960);
	*(&iLocal_4 + 968[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-912,1079f, 90,35207f, 2447,94f), Vector(0.0f, -491,5498f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 968[4], &iLocal_4 + 960);
	*(&iLocal_4 + 968[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-928,1234f, 90,35207f, 2464,006f), Vector(0.0f, -106,6984f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 968[5], &iLocal_4 + 960);
	*(&iLocal_4 + 1024) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1032[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-915,4027f, 90,1029f, 2433,906f), Vector(0.0f, -247,0593f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[0], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-954,7112f, 90,36862f, 2442,32f), Vector(0.0f, 126,0789f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[1], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-916,4296f, 90,1029f, 2430,876f), Vector(0.0f, -247,0593f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[2], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-956,7614f, 90,30422f, 2443,74f), Vector(0.0f, 172,7343f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[3], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-920,0001f, 90,35291f, 2448.0f), Vector(0.0f, -534,0908f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[4], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-927,8561f, 90,35291f, 2454,233f), Vector(0.0f, -97,33108f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[5], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-936,0359f, 90,35298f, 2432,257f), Vector(0.0f, -520,0601f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[6], &iLocal_4 + 1024);
	*(&iLocal_4 + 1032[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-926,947f, 90,43262f, 2439,619f), Vector(0.0f, -658,5801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1032[7], &iLocal_4 + 1024);
	*(&iLocal_4 + 1104) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1112[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-971,1949f, 90,22644f, 2454,363f), Vector(0.0f, -233,5066f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1112[0], &iLocal_4 + 1104);
	*(&iLocal_4 + 1112[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-976,0873f, 92,45522f, 2471,195f), Vector(0.0f, 132,5244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1112[1], &iLocal_4 + 1104);
	*(&iLocal_4 + 1112[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-968,4212f, 90,26598f, 2455,346f), Vector(0.0f, -233,5066f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1112[2], &iLocal_4 + 1104);
	*(&iLocal_4 + 1112[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-978,2433f, 92,56252f, 2473,283f), Vector(0.0f, 131,9325f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1112[3], &iLocal_4 + 1104);
	*(&iLocal_4 + 1112[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-966,5421f, 90,41072f, 2455,722f), Vector(0.0f, -243,4933f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1112[4], &iLocal_4 + 1104);
	*(&iLocal_4 + 1112[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-968,1437f, 90,42934f, 2453,477f), Vector(0.0f, -224,8096f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1112[5], &iLocal_4 + 1104);
	*(&iLocal_4 + 1168) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1176[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-884,0001f, 101,3961f, 2696f), Vector(0.0f, -87,86526f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[0], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-884,0001f, 100,7343f, 2684f), Vector(0.0f, 125,3357f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[1], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-884,0001f, 101,3961f, 2692f), Vector(0.0f, -92,02645f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[2], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-888,0001f, 101,3961f, 2688f), Vector(0.0f, 261,0919f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[3], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-852,0001f, 101,9196f, 2672f), Vector(0.0f, 217,3248f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[4], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-868,0001f, 100,3922f, 2712f), Vector(0.0f, -49,84656f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[5], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-864,0001f, 102,4f, 2668f), Vector(0.0f, 154,0399f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[6], &iLocal_4 + 1168);
	*(&iLocal_4 + 1176[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-864,0001f, 100,3922f, 2712f), Vector(0.0f, -49,84656f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1176[7], &iLocal_4 + 1168);
	*(&iLocal_4 + 1248) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1256[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-667,9999f, 101,3961f, 2620f), Vector(0.0f, -34,26667f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[0], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-667,9998f, 101,3961f, 2616f), Vector(0.0f, -55,08721f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[1], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-671,9998f, 101,3961f, 2616f), Vector(0.0f, 222,38f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[2], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-675,9999f, 97,38037f, 2572f), Vector(0.0f, 365,7199f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[3], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-669,3522f, 101,3961f, 2614,329f), Vector(0.0f, -61,07624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[4], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-647,9999f, 100,3922f, 2588f), Vector(0.0f, -195,6792f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[5], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-639,9998f, 102,0983f, 2616f), Vector(0.0f, 62,7225f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[6], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-647,9999f, 101,3961f, 2592f), Vector(0.0f, 150,4378f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[7], &iLocal_4 + 1248);
	*(&iLocal_4 + 1256[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-637,2246f, 101,3961f, 2609,225f), Vector(0.0f, 80,42693f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1256[8], &iLocal_4 + 1248);
	*(&iLocal_4 + 1336) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-912,906f, 90,353f, 2445,146f), Vector(0.0f, 11,227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 1336);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-935,694f, 90,353f, 2461,892f), Vector(0.0f, 38,968f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 1336);
	*(&iLocal_4 + 1344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-909,3908f, 90,35291f, 2466,438f), Vector(0.0f, 41,70715f, 0.0f));
	*(&iLocal_4 + 1352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-898,5307f, 90,35291f, 2477,698f), Vector(0.0f, 44,80187f, 0.0f));
	*(&iLocal_4 + 1360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-942,2333f, 90,10246f, 2440,347f), Vector(0.0f, 119,5136f, 0.0f));
	*(&iLocal_4 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-977,9767f, 90,76653f, 2462,153f), Vector(0.0f, 123,2146f, 0.0f));
	*(&iLocal_4 + 1376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-864,0001f, 100,3922f, 2692f), Vector(0.0f, -62,63445f, 0.0f));
	*(&iLocal_4 + 1384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-655,9999f, 101,889f, 2608f), Vector(0.0f, -84,04143f, 0.0f));
	*(&iLocal_4 + 1392) = Vector(-908.0f, 90,35291f, 2468.0f);
	*(&iLocal_4 + 1392 + 12) = Vector(0.0f, 52,44165f, 0.0f);
	*(&iLocal_4 + 1416) = Vector(-932,1596f, 90,10287f, 2436,167f);
	*(&iLocal_4 + 1416 + 12) = Vector(0.0f, 119,5136f, 0.0f);
	*(&iLocal_4 + 1440) = Vector(-936,8477f, 90,25675f, 2442,305f);
	*(&iLocal_4 + 1440 + 12) = Vector(0.0f, -281,3525f, 0.0f);
	*(&iLocal_4 + 1464) = Vector(-912,0001f, 90,35291f, 2452f);
	*(&iLocal_4 + 1464 + 12) = Vector(0.0f, -281,3525f, 0.0f);
	*(&iLocal_4 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-812,0001f, 92,56207f, 2420,468f), Vector(0.0f, 55,52527f, 0.0f));
	*(&iLocal_4 + 1496) = Vector(-758,4387f, 92,15525f, 2455,768f);
	*(&iLocal_4 + 1496 + 12) = Vector(0.0f, 51,8428f, 0.0f);
	*(&iLocal_4 + 1520) = Vector(-893,5982f, 90,35291f, 2435,188f);
	*(&iLocal_4 + 1520 + 12) = Vector(0.0f, 82,19491f, 0.0f);
	*(&iLocal_4 + 1544) = Vector(-872,0001f, 90,35291f, 2432f);
	*(&iLocal_4 + 1544 + 12) = Vector(0.0f, 82,19491f, 0.0f);
	*(&iLocal_4 + 1568) = Vector(-815,2798f, 93,9448f, 2430,683f);
	*(&iLocal_4 + 1568 + 12) = Vector(0.0f, 78,107f, 0.0f);
	*(&iLocal_4 + 1592) = Vector(-815,323f, 94,45707f, 2431,662f);
	*(&iLocal_4 + 1592 + 12) = Vector(0.0f, 78,107f, 0.0f);
	*(&iLocal_4 + 1616) = Vector(-814,8933f, 94,45707f, 2429,839f);
	*(&iLocal_4 + 1616 + 12) = Vector(0.0f, 67,277f, 0.0f);
	*(&iLocal_4 + 1640) = Vector(-788,4419f, 93,32145f, 2412,204f);
	*(&iLocal_4 + 1640 + 12) = Vector(0.0f, 147,0686f, 0.0f);
	*(&iLocal_4 + 1664) = Vector(-983,6157f, 99,62829f, 2511,126f);
	*(&iLocal_4 + 1664 + 12) = Vector(0.0f, -84,04143f, 0.0f);
	*(&iLocal_4 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "lean_fence_back", Vector(-931,5532f, 90,35316f, 2455,404f), Vector(0.0f, 65,62343f, 0.0f));
	*(&iLocal_4 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "smoking_stand", Vector(-896,2141f, 90,35291f, 2443,797f), Vector(0.0f, -18,93927f, 0.0f));
	*(&iLocal_4 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "Rand_Idle_NearWall_nospawn", Vector(-913,9736f, 90,37537f, 2446,615f), Vector(0.0f, 22,07937f, 0.0f));
	*(&iLocal_4 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "lean_rail_back_nospawn", Vector(-914,7988f, 90,36886f, 2445,999f), Vector(0.0f, 25,66695f, 0.0f));
	*(&iLocal_4 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "smoking_stand", Vector(-919,9574f, 90,3483f, 2451,352f), Vector(0.0f, -123,8117f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 1728) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1736) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1744) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1752) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1760) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1768) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1776) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1784) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1792) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1800) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1808) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
}

void e¸E#ÊÊÄ*ÿþBÊÊÈE# Ä%ÿþBÈ.0E!ÀÄÿÿBÊÊÐE"  ,§:B °:¯R%p   `ÄR BÈÈÈE( ÄJ |BÅÙE' ÄCYBÂÂÈE&ÆÄ<·BÄÄÈE& Ä5aBÆÆÈE%@Ä,ÿüBÈe¸E$Ä'ÿýBÊÊÐE#ÀÄ"ÿþBÊÊÐE"À,§:B(°:¯R%p   xÄY BÈÈÈE)ÄO BÄÄÀE)(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243, var uParam244, var uParam245, var uParam246, var uParam247, var uParam248, var uParam249, var uParam250, var uParam251, var uParam252, var uParam253) //Position: 0x229A1 / 141729
{
	PatchTrap7();
}

bool Function_524() //Position: 0x22B7C / 142204
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_526(0))
		{
			return 0;
		}
		if (!Function_513())
		{
			return 0;
		}
		if (!Function_505(&iLocal_484))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_581))
		{
			bLocal_581 = Function_497(3, 0, 1, -788,77f, 93,654f, 2408,104f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_581, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_583))
		{
			bLocal_583 = Function_353(1, 1, -813,974f, 93,42f, 2431,932f, 73,384f, 1, 0);
			return 0;
		}
		if (!Function_525(&Global_21369 + 72, FIND_NAMED_LAYOUT("PlayerLayout")))
		{
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, FIND_NAMED_LAYOUT("PlayerLayout"));
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_583, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_525(bool bParam0, var uParam1) //Position: 0x22C60 / 142432
{
	var uVar0;
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam1);
	ITERATE_IN_LAYOUT(&uVar0, &uParam1);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (&iVar1 == &bParam0)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

bool Function_526(bool bParam0) //Position: 0x22CC6 / 142534
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

void Function_527() //Position: 0x22CF6 / 142582
{
	Function_514(&iLocal_484, "ranch07", 10, 0);
	Function_516(&iLocal_484, 1008, 2, 0);
	Function_516(&iLocal_484, 1009, 2, 0);
	Function_516(&iLocal_484, 1010, 2, 0);
	Function_516(&iLocal_484, 1011, 2, 0);
	Function_514(&iLocal_484, "guide_herd", 5, 0);
	Function_514(&iLocal_484, "custom/guide_herd", 8, 0);
	Function_514(&iLocal_484, "waving_on_horse", 5, 0);
	Function_514(&iLocal_484, "custom/waving_on_horse", 8, 0);
	Function_514(&iLocal_484, "quest_talking", 5, 0);
	Function_514(&iLocal_484, "custom/quest_talking", 8, 0);
	return;
}

void Function_528(int iParam0, bool bParam1) //Position: 0x22DEC / 142828
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_534(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_296(&iParam0))
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
	if (!Function_296(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_226();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244();
	Function_488();
	Function_236("");
	Function_533(0);
	Function_532();
	Function_218();
	Function_217();
	ENABLE_JOURNAL_REPLAY(0);
	Function_531();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_353(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_303(0, 0x40400000);
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
	Function_530(13);
	Function_530(14);
	Function_530(25);
	Function_530(24);
	Function_530(12);
	Function_530(27);
	Function_530(26);
	Function_530(15);
	Function_529();
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

void Function_529() //Position: 0x2322C / 143916
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

void Function_530(int iParam0) //Position: 0x232B1 / 144049
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_531() //Position: 0x232D1 / 144081
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

void Function_532() //Position: 0x23317 / 144151
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_533(int iParam0) //Position: 0x2332D / 144173
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_221())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_534(int iParam0, int iParam1) //Position: 0x23366 / 144230
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
			Function_535(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_535(struct<113> Param0) //Position: 0x233ED / 144365
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

void Function_536() //Position: 0x2344B / 144459
{
	return;
}

void Function_537(int iParam0, int iParam1) //Position: 0x23451 / 144465
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
					Function_470(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_470(&iParam0, 0);
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
						Function_470(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_470(&iParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_538(struct<25> Param0) //Position: 0x23535 / 144693
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
			Function_539(&Param0, 1);
			return 1;
		}
	}
	Function_539(&Param0, 0);
	return 0;
}

void Function_539(struct<25> Param0) //Position: 0x235C1 / 144833
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

bool Function_540(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x235EC / 144876
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
		Function_539(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_559(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_558(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_558(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_544(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_539(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_543(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_542(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_543(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_541(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_236(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_542(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_539(&Param2, 0);
	return 0;
}

void Function_541(char* cParam0) //Position: 0x23A02 / 145922
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

void Function_542(struct<25> Param0) //Position: 0x23AF6 / 146166
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

void Function_543(bool bParam0) //Position: 0x23B6E / 146286
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_544(struct<57> Param0) //Position: 0x23B92 / 146322
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
			return Function_555(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_548(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_555(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_545(&Param0, bVar2);
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
						bVar2 = Function_555(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_545(&Param0, bVar2);
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

var Function_545(int iParam0, bool bParam1) //Position: 0x23D03 / 146691
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
				bParam1 = Function_547(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_546(16);
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
				bParam1 = Function_547(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_546(256);
			}
		}
	}
	return bParam1;
}

bool Function_546(int iParam0) //Position: 0x23E3F / 147007
{
	return 2 | iParam0;
}

int Function_547(int iParam0) //Position: 0x23E49 / 147017
{
	return 4 | iParam0;
}

int Function_548(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x23E53 / 147027
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
				iParam3 = Function_554(&iParam0, &iParam1, bParam4);
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
			return Function_546(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_549(&iParam0, &iParam1, 0, bParam4);
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
			return Function_546(16);
		}
	}
	return 0;
}

int Function_549(int iParam0, vector3 vParam1) //Position: 0x23F0E / 147214
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_553(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_552(iVar0, 3, 1, bParam3))
			{
				if (!Function_558(&iParam0, 8, 1))
				{
					return Function_551(64, 1024, bParam2);
				}
			}
			return Function_550(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_552(iVar0, 2, 1, bParam3))
			{
				if (!Function_558(&iParam0, 32, 1))
				{
					return Function_551(64, 1024, bParam2);
				}
			}
			return Function_550(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_552(iVar0, 1, 1, bParam3))
			{
				if (!Function_558(&iParam0, 64, 1))
				{
					return Function_551(64, 1024, bParam2);
				}
			}
			return Function_550(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_552(iVar0, 3, 1, bParam3))
			{
				if (!Function_558(&iParam0, 128, 1))
				{
					return Function_551(64, 1024, bParam2);
				}
			}
			return Function_550(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_552(iVar0, 1, 1, bParam3))
			{
				if (!Function_558(&iParam0, 1024, 1))
				{
					return Function_551(64, 1024, bParam2);
				}
			}
			return Function_550(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_552(iVar0, 1, 1, bParam3))
			{
				if (!Function_558(&iParam0, 1024, 1))
				{
					return Function_551(64, 1024, bParam2);
				}
			}
			return Function_550(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_550(int iParam0, int iParam1, bool bParam2) //Position: 0x240D7 / 147671
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_551(int iParam0, int iParam1, bool bParam2) //Position: 0x240EC / 147692
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_552(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24101 / 147713
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_553(int iParam0) //Position: 0x2411E / 147742
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

int Function_554(var uParam0, vector3 vParam1) //Position: 0x24191 / 147857
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_553(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_552(iVar0, 3, 1, bParam2))
			{
				if (!Function_558(&uParam0, 8, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000009:
			if (Function_552(iVar0, 3, 1, bParam2))
			{
				if (!Function_558(&uParam0, 8, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x0000006E:
			if (Function_552(iVar0, 2, 1, bParam2))
			{
				if (!Function_558(&uParam0, 16, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x0000005B:
			if (Function_552(iVar0, 2, 1, bParam2))
			{
				if (!Function_558(&uParam0, 32, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000031:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&uParam0, 64, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000007:
			if (Function_552(iVar0, 3, 1, bParam2))
			{
				if (!Function_558(&uParam0, 128, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000008:
			if (Function_552(iVar0, 2, 1, bParam2))
			{
				if (!Function_558(&uParam0, 256, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000014:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&uParam0, 512, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000018:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&uParam0, 512, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000057:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&uParam0, 1024, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000058:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&uParam0, 1024, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_555(struct<65> Param0) //Position: 0x243BA / 148410
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
						return Function_554(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_558(&Param0, 2, 1))
					{
						return Function_547(8);
					}
					return Function_546(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_558(&Param0, 4, 1))
					{
						return Function_547(16);
					}
					return Function_546(16);
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
							return Function_549(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_558(&Param0, 2, 1))
						{
							return Function_547(128);
						}
						return Function_546(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_558(&Param0, 4, 1))
						{
							return Function_547(256);
						}
						return Function_546(256);
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
						return Function_549(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_558(&Param0, 2, 1))
					{
						return Function_547(8);
					}
					return Function_546(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_558(&Param0, 4, 1))
					{
						return Function_547(16);
					}
					return Function_546(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_557(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_558(&Param0, 2, 1))
					{
						return Function_547(8);
					}
					return Function_546(8);
				}
				if (!Function_558(&Param0, 4, 1))
				{
					return Function_547(16);
				}
				return Function_546(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_549(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_556(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_546(128);
							}
							if (!Function_558(&Param0, 2, 1))
							{
								return Function_547(8);
							}
							return Function_546(8);
						}
						if (iParam4 == 2)
						{
							if (Function_556(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_546(256);
							}
							if (!Function_558(&Param0, 4, 1))
							{
								return Function_547(16);
							}
							return Function_546(16);
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

bool Function_556(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x246A0 / 149152
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

int Function_557(int iParam0, vector3 vParam1) //Position: 0x2476E / 149358
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_553(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_552(iVar0, 2, 1, bParam2))
			{
				if (!Function_558(&iParam0, 16, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x0000005B:
			if (Function_552(iVar0, 2, 1, bParam2))
			{
				if (!Function_558(&iParam0, 32, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000057:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&iParam0, 1024, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		case 0x00000058:
			if (Function_552(iVar0, 1, 1, bParam2))
			{
				if (!Function_558(&iParam0, 1024, 1))
				{
					return Function_547(64);
				}
			}
			return Function_546(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_558(struct<69> Param0) //Position: 0x24890 / 149648
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

int Function_559(int iParam0) //Position: 0x248BA / 149690
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

bool Function_560(bool bParam0, int iParam1) //Position: 0x248F0 / 149744
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
	Function_561(&uVar0, &uVar1);
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

void Function_561(var uParam0, int iParam1) //Position: 0x24986 / 149894
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

bool Function_562(int iParam0) //Position: 0x249BC / 149948
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_563(int iParam0) //Position: 0x249DA / 149978
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_99472 && iParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_99472 && iParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_99471);
	}
	return;
}

var Function_564(int iParam0) //Position: 0x24A0D / 150029
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_565(bool bParam0) //Position: 0x24A79 / 150137
{
	bool bVar0;
	
	bVar0 = false;
	if ((bParam0 && 33) == 1)
	{
		bVar0 = 5;
	}
	else if ((bParam0 && 3) == 2)
	{
		bVar0 = 7;
	}
	else if ((bParam0 && 6) == 4)
	{
		bVar0 = 11;
	}
	else if ((bParam0 && 12) == 8)
	{
		bVar0 = 14;
	}
	else if ((bParam0 && 24) == 16)
	{
		bVar0 = 18;
	}
	else if ((bParam0 && 48) == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

void Function_566(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x24AE5 / 150245
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_567(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x24B12 / 150290
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_568(StackVal, Param4, uParam3, &iParam6);
		Function_233(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_568(struct<2> Param0, var uParam2, var uParam3) //Position: 0x24B53 / 150355
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_570(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_569(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_569(int iParam0) //Position: 0x24BD5 / 150485
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

var Function_570(struct<2> Param0, bool bParam2) //Position: 0x25083 / 151683
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

struct<8> Function_571(int iParam0) //Position: 0x250EF / 151791
{
	Function_342(iParam0 + 1);
	return StackVal, Function_342(iParam0 + 1);
}

int Function_572(int iParam0) //Position: 0x250FC / 151804
{
	return Function_341(iParam0 + 1);
}

