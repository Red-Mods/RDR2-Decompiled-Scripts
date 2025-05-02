//Decompiled with MagicRDR v1.0
//Function Count : 631
//Statics Count : 1164
//Natives Count : 740
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	bool bLocal_4 = false;
	var uLocal_5 = 0;
	var uLocal_6 = 11;
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
	var uLocal_52 = 2;
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
	var uLocal_84 = 2;
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
	var uLocal_96 = 3;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 4;
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
	var uLocal_118 = 4;
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
	var uLocal_130 = 8;
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
	var uLocal_206 = 9;
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
	var uLocal_228 = 4;
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
	var uLocal_240 = 10;
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
	var uLocal_284 = 8;
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
	var uLocal_304 = 16;
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
	var uLocal_340 = 2;
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
	bool bLocal_528 = false;
	var uLocal_529 = 0;
	struct<6> Local_530 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 6;
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
	int iLocal_568 = 8;
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
	int iLocal_610 = 0;
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
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	bool bLocal_624 = false;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	bool bLocal_627 = false;
	var uLocal_628 = 0;
	bool bLocal_629 = false;
	var uLocal_630 = 0;
	int iLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	int iLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	float fLocal_639 = 0.0f;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	int iLocal_643[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	bool bLocal_657 = false;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	int iLocal_662 = 0;
	var uLocal_663 = 13;
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
	struct<15> Local_717[8];
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
	var uLocal_857 = 5;
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
	var uLocal_887 = 5;
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
	var uLocal_917 = 5;
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
	var uLocal_947 = 5;
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
	bool bLocal_967 = false;
	bool bLocal_968 = false;
	int iLocal_969 = 0;
	bool bLocal_970 = false;
	bool bLocal_971 = false;
	bool bLocal_972 = false;
	int iLocal_973 = 0;
	bool bLocal_974 = false;
	bool bLocal_975 = false;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = false;
	int iLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	float fLocal_984 = 0.0f;
	var uLocal_985 = 0;
	bool bLocal_986 = false;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	int iLocal_1004[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	bool bLocal_1016 = false;
	bool bLocal_1017 = false;
	bool bLocal_1018 = false;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	int iLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	int iLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	int iLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	int iLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	int iLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	int iLocal_1056[4] = { 0, 0, 0, 0 };
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	bool bLocal_1069 = false;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	struct<2> Local_1075 = { 0, 0 } ;
	var uLocal_1077 = 0;
	struct<2> Local_1078 = { 0, 0 } ;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	struct<2> Local_1087 = { 0, 0 } ;
	var uLocal_1089 = 0;
	int iLocal_1090 = 0;
	var uLocal_1091 = 0;
	int iLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	bool bLocal_1096 = false;
	var uLocal_1097 = 0;
	float fLocal_1098 = 0.0f;
	float fLocal_1099 = 0.0f;
	struct<149> Local_1100 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_530 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_622 = 99;
	iLocal_623 = 6;
	iLocal_610 = 1000;
	while (Function_278())
	{
		Function_233();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	var uVar0;
	
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_627);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_629);
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		uVar0 = GET_MOUNT(&bLocal_627);
		if (IS_ACTOR_VALID(&uVar0))
		{
			DESTROY_ACTOR(&uVar0);
		}
		TREAT_AMBIENT_SPEECH_AS_SCRIPTED(&bLocal_627, 1);
	}
	Function_230(3, 1, 0, 1, 1);
	Function_229(&bLocal_528);
	Function_229(&bLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_228();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_227();
	Function_197(bLocal_658, 1, 0, 1, 1, 1, 1, 1);
	Function_196();
	Function_195();
	Function_194();
	Function_190(4, 0, 0);
	Function_177();
	Function_173(&iLocal_542);
	Function_171();
	if (IS_ITERATOR_VALID(&uLocal_625))
	{
		DESTROY_ITERATOR(&uLocal_625);
	}
	RELEASE_LAYOUT_REF(&bLocal_528);
	if (bLocal_657)
	{
		Function_26(Local_530, 1, 1, 1, 0);
	}
	else if (bLocal_658)
	{
		Function_22(Local_530);
	}
	else
	{
		Function_2(Local_530);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x118 / 280
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x139 / 313
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x156 / 342
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x179 / 377
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x190 / 400
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

void Function_7(int iParam0) //Position: 0x232 / 562
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x255 / 597
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

void Function_9() //Position: 0x29F / 671
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2B8 / 696
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

void Function_11(var uParam0, bool bParam1) //Position: 0x30B / 779
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

struct<16> Function_12(int iParam0) //Position: 0x435 / 1077
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

bool Function_13() //Position: 0x46F / 1135
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x48A / 1162
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x497 / 1175
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x4B7 / 1207
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x4CE / 1230
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x4E9 / 1257
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x730 / 1840
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x75C / 1884
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

bool Function_21(int iParam0) //Position: 0x780 / 1920
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x795 / 1941
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x7B3 / 1971
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

struct<16> Function_24(int iParam0) //Position: 0x859 / 2137
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

struct<24> Function_25(char* cParam0) //Position: 0x898 / 2200
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAEE / 2798
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

void Function_27() //Position: 0xBE2 / 3042
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

int Function_28(int iParam0, bool bParam1) //Position: 0xC14 / 3092
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

int Function_29(int iParam0) //Position: 0xC52 / 3154
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC6C / 3180
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC82 / 3202
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF7F / 3967
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

void Function_33(char* cParam0) //Position: 0xFF4 / 4084
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x102E / 4142
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

bool Function_35(var uParam0, int iParam1) //Position: 0x10AA / 4266
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10BD / 4285
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

int Function_37(int iParam0) //Position: 0x115E / 4446
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x119B / 4507
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11B1 / 4529
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x140F / 5135
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x144D / 5197
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

void Function_42(bool bParam0) //Position: 0x148C / 5260
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

void Function_43() //Position: 0x14E1 / 5345
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

void Function_44() //Position: 0x152C / 5420
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

void Function_45() //Position: 0x1632 / 5682
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

void Function_46() //Position: 0x1665 / 5733
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

void Function_47() //Position: 0x17F8 / 6136
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

void Function_48() //Position: 0x19B1 / 6577
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19BF / 6591
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

bool Function_50() //Position: 0x1BDC / 7132
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1BF1 / 7153
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C98 / 7320
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F34 / 7988
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

var Function_54() //Position: 0x2572 / 9586
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x257B / 9595
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x258C / 9612
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

struct<32> Function_57(char* cParam0) //Position: 0x2683 / 9859
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x269E / 9886
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2705 / 9989
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2717 / 10007
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2729 / 10025
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

int Function_62(int iParam0) //Position: 0x285D / 10333
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x286C / 10348
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x28A5 / 10405
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x28E2 / 10466
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A7C / 10876
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

int Function_67(bool bParam0) //Position: 0x2CC0 / 11456
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2D01 / 11521
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

struct<8> Function_69() //Position: 0x2D8A / 11658
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

struct<8> Function_70() //Position: 0x2E21 / 11809
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

void Function_71() //Position: 0x2EA0 / 11936
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EDD / 11997
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

void Function_73() //Position: 0x30E9 / 12521
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

bool Function_74(char* cParam0) //Position: 0x31A0 / 12704
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x31B8 / 12728
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

struct<8> Function_76() //Position: 0x32B0 / 12976
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x32BA / 12986
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32CB / 13003
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x32E1 / 13025
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x33AD / 13229
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33CA / 13258
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

bool Function_82(int iParam0) //Position: 0x3BF6 / 15350
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C31 / 15409
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3C40 / 15424
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

bool Function_85(int iParam0) //Position: 0x411E / 16670
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x4134 / 16692
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x4153 / 16723
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x416D / 16749
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41D7 / 16855
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

void Function_90(int iParam0) //Position: 0x43FF / 17407
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

void Function_91() //Position: 0x449D / 17565
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

void Function_92() //Position: 0x45FF / 17919
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

int Function_93(int iParam0, char* cParam1) //Position: 0x467F / 18047
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49D6 / 18902
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

int Function_95(int iParam0) //Position: 0x4A5E / 19038
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A78 / 19064
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4AA3 / 19107
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4AD1 / 19153
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D6D / 19821
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F41 / 20289
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

int Function_101(int iParam0, char* cParam1) //Position: 0x51AB / 20907
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

int Function_102() //Position: 0x533B / 21307
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

void Function_103() //Position: 0x53DC / 21468
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

void Function_104(int iParam0) //Position: 0x549A / 21658
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

var Function_105(int iParam0) //Position: 0x5500 / 21760
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

int Function_106(int iParam0, bool bParam1) //Position: 0x558F / 21903
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

var Function_107(int iParam0, int iParam1) //Position: 0x573B / 22331
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

void Function_108() //Position: 0x5780 / 22400
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5796 / 22422
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57D6 / 22486
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5816 / 22550
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5825 / 22565
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

int Function_113(int iParam0) //Position: 0x59ED / 23021
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

var Function_114() //Position: 0x5A82 / 23170
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5AA7 / 23207
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F76 / 24438
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

var Function_117(int iParam0) //Position: 0x629D / 25245
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6340 / 25408
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

int Function_119(int iParam0, bool bParam1) //Position: 0x653D / 25917
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66E8 / 26344
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x67BA / 26554
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

void Function_122(int iParam0) //Position: 0x70D5 / 28885
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7252 / 29266
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x735D / 29533
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x7389 / 29577
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

var Function_126(vector3 vParam0) //Position: 0x73E0 / 29664
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

void Function_127(var uParam0, int iParam1) //Position: 0x742E / 29742
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7489 / 29833
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

void Function_129() //Position: 0x762A / 30250
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7630 / 30256
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76DF / 30431
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7734 / 30516
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x774A / 30538
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

bool Function_134(int iParam0, int iParam1) //Position: 0x779B / 30619
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

void Function_135(var uParam0, int iParam1) //Position: 0x77C8 / 30664
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77D9 / 30681
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x77F3 / 30707
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7804 / 30724
{
	char* cVar0[32];
	
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
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
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

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7960 / 31072
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

bool Function_140() //Position: 0x79EB / 31211
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7A18 / 31256
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

int Function_142(int iParam0) //Position: 0x7BC8 / 31688
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7C1F / 31775
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

var Function_144(int iParam0) //Position: 0x7C44 / 31812
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7C9A / 31898
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

bool Function_146(bool bParam0) //Position: 0x7CF9 / 31993
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7D05 / 32005
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D21 / 32033
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

bool Function_149() //Position: 0x7D73 / 32115
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7DA3 / 32163
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

int Function_151(int iParam0, int iParam1) //Position: 0x7E18 / 32280
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E75 / 32373
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

int Function_153(int iParam0, int iParam1) //Position: 0x7EE8 / 32488
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F43 / 32579
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8214 / 33300
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
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
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

void Function_156(int iParam0, bool bParam1) //Position: 0x84B3 / 33971
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

void Function_157() //Position: 0x8522 / 34082
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

int Function_158(int iParam0, int iParam1) //Position: 0x85A2 / 34210
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

int Function_159(int iParam0) //Position: 0x9205 / 37381
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x921A / 37402
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

void Function_161(var uParam0, int iParam1) //Position: 0x9269 / 37481
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x92C1 / 37569
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

bool Function_163(int iParam0, int iParam1) //Position: 0x9334 / 37684
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9348 / 37704
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

var Function_165(int iParam0) //Position: 0x9439 / 37945
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9491 / 38033
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x94AE / 38062
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

bool Function_168(int iParam0) //Position: 0x9508 / 38152
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x951A / 38170
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

void Function_170(struct<185> Param0) //Position: 0x954E / 38222
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
			Function_190(4, 0, 0);
		}
	}
	return;
}

void Function_171() //Position: 0x95B9 / 38329
{
	Function_172();
	return;
}

void Function_172() //Position: 0x95C2 / 38338
{
	Function_173(&bLocal_4 + 8);
	RELEASE_LAYOUT_REF(&bLocal_4);
	return;
}

void Function_173(int iParam0) //Position: 0x95D5 / 38357
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

void Function_174(struct<2>[] Param0, int iParam1) //Position: 0x95FD / 38397
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

void Function_175(struct<13> Param0) //Position: 0x9748 / 38728
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_176(struct<13> Param0) //Position: 0x9765 / 38757
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_177() //Position: 0x9783 / 38787
{
	SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
	SET_FORCED_LOOK_ENABLE(&Global_54076, 1);
	UNK_0x6F37F42C(&Global_54076);
	STREAMING_UNLOAD_BOUNDS();
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	if (IS_BLIP_VALID(&iLocal_1090))
	{
		REMOVE_BLIP(&iLocal_1090);
	}
	if (IS_OBJECT_VALID(&Local_1100 + 8))
	{
		DESTROY_OBJECT(&Local_1100 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1100))
	{
		DESTROY_OBJECT(&Local_1100);
	}
	if (IS_OBJECT_VALID(&bLocal_986))
	{
		DESTROY_OBJECT(&bLocal_986);
	}
	if (IS_OBJECT_VALID(&fLocal_984))
	{
		DESTROY_OBJECT(&fLocal_984);
	}
	if (IS_ACTOR_VALID(&iLocal_1092))
	{
		RELEASE_ACTOR(&iLocal_1092);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 64))
	{
		Function_188(&Local_1100 + 64, 0, 0);
		RELEASE_OBJECT_REF(&Local_1100 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 72))
	{
		Function_188(&Local_1100 + 72, 0, 0);
		RELEASE_OBJECT_REF(&Local_1100 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 80))
	{
		Function_188(&Local_1100 + 80, 0, 0);
		RELEASE_OBJECT_REF(&Local_1100 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 88))
	{
		Function_188(&Local_1100 + 88, 0, 0);
		RELEASE_OBJECT_REF(&Local_1100 + 88);
	}
	if (SQUAD_IS_VALID(&bLocal_1096))
	{
		Function_188(&bLocal_1096, 0, 0);
		RELEASE_OBJECT_REF(&bLocal_1096);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 360))
	{
		Function_179(&bLocal_4 + 360, 0, 0, 2, 1);
		RELEASE_OBJECT_REF(&bLocal_4 + 360);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_188(&bLocal_4 + 264, 0, 0);
		RELEASE_OBJECT_REF(&bLocal_4 + 264);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_188(&bLocal_4 + 312, 0, 0);
		RELEASE_OBJECT_REF(&bLocal_4 + 312);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		MEMORY_PREFER_RIDING(&bLocal_4 + 192[02], false);
		Function_178(StackVal, &bLocal_4 + 192[02], Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		MEMORY_PREFER_RIDING(&bLocal_4 + 192[12], false);
		Function_178(StackVal, &bLocal_4 + 192[12], Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_627);
	if (IS_OBJECT_VALID(&uLocal_982))
	{
		DESTROY_OBJECT(&uLocal_982);
	}
	return;
}

void Function_178(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x999A / 39322
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_74(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, true);
}

int Function_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9AB9 / 39609
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
				Function_180(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(&uParam0);
		return 1;
	}
	return 0;
}

