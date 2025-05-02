//Decompiled with MagicRDR v1.0
//Function Count : 716
//Statics Count : 1794
//Natives Count : 761
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 7;
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
	var uLocal_36 = 2;
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
	var uLocal_48 = 6;
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
	var uLocal_64 = 6;
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
	var uLocal_80 = 7;
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
	var uLocal_98 = 9;
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
	var uLocal_120 = 10;
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
	var uLocal_144 = 9;
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
	var uLocal_166 = 12;
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
	var uLocal_194 = 9;
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
	var uLocal_216 = 5;
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
	var uLocal_230 = 1;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 1;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 5;
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
	var uLocal_256 = 1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 6;
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
	var uLocal_370 = 6;
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
	var uLocal_386 = 8;
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
	var uLocal_406 = 12;
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
	var uLocal_434 = 7;
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
	var uLocal_452 = 7;
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
	var uLocal_470 = 4;
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
	var uLocal_482 = 4;
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
	var uLocal_506 = 4;
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
	var uLocal_518 = 4;
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
	var uLocal_530 = 5;
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
	var uLocal_544 = 8;
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
	var uLocal_572 = 5;
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
	char[] cLocal_748[4] = 0;
	var uLocal_749 = 0;
	struct<6> Local_750 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	int iLocal_762 = 27;
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
	var uLocal_872 = 8;
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
	int iLocal_914 = 0;
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
	bool bLocal_926 = false;
	int iLocal_927 = 0;
	bool bLocal_928 = false;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	bool bLocal_931 = false;
	var uLocal_932 = 0;
	bool bLocal_933 = false;
	var uLocal_934 = 0;
	int iLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	int iLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	int iLocal_947[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_973 = false;
	bool bLocal_974 = false;
	bool bLocal_975 = false;
	int iLocal_976 = 0;
	var uLocal_977 = 13;
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
	struct<15> Local_1031[9];
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 5;
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
	var uLocal_1201 = 5;
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
	var uLocal_1231 = 5;
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
	var uLocal_1261 = 5;
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
	var uLocal_1291 = 5;
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
	bool bLocal_1314 = false;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	bool bLocal_1319 = false;
	bool bLocal_1320 = false;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	bool bLocal_1330 = false;
	bool bLocal_1331 = false;
	bool bLocal_1332 = false;
	bool bLocal_1333 = false;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	var uLocal_1338[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	int iLocal_1356[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_1382 = false;
	var uLocal_1383 = 0;
	bool bLocal_1384 = false;
	var uLocal_1385 = 0;
	bool bLocal_1386 = false;
	var uLocal_1387 = 0;
	bool bLocal_1388 = false;
	var uLocal_1389 = 0;
	var uLocal_1390[1] = { 0 };
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394[1] = { 0 };
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 3;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 6;
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
	float fLocal_1420 = 0.0f;
	var uLocal_1421 = 0;
	int iLocal_1422 = 0;
	var uLocal_1423 = 0;
	bool bLocal_1424 = false;
	var uLocal_1425 = 0;
	bool bLocal_1426 = false;
	var uLocal_1427 = 0;
	var uLocal_1428[3] = { 0, 0, 0 };
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	int iLocal_1450 = 0;
	var uLocal_1451 = 0;
	int iLocal_1452 = 0;
	var uLocal_1453 = 0;
	int iLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	int iLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	int iLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	int iLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	int iLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	int iLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	int iLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	int iLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	int iLocal_1492 = 0;
	var uLocal_1493 = 0;
	int iLocal_1494 = 0;
	var uLocal_1495 = 0;
	char[] cLocal_1496[1][4] = { 0 };
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	char[] cLocal_1500[1][4] = { 0 };
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	char[] cLocal_1504[3][4] = { 0, 0, 0 };
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	char[] cLocal_1512[6][4] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	bool bLocal_1526 = false;
	var uLocal_1527 = 0;
	char[] cLocal_1528[3][4] = { 0, 0, 0 };
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	char[] cLocal_1536[6][4] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	struct<2> Local_1550 = { 0, 0 } ;
	var uLocal_1552 = 0;
	struct<2> Local_1553 = { 0, 0 } ;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	struct<2> Local_1559 = { 0, 0 } ;
	var uLocal_1561 = 0;
	struct<2> Local_1562 = { 0, 0 } ;
	var uLocal_1564 = 0;
	struct<5> Local_1565 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1570 = 0;
	struct<2> Local_1571 = { 0, 0 } ;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	int iLocal_1595 = 0;
	int iLocal_1596 = 0;
	int iLocal_1597 = 0;
	int iLocal_1598 = 0;
	bool bLocal_1599[5] = { false, false, false, false, false };
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	int iLocal_1611 = 0;
	int iLocal_1612 = 0;
	bool bLocal_1613 = false;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	bool bLocal_1618 = false;
	bool bLocal_1619 = false;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	int iLocal_1625 = 0;
	int iLocal_1626[4] = { 0, 0, 0, 0 };
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	char[] cLocal_1636[1][4] = { 0 };
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	char[] cLocal_1640[1][4] = { 0 };
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	char[] cLocal_1644[3][4] = { 0, 0, 0 };
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	char[] cLocal_1652[6][4] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	char[] cLocal_1666[3][4] = { 0, 0, 0 };
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	char[] cLocal_1674[6][4] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	int iLocal_1690 = 0;
	var uLocal_1691 = 0;
	bool bLocal_1692 = false;
	var uLocal_1693 = 0;
	bool bLocal_1694 = false;
	var uLocal_1695 = 0;
	bool bLocal_1696 = false;
	var uLocal_1697 = 0;
	bool bLocal_1698 = false;
	var uLocal_1699 = 0;
	bool bLocal_1700 = false;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	struct<149> Local_1734 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_750 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_926 = 99;
	iLocal_927 = 6;
	iLocal_914 = 1000;
	while (Function_277())
	{
		Function_228();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_933);
	Function_225(12, 1, 0, 1, 1);
	Function_225(3, 1, 0, 1, 1);
	Function_225(13, 0, 0, 1, 1);
	Function_225(11, 0, 0, 1, 1);
	Function_224(&cLocal_748);
	Function_224(&iLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_223();
	Function_196(bLocal_974, 1, 0, 1, 0, 0, 0, 0);
	Function_195();
	Function_189();
	STREAMING_UNLOAD_BOUNDS();
	Function_185(&iLocal_762);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_929))
	{
		DESTROY_ITERATOR(&uLocal_929);
	}
	RELEASE_LAYOUT_REF(&cLocal_748);
	if (bLocal_973)
	{
		Function_26(Local_750, 1, 1, 1, 0);
	}
	else if (bLocal_974)
	{
		Function_22(Local_750);
	}
	else
	{
		Function_2(Local_750);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xFC / 252
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x11D / 285
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x13A / 314
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x15D / 349
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x174 / 372
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

void Function_7(int iParam0) //Position: 0x216 / 534
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x239 / 569
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

void Function_9() //Position: 0x283 / 643
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x29C / 668
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

void Function_11(var uParam0, int iParam1) //Position: 0x2EF / 751
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

struct<16> Function_12(int iParam0) //Position: 0x419 / 1049
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

bool Function_13() //Position: 0x453 / 1107
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x46E / 1134
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x47B / 1147
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x49B / 1179
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x4B2 / 1202
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x4CD / 1229
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x714 / 1812
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x740 / 1856
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

bool Function_21(int iParam0) //Position: 0x764 / 1892
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x779 / 1913
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x797 / 1943
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
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
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x83D / 2109
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

struct<24> Function_25(char* cParam0) //Position: 0x87C / 2172
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAD2 / 2770
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

void Function_27() //Position: 0xBC6 / 3014
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

int Function_28(int iParam0, bool bParam1) //Position: 0xBF8 / 3064
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

int Function_29(int iParam0) //Position: 0xC36 / 3126
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC50 / 3152
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC66 / 3174
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF63 / 3939
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

void Function_33(char* cParam0) //Position: 0xFD8 / 4056
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1012 / 4114
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

bool Function_35(var uParam0, int iParam1) //Position: 0x108E / 4238
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10A1 / 4257
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

int Function_37(int iParam0) //Position: 0x1142 / 4418
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&iVar1, 2147483648);
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x117F / 4479
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1195 / 4501
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
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
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x13F3 / 5107
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1431 / 5169
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

void Function_42(bool bParam0) //Position: 0x1470 / 5232
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

void Function_43() //Position: 0x14C5 / 5317
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

void Function_44() //Position: 0x1510 / 5392
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

void Function_45() //Position: 0x1616 / 5654
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

void Function_46() //Position: 0x1649 / 5705
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

void Function_47() //Position: 0x17DC / 6108
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

void Function_48() //Position: 0x1995 / 6549
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19A3 / 6563
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
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
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

bool Function_50() //Position: 0x1BC0 / 7104
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1BD5 / 7125
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C7C / 7292
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F18 / 7960
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

var Function_54() //Position: 0x2556 / 9558
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x255F / 9567
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2570 / 9584
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

struct<32> Function_57(char* cParam0) //Position: 0x2667 / 9831
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2682 / 9858
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x26E9 / 9961
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x26FB / 9979
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x270D / 9997
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

int Function_62(int iParam0) //Position: 0x2841 / 10305
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2850 / 10320
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2889 / 10377
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x28C6 / 10438
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A60 / 10848
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

int Function_67(bool bParam0) //Position: 0x2CA4 / 11428
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2CE5 / 11493
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

struct<8> Function_69() //Position: 0x2D6E / 11630
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

struct<8> Function_70() //Position: 0x2E05 / 11781
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

void Function_71() //Position: 0x2E84 / 11908
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EC1 / 11969
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

void Function_73() //Position: 0x30CD / 12493
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

bool Function_74(char* cParam0) //Position: 0x3184 / 12676
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x319C / 12700
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

struct<8> Function_76() //Position: 0x3294 / 12948
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x329E / 12958
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32AF / 12975
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x32C5 / 12997
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3391 / 13201
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33AE / 13230
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

bool Function_82(int iParam0) //Position: 0x3BDA / 15322
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C15 / 15381
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3C24 / 15396
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
						else if (iVar0 != Global_46838[1])
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

bool Function_85(int iParam0) //Position: 0x4102 / 16642
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x4118 / 16664
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4137 / 16695
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4151 / 16721
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41BB / 16827
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

void Function_90(int iParam0) //Position: 0x43E3 / 17379
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

void Function_91() //Position: 0x4481 / 17537
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

void Function_92() //Position: 0x45E3 / 17891
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4663 / 18019
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49BA / 18874
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

int Function_95(int iParam0) //Position: 0x4A42 / 19010
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A5C / 19036
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A87 / 19079
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4AB5 / 19125
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D51 / 19793
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F25 / 20261
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

int Function_101(int iParam0, char* cParam1) //Position: 0x518F / 20879
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

int Function_102() //Position: 0x531F / 21279
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

void Function_103() //Position: 0x53C0 / 21440
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

void Function_104(int iParam0) //Position: 0x547E / 21630
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

var Function_105(int iParam0) //Position: 0x54E4 / 21732
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5573 / 21875
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

var Function_107(int iParam0, int iParam1) //Position: 0x571F / 22303
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

void Function_108() //Position: 0x5764 / 22372
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x577A / 22394
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57BA / 22458
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x57FA / 22522
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5809 / 22537
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

int Function_113(int iParam0) //Position: 0x59D1 / 22993
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

var Function_114() //Position: 0x5A66 / 23142
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5A8B / 23179
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F5A / 24410
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

var Function_117(int iParam0) //Position: 0x6281 / 25217
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6324 / 25380
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6521 / 25889
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66CC / 26316
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x679E / 26526
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
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

void Function_122(int iParam0) //Position: 0x70B9 / 28857
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7236 / 29238
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7341 / 29505
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x736D / 29549
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

var Function_126(vector3 vParam0) //Position: 0x73C4 / 29636
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

void Function_127(var uParam0, int iParam1) //Position: 0x7412 / 29714
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x746D / 29805
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
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

void Function_129() //Position: 0x760E / 30222
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7614 / 30228
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76C3 / 30403
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7718 / 30488
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x772E / 30510
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

bool Function_134(int iParam0, int iParam1) //Position: 0x777F / 30591
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

void Function_135(var uParam0, int iParam1) //Position: 0x77AC / 30636
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77BD / 30653
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x77D7 / 30679
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x77E8 / 30696
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

void Function_139(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7944 / 31044
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

bool Function_140() //Position: 0x79CF / 31183
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x79FC / 31228
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7BAC / 31660
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7C03 / 31747
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7C28 / 31784
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7C7E / 31870
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

bool Function_146(bool bParam0) //Position: 0x7CDD / 31965
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7CE9 / 31977
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D05 / 32005
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

bool Function_149() //Position: 0x7D57 / 32087
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7D87 / 32135
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

int Function_151(int iParam0, int iParam1) //Position: 0x7DFC / 32252
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E59 / 32345
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

int Function_153(int iParam0, int iParam1) //Position: 0x7ECC / 32460
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F27 / 32551
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x81F1 / 33265
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8490 / 33936
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

void Function_157() //Position: 0x84FF / 34047
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

int Function_158(int iParam0, int iParam1) //Position: 0x857F / 34175
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

int Function_159(int iParam0) //Position: 0x91E2 / 37346
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x91F7 / 37367
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

void Function_161(var uParam0, int iParam1) //Position: 0x9246 / 37446
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x929E / 37534
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

bool Function_163(int iParam0, int iParam1) //Position: 0x9311 / 37649
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9325 / 37669
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

var Function_165(int iParam0) //Position: 0x9416 / 37910
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

bool Function_166(var uParam0, int iParam1) //Position: 0x946E / 37998
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x948B / 38027
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

bool Function_168(int iParam0) //Position: 0x94E5 / 38117
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x94F7 / 38135
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

void Function_170(struct<185> Param0) //Position: 0x952B / 38187
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
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9596 / 38294
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
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x9680 / 38528
{
	int iVar0;
	
	Function_174(iParam0);
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
	Function_173();
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

void Function_173() //Position: 0x97FF / 38911
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x980B / 38923
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

void Function_175() //Position: 0x9851 / 38993
{
	Function_176();
	return;
}

void Function_176() //Position: 0x985A / 39002
{
	Function_185(&iLocal_4 + 8);
	Function_177(&Global_11544, &Global_13580, 0, 0);
	Function_177(&Global_11544, &Global_13580, 1, 0);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9883 / 39043
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

void Function_178(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x992B / 39211
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_181(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_184(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_184(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_181(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
	}
}

int Function_179(int iParam0) //Position: 0x9A91 / 39569
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

int Function_180(int iParam0) //Position: 0x9ABC / 39612
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

void Function_181(var uParam0, int iParam1) //Position: 0x9AF0 / 39664
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_182(int iParam0) //Position: 0x9B01 / 39681
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

void Function_183(var uParam0, int iParam1) //Position: 0x9BAA / 39850
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_184(var uParam0, int iParam1) //Position: 0x9BC4 / 39876
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185(int iParam0) //Position: 0x9BE1 / 39905
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

void Function_186(struct<2>[] Param0, int iParam1) //Position: 0x9C09 / 39945
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

void Function_187(struct<13> Param0) //Position: 0x9D54 / 40276
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_188(struct<13> Param0) //Position: 0x9D71 / 40305
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_189() //Position: 0x9D8F / 40335
{
	Function_193(32768);
	AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	if (IS_BLIP_VALID(&uLocal_1486))
	{
		REMOVE_BLIP(&uLocal_1486);
	}
	if (IS_BLIP_VALID(&uLocal_1488))
	{
		REMOVE_BLIP(&uLocal_1488);
	}
	if (IS_BLIP_VALID(&uLocal_1490))
	{
		REMOVE_BLIP(&uLocal_1490);
	}
	if (IS_BLIP_VALID(&iLocal_1492))
	{
		REMOVE_BLIP(&iLocal_1492);
	}
	if (IS_ACTOR_VALID(&bLocal_933))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_933)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_933));
		}
	}
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_931, 0);
	}
	if (IS_OBJECT_VALID(&iLocal_1494))
	{
		Function_192();
		DESTROY_OBJECT(&iLocal_1494);
	}
	if (IS_OBJECT_VALID(&Local_1734 + 8))
	{
		DESTROY_OBJECT(&Local_1734 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1734))
	{
		DESTROY_OBJECT(&Local_1734);
	}
	if (IS_ACTOR_VALID(&fLocal_1420))
	{
		RELEASE_ACTOR(&fLocal_1420);
	}
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		RELEASE_ACTOR(&bLocal_1386);
	}
	if (IS_ACTOR_VALID(&iLocal_1422))
	{
		RELEASE_ACTOR(&iLocal_1422);
	}
	if (IS_ACTOR_VALID(&bLocal_1424))
	{
		RELEASE_ACTOR(&bLocal_1424);
	}
	if (IS_ACTOR_VALID(&bLocal_1426))
	{
		RELEASE_ACTOR(&bLocal_1426);
	}
	if (SQUAD_IS_VALID(&uLocal_1688))
	{
		Function_190(&uLocal_1688, 0, 0);
		RELEASE_OBJECT_REF(&uLocal_1688);
	}
	if (SQUAD_IS_VALID(&iLocal_1690))
	{
		Function_190(&iLocal_1690, 0, 0);
		RELEASE_OBJECT_REF(&iLocal_1690);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 64))
	{
		Function_190(&Local_1734 + 64, 0, 0);
		RELEASE_OBJECT_REF(&Local_1734 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 72))
	{
		Function_190(&Local_1734 + 72, 0, 0);
		RELEASE_OBJECT_REF(&Local_1734 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 80))
	{
		Function_190(&Local_1734 + 80, 0, 0);
		RELEASE_OBJECT_REF(&Local_1734 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 88))
	{
		Function_190(&Local_1734 + 88, 0, 0);
		RELEASE_OBJECT_REF(&Local_1734 + 88);
	}
	if (IS_OBJECT_VALID(&uLocal_1702))
	{
		DESTROY_OBJECT(&uLocal_1702);
	}
	return;
}

void Function_190(int iParam0, bool bParam1, bool bParam2) //Position: 0x9F89 / 40841
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
			if (&bParam2)
			{
				if (!Function_191(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_191(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xA012 / 40978
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_192() //Position: 0xA032 / 41010
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

void Function_193(int iParam0) //Position: 0xA05D / 41053
{
	Function_194(&Global_43580, iParam0);
	return;
}

void Function_194(var uParam0, var uParam1) //Position: 0xA06B / 41067
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_195() //Position: 0xA08A / 41098
{
	int iVar0;
	
	iVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRAILROAD_rrCurve_28", 3));
	if (IS_OBJECT_VALID(&iVar0))
	{
		SET_CURVE_WEIGHT(&iVar0, 10);
	}
	iVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve346rebuiltCurve1", 18));
	if (IS_OBJECT_VALID(&iVar0))
	{
		SET_CURVE_WEIGHT(&iVar0, 10);
	}
	iVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18));
	if (IS_OBJECT_VALID(&iVar0))
	{
		SET_CURVE_WEIGHT(&iVar0, 10);
	}
	iVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18));
	if (IS_OBJECT_VALID(&iVar0))
	{
		SET_CURVE_WEIGHT(&iVar0, 10);
	}
	return;
}

void Function_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA16A / 41322
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_222());
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
	Function_192();
	CLEAR_PRINTED_OBJECTIVE();
	Function_221();
	Function_219(0);
	Function_218();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_217();
	Function_216();
	Function_192();
	ENABLE_JOURNAL_REPLAY(1);
	Function_215(1);
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
		Function_214(&Global_54076);
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
	Function_211(Global_42825);
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
	Function_210();
	Function_209(1178687);
	Function_193(33039);
	Function_208(0x218003f);
	Function_207(4194560);
	Function_206();
	Function_205();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_202(0, 1, 1);
	}
	else
	{
		Function_202(0, 1, 1);
	}
	Function_201();
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
	Function_197();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_197() //Position: 0xA376 / 41846
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
		if (Function_200() > 3)
		{
			iVar0 *= 2;
		}
		Function_198(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA3CD / 41933
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_199(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_199(bool bParam0) //Position: 0xA41D / 42013
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_200() //Position: 0xA446 / 42054
{
	return Global_21369.f_248;
}

void Function_201() //Position: 0xA451 / 42065
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

void Function_202(int iParam0, bool bParam1, int iParam2) //Position: 0xA47B / 42107
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
			Function_203(Global_43789);
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

void Function_203(int iParam0) //Position: 0xA587 / 42375
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_204())
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

bool Function_204() //Position: 0xA606 / 42502
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

void Function_205() //Position: 0xA66F / 42607
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

void Function_206() //Position: 0xA695 / 42645
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

void Function_207(int iParam0) //Position: 0xA6BB / 42683
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_208(int iParam0) //Position: 0xA6D8 / 42712
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_209(bool bParam0) //Position: 0xA6EB / 42731
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_210() //Position: 0xA718 / 42776
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

void Function_211(int iParam0) //Position: 0xA790 / 42896
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
		Function_212(78, 1, 1);
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

int Function_212(bool bParam0, bool bParam1, int iParam2) //Position: 0xA8C6 / 43206
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_213(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_213(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_213(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_213(bool bParam0) //Position: 0xA914 / 43284
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

void Function_214(int iParam0) //Position: 0xAA08 / 43528
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

void Function_215(bool bParam0) //Position: 0xAA8B / 43659
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

void Function_216() //Position: 0xAB02 / 43778
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

void Function_217() //Position: 0xAB46 / 43846
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

void Function_218() //Position: 0xAB8A / 43914
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_219(int iParam0) //Position: 0xABA0 / 43936
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_220())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_220() //Position: 0xABE0 / 44000
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

void Function_221() //Position: 0xAC05 / 44037
{
	Global_15862 = 0.0f;
	return;
}

int Function_222() //Position: 0xAC0F / 44047
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_223() //Position: 0xAC2C / 44076
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_224(int iParam0) //Position: 0xAC35 / 44085
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

int Function_225(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xAC9D / 44189
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
		Function_227(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_226(&Global_15402[iParam014] + 8);
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

void Function_226(int iParam0) //Position: 0xAFDF / 45023
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

void Function_227(var uParam0) //Position: 0xB012 / 45074
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_228() //Position: 0xB029 / 45097
{
	var uVar0[14];
	int iVar15;
	
	if (Function_276())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Ride To Bonnie";
		uVar0[4] = "Stage 03 - Out of the pen";
		uVar0[5] = "Stage 04 - Herd to the river";
		uVar0[6] = "Stage 05 - Cross the river";
		uVar0[7] = "Stage 06 - Herd to Beecher's";
		uVar0[8] = "Stage 07 - Defend the herd";
		uVar0[9] = "Stage 08 - Round 'em up";
		uVar0[10] = "Stage 09 - Herd to Beecher's";
		uVar0[11] = "Stage 10 - Herd inside pen";
		uVar0[12] = "Stage 11 - Speak to Jack";
		uVar0[13] = "Last Stage";
		iVar15 = Function_262(&uLocal_906, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_261(&iVar15, &bLocal_926, &iLocal_927, &iLocal_914))
		{
			Function_254();
			Function_253();
		}
		if (iVar15 == 0)
		{
			Function_254();
			Function_253();
			Function_252(&bLocal_973, 8);
		}
		else if (iVar15 == 1)
		{
			Function_254();
			Function_253();
			Function_247(bLocal_926);
			Function_243(StackVal, 5, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
		}
		else if (iVar15 == 2)
		{
			Function_254();
			Function_253();
			Function_238(&bLocal_975, 4);
		}
		else if (iVar15 == 3)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = true;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 4)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 2;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 5)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 3;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 6)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 4;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 7)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 5;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 8)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 6;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 9)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 7;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 10)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 8;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 11)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 9;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 12)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 10;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
		else if (iVar15 == 13)
		{
			Function_231();
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&iLocal_935);
			bLocal_926 = 101;
			iLocal_927 = 0;
			iLocal_914 = 1000;
		}
	}
	return;
}

void Function_229(int iParam0) //Position: 0xB4C7 / 46279
{
	Function_230(&iParam0, 0.0f);
	return;
}

void Function_230(vector3 vParam0) //Position: 0xB4D4 / 46292
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_231() //Position: 0xB4F9 / 46329
{
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	Function_195();
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	if (iLocal_1615)
	{
		iLocal_1615 = 0;
		STREAMING_UNLOAD_BOUNDS();
	}
	if (IS_ACTOR_VALID(&bLocal_933))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_933)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_933));
		}
	}
	Function_236(12, 0, 1);
	Function_225(3, 1, 0, 1, 1);
	Function_225(13, 1, 0, 1, 1);
	Function_225(11, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(&(uLocal_1390[0])))
	{
		DESTROY_ACTOR(&(uLocal_1390[0]));
	}
	if (IS_ACTOR_VALID(&(uLocal_1394[0])))
	{
		DESTROY_ACTOR(&(uLocal_1394[0]));
	}
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_931, 0);
	}
	if (IS_BLIP_VALID(&uLocal_1486))
	{
		REMOVE_BLIP(&uLocal_1486);
	}
	if (IS_BLIP_VALID(&uLocal_1488))
	{
		REMOVE_BLIP(&uLocal_1488);
	}
	if (IS_BLIP_VALID(&uLocal_1490))
	{
		REMOVE_BLIP(&uLocal_1490);
	}
	if (IS_BLIP_VALID(&iLocal_1492))
	{
		REMOVE_BLIP(&iLocal_1492);
	}
	if (IS_OBJECT_VALID(&uLocal_1702))
	{
		DESTROY_OBJECT(&uLocal_1702);
	}
	if (IS_OBJECT_VALID(&Local_1734 + 8))
	{
		DESTROY_OBJECT(&Local_1734 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1734))
	{
		DESTROY_OBJECT(&Local_1734);
	}
	if (IS_OBJECT_VALID(&iLocal_1494))
	{
		Function_192();
		Function_235(&iLocal_1494);
	}
	if (IS_ACTOR_VALID(&fLocal_1420))
	{
		DESTROY_ACTOR(&fLocal_1420);
	}
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		DESTROY_ACTOR(&bLocal_1386);
	}
	if (IS_ACTOR_VALID(&iLocal_1422))
	{
		DESTROY_ACTOR(&iLocal_1422);
	}
	if (IS_ACTOR_VALID(&bLocal_1424))
	{
		DESTROY_ACTOR(&bLocal_1424);
	}
	if (IS_ACTOR_VALID(&bLocal_1426))
	{
		DESTROY_ACTOR(&bLocal_1426);
	}
	if (SQUAD_IS_VALID(&uLocal_1688))
	{
		Function_234(&uLocal_1688);
		DESTROY_OBJECT(&uLocal_1688);
	}
	if (SQUAD_IS_VALID(&iLocal_1690))
	{
		Function_234(&iLocal_1690);
		DESTROY_OBJECT(&iLocal_1690);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 64))
	{
		Function_234(&Local_1734 + 64);
		DESTROY_OBJECT(&Local_1734 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 72))
	{
		Function_234(&Local_1734 + 72);
		DESTROY_OBJECT(&Local_1734 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 80))
	{
		Function_234(&Local_1734 + 80);
		DESTROY_OBJECT(&Local_1734 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1734 + 88))
	{
		Function_234(&Local_1734 + 88);
		DESTROY_OBJECT(&Local_1734 + 88);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 168))
	{
		Function_232(&Global_11544, &Global_13580, &iLocal_4 + 168, 0);
		DESTROY_OBJECT(&iLocal_4 + 168);
	}
	if (SQUAD_IS_VALID(&bLocal_1692))
	{
		Function_234(&bLocal_1692);
		DESTROY_OBJECT(&bLocal_1692);
	}
	if (SQUAD_IS_VALID(&bLocal_1694))
	{
		Function_234(&bLocal_1694);
		DESTROY_OBJECT(&bLocal_1694);
	}
	if (SQUAD_IS_VALID(&bLocal_1696))
	{
		Function_234(&bLocal_1696);
		DESTROY_OBJECT(&bLocal_1696);
	}
	if (SQUAD_IS_VALID(&bLocal_1698))
	{
		Function_234(&bLocal_1698);
		DESTROY_OBJECT(&bLocal_1698);
	}
	if (SQUAD_IS_VALID(&bLocal_1700))
	{
		Function_234(&bLocal_1700);
		DESTROY_OBJECT(&bLocal_1700);
	}
	return;
}

void Function_232(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xB7E6 / 47078
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
				Function_233(&uParam0, &uParam1, &uVar1, &iParam3);
			}
		}
		bVar0++;
	}
}

void Function_233(var uParam0, vector3[] vParam1, int iParam2, var uParam3) //Position: 0xB841 / 47169
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

void Function_234(bool bParam0) //Position: 0xB892 / 47250
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

void Function_235(int iParam0) //Position: 0xB8E0 / 47328
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
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
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_236(int iParam0, bool bParam1, bool bParam2) //Position: 0xB976 / 47478
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
						Function_226(&uVar1);
					}
				}
				Function_237(&uVar0);
			}
		}
	}
	return;
}

void Function_237(bool bParam0) //Position: 0xBA85 / 47749
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

void Function_238(bool bParam0, int iParam1) //Position: 0xBAB8 / 47800
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239(&iParam1);
	bParam0 = 1;
	return;
}

void Function_239(int iParam0) //Position: 0xBADD / 47837
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

void Function_240() //Position: 0xBBD4 / 48084
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_241(int iParam0) //Position: 0xBBE0 / 48096
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

void Function_242(char* cParam0) //Position: 0xBC16 / 48150
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_243(int iParam0, int iParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBC82 / 48258
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_244(StackVal, Param4, uParam3, &iParam6);
		Function_239(iParam0);
		iParam1 = 1;
		bParam2 = 100;
	}
}

void Function_244(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBCC3 / 48323
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

var Function_245(int iParam0) //Position: 0xBD45 / 48453
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

var Function_246(struct<2> Param0, bool bParam2) //Position: 0xC1F8 / 49656
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

struct<8> Function_247(bool bParam0) //Position: 0xC264 / 49764
{
	Function_248(bParam0 + 1);
	return StackVal, Function_248(bParam0 + 1);
}

struct<8> Function_248(bool bParam0) //Position: 0xC271 / 49777
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_249(&iLocal_4 + 1464[0]);
			return StackVal, Function_249(&iLocal_4 + 1464[0]);
			break;
		
		case 0x00000001:
			Function_249(&iLocal_4 + 1528[0]);
			return StackVal, Function_249(&iLocal_4 + 1528[0]);
			break;
		
		case 0x00000002:
			Function_249(&iLocal_4 + 1608[0]);
			return StackVal, Function_249(&iLocal_4 + 1608[0]);
			break;
		
		case 0x00000003:
			Function_249(&iLocal_4 + 1720[0]);
			return StackVal, Function_249(&iLocal_4 + 1720[0]);
			break;
		
		case 0x00000004:
			Function_249(&iLocal_4 + 1792[0]);
			return StackVal, Function_249(&iLocal_4 + 1792[0]);
			break;
		
		case 0x00000005:
			Function_249(&iLocal_4 + 1864[0]);
			return StackVal, Function_249(&iLocal_4 + 1864[0]);
			break;
		
		case 0x00000006:
			Function_249(&iLocal_4 + 1912[0]);
			return StackVal, Function_249(&iLocal_4 + 1912[0]);
			break;
		
		case 0x00000007:
			Function_249(&iLocal_4 + 1960[0]);
			return StackVal, Function_249(&iLocal_4 + 1960[0]);
			break;
		
		case 0x00000008:
			Function_249(&iLocal_4 + 2008[0]);
			return StackVal, Function_249(&iLocal_4 + 2008[0]);
			break;
		
		case 0x00000009:
			Function_249(&iLocal_4 + 2056[0]);
			return StackVal, Function_249(&iLocal_4 + 2056[0]);
			break;
		
		case 0x0000000A:
			Function_249(&iLocal_4 + 2104[0]);
			return StackVal, Function_249(&iLocal_4 + 2104[0]);
			break;
		
		default:
			Function_249(&iLocal_4 + 2160[0]);
			return StackVal, Function_249(&iLocal_4 + 2160[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_249(&iLocal_4 + 1464[0]);
	return StackVal, Function_249(&iLocal_4 + 1464[0]);
}

struct<8> Function_249(bool bParam0) //Position: 0xC3F0 / 50160
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

int Function_250(bool bParam0) //Position: 0xC419 / 50201
{
	return Function_251(bParam0 + 1);
}

int Function_251(bool bParam0) //Position: 0xC426 / 50214
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1464[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1528[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1608[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 1720[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 1792[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&iLocal_4 + 1864[0]);
			break;
		
		case 0x00000006:
			return GET_OBJECT_HEADING(&iLocal_4 + 1912[0]);
			break;
		
		case 0x00000007:
			return GET_OBJECT_HEADING(&iLocal_4 + 1960[0]);
			break;
		
		case 0x00000008:
			return GET_OBJECT_HEADING(&iLocal_4 + 2008[0]);
			break;
		
		case 0x00000009:
			return GET_OBJECT_HEADING(&iLocal_4 + 2056[0]);
			break;
		
		case 0x0000000A:
			return GET_OBJECT_HEADING(&iLocal_4 + 2104[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 2160[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 1464[0]);
}

void Function_252(bool bParam0, int iParam1) //Position: 0xC5A5 / 50597
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239(&iParam1);
	bParam0 = 1;
	return;
}

void Function_253() //Position: 0xC5CA / 50634
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_254() //Position: 0xC5DF / 50655
{
	Function_256();
	Function_255(10, 3);
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0xC5EE / 50670
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

void Function_256() //Position: 0xC73B / 51003
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_260())
	{
		Function_259(10, 3);
	}
	else
	{
		Function_257();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_257() //Position: 0xC786 / 51078
{
	Function_258(25, 2);
	return;
}

void Function_258(int iParam0, int iParam1) //Position: 0xC792 / 51090
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

void Function_259(int iParam0, int iParam1) //Position: 0xC9BE / 51646
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

bool Function_260() //Position: 0xCB0B / 51979
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

bool Function_261(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCB73 / 52083
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_254();
			Function_253();
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

var Function_262(struct<17> Param0) //Position: 0xCC22 / 52258
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_275(&Var12, &Var0);
	uVar15 = Function_274(uParam1, &Var12);
	Function_273(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_272(&Param0, uVar15);
	Function_270(StackVal, &Param0, Var12.f_12);
	Function_268(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_267(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_264(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_263(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_263(int iParam0, int iParam1, int iParam2) //Position: 0xCD16 / 52502
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

bool Function_264(struct<17> Param0) //Position: 0xCD76 / 52598
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
				Function_266(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_266(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_263(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_265(Param1.f_64);
	}
	else
	{
		Function_265(Param1.f_64);
	}
	return 0;
}

void Function_265(bool bParam0) //Position: 0xCF09 / 53001
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

void Function_266(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCF47 / 53063
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

var Function_267(int iParam0, struct<21> Param1) //Position: 0xCFFD / 53245
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_268(vector3 vParam0) //Position: 0xD024 / 53284
{
	switch (Function_269())
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

int Function_269() //Position: 0xD0D0 / 53456
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

void Function_270(vector3 vParam0) //Position: 0xD10C / 53516
{
	switch (Function_271(&vParam0))
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

int Function_271(bool bParam0) //Position: 0xD1B5 / 53685
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

var Function_272(struct<21> Param0) //Position: 0xD2D5 / 53973
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

void Function_273(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD48F / 54415
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

var Function_274(int iParam0, struct<13> Param1) //Position: 0xD52B / 54571
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_275(struct<17> Param0) //Position: 0xD547 / 54599
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

bool Function_276() //Position: 0xD5A1 / 54689
{
	return Global_47307;
}

bool Function_277() //Position: 0xD5AA / 54698
{
	if (IS_EXITFLAG_SET())
	{
		Function_247(bLocal_926);
		Function_243(StackVal, 4, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
		return 0;
	}
	Function_715(StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, bLocal_926, iLocal_927, &bLocal_975, &bLocal_973, &bLocal_974);
	if (bLocal_926 == 99 && bLocal_926 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_247(bLocal_926);
			Function_243(StackVal, 1, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
			return 1;
		}
		if (!bLocal_926 != 6)
		{
			if (Function_713(&Global_54076, 0))
			{
				Function_247(bLocal_926);
				Function_243(StackVal, 2, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
				return 1;
			}
			if (Global_6646 || Global_6647)
			{
				Function_247(bLocal_926);
				Function_243(StackVal, 2, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
				return 1;
			}
			if (Function_712(2048))
			{
				Function_247(bLocal_926);
				Function_243(StackVal, 3, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
				return 1;
			}
		}
		if (Function_692(&Local_1031, &uLocal_977, &uLocal_1303, &uLocal_929, iLocal_976))
		{
			if (Function_690(&uLocal_1303))
			{
				Function_247(bLocal_926);
				Function_243(StackVal, 5, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
				return 1;
			}
		}
		if (bLocal_926 == 0)
		{
			iLocal_1450 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
			if (IS_ACTOR_VALID(&iLocal_1450))
			{
				if ((((!IS_ACTOR_ANIMAL(&iLocal_1450) && !AI_IS_HOSTILE_OR_ENEMY(&iLocal_1450, &Global_54076)) && !&iLocal_1450 != &bLocal_931) && !&iLocal_1450 != &bLocal_1384) && !&iLocal_1450 != &bLocal_1382)
				{
					if (IS_ACTOR_SHOOTING(&Global_54076))
					{
						if (IS_WEAPON_DRAWN(&Global_54076))
						{
							if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
							{
								Function_247(bLocal_926);
								Function_243(StackVal, 2, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
								return 1;
							}
						}
					}
				}
			}
		}
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			if (iLocal_927 > 8)
			{
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					if (SQUAD_IS_VALID(&Local_1734 + 72))
					{
						if (SQUAD_IS_VALID(&Local_1734 + 80))
						{
							if (!iLocal_927 != 106)
							{
								if (!bLocal_926 != 9)
								{
									bLocal_1330 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80));
								}
								else
								{
									bLocal_1330 = ((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1700));
								}
								bLocal_1331 = (15 - bLocal_1330);
								bLocal_1332 = ROUND((0,6f * IntToFloat(bLocal_1330)));
								if (bLocal_1331 > bLocal_1332)
								{
									PRINTINT(bLocal_1330);
									PRINTNL();
									PRINTINT(bLocal_1331);
									PRINTNL();
									PRINTINT(bLocal_1332);
									PRINTNL();
									Function_242("nHerd_lost");
									Function_247(bLocal_926);
									Function_243(StackVal, 5, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
									return 1;
								}
							}
						}
					}
				}
			}
		}
		Function_688(&bLocal_933, &bLocal_931);
		Function_687();
	}
	switch (bLocal_926)
	{
		case 0x00000063:
			Function_665();
			break;
		
		case 0x00000000:
			Function_637();
			break;
		
		case 0x00000001:
			Function_621();
			break;
		
		case 0x00000002:
			Function_606();
			break;
		
		case 0x00000003:
			Function_577();
			break;
		
		case 0x00000004:
			Function_564();
			break;
		
		case 0x00000005:
			Function_555();
			break;
		
		case 0x00000006:
			Function_520();
			break;
		
		case 0x00000007:
			Function_509();
			break;
		
		case 0x00000008:
			Function_496();
			break;
		
		case 0x00000009:
			Function_449();
			break;
		
		case 0x0000000A:
			Function_386();
			break;
		
		case 0x00000065:
			Function_280();
			break;
		
		case 0x00000064:
			if (Function_279(&bLocal_974))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_278(&bLocal_926, &iLocal_927, &iLocal_914))
			{
				return 0;
			}
			break;
	}
	if (bLocal_973)
	{
		Function_252(&bLocal_973, 8);
		return 0;
	}
	if (bLocal_974 && bLocal_926 == 100)
	{
		Function_247(bLocal_926);
		Function_243(StackVal, 5, &bLocal_974, &bLocal_926, Function_250(bLocal_926), Function_247(bLocal_926), 0);
	}
	if (bLocal_975)
	{
		Function_238(&bLocal_975, 4);
		return 0;
	}
	return 1;
}

bool Function_278(var uParam0, var uParam1, int iParam2) //Position: 0xD981 / 55681
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

bool Function_279(int iParam0) //Position: 0xD9CA / 55754
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_280() //Position: 0xD9DE / 55774
{
	if (!iLocal_1622)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_382(&iLocal_1356);
			}
			else
			{
				iLocal_1316 = 0;
				iLocal_1622 = 0;
			}
		}
	}
	if (!iLocal_1617)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_381();
			}
			else
			{
				iLocal_1335 = 0;
				iLocal_1617 = 0;
			}
		}
	}
	if (!iLocal_1620)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_376();
			}
			else
			{
				iLocal_1337 = 0;
				iLocal_1620 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_933, true);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_931, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1384))
			{
				TASK_STAND_STILL(&bLocal_1384, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1384, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1382))
			{
				TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1382, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46914[1];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				if (Function_359(&Local_750))
				{
					Function_358(&Global_54076, &iLocal_4 + 2160[0], 1, 1, 1);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				Function_338();
				if (IS_ACTOR_VALID(&bLocal_1382))
				{
					TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_1382, true);
				}
				if (iLocal_947[10] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						Function_358(&Global_54076, &iLocal_4 + 2160[0], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_933))
					{
						Function_358(&bLocal_933, &iLocal_4 + 2160[3], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						MEMORY_PREFER_RIDING(&bLocal_931, false);
						GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uLocal_1706[3])), &Local_1562);
						GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_GRINGO(&(uLocal_1706[3])), &Local_1565);
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_931, Local_1562, 1, 1, 1);
						TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
					if (IS_ACTOR_VALID(&bLocal_1384))
					{
						Function_358(&bLocal_1384, &iLocal_4 + 2160[6], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_1382))
					{
						Function_358(&bLocal_1382, &iLocal_4 + 2160[5], 1, 1, 1);
					}
				}
				Function_229(&iLocal_935);
				iLocal_927 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_284("$/cutscene/HOME01_CS03/HOME01_CS03", &iLocal_914, &Local_750, &bLocal_926, 95588, 95323, 94370, 93596, 93255, 60209, 1, 2, 2, 1, 2, 0, 1))
			{
				DECOR_SET_BOOL(&Global_54076, "Stand", 1);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2816)))
					{
						GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 2816, &Global_10994);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_4 + 2816, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2816), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
				}
				Function_229(&iLocal_935);
				iLocal_927 = 4;
			}
			break;
		
		case 0x00000004:
			if (((Function_281(&iLocal_935) <= 0,5f && !HUD_IS_FADING()) && STREAMING_IS_WORLD_LOADED()) && GET_CURRENT_GRINGO(&Global_54076) != GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2816))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "marston_smoke/04/exit");
				}
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				PRINTINT(Local_1734.f_120);
				PRINTNL();
				PRINTINT(Local_1734.f_124);
				PRINTNL();
				bLocal_1319 = Local_1734.f_120;
				Global_53524.f_176 = bLocal_1319;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1320 = Local_1734.f_124;
				Global_53524.f_180 = bLocal_1320;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				PRINTINT(bLocal_1330);
				PRINTNL();
				Function_89(355, bLocal_1330, 1, 0);
				if (bLocal_1330 == 15)
				{
					Function_116(200, 1, 0);
				}
				bLocal_973 = true;
			}
			break;
	}
	return;
}

float Function_281(vector3 vParam0) //Position: 0xDF2E / 57134
{
	if (Function_283(&vParam0))
	{
		if (Function_282(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_282(int iParam0) //Position: 0xDFFB / 57339
{
	return Function_14(iParam0, 2);
}

bool Function_283(float fParam0) //Position: 0xE009 / 57353
{
	return Function_14(fParam0, 1);
}

bool Function_284(var uParam0, int iParam1, struct<41> Param2) //Position: 0xE017 / 57367
{
	if (!&bParam15)
	{
		Function_293(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (bParam3 != 99 && (Function_359(&Param2) || Param2.f_40 < 1))
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
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_229(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_292())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_291(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_229(&iParam1 + 4);
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
					Function_291(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_281(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_281(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_289(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_291(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_229(&iParam1 + 4);
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
						Function_288(1.0f);
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
						Function_286();
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
					Function_285(1, 1);
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
			if ((HUD_IS_FADED() && bParam3 == 99) && !Function_359(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_285(int iParam0, bool bParam1) //Position: 0xE679 / 59001
{
	iParam0 = &iParam0;
	HUD_ENABLE(&iParam0);
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
		Function_210();
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

void Function_286() //Position: 0xE748 / 59208
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_287();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_287() //Position: 0xE78D / 59277
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_288(bool bParam0) //Position: 0xE79F / 59295
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

void Function_289(var uParam0, int iParam1) //Position: 0xE7BC / 59324
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
			if ((&iVar3 == &Global_54076 && !Function_290(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_290(int iParam0) //Position: 0xE84E / 59470
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

int Function_291(bool bParam0) //Position: 0xE87F / 59519
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
		bVar0++;
	}
	return 1;
}

bool Function_292() //Position: 0xE942 / 59714
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

void Function_293(var uParam0, int iParam1) //Position: 0xE97F / 59775
{
	Function_294(&uParam0, &iParam1, 0);
	return;
}

void Function_294(var uParam0, bool bParam1, bool bParam2) //Position: 0xE98F / 59791
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
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_295(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xEB07 / 60167
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

int Function_296() //Position: 0xEB31 / 60209
{
	switch (bLocal_926)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				Unknown_Function();
				if (StackVal)
				{
					Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
					Function_358(&bLocal_931, &iLocal_4 + 1464[2], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
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
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
					{
						Function_358(&bLocal_933, &iLocal_4 + 1528[5], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
					}
					else
					{
						Function_304(&Global_54076, &iLocal_4 + 1528[5], 1, 1, 1);
					}
				}
				else
				{
					bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
					{
						Function_358(&(uLocal_1390[0]), &iLocal_4 + 1528[6], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
					}
					else
					{
						Function_304(&bLocal_931, &iLocal_4 + 1528[6], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1386))
			{
				Function_358(&bLocal_1386, &iLocal_4 + 1528[4], 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
					{
						Function_358(&bLocal_933, &iLocal_4 + 1608[6], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
					}
					else
					{
						Function_304(&Global_54076, &iLocal_4 + 1608[6], 1, 1, 1);
					}
				}
				else
				{
					bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
					{
						Function_358(&(uLocal_1390[0]), &iLocal_4 + 1608[8], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
					}
					else
					{
						Function_304(&bLocal_931, &iLocal_4 + 1608[8], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1388))
			{
				if (IS_ACTOR_VALID(&(uLocal_1394[0])))
				{
					Function_358(&(uLocal_1394[0]), &iLocal_4 + 1608[10], 1, 1, 1);
					if (!IS_ACTOR_RIDING(&bLocal_1388) && !IS_ACTOR_MOUNTED(&(uLocal_1394[0])))
					{
						ACTOR_MOUNT_ACTOR(&bLocal_1388, &(uLocal_1394[0]));
					}
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_358(&Global_54076, &iLocal_4 + 2160[0], 1, 1, 1);
			Function_358(&bLocal_931, &iLocal_4 + 2160[1], 1, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_297(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xEE1B / 60955
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
		Function_303(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_302())
		{
			return "";
		}
	}
	if (!Function_300())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_210();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_249(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_249(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_249(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_249(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_299(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_299(StackVal, Var4, 0, 1, 1);
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
		Function_298(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_298(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF178 / 61816
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

var Function_299(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF1C2 / 61890
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

bool Function_300() //Position: 0xF262 / 62050
{
	if (Function_301() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_301() //Position: 0xF278 / 62072
{
	return Global_21369.f_244;
}

bool Function_302() //Position: 0xF283 / 62083
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_303(var uParam0, bool bParam1, bool bParam2) //Position: 0xF2A3 / 62115
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

void Function_304(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xF2D2 / 62162
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
				Function_305(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_305(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xF3F2 / 62450
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

struct<264> Function_306() //Position: 0xF4C1 / 62657
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
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Home01_layout");
	*(&iLocal_4 + 232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, "Cutscene00Vol", 2,802597E-45f, Vector(-124,3339f, 118,8691f, 1375,333f), Vector(0.0f, 48,76437f, 0.0f), Vector(40.0f, 30.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 232, &iLocal_4 + 176[0]);
	*(&iLocal_4 + 176[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-98,87872f, 119,489f, 1355,462f), Vector(0.0f, 42,05315f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 232, &iLocal_4 + 176[1]);
	*(&iLocal_4 + 176[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-791,4802f, 92,23145f, 2418,612f), Vector(0.0f, -37,64854f, 0.0f), Vector(15.0f, 15.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 232, &iLocal_4 + 176[2]);
	*(&iLocal_4 + 176[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-893,9522f, 90,35291f, 2447,433f), Vector(0.0f, 8,729557f, 0.0f), Vector(20.0f, 15.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 232, &iLocal_4 + 176[3]);
	*(&iLocal_4 + 176[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene04Vol", 2,802597E-45f, Vector(-904,0001f, 90,35291f, 2472.0f), Vector(0.0f, 33,64058f, 0.0f), Vector(30.0f, 15.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 232, &iLocal_4 + 176[4]);
	*(&iLocal_4 + 176[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-74,91998f, 116,8612f, 1406,661f), Vector(0.0f, 152,7269f, 0.0f), Vector(15.0f, 4,107396f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 232, &iLocal_4 + 176[5]);
	*(&iLocal_4 + 296) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary01_set");
	*(&iLocal_4 + 240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_01", 2,802597E-45f, Vector(-1022,593f, 94,9704f, 2497,873f), Vector(0.0f, 289,6036f, 0.0f), Vector(300.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 296, &iLocal_4 + 240[0]);
	*(&iLocal_4 + 240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_02", 2,802597E-45f, Vector(-935,1868f, 94,9704f, 2353,92f), Vector(0.0f, 208,5734f, 0.0f), Vector(150.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 296, &iLocal_4 + 240[1]);
	*(&iLocal_4 + 240[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_03", 2,802597E-45f, Vector(-812,9863f, 94,9704f, 2362,142f), Vector(0.0f, 195,3408f, 0.0f), Vector(190.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 296, &iLocal_4 + 240[2]);
	*(&iLocal_4 + 240[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_04", 2,802597E-45f, Vector(-782,5818f, 74,49309f, 2637,891f), Vector(0.0f, 180,1165f, 0.0f), Vector(500.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 296, &iLocal_4 + 240[3]);
	*(&iLocal_4 + 240[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_05", 2,802597E-45f, Vector(-733,2943f, 74,78233f, 2529,036f), Vector(0.0f, 271,7998f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 296, &iLocal_4 + 240[4]);
	*(&iLocal_4 + 240[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_06", 2,802597E-45f, Vector(-883,3024f, 90,35291f, 2473,755f), Vector(0.0f, 264,1213f, 0.0f), Vector(16.0f, 30.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 296, &iLocal_4 + 240[5]);
	*(&iLocal_4 + 368) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary02_set");
	*(&iLocal_4 + 304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_01", 2,802597E-45f, Vector(-990,9425f, 94,9704f, 2512,198f), Vector(0.0f, 278,7632f, 0.0f), Vector(300.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[0]);
	*(&iLocal_4 + 304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_02", 2,802597E-45f, Vector(-831,4644f, 94,9704f, 2380,188f), Vector(0.0f, 187,227f, 0.0f), Vector(190.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[1]);
	*(&iLocal_4 + 304[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_03", 2,802597E-45f, Vector(-699,1049f, 94,9704f, 2343,03f), Vector(0.0f, 210,3203f, 0.0f), Vector(170.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[2]);
	*(&iLocal_4 + 304[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_04", 2,802597E-45f, Vector(-642,201f, 94,9704f, 2270,376f), Vector(0.0f, 247,8464f, 0.0f), Vector(200.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[3]);
	*(&iLocal_4 + 304[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_05", 2,802597E-45f, Vector(-518,7245f, 94,9704f, 2277,966f), Vector(0.0f, 155,0313f, 0.0f), Vector(400.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[4]);
	*(&iLocal_4 + 304[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_06", 2,802597E-45f, Vector(-782,5818f, 74,49309f, 2652,558f), Vector(0.0f, 180,1165f, 0.0f), Vector(500.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[5]);
	*(&iLocal_4 + 304[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_07", 2,802597E-45f, Vector(-466,7069f, 74,78233f, 2512,36f), Vector(0.0f, 218,9868f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 368, &iLocal_4 + 304[6]);
	*(&iLocal_4 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary03_set");
	*(&iLocal_4 + 376[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_01", 2,802597E-45f, Vector(-569,4614f, 94,9704f, 2462,968f), Vector(0.0f, 155,0313f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[0]);
	*(&iLocal_4 + 376[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_02", 2,802597E-45f, Vector(-594,377f, 94,9704f, 2182,148f), Vector(0.0f, 243,8875f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[1]);
	*(&iLocal_4 + 376[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_04", 2,802597E-45f, Vector(-350,7538f, 74,78233f, 2298,188f), Vector(0.0f, 241,6433f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[2]);
	*(&iLocal_4 + 376[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_06", 2,802597E-45f, Vector(-385,2289f, 94,9704f, 2069,416f), Vector(0.0f, 150,036f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[3]);
	*(&iLocal_4 + 376[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_07", 2,802597E-45f, Vector(-561,71f, 94,9704f, 2278,34f), Vector(0.0f, 26,13515f, 0.0f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[4]);
	*(&iLocal_4 + 376[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_08", 2,802597E-45f, Vector(-419,5562f, 94,9704f, 2262,781f), Vector(0.0f, 17,88854f, 0.0f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[5]);
	*(&iLocal_4 + 376[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_09", 2,802597E-45f, Vector(-412,6859f, 94,9704f, 2220,17f), Vector(0.0f, 53,47281f, 0.0f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[6]);
	*(&iLocal_4 + 376[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_010", 2,802597E-45f, Vector(-563,1239f, 94,9704f, 2295,261f), Vector(0.0f, 38,55524f, 0.0f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[7]);
	*(&iLocal_4 + 376[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_011", 2,802597E-45f, Vector(-493,0547f, 94,9704f, 2125,248f), Vector(0.0f, 47,26882f, 0.0f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 456, &iLocal_4 + 376[8]);
	*(&iLocal_4 + 552) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary04_set");
	*(&iLocal_4 + 464[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_01", 2,802597E-45f, Vector(-553,3052f, 95,15447f, 2221,516f), Vector(-2,012017f, 135,6603f, -2,084123f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[0]);
	*(&iLocal_4 + 464[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_02", 2,802597E-45f, Vector(-477,5695f, 102,9895f, 2015,308f), Vector(-1,449053f, 219,2438f, 0,08737534f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[1]);
	*(&iLocal_4 + 464[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_08", 2,802597E-45f, Vector(-329,8535f, 102,6866f, 1921,605f), Vector(-1,222806f, 203,4042f, -0,3436648f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[2]);
	*(&iLocal_4 + 464[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_03", 2,802597E-45f, Vector(-394,6131f, 74,61404f, 2288,006f), Vector(0,4780442f, 222,441f, -0,02244f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[3]);
	*(&iLocal_4 + 464[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_04", 2,802597E-45f, Vector(-195,7706f, 74,78233f, 2153,151f), Vector(0.0f, 283,5011f, 0.0f), Vector(200.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[4]);
	*(&iLocal_4 + 464[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_05", 2,802597E-45f, Vector(95,13686f, 73,7887f, 1957,484f), Vector(0,2269392f, 254,2982f, -0,4592334f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[5]);
	*(&iLocal_4 + 464[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_09", 2,802597E-45f, Vector(-83,72751f, 74,72866f, 2133,192f), Vector(0,07711391f, 217,2085f, -0,2873949f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[6]);
	*(&iLocal_4 + 464[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_06", 2,802597E-45f, Vector(133,3314f, 101,5336f, 1860,83f), Vector(0,7859433f, 283,174f, -3,514714f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[7]);
	*(&iLocal_4 + 464[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_07", 2,802597E-45f, Vector(-42,44237f, 110,4033f, 1644,058f), Vector(-1,761828f, 193,3601f, 1,43246f), Vector(600.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[8]);
	*(&iLocal_4 + 464[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_08", 2,802597E-45f, Vector(-257,6203f, 103,108f, 1881,588f), Vector(-1,199938f, 200,7375f, -0,404507f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 464[9]);
	*(&iLocal_4 + 640) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary04a_set");
	*(&iLocal_4 + 560[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_01", 2,802597E-45f, Vector(-160,9765f, 105,9078f, 1732,607f), Vector(-5,828618f, 252,8693f, 6,59693f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[0]);
	*(&iLocal_4 + 560[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_02", 2,802597E-45f, Vector(-31,6465f, 74,79186f, 2065,564f), Vector(0,07076702f, -31,15744f, -0,2737466f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[1]);
	*(&iLocal_4 + 560[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_03", 2,802597E-45f, Vector(167,7268f, 111,198f, 1943,735f), Vector(-0,3082833f, 234,4778f, -2,498543f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[2]);
	*(&iLocal_4 + 560[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_04", 2,802597E-45f, Vector(109,3189f, 116,4548f, 1657,569f), Vector(0.0f, 185,1981f, 0.0f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[3]);
	*(&iLocal_4 + 560[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_05", 2,802597E-45f, Vector(122,9762f, 105,1003f, 1772,206f), Vector(1,983334f, 329,8043f, 0,02740668f), Vector(400.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[4]);
	*(&iLocal_4 + 560[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_06", 2,802597E-45f, Vector(-108,6006f, 97,61108f, 1883,963f), Vector(-2,037441f, 212,7151f, 2,12672f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[5]);
	*(&iLocal_4 + 560[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_07", 2,802597E-45f, Vector(98,55073f, 100,4269f, 1913,74f), Vector(2,151692f, 397,1827f, 2,326014f), Vector(400.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[6]);
	*(&iLocal_4 + 560[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_08", 2,802597E-45f, Vector(-59,43208f, 100,7226f, 1809,403f), Vector(1,74947f, 371,5336f, 1,375129f), Vector(50.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[7]);
	*(&iLocal_4 + 560[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04a_09", 2,802597E-45f, Vector(-79,40724f, 98,81655f, 1861,142f), Vector(-5,866202f, 252,982f, 6,636247f), Vector(50.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 640, &iLocal_4 + 560[8]);
	*(&iLocal_4 + 752) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary05_set");
	*(&iLocal_4 + 648[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_01", 2,802597E-45f, Vector(-62,88781f, 118,4626f, 2064,58f), Vector(0.0f, 180,8112f, 0.0f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[0]);
	*(&iLocal_4 + 648[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_02", 2,802597E-45f, Vector(-252,1575f, 103,2059f, 1638,684f), Vector(0.0f, 262,2784f, 0.0f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[1]);
	*(&iLocal_4 + 648[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_03", 2,802597E-45f, Vector(108,8226f, 103,2059f, 1684,732f), Vector(0.0f, 298,2881f, 0.0f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[2]);
	*(&iLocal_4 + 648[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_04", 2,802597E-45f, Vector(-109,3295f, 118,4626f, 1393,951f), Vector(-2,391758f, 182,1742f, 0,857417f), Vector(600.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[3]);
	*(&iLocal_4 + 648[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_011", 2,802597E-45f, Vector(-21,43865f, 74,79186f, 2075,898f), Vector(0,07076702f, -31,15744f, -0,2737466f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[4]);
	*(&iLocal_4 + 648[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_012", 2,802597E-45f, Vector(177,9346f, 111,198f, 1954,068f), Vector(179,6917f, -54,47783f, 177,5015f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[5]);
	*(&iLocal_4 + 648[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_014", 2,802597E-45f, Vector(209,1549f, 105,1366f, 1826,748f), Vector(1,983334f, -30,19572f, 0,02740668f), Vector(400.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[6]);
	*(&iLocal_4 + 648[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_015", 2,802597E-45f, Vector(-98,39275f, 97,61108f, 1894,296f), Vector(177,9626f, -32,71506f, -177,8733f), Vector(100.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[7]);
	*(&iLocal_4 + 648[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_016", 2,802597E-45f, Vector(108,7586f, 100,4269f, 1924,074f), Vector(2,151692f, 37,18269f, 2,326014f), Vector(400.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[8]);
	*(&iLocal_4 + 648[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_017", 2,802597E-45f, Vector(-49,22423f, 100,7226f, 1819,737f), Vector(1,74947f, 11,53356f, 1,375129f), Vector(50.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[9]);
	*(&iLocal_4 + 648[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_018", 2,802597E-45f, Vector(-69,19939f, 98,81655f, 1871,476f), Vector(174,1338f, -72,98199f, -173,3638f), Vector(50.0f, 200.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[10]);
	*(&iLocal_4 + 648[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_09", 2,802597E-45f, Vector(-193,6169f, 103,2059f, 1686,743f), Vector(0.0f, 293,0208f, 0.0f), Vector(400.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 752, &iLocal_4 + 648[11]);
	*(&iLocal_4 + 840) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary06_set");
	*(&iLocal_4 + 760[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_01", 2,802597E-45f, Vector(-63,12487f, 118,4626f, 1626,631f), Vector(-2,39008f, 179,6478f, 0,7519265f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[0]);
	*(&iLocal_4 + 760[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_02", 2,802597E-45f, Vector(-289,8705f, 139,1767f, 1465,504f), Vector(0.0f, 219,0557f, 0.0f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[1]);
	*(&iLocal_4 + 760[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_03", 2,802597E-45f, Vector(128,2695f, 120,5131f, 1456,132f), Vector(0.0f, 306,9586f, 0.0f), Vector(800.0f, 200.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[2]);
	*(&iLocal_4 + 760[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_04", 2,802597E-45f, Vector(-64,09254f, 117,3321f, 1421,375f), Vector(-175,0546f, 118,9303f, -174,9026f), Vector(10.0f, 30.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[3]);
	*(&iLocal_4 + 760[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_05", 2,802597E-45f, Vector(44,2148f, 117,0065f, 1497,101f), Vector(-177,0858f, 145,1098f, -177,5655f), Vector(100.0f, 30.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[4]);
	*(&iLocal_4 + 760[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_06", 2,802597E-45f, Vector(-69,08148f, 113,4714f, 1545,472f), Vector(-177,1469f, 213,0908f, -180,792f), Vector(100.0f, 30.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[5]);
	*(&iLocal_4 + 760[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_07", 2,802597E-45f, Vector(-65,15114f, 116,4268f, 1473,414f), Vector(0.0f, 211,7038f, 0.0f), Vector(50.0f, 30.0f, 50.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[6]);
	*(&iLocal_4 + 760[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_08", 2,802597E-45f, Vector(-101,9651f, 116,4268f, 1521,35f), Vector(0.0f, 240,7449f, 0.0f), Vector(100.0f, 30.0f, 50.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[7]);
	*(&iLocal_4 + 760[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary06_09", 2,802597E-45f, Vector(-156,2129f, 116,4268f, 1524,487f), Vector(0.0f, 142,2351f, 0.0f), Vector(100.0f, 30.0f, 50.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 840, &iLocal_4 + 760[8]);
	*(&iLocal_4 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "RestrictionVol_set");
	*(&iLocal_4 + 848[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict_01", 2,802597E-45f, Vector(-66,15173f, 118,2126f, 1625,141f), Vector(0.0f, 0.0f, 0.0f), Vector(500.0f, 500.0f, 500.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 848[0]);
	*(&iLocal_4 + 848[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict_02", 2,802597E-45f, Vector(-51,07054f, 118,2126f, 2059,14f), Vector(0.0f, -13,47598f, 0.0f), Vector(500.0f, 500.0f, 500.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 848[1]);
	*(&iLocal_4 + 848[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict_03", 2,802597E-45f, Vector(-106,6342f, 118,2126f, 2308,732f), Vector(0.0f, -0,4621154f, 0.0f), Vector(500.0f, 500.0f, 500.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 848[2]);
	*(&iLocal_4 + 848[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict_04", 2,802597E-45f, Vector(-614,3375f, 118,2126f, 2332,395f), Vector(0.0f, -0,4621154f, 0.0f), Vector(700.0f, 500.0f, 500.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 848[3]);
	*(&iLocal_4 + 848[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict_05", 2,802597E-45f, Vector(-356,7813f, 118,2126f, 2059,14f), Vector(0.0f, -36,7236f, 0.0f), Vector(500.0f, 500.0f, 1000.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 848[4]);
	*(&iLocal_4 + 920) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "BeechersRestrictVol_set");
	*(&iLocal_4 + 904[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_beechers", 2,802597E-45f, Vector(-109,7946f, 117,8928f, 1378,142f), Vector(0.0f, 0.0f, 0.0f), Vector(310.0f, 100.0f, 330.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 920, &iLocal_4 + 904[0]);
	*(&iLocal_4 + 944) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "UnionPacificRestrictVol_set");
	*(&iLocal_4 + 928[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_union_pacific", 2,802597E-45f, Vector(-275,6776f, 84,35147f, 2108.0f), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 75.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 944, &iLocal_4 + 928[0]);
	*(&iLocal_4 + 1000) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "ThievesRestrictVol_set");
	*(&iLocal_4 + 952[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_thieves01", 2,802597E-45f, Vector(158,2915f, 73,19171f, 2188,796f), Vector(0.0f, 61,4049f, 0.0f), Vector(125.0f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1000, &iLocal_4 + 952[0]);
	*(&iLocal_4 + 952[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_thieves02", 2,802597E-45f, Vector(101,6734f, 73,19171f, 2292,737f), Vector(0.0f, 61,4049f, 0.0f), Vector(125.0f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1000, &iLocal_4 + 952[1]);
	*(&iLocal_4 + 952[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_thieves03", 2,802597E-45f, Vector(139,278f, 73,19171f, 2344,285f), Vector(0.0f, 110,7681f, 0.0f), Vector(125.0f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1000, &iLocal_4 + 952[2]);
	*(&iLocal_4 + 952[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_thieves04", 2,802597E-45f, Vector(62,75194f, 73,19171f, 2136,606f), Vector(0.0f, 61,4049f, 0.0f), Vector(125.0f, 100.0f, 125.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1000, &iLocal_4 + 952[3]);
	*(&iLocal_4 + 952[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_thieves05", 2,802597E-45f, Vector(158,2915f, 73,19171f, 2076,371f), Vector(0.0f, 83,22988f, 0.0f), Vector(125.0f, 100.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1000, &iLocal_4 + 952[4]);
	*(&iLocal_4 + 1024) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "HennigansRestrictVol_set");
	*(&iLocal_4 + 1008[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_hennigans01", 2,802597E-45f, Vector(-853,4244f, 93,37753f, 2414,771f), Vector(0.0f, 0.0f, 0.0f), Vector(325.0f, 100.0f, 250.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1024, &iLocal_4 + 1008[0]);
	*(&iLocal_4 + 1088) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "HennigansCattlePen_set");
	*(&iLocal_4 + 1032[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_cattle_pen01", 2,802597E-45f, Vector(-903,2327f, 90,35291f, 2446,267f), Vector(0.0f, 15,45198f, 0.0f), Vector(30.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1032[0]);
	*(&iLocal_4 + 1032[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_cattle_pen02", 2,802597E-45f, Vector(-902,865f, 90,35291f, 2452,323f), Vector(0.0f, 0,1694365f, 0.0f), Vector(30.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1032[1]);
	*(&iLocal_4 + 1032[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_cattle_pen03", 2,802597E-45f, Vector(-902,8091f, 90,35291f, 2466,624f), Vector(0.0f, -0,1631045f, 0.0f), Vector(30.0f, 10.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1032[2]);
	*(&iLocal_4 + 1032[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_cattle_pen04", 2,802597E-45f, Vector(-886,8328f, 90,35291f, 2456,672f), Vector(0.0f, 0,274152f, 0.0f), Vector(10.0f, 10.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1032[3]);
	*(&iLocal_4 + 1032[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_cattle_pen05", 2,802597E-45f, Vector(-893,9213f, 90,35291f, 2438,616f), Vector(0.0f, 18,52412f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1032[4]);
	*(&iLocal_4 + 1032[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_cattle_pen06", 2,802597E-45f, Vector(-888,3709f, 90,35291f, 2440,577f), Vector(0.0f, 22,22491f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1032[5]);
	*(&iLocal_4 + 1096) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_nostraggler", 2,802597E-45f, Vector(-120,001f, 118,7449f, 1608,103f), Vector(-8,376367f, 94,09187f, -9,062716f), Vector(20.0f, 100.0f, 800.0f));
	*(&iLocal_4 + 1104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01", 2,802597E-45f, Vector(-893,1335f, 90,35634f, 2489,214f), Vector(0.0f, 32,64139f, 0.0f), Vector(100.0f, 10.0f, 6.0f));
	*(&iLocal_4 + 1112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01a", 4,203895E-45f, Vector(-880,0001f, 90,35291f, 2504.0f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective02a", 4,203895E-45f, Vector(-536,0615f, 91,37096f, 2355,924f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective02", 2,802597E-45f, Vector(-536,0615f, 91,37096f, 2342,508f), Vector(0.0f, -22,38161f, 0.0f), Vector(200.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 1136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective03", 2,802597E-45f, Vector(-442,2583f, 74,74915f, 2151,875f), Vector(0.0f, -44,75608f, 0.0f), Vector(200.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 1144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective03a", 4,203895E-45f, Vector(-449,8136f, 74,74915f, 2165,156f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective04", 4,203895E-45f, Vector(-35,97646f, 87,99165f, 1926,149f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective05d", 2,802597E-45f, Vector(-126,3423f, 118,212f, 1531,331f), Vector(0.0f, -91,4295f, 0.0f), Vector(10.0f, 10.0f, 100.0f));
	*(&iLocal_4 + 1168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective05", 2,802597E-45f, Vector(-127,1224f, 118,334f, 1529,05f), Vector(0.0f, 5,52046f, 0.0f), Vector(9,5f, 10.0f, 6.0f));
	*(&iLocal_4 + 1176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective05b", 2,802597E-45f, Vector(-127,1581f, 118,334f, 1531,415f), Vector(0.0f, 5,52046f, 0.0f), Vector(13.0f, 10.0f, 6.0f));
	*(&iLocal_4 + 1184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective05a", 4,203895E-45f, Vector(-130,3956f, 118,2944f, 1502,82f), Vector(1,756704f, 25,37598f, -0,009990674f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective06c", 2,802597E-45f, Vector(-59,10064f, 115,7966f, 1432,411f), Vector(0.0f, -60,84564f, 0.0f), Vector(5,5f, 10.0f, 6.0f));
	*(&iLocal_4 + 1200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective06", 2,802597E-45f, Vector(-60,14133f, 115,7966f, 1432,411f), Vector(0.0f, -44,17629f, 0.0f), Vector(150.0f, 50.0f, 10.0f));
	*(&iLocal_4 + 1208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective06b", 2,802597E-45f, Vector(-60,38709f, 115,7966f, 1432,981f), Vector(0.0f, -60,84564f, 0.0f), Vector(10.0f, 10.0f, 6.0f));
	*(&iLocal_4 + 1216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective06a", 4,203895E-45f, Vector(-42,91998f, 116,8612f, 1421,815f), Vector(0.0f, 14,9721f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander00", 4,203895E-45f, Vector(-906,6736f, 90,35291f, 2469,645f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander01", 4,203895E-45f, Vector(-880,0001f, 90,35291f, 2504.0f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&iLocal_4 + 1240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander02", 4,203895E-45f, Vector(-536,0615f, 91,37096f, 2355,924f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&iLocal_4 + 1248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander03", 4,203895E-45f, Vector(-449,8136f, 74,74915f, 2165,156f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&iLocal_4 + 1256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander04", 4,203895E-45f, Vector(-35,97646f, 87,99165f, 1926,149f), Vector(0.0f, 20.0f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&iLocal_4 + 1264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander04a", 4,203895E-45f, Vector(-8.0f, 99,49412f, 1847,999f), Vector(0.0f, 20.0f, 0.0f), Vector(30.0f, 50.0f, 30.0f));
	*(&iLocal_4 + 1272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander04b", 4,203895E-45f, Vector(9,994247f, 99,99157f, 1850,77f), Vector(0.0f, 20.0f, 0.0f), Vector(30.0f, 50.0f, 30.0f));
	*(&iLocal_4 + 1280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander05", 4,203895E-45f, Vector(-130,3956f, 118,2944f, 1502,82f), Vector(0.0f, 24,82872f, 0.0f), Vector(8.0f, 10.0f, 8.0f));
	*(&iLocal_4 + 1288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander06", 4,203895E-45f, Vector(-42,90256f, 116,8612f, 1421,936f), Vector(0.0f, 14,9721f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_rancher01", 2,802597E-45f, Vector(-900,4708f, 90,35207f, 2471,826f), Vector(0.0f, 49,66534f, 0.0f), Vector(25.0f, 10.0f, 30.0f));
	*(&iLocal_4 + 1304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_rancher02", 2,802597E-45f, Vector(-906,5623f, 90,35207f, 2476,34f), Vector(0.0f, 22,35416f, 0.0f), Vector(25.0f, 10.0f, 30.0f));
	*(&iLocal_4 + 1312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_attack", 2,802597E-45f, Vector(-41,04739f, 88,17254f, 1930,68f), Vector(1,041175f, 55,10641f, 0,1466186f), Vector(20.0f, 100.0f, 400.0f));
	*(&iLocal_4 + 1320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_goodbye", 2,802597E-45f, Vector(-802,3787f, 91,5416f, 2501,857f), Vector(0,6016375f, 8,133046f, -0,622282f), Vector(10.0f, 100.0f, 400.0f));
	*(&iLocal_4 + 1328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_help", 2,802597E-45f, Vector(-724,1101f, 94,60657f, 2504,486f), Vector(0,6016375f, 8,133046f, -0,622282f), Vector(20.0f, 100.0f, 400.0f));
	*(&iLocal_4 + 1336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_stop01", 2,802597E-45f, Vector(-548,0001f, 92,31911f, 2404f), Vector(1,577192f, 67,81086f, 0,7530412f), Vector(10.0f, 100.0f, 150.0f));
	*(&iLocal_4 + 1344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_stop02", 2,802597E-45f, Vector(-485,2912f, 71,06873f, 2200,69f), Vector(1,542182f, 67,27946f, 0,7151593f), Vector(10.0f, 100.0f, 150.0f));
	*(&iLocal_4 + 1352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_stop03", 2,802597E-45f, Vector(-121,6671f, 118,212f, 1549,646f), Vector(175,4226f, 82,51591f, 174,754f), Vector(10.0f, 100.0f, 150.0f));
	*(&iLocal_4 + 1360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_stop04", 2,802597E-45f, Vector(-72.0f, 116,4147f, 1440f), Vector(0,6529115f, 24,1883f, -0,4398686f), Vector(10.0f, 100.0f, 150.0f));
	*(&iLocal_4 + 1368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_destroy_ambient", 2,802597E-45f, Vector(-472,9839f, 71,86533f, 2190,505f), Vector(0.0f, -34,78399f, 0.0f), Vector(50.0f, 100.0f, 50.0f));
	*(&iLocal_4 + 1376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_beechers_exclude", 2,802597E-45f, Vector(-96.0f, 117,2465f, 1407,298f), Vector(0.0f, 0.0f, 0.0f), Vector(80.0f, 100.0f, 50.0f));
	*(&iLocal_4 + 1384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_beechers_leave", 2,802597E-45f, Vector(-108,9761f, 117,2465f, 1379,388f), Vector(0.0f, 0.0f, 0.0f), Vector(350.0f, 100.0f, 400.0f));
	*(&iLocal_4 + 1392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_no_jump", 2,802597E-45f, Vector(-49,5944f, 117,2465f, 1420,406f), Vector(0.0f, 0.0f, 0.0f), Vector(60.0f, 50.0f, 60.0f));
	*(&iLocal_4 + 1400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_stay_inner", 2,802597E-45f, Vector(-268,4783f, 91,04813f, 2097,73f), Vector(0.0f, -38,5455f, 0.0f), Vector(1550.0f, 1000.0f, 1850.0f));
	*(&iLocal_4 + 1408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_stay_outer", 2,802597E-45f, Vector(-268,4783f, 91,04813f, 2097,73f), Vector(0.0f, -38,5455f, 0.0f), Vector(1800.0f, 1000.0f, 2000.0f));
	*(&iLocal_4 + 1416) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_open_gate", 2,802597E-45f, Vector(-894,678f, 90,23862f, 2486,677f), Vector(0.0f, 32,693f, 0.0f), Vector(7.0f, 10.0f, 5.0f));
	*(&iLocal_4 + 1424) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective00", 2,802597E-45f, Vector(-790,5826f, 93,34259f, 2414,096f), Vector(0.0f, -36,4306f, 0.0f), Vector(10.0f, 15.0f, 15.0f));
	*(&iLocal_4 + 1432) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_hitch_exclude", 2,802597E-45f, Vector(-78,34198f, 116,8612f, 1419,057f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1440) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_stop05", 2,802597E-45f, Vector(-80,71184f, 116,4585f, 1446,135f), Vector(180,7285f, 144,8453f, 179,7121f), Vector(10.0f, 100.0f, 150.0f));
	*(&iLocal_4 + 1448) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_peds_exclude", 2,802597E-45f, Vector(19,1206f, 91,98262f, 1856,345f), Vector(0.0f, 0.0f, 0.0f), Vector(300.0f, 200.0f, 300.0f));
	*(&iLocal_4 + 1456) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1464[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-98,86352f, 118,6149f, 1349,365f), Vector(0.0f, 233,0674f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[0], &iLocal_4 + 1456);
	*(&iLocal_4 + 1464[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "UncleStart01", Vector(-60f, 116,4573f, 1392f), Vector(0.0f, 38,98147f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[1], &iLocal_4 + 1456);
	*(&iLocal_4 + 1464[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart01", Vector(-71,77767f, 116,8612f, 1410,798f), Vector(0.0f, 51,69757f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[2], &iLocal_4 + 1456);
	*(&iLocal_4 + 1464[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WifeStart01", Vector(-106,2052f, 119,489f, 1352,372f), Vector(0.0f, 71,80637f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[3], &iLocal_4 + 1456);
	*(&iLocal_4 + 1464[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart01", Vector(-77,19144f, 116,8612f, 1417,584f), Vector(0.0f, 270,5349f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[4], &iLocal_4 + 1456);
	*(&iLocal_4 + 1464[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start01", Vector(-75,06525f, 116,8612f, 1414,859f), Vector(0.0f, 51,75232f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1464[5], &iLocal_4 + 1456);
	*(&iLocal_4 + 1520) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1528[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-795,5158f, 92,24216f, 2422,255f), Vector(0.0f, 20,80401f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[0], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(-788,5834f, 92,29993f, 2422,999f), Vector(0.0f, 57,87616f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[1], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchersDaughterStart02", Vector(-890,082f, 90,35291f, 2446,97f), Vector(0.0f, 160,25f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[2], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RancherStart02", Vector(-789,933f, 93,22781f, 2413,259f), Vector(0.0f, 193,3903f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[3], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RancherEnd02", Vector(-789,933f, 93,22781f, 2413,259f), Vector(0.0f, 320,2328f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[4], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart02", Vector(-793,652f, 92,23145f, 2421,267f), Vector(0.0f, 0,109f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[5], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start02", Vector(-791,89f, 92,23145f, 2421,525f), Vector(0.0f, 17,05911f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[6], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse02Start02", Vector(-890,048f, 90,35291f, 2447,644f), Vector(0.0f, 241,509f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[7], &iLocal_4 + 1520);
	*(&iLocal_4 + 1600) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1608[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-912,0001f, 90,35291f, 2452f), Vector(0.0f, -153,1932f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[0], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(-896,0171f, 90,35291f, 2449,802f), Vector(0.0f, 263,4478f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[1], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RancherStart03", Vector(-812,0329f, 91,37479f, 2467,939f), Vector(0.0f, 147,4771f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[2], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchersDaughterStart03", Vector(-890,082f, 90,35291f, 2446,97f), Vector(0.0f, 160,1197f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[3], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchHand01Start03", Vector(-890,6639f, 90,35207f, 2481,14f), Vector(0.0f, 443,2926f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[4], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchHand02Start03", Vector(-901,6159f, 90,35207f, 2488,269f), Vector(0.0f, 325,5752f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[5], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart03", Vector(-894,656f, 90,35291f, 2442,297f), Vector(0.0f, -163,1442f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[6], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd03", Vector(-916,0001f, 90,35291f, 2456f), Vector(0.0f, -147,174f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[7], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start03", Vector(-893,352f, 90,35291f, 2441,421f), Vector(0.0f, 196,0194f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[8], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01End03", Vector(-897,9518f, 90,35291f, 2484.0f), Vector(0.0f, 213,0538f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[9], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse02Start03", Vector(-890,048f, 90,35291f, 2447,644f), Vector(0.0f, 241,896f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[10], &iLocal_4 + 1600);
	*(&iLocal_4 + 1608[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse02End03", Vector(-896,7905f, 90,35291f, 2481,563f), Vector(0.0f, 573,9075f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1608[11], &iLocal_4 + 1600);
	*(&iLocal_4 + 1712) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1720[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(-892,0001f, 90,35291f, 2500.0f), Vector(0.0f, -88,69018f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[0], &iLocal_4 + 1712);
	*(&iLocal_4 + 1720[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart04", Vector(-843,5179f, 90,77769f, 2511,432f), Vector(0.0f, 263,4478f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[1], &iLocal_4 + 1712);
	*(&iLocal_4 + 1720[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchersDaughterStart04", Vector(-872,0001f, 90,35291f, 2484.0f), Vector(0.0f, -96,2455f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[2], &iLocal_4 + 1712);
	*(&iLocal_4 + 1720[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RancherStart04", Vector(-796,0001f, 91,35687f, 2484.0f), Vector(0,1181132f, 160,0104f, 0,3386275f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[3], &iLocal_4 + 1712);
	*(&iLocal_4 + 1720[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart04", Vector(-892,0001f, 90,35291f, 2504.0f), Vector(0.0f, -87,65366f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[4], &iLocal_4 + 1712);
	*(&iLocal_4 + 1720[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start04", Vector(-851,9971f, 90,67549f, 2508,144f), Vector(0.0f, -49,89449f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[5], &iLocal_4 + 1712);
	*(&iLocal_4 + 1720[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse02Start04", Vector(-864,0001f, 90,35291f, 2492.0f), Vector(0.0f, 247,2637f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1720[6], &iLocal_4 + 1712);
	*(&iLocal_4 + 1784) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1792[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart05", Vector(-548,0001f, 92,63287f, 2396.0f), Vector(0.0f, -30,87452f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[0], &iLocal_4 + 1784);
	*(&iLocal_4 + 1792[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchersDaughterStart05", Vector(-552,0001f, 92,87204f, 2392.0f), Vector(0.0f, -87,22755f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[1], &iLocal_4 + 1784);
	*(&iLocal_4 + 1792[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RanchersDaughterEnd05", Vector(-880,373f, 90,16616f, 2424,05f), Vector(0.0f, -87,22755f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[2], &iLocal_4 + 1784);
	*(&iLocal_4 + 1792[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart05", Vector(-520,451f, 90,34014f, 2332.0f), Vector(0.0f, 187,4482f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[3], &iLocal_4 + 1784);
	*(&iLocal_4 + 1792[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart05", Vector(-544,0001f, 92,59833f, 2384.0f), Vector(0.0f, -9,963894f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[4], &iLocal_4 + 1784);
	*(&iLocal_4 + 1792[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start05", Vector(-531,1726f, 90,88852f, 2348,62f), Vector(0.0f, -92,91121f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[5], &iLocal_4 + 1784);
	*(&iLocal_4 + 1792[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse02Start05", Vector(-548,0001f, 92,40481f, 2376.0f), Vector(0.0f, -135,0881f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1792[6], &iLocal_4 + 1784);
	*(&iLocal_4 + 1856) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1864[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart06", Vector(-444.0f, 79,0896f, 2144f), Vector(0.0f, -54,79993f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[0], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart06", Vector(-444.0f, 79,73266f, 2136f), Vector(0.0f, -44,64183f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[1], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart06", Vector(-464.0f, 72,16379f, 2180f), Vector(0.0f, -46,22562f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[2], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start06", Vector(-448.0f, 75,91007f, 2160f), Vector(0.0f, -81,5193f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[3], &iLocal_4 + 1856);
	*(&iLocal_4 + 1904) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene07Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1912[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart07", Vector(-47,9662f, 86,22924f, 1936,988f), Vector(0.0f, -48,52542f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1912[0], &iLocal_4 + 1904);
	*(&iLocal_4 + 1912[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart07", Vector(-32.0f, 90,16607f, 1908f), Vector(0.0f, 269,0146f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1912[1], &iLocal_4 + 1904);
	*(&iLocal_4 + 1912[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart07", Vector(-45,5577f, 85,70475f, 1940,201f), Vector(0.0f, 322,1283f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1912[2], &iLocal_4 + 1904);
	*(&iLocal_4 + 1912[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start07", Vector(-28f, 89,90562f, 1912.0f), Vector(0.0f, 322,6788f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1912[3], &iLocal_4 + 1904);
	*(&iLocal_4 + 1952) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene08Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1960[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart08", Vector(-8.0f, 93,63773f, 1880f), Vector(0.0f, -16,39404f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[0], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart08", Vector(-20.0f, 94,45158f, 1880f), Vector(0.0f, 180,2061f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[1], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart08", Vector(-12.0f, 93,2709f, 1884f), Vector(0.0f, 365,0115f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[2], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start08", Vector(-16.0f, 94,17774f, 1880f), Vector(0.0f, 220,1507f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[3], &iLocal_4 + 1952);
	*(&iLocal_4 + 2000) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene09Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2008[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart09", Vector(15,00125f, 98,22278f, 1861,92f), Vector(0.0f, -16,39404f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[0], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart09", Vector(6,778208f, 102,8878f, 1834,886f), Vector(0.0f, 180,2061f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[1], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart09", Vector(12.0f, 97,94608f, 1864.0f), Vector(0.0f, 361,7505f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[2], &iLocal_4 + 2000);
	*(&iLocal_4 + 2008[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start09", Vector(10,99117f, 102,0218f, 1837,062f), Vector(0.0f, 371,784f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2008[3], &iLocal_4 + 2000);
	*(&iLocal_4 + 2048) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart10", Vector(-129,4509f, 118,344f, 1538,934f), Vector(0.0f, -32,39901f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2056[0], &iLocal_4 + 2048);
	*(&iLocal_4 + 2056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart10", Vector(-136,0979f, 118,8388f, 1495,579f), Vector(0.0f, 150,3779f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2056[1], &iLocal_4 + 2048);
	*(&iLocal_4 + 2056[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart10", Vector(-125,3019f, 118,2119f, 1537,629f), Vector(0.0f, 13,00618f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2056[2], &iLocal_4 + 2048);
	*(&iLocal_4 + 2056[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start10", Vector(-128,8729f, 118,4755f, 1493,922f), Vector(0.0f, 292,771f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2056[3], &iLocal_4 + 2048);
	*(&iLocal_4 + 2096) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene11Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2104[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart11", Vector(-71,99997f, 117,3184f, 1448f), Vector(0.0f, -32,39901f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[0], &iLocal_4 + 2096);
	*(&iLocal_4 + 2104[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart11", Vector(-68.0f, 115,9779f, 1432f), Vector(0.0f, 150,3779f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[1], &iLocal_4 + 2096);
	*(&iLocal_4 + 2104[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart11", Vector(-74,18257f, 116,7225f, 1442,182f), Vector(0.0f, -48,12374f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[2], &iLocal_4 + 2096);
	*(&iLocal_4 + 2104[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01Start11", Vector(-68.0f, 116,1761f, 1428f), Vector(0.0f, 156,1997f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[3], &iLocal_4 + 2096);
	*(&iLocal_4 + 2104[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "UncleEnd11", Vector(-60,67518f, 115,8573f, 1432,675f), Vector(0.0f, -41,28461f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2104[4], &iLocal_4 + 2096);
	*(&iLocal_4 + 2152) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2160[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStartLast", Vector(-78,831f, 116,911f, 1405,41f), Vector(0.0f, 119,934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[0], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStartLast", Vector(-80.0f, 116,8409f, 1406,363f), Vector(0.0f, 307,8358f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[1], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEndLast", Vector(-36f, 116,8612f, 1404f), Vector(0.0f, 411,2395f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[2], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStartLast", Vector(-77,507f, 116,869f, 1419,258f), Vector(0.0f, -91,12924f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[3], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Horse01StartLast", Vector(-77,19144f, 116,8612f, 1417,584f), Vector(0.0f, -89,18501f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[4], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "UncleStartLast", Vector(-60f, 116,8612f, 1420f), Vector(0.0f, 186,1839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[5], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WifeStartLast", Vector(-106,2052f, 119,489f, 1352,372f), Vector(0.0f, 99,51627f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[6], &iLocal_4 + 2152);
	*(&iLocal_4 + 2160[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "UncleEndLast", Vector(-60f, 116,8612f, 1416f), Vector(0.0f, 66,23773f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2160[7], &iLocal_4 + 2152);
	*(&iLocal_4 + 2232) = CREATE_OBJECTSET_IN_LAYOUT("Horse03SpawnSet", &iLocal_4, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_03_01", Vector(8.0f, 98,91069f, 1860.0f), Vector(0.0f, -217,3758f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 2232);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_03_02", Vector(0.0f, 98,73331f, 1855,999f), Vector(0.0f, 172,8854f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 2232);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_03_03", Vector(4,000031f, 99,22952f, 1856.0f), Vector(0.0f, -199,6333f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 2232);
	*(&iLocal_4 + 2240) = CREATE_OBJECTSET_IN_LAYOUT("Horse04SpawnSet", &iLocal_4, 8, 0);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_04_01", Vector(0,6371265f, 106,7515f, 1816,942f), Vector(0.0f, -211,3866f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 2240);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_04_02", Vector(4,545491f, 107,5087f, 1810,021f), Vector(0.0f, -193,3627f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 2240);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_04_03", Vector(-3,170032f, 108,1726f, 1809,749f), Vector(0.0f, 166,8552f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 2240);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_04_04", Vector(-23,89697f, 111,6909f, 1773,886f), Vector(0.0f, -209,3711f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 2240);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_04_05", Vector(-16,60841f, 111,5454f, 1764,582f), Vector(0.0f, 155,4165f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 2240);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_04_06", Vector(-15,29857f, 111,5117f, 1771,628f), Vector(0.0f, 150,0916f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 2240);
	*(&iLocal_4 + 2248) = CREATE_OBJECTSET_IN_LAYOUT("Outlaw01SpawnSet", &iLocal_4, 8, 0);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_01_01", Vector(-64,78537f, 115,4191f, 1788,759f), Vector(0.0f, -172,0989f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 2248);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_01_02", Vector(-61,45754f, 114,9428f, 1786,297f), Vector(0.0f, 202,5427f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 2248);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_01_03", Vector(-57,80816f, 114,5361f, 1784,118f), Vector(0.0f, -166,377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_4 + 2248);
	*(&iLocal_4 + 2256) = CREATE_OBJECTSET_IN_LAYOUT("Outlaw02SpawnSet", &iLocal_4, 8, 0);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_02_01", Vector(-60,82602f, 115,4871f, 1793,907f), Vector(0.0f, -172,0989f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_4 + 2256);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_02_02", Vector(-57,71702f, 115,1632f, 1791,615f), Vector(0.0f, 202,5427f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_4 + 2256);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_02_03", Vector(-54,19437f, 114,7183f, 1789,698f), Vector(0.0f, -166,377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4 + 2256);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_02_04", Vector(-51,20674f, 114,2398f, 1787,107f), Vector(0.0f, -172,0989f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_4 + 2256);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_02_05", Vector(-47,92581f, 113,8898f, 1785,157f), Vector(0.0f, 202,5427f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_4 + 2256);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_outlaw_02_06", Vector(-44,31032f, 113,3651f, 1783,66f), Vector(0.0f, -166,377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_4 + 2256);
	*(&iLocal_4 + 2264) = CREATE_OBJECTSET_IN_LAYOUT("MoveCows01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2272[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_cow_01_01", Vector(-40.0f, 103,2537f, 1828f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[0], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_cow_01_02", Vector(-32.0f, 103,5257f, 1819,999f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[1], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_cow_01_03", Vector(36.0f, 99,3176f, 1856f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[2], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_cow_01_04", Vector(36.0f, 100,1443f, 1848.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[3], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_cow_01_05", Vector(44,00003f, 100,0896f, 1848.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[4], &iLocal_4 + 2264);
	*(&iLocal_4 + 2320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_companion", Vector(-72,17164f, 116,8612f, 1410,042f), Vector(0.0f, 65,98219f, 0.0f));
	*(&iLocal_4 + 2328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gateway01", Vector(-793,652f, 92,23145f, 2421,267f), Vector(0.0f, -88,30547f, 0.0f));
	*(&iLocal_4 + 2336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective00", Vector(-906,6736f, 90,35291f, 2469,645f), Vector(0.0f, -139,5319f, 0.0f));
	*(&iLocal_4 + 2344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective01b", Vector(-880,034f, 90,35291f, 2504.0f), Vector(0.0f, -82,22447f, 0.0f));
	*(&iLocal_4 + 2352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective01", Vector(-863,5977f, 90,34905f, 2504,15f), Vector(0.0f, -82,22447f, 0.0f));
	*(&iLocal_4 + 2360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective02", Vector(-536,0615f, 91,37096f, 2355,924f), Vector(0.0f, -33,94287f, 0.0f));
	*(&iLocal_4 + 2368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective03", Vector(-452,0001f, 73,85866f, 2168f), Vector(0.0f, -30,46557f, 0.0f));
	*(&iLocal_4 + 2376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective04", Vector(-35,97646f, 87,99165f, 1926,149f), Vector(0.0f, -33,60575f, 0.0f));
	*(&iLocal_4 + 2384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective04a", Vector(-8.0f, 99,49412f, 1847,999f), Vector(0.0f, 0,9785101f, 0.0f));
	*(&iLocal_4 + 2392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective04b", Vector(9,647645f, 99,99157f, 1850,946f), Vector(0.0f, 0,9785101f, 0.0f));
	*(&iLocal_4 + 2400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective05", Vector(-130,3956f, 118,2944f, 1502,82f), Vector(0.0f, -26,77981f, 0.0f));
	*(&iLocal_4 + 2408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective06", Vector(-42,30066f, 116,8612f, 1421,647f), Vector(0.0f, -52,89809f, 0.0f));
	*(&iLocal_4 + 2416) = Vector(-8.0f, 93,12223f, 1884f);
	*(&iLocal_4 + 2416 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2440) = Vector(200f, 97,38037f, 1892f);
	*(&iLocal_4 + 2440 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_ranchhand01_01", Vector(-889,0574f, 90,35291f, 2477,756f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_ranchhand01_02", Vector(-900,0001f, 90,35291f, 2444.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_ranchhand02_01", Vector(-908,0001f, 90,35291f, 2490,465f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_ranchhand02_02", Vector(-912,0001f, 90,35291f, 2448f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_ranchersdaughter01", Vector(-888,0001f, 90,35291f, 2472f), Vector(0.0f, 85,76461f, 0.0f));
	*(&iLocal_4 + 2504) = Vector(-897,8105f, 90,35291f, 2481,866f);
	*(&iLocal_4 + 2504 + 12) = Vector(0.0f, 36,38995f, 0.0f);
	*(&iLocal_4 + 2528) = Vector(-171,3093f, 127,0223f, 1806,003f);
	*(&iLocal_4 + 2528 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2552) = Vector(-75,83722f, 117,6509f, 1418,991f);
	*(&iLocal_4 + 2552 + 12) = Vector(0.0f, 268,941f, 0.0f);
	*(&iLocal_4 + 2576) = Vector(-75,8614f, 117,7085f, 1417,575f);
	*(&iLocal_4 + 2576 + 12) = Vector(0.0f, 267.0f, 0.0f);
	*(&iLocal_4 + 2600) = Vector(-124.0f, 118,8691f, 1380f);
	*(&iLocal_4 + 2600 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2624) = Vector(31,99988f, 126,8915f, 1412f);
	*(&iLocal_4 + 2624 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 2648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_waterpump", Vector(-72,37083f, 116,6794f, 1414,914f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_pocketwatch", Vector(-70,358f, 116,6794f, 1410,924f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_cooking", Vector(-107,152f, 119,489f, 1348,97f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_chopveggies", Vector(-106,835f, 119,489f, 1350,702f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_stirringpot", Vector(-107,406f, 119,489f, 1351,837f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_shelf", Vector(-104,109f, 119,489f, 1350,731f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_sweeping", Vector(-108,458f, 119,488f, 1353,729f), Vector(0.0f, 51,56491f, 0.0f));
	*(&iLocal_4 + 2704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_sit_smoke", Vector(-67,438f, 117,899f, 1375,083f), Vector(0.0f, 129.0f, 0.0f));
	*(&iLocal_4 + 2712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_repair", Vector(-71,865f, 117,902f, 1371,628f), Vector(0.0f, 266.0f, 0.0f));
	*(&iLocal_4 + 2720) = Vector(-906,6736f, 90,35291f, 2469,645f);
	*(&iLocal_4 + 2720 + 12) = Vector(0.0f, -139,5319f, 0.0f);
	*(&iLocal_4 + 2744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(-66,46201f, 117,7529f, 1360f), Vector(0.0f, -47,32581f, 0.0f));
	*(&iLocal_4 + 2752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand_nospawn4", "rand_idle_stand_nospawn", Vector(-892,7537f, 90,39569f, 2480,871f), Vector(0.0f, 21,30917f, 0.0f));
	*(&iLocal_4 + 2760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand_nospawn5", "rand_idle_stand_nospawn", Vector(-901,1947f, 90,37595f, 2486,326f), Vector(0.0f, 8,045435f, 0.0f));
	*(&iLocal_4 + 2768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-790,8464f, 93,04779f, 2414,476f), Vector(0.0f, 210,5108f, 0.0f));
	*(&iLocal_4 + 2776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-794,484f, 92,21453f, 2418,667f), Vector(0.0f, 203,5967f, 0.0f));
	*(&iLocal_4 + 2784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand", "smoking_stand", Vector(-786,139f, 93,697f, 2408,823f), Vector(0.0f, 143,8486f, 0.0f));
	*(&iLocal_4 + 2792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand1", "smoking_stand", Vector(-60f, 116,8612f, 1420f), Vector(0.0f, -210,2f, 0.0f));
	*(&iLocal_4 + 2800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand2", "smoking_stand", Vector(-60,67518f, 115,8573f, 1432,675f), Vector(0.0f, -257,5542f, 0.0f));
	*(&iLocal_4 + 2808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lean_rail_forward", "lean_rail_forward", Vector(-62,63347f, 116,8612f, 1419,108f), Vector(0.0f, 155,6197f, 0.0f));
	*(&iLocal_4 + 2816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MissionEnd_MarstonSmoke", "MissionEnd_MarstonSmoke", Vector(-74,325f, 116,849f, 1406,035f), Vector(0.0f, 12,838f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 2824) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_daughter01");
	PushArrayP();
	*(&iLocal_4 + 2832) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_daughter01a");
	PushArrayP();
	*(&iLocal_4 + 2840) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding01_01");
	PushArrayP();
	*(&iLocal_4 + 2848) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding02_01");
	PushArrayP();
	*(&iLocal_4 + 2856) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding03_01");
	PushArrayP();
	*(&iLocal_4 + 2864) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding04_01");
	PushArrayP();
	*(&iLocal_4 + 2872) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding05_01");
	PushArrayP();
	*(&iLocal_4 + 2880) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding06_01");
	PushArrayP();
	*(&iLocal_4 + 2888) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion00");
	PushArrayP();
	*(&iLocal_4 + 2896) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion00b");
	PushArrayP();
	*(&iLocal_4 + 2904) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion01");
	PushArrayP();
	*(&iLocal_4 + 2912) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion02");
	PushArrayP();
	*(&iLocal_4 + 2920) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion02a");
	PushArrayP();
	*(&iLocal_4 + 2928) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion03");
}

var D³PâÂYGBéAåD³J\ÂûKBé/D²ÿÿÂ¡[¢BéÂèD²~Â¢´Bé­ZD±ÿÿÂ¢ÌÀBéµ3D±§,G¿:Bx°:¯opath_companion05 p   HÂ3ìBé[ÜD°ÎÂ%BéY5D°ÌÂqÃBébâD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128) //Position: 0x15C8A / 89226
{
	var uVar63;
	
	*StackVal = StackVal;
	uVar63 = StackVal;
}

var Function_308(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x15F70 / 89968
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
		Function_236(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_316(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_311(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_310(&bVar1, 0, 0, 0, 0);
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
		Function_309(&bVar1, 0);
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

void Function_309(var uParam0, bool bParam1) //Position: 0x164B0 / 91312
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_310(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x164D2 / 91346
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

var Function_311(int iParam0, int iParam1) //Position: 0x16533 / 91443
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_315(iParam0))
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
						Function_312(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_312(var uParam0, int iParam1) //Position: 0x165C1 / 91585
{
	Function_314(&uParam0);
	Function_313(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_313(int iParam0) //Position: 0x165ED / 91629
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_314(int iParam0) //Position: 0x16613 / 91667
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

bool Function_315(int iParam0) //Position: 0x166E9 / 91881
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_316(int iParam0, var uParam1) //Position: 0x16700 / 91904
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

bool Function_317(struct<2>[] Param0) //Position: 0x167A6 / 92070
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_322();
	iVar1 = 0;
	if (!Function_188(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_321(&(Param0[iVar02]), 8);
		}
		else if (Function_320())
		{
			iVar1 = 1;
			Function_321(&(Param0[iVar02]), 8);
		}
		Function_321(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_188(&(Param0[02]), 8) || iVar1));
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
				Function_321(&(Param0[iVar02]), 1);
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
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_321(&(Param0[iVar02]), 2);
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
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_321(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_321(&(Param0[iVar02]), 2);
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
	Function_318();
	return 1;
}

void Function_318() //Position: 0x16B68 / 93032
{
	if (!Function_319(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_319(int iParam0) //Position: 0x16BA8 / 93096
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_320() //Position: 0x16BC4 / 93124
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

void Function_321(struct<13> Param0) //Position: 0x16BF2 / 93170
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_322() //Position: 0x16C05 / 93189
{
	if (!Function_319(128))
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

int Function_323() //Position: 0x16C47 / 93255
{
	switch (bLocal_926)
	{
		case 0x00000063:
			Function_324(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_324(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_324(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_324(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_324(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_324(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x16CCD / 93389
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
		Function_253();
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
	Function_285(&iParam9, &bParam10);
}

int Function_325() //Position: 0x16D9C / 93596
{
	switch (bLocal_926)
	{
		case 0x00000063:
			Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_931, 1, 0);
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
					{
						Function_358(&bLocal_933, &iLocal_4 + 1528[5], 1, 1, 0);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
					}
					else
					{
						Function_304(&Global_54076, &iLocal_4 + 1528[5], 1, 1, 0);
					}
				}
				else
				{
					bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
					{
						Function_358(&(uLocal_1390[0]), &iLocal_4 + 1528[6], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
					}
					else
					{
						Function_304(&bLocal_931, &iLocal_4 + 1528[6], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1386))
			{
				Function_358(&bLocal_1386, &iLocal_4 + 1528[4], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1386, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1386, true);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
					{
						Function_358(&bLocal_933, &iLocal_4 + 1608[6], 1, 1, 0);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
					}
					else
					{
						Function_304(&Global_54076, &iLocal_4 + 1608[6], 1, 1, 0);
					}
				}
				else
				{
					bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
					{
						Function_358(&(uLocal_1390[0]), &iLocal_4 + 1608[8], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
					}
					else
					{
						Function_304(&bLocal_931, &iLocal_4 + 1608[8], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1388))
			{
				if (IS_ACTOR_VALID(&(uLocal_1394[0])))
				{
					TASK_CLEAR(&(uLocal_1394[0]));
					if (!IS_ACTOR_RIDING(&bLocal_1388) && !IS_ACTOR_MOUNTED(&(uLocal_1394[0])))
					{
						Function_358(&(uLocal_1394[0]), &iLocal_4 + 1608[10], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_1388, &(uLocal_1394[0]));
					}
					else
					{
						Function_304(&bLocal_1388, &iLocal_4 + 1608[10], 1, 1, 1);
					}
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_358(&Global_54076, &iLocal_4 + 2160[0], 1, 1, 0);
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				Function_358(&bLocal_931, &iLocal_4 + 2160[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1382))
			{
				TASK_CLEAR(&bLocal_1382);
				Function_358(&bLocal_1382, &iLocal_4 + 2160[7], 1, 1, 1);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_326() //Position: 0x170A2 / 94370
{
	switch (bLocal_926)
	{
		case 0x00000063:
			if (!Function_327() && !Function_317(&iLocal_762))
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

bool Function_327() //Position: 0x170D2 / 94418
{
	Function_330(&iLocal_4 + 8, Global_13580[03], 2, 0);
	Function_330(&iLocal_4 + 8, Global_13580[13], 2, 0);
	Function_328(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_328(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_328(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_328(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_328(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/missionend_marstonsmoke", 1, 0);
	if (Function_317(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_328(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x17272 / 94834
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_329(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_321(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_329(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x172B0 / 94896
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_321(&(Param0[iVar02]), 4);
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

var Function_330(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1737F / 95103
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
			Function_321(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_321(&(Param0[iVar02]), 8);
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

int Function_331() //Position: 0x1745B / 95323
{
	switch (bLocal_926)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-103,78f, 120,884f, 1348,972f), Vector(0,982f, -0,138f, 0,126f));
				return 1;
			}
			Unknown_Function();
			if (StackVal)
			{
				Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					Function_358(&bLocal_931, &iLocal_4 + 1464[2], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
			}
			break;
		
		case 0x00000001:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(Function_306(), Vector(-793,459f, 94,747f, 2423,09f), Vector(0,004f, -0,053f, -0,999f));
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
			return 1;
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-895,435f, 93,014f, 2439,573f), Vector(0,291f, -0,052f, 0,955f));
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

int Function_332() //Position: 0x17564 / 95588
{
	switch (bLocal_926)
	{
		case 0x00000063:
			Function_335(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_333(StackVal, &cLocal_748, (&Global_6667[4928] + 88), &iLocal_4 + 176[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_335(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_249(&iLocal_4 + 1528[5]);
			Function_333(StackVal, &cLocal_748, Function_249(&iLocal_4 + 1528[5]), &iLocal_4 + 176[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_335(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_249(&iLocal_4 + 1608[6]);
			Function_333(StackVal, &cLocal_748, Function_249(&iLocal_4 + 1608[6]), &iLocal_4 + 176[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_335(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_249(&iLocal_4 + 2160[0]);
			Function_333(StackVal, &cLocal_748, Function_249(&iLocal_4 + 2160[0]), &iLocal_4 + 176[5], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_335(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_333(StackVal, &cLocal_748, *(&Global_6667[4928] + 88), &iLocal_4 + 176[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_333(char* cParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x176AB / 95915
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
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
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
				Function_334(&uVar1, &cParam0);
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

void Function_334(var uParam0, float fParam1) //Position: 0x1794B / 96587
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

void Function_335(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x179CD / 96717
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
	Function_253();
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
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
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
				Function_337(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_337(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_336()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_336()));
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
	if (Function_319(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_319(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_336() //Position: 0x17C7F / 97407
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

struct<8> Function_337(var uParam0) //Position: 0x17D0D / 97549
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_338() //Position: 0x17D1F / 97567
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 2160[4];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_339();
	return;
}

void Function_339() //Position: 0x17DC4 / 97732
{
	Function_347();
	(&Local_1734 + 24) = &iLocal_4 + 2880;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2408, &iLocal_1626, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1288, -1.0f);
		}
	}
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0x17EB2 / 97970
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
				AI_SET_NAV_MAX_SLOPE(&uVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_341(var uParam0, var uParam1, int iParam2) //Position: 0x17EFC / 98044
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
				DECOR_SET_BOOL(&uVar1, &uParam1, iParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_342(var uParam0, int iParam1) //Position: 0x17F4A / 98122
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
				SET_ACTOR_CAN_BE_BUMPTARGETED(&uVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_343(var uParam0, bool bParam1) //Position: 0x17F91 / 98193
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

void Function_344(var uParam0, bool bParam1) //Position: 0x17FD8 / 98264
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

void Function_345(struct<113> Param0) //Position: 0x18024 / 98340
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
					Function_249(&bParam2);
					Var36 = Function_249(&bParam2);
					Function_346(&bParam2);
					Var38 = Function_346(&bParam2);
					PRINTVECTOR(Var36);
					PRINTNL();
					fVar46 = RAND_FLOAT_RANGE(fParam5, fParam6);
					Var40 = Var36;
					Var40 = (Var40 - ((IntToFloat(iParam4) * fVar46) / 2.0f));
					Var40.f_4 = (StackVal + fParam7);
					Var40.f_8 = (StackVal - ((IntToFloat((Param0.f_112 / iParam4)) * fVar46) / 2.0f));
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
							fVar46 = RAND_FLOAT_RANGE(fParam5, fParam6);
							Var42.f_8 = (StackVal + fVar46);
						}
						if (bParam8)
						{
							Var44.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						}
						iVar47 = RAND_INT_RANGE(0, (iParam3 - 1));
						bVar48 = iParam3[iVar47];
						if (Function_315(bVar48))
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
						fVar46 = RAND_FLOAT_RANGE(fParam5, fParam6);
						Var42 = (Var42 + fVar46);
						iVar1++;
						bVar0++;
					}
				}
			}
		}
	}
}

struct<8> Function_346(var uParam0) //Position: 0x181D8 / 98776
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

void Function_347() //Position: 0x18201 / 98817
{
	iLocal_1626[0] = 1008;
	iLocal_1626[1] = 1009;
	iLocal_1626[2] = 1010;
	iLocal_1626[3] = 1011;
	*(&Local_1734 + 152[0]) = &Global_54076;
	*(&Local_1734 + 152[1]) = &bLocal_931;
	Local_1734.f_112 = Function_353(Local_750);
	Local_1734.f_116 = 15;
	PRINTINT(Local_1734.f_112);
	PRINTNL();
	*(&Local_1734 + 104) = "HOME01_COWS01";
	if (!Function_283(&Local_1734 + 132))
	{
		Function_348(&Local_1734 + 132);
	}
	else
	{
		Function_229(&Local_1734 + 132);
	}
	if (!IS_OBJECT_VALID(&Local_1734))
	{
		Local_1734 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_748, "COWS_01_BASE", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1734))
		{
		}
	}
	if (!IS_OBJECT_VALID(&Local_1734 + 8))
	{
		*(&Local_1734 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &cLocal_748, "COWS_01_CENTER", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1734 + 8))
		{
		}
	}
	if (!SQUAD_IS_VALID(&Local_1734 + 72))
	{
		*(&Local_1734 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 72))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 72);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1734 + 80))
	{
		*(&Local_1734 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 80))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 80);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1734 + 88))
	{
		*(&Local_1734 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 88))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 88);
		}
	}
	if (!IS_VOLUME_VALID(&Local_1734 + 56))
	{
		*(&Local_1734 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &cLocal_748, "HERD_VOLUME_MEDIUM", 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(9.0f, 9.0f, 9.0f));
		if (IS_VOLUME_VALID(&Local_1734 + 56))
		{
			if (IS_OBJECT_VALID(&Local_1734 + 8))
			{
				ATTACH_OBJECTS(StackVal, StackVal, &Local_1734 + 56, &Local_1734 + 8, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
		}
	}
	(&Local_1734 + 24) = "";
	(&Local_1734 + 16) = "";
	Local_1734.f_148 = 0;
	return;
}

void Function_348(int iParam0) //Position: 0x18486 / 99462
{
	if (!Function_283(&iParam0))
	{
		Function_230(&iParam0, 0.0f);
	}
	return;
}

void Function_349(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1849D / 99485
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_298(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_350(var uParam0, bool bParam1) //Position: 0x184D8 / 99544
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

void Function_351(var uParam0, bool bParam1) //Position: 0x18520 / 99616
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

void Function_352(var uParam0, var[] uParam1, var[] uParam2, char*[] cParam3, char* cParam4) //Position: 0x18567 / 99687
{
	bool bVar0;
	char* cVar1[64];
	struct<2> Var18;
	struct<2> Var20;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (bParam5 - 1))
		{
			strcpy(&cVar2, "DYN_", 64);
			cVar1 = INT_TO_STRING(bVar0);
			stradd(&cVar2, &cParam4, 64);
			stradd(&cVar2, &cVar1, 64);
			GET_OBJECT_POSITION(&(uParam2[bVar0]), &Var18);
			GET_OBJECT_ORIENTATION(&(uParam2[bVar0]), &Var20);
			uParam1[bVar0] = CREATE_ACTOR_IN_LAYOUT(&cLocal_748, &cVar2, cParam3[bVar0], Var18, Var20);
			if (IS_ACTOR_VALID(&(uParam1[bVar0])))
			{
				PRINTINT(bVar0);
				PRINTNL();
				SQUAD_JOIN(&(uParam1[bVar0]), &uParam0);
			}
			bVar0++;
		}
	}
}

bool Function_353(int iParam0) //Position: 0x18614 / 99860
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_354() //Position: 0x1862E / 99886
{
	switch (bLocal_926)
	{
		case 0x00000000:
			if (Function_357() && Function_356())
			{
				Function_236(11, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1384, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1384, 0);
				SET_ACTOR_FACTION(&bLocal_1384, 20);
				TASK_PRIORITY_SET(&bLocal_1384, true);
				TASK_STAND_STILL(&bLocal_1384, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1384, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1384, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1384, GET_ACTOR_MAX_HEALTH(&bLocal_1384));
				Function_236(13, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1382, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1382, 0);
				SET_ACTOR_FACTION(&bLocal_1382, 20);
				TASK_PRIORITY_SET(&bLocal_1382, true);
				TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1382, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1382, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1382, GET_ACTOR_MAX_HEALTH(&bLocal_1382));
				return 1;
			}
			break;
		
		case 0x00000001:
			if (Function_355())
			{
				Function_236(3, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1388, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1388, 0);
				SET_ACTOR_FACTION(&bLocal_1388, 20);
				TASK_PRIORITY_SET(&bLocal_1388, true);
				TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1388, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1388, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1388, GET_ACTOR_MAX_HEALTH(&bLocal_1388));
				return 1;
			}
			break;
		
		case 0x00000002:
			if (Function_355())
			{
				Function_236(3, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1388, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1388, 0);
				SET_ACTOR_FACTION(&bLocal_1388, 20);
				TASK_PRIORITY_SET(&bLocal_1388, true);
				TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1388, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1388, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1388, GET_ACTOR_MAX_HEALTH(&bLocal_1388));
				return 1;
			}
			break;
		
		case 0x00000003:
			if (Function_355())
			{
				Function_236(3, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1388, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1388, 0);
				SET_ACTOR_FACTION(&bLocal_1388, 20);
				TASK_PRIORITY_SET(&bLocal_1388, true);
				TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1388, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1388, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1388, GET_ACTOR_MAX_HEALTH(&bLocal_1388));
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_355())
			{
				Function_236(3, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1388, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1388, 0);
				SET_ACTOR_FACTION(&bLocal_1388, 20);
				TASK_PRIORITY_SET(&bLocal_1388, true);
				TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1388, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1388, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1388, GET_ACTOR_MAX_HEALTH(&bLocal_1388));
				return 1;
			}
			break;
		
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000006:
			return 1;
			break;
		
		case 0x00000007:
			return 1;
			break;
		
		case 0x00000008:
			if (Function_357() && Function_356())
			{
				Function_236(11, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1384, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1384, 0);
				SET_ACTOR_FACTION(&bLocal_1384, 20);
				TASK_PRIORITY_SET(&bLocal_1384, true);
				TASK_STAND_STILL(&bLocal_1384, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1384, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1384, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1384, GET_ACTOR_MAX_HEALTH(&bLocal_1384));
				Function_236(13, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1382, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1382, 0);
				SET_ACTOR_FACTION(&bLocal_1382, 20);
				TASK_PRIORITY_SET(&bLocal_1382, true);
				TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1382, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1382, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1382, GET_ACTOR_MAX_HEALTH(&bLocal_1382));
				return 1;
			}
			break;
		
		case 0x00000009:
			if (Function_357() && Function_356())
			{
				Function_236(11, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1384, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1384, 0);
				SET_ACTOR_FACTION(&bLocal_1384, 20);
				TASK_PRIORITY_SET(&bLocal_1384, true);
				TASK_STAND_STILL(&bLocal_1384, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1384, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1384, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1384, GET_ACTOR_MAX_HEALTH(&bLocal_1384));
				Function_236(13, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1382, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1382, 0);
				SET_ACTOR_FACTION(&bLocal_1382, 20);
				TASK_PRIORITY_SET(&bLocal_1382, true);
				TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1382, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1382, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1382, GET_ACTOR_MAX_HEALTH(&bLocal_1382));
				return 1;
			}
			break;
		
		case 0x0000000A:
			if (Function_357() && Function_356())
			{
				Function_236(11, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1384, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1384, 0);
				SET_ACTOR_FACTION(&bLocal_1384, 20);
				TASK_PRIORITY_SET(&bLocal_1384, true);
				TASK_STAND_STILL(&bLocal_1384, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1384, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1384, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1384, GET_ACTOR_MAX_HEALTH(&bLocal_1384));
				Function_236(13, 0, 1);
				RESET_ACTOR_GAITS(&bLocal_1382, 0);
				SET_CRIPPLE_ENABLE(&bLocal_1382, 0);
				SET_ACTOR_FACTION(&bLocal_1382, 20);
				TASK_PRIORITY_SET(&bLocal_1382, true);
				TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_1382, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_1382, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_1382, GET_ACTOR_MAX_HEALTH(&bLocal_1382));
				return 1;
			}
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

bool Function_355() //Position: 0x18AF9 / 101113
{
	if (bLocal_926 == 2)
	{
		if (!IS_ACTOR_VALID(&bLocal_1388))
		{
			bLocal_1388 = Function_308(3, 0, 1, -892.0f, 90,353f, 2449,998f, 0, 0, 0);
			return 0;
		}
		if (IS_ACTOR_VALID(&bLocal_1388))
		{
			if (iLocal_947[1] == 0)
			{
				if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1388, 1))
				{
					return 0;
				}
			}
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_1388))
	{
		bLocal_1388 = Function_308(3, 0, 1, -892.0f, 90,353f, 2449,998f, 0, 0, 0);
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1388, 1))
	{
		return 0;
	}
	return 1;
}

int Function_356() //Position: 0x18B92 / 101266
{
	if (!IS_ACTOR_VALID(&bLocal_1382))
	{
		if (bLocal_926 == 101)
		{
			bLocal_1382 = Function_308(13, 0, 1, -60.0f, 116,861f, 1420.0f, 0, 0, 0);
		}
		else
		{
			bLocal_1382 = Function_308(13, 0, 1, -60.0f, 116,457f, 1392.0f, 0, 0, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1382, 1))
	{
		return 0;
	}
	return 1;
}

int Function_357() //Position: 0x18BFC / 101372
{
	if (!IS_ACTOR_VALID(&bLocal_1384))
	{
		bLocal_1384 = Function_308(11, 0, 1, -106,205f, 119,489f, 1352,372f, 0, 0, 0);
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1384, 1))
	{
		return 0;
	}
	return 1;
}

void Function_358(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x18C3E / 101438
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

bool Function_359(struct<37> Param0) //Position: 0x18D4E / 101710
{
	return Param0.f_36;
}

void Function_360(int iParam0) //Position: 0x18D59 / 101721
{
	if (!Function_359(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_202(1, 0, 1);
		}
	}
	return;
}

void Function_361() //Position: 0x18D75 / 101749
{
	Function_169(18444);
	Function_368(12);
	Function_368(13);
	Function_368(11);
	Function_368(35);
	Function_368(6);
	Function_368(3);
	Function_368(9);
	Function_366(268);
	Function_365();
	Function_364();
	if (bLocal_926 == 0)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 1)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 2)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 3)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 4)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 5)
	{
		Function_363(0);
		Function_362(1);
	}
	else if (bLocal_926 == 6)
	{
		Function_363(0);
		Function_362(1);
	}
	else if (bLocal_926 == 7)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 8)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 9)
	{
		Function_363(1);
		Function_362(1);
	}
	else if (bLocal_926 == 10)
	{
		Function_363(1);
		Function_362(1);
	}
	else
	{
		Function_363(1);
		Function_362(1);
	}
	return;
}

void Function_362(int iParam0) //Position: 0x18E7F / 102015
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

void Function_363(int iParam0) //Position: 0x18E9D / 102045
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

void Function_364() //Position: 0x18EC2 / 102082
{
	Global_43580.f_60 = 4294967295;
	return;
}

void Function_365() //Position: 0x18ECE / 102094
{
	Global_43580.f_56 = 0;
	return;
}

void Function_366(int iParam0) //Position: 0x18EDA / 102106
{
	Function_367(&Global_43580, iParam0);
	return;
}

void Function_367(var uParam0, int iParam1) //Position: 0x18EE8 / 102120
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_368(int iParam0) //Position: 0x18F10 / 102160
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x18F30 / 102192
{
	AUDIO_MUSIC_FORCE_TRACK(&iParam0, Function_370(iParam1), &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

var Function_370(bool bParam0) //Position: 0x18F52 / 102226
{
	int iVar0;
	
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
	iVar0 = "";
	return &iVar0;
}

void Function_371(bool bParam0) //Position: 0x194A7 / 103591
{
	Function_372(0, 0x40400000);
	Function_217();
	Function_216();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_372(float fParam0, float fParam1) //Position: 0x194DD / 103645
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
	Function_374();
	Function_373();
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

void Function_373() //Position: 0x195EE / 103918
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_374() //Position: 0x19622 / 103970
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

void Function_375(char* cParam0) //Position: 0x19728 / 104232
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
						if ((((((((((((((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1061) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1062) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1063) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1068) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1069) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1070) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1071) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1064) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1065) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1066) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1067) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1102) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1103) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1104)
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

int Function_376() //Position: 0x199DF / 104927
{
	switch (iLocal_1337)
	{
		case 0x00000000:
			Function_229(&iLocal_1482);
			iLocal_1337++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(&(uLocal_1706[0])))
			{
				Function_380(StackVal, *(&iLocal_4 + 2552), 0, &(uLocal_1706[0]));
			}
			else
			{
				Function_229(&iLocal_1482);
				iLocal_1337 = 2;
			}
			if (bLocal_926 != 9 && iLocal_947[8] != 1)
			{
				if (Function_281(&iLocal_1482) <= 10.0f)
				{
					LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
					uLocal_1706[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 2552, 1,5f, 0);
					if (IS_GRINGO_VALID(&(uLocal_1706[0])))
					{
					}
					Function_229(&iLocal_1482);
					iLocal_1337 = 2;
				}
			}
			else if (Function_281(&iLocal_1482) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
				uLocal_1706[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 2552, 1,5f, 0);
				if (IS_GRINGO_VALID(&(uLocal_1706[0])))
				{
				}
				Function_229(&iLocal_1482);
				iLocal_1337 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(&(uLocal_1706[1])))
			{
				Function_380(StackVal, *(&iLocal_4 + 2552), 1, &(uLocal_1706[1]));
			}
			else
			{
				iLocal_1337 = 3;
			}
			if (bLocal_926 != 9 && iLocal_947[8] != 1)
			{
				if (Function_281(&iLocal_1482) <= 10.0f)
				{
					LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch02 gringo is out of order!!!");
					uLocal_1706[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 2576, 1,5f, 0);
					if (IS_GRINGO_VALID(&(uLocal_1706[1])))
					{
					}
					Function_229(&iLocal_1482);
					iLocal_1337 = 3;
				}
			}
			else if (Function_281(&iLocal_1482) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch02 gringo is out of order!!!");
				uLocal_1706[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 2576, 1,5f, 0);
				if (IS_GRINGO_VALID(&(uLocal_1706[1])))
				{
				}
				Function_229(&iLocal_1482);
				iLocal_1337 = 3;
			}
			break;
		
		case 0x00000003:
			if (IS_GRINGO_VALID(&(uLocal_1706[0])) && IS_GRINGO_VALID(&(uLocal_1706[1])))
			{
				Function_249(GET_OBJECT_FROM_GRINGO(&(uLocal_1706[0])));
				Function_377(StackVal, Function_249(GET_OBJECT_FROM_GRINGO(&(uLocal_1706[0]))), 0, 0);
				Function_249(GET_OBJECT_FROM_GRINGO(&(uLocal_1706[1])));
				Function_377(StackVal, Function_249(GET_OBJECT_FROM_GRINGO(&(uLocal_1706[1]))), 0, 0);
			}
			iLocal_1337++;
			break;
		
		case 0x00000004:
			if (iLocal_927 > 5)
			{
				if (bLocal_926 == 0)
				{
					if (IS_ACTOR_VALID(&bLocal_933))
					{
						if (IS_GRINGO_VALID(&(uLocal_1706[0])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_933, GET_OBJECT_FROM_GRINGO(&(uLocal_1706[0])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&bLocal_933, &(uLocal_1706[0]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&bLocal_933, true);
						}
						else
						{
							Function_358(&bLocal_933, &iLocal_4 + 1464[4], 1, 1, 1);
							TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
							TASK_PRIORITY_SET(&bLocal_933, true);
						}
					}
				}
				else if (bLocal_926 == 10)
				{
					if (IS_GRINGO_VALID(&(uLocal_1706[0])))
					{
						GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_1706[0]), "UseCase1", 0);
					}
				}
				else if (bLocal_926 == 101)
				{
					if (IS_ACTOR_VALID(&bLocal_933))
					{
						if (IS_GRINGO_VALID(&(uLocal_1706[1])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_933, GET_OBJECT_FROM_GRINGO(&(uLocal_1706[1])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&bLocal_933, &(uLocal_1706[1]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&bLocal_933, true);
						}
						else
						{
							Function_358(&bLocal_933, &iLocal_4 + 2160[4], 1, 1, 1);
							TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
							TASK_PRIORITY_SET(&bLocal_933, true);
						}
					}
					if (IS_ACTOR_VALID(&(uLocal_1390[0])))
					{
						if (IS_GRINGO_VALID(&(uLocal_1706[0])))
						{
							SNAP_ACTOR_TO_GRINGO(&(uLocal_1390[0]), GET_OBJECT_FROM_GRINGO(&(uLocal_1706[0])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&(uLocal_1390[0]), &(uLocal_1706[0]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&(uLocal_1390[0]), true);
						}
						else
						{
							Function_358(&(uLocal_1390[0]), &iLocal_4 + 2160[5], 1, 1, 1);
							TASK_STAND_STILL(&(uLocal_1390[0]), -1.0f, 0, 0);
							TASK_PRIORITY_SET(&(uLocal_1390[0]), true);
						}
					}
				}
				iLocal_1337++;
			}
			break;
		
		case 0x00000005:
			iLocal_1620 = 1;
			iLocal_1337++;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_377(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x19F3F / 106303
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_379(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_378(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_378(&(uVar0[1]), "UseCase1"));
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

var Function_378(var uParam0, int iParam1) //Position: 0x1A0BC / 106684
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_379(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1A0CB / 106699
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

void Function_380(int iParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x1A215 / 107029
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &iParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &iParam0);
	if (bParam2)
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &iParam0, 2.0f, 0);
	}
	else
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &iParam0, 2.0f, 0);
	}
}

void Function_381() //Position: 0x1A2CB / 107211
{
	var uVar0;
	
	switch (iLocal_1335)
	{
		case 0x00000000:
			iLocal_1335++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(&(uLocal_1706[2])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2648, &uVar0);
				uLocal_1706[2] = LOCATE_GRINGO_OF_TYPE("stand_waterpump", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_1335++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(&(uLocal_1706[3])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2656, &uVar0);
				uLocal_1706[3] = LOCATE_GRINGO_OF_TYPE("stand_pocketwatch_e_any", &uVar0, 1.0f, 0);
			}
			else
			{
				bLocal_1619 = true;
				iLocal_1335++;
			}
			break;
		
		case 0x00000003:
			if (!IS_GRINGO_VALID(&(uLocal_1706[4])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2664, &uVar0);
				uLocal_1706[4] = LOCATE_GRINGO_OF_TYPE("cooking", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_1335++;
			}
			break;
		
		case 0x00000004:
			iLocal_1335++;
			break;
		
		case 0x00000005:
			if (!IS_GRINGO_VALID(&(uLocal_1706[6])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2680, &uVar0);
				uLocal_1706[6] = LOCATE_GRINGO_OF_TYPE("stand_stirringpot_w_any", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_1335++;
			}
			break;
		
		case 0x00000006:
			if (!IS_GRINGO_VALID(&(uLocal_1706[7])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2688, &uVar0);
				uLocal_1706[7] = LOCATE_GRINGO_OF_TYPE("nuse_shelf", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_1335++;
			}
			break;
		
		case 0x00000007:
			if (!IS_GRINGO_VALID(&(uLocal_1706[8])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2696, &uVar0);
				uLocal_1706[8] = LOCATE_GRINGO_OF_TYPE("multistage_sweeping", &uVar0, 1.0f, 0);
			}
			else
			{
				bLocal_1618 = true;
				iLocal_1335++;
			}
			break;
		
		case 0x00000008:
			if (!IS_GRINGO_VALID(&(uLocal_1706[9])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2712, &uVar0);
				uLocal_1706[9] = LOCATE_GRINGO_OF_TYPE("repair_kneel", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_1335++;
			}
			break;
		
		case 0x00000009:
			if (!IS_GRINGO_VALID(&(uLocal_1706[10])))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2704, &uVar0);
				uLocal_1706[10] = LOCATE_GRINGO_OF_TYPE("sit_ground_smoke", &uVar0, 1.0f, 0);
			}
			else
			{
				iLocal_1335++;
			}
			break;
		
		case 0x0000000A:
			iLocal_1617 = 1;
			iLocal_1335++;
			break;
	}
	return;
}

void Function_382(int[] iParam0) //Position: 0x1A592 / 107922
{
	switch (iLocal_1316)
	{
		case 0x00000000:
			iLocal_1316++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(&uLocal_1312))
			{
				uLocal_1312 = CREATE_WORLD_SECTOR(&cLocal_748, "beechersHope");
				if (IS_OBJECT_VALID(&uLocal_1312))
				{
				}
			}
			iLocal_1316++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(&uLocal_1312))
			{
				iLocal_1316++;
			}
			break;
		
		case 0x00000003:
			if (!IS_DOOR_VALID(&(iParam0[0])))
			{
				iParam0[0] = Function_383("beechersHope", "stable01", 94);
				if (IS_DOOR_VALID(&(iParam0[0])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[1])))
			{
				iParam0[1] = Function_383("beechersHope", "stable01", 95);
				if (IS_DOOR_VALID(&(iParam0[1])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[2])))
			{
				iParam0[2] = Function_383("beechersHope", "stable01", 98);
				if (IS_DOOR_VALID(&(iParam0[2])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[3])))
			{
				iParam0[3] = Function_383("beechersHope", "stable01", 99);
				if (IS_DOOR_VALID(&(iParam0[3])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[4])))
			{
				iParam0[4] = Function_383("beechersHope", "stable01", 96);
				if (IS_DOOR_VALID(&(iParam0[4])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[5])))
			{
				iParam0[5] = Function_383("beechersHope", "stable01", 97);
				if (IS_DOOR_VALID(&(iParam0[5])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[6])))
			{
				iParam0[6] = Function_383("beechersHope", "house01", 1);
				if (IS_DOOR_VALID(&(iParam0[6])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[7])))
			{
				iParam0[7] = Function_383("beechersHope", "house01", 2);
				if (IS_DOOR_VALID(&(iParam0[7])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[8])))
			{
				iParam0[8] = Function_383("beechersHope", "house01", 3);
				if (IS_DOOR_VALID(&(iParam0[8])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[9])))
			{
				iParam0[9] = Function_383("beechersHope", "house01", 4);
				if (IS_DOOR_VALID(&(iParam0[9])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[10])))
			{
				iParam0[10] = Function_383("beechersHope", "house01", 5);
				if (IS_DOOR_VALID(&(iParam0[10])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[11])))
			{
				iParam0[11] = Function_383("beechersHope", "house01", 6);
				if (IS_DOOR_VALID(&(iParam0[11])))
				{
				}
			}
			iLocal_1316++;
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID(&(iParam0[0])))
			{
				Function_161(&(iParam0[0]), 0);
				if (bLocal_926 == 101)
				{
					CLOSE_DOOR_FAST(&(iParam0[0]));
				}
				else
				{
					OPEN_DOOR_DIRECTION(&(iParam0[0]), 1);
				}
			}
			if (IS_DOOR_VALID(&(iParam0[1])))
			{
				Function_161(&(iParam0[1]), 0);
				if (bLocal_926 == 101)
				{
					CLOSE_DOOR_FAST(&(iParam0[1]));
				}
				else
				{
					OPEN_DOOR_DIRECTION(&(iParam0[1]), 0);
				}
			}
			if (IS_DOOR_VALID(&(iParam0[2])))
			{
				Function_161(&(iParam0[2]), 0);
				CLOSE_DOOR_FAST(&(iParam0[2]));
			}
			if (IS_DOOR_VALID(&(iParam0[3])))
			{
				Function_161(&(iParam0[3]), 0);
				CLOSE_DOOR_FAST(&(iParam0[3]));
			}
			if (IS_DOOR_VALID(&(iParam0[4])))
			{
				Function_161(&(iParam0[4]), 0);
				CLOSE_DOOR_FAST(&(iParam0[4]));
			}
			if (IS_DOOR_VALID(&(iParam0[5])))
			{
				Function_161(&(iParam0[5]), 0);
				CLOSE_DOOR_FAST(&(iParam0[5]));
			}
			if (IS_DOOR_VALID(&(iParam0[6])))
			{
				Function_161(&(iParam0[6]), 0);
				CLOSE_DOOR_FAST(&(iParam0[6]));
			}
			if (IS_DOOR_VALID(&(iParam0[7])))
			{
				Function_161(&(iParam0[7]), 0);
				CLOSE_DOOR_FAST(&(iParam0[7]));
			}
			if (IS_DOOR_VALID(&(iParam0[8])))
			{
				Function_161(&(iParam0[8]), 0);
				CLOSE_DOOR_FAST(&(iParam0[8]));
			}
			if (IS_DOOR_VALID(&(iParam0[9])))
			{
				Function_161(&(iParam0[9]), 0);
				CLOSE_DOOR_FAST(&(iParam0[9]));
			}
			if (IS_DOOR_VALID(&(iParam0[10])))
			{
				Function_161(&(iParam0[10]), 0);
				CLOSE_DOOR_FAST(&(iParam0[10]));
			}
			if (IS_DOOR_VALID(&(iParam0[11])))
			{
				Function_161(&(iParam0[11]), 0);
				CLOSE_DOOR_FAST(&(iParam0[11]));
			}
			iLocal_1316++;
			break;
		
		case 0x00000005:
			iLocal_1622 = 1;
			iLocal_1316++;
			break;
	}
	return;
}

int Function_383(int iParam0, int iParam1, int iParam2) //Position: 0x1AB91 / 109457
{
	return Function_384(Global_43789, &iParam0, &iParam1, iParam2);
}

int Function_384(int iParam0, char* cParam1, bool bParam3) //Position: 0x1ABA5 / 109477
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

bool Function_385(bool bParam0) //Position: 0x1AC4A / 109642
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_386() //Position: 0x1AC66 / 109670
{
	if (!iLocal_1622)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_382(&iLocal_1356);
			}
			else
			{
				iLocal_1316 = 0;
				iLocal_1622 = 0;
			}
		}
	}
	if (!iLocal_1617)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_381();
			}
			else
			{
				iLocal_1335 = 0;
				iLocal_1617 = 0;
			}
		}
	}
	if (!iLocal_1620)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_376();
			}
			else
			{
				iLocal_1337 = 0;
				iLocal_1620 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_448();
		Function_447();
		Function_445();
		Function_436();
		Function_249(&iLocal_4 + 2160[0]);
		Function_431(StackVal, "$/cutscene/HOME01_CS03/HOME01_CS03", &uLocal_1311, Function_249(&iLocal_4 + 2160[0]), 1, 75.0f, 150.0f, 2, 2, 1, 2, 0, 1);
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_947[9] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46914[1];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 2104[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1620 = 0;
				iLocal_1617 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1328 = 0;
				iLocal_1329 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_428();
				if (iLocal_947[9] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 2104[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
					if (IS_VOLUME_VALID(&iLocal_4 + 1432))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1432, 15);
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1288, -1.0f);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_933, "Horse", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &bLocal_1384, "Wife", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &bLocal_1382, "Uncle", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[515]));
				Function_418(&(Local_1031[615]));
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[0], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
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
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					if (IS_GRINGO_VALID(&(uLocal_1706[1])))
					{
						GRINGO_GET_USE_COMPONENT_POSITION_EXT(&(uLocal_1706[1]), "UseCase1", &Local_1550);
						iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
						}
					}
					else
					{
						iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", (&iLocal_4 + 2552), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
						}
					}
				}
				Function_404();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				Function_403("home01_obj11", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_395(&iLocal_943, 60.0f, 200.0f, &bLocal_931, "Son_return", "Son_abandoned", &bLocal_974, 0, &cLocal_748, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_235(&iLocal_1494);
				}
			}
			else if (!IS_OBJECT_VALID(&iLocal_1494))
			{
				if (IS_GRINGO_VALID(&(uLocal_1706[1])))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(&(uLocal_1706[1]), "UseCase1", &Local_1550);
					iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				else
				{
					iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", *(&iLocal_4 + 2552), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					if (Function_392(&Global_54076, &iLocal_1494, 1,75f) || Function_389(&Global_54076, &bLocal_931, 6.0f))
					{
						if ((!IS_ACTOR_RIDING(&bLocal_931) && IS_PLAYER_CONTROLLABLE(0)) && !IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (IS_BLIP_VALID(&uLocal_1486))
							{
								REMOVE_BLIP(&uLocal_1486);
							}
							if (IS_OBJECT_VALID(&iLocal_1494))
							{
								Function_235(&iLocal_1494);
							}
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_253();
							iLocal_927 = 106;
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					if (IS_BLIP_VALID(&uLocal_1486))
					{
						REMOVE_BLIP(&uLocal_1486);
					}
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
						Function_235(&iLocal_1494);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_253();
					iLocal_927 = 9;
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!iLocal_1625)
				{
					iLocal_1625 = 1;
					if (IS_GRINGO_VALID(&(uLocal_1706[1])))
					{
						if (!GRINGO_IS_USABLE_BY_PLAYER(&(uLocal_1706[1]), "UseCase1"))
						{
							GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_1706[1]), "UseCase1", 1);
						}
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[0])))
					{
						if (!GRINGO_IS_USABLE_BY_PLAYER(&(uLocal_1706[0]), "UseCase1"))
						{
							GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_1706[0]), "UseCase1", 1);
						}
					}
				}
			}
			else if (iLocal_1625)
			{
				iLocal_1625 = 0;
				if (IS_GRINGO_VALID(&(uLocal_1706[1])))
				{
					if (GRINGO_IS_USABLE_BY_PLAYER(&(uLocal_1706[1]), "UseCase1"))
					{
						GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_1706[1]), "UseCase1", 0);
					}
				}
				if (IS_GRINGO_VALID(&(uLocal_1706[0])))
				{
					if (GRINGO_IS_USABLE_BY_PLAYER(&(uLocal_1706[0]), "UseCase1"))
					{
						GRINGO_SET_USABLE_BY_PLAYER(&(uLocal_1706[0]), "UseCase1", 0);
					}
				}
			}
			break;
		
		case 0x00000009:
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				Function_253();
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64);
					Function_388(Local_750, bLocal_1330);
				}
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Local_1734.f_120;
				Global_53524.f_176 = bLocal_1319;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1320 = Local_1734.f_124;
				Global_53524.f_180 = bLocal_1320;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_387();
				iLocal_947[10] = 1;
				Function_229(&iLocal_935);
				bLocal_926 = 101;
				iLocal_927 = 0;
			}
			break;
	}
	return;
}

void Function_387() //Position: 0x1B733 / 112435
{
	return;
}

void Function_388(int iParam0, int iParam1) //Position: 0x1B739 / 112441
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

bool Function_389(var uParam0, bool bParam1, float fParam2) //Position: 0x1B754 / 112468
{
	float fVar0;
	
	fVar0 = Function_390(&uParam0, &bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_390(var uParam0, int iParam1) //Position: 0x1B773 / 112499
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_391(&uVar0, &uVar2);
	return iVar4;
}

var Function_391(struct<2> Param0) //Position: 0x1B794 / 112532
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_392(int iParam0, int iParam1, float fParam2) //Position: 0x1B7B3 / 112563
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_394(&iParam0);
			Function_393(&iParam1);
			if (VDIST(Function_394(&iParam0), Function_393(&iParam1)) >= fParam2)
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

struct<8> Function_393(int iParam0) //Position: 0x1B8D1 / 112849
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

struct<8> Function_394(bool bParam0) //Position: 0x1B93F / 112959
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

bool Function_395(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1B9AB / 113067
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_402(&Global_54076, &iParam3, iParam2))
	{
		Function_242(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_402(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_401(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_403(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_400(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_399(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_399(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_401(2))
	{
		Function_398(2);
		if (!Function_397())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_396();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_226(&iParam3);
				Function_237(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_399(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_399(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_396() //Position: 0x1BB69 / 113513
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

bool Function_397() //Position: 0x1BB97 / 113559
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

void Function_398(bool bParam0) //Position: 0x1BBDE / 113630
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

void Function_399(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1BC45 / 113733
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

void Function_400(bool bParam0) //Position: 0x1BD00 / 113920
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

bool Function_401(bool bParam0) //Position: 0x1BD67 / 114023
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

bool Function_402(int iParam0, var uParam1, bool bParam2) //Position: 0x1BDB1 / 114097
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

void Function_403(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1BEC6 / 114374
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
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_404() //Position: 0x1BF5B / 114523
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_GoHitchUrHors", "Home01_GoHitchUrHors", 3, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_405(int iParam0) //Position: 0x1BFAD / 114605
{
	Function_406(0, &Global_54076, iParam0, 0);
	Function_406(1, &bLocal_1388, iParam0, 0);
	Function_406(2, &bLocal_1386, iParam0, 0);
	Function_406(3, &bLocal_931, iParam0, 0);
	Function_406(4, &bLocal_1382, iParam0, 0);
	Function_406(5, &bLocal_1384, iParam0, 0);
	return;
}

void Function_406(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x1BFF5 / 114677
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

bool Function_407(int iParam0, char* cParam1, float fParam9, int iParam10, int iParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x1C01E / 114718
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&iParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &iParam11, 0, &iParam12, &bParam15);
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

bool Function_408(bool bParam0, bool bParam1, float fParam2) //Position: 0x1C109 / 114953
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

bool Function_409() //Position: 0x1C1AB / 115115
{
	return Global_53524.f_68;
}

void Function_410(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1C1B6 / 115126
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
	if (bParam2 != Global_53524.f_48 && !Function_417())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_416(0);
	Function_415();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_413(bParam2);
	}
	Function_412(uParam3, iVar0, iVar1);
	Function_411();
}

void Function_411() //Position: 0x1C25F / 115295
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

void Function_412(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C2A0 / 115360
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

void Function_413(bool bParam0) //Position: 0x1C409 / 115721
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_414() };
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

struct<16> Function_414() //Position: 0x1C5A1 / 116129
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

void Function_415() //Position: 0x1C5E7 / 116199
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_416(bool bParam0) //Position: 0x1C60B / 116235
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

bool Function_417() //Position: 0x1C63A / 116282
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_418(struct<69> Param0) //Position: 0x1C655 / 116309
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

int Function_419(struct<69> Param0) //Position: 0x1C715 / 116501
{
	if (!Function_425(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_424(&Param0, &bParam2))
	{
		return 0;
	}
	Function_423(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_420(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_420(var uParam0, int iParam1, int iParam2) //Position: 0x1C75B / 116571
{
	if (iParam1 != 100000000)
	{
		Function_422(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_421(&uParam0, &iParam2);
	}
	return;
}

void Function_421(struct<69> Param0) //Position: 0x1C782 / 116610
{
	Param0.f_68 = 0;
	Function_422(&Param0, 2, &bParam1);
	Function_422(&Param0, 4, &bParam1);
	Function_422(&Param0, 8, &bParam1);
	Function_422(&Param0, 16, &bParam1);
	Function_422(&Param0, 32, &bParam1);
	Function_422(&Param0, 64, &bParam1);
	Function_422(&Param0, 128, &bParam1);
	Function_422(&Param0, 256, &bParam1);
	Function_422(&Param0, 512, &bParam1);
	Function_422(&Param0, 1024, &bParam1);
	return;
}

void Function_422(int iParam0, int iParam1, bool bParam2) //Position: 0x1C7FD / 116733
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

void Function_423(struct<65> Param0) //Position: 0x1C83C / 116796
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_424(int iParam0, char* cParam1) //Position: 0x1C849 / 116809
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

bool Function_425(struct<61> Param0) //Position: 0x1C8D6 / 116950
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

void Function_426(int iParam0) //Position: 0x1CA89 / 117385
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

void Function_427(bool bParam0, var uParam1) //Position: 0x1CAD8 / 117464
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

void Function_428() //Position: 0x1CB25 / 117541
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 2104[3];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_429();
	return;
}

void Function_429() //Position: 0x1CBCA / 117706
{
	Function_347();
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2408, &iLocal_1626, 5, 1.0f, 3,5f, 1,5f, 1);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1288, -1.0f);
		}
	}
	return;
}

void Function_430(bool[] bParam0) //Position: 0x1CCAC / 117932
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (bParam0 - 1))
	{
		bParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

int Function_431(int iParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1CCD1 / 117969
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_434(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_435()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&iParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_432();
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
	else if ((!Function_434(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_435()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_434(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_432() //Position: 0x1CF39 / 118585
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
			Function_433(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_433(char* cParam0) //Position: 0x1CF8D / 118669
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

bool Function_434(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x1D0B6 / 118966
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_394(&bParam0);
		if (VDIST(Function_394(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_435() //Position: 0x1D142 / 119106
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_436() //Position: 0x1D151 / 119121
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_444();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_439(1);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000003:
				Function_439(1);
				if (IS_ACTOR_VALID(&bLocal_1382))
				{
					if (!Function_140())
					{
						if (Function_389(&Global_54076, &bLocal_1382, 8.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								Function_438();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1382))
				{
					if (!Function_140())
					{
						if (Function_389(&Global_54076, &bLocal_1384, 8.0f))
						{
							if (Function_281(&iLocal_939) <= 12.0f)
							{
								Function_437();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_437() //Position: 0x1D272 / 119410
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Home01_NoMeetJackStbles2", "Home01_NoMeetJackStbles2", 0, 1, 0, 0, 1);
		Function_405(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438() //Position: 0x1D2CC / 119500
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Home01_NoMeetBoy2_v1_AA", "Home01_NoMeetBoy2_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_NoMeetBoy2_v1_AB", "Home01_NoMeetBoy2_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Home01_NoMeetBoy2_v1_AC", "Home01_NoMeetBoy2_v1_AC", 0, 1, 0, 0, 1);
		Function_405(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439(bool bParam0) //Position: 0x1D39E / 119710
{
	if (Function_281(&iLocal_1474) <= 6.0f)
	{
		Function_440();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
		}
		else
		{
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_933, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
		}
	}
	return;
}

void Function_440() //Position: 0x1D4E8 / 120040
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_931)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &uLocal_1390[0])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_441();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_441();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_441();
					Function_229(&iLocal_1474);
				}
			}
			else if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnChar", "Home01_GunOnChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_ShotsGunRandMac", "Home01_ShotsGunRandMac", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
		}
	}
	return;
}

void Function_441() //Position: 0x1D783 / 120707
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsChar", "Home01_ShootsChar", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_442() //Position: 0x1D7CF / 120783
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsJakHors", "Home01_ShootsJakHors", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443() //Position: 0x1D821 / 120865
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_AssaultsJack", "Home01_AssaultsJack", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_444() //Position: 0x1D871 / 120945
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_JonHitchsHors_v1_AA", "Home01_JonHitchsHors_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonHitchsHors_v1_AB", "Home01_JonHitchsHors_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_JonHitchsHors_v1_AC", "Home01_JonHitchsHors_v1_AC", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x1D955 / 121173
{
	if (IS_ACTOR_VALID(&bLocal_1382))
	{
		switch (iLocal_1329)
		{
			case 0x00000000:
				iLocal_1329++;
				break;
			
			case 0x00000001:
				if (iLocal_1617)
				{
					if ((bLocal_926 != 8 || bLocal_926 != 9) || bLocal_926 != 10)
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808)))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_1382, &iLocal_4 + 2808, "UseCase1", true, 0, 0);
						}
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808)))
						{
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", 1, 1);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1382, bLocal_1314, 4294967295);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_1382, 2);
					}
					else
					{
						if (IS_GRINGO_VALID(&(uLocal_1706[9])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_1382, GET_OBJECT_FROM_GRINGO(&(uLocal_1706[9])), "UseCase1", true, 0, 0);
						}
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						if (IS_GRINGO_VALID(&(uLocal_1706[9])))
						{
							TASK_USE_GRINGO(false, &(uLocal_1706[9]), "UseCase1", 1, 1);
						}
						if (IS_GRINGO_VALID(&(uLocal_1706[10])))
						{
							TASK_USE_GRINGO(false, &(uLocal_1706[10]), "UseCase1", 1, 1);
						}
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2744)))
						{
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2744), "UseCase1", 1, 1);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1382, bLocal_1314, 4294967295);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_1382, 2);
						if ((!IS_GRINGO_VALID(&(uLocal_1706[9])) && !IS_GRINGO_VALID(&(uLocal_1706[10]))) && !IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2744)))
						{
						}
					}
					iLocal_1329 = 2;
				}
				else if ((bLocal_926 != 8 || bLocal_926 != 9) || bLocal_926 != 10)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808)))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_1382, &iLocal_4 + 2808, "UseCase1", true, 0, 0);
					}
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808)))
					{
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1382, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1382, 2);
					iLocal_1329 = 2;
				}
				else if (Function_281(&iLocal_935) <= 7.0f)
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(&(uLocal_1706[9])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[9]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[10])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[10]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2744)))
					{
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2744), "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1382, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1382, 2);
					if ((!IS_GRINGO_VALID(&(uLocal_1706[9])) && !IS_GRINGO_VALID(&(uLocal_1706[10]))) && !IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2744)))
					{
						TASK_CLEAR(&bLocal_1382);
					}
					iLocal_1329 = 2;
				}
				break;
			
			case 0x00000002:
				if (bLocal_926 == 10)
				{
					iLocal_1329 = 3;
				}
				else
				{
					iLocal_1329 = 8;
				}
				break;
			
			case 0x00000003:
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2800)))
				{
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2800), "UseCase1", 1, 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1382, bLocal_1314);
				TASK_PRIORITY_SET(&bLocal_1382, 2);
				iLocal_1329++;
				break;
			
			case 0x00000004:
				if (GET_CURRENT_GRINGO(&bLocal_1382) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2800))
				{
					AI_QUICK_EXIT_GRINGO(&bLocal_1382, 1);
					iLocal_1329++;
				}
				break;
			
			case 0x00000005:
				GET_OBJECT_POSITION(&bLocal_1382, &uLocal_1592);
				if (!WOULD_ACTOR_BE_VISIBLE(Function_446(&bLocal_1382), &uLocal_1592, 3212836864))
				{
					iLocal_1329++;
				}
				break;
			
			case 0x00000006:
				TASK_CLEAR(&bLocal_1382);
				Function_358(&bLocal_1382, &iLocal_4 + 2104[4], 1, 1, 1);
				if (IS_DOOR_VALID(&(iLocal_1356[0])) && IS_DOOR_VALID(&(iLocal_1356[1])))
				{
					CLOSE_DOOR_FAST(&(iLocal_1356[0]));
					CLOSE_DOOR_FAST(&(iLocal_1356[1]));
				}
				iLocal_1329++;
				break;
			
			case 0x00000007:
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808)))
				{
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2808), "UseCase1", 1, 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1382, bLocal_1314, 4294967295);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_1382, 2);
				iLocal_1329++;
				break;
			
			case 0x00000008:
				iLocal_1329++;
				break;
			}
	}
	return;
}

var Function_446(int iParam0) //Position: 0x1DE1C / 122396
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

void Function_447() //Position: 0x1DE39 / 122425
{
	if (IS_ACTOR_VALID(&bLocal_1384))
	{
		switch (iLocal_1328)
		{
			case 0x00000000:
				iLocal_1328++;
				break;
			
			case 0x00000001:
				if (bLocal_1618)
				{
					if (IS_GRINGO_VALID(&(uLocal_1706[4])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_1384, GET_OBJECT_FROM_GRINGO(&(uLocal_1706[4])), "UseCase1", false, 0, 0);
					}
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(&(uLocal_1706[4])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[4]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[6])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[6]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[7])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[7]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[8])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[8]), "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1384, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1384, 2);
					if (((!IS_GRINGO_VALID(&(uLocal_1706[4])) && !IS_GRINGO_VALID(&(uLocal_1706[6]))) && !IS_GRINGO_VALID(&(uLocal_1706[7]))) && !IS_GRINGO_VALID(&(uLocal_1706[8])))
					{
					}
					iLocal_1328++;
				}
				else if (Function_281(&iLocal_935) <= 7.0f)
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(&(uLocal_1706[4])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[4]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[6])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[6]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[7])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[7]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[8])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[8]), "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1384, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1384, 2);
					if (((!IS_GRINGO_VALID(&(uLocal_1706[4])) && !IS_GRINGO_VALID(&(uLocal_1706[6]))) && !IS_GRINGO_VALID(&(uLocal_1706[7]))) && !IS_GRINGO_VALID(&(uLocal_1706[8])))
					{
						TASK_CLEAR(&bLocal_1384);
					}
					iLocal_1328++;
				}
				break;
			
			case 0x00000002:
				iLocal_1328++;
				break;
			}
	}
	return;
}

void Function_448() //Position: 0x1E0AC / 123052
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				GET_OBJECT_POSITION(&iLocal_4 + 2160[4], &Local_1562);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2936, 2, 0, 0, 1, false);
				TASK_GO_TO_COORD(0, &Local_1562, 1);
				TASK_DISMOUNT(0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000002:
				if (!IS_ACTOR_RIDING(&bLocal_931))
				{
					MEMORY_PREFER_RIDING(&bLocal_931, false);
					iLocal_1318++;
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 2320, &Local_1562);
				if (IS_GRINGO_VALID(&(uLocal_1706[2])) && IS_GRINGO_VALID(&(uLocal_1706[3])))
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_1562, 0,5f, 1);
					TASK_FACE_COORD(0, &iLocal_4 + 2600, 0);
					TASK_STAND_STILL(false, 3.0f, 1, 0);
					TASK_USE_GRINGO(false, &(uLocal_1706[3]), "UseCase1", 1, 1);
					TASK_USE_GRINGO(false, &(uLocal_1706[2]), "UseCase1", 1, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_931, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				else
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_1562, 0,5f, 1);
					TASK_FACE_COORD(0, &iLocal_4 + 2600, 0);
					TASK_STAND_STILL(false, -1.0f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_931, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					if (IS_GRINGO_VALID(&(uLocal_1706[0])))
					{
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(0, &iLocal_4 + 2624, 0);
						TASK_STAND_STILL(false, -1.0f, 1, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM_REPEATEDLY(&(uLocal_1390[0]), bLocal_1314, 4294967295);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&(uLocal_1390[0]), true);
					}
				}
				iLocal_1318++;
				break;
			
			case 0x00000005:
				iLocal_1318++;
				break;
			}
	}
	return;
}

void Function_449() //Position: 0x1E2B7 / 123575
{
	if (!iLocal_1622)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_382(&iLocal_1356);
			}
			else
			{
				iLocal_1316 = 0;
				iLocal_1622 = 0;
			}
		}
	}
	if (!iLocal_1617)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_381();
			}
			else
			{
				iLocal_1335 = 0;
				iLocal_1617 = 0;
			}
		}
	}
	if (!iLocal_1620)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_376();
			}
			else
			{
				iLocal_1337 = 0;
				iLocal_1620 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_495(&Local_1734 + 64, &bLocal_1700, &iLocal_4 + 1200);
		Function_494(&Local_1734);
		Function_495(&bLocal_1700, &Local_1734 + 88, &iLocal_4 + 1216);
		if (iLocal_1596)
		{
			Function_490(&Local_1734, 1);
			Function_489(&Local_1734, 1);
			Function_488(&Local_1734, 1, 0x41700000);
			if (Function_281(&iLocal_1454) <= 0,2f)
			{
				Function_485(&Local_1734 + 72, &iLocal_1458, 3.0f, &iLocal_4 + 2880, -20.0f);
				Function_484(&Local_1734);
				Function_229(&iLocal_1454);
			}
			Function_483();
		}
		Function_447();
		Function_445();
		Function_482();
		Function_481(&Global_54076);
		Function_470();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_947[8] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46914[1];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 2056[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1620 = 0;
				iLocal_1617 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1328 = 0;
				iLocal_1329 = 0;
				iLocal_1321 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_468();
				if (iLocal_947[8] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 2056[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1432))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1432, 15);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1280, -1.0f);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1384, "Wife", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &bLocal_1382, "Uncle", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[515]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[615]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[715]), &bLocal_1700, "Cow", 0, 0x5f5e100, 1);
				Function_466(&(Local_1031[315]), 2);
				Function_466(&(Local_1031[415]), 2);
				Function_466(&(Local_1031[515]), 2);
				Function_466(&(Local_1031[615]), 2);
				Function_466(&(Local_1031[715]), 2);
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[0], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_465();
				Function_464();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 760);
				Function_461(&Local_1734 + 64, 2, 1);
				Function_461(&Local_1734 + 72, 2, 1);
				Function_461(&Local_1734 + 88, 2, 1);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2408, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2408, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2408, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (iLocal_947[8] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1734 + 64))
					{
						Function_465();
						Function_464();
						Function_426(&Local_1734 + 64);
						Function_462(&Local_1734 + 64, &iLocal_4 + 760);
						Function_461(&Local_1734 + 64, 2, 1);
						Function_461(&Local_1734 + 72, 2, 1);
						Function_461(&Local_1734 + 88, 2, 1);
					}
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				*(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2408;
				GET_OBJECT_POSITION(&iLocal_4 + 2408, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1288, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				if (SQUAD_IS_VALID(&bLocal_1700))
				{
					SQUAD_GOALS_CLEAR(&bLocal_1700);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1288, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1700, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_459();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_403("home01_obj10", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2408, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2408, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2408, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
				if ((((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 88)) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80)) && SQUAD_IS_VALID(&bLocal_1700))
				{
					if (((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0) && SQUAD_GET_SIZE(&bLocal_1700) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							DESTROY_OBJECT(&iLocal_1494);
						}
						Function_454();
						Function_253();
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_935);
						iLocal_927 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_451();
				Function_229(&iLocal_935);
				iLocal_927 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				Function_253();
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88);
					Function_388(Local_750, bLocal_1330);
				}
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Local_1734.f_120;
				Global_53524.f_176 = bLocal_1319;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1320 = Local_1734.f_124;
				Global_53524.f_180 = bLocal_1320;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_450();
				iLocal_947[9] = 1;
				Function_229(&iLocal_935);
				bLocal_926 = 10;
				iLocal_927 = 0;
			}
			break;
	}
	return;
}

void Function_450() //Position: 0x1EF69 / 126825
{
	return;
}

void Function_451() //Position: 0x1EF6F / 126831
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_CowsInPen_v1_AA", "Home01_CowsInPen_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_CowsInPen_v1_AB", "Home01_CowsInPen_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_CowsInPen_v1_AC", "Home01_CowsInPen_v1_AC", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452() //Position: 0x1F03B / 127035
{
	iLocal_1596 = 1;
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1734 + 64, &Local_1734 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &Global_54076, 23.0f, 1.0f, 15.0f, 10.0f, 0);
	UI_SHOW("RacePosition");
	DECOR_SET_BOOL(&Global_54076, "herding", 1);
	return;
}

int Function_453(struct<2> Param0, float fParam2, int iParam3, int iParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1F0A8 / 127144
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_392(&Global_54076, &iParam3, fParam2))
	{
		Function_242(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_392(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_401(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_403(&iParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_400(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_399(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_399(&iParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &iParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&iParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &iParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_401(1))
	{
		Function_398(1);
		if (!Function_397())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_396();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_399(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_399(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_454() //Position: 0x1F251 / 127569
{
	var uVar0;
	var uVar1;
	
	iLocal_1596 = 0;
	_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1734 + 64, &Local_1734 + 96, &Global_54076);
	if (IS_OBJECT_VALID(&Local_1734 + 8))
	{
		uVar0 = GET_BLIP_ON_OBJECT(&Local_1734 + 8);
		if (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
		}
	}
	if (IS_OBJECT_VALID(&Local_1734))
	{
		uVar1 = GET_BLIP_ON_OBJECT(&Local_1734);
		if (IS_BLIP_VALID(&uVar1))
		{
			REMOVE_BLIP(&uVar1);
		}
	}
	Function_455(&Local_1734 + 64);
	Function_455(&Local_1734 + 72);
	Function_455(&Local_1734 + 80);
	Function_455(&Local_1734 + 88);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	return;
}

void Function_455(bool bParam0) //Position: 0x1F300 / 127744
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

bool Function_456(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, bool bParam7, char* cParam8, int iParam9, int iParam10) //Position: 0x1F354 / 127828
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_401(16))
			{
				if (&bParam7)
				{
					Function_253();
				}
				if (!Function_458())
				{
					Function_403(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_400(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_242(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_401(8))
		{
			if (&bParam7)
			{
				Function_253();
			}
			if (!Function_458())
			{
				Function_403(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_400(8);
			}
			if (IS_LAYOUTREF_VALID(&cParam8))
			{
				Function_399(&cParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_399(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&cParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_401(8))
	{
		Function_398(8);
		if (!Function_397())
		{
			Function_457();
			Function_396();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&cParam8))
			{
				Function_399(&cParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_399(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_457() //Position: 0x1F4CA / 128202
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_458() //Position: 0x1F4D6 / 128214
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_459() //Position: 0x1F4E3 / 128227
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_LeadIntoPen", "Home01_LeadIntoPen", 3, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460(int iParam0) //Position: 0x1F531 / 128305
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

int Function_461(var uParam0, int iParam1, int iParam2) //Position: 0x1F566 / 128358
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
			SET_ACTOR_VOLUME_PARAMETERS(&uVar1, iParam1, iParam2);
		}
		bVar0++;
	}
	return 1;
}

void Function_462(var uParam0, int[] iParam1) //Position: 0x1F5AE / 128430
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_463(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_463(bool bParam0, int iParam1) //Position: 0x1F5F7 / 128503
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

void Function_464() //Position: 0x1F655 / 128597
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_465() //Position: 0x1F680 / 128640
{
	Function_460(&Local_1734 + 64);
	SQUAD_GOALS_CLEAR(&Local_1734 + 64);
	*(&Local_1734 + 96) = UNK_0x48588CCB(&Local_1734 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1734 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1734 + 64, &Local_1734 + 96);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 1, 19, 45.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 19, 40.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 12, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 1, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 1, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 1, 12, 0,5f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1734 + 64, &Local_1734 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1734 + 64, &Local_1734 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1734 + 64, &Local_1734 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1734 + 64, &Local_1734 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &bLocal_931, 5.0f, 1.0f, 925353388, 925353388, 0);
		if (IS_VOLUME_VALID(&Local_1734 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_931);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1734 + 56);
			if (!bLocal_926 != 4)
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_931, &Local_1734 + 56);
			}
		}
	}
	if (IS_ACTOR_VALID(&bLocal_1388))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &bLocal_1388, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(&Global_54076, "herding", 1);
	iLocal_1596 = 1;
	return;
}

void Function_466(int iParam0, int iParam1) //Position: 0x1F889 / 129161
{
	if (iParam1 != 100000000)
	{
		Function_467(&iParam0, iParam1);
	}
	else
	{
		Function_421(&iParam0, 1);
	}
	return;
}

void Function_467(int iParam0, bool bParam1) //Position: 0x1F8AB / 129195
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

void Function_468() //Position: 0x1F8D8 / 129240
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 2056[3];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1700))
	{
		bLocal_1700 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "ROBOTCOW_SQUAD"));
		if (SQUAD_IS_VALID(&bLocal_1700))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1700);
		}
	}
	Function_469();
	return;
}

void Function_469() //Position: 0x1F9BE / 129470
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2880;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2400, &iLocal_1626, 5, 3.0f, 4,5f, 1,5f, 1);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1280, -1.0f);
		}
	}
	return;
}

void Function_470() //Position: 0x1FAAC / 129708
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_480();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_471(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334 = 3;
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1440))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1734 + 8, &iLocal_4 + 1440) || IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1440))
						{
							iLocal_1334 = 3;
						}
					}
				}
				break;
			
			case 0x00000003:
				Function_471(1, 1, 1, 0x42340000, 0x41f00000);
				if (iLocal_927 > 9)
				{
					iLocal_1334 = 5;
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1440))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1734 + 8, &iLocal_4 + 1440) || IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1440))
						{
							iLocal_1334 = 4;
						}
					}
				}
				break;
			
			case 0x00000004:
				Function_439(1);
				if (iLocal_927 > 9)
				{
					iLocal_1334 = 5;
				}
				break;
			
			case 0x00000005:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_471(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4) //Position: 0x1FC00 / 130048
{
	if (Function_281(&iLocal_1474) <= 6.0f)
	{
		Function_475();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1614)
				{
					iLocal_1614 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonGetsOfHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
				else if (Function_281(&iLocal_939) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonNoGetOnHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1614)
				{
					iLocal_1614 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_933, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam0)
			{
				if (!iLocal_1612)
				{
					if (!bLocal_1613)
					{
						if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1571))
						{
							if (VMAG(Local_1571) >= 0.0f)
							{
								bLocal_1613 = true;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonStopsHorse", "Home01_JonStopsHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (bLocal_1613)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1571))
					{
						if (VMAG(Local_1571) <= (0.0f + 2.0f))
						{
							bLocal_1613 = false;
						}
					}
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 1,35f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam2)
			{
				Function_249(&Local_1734 + 16);
				if (!Function_474(StackVal, &Local_1734 + 64, Function_249(&Local_1734 + 16), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_MovesHerdWronDir", "Home01_MovesHerdWronDir", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 80) <= 3 || SQUAD_GET_SIZE(&Local_1734 + 72) <= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_931))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonBadHerd", "Home01_JonBadHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (&bParam1)
			{
				if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						if (!Function_392(&Global_54076, &Local_1734 + 8, &fParam3) && !Function_389(&Global_54076, &bLocal_931, &fParam3))
						{
							if (!bLocal_1613)
							{
								if (!iLocal_1612)
								{
									iLocal_1612 = 1;
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_473();
									Function_229(&iLocal_1474);
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, &fParam4) && Function_392(&Global_54076, &Local_1734 + 8, &fParam4))
			{
				if (&bParam1)
				{
					if (iLocal_1612)
					{
						iLocal_1612 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_472();
						Function_229(&iLocal_1474);
					}
				}
			}
		}
	}
}

void Function_472() //Position: 0x2005C / 131164
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ComesBakToHerd", "Home01_ComesBakToHerd", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x200B0 / 131248
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_RidesAwayFromHerd", "Home01_RidesAwayFromHerd", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_474(var uParam0, struct<2> Param1, float fParam3) //Position: 0x2010A / 131338
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

void Function_475() //Position: 0x20196 / 131478
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_931)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &uLocal_1390[0])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if ((Function_479(&iVar0, &Local_1734 + 64, 0) || Function_479(&iVar0, &Local_1734 + 80, 0)) || Function_479(&iVar0, &Local_1734 + 72, 0))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_478();
						Function_229(&iLocal_1474);
					}
					else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_477();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_476();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_476();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_441();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_441();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_441();
					Function_229(&iLocal_1474);
				}
			}
			else if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnChar", "Home01_GunOnChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
		}
	}
	return;
}

void Function_476() //Position: 0x20523 / 132387
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_477() //Position: 0x20575 / 132469
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonLassosCow", "Home01_JonLassosCow", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_478() //Position: 0x205C5 / 132549
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_ShootsACow", "Home01_ShootsACow", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_479(int iParam0, int iParam1, bool bParam2) //Position: 0x20611 / 132625
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

void Function_480() //Position: 0x20659 / 132697
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_ArriveBH_v1_AA", "Home01_ArriveBH_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_ArriveBH_v1_AB", "Home01_ArriveBH_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_ArriveBH_v1_AC", "Home01_ArriveBH_v1_AC", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_ArriveBH_v1_AD", "Home01_ArriveBH_v1_AD", 0, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481(var uParam0) //Position: 0x20758 / 132952
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

void Function_482() //Position: 0x2078D / 133005
{
	if (SQUAD_IS_VALID(&Local_1734 + 64))
	{
		switch (iLocal_1321)
		{
			case 0x00000000:
				iLocal_1321++;
				break;
			
			case 0x00000001:
				if (IS_VOLUME_VALID(&iLocal_4 + 1440))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1734 + 8, &iLocal_4 + 1440) || IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1440))
						{
							iLocal_1321++;
						}
					}
				}
				break;
			
			case 0x00000002:
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24);
				SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 30.0f, 0,85f, 2.0f, 2.0f);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1734 + 64, &Local_1734 + 96, 1, 0,25f, 0,25f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 16, (4,5f - 0,5f));
				iLocal_1321++;
				break;
			
			case 0x00000003:
				iLocal_1321++;
				break;
			}
	}
	return;
}

void Function_483() //Position: 0x20890 / 133264
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_926 != 9)
	{
		iVar0 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80));
	}
	else
	{
		iVar0 = ((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1700));
	}
	iVar1 = (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80));
	UI_SET_STRING("Race_Pos", INT_TO_STRING((iVar0 - iVar1)));
	UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(15));
	UI_LABEL_SET_TEXT("RacePosition", "Race_Position_Format");
	UI_REFRESH("RacePosition");
	return;
}

void Function_484(struct<113> Param0) //Position: 0x2097F / 133503
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
						if ((!Function_402(&iVar1, &Global_54076, bVar6) && !Function_392(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_446(&iVar1), &uVar3, 3212836864))
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
						if ((!Function_402(&iVar1, &Global_54076, bVar6) && !Function_392(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_446(&iVar1), &uVar3, 3212836864))
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

void Function_485(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x20B47 / 133959
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				Function_236(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
				SET_ACTOR_MAX_SPEED(&bLocal_931, 4);
				MEMORY_PREFER_RIDING(&bLocal_931, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2880, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				Function_229(&iLocal_1482);
				iLocal_1318++;
				break;
			
			case 0x00000002:
				if (Function_281(&iParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(&iParam0))
					{
						if (SQUAD_GET_SIZE(&iParam0) > 2)
						{
							if (!iLocal_1595)
							{
								fLocal_1420 = Function_486(&iParam0, &Local_1734 + 8);
								if (IS_ACTOR_VALID(&fLocal_1420))
								{
									Local_1562 = Vector(0.0f, 0.0f, 0.0f);
									SET_ACTOR_MAX_SPEED(&bLocal_931, 4);
									bLocal_1314 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &fLocal_1420, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
									TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
									TASK_PRIORITY_SET(&bLocal_931, true);
									iLocal_1595 = 1;
								}
							}
							else if (!Function_479(&fLocal_1420, &iParam0, 0))
							{
								iLocal_1595 = 0;
							}
						}
						else if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
						{
							SET_ACTOR_MAX_SPEED(&bLocal_931, 4);
							bLocal_1314 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &fParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
							TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
							TASK_PRIORITY_SET(&bLocal_931, true);
							iLocal_1595 = 0;
						}
					}
					Function_229(&iParam1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1360))
				{
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1360))
						{
							iLocal_1318++;
						}
					}
				}
				if (Function_281(&iLocal_1482) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(&bLocal_931, &Local_1734 + 32, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_931, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_931, "home01_look_back");
					Function_229(&iLocal_1482);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 2104[3], &Local_1562);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &Local_1562, 2.0f, 2);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000004:
				iLocal_1318++;
				break;
			}
	}
}

int Function_486(var uParam0, int iParam1) //Position: 0x20E01 / 134657
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
					fVar3 = Function_487(&iParam1, &uVar2);
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

var Function_487(int iParam0, int iParam1) //Position: 0x20E86 / 134790
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_393(&iParam0);
			Var0 = Function_393(&iParam0);
			Function_393(&iParam1);
			Var2 = Function_393(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_488(struct<149> Param0) //Position: 0x20F23 / 134947
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
										if (!Function_392(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_392(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_392(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_281(&Param0 + 132) <= &fParam2)
							{
								Function_229(&Param0 + 132);
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

void Function_489(struct<153> Param0) //Position: 0x212AD / 135853
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
									if (!Function_392(&iVar0, &Param0 + 16, fVar7))
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
											DECOR_SET_BOOL(&iVar0, "bRejoinInProgress", 0);
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
									Function_229(&Param0 + 132);
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
								if (!Function_392(&iVar0, &Param0 + 8, fVar6))
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
										DECOR_SET_BOOL(&iVar0, "bIsStraggler", 1);
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
								if (Function_392(&iVar0, &Param0 + 8, fVar5) || Function_392(&iVar0, &Param0 + 16, fVar5))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_392(&iVar0, &Param0 + 8, fVar5))
									{
									}
									else if (Function_392(&iVar0, &Param0 + 16, fVar5))
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
												if (Function_392(&iVar0, &Param0 + 152[bVar3], 7.0f))
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
											else if (Function_392(&iVar0, &Param0 + 152[bVar3], 15.0f))
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

void Function_490(struct<113> Param0) //Position: 0x219C9 / 137673
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
								Function_493(StackVal, Var0, &Param0 + 24);
								Var0 = Function_493(StackVal, Var0, &Param0 + 24);
								Function_491(&Param0 + 64);
								Var2 = Function_491(&Param0 + 64);
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
								Function_493(StackVal, Var0, &Param0 + 24);
								Var0 = Function_493(StackVal, Var0, &Param0 + 24);
								Function_491(&Param0 + 72);
								Var2 = Function_491(&Param0 + 72);
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
								Function_249(&Param0);
								if (!Function_74(StackVal, Function_249(&Param0)))
								{
									uVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(&uVar5))
									{
										SET_BLIP_SCALE(&uVar5, 2,5f);
										SET_BLIP_NAME(&uVar5, "nBLIP_HERD");
										SET_BLIP_FLAG(&uVar5, 4096, 0);
										SET_BLIP_PRIORITY(&uVar5, 1);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
							{
								Function_249(&Param0 + 8);
								if (!Function_74(StackVal, Function_249(&Param0 + 8)))
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
							Function_491(&Param0 + 64);
							Var2 = Function_491(&Param0 + 64);
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

struct<8> Function_491(int iParam0) //Position: 0x21D16 / 138518
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
		UNK_0x44986367(&Var4, Function_492(&uVar1));
		vVar6 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, vVar6, StackVal);
		bVar0++;
	}
	vVar6 = (vVar6.x / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	vVar6.f_4 = 0.0f;
	vVar6.f_8 = (vVar6.z / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	Var2.f_4 = UNK_0x9C40E671(&vVar6);
	return StackVal, Var2;
}

var Function_492(int iParam0) //Position: 0x21D88 / 138632
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_493(struct<2> Param0, int iParam2) //Position: 0x21D94 / 138644
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

void Function_494(struct<125> Param0) //Position: 0x21E34 / 138804
{
	bool bVar0;
	var uVar1;
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
							uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 64, bVar0);
							if (IS_ACTOR_VALID(&uVar1))
							{
								if (Function_392(&uVar1, &Param0 + 16, fVar2))
								{
									SQUAD_LEAVE(&uVar1);
									SQUAD_JOIN(&uVar1, &Param0 + 88);
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 72) - 1))
						{
							uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 72, bVar0);
							if (IS_ACTOR_VALID(&uVar1))
							{
								if (Function_392(&uVar1, &Param0 + 16, fVar2))
								{
									SQUAD_LEAVE(&uVar1);
									SQUAD_JOIN(&uVar1, &Param0 + 88);
									if (DECOR_GET_BOOL(&uVar1, "bIsStraggler"))
									{
										Param0.f_124++;
										DECOR_REMOVE(&uVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
						{
							uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar0);
							if (IS_ACTOR_VALID(&uVar1))
							{
								if (Function_392(&uVar1, &Param0 + 16, fVar2))
								{
									CLEAR_ACTOR_MAX_SPEED(&uVar1);
									TASK_CLEAR(&uVar1);
									if (DECOR_GET_BOOL(&uVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(&uVar1, "bRejoinInProgress");
									}
									uVar3 = GET_BLIP_ON_ACTOR(&uVar1);
									if (IS_BLIP_VALID(&uVar3))
									{
										REMOVE_BLIP(&uVar3);
									}
									SQUAD_LEAVE(&uVar1);
									SQUAD_JOIN(&uVar1, &Param0 + 88);
									if (DECOR_GET_BOOL(&uVar1, "bIsStraggler"))
									{
										Param0.f_124++;
										DECOR_REMOVE(&uVar1, "bIsStraggler");
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

void Function_495(var uParam0, var uParam1, bool bParam2) //Position: 0x22095 / 139413
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (SQUAD_IS_VALID(&uParam1))
		{
			if (IS_VOLUME_VALID(&bParam2))
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (IS_ACTOR_IN_VOLUME(&uVar1, &bParam2))
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

void Function_496() //Position: 0x22107 / 139527
{
	if (!iLocal_1622)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_382(&iLocal_1356);
			}
			else
			{
				iLocal_1316 = 0;
				iLocal_1622 = 0;
			}
		}
	}
	if (!iLocal_1617)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_381();
			}
			else
			{
				iLocal_1335 = 0;
				iLocal_1617 = 0;
			}
		}
	}
	if (!iLocal_1620)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_376();
			}
			else
			{
				iLocal_1337 = 0;
				iLocal_1620 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_495(&Local_1734 + 64, &Local_1734 + 88, &iLocal_4 + 1168);
		Function_494(&Local_1734);
		if (iLocal_1596)
		{
			if (iLocal_1611)
			{
				Function_490(&Local_1734, 1);
				Function_489(&Local_1734, 1);
				Function_488(&Local_1734, 1, 0x41700000);
			}
			else
			{
				Function_508(&Local_1734);
				Function_507(&Local_1734);
				Function_506(&Local_1734, 0x41700000);
			}
			if (Function_281(&iLocal_1454) <= 0,2f)
			{
				Function_505(&Local_1734 + 72, &iLocal_1458, 3.0f, &iLocal_4 + 2872, -20.0f);
				Function_484(&Local_1734);
				Function_229(&iLocal_1454);
			}
			Function_483();
		}
		Function_447();
		Function_445();
		Function_481(&Global_54076);
		Function_504();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_947[7] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46754[0];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 2008[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				iLocal_1316 = 0;
				iLocal_1620 = 0;
				iLocal_1617 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1328 = 0;
				iLocal_1329 = 0;
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1620 = 0;
				iLocal_1617 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1611 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_502();
				if (iLocal_947[7] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 2008[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_1384))
					{
						SET_ACTOR_HEALTH(&bLocal_1384, 50.0f);
						Function_358(&bLocal_1384, &iLocal_4 + 2160[6], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(&bLocal_1382))
					{
						SET_ACTOR_HEALTH(&bLocal_1382, 50.0f);
						Function_358(&bLocal_1382, &iLocal_4 + 2160[5], 1, 1, 1);
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1272, -1.0f);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1384, "Wife", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &bLocal_1382, "Uncle", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[515]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[615]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				Function_466(&(Local_1031[315]), 2);
				Function_466(&(Local_1031[415]), 2);
				Function_466(&(Local_1031[515]), 2);
				Function_466(&(Local_1031[615]), 2);
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[0], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_465();
				Function_501();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 648);
				Function_461(&Local_1734 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2400, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2400, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2400, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (iLocal_947[7] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1734 + 64))
					{
						Function_465();
						Function_501();
						Function_426(&Local_1734 + 64);
						Function_462(&Local_1734 + 64, &iLocal_4 + 648);
						Function_461(&Local_1734 + 64, 2, 1);
					}
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2400;
				GET_OBJECT_POSITION(&iLocal_4 + 2400, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1280, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_500();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_164(Global_46914[1]);
				Function_403("home01_obj09", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2400, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2400, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2400, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
				if (((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 88)) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							DESTROY_OBJECT(&iLocal_1494);
						}
						Function_455(&Local_1734 + 64);
						Function_455(&Local_1734 + 72);
						Function_455(&Local_1734 + 80);
						Function_455(&Local_1734 + 88);
						UI_HIDE("RacePosition");
						Function_253();
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_935);
						iLocal_927 = 106;
					}
				}
			}
			if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
					{
						if (Function_281(&iLocal_939) <= 15.0f)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_499();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				else if (iLocal_1595)
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) > 2)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_498();
									Function_229(&iLocal_939);
								}
							}
						}
					}
				}
			}
			if (!iLocal_1611)
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1096))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1734 + 8, &iLocal_4 + 1096))
						{
							iLocal_1611 = 1;
							SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1734 + 64, &Local_1734 + 96, 1, 0,25f, 0,25f);
							_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 16, (4,5f - 0,5f));
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88);
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_497();
			iLocal_947[8] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 9;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_497() //Position: 0x22E62 / 142946
{
	return;
}

void Function_498() //Position: 0x22E68 / 142952
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler3", "Home01_GetLastStraggler3", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x22EC2 / 143042
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_jackYellsAtHerd", "Home01_jackYellsAtHerd", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x22F18 / 143128
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_TakeLeftUpRoad_v1_AA", "Home01_TakeLeftUpRoad_v1_AA", 3, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_TakeLeftUpRoad_v1_AB", "Home01_TakeLeftUpRoad_v1_AB", 0, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x22FBD / 143293
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_502() //Position: 0x22FE8 / 143336
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 2008[3];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_503();
	return;
}

void Function_503() //Position: 0x2308D / 143501
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2872;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2392, &iLocal_1626, 5, 3.0f, 4,5f, 2.0f, 0);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1272, -1.0f);
		}
	}
	return;
}

void Function_504() //Position: 0x23177 / 143735
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000002:
				Function_471(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000009:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_505(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x231FA / 143866
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				Function_236(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
				MEMORY_PREFER_RIDING(&bLocal_931, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2872, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				Function_229(&iLocal_1482);
				iLocal_1318++;
				break;
			
			case 0x00000002:
				if (Function_281(&iParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(&iParam0))
					{
						if (SQUAD_GET_SIZE(&iParam0) > 2)
						{
							if (!iLocal_1595)
							{
								fLocal_1420 = Function_486(&iParam0, &Local_1734 + 8);
								if (IS_ACTOR_VALID(&fLocal_1420))
								{
									Local_1562 = Vector(0.0f, 0.0f, 0.0f);
									bLocal_1314 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &fLocal_1420, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
									TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
									TASK_PRIORITY_SET(&bLocal_931, true);
									iLocal_1595 = 1;
								}
							}
							else if (!Function_479(&fLocal_1420, &iParam0, 0))
							{
								iLocal_1595 = 0;
							}
						}
						else if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
						{
							bLocal_1314 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &fParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
							TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
							TASK_PRIORITY_SET(&bLocal_931, true);
							iLocal_1595 = 0;
						}
					}
					Function_229(&iParam1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1352))
				{
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1352))
						{
							iLocal_1318++;
						}
					}
				}
				if (Function_281(&iLocal_1482) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(&bLocal_931, &Local_1734 + 32, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_931, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_931, "home01_look_back");
					Function_229(&iLocal_1482);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 2056[3], &Local_1562);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &Local_1562, 2.0f, 4);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000004:
				iLocal_1318++;
				break;
			}
	}
}

void Function_506(struct<149> Param0) //Position: 0x2349C / 144540
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
										if (!Function_392(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_392(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_392(&iVar1, &Param0 + 16, fVar4))
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
								if (Function_281(&Param0 + 132) <= &fParam1)
								{
									if (!Function_392(&iVar1, &Param0 + 8, fVar4))
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
												DECOR_SET_BOOL(&iVar1, "bIsStraggler", 1);
											}
										}
									}
									if (!DECOR_GET_BOOL(&iVar1, "bRejoinInProgress"))
									{
										DECOR_SET_BOOL(&iVar1, "bRejoinInProgress", 1);
									}
									Function_229(&Param0 + 132);
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

void Function_507(struct<153> Param0) //Position: 0x23954 / 145748
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
									if (!Function_392(&iVar0, &Param0 + 16, fVar8))
									{
										if (Function_392(&iVar0, &Param0 + 16, fVar6))
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
											DECOR_SET_BOOL(&iVar0, "bRejoinInProgress", 0);
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
									Function_229(&Param0 + 132);
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
								if (!Function_392(&iVar0, &Param0 + 8, fVar7))
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
											DECOR_SET_BOOL(&iVar0, "bIsStraggler", 1);
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
								if (Function_392(&iVar0, &Param0 + 8, fVar6) || Function_392(&iVar0, &Param0 + 16, fVar6))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_392(&iVar0, &Param0 + 8, fVar6))
									{
									}
									else if (Function_392(&iVar0, &Param0 + 16, fVar6))
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
												if (Function_392(&iVar0, &Param0 + 152[bVar3], 7.0f))
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
											else if (Function_392(&iVar0, &Param0 + 152[bVar3], 15.0f))
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

void Function_508(struct<113> Param0) //Position: 0x240CB / 147659
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
								SQUAD_COMPUTE_CENTROID(&Param0 + 88, &Var0);
								Function_491(&Param0 + 88);
								Var2 = Function_491(&Param0 + 88);
							}
							else if (SQUAD_GET_SIZE(&Param0 + 80) > 1)
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
								SQUAD_COMPUTE_CENTROID(&Param0 + 80, &Var0);
								Function_493(StackVal, Var0, &Param0 + 24);
								Var0 = Function_493(StackVal, Var0, &Param0 + 24);
								Function_491(&Param0 + 80);
								Var2 = Function_491(&Param0 + 80);
							}
							else if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
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
								SQUAD_COMPUTE_CENTROID(&Param0 + 72, &Var0);
								Function_493(StackVal, Var0, &Param0 + 24);
								Var0 = Function_493(StackVal, Var0, &Param0 + 24);
								Function_491(&Param0 + 72);
								Var2 = Function_491(&Param0 + 72);
							}
							else
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
							Function_491(&Param0 + 64);
							Var2 = Function_491(&Param0 + 64);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
							{
								Function_249(&Param0);
								if (!Function_74(StackVal, Function_249(&Param0)))
								{
									uVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(&uVar5))
									{
										SET_BLIP_SCALE(&uVar5, 2,5f);
										SET_BLIP_NAME(&uVar5, "nBLIP_HERD");
										SET_BLIP_FLAG(&uVar5, 4096, 0);
										SET_BLIP_PRIORITY(&uVar5, 1);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
							{
								Function_249(&Param0 + 8);
								if (!Function_74(StackVal, Function_249(&Param0 + 8)))
								{
									bVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(&bVar4))
									{
										SET_BLIP_SCALE(&bVar4, 1.0f);
										SET_BLIP_PRIORITY(&bVar4, 2);
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

void Function_509() //Position: 0x243F1 / 148465
{
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		if (iLocal_1596)
		{
			Function_508(&Local_1734);
			Function_507(&Local_1734);
			Function_506(&Local_1734, 0x41700000);
			if (iLocal_927 > 8)
			{
				Function_519(&Local_1734 + 72, &iLocal_1458, 3.0f, &iLocal_4 + 2872, -20.0f);
				if (Function_281(&iLocal_935) <= (3.0f * 8.0f))
				{
					if (Function_281(&iLocal_1454) <= 0,2f)
					{
						Function_484(&Local_1734);
						Function_229(&iLocal_1454);
					}
				}
			}
			Function_483();
		}
		Function_481(&Global_54076);
		if (iLocal_927 > 7)
		{
			if (((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 88)) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 64) != bLocal_1330 || ((SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 88) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0))
				{
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 106;
				}
			}
		}
		Function_518();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(34);
			if (iLocal_947[6] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46754[0];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1960[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_516();
				if (iLocal_947[6] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1960[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1264, -1.0f);
				}
				CLEAR_AMBIENT_MOVE_RESTRICTIONS();
				Function_193(32768);
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[515]));
				Function_418(&(Local_1031[615]));
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				Function_466(&(Local_1031[115]), 2);
				Function_466(&(Local_1031[215]), 2);
				Function_466(&(Local_1031[315]), 2);
				Function_466(&(Local_1031[415]), 2);
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[1], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_515();
				Function_514();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 560);
				Function_461(&Local_1734 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					Function_236(12, 0, 1);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
					MEMORY_PREFER_RIDING(&bLocal_931, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2872, -20.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (SQUAD_IS_VALID(&uLocal_1688))
				{
					SQUAD_GOALS_CLEAR(&uLocal_1688);
					if (IS_ACTOR_VALID(&(uLocal_1390[0])))
					{
						DECOR_SET_BOOL(&(uLocal_1390[0]), "bNoInjuryEjection", 0);
					}
				}
				if (iLocal_947[6] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1734 + 64))
					{
						Function_515();
						Function_514();
						Function_426(&Local_1734 + 64);
						Function_462(&Local_1734 + 64, &iLocal_4 + 560);
						Function_461(&Local_1734 + 64, 2, 1);
					}
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				*(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2400;
				GET_OBJECT_POSITION(&iLocal_4 + 2400, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1280, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_513();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) <= 1 || SQUAD_GET_SIZE(&Local_1734 + 80) <= 1)
				{
					UI_SHOW("RacePosition");
					Function_403("home01_obj08", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
			}
			if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) > 2)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
					{
						if (Function_281(&iLocal_939) <= 15.0f)
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
							}
							Function_512();
							Function_229(&iLocal_939);
						}
					}
				}
			}
			if (Function_281(&iLocal_935) <= (2,5f * 8.0f))
			{
				if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 64) <= bLocal_1330)
					{
						if (SQUAD_GET_SIZE(&Local_1734 + 80) == 0)
						{
							if (SQUAD_GET_SIZE(&Local_1734 + 72) <= 0 && SQUAD_GET_SIZE(&Local_1734 + 72) > 3)
							{
								Function_253();
								Function_229(&iLocal_935);
								iLocal_927 = 9;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) == 1)
				{
					Function_403("home01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_403("home01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
			}
			if (!bLocal_1599[0])
			{
				if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0) && SQUAD_GET_SIZE(&Local_1734 + 72) >= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_931))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 24.0f))
							{
								bLocal_1599[0] = 1;
								Function_511();
							}
						}
					}
				}
			}
			if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 64) == bLocal_1330)
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 8;
					}
				}
			}
			if (Function_281(&iLocal_939) <= 45.0f)
			{
				Function_253();
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				iLocal_927 = 8;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64);
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_510();
			iLocal_947[7] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 8;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_510() //Position: 0x25150 / 151888
{
	return;
}

void Function_511() //Position: 0x25156 / 151894
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler2", "Home01_GetLastStraggler2", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x251B0 / 151984
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler4", "Home01_GetLastStraggler4", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x2520A / 152074
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_RoundUpStragglersF", "Home01_RoundUpStragglersF", 3, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x25266 / 152166
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_515() //Position: 0x25291 / 152209
{
	Function_460(&Local_1734 + 64);
	SQUAD_GOALS_CLEAR(&Local_1734 + 64);
	*(&Local_1734 + 96) = UNK_0x48588CCB(&Local_1734 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1734 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1734 + 64, &Local_1734 + 96);
	}
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1734 + 64, &Local_1734 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1734 + 64, &Local_1734 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1734 + 64, &Local_1734 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1734 + 64, &Local_1734 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &bLocal_931, 5.0f, 1.0f, 925353388, 925353388, 0);
		if (IS_VOLUME_VALID(&Local_1734 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_931);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1734 + 56);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_931, &Local_1734 + 56);
		}
	}
	DECOR_SET_BOOL(&Global_54076, "herding", 1);
	iLocal_1596 = 1;
	return;
}

void Function_516() //Position: 0x253AF / 152495
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1960[3];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_517();
	return;
}

void Function_517() //Position: 0x25454 / 152660
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2872;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2384, &iLocal_1626, 5, 6.0f, 7,5f, 2.0f, 1);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, false)))
			{
				Function_358(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, false), &iLocal_4 + 2272[0], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, true)))
			{
				Function_358(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, true), &iLocal_4 + 2272[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, 2)))
			{
				Function_358(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, 2), &iLocal_4 + 2272[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, 3)))
			{
				Function_358(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, 3), &iLocal_4 + 2272[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, 4)))
			{
				Function_358(SQUAD_GET_ACTOR_BY_INDEX(&Local_1734 + 64, 4), &iLocal_4 + 2272[4], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1264, -1.0f);
		}
	}
	return;
}

void Function_518() //Position: 0x2560B / 153099
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000002:
				Function_471(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000003:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_519(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x2568E / 153230
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		if (SQUAD_IS_VALID(&iParam0))
		{
			switch (iLocal_1318)
			{
				case 0x00000000:
					Function_229(&iLocal_1482);
					iLocal_1318++;
					break;
				
				case 0x00000001:
					if (Function_281(&iParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(&iParam0))
						{
							if (SQUAD_GET_SIZE(&iParam0) > 2)
							{
								if (!iLocal_1595)
								{
									fLocal_1420 = Function_486(&iParam0, &Local_1734 + 8);
									if (IS_ACTOR_VALID(&fLocal_1420))
									{
										Local_1562 = Vector(0.0f, 0.0f, 0.0f);
										bLocal_1314 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &fLocal_1420, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
										TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
										TASK_PRIORITY_SET(&bLocal_931, true);
										iLocal_1595 = 1;
									}
								}
								else if (!Function_479(&fLocal_1420, &iParam0, 0))
								{
									iLocal_1595 = 0;
								}
							}
							else if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
							{
								bLocal_1314 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &fParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
								TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
								TASK_PRIORITY_SET(&bLocal_931, true);
								iLocal_1595 = 0;
							}
						}
						Function_229(&iParam1);
					}
					if (Function_281(&iLocal_1482) <= 20.0f)
					{
						AI_GOAL_LOOK_AT_COORD_NEW(&bLocal_931, &Local_1734 + 32, 4.0f);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_931, "home01_look_back", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_931, "home01_look_back");
						Function_229(&iLocal_1482);
					}
					break;
				
				case 0x00000003:
					iLocal_1318++;
					break;
			}
		}
	}
}

void Function_520() //Position: 0x2583B / 153659
{
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		if (iLocal_927 < 10)
		{
			if (iLocal_1596)
			{
				Function_508(&Local_1734);
				Function_507(&Local_1734);
				Function_506(&Local_1734, 0x41700000);
				if (Function_281(&iLocal_1454) <= 0,2f)
				{
					Function_484(&Local_1734);
					Function_229(&iLocal_1454);
				}
				Function_483();
			}
		}
		Function_481(&Global_54076);
		Function_554();
		Function_553();
		Function_546();
		Function_545();
		Function_542(1, 0);
		Function_541();
		Function_540();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(52);
			if (iLocal_947[5] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46754[1];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1912[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING_SUSPENSE", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1325 = 0;
				iLocal_1326 = 0;
				iLocal_1327 = 0;
				iLocal_1334 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_537();
				if (iLocal_947[5] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1912[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
					Function_366(32768);
					if (IS_VOLUME_VALID(&iLocal_4 + 1448))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1448);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1448);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1448, 15);
					}
				}
				if ((SQUAD_IS_VALID(&Local_1734 + 88) && SQUAD_IS_VALID(&Local_1734 + 80)) && SQUAD_IS_VALID(&Local_1734 + 72))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
					Function_427(&Local_1734 + 80, &Local_1734 + 64);
					Function_427(&Local_1734 + 72, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1256, -1.0f);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_418(&(Local_1031[115]));
				Function_418(&(Local_1031[215]));
				Function_418(&(Local_1031[315]));
				Function_418(&(Local_1031[415]));
				Function_418(&(Local_1031[515]));
				Function_418(&(Local_1031[615]));
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[1], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					if (Function_408(&bLocal_931, 1, 0x41700000) && Function_536(&Local_1734 + 64, 1))
					{
						if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
						{
							Function_229(&iLocal_935);
							iLocal_927 = 104;
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
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_465();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 560);
				Function_461(&Local_1734 + 64, 2, 1);
				Function_535(&bLocal_1696, 5.0f, 1.0f);
				Function_535(&bLocal_1698, 5.0f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&iLocal_935) <= 5.0f)
				{
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					if (!IS_OBJECT_VALID(&uLocal_1702))
					{
						if (IS_OBJECT_VALID(&Local_1734 + 8))
						{
							uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
							if (IS_OBJECT_VALID(&uLocal_1702))
							{
								SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						Function_236(12, 0, 1);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
						CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
						SET_ACTOR_MAX_SPEED(&bLocal_931, 4);
						MEMORY_PREFER_RIDING(&bLocal_931, true);
						MEMORY_ALLOW_SHOOTING(&bLocal_931, false);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, 2);
						Local_1562 = Vector(0.0f, 0.0f, 0.0f);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
					if (SQUAD_IS_VALID(&uLocal_1688))
					{
						SQUAD_GOALS_CLEAR(&uLocal_1688);
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							DECOR_SET_BOOL(&(uLocal_1390[0]), "bNoInjuryEjection", 1);
						}
					}
					if (SQUAD_IS_VALID(&bLocal_1692))
					{
						SQUAD_GOALS_CLEAR(&bLocal_1692);
					}
					if (SQUAD_IS_VALID(&bLocal_1694))
					{
						SQUAD_GOALS_CLEAR(&bLocal_1694);
					}
					if (iLocal_947[5] == 1)
					{
						if (SQUAD_IS_VALID(&Local_1734 + 64))
						{
							Function_465();
							Function_426(&Local_1734 + 64);
							Function_462(&Local_1734 + 64, &iLocal_4 + 560);
							Function_461(&Local_1734 + 64, 2, 1);
							Function_535(&bLocal_1696, 5.0f, 1.0f);
							Function_535(&bLocal_1698, 5.0f, 1.0f);
						}
					}
					iLocal_1595 = 0;
					if (SQUAD_IS_VALID(&Local_1734 + 72))
					{
						SQUAD_GOALS_CLEAR(&Local_1734 + 72);
						Function_460(&Local_1734 + 72);
					}
					*(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
					if (SQUAD_IS_VALID(&Local_1734 + 80))
					{
						SQUAD_GOALS_CLEAR(&Local_1734 + 80);
						Function_460(&Local_1734 + 80);
					}
					*(&Local_1734 + 16) = &iLocal_4 + 2400;
					GET_OBJECT_POSITION(&iLocal_4 + 2400, &uLocal_1568);
					if (SQUAD_IS_VALID(&Local_1734 + 88))
					{
						SQUAD_GOALS_CLEAR(&Local_1734 + 88);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
						TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1280, -1.0f);
						TASK_SEQUENCE_CLOSE();
						SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
						TASK_SEQUENCE_PERFORM(false, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					}
					Function_534();
					Function_229(&iLocal_935);
					iLocal_927 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 5.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, 2);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_931);
					Local_1562 = Vector(0.0f, 0.0f, 0.0f);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_FOLLOW_OBJECT(0, &Local_1734 + 8, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uLocal_1390[0]), 0.0f);
				}
				if (SQUAD_IS_VALID(&bLocal_1696))
				{
					iLocal_976 = 1;
					SQUAD_GOALS_CLEAR(&bLocal_1696);
					SQUAD_SET_FACTION(&bLocal_1696, 19);
					Function_533(&bLocal_1696, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_532(&bLocal_1696, 3);
					Function_531(&bLocal_1696, 1);
					Function_530(&bLocal_1696, 1);
					Function_528(&bLocal_1696, &Global_54076, 1);
					Function_528(&bLocal_1696, &bLocal_931, 1);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1696, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1696) | 2048);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2416, 9.0f, 4);
					TASK_KILL_CHAR(false, &Global_54076);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1696, false, 1, 2);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_KILL_CHAR(false, &bLocal_931);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1696, true, 1, 1);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1696, 2, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
				}
				if (SQUAD_IS_VALID(&bLocal_1698))
				{
					iLocal_976 = 1;
					SQUAD_GOALS_CLEAR(&bLocal_1698);
					SQUAD_SET_FACTION(&bLocal_1698, 19);
					Function_533(&bLocal_1698, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_532(&bLocal_1698, 3);
					Function_531(&bLocal_1698, 1);
					Function_530(&bLocal_1698, 1);
					Function_528(&bLocal_1698, &Global_54076, 1);
					Function_528(&bLocal_1698, &bLocal_931, 1);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1698, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1698) | 2048);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2416, 9.0f, 4);
					TASK_KILL_CHAR(false, &Global_54076);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1698, false, 1, 2);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_KILL_CHAR(false, &bLocal_931);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1698, true, 1, 1);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1698, 2, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
				}
				Function_527();
				Function_229(&iLocal_935);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 5.0f)
			{
				if (IS_ACTOR_VALID(&(uLocal_1428[0])))
				{
					SAY_SINGLE_LINE_STRING(&(uLocal_1428[0]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				else if (IS_ACTOR_VALID(&(uLocal_1428[1])))
				{
					SAY_SINGLE_LINE_STRING(&(uLocal_1428[1]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				else if (IS_ACTOR_VALID(&(uLocal_1428[2])))
				{
					SAY_SINGLE_LINE_STRING(&(uLocal_1428[2]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				else if (IS_ACTOR_VALID(&(uLocal_1436[1])))
				{
					SAY_SINGLE_LINE_STRING(&(uLocal_1436[1]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_403("home01_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
			if (Function_281(&iLocal_939) <= 6.0f)
			{
				if (Function_525(&bLocal_1696, &Global_54076, 36.0f, 1))
				{
					if (IS_ACTOR_VALID(&(uLocal_1428[1])))
					{
						if (!IS_ACTOR_HOGTIED(&(uLocal_1428[1])))
						{
							SAY_SINGLE_LINE_STRING(&(uLocal_1428[1]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
				}
				else if (Function_525(&bLocal_1698, &Global_54076, 36.0f, 1))
				{
					if (IS_ACTOR_VALID(&(uLocal_1436[1])))
					{
						if (!IS_ACTOR_HOGTIED(&(uLocal_1436[1])))
						{
							SAY_SINGLE_LINE_STRING(&(uLocal_1436[1]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
					if (IS_ACTOR_VALID(&(uLocal_1436[2])))
					{
						if (!IS_ACTOR_HOGTIED(&(uLocal_1436[2])))
						{
							SAY_SINGLE_LINE_STRING(&(uLocal_1436[2]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
					if (IS_ACTOR_VALID(&(uLocal_1436[4])))
					{
						if (!IS_ACTOR_HOGTIED(&(uLocal_1436[4])))
						{
							SAY_SINGLE_LINE_STRING(&(uLocal_1436[4]), "Home01_RustlersYellJon", true, true, 2, 0, true, false);
						}
					}
				}
				else if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
				{
					Function_524();
				}
				Function_229(&iLocal_939);
			}
			if (SQUAD_IS_VALID(&bLocal_1696) && SQUAD_IS_VALID(&bLocal_1698))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1696) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1698) >= 0)
				{
					iLocal_976 = 0;
					Function_419(&(Local_1031[215]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
					Function_419(&(Local_1031[315]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
					Function_419(&(Local_1031[415]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
					Function_419(&(Local_1031[515]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
					Function_454();
					if (IS_BLIP_VALID(&uLocal_1486))
					{
						REMOVE_BLIP(&uLocal_1486);
					}
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
						DESTROY_OBJECT(&iLocal_1494);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 2.0f)
			{
				Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				Function_236(12, 1, 1);
				Function_523();
				Function_229(&iLocal_935);
				iLocal_927 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				Function_403("Son_return", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_395(&iLocal_943, 245.0f, 395.0f, &bLocal_931, "Son_return", "Son_abandoned", &bLocal_974, 0, 0, 0, 325, 1);
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_389(&Global_54076, &bLocal_931, (6.0f * 3.0f)))
				{
					Function_236(12, 0, 1);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_522();
				Function_253();
				Function_229(&iLocal_935);
				iLocal_927 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 5.0f)
			{
				Function_253();
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			break;
		
		case 0x0000006A:
			if (((SQUAD_IS_VALID(&Local_1734 + 88) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80)) && SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88));
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_521();
			iLocal_947[6] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 7;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_521() //Position: 0x268CF / 157903
{
	return;
}

void Function_522() //Position: 0x268D5 / 157909
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_MeetsBakJak_v1_AA", "Home01_MeetsBakJak_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_MeetsBakJak_v1_AB", "Home01_MeetsBakJak_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_MeetsBakJak_v1_AC", "Home01_MeetsBakJak_v1_AC", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x269AD / 158125
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_AllEnemsDefeated", "Home01_AllEnemsDefeated", 3, 3, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x26A05 / 158213
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonCriesTrror", "Home01_JonCriesTrror", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_525(bool bParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x26A57 / 158295
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
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
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_526(&uVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_526(int iParam0, int iParam1) //Position: 0x26AFC / 158460
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_527() //Position: 0x26B4E / 158542
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_RustlersAttk", "Home01_RustlersAttk", 0, 3, 1, 0, 1);
		Function_405(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528(bool bParam0, bool bParam1, bool bParam2) //Position: 0x26B9D / 158621
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
			Function_529(&uVar1, &bParam1, &bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_529(var uParam0, bool bParam1, bool bParam2) //Position: 0x26BE9 / 158697
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &bParam1);
			Function_394(&bParam1);
			uVar0 = Function_394(&bParam1);
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

void Function_530(bool bParam0, int iParam1) //Position: 0x26CFA / 158970
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ACTOR_HOLSTER_WEAPON(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_531(bool bParam0, bool bParam1) //Position: 0x26D49 / 159049
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
				MEMORY_PREFER_RIDING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_532(bool bParam0, bool bParam1) //Position: 0x26D98 / 159128
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				uVar2 = GET_BLIP_ON_ACTOR(&iVar1);
				if (IS_BLIP_VALID(&uVar2))
				{
					SET_BLIP_PRIORITY(&uVar2, bParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_533(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x26DF4 / 159220
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

void Function_534() //Position: 0x26F04 / 159492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_SpotsRustlersUpHed", "Home01_SpotsRustlersUpHed", 0, 3, 1, 0, 1);
		Function_405(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535(var uParam0, float fParam1, float fParam2) //Position: 0x26F5F / 159583
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
				SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1734 + 64, &Local_1734 + 96, &uVar1, fParam1, fParam2, 925353388, 925353388, 0);
			}
			bVar0++;
		}
	}
	return;
}

int Function_536(int iParam0, bool bParam1) //Position: 0x26FC2 / 159682
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (IS_ACTOR_ALIVE(&bVar1))
			{
				if (!Function_408(&bVar1, bParam1, 0x41700000))
				{
					return 0;
				}
			}
			return 0;
		}
		return 0;
		bVar0++;
	}
	return 1;
}

void Function_537() //Position: 0x27028 / 159784
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1912[3];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_539();
	cLocal_1644[0] = 976;
	cLocal_1644[1] = 977;
	cLocal_1644[2] = 980;
	cLocal_1504[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2232);
	cLocal_1504[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2232);
	cLocal_1504[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2232);
	if (!SQUAD_IS_VALID(&bLocal_1692))
	{
		bLocal_1692 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE03"));
		if (SQUAD_IS_VALID(&bLocal_1692))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1692);
			Function_352(&bLocal_1692, &uLocal_1398, &cLocal_1504, &cLocal_1644, "SHORSE03", 3);
			Function_351(&bLocal_1692, 0);
			Function_350(&bLocal_1692, 3);
		}
	}
	cLocal_1652[0] = 981;
	cLocal_1652[1] = 980;
	cLocal_1652[2] = 976;
	cLocal_1652[3] = 981;
	cLocal_1652[4] = 977;
	cLocal_1652[5] = 976;
	cLocal_1512[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2240);
	cLocal_1512[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2240);
	cLocal_1512[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2240);
	cLocal_1512[3] = GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_4 + 2240);
	cLocal_1512[4] = GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_4 + 2240);
	cLocal_1512[5] = GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2240);
	if (!SQUAD_IS_VALID(&bLocal_1694))
	{
		bLocal_1694 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE04"));
		if (SQUAD_IS_VALID(&bLocal_1694))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1694);
			Function_352(&bLocal_1694, &uLocal_1406, &cLocal_1512, &cLocal_1652, "SHORSE04", 6);
			Function_351(&bLocal_1694, 0);
			Function_350(&bLocal_1694, 3);
		}
	}
	cLocal_1666[0] = 477;
	cLocal_1666[1] = 478;
	cLocal_1666[2] = 479;
	cLocal_1528[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2248);
	cLocal_1528[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2248);
	cLocal_1528[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2248);
	if (!SQUAD_IS_VALID(&bLocal_1696))
	{
		bLocal_1696 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "nSOUTLAW01"));
		if (SQUAD_IS_VALID(&bLocal_1696))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1696);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1696, false, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_352(&bLocal_1696, &uLocal_1428, &cLocal_1528, &cLocal_1666, "nSOUTLAW01", 3);
			Function_351(&bLocal_1696, 0);
			SQUAD_SET_FACTION(&bLocal_1696, 19);
			Function_531(&bLocal_1696, 1);
			Function_538(&bLocal_1696, &bLocal_1692);
		}
	}
	cLocal_1674[0] = 480;
	cLocal_1674[1] = 481;
	cLocal_1674[2] = 482;
	cLocal_1674[3] = 483;
	cLocal_1674[4] = 484;
	cLocal_1674[5] = 485;
	cLocal_1536[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2256);
	cLocal_1536[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2256);
	cLocal_1536[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2256);
	cLocal_1536[3] = GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_4 + 2256);
	cLocal_1536[4] = GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_4 + 2256);
	cLocal_1536[5] = GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2256);
	if (!SQUAD_IS_VALID(&bLocal_1698))
	{
		bLocal_1698 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "nSOUTLAW02"));
		if (SQUAD_IS_VALID(&bLocal_1698))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1698);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1698, false, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_352(&bLocal_1698, &uLocal_1436, &cLocal_1536, &cLocal_1674, "nSOUTLAW02", 6);
			Function_351(&bLocal_1698, 0);
			SQUAD_SET_FACTION(&bLocal_1698, 19);
			Function_531(&bLocal_1698, 1);
			Function_538(&bLocal_1698, &bLocal_1694);
		}
	}
	return;
}

void Function_538(var uParam0, bool bParam1) //Position: 0x2748D / 160909
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

void Function_539() //Position: 0x27504 / 161028
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2872;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2376, &iLocal_1626, 5, 3.0f, 4,5f, 1,5f, 0);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1256, -1.0f);
		}
	}
	return;
}

void Function_540() //Position: 0x275F2 / 161266
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 10)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_CHASE", 0, 4294967295, 4294967295);
					iLocal_1334++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_927 > 13)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000003:
				break;
			
			case 0x00000004:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_541() //Position: 0x27695 / 161429
{
	if (IS_ACTOR_VALID(&(uLocal_1390[0])))
	{
		if (!IS_ACTOR_VALID(&bLocal_933) || !IS_ACTOR_ALIVE(&bLocal_933))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&(uLocal_1390[0])))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&(uLocal_1390[0]), 0);
			}
		}
	}
	return;
}

void Function_542(bool bParam0, bool bParam1) //Position: 0x276D4 / 161492
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_226(&bLocal_933);
			if (GET_MOUNT(&Global_54076) != &bLocal_933)
			{
				if (GET_MOUNT(&Global_54076) == &uLocal_1390[0])
				{
					iLocal_1621 = 1;
					TASK_CLEAR(&(uLocal_1390[0]));
					iLocal_1452 = &bLocal_933;
					bLocal_933 = &uLocal_1390[0];
					uLocal_1390[0] = &iLocal_1452;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_933);
					Function_543(&bLocal_933, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_933, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(&bLocal_933, 0);
					SET_ACTORS_HORSE(&bLocal_931, &(uLocal_1390[0]));
					SET_MOST_RECENT_MOUNT(&bLocal_931, &(uLocal_1390[0]));
					SET_ALLOW_RIDE_BY_AI(&(uLocal_1390[0]), 1);
					GIVE_OBJECT_TO_LAYOUT(&(uLocal_1390[0]), &iLocal_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(&bLocal_933, GET_AMBIENT_LAYOUT());
					bLocal_933 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &bLocal_933);
					Function_543(&bLocal_933, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_933, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_933, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		if (bParam1)
		{
		}
	}
	return;
}

void Function_543(int iParam0, int iParam1) //Position: 0x277F8 / 161784
{
	Function_544(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_544(float fParam0) //Position: 0x2780D / 161805
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

void Function_545() //Position: 0x279DC / 162268
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 7)
				{
					if (IS_ACTOR_SHOOTING(&Global_54076))
					{
						MEMORY_ALLOW_SHOOTING(&bLocal_931, true);
						iLocal_1318++;
					}
				}
				break;
			
			case 0x00000002:
				iLocal_1318++;
				break;
			}
	}
	return;
}

void Function_546() //Position: 0x27A40 / 162368
{
	if (IS_ACTOR_VALID(&(uLocal_1436[4])))
	{
		switch (iLocal_1327)
		{
			case 0x00000000:
				iLocal_1327++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 6)
				{
					GIVE_WEAPON_TO_ACTOR(&(uLocal_1436[4]), 21, false, 1, 1);
					iLocal_1327++;
				}
				break;
			
			case 0x00000002:
				if (!Function_549(&(uLocal_1436[2]), 1, 1, 1, 1, 0, 0, 0, 0))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1589 = Vector(0.0f, 0.0f, -3.0f);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &iLocal_4 + 2416, 7.0f, 4);
						TASK_FOLLOW_OBJECT(0, &Local_1734 + 8, &uLocal_1589, 0, 0, 0, 0, 0, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(uLocal_1436[4]), bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&(uLocal_1436[4]), true);
						iLocal_1327++;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_392(&(uLocal_1436[4]), &Local_1734 + 8, 10.0f))
				{
					iLocal_1327++;
				}
				break;
			
			case 0x00000004:
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					bLocal_1426 = Function_547(&Local_1734 + 64, &(uLocal_1436[4]), 0, 0);
					if (IS_ACTOR_VALID(&bLocal_1426))
					{
						if (!&bLocal_1426 != &iLocal_1422 && !&bLocal_1426 != &bLocal_1424)
						{
							iLocal_1327++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(&bLocal_1426))
				{
					DECOR_SET_BOOL(&bLocal_1426, "AllowLassoHorseMinigame", 0);
					Function_529(&(uLocal_1436[4]), &bLocal_1426, 1);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_USE_LASSO(0, &bLocal_1426, 1f, 5f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uLocal_1436[4]), bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&(uLocal_1436[4]), true);
					iLocal_1327++;
				}
				else
				{
					iLocal_1327 = (iLocal_1327 - 1);
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_VALID(&bLocal_1426))
				{
					if (&bLocal_1426 == GET_LASSO_TARGET(&(uLocal_1436[4])))
					{
						iLocal_1327++;
					}
				}
				else
				{
					iLocal_1327 = 4;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(&bLocal_1426))
				{
					iLocal_1327++;
				}
				else
				{
					iLocal_1327 = 4;
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(&bLocal_1426))
				{
					uLocal_1488 = GET_BLIP_ON_ACTOR(&bLocal_1426);
					if (!IS_BLIP_VALID(&iLocal_1492))
					{
						iLocal_1492 = ADD_BLIP_FOR_ACTOR(&bLocal_1426, 424, 0, 2, 0);
						if (IS_BLIP_VALID(&iLocal_1492))
						{
							SET_BLIP_SCALE(&iLocal_1492, 0,6f);
						}
					}
					SQUAD_LEAVE(&bLocal_1426);
					SQUAD_JOIN(&bLocal_1426, &Local_1734 + 72);
					TASK_CLEAR(&bLocal_1426);
					iLocal_1327++;
				}
				else
				{
					iLocal_1327 = 4;
				}
				break;
			
			case 0x00000009:
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2440, 7.0f, 4);
				TASK_KILL_CHAR(false, &Global_54076);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uLocal_1436[4]), bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&(uLocal_1436[4]), true);
				iLocal_1327++;
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(&(uLocal_1436[4]), 61) == 0)
				{
					if (IS_ACTOR_VALID(&bLocal_1426))
					{
						RELEASE_ACTOR(&bLocal_1426);
					}
					iLocal_1327 = 2;
				}
				break;
			
			case 0x0000000B:
				iLocal_1327++;
				break;
			}
	}
	return;
}

var Function_547(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x27D84 / 163204
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
			fVar3 = Function_548(&uVar4, &uParam1);
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

var Function_548(var uParam0, bool bParam1) //Position: 0x27E4F / 163407
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_549(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x27F44 / 163652
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_552(&bVar0, 1);
	}
	if (&bParam2)
	{
		Function_552(&bVar0, 2);
	}
	if (&bParam3)
	{
		Function_552(&bVar0, 4);
	}
	if (&bParam4)
	{
		Function_552(&bVar0, 8);
	}
	if (&bParam5)
	{
		Function_552(&bVar0, 1024);
	}
	if (&bParam7)
	{
		Function_552(&bVar0, 16);
	}
	if (&bParam8)
	{
		Function_552(&bVar0, 32);
	}
	if (&bParam6)
	{
		Function_552(&bVar0, 1048576);
	}
	return Function_550(&uParam0, bVar0);
}

int Function_550(int iParam0, int iParam1) //Position: 0x27FBB / 163771
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_551(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_551(&iParam1, 64))
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

bool Function_551(var uParam0, int iParam1) //Position: 0x280AC / 164012
{
	return (uParam0 && iParam1) == 0;
}

void Function_552(bool bParam0, bool bParam1) //Position: 0x280B9 / 164025
{
	Function_77(&bParam0, bParam1);
	return;
}

void Function_553() //Position: 0x280C7 / 164039
{
	if (IS_ACTOR_VALID(&(uLocal_1436[2])))
	{
		switch (iLocal_1326)
		{
			case 0x00000000:
				iLocal_1326++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 6)
				{
					GIVE_WEAPON_TO_ACTOR(&(uLocal_1436[2]), 21, false, 1, 1);
					iLocal_1326++;
				}
				break;
			
			case 0x00000002:
				if (!Function_549(&(uLocal_1436[1]), 1, 1, 1, 1, 0, 0, 0, 0))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1586 = Vector(3.0f, 0.0f, 0.0f);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &iLocal_4 + 2416, 7.0f, 4);
						TASK_FOLLOW_OBJECT(0, &Local_1734 + 8, &uLocal_1586, 0, 0, 0, 0, 0, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(uLocal_1436[2]), bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&(uLocal_1436[2]), true);
						iLocal_1326++;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_392(&(uLocal_1436[2]), &Local_1734 + 8, 10.0f))
				{
					iLocal_1326++;
				}
				break;
			
			case 0x00000004:
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					bLocal_1424 = Function_547(&Local_1734 + 64, &(uLocal_1436[2]), 0, 0);
					if (IS_ACTOR_VALID(&bLocal_1424))
					{
						if (!&bLocal_1424 != &iLocal_1422 && !&bLocal_1424 != &bLocal_1426)
						{
							iLocal_1326++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(&bLocal_1424))
				{
					DECOR_SET_BOOL(&bLocal_1424, "AllowLassoHorseMinigame", 0);
					Function_529(&(uLocal_1436[2]), &bLocal_1424, 1);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_USE_LASSO(0, &bLocal_1424, 1f, 5f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uLocal_1436[2]), bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&(uLocal_1436[2]), true);
					iLocal_1326++;
				}
				else
				{
					iLocal_1326 = (iLocal_1326 - 1);
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_VALID(&bLocal_1424))
				{
					if (&bLocal_1424 == GET_LASSO_TARGET(&(uLocal_1436[2])))
					{
						iLocal_1326++;
					}
				}
				else
				{
					iLocal_1326 = 4;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(&bLocal_1424))
				{
					iLocal_1326++;
				}
				else
				{
					iLocal_1326 = 4;
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(&bLocal_1424))
				{
					uLocal_1488 = GET_BLIP_ON_ACTOR(&bLocal_1424);
					if (!IS_BLIP_VALID(&uLocal_1490))
					{
						uLocal_1490 = ADD_BLIP_FOR_ACTOR(&bLocal_1424, 424, 0, 2, 0);
						if (IS_BLIP_VALID(&uLocal_1490))
						{
							SET_BLIP_SCALE(&uLocal_1490, 0,6f);
						}
					}
					SQUAD_LEAVE(&bLocal_1424);
					SQUAD_JOIN(&bLocal_1424, &Local_1734 + 72);
					TASK_CLEAR(&bLocal_1424);
					iLocal_1326++;
				}
				else
				{
					iLocal_1326 = 4;
				}
				break;
			
			case 0x00000009:
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2440, 7.0f, 4);
				TASK_KILL_CHAR(false, &Global_54076);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uLocal_1436[2]), bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&(uLocal_1436[2]), true);
				iLocal_1326++;
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(&(uLocal_1436[2]), 61) == 0)
				{
					if (IS_ACTOR_VALID(&bLocal_1424))
					{
						RELEASE_ACTOR(&bLocal_1424);
					}
					iLocal_1326 = 2;
				}
				break;
			
			case 0x0000000B:
				iLocal_1326++;
				break;
			}
	}
	return;
}

void Function_554() //Position: 0x28407 / 164871
{
	if (IS_ACTOR_VALID(&(uLocal_1436[1])))
	{
		switch (iLocal_1325)
		{
			case 0x00000000:
				iLocal_1325++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 6)
				{
					GIVE_WEAPON_TO_ACTOR(&(uLocal_1436[1]), 21, false, 1, 1);
					iLocal_1325++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_927 > 8)
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1583 = Vector(-3.0f, 0.0f, 0.0f);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &iLocal_4 + 2416, 9.0f, 4);
						TASK_FOLLOW_OBJECT(0, &Local_1734 + 8, &uLocal_1583, 0, 0, 0, 0, 0, 0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(uLocal_1436[1]), bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&(uLocal_1436[1]), true);
						iLocal_1325++;
					}
				}
				break;
			
			case 0x00000003:
				if (Function_392(&(uLocal_1436[1]), &Local_1734 + 8, 10.0f))
				{
					iLocal_1325++;
				}
				break;
			
			case 0x00000004:
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					iLocal_1422 = Function_547(&Local_1734 + 64, &(uLocal_1436[1]), 0, 0);
					if (IS_ACTOR_VALID(&iLocal_1422))
					{
						if (!&iLocal_1422 != &bLocal_1424 && !&iLocal_1422 != &bLocal_1426)
						{
							iLocal_1325++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(&iLocal_1422))
				{
					DECOR_SET_BOOL(&iLocal_1422, "AllowLassoHorseMinigame", 0);
					Function_529(&(uLocal_1436[1]), &iLocal_1422, 1);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_USE_LASSO(0, &iLocal_1422, 1f, 5f, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uLocal_1436[1]), bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&(uLocal_1436[1]), true);
					iLocal_1325++;
				}
				else
				{
					iLocal_1325 = (iLocal_1325 - 1);
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_VALID(&iLocal_1422))
				{
					if (&iLocal_1422 == GET_LASSO_TARGET(&(uLocal_1436[1])))
					{
						iLocal_1325++;
					}
				}
				else
				{
					iLocal_1325 = 4;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(&iLocal_1422))
				{
					iLocal_1325++;
				}
				else
				{
					iLocal_1325 = 4;
				}
				break;
			
			case 0x00000008:
				if (IS_ACTOR_VALID(&iLocal_1422))
				{
					uLocal_1488 = GET_BLIP_ON_ACTOR(&iLocal_1422);
					if (!IS_BLIP_VALID(&uLocal_1488))
					{
						uLocal_1488 = ADD_BLIP_FOR_ACTOR(&iLocal_1422, 424, 0, 2, 0);
						if (IS_BLIP_VALID(&uLocal_1488))
						{
							SET_BLIP_SCALE(&uLocal_1488, 0,6f);
						}
					}
					SQUAD_LEAVE(&iLocal_1422);
					SQUAD_JOIN(&iLocal_1422, &Local_1734 + 72);
					TASK_CLEAR(&iLocal_1422);
					iLocal_1325++;
				}
				else
				{
					iLocal_1325 = 4;
				}
				break;
			
			case 0x00000009:
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2440, 8.0f, 4);
				TASK_KILL_CHAR(false, &Global_54076);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uLocal_1436[1]), bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&(uLocal_1436[1]), true);
				iLocal_1325++;
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(&(uLocal_1436[1]), 61) == 0)
				{
					if (IS_ACTOR_VALID(&iLocal_1422))
					{
						RELEASE_ACTOR(&iLocal_1422);
					}
					iLocal_1325 = 2;
				}
				break;
			
			case 0x0000000B:
				iLocal_1325++;
				break;
			}
	}
	return;
}

void Function_555() //Position: 0x28745 / 165701
{
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		if (iLocal_1596)
		{
			Function_490(&Local_1734, 1);
			Function_489(&Local_1734, 1);
			Function_488(&Local_1734, 1, 0x41700000);
			if (Function_281(&iLocal_1454) <= 0,2f)
			{
				Function_519(&Local_1734 + 72, &iLocal_1458, 3.0f, &iLocal_4 + 2864, -20.0f);
				Function_484(&Local_1734);
				Function_229(&iLocal_1454);
			}
			Function_483();
		}
		Function_481(&Global_54076);
		Function_561();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(52);
			if (iLocal_947[4] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46754[1];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1864[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_559();
				if (iLocal_947[4] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1864[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1248, -1.0f);
				}
				Function_366(32768);
				if (IS_VOLUME_VALID(&iLocal_4 + 1448))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1448);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1448);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1448, 15);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[515]));
				Function_418(&(Local_1031[615]));
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				Function_466(&(Local_1031[115]), 2);
				Function_466(&(Local_1031[215]), 2);
				Function_466(&(Local_1031[315]), 2);
				Function_466(&(Local_1031[415]), 2);
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[1], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_465();
				Function_558();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 464);
				Function_461(&Local_1734 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2400, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2400, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2400, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					Function_236(12, 0, 1);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
					MEMORY_PREFER_RIDING(&bLocal_931, true);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2864, -20.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (iLocal_947[4] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1734 + 64))
					{
						Function_465();
						Function_558();
						Function_426(&Local_1734 + 64);
						Function_462(&Local_1734 + 64, &iLocal_4 + 464);
						Function_461(&Local_1734 + 64, 2, 1);
					}
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2400;
				GET_OBJECT_POSITION(&iLocal_4 + 2400, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1280, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_557();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_403("home01_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2400, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2400, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2400, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
			}
			if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
					{
						if (Function_281(&iLocal_939) <= 15.0f)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_499();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				else if (iLocal_1595)
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) > 2)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_512();
									Function_229(&iLocal_939);
								}
							}
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076) && IS_OBJECT_VALID(&Local_1734 + 8))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1312))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1312) || IS_OBJECT_IN_VOLUME(&Local_1734 + 8, &iLocal_4 + 1312))
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							DESTROY_OBJECT(&iLocal_1494);
						}
						Function_455(&Local_1734 + 64);
						Function_455(&Local_1734 + 72);
						Function_455(&Local_1734 + 80);
						Function_455(&Local_1734 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (((SQUAD_IS_VALID(&Local_1734 + 88) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80)) && SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88));
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_556();
			iLocal_947[5] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 6;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_556() //Position: 0x2937F / 168831
{
	return;
}

void Function_557() //Position: 0x29385 / 168837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_LeadUpHill_v1_AA", "Home01_LeadUpHill_v1_AA", 3, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_LeadUpHill_v1_AB", "Home01_LeadUpHill_v1_AB", 0, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x2941A / 168986
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_559() //Position: 0x29445 / 169029
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1864[3];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_560();
	cLocal_1644[0] = 976;
	cLocal_1644[1] = 977;
	cLocal_1644[2] = 980;
	cLocal_1504[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2232);
	cLocal_1504[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2232);
	cLocal_1504[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2232);
	if (!SQUAD_IS_VALID(&bLocal_1692))
	{
		bLocal_1692 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE03"));
		if (SQUAD_IS_VALID(&bLocal_1692))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1692);
			Function_352(&bLocal_1692, &uLocal_1398, &cLocal_1504, &cLocal_1644, "SHORSE03", 3);
			Function_351(&bLocal_1692, 0);
			Function_350(&bLocal_1692, 3);
		}
	}
	cLocal_1666[0] = 477;
	cLocal_1666[1] = 478;
	cLocal_1666[2] = 479;
	cLocal_1528[0] = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2248);
	cLocal_1528[1] = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2248);
	cLocal_1528[2] = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2248);
	if (!SQUAD_IS_VALID(&bLocal_1696))
	{
		bLocal_1696 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "nSOUTLAW01"));
		if (SQUAD_IS_VALID(&bLocal_1696))
		{
			SQUAD_GOALS_CLEAR(&bLocal_1696);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1696, false, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_352(&bLocal_1696, &uLocal_1428, &cLocal_1528, &cLocal_1666, "nSOUTLAW01", 3);
			SQUAD_SET_FACTION(&bLocal_1696, 21);
			Function_531(&bLocal_1696, 1);
			Function_538(&bLocal_1696, &bLocal_1692);
		}
	}
	return;
}

void Function_560() //Position: 0x29674 / 169588
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2864;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2368, &iLocal_1626, 5, 2.0f, 4,5f, 2.0f, 0);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1248, -1.0f);
		}
	}
	return;
}

void Function_561() //Position: 0x2975E / 169822
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 10)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_389(&Global_54076, &bLocal_1388, 24.0f))
						{
							Function_563();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000003:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_562();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000004:
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000005:
				Function_471(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000006:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_562() //Position: 0x29861 / 170081
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_JonYellsAtRustlers", "Home01_JonYellsAtRustlers", 6, 2, 0, 0, 1);
		Function_405(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x298BD / 170173
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_JonReassuresJack", "Home01_JonReassuresJack", 3, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_564() //Position: 0x29915 / 170261
{
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_495(&Local_1734 + 64, &Local_1734 + 88, &iLocal_4 + 1136);
		Function_494(&Local_1734);
		if (iLocal_1596)
		{
			Function_490(&Local_1734, 1);
			Function_489(&Local_1734, 1);
			Function_488(&Local_1734, 1, 0x41700000);
			if (Function_281(&iLocal_1454) <= 0,2f)
			{
				Function_576(&Local_1734 + 72, &iLocal_1458, 3.0f, &iLocal_4 + 2856, -20.0f);
				Function_484(&Local_1734);
				Function_229(&iLocal_1454);
			}
			Function_483();
		}
		Function_481(&Global_54076);
		Function_575();
		Function_574();
		Function_572();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(36);
			if (iLocal_947[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46736[2];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1792[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_1388, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1321 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1368);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1368);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1368, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1368);
				Function_570();
				if (iLocal_947[3] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1792[4], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							Function_358(&(uLocal_1390[0]), &iLocal_4 + 1792[5], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_1388))
					{
						if (IS_ACTOR_VALID(&(uLocal_1394[0])))
						{
							Function_358(&(uLocal_1394[0]), &iLocal_4 + 1792[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_1388) && !IS_ACTOR_MOUNTED(&(uLocal_1394[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_1388, &(uLocal_1394[0]));
							}
						}
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1240, -1.0f);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1388, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[515]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[615]));
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				Function_466(&(Local_1031[215]), 2);
				Function_466(&(Local_1031[315]), 2);
				Function_466(&(Local_1031[415]), 2);
				Function_466(&(Local_1031[515]), 2);
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46736[2], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931) && IS_ACTOR_VALID(&bLocal_1388))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000) && Function_408(&bLocal_1388, 1, 0x41700000))
				{
					if ((IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1388)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_465();
				Function_569();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 376);
				Function_461(&Local_1734 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2368, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2368, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2368, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (iLocal_947[3] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1734 + 64))
					{
						Function_465();
						Function_569();
						Function_426(&Local_1734 + 64);
						Function_462(&Local_1734 + 64, &iLocal_4 + 376);
						Function_461(&Local_1734 + 64, 2, 1);
					}
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				*(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2368;
				GET_OBJECT_POSITION(&iLocal_4 + 2368, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1248, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_568();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_229(&iLocal_935);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_281(&iLocal_935) <= 3.0f)
			{
				Function_567();
				Function_229(&iLocal_935);
				iLocal_927 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_403("home01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2368, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2368, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2368, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
				if (((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 88)) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							DESTROY_OBJECT(&iLocal_1494);
						}
						Function_455(&Local_1734 + 64);
						Function_455(&Local_1734 + 72);
						Function_455(&Local_1734 + 80);
						Function_455(&Local_1734 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 106;
					}
				}
			}
			if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
					{
						if (Function_281(&iLocal_939) <= 15.0f)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_499();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				else if (iLocal_1595)
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) > 2)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_498();
									Function_229(&iLocal_939);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88);
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_931, false);
			}
			Function_565();
			iLocal_947[4] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 5;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_565() //Position: 0x2A5DD / 173533
{
	Function_566();
	if (SQUAD_IS_VALID(&iLocal_1690))
	{
		Function_190(&iLocal_1690, 0, 0);
		RELEASE_OBJECT_REF(&iLocal_1690);
	}
	return;
}

void Function_566() //Position: 0x2A5FF / 173567
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1388);
	Function_225(3, 1, 0, 1, 1);
	return;
}

void Function_567() //Position: 0x2A616 / 173590
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_MoveHerdAcrsRiver", "Home01_MoveHerdAcrsRiver", 3, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x2A670 / 173680
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_saysGoodbye_v1_AA", "Home01_saysGoodbye_v1_AA", 0, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_saysGoodbye_v1_AB", "Home01_saysGoodbye_v1_AB", 1, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_3090", "", 0, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home01_saysGoodbye_v1_AC", "Home01_saysGoodbye_v1_AC", 0, 3, 1, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x2A766 / 173926
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

void Function_570() //Position: 0x2A791 / 173969
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1792[5];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_1640[0] = 977;
	cLocal_1500[0] = &iLocal_4 + 1792[6];
	if (!SQUAD_IS_VALID(&iLocal_1690))
	{
		iLocal_1690 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE02"));
		if (SQUAD_IS_VALID(&iLocal_1690))
		{
			SQUAD_GOALS_CLEAR(&iLocal_1690);
			Function_352(&iLocal_1690, &uLocal_1394, &cLocal_1500, &cLocal_1640, "SHORSE02", 1);
			Function_351(&iLocal_1690, 0);
			Function_350(&iLocal_1690, 3);
			Function_349(&iLocal_1690, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1690, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_571();
	return;
}

void Function_571() //Position: 0x2A8D2 / 174290
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2856;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2360, &iLocal_1626, 5, 3.0f, 4,5f, 1,5f, 0);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1240, -1.0f);
		}
	}
	return;
}

void Function_572() //Position: 0x2A9C0 / 174528
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 10)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_389(&Global_54076, &bLocal_931, 36.0f))
						{
							Function_573();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000003:
				Function_471(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000004:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_573() //Position: 0x2AA7E / 174718
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_RoundStragglersAftr_v1_AA", "Home01_RoundStragglersAftr_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_RoundStragglersAftr_v1_AB", "Home01_RoundStragglersAftr_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_510", "", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_RoundStragglersAftr_v1_AC", "Home01_RoundStragglersAftr_v1_AC", 3, 2, 1, 0, 1);
		Function_405(11);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_574() //Position: 0x2ABA4 / 175012
{
	if (SQUAD_IS_VALID(&Local_1734 + 64))
	{
		switch (iLocal_1321)
		{
			case 0x00000000:
				iLocal_1321++;
				break;
			
			case 0x00000001:
				if (IS_VOLUME_VALID(&iLocal_4 + 1344))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1734 + 8, &iLocal_4 + 1344) || IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1344))
						{
							iLocal_1321++;
						}
					}
				}
				break;
			
			case 0x00000002:
				iLocal_1321++;
				break;
			
			case 0x00000003:
				iLocal_1321++;
				break;
			}
	}
	return;
}

void Function_575() //Position: 0x2AC3A / 175162
{
	if (IS_ACTOR_VALID(&bLocal_1388))
	{
		switch (iLocal_1317)
		{
			case 0x00000000:
				Function_229(&iLocal_1466);
				iLocal_1317++;
				break;
			
			case 0x00000001:
				Function_236(3, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_1388, true);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1388);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1388, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_1388, true);
				Function_229(&iLocal_1466);
				iLocal_1317++;
				break;
			
			case 0x00000002:
				if (Function_281(&iLocal_1466) <= 6,5f)
				{
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1388, "wave_goodbye", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1388, "wave_goodbye/left_hand");
					Function_229(&iLocal_1466);
					iLocal_1317++;
				}
				break;
			
			case 0x00000003:
				if (Function_281(&iLocal_1466) <= 2,5f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1792[2], &uLocal_1556);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_GO_NEAR_COORD(0, &uLocal_1556, 10.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1388, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1388, true);
					Function_229(&iLocal_1466);
					iLocal_1317++;
				}
				break;
			
			case 0x00000004:
				if (Function_281(&iLocal_1466) <= 6.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1388, 1);
					Function_229(&iLocal_1466);
					iLocal_1317++;
				}
				break;
			
			case 0x00000005:
				if (!Function_389(&Global_54076, &bLocal_1388, 150.0f))
				{
					Function_566();
					iLocal_1317++;
				}
				break;
			
			case 0x00000006:
				iLocal_1317++;
				break;
			}
	}
	return;
}

void Function_576(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x2ADFA / 175610
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				Function_236(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
				MEMORY_PREFER_RIDING(&bLocal_931, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_931, true);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2856, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				Function_229(&iLocal_1482);
				iLocal_1318++;
				break;
			
			case 0x00000002:
				if (Function_281(&iParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(&iParam0))
					{
						if (SQUAD_GET_SIZE(&iParam0) > 2)
						{
							if (!iLocal_1595)
							{
								fLocal_1420 = Function_486(&iParam0, &Local_1734 + 8);
								if (IS_ACTOR_VALID(&fLocal_1420))
								{
									Local_1562 = Vector(0.0f, 0.0f, 0.0f);
									bLocal_1314 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &fLocal_1420, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
									TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
									TASK_PRIORITY_SET(&bLocal_931, true);
									iLocal_1595 = 1;
								}
							}
							else if (!Function_479(&fLocal_1420, &iParam0, 0))
							{
								iLocal_1595 = 0;
							}
						}
						else if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
						{
							bLocal_1314 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &fParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
							TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
							TASK_PRIORITY_SET(&bLocal_931, true);
							iLocal_1595 = 0;
						}
					}
					Function_229(&iParam1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1344))
				{
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1344))
						{
							iLocal_1318++;
						}
					}
				}
				if (Function_281(&iLocal_1482) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(&bLocal_931, &Local_1734 + 32, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_931, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_931, "home01_look_back");
					Function_229(&iLocal_1482);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 1864[3], &Local_1562);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &Local_1562, 2.0f, 4);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000004:
				iLocal_1318++;
				break;
			}
	}
}

void Function_577() //Position: 0x2B0A4 / 176292
{
	if (!iLocal_1597)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46816[0]))
			{
				Function_605(&uLocal_1338);
			}
			else
			{
				iLocal_1315 = 0;
				iLocal_1597 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_495(&Local_1734 + 64, &Local_1734 + 88, &iLocal_4 + 1128);
		Function_494(&Local_1734);
		if (iLocal_1596)
		{
			Function_508(&Local_1734);
			Function_507(&Local_1734);
			Function_506(&Local_1734, 0x41700000);
			if (Function_281(&iLocal_1454) <= 0,2f)
			{
				Function_604(&Local_1734 + 72, &iLocal_1458, 3.0f, &iLocal_4 + 2848, -20.0f);
				Function_484(&Local_1734);
				Function_229(&iLocal_1454);
			}
			Function_483();
		}
		if (iLocal_927 < 8)
		{
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1386))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1320))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1320) || Function_389(&Global_54076, &bLocal_1386, 24.0f))
					{
						iLocal_1598 = 1;
						Function_253();
						Function_229(&iLocal_935);
						Function_229(&iLocal_939);
						iLocal_927 = 9;
					}
				}
			}
		}
		Function_481(&Global_54076);
		Function_603();
		Function_597();
		Function_596();
		Function_595();
		Function_584();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(39);
			if (iLocal_947[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46816[0];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1720[0], 1, 1, 1);
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_933, true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_1388, true);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1336 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = Function_353(Local_750);
				PRINTINT(bLocal_1330);
				PRINTNL();
				bLocal_1331 = (15 - bLocal_1330);
				PRINTINT(bLocal_1331);
				PRINTNL();
				bLocal_1319 = Global_53524.f_176;
				bLocal_1320 = Global_53524.f_180;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1734.f_120 = bLocal_1319;
				Local_1734.f_124 = bLocal_1320;
				Function_582();
				if (iLocal_947[2] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1720[4], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							Function_358(&(uLocal_1390[0]), &iLocal_4 + 1720[5], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_1388))
					{
						if (IS_ACTOR_VALID(&(uLocal_1394[0])))
						{
							Function_358(&(uLocal_1394[0]), &iLocal_4 + 1720[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_1388) && !IS_ACTOR_MOUNTED(&(uLocal_1394[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_1388, &(uLocal_1394[0]));
							}
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1386))
				{
					Function_358(&bLocal_1386, &iLocal_4 + 1608[2], 1, 1, 1);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					Function_427(&Local_1734 + 88, &Local_1734 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 64);
					Function_426(&Local_1734 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1232, -1.0f);
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1386, "Drew", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &bLocal_1388, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[515]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[615]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[715]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_420(&(Local_1031[115]), 1024, 1);
				Function_420(&(Local_1031[315]), 1024, 1);
				Function_466(&(Local_1031[415]), 2);
				Function_466(&(Local_1031[515]), 2);
				Function_466(&(Local_1031[615]), 2);
				Function_466(&(Local_1031[715]), 2);
				if (HUD_IS_FADED())
				{
					Function_229(&iLocal_935);
					iLocal_927 = 5;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 6;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46736[2], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931) && IS_ACTOR_VALID(&bLocal_1388))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000) && Function_408(&bLocal_1388, 1, 0x41700000))
				{
					if ((IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1388)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
					}
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1734 + 64))
			{
				Function_465();
				Function_581();
				Function_426(&Local_1734 + 64);
				Function_462(&Local_1734 + 64, &iLocal_4 + 304);
				Function_461(&Local_1734 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2360, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2360, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2360, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					Function_236(3, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_1388, true);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &Local_1734 + 32, 0);
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2824, (20.0f - 1.0f), 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1388, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1388, true);
				}
				if (iLocal_947[2] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1734 + 64))
					{
						Function_465();
						Function_581();
						Function_426(&Local_1734 + 64);
						Function_462(&Local_1734 + 64, &iLocal_4 + 304);
						Function_461(&Local_1734 + 64, 2, 1);
					}
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				*(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2360;
				GET_OBJECT_POSITION(&iLocal_4 + 2360, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1240, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_580();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_281(&iLocal_935) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_403("home01_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2360, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2360, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2360, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
			}
			break;
		
		case 0x00000009:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				if (iLocal_1595)
				{
					Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2360, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2360, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2360, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
				if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0) && SQUAD_GET_SIZE(&Local_1734 + 72) >= 3)
					{
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 10;
					}
				}
				if (((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 88)) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							DESTROY_OBJECT(&iLocal_1494);
						}
						Function_455(&Local_1734 + 64);
						Function_455(&Local_1734 + 72);
						Function_455(&Local_1734 + 80);
						Function_455(&Local_1734 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 12;
					}
				}
			}
			if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
					{
						if (Function_281(&iLocal_939) <= 15.0f)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_499();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				else if (iLocal_1595)
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) > 2)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_498();
									Function_229(&iLocal_939);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (SQUAD_GET_SIZE(&Local_1734 + 72) == 1)
			{
				Function_403("home01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				Function_403("home01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			Function_229(&iLocal_935);
			Function_229(&iLocal_939);
			Function_229(&iLocal_943);
			iLocal_927 = 11;
			break;
		
		case 0x0000000B:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				Function_453(&iLocal_943, 245.0f, 395.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2360, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2360, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2360, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0)
					{
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 9;
					}
				}
			}
			if (!bLocal_1599[0])
			{
				if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0) && SQUAD_GET_SIZE(&Local_1734 + 72) >= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_931))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 24.0f))
							{
								bLocal_1599[0] = 1;
								Function_579();
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&iLocal_935) <= 6.0f)
			{
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			else if (!IS_SCRIPTED_SPEECH_PLAYING(&bLocal_931) || Function_281(&iLocal_935) <= 6.0f)
			{
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88);
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_578();
			iLocal_947[3] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 4;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_578() //Position: 0x2C309 / 181001
{
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		RELEASE_ACTOR(&bLocal_1386);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 168))
	{
		Function_232(&Global_11544, &Global_13580, &iLocal_4 + 168, 0);
		RELEASE_OBJECT_REF(&iLocal_4 + 168);
	}
	return;
}

void Function_579() //Position: 0x2C342 / 181058
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_GetLastStraggler", "Home01_GetLastStraggler", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_580() //Position: 0x2C39A / 181146
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_Head4River", "Home01_Head4River", 3, 3, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x2C3E6 / 181222
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_582() //Position: 0x2C411 / 181265
{
	struct<2> Var0;
	struct<2> Var2;
	
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1720[5];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_1640[0] = 977;
	cLocal_1500[0] = &iLocal_4 + 1720[6];
	if (!SQUAD_IS_VALID(&iLocal_1690))
	{
		iLocal_1690 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE02"));
		if (SQUAD_IS_VALID(&iLocal_1690))
		{
			SQUAD_GOALS_CLEAR(&iLocal_1690);
			Function_352(&iLocal_1690, &uLocal_1394, &cLocal_1500, &cLocal_1640, "SHORSE02", 1);
			Function_351(&iLocal_1690, 0);
			Function_350(&iLocal_1690, 3);
			Function_349(&iLocal_1690, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1690, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_1386))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 1608[2], &Var0);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 1608[2], &Var2);
		bLocal_1386 = CREATE_ACTOR_IN_LAYOUT(&cLocal_748, "HOME01_DREW_MAC", 608, Var0, Var2);
		if (IS_ACTOR_VALID(&bLocal_1386))
		{
			SET_ACTOR_FACTION(&bLocal_1386, 20);
			SET_ACTOR_HEALTH(&bLocal_1386, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			Function_298(&bLocal_1386, 0, 0, 0, 1, 0, 1);
			TASK_STAND_STILL(&bLocal_1386, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1386, true);
		}
	}
	Function_583();
	return;
}

void Function_583() //Position: 0x2C5E9 / 181737
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2848;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2352, &iLocal_1626, 5, 1.0f, 4,5f, 1,5f, 0);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1232, -1.0f);
		}
	}
	return;
}

void Function_584() //Position: 0x2C6D7 / 181975
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_389(&Global_54076, &bLocal_1388, 24.0f))
						{
							Function_594();
						}
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000003:
				Function_590(1, 0, 1, 0x42340000, 0x41f00000);
				if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1386))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 1320))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1320) || Function_389(&Global_54076, &bLocal_1386, 24.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_589();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000005:
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_1334++;
				}
				break;
			
			case 0x00000006:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_389(&Global_54076, &bLocal_1388, 24.0f))
					{
						if (bLocal_1333 == 0)
						{
							Function_588();
						}
						else if (bLocal_1333 == 1)
						{
							Function_587();
						}
						else if (bLocal_1333 == 2)
						{
							Function_586();
						}
						else if (bLocal_1333 == 3)
						{
							Function_585();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000007:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000008:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (Function_281(&iLocal_939) <= 5.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334++;
				}
				break;
			
			case 0x00000009:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_389(&Global_54076, &bLocal_1388, 24.0f))
					{
						if (bLocal_1333 == 0)
						{
							Function_587();
						}
						else if (bLocal_1333 == 1)
						{
							Function_586();
						}
						else if (bLocal_1333 == 2)
						{
							Function_585();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x0000000A:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334++;
					}
				}
				break;
			
			case 0x0000000B:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (Function_281(&iLocal_939) <= 5.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334++;
				}
				break;
			
			case 0x0000000C:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_389(&Global_54076, &bLocal_1388, 24.0f))
					{
						if (bLocal_1333 == 0)
						{
							Function_586();
						}
						else if (bLocal_1333 == 1)
						{
							Function_585();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x0000000D:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334++;
					}
				}
				break;
			
			case 0x0000000E:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (Function_281(&iLocal_939) <= 5.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334++;
				}
				break;
			
			case 0x0000000F:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_389(&Global_54076, &bLocal_1388, 24.0f))
					{
						if (bLocal_1333 == 0)
						{
							Function_585();
						}
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000010:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000011:
				Function_590(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000012:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_585() //Position: 0x2CAEA / 183018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v4_AA", "Home01_herdBanter_v4_AA", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v4_AB", "Home01_herdBanter_v4_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v4_AC", "Home01_herdBanter_v4_AC", 1, 2, 1, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_586() //Position: 0x2CBBB / 183227
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v3_AA", "Home01_herdBanter_v3_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v3_AB", "Home01_herdBanter_v3_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v3_AC", "Home01_herdBanter_v3_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v3_AD", "Home01_herdBanter_v3_AD", 1, 2, 1, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_587() //Position: 0x2CCC9 / 183497
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v2_AA", "Home01_herdBanter_v2_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v2_AB", "Home01_herdBanter_v2_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_herdBanter_v2_AC", "Home01_herdBanter_v2_AC", 1, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v2_AD", "Home01_herdBanter_v2_AD", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v2_AE", "Home01_herdBanter_v2_AE", 0, 2, 1, 0, 1);
		Function_405(11);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_588() //Position: 0x2CE15 / 183829
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v1_AA", "Home01_herdBanter_v1_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v1_AB", "Home01_herdBanter_v1_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home01_herdBanter_v1_AC", "Home01_herdBanter_v1_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_herdBanter_v1_AD", "Home01_herdBanter_v1_AD", 1, 2, 1, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_589() //Position: 0x2CF23 / 184099
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Home01_drewWaves_v1_AA", "Home01_drewWaves_v1_AA", 0, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Home01_drewWaves_v1_AB", "Home01_drewWaves_v1_AB", 0, 3, 1, 0, 1);
		Function_405(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_590(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4) //Position: 0x2CFB3 / 184243
{
	if (Function_281(&iLocal_1474) <= 6.0f)
	{
		Function_591();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1614)
				{
					iLocal_1614 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonGetsOfHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
				else if (Function_281(&iLocal_939) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonNoGetOnHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1614)
				{
					iLocal_1614 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_933, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam0)
			{
				if (!iLocal_1612)
				{
					if (!bLocal_1613)
					{
						if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1571))
						{
							if (VMAG(Local_1571) >= 0.0f)
							{
								bLocal_1613 = true;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonStopsHorse", "Home01_JonStopsHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (bLocal_1613)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1571))
					{
						if (VMAG(Local_1571) <= (0.0f + 2.0f))
						{
							bLocal_1613 = false;
						}
					}
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 1,35f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam2)
			{
				Function_249(&Local_1734 + 16);
				if (!Function_474(StackVal, &Local_1734 + 64, Function_249(&Local_1734 + 16), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_MovesHerdWronDir", "Home01_MovesHerdWronDir", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
				if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 80) <= 3 || SQUAD_GET_SIZE(&Local_1734 + 72) <= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_931))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonBadHerd", "Home01_JonBadHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (&bParam1)
			{
				if (!Function_392(&Global_54076, &Local_1734 + 8, &fParam3) && !Function_389(&Global_54076, &bLocal_1388, &fParam3))
				{
					if (!iLocal_1612)
					{
						iLocal_1612 = 1;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_473();
						Function_229(&iLocal_1474);
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1388, &fParam4) && Function_392(&Global_54076, &Local_1734 + 8, &fParam4))
			{
				if (&bParam1)
				{
					if (iLocal_1612)
					{
						iLocal_1612 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_472();
						Function_229(&iLocal_1474);
					}
				}
			}
		}
	}
}

void Function_591() //Position: 0x2D3D8 / 185304
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_931)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &bLocal_1388)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_593();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_assaultsBonnie", "Home01_assaultsBonnie", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &uLocal_1390[0])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if ((Function_479(&iVar0, &Local_1734 + 64, 0) || Function_479(&iVar0, &Local_1734 + 80, 0)) || Function_479(&iVar0, &Local_1734 + 72, 0))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_478();
						Function_229(&iLocal_1474);
					}
					else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonLassosCow", "Home01_JonLassosCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_592();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_assaultsChar", "Home01_assaultsChar", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_592();
					Function_229(&iLocal_1474);
				}
			}
			else if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnChar", "Home01_GunOnChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
		}
	}
	return;
}

void Function_592() //Position: 0x2D84A / 186442
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_assaultsChar", "Home01_assaultsChar", 0, 1, 0, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_593() //Position: 0x2D899 / 186521
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_assaultsBonnie", "Home01_assaultsBonnie", 0, 1, 0, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_594() //Position: 0x2D8EC / 186604
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home01_bonnieHelp", "Home01_bonnieHelp", 0, 1, 1, 0, 1);
		Function_405(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_595() //Position: 0x2D937 / 186679
{
	if (IS_ACTOR_VALID(&iLocal_4 + 128[12]))
	{
		switch (iLocal_1324)
		{
			case 0x00000000:
				iLocal_1324++;
				break;
			
			case 0x00000001:
				TASK_CLEAR(&iLocal_4 + 128[12]);
				GET_OBJECT_POSITION(&iLocal_4 + 2488, &uLocal_1580);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_1580, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[12], bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 128[12], true);
				iLocal_1324++;
				break;
			
			case 0x00000002:
				if (Function_392(&iLocal_4 + 128[12], &iLocal_4 + 2488, 3.0f))
				{
					TASK_CLEAR(&iLocal_4 + 128[12]);
					iLocal_1324++;
				}
				break;
			
			case 0x00000003:
				if (!Function_389(&Global_54076, &iLocal_4 + 128[12], 150.0f))
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 168))
					{
						Function_232(&Global_11544, &Global_13580, &iLocal_4 + 168, 0);
						RELEASE_OBJECT_REF(&iLocal_4 + 168);
					}
					iLocal_1324++;
				}
				break;
			
			case 0x00000004:
				iLocal_1324++;
				break;
			}
	}
	return;
}

void Function_596() //Position: 0x2DA53 / 186963
{
	if (IS_ACTOR_VALID(&iLocal_4 + 128[02]))
	{
		switch (iLocal_1323)
		{
			case 0x00000000:
				iLocal_1323++;
				break;
			
			case 0x00000001:
				TASK_CLEAR(&iLocal_4 + 128[02]);
				GET_OBJECT_POSITION(&iLocal_4 + 2488, &uLocal_1577);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_1577, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[02], bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 128[02], true);
				iLocal_1323++;
				break;
			
			case 0x00000002:
				if (Function_392(&iLocal_4 + 128[02], &iLocal_4 + 2472, 3.0f))
				{
					TASK_CLEAR(&iLocal_4 + 128[02]);
					iLocal_1323++;
				}
				break;
			
			case 0x00000003:
				if (!Function_389(&Global_54076, &iLocal_4 + 128[02], 150.0f))
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 168))
					{
						Function_232(&Global_11544, &Global_13580, &iLocal_4 + 168, 0);
						RELEASE_OBJECT_REF(&iLocal_4 + 168);
					}
					iLocal_1323++;
				}
				break;
			
			case 0x00000004:
				iLocal_1323++;
				break;
			}
	}
	return;
}

void Function_597() //Position: 0x2DB6F / 187247
{
	switch (iLocal_1336)
	{
		case 0x00000000:
			iLocal_1336++;
			break;
		
		case 0x00000001:
			if (Function_385(Global_46816[0]))
			{
				if (!SQUAD_IS_VALID(&iLocal_4 + 168))
				{
					Function_598();
					if (SQUAD_IS_VALID(&iLocal_4 + 168))
					{
						Function_351(&iLocal_4 + 168, 0);
						SQUAD_SET_FACTION(&iLocal_4 + 168, 20);
						Function_349(&iLocal_4 + 168, 0, 0, 0);
						if (IS_ACTOR_VALID(&iLocal_4 + 128[02]))
						{
							SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 128[02], &iLocal_4 + 2752, "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&iLocal_4 + 128[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2752), "UseCase1", 4294967295, 1);
							TASK_PRIORITY_SET(&iLocal_4 + 128[02], true);
						}
						if (IS_ACTOR_VALID(&iLocal_4 + 128[12]))
						{
							SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 128[12], &iLocal_4 + 2760, "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&iLocal_4 + 128[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2760), "UseCase1", 4294967295, 1);
							TASK_PRIORITY_SET(&iLocal_4 + 128[12], true);
						}
					}
				}
				iLocal_1336++;
			}
			break;
		
		case 0x00000002:
			if (bLocal_926 == 0)
			{
				Function_419(&(Local_1031[315]), &iLocal_4 + 168, "Rancher", 0, 0x5f5e100, 1);
			}
			else if (bLocal_926 == 1)
			{
				Function_419(&(Local_1031[215]), &iLocal_4 + 168, "Rancher", 0, 0x5f5e100, 1);
			}
			else if (bLocal_926 == 2)
			{
				Function_419(&(Local_1031[315]), &iLocal_4 + 168, "Rancher", 0, 0x5f5e100, 1);
			}
			iLocal_1336++;
			break;
		
		case 0x00000003:
			iLocal_1336++;
			break;
	}
	return;
}

void Function_598() //Position: 0x2DD3C / 187708
{
	*(&iLocal_4 + 168) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "RanchHand01"));
	*(&iLocal_4 + 128[02]) = Function_599(StackVal, StackVal, &Global_11544, &Global_13580, 0, Vector(-890,6639f, 90,35207f, 2481,14f), Vector(0.0f, 59,68098f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 128[02], &iLocal_4 + 168);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 128[02], 4, 0,5f, 1, 1);
	*(&iLocal_4 + 128[12]) = Function_599(StackVal, StackVal, &Global_11544, &Global_13580, 1, Vector(-901,6159f, 90,35207f, 2488,269f), Vector(0.0f, -8,843758f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_4 + 128[12], &iLocal_4 + 168);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 128[12], 4, 0,5f, 1, 1);
	return;
}

int Function_599(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x2DDFA / 187898
{
	var uVar0;
	var uVar1;
	
	uVar0 = fParam2;
	uVar1 = Function_600(&iParam0, &fParam1, uVar0, &iParam7, 0, 1);
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

var Function_600(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x2DEEA / 188138
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
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_602(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
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
	Function_601(&vParam1[iVar03] + 16, 1);
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

int Function_601(int iParam0, bool bParam1) //Position: 0x2E0B1 / 188593
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

var Function_602(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2E163 / 188771
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

void Function_603() //Position: 0x2E28A / 189066
{
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		switch (iLocal_1322)
		{
			case 0x00000000:
				iLocal_1322++;
				break;
			
			case 0x00000001:
				AI_GOAL_LOOK_AT_ACTOR(&bLocal_1386, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_FACE_STYLE(&bLocal_1386, 0);
				GET_OBJECT_POSITION(&iLocal_4 + 1720[3], &uLocal_1574);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &uLocal_1574, 1.0f, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1386, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_1386, true);
				iLocal_1322++;
				break;
			
			case 0x00000002:
				if (iLocal_1598)
				{
					iLocal_1598 = 0;
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1386, "wave_goodbye", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1386, "wave_goodbye/right_hand");
					Function_229(&iLocal_1462);
					iLocal_1322++;
				}
				break;
			
			case 0x00000003:
				if (Function_281(&iLocal_1462) <= 5.0f)
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1386, 1);
					Function_229(&iLocal_1462);
					iLocal_1322++;
				}
				break;
			
			case 0x00000004:
				AI_GOAL_LOOK_CLEAR(&bLocal_1386);
				GET_OBJECT_POSITION(&iLocal_4 + 1528[3], &uLocal_1574);
				if (IS_ACTOR_VALID(&bLocal_1386))
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_GO_NEAR_COORD(0, &uLocal_1574, 1.0f, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1386, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1386, true);
				}
				iLocal_1322++;
				break;
			
			case 0x00000005:
				if (!Function_389(&Global_54076, &bLocal_1386, 150.0f))
				{
					if (IS_ACTOR_VALID(&bLocal_1386))
					{
						RELEASE_ACTOR(&bLocal_1386);
					}
					iLocal_1322++;
				}
				break;
			
			case 0x00000006:
				iLocal_1322++;
				break;
			}
	}
	return;
}

void Function_604(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x2E46F / 189551
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				Function_236(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
				MEMORY_PREFER_RIDING(&bLocal_931, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &iLocal_4 + 2848, -20.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				Function_229(&iLocal_1482);
				iLocal_1318++;
				break;
			
			case 0x00000002:
				if (Function_281(&iParam1) <= fParam2)
				{
					if (SQUAD_IS_VALID(&iParam0))
					{
						if (SQUAD_GET_SIZE(&iParam0) > 2)
						{
							if (!iLocal_1595)
							{
								fLocal_1420 = Function_486(&iParam0, &Local_1734 + 8);
								if (IS_ACTOR_VALID(&fLocal_1420))
								{
									Local_1562 = Vector(0.0f, 0.0f, 0.0f);
									bLocal_1314 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(0, &fLocal_1420, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
									TASK_STAND_STILL(false, -1.0f, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
									TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
									TASK_PRIORITY_SET(&bLocal_931, true);
									iLocal_1595 = 1;
								}
							}
							else if (!Function_479(&fLocal_1420, &iParam0, 0))
							{
								iLocal_1595 = 0;
							}
						}
						else if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
						{
							bLocal_1314 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1734 + 8, &fParam3, bParam4, 1, 0);
							TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
							TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
							TASK_PRIORITY_SET(&bLocal_931, true);
							iLocal_1595 = 0;
						}
					}
					Function_229(&iParam1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1336))
				{
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1336))
						{
							iLocal_1318++;
						}
					}
				}
				if (Function_281(&iLocal_1482) <= 20.0f)
				{
					AI_GOAL_LOOK_AT_COORD_NEW(&bLocal_931, &Local_1734 + 32, 4.0f);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_931, "home01_look_back", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_931, "home01_look_back");
					Function_229(&iLocal_1482);
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&iLocal_4 + 1792[5], &Local_1562);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &Local_1562, 2.0f, 4);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000004:
				iLocal_1318++;
				break;
			}
	}
}

void Function_605(var[] uParam0) //Position: 0x2E711 / 190225
{
	switch (iLocal_1315)
	{
		case 0x00000000:
			iLocal_1315++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID(&(uParam0[0])))
			{
				uParam0[0] = Function_383("hennigansRanch", "stable01", 1);
				if (IS_DOOR_VALID(&(uParam0[0])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[1])))
			{
				uParam0[1] = Function_383("hennigansRanch", "stable01", 2);
				if (IS_DOOR_VALID(&(uParam0[1])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[2])))
			{
				uParam0[2] = Function_383("hennigansRanch", "stable02", 1);
				if (IS_DOOR_VALID(&(uParam0[2])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[3])))
			{
				uParam0[3] = Function_383("hennigansRanch", "stable02", 7);
				if (IS_DOOR_VALID(&(uParam0[3])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[4])))
			{
				uParam0[4] = Function_383("hennigansRanch", "stable02", 8);
				if (IS_DOOR_VALID(&(uParam0[4])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[5])))
			{
				uParam0[5] = Function_383("hennigansRanch", "stable02", 9);
				if (IS_DOOR_VALID(&(uParam0[5])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[6])))
			{
				uParam0[6] = Function_383("hennigansRanch", "stable02", 11);
				if (IS_DOOR_VALID(&(uParam0[6])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(uParam0[7])))
			{
				uParam0[7] = Function_383("hennigansRanch", "stable02", 10);
				if (IS_DOOR_VALID(&(uParam0[7])))
				{
				}
			}
			iLocal_1315++;
			break;
		
		case 0x00000002:
			if (IS_DOOR_VALID(&(uParam0[0])))
			{
				Function_161(&(uParam0[0]), 0);
				CLOSE_DOOR_FAST(&(uParam0[0]));
			}
			if (IS_DOOR_VALID(&(uParam0[1])))
			{
				Function_161(&(uParam0[1]), 0);
				CLOSE_DOOR_FAST(&(uParam0[1]));
			}
			if (IS_DOOR_VALID(&(uParam0[2])))
			{
				Function_161(&(uParam0[2]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[2]), 1);
			}
			if (IS_DOOR_VALID(&(uParam0[3])))
			{
				Function_161(&(uParam0[3]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[3]), 0);
			}
			if (IS_DOOR_VALID(&(uParam0[4])))
			{
				Function_161(&(uParam0[4]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[4]), 0);
			}
			if (IS_DOOR_VALID(&(uParam0[5])))
			{
				Function_161(&(uParam0[5]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[5]), 1);
			}
			if (IS_DOOR_VALID(&(uParam0[6])))
			{
				Function_161(&(uParam0[6]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[6]), 1);
			}
			if (IS_DOOR_VALID(&(uParam0[7])))
			{
				Function_161(&(uParam0[7]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[7]), 0);
			}
			iLocal_1315++;
			break;
		
		case 0x00000003:
			iLocal_1597 = 1;
			iLocal_1315++;
			break;
	}
	return;
}

void Function_606() //Position: 0x2EAD9 / 191193
{
	if (!iLocal_1597)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46816[0]))
			{
				Function_605(&uLocal_1338);
			}
			else
			{
				iLocal_1315 = 0;
				iLocal_1597 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		if (iLocal_927 > 9)
		{
			Function_495(&Local_1734 + 64, &Local_1734 + 88, &iLocal_4 + 1104);
			Function_494(&Local_1734);
			if (iLocal_1596)
			{
				Function_490(&Local_1734, 1);
				Function_489(&Local_1734, 1);
				Function_488(&Local_1734, 1, 0x41700000);
				if (Function_281(&iLocal_1454) <= 0,2f)
				{
					Function_484(&Local_1734);
					Function_229(&iLocal_1454);
				}
				Function_483();
			}
			Function_481(&Global_54076);
		}
		if (IS_DOOR_VALID(&(uLocal_1338[6])) && IS_DOOR_VALID(&(uLocal_1338[7])))
		{
			if (IS_DOOR_CLOSED(&(uLocal_1338[6])) || IS_DOOR_CLOSED(&(uLocal_1338[7])))
			{
				if (IS_ACTOR_VALID(&bLocal_931) && IS_ACTOR_VALID(&bLocal_1388))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 1416))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1416) || IS_ACTOR_IN_VOLUME(&bLocal_1388, &iLocal_4 + 1416))
						{
							OPEN_DOOR_DIRECTION(&(uLocal_1338[6]), 1);
							OPEN_DOOR_DIRECTION(&(uLocal_1338[7]), 0);
						}
					}
				}
			}
		}
		Function_597();
		Function_620();
		Function_618();
		Function_615();
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_933, true);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_931, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1386))
			{
				TASK_STAND_STILL(&bLocal_1386, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1386, true);
			}
			if (Function_359(&Local_750))
			{
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_1388, true);
				}
			}
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(39);
			if (iLocal_947[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46816[0];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1608[0], 1, 1, 1);
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1336 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = 15;
				bLocal_1331 = false;
				Function_388(Local_750, 15);
				PRINTINT(bLocal_1330);
				PRINTNL();
				PRINTINT(bLocal_1331);
				PRINTNL();
				Local_1734.f_120 = 0;
				Local_1734.f_124 = 0;
				bLocal_1319 = Local_1734.f_120;
				bLocal_1320 = Local_1734.f_124;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_1320) / TO_FLOAT(bLocal_1319)));
				PRINTNL();
				bLocal_1319 = Local_1734.f_120;
				Global_53524.f_176 = bLocal_1319;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1320 = Local_1734.f_124;
				Global_53524.f_180 = bLocal_1320;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_613();
				if (iLocal_947[1] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1608[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							Function_358(&(uLocal_1390[0]), &iLocal_4 + 1608[8], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_1388))
					{
						if (IS_ACTOR_VALID(&(uLocal_1394[0])))
						{
							Function_358(&(uLocal_1394[0]), &iLocal_4 + 1608[10], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_1388) && !IS_ACTOR_MOUNTED(&(uLocal_1394[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_1388, &(uLocal_1394[0]));
							}
						}
					}
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1388, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[515]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[615]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[715]));
				Function_420(&(Local_1031[215]), 1024, 1);
				Function_466(&(Local_1031[315]), 2);
				Function_466(&(Local_1031[415]), 2);
				Function_466(&(Local_1031[515]), 2);
				Function_466(&(Local_1031[615]), 2);
				if (Function_611(StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, bLocal_926))
				{
					Function_229(&iLocal_935);
					iLocal_927 = 3;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 4;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46736[2], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_284("$/cutscene/HOME01_CS02_C/HOME01_CS02_C", &iLocal_914, &Local_750, &bLocal_926, 95588, 95323, 94370, 93596, 93255, 60209, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(&Global_54076))
			{
			}
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				SET_ACTOR_HEALTH(&bLocal_933, GET_ACTOR_MAX_HEALTH(&bLocal_933));
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				SET_ACTOR_HEALTH(&bLocal_931, 50.0f);
			}
			if (IS_ACTOR_VALID(&bLocal_1388))
			{
				SET_ACTOR_HEALTH(&bLocal_1388, 50.0f);
			}
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 176[4]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 176[4]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 176[4], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 176[4]);
			if (HUD_IS_FADED())
			{
				Function_229(&iLocal_935);
				iLocal_927 = 5;
			}
			else
			{
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_931);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
					GET_OBJECT_POSITION(&iLocal_4 + 2344, &Local_1562);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1608[9], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(0, &Local_1562, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					Function_236(3, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_1388, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1388, true);
					GET_OBJECT_POSITION(&iLocal_4 + 2344, &uLocal_1556);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &iLocal_4 + 2720, 0);
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1608[11], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(0, &Local_1562, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1388, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1388, true);
					if (IS_ACTOR_VALID(&(uLocal_1394[0])))
					{
						TASK_CLEAR(&(uLocal_1394[0]));
					}
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931) && IS_ACTOR_VALID(&bLocal_1388))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000) && Function_408(&bLocal_1388, 1, 0x41700000))
				{
					if ((IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1388)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
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
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MIN_SPEED(&bLocal_931);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
					GET_OBJECT_POSITION(&iLocal_4 + 2344, &Local_1562);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1608[9], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(0, &Local_1562, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					Function_236(3, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_1388, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1388, true);
					GET_OBJECT_POSITION(&iLocal_4 + 2344, &uLocal_1556);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &iLocal_4 + 2720, 0);
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1608[11], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(0, &uLocal_1556, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1388, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1388, true);
					if (IS_ACTOR_VALID(&(uLocal_1394[0])))
					{
						TASK_CLEAR(&(uLocal_1394[0]));
					}
				}
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1608[7], &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1608[7], &Local_1553);
					iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, &Global_54076, (3.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_281(&iLocal_935) <= 1.0f)
			{
				Function_403("home01_obj02a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_395(&iLocal_943, 60.0f, 200.0f, &bLocal_1388, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_974, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_235(&iLocal_1494);
				}
				if (!IS_BLIP_VALID(Function_610(3)))
				{
					Function_236(3, 1, 1);
				}
			}
			else if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_235(&iLocal_1494);
				}
				if (IS_BLIP_VALID(Function_610(3)))
				{
					Function_236(3, 0, 1);
				}
			}
			else
			{
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1608[7], &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1608[7], &Local_1553);
					iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, &Global_54076, (3.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					if (GATEWAY_UPDATE(&iLocal_1494))
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							Function_235(&iLocal_1494);
						}
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO_MUSIC_SET_MOOD("HERDING", 0, 4294967295, 4294967295);
				if (!IS_OBJECT_VALID(&uLocal_1702))
				{
					if (IS_OBJECT_VALID(&Local_1734 + 8))
					{
						uLocal_1702 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_748, "HOME01_CAMERA_FOCUS", &Local_1734 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1702))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1702, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2344, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2344, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2344, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				GET_OBJECT_POSITION(&iLocal_4 + 1720[5], &Local_1562);
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
					Function_236(12, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_931, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
					AI_RIDING_SET_ATTRIBUTE(&bLocal_931, 2, 0,15f);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &iLocal_4 + 2920, 2, 1, 1, 1, 0);
					TASK_GO_NEAR_COORD(0, &Local_1562, 1.0f, 2);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1388, true);
					Function_236(3, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_1388, true);
					GET_OBJECT_POSITION(&iLocal_4 + 1720[6], &uLocal_1556);
					if (IS_ACTOR_VALID(&bLocal_1388))
					{
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH(0, &iLocal_4 + 2832, 2, 1, 1, 1, 0);
						TASK_GO_NEAR_COORD(0, &uLocal_1556, 1.0f, 2);
						TASK_FACE_COORD(0, &Local_1734 + 32, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1388, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_1388, true);
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 64))
				{
					Function_465();
					Function_609();
					Function_426(&Local_1734 + 64);
					Function_462(&Local_1734 + 64, &iLocal_4 + 240);
					Function_461(&Local_1734 + 64, 2, 1);
					SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1734 + 64, &Local_1734 + 96, 1, 0,25f, 0,25f);
					_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1734 + 64, &Local_1734 + 96, 0, 16, (4,5f - 0,5f));
					Function_535(&iLocal_4 + 168, 5.0f, 1.0f);
				}
				iLocal_1595 = 0;
				if (SQUAD_IS_VALID(&Local_1734 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 72);
					Function_460(&Local_1734 + 72);
				}
				*(&Local_1734 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1734 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 80);
					Function_460(&Local_1734 + 80);
				}
				*(&Local_1734 + 16) = &iLocal_4 + 2344;
				GET_OBJECT_POSITION(&iLocal_4 + 2344, &uLocal_1568);
				if (SQUAD_IS_VALID(&Local_1734 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1734 + 88);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &uLocal_1568, 6.0f, 4);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1232, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				}
				Function_608();
				Function_229(&iLocal_935);
				iLocal_927 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_403("home01_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					DESTROY_OBJECT(&iLocal_1494);
				}
				if (iLocal_1596)
				{
					Function_454();
				}
			}
			else
			{
				Function_453(&iLocal_943, 135.0f, 315.0f, &Local_1734 + 8, "Herd_return", "Herd_abandoned", &bLocal_974, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					uLocal_1486 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2352, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1486))
					{
					}
				}
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2352, &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2352, &Local_1553);
					iLocal_1494 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
				}
				if (!iLocal_1596)
				{
					Function_253();
					Function_452();
				}
				if (((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 88)) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							DESTROY_OBJECT(&iLocal_1494);
						}
						Function_455(&Local_1734 + 64);
						Function_455(&Local_1734 + 72);
						Function_455(&Local_1734 + 80);
						Function_455(&Local_1734 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 106;
					}
				}
				if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 72) != 0 && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 36.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_499();
									Function_229(&iLocal_939);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1734 + 88))
			{
				bLocal_1330 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1734 + 88);
				Function_388(Local_750, bLocal_1330);
			}
			PRINTINT(bLocal_1330);
			PRINTNL();
			bLocal_1331 = (15 - bLocal_1330);
			PRINTINT(bLocal_1331);
			PRINTNL();
			bLocal_1319 = Local_1734.f_120;
			Global_53524.f_176 = bLocal_1319;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1320 = Local_1734.f_124;
			Global_53524.f_180 = bLocal_1320;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_607();
			iLocal_947[2] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 3;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_607() //Position: 0x2FE47 / 196167
{
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		RELEASE_ACTOR(&bLocal_1386);
	}
	return;
}

void Function_608() //Position: 0x2FE5E / 196190
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_JonBeginsHerdng", "Home01_JonBeginsHerdng", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_609() //Position: 0x2FEB4 / 196276
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1734 + 64, &Local_1734 + 96, &Local_1734 + 24, 1000.0f, 0,85f, 1.0f, 1082130432);
	return;
}

var Function_610(int iParam0) //Position: 0x2FEDF / 196319
{
	return &Global_15402[iParam014] + 104;
}

bool Function_611(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x2FEEF / 196335
{
	if (Function_612(&iParam0) == iParam6 || Function_417())
	{
		return 1;
	}
	return 0;
}

int Function_612(int iParam0) //Position: 0x2FF0E / 196366
{
	if (Function_359(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_613() //Position: 0x2FF27 / 196391
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1608[8];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_1640[0] = 977;
	cLocal_1500[0] = &iLocal_4 + 1608[10];
	if (!SQUAD_IS_VALID(&iLocal_1690))
	{
		iLocal_1690 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE02"));
		if (SQUAD_IS_VALID(&iLocal_1690))
		{
			SQUAD_GOALS_CLEAR(&iLocal_1690);
			Function_352(&iLocal_1690, &uLocal_1394, &cLocal_1500, &cLocal_1640, "SHORSE02", 1);
			Function_351(&iLocal_1690, 0);
			Function_350(&iLocal_1690, 3);
			Function_349(&iLocal_1690, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1690, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_614();
	return;
}

void Function_614() //Position: 0x3006D / 196717
{
	Function_347();
	*(&Local_1734 + 24) = &iLocal_4 + 2840;
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2336, &iLocal_1626, 5, 1.0f, 3.0f, 1,5f, 1);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1224, -1.0f);
		}
	}
	return;
}

void Function_615() //Position: 0x30157 / 196951
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000002:
				Function_616(1, 1, 1, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000003:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_616(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4) //Position: 0x301DA / 197082
{
	if (Function_281(&iLocal_1474) <= 6.0f)
	{
		Function_617();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1614)
				{
					iLocal_1614 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonGetsOfHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
				else if (Function_281(&iLocal_939) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonNoGetOnHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1614)
				{
					iLocal_1614 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_933, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 1,35f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam1)
			{
				if (SQUAD_IS_VALID(&Local_1734 + 72) && SQUAD_IS_VALID(&Local_1734 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1734 + 80) <= 4 || SQUAD_GET_SIZE(&Local_1734 + 72) <= 4)
					{
						if (IS_ACTOR_VALID(&bLocal_931))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonBadHerd", "Home01_JonBadHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (&bParam2)
			{
				if (!Function_392(&Global_54076, &Local_1734 + 8, &fParam3) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_1388, &fParam3))
				{
					if (!iLocal_1612)
					{
						iLocal_1612 = 1;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_473();
						Function_229(&iLocal_1474);
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1388, &fParam4) && Function_392(&Global_54076, &Local_1734 + 8, &fParam4))
			{
				if (&bParam2)
				{
					if (iLocal_1612)
					{
						iLocal_1612 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_472();
						Function_229(&iLocal_1474);
					}
				}
			}
		}
	}
}

void Function_617() //Position: 0x304EC / 197868
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_931)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &bLocal_1388)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_593();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_assaultsBonnie", "Home01_assaultsBonnie", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &uLocal_1390[0])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if ((Function_479(&iVar0, &Local_1734 + 64, 0) || Function_479(&iVar0, &Local_1734 + 80, 0)) || Function_479(&iVar0, &Local_1734 + 72, 0))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_478();
						Function_229(&iLocal_1474);
					}
					else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonLassosCow", "Home01_JonLassosCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
					}
				}
			}
			else if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnChar", "Home01_GunOnChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_ShootsGunHerd", "Home01_ShootsGunHerd", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
		}
	}
	return;
}

void Function_618() //Position: 0x308C1 / 198849
{
	if (IS_ACTOR_VALID(&iLocal_4 + 128[12]))
	{
		switch (iLocal_1324)
		{
			case 0x00000000:
				iLocal_1324++;
				break;
			
			case 0x00000001:
				MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 128[12], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1608[5], &uLocal_1580);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_1580, 1);
				TASK_FACE_COORD(0, &iLocal_4 + 2504, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[12], bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 128[12], true);
				iLocal_1324++;
				break;
			
			case 0x00000002:
				if (iLocal_927 > 9)
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &iLocal_4 + 2504, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[12], bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 128[12], true);
					iLocal_1324++;
				}
				break;
			
			case 0x00000003:
				if (GET_TASK_STATUS(&iLocal_4 + 128[12], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[12], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 128[12], "guide_herd/start");
					iLocal_1324++;
				}
				break;
			
			case 0x00000004:
				if (iLocal_927 > 11)
				{
					if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
					{
						if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
						{
							iLocal_1324 = 5;
						}
						else if ((!Function_619(&Local_1734 + 64, &iLocal_4 + 1304) && !Function_619(&Local_1734 + 72, &iLocal_4 + 1304)) && !Function_619(&Local_1734 + 80, &iLocal_4 + 1304))
						{
							if (IS_ACTION_NODE_PLAYING(&iLocal_4 + 128[12], "guide_herd/start"))
							{
								RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[12], 1);
							}
						}
						else if (!IS_ACTION_NODE_PLAYING(&iLocal_4 + 128[12], "guide_herd/start"))
						{
							SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[12], "guide_herd", 0);
							SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 128[12], "guide_herd/start");
						}
					}
				}
				break;
			
			case 0x00000005:
				TASK_CLEAR(&iLocal_4 + 128[12]);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[12], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 2480, &uLocal_1580);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_1580, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[12], bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 128[12], true);
				iLocal_1324++;
				break;
			
			case 0x00000006:
				iLocal_1324++;
				break;
			}
	}
	return;
}

bool Function_619(int iParam0, int iParam1) //Position: 0x30BB2 / 199602
{
	bool bVar0;
	var uVar1;
	
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
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
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

void Function_620() //Position: 0x30C40 / 199744
{
	if (IS_ACTOR_VALID(&iLocal_4 + 128[02]))
	{
		switch (iLocal_1323)
		{
			case 0x00000000:
				iLocal_1323++;
				break;
			
			case 0x00000001:
				MAKE_ACTOR_READY_FOR_ACTION(&iLocal_4 + 128[02], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1608[4], &uLocal_1577);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_1577, 1);
				TASK_FACE_COORD(0, &iLocal_4 + 2504, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[02], bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 128[02], true);
				iLocal_1323++;
				break;
			
			case 0x00000002:
				if (iLocal_927 > 9)
				{
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FACE_COORD(0, &iLocal_4 + 2504, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[02], bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 128[02], true);
					iLocal_1323++;
				}
				break;
			
			case 0x00000003:
				if (GET_TASK_STATUS(&iLocal_4 + 128[02], 23) == 0)
				{
					SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[02], "guide_herd", 0);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 128[02], "guide_herd/start");
					iLocal_1323++;
				}
				break;
			
			case 0x00000004:
				if (iLocal_927 > 11)
				{
					if ((SQUAD_IS_VALID(&Local_1734 + 64) && SQUAD_IS_VALID(&Local_1734 + 72)) && SQUAD_IS_VALID(&Local_1734 + 80))
					{
						if ((SQUAD_GET_SIZE(&Local_1734 + 64) != 0 && SQUAD_GET_SIZE(&Local_1734 + 72) != 0) && SQUAD_GET_SIZE(&Local_1734 + 80) != 0)
						{
							iLocal_1323 = 5;
						}
						else if ((!Function_619(&Local_1734 + 64, &iLocal_4 + 1296) && !Function_619(&Local_1734 + 72, &iLocal_4 + 1296)) && !Function_619(&Local_1734 + 80, &iLocal_4 + 1296))
						{
							if (IS_ACTION_NODE_PLAYING(&iLocal_4 + 128[02], "guide_herd/start"))
							{
								RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[02], 1);
							}
						}
						else if (!IS_ACTION_NODE_PLAYING(&iLocal_4 + 128[02], "guide_herd/start"))
						{
							SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[02], "guide_herd", 0);
							SET_ACTION_NODE_FOR_ACTOR(&iLocal_4 + 128[02], "guide_herd/start");
						}
					}
				}
				break;
			
			case 0x00000005:
				TASK_CLEAR(&iLocal_4 + 128[02]);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 128[02], 1);
				GET_OBJECT_POSITION(&iLocal_4 + 2464, &uLocal_1577);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &uLocal_1577, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 128[02], bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&iLocal_4 + 128[02], true);
				iLocal_1323++;
				break;
			
			case 0x00000006:
				iLocal_1323++;
				break;
			}
	}
	return;
}

void Function_621() //Position: 0x30F31 / 200497
{
	if (!iLocal_1597)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46816[0]))
			{
				Function_605(&uLocal_1338);
			}
			else
			{
				iLocal_1315 = 0;
				iLocal_1597 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_636();
		Function_597();
		Function_635();
		Function_627();
		Function_541();
		if (iLocal_927 < 8)
		{
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1388))
			{
				if (Function_626(&Global_54076, &iLocal_4 + 1032))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_192();
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 9;
				}
			}
		}
		Function_249(&iLocal_4 + 1608[6]);
		Function_431(StackVal, "$/cutscene/HOME01_CS02_C/HOME01_CS02_C", &uLocal_1311, Function_249(&iLocal_4 + 1608[6]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_933, true);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_931, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1386))
			{
				TASK_STAND_STILL(&bLocal_1386, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1386, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1388))
			{
				TASK_STAND_STILL(&bLocal_1388, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1388, true);
			}
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(39);
			if (iLocal_947[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_361();
				bLocal_928 = Global_46816[0];
				if (!Function_385(bLocal_928))
				{
					Function_360(&Local_750);
				}
				Function_358(&Global_54076, &iLocal_4 + 1528[0], 1, 1, 1);
				Function_229(&iLocal_935);
				iLocal_927 = 1;
			}
			else
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1336 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = 15;
				bLocal_1331 = false;
				Function_388(Local_750, 15);
				PRINTINT(bLocal_1330);
				PRINTNL();
				PRINTINT(bLocal_1331);
				PRINTNL();
				Local_1734.f_120 = 0;
				Local_1734.f_124 = 0;
				bLocal_1319 = Local_1734.f_120;
				bLocal_1320 = Local_1734.f_124;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_1320) / TO_FLOAT(bLocal_1319)));
				PRINTNL();
				bLocal_1319 = Local_1734.f_120;
				Global_53524.f_176 = bLocal_1319;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1320 = Local_1734.f_124;
				Global_53524.f_180 = bLocal_1320;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_624();
				if (IS_ACTOR_VALID(&bLocal_1386))
				{
					TASK_USE_GRINGO(&bLocal_1386, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&bLocal_1386, false);
				}
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					Function_358(&bLocal_1388, &iLocal_4 + 1528[2], 1, 1, 1);
					if (IS_ACTOR_VALID(&(uLocal_1394[0])))
					{
						Function_358(&(uLocal_1394[0]), &iLocal_4 + 1528[7], 1, 1, 1);
						SET_ACTORS_HORSE(&bLocal_1388, &(uLocal_1394[0]));
						SET_MOST_RECENT_MOUNT(&bLocal_1388, &(uLocal_1394[0]));
					}
				}
				if (iLocal_947[0] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							Function_358(&bLocal_933, &iLocal_4 + 1528[5], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_933))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_933);
							}
						}
						else
						{
							bLocal_933 = Function_297(1, 1, 0, 0, 0, 0, 1, 0);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_931))
					{
						if (IS_ACTOR_VALID(&(uLocal_1390[0])))
						{
							Function_358(&(uLocal_1390[0]), &iLocal_4 + 1528[6], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_931) && !IS_ACTOR_MOUNTED(&(uLocal_1390[0])))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_931, &(uLocal_1390[0]));
							}
						}
					}
				}
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1386, "Drew", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[315]), &bLocal_1388, "RanchersDaughter", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[415]), &Local_1734 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[515]), &Local_1734 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[615]), &Local_1734 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[715]), &Local_1734 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_420(&(Local_1031[115]), 1024, 1);
				Function_420(&(Local_1031[215]), 1024, 1);
				if (Function_611(StackVal, StackVal, StackVal, StackVal, StackVal, Local_750, bLocal_926))
				{
					Function_229(&iLocal_935);
					iLocal_927 = 3;
				}
				else
				{
					Function_229(&iLocal_935);
					iLocal_927 = 4;
				}
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46736[2], Function_251(bLocal_926), 2);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000003:
			if (Function_284("$/cutscene/HOME01_CS02/HOME01_CS02", &iLocal_914, &Local_750, &bLocal_926, 95588, 95323, 94370, 93596, 93255, 60209, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(&Global_54076))
			{
			}
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				SET_ACTOR_HEALTH(&bLocal_933, GET_ACTOR_MAX_HEALTH(&bLocal_933));
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				SET_ACTOR_HEALTH(&bLocal_931, 50.0f);
			}
			if (IS_ACTOR_VALID(&bLocal_1386))
			{
				SET_ACTOR_HEALTH(&bLocal_1386, 50.0f);
			}
			if (IS_ACTOR_VALID(&bLocal_1388))
			{
				SET_ACTOR_HEALTH(&bLocal_1388, 50.0f);
			}
			if (HUD_IS_FADED())
			{
				Function_229(&iLocal_935);
				iLocal_927 = 5;
			}
			else
			{
				if (IS_ACTOR_VALID(&bLocal_1386))
				{
					SET_ACTOR_HEALTH(&bLocal_1386, 50.0f);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(&bLocal_1386, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2784), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1386, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1386, 2);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_931) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_229(&iLocal_935);
						iLocal_927 = 104;
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
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				if (IS_ACTOR_VALID(&bLocal_1386))
				{
					SET_ACTOR_HEALTH(&bLocal_1386, 50.0f);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_USE_GRINGO(&bLocal_1386, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2784), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1386, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_1386, 2);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(&bLocal_1388))
				{
					CLEAR_ACTOR_MAX_SPEED(&bLocal_1388);
					MEMORY_PREFER_RIDING(&bLocal_1388, false);
					Function_236(3, 1, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1388, "home01_horse_tend", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1388, "home01_horse_tend/horse_tend");
					if (IS_ACTOR_VALID(&(uLocal_1394[0])))
					{
						SET_ALLOW_RIDE_BY_PLAYER(&(uLocal_1394[0]), 0);
						TASK_STAND_STILL(&(uLocal_1394[0]), -1.0f, 1, 0);
						TASK_PRIORITY_SET(&(uLocal_1394[0]), true);
					}
				}
				Function_623();
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				Function_403("home01_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_395(&iLocal_943, (4.0f * 60.0f), (4.0f * 200.0f), &bLocal_1388, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_974, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_192();
					Function_235(&iLocal_1494);
				}
			}
			else if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_192();
					Function_235(&iLocal_1494);
				}
				if (IS_BLIP_VALID(Function_610(3)))
				{
					Function_236(3, 0, 1);
				}
			}
			else if (!IS_BLIP_VALID(Function_610(3)))
			{
				Function_236(3, 1, 1);
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
			}
			Function_229(&iLocal_935);
			iLocal_927 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_281(&iLocal_935) <= 3.0f)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_253();
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			else if (IS_ACTOR_VALID(&(uLocal_1394[0])))
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					if (Function_389(&Global_54076, &(uLocal_1394[0]), 6.0f))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 106;
					}
				}
				else if (Function_389(&Global_54076, &(uLocal_1394[0]), 3.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
			}
			Function_622();
			iLocal_947[1] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = 2;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_622() //Position: 0x31A4B / 203339
{
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		RELEASE_ACTOR(&bLocal_1386);
	}
	return;
}

void Function_623() //Position: 0x31A62 / 203362
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_ShoutsGoodByeDrew", "Home01_ShoutsGoodByeDrew", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_624() //Position: 0x31ABC / 203452
{
	struct<2> Var0;
	struct<2> Var2;
	
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1528[6];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	cLocal_1640[0] = 977;
	cLocal_1500[0] = &iLocal_4 + 1528[7];
	if (!SQUAD_IS_VALID(&iLocal_1690))
	{
		iLocal_1690 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE02"));
		if (SQUAD_IS_VALID(&iLocal_1690))
		{
			SQUAD_GOALS_CLEAR(&iLocal_1690);
			Function_352(&iLocal_1690, &uLocal_1394, &cLocal_1500, &cLocal_1640, "SHORSE02", 1);
			Function_351(&iLocal_1690, 0);
			Function_350(&iLocal_1690, 3);
			Function_349(&iLocal_1690, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1690, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_1386))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 1528[3], &Var0);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[3], &Var2);
		bLocal_1386 = CREATE_ACTOR_IN_LAYOUT(&cLocal_748, "HOME01_DREW_MAC", 608, Var0, Var2);
		if (IS_ACTOR_VALID(&bLocal_1386))
		{
			SET_ACTOR_FACTION(&bLocal_1386, 20);
			SET_ACTOR_HEALTH(&bLocal_1386, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			Function_298(&bLocal_1386, 0, 0, 0, 1, 0, 1);
			SNAP_ACTOR_TO_GRINGO(&bLocal_1386, &iLocal_4 + 2768, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&bLocal_1386, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768), "UseCase1", 4294967295, 1);
			TASK_PRIORITY_SET(&bLocal_1386, false);
		}
	}
	Function_625();
	return;
}

void Function_625() //Position: 0x31CC3 / 203971
{
	Function_347();
	if (!SQUAD_IS_VALID(&Local_1734 + 64))
	{
		*(&Local_1734 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1734 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1734 + 64);
			Function_345(&Local_1734, &cLocal_748, &iLocal_4 + 2336, &iLocal_1626, 5, 1.0f, 3.0f, 1,5f, 1);
			Function_351(&Local_1734 + 64, 0);
			Function_344(&Local_1734 + 64, 1);
			Function_343(&Local_1734 + 64, 0);
			Function_342(&Local_1734 + 64, 0);
			Function_341(&Local_1734 + 64, "AllowLassoHorseMinigame", 0);
			Function_340(&Local_1734 + 64, 38.0f);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1734 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1224, -1.0f);
		}
	}
	return;
}

bool Function_626(var uParam0, int[] iParam1) //Position: 0x31DA1 / 204193
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				if (IS_ACTOR_IN_VOLUME(&uParam0, &(iParam1[iVar0])))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void Function_627() //Position: 0x31DEF / 204271
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 <= 8 && IS_ACTOR_RIDING(&Global_54076))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_634();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_628(1, 1, 0x42180000, 0x41c80000);
				if (iLocal_1334 == 2)
				{
					if (!iLocal_1612)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1334 = 3;
						}
					}
					if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1388))
					{
						if (Function_626(&Global_54076, &iLocal_4 + 1032))
						{
							iLocal_1334 = 4;
						}
					}
				}
				break;
			
			case 0x00000003:
				Function_628(1, 1, 0x42180000, 0x41c80000);
				if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1388))
				{
					if (Function_626(&Global_54076, &iLocal_4 + 1032))
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000004:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_628(bool bParam0, bool bParam1, float fParam2, int iParam3) //Position: 0x31EFD / 204541
{
	if (Function_281(&iLocal_1474) <= 6.0f)
	{
		Function_633();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1614)
				{
					iLocal_1614 = 1;
					if (iLocal_1334 != 2 && IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						iLocal_1334 = 1;
					}
					else
					{
						PAUSE_SCRIPTED_CONVERSATION(1, 0);
					}
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonGetsOfHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
				else if (Function_281(&iLocal_939) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonNoGetOnHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1614)
				{
					iLocal_1614 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_933, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
			if (!Function_389(&Global_54076, &bLocal_931, &fParam2))
			{
				if (&bParam1)
				{
					if (!bLocal_1613)
					{
						if (!iLocal_1612)
						{
							if (bLocal_926 == 1)
							{
								bLocal_1526 = &iLocal_4 + 2904;
							}
							else
							{
								bLocal_1526 = &iLocal_4 + 2904;
							}
							if (Function_632(&Global_54076, &bLocal_931, &bLocal_1526))
							{
								iLocal_1612 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_631();
								Function_229(&iLocal_1474);
							}
							else
							{
								iLocal_1612 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								Function_630();
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, &iParam3))
			{
				if (&bParam1)
				{
					if (iLocal_1612)
					{
						iLocal_1612 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_629();
						Function_229(&iLocal_1474);
					}
				}
			}
		}
	}
}

void Function_629() //Position: 0x321AF / 205231
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_CatchesUpJon", "Home01_CatchesUpJon", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_630() //Position: 0x321FF / 205311
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_KeepUpBoy", "Home01_KeepUpBoy", 3, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_631() //Position: 0x32249 / 205385
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_2FarAhead", "Home01_2FarAhead", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_632(var uParam0, int iParam1, int iParam2) //Position: 0x32293 / 205459
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

void Function_633() //Position: 0x322F2 / 205554
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_931)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &bLocal_1388)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_593();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_593();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_assaultsBonnie", "Home01_assaultsBonnie", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if (&iVar0 == &uLocal_1390[0])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_443();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_443();
					Function_229(&iLocal_1474);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnJack", "Home01_GunOnJack", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
		else if ((Function_479(&iVar0, &Local_1734 + 64, 0) || Function_479(&iVar0, &Local_1734 + 80, 0)) || Function_479(&iVar0, &Local_1734 + 72, 0))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_478();
						Function_229(&iLocal_1474);
					}
					else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonLassosCow", "Home01_JonLassosCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_592();
					Function_229(&iLocal_1474);
				}
			}
		}
		else if (IS_ACTOR_HUMAN(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
						Function_229(&iLocal_1474);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_592();
						Function_229(&iLocal_1474);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_592();
					Function_229(&iLocal_1474);
				}
			}
			else if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_GunOnChar", "Home01_GunOnChar", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_229(&iLocal_1474);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_689(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_ShotsGunRandMac", "Home01_ShotsGunRandMac", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
		}
	}
	return;
}

void Function_634() //Position: 0x3271D / 206621
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_JjTalk2CBonnie_v1_AA", "Home01_JjTalk2CBonnie_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_JjTalk2CBonnie_v1_AB", "Home01_JjTalk2CBonnie_v1_AB", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_JjTalk2CBonnie_v1_AC", "Home01_JjTalk2CBonnie_v1_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_JjTalk2CBonnie_v1_AD", "Home01_JjTalk2CBonnie_v1_AD", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_JjTalk2CBonnie_v1_AE", "Home01_JjTalk2CBonnie_v1_AE", 0, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_635() //Position: 0x32891 / 206993
{
	if (IS_ACTOR_VALID(&bLocal_1386))
	{
		switch (iLocal_1322)
		{
			case 0x00000000:
				iLocal_1322++;
				break;
			
			case 0x00000001:
				iLocal_1322++;
				break;
			
			case 0x00000002:
				iLocal_1322++;
				break;
			}
	}
	return;
}

void Function_636() //Position: 0x328DC / 207068
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				MEMORY_PREFER_RIDING(&bLocal_931, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				AI_RIDING_SET_ATTRIBUTE(&bLocal_931, 2, 0,15f);
				SET_ACTORS_HORSE(&bLocal_931, &(uLocal_1390[0]));
				CLEAR_ACTOR_MIN_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
				SET_ALLOW_RIDE_BY_PLAYER(&(uLocal_1390[0]), 0);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1,5f, 0, 0);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 2904, 4,5f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000002:
				iLocal_1318++;
				break;
			
			case 0x00000003:
				iLocal_1318++;
				break;
			
			case 0x00000004:
				iLocal_1318++;
				break;
			}
	}
	return;
}

void Function_637() //Position: 0x329E0 / 207328
{
	if (!iLocal_1622)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_382(&iLocal_1356);
			}
			else
			{
				iLocal_1316 = 0;
				iLocal_1622 = 0;
			}
		}
	}
	if (!iLocal_1597)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46816[0]))
			{
				Function_605(&uLocal_1338);
			}
			else
			{
				iLocal_1315 = 0;
				iLocal_1597 = 0;
			}
		}
	}
	if (!iLocal_1617)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_381();
			}
			else
			{
				iLocal_1335 = 0;
				iLocal_1617 = 0;
			}
		}
	}
	if (!iLocal_1620)
	{
		if (iLocal_927 > 2)
		{
			if (Function_385(Global_46914[1]))
			{
				Function_376();
			}
			else
			{
				iLocal_1337 = 0;
				iLocal_1620 = 0;
			}
		}
	}
	Function_375(&cLocal_748);
	if (((iLocal_927 < 5 && iLocal_927 > 105) && !iLocal_927 != 104) && !iLocal_927 != 103)
	{
		Function_447();
		Function_445();
		Function_664();
		Function_663();
		Function_542(1, 0);
		Function_541();
		Function_649();
		if (IS_ACTOR_VALID(&bLocal_933))
		{
			if (!IS_ACTOR_ALIVE(&bLocal_933))
			{
				bLocal_974 = true;
				if (GET_LAST_ATTACKER(&bLocal_933) == &Global_54076)
				{
					Function_242("Horse_killed");
				}
				else
				{
					Function_242("Horse_dead");
				}
			}
		}
		if (iLocal_927 <= 11 && iLocal_927 >= 12)
		{
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				if (GET_MOUNT(&Global_54076) == &bLocal_933)
				{
					if (IS_BLIP_VALID(&uLocal_1486))
					{
						REMOVE_BLIP(&uLocal_1486);
					}
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
						Function_235(&iLocal_1494);
					}
					TASK_CLEAR(&bLocal_933);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 13;
				}
			}
		}
		Function_249(&iLocal_4 + 1528[5]);
		Function_431(StackVal, "$/cutscene/HOME01_CS02/HOME01_CS02", &uLocal_1311, Function_249(&iLocal_4 + 1528[5]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_927)
	{
		case 0x00000000:
			Function_371(0);
			if (Function_359(&Local_750))
			{
				iLocal_1335 = 0;
				iLocal_1337 = 0;
				iLocal_1316 = 0;
				iLocal_1620 = 0;
				iLocal_1617 = 0;
				iLocal_1597 = 0;
				iLocal_1622 = 0;
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			uLocal_1732 = Function_648(1);
			ADD_TIME(&uLocal_1732, 0, 0, 42, 0);
			SET_TIME_OF_DAY(&uLocal_1732);
			Function_8(GET_TIME_OF_DAY());
			PRINTNL();
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_933, true);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_931, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1384))
			{
				TASK_STAND_STILL(&bLocal_1384, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1384, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1382))
			{
				TASK_STAND_STILL(&bLocal_1382, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1382, true);
			}
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_361();
			bLocal_928 = Global_46914[1];
			if (!Function_385(bLocal_928))
			{
				Function_360(&Local_750);
			}
			Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
			if (!iLocal_1624)
			{
				iLocal_1624 = 1;
				Function_138(15, 1, 0, 0, 0);
				Function_128(15, 0, 1);
				if (Function_647(15, 0, 0))
				{
				}
				if (Function_132(15))
				{
					if (Function_148(15))
					{
						if (Function_133(15))
						{
						}
					}
				}
			}
			Function_229(&iLocal_935);
			iLocal_927 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(bLocal_928) || bLocal_928 != 4294967295))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_354())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_1315 = 0;
				iLocal_1316 = 0;
				iLocal_1318 = 0;
				iLocal_1322 = 0;
				iLocal_1317 = 0;
				iLocal_1323 = 0;
				iLocal_1324 = 0;
				iLocal_1334 = 0;
				iLocal_1336 = 0;
				iLocal_1328 = 0;
				iLocal_1329 = 0;
				iLocal_1595 = 0;
				iLocal_1596 = 0;
				iLocal_1597 = 0;
				iLocal_1617 = 0;
				iLocal_976 = 0;
				iLocal_1612 = 0;
				bLocal_1613 = false;
				iLocal_1614 = 0;
				iLocal_1615 = 0;
				iLocal_1616 = 0;
				iLocal_1621 = 0;
				iLocal_1623 = 0;
				Function_430(&bLocal_1599);
				bLocal_1330 = 15;
				bLocal_1331 = false;
				Function_388(Local_750, 15);
				PRINTINT(bLocal_1330);
				PRINTNL();
				PRINTINT(bLocal_1331);
				PRINTNL();
				Local_1734.f_120 = 0;
				Local_1734.f_124 = 0;
				bLocal_1319 = Local_1734.f_120;
				bLocal_1320 = Local_1734.f_124;
				PRINTINT(bLocal_1319);
				PRINTNL();
				PRINTINT(bLocal_1320);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_1320) / TO_FLOAT(bLocal_1319)));
				PRINTNL();
				bLocal_1319 = Local_1734.f_120;
				Global_53524.f_176 = bLocal_1319;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1320 = Local_1734.f_124;
				Global_53524.f_180 = bLocal_1320;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_646();
				Function_645();
				if (Function_359(&Local_750))
				{
					iLocal_1337 = 0;
					iLocal_1620 = 0;
					if (IS_VOLUME_VALID(&iLocal_4 + 1432))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1432, 15);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_GRINGO_VALID(&(uLocal_1706[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_933, GET_OBJECT_FROM_GRINGO(&(uLocal_1706[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_933, &(uLocal_1706[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_933, true);
					}
				}
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					Function_358(&(uLocal_1390[0]), &iLocal_4 + 1464[5], 1, 1, 1);
					TASK_STAND_STILL(&(uLocal_1390[0]), -1.0f, 0, 0);
					TASK_PRIORITY_SET(&(uLocal_1390[0]), true);
				}
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 176[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 176[1]);
				Function_419(&(Local_1031[015]), &bLocal_931, "Son", 1, 0x5f5e100, 1);
				Function_419(&(Local_1031[115]), &bLocal_1384, "Wife", 0, 0x5f5e100, 1);
				Function_419(&(Local_1031[215]), &bLocal_1382, "Uncle", 0, 0x5f5e100, 1);
				Function_418(&(Local_1031[315]));
				Function_418(&(Local_1031[415]));
				Function_418(&(Local_1031[515]));
				Function_418(&(Local_1031[615]));
				Function_418(&(Local_1031[715]));
				Function_418(&(Local_1031[815]));
				Function_229(&iLocal_935);
				iLocal_927 = 4;
				Function_248(bLocal_926);
				Function_410(StackVal, Function_248(bLocal_926), bLocal_926, Global_46754[0], Function_251(bLocal_926), 1);
				bLocal_1333 = Function_409();
				PRINTINT(bLocal_1333);
				PRINTNL();
			}
			break;
		
		case 0x00000004:
			if (Global_42825 == 15)
			{
				if (IS_DOOR_VALID(&(iLocal_1356[7])))
				{
					if (!IS_PHYSINST_VALID(&uLocal_1730))
					{
						uLocal_1730 = GET_PHYSINST_FROM_OBJECT(&(iLocal_1356[7]));
						if (IS_PHYSINST_VALID(&uLocal_1730))
						{
							SHOW_PHYSINST(&uLocal_1730);
						}
					}
					else
					{
						SHOW_PHYSINST(&uLocal_1730);
					}
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					SET_ACTOR_HEALTH(&bLocal_933, GET_ACTOR_MAX_HEALTH(&bLocal_933));
				}
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					Function_358(&(uLocal_1390[0]), &iLocal_4 + 1464[5], 1, 1, 1);
					TASK_STAND_STILL(&(uLocal_1390[0]), -1.0f, 0, 0);
					TASK_PRIORITY_SET(&(uLocal_1390[0]), true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					SET_ACTOR_HEALTH(&bLocal_931, 50.0f);
					Function_358(&bLocal_931, &iLocal_4 + 1464[2], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1384))
				{
					SET_ACTOR_HEALTH(&bLocal_1384, 50.0f);
					Function_358(&bLocal_1384, &iLocal_4 + 1464[3], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1382))
				{
					SET_ACTOR_HEALTH(&bLocal_1382, 50.0f);
					Function_358(&bLocal_1382, &iLocal_4 + 1464[1], 1, 1, 1);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 5;
			}
			else if (Function_281(&iLocal_935) <= 13.0f)
			{
				LOG_ERROR("HOME01 - Timed out waiting for the rancher's outfit to be switched.");
				Function_138(15, 1, 0, 0, 0);
				Function_128(15, 0, 1);
				if (Function_647(15, 0, 0))
				{
				}
				if (Function_132(15))
				{
					if (Function_148(15))
					{
						if (Function_133(15))
						{
						}
					}
				}
				if (Global_42825 == 15)
				{
				}
				if (IS_DOOR_VALID(&(iLocal_1356[7])))
				{
					if (!IS_PHYSINST_VALID(&uLocal_1730))
					{
						uLocal_1730 = GET_PHYSINST_FROM_OBJECT(&(iLocal_1356[7]));
						if (IS_PHYSINST_VALID(&uLocal_1730))
						{
							SHOW_PHYSINST(&uLocal_1730);
						}
					}
					else
					{
						SHOW_PHYSINST(&uLocal_1730);
					}
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					SET_ACTOR_HEALTH(&bLocal_933, GET_ACTOR_MAX_HEALTH(&bLocal_933));
				}
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					Function_358(&(uLocal_1390[0]), &iLocal_4 + 1464[5], 1, 1, 1);
					TASK_STAND_STILL(&(uLocal_1390[0]), -1.0f, 0, 0);
					TASK_PRIORITY_SET(&(uLocal_1390[0]), true);
				}
				if (IS_ACTOR_VALID(&bLocal_931))
				{
					SET_ACTOR_HEALTH(&bLocal_931, 50.0f);
					Function_358(&bLocal_931, &iLocal_4 + 1464[2], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1384))
				{
					SET_ACTOR_HEALTH(&bLocal_1384, 50.0f);
					Function_358(&bLocal_1384, &iLocal_4 + 1464[3], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1382))
				{
					SET_ACTOR_HEALTH(&bLocal_1382, 50.0f);
					Function_358(&bLocal_1382, &iLocal_4 + 1464[1], 1, 1, 1);
				}
				Function_229(&iLocal_935);
				iLocal_927 = 5;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (Function_408(&bLocal_931, 1, 0x41700000))
				{
					if (IS_ACTOR_VALID(&bLocal_1382))
					{
						TASK_CLEAR(&bLocal_1382);
					}
					if (IS_ACTOR_VALID(&bLocal_1384))
					{
						TASK_CLEAR(&bLocal_1384);
					}
					Function_229(&iLocal_935);
					iLocal_927 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_229(&iLocal_935);
			iLocal_927 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
				Function_229(&iLocal_935);
				iLocal_927 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				UI_ENABLE("LoadingSpinner");
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_236(12, 1, 1);
				Function_229(&iLocal_935);
				iLocal_927 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_281(&iLocal_935) <= 1.0f)
			{
				Function_403("home01_obj00a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_395(&iLocal_943, (4.0f * 60.0f), (4.0f * 200.0f), &bLocal_931, "Son_return", "Son_abandoned", &bLocal_974, 0, 0, 0, 325, 1))
			{
			}
			if (!iLocal_1623)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_OUTDOORS(&Global_54076))
					{
						iLocal_1623 = 1;
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 15.0f))
				{
					iLocal_1598 = 1;
					if (IS_BLIP_VALID(&uLocal_1486))
					{
						REMOVE_BLIP(&uLocal_1486);
					}
					Function_236(12, 0, 1);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 9;
				}
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, (4.0f * 6.0f)) && IS_ACTOR_RIDING(&Global_54076))
				{
					iLocal_1598 = 1;
					if (IS_BLIP_VALID(&uLocal_1486))
					{
						REMOVE_BLIP(&uLocal_1486);
					}
					Function_236(12, 0, 1);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 12;
				}
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				if (!IS_BLIP_VALID(&uLocal_1486))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_933)))
					{
						uLocal_1486 = ADD_BLIP_FOR_ACTOR(&bLocal_933, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&uLocal_1486))
						{
						}
					}
				}
			}
			SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "GREET_P", &Global_54076, 1, 0, 0, 1, 2);
			Function_229(&iLocal_935);
			iLocal_927 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				Function_644();
				Function_229(&iLocal_935);
				iLocal_927 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_281(&iLocal_935) <= 3.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (!GET_MOUNT(&Global_54076) != &bLocal_933)
					{
						Function_403("home01_obj00b", 7,5f, 1, 2, 0, 0, 0, 0);
					}
				}
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_395(&iLocal_943, (4.0f * 60.0f), (4.0f * 200.0f), &bLocal_931, "Son_wait", "Son_abandoned", &bLocal_974, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_235(&iLocal_1494);
				}
				if (!IS_BLIP_VALID(Function_610(12)))
				{
					Function_236(12, 1, 1);
				}
			}
			else
			{
				if (IS_BLIP_VALID(Function_610(12)))
				{
					Function_236(12, 0, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (!IS_BLIP_VALID(&uLocal_1486))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_933)))
						{
							uLocal_1486 = ADD_BLIP_FOR_ACTOR(&bLocal_933, 334, 0, 2, 0);
							if (IS_BLIP_VALID(&uLocal_1486))
							{
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000D:
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
			if (!IS_OBJECT_VALID(&iLocal_1494))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1528[5], &Local_1550);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[5], &Local_1553);
				iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, &Global_54076, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
				}
			}
			GET_OBJECT_POSITION(&iLocal_4 + 2328, &Local_1559);
			Function_642(StackVal, Local_1559, 0, 48, 1);
			Function_229(&iLocal_935);
			iLocal_927 = 14;
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_164(Global_46736[2]);
				Function_403("home01_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_935);
				Function_229(&iLocal_939);
				Function_229(&iLocal_943);
				iLocal_927 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_641(&iLocal_943, &iLocal_4 + 1400, &iLocal_4 + 1408, "home01_obj01", "home01_abandoned", &bLocal_974, 0, 0, 0, 330, 1))
			{
				if (!IS_OBJECT_VALID(&iLocal_1494))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1528[5], &Local_1550);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[5], &Local_1553);
					iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, &Global_54076, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(&iLocal_1494))
					{
					}
					GET_OBJECT_POSITION(&iLocal_4 + 2328, &Local_1559);
					Function_642(StackVal, Local_1559, 0, 48, 1);
				}
			}
			else if (Function_456(&iLocal_943, 60.0f, &bLocal_933, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_974, 0, &cLocal_748, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1486))
				{
					REMOVE_BLIP(&uLocal_1486);
				}
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					Function_192();
					Function_235(&iLocal_1494);
				}
			}
			else if (!IS_OBJECT_VALID(&iLocal_1494))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1528[5], &Local_1550);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[5], &Local_1553);
				iLocal_1494 = Function_407(StackVal, StackVal, &cLocal_748, "HOME01GATEWAY01", Local_1550, Local_1553, &Global_54076, (5.0f * 2,5f), 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
				}
				GET_OBJECT_POSITION(&iLocal_4 + 2328, &Local_1559);
				Function_642(StackVal, Local_1559, 0, 48, 1);
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1424))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1424))
					{
						if (IS_ACTOR_VALID(&bLocal_933))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_933)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_933));
							}
						}
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							Function_235(&iLocal_1494);
						}
						Function_192();
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_253();
						Function_229(&iLocal_935);
						iLocal_927 = 106;
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_OBJECT_VALID(&iLocal_1494))
				{
					if (Function_392(&Global_54076, &iLocal_1494, 10.0f))
					{
						if (IS_BLIP_VALID(&uLocal_1486))
						{
							REMOVE_BLIP(&uLocal_1486);
						}
						if (IS_OBJECT_VALID(&iLocal_1494))
						{
							Function_235(&iLocal_1494);
						}
						Function_192();
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_935);
						iLocal_927 = 16;
					}
				}
			}
			break;
		
		case 0x00000010:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_GO_NEAR_OBJECT(&Global_54076, &iLocal_4 + 1528[5], 2.0f, 1, 0, 1);
				TASK_PRIORITY_SET(&Global_54076, true);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				TASK_GO_NEAR_OBJECT(&bLocal_931, &iLocal_4 + 1528[6], 2.0f, 1, 0, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
			}
			Function_229(&iLocal_935);
			iLocal_927 = 17;
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || (Function_281(&iLocal_935) <= 6.0f && Function_281(&iLocal_935) <= 2.0f))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			else if (!IS_SCRIPTED_SPEECH_PLAYING(&bLocal_931) || (Function_281(&iLocal_935) <= 6.0f && Function_281(&iLocal_935) <= 2.0f))
			{
				Function_229(&iLocal_935);
				iLocal_927 = 106;
			}
			else if (IS_ACTOR_VALID(&bLocal_1386))
			{
				if (Function_389(&Global_54076, &bLocal_1386, 5.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_253();
					Function_229(&iLocal_935);
					iLocal_927 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				TASK_CLEAR(&Global_54076);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&Global_54076, true);
			}
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
				TASK_CLEAR(&bLocal_931);
				TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_931, true);
			}
			if (IS_ACTOR_VALID(&(uLocal_1390[0])))
			{
				HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&(uLocal_1390[0]), 0);
			}
			if (iLocal_1615)
			{
				iLocal_1615 = 0;
				STREAMING_UNLOAD_BOUNDS();
			}
			Function_638();
			iLocal_947[0] = 1;
			Function_229(&iLocal_935);
			bLocal_926 = true;
			iLocal_927 = 0;
			break;
	}
	return;
}

void Function_638() //Position: 0x33CED / 212205
{
	Function_640();
	Function_639();
	return;
}

void Function_639() //Position: 0x33CF9 / 212217
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1384);
	Function_225(11, 1, 0, 1, 1);
	return;
}

void Function_640() //Position: 0x33D11 / 212241
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1382);
	Function_225(13, 1, 0, 1, 1);
	return;
}

bool Function_641(struct<2> Param0, var uParam2, var uParam3, char* cParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x33D29 / 212265
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&uParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &uParam2))
	{
		Function_242(&cParam4);
		uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_401(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_403(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_400(64);
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_399(&uParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_399(&uParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &uParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_401(64))
	{
		Function_398(64);
		if (!Function_397())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_396();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&uParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_399(&uParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_399(&uParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_642(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x33EC4 / 212676
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_643(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &bParam4;
}

void Function_643(var uParam0) //Position: 0x33F85 / 212869
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&uVar0));
		}
	}
	return;
}

void Function_644() //Position: 0x33FCE / 212942
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_JjSetItOff", "Home01_JjSetItOff", 3, 1, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_645() //Position: 0x34027 / 213031
{
	var uVar0;
	
	uVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRAILROAD_rrCurve_28", 3));
	if (IS_OBJECT_VALID(&uVar0))
	{
		SET_CURVE_WEIGHT(&uVar0, 50);
	}
	uVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve346rebuiltCurve1", 18));
	if (IS_OBJECT_VALID(&uVar0))
	{
		SET_CURVE_WEIGHT(&uVar0, 50);
	}
	uVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18));
	if (IS_OBJECT_VALID(&uVar0))
	{
		SET_CURVE_WEIGHT(&uVar0, 50);
	}
	uVar0 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18));
	if (IS_OBJECT_VALID(&uVar0))
	{
		SET_CURVE_WEIGHT(&uVar0, 50);
	}
	return;
}

void Function_646() //Position: 0x34107 / 213255
{
	cLocal_1636[0] = 980;
	cLocal_1496[0] = &iLocal_4 + 1464[5];
	if (!SQUAD_IS_VALID(&uLocal_1688))
	{
		uLocal_1688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&cLocal_748, "SHORSE01"));
		if (SQUAD_IS_VALID(&uLocal_1688))
		{
			SQUAD_GOALS_CLEAR(&uLocal_1688);
			Function_352(&uLocal_1688, &uLocal_1390, &cLocal_1496, &cLocal_1636, "SHORSE01", 1);
			Function_351(&uLocal_1688, 0);
			Function_350(&uLocal_1688, 3);
			Function_349(&uLocal_1688, 0, 0, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1688, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

bool Function_647(bool bParam0, bool bParam1, bool bParam2) //Position: 0x341A9 / 213417
{
	if (Global_42825 == bParam0)
	{
		return 1;
	}
	if (Global_42826 == bParam0)
	{
		return 1;
	}
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_133(bParam0) && !&bParam2)
	{
		return 0;
	}
	Global_42826 = bParam0;
	if (&bParam1)
	{
		Function_131(bParam0, 8192);
	}
	DECOR_SET_BOOL(&Global_54076, "playerChangeOutfits", 1);
	return 1;
}

var Function_648(bool bParam0) //Position: 0x3423E / 213566
{
	int iVar0;
	
	iVar0 = 0;
	if ((bParam0 && 33) == 1)
	{
		iVar0 = 5;
	}
	else if ((bParam0 && 3) == 2)
	{
		iVar0 = 7;
	}
	else if ((bParam0 && 6) == 4)
	{
		iVar0 = 11;
	}
	else if ((bParam0 && 12) == 8)
	{
		iVar0 = 14;
	}
	else if ((bParam0 && 24) == 16)
	{
		iVar0 = 18;
	}
	else if ((bParam0 && 48) == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

void Function_649() //Position: 0x342AA / 213674
{
	if (Function_281(&iLocal_1470) <= 0,1f)
	{
		switch (iLocal_1334)
		{
			case 0x00000000:
				iLocal_1334++;
				break;
			
			case 0x00000001:
				if (iLocal_927 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&bLocal_1384))
				{
					if (!Function_140())
					{
						if (Function_389(&Global_54076, &bLocal_1384, 8.0f))
						{
							if (Function_281(&iLocal_939) <= 10.0f)
							{
								if (!iLocal_1616)
								{
									iLocal_1616 = 1;
								}
								Function_662();
								Function_229(&iLocal_939);
							}
						}
					}
					if (iLocal_1616)
					{
						if (Function_281(&iLocal_939) <= 7.0f)
						{
							iLocal_1616 = 0;
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1382))
				{
					if (!Function_140())
					{
						if (Function_389(&Global_54076, &bLocal_1382, 8.0f))
						{
							if (Function_281(&iLocal_939) <= 15.0f)
							{
								Function_661();
								Function_229(&iLocal_939);
							}
						}
					}
				}
				if (iLocal_927 > 12)
				{
					Function_229(&iLocal_939);
					iLocal_1334++;
				}
				break;
			
			case 0x00000003:
				Function_657(0, 1, 0x42180000, 0x41c80000);
				if (!Function_140())
				{
					if (Function_281(&iLocal_939) <= 10.0f)
					{
						Function_656();
						Function_229(&iLocal_939);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_933)
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000004:
				if (iLocal_927 > 15)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_VOLUME_VALID(&iLocal_4 + 904[0]))
						{
							if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 904[0]))
							{
								if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (bLocal_1333 == 0)
									{
										Function_655();
									}
									else if (bLocal_1333 == 1)
									{
										Function_654();
									}
									else if (bLocal_1333 == 2)
									{
										Function_653();
									}
									else if (bLocal_1333 == 3)
									{
										Function_652();
									}
									else if (bLocal_1333 > 4)
									{
										Function_651();
									}
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_1334++;
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334 = 6;
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				break;
			
			case 0x00000006:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				if (Function_281(&iLocal_939) <= 8.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334 = 7;
				}
				break;
			
			case 0x00000007:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_1333 == 0)
					{
						Function_654();
					}
					else if (bLocal_1333 == 1)
					{
						Function_653();
					}
					else if (bLocal_1333 == 2)
					{
						Function_652();
					}
					else if (bLocal_1333 == 3)
					{
						Function_651();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000008:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334 = 9;
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				break;
			
			case 0x00000009:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				if (Function_281(&iLocal_939) <= 8.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_1333 == 0)
					{
						Function_653();
					}
					else if (bLocal_1333 == 1)
					{
						Function_652();
					}
					else if (bLocal_1333 == 2)
					{
						Function_651();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x0000000B:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334 = 12;
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				break;
			
			case 0x0000000C:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				if (Function_281(&iLocal_939) <= 8.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334 = 13;
				}
				break;
			
			case 0x0000000D:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_1333 == 0)
					{
						Function_652();
					}
					else if (bLocal_1333 == 1)
					{
						Function_651();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x0000000E:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334 = 15;
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				break;
			
			case 0x0000000F:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				if (Function_281(&iLocal_939) <= 8.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334 = 16;
				}
				break;
			
			case 0x00000010:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (bLocal_1333 == 0)
					{
						Function_651();
					}
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000011:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (!iLocal_1612)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_229(&iLocal_939);
						iLocal_1334 = 18;
					}
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				break;
			
			case 0x00000012:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_229(&iLocal_939);
						iLocal_1334 = 20;
					}
				}
				if (Function_281(&iLocal_939) <= 8.0f)
				{
					Function_229(&iLocal_939);
					iLocal_1334 = 19;
				}
				break;
			
			case 0x00000013:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				if (IS_VOLUME_VALID(&iLocal_4 + 1008[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1008[0]))
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_1334 = 20;
					}
				}
				break;
			
			case 0x00000014:
				Function_369("FTR_SONG_04", 0, 0, 4294967295, 4294967295, 3212836864, 0);
				AUDIO_MUSIC_SET_MOOD("RIDING_LOW", 0, 4294967295, 4294967295);
				iLocal_1334++;
				break;
			
			case 0x00000015:
				if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_650();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1334++;
					}
				}
				break;
			
			case 0x00000016:
				Function_657(1, 1, 0x42180000, 0x41c80000);
				break;
			
			case 0x00000017:
				iLocal_1334++;
				break;
		}
		Function_229(&iLocal_1470);
	}
	return;
}

void Function_650() //Position: 0x34A5C / 215644
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_SpotsRanchAhed", "Home01_SpotsRanchAhed", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_651() //Position: 0x34AB0 / 215728
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_NoMoreTalk", "Home01_NoMoreTalk", 3, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_652() //Position: 0x34AFC / 215804
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AA", "Home01_WayBanterMac_v4_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AB", "Home01_WayBanterMac_v4_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AC1", "Home01_WayBanterMac_v4_AC1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AC2", "Home01_WayBanterMac_v4_AC2", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AC3", "Home01_WayBanterMac_v4_AC3", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AD1", "Home01_WayBanterMac_v4_AD1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AD2", "Home01_WayBanterMac_v4_AD2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AE", "Home01_WayBanterMac_v4_AE", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AF", "Home01_WayBanterMac_v4_AF", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AG", "Home01_WayBanterMac_v4_AG", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v4_AH", "Home01_WayBanterMac_v4_AH", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AI1", "Home01_WayBanterMac_v4_AI1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AI2", "Home01_WayBanterMac_v4_AI2", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v4_AI3", "Home01_WayBanterMac_v4_AI3", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_653() //Position: 0x34EB5 / 216757
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AA", "Home01_WayBanterMac_v3_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AB", "Home01_WayBanterMac_v3_AB", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AC", "Home01_WayBanterMac_v3_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AD", "Home01_WayBanterMac_v3_AD", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AE", "Home01_WayBanterMac_v3_AE", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AF", "Home01_WayBanterMac_v3_AF", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AG", "Home01_WayBanterMac_v3_AG", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AH", "Home01_WayBanterMac_v3_AH", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AI", "Home01_WayBanterMac_v3_AI", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AJ", "Home01_WayBanterMac_v3_AJ", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AK", "Home01_WayBanterMac_v3_AK", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AL", "Home01_WayBanterMac_v3_AL", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v3_AM", "Home01_WayBanterMac_v3_AM", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v3_AN", "Home01_WayBanterMac_v3_AN", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_654() //Position: 0x3525E / 217694
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AA", "Home01_WayBanterMac_v2_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AB", "Home01_WayBanterMac_v2_AB", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AC", "Home01_WayBanterMac_v2_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AD", "Home01_WayBanterMac_v2_AD", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AE", "Home01_WayBanterMac_v2_AE", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AF", "Home01_WayBanterMac_v2_AF", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AG", "Home01_WayBanterMac_v2_AG", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AH", "Home01_WayBanterMac_v2_AH", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AI", "Home01_WayBanterMac_v2_AI", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AJ1", "Home01_WayBanterMac_v2_AJ1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AJ2", "Home01_WayBanterMac_v2_AJ2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AK", "Home01_WayBanterMac_v2_AK", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v2_AL", "Home01_WayBanterMac_v2_AL", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AM1", "Home01_WayBanterMac_v2_AM1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v2_AM2", "Home01_WayBanterMac_v2_AM2", 3, 2, 1, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_655() //Position: 0x35650 / 218704
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AA", "Home01_WayBanterMac_v1_AA", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AB", "Home01_WayBanterMac_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AC", "Home01_WayBanterMac_v1_AC", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AD", "Home01_WayBanterMac_v1_AD", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AE1", "Home01_WayBanterMac_v1_AE1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AE2", "Home01_WayBanterMac_v1_AE2", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1670", "", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AF", "Home01_WayBanterMac_v1_AF", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AG", "Home01_WayBanterMac_v1_AG", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1630", "", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AH", "Home01_WayBanterMac_v1_AH", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AI", "Home01_WayBanterMac_v1_AI", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AJ1", "Home01_WayBanterMac_v1_AJ1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AJ2", "Home01_WayBanterMac_v1_AJ2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AK", "Home01_WayBanterMac_v1_AK", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Home01_WayBanterMac_v1_AL", "Home01_WayBanterMac_v1_AL", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AM1", "Home01_WayBanterMac_v1_AM1", 3, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home01_WayBanterMac_v1_AM2", "Home01_WayBanterMac_v1_AM2", 3, 2, 1, 0, 1);
		Function_405(11);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_656() //Position: 0x35AC5 / 219845
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_JonGetsOfHors", "Home01_JonGetsOfHors", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_657(bool bParam0, bool bParam1, float fParam2, int iParam3) //Position: 0x35B17 / 219927
{
	if (Function_281(&iLocal_1474) <= 6.0f)
	{
		Function_440();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1614)
				{
					iLocal_1614 = 1;
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonGetsOfHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
				else if (Function_281(&iLocal_939) <= 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_931, "Home01_JonNoGetOnHors", &Global_54076, 1, 0, 0, 1, 0);
					Function_229(&iLocal_1474);
					Function_229(&iLocal_939);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1614)
				{
					iLocal_1614 = 0;
					RESTART_SCRIPTED_CONVERSATION();
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_933))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_933, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonGetsThrownFromHors", "Home01_JonGetsThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_229(&iLocal_1474);
					}
				}
			}
			if (&bParam0)
			{
				if (Function_281(&iLocal_939) <= 17.0f)
				{
					if (!iLocal_1612)
					{
						if (!bLocal_1613)
						{
							if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1571))
							{
								if (VMAG(Local_1571) >= 0.0f)
								{
									bLocal_1613 = true;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_JonStopsHorse", "Home01_JonStopsHorse", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
									Function_229(&iLocal_1474);
								}
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (bLocal_1613)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1571))
					{
						if (VMAG(Local_1571) <= (0.0f + 2.0f))
						{
							bLocal_1613 = false;
						}
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_931, "Home01_RidesIntoJaksHorse", "Home01_RidesIntoJaksHorse", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_229(&iLocal_1474);
				}
			}
			if (!Function_389(&Global_54076, &bLocal_931, &fParam2))
			{
				if (&bParam1)
				{
					if (!bLocal_1613)
					{
						if (!iLocal_1612)
						{
							if (bLocal_926 == 0)
							{
								bLocal_1526 = &iLocal_4 + 2960;
							}
							else
							{
								bLocal_1526 = &iLocal_4 + 2960;
							}
							if (Function_632(&Global_54076, &bLocal_931, &bLocal_1526))
							{
								iLocal_1612 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								if (Function_660(RAND_INT_RANGE(0, true)))
								{
									Function_631();
								}
								else
								{
									Function_659();
								}
								Function_229(&iLocal_1474);
							}
							else
							{
								iLocal_1612 = 1;
								ABORT_SCRIPTED_CONVERSATION(1);
								if (Function_660(RAND_INT_RANGE(0, true)))
								{
									Function_630();
								}
								else
								{
									Function_659();
								}
								Function_229(&iLocal_1474);
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_931, &iParam3))
			{
				if (&bParam1)
				{
					if (iLocal_1612)
					{
						iLocal_1612 = 0;
						ABORT_SCRIPTED_CONVERSATION(1);
						if (Function_660(RAND_INT_RANGE(0, true)))
						{
							Function_658();
						}
						else
						{
							Function_629();
						}
						Function_229(&iLocal_1474);
					}
				}
			}
		}
	}
}

void Function_658() //Position: 0x35E9B / 220827
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_RidesBack2Jak", "Home01_RidesBack2Jak", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_659() //Position: 0x35EED / 220909
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home01_RidesAwayJak", "Home01_RidesAwayJak", 0, 2, 0, 0, 1);
		Function_405(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_660(int iParam0) //Position: 0x35F3D / 220989
{
	if (iParam0 > 1)
	{
		return 1;
	}
	return 0;
}

void Function_661() //Position: 0x35F4F / 221007
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Home01_NoMeetBoy", "Home01_NoMeetBoy", 0, 1, 0, 0, 1);
		Function_405(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_662() //Position: 0x35F99 / 221081
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Home01_NoMeetJackStbles", "Home01_NoMeetJackStbles", 0, 1, 0, 0, 1);
		Function_405(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_663() //Position: 0x35FF1 / 221169
{
	struct<2> Var0;
	struct<2> Var2;
	
	switch (iLocal_1322)
	{
		case 0x00000000:
			iLocal_1322++;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(&iLocal_4 + 1528[3]))
			{
				if (Function_392(&Global_54076, &iLocal_4 + 1528[3], 200.0f))
				{
					iLocal_1322++;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(&bLocal_1386))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1528[3], &Var0);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[3], &Var2);
				bLocal_1386 = CREATE_ACTOR_IN_LAYOUT(&cLocal_748, "HOME01_DREW_MAC", 608, Var0, Var2);
				if (IS_ACTOR_VALID(&bLocal_1386))
				{
					SET_ACTOR_FACTION(&bLocal_1386, 20);
					SNAP_ACTOR_TO_GRINGO(&bLocal_1386, &iLocal_4 + 2768, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&bLocal_1386, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2768), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&bLocal_1386, false);
				}
			}
			iLocal_1322++;
			break;
		
		case 0x00000003:
			AI_QUICK_EXIT_GRINGO(&bLocal_1386, 1);
			Function_419(&(Local_1031[315]), &bLocal_1386, "Drew", 0, 0x5f5e100, 1);
			Function_420(&(Local_1031[315]), 1024, 1);
			iLocal_1322++;
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(&bLocal_1386))
			{
				if (Function_389(&Global_54076, &bLocal_1386, 115.0f))
				{
					TASK_CLEAR(&bLocal_1386);
					TASK_USE_GRINGO(&bLocal_1386, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 2776), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&bLocal_1386, 2);
				}
			}
			break;
		
		case 0x00000005:
			iLocal_1322++;
			break;
	}
	return;
}

void Function_664() //Position: 0x361A9 / 221609
{
	if (IS_ACTOR_VALID(&bLocal_931))
	{
		switch (iLocal_1318)
		{
			case 0x00000000:
				iLocal_1318++;
				break;
			
			case 0x00000001:
				if (bLocal_1619)
				{
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
					MEMORY_PREFER_RIDING(&bLocal_931, false);
					SET_ACTORS_HORSE(&bLocal_931, &(uLocal_1390[0]));
					SET_MOST_RECENT_MOUNT(&bLocal_931, &(uLocal_1390[0]));
					if (IS_GRINGO_VALID(&(uLocal_1706[2])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_931, GET_OBJECT_FROM_GRINGO(&(uLocal_1706[2])), "UseCase1", true, 0, 0);
					}
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(&(uLocal_1706[2])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[2]), "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(&(uLocal_1706[3])))
					{
						TASK_USE_GRINGO(false, &(uLocal_1706[3]), "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_931, bLocal_1314, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
					iLocal_1318++;
				}
				else if (Function_281(&iLocal_935) <= 7.0f)
				{
					CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
					CLEAR_ACTOR_MAX_SPEED(&(uLocal_1390[0]));
					MEMORY_PREFER_RIDING(&bLocal_931, false);
					SET_ACTORS_HORSE(&bLocal_931, &(uLocal_1390[0]));
					SET_MOST_RECENT_MOUNT(&bLocal_931, &(uLocal_1390[0]));
					iLocal_1318++;
				}
				break;
			
			case 0x00000002:
				if (iLocal_1598)
				{
					iLocal_1598 = 0;
					iLocal_1318++;
				}
				break;
			
			case 0x00000003:
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 1, 5.0f);
				TASK_MOUNT(false, &(uLocal_1390[0]), 0, 1, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				iLocal_1318++;
				break;
			
			case 0x00000004:
				if (IS_ACTOR_RIDING(&bLocal_931) && IS_ACTOR_RIDING(&Global_54076))
				{
					iLocal_1318++;
				}
				if (iLocal_1621)
				{
					iLocal_1621 = 0;
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &(uLocal_1390[0]), 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				break;
			
			case 0x00000005:
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931, &Global_54076, 60.0f, 10.0f, 50.0f);
				MEMORY_PREFER_RIDING(&bLocal_931, true);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_931);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_931);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_931, true);
				AI_RIDING_SET_ATTRIBUTE(&bLocal_931, 2, 0,15f);
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_931, true);
				if (IS_ACTOR_VALID(&(uLocal_1390[0])))
				{
					SET_ACTOR_MAX_SPEED_ABSOLUTE(&(uLocal_1390[0]), 20.0f);
				}
				Local_1562 = Vector(2,5f, 0.0f, 2.0f);
				bLocal_1314 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_FOLLOW_OBJECT(0, &Global_54076, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
				TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
				TASK_PRIORITY_SET(&bLocal_931, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_931, 20.0f);
				iLocal_1318++;
				break;
			
			case 0x00000006:
				if (!Function_626(&Global_54076, &iLocal_4 + 848))
				{
					if (!GET_TASK_STATUS(&bLocal_931, 61) != 1)
					{
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
						GET_OBJECT_POSITION(&iLocal_4 + 1528[6], &Local_1562);
						if (!iLocal_1615)
						{
							iLocal_1615 = 1;
							STREAMING_LOAD_BOUNDS(Local_1562, 50.0f, 1);
						}
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &Local_1562, 15.0f, 4);
						TASK_GO_NEAR_COORD(0, &Local_1562, 1.0f, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
				}
				else if (Function_626(&Global_54076, &iLocal_4 + 904) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1376))
				{
					if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
					{
						if (iLocal_1615)
						{
							iLocal_1615 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 2888, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
				}
				else if (Function_626(&Global_54076, &iLocal_4 + 928))
				{
					if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
					{
						if (iLocal_1615)
						{
							iLocal_1615 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 2896, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
				}
				else if (Function_626(&Global_54076, &iLocal_4 + 952))
				{
					if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
					{
						if (iLocal_1615)
						{
							iLocal_1615 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 2888, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
				}
				else if (Function_626(&Global_54076, &iLocal_4 + 1008))
				{
					if (!GET_TASK_STATUS(&bLocal_931, 72) != 1)
					{
						if (iLocal_1615)
						{
							iLocal_1615 = 0;
							STREAMING_UNLOAD_BOUNDS();
						}
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931);
						bLocal_1314 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 2888, 4.0f, 1, 2.0f);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
						TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
						TASK_PRIORITY_SET(&bLocal_931, true);
					}
				}
				else if (!GET_TASK_STATUS(&bLocal_931, 26) != 1)
				{
					if (iLocal_1615)
					{
						iLocal_1615 = 0;
						STREAMING_UNLOAD_BOUNDS();
					}
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_931, &Global_54076, 60.0f, 10.0f, 50.0f);
					Local_1562 = Vector(2,5f, 0.0f, 2.0f);
					bLocal_1314 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, &Global_54076, &Local_1562, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_931, bLocal_1314);
					TASK_SEQUENCE_RELEASE(bLocal_1314, 1);
					TASK_PRIORITY_SET(&bLocal_931, true);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 1384) && IS_VOLUME_VALID(&iLocal_4 + 1392))
				{
					if (IS_ACTOR_VALID(&(uLocal_1390[0])))
					{
						if (!IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1384))
						{
							if (HORSE_AUTO_JUMP_ENABLED_FOR_AI_RIDERS(&(uLocal_1390[0])))
							{
								HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&(uLocal_1390[0]), 0);
							}
						}
						else if (!IS_ACTOR_IN_VOLUME(&bLocal_931, &iLocal_4 + 1392))
						{
							if (!HORSE_AUTO_JUMP_ENABLED_FOR_AI_RIDERS(&(uLocal_1390[0])))
							{
								HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&(uLocal_1390[0]), 1);
							}
						}
					}
				}
				break;
			
			case 0x00000007:
				iLocal_1318++;
				break;
			}
	}
	return;
}

void Function_665() //Position: 0x36822 / 223266
{
	switch (iLocal_927)
	{
		case 0x00000006:
			Function_679(&Local_750, 1);
			cLocal_748 = CREATE_LAYOUT("home01_DynamicLayout");
			Function_678();
			iLocal_1337 = 0;
			iLocal_1335 = 0;
			iLocal_1315 = 0;
			iLocal_1597 = 0;
			iLocal_1617 = 0;
			iLocal_1620 = 0;
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(15);
			Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			DISABLE_CHILD_SECTOR("beh_house02x");
			DISABLE_CHILD_SECTOR("beh_house02props01x");
			ENABLE_CHILD_SECTOR("beh_house01x");
			ENABLE_CHILD_SECTOR("beh_house01props01x");
			Function_361();
			Function_348(&iLocal_935);
			Function_348(&iLocal_1482);
			iLocal_927 = 7;
			break;
		
		case 0x00000007:
			if (Function_676())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
				}
				if (!Function_359(&Local_750))
				{
					iLocal_927 = 8;
				}
				else
				{
					iLocal_927 = 11;
				}
			}
			break;
		
		case 0x00000008:
			bLocal_1333 = Function_409();
			PRINTINT(bLocal_1333);
			PRINTNL();
			Function_358(&Global_54076, &iLocal_4 + 1464[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_931))
			{
				TASK_CLEAR(&bLocal_931);
				TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_931, true);
				Function_358(&bLocal_931, &iLocal_4 + 1464[2], 1, 1, 1);
				ACTOR_DISABLE_WEAPON_RENDER(&bLocal_931, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_933))
			{
				TASK_CLEAR(&bLocal_933);
				TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_933, true);
				Function_358(&bLocal_933, &iLocal_4 + 1464[4], 1, 1, 1);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1432))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1432);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1432, 15);
			}
			iLocal_927 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_385(Global_46914[1]) || bLocal_928 != 4294967295))
			{
				UI_DISABLE("LoadingSpinner");
				Function_229(&iLocal_1482);
				Function_229(&iLocal_935);
				iLocal_927 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_375(&cLocal_748);
			if (Function_675(&iLocal_1356))
			{
				if ((Function_376() && Function_357()) || Function_281(&iLocal_935) < 5.0f)
				{
					if (Function_671("$/cutscene/HOME_01/HOME_01", "$/cutscene/home01_cs02_a/home01_cs02_a", &iLocal_914, &Local_750, bLocal_926, 95588, 229248, 95323, 95323, 94370, 229116, 93596, 93255, 60209, 0, 2, 1, 1, 2))
					{
						Function_229(&iLocal_1482);
						Function_229(&iLocal_935);
						iLocal_927 = 11;
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_929 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_236(12, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_931, 0);
			SET_CRIPPLE_ENABLE(&bLocal_931, 0);
			SET_ACTOR_FACTION(&bLocal_931, 20);
			TASK_PRIORITY_SET(&bLocal_931, true);
			TASK_STAND_STILL(&bLocal_931, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_931, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_931, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_931, GET_ACTOR_MAX_HEALTH(&bLocal_931));
			RESET_ACTOR_GAITS(&bLocal_933, 0);
			TASK_PRIORITY_SET(&bLocal_933, true);
			TASK_STAND_STILL(&bLocal_933, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_933, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_933, GET_ACTOR_MAX_HEALTH(&bLocal_933));
			SET_ALLOW_RIDE_BY_AI(&bLocal_933, 0);
			Function_369("NRT_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_348(&iLocal_1458);
			Function_348(&iLocal_1462);
			Function_348(&iLocal_1466);
			Function_348(&iLocal_1454);
			Function_348(&iLocal_1470);
			Function_348(&iLocal_1474);
			Function_348(&iLocal_1478);
			Function_229(&iLocal_1482);
			Function_669(&uLocal_977, &cLocal_748);
			Function_229(&iLocal_935);
			Function_348(&iLocal_939);
			Function_348(&iLocal_943);
			bLocal_926 = false;
			iLocal_927 = 0;
			Function_667(&Local_750, &bLocal_926, &iLocal_927);
			Function_666(StackVal, StackVal, StackVal, StackVal, Function_306(), Local_750);
			switch (bLocal_926)
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
				
				case 0x00000009:
					break;
				
				case 0x0000000A:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_666(struct<41> Param0) //Position: 0x36CB2 / 224434
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_926 = false;
			break;
		
		case 0x00000002:
			bLocal_926 = true;
			break;
		
		case 0x00000003:
			bLocal_926 = 2;
			break;
		
		case 0x00000004:
			bLocal_926 = 3;
			break;
		
		case 0x00000005:
			bLocal_926 = 4;
			break;
		
		case 0x00000006:
			bLocal_926 = 5;
			break;
		
		case 0x00000007:
			bLocal_926 = 6;
			break;
		
		case 0x00000008:
			bLocal_926 = 7;
			break;
		
		case 0x00000009:
			bLocal_926 = 8;
			break;
		
		case 0x0000000A:
			bLocal_926 = 9;
			break;
		
		case 0x0000000B:
			bLocal_926 = 10;
			break;
		
		case 0x0000000C:
			bLocal_926 = 101;
			break;
	}
}

void Function_667(int iParam0, var uParam1, int iParam2) //Position: 0x36D63 / 224611
{
	if (Function_359(&iParam0))
	{
		uParam1 = Function_612(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_668();
	}
	return;
}

void Function_668() //Position: 0x36D9F / 224671
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

int Function_669(struct<2>[] Param0) //Position: 0x36DF0 / 224752
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_670(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_670(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_670(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_670(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_670(struct<13> Param0) //Position: 0x374C9 / 226505
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

bool Function_671(var uParam0, var uParam1, int iParam2, struct<41> Param3) //Position: 0x37598 / 226712
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_293(&iParam2, &uParam14);
	switch (iParam2)
	{
		case 0x000003E8:
			if (iParam4 != 99 && (Function_359(&Param3) || Param3.f_40 < 1))
			{
				iParam2 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam2 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &uParam15, &uParam16, 1, 2);
				Call_Loc(uParam5);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_229(&iParam2 + 4);
				iParam2 = 1002;
			}
			else if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_292())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					Call_Loc(uParam5);
					Call_Loc(uParam7);
					Global_99147 = 0;
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					Function_229(&iParam2 + 4);
					iParam2 = 1004;
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
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_281(&iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam2 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_281(&iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&uParam7);
					if (StackVal)
					{
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_229(&iParam2 + 4);
						iParam2 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&uParam9);
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
						Function_288(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam1))
				{
					LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES: 2nd cutscene doesn't exist...");
					iParam2 = 1105;
					return 0;
				}
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam1, 0, 1, 1, &uParam17, &uParam18);
				Call_Loc(uParam6);
				Global_99147 = 1;
				Function_229(&iParam2 + 4);
				iParam2 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_281(&iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam2 = 1105;
				return 0;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_281(&iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!DECOR_CHECK_EXIST(&Global_10996, "streamingtimer"))
				{
					DECOR_SET_FLOAT(&Global_10996, "streamingtimer", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_10996, "streamingtimer")) < 2.0f)
				{
					if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
					{
						Call_Loc(&uParam8);
						if (StackVal)
						{
							DECOR_REMOVE(&Global_10996, "streamingtimer");
							STREAMING_RELEASE_MAIN_POI();
							CUTSCENE_MANAGER_PLAY_CUTSCENE();
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
							iParam2 = 1006;
						}
					}
				}
				else
				{
					CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var0, &Var2);
					STREAMING_LOAD_SCENE_EXT(Var0, Var2, 1);
				}
			}
			break;
		
		case 0x000003EE:
			Call_Loc(&uParam10);
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
						Function_288(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam2 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&uParam11);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					Function_286();
					if (!IS_OBJECT_VALID(&iParam2 + 24))
					{
						HUD_ENABLE(1);
					}
					else
					{
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&uParam12);
				if (StackVal)
				{
					Function_285(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam2 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam2 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam2 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam2 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam2 + 32);
						}
						DESTROY_VOLUME(&iParam2 + 32);
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
					iParam2 = 1000;
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
				Call_Loc(&uParam13);
				if (StackVal)
				{
					Call_Loc(&uParam11);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam2 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam4 == 99) && !Function_359(&Param3))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam2 = 1105;
			break;
	}
	return 0;
}

int Function_672() //Position: 0x37EFC / 229116
{
	switch (bLocal_926)
	{
		case 0x00000063:
			if (!Function_327() && !Function_317(&iLocal_762))
			{
				return 0;
			}
			if (IS_ACTOR_VALID(&bLocal_1384))
			{
				if (!DECOR_CHECK_EXIST(&cLocal_748, "hidabigailintroscene"))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1384);
					DECOR_SET_BOOL(&cLocal_748, "hidabigailintroscene", 1);
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

int Function_673() //Position: 0x37F80 / 229248
{
	switch (bLocal_926)
	{
		case 0x00000063:
			if (!iLocal_1624)
			{
				iLocal_1624 = 1;
				Function_138(15, 1, 0, 0, 0);
				Function_128(15, 0, 1);
				if (Function_647(15, 0, 0))
				{
				}
				if (Function_132(15))
				{
					if (Function_148(15))
					{
						if (Function_133(15))
						{
						}
					}
				}
				Function_674(1);
			}
			if (Global_42825 == 15)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_674(int iParam0) //Position: 0x37FEC / 229356
{
	int iVar0;
	
	if (Global_99472 == iParam0)
	{
		return;
	}
	if (!iParam0 & 1 != 0)
	{
		iVar0 = &Global_99473;
	}
	else if (!iParam0 & 2 != 0)
	{
		iVar0 = &Global_99475;
	}
	else if (!iParam0 & 4 != 0)
	{
		iVar0 = &Global_99477;
	}
	else if (!iParam0 & 8 != 0)
	{
		iVar0 = &Global_99479;
	}
	else if (!iParam0 & 16 != 0)
	{
		iVar0 = &Global_99481;
	}
	else if (!iParam0 & 32 != 0)
	{
		iVar0 = &Global_99483;
	}
	else
	{
		LOG_ERROR("SET_TIME_OF_DAY_REGION got an invalid TOD_REGION");
	}
	ADD_TIME(&iVar0, 0, 0, false, 1);
	SET_TIME_OF_DAY(&iVar0);
	return;
}

bool Function_675(int[] iParam0) //Position: 0x380C3 / 229571
{
	switch (iLocal_1316)
	{
		case 0x00000000:
			iLocal_1316++;
			break;
		
		case 0x00000001:
			if (!IS_OBJECT_VALID(&uLocal_1312))
			{
				uLocal_1312 = CREATE_WORLD_SECTOR(&cLocal_748, "beechersHope");
				if (IS_OBJECT_VALID(&uLocal_1312))
				{
				}
			}
			iLocal_1316++;
			break;
		
		case 0x00000002:
			if (IS_WORLD_SECTOR_LOADED(&uLocal_1312))
			{
				iLocal_1316++;
			}
			break;
		
		case 0x00000003:
			if (!IS_DOOR_VALID(&(iParam0[0])))
			{
				iParam0[0] = Function_383("beechersHope", "stable01", 94);
				if (IS_DOOR_VALID(&(iParam0[0])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[1])))
			{
				iParam0[1] = Function_383("beechersHope", "stable01", 95);
				if (IS_DOOR_VALID(&(iParam0[1])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[2])))
			{
				iParam0[2] = Function_383("beechersHope", "stable01", 98);
				if (IS_DOOR_VALID(&(iParam0[2])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[3])))
			{
				iParam0[3] = Function_383("beechersHope", "stable01", 99);
				if (IS_DOOR_VALID(&(iParam0[3])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[4])))
			{
				iParam0[4] = Function_383("beechersHope", "stable01", 96);
				if (IS_DOOR_VALID(&(iParam0[4])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[5])))
			{
				iParam0[5] = Function_383("beechersHope", "stable01", 97);
				if (IS_DOOR_VALID(&(iParam0[5])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[6])))
			{
				iParam0[6] = Function_383("beechersHope", "house01", 1);
				if (IS_DOOR_VALID(&(iParam0[6])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[7])))
			{
				iParam0[7] = Function_383("beechersHope", "house01", 2);
				if (IS_DOOR_VALID(&(iParam0[7])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[8])))
			{
				iParam0[8] = Function_383("beechersHope", "house01", 3);
				if (IS_DOOR_VALID(&(iParam0[8])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[9])))
			{
				iParam0[9] = Function_383("beechersHope", "house01", 4);
				if (IS_DOOR_VALID(&(iParam0[9])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[10])))
			{
				iParam0[10] = Function_383("beechersHope", "house01", 5);
				if (IS_DOOR_VALID(&(iParam0[10])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[11])))
			{
				iParam0[11] = Function_383("beechersHope", "house01", 6);
				if (IS_DOOR_VALID(&(iParam0[11])))
				{
				}
			}
			iLocal_1316++;
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID(&(iParam0[0])))
			{
				Function_161(&(iParam0[0]), 0);
				OPEN_DOOR_DIRECTION(&(iParam0[0]), 1);
			}
			if (IS_DOOR_VALID(&(iParam0[1])))
			{
				Function_161(&(iParam0[1]), 0);
				OPEN_DOOR_DIRECTION(&(iParam0[1]), 0);
			}
			if (IS_DOOR_VALID(&(iParam0[2])))
			{
				Function_161(&(iParam0[2]), 0);
				CLOSE_DOOR_FAST(&(iParam0[2]));
			}
			if (IS_DOOR_VALID(&(iParam0[3])))
			{
				Function_161(&(iParam0[3]), 0);
				CLOSE_DOOR_FAST(&(iParam0[3]));
			}
			if (IS_DOOR_VALID(&(iParam0[4])))
			{
				Function_161(&(iParam0[4]), 0);
				CLOSE_DOOR_FAST(&(iParam0[4]));
			}
			if (IS_DOOR_VALID(&(iParam0[5])))
			{
				Function_161(&(iParam0[5]), 0);
				CLOSE_DOOR_FAST(&(iParam0[5]));
			}
			if (IS_DOOR_VALID(&(iParam0[6])))
			{
				Function_161(&(iParam0[6]), 0);
				CLOSE_DOOR_FAST(&(iParam0[6]));
			}
			if (IS_DOOR_VALID(&(iParam0[7])))
			{
				Function_161(&(iParam0[7]), 0);
				CLOSE_DOOR_FAST(&(iParam0[7]));
			}
			if (IS_DOOR_VALID(&(iParam0[8])))
			{
				Function_161(&(iParam0[8]), 0);
				CLOSE_DOOR_FAST(&(iParam0[8]));
			}
			if (IS_DOOR_VALID(&(iParam0[9])))
			{
				Function_161(&(iParam0[9]), 0);
				CLOSE_DOOR_FAST(&(iParam0[9]));
			}
			if (IS_DOOR_VALID(&(iParam0[10])))
			{
				Function_161(&(iParam0[10]), 0);
				CLOSE_DOOR_FAST(&(iParam0[10]));
			}
			if (IS_DOOR_VALID(&(iParam0[11])))
			{
				Function_161(&(iParam0[11]), 0);
				CLOSE_DOOR_FAST(&(iParam0[11]));
			}
			iLocal_1316++;
			break;
		
		case 0x00000005:
			if (IS_DOOR_VALID(&(iParam0[7])))
			{
				if (!IS_PHYSINST_VALID(&uLocal_1730))
				{
					uLocal_1730 = GET_PHYSINST_FROM_OBJECT(&(iParam0[7]));
					if (IS_PHYSINST_VALID(&uLocal_1730))
					{
						HIDE_PHYSINST(&uLocal_1730);
					}
				}
			}
			iLocal_1316++;
			break;
		
		case 0x00000006:
			iLocal_1622 = 1;
			iLocal_1316++;
			break;
		
		case 0x00000007:
			return 1;
			break;
	}
	return 0;
}

bool Function_676() //Position: 0x386EC / 231148
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_677(0))
		{
			return 0;
		}
		if (!Function_327())
		{
			return 0;
		}
		if (!Function_317(&iLocal_762))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_931))
		{
			bLocal_931 = Function_308(12, 0, 1, -71,778f, 116,861f, 1410,798f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_931, 1))
		{
			return 0;
		}
		if (!Function_302())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_933))
		{
			bLocal_933 = Function_297(1, 1, -77,085f, 116,861f, 1416,701f, 81,95f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_933, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_677(bool bParam0) //Position: 0x3879A / 231322
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

void Function_678() //Position: 0x387CA / 231370
{
	Function_328(&iLocal_762, "home01", 10, 0);
	Function_330(&iLocal_762, 608, 2, 0);
	Function_330(&iLocal_762, 981, 2, 0);
	Function_330(&iLocal_762, 977, 2, 0);
	Function_330(&iLocal_762, 976, 2, 0);
	Function_330(&iLocal_762, 980, 2, 0);
	Function_330(&iLocal_762, 477, 2, 0);
	Function_330(&iLocal_762, 478, 2, 0);
	Function_330(&iLocal_762, 479, 2, 0);
	Function_330(&iLocal_762, 480, 2, 0);
	Function_330(&iLocal_762, 481, 2, 0);
	Function_330(&iLocal_762, 482, 2, 0);
	Function_330(&iLocal_762, 483, 2, 0);
	Function_330(&iLocal_762, 484, 2, 0);
	Function_330(&iLocal_762, 485, 2, 0);
	Function_330(&iLocal_762, 1008, 2, 0);
	Function_330(&iLocal_762, 1009, 2, 0);
	Function_330(&iLocal_762, 1010, 2, 0);
	Function_330(&iLocal_762, 1011, 2, 0);
	Function_328(&iLocal_762, "home01_horse_tend", 5, 0);
	Function_328(&iLocal_762, "custom/home01_horse_tend", 8, 0);
	Function_328(&iLocal_762, "guide_herd", 5, 0);
	Function_328(&iLocal_762, "custom/guide_herd", 8, 0);
	Function_328(&iLocal_762, "wave_goodbye", 5, 0);
	Function_328(&iLocal_762, "custom/wave_goodbye", 8, 0);
	Function_328(&iLocal_762, "home01_look_back", 5, 0);
	Function_328(&iLocal_762, "custom/home01_look_back", 8, 0);
	return;
}

void Function_679(int iParam0, bool bParam1) //Position: 0x389A9 / 231849
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_685(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_359(&iParam0))
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
	if (!Function_359(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_223();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_253();
	Function_287();
	Function_242("");
	Function_684(0);
	Function_683();
	Function_217();
	Function_216();
	ENABLE_JOURNAL_REPLAY(0);
	Function_682();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_297(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_372(0, 0x40400000);
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
	Function_681(13);
	Function_681(14);
	Function_681(25);
	Function_681(24);
	Function_681(12);
	Function_681(27);
	Function_681(26);
	Function_681(15);
	Function_680();
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

void Function_680() //Position: 0x38DE9 / 232937
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

void Function_681(int iParam0) //Position: 0x38E6E / 233070
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_682() //Position: 0x38E8E / 233102
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

void Function_683() //Position: 0x38ED4 / 233172
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_684(int iParam0) //Position: 0x38EEA / 233194
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_220())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_685(int iParam0, int iParam1) //Position: 0x38F23 / 233251
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
			Function_686(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_686(struct<113> Param0) //Position: 0x38FAA / 233386
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

void Function_687() //Position: 0x39008 / 233480
{
	return;
}

void Function_688(int iParam0, int iParam1) //Position: 0x3900E / 233486
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
				if (IS_ACTOR_VALID(&iParam1))
				{
					if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
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

bool Function_689(bool bParam0) //Position: 0x390F2 / 233714
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

bool Function_690(struct<25> Param0) //Position: 0x39138 / 233784
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
			Function_691(&Param0, 1);
			return 1;
		}
	}
	Function_691(&Param0, 0);
	return 0;
}

void Function_691(struct<25> Param0) //Position: 0x391C4 / 233924
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

bool Function_692(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x391EF / 233967
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
		Function_691(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_711(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_710(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_710(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_696(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_691(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_695(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_694(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_695(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_693(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_242(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_694(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_691(&Param2, 0);
	return 0;
}

void Function_693(char* cParam0) //Position: 0x39605 / 235013
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

void Function_694(struct<25> Param0) //Position: 0x396F9 / 235257
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

void Function_695(bool bParam0) //Position: 0x39771 / 235377
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_696(struct<57> Param0) //Position: 0x39795 / 235413
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
			return Function_707(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_700(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_707(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_697(&Param0, bVar2);
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
						bVar2 = Function_707(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_697(&Param0, bVar2);
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

var Function_697(int iParam0, bool bParam1) //Position: 0x39906 / 235782
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
				bParam1 = Function_699(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_698(16);
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
				bParam1 = Function_699(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_698(256);
			}
		}
	}
	return bParam1;
}

bool Function_698(int iParam0) //Position: 0x39A42 / 236098
{
	return 2 | iParam0;
}

int Function_699(int iParam0) //Position: 0x39A4C / 236108
{
	return 4 | iParam0;
}

int Function_700(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x39A56 / 236118
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
				iParam3 = Function_706(&iParam0, &iParam1, bParam4);
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
			return Function_698(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_701(&iParam0, &iParam1, 0, bParam4);
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
			return Function_698(16);
		}
	}
	return 0;
}

int Function_701(int iParam0, vector3 vParam1) //Position: 0x39B11 / 236305
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_705(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_704(iVar0, 3, 1, bParam3))
			{
				if (!Function_710(&iParam0, 8, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_704(iVar0, 2, 1, bParam3))
			{
				if (!Function_710(&iParam0, 32, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_704(iVar0, 1, 1, bParam3))
			{
				if (!Function_710(&iParam0, 64, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_704(iVar0, 3, 1, bParam3))
			{
				if (!Function_710(&iParam0, 128, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_704(iVar0, 1, 1, bParam3))
			{
				if (!Function_710(&iParam0, 1024, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_704(iVar0, 1, 1, bParam3))
			{
				if (!Function_710(&iParam0, 1024, 1))
				{
					return Function_703(64, 1024, bParam2);
				}
			}
			return Function_702(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_702(int iParam0, int iParam1, bool bParam2) //Position: 0x39CD9 / 236761
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_703(int iParam0, int iParam1, bool bParam2) //Position: 0x39CEE / 236782
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_704(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x39D03 / 236803
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_705(int iParam0) //Position: 0x39D20 / 236832
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

int Function_706(var uParam0, vector3 vParam1) //Position: 0x39D93 / 236947
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_705(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_704(iVar0, 3, 1, bParam2))
			{
				if (!Function_710(&uParam0, 8, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000009:
			if (Function_704(iVar0, 3, 1, bParam2))
			{
				if (!Function_710(&uParam0, 8, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x0000006E:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(&uParam0, 16, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x0000005B:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(&uParam0, 32, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000031:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&uParam0, 64, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000007:
			if (Function_704(iVar0, 3, 1, bParam2))
			{
				if (!Function_710(&uParam0, 128, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000008:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(&uParam0, 256, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000014:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&uParam0, 512, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000018:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&uParam0, 512, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000057:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&uParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000058:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&uParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_707(struct<65> Param0) //Position: 0x39FBC / 237500
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
						return Function_706(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_710(&Param0, 2, 1))
					{
						return Function_699(8);
					}
					return Function_698(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_710(&Param0, 4, 1))
					{
						return Function_699(16);
					}
					return Function_698(16);
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
							return Function_701(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_710(&Param0, 2, 1))
						{
							return Function_699(128);
						}
						return Function_698(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_710(&Param0, 4, 1))
						{
							return Function_699(256);
						}
						return Function_698(256);
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
						return Function_701(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_710(&Param0, 2, 1))
					{
						return Function_699(8);
					}
					return Function_698(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_710(&Param0, 4, 1))
					{
						return Function_699(16);
					}
					return Function_698(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_709(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_710(&Param0, 2, 1))
					{
						return Function_699(8);
					}
					return Function_698(8);
				}
				if (!Function_710(&Param0, 4, 1))
				{
					return Function_699(16);
				}
				return Function_698(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_701(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_708(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_698(128);
							}
							if (!Function_710(&Param0, 2, 1))
							{
								return Function_699(8);
							}
							return Function_698(8);
						}
						if (iParam4 == 2)
						{
							if (Function_708(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_698(256);
							}
							if (!Function_710(&Param0, 4, 1))
							{
								return Function_699(16);
							}
							return Function_698(16);
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

bool Function_708(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x3A2A2 / 238242
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

int Function_709(int iParam0, vector3 vParam1) //Position: 0x3A370 / 238448
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_705(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(&iParam0, 16, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x0000005B:
			if (Function_704(iVar0, 2, 1, bParam2))
			{
				if (!Function_710(&iParam0, 32, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000057:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&iParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		case 0x00000058:
			if (Function_704(iVar0, 1, 1, bParam2))
			{
				if (!Function_710(&iParam0, 1024, 1))
				{
					return Function_699(64);
				}
			}
			return Function_698(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_710(struct<69> Param0) //Position: 0x3A492 / 238738
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

int Function_711(int iParam0) //Position: 0x3A4BC / 238780
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

bool Function_712(int iParam0) //Position: 0x3A4F2 / 238834
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_713(int iParam0, int iParam1) //Position: 0x3A510 / 238864
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
	Function_714(&uVar0, &uVar1);
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

void Function_714(var uParam0, bool bParam1) //Position: 0x3A5A6 / 239014
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&bParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

void Function_715(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x3A5DC / 239068
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

