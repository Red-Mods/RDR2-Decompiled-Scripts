//Decompiled with MagicRDR v1.0
//Function Count : 273
//Statics Count : 941
//Natives Count : 443
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 4;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
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
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 10;
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
	var uLocal_370 = 2;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	int iLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	bool bLocal_405 = false;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409[1] = { 0 };
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413[2] = { 0, 0 };
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 19;
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
	int iLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	char* cLocal_508 = NULL;
	int iLocal_509 = 0;
	bool bLocal_510 = false;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	bool bLocal_514 = false;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	int iLocal_527 = 0;
	bool bLocal_528 = false;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 18;
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
	bool bLocal_935 = false;
	bool bLocal_936 = false;
	bool bLocal_937 = false;
	bool bLocal_938 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_380 = 0;
	iLocal_381 = 0;
	iLocal_511 = 0;
	iLocal_512 = 0;
	iLocal_513 = 0;
	bLocal_514 = false;
	iLocal_515 = 0;
	iLocal_516 = 0;
	iLocal_517 = 1;
	iLocal_518 = 0;
	iLocal_527 = 0;
	bLocal_528 = false;
	bLocal_935 = false;
	bLocal_937 = false;
	bLocal_938 = false;
	bLocal_935 = false;
	bLocal_936 = false;
	bLocal_937 = false;
	iLocal_531 = 0;
	ALLOW_TUMBLEWEEDS(1);
	bLocal_936 = Function_272(&(Global_43791[iScriptParam_0]));
	if (bLocal_936 && Function_271(&Global_11752, iScriptParam_0))
	{
		if (Function_270(8))
		{
			bLocal_938 = true;
			Function_269(8);
		}
	}
	Function_268("Initializing Fort Mercer", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_532 = 1000;
		switch (iLocal_531)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_531 = 1;
				}
				iLocal_532 = 0;
				break;
			
			case 0x00000001:
				if (Function_267())
				{
					if (0 & Function_266())
					{
						uLocal_535 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Fort_Mercer/FortMercerMP", 0);
					}
					iLocal_531 = 2;
				}
				iLocal_532 = 0;
				break;
			
			case 0x00000002:
				if (Function_264())
				{
					Function_263(&(Global_43791[iScriptParam_0]), 32);
					iLocal_531 = 3;
				}
				iLocal_532 = 0;
				break;
			
			case 0x00000003:
				uLocal_533 = LAUNCH_NEW_SCRIPT_WITH_ARGS("FortMercerVol", &iScriptParam_0, 2, 0);
				Function_262(&Global_11752, &Global_13888, iScriptParam_0);
				iLocal_531 = 5;
				iLocal_532 = 0;
				break;
			
			case 0x00000005:
				if (Function_261(&Global_11752, &Global_13888, iScriptParam_0))
				{
					iLocal_531 = 4;
					iLocal_532 = 0;
				}
				else
				{
					iLocal_532 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_260(&(Global_43791[iScriptParam_0]), 16) && Function_259(Global_44085[iScriptParam_09]))
				{
					iLocal_531 = 6;
				}
				iLocal_532 = 0;
				break;
			
			case 0x00000006:
				if (!Function_260(&(Global_43791[iScriptParam_0]), 256) && Function_270(2))
				{
					Function_252(0, &uLocal_537, &iLocal_0 + 408);
					Function_251(0, &uLocal_537, &iLocal_0);
					Function_252(1, &uLocal_537, &iLocal_0 + 416);
					Function_251(1, &uLocal_537, &iLocal_0);
					Function_252(2, &uLocal_537, &iLocal_0 + 424);
					Function_251(2, &uLocal_537, &iLocal_0);
					Function_252(3, &uLocal_537, &iLocal_0 + 432);
					Function_251(3, &uLocal_537, &iLocal_0);
					Function_252(4, &uLocal_537, &iLocal_0 + 440);
					Function_251(4, &uLocal_537, &iLocal_0);
					Function_252(5, &uLocal_537, &iLocal_0 + 448);
					Function_251(5, &uLocal_537, &iLocal_0);
					Function_252(6, &uLocal_537, &iLocal_0 + 456);
					Function_251(6, &uLocal_537, &iLocal_0);
					Function_252(7, &uLocal_537, &iLocal_0 + 464);
					Function_251(7, &uLocal_537, &iLocal_0);
					Function_252(8, &uLocal_537, &iLocal_0 + 472);
					Function_251(8, &uLocal_537, &iLocal_0);
					Function_252(9, &uLocal_537, &iLocal_0 + 480);
					Function_251(9, &uLocal_537, &iLocal_0);
					Function_252(10, &uLocal_537, &iLocal_0 + 488);
					Function_251(10, &uLocal_537, &iLocal_0);
					Function_252(11, &uLocal_537, &iLocal_0 + 496);
					Function_251(11, &uLocal_537, &iLocal_0);
					Function_252(12, &uLocal_537, &iLocal_0 + 504);
					Function_251(12, &uLocal_537, &iLocal_0);
					Function_252(13, &uLocal_537, &iLocal_0 + 512);
					Function_251(13, &uLocal_537, &iLocal_0);
					Function_252(14, &uLocal_537, &iLocal_0 + 520);
					Function_251(14, &uLocal_537, &iLocal_0);
					Function_252(15, &uLocal_537, &iLocal_0 + 528);
					Function_251(15, &uLocal_537, &iLocal_0);
					Function_248(&Global_11752, &Global_13888, &uLocal_537, &Global_10996, iScriptParam_0);
				}
				else
				{
					bLocal_936 = false;
					bLocal_935 = true;
				}
				Function_263(&(Global_43791[iScriptParam_0]), 8);
				iLocal_531 = 7;
				iLocal_532 = 0;
				break;
			
			case 0x00000007:
				iLocal_531 = 8;
				iLocal_532 = 0;
				break;
			
			case 0x00000008:
				if (Function_247(iScriptParam_0, &Global_11752, bLocal_935))
				{
					Function_243(0, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					Function_243(1, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				Function_242(64);
				Function_238(2, 4294967295, 4294967295, 0, 3);
				Function_263(&(Global_43791[iScriptParam_0]), 512);
				iLocal_531 = 9;
				iLocal_532 = 0;
				break;
			
			case 0x00000009:
				Function_236(&iLocal_0, iScriptParam_0);
				Function_263(&(Global_43791[iScriptParam_0]), 4);
				Function_235("Finished Initializing Fort Mercer", 5.0f);
				iLocal_531 = 10;
				iLocal_532 = 0;
				DISABLE_CHILD_SECTOR("fom_rightWing01_crate01x");
				if (bLocal_936)
				{
					bLocal_936 = false;
					if (!Function_234(Global_46838[1]))
					{
						if (Function_233(25, 0) || !Global_6606)
						{
							if ((!Global_6623 && !Global_6625) && !Global_6627)
							{
								Function_232(Global_46953, 1);
								Function_228();
								bLocal_936 = true;
							}
						}
					}
					else
					{
						if (!Global_99146)
						{
							Function_227();
							Function_226("AA_GhostTown", 0, -1.0f, 1, 0, 0);
						}
						bLocal_936 = false;
					}
				}
				Function_224(&(Global_43791[iScriptParam_0]));
				if (!Function_233(24, 0) || Function_233(25, 0))
				{
					if (!Function_234(Global_46838[1]) && !Function_223(1))
					{
						if (!bLocal_935)
						{
							uLocal_358 = GET_SOUND_ID();
							PLAY_WALLA_SOUND_FROM_POSITION_PERSISTENT(StackVal, &uLocal_358, "FORT1_WALLA_MASTER", Vector(-2665,259f, 68,714f, 3440,039f));
						}
					}
				}
				break;
			
			case 0x0000000A:
				Function_220();
				if (bLocal_936)
				{
					if (!Function_134())
					{
						bLocal_937 = true;
					}
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		iLocal_532 = iLocal_532;
		WAIT(100);
	}
	if (Function_133(Global_46953) == 2)
	{
		if (bLocal_937)
		{
			Function_102(Global_46953);
			Function_41(Global_46953, 1, 1, 0);
			if (Function_40(Global_46954) <= 1 && Function_40(Global_46953) <= 1)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(14))
				{
					AWARD_ACHIEVEMENT(14);
				}
			}
		}
		else
		{
			Function_30(Global_46953);
		}
	}
	if (bLocal_936)
	{
		Function_22();
		if (!ACTOR_HAS_WEAPON(&Global_54076, true))
		{
			SET_WEAPONENUM_LOCKED(true, 1);
		}
	}
	if (bLocal_938)
	{
		Function_21(8);
	}
	Function_19();
	Function_8(&Global_11752, &Global_13888, iScriptParam_0, bLocal_935);
	Function_7();
	Function_2();
	if (IS_SOUND_ID_VALID(&uLocal_358))
	{
		STOP_SOUND(&uLocal_358);
	}
	Function_242(64);
	Function_1(&(Global_43791[iScriptParam_0]), 32);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	Function_1(&(Global_43791[iScriptParam_0]), 8);
	Function_1(&(Global_43791[iScriptParam_0]), 512);
	Function_1(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_535))
	{
		TERMINATE_SCRIPT(&uLocal_535);
	}
	if (IS_SCRIPT_VALID(&uLocal_533))
	{
		TERMINATE_SCRIPT(&uLocal_533);
	}
	ALLOW_TUMBLEWEEDS(0);
	Function_235("Unloaded Fort Mercer", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x6DF / 1759
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x6F9 / 1785
{
	Function_3(&iLocal_228 + 8);
	RELEASE_LAYOUT_REF(&iLocal_228);
	return;
}

void Function_3(int iParam0) //Position: 0x70C / 1804
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_4(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0x734 / 1844
{
	if (Function_6(&(Param0[iParam12]), 4))
	{
		if (Function_6(&(Param0[iParam12]), 1))
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
			Function_5(&(Param0[iParam12]), 1);
			Function_5(&(Param0[iParam12]), 2);
			Function_5(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_5(struct<13> Param0) //Position: 0x87F / 2175
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0x89C / 2204
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x8BA / 2234
{
	Function_3(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_8(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x8CD / 2253
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
	strcpy(&cVar0, Function_17(bParam2), 64);
	if (Function_15())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_260(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_14(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_14(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_13(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_14(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_13(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_260(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_270(2) || Function_260(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_14(&(Param0[iVar162]), 2) && !Function_14(&(Param0[iVar162]), 4))
		{
			Function_9(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_14(&(Param0[iVar162]), 2) && !Function_14(&(Param0[iVar162]), 4))
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
			Function_263(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_9(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xAEB / 2795
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_12(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_11(Global_43790), Function_10(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_14(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_14(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_12(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_11(Global_43790), Function_10(Global_43790), false, 0);
	}
}

int Function_10(int iParam0) //Position: 0xC51 / 3153
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

int Function_11(int iParam0) //Position: 0xC7C / 3196
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

void Function_12(var uParam0, int iParam1) //Position: 0xCB0 / 3248
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xCC1 / 3265
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_14(int iParam0, int iParam1) //Position: 0xCDB / 3291
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_15() //Position: 0xCF8 / 3320
{
	if (Function_16(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_16(bool bParam0, bool bParam1) //Position: 0xD13 / 3347
{
	return (bParam0 && bParam1) == 0;
}

var Function_17(int iParam0) //Position: 0xD20 / 3360
{
	if (!Function_18(iParam0))
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

bool Function_18(int iParam0) //Position: 0x11CE / 4558
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_19() //Position: 0x11E4 / 4580
{
	if (IS_OBJECTSET_VALID(&uLocal_529))
	{
		Function_20(&uLocal_529);
		DESTROY_OBJECTSET(&uLocal_529);
	}
	return;
}

void Function_20(var uParam0) //Position: 0x1202 / 4610
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
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_21(bool bParam0) //Position: 0x1251 / 4689
{
	if (Function_16(bParam0, 1) && !Function_16(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_22() //Position: 0x127E / 4734
{
	int iVar0;
	
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	DECOR_REMOVE(&Global_54076, "FOM_Boss_Launched");
	DECOR_REMOVE(&Global_54076, "SquadBlipped");
	DECOR_REMOVE(&Global_54076, "GangLeadersDead");
	DECOR_REMOVE(&Global_54076, "HelperIsDead");
	DECOR_REMOVE(&Global_54076, "MissionEnd");
	DECOR_REMOVE(&Global_54076, "FortMercerSafe");
	if (DECOR_CHECK_EXIST(&Global_54076, "AbandonedLeon"))
	{
		DECOR_REMOVE(&Global_54076, "AbandonedLeon");
	}
	REMOVE_JOURNAL_ENTRY(cLocal_508, 0);
	Function_29(&iLocal_519);
	Function_28();
	Function_27();
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Function_25(&Global_11752, &Global_13888, iVar0, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (6 - 1))
	{
		if (SQUAD_IS_VALID(&(uLocal_391[iVar0])))
		{
			Function_23(&(uLocal_391[iVar0]), 1, 0);
			DESTROY_OBJECT(&(uLocal_391[iVar0]));
		}
		iVar0++;
	}
	Function_23(&bLocal_405, 1, 0);
	DESTROY_OBJECT(&bLocal_405);
	Function_3(&iLocal_426);
	if (IS_OBJECT_VALID(&(uLocal_413[0])))
	{
		RELEASE_OBJECT_REF(&(uLocal_413[0]));
	}
	if (IS_OBJECT_VALID(&(uLocal_413[1])))
	{
		RELEASE_OBJECT_REF(&(uLocal_413[1]));
	}
	if (IS_OBJECT_VALID(&uLocal_419))
	{
		DESTROY_OBJECT(&uLocal_419);
	}
	if (IS_OBJECT_VALID(&uLocal_421))
	{
		DESTROY_OBJECT(&uLocal_421);
	}
	if (IS_OBJECT_VALID(&uLocal_423))
	{
		DESTROY_OBJECT(&uLocal_423);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_389))
	{
		RELEASE_LAYOUT_OBJECTS(&iLocal_389);
		RELEASE_LAYOUT_REF(&iLocal_389);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "TriggerCenter"))
	{
		DECOR_REMOVE(&Global_54076, "TriggerCenter");
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	if (IS_VOLUME_VALID(&iLocal_0 + 192))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 192);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 192);
	}
	if (Function_133(Global_46953) == 2)
	{
		Function_30(Global_46953);
	}
	return;
}

void Function_23(var uParam0, bool bParam1, bool bParam2) //Position: 0x14A8 / 5288
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
				if (!Function_24(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1531 / 5425
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_25(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x1551 / 5457
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_14(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_14(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_14(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_13(&(Param0[iVar02]), 8);
	}
	Function_13(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_26(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_9(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_26(int iParam0) //Position: 0x15F9 / 5625
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_27() //Position: 0x16A2 / 5794
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_28() //Position: 0x16B4 / 5812
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_29(vector3 vParam0) //Position: 0x16C9 / 5833
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_30(int iParam0) //Position: 0x16E0 / 5856
{
	int iVar0;
	
	if (!Function_38(iParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_31("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_31(int iParam0, int iParam1) //Position: 0x1733 / 5939
{
	struct<4> Var0;
	
	if (!Function_38(iParam1))
	{
		return;
	}
	switch (Function_35(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_32(Function_33(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &iParam0, &Var0, Function_35(iParam1), Function_33(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &iParam0, "PROCEDURAL", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &iParam0, "LOCATION", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &iParam0, "MINIGAME", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &iParam0, "ACTIONAREA_EVENT", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &iParam0, "JOB", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_32(int iParam0) //Position: 0x185D / 6237
{
	char* cVar0[16];
	
	if (!Function_15())
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

int Function_33(int iParam0) //Position: 0x1897 / 6295
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_34(int iParam0) //Position: 0x18B7 / 6327
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x18CE / 6350
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_36() //Position: 0x18E9 / 6377
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
			Function_37(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_37(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1B30 / 6960
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_38(int iParam0) //Position: 0x1B5C / 7004
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	if (!Function_39(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_39(int iParam0) //Position: 0x1B80 / 7040
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_40(int iParam0) //Position: 0x1B95 / 7061
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_41(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1BAF / 7087
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_38(iParam0))
	{
		Function_36();
		return;
	}
	bVar0 = Function_35(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_101())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_33(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_99(Global_10966) };
		}
		if (Function_101())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_93();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_101())
	{
		Function_92();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_31("DEED_COMPLETE", iParam0);
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
			Function_87(iParam0);
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
						switch (Function_33(iParam0))
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
			Function_44(1);
			Function_43(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_42(iParam0, &Var14);
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

void Function_42(int iParam0, struct<41> Param1) //Position: 0x1E0D / 7693
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_43(bool bParam0, int iParam1) //Position: 0x1E4B / 7755
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

void Function_44(bool bParam0) //Position: 0x1E8A / 7818
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_76();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_46();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_45(&Global_99144, 1);
		Function_45(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_45(int iParam0, bool bParam1) //Position: 0x1EDF / 7903
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_46() //Position: 0x1EF5 / 7925
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_54(0);
	Function_54(0);
	Function_51();
	Function_50();
	Function_49();
	Function_48();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_47();
	return;
}

void Function_47() //Position: 0x1F40 / 8000
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

void Function_48() //Position: 0x2046 / 8262
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

void Function_49() //Position: 0x2079 / 8313
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

void Function_50() //Position: 0x220C / 8716
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

void Function_51() //Position: 0x23C5 / 9157
{
	Function_52(&Global_42918, 1, 0);
	return;
}

void Function_52(struct<2317> Param0) //Position: 0x23D3 / 9171
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
	
	uVar0 = Function_53();
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

var Function_53() //Position: 0x25F0 / 9712
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_54(int iParam0) //Position: 0x2605 / 9733
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
					iVar2 = ((Function_70((50 + iVar4)) + Function_70((183 + iVar4))) + Function_70((90 + iVar4)));
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
	Function_55(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x26AC / 9900
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
		Function_69(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_68(iParam0);
	if (&bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2948 / 10568
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_67(390))), 32);
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
					bVar19 = (Function_66(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_66(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_64(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_61(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_58(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_57(), &Var9);
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

var Function_57() //Position: 0x2F86 / 12166
{
	int iVar0;
	
	return &iVar0;
}

var Function_58(int iParam0) //Position: 0x2F8F / 12175
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_59(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2FA0 / 12192
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_60(char* cParam0) //Position: 0x3097 / 12439
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_61(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x30B2 / 12466
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_63(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_62(Function_63(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_62(int iParam0, int iParam1) //Position: 0x3119 / 12569
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_63(int iParam0, bool bParam1) //Position: 0x312B / 12587
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x313D / 12605
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
	if (((Function_65(iParam0) != 19 || Function_65(iParam0) != 17) || Function_65(iParam0) != 10) || Function_65(iParam0) != 9)
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

int Function_65(int iParam0) //Position: 0x3271 / 12913
{
	return Global_55480[iParam016].f_96;
}

float Function_66(int iParam0) //Position: 0x3280 / 12928
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_67(int iParam0) //Position: 0x32B9 / 12985
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_68(int iParam0) //Position: 0x32F6 / 13046
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

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x3490 / 13456
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

int Function_70(bool bParam0) //Position: 0x36D4 / 14036
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_71() //Position: 0x3715 / 14101
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
		iVar2 = ((Function_70((50 + iVar3) + 15) + Function_70((183 + iVar3) + 15)) + Function_70((90 + iVar3) + 15));
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
	Function_55(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x379E / 14238
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
			iVar2 = ((Function_70((50 + iVar3) + 8) + Function_70((183 + iVar3) + 8)) + Function_70((90 + iVar3) + 8));
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
	Function_55(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x3835 / 14389
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
		iVar2 = ((Function_70((50 + iVar3)) + Function_70((183 + iVar3))) + Function_70((90 + iVar3)));
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
	Function_55(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x38B4 / 14516
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_55(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x38F1 / 14577
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
	Function_69(iParam0, bParam1, 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_56(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_76() //Position: 0x3AFD / 15101
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_15())
	{
		Function_84(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_84(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_77(StackVal, Var0))
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

bool Function_77(char* cParam0) //Position: 0x3BB4 / 15284
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_78(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3BCC / 15308
{
	int iVar0;
	
	iVar0 = Function_82(&uParam2, &fParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_80(&Global_99144, 1);
			Function_45(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_80(&Global_99144, 2);
			Function_45(&Global_99144, 1);
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
		Function_80(&Global_99144, 2);
		Function_45(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_79();
	return StackVal, Function_79();
}

struct<8> Function_79() //Position: 0x3CC4 / 15556
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_80(int iParam0, bool bParam1) //Position: 0x3CCE / 15566
{
	iParam0 = (iParam0 || bParam1);
	return;
}

bool Function_81(int iParam0) //Position: 0x3CDF / 15583
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x3CF5 / 15605
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
				fVar2 = Function_83(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_83(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_81(iVar0) && !&bParam1)
	{
		iVar0 = Function_82(&bParam0, 1);
	}
	return iVar0;
}

float Function_83(struct<2> Param0, struct<2> Param2) //Position: 0x3DC1 / 15809
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_84(float fParam0, int iParam1) //Position: 0x3DDE / 15838
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_86(&Global_54076, &Var3);
	if (!Function_85(Global_46760[0]))
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
	if (!Function_85(Global_46760[2]))
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
	if (!Function_85(Global_46760[1]))
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
	if (!Function_85(Global_46796[1]))
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
	if (!Function_85(Global_46796[3]))
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
	if (!Function_85(Global_46796[2]))
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
	if (!Function_85(Global_46796[4]))
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
	if (!Function_85(Global_46816[0]))
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
	if (!Function_85(Global_46816[1]))
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
	if (!Function_85(Global_46816[2]))
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
	if (!Function_85(Global_46838[0]))
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
	if (!Function_85(Global_46850[0]))
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
	if (!Function_85(Global_46850[1]))
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
	if (!Function_85(Global_46850[2]))
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
	if (!Function_85(Global_46866[0]))
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
	if (!Function_85(Global_46866[1]))
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
	if (!Function_85(Global_46866[2]))
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
	if (!Function_85(Global_46894[2]))
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
	if (!Function_85(Global_46894[3]))
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
	if (!Function_85(Global_46894[0]))
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
	if (!Function_85(Global_46914[0]))
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
	if (!Function_85(Global_46926[2]))
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
	if (!Function_85(Global_46926[1]))
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
	if (!Function_85(Global_46926[0]))
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
	if (!Function_85(Global_46838[1]))
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
	if (!Function_85(Global_46894[1]))
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
	Function_80(&Global_99144, 2);
	Function_45(&Global_99144, 1);
	iParam1 = 0;
	if (Function_77(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_85(int iParam0) //Position: 0x460C / 17932
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_16(uVar0, 0x1000000) || Function_16(uVar0, 0x2000000)) || Function_16(uVar0, 0x4000000)) || !Function_16(uVar0, 0x10000000));
}

void Function_86(var uParam0, int iParam1) //Position: 0x4647 / 17991
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_87(int iParam0) //Position: 0x4656 / 18006
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(iParam0))
	{
		return;
	}
	switch (Function_35(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_33(iParam0);
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
			switch (Function_33(iParam0))
			{
				case 0x00000000:
					if (Function_40(iParam0) == 1)
					{
						iVar0 = Function_88(iParam0);
						if (Function_18(iVar0))
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
			if (Function_88(iParam0) == 0)
			{
				if (Function_40(iParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_33(iParam0);
					if (Function_18(iVar0))
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
			if (Function_40(iParam0) == 1)
			{
				Function_90(400, 1, 0, 0);
			}
			switch (Function_33(iParam0))
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

int Function_88(int iParam0) //Position: 0x4B32 / 19250
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

void Function_89(int iParam0, int iParam1) //Position: 0x4B51 / 19281
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

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4BBB / 19387
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
	Function_69(iParam0, TO_FLOAT(bParam1), 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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

void Function_91(int iParam0) //Position: 0x4DE3 / 19939
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

void Function_92() //Position: 0x4E81 / 20097
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
	PLAYSTAT_INT("HC_MONEY", Function_70(0));
	PLAYSTAT_INT("HC_FAME", Function_70(3));
	PLAYSTAT_INT("HC_HONOR", Function_70(1));
	return;
}

void Function_93() //Position: 0x4FE3 / 20451
{
	int iVar0;
	int iVar1;
	
	if (!Function_98(Global_10966))
	{
		return;
	}
	iVar0 = Function_70(24);
	iVar1 = Function_97(Global_10966);
	if (!Function_98(iVar0) && Function_96(iVar1) < 0)
	{
		Function_55(24, Global_10966, 0);
		Function_94(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_96(Function_97(iVar0)))
	{
		Function_55(24, Global_10966, 0);
		Function_94(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_94(int iParam0, char* cParam1) //Position: 0x5063 / 20579
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

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x53BA / 21434
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

int Function_96(int iParam0) //Position: 0x5442 / 21570
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_97(int iParam0) //Position: 0x545C / 21596
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_98(int iParam0) //Position: 0x5476 / 21622
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_99(int iParam0) //Position: 0x548C / 21644
{
	char* cVar0[16];
	
	if (!Function_15())
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

struct<24> Function_100(char* cParam0) //Position: 0x54CB / 21707
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

bool Function_101() //Position: 0x5721 / 22305
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_102(int iParam0) //Position: 0x574C / 22348
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_33(iParam0) == Global_46760[2])
	{
		if (Function_132(2) && !Function_131(2))
		{
			Function_124(2, 2, 0, 0, 1);
		}
	}
	if (Function_33(iParam0) == Global_46796[3])
	{
		if (Function_132(6) && !Function_131(6))
		{
			Function_124(6, 16, 0, 0, 1);
		}
	}
	if (!Function_132(10) || Function_131(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(0) - 1), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_40(Global_46948);
	if (Global_46948 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_40(Global_46950);
	if (Global_46950 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_40(Global_46952);
	if (Global_46952 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_40(Global_46951);
	if (Global_46951 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_40(Global_46953);
	if (Global_46953 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != iParam0)
	{
		return;
	}
	Function_89(2, 24);
	Function_103(10, 0, 1);
	return;
}

void Function_103(bool bParam0, bool bParam1, bool bParam2) //Position: 0x590A / 22794
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_131(bParam0))
	{
		if (!Function_132(bParam0))
		{
			Function_107(bParam0, 1, 0, 0, 1);
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
		Function_90(457, 1, 0, 0);
		Function_106(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_105(0, 0, 1, 1))
			{
				Function_44(1);
				Function_43(1, 0);
			}
			else
			{
				Function_104();
			}
		}
	}
	return;
}

void Function_104() //Position: 0x5AAB / 23211
{
	return;
}

bool Function_105(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5AB1 / 23217
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

void Function_106(bool bParam0, int iParam1) //Position: 0x5B60 / 23392
{
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_107(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5BB5 / 23477
{
	char* cVar0[32];
	
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_122(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		Function_90(456, 1, 0, 0);
		Function_106(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_105(0, 0, 1, 1))
			{
				Function_44(1);
				Function_43(1, 5);
			}
			else
			{
				Function_104();
			}
		}
		Function_116(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_115() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_115() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_114(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_15())
		{
			if (!Function_113(Global_119934, 2))
			{
				Function_108(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_108(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5D11 / 23825
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_110(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_109(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_109(char* cParam0) //Position: 0x5D86 / 23942
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

bool Function_110(int iParam0, var uParam1, int iParam2) //Position: 0x5DC0 / 24000
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
		if (Function_112(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_111(uVar0))
		{
			case 0x00000002:
				if (!Function_113(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_111(char* cParam0) //Position: 0x5E3C / 24124
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

int Function_112(int iParam0) //Position: 0x5EDD / 24285
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_45(&iVar1, 2147483648);
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

bool Function_113(int iParam0, int iParam1) //Position: 0x5F1A / 24346
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_114(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5F2D / 24365
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_99(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_115() //Position: 0x5FB8 / 24504
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_116(bool bParam0) //Position: 0x5FE5 / 24549
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
			if (Function_120(bParam0, Function_121(bVar24)))
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
			if (Function_120(bParam0, Function_121(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_119(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_118(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_117(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_117(int iParam0) //Position: 0x6195 / 24981
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_123(iParam0))
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

void Function_118(char* cParam0, int iParam1) //Position: 0x61EC / 25068
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_119(int iParam0) //Position: 0x6211 / 25105
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_123(iParam0))
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

bool Function_120(bool bParam0, int iParam1) //Position: 0x6267 / 25191
{
	int iVar0;
	
	if (!Function_123(bParam0))
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

int Function_121(bool bParam0) //Position: 0x62C6 / 25286
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_122(int iParam0) //Position: 0x62D2 / 25298
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_123(int iParam0) //Position: 0x62EE / 25326
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_124(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6304 / 25348
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_122(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_130(bParam0, 2))
	{
		Function_90(456, 1, 0, 0);
		Function_106(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_114(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_120(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_106(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_105(0, 0, 1, 1))
			{
				Function_44(1);
				Function_43(1, 0);
			}
			else
			{
				Function_104();
			}
		}
		Function_116(bParam0);
		if (StackVal && !Function_16(((((!Function_115() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_16((((Function_115() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_15())
		{
			if (!Function_113(Global_119934, 2))
			{
				Function_108(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_126();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_125(3, bParam1);
				break;
			
			case 0x00000005:
				Function_125(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_125(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_125(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_125(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_125(2, SHIFT_LEFT(bParam1, 18));
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

void Function_125(int iParam0, bool bParam1) //Position: 0x65A3 / 26019
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

void Function_126() //Position: 0x6612 / 26130
{
	if (Function_123(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_129(Global_42827);
			(&Global_42827 + 8) = Function_127(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_129(Global_42827);
			*(&Global_42827 + 8) = Function_127(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_127(int iParam0, int iParam1) //Position: 0x6692 / 26258
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
					if (Function_233(6, 0) || Function_233(12, 0))
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
					if (Function_128(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_233(5, 0))
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
					if (Function_128(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_128(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_128(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_128(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_233(26, 0))
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
					if (Function_128(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_128(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_128(27) && iVar16)
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
					if (Function_128(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_128(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_128(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_128(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_233(17, 0) && iVar13)
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
					if (Function_128(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_233(6, 0) && Function_128(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_128(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_233(9, 0) && Function_128(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_128(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_233(8, 0) && iVar17)
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
	if (Function_77(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_77(StackVal, vVar2))
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
	if (!Function_77(StackVal, vVar2))
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

int Function_128(int iParam0) //Position: 0x72F5 / 29429
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_129(int iParam0) //Position: 0x730A / 29450
{
	int iVar0;
	int iVar1;
	
	if (!Function_123(iParam0))
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

bool Function_130(int iParam0, int iParam1) //Position: 0x7359 / 29529
{
	int iVar0;
	
	if (!Function_123(iParam0))
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

bool Function_131(int iParam0) //Position: 0x7386 / 29574
{
	if (!Function_123(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_130(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0) //Position: 0x73D7 / 29655
{
	if (!Function_123(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_130(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_133(int iParam0) //Position: 0x7429 / 29737
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134() //Position: 0x7443 / 29763
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	if (!Function_219(&uLocal_409))
	{
		Function_22();
		if (Function_133(Global_46953) == 2)
		{
			Function_30(Global_46953);
		}
		return 0;
	}
	if (!iLocal_517)
	{
		DISABLE_CHILD_SECTOR("fom_rightWing01_crate01x");
		iLocal_517 = 1;
	}
	switch (iLocal_425)
	{
		case 0x00000000:
			if (Function_214(&iLocal_426))
			{
				iLocal_425 = 1;
			}
			break;
		
		case 0x00000001:
			Function_202(&iLocal_389, &uLocal_391, &uLocal_407, &uLocal_419, &uLocal_423, &uLocal_421);
			Function_201(&iLocal_389, &uLocal_413);
			Function_200(&iLocal_389, &bLocal_405);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 192);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 192);
			iLocal_425 = 2;
			break;
		
		case 0x00000002:
			Function_197(Function_198("fortMercer", "corralProps01", 1), 0);
			Function_197(Function_198("fortMercer", "corralProps01", 2), 0);
			if (!Function_16(iLocal_509, 16384))
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&(uLocal_391[0])) - 1))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&(uLocal_391[0]), bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_196(&uVar1);
						Var2 = Function_196(&uVar1);
						if (StackVal > 69.0f)
						{
							Var2.f_4 = 72,7f;
							SET_OBJECT_POSITION(&uVar1, Var2);
						}
					}
					bVar0++;
				}
			}
			Function_194("sc_challenge_aa_00", &iLocal_519);
			if (!Function_16(iLocal_509, 262144))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 104) && Function_16(iLocal_509, 131072))
				{
					if (IS_SOUND_ID_VALID(&uLocal_358))
					{
						STOP_SOUND(&uLocal_358);
					}
					Function_193(&iLocal_523);
					Function_80(&iLocal_509, 262144);
				}
			}
			iVar4 = Function_192(&uLocal_391);
			if (!Function_16(iLocal_509, 16384))
			{
				if (iVar4 < 7)
				{
					Function_80(&iLocal_509, 16384);
					Function_189(&uLocal_391);
				}
			}
			if (!iLocal_515)
			{
				if (Function_188(&iLocal_523))
				{
					if (Function_186(&iLocal_523) < 10.0f)
					{
						if (iVar4 != 0)
						{
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
							}
							Function_185("fom_fte_Obj_ClearCourtyard", 0x40f00000, 1, 2, 0, 0, 0, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(cLocal_508, "fom_fte_Obj_ClearCourtyard", 0, 0, 0);
							APPEND_JOURNAL_ENTRY(cLocal_508, 0);
						}
						iLocal_515 = 1;
					}
				}
			}
			Function_179(&iLocal_509, &uLocal_391);
			if (iVar4 == 0)
			{
				if (!Function_16(iLocal_509, 8192))
				{
					Function_178(Function_198("fortMercer", "leftWing", 1), 0);
					Function_178(Function_198("fortMercer", "leftWing", 2), 0);
					Function_178(Function_198("fortMercer", "leftWing", 3), 0);
					Function_178(Function_198("fortMercer", "leftWing", 4), 0);
					Function_177(&bLocal_405, &Global_54076, 4);
					Function_176(&bLocal_405, &Global_54076);
					Function_175(&bLocal_405, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_174(&bLocal_405);
					SQUAD_GOALS_CLEAR(&bLocal_405);
					SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&bLocal_405, 0, &iLocal_0 + 144, 4, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_405, true, 1, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_185("fom_fte_objKillBoss", 0x40f00000, 1, 2, 0, 0, 0, 0);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(cLocal_508, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(cLocal_508, "fom_fte_objKillBoss", 0, 0, 0);
					APPEND_JOURNAL_ENTRY(cLocal_508, 0);
					DECOR_SET_BOOL(&Global_54076, "FOM_Boss_Launched", 1);
					Function_80(&iLocal_509, 8192);
				}
			}
			if (!iLocal_516)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_405) == 0)
				{
					DECOR_SET_BOOL(&Global_54076, "GangLeadersDead", 1);
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					iLocal_516 = 1;
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "HelperIsDead"))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "GangLeadersDead") && !iLocal_511)
				{
					iLocal_511 = 1;
					HUD_CLEAR_OBJECTIVE();
					Function_170(&iLocal_389);
					Function_169(Global_46953, 0);
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					DECOR_SET_BOOL(&Global_54076, "MissionEnd", 1);
					iLocal_425 = 3;
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "MissionEnd") && !iLocal_425 != 3)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "GangLeadersDead") && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 96))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_170(&iLocal_389);
					Function_169(Global_46953, 0);
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					DECOR_SET_BOOL(&Global_54076, "MissionEnd", 1);
					iLocal_425 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_188(&iLocal_519))
			{
				bLocal_510 = Function_186(&iLocal_519);
				if (Function_66(464) < 0.0f)
				{
					if (bLocal_510 > Function_66(464))
					{
						Function_168(464, bLocal_510, 0);
					}
				}
				else
				{
					Function_168(464, bLocal_510, 0);
				}
				Function_29(&iLocal_519);
			}
			if (!Function_188(&iLocal_504) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_166(&iLocal_504);
			}
			else if (Function_188(&iLocal_504))
			{
				if (Function_165(&iLocal_504, 1.0f) && !iLocal_512)
				{
					Function_161(&iLocal_389, 0, 1, 0, 0);
					Function_159(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
					UI_PUSH("CutsceneWithMessages");
					iLocal_512 = 1;
				}
				else if (Function_165(&iLocal_504, 3.0f) && !iLocal_513)
				{
					PRINT_BIG("RIO_PrintBig", 5f, 0, 2, 0);
					iLocal_513 = 1;
				}
				else if (Function_165(&iLocal_504, 10.0f))
				{
					Function_156(2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1);
					UI_POP("CutsceneWithMessages");
					Function_152(200, 1, 0);
					Function_139(50, 1, 0);
					Function_102(Global_46953);
					Function_137(Function_138(1, 1, 1, 0, 0), 1, 1);
					if (!Function_101())
					{
						Function_135(9, 0, 1);
					}
					else if (RAND_FLOAT_RANGE(1.0f, 100.0f) >= 10.0f)
					{
						Function_135(9, 0, 1);
					}
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(cLocal_508, 0);
					APPEND_JOURNAL_ENTRY(cLocal_508, 1);
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
					Function_41(Global_46953, 1, 1, 0);
					if (Function_40(Global_46954) > 1)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(14))
						{
							AWARD_ACHIEVEMENT(14);
						}
					}
					iLocal_425 = 4;
					return 0;
				}
			}
			break;
		
		case 0x00000004:
			if (!iLocal_518)
			{
				Function_22();
				iLocal_518 = 1;
			}
			break;
	}
	return 1;
}

int Function_135(bool bParam0, bool bParam1, int iParam2) //Position: 0x7B67 / 31591
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_136(bParam0), Function_53()) == 0)
		{
			ADD_ITEM(Function_136(bParam0), Function_53(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_136(bParam0), Function_53(), &iParam2);
	return 1;
}

var Function_136(bool bParam0) //Position: 0x7BB5 / 31669
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

int Function_137(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7CA9 / 31913
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
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
		if ((Function_70(597) + Function_70(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

var Function_138(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7D7B / 32123
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_70(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_136(17), &Global_54076))
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

void Function_139(int iParam0, bool bParam1, bool bParam2) //Position: 0x7E82 / 32386
{
	int iVar0;
	bool bVar1;
	
	if (Function_151(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_101())
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
	iVar0 = Function_70(3);
	Function_148();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_146(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_113(Global_119936, 4))
			{
				Function_108(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_90(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_66(3));
	iVar0 = Function_70(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_141(4, Function_145(Global_21369.f_248), 1);
				Function_140(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_141(4, Function_145(Global_21369.f_248), 1);
				Function_140(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_141(4, Function_145(Global_21369.f_248), 1);
				Function_140(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_141(4, Function_145(Global_21369.f_248), 1);
				Function_140(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_141(4, Function_145(Global_21369.f_248), 1);
				Function_140(Global_21369.f_244, Global_21369.f_248);
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

void Function_140(int iParam0, int iParam1) //Position: 0x8057 / 32855
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

int Function_141(int iParam0, char* cParam1) //Position: 0x82C1 / 33473
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
	iVar1 = Function_142();
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

int Function_142() //Position: 0x8451 / 33873
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
	Function_143();
	return 0;
}

void Function_143() //Position: 0x84F2 / 34034
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
		Function_144(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_144(int iParam0) //Position: 0x85B0 / 34224
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

var Function_145(int iParam0) //Position: 0x8616 / 34326
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

int Function_146(int iParam0, bool bParam1) //Position: 0x86A5 / 34469
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
	iVar1 = Function_147(iParam0, 4294967295);
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
	iVar1 = Function_142();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_147(int iParam0, int iParam1) //Position: 0x8851 / 34897
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

void Function_148() //Position: 0x8896 / 34966
{
	Function_150(3, 0.0f);
	Function_149(3, 10000.0f);
	return;
}

int Function_149(int iParam0, int iParam1) //Position: 0x88AC / 34988
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x88EC / 35052
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_151(int iParam0) //Position: 0x892C / 35116
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_152(int iParam0, bool bParam1, bool bParam2) //Position: 0x893B / 35131
{
	int iVar0;
	bool bVar1;
	
	if (Function_151(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_101())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_70(1);
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
			Function_146(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_113(Global_119936, 1))
				{
					Function_108(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_155(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_113(Global_119936, 2))
				{
					Function_108(&Global_54076, 2, 3, 0);
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
		Function_154(1, (4294967295 * bVar1), 0);
	}
	if (Function_70(1) <= 4294962296)
	{
		Function_55(1, 4294962296, 0);
	}
	else if (Function_70(1) >= 5000)
	{
		Function_55(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_66(1));
	iVar0 = Function_70(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_141(2, Function_153(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_141(2, Function_153(Global_21369.f_244), 0);
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
				Function_141(2, Function_153(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_141(2, Function_153(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_141(2, Function_153(Global_21369.f_244), 1);
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
				Function_141(2, Function_153(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_141(2, Function_153(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_141(2, Function_153(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_141(2, Function_153(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_141(2, Function_153(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_141(2, Function_153(Global_21369.f_244), 1);
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
				Function_141(2, Function_153(Global_21369.f_244), 0);
			}
			break;
	}
	Function_140(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_153(int iParam0) //Position: 0x8C62 / 35938
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

int Function_154(int iParam0, bool bParam1, int iParam2) //Position: 0x8D05 / 36101
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
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_155(int iParam0, bool bParam1) //Position: 0x8F02 / 36610
{
	bool bVar0;
	int iVar1;
	
	Function_154(iParam0, bParam1, 0);
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
	iVar1 = Function_147(iParam0, 4294967295);
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
	iVar1 = Function_142();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_156(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x90AD / 37037
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
		uVar0 = Function_53();
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
		Function_90(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_28();
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
	Function_157(&uParam9, &uParam10);
}

void Function_157(var uParam0, bool bParam1) //Position: 0x917C / 37244
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
		Function_158();
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

void Function_158() //Position: 0x924B / 37451
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

void Function_159(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x92C3 / 37571
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_28();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_53();
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
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
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
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_196(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_57(), 2,802597E-45f, Function_196(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if (uParam10 && !Function_15())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_160()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_160()));
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
	if (Function_270(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_269(0x4000000);
	}
	if (Function_270(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_269(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

var Function_160() //Position: 0x9575 / 38261
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

var Function_161(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9603 / 38403
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "FOM_Vista_NoHelp", 2, 1);
	}
	Function_162(&uVar0);
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

void Function_162(int iParam0) //Position: 0x968D / 38541
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_164(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_163(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1,5f, 1);
	return;
}

void Function_163(int iParam0) //Position: 0x96DB / 38619
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2654,775f, 79,04767f, 3471,887f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,059969f, 0,245976f, -0,020375f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_164(int iParam0) //Position: 0x9754 / 38740
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2660,899f, 79,17592f, 3475,78f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,027353f, 0,413105f, -0,020346f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

bool Function_165(int iParam0, float fParam1) //Position: 0x97CD / 38861
{
	if (Function_188(&iParam0))
	{
		if (Function_186(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_166(int iParam0) //Position: 0x97EB / 38891
{
	Function_167(&iParam0, 0.0f);
	return;
}

void Function_167(vector3 vParam0) //Position: 0x97F8 / 38904
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_80(&vParam0, 1);
	Function_45(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_168(int iParam0, bool bParam1, bool bParam2) //Position: 0x981D / 38941
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
		Function_69(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_68(iParam0);
	if (&bParam2)
	{
		Function_56(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_169(int iParam0, int iParam1) //Position: 0x9A8A / 39562
{
	if (!Function_38(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_170(int iParam0) //Position: 0x9AA5 / 39589
{
	var uVar0;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("FOM_AreaVultures", &iParam0, 4294967295, 0);
	Function_171(&iParam0, &uVar0, &iLocal_0 + 112);
	return;
}

void Function_171(float fParam0, float fParam1, var uParam2) //Position: 0x9AD6 / 39638
{
	struct<9> Var0;
	struct<2> Var15;
	struct<2> Var17;
	var uVar19;
	
	if (!IS_LAYOUTREF_VALID(&fParam0))
	{
		return;
	}
	if (!IS_VOLUME_VALID(&uParam2))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&fParam1))
	{
		fParam1 = CREATE_OBJECTSET_IN_LAYOUT("Ambiance_VultureSet", &fParam0, 15, 0);
	}
	vVar0 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_SCALE(&uParam2, &vVar0);
	fVar2 = ((vVar0.x + vVar0.z) / 2.0f);
	bVar3 = ROUND((vVar0.x + IntToFloat(RAND_INT_RANGE(1, 3))));
	PRINTSTRING("Trying to create this many vultures: ");
	PRINTINT(bVar3);
	PRINTNL();
	vVar4 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_CENTER(&uParam2, &vVar4);
	iVar6 = 0;
	while (iVar6 < (bVar3 - 1))
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("Ambiance_Vlt") };
		Var15 = Vector(RAND_FLOAT_RANGE((vVar4.x - fVar2), (vVar4.x + fVar2)), RAND_FLOAT_RANGE((vVar4.y - 5.0f), (vVar4.y + 5.0f)), RAND_FLOAT_RANGE((vVar4.z - fVar2), (vVar4.z + fVar2)));
		Var17 = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 359,9f), 0.0f);
		uVar19 = CREATE_ACTOR_IN_LAYOUT(&fParam0, &Var7, 1128, Var15, Var17);
		MAKE_BIRD_FLY_FROM_POINT(&uVar19, Var15, Var17);
		ADD_OBJECT_TO_OBJECTSET(&uVar19, &fParam1);
		TASK_PRIORITY_SET(&uVar19, true);
		TASK_BIRD_SOAR_AT_COORD(&uVar19, &vVar4, -1.0f, 1106247680);
		iVar6++;
	}
	return;
}

struct<32> Function_172(char* cParam0) //Position: 0x9C40 / 40000
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_173("0", &cVar8, ""), 4);
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

struct<32> Function_173(char* cParam0) //Position: 0x9CAC / 40108
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_174(bool bParam0) //Position: 0x9CCE / 40142
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

void Function_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x9D03 / 40195
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

void Function_176(var uParam0, int iParam1) //Position: 0x9E13 / 40467
{
	bool bVar0;
	var uVar1;
	
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
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_177(var uParam0, var uParam1, bool bParam2) //Position: 0x9E6E / 40558
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

void Function_178(var uParam0, int iParam1) //Position: 0x9EBA / 40634
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

void Function_179(int iParam0, int[] iParam1) //Position: 0x9F12 / 40722
{
	bool bVar0;
	
	bVar0 = true;
	if (!Function_16(iParam0, 32))
	{
		if (Function_183(&Global_54076, &(iParam1[0]), 1, 0, 1, 25.0f) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 104))
		{
			SQUAD_SET_FACTION(&(iParam1[0]), 19);
			Function_180(&(iParam1[0]), &Global_54076, 1);
			Function_80(&iParam0, 32);
			Function_80(&iParam0, 131072);
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (!Function_16(iParam0, 64))
		{
			if (Function_183(&Global_54076, &(iParam1[1]), 1, 0, 1, 30.0f))
			{
				SQUAD_SET_FACTION(&(iParam1[1]), 19);
				Function_180(&(iParam1[1]), &Global_54076, 1);
				Function_80(&iParam0, 64);
				Function_80(&iParam0, 131072);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (!Function_16(iParam0, 128))
		{
			if (Function_183(&Global_54076, &(iParam1[2]), 1, 0, 1, 30.0f))
			{
				SQUAD_SET_FACTION(&(iParam1[2]), 19);
				Function_180(&(iParam1[2]), &Global_54076, 1);
				Function_80(&iParam0, 128);
				Function_80(&iParam0, 131072);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (!Function_16(iParam0, 256))
		{
			if (Function_183(&Global_54076, &(iParam1[3]), 1, 0, 1, 30.0f) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 104))
			{
				SQUAD_SET_FACTION(&(iParam1[3]), 19);
				Function_180(&(iParam1[3]), &Global_54076, 1);
				Function_80(&iParam0, 256);
				Function_80(&iParam0, 131072);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (!Function_16(iParam0, 512))
		{
			if (Function_183(&Global_54076, &(iParam1[4]), 1, 0, 1, 30.0f))
			{
				SQUAD_SET_FACTION(&(iParam1[4]), 19);
				Function_180(&(iParam1[4]), &Global_54076, 1);
				Function_80(&iParam0, 512);
				Function_80(&iParam0, 131072);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (!Function_16(iParam0, 1024))
		{
			if (Function_183(&Global_54076, &(iParam1[5]), 1, 0, 1, 30.0f))
			{
				SQUAD_SET_FACTION(&(iParam1[5]), 19);
				Function_180(&(iParam1[5]), &Global_54076, 1);
				Function_80(&iParam0, 1024);
				Function_80(&iParam0, 131072);
				bVar0 = false;
			}
		}
	}
	return;
}

void Function_180(var uParam0, int iParam1, bool bParam2) //Position: 0xA158 / 41304
{
	Function_182(&uParam0, &iParam1, 1);
	Function_181(&uParam0, 1);
	Function_177(&uParam0, &iParam1, 4);
	Function_176(&uParam0, &iParam1);
	if (&bParam2)
	{
		Function_175(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_181(var uParam0, int iParam1) //Position: 0xA1A1 / 41377
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_182(var uParam0, var uParam1, bool bParam2) //Position: 0xA1E6 / 41446
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

bool Function_183(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xA25E / 41566
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_184(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_184(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xA2C9 / 41673
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
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_185(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xA3CF / 41935
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
			Var0 = { StackVal, StackVal, StackVal, Function_99(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

float Function_186(vector3 vParam0) //Position: 0xA464 / 42084
{
	if (Function_188(&vParam0))
	{
		if (Function_187(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_187(int iParam0) //Position: 0xA531 / 42289
{
	return Function_16(iParam0, 2);
}

bool Function_188(int iParam0) //Position: 0xA53F / 42303
{
	return Function_16(iParam0, 1);
}

void Function_189(int[] iParam0) //Position: 0xA54D / 42317
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (6 - 1))
	{
		Function_174(&(iParam0[iVar0]));
		Function_191(&(iParam0[iVar0]));
		SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&(iParam0[iVar0]), 0, &iLocal_0 + 144, 4, 1);
		Function_190(&(iParam0[iVar0]), -1.0f);
		Function_180(&(iParam0[iVar0]), &Global_54076, 1);
		iVar0++;
	}
	DECOR_SET_BOOL(&Global_54076, "TriggerCenter", 1);
	return;
}

void Function_190(var uParam0, bool bParam1) //Position: 0xA5C6 / 42438
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_191(int iParam0) //Position: 0xA617 / 42519
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

var Function_192(int[] iParam0) //Position: 0xA666 / 42598
{
	return (((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(iParam0[5])) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(iParam0[4]))) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(iParam0[3]))) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(iParam0[2]))) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(iParam0[1]))) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&(iParam0[0])));
}

void Function_193(int iParam0) //Position: 0xA6AD / 42669
{
	if (!Function_188(&iParam0))
	{
		Function_167(&iParam0, 0.0f);
	}
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0xA6C4 / 42692
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_195(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_188(&iParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_186(&iParam1);
		}
	}
	return;
}

var Function_195(int iParam0) //Position: 0xA707 / 42759
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

struct<8> Function_196(int iParam0) //Position: 0xA73A / 42810
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_197(var uParam0, int iParam1) //Position: 0xA74C / 42828
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

int Function_198(var uParam0, var uParam1, int iParam2) //Position: 0xA7A7 / 42919
{
	return Function_199(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_199(int iParam0, char* cParam1, bool bParam3) //Position: 0xA7BB / 42939
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_18(iParam0))
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

void Function_200(var uParam0, var uParam1) //Position: 0xA860 / 43104
{
	int iVar0;
	
	uParam0 = &uParam0;
	uParam1 = &uParam1;
	uParam1 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "FOM_BossSquad"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), 502, Vector(-2675,118f, 67,455f, 3461,791f), Vector(0.0f, 0.0f, 0.0f));
	TASK_PRIORITY_SET(&iVar0, true);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SQUAD_JOIN(&iVar0, &uParam1);
	SQUAD_SET_FACTION(&uParam1, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam1, 690856);
	SET_WEAPONENUM_LOCKED(true, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, true, false, 1, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), 503, Vector(-2680,588f, 67,455f, 3456,377f), Vector(0.0f, 0.0f, 0.0f));
	TASK_PRIORITY_SET(&iVar0, true);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SQUAD_JOIN(&iVar0, &uParam1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), 504, Vector(-2678,475f, 67,455f, 3457,898f), Vector(0.0f, 0.0f, 0.0f));
	TASK_PRIORITY_SET(&iVar0, true);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SQUAD_JOIN(&iVar0, &uParam1);
	return;
}

void Function_201(var uParam0, bool[] bParam1) //Position: 0xA977 / 43383
{
	var uVar0;
	
	uVar0 = "$/content/scripting/gringo/simpleGringo/Locked_Footlocker";
	bParam1[0] = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), &uVar0, Vector(-2677,985f, 67,455f, 3456,315f), Vector(0.0f, 115.0f, 0.0f));
	DECOR_SET_INT(&(bParam1[0]), "GringoDollarAmt", 150);
	bParam1[1] = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), &uVar0, Vector(-2681,521f, 67,455f, 3459,863f), Vector(0.0f, 346,8f, 0.0f));
	DECOR_SET_INT(&(bParam1[1]), "GringoDollarAmt", 150);
	return;
}

void Function_202(var uParam0, var[] uParam1) //Position: 0xAA52 / 43602
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<8> Var9;
	var uVar17;
	float fVar18;
	var uVar19;
	
	bVar0 = false;
	while (bVar0 < 17)
	{
		uVar1 = Function_211(&Global_11752, &Global_13888, bVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, 1);
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 120);
					SQUAD_JOIN(&uVar1, &(uParam1[0]));
					PRINTSTRING("FOM_FL_Wall Squad Size is:  ");
					PRINTINT(SQUAD_GET_SIZE(&(uParam1[0])));
					PRINTNL();
					break;
				
				case 0x00000003:
				case 0x00000004:
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 128);
					SQUAD_JOIN(&uVar1, &(uParam1[2]));
					PRINTSTRING("FOM_L_Wall Squad Size is:  ");
					PRINTINT(SQUAD_GET_SIZE(&(uParam1[2])));
					PRINTNL();
					break;
				
				case 0x00000005:
				case 0x00000006:
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 136);
					SQUAD_JOIN(&uVar1, &(uParam1[1]));
					PRINTSTRING("FOM_L_Wall_Room Squad Size is:  ");
					PRINTINT(SQUAD_GET_SIZE(&(uParam1[1])));
					PRINTNL();
					break;
				
				case 0x00000007:
				case 0x00000008:
				case 0x00000009:
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 144);
					SQUAD_JOIN(&uVar1, &(uParam1[3]));
					PRINTSTRING("FOM_Courtyard Squad Size is:  ");
					PRINTINT(SQUAD_GET_SIZE(&(uParam1[3])));
					PRINTNL();
					break;
				
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 152);
					SQUAD_JOIN(&uVar1, &(uParam1[4]));
					PRINTSTRING("FOM_RightWall Squad Size is:  ");
					PRINTINT(SQUAD_GET_SIZE(&(uParam1[4])));
					PRINTNL();
					break;
				
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
					ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 160);
					SQUAD_JOIN(&uVar1, &(uParam1[5]));
					PRINTSTRING("FOM_BackYard Squad Size is:  ");
					PRINTINT(SQUAD_GET_SIZE(&(uParam1[5])));
					PRINTNL();
					break;
				}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (6 - 1))
	{
		Function_177(&(uParam1[bVar0]), &Global_54076, 2);
		Function_176(&(uParam1[bVar0]), &Global_54076);
		Function_190(&(uParam1[bVar0]), -1.0f);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&(uParam1[bVar0]), 0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&(uParam1[bVar0]), 690856);
		bVar0++;
	}
	uParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam0, "WhoreSquad"));
	uVar2 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar2, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 8);
	uVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&uVar3))
	{
		uVar4 = GET_OBJECT_NAME(&uVar3);
		if (STRING_CONTAINS_STRING(&uVar4, "f_whore"))
		{
			Var5 = Vector(0.0f, 0.0f, 0.0f);
			Var7 = Vector(0.0f, 0.0f, 0.0f);
			GET_OBJECT_POSITION(&uVar3, &Var5);
			GET_OBJECT_ORIENTATION(&uVar3, &Var7);
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("fom_Whore01") };
			uVar17 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var9, Function_210(245, 247, 4294967295, 4294967295, 4294967295), Var5, Var7);
			Function_209(&uVar17);
			Function_208(&uVar17);
			SQUAD_JOIN(&uVar17, &uParam2);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar17);
			MEMORY_CONSIDER_AS(&uVar17, &Global_54076, 2);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar17, 1);
		}
		uVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	DESTROY_ITERATOR(&uVar2);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&uParam2, 1, FIND_VOLUME_IN_LAYOUT(&Global_46715, "nv_WhoreIn"), 1, 1);
	SQUAD_SET_FACTION(&uParam2, 21);
	Function_207(&uParam2, 0);
	fVar18 = RAND_FLOAT_RANGE(0.0f, 1.0f);
	if (fVar18 <= 0,15f)
	{
		Function_206(StackVal, StackVal, StackVal, &uParam0, &uParam3, &uParam4, &uParam5, Vector(-2668,119f, 73,90308f, 3443,462f), 436, (&iLocal_0 + 216));
	}
	SET_WEAPONENUM_LOCKED(true, 0);
	Function_205(&uParam0, 4, &iLocal_0 + 560, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 4, &iLocal_0 + 568, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 4, &iLocal_0 + 648, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 4, &iLocal_0 + 552, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 16, &iLocal_0 + 616, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 9, &iLocal_0 + 584, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 1, &iLocal_0 + 680, 0, 1, 0, 1, 3212836864);
	Function_205(&uParam0, 1, &iLocal_0 + 712, 0, 1, 0, 1, 3212836864);
	uVar19 = CREATE_OBJECTSET_IN_LAYOUT(Function_57(), &uParam0, 4294967295, 0);
	Function_203(&uParam0, &iLocal_0 + 720, &uVar19);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_0 + 184);
}

void Function_203(var uParam0, var uParam1, int iParam2) //Position: 0xAF73 / 44915
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	float fVar4;
	struct<8> Var5;
	var uVar13;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		Function_204(&bVar1);
		Var2 = Function_204(&bVar1);
		fVar4 = GET_OBJECT_HEADING(&bVar1);
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("amb_areaChest") };
		uVar13 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam0, &Var5, "$/content/scripting/gringo/simpleGringo/locked_footlocker", Var2, Vector(0.0f, fVar4, 0.0f));
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar13), 0);
		ADD_OBJECT_TO_OBJECTSET(&uVar13, &iParam2);
		if (DECOR_CHECK_EXIST(&bVar1, "GringoDollarAmt"))
		{
			DECOR_SET_INT(&uVar13, "GringoDollarAmt", DECOR_GET_INT(&bVar1, "GringoDollarAmt"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "GiveItem"))
		{
			DECOR_SET_INT(&uVar13, "GiveItem", DECOR_GET_INT(&bVar1, "GiveItem"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_5"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_5", DECOR_GET_INT(&bVar1, "Ammo_5"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_6"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_6", DECOR_GET_INT(&bVar1, "Ammo_6"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_7"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_7", DECOR_GET_INT(&bVar1, "Ammo_7"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_8"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_8", DECOR_GET_INT(&bVar1, "Ammo_8"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_9"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_9", DECOR_GET_INT(&bVar1, "Ammo_9"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_10"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_10", DECOR_GET_INT(&bVar1, "Ammo_10"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_11"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_11", DECOR_GET_INT(&bVar1, "Ammo_11"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_12"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_12", DECOR_GET_INT(&bVar1, "Ammo_12"));
		}
		bVar0++;
	}
	return;
}

struct<8> Function_204(bool bParam0) //Position: 0xB259 / 45657
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

var Function_205(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7) //Position: 0xB282 / 45698
{
	var uVar0;
	var uVar1;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	
	GET_OBJECT_POSITION(&uParam2, &uVar3);
	uVar0 = CREATE_WEAPON_PICKUP(&uParam0, iParam1, &uVar3, 0.0f, &fParam5, &fParam6, &fParam7);
	GET_OBJECT_POSITION(&uParam2, &Var5);
	GET_OBJECT_ORIENTATION(&uParam2, &Var7);
	SET_OBJECT_POSITION(&uVar0, Var5);
	SET_OBJECT_ORIENTATION(&uVar0, Var7);
	if (&bParam3)
	{
		uVar1 = Vector(0.0f, -0,001f, 0.0f);
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar0));
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&uVar0), &uVar1);
	}
	DECOR_SET_INT(&uVar0, "NumClips", &iParam4);
	return &uVar0;
}

void Function_206(var uParam0, bool bParam1, var uParam2, float fParam3, struct<2> Param4, bool bParam6, struct<2> Param7, var uParam9) //Position: 0xB310 / 45840
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	
	fVar0 = 3.0f;
	fVar1 = 0,3f;
	fVar2 = 1,5f;
	fVar3 = ((fVar0 - fVar2) - fVar1);
	bVar4 = (fVar3 * 0,8f);
	fParam3 = CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, &uParam0, Function_57(), bParam6, Param4, Vector(0.0f, 0.0f, 0.0f), "dead_ground_male");
	SET_SLEEP_TOLERANCE(GET_PHYSINST_FROM_OBJECT(&fParam3), 0.0f);
	if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam6), "female"))
	{
		bParam1 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), "p_gen_noose01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
		Var5 = Vector(0,01f, 0,034f, 0,003f);
		Var7 = Vector(-1,221f, 63,601f, -14,377f);
	}
	else
	{
		bParam1 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_57(), "p_gen_noose02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
		Var5 = Vector(-0,008f, 0,036f, -0,008f);
		Var7 = Vector(-3,046f, 4,262f, 13,672f);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(&bParam1, &fParam3, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&fParam3, &bParam1, 0);
	ATTACH_OBJECTS(&bParam1, &fParam3, "neck", Var5, Var7, 4294967295);
	REFERENCE_OBJECT(&fParam3);
	uParam2 = CREATE_LEASH_OBJECT(&fParam3, Function_57(), 10.0f, 10, 1, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uParam2, &fParam3, "neck", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&bParam1), "attachRope", &Var9, &Var11);
	UNK_0xF76F2BB3(&Var9, &Var7, 0, 0);
	UNK_0x65DAA654(&Var11, &Var7, 0, 0, 0, 0);
	Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Var5, Var9, StackVal);
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(&uParam2, &fParam3, "neck", Var9, Var11, 0, 1, 1);
	LEASH_ATTACH_TO_WORLD(StackVal, &uParam2, Param7, Vector(0.0f, 0.0f, 0.0f), 1);
	LEASH_SET_LEASH_LENGTH(&uParam2, bVar4);
	LEASH_CONSTRAIN(&uParam2);
	LEASH_SET_CONSTRAINT_LENGTH(&uParam2, fVar3);
}

void Function_207(var uParam0, bool bParam1) //Position: 0xB542 / 46402
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
	}
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
	return;
}

void Function_208(int iParam0) //Position: 0xB587 / 46471
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

void Function_209(int iParam0) //Position: 0xB5DA / 46554
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

var Function_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB611 / 46609
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	int iVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (&iParam2 > 4294967295 || &iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == &iParam2 && bVar43 == &iParam3) && bVar43 == &iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	iVar46 = RAND_INT_RANGE(0, (iVar44 - 1));
	uVar45 = bVar1[iVar46];
	return uVar45;
}

var Function_211(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xB72C / 46892
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_14(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_14(&(Param0[iVar02]), 2))
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
			if (!Function_14(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_12(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_213(StackVal, &Global_10996, Function_57(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_14(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_12(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_12(&(Param0[iVar02]), 1);
	Function_212(&vParam1[iVar03] + 16, 1);
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

int Function_212(int iParam0, bool bParam1) //Position: 0xB8F3 / 47347
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

var Function_213(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xB9A5 / 47525
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_57(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

bool Function_214(struct<2>[] Param0) //Position: 0xBACC / 47820
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_218();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_217(&(Param0[iVar02]), 8);
		}
		else if (Function_216())
		{
			iVar1 = 1;
			Function_217(&(Param0[iVar02]), 8);
		}
		Function_217(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_6(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_6(&(Param0[02]), 8) || iVar1));
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
				Function_217(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
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
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_217(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_217(&(Param0[iVar02]), 2);
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
	Function_215();
	return 1;
}

void Function_215() //Position: 0xBE8E / 48782
{
	if (!Function_270(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_216() //Position: 0xBECE / 48846
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

void Function_217(struct<13> Param0) //Position: 0xBEFC / 48892
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_218() //Position: 0xBF0F / 48911
{
	if (!Function_270(128))
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

bool Function_219(int[] iParam0) //Position: 0xBF51 / 48977
{
	int iVar0;
	
	if (Global_6623 || Global_6622)
	{
		iVar0 = 0;
		while (iVar0 <= iParam0)
		{
			if (IS_SCRIPT_VALID(&(iParam0[iVar0])))
			{
				TERMINATE_SCRIPT(&(iParam0[iVar0]));
			}
			iVar0++;
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		CLEAR_PRINTED_OBJECTIVE();
		Function_227();
		return 0;
	}
	return 1;
}

void Function_220() //Position: 0xBF9E / 49054
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_528)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_529) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_529);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_221(&Global_54076, &bVar1) > 100.0f)
			{
				Function_204(&bVar1);
				Var3 = Function_204(&bVar1);
				if (!Function_16(iLocal_527, bVar2))
				{
					Function_80(&iLocal_527, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_45(&iLocal_527, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_221(var uParam0, int iParam1) //Position: 0xC02D / 49197
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_222(&uParam0);
			Var0 = Function_222(&uParam0);
			Function_222(&iParam1);
			Var2 = Function_222(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_222(int iParam0) //Position: 0xC0CA / 49354
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

bool Function_223(int iParam0) //Position: 0xC138 / 49464
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		return 0;
	}
	iVar0 = Function_97(iParam0);
	if (!Function_38(Function_97(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

int Function_224(var uParam0) //Position: 0xC16E / 49518
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_260(&uParam0, 2048))
	{
		return 0;
	}
	uLocal_529 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_528 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_204(&iVar1);
		Var2 = Function_204(&iVar1);
		Function_225(&iVar1);
		Var4 = Function_225(&iVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", 1);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_529);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

struct<8> Function_225(bool bParam0) //Position: 0xC298 / 49816
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

int Function_226(char* cParam0) //Position: 0xC2C1 / 49857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			*(&Global_99485[iVar019] + 64) = &uParam1;
			Global_99485[iVar019].f_72 = uParam2;
			Global_99485[iVar019].f_76 = uParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_227() //Position: 0xC34E / 49998
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		Global_99485[iVar019].f_76 = 0;
		strcpy(&Global_99485[iVar019] + 84, "", 32);
		Global_99485[iVar019].f_72 = 1.0f;
		(&Global_99485[iVar019] + 64) = "";
		strcpy(&(Global_99485[iVar019]), "", 32);
		Global_99485[iVar019].f_80 = 0;
		Global_99485[iVar019].f_148 = 0;
		iVar0++;
	}
	return;
}

void Function_228() //Position: 0xC3C0 / 50112
{
	int iVar0;
	var uVar1;
	
	if ((!Function_113(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_108(&Global_54076, 16, 1, 0);
	}
	iLocal_389 = CREATE_LAYOUT("FortMercer_AA_Layout");
	iLocal_425 = 0;
	uLocal_391[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_389, "FOM_AA_Enc0Squad"));
	uLocal_391[1] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_389, "FOM_AA_Enc1Squad"));
	uLocal_391[2] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_389, "FOM_AA_Enc2Squad"));
	uLocal_391[3] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_389, "FOM_AA_Enc3Squad"));
	uLocal_391[4] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_389, "FOM_AA_Enc4Squad"));
	uLocal_391[5] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_389, "FOM_AA_Enc5Squad"));
	cLocal_508 = CREATE_JOURNAL_ENTRY("FM_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(cLocal_508, 0);
	Function_231(&iLocal_426, 502, 3, 1);
	Function_231(&iLocal_426, 503, 3, 1);
	Function_231(&iLocal_426, 504, 3, 1);
	Function_231(&iLocal_426, 245, 3, 1);
	Function_231(&iLocal_426, 246, 3, 1);
	Function_231(&iLocal_426, 247, 3, 1);
	Function_231(&iLocal_426, 1128, 3, 1);
	Function_229(&iLocal_426, "action_areas", 10, 0);
	Function_229(&iLocal_426, "$/content/scripting/gringo/simpleGringo/Locked_Footlocker", 1, 0);
	Function_231(&iLocal_426, 436, 3, 1);
	Function_229(&iLocal_426, "$/fragments/revolver_cattleman01x", 0, 1);
	Function_229(&iLocal_426, "$/fragments/shotgun_doubleBarrel01x", 0, 1);
	Function_229(&iLocal_426, "$/fragments/repeater_winchester01x", 0, 1);
	Function_229(&iLocal_426, "$/fragments/repeater_carbine01x", 0, 1);
	Function_229(&iLocal_426, "$/fragments/pistol_semiauto01x", 0, 1);
	Function_229(&iLocal_426, "$/fragments/p_gen_noose01x", 0, 1);
	Function_229(&iLocal_426, "$/fragments/p_gen_noose02x", 0, 1);
	Function_229(&iLocal_426, "dead_ground_male", 5, 0);
	Function_229(&iLocal_426, "custom/dead_ground_male", 8, 0);
	Function_169(Global_46953, 1);
	uLocal_409[0] = LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/RIO/event_RIO_FortMercerKickOff", 0);
	iLocal_517 = 0;
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (((!Function_14(&(Global_11752[iVar02]), 2) || Function_14(&(Global_11752[iVar02]), 4)) && iVar0 == 16) && iVar0 == 17)
		{
			bLocal_514 = true;
		}
		iVar0++;
	}
	if (!bLocal_514)
	{
		uVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_00");
		SC_CHALLENGE_LAUNCH(&uVar1);
		if (!Function_188(&iLocal_519))
		{
			Function_193(&iLocal_519);
		}
		else
		{
			Function_166(&iLocal_519);
		}
	}
	DECOR_SET_BOOL(&Global_54076, "FortMercerSafe", 1);
	return;
}

var Function_229(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xC81B / 51227
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_230(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_217(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_230(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xC859 / 51289
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_217(&(Param0[iVar02]), 4);
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

var Function_231(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC928 / 51496
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_217(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_217(&(Param0[iVar02]), 8);
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

void Function_232(int iParam0, int iParam1) //Position: 0xCA04 / 51716
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	var uVar12;
	
	if (!Function_38(iParam0))
	{
		Function_36();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_35(iParam0);
	if (StackVal != 2)
	{
		Function_31("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_44(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_33(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_99(Global_10966) };
		}
		uVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(uVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar12);
		APPEND_JOURNAL_ENTRY(uVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

bool Function_233(int iParam0, bool bParam1) //Position: 0xCB15 / 51989
{
	int iVar0;
	
	iVar0 = Function_97(iParam0);
	if (!Function_34(iVar0))
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

bool Function_234(int iParam0) //Position: 0xCB53 / 52051
{
	if (!Function_18(iParam0))
	{
		return 0;
	}
	return Function_260(&(Global_43791[iParam0]), 2048);
}

void Function_235(char* cParam0) //Position: 0xCB71 / 52081
{
	if (!Function_270(128))
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

void Function_236(int iParam0, bool bParam1) //Position: 0xCBB1 / 52145
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
		Function_237(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_237(var uParam0, int iParam1) //Position: 0xCCA1 / 52385
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_238(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xCCAE / 52398
{
	if (Global_40000 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_40000, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_40022 = Global_40000;
	Global_40022.f_4 = StackVal;
	Global_40022.f_8 = StackVal;
	Global_40022.f_12 = Global_40000.f_12;
	*(&Global_40022 + 16) = &Global_40000 + 16;
	*(&Global_40022 + 24) = &Global_40000 + 24;
	*(&Global_40022 + 32) = &Global_40000 + 32;
	*(&Global_40022 + 48) = &Global_40000 + 48;
	Global_40022.f_64 = Global_40000.f_64;
	Global_40022.f_68 = Global_40000.f_68;
	Global_40000.f_8 = uParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &uParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_239();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_239() //Position: 0xCD9C / 52636
{
	int iVar0;
	
	Global_41176 = Function_240(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_240(int iParam0) //Position: 0xCDEA / 52714
{
	if (!Function_241(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_241(int iParam0) //Position: 0xCE02 / 52738
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_242(bool bParam0) //Position: 0xCE17 / 52759
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_243(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0xCE2A / 52778
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam3))
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
	Global_43580.f_12 = iParam0;
	*(&Global_43580 + 24) = &iParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = fParam1;
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
		Function_246();
	}
	if (&bParam5)
	{
		Function_244(1048576);
	}
}

void Function_244(int iParam0) //Position: 0xCF38 / 53048
{
	Function_245(&Global_43580, iParam0);
	return;
}

void Function_245(var uParam0, var uParam1) //Position: 0xCF46 / 53062
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_246() //Position: 0xCF65 / 53093
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_244(16384);
	}
	return;
}

bool Function_247(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0xCF81 / 53121
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_260(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_233(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = Param1;
	stradd(&cVar0, &Global_44085[Global_46722[Global_43787]9] + 32, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_248(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0xD03F / 53311
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_270(2))
	{
		return;
	}
	if (Function_260(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_14(&(Param0[iVar02]), 2))
		{
			if (Function_249(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_1(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_263(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_249(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0xD0F7 / 53495
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_260(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_14(&iParam0, 2))
	{
		return 1;
	}
	if (Function_14(&iParam0, 4))
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
		(&iParam1 + 16) = Function_213(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_77(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_13(&iParam0, 4);
	}
	Function_250(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_250(int iParam0, struct<2> Param1) //Position: 0xD278 / 53880
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_77(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_77(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_77(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_77(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_77(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_77(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_251(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xD3BE / 54206
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

void Function_252(int iParam0, var uParam1, int iParam2) //Position: 0xD41D / 54301
{
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_258(iParam0, &uParam1, &iParam2);
		Function_257(iParam0, &uParam1, &iParam2);
		Function_256(iParam0, &uParam1, &iParam2);
		Function_255(iParam0, &uParam1, &iParam2);
		Function_254(iParam0, &uParam1, &iParam2);
		Function_253(iParam0, &uParam1, &iParam2);
	}
	return;
}

void Function_253(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xD4C5 / 54469
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 60);
	return;
}

void Function_254(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xD52C / 54572
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 48);
	return;
}

void Function_255(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xD595 / 54677
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 36);
	return;
}

void Function_256(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xD600 / 54784
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 24);
	return;
}

void Function_257(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xD666 / 54886
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &Param1[bVar011] + 12);
	return;
}

void Function_258(var uParam0, struct<11>[] Param1, int iParam2) //Position: 0xD6CF / 54991
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(&iParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(&iParam2, &(Param1[bVar011]));
	PRINTVECTOR(Param1[bVar011]);
	PRINTNL();
	return;
}

int Function_259(int iParam0) //Position: 0xD742 / 55106
{
	if (!Function_18(iParam0))
	{
		return 1;
	}
	return Function_260(&(Global_43791[iParam0]), 4);
}

bool Function_260(var uParam0, int iParam1) //Position: 0xD75E / 55134
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_261(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xD77B / 55163
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_18(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_15())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_260(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_14(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_14(&(Param0[iVar02]), 8))
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

void Function_262(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xD864 / 55396
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_18(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_17(iParam2), 64);
	if (Function_15())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_260(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_263(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_12(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_12(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_263(var uParam0, int iParam1) //Position: 0xD954 / 55636
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_264() //Position: 0xD965 / 55653
{
	var uVar0;
	
	Function_265(3, 3);
	uVar0 = &uVar0;
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_229(&iLocal_228 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_214(&iLocal_228 + 8))
	{
		return 0;
	}
	iLocal_228 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_228))
	{
		iLocal_228 = CREATE_LAYOUT("FortMercer_layout");
	}
	*(&iLocal_228 + 176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "lean_wall01", "look_out_window_L", Vector(-2665,907f, 71,64018f, 3403,63f), Vector(0.0f, -401,1821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 176), 0);
	*(&iLocal_228 + 184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "lean_wall02", "Rand_Idle_NearWall_nospawn", Vector(-2664,901f, 71,66741f, 3404,394f), Vector(0.0f, -220,89f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 184), 0);
	*(&iLocal_228 + 192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "lean_wall03", "Rand_Idle_NearWall_nospawn", Vector(-2663,846f, 71,6609f, 3406,573f), Vector(0.0f, -309,0667f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 192), 0);
	*(&iLocal_228 + 200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking01", "smoking_stand_nospawn", Vector(-2677,894f, 71,64853f, 3424,105f), Vector(0.0f, 43,50084f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 200), 0);
	*(&iLocal_228 + 208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking02", "smoking_stand_nospawn", Vector(-2678,56f, 71,673f, 3419,765f), Vector(0.0f, -183,8617f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 208), 0);
	*(&iLocal_228 + 216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "rand_stand01", "rand_idle_stand_nospawn", Vector(-2652,218f, 67,44727f, 3463,009f), Vector(0.0f, -303,463f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 216), 0);
	*(&iLocal_228 + 224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking03", "smoking_stand_nospawn", Vector(-2669,836f, 67,46977f, 3413,344f), Vector(0.0f, -44,40336f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 224), 0);
	*(&iLocal_228 + 232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking04", "smoking_stand_nospawn", Vector(-2666,917f, 67,46695f, 3416,547f), Vector(0.0f, -44,40336f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 232), 0);
	*(&iLocal_228 + 240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking05", "smoking_stand_nospawn", Vector(-2690,7f, 71,66615f, 3440,958f), Vector(0.0f, 20,88004f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 240), 0);
	*(&iLocal_228 + 248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking06", "smoking_stand_nospawn", Vector(-2686,018f, 71,64673f, 3456,376f), Vector(0.0f, -26,10706f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 248), 0);
	*(&iLocal_228 + 256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking07", "smoking_stand_nospawn", Vector(-2700,05f, 75,77688f, 3442,758f), Vector(0.0f, 28,4266f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 256), 0);
	*(&iLocal_228 + 264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking08", "smoking_stand_nospawn", Vector(-2675,682f, 71,65533f, 3458,85f), Vector(0.0f, 59,55045f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 264), 0);
	*(&iLocal_228 + 272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "peeing03", "Pee_nospawn", Vector(-2656,566f, 67,5366f, 3457,382f), Vector(0.0f, -302,9175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 272), 0);
	*(&iLocal_228 + 280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground01", "Rand_Idle_Sit_Ground_nospawn", Vector(-2675,851f, 67,2496f, 3445,115f), Vector(0.0f, -166,1453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 280), 0);
	*(&iLocal_228 + 288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground02", "Rand_Idle_Sit_Ground_nospawn", Vector(-2669,284f, 67,26254f, 3442,474f), Vector(0.0f, -213,6721f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 288), 0);
	*(&iLocal_228 + 296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground03", "Rand_Idle_Sit_Ground_nospawn", Vector(-2667,1f, 67,26273f, 3447,146f), Vector(0.0f, -243,0467f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 296), 0);
	*(&iLocal_228 + 304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "look_distance04", "stand_lookdistance_w_any", Vector(-2635,913f, 72,71568f, 3421,03f), Vector(0.0f, -16,01797f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 304), 0);
	*(&iLocal_228 + 312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "look_distance05", "stand_lookdistance_w_any", Vector(-2628,921f, 72,71568f, 3430,926f), Vector(0.0f, -102,8346f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 312), 0);
	*(&iLocal_228 + 320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "look_distance08", "stand_lookdistance_w_any", Vector(-2696,563f, 71,64793f, 3417,732f), Vector(0.0f, -339,6927f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 320), 0);
	*(&iLocal_228 + 328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "look_distance09", "stand_lookdistance_w_any", Vector(-2699,165f, 75,66168f, 3424,035f), Vector(0.0f, -387,2234f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 328), 0);
	*(&iLocal_228 + 336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "look_distance10", "stand_lookdistance_w_any", Vector(-2693,644f, 75,77552f, 3445,083f), Vector(0.0f, -387,2234f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 336), 0);
	*(&iLocal_228 + 344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking11", "smoking_stand_nospawn", Vector(-2685,189f, 71,67052f, 3422,78f), Vector(0.0f, 89,51358f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 344), 0);
	*(&iLocal_228 + 352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking12", "smoking_stand_nospawn", Vector(-2655,005f, 67,45554f, 3445,815f), Vector(0.0f, 239,8689f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 352), 0);
	*(&iLocal_228 + 360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking13", "smoking_stand_nospawn", Vector(-2656,019f, 67,42336f, 3444,68f), Vector(0.0f, 326,7446f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 360), 0);
	*(&iLocal_228 + 368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking14", "smoking_stand_nospawn", Vector(-2657,162f, 67,46426f, 3454,367f), Vector(0.0f, 326,7446f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 368), 0);
	*(&iLocal_228 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "look_distance11", "stand_lookdistance_w_any", Vector(-2656,346f, 67,47937f, 3447,885f), Vector(0.0f, -300,1348f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 376), 0);
	*(&iLocal_228 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground09", "Rand_Idle_Sit_Ground_nospawn", Vector(-2688,473f, 67,26274f, 3445,767f), Vector(0.0f, -111,1309f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 384), 0);
	*(&iLocal_228 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking15", "smoking_stand_nospawn", Vector(-2654,661f, 67,4388f, 3456,158f), Vector(0.0f, 326,7446f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 392), 0);
	*(&iLocal_228 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking16", "smoking_stand_nospawn", Vector(-2652,387f, 67,45412f, 3461,44f), Vector(0.0f, 109,4792f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 400), 0);
	*(&iLocal_228 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking17", "smoking_stand_nospawn", Vector(-2654,029f, 67,4543f, 3463,558f), Vector(0.0f, 61,15176f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 408), 0);
	*(&iLocal_228 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "nsmoking18", "smoking_stand_nospawn", Vector(-2646,844f, 71,64709f, 3449,165f), Vector(0.0f, -29,70947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 416), 0);
	*(&iLocal_228 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "rand_nearwall01", "Rand_Idle_NearWall_nospawn", Vector(-2650,985f, 71,65274f, 3446,726f), Vector(0.0f, -29,70947f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 424), 0);
	*(&iLocal_228 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground012", "Rand_Idle_Sit_Ground_nospawn", Vector(-2674,549f, 67,24675f, 3446,019f), Vector(0.0f, -259,4083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 432), 0);
	*(&iLocal_228 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground013", "Rand_Idle_Sit_Ground_nospawn", Vector(-2676,646f, 67,25671f, 3446,429f), Vector(0.0f, -78,35222f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 440), 0);
	*(&iLocal_228 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground014", "Rand_Idle_Sit_Ground_nospawn", Vector(-2670,24f, 67,28008f, 3443,984f), Vector(0.0f, -390,5251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 448), 0);
	*(&iLocal_228 + 456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "sit_ground015", "Rand_Idle_Sit_Ground_nospawn", Vector(-2667,804f, 67,26273f, 3446,287f), Vector(0.0f, -211,189f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 456), 0);
	*(&iLocal_228 + 464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "lean_wall04", "Rand_Idle_NearWall_nospawn", Vector(-2663,085f, 67,48122f, 3475,895f), Vector(0.0f, -30,32541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 464), 0);
	*(&iLocal_228 + 472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "lean_wall05", "look_out_window_L", Vector(-2659,557f, 67,50854f, 3464,311f), Vector(0.0f, -31,5282f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 472), 0);
	*(&iLocal_228 + 480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "lean_smoke01", "rand_idle_stand", Vector(-2657,443f, 67,45677f, 3477,083f), Vector(0.0f, 188,4175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 480), 0);
	*(&iLocal_228 + 488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "rand_stand02", "rand_idle_stand_nospawn", Vector(-2653,214f, 67,45596f, 3456,719f), Vector(0.0f, -208,2987f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 488), 0);
	*(&iLocal_228 + 496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "rand_stand03", "rand_idle_stand_nospawn", Vector(-2654,914f, 67,45504f, 3442,158f), Vector(0.0f, -299,6133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 496), 0);
	*(&iLocal_228 + 504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "rand_stand04", "rand_idle_stand_nospawn", Vector(-2655,843f, 71,64399f, 3443,918f), Vector(0.0f, -251,8061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 504), 0);
	*(&iLocal_228 + 512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "stand_peeing01", "stand_peeing_b_any", Vector(-2647,779f, 71,6308f, 3462,686f), Vector(0.0f, -180,7515f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_228 + 512), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_228, "Locked_Footlocker", "Locked_Footlocker", Vector(-2670,355f, 71,66841f, 3468,587f), Vector(0.0f, -29,0251f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	DECOR_SET_BOOL(&uVar0, "ActionAreaRewardChest", 1);
	return 1;
}

void Function_265(int iParam0, int iParam1) //Position: 0xEC1C / 60444
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

int Function_266() //Position: 0xEC66 / 60518
{
	return 0;
}

bool Function_267() //Position: 0xEC6D / 60525
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
	
	Function_265(3, 3);
	uVar0 = &uVar0;
	Function_229(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_woman", 1, 0);
	Function_229(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_229(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_e_any", 1, 0);
	Function_229(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	if (!Function_214(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("FortMercer_layout");
	}
	*(&iLocal_0 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_HelperInFort", 2,802597E-45f, Vector(-2650,605f, 68,94258f, 3417,972f), Vector(0.0f, 41,79725f, 0.0f), Vector(3,41726f, 3,601136f, 4,856135f));
	*(&iLocal_0 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_GunslingerGoSpot", 2,802597E-45f, Vector(-2566,399f, 62,37367f, 3278,081f), Vector(0.0f, 0.0f, 0.0f), Vector(8,633076f, 8,633076f, 8,633076f));
	*(&iLocal_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "FOM_treasureRoomVolume", 2,802597E-45f, Vector(-2682,255f, 67,89089f, 3455,986f), Vector(0.0f, -29,66339f, 0.0f), Vector(6,178935f, 3,820765f, 4,7748f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "fomv_insideFortVol", 2,802597E-45f, Vector(-2676,624f, 75,20288f, 3450,473f), Vector(0.0f, -44,81342f, 0.0f), Vector(77,89737f, 8,663448f, 123,7932f));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_VultureSpawn", 2,802597E-45f, Vector(-2669,427f, 87,83009f, 3445,179f), Vector(0.0f, -31,09183f, 0.0f), Vector(8.0f, 12,72125f, 8.0f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_FrontLeftWall_In", 2,802597E-45f, Vector(-2636,748f, 74,81787f, 3429,035f), Vector(0.0f, -55,33052f, 0.0f), Vector(14,13746f, 4,723617f, 12,6082f));
	*(&iLocal_0 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MidLeftWall_In", 2,802597E-45f, Vector(-2653,8f, 73,62121f, 3463,666f), Vector(0.0f, -29,8903f, 0.0f), Vector(12,49774f, 5,035148f, 9,405547f));
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MidLeftWallRoom_In", 2,802597E-45f, Vector(-2652,574f, 72,76379f, 3448,731f), Vector(0.0f, -29,10532f, 0.0f), Vector(8,174288f, 2,286261f, 15,20132f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_Courtyard_In", 2,802597E-45f, Vector(-2665,493f, 68,64159f, 3439,3f), Vector(0.0f, -32,3927f, 0.0f), Vector(20,1406f, 13,68817f, 25,17988f));
	*(&iLocal_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_MidRightWall_In", 2,802597E-45f, Vector(-2693,559f, 73,76351f, 3424,775f), Vector(0.0f, -25,22538f, 0.0f), Vector(14,56627f, 4,691936f, 13,62451f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_Backyard_In", 2,802597E-45f, Vector(-2697,855f, 70,22292f, 3482,632f), Vector(0.0f, -45,02954f, 0.0f), Vector(26,02168f, 6,438708f, 26,12281f));
	*(&iLocal_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_BackyardRoom_In", 2,802597E-45f, Vector(-2700,318f, 68,56089f, 3464,464f), Vector(0.0f, -34,45677f, 0.0f), Vector(6,11434f, 2,792691f, 5,490871f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_BackOutside", 2,802597E-45f, Vector(-2658,065f, 67,14471f, 3405,292f), Vector(0.0f, 48,76335f, 0.0f), Vector(10,69537f, 5,489848f, 16,25584f));
	*(&iLocal_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_frontRestrict", 2,802597E-45f, Vector(-2656,203f, 67,26273f, 3405,971f), Vector(0.0f, 45,24816f, 0.0f), Vector(8,039561f, 7,943303f, 7,054241f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_allRestrict", 2,802597E-45f, Vector(-2678,586f, 70,29451f, 3454,363f), Vector(0.0f, -40,27494f, 0.0f), Vector(75,70174f, 15,71f, 111,1774f));
	*(&iLocal_0 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_LeonStayIn", 2,802597E-45f, Vector(-2667,375f, 68,48604f, 3441,496f), Vector(0.0f, -30,95493f, 0.0f), Vector(43,27859f, 29,41345f, 50,46922f));
	*(&iLocal_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nv_whoreIn", 2,802597E-45f, Vector(-2683,6f, 71,31423f, 3453,767f), Vector(0,9264874f, 44,17114f, -4,941747f), Vector(90,29967f, 30,9356f, 40,21533f));
	*(&iLocal_0 + 216) = Vector(-2668,119f, 73,79157f, 3443,462f);
	*(&iLocal_0 + 216 + 12) = Vector(0.0f, -120,2145f, 0.0f);
	*(&iLocal_0 + 240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ropeFlag", Vector(-2668,119f, 73,79157f, 3443,462f), Vector(0.0f, -120,2145f, 0.0f));
	*(&iLocal_0 + 248) = Vector(-2655,723f, 71,723f, 3410,917f);
	*(&iLocal_0 + 248 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_wallBlip", Vector(-2655,723f, 71,723f, 3410,917f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "FOM_helperSpawn", Vector(-2657,072f, 67,26305f, 3407,453f), Vector(0.0f, 9,423182f, 0.0f));
	*(&iLocal_0 + 288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore1", Vector(-2664.0f, 67,26276f, 3432.0f), Vector(0.0f, -100,8307f, 0.0f));
	*(&iLocal_0 + 296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore2", Vector(-2661,699f, 67,26276f, 3431,688f), Vector(0.0f, 135,2673f, 0.0f));
	*(&iLocal_0 + 304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore3", Vector(-2661,917f, 67,26276f, 3433,885f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore4", Vector(-2644,943f, 71,65482f, 3445,018f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore5", Vector(-2652,54f, 71,65486f, 3453,777f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore6", Vector(-2654,065f, 71,65486f, 3449,105f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore7", Vector(-2673,93f, 67,26273f, 3438,07f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore8", Vector(-2693,898f, 67,45897f, 3447,081f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore9", Vector(-2659,667f, 67,45486f, 3472,439f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore10", Vector(-2698,642f, 67,46252f, 3449,202f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_whore11", Vector(-2702,88f, 67,31358f, 3447,075f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 376) = Vector(-2611,227f, 68,94801f, 3378,594f);
	*(&iLocal_0 + 376 + 12) = Vector(0.0f, 139,8266f, 0.0f);
	*(&iLocal_0 + 400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "fomf_teleport", Vector(-2611,227f, 68,94801f, 3378,594f), Vector(0.0f, 139,8266f, 0.0f));
	*(&iLocal_0 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Front_Left_Wall1", Vector(-2638,974f, 72,66217f, 3425,314f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Front_Left_Wall2", Vector(-2633,072f, 72,66217f, 3430,318f), Vector(0.0f, -90,81242f, 0.0f));
	*(&iLocal_0 + 424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Front_Left_Wall3", Vector(-2634,04f, 72,66217f, 3425,038f), Vector(0.0f, -44,19588f, 0.0f));
	*(&iLocal_0 + 432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Left_Wall1", Vector(-2656,069f, 71,65486f, 3466,49f), Vector(0.0f, -53,0338f, 0.0f));
	*(&iLocal_0 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Left_Wall2", Vector(-2656,069f, 71,65486f, 3464,049f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Left_Wall_Room1", Vector(-2656,008f, 71,65219f, 3450,596f), Vector(0.0f, -46,54007f, 0.0f));
	*(&iLocal_0 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Left_Wall_Room2", Vector(-2652,312f, 71,65219f, 3450,596f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Courtyard1", Vector(-2660.0f, 67,26273f, 3437,631f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Courtyard2", Vector(-2660.0f, 67,26273f, 3436.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Courtyard3", Vector(-2663,206f, 67,26273f, 3431,816f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Right_Wall1", Vector(-2691,241f, 71,66042f, 3428,14f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Right_Wall2", Vector(-2694,032f, 71,68653f, 3422,35f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Mid_Right_Wall3", Vector(-2692,032f, 71,66042f, 3425,377f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Backyard1", Vector(-2696.0f, 67,26273f, 3476,332f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Backyard2", Vector(-2701,115f, 67,26273f, 3476,904f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Backyard3", Vector(-2696.0f, 67,26273f, 3484.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Backyard_Room1", Vector(-2702,135f, 67,46329f, 3464,698f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Backyard_Room2", Vector(-2700,091f, 67,46329f, 3464,698f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Cattleman", Vector(-2663,496f, 68,62901f, 3415,532f), Vector(0.0f, 0.0f, 86,91545f));
	*(&iLocal_0 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Cattleman1", Vector(-2663,069f, 68,62901f, 3415,205f), Vector(-89,15907f, 172,6352f, -89,8922f));
	*(&iLocal_0 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Cattleman2", Vector(-2663,45f, 68,62901f, 3415,128f), Vector(-33,17172f, 181,955f, 87,01254f));
	*(&iLocal_0 + 576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DBShotgun", Vector(-2655,653f, 67,93497f, 3412,03f), Vector(14,36772f, 42,64714f, 37,78378f));
	*(&iLocal_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Winchester", Vector(-2658,077f, 67,73362f, 3409,748f), Vector(-60,74961f, -46,80055f, 119,4121f));
	*(&iLocal_0 + 592) = Vector(-2664,206f, 68,52311f, 3409,049f);
	*(&iLocal_0 + 592 + 12) = Vector(89,15635f, -1,764732f, 89,85078f);
	*(&iLocal_0 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_DBShotgun1", Vector(-2664,206f, 68,52311f, 3409,049f), Vector(89,15635f, -1,764732f, 89,85078f));
	*(&iLocal_0 + 624) = Vector(-2659,768f, 68,24799f, 3408,643f);
	*(&iLocal_0 + 624 + 12) = Vector(53,85628f, -1,491999f, 93,78275f);
	*(&iLocal_0 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Cattleman3", Vector(-2659,768f, 68,24799f, 3408,643f), Vector(53,85628f, -1,491999f, 93,78275f));
	*(&iLocal_0 + 656) = Vector(-2684,602f, 68,46878f, 3455,102f);
	*(&iLocal_0 + 656 + 12) = Vector(-20,12933f, 0.0f, 89,51124f);
	*(&iLocal_0 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SemiAuto", Vector(-2684,602f, 68,46878f, 3455,102f), Vector(-20,12933f, 0.0f, 89,51124f));
	*(&iLocal_0 + 688) = Vector(-2679,239f, 68,26679f, 3454,025f);
	*(&iLocal_0 + 688 + 12) = Vector(55,84368f, 5,175341f, -90,81072f);
	*(&iLocal_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SemiAuto1", Vector(-2679,239f, 68,26679f, 3454,025f), Vector(55,84368f, 5,175341f, -90,81072f));
	*(&iLocal_0 + 720) = CREATE_OBJECTSET_IN_LAYOUT("AmbChestsSet", &iLocal_0, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest1", Vector(-2665,019f, 71,65143f, 3465,047f), Vector(0.0f, 154,9981f, 0.0f));
	DECOR_SET_BOOL(&uVar1, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_0 + 720);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest2", Vector(-2672,282f, 74,94236f, 3467,827f), Vector(-13,67062f, -121,0118f, 15,84374f));
	DECOR_SET_BOOL(&uVar2, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_0 + 720);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest3", Vector(-2676,25f, 67,26176f, 3471,727f), Vector(0.0f, -137,5554f, 0.0f));
	DECOR_SET_BOOL(&uVar3, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_0 + 720);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest4", Vector(-2645,263f, 67,45204f, 3423,325f), Vector(0.0f, 134,9174f, 0.0f));
	DECOR_SET_BOOL(&uVar4, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_0 + 720);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest5", Vector(-2641,36f, 67,45364f, 3448,439f), Vector(0.0f, 159,4772f, 0.0f));
	DECOR_SET_BOOL(&uVar5, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_0 + 720);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest6", Vector(-2695,721f, 67,44294f, 3434,128f), Vector(0.0f, 61,2397f, 0.0f));
	DECOR_SET_BOOL(&uVar6, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_0 + 720);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest7", Vector(-2706,25f, 71,66631f, 3473,112f), Vector(0.0f, -32,37888f, 0.0f));
	DECOR_SET_BOOL(&uVar7, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_0 + 720);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest8", Vector(-2653,877f, 67,4453f, 3470,5f), Vector(0.0f, 58,04961f, 0.0f));
	DECOR_SET_BOOL(&uVar8, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_0 + 720);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Chest9", Vector(-2678,988f, 75,71943f, 3426,333f), Vector(-2,064145f, 36,5708f, -2,324586f));
	DECOR_SET_BOOL(&uVar9, "ActionAreaRewardChest", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_0 + 720);
	*(&iLocal_0 + 728) = Vector(-2658,343f, 67,26274f, 3406,283f);
	*(&iLocal_0 + 728 + 12) = Vector(0.0f, 256,2364f, 0.0f);
	*(&iLocal_0 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_MarstonStart", Vector(-2658,343f, 67,26274f, 3406,283f), Vector(0.0f, 256,2364f, 0.0f));
	*(&iLocal_0 + 760) = Vector(-2658,546f, 72,15692f, 3405,85f);
	*(&iLocal_0 + 760 + 12) = Vector(0.0f, 207,1805f, 0.0f);
	*(&iLocal_0 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_MarstonStart1", Vector(-2658,546f, 72,15692f, 3405,85f), Vector(0.0f, 207,1805f, 0.0f));
	*(&iLocal_0 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman", "stand_drunkdancing_woman", Vector(-2662,576f, 67,26276f, 3434,049f), Vector(0.0f, -36,57199f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 792), 0);
	*(&iLocal_0 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman1", "stand_drunkdancing_woman", Vector(-2666,576f, 67,26276f, 3434,049f), Vector(0.0f, -100,4373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 800), 0);
	*(&iLocal_0 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman2", "stand_drunkdancing_woman", Vector(-2658,576f, 67,26276f, 3438,049f), Vector(0.0f, 62,81233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 808), 0);
	*(&iLocal_0 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman3", "stand_drunkdancing_woman", Vector(-2665,842f, 67,26273f, 3436,435f), Vector(0.0f, -57,40537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 816), 0);
	*(&iLocal_0 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman4", "stand_drunkdancing_woman", Vector(-2670,576f, 67,26273f, 3434,049f), Vector(0.0f, -67,07433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 824), 0);
	*(&iLocal_0 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_kneelvomit_n_any", "stand_kneelvomit_n_any", Vector(-2658,576f, 67,26276f, 3434,049f), Vector(0.0f, -48,20319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 832), 0);
	*(&iLocal_0 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", Vector(-2658,576f, 67,26273f, 3430,049f), Vector(0.0f, 69,18361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 840), 0);
	*(&iLocal_0 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", Vector(-2656,153f, 67,26273f, 3434,049f), Vector(0.0f, 109,8058f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 848), 0);
	*(&iLocal_0 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", Vector(-2665,043f, 67,26276f, 3432,064f), Vector(0.0f, -112,2018f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 856), 0);
	*(&iLocal_0 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman5", "stand_drunkdancing_woman", Vector(-2662,576f, 67,26276f, 3439,936f), Vector(0.0f, -28,36662f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 864), 0);
	*(&iLocal_0 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", Vector(-2660,313f, 67,26276f, 3434,049f), Vector(0.0f, 125,4023f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 872), 0);
	*(&iLocal_0 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "stand_drunkdancing_woman6", "stand_drunkdancing_woman", Vector(-2662,576f, 67,26273f, 3436,221f), Vector(0.0f, -96,99657f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 880), 0);
	*(&iLocal_0 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "mex_flirt_stand_link", "mex_flirt_stand_link", Vector(-2660.0f, 67,26276f, 3431,419f), Vector(0.0f, 138,9153f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 888), 0);
	*(&iLocal_0 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "mex_flirt_stand_link1", "mex_flirt_stand_link", Vector(-2665,215f, 67,26273f, 3438,515f), Vector(0.0f, -40,97479f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 896), 0);
	*(&iLocal_0 + 904) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "IntroCover", Vector(-2656,671f, 67,2471f, 3407,647f), Vector(0.0f, -78,47431f, 0.0f), 1);
	return 1;
}

void Function_268(char* cParam0) //Position: 0x10610 / 67088
{
	if (!Function_270(128))
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

void Function_269(int iParam0) //Position: 0x1064D / 67149
{
	int iVar0;
	
	if (Function_16(iParam0, 1) && Function_16(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_270(int iParam0) //Position: 0x10681 / 67201
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_271(struct<2>[] Param0, int iParam1) //Position: 0x1069D / 67229
{
	int iVar0;
	
	if (!Function_270(2))
	{
		return 0;
	}
	if (Function_260(&(Global_43791[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_14(&(Param0[iVar02]), 2))
		{
			if (Function_14(&(Param0[iVar02]), 4))
			{
				if (IS_LATER_THAN(&Param0[iVar02] + 8, 0))
				{
					return 1;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_272(int iParam0) //Position: 0x1070C / 67340
{
	if (Global_6666)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (Global_6623 || Global_6622)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6622)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 1;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (Function_260(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