int Function_180(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x9B1C / 39708
{
	char* cVar0[32];
	
	Function_187();
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
	if (Function_186(&uParam0) == 1)
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
	Function_185(&uParam0, 0);
	Function_184(&uParam0, uParam1);
	Function_183(&uParam0, &uParam2);
	Function_182(&uParam0, uParam3);
	if (Function_181(&uParam0) != 5)
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

int Function_181(int iParam0) //Position: 0x9D88 / 40328
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_182(var uParam0, bool bParam1) //Position: 0x9DAC / 40364
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_183(var uParam0, int iParam1) //Position: 0x9DD0 / 40400
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_184(var uParam0, bool bParam1) //Position: 0x9DF6 / 40438
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_185(var uParam0, bool bParam1) //Position: 0x9E1D / 40477
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_186(bool bParam0) //Position: 0x9E41 / 40513
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_187() //Position: 0x9E60 / 40544
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

void Function_188(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9EAF / 40623
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
			if (&bParam2)
			{
				if (!Function_189(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x9F38 / 40760
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_190(bool bParam0, int iParam1, int iParam2) //Position: 0x9F58 / 40792
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
		Function_191(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_191(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA042 / 41026
{
	int iVar0;
	
	Function_193(bParam0);
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
	Function_192();
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

void Function_192() //Position: 0xA1C1 / 41409
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_193(int iParam0) //Position: 0xA1CD / 41421
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

void Function_194() //Position: 0xA213 / 41491
{
	Global_26174.f_8 = -1.0f;
	Global_26174.f_12 = -1.0f;
	Global_26174.f_16 = 0;
	return;
}

void Function_195() //Position: 0xA22B / 41515
{
	Global_26182.f_32 = -1.0f;
	return;
}

void Function_196() //Position: 0xA237 / 41527
{
	Global_26182.f_36 = -1.0f;
	return;
}

void Function_197(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA243 / 41539
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_226());
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
	Function_225();
	CLEAR_PRINTED_OBJECTIVE();
	Function_224();
	Function_222(0);
	Function_221();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_220();
	Function_219();
	Function_225();
	ENABLE_JOURNAL_REPLAY(1);
	Function_218(1);
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
		Function_217(&Global_54076);
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
	Function_214(Global_42825);
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
	Function_213();
	Function_212(1178687);
	Function_210(33039);
	Function_209(0x218003f);
	Function_208(4194560);
	Function_207();
	Function_206();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_203(0, 1, 1);
	}
	else
	{
		Function_203(0, 1, 1);
	}
	Function_202();
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
	Function_198();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_198() //Position: 0xA44F / 42063
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
		if (Function_201() > 3)
		{
			bVar0 *= 2;
		}
		Function_199(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_199(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA4A6 / 42150
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_200(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_200(bool bParam0) //Position: 0xA4F6 / 42230
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_201() //Position: 0xA51F / 42271
{
	return Global_21369.f_248;
}

void Function_202() //Position: 0xA52A / 42282
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

void Function_203(int iParam0, bool bParam1, int iParam2) //Position: 0xA554 / 42324
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
			Function_204(Global_43789);
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

void Function_204(int iParam0) //Position: 0xA660 / 42592
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_205())
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

bool Function_205() //Position: 0xA6DF / 42719
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

void Function_206() //Position: 0xA748 / 42824
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

void Function_207() //Position: 0xA76E / 42862
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

void Function_208(int iParam0) //Position: 0xA794 / 42900
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_209(int iParam0) //Position: 0xA7B1 / 42929
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_210(int iParam0) //Position: 0xA7C4 / 42948
{
	Function_211(&Global_43580, iParam0);
	return;
}

void Function_211(var uParam0, int iParam1) //Position: 0xA7D2 / 42962
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_212(bool bParam0) //Position: 0xA7F1 / 42993
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_213() //Position: 0xA81E / 43038
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

void Function_214(int iParam0) //Position: 0xA896 / 43158
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
		Function_215(78, 1, 1);
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

int Function_215(bool bParam0, bool bParam1, int iParam2) //Position: 0xA9CC / 43468
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_216(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_216(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_216(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_216(bool bParam0) //Position: 0xAA1A / 43546
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

void Function_217(int iParam0) //Position: 0xAB0E / 43790
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

void Function_218(bool bParam0) //Position: 0xAB91 / 43921
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

void Function_219() //Position: 0xAC08 / 44040
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

void Function_220() //Position: 0xAC4C / 44108
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

void Function_221() //Position: 0xAC90 / 44176
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_222(int iParam0) //Position: 0xACA6 / 44198
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_223())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_223() //Position: 0xACE6 / 44262
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

void Function_224() //Position: 0xAD0B / 44299
{
	Global_15862 = 0.0f;
	return;
}

void Function_225() //Position: 0xAD15 / 44309
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

int Function_226() //Position: 0xAD40 / 44352
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_227() //Position: 0xAD5D / 44381
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

void Function_228() //Position: 0xAE8F / 44687
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_229(bool bParam0) //Position: 0xAE98 / 44696
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&bParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
	ITERATE_IN_LAYOUT(&uVar0, &bParam0);
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

int Function_230(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xAF00 / 44800
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
		Function_232(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_231(&Global_15402[iParam014] + 8);
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

void Function_231(int iParam0) //Position: 0xB242 / 45634
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

void Function_232(var uParam0) //Position: 0xB275 / 45685
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_233() //Position: 0xB28C / 45708
{
	var uVar0[8];
	int iVar9;
	
	if (Function_277())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02: Stragglers";
		uVar0[4] = "Stage 03: Stampede";
		uVar0[5] = "Stage 04: Round 'em up";
		uVar0[6] = "Stage 05: Back to the Ranch";
		uVar0[7] = "Last Stage";
		iVar9 = Function_263(&uLocal_602, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_262(&iVar9, &iLocal_622, &iLocal_623, &iLocal_610))
		{
			Function_255();
			Function_254();
		}
		if (iVar9 == 0)
		{
			Function_255();
			Function_254();
			Function_253(&bLocal_657, 8);
		}
		else if (iVar9 == 1)
		{
			Function_255();
			Function_254();
			Function_248(iLocal_622);
			Function_244(StackVal, 5, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
		}
		else if (iVar9 == 2)
		{
			Function_255();
			Function_254();
			Function_239(&bLocal_659, 4);
		}
		else if (iVar9 == 3)
		{
			Function_237();
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_235(&iLocal_631);
			iLocal_622 = 1;
			iLocal_623 = 0;
			iLocal_610 = 1000;
		}
		else if (iVar9 == 4)
		{
			Function_237();
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_235(&iLocal_631);
			iLocal_622 = 2;
			iLocal_623 = 0;
			iLocal_610 = 1000;
		}
		else if (iVar9 == 5)
		{
			Function_234(Local_530, 21);
			Function_237();
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_235(&iLocal_631);
			iLocal_622 = 3;
			iLocal_623 = 0;
			iLocal_610 = 1000;
		}
		else if (iVar9 == 6)
		{
			Function_234(Local_530, 21);
			Function_237();
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_235(&iLocal_631);
			iLocal_622 = 4;
			iLocal_623 = 0;
			iLocal_610 = 1000;
		}
		else if (iVar9 == 7)
		{
			Function_234(Local_530, 21);
			Function_237();
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_235(&iLocal_631);
			iLocal_622 = 101;
			iLocal_623 = 0;
			iLocal_610 = 1000;
		}
	}
	return;
}

void Function_234(int iParam0, bool bParam1) //Position: 0xB507 / 46343
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = bParam1;
	return;
}

void Function_235(int iParam0) //Position: 0xB522 / 46370
{
	Function_236(&iParam0, 0.0f);
	return;
}

void Function_236(vector3 vParam0) //Position: 0xB52F / 46383
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_237() //Position: 0xB554 / 46420
{
	STREAMING_UNLOAD_BOUNDS();
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	if (IS_BLIP_VALID(&iLocal_1090))
	{
		REMOVE_BLIP(&iLocal_1090);
	}
	if (IS_OBJECT_VALID(&Local_1100 + 8))
	{
		DESTROY_OBJECT(&Local_1100 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1100))
	{
		DESTROY_OBJECT(&Local_1100);
	}
	if (IS_OBJECT_VALID(&bLocal_986))
	{
		DESTROY_OBJECT(&bLocal_986);
	}
	if (IS_OBJECT_VALID(&fLocal_984))
	{
		DESTROY_OBJECT(&fLocal_984);
	}
	if (IS_ACTOR_VALID(&iLocal_1092))
	{
		DESTROY_ACTOR(&iLocal_1092);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 64))
	{
		Function_238(&Local_1100 + 64);
		DESTROY_OBJECT(&Local_1100 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 72))
	{
		Function_238(&Local_1100 + 72);
		DESTROY_OBJECT(&Local_1100 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 80))
	{
		Function_238(&Local_1100 + 80);
		DESTROY_OBJECT(&Local_1100 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1100 + 88))
	{
		Function_238(&Local_1100 + 88);
		DESTROY_OBJECT(&Local_1100 + 88);
	}
	if (SQUAD_IS_VALID(&bLocal_1096))
	{
		Function_238(&bLocal_1096);
		DESTROY_OBJECT(&bLocal_1096);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_238(&bLocal_4 + 232);
		DESTROY_OBJECT(&bLocal_4 + 232);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 360))
	{
		Function_238(&bLocal_4 + 360);
		DESTROY_OBJECT(&bLocal_4 + 360);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_238(&bLocal_4 + 264);
		DESTROY_OBJECT(&bLocal_4 + 264);
	}
	if (SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_238(&bLocal_4 + 312);
		DESTROY_OBJECT(&bLocal_4 + 312);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_627);
	if (IS_OBJECT_VALID(&uLocal_660))
	{
		DESTROY_OBJECT(&uLocal_660);
	}
	if (IS_OBJECT_VALID(&uLocal_982))
	{
		DESTROY_OBJECT(&uLocal_982);
	}
	return;
}

void Function_238(bool bParam0) //Position: 0xB711 / 46865
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

void Function_239(bool bParam0, int iParam1) //Position: 0xB75F / 46943
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(&iParam1);
	bParam0 = 1;
	return;
}

void Function_240(int iParam0) //Position: 0xB784 / 46980
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_243("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_242(2) || Function_242(8)) || Function_242(9)) || Function_242(10))
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
		Function_243("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_243("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_243("");
	}
	else if (iParam0 == 8)
	{
		Function_241();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_241();
	}
	return;
}

void Function_241() //Position: 0xB87B / 47227
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_242(int iParam0) //Position: 0xB887 / 47239
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

void Function_243(char* cParam0) //Position: 0xB8BD / 47293
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_244(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB929 / 47401
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_245(StackVal, Param4, uParam3, &iParam6);
		Function_240(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_245(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB96A / 47466
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_247(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_246(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_246(int iParam0) //Position: 0xB9EC / 47596
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

var Function_247(struct<2> Param0, bool bParam2) //Position: 0xBE9A / 48794
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

struct<8> Function_248(int iParam0) //Position: 0xBF06 / 48902
{
	Function_249(iParam0 + 1);
	return StackVal, Function_249(iParam0 + 1);
}

struct<8> Function_249(bool bParam0) //Position: 0xBF13 / 48915
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_250(&bLocal_4 + 808[0]);
			return StackVal, Function_250(&bLocal_4 + 808[0]);
			break;
		
		case 0x00000001:
			Function_250(&bLocal_4 + 896[0]);
			return StackVal, Function_250(&bLocal_4 + 896[0]);
			break;
		
		case 0x00000002:
			Function_250(&bLocal_4 + 944[0]);
			return StackVal, Function_250(&bLocal_4 + 944[0]);
			break;
		
		case 0x00000003:
			Function_250(&bLocal_4 + 1040[0]);
			return StackVal, Function_250(&bLocal_4 + 1040[0]);
			break;
		
		case 0x00000004:
			Function_250(&bLocal_4 + 1120[0]);
			return StackVal, Function_250(&bLocal_4 + 1120[0]);
			break;
		
		default:
			Function_250(&bLocal_4 + 1200[0]);
			return StackVal, Function_250(&bLocal_4 + 1200[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_250(&bLocal_4 + 808[0]);
	return StackVal, Function_250(&bLocal_4 + 808[0]);
}

struct<8> Function_250(bool bParam0) //Position: 0xC010 / 49168
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

int Function_251(int iParam0) //Position: 0xC039 / 49209
{
	return Function_252(iParam0 + 1);
}

int Function_252(bool bParam0) //Position: 0xC046 / 49222
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&bLocal_4 + 808[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&bLocal_4 + 896[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&bLocal_4 + 944[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&bLocal_4 + 1040[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&bLocal_4 + 1120[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&bLocal_4 + 1200[0]);
			break;
	}
	return GET_OBJECT_HEADING(&bLocal_4 + 808[0]);
}

void Function_253(bool bParam0, int iParam1) //Position: 0xC0DD / 49373
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(&iParam1);
	bParam0 = 1;
	return;
}

void Function_254() //Position: 0xC102 / 49410
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_255() //Position: 0xC117 / 49431
{
	Function_257();
	Function_256(10, 3);
	return;
}

void Function_256(int iParam0, int iParam1) //Position: 0xC126 / 49446
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

void Function_257() //Position: 0xC273 / 49779
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_261())
	{
		Function_260(10, 3);
	}
	else
	{
		Function_258();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_258() //Position: 0xC2BE / 49854
{
	Function_259(25, 2);
	return;
}

void Function_259(int iParam0, int iParam1) //Position: 0xC2CA / 49866
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

void Function_260(int iParam0, int iParam1) //Position: 0xC4F6 / 50422
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

bool Function_261() //Position: 0xC643 / 50755
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

bool Function_262(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC6AB / 50859
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_255();
			Function_254();
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
		Function_243("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_263(struct<17> Param0) //Position: 0xC75A / 51034
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_276(&Var12, &Var0);
	uVar15 = Function_275(uParam1, &Var12);
	Function_274(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_273(&Param0, uVar15);
	Function_271(StackVal, &Param0, Var12.f_12);
	Function_269(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_268(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_265(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_264(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_264(int iParam0, int iParam1, int iParam2) //Position: 0xC84E / 51278
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

bool Function_265(struct<17> Param0) //Position: 0xC8AE / 51374
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
				Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_264(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_266(Param1.f_64);
	}
	else
	{
		Function_266(Param1.f_64);
	}
	return 0;
}

void Function_266(bool bParam0) //Position: 0xCA41 / 51777
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

void Function_267(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCA7F / 51839
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

var Function_268(int iParam0, struct<21> Param1) //Position: 0xCB35 / 52021
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_269(vector3 vParam0) //Position: 0xCB5C / 52060
{
	switch (Function_270())
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

int Function_270() //Position: 0xCC08 / 52232
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

void Function_271(vector3 vParam0) //Position: 0xCC44 / 52292
{
	switch (Function_272(&vParam0))
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

int Function_272(bool bParam0) //Position: 0xCCED / 52461
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

var Function_273(struct<21> Param0) //Position: 0xCE0D / 52749
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

void Function_274(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCFC7 / 53191
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

var Function_275(int iParam0, struct<13> Param1) //Position: 0xD063 / 53347
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_276(struct<17> Param0) //Position: 0xD07F / 53375
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

bool Function_277() //Position: 0xD0D9 / 53465
{
	return Global_47307;
}

bool Function_278() //Position: 0xD0E2 / 53474
{
	if (IS_EXITFLAG_SET())
	{
		Function_248(iLocal_622);
		Function_244(StackVal, 4, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
		return 0;
	}
	Function_630(StackVal, StackVal, StackVal, StackVal, StackVal, Local_530, iLocal_622, iLocal_623, &bLocal_659, &bLocal_657, &bLocal_658);
	if (iLocal_622 == 99 && iLocal_622 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_248(iLocal_622);
			Function_244(StackVal, 1, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_248(iLocal_622);
			Function_244(StackVal, 2, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
			return 1;
		}
		if (Function_629(2048))
		{
			Function_248(iLocal_622);
			Function_244(StackVal, 3, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
			return 1;
		}
		if (Function_609(&Local_717, &uLocal_663, &uLocal_959, &uLocal_625, iLocal_662))
		{
			if (Function_607(&uLocal_959))
			{
				Function_248(iLocal_622);
				Function_244(StackVal, 5, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
				return 1;
			}
		}
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			if (iLocal_623 > 6)
			{
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					if (SQUAD_IS_VALID(&Local_1100 + 72))
					{
						if (SQUAD_IS_VALID(&Local_1100 + 80))
						{
							if (!iLocal_623 != 106)
							{
								bLocal_970 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 80));
								if (iLocal_622 != 0 || iLocal_622 != 1)
								{
									bLocal_971 = (11 - bLocal_970);
								}
								else
								{
									bLocal_971 = (21 - bLocal_970);
								}
								bLocal_972 = ROUND((0,6f * IntToFloat(bLocal_970)));
								if (bLocal_971 > bLocal_972)
								{
									PRINTINT(bLocal_970);
									PRINTNL();
									PRINTINT(bLocal_971);
									PRINTNL();
									PRINTINT(bLocal_972);
									PRINTNL();
									if (iLocal_622 == 2)
									{
										Function_243("nHerd_dead");
										Function_248(iLocal_622);
										Function_244(StackVal, 5, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
										return 1;
									}
									Function_243("nHerd_lost");
									Function_248(iLocal_622);
									Function_244(StackVal, 5, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
									return 1;
									return 1;
								}
							}
						}
					}
				}
			}
		}
		Function_606(&bLocal_629, &bLocal_627);
		Function_605();
	}
	switch (iLocal_622)
	{
		case 0x00000063:
			Function_545();
			break;
		
		case 0x00000000:
			Function_518();
			break;
		
		case 0x00000001:
			Function_507();
			break;
		
		case 0x00000002:
			Function_472();
			break;
		
		case 0x00000003:
			Function_458();
			break;
		
		case 0x00000004:
			Function_357();
			break;
		
		case 0x00000065:
			Function_281();
			break;
		
		case 0x00000064:
			if (Function_280(&bLocal_658))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_279(&iLocal_622, &iLocal_623, &iLocal_610))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_657)
	{
		Function_253(&bLocal_657, 8);
		Function_1();
		return 0;
	}
	if (bLocal_659)
	{
		Function_239(&bLocal_659, 4);
		Function_1();
		return 0;
	}
	if (bLocal_658 && iLocal_622 == 100)
	{
		Function_248(iLocal_622);
		Function_244(StackVal, 5, &bLocal_658, &iLocal_622, Function_251(iLocal_622), Function_248(iLocal_622), 0);
	}
	return 1;
}

bool Function_279(var uParam0, var uParam1, int iParam2) //Position: 0xD3CE / 54222
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

bool Function_280(int iParam0) //Position: 0xD417 / 54295
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_281() //Position: 0xD42B / 54315
{
	Function_356(&bLocal_528);
	switch (iLocal_623)
	{
		case 0x00000000:
			Function_352(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			bLocal_968 = false;
			if (IS_ACTOR_VALID(&bLocal_629))
			{
				TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_629, true);
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_627, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_624 = Global_46816[0];
				if (!Function_343(bLocal_624))
				{
					Function_341(&Local_530);
				}
				Function_340(&Global_54076, &bLocal_4 + 1200[0], 1, 1, 1);
				Function_235(&iLocal_631);
				iLocal_623 = 1;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_624) || bLocal_624 != 4294967295))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_337(&uLocal_990))
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_336(0,65f);
				Function_335(0,01f);
				Function_333(4, 1);
				bLocal_970 = Function_332(Local_530);
				PRINTINT(bLocal_970);
				PRINTNL();
				bLocal_971 = (21 - bLocal_970);
				PRINTINT(bLocal_971);
				PRINTNL();
				Function_313();
				if (iLocal_643[4] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_629))
						{
							Function_340(&bLocal_629, &bLocal_4 + 1200[13], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_627))
					{
						Function_340(&bLocal_627, &bLocal_4 + 1200[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
						{
							Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1200[14], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(&bLocal_4 + 232))
				{
					SQUAD_GOALS_CLEAR(&bLocal_4 + 232);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					Function_312(&Local_1100 + 88, &Local_1100 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 80))
				{
					Function_312(&Local_1100 + 80, &Local_1100 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 72))
				{
					Function_312(&Local_1100 + 72, &Local_1100 + 64);
				}
				if (SQUAD_IS_VALID(&bLocal_1096))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1096);
					Function_311(&bLocal_1096);
					Function_310(&bLocal_1096);
					Function_312(&bLocal_1096, &Local_1100 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 64);
					Function_311(&Local_1100 + 64);
					Function_310(&Local_1100 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 648, -1.0f);
				}
				Function_235(&iLocal_631);
				iLocal_623 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_282())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_235(&iLocal_631);
				iLocal_623 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				PRINTINT(Local_1100.f_120);
				PRINTNL();
				PRINTINT(Local_1100.f_124);
				PRINTNL();
				bLocal_974 = Local_1100.f_120;
				Global_53524.f_176 = bLocal_974;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_975 = Local_1100.f_124;
				Global_53524.f_180 = bLocal_975;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_89(355, bLocal_970, 1, 0);
				if (bLocal_970 == 21)
				{
					Function_116(200, 1, 0);
				}
				bLocal_657 = true;
			}
			break;
	}
	return;
}

bool Function_282() //Position: 0xD7F8 / 55288
{
	var uVar0;
	
	if (Function_309(&iLocal_610 + 4))
	{
		if (Function_307(&iLocal_610 + 4) <= 2.0f)
		{
			Function_305(&iLocal_610, 1, 0);
		}
	}
	switch (iLocal_610)
	{
		case 0x000003E8:
			Function_301(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &bLocal_627);
				*(&iLocal_610 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				*(&iLocal_610 + 24) = Function_295(&bLocal_4, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_610 + 24))
				{
				}
				else
				{
					LOG_ERROR("ranch08_cutsceneLast - Failed to create ranch08_cutsceneLast_cutscene");
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					Function_340(&bLocal_629, &bLocal_4 + 1200[13], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				Function_340(&bLocal_627, &bLocal_4 + 1200[1], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1200[14], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
					{
						ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
					}
				}
			}
			iLocal_610 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_610 + 24), 0))
			{
				Function_294(&Global_54076, 1, 1);
				Function_294(&bLocal_627, 1, 1);
				if (SQUAD_IS_VALID(&bLocal_4 + 232))
				{
					Function_292(&bLocal_4 + 192[02], &bLocal_4 + 1200[11], 1, 1, 1);
					Function_292(&bLocal_4 + 192[12], &bLocal_4 + 1200[12], 1, 1, 1);
				}
				if (SQUAD_IS_VALID(&bLocal_4 + 360))
				{
					SQUAD_GOALS_CLEAR(&bLocal_4 + 360);
					Function_311(&bLocal_4 + 360);
					Function_291(&bLocal_4 + 360);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 360, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					if (IS_ACTOR_VALID(&bLocal_4 + 320[02]))
					{
						Function_340(&bLocal_4 + 320[02], &bLocal_4 + 1200[7], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_4 + 320[12]))
					{
						Function_340(&bLocal_4 + 320[12], &bLocal_4 + 1200[9], 1, 1, 1);
					}
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 368[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 368[2]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&bLocal_4 + 368[2], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bLocal_4 + 368[2]);
				Function_290(&iLocal_610 + 4);
				iLocal_610 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iLocal_610 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_307(&iLocal_610 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
					Function_235(&iLocal_610 + 4);
					iLocal_1150 = 6;
					iLocal_1151 = 6;
					iLocal_610 = 1004;
				}
			}
			else
			{
				Function_235(&iLocal_610 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_286() && Function_285())
			{
				Function_235(&iLocal_610 + 4);
				iLocal_610 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				HUD_TIMER_DISPLAY(0);
				Function_294(&Global_54076, 0, 1);
				Function_294(&bLocal_627, 0, 1);
				if (IS_ACTOR_VALID(&Global_54076))
				{
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_283(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_610 + 24))
				{
					DESTROY_OBJECT(&iLocal_610 + 24);
				}
				iLocal_610 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_292(&bLocal_627, &bLocal_4 + 1200[15], 1, 1, 1);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1848, 5.0f, 3);
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1872, 5.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
				{
					Function_340(&bLocal_4 + 192[02], &bLocal_4 + 1200[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
				{
					Function_340(&bLocal_4 + 192[12], &bLocal_4 + 1200[6], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 320[02]))
				{
					Function_340(&bLocal_4 + 320[02], &bLocal_4 + 1200[8], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 320[12]))
				{
					Function_340(&bLocal_4 + 320[12], &bLocal_4 + 1200[10], 1, 1, 1);
				}
				if (IS_DOOR_VALID(&(uLocal_990[0])))
				{
					CLOSE_DOOR_FAST(&(uLocal_990[0]));
				}
				if (IS_DOOR_VALID(&(uLocal_990[1])))
				{
					CLOSE_DOOR_FAST(&(uLocal_990[1]));
				}
				iLocal_610 = 1104;
			}
			break;
	}
	return 0;
}

void Function_283(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xDD24 / 56612
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
	Function_284(&iParam9, &bParam10);
}

void Function_284(var uParam0, bool bParam1) //Position: 0xDDF3 / 56819
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
		Function_213();
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

int Function_285() //Position: 0xDEC2 / 57026
{
	if (IS_DOOR_VALID(&(uLocal_990[0])))
	{
		if (!IS_DOOR_CLOSED(&(uLocal_990[0])))
		{
			if (IS_ACTOR_VALID(&bLocal_4 + 320[02]))
			{
				if (IS_ACTION_NODE_PLAYING(&bLocal_4 + 320[02], "ranch08_close/01"))
				{
					if (fLocal_1098 >= 0.0f)
					{
						fLocal_1098 = Function_307(&iLocal_610 + 4);
					}
					else if (Function_307(&iLocal_610 + 4) <= (fLocal_1098 + 1,5f))
					{
						CLOSE_DOOR(&(uLocal_990[0]), 0,5f);
					}
				}
			}
		}
	}
	if (IS_DOOR_VALID(&(uLocal_990[1])))
	{
		if (!IS_DOOR_CLOSED(&(uLocal_990[1])))
		{
			if (IS_ACTOR_VALID(&bLocal_4 + 320[12]))
			{
				if (IS_ACTION_NODE_PLAYING(&bLocal_4 + 320[12], "ranch08_close/02"))
				{
					if (fLocal_1099 >= 0.0f)
					{
						fLocal_1099 = Function_307(&iLocal_610 + 4);
					}
					else if (Function_307(&iLocal_610 + 4) <= (fLocal_1099 + 1,5f))
					{
						CLOSE_DOOR(&(uLocal_990[1]), 0,5f);
					}
				}
			}
		}
	}
	switch (iLocal_1151)
	{
		case 0x00000006:
			if (Function_307(&iLocal_610 + 4) < 0.0f)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 320[02]))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1968), "UseCase1", true, 1);
					TASK_GO_TO_COORD(0, &bLocal_4 + 1592, 1);
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1368, 5.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 320[02], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 320[02], true);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 320[12]))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1976), "UseCase1", true, 1);
					TASK_GO_TO_COORD(0, &bLocal_4 + 1616, 1);
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1392, 5.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 320[12], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 320[12], true);
				}
				iLocal_1151 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_307(&iLocal_610 + 4) < 2.0f)
			{
				iLocal_1151 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_307(&iLocal_610 + 4) < 6,5f)
			{
				if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1,5f, 0, 0);
					TASK_GO_TO_COORD(0, &bLocal_4 + 1848, 2);
					TASK_GO_TO_COORD(0, &bLocal_4 + 1872, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				}
				iLocal_1151 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_307(&iLocal_610 + 4) < 10.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1,5f, 0, 0);
					TASK_GO_TO_COORD(0, &bLocal_4 + 1848, 2);
					TASK_GO_TO_COORD(0, &bLocal_4 + 1872, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				}
				iLocal_1151 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_307(&iLocal_610 + 4) < 12,5f)
			{
				iLocal_1151 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_307(&iLocal_610 + 4) < 13,5f)
			{
				iLocal_1151 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_307(&iLocal_610 + 4) < 14.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1848, 5.0f, 3);
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1872, 5.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				iLocal_1151 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_307(&iLocal_610 + 4) < 17,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_286() //Position: 0xE2AC / 58028
{
	switch (iLocal_1150)
	{
		case 0x00000006:
			if (Function_307(&iLocal_610 + 4) < 0.0f)
			{
				iLocal_1150 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_307(&iLocal_610 + 4) < 8.0f)
			{
				Function_287();
				iLocal_1150 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_307(&iLocal_610 + 4) < 16.0f)
			{
				iLocal_1150 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_307(&iLocal_610 + 4) < 17.0f)
			{
				iLocal_1150 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_307(&iLocal_610 + 4) < 17,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_287() //Position: 0xE352 / 58194
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_CS03_v1_AA", "Ranch08_CS03_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_CS03_v1_AB", "Ranch08_CS03_v1_AB", true, 4, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_288(int iParam0) //Position: 0xE3D2 / 58322
{
	Function_289(0, &Global_54076, iParam0, 0);
	Function_289(1, &bLocal_627, iParam0, 0);
	return;
}

void Function_289(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xE3EE / 58350
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_290(int iParam0) //Position: 0xE416 / 58390
{
	if (!Function_309(&iParam0))
	{
		Function_236(&iParam0, 0.0f);
	}
	return;
}

var Function_291(int iParam0) //Position: 0xE42D / 58413
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 1;
	if (!SQUAD_IS_VALID(&iParam0))
	{
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (!MAKE_ACTOR_READY_FOR_ACTION(&uVar2, 1))
				{
					iVar0 = 0;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_292(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xE47E / 58494
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
				Function_293(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_293(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xE59E / 58782
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

void Function_294(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE66D / 58989
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

var Function_295(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xE71D / 59165
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ranch08_cutsceneLast", 4, 1);
	}
	Function_296(&uVar0, &uParam2);
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

void Function_296(var uParam0, int iParam1) //Position: 0xE7AE / 59310
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_300(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_299(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_298(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_297(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 2, 3, 10,5f, 2, 0);
	return;
}

void Function_297(int iParam0) //Position: 0xE841 / 59457
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,01268f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-892,5979f, 92,31427f, 2495,232f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,032448f, -0,209647f, 1E-06f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_298(int iParam0) //Position: 0xE8BA / 59578
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,01268f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-894,3387f, 92,313f, 2494,647f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,032448f, -0,701004f, 1E-06f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_299(int iParam0) //Position: 0xE933 / 59699
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,46033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-893,5203f, 91,46874f, 2489,663f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,01957f, 0,865663f, 0,000671f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_300(float fParam0) //Position: 0xE9A4 / 59812
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 52,46033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(-888,7482f, 91,33773f, 2485,414f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,023775f, 1,289036f, 0,000671f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_301(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xEA15 / 59925
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
				Function_304(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_304(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_303()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_303()));
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
	if (Function_302(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_302(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_302(int iParam0) //Position: 0xECC7 / 60615
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_303() //Position: 0xECE3 / 60643
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

struct<8> Function_304(int iParam0) //Position: 0xED71 / 60785
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_305(int iParam0, bool bParam1, bool bParam2) //Position: 0xED83 / 60803
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
			Function_306(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_306(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_306(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xEEFB / 61179
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

float Function_307(vector3 vParam0) //Position: 0xEF25 / 61221
{
	if (Function_309(&vParam0))
	{
		if (Function_308(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_308(int iParam0) //Position: 0xEFF2 / 61426
{
	return Function_14(iParam0, 2);
}

bool Function_309(int iParam0) //Position: 0xF000 / 61440
{
	return Function_14(iParam0, 1);
}

void Function_310(bool bParam0) //Position: 0xF00E / 61454
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

void Function_311(bool bParam0) //Position: 0xF05D / 61533
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

void Function_312(bool bParam0, var uParam1) //Position: 0xF092 / 61586
{
	var uVar0;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		if (SQUAD_IS_VALID(&uParam1))
		{
			while (SQUAD_GET_SIZE(&bParam0) >= 0)
			{
				uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, false);
				if (IS_ACTOR_VALID(&uVar0))
				{
					SQUAD_LEAVE(&uVar0);
					SQUAD_JOIN(&uVar0, &uParam1);
				}
			}
		}
	}
	return;
}

void Function_313() //Position: 0xF0DF / 61663
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1200[14], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 1200[11], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 1200[12], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 1200[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 1200[5], 1, 1, 1);
			}
			Function_324(&bLocal_4 + 232, &bLocal_4 + 312);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 360))
	{
		Function_323();
		if (SQUAD_IS_VALID(&bLocal_4 + 360))
		{
			Function_330(&bLocal_4 + 360, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 360, 20);
			Function_327(&bLocal_4 + 360, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 320[02]))
			{
				Function_340(&bLocal_4 + 320[02], &bLocal_4 + 1200[7], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 320[12]))
			{
				Function_340(&bLocal_4 + 320[12], &bLocal_4 + 1200[9], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 360, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_314();
	return;
}

void Function_314() //Position: 0xF359 / 62297
{
	Function_322();
	(&Local_1100 + 24) = &bLocal_4 + 2040;
	if (!SQUAD_IS_VALID(&Local_1100 + 64))
	{
		*(&Local_1100 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 64);
			Function_319(&Local_1100, &bLocal_528, &bLocal_4 + 1488, &iLocal_1056, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&Local_1100 + 64, 0);
			Function_318(&Local_1100 + 64, 1);
			Function_317(&Local_1100 + 64, 0);
			Function_316(&Local_1100 + 64, 0);
			Function_315(&Local_1100 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 648, -1.0f);
		}
	}
	return;
}

void Function_315(bool bParam0, int iParam1, bool bParam2) //Position: 0xF439 / 62521
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				DECOR_SET_BOOL(&uVar1, &iParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_316(int iParam0, bool bParam1) //Position: 0xF487 / 62599
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_CAN_BE_BUMPTARGETED(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_317(int iParam0, bool bParam1) //Position: 0xF4CE / 62670
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_318(int iParam0, bool bParam1) //Position: 0xF515 / 62741
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_319(struct<113> Param0) //Position: 0xF55F / 62815
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
					Function_250(&bParam2);
					Var36 = Function_250(&bParam2);
					Function_321(&bParam2);
					Var38 = Function_321(&bParam2);
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
						if (Function_320(bVar48))
						{
							uVar34 = CREATE_ACTOR_IN_LAYOUT(&bParam1, &cVar2, bVar48, Var42, Var44);
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

bool Function_320(int iParam0) //Position: 0xF713 / 63251
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_321(bool bParam0) //Position: 0xF72A / 63274
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

void Function_322() //Position: 0xF753 / 63315
{
	iLocal_1056[0] = 1008;
	iLocal_1056[1] = 1009;
	iLocal_1056[2] = 1010;
	iLocal_1056[3] = 1011;
	*(&Local_1100 + 152[0]) = &Global_54076;
	*(&Local_1100 + 152[1]) = &bLocal_627;
	if (iLocal_622 == 2)
	{
		if (iLocal_1024)
		{
			Local_1100.f_112 = (Function_332(Local_530) - 10);
		}
		else
		{
			Local_1100.f_112 = Function_332(Local_530);
		}
	}
	else
	{
		Local_1100.f_112 = Function_332(Local_530);
	}
	if (iLocal_622 != 0 || iLocal_622 != 1)
	{
		Local_1100.f_116 = 11;
	}
	else
	{
		Local_1100.f_116 = 21;
	}
	PRINTINT(Local_1100.f_112);
	PRINTNL();
	*(&Local_1100 + 104) = "RANCH08_COWS01";
	if (!Function_309(&Local_1100 + 132))
	{
		Function_290(&Local_1100 + 132);
	}
	else
	{
		Function_235(&Local_1100 + 132);
	}
	if (!IS_OBJECT_VALID(&Local_1100))
	{
		Local_1100 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_528, "COWS_01_BASE", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1100))
		{
		}
	}
	if (!IS_OBJECT_VALID(&Local_1100 + 8))
	{
		*(&Local_1100 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_528, "COWS_01_CENTER", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1100 + 8))
		{
		}
	}
	if (!SQUAD_IS_VALID(&Local_1100 + 72))
	{
		*(&Local_1100 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS_01_STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 72))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 72);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1100 + 80))
	{
		*(&Local_1100 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS_01_RETURN_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 80))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 80);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1100 + 88))
	{
		*(&Local_1100 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS_01_GOAL_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 88))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 88);
		}
	}
	if (!IS_VOLUME_VALID(&Local_1100 + 56))
	{
		*(&Local_1100 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_528, "HERD_VOLUME_MEDIUM", 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(9.0f, 9.0f, 9.0f));
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			if (IS_OBJECT_VALID(&Local_1100 + 8))
			{
				ATTACH_OBJECTS(StackVal, StackVal, &Local_1100 + 56, &Local_1100 + 8, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
		}
	}
	(&Local_1100 + 24) = "";
	(&Local_1100 + 16) = "";
	Local_1100.f_148 = 0;
	return;
}

void Function_323() //Position: 0xFA35 / 64053
{
	*(&bLocal_4 + 360) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "RanchHand02"));
	*(&bLocal_4 + 320[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RANCHHAND_02_01", 288, Vector(-911,9269f, 90,35291f, 2489,149f), Vector(0.0f, 249,0511f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 320[02], &bLocal_4 + 360);
	*(&bLocal_4 + 320[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RANCHHAND_02_02", 160, Vector(-904,0801f, 90,35291f, 2485,309f), Vector(0.0f, 230,1027f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 320[12], &bLocal_4 + 360);
	return;
}

void Function_324(var uParam0, bool bParam1) //Position: 0xFAF3 / 64243
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

void Function_325() //Position: 0xFB6A / 64362
{
	*(&bLocal_4 + 232) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "RanchHand01"));
	*(&bLocal_4 + 192[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RANCHHAND_01_01", 550, Vector(-855,9774f, 90,35297f, 2434,973f), Vector(0.0f, 40,45127f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 192[02], &bLocal_4 + 232);
	*(&bLocal_4 + 192[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RANCHHAND_01_02", 155, Vector(-856.0f, 90,35297f, 2440.0f), Vector(0.0f, 82,68872f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 192[12], &bLocal_4 + 232);
	return;
}

void Function_326() //Position: 0xFC21 / 64545
{
	*(&bLocal_4 + 312) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Horse02"));
	*(&bLocal_4 + 272[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HORSE_02_01", 976, Vector(-848,233f, 90,35291f, 2435,268f), Vector(0.0f, 68,955f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 272[02], &bLocal_4 + 312);
	*(&bLocal_4 + 272[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HORSE_02_02", 980, Vector(-863,4081f, 90,35291f, 2435,053f), Vector(0.0f, 394,4722f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 272[12], &bLocal_4 + 312);
	return;
}

void Function_327(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xFCD4 / 64724
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_328(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_328(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFD0F / 64783
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

void Function_329(var uParam0, bool bParam1) //Position: 0xFD59 / 64857
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

void Function_330(int iParam0, bool bParam1) //Position: 0xFDA1 / 64929
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
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_331() //Position: 0xFDE8 / 65000
{
	*(&bLocal_4 + 264) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_4, "Horse01"));
	*(&bLocal_4 + 240[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "HORSE_01_01", 977, Vector(-853,7443f, 90,35294f, 2447,199f), Vector(0.0f, 29,67169f, 0.0f));
	SQUAD_JOIN(&bLocal_4 + 240[02], &bLocal_4 + 264);
	return;
}

int Function_332(int iParam0) //Position: 0xFE4F / 65103
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_333(int iParam0, int iParam1) //Position: 0xFE69 / 65129
{
	Function_193(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_334(StackVal, &iParam1);
	}
	return;
}

void Function_334(int iParam0, int iParam1) //Position: 0xFE9B / 65179
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_193(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_191(iParam0, &uVar0, &iParam1);
	return;
}

void Function_335(int iParam0) //Position: 0xFEC4 / 65220
{
	Global_26182.f_36 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_26182.f_36);
	return;
}

void Function_336(int iParam0) //Position: 0xFED9 / 65241
{
	Global_26182.f_32 = iParam0;
	SET_RAIN_AMOUNT(Global_26182.f_32);
	return;
}

bool Function_337(int[] iParam0) //Position: 0xFEEE / 65262
{
	switch (bLocal_968)
	{
		case 0x00000000:
			bLocal_968++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(&uLocal_660))
			{
				uLocal_660 = CREATE_WORLD_SECTOR(&bLocal_528, "hennigansRanch");
				if (IS_OBJECT_VALID(&uLocal_660))
				{
				}
			}
			bLocal_968++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(&uLocal_660))
			{
				if (!IS_DOOR_VALID(&(iParam0[0])))
				{
					iParam0[0] = Function_338("hennigansRanch", "stable02", 11);
				}
				if (!IS_DOOR_VALID(&(iParam0[1])))
				{
					iParam0[1] = Function_338("hennigansRanch", "stable02", 10);
				}
				bLocal_968++;
			}
			break;
		
		case 0x00000003:
			if (IS_DOOR_VALID(&(iParam0[0])) && IS_DOOR_VALID(&(iParam0[1])))
			{
				Function_161(&(iParam0[0]), 0);
				OPEN_DOOR_DIRECTION(&(iParam0[0]), 0);
				Function_161(&(iParam0[1]), 0);
				OPEN_DOOR_DIRECTION(&(iParam0[1]), 1);
				bLocal_968++;
			}
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID(&(iParam0[0])) && IS_DOOR_VALID(&(iParam0[1])))
			{
				if (IS_DOOR_OPENED(&(iParam0[0])) && IS_DOOR_OPENED(&(iParam0[1])))
				{
					if (IS_OBJECT_VALID(&uLocal_660))
					{
						DESTROY_OBJECT(&uLocal_660);
					}
					bLocal_968++;
				}
			}
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

int Function_338(int iParam0, var uParam1, int iParam2) //Position: 0x10097 / 65687
{
	return Function_339(Global_43789, &iParam0, &uParam1, iParam2);
}

int Function_339(int iParam0, char* cParam1, bool bParam3) //Position: 0x100AB / 65707
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

void Function_340(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10150 / 65872
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

void Function_341(int iParam0) //Position: 0x10260 / 66144
{
	if (!Function_342(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_203(1, 0, 1);
		}
	}
	return;
}

bool Function_342(struct<37> Param0) //Position: 0x1027C / 66172
{
	return Param0.f_36;
}

bool Function_343(bool bParam0) //Position: 0x10287 / 66183
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_344() //Position: 0x102A3 / 66211
{
	Function_169(18444);
	Function_351(12);
	Function_351(9);
	Function_351(13);
	Function_351(11);
	Function_351(35);
	Function_351(6);
	Function_351(3);
	Function_351(10);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1008);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1009);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1010);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1011);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1015);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1016);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1017);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1012);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1013);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1014);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1073);
	Function_349(268);
	Function_348();
	Function_347();
	if (iLocal_622 == 0)
	{
		Function_346(0);
		Function_345(1);
	}
	else if (iLocal_622 == 1)
	{
		Function_346(1);
		Function_345(1);
	}
	else if (iLocal_622 == 2)
	{
		Function_346(1);
		Function_345(1);
	}
	else if (iLocal_622 == 3)
	{
		Function_346(1);
		Function_345(1);
	}
	else if (iLocal_622 == 4)
	{
		Function_346(0);
		Function_345(1);
	}
	else
	{
		Function_346(0);
		Function_345(1);
	}
	return;
}

void Function_345(int iParam0) //Position: 0x103A9 / 66473
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 3;
	}
	Global_43580.f_60 = iParam0;
	return;
}

void Function_346(int iParam0) //Position: 0x103C7 / 66503
{
	if (iParam0 < 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 10;
	}
	Global_43580.f_56 = (iParam0 - Global_43580.f_12);
	return;
}

void Function_347() //Position: 0x103EC / 66540
{
	Global_43580.f_60 = 4294967295;
	return;
}

void Function_348() //Position: 0x103F8 / 66552
{
	Global_43580.f_56 = 0;
	return;
}

void Function_349(int iParam0) //Position: 0x10404 / 66564
{
	Function_350(&Global_43580, iParam0);
	return;
}

void Function_350(var uParam0, int iParam1) //Position: 0x10412 / 66578
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_351(int iParam0) //Position: 0x1043A / 66618
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_352(bool bParam0) //Position: 0x1045A / 66650
{
	Function_353(0, 0x40400000);
	Function_220();
	Function_219();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_353(float fParam0, float fParam1) //Position: 0x10490 / 66704
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
	Function_355();
	Function_354();
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

void Function_354() //Position: 0x105A1 / 66977
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_355() //Position: 0x105D5 / 67029
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

void Function_356(bool bParam0) //Position: 0x106DB / 67291
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&bParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
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
						if ((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1015) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1016) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1017) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073)
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

void Function_357() //Position: 0x10842 / 67650
{
	if (((iLocal_623 < 5 && iLocal_623 > 105) && !iLocal_623 != 104) && !iLocal_623 != 103)
	{
		if (iLocal_623 > 2)
		{
			if (Function_343(Global_46816[0]))
			{
				Function_457(&uLocal_990);
			}
			else
			{
				bLocal_968 = false;
			}
		}
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_456(&Local_1100);
			Function_455(&Local_1100 + 64, &Local_1100 + 88, &bLocal_4 + 600);
		}
		if (iLocal_623 > 9)
		{
			if (bLocal_1016)
			{
				Function_454(&Local_1100, 1);
				if (Function_307(&iLocal_1052) <= 0,1f)
				{
					Function_453(&Local_1100, 1);
					Function_452(&Local_1100, 1, 0x41700000);
				}
				if (Function_307(&iLocal_1028) <= 0,2f)
				{
					Function_449(&Local_1100);
					Function_235(&iLocal_1028);
				}
				Function_448();
			}
		}
		else if (bLocal_1016)
		{
			Function_444(&Local_1100);
			if (Function_307(&iLocal_1052) <= 0,1f)
			{
				Function_443(&Local_1100);
				Function_442(&Local_1100, 0x41700000);
			}
			if (Function_307(&iLocal_1028) <= 0,2f)
			{
				Function_449(&Local_1100);
				Function_235(&iLocal_1028);
			}
			Function_448();
		}
		Function_441(&Global_54076);
		Function_437(&Local_1100 + 72, &iLocal_1032, 3.0f, &bLocal_4 + 2040, -20.0f);
		Function_436();
		Function_435();
		Function_434();
		Function_433();
		Function_412();
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_235(&iLocal_1052);
		}
	}
	switch (iLocal_623)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_643[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_624 = Global_46736[2];
				if (!Function_343(bLocal_624))
				{
					Function_341(&Local_530);
				}
				Function_340(&Global_54076, &bLocal_4 + 1120[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_629, true);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				Function_235(&iLocal_631);
				iLocal_623 = 1;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_624) || bLocal_624 != 4294967295))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("RIDING_ALT", 0, 4294967295, 4294967295);
			bLocal_968 = false;
			iLocal_969 = 0;
			iLocal_976 = 0;
			iLocal_977 = 0;
			iLocal_978 = 0;
			iLocal_979 = 0;
			iLocal_981 = 0;
			iLocal_1021 = 0;
			iLocal_662 = 0;
			iLocal_1022 = 0;
			iLocal_1025 = 0;
			iLocal_1027 = 0;
			Function_336(0,65f);
			Function_335(0,01f);
			Function_333(4, 1);
			bLocal_970 = Function_332(Local_530);
			PRINTINT(bLocal_970);
			PRINTNL();
			bLocal_971 = (21 - bLocal_970);
			PRINTINT(bLocal_971);
			PRINTNL();
			bLocal_974 = Global_53524.f_176;
			bLocal_975 = Global_53524.f_180;
			PRINTINT(bLocal_974);
			PRINTNL();
			PRINTINT(bLocal_975);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Local_1100.f_120 = bLocal_974;
			Local_1100.f_124 = bLocal_975;
			Function_410();
			if (iLocal_643[3] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_340(&Global_54076, &bLocal_4 + 1120[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_629))
					{
						Function_340(&bLocal_629, &bLocal_4 + 1120[1], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
						}
					}
					else
					{
						bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_340(&bLocal_627, &bLocal_4 + 1120[2], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
					{
						Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1120[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
						}
					}
				}
			}
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				Function_312(&Local_1100 + 88, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 80))
			{
				Function_312(&Local_1100 + 80, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 72))
			{
				Function_312(&Local_1100 + 72, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&bLocal_1096))
			{
				SQUAD_GOALS_CLEAR(&bLocal_1096);
				Function_311(&bLocal_1096);
				Function_310(&bLocal_1096);
				Function_312(&bLocal_1096, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 64);
				Function_311(&Local_1100 + 64);
				Function_310(&Local_1100 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 640, -1.0f);
			}
			Function_399(&(Local_717[015]), &bLocal_627, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[115]), &bLocal_4 + 232, "Rancher", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[215]), &Local_1100 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[315]), &Local_1100 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[415]), &Local_1100 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[515]), &Local_1100 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_398(&(Local_717[615]));
			Function_398(&(Local_717[715]));
			Function_394(&(Local_717[215]), 2);
			Function_394(&(Local_717[315]), 2);
			Function_394(&(Local_717[415]), 2);
			Function_394(&(Local_717[515]), 2);
			if (HUD_IS_FADED())
			{
				Function_235(&iLocal_631);
				iLocal_623 = 5;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			Function_249(iLocal_622);
			Function_386(StackVal, Function_249(iLocal_622), iLocal_622, Global_46736[2], Function_252(iLocal_622), 2);
			bLocal_980 = Function_385();
			PRINTINT(bLocal_980);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&bLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_629)) && SQUAD_IS_VALID(&Local_1100 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1))))
			{
				if (((Function_384(&bLocal_627, 1, 0x41700000) && Function_384(&bLocal_4 + 240[02], 1, 0x41700000)) && Function_384(&bLocal_629, 1, 0x41700000)) && Function_384(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_627) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_235(&iLocal_631);
						iLocal_623 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_340(&Global_54076, &bLocal_4 + 1120[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_629))
							{
								Function_340(&bLocal_629, &bLocal_4 + 1120[1], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
								}
							}
							else
							{
								bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_627))
						{
							Function_340(&bLocal_627, &bLocal_4 + 1120[2], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
							{
								Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1120[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
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
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				Function_383();
				Function_382();
				Function_310(&Local_1100 + 64);
				Function_380(&Local_1100 + 64, &bLocal_4 + 504);
				Function_379(&Local_1100 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_235(&iLocal_631);
			iLocal_623 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_982))
				{
					if (IS_OBJECT_VALID(&Local_1100 + 8))
					{
						uLocal_982 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &bLocal_528, "RANCH08_CAMERA_FOCUS", &Local_1100 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_982))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_982, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1488, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
				if (!IS_OBJECT_VALID(&fLocal_984))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1488, &Local_1075);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1488, &Local_1078);
					fLocal_984 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&fLocal_984))
					{
					}
				}
				if (iLocal_643[3] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1100 + 64))
					{
						Function_383();
						Function_382();
						Function_310(&Local_1100 + 64);
						Function_380(&Local_1100 + 64, &bLocal_4 + 504);
						Function_379(&Local_1100 + 64, 2, 1);
					}
				}
				bLocal_1017 = false;
				if (SQUAD_IS_VALID(&Local_1100 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 72);
					Function_311(&Local_1100 + 72);
				}
				*(&Local_1100 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1100 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 80);
					Function_311(&Local_1100 + 80);
				}
				*(&Local_1100 + 16) = &bLocal_4 + 1488;
				GET_OBJECT_POSITION(&bLocal_4 + 1488, &uLocal_1072);
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 88);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 648, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
				Function_378();
				Function_235(&iLocal_631);
				iLocal_623 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				UI_SHOW("RacePosition");
				Function_235(&iLocal_1036);
				Function_377("ranch08_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				Function_235(&fLocal_639);
				iLocal_623 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					DESTROY_OBJECT(&fLocal_984);
				}
				if (bLocal_1016)
				{
					Function_373();
				}
			}
			else
			{
				Function_366(&fLocal_639, 135.0f, 315.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1488, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
				if (!IS_OBJECT_VALID(&fLocal_984))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1488, &Local_1075);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1488, &Local_1078);
					fLocal_984 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&fLocal_984))
					{
					}
				}
				if (!bLocal_1016)
				{
					Function_254();
					Function_365();
				}
				Function_362(&Local_1100, 5, &iLocal_1036, 25.0f);
			}
			if (bLocal_1017)
			{
			}
			if (IS_VOLUME_VALID(&bLocal_4 + 728))
			{
				if (IS_OBJECT_VALID(&Local_1100 + 8) && IS_ACTOR_VALID(&bLocal_627))
				{
					if (IS_OBJECT_IN_VOLUME(&Local_1100 + 8, &bLocal_4 + 728) || IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 728))
					{
						iLocal_1021 = 1;
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					DESTROY_OBJECT(&fLocal_984);
				}
				if (bLocal_1016)
				{
					Function_373();
				}
			}
			else
			{
				Function_366(&fLocal_639, 135.0f, 315.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1488, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
				if (!IS_OBJECT_VALID(&fLocal_984))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1488, &Local_1075);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1488, &Local_1078);
					fLocal_984 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&fLocal_984))
					{
					}
				}
				if (!bLocal_1016)
				{
					Function_254();
					Function_365();
				}
				if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 88)) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1100 + 64) != 0 && SQUAD_GET_SIZE(&Local_1100 + 72) != 0) && SQUAD_GET_SIZE(&Local_1100 + 80) != 0)
					{
						if (IS_BLIP_VALID(&iLocal_1090))
						{
							REMOVE_BLIP(&iLocal_1090);
						}
						if (IS_OBJECT_VALID(&fLocal_984))
						{
							DESTROY_OBJECT(&fLocal_984);
						}
						Function_361(&Local_1100 + 64);
						Function_361(&Local_1100 + 72);
						Function_361(&Local_1100 + 80);
						Function_361(&Local_1100 + 88);
						UI_HIDE("RacePosition");
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 106;
					}
				}
				if (Local_1100.f_148)
				{
					if (Function_307(&Local_1100 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1100 + 16)) && IS_OBJECT_VALID(&Local_1100 + 8))
						{
							if (Function_358(&bLocal_627, &Local_1100 + 16, 25.0f))
							{
								if (Function_358(&Global_54076, &Local_1100 + 16, 25.0f) && Function_358(&Global_54076, &Local_1100 + 8, 25.0f))
								{
									LOG_ERROR("RANCH08 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH08 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 80)) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 88))
									{
										Function_312(&Local_1100 + 64, &Local_1100 + 88);
										Function_312(&Local_1100 + 80, &Local_1100 + 88);
										Function_312(&Local_1100 + 72, &Local_1100 + 88);
									}
									Function_235(&Local_1100 + 132);
								}
							}
						}
					}
				}
			}
			if (bLocal_1017)
			{
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				bLocal_970 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 88);
				Function_234(Local_530, bLocal_970);
			}
			PRINTINT(bLocal_970);
			PRINTNL();
			bLocal_971 = (21 - bLocal_970);
			PRINTINT(bLocal_971);
			PRINTNL();
			bLocal_974 = Local_1100.f_120;
			Global_53524.f_176 = bLocal_974;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_975 = Local_1100.f_124;
			Global_53524.f_180 = bLocal_975;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			iLocal_643[4] = 1;
			Function_235(&iLocal_631);
			iLocal_622 = 101;
			iLocal_623 = 0;
			break;
	}
	return;
}

bool Function_358(bool bParam0, var uParam1, float fParam2) //Position: 0x118F4 / 71924
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_360(&bParam0);
			Function_359(&uParam1);
			if (VDIST(Function_360(&bParam0), Function_359(&uParam1)) >= fParam2)
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

struct<8> Function_359(int iParam0) //Position: 0x11A12 / 72210
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

struct<8> Function_360(int iParam0) //Position: 0x11A80 / 72320
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

void Function_361(int iParam0) //Position: 0x11AEC / 72428
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_362(int iParam0, int iParam1, int iParam2, float fParam3) //Position: 0x11B40 / 72512
{
	float fVar0;
	
	if (Function_307(&iParam2) <= fParam3)
	{
		if (IS_OBJECT_VALID(&iParam0 + 8))
		{
			if (SQUAD_IS_VALID(&iParam0 + 64))
			{
				if (SQUAD_IS_VALID(&iParam0 + 72))
				{
					if (SQUAD_IS_VALID(&iParam0 + 80))
					{
						if (((SQUAD_GET_SIZE(&iParam0 + 72) > iParam1 && !SQUAD_GET_SIZE(&iParam0 + 72) > 0) && SQUAD_GET_SIZE(&iParam0 + 80) > iParam1) && !SQUAD_GET_SIZE(&iParam0 + 80) > 0)
						{
							fVar0 = Function_363(&iParam0 + 64, &iParam0 + 8, &Global_54076);
							if (IS_ACTOR_VALID(&fVar0))
							{
								if (!GET_TASK_STATUS(&fVar0, 10) != 1)
								{
									bLocal_967 = TASK_SEQUENCE_OPEN();
									TASK_WANDER(false, 5.0f);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&fVar0, bLocal_967);
									TASK_SEQUENCE_RELEASE(bLocal_967, 1);
									TASK_PRIORITY_SET(&fVar0, true);
									iLocal_1019 = 1;
								}
							}
							Function_235(&iParam2);
						}
					}
				}
			}
		}
	}
}

int Function_363(var uParam0, var uParam1, int iParam2) //Position: 0x11C22 / 72738
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (IS_ACTOR_VALID(&iParam2))
			{
				bVar1 = 4294967295;
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
				{
					if (bVar0 >= 4294967295)
					{
						iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
					}
					if (IS_ACTOR_VALID(&iVar2))
					{
						fVar3 = Function_364(&uParam1, &iVar2);
						fVar5 = (Function_364(&iParam2, &iVar2) / 1,75f);
						if (bVar1 > 0 || (fVar3 + fVar5) < (fVar4 + fVar6))
						{
							fVar4 = fVar3;
							fVar6 = fVar5;
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
	}
	return "";
}

float Function_364(int iParam0, int iParam1) //Position: 0x11CCE / 72910
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_359(&iParam0);
			Var0 = Function_359(&iParam0);
			Function_359(&iParam1);
			Var2 = Function_359(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_365() //Position: 0x11D6B / 73067
{
	bLocal_1016 = true;
	if (iLocal_622 == 1)
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 22.0f, 6.0f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	}
	else
	{
		_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 22.0f, 6.0f, 1);
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	}
	UI_SHOW("RacePosition");
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	return;
}

int Function_366(struct<2> Param0, float fParam2, int iParam3, float fParam4, char* cParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x11E20 / 73248
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_358(&Global_54076, &iParam3, fParam2))
	{
		Function_243(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_358(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_372(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_377(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_371(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_370(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_370(&iParam9, 0, 15, 1, &iParam3);
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
	if (Function_372(1))
	{
		Function_369(1);
		if (!Function_368())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_367();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_370(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_370(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_367() //Position: 0x11FC9 / 73673
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

bool Function_368() //Position: 0x11FF7 / 73719
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

void Function_369(bool bParam0) //Position: 0x1203E / 73790
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

void Function_370(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x120A5 / 73893
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

void Function_371(bool bParam0) //Position: 0x12160 / 74080
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

bool Function_372(bool bParam0) //Position: 0x121C7 / 74183
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

void Function_373() //Position: 0x12211 / 74257
{
	var uVar0;
	var uVar1;
	
	bLocal_1016 = false;
	_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1100 + 64, &Local_1100 + 96, &Global_54076);
	if (IS_OBJECT_VALID(&Local_1100 + 8))
	{
		uVar0 = GET_BLIP_ON_OBJECT(&Local_1100 + 8);
		if (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
		}
	}
	if (IS_OBJECT_VALID(&Local_1100))
	{
		uVar1 = GET_BLIP_ON_OBJECT(&Local_1100);
		if (IS_BLIP_VALID(&uVar1))
		{
			REMOVE_BLIP(&uVar1);
		}
	}
	Function_361(&Local_1100 + 64);
	Function_361(&Local_1100 + 72);
	Function_361(&Local_1100 + 80);
	Function_361(&Local_1100 + 88);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	return;
}

bool Function_374(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x122C0 / 74432
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_372(16))
			{
				if (&bParam7)
				{
					Function_254();
				}
				if (!Function_376())
				{
					Function_377(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_371(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_243(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_372(8))
		{
			if (&bParam7)
			{
				Function_254();
			}
			if (!Function_376())
			{
				Function_377(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_371(8);
			}
			if (IS_LAYOUTREF_VALID(&bParam8))
			{
				Function_370(&bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_370(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&bParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_372(8))
	{
		Function_369(8);
		if (!Function_368())
		{
			Function_375();
			Function_367();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&bParam8))
			{
				Function_370(&bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_370(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_375() //Position: 0x12436 / 74806
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_376() //Position: 0x12442 / 74818
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_377(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1244F / 74831
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
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_378() //Position: 0x124E4 / 74980
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_roundAll", "Ranch08_roundAll", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_379(var uParam0, bool bParam1, int iParam2) //Position: 0x1252D / 75053
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

void Function_380(var uParam0, int[] iParam1) //Position: 0x12575 / 75125
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_381(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_381(bool bParam0, int iParam1) //Position: 0x125BE / 75198
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

void Function_382() //Position: 0x1261C / 75292
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_383() //Position: 0x12647 / 75335
{
	Function_311(&Local_1100 + 64);
	SQUAD_GOALS_CLEAR(&Local_1100 + 64);
	(&Local_1100 + 96) = UNK_0x48588CCB(&Local_1100 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1100 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1100 + 64, &Local_1100 + 96);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_627);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1100 + 56);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_627, &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_627, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_4 + 192[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[02], &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_4 + 192[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_4 + 192[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[12], &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_4 + 192[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	bLocal_1016 = true;
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	return;
}

bool Function_384(bool bParam0, bool bParam1, float fParam2) //Position: 0x12819 / 75801
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

bool Function_385() //Position: 0x128BB / 75963
{
	return Global_53524.f_68;
}

void Function_386(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x128C6 / 75974
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
	if (bParam2 != Global_53524.f_48 && !Function_393())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_392(0);
	Function_391();
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
		Function_389(bParam2);
	}
	Function_388(uParam3, iVar0, iVar1);
	Function_387();
}

void Function_387() //Position: 0x1296F / 76143
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

void Function_388(int iParam0, bool bParam1, bool bParam2) //Position: 0x129B0 / 76208
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

void Function_389(bool bParam0) //Position: 0x12B19 / 76569
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_390() };
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

struct<16> Function_390() //Position: 0x12CB1 / 76977
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

void Function_391() //Position: 0x12CF7 / 77047
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_392(bool bParam0) //Position: 0x12D1B / 77083
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

bool Function_393() //Position: 0x12D4A / 77130
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_394(int iParam0, int iParam1) //Position: 0x12D65 / 77157
{
	if (iParam1 != 100000000)
	{
		Function_397(&iParam0, iParam1);
	}
	else
	{
		Function_395(&iParam0, 1);
	}
	return;
}

void Function_395(struct<69> Param0) //Position: 0x12D87 / 77191
{
	Param0.f_68 = 0;
	Function_396(&Param0, 2, &bParam1);
	Function_396(&Param0, 4, &bParam1);
	Function_396(&Param0, 8, &bParam1);
	Function_396(&Param0, 16, &bParam1);
	Function_396(&Param0, 32, &bParam1);
	Function_396(&Param0, 64, &bParam1);
	Function_396(&Param0, 128, &bParam1);
	Function_396(&Param0, 256, &bParam1);
	Function_396(&Param0, 512, &bParam1);
	Function_396(&Param0, 1024, &bParam1);
	return;
}

void Function_396(int iParam0, int iParam1, bool bParam2) //Position: 0x12E02 / 77314
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

void Function_397(int iParam0, bool bParam1) //Position: 0x12E41 / 77377
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

void Function_398(struct<69> Param0) //Position: 0x12E6E / 77422
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

int Function_399(struct<69> Param0) //Position: 0x12F2E / 77614
{
	if (!Function_403(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_402(&Param0, &bParam2))
	{
		return 0;
	}
	Function_401(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_400(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_400(var uParam0, int iParam1, int iParam2) //Position: 0x12F74 / 77684
{
	if (iParam1 != 100000000)
	{
		Function_396(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_395(&uParam0, &iParam2);
	}
	return;
}

void Function_401(struct<65> Param0) //Position: 0x12F9B / 77723
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_402(int iParam0, char* cParam1) //Position: 0x12FA8 / 77736
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

bool Function_403(struct<61> Param0) //Position: 0x13035 / 77877
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&bParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &bParam1;
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

bool Function_404(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x131E8 / 78312
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
		Function_409(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_408())
		{
			return "";
		}
	}
	if (!Function_406())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_213();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_250(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_250(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_250(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_250(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_405(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_405(StackVal, Var4, 0, 1, 1);
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
		Function_328(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_405(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13545 / 79173
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

bool Function_406() //Position: 0x135E5 / 79333
{
	if (Function_407() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_407() //Position: 0x135FB / 79355
{
	return Global_21369.f_244;
}

bool Function_408() //Position: 0x13606 / 79366
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_409(var uParam0, bool bParam1, bool bParam2) //Position: 0x13626 / 79398
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

void Function_410() //Position: 0x13655 / 79445
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1120[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 1120[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 1120[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 1120[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 1120[7], 1, 1, 1);
			}
			Function_324(&bLocal_4 + 232, &bLocal_4 + 312);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_411();
	return;
}

void Function_411() //Position: 0x13826 / 79910
{
	Function_322();
	*(&Local_1100 + 24) = &bLocal_4 + 2040;
	if (!SQUAD_IS_VALID(&Local_1100 + 64))
	{
		*(&Local_1100 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 64);
			Function_319(&Local_1100, &bLocal_528, &bLocal_4 + 1480, &iLocal_1056, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&Local_1100 + 64, 0);
			Function_318(&Local_1100 + 64, 1);
			Function_317(&Local_1100 + 64, 0);
			Function_316(&Local_1100 + 64, 0);
			Function_315(&Local_1100 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 640, -1.0f);
		}
	}
	return;
}

void Function_412() //Position: 0x13906 / 80134
{
	if (Function_307(&iLocal_1040) <= 0.0f)
	{
		switch (iLocal_979)
		{
			case 0x00000000:
				iLocal_979++;
				break;
			
			case 0x00000001:
				if (iLocal_623 > 8)
				{
					iLocal_979++;
				}
				break;
			
			case 0x00000002:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_414();
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_979++;
				}
				break;
			
			case 0x00000003:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1022)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979++;
					}
				}
				break;
			
			case 0x00000004:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!Function_140())
				{
					if (Function_307(&iLocal_635) <= 5.0f)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_4 + 192[02], 8.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&bLocal_4 + 192[02], "SPEECH_Herd_Objective_Home", &Global_54076, 1, 0, 0, 0, 0);
						}
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_4 + 192[12], 8.0f))
						{
							Function_413();
						}
						Function_235(&iLocal_635);
					}
				}
				break;
			
			case 0x00000006:
				iLocal_979++;
				break;
		}
		Function_235(&iLocal_1040);
	}
	return;
}

void Function_413() //Position: 0x13A58 / 80472
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch08_meetLaborer", "Ranch08_meetLaborer", false, 2, 1, 0, 1);
		Function_288(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_414() //Position: 0x13AA7 / 80551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_weatherWorse_v2", "Ranch08_weatherWorse_v2", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4) //Position: 0x13AFE / 80638
{
	if (Function_307(&iLocal_1044) <= 3.0f)
	{
		Function_424();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1027)
				{
					iLocal_1027 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_getsOffHorse", "Ranch08_getsOffHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
				}
				else if (Function_307(&iLocal_635) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_NoOnHorse", "Ranch08_NoOnHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
					Function_235(&iLocal_635);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1027)
				{
					iLocal_1027 = 0;
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_629, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_thrownOffHorse", "Ranch08_thrownOffHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_235(&iLocal_1044);
					}
				}
			}
			if (&bParam0)
			{
				if (!iLocal_1022)
				{
					if (!iLocal_1025)
					{
						if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1087))
						{
							if (VMAG(Local_1087) >= 0,15f)
							{
								iLocal_1025 = 1;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_JonNoHerd", "Ranch08_JonNoHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_235(&iLocal_1044);
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (iLocal_1025)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1087))
					{
						if (VMAG(Local_1087) <= (0,15f + 2.0f))
						{
							iLocal_1025 = 0;
						}
					}
				}
			}
			if (&bParam2)
			{
				Function_250(&Local_1100 + 16);
				if (!Function_423(StackVal, &Local_1100 + 64, Function_250(&Local_1100 + 16), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_WronDirec", "Ranch08_WronDirec", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 72) && SQUAD_IS_VALID(&Local_1100 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1100 + 80) <= 3 || SQUAD_GET_SIZE(&Local_1100 + 72) <= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_627))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_627, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_herdBad", "Ranch08_herdBad", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_235(&iLocal_1044);
							}
						}
					}
				}
			}
			if (&bParam1)
			{
				if (SQUAD_IS_VALID(&Local_1100 + 72) && SQUAD_IS_VALID(&Local_1100 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1100 + 72) != 0 && SQUAD_GET_SIZE(&Local_1100 + 80) != 0)
					{
						if (!Function_358(&Global_54076, &Local_1100 + 8, &fParam3) && !Function_420(&Global_54076, &bLocal_627, &fParam3))
						{
							if (!iLocal_1025)
							{
								if (!iLocal_1022)
								{
									if (iLocal_622 == 1)
									{
										uLocal_988 = &bLocal_4 + 2008;
									}
									else if (iLocal_622 == 2)
									{
										uLocal_988 = &bLocal_4 + 2024;
									}
									else if (iLocal_622 == 3)
									{
										uLocal_988 = &bLocal_4 + 2040;
									}
									else if (iLocal_622 == 4)
									{
										uLocal_988 = &bLocal_4 + 2040;
									}
									if (Function_419(&Global_54076, &bLocal_627, &uLocal_988))
									{
										iLocal_1022 = 1;
										ABORT_SCRIPTED_CONVERSATION(1);
										Function_418();
										Function_235(&iLocal_1044);
									}
									else
									{
										iLocal_1022 = 1;
										ABORT_SCRIPTED_CONVERSATION(1);
										Function_417();
										Function_235(&iLocal_1044);
									}
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_627, &fParam4) && Function_358(&Global_54076, &Local_1100 + 8, &fParam4))
			{
				if (&bParam1)
				{
					if (iLocal_1022)
					{
						iLocal_1022 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_416();
						Function_235(&iLocal_1044);
					}
				}
			}
		}
	}
}

void Function_416() //Position: 0x13F62 / 81762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_comesBack", "Ranch08_comesBack", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_417() //Position: 0x13FAD / 81837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_farAhead", "Ranch08_farAhead", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_418() //Position: 0x13FF6 / 81910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_farbehind", "Ranch08_farbehind", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_419(var uParam0, var uParam1, int iParam2) //Position: 0x14042 / 81986
{
	var uVar0;
	var uVar2;
	float fVar4;
	var uVar5;
	float fVar6;
	var uVar7;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (IS_OBJECT_VALID(&iParam2))
			{
				GET_OBJECT_POSITION(&uParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(&iParam2, &uVar0, &fVar4, &uVar5);
				GET_OBJECT_POSITION(&uParam1, &uVar2);
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

bool Function_420(var uParam0, bool bParam1, float fParam2) //Position: 0x140A1 / 82081
{
	float fVar0;
	
	fVar0 = Function_421(&uParam0, &bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_421(var uParam0, int iParam1) //Position: 0x140C0 / 82112
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_422(&uVar0, &uVar2);
	return iVar4;
}

var Function_422(struct<2> Param0) //Position: 0x140E1 / 82145
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_423(var uParam0, struct<2> Param1, float fParam3) //Position: 0x14100 / 82176
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

void Function_424() //Position: 0x1418C / 82316
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_627)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_430();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_GunBon", "Ranch08_GunBon", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
		else if (&iVar0 == &bLocal_4 + 240[02])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_429();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_PullBonHorse", "Ranch08_PullBonHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
		else if (&iVar0 != &bLocal_4 + 272[02] || &iVar0 != &bLocal_4 + 272[12])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_429();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_PullBonHorse", "Ranch08_PullBonHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
		else if ((Function_428(&iVar0, &Local_1100 + 64, 0) || Function_428(&iVar0, &Local_1100 + 80, 0)) || Function_428(&iVar0, &Local_1100 + 72, 0))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_427();
						Function_235(&iLocal_1044);
					}
					else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_LassosCow", "Ranch08_LassosCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_426();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_426();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_AssaultChar", "Ranch08_AssaultChar", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_425();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_426();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_426();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_GunChar", "Ranch08_GunChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_ShootRandom", "Ranch08_ShootRandom", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
				}
			}
		}
	}
	return;
}

void Function_425() //Position: 0x14600 / 83456
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootChar", "Ranch08_shootChar", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_426() //Position: 0x1464B / 83531
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_assaultChar", "Ranch08_assaultChar", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_427() //Position: 0x1469A / 83610
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootsCow", "Ranch08_shootsCow", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_428(int iParam0, int iParam1, bool bParam2) //Position: 0x146E5 / 83685
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

void Function_429() //Position: 0x1472D / 83757
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootBonHorse", "Ranch08_shootBonHorse", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x14780 / 83840
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_assaultBon", "Ranch08_assaultBon", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x147CD / 83917
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_shootBonnie", "Ranch08_shootBonnie", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_432(bool bParam0) //Position: 0x1481C / 83996
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

void Function_433() //Position: 0x14862 / 84066
{
	if (SQUAD_IS_VALID(&Local_1100 + 64))
	{
		switch (iLocal_981)
		{
			case 0x00000000:
				iLocal_981++;
				break;
			
			case 0x00000001:
				if (iLocal_1021)
				{
					iLocal_981++;
				}
				break;
			
			case 0x00000002:
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 30.0f, 0,85f, 1f, 1082130432);
				iLocal_981++;
				break;
			
			case 0x00000003:
				if (IS_VOLUME_VALID(&bLocal_4 + 736))
				{
					if (IS_OBJECT_VALID(&Local_1100 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1100 + 8, &bLocal_4 + 736) || IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 736))
						{
							iLocal_981++;
						}
					}
				}
				break;
			
			case 0x00000004:
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 30.0f, 0,85f, 2.0f, 2.0f);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1100 + 64, &Local_1100 + 96, 1, 0,25f, 0,25f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 0, 16, (4,5f - 0,5f));
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 20, 0,5f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 0, 20, (5.0f / 1,5f));
				iLocal_981++;
				break;
			
			case 0x00000005:
				iLocal_981++;
				break;
			}
	}
	return;
}

void Function_434() //Position: 0x149FB / 84475
{
	switch (iLocal_978)
	{
		case 0x00000000:
			iLocal_978++;
			break;
		
		case 0x00000001:
			if (iLocal_1021)
			{
				iLocal_978++;
			}
			break;
		
		case 0x00000002:
			if (!SQUAD_IS_VALID(&bLocal_4 + 360))
			{
				Function_323();
				if (SQUAD_IS_VALID(&bLocal_4 + 360))
				{
					Function_330(&bLocal_4 + 360, 0);
					SQUAD_SET_FACTION(&bLocal_4 + 360, 20);
					Function_327(&bLocal_4 + 360, 0, 0, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 360, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					if (IS_ACTOR_VALID(&bLocal_4 + 320[02]))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_4 + 320[02], &bLocal_4 + 1992, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_4 + 320[02], GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1992), "UseCase1", 4294967295, 1);
						TASK_PRIORITY_SET(&bLocal_4 + 320[02], 2);
					}
					if (IS_ACTOR_VALID(&bLocal_4 + 320[12]))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_4 + 320[12], &bLocal_4 + 1984, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_4 + 320[12], GET_GRINGO_FROM_OBJECT(&bLocal_4 + 1984), "UseCase1", 4294967295, 1);
						TASK_PRIORITY_SET(&bLocal_4 + 320[12], 2);
					}
				}
			}
			iLocal_978++;
			break;
		
		case 0x00000003:
			if (SQUAD_IS_VALID(&bLocal_4 + 360))
			{
				Function_399(&(Local_717[715]), &bLocal_4 + 232, "Rancher", 0, 0x5f5e100, 1);
				Function_400(&(Local_717[715]), 1024, 1);
			}
			iLocal_978++;
			break;
		
		case 0x00000004:
			iLocal_978++;
			break;
	}
	return;
}

void Function_435() //Position: 0x14BB2 / 84914
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		switch (iLocal_977)
		{
			case 0x00000000:
				iLocal_977++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[12], true);
				SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[12], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[12], true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &bLocal_4 + 2032, -2.0f, 1, 0);
				TASK_FACE_ACTOR(0, &bLocal_627, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				iLocal_977++;
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(&bLocal_4 + 688))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 192[12], &bLocal_4 + 688))
					{
						SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[12], 2);
						bLocal_967 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &bLocal_4 + 1568, 3,5f, 1);
						TASK_FACE_COORD(0, &bLocal_4 + 1640, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
						TASK_SEQUENCE_RELEASE(bLocal_967, 1);
						TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[12], &bLocal_4 + 792);
						iLocal_977++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_977++;
				break;
			}
	}
	return;
}

void Function_436() //Position: 0x14D0C / 85260
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		switch (iLocal_976)
		{
			case 0x00000000:
				iLocal_976++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[02], true);
				SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[02], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[02], true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &bLocal_4 + 2048, -2.0f, 1, 0);
				TASK_FACE_ACTOR(0, &bLocal_627, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				iLocal_976++;
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(&bLocal_4 + 688))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 192[02], &bLocal_4 + 688))
					{
						SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[02], 2);
						bLocal_967 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &bLocal_4 + 1544, 3,5f, 1);
						TASK_FACE_COORD(0, &bLocal_4 + 1640, 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
						TASK_SEQUENCE_RELEASE(bLocal_967, 1);
						TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[02], &bLocal_4 + 792);
						iLocal_976++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_976++;
				break;
			}
	}
	return;
}

void Function_437(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x14E66 / 85606
{
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		if (SQUAD_IS_VALID(&iParam0))
		{
			switch (iLocal_969)
			{
				case 0x00000000:
					iLocal_969++;
					break;
				
				case 0x00000001:
					CLEAR_ACTOR_MIN_SPEED(&bLocal_627);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_627);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_627);
					Function_439(3, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_627, true);
					SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_627, true);
					iLocal_969++;
					break;
				
				case 0x00000002:
					if (Function_307(&iParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(&iParam0))
						{
							if (SQUAD_GET_SIZE(&iParam0) > 2)
							{
								if (!bLocal_1017)
								{
									iLocal_1092 = Function_438(&iParam0, &Local_1100 + 8);
									if (IS_ACTOR_VALID(&iLocal_1092))
									{
										bLocal_1069 = Vector(0.0f, 0.0f, 0.0f);
										SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
										bLocal_967 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &iLocal_1092, &bLocal_1069, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
										TASK_SEQUENCE_RELEASE(bLocal_967, 1);
										TASK_PRIORITY_SET(&bLocal_627, true);
										bLocal_1017 = true;
									}
								}
								else if (!Function_428(&iLocal_1092, &iParam0, 0))
								{
									bLocal_1017 = false;
								}
							}
							else if (!GET_TASK_STATUS(&bLocal_627, 72) != 1)
							{
								SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
								bLocal_967 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &fParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
								TASK_SEQUENCE_RELEASE(bLocal_967, 1);
								TASK_PRIORITY_SET(&bLocal_627, true);
								bLocal_1017 = false;
							}
						}
						Function_235(&iParam1);
					}
					if (IS_VOLUME_VALID(&bLocal_4 + 776))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 776))
						{
							iLocal_969++;
						}
					}
					break;
				
				case 0x00000003:
					GET_OBJECT_POSITION(&bLocal_4 + 1200[14], &bLocal_1069);
					SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(0, &bLocal_4 + 1896, 4);
					TASK_FACE_COORD(0, &bLocal_1069, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_627, true);
					iLocal_969++;
					break;
				
				case 0x00000004:
					iLocal_969++;
					break;
			}
		}
	}
}

var Function_438(var uParam0, int iParam1) //Position: 0x15091 / 86161
{
	bool bVar0;
	bool bVar1;
	int iVar2;
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
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				}
				if (IS_ACTOR_VALID(&iVar2))
				{
					fVar3 = Function_364(&iParam1, &iVar2);
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

void Function_439(int iParam0, bool bParam1, bool bParam2) //Position: 0x15116 / 86294
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
						Function_231(&uVar1);
					}
				}
				Function_440(&uVar0);
			}
		}
	}
	return;
}

void Function_440(bool bParam0) //Position: 0x15225 / 86565
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

void Function_441(var uParam0) //Position: 0x15258 / 86616
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_LASSO_TARGET(&uParam0);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (GET_TASK_STATUS(&iVar0, 4294967295) == 1)
			{
				TASK_CLEAR(&iVar0);
			}
		}
	}
	return;
}

void Function_442(struct<149> Param0) //Position: 0x1528D / 86669
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
										if (!Function_358(&iVar1, &Param0 + 16, fVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(&iVar1);
											TASK_CLEAR(&iVar1);
											SQUAD_LEAVE(&iVar1);
											SQUAD_JOIN(&iVar1, &Param0 + 64);
											if (DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(&iVar1, "bRejoinInProgress");
											}
											uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
											if (IS_BLIP_VALID(&uVar2))
											{
												REMOVE_BLIP(&uVar2);
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
							if (Function_358(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_358(&iVar1, &Param0 + 16, fVar4))
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
									uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
									if (IS_BLIP_VALID(&uVar2))
									{
										REMOVE_BLIP(&uVar2);
									}
									if (DECOR_GET_BOOL(&iVar1, "bIsStraggler"))
									{
										Param0.f_124++;
										DECOR_REMOVE(&iVar1, "bIsStraggler");
									}
								}
							}
							if (!Param0.f_148)
							{
								if (Function_307(&Param0 + 132) <= &fParam1)
								{
									if (!Function_358(&iVar1, &Param0 + 8, fVar4))
									{
										if (DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
										{
											SQUAD_LEAVE(&iVar1);
											SQUAD_JOIN(&iVar1, &Param0 + 72);
											TASK_CLEAR(&iVar1);
											if (DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(&iVar1, "bRejoinInProgress");
											}
											uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
											if (!IS_BLIP_VALID(&uVar2))
											{
												uVar2 = ADD_BLIP_FOR_ACTOR(&iVar1, 424, 0, 2, 0);
												SET_BLIP_FLAG(&uVar2, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(&uVar2, 424);
												SET_BLIP_FLAG(&uVar2, 4096, 0);
											}
											if (!DECOR_GET_BOOL(&iVar1, "bIsStraggler"))
											{
												Param0.f_120++;
												DECOR_SET_BOOL(&iVar1, "bIsStraggler", true);
											}
										}
									}
									if (!DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
									{
										DECOR_SET_BOOL(&iVar1, "bRejoinInProgress", true);
									}
									Function_235(&Param0 + 132);
								}
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

void Function_443(struct<153> Param0) //Position: 0x15745 / 87877
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
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
						iVar5 = 1;
						iVar4 = 4;
						fVar8 = 7.0f;
						fVar6 = 12.0f;
						fVar7 = 14.0f;
					}
					else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
					{
						iVar5 = 3;
						iVar4 = 9;
						fVar8 = 12.0f;
						fVar6 = 20.0f;
						fVar7 = 22.0f;
					}
					else
					{
						iVar5 = 3;
						iVar4 = 9;
						fVar8 = 15.0f;
						fVar6 = 23.0f;
						fVar7 = 25.0f;
					}
					if (SQUAD_GET_SIZE(&Param0 + 64) < iVar5)
					{
						if (!Param0.f_148)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 64) - 1))
							{
								iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 64, bVar2);
								if (IS_ACTOR_VALID(&iVar0))
								{
									if (!Function_358(&iVar0, &Param0 + 16, fVar8))
									{
										if (Function_358(&iVar0, &Param0 + 16, fVar6))
										{
											PRINTINT(SQUAD_GET_SIZE(&Param0 + 64));
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
										else
										{
											SQUAD_LEAVE(&iVar0);
											SQUAD_JOIN(&iVar0, &Param0 + 72);
											iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
											if (!IS_BLIP_VALID(&iVar1))
											{
												iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 424, 0, 2, 0);
												SET_BLIP_FLAG(&iVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(&iVar1, 424);
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
										iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
										if (IS_BLIP_VALID(&iVar1))
										{
											REMOVE_BLIP(&iVar1);
										}
									}
								}
								if (SQUAD_GET_SIZE(&Param0 + 64) == 0)
								{
									Param0.f_148 = 1;
									Function_235(&Param0 + 132);
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
								if (!Function_358(&iVar0, &Param0 + 8, fVar7))
								{
									if ((SQUAD_GET_SIZE(&Param0 + 72) + SQUAD_GET_SIZE(&Param0 + 80)) < iVar4)
									{
										SQUAD_LEAVE(&iVar0);
										SQUAD_JOIN(&iVar0, &Param0 + 72);
										iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
										if (!IS_BLIP_VALID(&iVar1))
										{
											iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 424, 0, 2, 0);
											SET_BLIP_FLAG(&iVar1, 4096, 0);
										}
										if (!DECOR_GET_BOOL(&iVar0, "bIsStraggler"))
										{
											Param0.f_120++;
											DECOR_SET_BOOL(&iVar0, "bIsStraggler", true);
										}
									}
									else
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
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 72) - 1))
					{
						iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 72, bVar2);
						if (IS_ACTOR_VALID(&iVar0))
						{
							iVar1 = GET_BLIP_ON_ACTOR(&iVar0);
							if (!IS_BLIP_VALID(&iVar1))
							{
								iVar1 = ADD_BLIP_FOR_ACTOR(&iVar0, 424, 0, 2, 0);
								SET_BLIP_FLAG(&iVar1, 4096, 0);
							}
							else if (!GET_BLIP_ICON(&iVar1) != 424)
							{
								CHANGE_BLIP_ICON(&iVar1, 424);
								SET_BLIP_FLAG(&iVar1, 4096, 0);
							}
							if (IS_OBJECT_VALID(&Param0 + 8) && IS_OBJECT_VALID(&Param0 + 16))
							{
								if (Function_358(&iVar0, &Param0 + 8, fVar6) || Function_358(&iVar0, &Param0 + 16, fVar6))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_358(&iVar0, &Param0 + 8, fVar6))
									{
									}
									else if (Function_358(&iVar0, &Param0 + 16, fVar6))
									{
									}
									Param0.f_128 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &Param0 + 8, &Param0 + 44, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&iVar0, Param0.f_128);
									TASK_SEQUENCE_RELEASE(Param0.f_128, 1);
									TASK_PRIORITY_SET(&iVar0, true);
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
								else
								{
									bVar3 = false;
									while (bVar3 < (Param0.f_152 - 1))
									{
										if (IS_ACTOR_VALID(&Param0 + 152[bVar3]))
										{
											if (IS_ACTOR_PLAYER(&Param0 + 152[bVar3]))
											{
												if (Function_358(&iVar0, &Param0 + 152[bVar3], 7.0f))
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
											else if (Function_358(&iVar0, &Param0 + 152[bVar3], 15.0f))
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

void Function_444(struct<113> Param0) //Position: 0x15EB9 / 89785
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
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
								iVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
								if (IS_BLIP_VALID(&iVar4))
								{
									REMOVE_BLIP(&iVar4);
								}
								uVar5 = GET_BLIP_ON_OBJECT(&Param0);
								if (IS_BLIP_VALID(&uVar5))
								{
									REMOVE_BLIP(&uVar5);
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 88, &Var0);
								Function_446(&Param0 + 88);
								Var2 = Function_446(&Param0 + 88);
							}
							else if (SQUAD_GET_SIZE(&Param0 + 80) > 1)
							{
								iVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
								if (IS_BLIP_VALID(&iVar4))
								{
									REMOVE_BLIP(&iVar4);
								}
								uVar5 = GET_BLIP_ON_OBJECT(&Param0);
								if (IS_BLIP_VALID(&uVar5))
								{
									REMOVE_BLIP(&uVar5);
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 80, &Var0);
								Function_445(StackVal, Var0, &Param0 + 24);
								Var0 = Function_445(StackVal, Var0, &Param0 + 24);
								Function_446(&Param0 + 80);
								Var2 = Function_446(&Param0 + 80);
							}
							else if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
							{
								iVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
								if (IS_BLIP_VALID(&iVar4))
								{
									REMOVE_BLIP(&iVar4);
								}
								uVar5 = GET_BLIP_ON_OBJECT(&Param0);
								if (IS_BLIP_VALID(&uVar5))
								{
									REMOVE_BLIP(&uVar5);
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 72, &Var0);
								Function_445(StackVal, Var0, &Param0 + 24);
								Var0 = Function_445(StackVal, Var0, &Param0 + 24);
								Function_446(&Param0 + 72);
								Var2 = Function_446(&Param0 + 72);
							}
							else
							{
								iVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
								if (IS_BLIP_VALID(&iVar4))
								{
									REMOVE_BLIP(&iVar4);
								}
								uVar5 = GET_BLIP_ON_OBJECT(&Param0);
								if (IS_BLIP_VALID(&uVar5))
								{
									REMOVE_BLIP(&uVar5);
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
							SQUAD_COMPUTE_CENTROID(&Param0 + 64, &Var0);
							Function_446(&Param0 + 64);
							Var2 = Function_446(&Param0 + 64);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
							{
								Function_250(&Param0);
								if (!Function_74(StackVal, Function_250(&Param0)))
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
								Function_250(&Param0 + 8);
								if (!Function_74(StackVal, Function_250(&Param0 + 8)))
								{
									iVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(&iVar4))
									{
										SET_BLIP_SCALE(&iVar4, 1.0f);
										SET_BLIP_PRIORITY(&iVar4, 2);
									}
								}
							}
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

struct<8> Function_445(struct<2> Param0, int iParam2) //Position: 0x161DF / 90591
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

struct<8> Function_446(int iParam0) //Position: 0x1627F / 90751
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
		UNK_0x44986367(&Var4, Function_447(&uVar1));
		vVar6 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, vVar6, StackVal);
		bVar0++;
	}
	vVar6 = (vVar6.x / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	vVar6.f_4 = 0.0f;
	vVar6.f_8 = (vVar6.z / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	Var2.f_4 = UNK_0x9C40E671(&vVar6);
	return StackVal, Var2;
}

var Function_447(bool bParam0) //Position: 0x162F1 / 90865
{
	return GET_HEADING(&bParam0);
}

void Function_448() //Position: 0x162FD / 90877
{
	int iVar0;
	int iVar1;
	
	iVar0 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 80));
	iVar1 = (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 72) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 80));
	UI_SET_STRING("Race_Pos", INT_TO_STRING((iVar0 - iVar1)));
	if (iLocal_622 == 1)
	{
		UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(11));
	}
	else
	{
		UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(21));
	}
	UI_LABEL_SET_TEXT("RacePosition", "Race_Position_Format");
	UI_REFRESH("RacePosition");
	return;
}

void Function_449(struct<113> Param0) //Position: 0x163D4 / 91092
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar5;
	bool bVar6;
	
	if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
	{
		fVar5 = 80.0f;
		bVar6 = 100.0f;
	}
	else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
	{
		fVar5 = 80.0f;
		bVar6 = 100.0f;
	}
	else
	{
		fVar5 = 80.0f;
		bVar6 = 100.0f;
	}
	if (IS_OBJECT_VALID(&Param0 + 8))
	{
		if (SQUAD_IS_VALID(&Param0 + 72))
		{
			if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 72) - 1))
				{
					iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 72, bVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						GET_OBJECT_POSITION(&iVar1, &uVar3);
						if ((!Function_451(&iVar1, &Global_54076, bVar6) && !Function_358(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_450(&iVar1), &uVar3, 3212836864))
						{
							uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
							if (IS_BLIP_VALID(&uVar2))
							{
								REMOVE_BLIP(&uVar2);
							}
							SQUAD_LEAVE(&iVar1);
							DESTROY_ACTOR(&iVar1);
						}
					}
					bVar0++;
				}
			}
		}
		if (SQUAD_IS_VALID(&Param0 + 80))
		{
			if (SQUAD_GET_SIZE(&Param0 + 80) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
				{
					iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						GET_OBJECT_POSITION(&iVar1, &uVar3);
						if ((!Function_451(&iVar1, &Global_54076, bVar6) && !Function_358(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_450(&iVar1), &uVar3, 3212836864))
						{
							uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
							if (IS_BLIP_VALID(&uVar2))
							{
								REMOVE_BLIP(&uVar2);
							}
							SQUAD_LEAVE(&iVar1);
							DESTROY_ACTOR(&iVar1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

var Function_450(int iParam0) //Position: 0x1659C / 91548
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

bool Function_451(int iParam0, var uParam1, bool bParam2) //Position: 0x165B9 / 91577
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&iParam0, &uParam1, bParam2))
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

void Function_452(struct<149> Param0) //Position: 0x166CE / 91854
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
										if (!Function_358(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_358(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_358(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_307(&Param0 + 132) <= &fParam2)
							{
								Function_235(&Param0 + 132);
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

void Function_453(struct<153> Param0) //Position: 0x16A58 / 92760
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
									if (!Function_358(&iVar0, &Param0 + 16, fVar7))
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
									Function_235(&Param0 + 132);
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
								if (!Function_358(&iVar0, &Param0 + 8, fVar6))
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
								if (Function_358(&iVar0, &Param0 + 8, fVar5) || Function_358(&iVar0, &Param0 + 16, fVar5))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_358(&iVar0, &Param0 + 8, fVar5))
									{
									}
									else if (Function_358(&iVar0, &Param0 + 16, fVar5))
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
												if (Function_358(&iVar0, &Param0 + 152[bVar3], 7.0f))
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
											else if (Function_358(&iVar0, &Param0 + 152[bVar3], 15.0f))
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

void Function_454(struct<113> Param0) //Position: 0x17174 / 94580
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
								Function_445(StackVal, Var0, &Param0 + 24);
								Var0 = Function_445(StackVal, Var0, &Param0 + 24);
								Function_446(&Param0 + 64);
								Var2 = Function_446(&Param0 + 64);
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
								Function_445(StackVal, Var0, &Param0 + 24);
								Var0 = Function_445(StackVal, Var0, &Param0 + 24);
								Function_446(&Param0 + 72);
								Var2 = Function_446(&Param0 + 72);
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
								Function_250(&Param0);
								if (!Function_74(StackVal, Function_250(&Param0)))
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
								Function_250(&Param0 + 8);
								if (!Function_74(StackVal, Function_250(&Param0 + 8)))
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
							Function_446(&Param0 + 64);
							Var2 = Function_446(&Param0 + 64);
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

void Function_455(var uParam0, var uParam1, int iParam2) //Position: 0x174C1 / 95425
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

void Function_456(struct<125> Param0) //Position: 0x17533 / 95539
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
								if (Function_358(&iVar1, &Param0 + 16, fVar2))
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
								if (Function_358(&iVar1, &Param0 + 16, fVar2))
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
								if (Function_358(&iVar1, &Param0 + 16, fVar2))
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

void Function_457(var[] uParam0) //Position: 0x17794 / 96148
{
	switch (bLocal_968)
	{
		case 0x00000000:
			bLocal_968++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(&uLocal_660))
			{
				uLocal_660 = CREATE_WORLD_SECTOR(&bLocal_528, "hennigansRanch");
				if (IS_OBJECT_VALID(&uLocal_660))
				{
				}
			}
			bLocal_968++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(&uLocal_660))
			{
				if (!IS_DOOR_VALID(&(uParam0[0])))
				{
					uParam0[0] = Function_338("hennigansRanch", "stable02", 11);
				}
				if (!IS_DOOR_VALID(&(uParam0[1])))
				{
					uParam0[1] = Function_338("hennigansRanch", "stable02", 10);
				}
				if (!IS_DOOR_VALID(&(uParam0[2])))
				{
					uParam0[2] = Function_338("hennigansRanch", "barn01", 1);
				}
				if (!IS_DOOR_VALID(&(uParam0[3])))
				{
					uParam0[3] = Function_338("hennigansRanch", "barn01", 2);
				}
				if (!IS_DOOR_VALID(&(uParam0[4])))
				{
					uParam0[4] = Function_338("hennigansRanch", "barn02", 7);
				}
				if (!IS_DOOR_VALID(&(uParam0[5])))
				{
					uParam0[5] = Function_338("hennigansRanch", "barn02", 8);
				}
				bLocal_968++;
			}
			break;
		
		case 0x00000003:
			if (IS_DOOR_VALID(&(uParam0[0])) && IS_DOOR_VALID(&(uParam0[1])))
			{
				Function_161(&(uParam0[0]), 0);
				if (iLocal_622 == 4)
				{
					OPEN_DOOR_DIRECTION(&(uParam0[0]), 0);
				}
				else if (iLocal_622 == 101)
				{
					OPEN_DOOR_DIRECTION(&(uParam0[0]), 0);
				}
				else
				{
					CLOSE_DOOR_FAST(&(uParam0[0]));
				}
				Function_161(&(uParam0[1]), 0);
				if (iLocal_622 == 4)
				{
					OPEN_DOOR_DIRECTION(&(uParam0[1]), 1);
				}
				else if (iLocal_622 == 101)
				{
					OPEN_DOOR_DIRECTION(&(uParam0[1]), 1);
				}
				else
				{
					CLOSE_DOOR_FAST(&(uParam0[1]));
				}
				Function_161(&(uParam0[2]), 0);
				CLOSE_DOOR_FAST(&(uParam0[2]));
				Function_161(&(uParam0[3]), 0);
				CLOSE_DOOR_FAST(&(uParam0[2]));
				Function_161(&(uParam0[4]), 0);
				CLOSE_DOOR_FAST(&(uParam0[4]));
				Function_161(&(uParam0[5]), 0);
				CLOSE_DOOR_FAST(&(uParam0[5]));
				bLocal_968++;
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&uLocal_660))
			{
				DESTROY_OBJECT(&uLocal_660);
			}
			bLocal_968++;
			break;
	}
	return;
}

void Function_458() //Position: 0x17A80 / 96896
{
	if (((iLocal_623 < 5 && iLocal_623 > 105) && !iLocal_623 != 104) && !iLocal_623 != 103)
	{
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_456(&Local_1100);
		}
		if (bLocal_1016)
		{
			Function_444(&Local_1100);
			if (Function_307(&iLocal_1052) <= 0,1f)
			{
				Function_443(&Local_1100);
				Function_442(&Local_1100, 0x41700000);
			}
			if (iLocal_623 > 9)
			{
				if (Function_307(&iLocal_631) <= (3.0f * 8.0f))
				{
					if (Function_307(&iLocal_1028) <= 0,2f)
					{
						Function_471(&Local_1100);
						Function_235(&iLocal_1028);
					}
				}
			}
			Function_448();
		}
		Function_441(&Global_54076);
		Function_470(&Local_1100 + 72, &iLocal_1032, 3.0f, &bLocal_4 + 2040, -20.0f);
		Function_469();
		Function_468();
		if (iLocal_623 > 8)
		{
			if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 88)) && SQUAD_IS_VALID(&Local_1100 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1100 + 64) != bLocal_970 || ((SQUAD_GET_SIZE(&Local_1100 + 72) != 0 && SQUAD_GET_SIZE(&Local_1100 + 88) != 0) && SQUAD_GET_SIZE(&Local_1100 + 80) != 0))
				{
					UI_HIDE("RacePosition");
					Function_254();
					Function_235(&iLocal_631);
					iLocal_623 = 106;
				}
			}
		}
		Function_466();
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_235(&iLocal_1052);
		}
	}
	switch (iLocal_623)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_643[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_624 = Global_46736[2];
				if (!Function_343(bLocal_624))
				{
					Function_341(&Local_530);
				}
				Function_340(&Global_54076, &bLocal_4 + 1040[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_629, true);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				Function_235(&iLocal_631);
				iLocal_623 = 1;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_624) || bLocal_624 != 4294967295))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
			bLocal_968 = false;
			iLocal_969 = 0;
			iLocal_976 = 0;
			iLocal_977 = 0;
			iLocal_979 = 0;
			iLocal_662 = 0;
			iLocal_1022 = 0;
			iLocal_1024 = 0;
			iLocal_1025 = 0;
			iLocal_1027 = 0;
			Function_336(0,65f);
			Function_335(0,01f);
			Function_333(4, 1);
			if (Function_393())
			{
			}
			bLocal_970 = Function_332(Local_530);
			PRINTINT(bLocal_970);
			PRINTNL();
			bLocal_971 = (21 - bLocal_970);
			PRINTINT(bLocal_971);
			PRINTNL();
			bLocal_974 = Global_53524.f_176;
			bLocal_975 = Global_53524.f_180;
			PRINTINT(bLocal_974);
			PRINTNL();
			PRINTINT(bLocal_975);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Local_1100.f_120 = bLocal_974;
			Local_1100.f_124 = bLocal_975;
			Function_464();
			if (iLocal_643[2] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_340(&Global_54076, &bLocal_4 + 1040[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_629))
					{
						Function_340(&bLocal_629, &bLocal_4 + 1040[1], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
						}
					}
					else
					{
						bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_340(&bLocal_627, &bLocal_4 + 1040[2], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
					{
						Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1040[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
						}
					}
				}
			}
			if ((SQUAD_IS_VALID(&Local_1100 + 88) && SQUAD_IS_VALID(&Local_1100 + 80)) && SQUAD_IS_VALID(&Local_1100 + 72))
			{
				Function_361(&Local_1100 + 88);
				Function_361(&Local_1100 + 80);
				Function_361(&Local_1100 + 72);
				Function_463(&Local_1100 + 88, &Local_1100 + 64);
				Function_463(&Local_1100 + 80, &Local_1100 + 64);
				Function_463(&Local_1100 + 72, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 64);
				Function_310(&Local_1100 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 640, -1.0f);
			}
			Function_399(&(Local_717[015]), &bLocal_627, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[115]), &bLocal_4 + 232, "Rancher", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[215]), &Local_1100 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[315]), &Local_1100 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[415]), &Local_1100 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[515]), &Local_1100 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_398(&(Local_717[615]));
			Function_398(&(Local_717[715]));
			Function_394(&(Local_717[215]), 2);
			Function_394(&(Local_717[315]), 2);
			Function_394(&(Local_717[415]), 2);
			Function_394(&(Local_717[515]), 2);
			if (HUD_IS_FADED())
			{
				Function_235(&iLocal_631);
				iLocal_623 = 5;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			Function_249(iLocal_622);
			Function_386(StackVal, Function_249(iLocal_622), iLocal_622, Global_46736[2], Function_252(iLocal_622), 2);
			bLocal_980 = Function_385();
			PRINTINT(bLocal_980);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&bLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_629)) && SQUAD_IS_VALID(&Local_1100 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1))))
			{
				if (((Function_384(&bLocal_627, 1, 0x41700000) && Function_384(&bLocal_4 + 240[02], 1, 0x41700000)) && Function_384(&bLocal_629, 1, 0x41700000)) && Function_384(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_627) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_235(&iLocal_631);
						iLocal_623 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_340(&Global_54076, &bLocal_4 + 1040[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_629))
							{
								Function_340(&bLocal_629, &bLocal_4 + 1040[1], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
								}
							}
							else
							{
								bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_627))
						{
							Function_340(&bLocal_627, &bLocal_4 + 1040[2], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
							{
								Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1040[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
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
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				Function_383();
				Function_462();
				Function_310(&Local_1100 + 64);
				Function_380(&Local_1100 + 64, &bLocal_4 + 408);
				Function_379(&Local_1100 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_235(&iLocal_631);
			iLocal_623 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_982))
				{
					if (IS_OBJECT_VALID(&Local_1100 + 8))
					{
						uLocal_982 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &bLocal_528, "RANCH08_CAMERA_FOCUS", &Local_1100 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_982))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_982, 0);
						}
					}
				}
				if (iLocal_643[2] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1100 + 64))
					{
						Function_383();
						Function_462();
						Function_310(&Local_1100 + 64);
						Function_380(&Local_1100 + 64, &bLocal_4 + 408);
						Function_379(&Local_1100 + 64, 2, 1);
					}
				}
				bLocal_1017 = false;
				if (SQUAD_IS_VALID(&Local_1100 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 72);
					Function_311(&Local_1100 + 72);
				}
				*(&Local_1100 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1100 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 80);
					Function_311(&Local_1100 + 80);
				}
				*(&Local_1100 + 16) = &bLocal_4 + 1488;
				GET_OBJECT_POSITION(&bLocal_4 + 1488, &uLocal_1072);
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 88);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_1072, 7.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 648, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
				if (bLocal_970 == 21)
				{
					Function_461();
				}
				else
				{
					Function_460();
				}
				Function_235(&iLocal_631);
				iLocal_623 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_459();
				Function_235(&iLocal_631);
				iLocal_623 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_307(&iLocal_631) <= 2,5f)
			{
				UI_SHOW("RacePosition");
				Function_377("ranch08_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					DESTROY_OBJECT(&fLocal_984);
				}
				if (bLocal_1016)
				{
					Function_373();
				}
			}
			else
			{
				if (bLocal_1017)
				{
					Function_366(&fLocal_639, 245.0f, 395.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_366(&fLocal_639, 135.0f, 315.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!bLocal_1016)
				{
					Function_254();
					Function_365();
				}
			}
			if (Function_307(&iLocal_631) <= (2,5f * 8.0f))
			{
				if ((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1100 + 64) <= bLocal_970)
					{
						if (SQUAD_GET_SIZE(&Local_1100 + 80) == 0)
						{
							if (SQUAD_GET_SIZE(&Local_1100 + 72) <= 0 && SQUAD_GET_SIZE(&Local_1100 + 72) > 3)
							{
								Function_254();
								Function_235(&iLocal_631);
								iLocal_623 = 10;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (SQUAD_GET_SIZE(&Local_1100 + 72) == 1)
				{
					Function_377("ranch08_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_377("ranch08_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				Function_235(&fLocal_639);
				iLocal_623 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					DESTROY_OBJECT(&fLocal_984);
				}
				if (bLocal_1016)
				{
					Function_373();
				}
			}
			else
			{
				Function_366(&fLocal_639, 245.0f, 395.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				if (!bLocal_1016)
				{
					Function_254();
					Function_365();
				}
			}
			if ((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1100 + 64) == bLocal_970)
				{
					if (SQUAD_GET_SIZE(&Local_1100 + 72) != 0 && SQUAD_GET_SIZE(&Local_1100 + 80) != 0)
					{
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 9;
					}
				}
			}
			if (Function_307(&iLocal_635) <= 45.0f)
			{
				Function_254();
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				iLocal_623 = 9;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					bLocal_970 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 64);
					Function_234(Local_530, bLocal_970);
				}
				PRINTINT(bLocal_970);
				PRINTNL();
				bLocal_971 = (21 - bLocal_970);
				PRINTINT(bLocal_971);
				PRINTNL();
				bLocal_974 = Local_1100.f_120;
				Global_53524.f_176 = bLocal_974;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_975 = Local_1100.f_124;
				Global_53524.f_180 = bLocal_975;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				iLocal_643[3] = 1;
				Function_235(&iLocal_631);
				iLocal_622 = 4;
				iLocal_623 = 0;
			}
			break;
	}
	return;
}

void Function_459() //Position: 0x18886 / 100486
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_RndUp", "Ranch08_RndUp", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x188C9 / 100553
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_saveSome", "Ranch08_saveSome", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x18912 / 100626
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_saveAll", "Ranch08_saveAll", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x18959 / 100697
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_463(bool bParam0, var uParam1) //Position: 0x18984 / 100740
{
	var uVar0;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		if (SQUAD_IS_VALID(&uParam1))
		{
			while (SQUAD_GET_SIZE(&bParam0) >= 0)
			{
				uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, false);
				if (IS_ACTOR_VALID(&uVar0))
				{
					SQUAD_LEAVE(&uVar0);
					SQUAD_JOIN(&uVar0, &uParam1);
				}
			}
		}
	}
	return;
}

void Function_464() //Position: 0x189D1 / 100817
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 1040[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 1040[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 1040[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 1040[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 1040[7], 1, 1, 1);
			}
			Function_324(&bLocal_4 + 232, &bLocal_4 + 312);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_465();
	return;
}

void Function_465() //Position: 0x18BA2 / 101282
{
	Function_322();
	*(&Local_1100 + 24) = &bLocal_4 + 2040;
	if (!SQUAD_IS_VALID(&Local_1100 + 64))
	{
		*(&Local_1100 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 64);
			Function_319(&Local_1100, &bLocal_528, &bLocal_4 + 1480, &iLocal_1056, 2, 4,5f, 8,5f, 1,5f, 1);
			Function_330(&Local_1100 + 64, 0);
			Function_318(&Local_1100 + 64, 1);
			Function_317(&Local_1100 + 64, 0);
			Function_316(&Local_1100 + 64, 0);
			Function_315(&Local_1100 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 640, -1.0f);
		}
	}
	return;
}

void Function_466() //Position: 0x18C86 / 101510
{
	if (Function_307(&iLocal_1040) <= 0.0f)
	{
		switch (iLocal_979)
		{
			case 0x00000000:
				iLocal_979++;
				break;
			
			case 0x00000001:
				if (iLocal_623 > 9)
				{
					iLocal_979++;
				}
				break;
			
			case 0x00000002:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_467();
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_979++;
				}
				break;
			
			case 0x00000003:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1022)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979++;
					}
				}
				break;
			
			case 0x00000004:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000006:
				iLocal_979++;
				break;
		}
		Function_235(&iLocal_1040);
	}
	return;
}

void Function_467() //Position: 0x18D5E / 101726
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_noHelpStrag", "Ranch08_noHelpStrag", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_468() //Position: 0x18DAD / 101805
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		switch (iLocal_977)
		{
			case 0x00000000:
				iLocal_977++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[12], true);
				SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[12], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[12], true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &bLocal_4 + 2032, -2.0f, 1, 0);
				TASK_FACE_ACTOR(0, &bLocal_627, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				iLocal_977++;
				break;
			
			case 0x00000002:
				iLocal_977++;
				break;
			}
	}
	return;
}

void Function_469() //Position: 0x18E6F / 101999
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		switch (iLocal_976)
		{
			case 0x00000000:
				iLocal_976++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[02], true);
				SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[02], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[02], true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &bLocal_4 + 2048, -2.0f, 1, 0);
				TASK_FACE_ACTOR(0, &bLocal_627, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				iLocal_976++;
				break;
			
			case 0x00000002:
				iLocal_976++;
				break;
			}
	}
	return;
}

void Function_470(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x18F31 / 102193
{
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		if (SQUAD_IS_VALID(&iParam0))
		{
			switch (iLocal_969)
			{
				case 0x00000000:
					iLocal_969++;
					break;
				
				case 0x00000001:
					CLEAR_ACTOR_MIN_SPEED(&bLocal_627);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_627);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_627);
					Function_439(3, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_627, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_627, true);
					iLocal_969++;
					break;
				
				case 0x00000002:
					if (Function_307(&iParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(&iParam0))
						{
							if (SQUAD_GET_SIZE(&iParam0) > 2)
							{
								if (!bLocal_1017)
								{
									iLocal_1092 = Function_438(&iParam0, &Local_1100 + 8);
									if (IS_ACTOR_VALID(&iLocal_1092))
									{
										bLocal_1069 = Vector(0.0f, 0.0f, 0.0f);
										SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
										bLocal_967 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &iLocal_1092, &bLocal_1069, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
										TASK_SEQUENCE_RELEASE(bLocal_967, 1);
										TASK_PRIORITY_SET(&bLocal_627, true);
										bLocal_1017 = true;
									}
								}
								else if (!Function_428(&iLocal_1092, &iParam0, 0))
								{
									bLocal_1017 = false;
								}
							}
							else if (!GET_TASK_STATUS(&bLocal_627, 72) != 1)
							{
								SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
								bLocal_967 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &fParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
								TASK_SEQUENCE_RELEASE(bLocal_967, 1);
								TASK_PRIORITY_SET(&bLocal_627, true);
								bLocal_1017 = false;
							}
						}
						Function_235(&iParam1);
					}
					break;
				
				case 0x00000003:
					iLocal_969++;
					break;
			}
		}
	}
}

void Function_471(struct<113> Param0) //Position: 0x190CB / 102603
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar5;
	bool bVar6;
	
	if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
	{
		fVar5 = (80.0f + 60.0f);
		bVar6 = (100.0f + 60.0f);
	}
	else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
	{
		fVar5 = (80.0f + 60.0f);
		bVar6 = (100.0f + 60.0f);
	}
	else
	{
		fVar5 = (80.0f + 60.0f);
		bVar6 = (100.0f + 60.0f);
	}
	if (IS_OBJECT_VALID(&Param0 + 8))
	{
		if (SQUAD_IS_VALID(&Param0 + 72))
		{
			if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 72) - 1))
				{
					iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 72, bVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						GET_OBJECT_POSITION(&iVar1, &uVar3);
						if ((!Function_451(&iVar1, &Global_54076, bVar6) && !Function_358(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_450(&iVar1), &uVar3, 3212836864))
						{
							uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
							if (IS_BLIP_VALID(&uVar2))
							{
								REMOVE_BLIP(&uVar2);
							}
							SQUAD_LEAVE(&iVar1);
							DESTROY_ACTOR(&iVar1);
						}
					}
					bVar0++;
				}
			}
		}
		if (SQUAD_IS_VALID(&Param0 + 80))
		{
			if (SQUAD_GET_SIZE(&Param0 + 80) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
				{
					iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						GET_OBJECT_POSITION(&iVar1, &uVar3);
						if ((!Function_451(&iVar1, &Global_54076, bVar6) && !Function_358(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_450(&iVar1), &uVar3, 3212836864))
						{
							uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
							if (IS_BLIP_VALID(&uVar2))
							{
								REMOVE_BLIP(&uVar2);
							}
							SQUAD_LEAVE(&iVar1);
							DESTROY_ACTOR(&iVar1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_472() //Position: 0x192B7 / 103095
{
	Function_356(&bLocal_528);
	if (((iLocal_623 < 5 && iLocal_623 > 105) && !iLocal_623 != 104) && !iLocal_623 != 103)
	{
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_506(&Local_1100 + 64, &bLocal_4 + 664);
		}
		if (iLocal_623 < 9)
		{
			if (bLocal_1016)
			{
				Function_505(&Local_1100);
				if (iLocal_623 > 8)
				{
					if (Function_307(&iLocal_1052) <= 0,1f)
					{
						Function_504(&Local_1100, 2,5f);
						Function_502(&Local_1100, 30.0f);
					}
				}
				if (Function_307(&iLocal_1028) <= 0,2f)
				{
					Function_501(&Local_1100);
					Function_235(&iLocal_1028);
				}
				Function_448();
			}
		}
		else if (iLocal_623 > 10)
		{
			Function_505(&Local_1100);
		}
		Function_500();
		Function_499();
		Function_498();
		Function_441(&Global_54076);
		Function_497();
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_235(&iLocal_1052);
		}
	}
	switch (iLocal_623)
	{
		case 0x00000000:
			Function_352(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			if (IS_ACTOR_VALID(&bLocal_629))
			{
				TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_629, true);
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_627, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_643[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_624 = Global_46736[2];
				if (!Function_343(bLocal_624))
				{
					Function_341(&Local_530);
				}
				Function_340(&Global_54076, &bLocal_4 + 944[0], 1, 1, 1);
				Function_235(&iLocal_631);
				iLocal_623 = 1;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_624) || bLocal_624 != 4294967295))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("nHERDING_2", 0, 4294967295, 4294967295);
			bLocal_968 = false;
			iLocal_969 = 0;
			iLocal_976 = 0;
			iLocal_977 = 0;
			iLocal_973 = 0;
			iLocal_979 = 0;
			iLocal_1022 = 0;
			iLocal_662 = 0;
			iLocal_1023 = 0;
			iLocal_1024 = 0;
			iLocal_1025 = 0;
			iLocal_1027 = 0;
			Function_336(0,5f);
			Function_335(0,007f);
			Function_333(4, 1);
			if (Function_393())
			{
			}
			if (iLocal_622 != Global_53524.f_48 && !Function_393())
			{
				iLocal_1024 = 1;
				bLocal_970 = (Function_332(Local_530) - 10);
				PRINTINT(bLocal_970);
				PRINTNL();
				bLocal_971 = (11 - bLocal_970);
				PRINTINT(bLocal_971);
				PRINTNL();
			}
			else
			{
				iLocal_1024 = 0;
				bLocal_970 = Function_332(Local_530);
				PRINTINT(bLocal_970);
				PRINTNL();
				bLocal_971 = (11 - bLocal_970);
				PRINTINT(bLocal_971);
				PRINTNL();
			}
			bLocal_974 = Global_53524.f_176;
			bLocal_975 = Global_53524.f_180;
			PRINTINT(bLocal_974);
			PRINTNL();
			PRINTINT(bLocal_975);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Local_1100.f_120 = bLocal_974;
			Local_1100.f_124 = bLocal_975;
			Function_494();
			if (iLocal_643[1] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_340(&Global_54076, &bLocal_4 + 944[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_629))
					{
						Function_340(&bLocal_629, &bLocal_4 + 944[4], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
						}
					}
					else
					{
						bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_340(&bLocal_627, &bLocal_4 + 944[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
					{
						Function_340(&bLocal_4 + 240[02], &bLocal_4 + 944[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
						}
					}
				}
			}
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				Function_312(&Local_1100 + 88, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 80))
			{
				Function_312(&Local_1100 + 80, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 72))
			{
				Function_312(&Local_1100 + 72, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 64);
				Function_311(&Local_1100 + 64);
				Function_310(&Local_1100 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 624, -1.0f);
			}
			if (SQUAD_IS_VALID(&bLocal_1096))
			{
				SQUAD_GOALS_CLEAR(&bLocal_1096);
				Function_311(&bLocal_1096);
				Function_310(&bLocal_1096);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 632, -1.0f);
				Function_493(&bLocal_1096, &bLocal_4 + 1336, 2);
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1096, false)))
				{
					TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1096, false), -1.0f, 0, 0);
					TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1096, false), true);
				}
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1096, true)))
				{
					TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1096, true), -1.0f, 0, 0);
					TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1096, true), true);
				}
			}
			Function_399(&(Local_717[015]), &bLocal_627, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[115]), &bLocal_4 + 232, "Rancher", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[215]), &Local_1100 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[315]), &Local_1100 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[415]), &Local_1100 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[515]), &Local_1100 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_398(&(Local_717[615]));
			Function_398(&(Local_717[715]));
			Function_394(&(Local_717[215]), 2);
			Function_394(&(Local_717[315]), 2);
			Function_394(&(Local_717[415]), 2);
			Function_394(&(Local_717[515]), 2);
			if (Function_491(StackVal, StackVal, StackVal, StackVal, StackVal, Local_530, iLocal_622))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 3;
			}
			else
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_292(&Global_54076, &bLocal_4 + 944[5], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_292(&bLocal_627, &bLocal_4 + 944[3], 1, 1, 1);
					TASK_CLEAR(&bLocal_627);
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					TASK_CLEAR(&bLocal_629);
					TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_629, true);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					TASK_CLEAR(&bLocal_4 + 240[02]);
					TASK_STAND_STILL(&bLocal_4 + 240[02], -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_4 + 240[02], true);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 64);
					Function_311(&Local_1100 + 64);
					Function_310(&Local_1100 + 64);
					Function_490(&Local_1100 + 64, &bLocal_4 + 1712, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &bLocal_4 + 2024, 3, 0, 0, 1, false);
				}
				if (SQUAD_IS_VALID(&bLocal_1096))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1096);
					Function_311(&bLocal_1096);
					Function_310(&bLocal_1096);
					Function_490(&bLocal_1096, &bLocal_4 + 1720, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &bLocal_4 + 2024, 3, 0, 0, 1, false);
				}
				Function_235(&iLocal_631);
				iLocal_623 = 4;
			}
			if (iLocal_1024)
			{
				Function_249(iLocal_622);
				Function_386(StackVal, Function_249(iLocal_622), iLocal_622, Global_46736[2], Function_252(iLocal_622), 2);
				bLocal_980 = Function_385();
				PRINTINT(bLocal_980);
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_479())
			{
				Function_235(&iLocal_631);
				iLocal_623 = 4;
			}
			break;
		
		case 0x00000004:
			PRINTINT(bLocal_980);
			PRINTNL();
			if (iLocal_1024)
			{
			}
			else
			{
				PRINTINT(bLocal_970);
				PRINTNL();
				bLocal_971 = (11 - bLocal_970);
				PRINTINT(bLocal_971);
				PRINTNL();
				bLocal_970 += 10;
				Function_234(Local_530, bLocal_970);
				PRINTINT(bLocal_970);
				PRINTNL();
				bLocal_971 = (21 - bLocal_970);
				PRINTINT(bLocal_971);
				PRINTNL();
			}
			Function_335(0,01f);
			if (!iLocal_1023)
			{
				AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				iLocal_1023 = 1;
			}
			if (SQUAD_IS_VALID(&bLocal_1096))
			{
				SQUAD_GOALS_CLEAR(&bLocal_1096);
				Function_311(&bLocal_1096);
				Function_312(&bLocal_1096, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 64);
				Function_311(&Local_1100 + 64);
				Local_1100.f_112 = 21;
				Function_478();
				Function_477();
				Function_310(&Local_1100 + 64);
				Function_380(&Local_1100 + 64, &bLocal_4 + 456);
				Function_379(&Local_1100 + 64, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1100 + 64, &Local_1100 + 96, 1, 0,01f, 0,01f);
				Function_476(&Local_1100 + 64, 424, 0,9f, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_627))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				TASK_CLEAR(&Global_54076);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				TASK_CLEAR(&bLocal_4 + 240[02]);
			}
			if (HUD_IS_FADED())
			{
				Function_235(&iLocal_631);
				iLocal_623 = 5;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			if (!iLocal_1024)
			{
				Function_249(iLocal_622);
				Function_386(StackVal, Function_249(iLocal_622), iLocal_622, Global_46736[2], Function_252(iLocal_622), 2);
				bLocal_980 = Function_385();
				PRINTINT(bLocal_980);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&bLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_629)) && SQUAD_IS_VALID(&Local_1100 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1))))
			{
				if (((Function_384(&bLocal_627, 1, 0x41700000) && Function_384(&bLocal_4 + 240[02], 1, 0x41700000)) && Function_384(&bLocal_629, 1, 0x41700000)) && Function_384(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_627) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_235(&iLocal_631);
						iLocal_623 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_340(&Global_54076, &bLocal_4 + 944[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_629))
							{
								Function_340(&bLocal_629, &bLocal_4 + 944[4], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
								}
							}
							else
							{
								bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_627))
						{
							Function_340(&bLocal_627, &bLocal_4 + 944[1], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
							{
								Function_340(&bLocal_4 + 240[02], &bLocal_4 + 944[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
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
			CAMERA_RESET(0);
			Function_235(&iLocal_631);
			iLocal_623 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				STREAMING_LOAD_BOUNDS(*(&bLocal_4 + 1920), 300.0f, 1);
				GET_OBJECT_POSITION(&bLocal_4 + 1480, &uLocal_1066);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
					SET_FORCED_LOOK_ENABLE(&Global_54076, 0);
					UNK_0xFF36BAED(&Global_54076, &uLocal_1066, 1, 7.0f);
				}
				if (!IS_OBJECT_VALID(&uLocal_982))
				{
					if (IS_OBJECT_VALID(&Local_1100 + 8))
					{
						uLocal_982 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &bLocal_528, "RANCH08_CAMERA_FOCUS", &Local_1100 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_982))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_982, 0);
						}
					}
				}
				bLocal_1017 = false;
				if (SQUAD_IS_VALID(&Local_1100 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 72);
					Function_311(&Local_1100 + 72);
				}
				*(&Local_1100 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1100 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 80);
					Function_311(&Local_1100 + 80);
				}
				*(&Local_1100 + 16) = &bLocal_4 + 1480;
				GET_OBJECT_POSITION(&bLocal_4 + 1480, &uLocal_1072);
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 88);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_1072, 15.0f, 1);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 640, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
				Function_475();
				Function_235(&iLocal_631);
				iLocal_623 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				UI_SHOW("RacePosition");
				Function_377("ranch08_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 9;
			}
			break;
		
		case 0x00000009:
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				if (SQUAD_GET_SIZE(&Local_1100 + 64) > 5)
				{
					if (!iLocal_1004[2])
					{
						if (!Function_140())
						{
							iLocal_1004[2] = 1;
							Function_474();
						}
					}
				}
			}
			if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 88)) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80))
			{
				if ((SQUAD_GET_SIZE(&Local_1100 + 64) != 0 && SQUAD_GET_SIZE(&Local_1100 + 72) != 0) && SQUAD_GET_SIZE(&Local_1100 + 80) != 0)
				{
					if (IS_BLIP_VALID(&iLocal_1090))
					{
						REMOVE_BLIP(&iLocal_1090);
					}
					if (IS_OBJECT_VALID(&fLocal_984))
					{
						DESTROY_OBJECT(&fLocal_984);
					}
					Function_361(&Local_1100 + 64);
					Function_361(&Local_1100 + 72);
					Function_361(&Local_1100 + 80);
					Function_361(&Local_1100 + 88);
					UI_HIDE("RacePosition");
					Function_254();
					Function_235(&iLocal_631);
					iLocal_623 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
			GET_OBJECT_POSITION(&bLocal_4 + 1480, &uLocal_1066);
			if (IS_ACTOR_VALID(&Global_54076))
			{
				SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
				SET_FORCED_LOOK_ENABLE(&Global_54076, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				Function_439(3, 1, 1);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				Function_312(&Local_1100 + 88, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 80))
			{
				Function_312(&Local_1100 + 80, &Local_1100 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1100 + 72))
			{
				Function_312(&Local_1100 + 72, &Local_1100 + 64);
			}
			Function_235(&iLocal_631);
			iLocal_623 = 11;
			break;
		
		case 0x0000000B:
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				Function_383();
				Function_462();
				Function_310(&Local_1100 + 64);
				Function_380(&Local_1100 + 64, &bLocal_4 + 504);
				Function_379(&Local_1100 + 64, 2, 1);
			}
			bLocal_1017 = false;
			if (SQUAD_IS_VALID(&Local_1100 + 72))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 72);
				Function_311(&Local_1100 + 72);
			}
			*(&Local_1100 + 44) = Vector(0.0f, 0.0f, 0.0f);
			if (SQUAD_IS_VALID(&Local_1100 + 80))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 80);
				Function_311(&Local_1100 + 80);
			}
			*(&Local_1100 + 16) = &bLocal_4 + 1480;
			GET_OBJECT_POSITION(&bLocal_4 + 1480, &uLocal_1072);
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				SQUAD_GOALS_CLEAR(&Local_1100 + 88);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uLocal_1072, 7.0f, 4);
				TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 640, -1.0f);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 88, false, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
			}
			Function_377("RanchersDaughter_return", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_235(&iLocal_631);
			Function_235(&iLocal_635);
			Function_235(&fLocal_639);
			iLocal_623 = 12;
			break;
		
		case 0x0000000C:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
				{
					Function_439(3, 0, 1);
				}
			}
			else if (Function_473(&fLocal_639, 110.0f, 250.0f, &bLocal_627, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_658, 0, 0, 0, 325, 1))
			{
			}
			else if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
				{
					Function_439(3, 1, 1);
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (Function_420(&Global_54076, &bLocal_627, (6.0f * 3.0f)))
				{
					if (IS_BLIP_VALID(&iLocal_1090))
					{
						REMOVE_BLIP(&iLocal_1090);
					}
					if (IS_OBJECT_VALID(&fLocal_984))
					{
						DESTROY_OBJECT(&fLocal_984);
					}
					Function_439(3, 0, 1);
					Function_254();
					Function_235(&iLocal_631);
					iLocal_623 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			if (((SQUAD_IS_VALID(&Local_1100 + 88) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80)) && SQUAD_IS_VALID(&Local_1100 + 88))
			{
				bLocal_970 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 88));
				Function_234(Local_530, bLocal_970);
			}
			PRINTINT(bLocal_970);
			PRINTNL();
			bLocal_971 = (21 - bLocal_970);
			PRINTINT(bLocal_971);
			PRINTNL();
			bLocal_974 = Local_1100.f_120;
			Global_53524.f_176 = bLocal_974;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_975 = Local_1100.f_124;
			Global_53524.f_180 = bLocal_975;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			iLocal_643[2] = 1;
			Function_235(&iLocal_631);
			iLocal_622 = 3;
			iLocal_623 = 0;
			break;
	}
	return;
}

bool Function_473(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1A4C8 / 107720
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_451(&Global_54076, &iParam3, iParam2))
	{
		Function_243(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_451(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_372(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_377(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_371(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_370(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_370(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_372(2))
	{
		Function_369(2);
		if (!Function_368())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_367();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_231(&iParam3);
				Function_440(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_370(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_370(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_474() //Position: 0x1A686 / 108166
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_runCliffFaster", "Ranch08_runCliffFaster", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_475() //Position: 0x1A6DB / 108251
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_runCliff", "Ranch08_runCliff", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476(var uParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x1A724 / 108324
{
	bool bVar0;
	float fVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		fVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&fVar1))
		{
			uVar2 = ADD_BLIP_FOR_ACTOR(&fVar1, bParam1, 0, 2, 0);
			if (IS_BLIP_VALID(&uVar2))
			{
				SET_BLIP_SCALE(&uVar2, fParam2);
				if (&bParam3)
				{
					SET_BLIP_FLAG(&uVar2, 4096, 1);
				}
				else
				{
					SET_BLIP_FLAG(&uVar2, 4096, 0);
				}
			}
		}
		bVar0++;
	}
}

void Function_477() //Position: 0x1A795 / 108437
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 100.0f, 1.0f, 1.0f, 20.0f);
	return;
}

void Function_478() //Position: 0x1A7BC / 108476
{
	Function_311(&Local_1100 + 64);
	SQUAD_GOALS_CLEAR(&Local_1100 + 64);
	*(&Local_1100 + 96) = UNK_0x48588CCB(&Local_1100 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1100 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1100 + 64, &Local_1100 + 96);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 0, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 1, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 2, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 8, 1,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 15, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 16, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 21, 8,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 20, 12,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 24, 360.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 25, 1.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 17, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 18, 50.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 26, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 28, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 1, 29, 15.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 0, 21, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1100 + 64, &Local_1100 + 96, 0, 20, 3.0f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 7.0f, 60.0f, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 12.0f, 5.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 0);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 0, 0);
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_627);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1100 + 56);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_627, &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_627, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_4 + 192[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[02], &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_4 + 192[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_4 + 192[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[12], &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_4 + 192[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	bLocal_1016 = true;
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	return;
}

bool Function_479() //Position: 0x1AB02 / 109314
{
	var uVar0;
	
	if (Function_309(&iLocal_610 + 4))
	{
		if (Function_307(&iLocal_610 + 4) <= 2.0f)
		{
			Function_305(&iLocal_610, 1, 0);
		}
	}
	switch (iLocal_610)
	{
		case 0x000003E8:
			Function_301(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &bLocal_627);
				*(&iLocal_610 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				*(&iLocal_610 + 24) = Function_483(&bLocal_4, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_610 + 24))
				{
				}
				else
				{
					LOG_ERROR("ranch08_cutscene03 - Failed to create ranch08_cutscene03_cutscene");
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				Function_340(&Global_54076, &bLocal_4 + 944[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					Function_340(&bLocal_629, &bLocal_4 + 944[4], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
					}
				}
				else
				{
					bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				Function_340(&bLocal_627, &bLocal_4 + 944[1], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					Function_340(&bLocal_4 + 240[02], &bLocal_4 + 944[3], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
					{
						ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
					}
				}
			}
			iLocal_610 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_610 + 24), 0))
			{
				Function_294(&Global_54076, 1, 1);
				Function_294(&bLocal_627, 1, 1);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 368[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 368[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&bLocal_4 + 368[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bLocal_4 + 368[1]);
				Function_290(&iLocal_610 + 4);
				iLocal_610 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iLocal_610 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_307(&iLocal_610 + 4) < 2.0f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
					Function_235(&iLocal_610 + 4);
					iLocal_1148 = 6;
					iLocal_1149 = 6;
					iLocal_610 = 1004;
				}
			}
			else
			{
				Function_235(&iLocal_610 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_481() && Function_480())
			{
				Function_235(&iLocal_610 + 4);
				iLocal_610 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				HUD_TIMER_DISPLAY(0);
				Function_294(&Global_54076, 0, 1);
				Function_294(&bLocal_627, 0, 1);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
					TASK_CLEAR(&Global_54076);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					TASK_CLEAR(&bLocal_4 + 240[02]);
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_283(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_610 + 24))
				{
					DESTROY_OBJECT(&iLocal_610 + 24);
				}
				iLocal_610 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_292(&Global_54076, &bLocal_4 + 944[5], 1, 1, 1);
					TASK_CLEAR(&Global_54076);
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_292(&bLocal_627, &bLocal_4 + 944[3], 1, 1, 1);
					TASK_CLEAR(&bLocal_627);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_627, 1);
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					TASK_CLEAR(&bLocal_629);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_629, 0);
					TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_629, true);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					TASK_CLEAR(&bLocal_4 + 240[02]);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_4 + 240[02], 0);
					TASK_STAND_STILL(&bLocal_4 + 240[02], -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_4 + 240[02], true);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 64);
					Function_311(&Local_1100 + 64);
					Function_310(&Local_1100 + 64);
					Function_490(&Local_1100 + 64, &bLocal_4 + 1712, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &bLocal_4 + 2024, 3, 0, 0, 1, false);
				}
				if (SQUAD_IS_VALID(&bLocal_1096))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1096);
					Function_311(&bLocal_1096);
					Function_310(&bLocal_1096);
					Function_490(&bLocal_1096, &bLocal_4 + 1720, 3, 4,5f, 1,5f, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &bLocal_4 + 2024, 3, 0, 0, 1, false);
				}
				iLocal_610 = 1104;
			}
			break;
	}
	return 0;
}

int Function_480() //Position: 0x1B018 / 110616
{
	if (iLocal_1149 > 45)
	{
		if (Function_307(&iLocal_610 + 4) < (8.0f + 0,5f))
		{
			if (iLocal_973 <= 2)
			{
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					if (!IS_ACTION_NODE_PLAYING(&bLocal_4 + 240[02], "horse_Main/Melee/RearUp"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_4 + 240[02], "horse_Main/Melee/RearUp");
						iLocal_973++;
					}
				}
			}
		}
	}
	switch (iLocal_1149)
	{
		case 0x00000006:
			if (Function_307(&iLocal_610 + 4) < 0,25f)
			{
				iLocal_1149 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_307(&iLocal_610 + 4) < 0,75f)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(0, &bLocal_4 + 1728, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(0, &bLocal_4 + 1776, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				iLocal_1149 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_307(&iLocal_610 + 4) < 4.0f)
			{
				iLocal_1149 = 33;
			}
			break;
		
		case 0x00000021:
			if (Function_307(&iLocal_610 + 4) < 5.0f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				iLocal_1149 = 34;
			}
			break;
		
		case 0x00000022:
			if (Function_307(&iLocal_610 + 4) < 5,25f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				iLocal_1149 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_307(&iLocal_610 + 4) < 6,5f)
			{
				AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				iLocal_1023 = 1;
				bLocal_986 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&bLocal_4, "FXLIGHTNING01", "script_lightning_strike", *(&bLocal_4 + 1496));
				if (IS_OBJECT_VALID(&bLocal_986))
				{
					Function_250(&bLocal_986);
					PRINTVECTOR(Function_250(&bLocal_986));
					PRINTNL();
					PRINTVECTOR(*(&bLocal_4 + 1496));
					PRINTNL();
				}
				UNK_0x6745191B(&bLocal_986, *(&bLocal_4 + 1496 + 12));
				TRIGGER_LIGHTNING_SEQUENCE();
				iLocal_1149 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_307(&iLocal_610 + 4) < 6,75f)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
					SET_FORCED_LOOK_ENABLE(&Global_54076, 0);
				}
				if (SQUAD_IS_VALID(&Local_1100 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 64);
					Function_311(&Local_1100 + 64);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1664, 6.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					Function_381(&Local_1100 + 64, &bLocal_4 + 696);
					Function_381(&Local_1100 + 64, &bLocal_4 + 704);
				}
				if (SQUAD_IS_VALID(&bLocal_1096))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1096);
					Function_311(&bLocal_1096);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1688, 6.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					Function_381(&bLocal_1096, &bLocal_4 + 696);
					Function_381(&bLocal_1096, &bLocal_4 + 704);
				}
				iLocal_1149 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_307(&iLocal_610 + 4) < 8.0f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				iLocal_1149 = 46;
			}
			break;
		
		case 0x0000002E:
			if (Function_307(&iLocal_610 + 4) < 8,75f)
			{
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_629, "horse_Main/Melee/RearUp");
				}
				iLocal_1149 = 47;
			}
			break;
		
		case 0x0000002F:
			if (Function_307(&iLocal_610 + 4) < 11.0f)
			{
				if (SQUAD_IS_VALID(&Local_1100 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 64);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1664, 6.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
				if (SQUAD_IS_VALID(&bLocal_1096))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1096);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &bLocal_4 + 1688, 6.0f, 3);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
				iLocal_1149 = 48;
			}
			break;
		
		case 0x00000030:
			if (Function_307(&iLocal_610 + 4) < 11.0f)
			{
				TRIGGER_CLOUD_LIGHTNING_SEQUENCE();
				TRIGGER_LIGHTNING_SEQUENCE();
				GET_OBJECT_POSITION(&bLocal_4 + 1472, &uLocal_1066);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, false);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Global_54076, true);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(0, &bLocal_4 + 1752, 4);
					TASK_FACE_COORD(0, &uLocal_1066, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				iLocal_1149 = 49;
			}
			break;
		
		case 0x00000031:
			if (Function_307(&iLocal_610 + 4) < 12,5f)
			{
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_627, true);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(0, &bLocal_4 + 1824, 2);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				iLocal_1149 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_307(&iLocal_610 + 4) < 15,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_481() //Position: 0x1B5AF / 112047
{
	switch (iLocal_1148)
	{
		case 0x00000006:
			if (Function_307(&iLocal_610 + 4) < 0.0f)
			{
				iLocal_1148 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_307(&iLocal_610 + 4) < 3.0f)
			{
				iLocal_1148 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_307(&iLocal_610 + 4) < 8,5f)
			{
				iLocal_1148 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_307(&iLocal_610 + 4) < 11.0f)
			{
				Function_482();
				iLocal_1148 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_307(&iLocal_610 + 4) < 13,5f)
			{
				iLocal_1148 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_307(&iLocal_610 + 4) < 15,5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_482() //Position: 0x1B670 / 112240
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_CS02_AA", "Ranch08_CS02_AA", false, 1, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_483(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B6B7 / 112311
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 5, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ranch08_cutscene03", 5, 1);
	}
	Function_484(&uVar0, &uParam2);
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

void Function_484(var uParam0, int iParam1) //Position: 0x1B746 / 112454
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_489(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_488(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_487(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_486(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_485(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 5,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 1, 4, 3.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 8.0f, 3, 0);
	return;
}

void Function_485(int iParam0) //Position: 0x1B7F4 / 112628
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-622,6017f, 103,3779f, 2617,707f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,427958f, 1,349987f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_486(int iParam0) //Position: 0x1B869 / 112745
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-586,4291f, 101,2953f, 2599,123f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,000773f, 2,547348f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_487(int iParam0) //Position: 0x1B8D6 / 112854
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-584,093f, 100,1727f, 2619,721f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,082793f, 1,036669f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_488(int iParam0) //Position: 0x1B943 / 112963
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-619,7073f, 102,0563f, 2618,376f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,341236f, 1,340245f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_489(bool bParam0) //Position: 0x1B9B0 / 113072
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-588,0919f, 100,837f, 2617,283f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,095627f, 1,042151f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

void Function_490(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x1BA1D / 113181
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<5> Var7;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_250(&bParam1);
			Var3 = Function_250(&bParam1);
			Function_321(&bParam1);
			Var7 = Function_321(&bParam1);
			Var5 = Var3;
			Var5.f_4 = (StackVal + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
			{
				uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						Var5 = Var3;
						Var5.f_8 = (StackVal + fParam3);
					}
					if (bParam5)
					{
						Var7.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_293(StackVal, StackVal, &uVar2, Var5, 1, 1, 1);
					iVar1++;
					Var5 = (Var5 + fParam3);
				}
				bVar0++;
			}
		}
	}
}

bool Function_491(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x1BAD7 / 113367
{
	if (Function_492(&iParam0) == iParam6 || Function_393())
	{
		return 1;
	}
	return 0;
}

int Function_492(int iParam0) //Position: 0x1BAF6 / 113398
{
	if (Function_342(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_493(var uParam0, bool bParam1, int iParam2) //Position: 0x1BB0F / 113423
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	struct<5> Var5;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECTSET_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (iParam2 - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &bParam1);
					if (IS_OBJECT_VALID(&bVar2))
					{
						Function_250(&bVar2);
						Var3 = Function_250(&bVar2);
						Function_321(&bVar2);
						Var5 = Function_321(&bVar2);
						if (!Function_74(StackVal, Var3))
						{
							if (!Function_74(StackVal, Var5))
							{
								TELEPORT_ACTOR_WITH_HEADING(StackVal, &uVar1, Var3, 1, 1, true);
							}
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_494() //Position: 0x1BBAF / 113583
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 944[2], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 944[9], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 944[8], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 944[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 944[7], 1, 1, 1);
			}
			Function_324(&bLocal_4 + 232, &bLocal_4 + 312);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_495();
	return;
}

void Function_495() //Position: 0x1BD82 / 114050
{
	Function_322();
	*(&Local_1100 + 24) = &bLocal_4 + 2024;
	if (!SQUAD_IS_VALID(&Local_1100 + 64))
	{
		*(&Local_1100 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 64);
			Function_319(&Local_1100, &bLocal_528, &bLocal_4 + 1456, &iLocal_1056, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&Local_1100 + 64, 0);
			Function_318(&Local_1100 + 64, 1);
			Function_317(&Local_1100 + 64, 0);
			Function_316(&Local_1100 + 64, 0);
			Function_315(&Local_1100 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 624, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1096))
	{
		bLocal_1096 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(&bLocal_1096))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1096);
			Function_496(&bLocal_1096, &bLocal_528, &bLocal_4 + 1520, "RANCH08_COWS02", &iLocal_1056, 10, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&bLocal_1096, 0);
			Function_318(&bLocal_1096, 1);
			Function_317(&bLocal_1096, 0);
			Function_316(&bLocal_1096, 0);
			Function_315(&bLocal_1096, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 632, -1.0f);
		}
	}
	return;
}

void Function_496(int iParam0, int iParam1, bool bParam2, char* cParam3) //Position: 0x1BF2C / 114476
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	char* cVar18[64];
	var uVar34;
	char* cVar35[64];
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&bParam2))
		{
			Function_250(&bParam2);
			Var36 = Function_250(&bParam2);
			Function_321(&bParam2);
			Var38 = Function_321(&bParam2);
			PRINTVECTOR(Var36);
			PRINTNL();
			bVar46 = RAND_FLOAT_RANGE(fParam7, bParam8);
			Var40 = Var36;
			Var40 = (Var40 - ((IntToFloat(iParam6) * bVar46) / 2.0f));
			Var40.f_4 = (StackVal + fParam9);
			Var40.f_8 = (StackVal - ((IntToFloat((iParam5 / iParam6)) * bVar46) / 2.0f));
			PRINTVECTOR(Var40);
			PRINTNL();
			Var42 = Var40;
			Var44 = Var38;
			PRINTVECTOR(Var42);
			PRINTNL();
			bVar0 = false;
			while (bVar0 < (iParam5 - 1))
			{
				strcpy(&cVar2, &cParam3, 64);
				strcpy(&cVar18, "_", 64);
				stradd(&cVar2, &cVar18, 64);
				cVar35 = INT_TO_STRING(bVar0);
				stradd(&cVar2, &cVar35, 64);
				if (iVar1 > iParam6)
				{
					iVar1 = 0;
					Var42 = Var40;
					bVar46 = RAND_FLOAT_RANGE(fParam7, bParam8);
					Var42.f_8 = (StackVal + bVar46);
				}
				if (bParam10)
				{
					Var44.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
				}
				bVar47 = RAND_INT_RANGE(false, (iParam4 - 1));
				bVar48 = iParam4[bVar47];
				if (Function_320(bVar48))
				{
					uVar34 = CREATE_ACTOR_IN_LAYOUT(&iParam1, &cVar2, bVar48, Var42, Var44);
					if (IS_ACTOR_VALID(&uVar34))
					{
						SNAP_OBJECT_TO_GROUND(&uVar34, 20.0f, false, 1092616192);
						SQUAD_JOIN(&uVar34, &iParam0);
						PRINTSTRING(&cVar2);
						PRINTNL();
						PRINTVECTOR(Var42);
						PRINTNL();
					}
				}
				bVar46 = RAND_FLOAT_RANGE(fParam7, bParam8);
				Var42 = (Var42 + bVar46);
				iVar1++;
				bVar0++;
			}
		}
	}
}

void Function_497() //Position: 0x1C0B8 / 114872
{
	if (Function_307(&iLocal_1040) <= 0.0f)
	{
		switch (iLocal_979)
		{
			case 0x00000000:
				iLocal_979++;
				break;
			
			case 0x00000006:
				iLocal_979++;
				break;
		}
		Function_235(&iLocal_1040);
	}
	return;
}

void Function_498() //Position: 0x1C0F9 / 114937
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		switch (iLocal_977)
		{
			case 0x00000000:
				iLocal_977++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[12], true);
				SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[12], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[12], true);
				uLocal_1084 = Vector(-3.0f, 0.0f, 13.0f);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT(0, &bLocal_627, &uLocal_1084, 0, 0, 0, 0, 0, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				iLocal_977++;
				break;
			
			case 0x00000002:
				iLocal_977++;
				break;
			}
	}
	return;
}

void Function_499() //Position: 0x1C1BF / 115135
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		switch (iLocal_976)
		{
			case 0x00000000:
				iLocal_976++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[02], true);
				SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[02], 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[02], true);
				uLocal_1081 = Vector(3.0f, 0.0f, 12.0f);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT(0, &bLocal_627, &uLocal_1081, 0, 0, 0, 0, 0, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				iLocal_976++;
				break;
			
			case 0x00000002:
				iLocal_976++;
				break;
			}
	}
	return;
}

void Function_500() //Position: 0x1C281 / 115329
{
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		switch (iLocal_969)
		{
			case 0x00000000:
				iLocal_969++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_627);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_627);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_627);
				Function_439(3, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_627, true);
				SET_ACTOR_MAX_SPEED(&bLocal_627, 4);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_627, true);
				bLocal_1069 = Vector(-15.0f, 0.0f, 10.0f);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT(0, &Local_1100 + 8, &bLocal_1069, 0, 0, 0, 0, 0, 0, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_627, true);
				iLocal_969++;
				break;
			
			case 0x00000002:
				if (iLocal_623 > 11)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_627, 65.0f))
					{
						bLocal_1069 = Vector(-3.0f, 0.0f, -5.0f);
						bLocal_967 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT(0, &Global_54076, &bLocal_1069, 0, 0, 0, 0, 0, 0, 1);
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
						TASK_SEQUENCE_RELEASE(bLocal_967, 1);
						TASK_PRIORITY_SET(&bLocal_627, true);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_969++;
				break;
			}
	}
	return;
}

void Function_501(struct<113> Param0) //Position: 0x1C3D1 / 115665
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar5;
	bool bVar6;
	
	if (Param0.f_112 <= 4 && Param0.f_112 >= 10)
	{
		fVar5 = (80.0f + 50.0f);
		bVar6 = (100.0f + 50.0f);
	}
	else if (Param0.f_112 <= 11 && Param0.f_112 >= 20)
	{
		fVar5 = (80.0f + 50.0f);
		bVar6 = (100.0f + 50.0f);
	}
	else
	{
		fVar5 = (80.0f + 50.0f);
		bVar6 = (100.0f + 50.0f);
	}
	if (IS_OBJECT_VALID(&Param0 + 8))
	{
		if (SQUAD_IS_VALID(&Param0 + 64))
		{
			if (SQUAD_GET_SIZE(&Param0 + 64) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 64) - 1))
				{
					iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 64, bVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						GET_OBJECT_POSITION(&iVar1, &uVar3);
						if ((!Function_451(&iVar1, &Global_54076, bVar6) && !Function_358(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_450(&iVar1), &uVar3, 3212836864))
						{
							uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
							if (IS_BLIP_VALID(&uVar2))
							{
								REMOVE_BLIP(&uVar2);
							}
							SQUAD_LEAVE(&iVar1);
							DESTROY_ACTOR(&iVar1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_502(int iParam0, bool bParam1) //Position: 0x1C50F / 115983
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&iParam0 + 64))
	{
		if (SQUAD_IS_VALID(&iParam0 + 88))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&iParam0 + 64) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 64, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (!Function_503(&iVar1, &iParam0 + 64, bParam1) || !Function_503(&iVar1, &iParam0 + 88, bParam1))
					{
						uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
						if (IS_BLIP_VALID(&uVar2))
						{
							REMOVE_BLIP(&uVar2);
						}
						SQUAD_LEAVE(&iVar1);
						SQUAD_JOIN(&iVar1, &iParam0 + 88);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

bool Function_503(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C5B2 / 116146
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (SQUAD_IS_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (Function_451(&iParam0, &iVar1, bParam2))
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

void Function_504(int iParam0, float fParam1) //Position: 0x1C60E / 116238
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	var uVar5;
	
	if (SQUAD_IS_VALID(&iParam0 + 64))
	{
		if (SQUAD_IS_VALID(&iParam0 + 88))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&iParam0 + 64) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 64, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					GET_ACTOR_VELOCITY(&uVar1, &Var2);
					bVar4 = VMAG(Var2);
					if (bVar4 >= fParam1)
					{
						uVar5 = GET_BLIP_ON_ACTOR(&uVar1);
						if (IS_BLIP_VALID(&uVar5))
						{
							REMOVE_BLIP(&uVar5);
						}
						SQUAD_LEAVE(&uVar1);
						SQUAD_JOIN(&uVar1, &iParam0 + 88);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_505(struct<113> Param0) //Position: 0x1C6A9 / 116393
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	int iVar5;
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
								SQUAD_COMPUTE_CENTROID(&Param0 + 88, &Var0);
								Function_446(&Param0 + 88);
								Var2 = Function_446(&Param0 + 88);
								if (SQUAD_GET_SIZE(&Param0 + 88) >= iVar6)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
									{
										Function_250(&Param0);
										if (!Function_74(StackVal, Function_250(&Param0)))
										{
											iVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(&iVar5))
											{
												SET_BLIP_SCALE(&iVar5, 2,5f);
												SET_BLIP_NAME(&iVar5, "nBLIP_HERD");
												SET_BLIP_FLAG(&iVar5, 4096, 0);
												SET_BLIP_PRIORITY(&iVar5, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
									{
										Function_250(&Param0 + 8);
										if (!Function_74(StackVal, Function_250(&Param0 + 8)))
										{
											uVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
											if (IS_BLIP_VALID(&uVar4))
											{
												SET_BLIP_SCALE(&uVar4, 1.0f);
												SET_BLIP_PRIORITY(&uVar4, 2);
											}
										}
									}
								}
							}
							else if (SQUAD_GET_SIZE(&Param0 + 80) > 1)
							{
								SQUAD_COMPUTE_CENTROID(&Param0 + 80, &Var0);
								Function_445(StackVal, Var0, &Param0 + 24);
								Var0 = Function_445(StackVal, Var0, &Param0 + 24);
								Function_446(&Param0 + 80);
								Var2 = Function_446(&Param0 + 80);
								if (SQUAD_GET_SIZE(&Param0 + 80) >= iVar6)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
									{
										Function_250(&Param0);
										if (!Function_74(StackVal, Function_250(&Param0)))
										{
											iVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(&iVar5))
											{
												SET_BLIP_SCALE(&iVar5, 2,5f);
												SET_BLIP_NAME(&iVar5, "nBLIP_HERD");
												SET_BLIP_FLAG(&iVar5, 4096, 0);
												SET_BLIP_PRIORITY(&iVar5, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
									{
										Function_250(&Param0 + 8);
										if (!Function_74(StackVal, Function_250(&Param0 + 8)))
										{
											uVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
											if (IS_BLIP_VALID(&uVar4))
											{
												SET_BLIP_SCALE(&uVar4, 1.0f);
												SET_BLIP_PRIORITY(&uVar4, 2);
											}
										}
									}
								}
							}
							else if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
							{
								SQUAD_COMPUTE_CENTROID(&Param0 + 72, &Var0);
								Function_445(StackVal, Var0, &Param0 + 24);
								Var0 = Function_445(StackVal, Var0, &Param0 + 24);
								Function_446(&Param0 + 72);
								Var2 = Function_446(&Param0 + 72);
								if (SQUAD_GET_SIZE(&Param0 + 72) >= iVar6)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
									{
										Function_250(&Param0);
										if (!Function_74(StackVal, Function_250(&Param0)))
										{
											iVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(&iVar5))
											{
												SET_BLIP_SCALE(&iVar5, 2,5f);
												SET_BLIP_NAME(&iVar5, "nBLIP_HERD");
												SET_BLIP_FLAG(&iVar5, 4096, 0);
												SET_BLIP_PRIORITY(&iVar5, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
									{
										Function_250(&Param0 + 8);
										if (!Function_74(StackVal, Function_250(&Param0 + 8)))
										{
											uVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
											if (IS_BLIP_VALID(&uVar4))
											{
												SET_BLIP_SCALE(&uVar4, 1.0f);
												SET_BLIP_PRIORITY(&uVar4, 2);
											}
										}
									}
								}
							}
						}
						else
						{
							SQUAD_COMPUTE_CENTROID(&Param0 + 64, &Var0);
							Function_446(&Param0 + 64);
							Var2 = Function_446(&Param0 + 64);
							uVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
							if (IS_BLIP_VALID(&uVar4))
							{
								REMOVE_BLIP(&uVar4);
							}
							iVar5 = GET_BLIP_ON_OBJECT(&Param0);
							if (IS_BLIP_VALID(&iVar5))
							{
								REMOVE_BLIP(&iVar5);
							}
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

void Function_506(var uParam0, bool bParam1) //Position: 0x1CA97 / 117399
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_VOLUME_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &bParam1))
					{
						SQUAD_LEAVE(&uVar1);
						KILL_ACTOR(&uVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_507() //Position: 0x1CAFA / 117498
{
	Function_356(&bLocal_528);
	if (((iLocal_623 < 5 && iLocal_623 > 105) && !iLocal_623 != 104) && !iLocal_623 != 103)
	{
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_455(&Local_1100 + 64, &Local_1100 + 88, &bLocal_4 + 592);
			Function_456(&Local_1100);
		}
		if (bLocal_1016)
		{
			Function_444(&Local_1100);
			if (Function_307(&iLocal_1052) <= 0,1f)
			{
				Function_443(&Local_1100);
				Function_442(&Local_1100, 0x41700000);
			}
			if (Function_307(&iLocal_1028) <= 0,2f)
			{
				Function_449(&Local_1100);
				Function_235(&iLocal_1028);
			}
			Function_448();
		}
		Function_517();
		Function_441(&Global_54076);
		Function_515();
		if (Function_307(&iLocal_1052) <= 0,1f)
		{
			Function_235(&iLocal_1052);
		}
	}
	switch (iLocal_623)
	{
		case 0x00000000:
			Function_352(0);
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_643[0] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_344();
				bLocal_624 = Global_46736[2];
				if (!Function_343(bLocal_624))
				{
					Function_341(&Local_530);
				}
				Function_340(&Global_54076, &bLocal_4 + 896[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_629, true);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
				Function_235(&iLocal_631);
				iLocal_623 = 1;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_624) || bLocal_624 != 4294967295))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("nHERDING_2", 0, 4294967295, 4294967295);
			bLocal_968 = false;
			iLocal_969 = 0;
			iLocal_976 = 0;
			iLocal_977 = 0;
			iLocal_979 = 0;
			iLocal_662 = 0;
			iLocal_1019 = 0;
			iLocal_1020 = 0;
			iLocal_1022 = 0;
			iLocal_1025 = 0;
			iLocal_1027 = 0;
			Function_336(0,3f);
			Function_335(0.0f);
			Function_333(4, 1);
			bLocal_970 = 11;
			bLocal_971 = false;
			Function_234(Local_530, bLocal_970);
			PRINTINT(bLocal_970);
			PRINTNL();
			PRINTINT(bLocal_971);
			PRINTNL();
			Local_1100.f_120 = 0;
			Local_1100.f_124 = 0;
			bLocal_974 = Local_1100.f_120;
			bLocal_975 = Local_1100.f_124;
			PRINTINT(bLocal_974);
			PRINTNL();
			PRINTINT(bLocal_975);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(bLocal_975) / TO_FLOAT(bLocal_974)));
			PRINTNL();
			bLocal_974 = Local_1100.f_120;
			Global_53524.f_176 = bLocal_974;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_975 = Local_1100.f_124;
			Global_53524.f_180 = bLocal_975;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_513();
			if (iLocal_643[0] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_340(&Global_54076, &bLocal_4 + 896[0], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_629))
					{
						Function_340(&bLocal_629, &bLocal_4 + 896[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
						}
					}
					else
					{
						bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_340(&bLocal_627, &bLocal_4 + 896[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
					{
						Function_340(&bLocal_4 + 240[02], &bLocal_4 + 896[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
						}
					}
				}
			}
			Function_399(&(Local_717[015]), &bLocal_627, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[115]), &bLocal_4 + 232, "Rancher", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[215]), &Local_1100 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[315]), &bLocal_1096, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[415]), &Local_1100 + 72, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[515]), &Local_1100 + 80, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[615]), &Local_1100 + 88, "Cow", 0, 0x5f5e100, 1);
			Function_398(&(Local_717[715]));
			Function_394(&(Local_717[215]), 2);
			Function_394(&(Local_717[315]), 2);
			Function_394(&(Local_717[415]), 2);
			Function_394(&(Local_717[515]), 2);
			Function_394(&(Local_717[615]), 2);
			if (HUD_IS_FADED())
			{
				Function_235(&iLocal_631);
				iLocal_623 = 5;
			}
			else
			{
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			Function_249(iLocal_622);
			Function_386(StackVal, Function_249(iLocal_622), iLocal_622, Global_46736[2], Function_252(iLocal_622), 2);
			bLocal_980 = Function_385();
			PRINTINT(bLocal_980);
			PRINTNL();
			break;
		
		case 0x00000005:
			if ((((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&bLocal_4 + 240[02])) && IS_ACTOR_VALID(&bLocal_629)) && SQUAD_IS_VALID(&Local_1100 + 64)) && IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1))))
			{
				if (((Function_384(&bLocal_627, 1, 0x41700000) && Function_384(&bLocal_4 + 240[02], 1, 0x41700000)) && Function_384(&bLocal_629, 1, 0x41700000)) && Function_384(SQUAD_GET_ACTOR_BY_INDEX(&Local_1100 + 64, (SQUAD_GET_SIZE(&Local_1100 + 64) - 1)), 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_627) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_235(&iLocal_631);
						iLocal_623 = 104;
					}
					else
					{
						if (IS_ACTOR_VALID(&Global_54076))
						{
							Function_340(&Global_54076, &bLocal_4 + 896[0], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_629))
							{
								Function_340(&bLocal_629, &bLocal_4 + 896[2], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_629))
								{
									ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_629);
								}
							}
							else
							{
								bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
							}
						}
						if (IS_ACTOR_VALID(&bLocal_627))
						{
							Function_340(&bLocal_627, &bLocal_4 + 896[1], 1, 1, 1);
							if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
							{
								Function_340(&bLocal_4 + 240[02], &bLocal_4 + 896[3], 1, 1, 1);
								if (!IS_ACTOR_RIDING(&bLocal_627) && !IS_ACTOR_MOUNTED(&bLocal_4 + 240[02]))
								{
									ACTOR_MOUNT_ACTOR(&bLocal_627, &bLocal_4 + 240[02]);
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
			if (SQUAD_IS_VALID(&Local_1100 + 64))
			{
				bLocal_1016 = true;
				Function_512();
				Function_511();
				Function_310(&Local_1100 + 64);
				Function_380(&Local_1100 + 64, &bLocal_4 + 408);
				Function_379(&Local_1100 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_235(&iLocal_631);
			iLocal_623 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_982))
				{
					if (IS_OBJECT_VALID(&Local_1100 + 8))
					{
						uLocal_982 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &bLocal_528, "RANCH08_CAMERA_FOCUS", &Local_1100 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_982))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_982, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1448, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
				if (!IS_OBJECT_VALID(&fLocal_984))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1448, &Local_1075);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1448, &Local_1078);
					fLocal_984 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&fLocal_984))
					{
					}
				}
				bLocal_1017 = false;
				if (SQUAD_IS_VALID(&Local_1100 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 72);
					Function_311(&Local_1100 + 72);
				}
				*(&Local_1100 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1100 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 80);
					Function_311(&Local_1100 + 80);
				}
				*(&Local_1100 + 16) = &bLocal_4 + 1448;
				GET_OBJECT_POSITION(&bLocal_4 + 1448, &uLocal_1072);
				if (SQUAD_IS_VALID(&Local_1100 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1100 + 88);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &uLocal_1072, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 616, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
				if (iLocal_643[0] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1100 + 64))
					{
						bLocal_1016 = true;
						Function_512();
						Function_511();
						Function_310(&Local_1100 + 64);
						Function_380(&Local_1100 + 64, &bLocal_4 + 408);
						Function_379(&Local_1100 + 64, 2, 1);
					}
				}
				Function_510();
				Function_235(&iLocal_631);
				iLocal_623 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				UI_SHOW("RacePosition");
				Function_377("ranch08_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				Function_235(&fLocal_639);
				iLocal_623 = 8;
			}
			break;
		
		case 0x00000008:
			if (!iLocal_1020)
			{
				if (Function_307(&iLocal_631) <= 10,5f)
				{
					Function_508(&Local_1100, 5, &iLocal_1036, 0,3f);
					if (iLocal_1019)
					{
						if (SQUAD_GET_SIZE(&Local_1100 + 72) <= 1 || SQUAD_GET_SIZE(&Local_1100 + 80) <= 1)
						{
							Function_139("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
							Function_235(&iLocal_631);
							iLocal_623 = 9;
						}
						else if (Function_307(&iLocal_631) <= (10,5f + 6.0f))
						{
							iLocal_1020 = 1;
							iLocal_1019 = 0;
							Function_235(&iLocal_631);
						}
					}
				}
			}
			else
			{
				Function_508(&Local_1100, 5, &iLocal_1036, 0,3f);
				if (iLocal_1019)
				{
					if (SQUAD_GET_SIZE(&Local_1100 + 72) <= 1 || SQUAD_GET_SIZE(&Local_1100 + 80) <= 1)
					{
						Function_139("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
						Function_235(&iLocal_631);
						iLocal_623 = 9;
					}
					else if (Function_307(&iLocal_631) <= 20.0f)
					{
						Function_139("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
						Function_235(&iLocal_631);
						iLocal_623 = 9;
					}
					else if (IS_OBJECT_IN_VOLUME(&Local_1100 + 8, &bLocal_4 + 720))
					{
						Function_139("ranch08_obj02_help1", 10.0f, 1, 0, 2, 1, 0);
						Function_235(&iLocal_631);
						iLocal_623 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_307(&iLocal_631) <= 10,5f)
			{
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
				iLocal_1019 = 0;
				Function_139("ranch08_obj02_help2", 10.0f, 1, 0, 2, 1, 0);
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				Function_235(&fLocal_639);
				iLocal_623 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					DESTROY_OBJECT(&fLocal_984);
				}
				if (bLocal_1016)
				{
					Function_373();
				}
			}
			else
			{
				Function_366(&fLocal_639, 135.0f, 315.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1448, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
				if (!IS_OBJECT_VALID(&fLocal_984))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1448, &Local_1075);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1448, &Local_1078);
					fLocal_984 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&fLocal_984))
					{
					}
				}
				if (!bLocal_1016)
				{
					Function_254();
					Function_365();
				}
				if (Function_307(&iLocal_631) <= 10,5f)
				{
					Function_508(&Local_1100, 5, &iLocal_1036, 15.0f);
				}
				if ((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1100 + 64) != 0 && SQUAD_GET_SIZE(&Local_1100 + 80) != 0) && SQUAD_GET_SIZE(&Local_1100 + 72) >= 3)
					{
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 11;
					}
				}
				if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 88)) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1100 + 64) != 0 && SQUAD_GET_SIZE(&Local_1100 + 72) != 0) && SQUAD_GET_SIZE(&Local_1100 + 80) != 0)
					{
						if (IS_BLIP_VALID(&iLocal_1090))
						{
							REMOVE_BLIP(&iLocal_1090);
						}
						if (IS_OBJECT_VALID(&fLocal_984))
						{
							DESTROY_OBJECT(&fLocal_984);
						}
						Function_361(&Local_1100 + 64);
						Function_361(&Local_1100 + 72);
						Function_361(&Local_1100 + 80);
						Function_361(&Local_1100 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 106;
					}
				}
				if (Local_1100.f_148)
				{
					if (Function_307(&Local_1100 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1100 + 16)) && IS_OBJECT_VALID(&Local_1100 + 8))
						{
							if (Function_358(&bLocal_627, &Local_1100 + 16, 25.0f))
							{
								if (Function_358(&Global_54076, &Local_1100 + 16, 25.0f) && Function_358(&Global_54076, &Local_1100 + 8, 25.0f))
								{
									LOG_ERROR("RANCH08 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH08 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 80)) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 88))
									{
										Function_312(&Local_1100 + 64, &Local_1100 + 88);
										Function_312(&Local_1100 + 80, &Local_1100 + 88);
										Function_312(&Local_1100 + 72, &Local_1100 + 88);
									}
									Function_235(&Local_1100 + 132);
								}
							}
						}
					}
				}
			}
			if (bLocal_1017)
			{
			}
			break;
		
		case 0x0000000B:
			if (SQUAD_GET_SIZE(&Local_1100 + 72) == 1)
			{
				Function_377("ranch08_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				Function_377("ranch08_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			Function_235(&iLocal_631);
			Function_235(&iLocal_635);
			Function_235(&fLocal_639);
			iLocal_623 = 12;
			break;
		
		case 0x0000000C:
			if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, &bLocal_528, 0, 334))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					DESTROY_OBJECT(&fLocal_984);
				}
				if (bLocal_1016)
				{
					Function_373();
				}
			}
			else
			{
				Function_366(&fLocal_639, 245.0f, 395.0f, &Local_1100 + 8, "Herd_return", "Herd_abandoned", &bLocal_658, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 1448, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
				if (!IS_OBJECT_VALID(&fLocal_984))
				{
					GET_OBJECT_POSITION(&bLocal_4 + 1448, &Local_1075);
					GET_OBJECT_ORIENTATION(&bLocal_4 + 1448, &Local_1078);
					fLocal_984 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&fLocal_984))
					{
					}
				}
				if (!bLocal_1016)
				{
					Function_254();
					Function_365();
				}
				if (SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 72))
				{
					if (SQUAD_GET_SIZE(&Local_1100 + 64) != 0 && SQUAD_GET_SIZE(&Local_1100 + 72) != 0)
					{
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 10;
					}
				}
				if (Local_1100.f_148)
				{
					if (Function_307(&Local_1100 + 132) <= 30.0f)
					{
						if (((IS_ACTOR_VALID(&bLocal_627) && IS_ACTOR_VALID(&Global_54076)) && IS_OBJECT_VALID(&Local_1100 + 16)) && IS_OBJECT_VALID(&Local_1100 + 8))
						{
							if (Function_358(&bLocal_627, &Local_1100 + 16, 25.0f))
							{
								if (Function_358(&Global_54076, &Local_1100 + 16, 25.0f) && Function_358(&Global_54076, &Local_1100 + 8, 25.0f))
								{
									LOG_ERROR("RANCH08 - IMPORTANT!!! If you see this, save your log and email it to chris.berg@rockstarsandiego.com!!!");
									LOG_ERROR("RANCH08 - IMPORTANT!!! Also, please mention whether the mission continued after seeing this message. Thanks.");
									if (((SQUAD_IS_VALID(&Local_1100 + 64) && SQUAD_IS_VALID(&Local_1100 + 80)) && SQUAD_IS_VALID(&Local_1100 + 72)) && SQUAD_IS_VALID(&Local_1100 + 88))
									{
										Function_312(&Local_1100 + 64, &Local_1100 + 88);
										Function_312(&Local_1100 + 80, &Local_1100 + 88);
										Function_312(&Local_1100 + 72, &Local_1100 + 88);
									}
									Function_235(&Local_1100 + 132);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				bLocal_970 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 88);
				Function_234(Local_530, bLocal_970);
			}
			PRINTINT(bLocal_970);
			PRINTNL();
			bLocal_971 = (11 - bLocal_970);
			PRINTINT(bLocal_971);
			PRINTNL();
			bLocal_974 = Local_1100.f_120;
			Global_53524.f_176 = bLocal_974;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_975 = Local_1100.f_124;
			Global_53524.f_180 = bLocal_975;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			iLocal_643[1] = 1;
			Function_235(&iLocal_631);
			iLocal_622 = 2;
			iLocal_623 = 0;
			break;
	}
	return;
}

void Function_508(int iParam0, int iParam1, int iParam2, float fParam3) //Position: 0x1DF61 / 122721
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	if (!iLocal_1019)
	{
		if (Function_307(&iParam2) <= fParam3)
		{
			if (IS_OBJECT_VALID(&iParam0 + 8))
			{
				if (SQUAD_IS_VALID(&iParam0 + 64))
				{
					if (SQUAD_IS_VALID(&iParam0 + 72))
					{
						if (SQUAD_IS_VALID(&iParam0 + 80))
						{
							if (((SQUAD_GET_SIZE(&iParam0 + 72) > iParam1 && !SQUAD_GET_SIZE(&iParam0 + 72) > 0) && SQUAD_GET_SIZE(&iParam0 + 80) > iParam1) && !SQUAD_GET_SIZE(&iParam0 + 80) > 0)
							{
								iVar0 = Function_363(&iParam0 + 64, &iParam0 + 8, &Global_54076);
								if (IS_ACTOR_VALID(&iVar0))
								{
									if (!GET_TASK_STATUS(&iVar0, 61) != 1)
									{
										Var5 = Vector(0.0f, 0.0f, 0.0f);
										GET_OBJECT_POSITION(&iParam0 + 16, &Var1);
										if (Function_423(StackVal, &iParam0 + 64, Var1, 130.0f))
										{
											if (Function_509(&iVar0, &iParam0 + 8))
											{
												Var5 = -35.0f;
												Var5.f_8 = 35.0f;
											}
											else
											{
												Var5 = -35.0f;
												Var5.f_8 = -35.0f;
											}
										}
										else if (Function_509(&iVar0, &iParam0 + 8))
										{
											Var5 = -35.0f;
											Var5.f_8 = -35.0f;
										}
										else
										{
											Var5 = -35.0f;
											Var5.f_8 = 35.0f;
										}
										GET_OBJECT_RELATIVE_POSITION(&iParam0 + 8, Var5, &Var3);
										PRINTVECTOR(Var3);
										PRINTNL();
										bLocal_967 = TASK_SEQUENCE_OPEN();
										TASK_GO_NEAR_COORD(false, &Var3, 10.0f, 4);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&iVar0, bLocal_967);
										TASK_SEQUENCE_RELEASE(bLocal_967, 1);
										TASK_PRIORITY_SET(&iVar0, true);
										iLocal_1019 = 1;
									}
								}
								Function_235(&iParam2);
							}
						}
					}
				}
			}
		}
	}
}

bool Function_509(int iParam0, int iParam1) //Position: 0x1E0FA / 123130
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar8;
	float fVar10;
	var uVar11;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	uVar11 = &iParam0;
	Var2 = Var0;
	GET_OBJECT_POSITION(&uVar11, &Var4);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Var4, Var2, StackVal);
	GET_OBJECT_AXIS(&uVar11, &uVar8, 0);
	fVar10 = VDOT(&uVar6, &uVar8);
	if (fVar10 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_510() //Position: 0x1E14B / 123211
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_startHerd", "Ranch08_startHerd", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1E196 / 123286
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1100 + 64, &Local_1100 + 96, &Local_1100 + 24, 100.0f, 0,85f, 0,5f, 1082130432);
	return;
}

void Function_512() //Position: 0x1E1C5 / 123333
{
	Function_311(&Local_1100 + 64);
	SQUAD_GOALS_CLEAR(&Local_1100 + 64);
	*(&Local_1100 + 96) = UNK_0x48588CCB(&Local_1100 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1100 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1100 + 64, &Local_1100 + 96);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1100 + 64, &Local_1100 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_627);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1100 + 56);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_627, &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_627, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_4 + 192[02]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[02], &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_4 + 192[02], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		if (IS_VOLUME_VALID(&Local_1100 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_4 + 192[12]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_4 + 192[12], &Local_1100 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1100 + 64, &Local_1100 + 96, &bLocal_4 + 192[12], 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	bLocal_1016 = true;
	DECOR_SET_BOOL(&Global_54076, "herding", true);
	return;
}

void Function_513() //Position: 0x1E397 / 123799
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 896[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 944[9], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 944[8], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 944[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 944[7], 1, 1, 1);
			}
			Function_324(&bLocal_4 + 232, &bLocal_4 + 312);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_514();
	return;
}

void Function_514() //Position: 0x1E56A / 124266
{
	Function_322();
	*(&Local_1100 + 24) = &bLocal_4 + 2008;
	if (!SQUAD_IS_VALID(&Local_1100 + 64))
	{
		*(&Local_1100 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 64);
			Function_319(&Local_1100, &bLocal_528, &bLocal_4 + 1440, &iLocal_1056, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&Local_1100 + 64, 0);
			Function_318(&Local_1100 + 64, 1);
			Function_317(&Local_1100 + 64, 0);
			Function_316(&Local_1100 + 64, 0);
			Function_315(&Local_1100 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 608, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1096))
	{
		bLocal_1096 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(&bLocal_1096))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1096);
			Function_496(&bLocal_1096, &bLocal_528, &bLocal_4 + 1520, "RANCH08_COWS02", &iLocal_1056, 10, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&bLocal_1096, 0);
			Function_318(&bLocal_1096, 1);
			Function_317(&bLocal_1096, 0);
			Function_316(&bLocal_1096, 0);
			Function_315(&bLocal_1096, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 632, -1.0f);
		}
	}
	return;
}

void Function_515() //Position: 0x1E714 / 124692
{
	if (Function_307(&iLocal_1040) <= 0.0f)
	{
		switch (iLocal_979)
		{
			case 0x00000000:
				iLocal_979++;
				break;
			
			case 0x00000001:
				if (iLocal_623 > 8)
				{
					iLocal_979++;
				}
				break;
			
			case 0x00000002:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_516();
				}
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_979++;
				}
				break;
			
			case 0x00000003:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1022)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979++;
					}
				}
				break;
			
			case 0x00000004:
				Function_415(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000006:
				iLocal_979++;
				break;
		}
		Function_235(&iLocal_1040);
	}
	return;
}

void Function_516() //Position: 0x1E7EC / 124908
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_badWeather", "Ranch08_badWeather", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517() //Position: 0x1E839 / 124985
{
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		switch (iLocal_969)
		{
			case 0x00000000:
				iLocal_969++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_627);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_627);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_627);
				Function_439(3, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_627, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_627, true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 2.0f, 0, 0);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &bLocal_4 + 2000, 20.0f, 1, 0);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_627, true);
				iLocal_969++;
				break;
			
			case 0x00000002:
				if (IS_VOLUME_VALID(&bLocal_4 + 720))
				{
					if (IS_OBJECT_VALID(&Local_1100 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1100 + 8, &bLocal_4 + 720))
						{
							iLocal_969++;
						}
					}
				}
				break;
			
			case 0x00000003:
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1100 + 8, &bLocal_4 + 2016, 17.0f, 1, 0);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_627, true);
				iLocal_969++;
				break;
			
			case 0x00000004:
				iLocal_969++;
				break;
			}
	}
	return;
}

void Function_518() //Position: 0x1E990 / 125328
{
	Function_356(&bLocal_528);
	if (((iLocal_623 < 5 && iLocal_623 > 105) && !iLocal_623 != 104) && !iLocal_623 != 103)
	{
		Function_541(1, 0);
		Function_540();
		Function_539();
		Function_538();
		Function_537();
		Function_527();
	}
	switch (iLocal_623)
	{
		case 0x00000000:
			Function_352(0);
			if (Function_342(&Local_530))
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			if (IS_ACTOR_VALID(&bLocal_629))
			{
				TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_629, true);
			}
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_627, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_344();
			bLocal_624 = Global_46816[0];
			if (!Function_343(bLocal_624))
			{
				Function_341(&Local_530);
			}
			if (Function_342(&Local_530))
			{
				Function_340(&Global_54076, &bLocal_4 + 808[0], 1, 1, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			Function_235(&iLocal_631);
			iLocal_623 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(bLocal_624) || bLocal_624 != 4294967295))
			{
				Function_235(&iLocal_631);
				iLocal_623 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			bLocal_968 = false;
			iLocal_969 = 0;
			iLocal_976 = 0;
			iLocal_977 = 0;
			iLocal_979 = 0;
			iLocal_662 = 0;
			bLocal_1018 = false;
			iLocal_1022 = 0;
			iLocal_1025 = 0;
			iLocal_1026 = 0;
			iLocal_1027 = 0;
			Function_526(&iLocal_1004);
			Function_336(0,3f);
			Function_335(0.0f);
			Function_333(4, 1);
			Function_525(2.0f, 180.0f);
			bLocal_970 = 11;
			bLocal_971 = false;
			Function_234(Local_530, bLocal_970);
			PRINTINT(bLocal_970);
			PRINTNL();
			PRINTINT(bLocal_971);
			PRINTNL();
			Local_1100.f_120 = 0;
			Local_1100.f_124 = 0;
			bLocal_974 = Local_1100.f_120;
			bLocal_975 = Local_1100.f_124;
			PRINTINT(bLocal_974);
			PRINTNL();
			PRINTINT(bLocal_975);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(bLocal_975) / TO_FLOAT(bLocal_974)));
			PRINTNL();
			bLocal_974 = Local_1100.f_120;
			Global_53524.f_176 = bLocal_974;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_975 = Local_1100.f_124;
			Global_53524.f_180 = bLocal_975;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_523();
			Function_340(&bLocal_627, &bLocal_4 + 808[1], 1, 1, 1);
			Function_340(&bLocal_629, &bLocal_4 + 808[2], 1, 1, 1);
			Function_399(&(Local_717[015]), &bLocal_627, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[115]), &bLocal_4 + 232, "Rancher", 1, 0x5f5e100, 1);
			Function_399(&(Local_717[215]), &Local_1100 + 64, "Cow", 0, 0x5f5e100, 1);
			Function_399(&(Local_717[315]), &bLocal_1096, "Cow", 0, 0x5f5e100, 1);
			Function_398(&(Local_717[415]));
			Function_398(&(Local_717[515]));
			Function_398(&(Local_717[615]));
			Function_398(&(Local_717[715]));
			if (HUD_IS_FADED())
			{
				Function_235(&iLocal_631);
				iLocal_623 = 5;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			Function_249(iLocal_622);
			Function_386(StackVal, Function_249(iLocal_622), iLocal_622, Global_46736[2], Function_252(iLocal_622), 0);
			bLocal_980 = Function_385();
			PRINTINT(bLocal_980);
			PRINTNL();
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				if (Function_384(&bLocal_627, 1, 0x41700000))
				{
					Function_235(&iLocal_631);
					iLocal_623 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_342(&Local_530))
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
				if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
				{
					ACTOR_POP_NEXT_GAIT(&bLocal_4 + 192[02], 2, 0);
					GET_OBJECT_POSITION(&bLocal_4 + 272[02], &uLocal_1081);
					TASK_GO_NEAR_COORD(&bLocal_4 + 192[02], &uLocal_1081, 3.0f, 2);
					TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				}
			}
			Function_235(&iLocal_631);
			iLocal_623 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_235(&iLocal_631);
				iLocal_623 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_IS_VALID(&bLocal_4 + 232))
			{
				if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
				{
					SET_ACTORS_HORSE(&bLocal_4 + 192[02], &bLocal_4 + 272[02]);
					SET_MOST_RECENT_MOUNT(&bLocal_4 + 192[02], &bLocal_4 + 272[02]);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_4 + 192[02]);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_4 + 192[02]);
					GET_OBJECT_POSITION(&bLocal_4 + 1528, &uLocal_1081);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[02], true);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &bLocal_4 + 272[02], 0, 1, 2, 2);
					TASK_FOLLOW_PATH(0, &bLocal_4 + 2080, 2, 1, 0, 1, false);
					TASK_GO_NEAR_COORD(false, &uLocal_1081, 3.0f, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				}
				if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
				{
					SET_ACTORS_HORSE(&bLocal_4 + 192[12], &bLocal_4 + 272[12]);
					SET_MOST_RECENT_MOUNT(&bLocal_4 + 192[12], &bLocal_4 + 272[12]);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_4 + 192[12]);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_4 + 192[12]);
					GET_OBJECT_POSITION(&bLocal_4 + 1536, &uLocal_1084);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_4 + 192[12], true);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &bLocal_4 + 272[12], 0, 1, 2, 2);
					TASK_GO_NEAR_COORD(false, &uLocal_1084, 3.0f, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				}
			}
			Function_235(&iLocal_631);
			iLocal_623 = 7;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&bLocal_629))
			{
				if (!IS_BLIP_VALID(&iLocal_1090))
				{
					iLocal_1090 = ADD_BLIP_FOR_ACTOR(&bLocal_629, 334, 0, 2, 0);
					if (IS_BLIP_VALID(&iLocal_1090))
					{
					}
				}
			}
			Function_377("ranch08_obj00", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_235(&iLocal_631);
			Function_235(&iLocal_635);
			Function_235(&fLocal_639);
			iLocal_623 = 8;
			break;
		
		case 0x00000008:
			if (Function_473(&fLocal_639, 60.0f, 200.0f, &bLocal_627, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_658, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
					{
						Function_439(3, 1, 1);
					}
				}
			}
			else
			{
				if (!IS_ACTOR_VALID(&bLocal_629))
				{
					if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, 0, 0, 334))
					{
						if (IS_BLIP_VALID(&iLocal_1090))
						{
							REMOVE_BLIP(&iLocal_1090);
						}
						if (IS_ACTOR_VALID(&bLocal_629))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_629)))
							{
								ADD_BLIP_FOR_ACTOR(&bLocal_629, 334, 0, 2, 0);
							}
						}
					}
					else if (IS_ACTOR_VALID(&bLocal_629))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_629)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_629));
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(&bLocal_627))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
						{
							Function_439(3, 0, 1);
						}
					}
					if (!IS_BLIP_VALID(&iLocal_1090))
					{
						iLocal_1090 = ADD_BLIP_FOR_ACTOR(&bLocal_629, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&iLocal_1090))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_629)
					{
						if (IS_BLIP_VALID(&iLocal_1090))
						{
							REMOVE_BLIP(&iLocal_1090);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_627, 3212836864, 3212836864, 4, 1, 0);
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				Function_439(3, 1, 1);
			}
			Function_522();
			Function_235(&iLocal_631);
			iLocal_623 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_307(&iLocal_631) <= 3.0f)
			{
				Function_377("ranch08_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				Function_235(&fLocal_639);
				iLocal_623 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_473(&fLocal_639, (2.0f * 60.0f), (2.0f * 200.0f), &bLocal_627, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_658, 0, 0, 0, 325, 1))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
				{
					Function_439(3, 1, 1);
				}
			}
			else if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
				{
					Function_439(3, 0, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_629)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_629, 334, 0, 2, 0);
					}
				}
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
				{
					Function_439(3, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_629)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_629));
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (bLocal_1018)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_627, (3.0f * 6.0f)) || Function_358(&Global_54076, &bLocal_4 + 1440, (3.0f * 6.0f)))
					{
						if (IS_BLIP_VALID(&iLocal_1090))
						{
							REMOVE_BLIP(&iLocal_1090);
						}
						if (IS_OBJECT_VALID(&fLocal_984))
						{
							DESTROY_OBJECT(&fLocal_984);
						}
						Function_439(3, 0, 1);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_254();
						Function_235(&iLocal_631);
						iLocal_623 = 12;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
			{
				Function_439(3, 0, 1);
			}
			if (!IS_BLIP_VALID(&iLocal_1090))
			{
				iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 896[2], 330, 0f, 2, 0);
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					SET_BLIP_PRIORITY(&iLocal_1090, 3);
				}
			}
			if (!IS_OBJECT_VALID(&fLocal_984))
			{
				GET_OBJECT_POSITION(&bLocal_4 + 896[2], &Local_1075);
				GET_OBJECT_ORIENTATION(&bLocal_4 + 896[2], &Local_1078);
				fLocal_984 = Function_521(StackVal, StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, &Global_54076, (4.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(&fLocal_984))
				{
				}
			}
			Function_235(&iLocal_631);
			iLocal_623 = 13;
			break;
		
		case 0x0000000D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_377("ranch08_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_235(&iLocal_631);
				Function_235(&iLocal_635);
				Function_235(&fLocal_639);
				iLocal_623 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_473(&fLocal_639, (2.0f * 60.0f), (2.0f * 200.0f), &bLocal_627, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_658, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&iLocal_1090))
				{
					REMOVE_BLIP(&iLocal_1090);
				}
				if (IS_OBJECT_VALID(&fLocal_984))
				{
					Function_520(&fLocal_984);
				}
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
					{
						Function_439(3, 1, 1);
					}
				}
			}
			else
			{
				if (Function_374(&fLocal_639, 200.0f, &bLocal_629, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_658, 0, 0, 0, 334))
				{
					if (IS_BLIP_VALID(&iLocal_1090))
					{
						REMOVE_BLIP(&iLocal_1090);
					}
					if (IS_OBJECT_VALID(&fLocal_984))
					{
						Function_520(&fLocal_984);
					}
					if (IS_ACTOR_VALID(&bLocal_629))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_629)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_629, 334, 0, 2, 0);
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(&bLocal_629))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_629)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_629));
						}
					}
					if (!IS_BLIP_VALID(&iLocal_1090))
					{
						iLocal_1090 = ADD_BLIP_FOR_OBJECT(&bLocal_4 + 896[2], 330, 0f, 2, 0);
						if (IS_BLIP_VALID(&iLocal_1090))
						{
							SET_BLIP_PRIORITY(&iLocal_1090, 3);
						}
					}
					if (!IS_OBJECT_VALID(&fLocal_984))
					{
						GET_OBJECT_POSITION(&bLocal_4 + 896[2], &Local_1075);
						GET_OBJECT_ORIENTATION(&bLocal_4 + 896[2], &Local_1078);
						fLocal_984 = Function_521(StackVal, StackVal, &bLocal_528, "RANCH08GATEWAY01", Local_1075, Local_1078, &Global_54076, (4.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(&fLocal_984))
						{
						}
					}
					if (IS_OBJECT_VALID(&fLocal_984))
					{
						if (GATEWAY_UPDATE(&fLocal_984))
						{
							if (IS_BLIP_VALID(&iLocal_1090))
							{
								REMOVE_BLIP(&iLocal_1090);
							}
							if (IS_OBJECT_VALID(&fLocal_984))
							{
								Function_520(&fLocal_984);
							}
							if (IS_ACTOR_VALID(&bLocal_627))
							{
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_627)))
								{
									Function_439(3, 0, 1);
								}
							}
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_254();
							Function_235(&iLocal_631);
							iLocal_623 = 106;
						}
					}
				}
				if (IS_BLIP_VALID(Function_519(3)))
				{
					Function_439(3, 0, 1);
				}
			}
			break;
		
		case 0x0000006A:
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_627);
			if (SQUAD_IS_VALID(&Local_1100 + 88))
			{
				bLocal_970 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1100 + 88);
				Function_234(Local_530, bLocal_970);
			}
			PRINTINT(bLocal_970);
			PRINTNL();
			bLocal_971 = (11 - bLocal_970);
			PRINTINT(bLocal_971);
			PRINTNL();
			iLocal_643[0] = 1;
			Function_235(&iLocal_631);
			iLocal_622 = 1;
			iLocal_623 = 0;
			break;
	}
	return;
}

var Function_519(int iParam0) //Position: 0x1F7D2 / 128978
{
	return &Global_15402[iParam014] + 104;
}

void Function_520(float fParam0) //Position: 0x1F7E2 / 128994
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		if (DECOR_CHECK_EXIST(&fParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&fParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&fParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&fParam0, "voldestroy"))
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
		DESTROY_OBJECT(&fParam0);
	}
	return;
}

bool Function_521(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x1F878 / 129144
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

void Function_522() //Position: 0x1F963 / 129379
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_setOff", "Ranch08_setOff", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1F9A8 / 129448
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 808[1], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 808[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 808[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 808[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 808[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_524();
	return;
}

void Function_524() //Position: 0x1FB6B / 129899
{
	Function_322();
	if (!SQUAD_IS_VALID(&Local_1100 + 64))
	{
		*(&Local_1100 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1100 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1100 + 64);
			Function_319(&Local_1100, &bLocal_528, &bLocal_4 + 1440, &iLocal_1056, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&Local_1100 + 64, 0);
			Function_318(&Local_1100 + 64, 1);
			Function_317(&Local_1100 + 64, 0);
			Function_316(&Local_1100 + 64, 0);
			Function_315(&Local_1100 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1100 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 608, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1096))
	{
		bLocal_1096 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_528, "COWS02_SQUAD"));
		if (SQUAD_IS_VALID(&bLocal_1096))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1096);
			Function_496(&bLocal_1096, &bLocal_528, &bLocal_4 + 1520, "RANCH08_COWS02", &iLocal_1056, 10, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_330(&bLocal_1096, 0);
			Function_318(&bLocal_1096, 1);
			Function_317(&bLocal_1096, 0);
			Function_316(&bLocal_1096, 0);
			Function_315(&bLocal_1096, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1096, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &bLocal_4 + 632, -1.0f);
		}
	}
	return;
}

void Function_525(float fParam0, int iParam1) //Position: 0x1FD09 / 130313
{
	Global_26174.f_8 = fParam0;
	Global_26174.f_12 = iParam1;
	Global_26174.f_16 = 1;
	return;
}

void Function_526(int[] iParam0) //Position: 0x1FD23 / 130339
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

void Function_527() //Position: 0x1FD48 / 130376
{
	if (Function_307(&iLocal_1040) <= 0.0f)
	{
		switch (iLocal_979)
		{
			case 0x00000000:
				iLocal_979++;
				break;
			
			case 0x00000001:
				if (iLocal_623 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (bLocal_980 == 0)
						{
							Function_536();
						}
						else if (bLocal_980 == 1)
						{
							Function_535();
						}
						else if (bLocal_980 == 2)
						{
							Function_534();
						}
						else if (bLocal_980 == 3)
						{
							Function_533();
						}
						else if (bLocal_980 > 4)
						{
							Function_532();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_979++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_529(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_1022)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979 = 3;
					}
				}
				if (iLocal_623 > 14)
				{
					Function_235(&iLocal_635);
					iLocal_979 = 8;
				}
				break;
			
			case 0x00000003:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_980 == 0)
					{
						Function_534();
					}
					else if (bLocal_980 == 1)
					{
						Function_533();
					}
					else if (bLocal_980 > 2)
					{
						Function_532();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979++;
					}
				}
				break;
			
			case 0x00000004:
				Function_529(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_1022)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979 = 5;
					}
				}
				if (iLocal_623 > 14)
				{
					Function_235(&iLocal_635);
					iLocal_979 = 8;
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_980 != 0 || bLocal_980 != 1)
					{
						Function_532();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_979++;
						}
					}
					else
					{
						iLocal_979++;
					}
				}
				break;
			
			case 0x00000006:
				Function_529(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_1022)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_979 = 7;
					}
				}
				if (iLocal_623 > 14)
				{
					Function_235(&iLocal_635);
					iLocal_979 = 8;
				}
				break;
			
			case 0x00000007:
				Function_529(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_623 > 14)
				{
					Function_235(&iLocal_635);
					iLocal_979 = 8;
				}
				break;
			
			case 0x00000008:
				Function_529(1, 1, 0x420c0000, 0x41c80000);
				if (Function_307(&iLocal_635) <= 10.0f)
				{
					if (!Function_140())
					{
						Function_528();
						Function_235(&iLocal_635);
					}
				}
				break;
			
			case 0x00000009:
				iLocal_979++;
				break;
		}
		Function_235(&iLocal_1040);
	}
	return;
}

void Function_528() //Position: 0x1FF91 / 130961
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_noOnHorse", "Ranch08_noOnHorse", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_529(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1FFDC / 131036
{
	if (Function_307(&iLocal_1044) <= 3.0f)
	{
		Function_531();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1027)
				{
					iLocal_1027 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_getsOffHorse", "Ranch08_getsOffHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
				}
				else if (Function_307(&iLocal_635) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_NoOnHorse", "Ranch08_NoOnHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
					Function_235(&iLocal_635);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1027)
				{
					iLocal_1027 = 0;
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_629))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_629, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_thrownOffHorse", "Ranch08_thrownOffHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_235(&iLocal_1044);
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_627, 1,15f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_rideIntoBonHorse", "Ranch08_rideIntoBonHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
				}
			}
			if (!Function_420(&Global_54076, &bLocal_627, &iParam2))
			{
				if (&bParam1)
				{
					if (!iLocal_1025)
					{
						if (!iLocal_1022)
						{
							uLocal_988 = &bLocal_4 + 2056;
							if (Function_530(&Global_54076, &bLocal_627, &uLocal_988))
							{
								iLocal_1022 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_418();
								Function_235(&iLocal_1044);
							}
							else
							{
								iLocal_1022 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_417();
								Function_235(&iLocal_1044);
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_627, &iParam3))
			{
				if (&bParam1)
				{
					if (iLocal_1022)
					{
						iLocal_1022 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_416();
						Function_235(&iLocal_1044);
					}
				}
			}
		}
	}
}

bool Function_530(var uParam0, int iParam1, int iParam2) //Position: 0x20279 / 131705
{
	var uVar0;
	var uVar2;
	float fVar4;
	var uVar5;
	float fVar6;
	var uVar7;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (IS_OBJECT_VALID(&iParam2))
			{
				GET_OBJECT_POSITION(&uParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(&iParam2, &uVar0, &fVar4, &uVar5);
				GET_OBJECT_POSITION(&iParam1, &uVar2);
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

void Function_531() //Position: 0x202D8 / 131800
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_627)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_430();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_GunBon", "Ranch08_GunBon", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
		else if (&iVar0 == &bLocal_4 + 240[02])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_429();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_PullBonHorse", "Ranch08_PullBonHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_425();
						Function_235(&iLocal_1044);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_426();
						Function_235(&iLocal_1044);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_426();
					Function_235(&iLocal_1044);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_GunChar", "Ranch08_GunChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_235(&iLocal_1044);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_432(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_627, "Ranch08_ShootRandom", "Ranch08_ShootRandom", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_235(&iLocal_1044);
				}
			}
		}
	}
	return;
}

void Function_532() //Position: 0x20563 / 132451
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_noTalk", "Ranch08_noTalk", false, 2, 0, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_533() //Position: 0x205A8 / 132520
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_nearPasture_v2_AA", "Ranch08_nearPasture_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_nearPasture_v2_AB", "Ranch08_nearPasture_v2_AB", true, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_534() //Position: 0x20644 / 132676
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_nearPasture_v1_AA", "Ranch08_nearPasture_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_nearPasture_v1_AB", "Ranch08_nearPasture_v1_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_nearPasture_v1_AC", "Ranch08_nearPasture_v1_AC", false, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535() //Position: 0x20721 / 132897
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AA", "Ranch08_rideOut_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AB", "Ranch08_rideOut_v2_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AC1", "Ranch08_rideOut_v2_AC1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AC2", "Ranch08_rideOut_v2_AC2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AD", "Ranch08_rideOut_v2_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_280", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v2_AE", "Ranch08_rideOut_v2_AE", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AF1", "Ranch08_rideOut_v2_AF1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v2_AF2", "Ranch08_rideOut_v2_AF2", true, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x20927 / 133415
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v1_AA1", "Ranch08_rideOut_v1_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_220", "", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v1_AA2", "Ranch08_rideOut_v1_AA2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AB1", "Ranch08_rideOut_v1_AB1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AB2", "Ranch08_rideOut_v1_AB2", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch08_rideOut_v1_AC", "Ranch08_rideOut_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AD1", "Ranch08_rideOut_v1_AD1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch08_rideOut_v1_AD2", "Ranch08_rideOut_v1_AD2", true, 2, 1, 0, 1);
		Function_288(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x20AF8 / 133880
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
	{
		switch (iLocal_977)
		{
			case 0x00000000:
				iLocal_977++;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					if (IS_VOLUME_VALID(&bLocal_4 + 672))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 672))
						{
							iLocal_977++;
						}
					}
				}
				break;
			
			case 0x00000002:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[12], true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bLocal_627, &bLocal_4 + 2064, 10.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				iLocal_977++;
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					if (IS_VOLUME_VALID(&bLocal_4 + 752))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 752))
						{
							SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[12], 4);
							iLocal_977++;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (IS_VOLUME_VALID(&bLocal_4 + 680))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 192[12], &bLocal_4 + 680))
					{
						iLocal_977++;
					}
				}
				break;
			
			case 0x00000005:
				GET_OBJECT_POSITION(&bLocal_4 + 944[7], &uLocal_1084);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uLocal_1084, 3.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[12], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[12], true);
				iLocal_977++;
				break;
			
			case 0x00000006:
				iLocal_977++;
				break;
			}
	}
	return;
}

void Function_538() //Position: 0x20C9F / 134303
{
	if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
	{
		switch (iLocal_976)
		{
			case 0x00000000:
				iLocal_976++;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_RIDING(&bLocal_4 + 192[02]))
				{
					iLocal_976++;
				}
				if (iLocal_1026)
				{
					iLocal_1026 = 0;
					GET_OBJECT_POSITION(&bLocal_4 + 1528, &uLocal_1081);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &bLocal_4 + 272[02], 0, 1, 2, 2147483647);
					TASK_GO_NEAR_COORD(false, &uLocal_1081, 3.0f, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					if (IS_VOLUME_VALID(&bLocal_4 + 672))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 672))
						{
							iLocal_976++;
						}
					}
				}
				if (iLocal_1026)
				{
					iLocal_1026 = 0;
					GET_OBJECT_POSITION(&bLocal_4 + 1528, &uLocal_1081);
					bLocal_967 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &bLocal_4 + 272[02], 0, 1, 2, 2147483647);
					TASK_GO_NEAR_COORD(false, &uLocal_1081, 3.0f, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
					TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				}
				break;
			
			case 0x00000003:
				MEMORY_PREFER_RIDING(&bLocal_4 + 192[02], true);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bLocal_627, &bLocal_4 + 2072, 12.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				iLocal_976++;
				break;
			
			case 0x00000004:
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					if (IS_VOLUME_VALID(&bLocal_4 + 752))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 752))
						{
							SET_ACTOR_MAX_SPEED(&bLocal_4 + 192[02], 4);
							iLocal_976++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_VOLUME_VALID(&bLocal_4 + 680))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_4 + 192[02], &bLocal_4 + 680))
					{
						iLocal_976++;
					}
				}
				break;
			
			case 0x00000006:
				GET_OBJECT_POSITION(&bLocal_4 + 944[6], &uLocal_1081);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uLocal_1081, 3.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_4 + 192[02], bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
				iLocal_976++;
				break;
			
			case 0x00000007:
				iLocal_976++;
				break;
			}
	}
	return;
}

void Function_539() //Position: 0x20F31 / 134961
{
	if (IS_ACTOR_VALID(&bLocal_627))
	{
		switch (iLocal_969)
		{
			case 0x00000000:
				iLocal_969++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_627, true);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_627);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_627);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_627);
				Function_439(3, 0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_627, true);
				SET_ACTORS_HORSE(&bLocal_627, &bLocal_4 + 240[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_627, &bLocal_4 + 240[02]);
				GET_OBJECT_POSITION(&bLocal_4 + 896[3], &bLocal_1069);
				bLocal_967 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, &bLocal_4 + 240[02], 0, 1, 2, 2147483647);
				TASK_FOLLOW_PATH(0, &bLocal_4 + 2056, 5, 1, 0, 1, false);
				TASK_GO_TO_COORD(0, &bLocal_1069, 5);
				TASK_FACE_COORD(0, &bLocal_4 + 1416, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_627, bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				TASK_PRIORITY_SET(&bLocal_627, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_627, 9.0f);
				iLocal_969++;
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
				{
					if (GET_MOUNT(&bLocal_627) == &bLocal_4 + 240[02])
					{
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000003:
				if (IS_VOLUME_VALID(&bLocal_4 + 744))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 744))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_627, 9.0f);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000004:
				if (IS_VOLUME_VALID(&bLocal_4 + 752))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 752))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_627, 15.0f);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000005:
				if (IS_VOLUME_VALID(&bLocal_4 + 760))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 760))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_627, 9.0f);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000006:
				if (IS_VOLUME_VALID(&bLocal_4 + 768))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_627, &bLocal_4 + 768))
					{
						REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_627);
						iLocal_969++;
					}
				}
				break;
			
			case 0x00000007:
				if (GET_TASK_STATUS(&bLocal_627, 23) == 0)
				{
					bLocal_1018 = true;
					iLocal_969++;
				}
				break;
			
			case 0x00000008:
				iLocal_969++;
				break;
			}
	}
	return;
}

void Function_540() //Position: 0x21172 / 135538
{
	if (!IS_ACTOR_VALID(&bLocal_629) || !IS_ACTOR_ALIVE(&bLocal_629))
	{
		if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_4 + 240[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_4 + 240[02], 0);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_4 + 272[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_4 + 272[02], 0);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_4 + 272[12]))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_4 + 272[12], 0);
			}
		}
	}
	return;
}

void Function_541(bool bParam0, bool bParam1) //Position: 0x2120A / 135690
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_231(&bLocal_629);
			if (GET_MOUNT(&Global_54076) != &bLocal_629)
			{
				if (GET_MOUNT(&Global_54076) == &bLocal_4 + 240[02])
				{
					iLocal_1026 = 1;
					TASK_CLEAR(&bLocal_4 + 240[02]);
					uLocal_1094 = &bLocal_629;
					bLocal_629 = &bLocal_4 + 240[02];
					*(&bLocal_4 + 240[02]) = &uLocal_1094;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_629);
					Function_543(&bLocal_629, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_629, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(&bLocal_629, 0);
					SET_ACTORS_HORSE(&bLocal_627, &bLocal_4 + 240[02]);
					SET_MOST_RECENT_MOUNT(&bLocal_627, &bLocal_4 + 240[02]);
					SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 240[02], 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_4 + 240[02], &bLocal_4);
				}
				else if (GET_MOUNT(&Global_54076) == &bLocal_4 + 272[02])
				{
					iLocal_1026 = 1;
					TASK_CLEAR(&bLocal_4 + 272[02]);
					uLocal_1094 = &bLocal_629;
					bLocal_629 = &bLocal_4 + 272[02];
					*(&bLocal_4 + 272[02]) = &uLocal_1094;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_629);
					Function_543(&bLocal_629, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_629, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(&bLocal_629, 0);
					SET_ACTORS_HORSE(&bLocal_627, &bLocal_4 + 272[02]);
					SET_MOST_RECENT_MOUNT(&bLocal_627, &bLocal_4 + 272[02]);
					SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 272[02], 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_4 + 272[02], &bLocal_4);
				}
				else if (GET_MOUNT(&Global_54076) == &bLocal_4 + 272[12])
				{
					iLocal_1026 = 1;
					TASK_CLEAR(&bLocal_4 + 272[12]);
					uLocal_1094 = &bLocal_629;
					bLocal_629 = &bLocal_4 + 272[12];
					*(&bLocal_4 + 272[12]) = &uLocal_1094;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_629);
					Function_543(&bLocal_629, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_629, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(&bLocal_629, 0);
					SET_ACTORS_HORSE(&bLocal_627, &bLocal_4 + 272[12]);
					SET_MOST_RECENT_MOUNT(&bLocal_627, &bLocal_4 + 272[12]);
					SET_ALLOW_RIDE_BY_AI(&bLocal_4 + 272[12], 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_4 + 272[12], &bLocal_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(&bLocal_629, GET_AMBIENT_LAYOUT());
					bLocal_629 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &bLocal_629);
					Function_543(&bLocal_629, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_629, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_629, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(&bLocal_627) != &bLocal_4 + 240[02])
		{
			MEMORY_PREFER_RIDING(&bLocal_627, true);
			SET_ACTORS_HORSE(&bLocal_627, &bLocal_4 + 240[02]);
			Function_542(&bLocal_627, &bLocal_4 + 240[02], 1);
		}
	}
	return;
}

void Function_542(var uParam0, var uParam1, bool bParam2) //Position: 0x214E2 / 136418
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_360(&uParam1);
			uVar0 = Function_360(&uParam1);
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

void Function_543(int iParam0, int iParam1) //Position: 0x215F3 / 136691
{
	Function_544(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_544(float fParam0) //Position: 0x21608 / 136712
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

void Function_545() //Position: 0x217D7 / 137175
{
	switch (iLocal_623)
	{
		case 0x00000006:
			Function_597(&Local_530, 1);
			bLocal_528 = CREATE_LAYOUT("ranch08_DynamicLayout");
			Function_596();
			Function_336(0,25f);
			Function_335(0.0f);
			Function_525(2.0f, 180.0f);
			Function_333(4, 1);
			Function_344();
			iLocal_623 = 7;
			break;
		
		case 0x00000007:
			if (Function_594())
			{
				if (!IS_LAYOUTREF_VALID(&bLocal_4))
				{
					Function_589();
				}
				if (!Function_342(&Local_530))
				{
					iLocal_623 = 8;
				}
				else
				{
					iLocal_623 = 11;
				}
			}
			break;
		
		case 0x00000008:
			bLocal_980 = Function_385();
			PRINTINT(bLocal_980);
			PRINTNL();
			bLocal_968 = false;
			iLocal_969 = 0;
			iLocal_976 = 0;
			iLocal_977 = 0;
			iLocal_979 = 0;
			Function_340(&Global_54076, &bLocal_4 + 808[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_627))
			{
				TASK_CLEAR(&bLocal_627);
				TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_627, true);
				Function_340(&bLocal_627, &bLocal_4 + 808[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_629))
			{
				TASK_CLEAR(&bLocal_629);
				TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_629, true);
				Function_340(&bLocal_629, &bLocal_4 + 808[2], 1, 1, 1);
			}
			iLocal_623 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(Global_46816[0]) || bLocal_624 != 4294967295))
			{
				Function_588();
				iLocal_623 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_553("$/cutscene/r8/r8", &iLocal_610, &Local_530, &iLocal_622, 148718, 148565, 147646, 147439, 147380, 143894, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_623 = 11;
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(&bLocal_4))
			{
				uLocal_625 = CREATE_OBJECT_ITERATOR(&bLocal_4);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_439(3, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_627, 0);
			SET_CRIPPLE_ENABLE(&bLocal_627, 0);
			SET_ACTOR_FACTION(&bLocal_627, 20);
			TASK_PRIORITY_SET(&bLocal_627, true);
			TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_627, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_627, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_627, GET_ACTOR_MAX_HEALTH(&bLocal_627));
			TREAT_AMBIENT_SPEECH_AS_SCRIPTED(&bLocal_627, 2);
			RESET_ACTOR_GAITS(&bLocal_629, 0);
			TASK_PRIORITY_SET(&bLocal_629, true);
			TASK_STAND_STILL(&bLocal_629, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_629, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_629, GET_ACTOR_MAX_HEALTH(&bLocal_629));
			SET_ALLOW_RIDE_BY_AI(&bLocal_629, 0);
			Function_290(&iLocal_631);
			Function_290(&iLocal_635);
			Function_290(&fLocal_639);
			Function_290(&iLocal_1052);
			Function_290(&iLocal_1044);
			Function_290(&iLocal_1040);
			Function_290(&iLocal_1028);
			Function_290(&iLocal_1032);
			Function_290(&iLocal_1036);
			Function_290(&iLocal_1048);
			Function_551("FTR_SONG_01", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_549(&uLocal_663, &bLocal_528);
			iLocal_622 = 0;
			iLocal_623 = 0;
			Function_547(&Local_530, &iLocal_622, &iLocal_623);
			Function_546(StackVal, StackVal, StackVal, StackVal, StackVal, Local_530);
			switch (iLocal_622)
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

void Function_546(struct<41> Param0) //Position: 0x21B2C / 138028
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_622 = 0;
			break;
		
		case 0x00000002:
			iLocal_622 = 1;
			break;
		
		case 0x00000003:
			iLocal_622 = 2;
			break;
		
		case 0x00000004:
			iLocal_622 = 3;
			break;
		
		case 0x00000005:
			iLocal_622 = 4;
			break;
		
		case 0x00000006:
			iLocal_622 = 5;
			break;
		
		case 0x00000007:
			iLocal_622 = 6;
			break;
		
		case 0x00000008:
			iLocal_622 = 7;
			break;
		
		case 0x00000009:
			iLocal_622 = 8;
			break;
		
		case 0x0000000A:
			iLocal_622 = 101;
			break;
	}
}

void Function_547(int iParam0, var uParam1, int iParam2) //Position: 0x21BC1 / 138177
{
	if (Function_342(&iParam0))
	{
		uParam1 = Function_492(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_548();
	}
	return;
}

void Function_548() //Position: 0x21BFD / 138237
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

int Function_549(struct<2>[] Param0) //Position: 0x21C4E / 138318
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_550(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_550(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_550(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_550(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_550(struct<13> Param0) //Position: 0x22327 / 140071
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

void Function_551(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x223F6 / 140278
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_552(uParam1), &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

var Function_552(bool bParam0) //Position: 0x22418 / 140312
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

bool Function_553(var uParam0, int iParam1, struct<41> Param2) //Position: 0x2296D / 141677
{
	if (!&bParam15)
	{
		Function_561(&iParam1, &uParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_342(&Param2) || Param2.f_40 < 1))
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
				Function_235(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_560())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_559(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_235(&iParam1 + 4);
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
					Function_559(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_307(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_307(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_557(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_559(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_235(&iParam1 + 4);
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
						Function_556(1.0f);
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
						Function_554();
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
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_342(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_554() //Position: 0x22FCF / 143311
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_555();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_555() //Position: 0x23014 / 143380
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_556(bool bParam0) //Position: 0x23026 / 143398
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

void Function_557(var uParam0, int iParam1) //Position: 0x23043 / 143427
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
			if ((&iVar3 == &Global_54076 && !Function_558(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_558(int iParam0) //Position: 0x230D5 / 143573
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

int Function_559(bool bParam0) //Position: 0x23106 / 143622
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

bool Function_560() //Position: 0x231C9 / 143817
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

void Function_561(var uParam0, var uParam1) //Position: 0x23206 / 143878
{
	Function_305(&uParam0, &uParam1, 0);
	return;
}

int Function_562() //Position: 0x23216 / 143894
{
	switch (iLocal_622)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&bLocal_4))
			{
				if (Function_563())
				{
					Function_589();
					Function_340(&Global_54076, &bLocal_4 + 808[0], 1, 1, 1);
					Function_340(&bLocal_627, &bLocal_4 + 808[1], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
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
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_563() //Position: 0x232A1 / 144033
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_572(&iLocal_568))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_629))
		{
			bLocal_629 = Function_404(1, 1, -854,493f, 90,444f, 2424.0f, 367,286f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_627))
		{
			bLocal_627 = Function_564(3, 0, 1, -848,92f, 90,353f, 2448.0f, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

var Function_564(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x23310 / 144144
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
		Function_439(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_571(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_567(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_566(&bVar1, 0, 0, 0, 0);
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
		Function_565(&bVar1, 0);
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

void Function_565(var uParam0, bool bParam1) //Position: 0x23850 / 145488
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_566(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x23872 / 145522
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

var Function_567(int iParam0, int iParam1) //Position: 0x238D3 / 145619
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_320(iParam0))
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
						Function_568(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_568(var uParam0, int iParam1) //Position: 0x23961 / 145761
{
	Function_570(&uParam0);
	Function_569(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_569(int iParam0) //Position: 0x2398D / 145805
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_570(int iParam0) //Position: 0x239B3 / 145843
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

var Function_571(int iParam0, var uParam1) //Position: 0x23A89 / 146057
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

bool Function_572(struct<2>[] Param0) //Position: 0x23B2F / 146223
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_576();
	iVar1 = 0;
	if (!Function_176(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_575(&(Param0[iVar02]), 8);
		}
		else if (Function_574())
		{
			iVar1 = 1;
			Function_575(&(Param0[iVar02]), 8);
		}
		Function_575(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_176(&(Param0[02]), 8) || iVar1));
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
				Function_575(&(Param0[iVar02]), 1);
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
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_575(&(Param0[iVar02]), 2);
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
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_575(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_575(&(Param0[iVar02]), 2);
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
	Function_573();
	return 1;
}

void Function_573() //Position: 0x23EF1 / 147185
{
	if (!Function_302(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_574() //Position: 0x23F31 / 147249
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

void Function_575(struct<13> Param0) //Position: 0x23F5F / 147295
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_576() //Position: 0x23F72 / 147314
{
	if (!Function_302(128))
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

int Function_577() //Position: 0x23FB4 / 147380
{
	switch (iLocal_622)
	{
		case 0x00000063:
			Function_283(2, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_283(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_578() //Position: 0x23FEF / 147439
{
	switch (iLocal_622)
	{
		case 0x00000063:
			Function_340(&Global_54076, &bLocal_4 + 808[0], 0, 1, 1);
			Function_340(&bLocal_627, &bLocal_4 + 808[1], 1, 1, 1);
			Function_340(&bLocal_629, &bLocal_4 + 808[2], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 808[8], 1, 1, 1);
				ACTOR_POP_NEXT_GAIT(&bLocal_4 + 192[02], 2, 0);
				GET_OBJECT_POSITION(&bLocal_4 + 272[02], &uLocal_1081);
				TASK_GO_NEAR_COORD(&bLocal_4 + 192[02], &uLocal_1081, 3.0f, 2);
				TASK_PRIORITY_SET(&bLocal_4 + 192[02], true);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_579() //Position: 0x240BE / 147646
{
	switch (iLocal_622)
	{
		case 0x00000063:
			if (!Function_580() && !Function_572(&iLocal_542))
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

bool Function_580() //Position: 0x240EE / 147694
{
	Function_583(&bLocal_4 + 8, 550, 2, 0);
	Function_583(&bLocal_4 + 8, 155, 2, 0);
	Function_583(&bLocal_4 + 8, 977, 2, 0);
	Function_583(&bLocal_4 + 8, 976, 2, 0);
	Function_583(&bLocal_4 + 8, 980, 2, 0);
	Function_583(&bLocal_4 + 8, 288, 2, 0);
	Function_583(&bLocal_4 + 8, 160, 2, 0);
	Function_581(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/ranch08_close1", 1, 0);
	Function_581(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/ranch08_close2", 1, 0);
	Function_581(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_581(&bLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	if (Function_572(&bLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_581(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x2426C / 148076
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_582(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_575(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_582(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x242AA / 148138
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_176(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_575(&(Param0[iVar02]), 4);
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

var Function_583(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x24379 / 148345
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
			Function_575(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_575(&(Param0[iVar02]), 8);
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

int Function_584() //Position: 0x24455 / 148565
{
	switch (iLocal_622)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&bLocal_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-845,937f, 91,87f, 2442,901f), Vector(-0,533f, 0,023f, -0,846f));
				return 1;
			}
			if (Function_563())
			{
				Function_589();
				Function_340(&Global_54076, &bLocal_4 + 808[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_627))
				{
					Function_340(&bLocal_627, &bLocal_4 + 808[1], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_627, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_627, true);
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_585() //Position: 0x244EE / 148718
{
	switch (iLocal_622)
	{
		case 0x00000063:
			Function_301(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_586(StackVal, &bLocal_528, (&Global_6667[728] + 88), &bLocal_4 + 368[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_301(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_360(&Global_54076);
			Function_586(StackVal, &bLocal_528, Function_360(&Global_54076), &iLocal_610 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_586(bool bParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x2456F / 148847
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&bParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&bParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &bParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_587(&uVar1, &bParam0);
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

void Function_587(var uParam0, int iParam1) //Position: 0x2480F / 149519
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

void Function_588() //Position: 0x24891 / 149649
{
	if (!SQUAD_IS_VALID(&bLocal_4 + 264))
	{
		Function_331();
		if (SQUAD_IS_VALID(&bLocal_4 + 264))
		{
			Function_330(&bLocal_4 + 264, 0);
			Function_329(&bLocal_4 + 264, 3);
			Function_327(&bLocal_4 + 264, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 240[02]))
			{
				Function_340(&bLocal_4 + 240[02], &bLocal_4 + 808[1], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 264, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 312))
	{
		Function_326();
		if (SQUAD_IS_VALID(&bLocal_4 + 312))
		{
			Function_330(&bLocal_4 + 312, 0);
			Function_329(&bLocal_4 + 312, 3);
			Function_327(&bLocal_4 + 312, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 272[02]))
			{
				Function_340(&bLocal_4 + 272[02], &bLocal_4 + 808[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 272[12]))
			{
				Function_340(&bLocal_4 + 272[12], &bLocal_4 + 808[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 312, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_4 + 232))
	{
		Function_325();
		if (SQUAD_IS_VALID(&bLocal_4 + 232))
		{
			Function_330(&bLocal_4 + 232, 0);
			SQUAD_SET_FACTION(&bLocal_4 + 232, 20);
			Function_327(&bLocal_4 + 232, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_4 + 192[02]))
			{
				Function_340(&bLocal_4 + 192[02], &bLocal_4 + 808[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_4 + 192[12]))
			{
				Function_340(&bLocal_4 + 192[12], &bLocal_4 + 808[7], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_4 + 232, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_589() //Position: 0x24A51 / 150097
{
	var uVar0;
	
	Function_593(4, 1);
	uVar0 = &uVar0;
	bLocal_4 = CREATE_LAYOUT("ranch08_layout");
	*(&bLocal_4 + 400) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "CutsceneVol_set");
	*(&bLocal_4 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-848,3712f, 90,35291f, 2445,679f), Vector(0.0f, 99,08824f, 0.0f), Vector(18.0f, 4.0f, 9.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 400, &bLocal_4 + 368[0]);
	*(&bLocal_4 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-594,6225f, 100,4008f, 2599,981f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 400, &bLocal_4 + 368[1]);
	*(&bLocal_4 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-892,1973f, 90,35291f, 2489,938f), Vector(0.0f, 31,55275f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 400, &bLocal_4 + 368[2]);
	*(&bLocal_4 + 448) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "Boundary01_set");
	*(&bLocal_4 + 408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_01", 2,802597E-45f, Vector(-150,2647f, 75,65933f, 2657,363f), Vector(0.0f, 258,8724f, 0.0f), Vector(500.0f, 100.0f, 150.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 448, &bLocal_4 + 408[0]);
	*(&bLocal_4 + 408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_02", 2,802597E-45f, Vector(-415,4513f, 94,9704f, 2454,234f), Vector(0.0f, 169,513f, 0.0f), Vector(500.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 448, &bLocal_4 + 408[1]);
	*(&bLocal_4 + 408[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_03", 2,802597E-45f, Vector(-466,4846f, 74,78233f, 2804,887f), Vector(0.0f, 176,9571f, 0.0f), Vector(600.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 448, &bLocal_4 + 408[2]);
	*(&bLocal_4 + 408[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary01_04", 2,802597E-45f, Vector(-761,4756f, 74,739f, 2581,294f), Vector(0.0f, 258,8724f, 0.0f), Vector(600.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 448, &bLocal_4 + 408[3]);
	*(&bLocal_4 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "Boundary02_set");
	*(&bLocal_4 + 456[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_01", 2,802597E-45f, Vector(-150,2647f, 75,65933f, 2657,363f), Vector(0.0f, 258,8724f, 0.0f), Vector(500.0f, 100.0f, 150.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 496, &bLocal_4 + 456[0]);
	*(&bLocal_4 + 456[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_02", 2,802597E-45f, Vector(-415,4513f, 94,9704f, 2454,234f), Vector(0.0f, 169,513f, 0.0f), Vector(500.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 496, &bLocal_4 + 456[1]);
	*(&bLocal_4 + 456[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_03", 2,802597E-45f, Vector(-761,4756f, 74,739f, 2581,294f), Vector(0.0f, 258,8724f, 0.0f), Vector(600.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 496, &bLocal_4 + 456[2]);
	*(&bLocal_4 + 456[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary02_04", 2,802597E-45f, Vector(-573,3082f, 74,78233f, 2818,244f), Vector(0.0f, 172,0813f, 0.0f), Vector(400.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 496, &bLocal_4 + 456[3]);
	*(&bLocal_4 + 576) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_4, "Boundary03_set");
	*(&bLocal_4 + 504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_01", 2,802597E-45f, Vector(-150,2647f, 75,65933f, 2657,363f), Vector(0.0f, 258,8724f, 0.0f), Vector(500.0f, 100.0f, 150.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[0]);
	*(&bLocal_4 + 504[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_02", 2,802597E-45f, Vector(-369,7574f, 94,9704f, 2461,444f), Vector(0.0f, 169,513f, 0.0f), Vector(400.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[1]);
	*(&bLocal_4 + 504[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_03", 2,802597E-45f, Vector(-416,9867f, 74,78233f, 2820,555f), Vector(0.0f, 180,6157f, 0.0f), Vector(400.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[2]);
	*(&bLocal_4 + 504[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_04", 2,802597E-45f, Vector(-825,7921f, 74,49309f, 2744,199f), Vector(0.0f, 159,1222f, 0.0f), Vector(500.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[3]);
	*(&bLocal_4 + 504[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_05", 2,802597E-45f, Vector(-654,3135f, 94,9704f, 2403,064f), Vector(0.0f, 166,1985f, 0.0f), Vector(200.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[4]);
	*(&bLocal_4 + 504[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_06", 2,802597E-45f, Vector(-797,2315f, 94,9704f, 2381,855f), Vector(0.0f, 187,227f, 0.0f), Vector(150.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[5]);
	*(&bLocal_4 + 504[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_07", 2,802597E-45f, Vector(-1047,842f, 94,9704f, 2497,873f), Vector(0.0f, 254,5417f, 0.0f), Vector(300.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[6]);
	*(&bLocal_4 + 504[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_boundary03_08", 2,802597E-45f, Vector(-847,5237f, 94,9704f, 2364,97f), Vector(0.0f, 156,7978f, 0.0f), Vector(150.0f, 60.0f, 200.0f));
	ADD_TO_VOLUME_SET(&bLocal_4 + 576, &bLocal_4 + 504[7]);
	*(&bLocal_4 + 584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_objective02a", 4,203895E-45f, Vector(-607,9998f, 101,11f, 2604f), Vector(0.0f, 20.0f, 0.0f), Vector(12.0f, 10.0f, 12.0f));
	*(&bLocal_4 + 592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_objective02", 2,802597E-45f, Vector(-605,2075f, 101,3961f, 2603,51f), Vector(0.0f, 251,984f, 0.0f), Vector(250.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 600) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_objective04", 2,802597E-45f, Vector(-896,1979f, 92,79475f, 2484,28f), Vector(0.0f, 123,5795f, 0.0f), Vector(5.0f, 10.0f, 8.0f));
	*(&bLocal_4 + 608) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_wander00", 4,203895E-45f, Vector(-268,0001f, 95,37256f, 2661,347f), Vector(0.0f, 20.0f, 0.0f), Vector(5.0f, 10.0f, 5.0f));
	*(&bLocal_4 + 616) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_wander02a", 4,203895E-45f, Vector(-607,9998f, 101,11f, 2604f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&bLocal_4 + 624) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_wander02b", 4,203895E-45f, Vector(-631,9999f, 101,3961f, 2596f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&bLocal_4 + 632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_wander02c", 4,203895E-45f, Vector(-635,9999f, 101,3961f, 2612f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&bLocal_4 + 640) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_wander03", 4,203895E-45f, Vector(-396f, 96,37646f, 2658,814f), Vector(0.0f, 20.0f, 0.0f), Vector(35.0f, 10.0f, 35.0f));
	*(&bLocal_4 + 648) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_wander04", 4,203895E-45f, Vector(-912,0001f, 90,35291f, 2468.0f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&bLocal_4 + 656) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_cow_death_range", 2,802597E-45f, Vector(-308,2039f, 98,38434f, 2757,428f), Vector(0.0f, 0.0f, 0.0f), Vector(60.0f, 30.0f, 40.0f));
	*(&bLocal_4 + 664) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_cow_death", 2,802597E-45f, Vector(-308,2039f, 37,31578f, 2789,299f), Vector(-0,2986102f, -2,178008f, -8,913841f), Vector(100.0f, 100.0f, 100.0f));
	*(&bLocal_4 + 672) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_ranchhand00", 2,802597E-45f, Vector(-861,2865f, 91,10178f, 2420,159f), Vector(0.0f, 168,1032f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 680) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_ranchhand01", 2,802597E-45f, Vector(-635,9999f, 101,3961f, 2612f), Vector(0.0f, 251,984f, 0.0f), Vector(250.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 688) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_ranchhand02", 2,802597E-45f, Vector(-884,5491f, 90,35291f, 2499,372f), Vector(0.0f, 225,2709f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 696) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict01", 2,802597E-45f, Vector(-595,9999f, 99,38824f, 2616f), Vector(0.0f, -25,27668f, 0.0f), Vector(10.0f, 10.0f, 5.0f));
	*(&bLocal_4 + 704) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict02", 2,802597E-45f, Vector(-594,2804f, 99,38824f, 2609,817f), Vector(0.0f, -25,27668f, 0.0f), Vector(10.0f, 10.0f, 5.0f));
	*(&bLocal_4 + 712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_restrict03", 2,802597E-45f, Vector(-595,9543f, 99,38824f, 2612,743f), Vector(0.0f, -25,27668f, 0.0f), Vector(10.0f, 10.0f, 12.0f));
	*(&bLocal_4 + 720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_herd01", 2,802597E-45f, Vector(-519,9999f, 98,38434f, 2628f), Vector(0.0f, 260,6196f, 0.0f), Vector(250.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 728) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_herd02", 2,802597E-45f, Vector(-791,2373f, 96,41742f, 2561,129f), Vector(0.0f, 258,8724f, 0.0f), Vector(500.0f, 40.0f, 20.0f));
	*(&bLocal_4 + 736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_herd03", 2,802597E-45f, Vector(-895,7979f, 90,35291f, 2490,816f), Vector(0.0f, 230,6411f, 0.0f), Vector(500.0f, 40.0f, 20.0f));
	*(&bLocal_4 + 744) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_companion00", 2,802597E-45f, Vector(-847,9861f, 91,4473f, 2406,087f), Vector(0.0f, 112,1841f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 752) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_companion00a", 2,802597E-45f, Vector(-683,1235f, 95,04074f, 2541,214f), Vector(0.0f, 233,2848f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 760) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_companion00b", 2,802597E-45f, Vector(-319,646f, 96,99079f, 2617,098f), Vector(0.0f, 256,1349f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 768) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_companion00c", 2,802597E-45f, Vector(-261,1627f, 95,37256f, 2662,355f), Vector(0.0f, 233,2348f, 0.0f), Vector(100.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_trigger_companion01", 2,802597E-45f, Vector(-886,8922f, 90,35291f, 2497,051f), Vector(0.0f, 225,2709f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_streaming", 2,802597E-45f, Vector(-352,0001f, 96,37646f, 2696.0f), Vector(0.0f, 0.0f, 0.0f), Vector(300.0f, 1.0f, 300.0f));
	*(&bLocal_4 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_4, "volume_exclude_ranchers", 2,802597E-45f, Vector(-900,3502f, 90,35291f, 2484,621f), Vector(0.0f, 211,2811f, 0.0f), Vector(50.0f, 40.0f, 10.0f));
	*(&bLocal_4 + 800) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 808[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart01", Vector(-844,1066f, 90,36007f, 2441,676f), Vector(0.0f, -405,6323f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[0], &bLocal_4 + 800);
	*(&bLocal_4 + 808[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart01", Vector(-848,9199f, 90,35291f, 2448.0f), Vector(0.0f, 86,67705f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[1], &bLocal_4 + 800);
	*(&bLocal_4 + 808[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart01", Vector(-839,6217f, 90,35291f, 2437,951f), Vector(0.0f, 44,59867f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[2], &bLocal_4 + 800);
	*(&bLocal_4 + 808[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart01", Vector(-853,7443f, 90,35294f, 2447,199f), Vector(0.0f, 389,3228f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[3], &bLocal_4 + 800);
	*(&bLocal_4 + 808[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse01Start01", Vector(-848,1097f, 90,35207f, 2435,269f), Vector(0.0f, 436,8297f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[4], &bLocal_4 + 800);
	*(&bLocal_4 + 808[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse02Start01", Vector(-863,3921f, 90,35207f, 2435,162f), Vector(0.0f, 399,0738f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[5], &bLocal_4 + 800);
	*(&bLocal_4 + 808[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand01Start01", Vector(-855,9774f, 90,35297f, 2434,973f), Vector(0.0f, 405,637f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[6], &bLocal_4 + 800);
	*(&bLocal_4 + 808[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand02Start01", Vector(-856.0f, 90,35297f, 2440.0f), Vector(0.0f, 443,567f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[7], &bLocal_4 + 800);
	*(&bLocal_4 + 808[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "ForemanStart01", Vector(-845,7654f, 90,36137f, 2442,09f), Vector(0.0f, 5,92682f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 808[8], &bLocal_4 + 800);
	*(&bLocal_4 + 888) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 896[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart02", Vector(-248f, 95,37256f, 2660.0f), Vector(0.0f, 81,06476f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[0], &bLocal_4 + 888);
	*(&bLocal_4 + 896[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart02", Vector(-248f, 95,37256f, 2664.0f), Vector(0.0f, 13,9814f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[1], &bLocal_4 + 888);
	*(&bLocal_4 + 896[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart02", Vector(-245,6666f, 95,37256f, 2660.0f), Vector(0.0f, 95,56507f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[2], &bLocal_4 + 888);
	*(&bLocal_4 + 896[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart02", Vector(-245,6666f, 95,37256f, 2664.0f), Vector(0.0f, 52,89483f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 896[3], &bLocal_4 + 888);
	*(&bLocal_4 + 936) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 944[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart03", Vector(-591,9998f, 99,38824f, 2616f), Vector(0.0f, 27,48118f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[0], &bLocal_4 + 936);
	*(&bLocal_4 + 944[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart03", Vector(-591,9999f, 100,3922f, 2600f), Vector(0.0f, 229,8711f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[1], &bLocal_4 + 936);
	*(&bLocal_4 + 944[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart03", Vector(-591,0979f, 99,38824f, 2612,688f), Vector(0.0f, 52,6909f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[2], &bLocal_4 + 936);
	*(&bLocal_4 + 944[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseEnd03", Vector(-593,7145f, 99,38824f, 2617,904f), Vector(0.0f, 235,5671f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[3], &bLocal_4 + 936);
	*(&bLocal_4 + 944[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart03", Vector(-593,1656f, 99,38824f, 2618,768f), Vector(0.0f, 47,43582f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[4], &bLocal_4 + 936);
	*(&bLocal_4 + 944[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseEnd03", Vector(-591,9999f, 99,38824f, 2612f), Vector(0.0f, -123,6245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[5], &bLocal_4 + 936);
	*(&bLocal_4 + 944[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand01Start03", Vector(-651,9999f, 101,3961f, 2604f), Vector(0.0f, 576,1392f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[6], &bLocal_4 + 936);
	*(&bLocal_4 + 944[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand02Start03", Vector(-627,9998f, 101,3961f, 2584f), Vector(0.0f, 576,1392f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[7], &bLocal_4 + 936);
	*(&bLocal_4 + 944[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse02Start03", Vector(-651,9999f, 101,3961f, 2608f), Vector(0.0f, 243,425f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[8], &bLocal_4 + 936);
	*(&bLocal_4 + 944[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse01Start03", Vector(-627,9998f, 101,3961f, 2588f), Vector(0.0f, 244,3532f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 944[9], &bLocal_4 + 936);
	*(&bLocal_4 + 1032) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1040[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart04", Vector(-372f, 96,37646f, 2680.0f), Vector(0.0f, -35,92851f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[0], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart04", Vector(-356f, 96,37646f, 2684.0f), Vector(0.0f, 51,0537f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[1], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart04", Vector(-356,0001f, 95,8914f, 2668.0f), Vector(0.0f, 137,5271f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[2], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart04", Vector(-360f, 96,09892f, 2668.0f), Vector(0.0f, 166,8409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[3], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse01Start04", Vector(-404f, 95,74117f, 2636.0f), Vector(0.0f, 199,48f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[4], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse02Start04", Vector(-416f, 96,37646f, 2672.0f), Vector(0.0f, 301,1436f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[5], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand01Start04", Vector(-408,0001f, 96,17288f, 2632.0f), Vector(0.0f, 208,0311f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[6], &bLocal_4 + 1032);
	*(&bLocal_4 + 1040[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand02Start04", Vector(-420f, 96,37646f, 2672.0f), Vector(0.0f, 208,4707f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1040[7], &bLocal_4 + 1032);
	*(&bLocal_4 + 1112) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1120[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStart05", Vector(-372f, 96,37646f, 2680.0f), Vector(0.0f, -35,92851f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[0], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStart05", Vector(-356f, 96,37646f, 2684.0f), Vector(0.0f, 51,0537f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[1], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStart05", Vector(-356,0001f, 95,8914f, 2668.0f), Vector(0.0f, 137,5271f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[2], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStart05", Vector(-360f, 96,09892f, 2668.0f), Vector(0.0f, 171,0134f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[3], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse01Start05", Vector(-404f, 95,74117f, 2636.0f), Vector(0.0f, 199,48f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[4], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse02Start05", Vector(-416f, 96,37646f, 2672.0f), Vector(0.0f, 301,1436f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[5], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand01Start05", Vector(-408,0001f, 96,17288f, 2632.0f), Vector(0.0f, 208,0311f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[6], &bLocal_4 + 1112);
	*(&bLocal_4 + 1120[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand02Start05", Vector(-420f, 96,37646f, 2672.0f), Vector(0.0f, 208,4707f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1120[7], &bLocal_4 + 1112);
	*(&bLocal_4 + 1192) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1200[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerStartLast", Vector(-892,0001f, 90,21791f, 2488.0f), Vector(0.0f, 107,0352f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[0], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionStartLast", Vector(-892,0001f, 90,35291f, 2496.0f), Vector(0.0f, 19,44652f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[1], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionEndLast", Vector(-789,684f, 93,233f, 2412,109f), Vector(0.0f, 28,34227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[2], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand01StartLast", Vector(-880,0001f, 90,35291f, 2484.0f), Vector(0.0f, 128,6165f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[3], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand01EndLast", Vector(-860,0001f, 90,35291f, 2496f), Vector(0.0f, 224,2596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[4], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand02StartLast", Vector(-904,0001f, 90,35291f, 2496.0f), Vector(0.0f, 260,1118f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[5], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand02EndLast", Vector(-863,6053f, 90,35831f, 2504,139f), Vector(0.0f, 260,1118f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[6], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand03StartLast", Vector(-911,1899f, 90,35291f, 2489,235f), Vector(0.0f, 265,317f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[7], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand03EndLast", Vector(-894,3778f, 90,35291f, 2483,087f), Vector(0.0f, 380,8433f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[8], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand04StartLast", Vector(-903,6192f, 90,35291f, 2485,608f), Vector(0.0f, 248,4792f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[9], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "RanchHand04EndLast", Vector(-892,0001f, 90,35291f, 2476.0f), Vector(0.0f, 375,2749f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[10], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse01StartLast", Vector(-883,1916f, 90,35291f, 2484,795f), Vector(0.0f, 135,4803f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[11], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "Horse02StartLast", Vector(-901,2327f, 90,35291f, 2494,488f), Vector(0.0f, 216,7514f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[12], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "PlayerHorseStartLast", Vector(-889,8765f, 90,35291f, 2489,938f), Vector(0.0f, 60,4441f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[13], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseStartLast", Vector(-892,7091f, 90,35291f, 2491,732f), Vector(0.0f, -118,0327f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[14], &bLocal_4 + 1192);
	*(&bLocal_4 + 1200[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "CompanionHorseEndLast", Vector(-860,0001f, 90,35291f, 2496f), Vector(0.0f, -118,0327f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1200[15], &bLocal_4 + 1192);
	*(&bLocal_4 + 1336) = CREATE_OBJECTSET_IN_LAYOUT("CowPoints01Set", &bLocal_4, 8, 0);
	*(&bLocal_4 + 1344[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_cow01_01", Vector(-627,9999f, 101,3961f, 2620,023f), Vector(0.0f, 31,0067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1344[0], &bLocal_4 + 1336);
	*(&bLocal_4 + 1344[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_cow01_02", Vector(-623,9998f, 101,3961f, 2616,057f), Vector(0.0f, 68,15549f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_4 + 1344[1], &bLocal_4 + 1336);
	*(&bLocal_4 + 1368) = Vector(-915,6606f, 90,35291f, 2450,725f);
	*(&bLocal_4 + 1368 + 12) = Vector(0.0f, 61,71318f, 0.0f);
	*(&bLocal_4 + 1392) = Vector(-912,0001f, 90,35291f, 2448f);
	*(&bLocal_4 + 1392 + 12) = Vector(0.0f, 61,71318f, 0.0f);
	*(&bLocal_4 + 1416) = Vector(-268,0001f, 95,37256f, 2661,347f);
	*(&bLocal_4 + 1416 + 12) = Vector(0.0f, -281,7473f, 0.0f);
	*(&bLocal_4 + 1440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective00", Vector(-268,0001f, 95,37256f, 2661,347f), Vector(0.0f, -281,7473f, 0.0f));
	*(&bLocal_4 + 1448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective02", Vector(-607,9998f, 101,11f, 2604f), Vector(0.0f, 67,49557f, 0.0f));
	*(&bLocal_4 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective02_1", Vector(-606,6039f, 101,11f, 2602,913f), Vector(0.0f, 57,59213f, 0.0f));
	*(&bLocal_4 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective02_2", Vector(-635,9999f, 101,3961f, 2612f), Vector(0.0f, 57,59213f, 0.0f));
	*(&bLocal_4 + 1472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective03a", Vector(-312,0001f, 98,38434f, 2740.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_4 + 1480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective03b", Vector(-396f, 96,37646f, 2658,814f), Vector(0.0f, 58,88443f, 0.0f));
	*(&bLocal_4 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_objective04", Vector(-912,0001f, 90,35291f, 2468.0f), Vector(0.0f, 41,1324f, 0.0f));
	*(&bLocal_4 + 1496) = Vector(-630,487f, 108,803f, 2617,055f);
	*(&bLocal_4 + 1496 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&bLocal_4 + 1520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_spawn_cows02", Vector(-635,9998f, 101,3961f, 2608f), Vector(0.0f, -2,635109f, 0.0f));
	*(&bLocal_4 + 1528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_move_ranchhand01_01", Vector(-864,2888f, 90,35291f, 2423,017f), Vector(0.0f, -10,30052f, 0.0f));
	*(&bLocal_4 + 1536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_move_ranchhand01_02", Vector(-872,5187f, 90,31625f, 2423,226f), Vector(0.0f, -10,30052f, 0.0f));
	*(&bLocal_4 + 1544) = Vector(-883,1916f, 90,35291f, 2484,795f);
	*(&bLocal_4 + 1544 + 12) = Vector(0.0f, -140,592f, 0.0f);
	*(&bLocal_4 + 1568) = Vector(-901,2327f, 90,35291f, 2494,488f);
	*(&bLocal_4 + 1568 + 12) = Vector(0.0f, -143,0692f, 0.0f);
	*(&bLocal_4 + 1592) = Vector(-900,0001f, 90,35291f, 2460.0f);
	*(&bLocal_4 + 1592 + 12) = Vector(0.0f, -143,338f, 0.0f);
	*(&bLocal_4 + 1616) = Vector(-896,0001f, 90,35291f, 2460.0f);
	*(&bLocal_4 + 1616 + 12) = Vector(0.0f, -157,649f, 0.0f);
	*(&bLocal_4 + 1640) = Vector(-884,0001f, 90,35291f, 2500f);
	*(&bLocal_4 + 1640 + 12) = Vector(0.0f, -143,338f, 0.0f);
	*(&bLocal_4 + 1664) = Vector(-527,9999f, 98,38434f, 2640f);
	*(&bLocal_4 + 1664 + 12) = Vector(0.0f, 57,59213f, 0.0f);
	*(&bLocal_4 + 1688) = Vector(-551,9998f, 98,94958f, 2676f);
	*(&bLocal_4 + 1688 + 12) = Vector(0.0f, 57,59213f, 0.0f);
	*(&bLocal_4 + 1712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_teleport_herd01", Vector(-571,9998f, 98,97831f, 2616f), Vector(0.0f, 244,3766f, 0.0f));
	*(&bLocal_4 + 1720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "point_teleport_herd02", Vector(-563,9998f, 98,38434f, 2632f), Vector(0.0f, 249,0479f, 0.0f));
	*(&bLocal_4 + 1728) = Vector(-599,9999f, 100,3922f, 2612f);
	*(&bLocal_4 + 1728 + 12) = Vector(0.0f, 47,43582f, 0.0f);
	*(&bLocal_4 + 1752) = Vector(-591,9999f, 99,38824f, 2612f);
	*(&bLocal_4 + 1752 + 12) = Vector(0.0f, 230,3344f, 0.0f);
	*(&bLocal_4 + 1776) = Vector(-599,9999f, 100,3922f, 2608f);
	*(&bLocal_4 + 1776 + 12) = Vector(0.0f, 86,47206f, 0.0f);
	*(&bLocal_4 + 1800) = Vector(-919,9626f, 90,32674f, 2496,137f);
	*(&bLocal_4 + 1800 + 12) = Vector(0.0f, 86,47206f, 0.0f);
	*(&bLocal_4 + 1824) = Vector(-593,7145f, 99,38824f, 2617,904f);
	*(&bLocal_4 + 1824 + 12) = Vector(0.0f, 235,5634f, 0.0f);
	*(&bLocal_4 + 1848) = Vector(-852,0001f, 90,35291f, 2500.0f);
	*(&bLocal_4 + 1848 + 12) = Vector(0.0f, 235,5115f, 0.0f);
	*(&bLocal_4 + 1872) = Vector(-794,9116f, 92,2652f, 2425,005f);
	*(&bLocal_4 + 1872 + 12) = Vector(0.0f, 235,5115f, 0.0f);
	*(&bLocal_4 + 1896) = Vector(-900,0001f, 90,35291f, 2496f);
	*(&bLocal_4 + 1896 + 12) = Vector(0.0f, 235,5115f, 0.0f);
	*(&bLocal_4 + 1920) = Vector(-352,0001f, 96,37646f, 2696.0f);
	*(&bLocal_4 + 1920 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&bLocal_4 + 1944) = Vector(-846,7406f, 90,35291f, 2430,584f);
	*(&bLocal_4 + 1944 + 12) = Vector(0.0f, 61,71318f, 0.0f);
	*(&bLocal_4 + 1968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "ranch08_close1", "ranch08_close1", Vector(-898,978f, 90,342f, 2487,389f), Vector(0.0f, 315.0f, 0.0f));
	*(&bLocal_4 + 1976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "ranch08_close2", "ranch08_close2", Vector(-892,3127f, 90,289f, 2482,892f), Vector(0.0f, 103,283f, 0.0f));
	*(&bLocal_4 + 1984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-903,6192f, 90,35291f, 2485,608f), Vector(0.0f, -119,1492f, 0.0f));
	*(&bLocal_4 + 1992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_4, "stand_spit", "stand_spit", Vector(-911,1899f, 90,35291f, 2489,235f), Vector(0.0f, -88,52366f, 0.0f));
	PushArrayP();
	*(&bLocal_4 + 2000) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_herd_left01");
	PushArrayP();
	*(&bLocal_4 + 2008) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_herd_middle01");
	PushArrayP();
	*(&bLocal_4 + 2016) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_herd_right01");
	PushArrayP();
	*(&bLocal_4 + 2024) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_cow_stampede01");
	PushArrayP();
	*(&bLocal_4 + 2032) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_herd_left02");
	PushArrayP();
	*(&bLocal_4 + 2040) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_herd_middle02");
	PushArrayP();
	*(&bLocal_4 + 2048) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_herd_right02");
}

var @ïEWÄ-@B½åºEðÄ,yB¼ÿbEqÇÄ*ýB½ýEÉÓÄ(ÝØB¾oEÄ%ïqB¿2­E1ÏÄ BÃVEhÂÄéBÄR£E!ÄÀBÄÒE¨Ä&qBÅïEÕÁÄÿþBÆ)E ÚÄÿüBÅ¶ìE!jdÃú BÄÚE!Õ6Ãê BÃ`E"gÃÖL:BÃVHE"é²ÃÈjBÂ[E#]ÃÓ_(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165) //Position: 0x27BC9 / 162761
{
	*(&bLocal_4 + 2056) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, (StackVal - 15882 % 4.0f * 9121));
}

struct<8> 	§EHrÄ-¡¤B¾C>EvÄ-B¾ÝEèTÄ-(ÊB¾@ïEµÄ,ÈWB½åºEü(Ä+¾B¼ÿbE\Ä*V³B½ýE¯Ä(°þB¾oEãlÄ%Ö:B¿2­E_ÄôBÃVEHëÄù+BÄR£EfoÄõIBÄÒEBÄ¦BÅïE¶ï,Â:B°:¯opath_rancher_right01 p  D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231) //Position: 0x27D7D / 163197
{
	int iVar46448;
	
	Unknown_Function();
	*(StackVal - 19276) = StackVal;
	(StackVal * 6000)->f_50262 = StackVal;
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
}

void åºE¹Ä,ÔB¼ÿbEòÄ*éFB½ýEäÄ)
³B¾oEÄÄ&¨B¿2­EQ?Ä 4BÃVEÄ§BÄR£E¥ÓÄ*8BÄÒEÇëÄI;BÅïEô,Â:B°:¯opath_rancher01   p   0ÄTö¹B´´´E/ÄUåB´´µE&?ÄVÌB´´±E	ÓÄWnB´´°Eìs,Â(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183) //Position: 0x27F19 / 163609
{
	*(&bLocal_4 + 2080) = StackVal;
	PushArrayP();
	*(&bLocal_4 + 2088) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_4, "path_rancher02");
	return;
}

void Function_593(int iParam0, int iParam1) //Position: 0x2804E / 163918
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

bool Function_594() //Position: 0x28098 / 163992
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_595(0))
		{
			return 0;
		}
		if (!Function_580())
		{
			return 0;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\ranch08"))
		{
			return 0;
		}
		if (!Function_572(&iLocal_542))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_627))
		{
			bLocal_627 = Function_564(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_627, 1))
		{
			return 0;
		}
		if (!Function_408())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_629))
		{
			bLocal_629 = Function_404(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_629, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_595(bool bParam0) //Position: 0x28150 / 164176
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

void Function_596() //Position: 0x28180 / 164224
{
	Function_581(&iLocal_542, "ranch08", 10, 0);
	Function_583(&iLocal_542, 1008, 2, 0);
	Function_583(&iLocal_542, 1009, 2, 0);
	Function_583(&iLocal_542, 1010, 2, 0);
	Function_583(&iLocal_542, 1011, 2, 0);
	Function_583(&iLocal_542, 550, 2, 0);
	return;
}

void Function_597(int iParam0, bool bParam1) //Position: 0x281D6 / 164310
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_603(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_342(&iParam0))
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
	if (!Function_342(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_228();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_254();
	Function_555();
	Function_243("");
	Function_602(0);
	Function_601();
	Function_220();
	Function_219();
	ENABLE_JOURNAL_REPLAY(0);
	Function_600();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_404(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_353(0, 0x40400000);
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
	Function_599(13);
	Function_599(14);
	Function_599(25);
	Function_599(24);
	Function_599(12);
	Function_599(27);
	Function_599(26);
	Function_599(15);
	Function_598();
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

void Function_598() //Position: 0x28616 / 165398
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

void Function_599(int iParam0) //Position: 0x2869B / 165531
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_600() //Position: 0x286BB / 165563
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

void Function_601() //Position: 0x28701 / 165633
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_602(int iParam0) //Position: 0x28717 / 165655
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_223())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_603(int iParam0, int iParam1) //Position: 0x28750 / 165712
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
			Function_604(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_604(struct<113> Param0) //Position: 0x287D7 / 165847
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

void Function_605() //Position: 0x28835 / 165941
{
	return;
}

void Function_606(int iParam0, int iParam1) //Position: 0x2883B / 165947
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
					Function_543(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_543(&iParam0, 0);
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
				if (IS_ACTOR_VALID(&iParam1) && IS_ACTOR_VALID(&bLocal_4 + 192[02]))
				{
					if (!GET_ACTORS_HORSE(&iParam1) != &iVar0 && !GET_ACTORS_HORSE(&bLocal_4 + 192[02]) != &iVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
						}
						iParam0 = &iVar0;
						Function_543(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_543(&iParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_607(struct<25> Param0) //Position: 0x2893C / 166204
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
			Function_608(&Param0, 1);
			return 1;
		}
	}
	Function_608(&Param0, 0);
	return 0;
}

void Function_608(struct<25> Param0) //Position: 0x289C8 / 166344
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

bool Function_609(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x289F3 / 166387
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
		Function_608(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_628(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_627(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_627(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_613(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_608(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_612(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_611(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_612(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_610(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_243(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_611(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_608(&Param2, 0);
	return 0;
}

void Function_610(char* cParam0) //Position: 0x28E09 / 167433
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

void Function_611(struct<25> Param0) //Position: 0x28EFD / 167677
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

void Function_612(bool bParam0) //Position: 0x28F75 / 167797
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_613(struct<57> Param0) //Position: 0x28F99 / 167833
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
			return Function_624(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_617(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_624(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_614(&Param0, bVar2);
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
						bVar2 = Function_624(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_614(&Param0, bVar2);
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

var Function_614(int iParam0, bool bParam1) //Position: 0x2910A / 168202
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
				bParam1 = Function_616(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_615(16);
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
				bParam1 = Function_616(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_615(256);
			}
		}
	}
	return bParam1;
}

bool Function_615(int iParam0) //Position: 0x29246 / 168518
{
	return 2 | iParam0;
}

int Function_616(int iParam0) //Position: 0x29250 / 168528
{
	return 4 | iParam0;
}

int Function_617(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2925A / 168538
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
				iParam3 = Function_623(&iParam0, &iParam1, bParam4);
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
			return Function_615(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_618(&iParam0, &iParam1, 0, bParam4);
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
			return Function_615(16);
		}
	}
	return 0;
}

int Function_618(int iParam0, vector3 vParam1) //Position: 0x29315 / 168725
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_622(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_621(iVar0, 3, 1, bParam3))
			{
				if (!Function_627(&iParam0, 8, 1))
				{
					return Function_620(64, 1024, bParam2);
				}
			}
			return Function_619(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_621(iVar0, 2, 1, bParam3))
			{
				if (!Function_627(&iParam0, 32, 1))
				{
					return Function_620(64, 1024, bParam2);
				}
			}
			return Function_619(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_621(iVar0, 1, 1, bParam3))
			{
				if (!Function_627(&iParam0, 64, 1))
				{
					return Function_620(64, 1024, bParam2);
				}
			}
			return Function_619(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_621(iVar0, 3, 1, bParam3))
			{
				if (!Function_627(&iParam0, 128, 1))
				{
					return Function_620(64, 1024, bParam2);
				}
			}
			return Function_619(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_621(iVar0, 1, 1, bParam3))
			{
				if (!Function_627(&iParam0, 1024, 1))
				{
					return Function_620(64, 1024, bParam2);
				}
			}
			return Function_619(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_621(iVar0, 1, 1, bParam3))
			{
				if (!Function_627(&iParam0, 1024, 1))
				{
					return Function_620(64, 1024, bParam2);
				}
			}
			return Function_619(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_619(int iParam0, int iParam1, bool bParam2) //Position: 0x294DD / 169181
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_620(int iParam0, int iParam1, bool bParam2) //Position: 0x294F2 / 169202
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_621(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x29507 / 169223
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_622(int iParam0) //Position: 0x29524 / 169252
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

int Function_623(var uParam0, vector3 vParam1) //Position: 0x29597 / 169367
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_622(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_621(iVar0, 3, 1, bParam2))
			{
				if (!Function_627(&uParam0, 8, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000009:
			if (Function_621(iVar0, 3, 1, bParam2))
			{
				if (!Function_627(&uParam0, 8, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x0000006E:
			if (Function_621(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(&uParam0, 16, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x0000005B:
			if (Function_621(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(&uParam0, 32, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000031:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&uParam0, 64, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000007:
			if (Function_621(iVar0, 3, 1, bParam2))
			{
				if (!Function_627(&uParam0, 128, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000008:
			if (Function_621(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(&uParam0, 256, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000014:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&uParam0, 512, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000018:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&uParam0, 512, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000057:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&uParam0, 1024, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000058:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&uParam0, 1024, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_624(struct<65> Param0) //Position: 0x297C0 / 169920
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
						return Function_623(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_627(&Param0, 2, 1))
					{
						return Function_616(8);
					}
					return Function_615(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_627(&Param0, 4, 1))
					{
						return Function_616(16);
					}
					return Function_615(16);
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
							return Function_618(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_627(&Param0, 2, 1))
						{
							return Function_616(128);
						}
						return Function_615(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_627(&Param0, 4, 1))
						{
							return Function_616(256);
						}
						return Function_615(256);
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
						return Function_618(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_627(&Param0, 2, 1))
					{
						return Function_616(8);
					}
					return Function_615(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_627(&Param0, 4, 1))
					{
						return Function_616(16);
					}
					return Function_615(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_626(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_627(&Param0, 2, 1))
					{
						return Function_616(8);
					}
					return Function_615(8);
				}
				if (!Function_627(&Param0, 4, 1))
				{
					return Function_616(16);
				}
				return Function_615(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_618(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_625(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_615(128);
							}
							if (!Function_627(&Param0, 2, 1))
							{
								return Function_616(8);
							}
							return Function_615(8);
						}
						if (iParam4 == 2)
						{
							if (Function_625(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_615(256);
							}
							if (!Function_627(&Param0, 4, 1))
							{
								return Function_616(16);
							}
							return Function_615(16);
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

bool Function_625(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x29AA6 / 170662
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

int Function_626(int iParam0, vector3 vParam1) //Position: 0x29B74 / 170868
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_622(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_621(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(&iParam0, 16, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x0000005B:
			if (Function_621(iVar0, 2, 1, bParam2))
			{
				if (!Function_627(&iParam0, 32, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000057:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&iParam0, 1024, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		case 0x00000058:
			if (Function_621(iVar0, 1, 1, bParam2))
			{
				if (!Function_627(&iParam0, 1024, 1))
				{
					return Function_616(64);
				}
			}
			return Function_615(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_627(struct<69> Param0) //Position: 0x29C96 / 171158
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

int Function_628(int iParam0) //Position: 0x29CC0 / 171200
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

bool Function_629(bool bParam0) //Position: 0x29CF6 / 171254
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_630(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x29D14 / 171284
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

