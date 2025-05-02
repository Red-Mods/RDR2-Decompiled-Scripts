//Decompiled with MagicRDR v1.0
//Function Count : 646
//Statics Count : 1552
//Natives Count : 831
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 9;
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
	var uLocal_44 = 4;
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
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
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
	var uLocal_80 = 5;
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
	var uLocal_102 = 8;
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
	int iLocal_115 = 0;
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
	var uLocal_136 = 6;
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
	var uLocal_176 = 1;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 7;
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
	var uLocal_212 = 1;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 1;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 1;
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
	var uLocal_236 = 3;
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
	var uLocal_250 = 1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 3;
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
	var uLocal_270 = 2;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 1;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 6;
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
	var uLocal_306 = 18;
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
	var uLocal_346 = 11;
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
	var uLocal_372 = 18;
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
	var uLocal_482 = 21;
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
	var uLocal_610 = 2;
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
	var uLocal_624 = 3;
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
	var uLocal_644 = 6;
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
	var uLocal_682 = 3;
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
	var uLocal_702 = 10;
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
	var uLocal_764 = 3;
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
	struct<6> Local_830 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	int iLocal_842 = 12;
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
	int iLocal_892 = 1;
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
	int iLocal_918 = 0;
	bool bLocal_919 = false;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	struct<4> Local_922[3];
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
	var uLocal_948 = 13;
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
	struct<15> Local_1002[6];
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
	var uLocal_1112 = 5;
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
	var uLocal_1142 = 5;
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
	var uLocal_1172 = 5;
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
	int iLocal_1192 = 0;
	float fLocal_1193 = 5,605194E-45f;
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
	var uLocal_1235[7] = { 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1257 = 0;
	var uLocal_1258 = 0;
	int iLocal_1259 = 0;
	var uLocal_1260 = 0;
	int iLocal_1261 = 0;
	var uLocal_1262 = 0;
	int iLocal_1263 = 0;
	var uLocal_1264 = 0;
	bool bLocal_1265 = false;
	var uLocal_1266 = 0;
	bool bLocal_1267 = false;
	var uLocal_1268 = 0;
	int iLocal_1269 = 0;
	var uLocal_1270 = 0;
	bool bLocal_1271 = false;
	var uLocal_1272 = 0;
	bool bLocal_1273 = false;
	var uLocal_1274 = 0;
	bool bLocal_1275 = false;
	var uLocal_1276 = 0;
	bool bLocal_1277 = false;
	var uLocal_1278 = 0;
	bool bLocal_1279 = false;
	var uLocal_1280 = 0;
	var uLocal_1281[2] = { 0, 0 };
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	bool bLocal_1287 = false;
	var uLocal_1288 = 0;
	bool bLocal_1289 = false;
	var uLocal_1290 = 0;
	var uLocal_1291[3] = { 0, 0, 0 };
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	int iLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303[3] = { 0, 0, 0 };
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	int iLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	bool bLocal_1367 = false;
	var uLocal_1368 = 0;
	bool bLocal_1369 = false;
	var uLocal_1370 = 0;
	bool bLocal_1371 = false;
	var uLocal_1372 = 0;
	bool bLocal_1373 = false;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	int iLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	int iLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	bool bLocal_1385 = false;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	bool bLocal_1389 = false;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	bool bLocal_1393 = false;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	bool bLocal_1397 = false;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	bool bLocal_1401 = false;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	bool bLocal_1405 = false;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	bool bLocal_1409 = false;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	bool bLocal_1413 = false;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	bool bLocal_1417 = false;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	bool bLocal_1421 = false;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	bool bLocal_1425 = false;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	int iLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	bool bLocal_1450 = false;
	bool bLocal_1451 = false;
	int iLocal_1452 = 0;
	bool bLocal_1453 = false;
	int iLocal_1454 = 0;
	int iLocal_1455 = 0;
	int iLocal_1456 = 0;
	int iLocal_1457 = 0;
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	int iLocal_1461 = 0;
	int iLocal_1462 = 0;
	int iLocal_1463 = 0;
	int iLocal_1464 = 0;
	int iLocal_1465 = 0;
	int iLocal_1466 = 0;
	int iLocal_1467 = 0;
	int iLocal_1468 = 0;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	bool bLocal_1480 = false;
	int iLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	int iLocal_1484 = 0;
	int iLocal_1485 = 0;
	bool bLocal_1486 = false;
	int iLocal_1487 = 0;
	int iLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 3;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
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
	Local_830 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_918 = 99;
	bLocal_919 = 6;
	iLocal_906 = 1000;
	while (Function_285())
	{
		Function_235();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_CAUSE_WEAPON_REACTIONS(&Global_54076, 1);
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
		SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 1);
		AI_STOP_IGNORING_ACTOR(&Global_54076);
	}
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	Function_234(1);
	if (IS_ACTOR_VALID(&bLocal_1273))
	{
		Function_233(&bLocal_1273);
	}
	if (IS_DOOR_VALID(&uLocal_1301))
	{
		Function_232(&uLocal_1301);
	}
	Function_231(0);
	Function_230();
	Function_229();
	Function_228(2097152);
	Function_225();
	if (IS_ACTORSET_VALID(&iLocal_1259))
	{
		DESTROY_ACTORSET(&iLocal_1259);
	}
	if (IS_ACTORSET_VALID(&iLocal_1261))
	{
		DESTROY_ACTORSET(&iLocal_1261);
	}
	if (IS_ACTORSET_VALID(&iLocal_1263))
	{
		DESTROY_ACTORSET(&iLocal_1263);
	}
	Function_224(&bLocal_1267);
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	Function_222(&bLocal_1367);
	Function_222(&bLocal_1369);
	Function_221();
	Function_219(1);
	Function_219(256);
	if (!bLocal_1450)
	{
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_1265))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1265, true);
		ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1265);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_1265, 1);
		CLEAR_ACTOR_PROOF(&bLocal_1265, 16);
		if (DECOR_CHECK_EXIST(&bLocal_1265, "Smoke_Quick_Exit"))
		{
			DECOR_REMOVE(&bLocal_1265, "Smoke_Quick_Exit");
		}
		if (DECOR_CHECK_EXIST(&bLocal_1265, "g1_bWalkToBank"))
		{
			DECOR_REMOVE(&bLocal_1265, "g1_bWalkToBank");
		}
	}
	Function_217(5, 0, 1);
	Function_215(5, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(&bLocal_1277))
	{
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1277);
	}
	Function_214(&uLocal_828);
	Function_214(&iLocal_4);
	Function_213();
	Function_212(1, 1);
	Function_185(bLocal_1451, 1, 0, 1, 1, 1, 1, 1);
	REMOVE_ANIM_SET("smoking_stand_gped");
	Function_181(&iLocal_842);
	Function_181(&iLocal_892);
	Function_180();
	Function_179();
	Function_178();
	Function_177();
	Function_176();
	Function_174();
	RELEASE_LAYOUT_REF(&uLocal_828);
	CLEAN_CACHE_ENTRIES();
	if (bLocal_1450)
	{
		Function_26(Local_830, 1, 1, 1, 0);
	}
	else if (bLocal_1451)
	{
		Function_22(Local_830);
	}
	else
	{
		Function_2(Local_830);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x280 / 640
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2A1 / 673
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2BE / 702
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2E1 / 737
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2F8 / 760
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

void Function_7(int iParam0) //Position: 0x39A / 922
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x3BD / 957
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

void Function_9() //Position: 0x407 / 1031
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x420 / 1056
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

void Function_11(var uParam0, int iParam1) //Position: 0x473 / 1139
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

struct<16> Function_12(int iParam0) //Position: 0x59D / 1437
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

bool Function_13() //Position: 0x5D7 / 1495
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x5F2 / 1522
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x5FF / 1535
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x61F / 1567
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x636 / 1590
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x651 / 1617
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x898 / 2200
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8C4 / 2244
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

bool Function_21(int iParam0) //Position: 0x8E8 / 2280
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x8FD / 2301
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x91B / 2331
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

struct<16> Function_24(int iParam0) //Position: 0x9C1 / 2497
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

struct<24> Function_25(char* cParam0) //Position: 0xA00 / 2560
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC56 / 3158
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
		Function_169(&(Global_6667[iVar228]));
		Function_228(4194304);
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

void Function_27() //Position: 0xD4A / 3402
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

int Function_28(int iParam0, bool bParam1) //Position: 0xD7C / 3452
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

int Function_29(int iParam0) //Position: 0xDBA / 3514
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xDD4 / 3540
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xDEA / 3562
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10E7 / 4327
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

void Function_33(char* cParam0) //Position: 0x115C / 4444
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1196 / 4502
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1212 / 4626
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1225 / 4645
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

int Function_37(int iParam0) //Position: 0x12C6 / 4806
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

void Function_38(int iParam0, bool bParam1) //Position: 0x1303 / 4867
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1319 / 4889
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x1577 / 5495
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x15B5 / 5557
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

void Function_42(bool bParam0) //Position: 0x15F4 / 5620
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

void Function_43() //Position: 0x1649 / 5705
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

void Function_44() //Position: 0x1694 / 5780
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

void Function_45() //Position: 0x179A / 6042
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

void Function_46() //Position: 0x17CD / 6093
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

void Function_47() //Position: 0x1960 / 6496
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

void Function_48() //Position: 0x1B19 / 6937
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B27 / 6951
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

bool Function_50() //Position: 0x1D44 / 7492
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1D59 / 7513
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E00 / 7680
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x209C / 8348
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

var Function_54() //Position: 0x26DA / 9946
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26E3 / 9955
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26F4 / 9972
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

struct<32> Function_57(char* cParam0) //Position: 0x27EB / 10219
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2806 / 10246
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x286D / 10349
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x287F / 10367
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2891 / 10385
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

int Function_62(int iParam0) //Position: 0x29C5 / 10693
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x29D4 / 10708
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A0D / 10765
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A4A / 10826
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BE4 / 11236
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

int Function_67(bool bParam0) //Position: 0x2E28 / 11816
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2E69 / 11881
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

struct<8> Function_69() //Position: 0x2EF2 / 12018
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

struct<8> Function_70() //Position: 0x2F89 / 12169
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

void Function_71() //Position: 0x3008 / 12296
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3045 / 12357
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

void Function_73() //Position: 0x3251 / 12881
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

bool Function_74(char* cParam0) //Position: 0x3308 / 13064
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3320 / 13088
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

struct<8> Function_76() //Position: 0x3418 / 13336
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(int iParam0, bool bParam1) //Position: 0x3422 / 13346
{
	iParam0 = (iParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3433 / 13363
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3449 / 13385
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3515 / 13589
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3532 / 13618
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

bool Function_82(int iParam0) //Position: 0x3D5E / 15710
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(bool bParam0, int iParam1) //Position: 0x3D99 / 15769
{
	GET_POSITION(&bParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3DA8 / 15784
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

bool Function_85(int iParam0) //Position: 0x4286 / 17030
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x429C / 17052
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x42BB / 17083
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x42D5 / 17109
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x433F / 17215
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

void Function_90(int iParam0) //Position: 0x4567 / 17767
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

void Function_91() //Position: 0x4605 / 17925
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

void Function_92() //Position: 0x4767 / 18279
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

int Function_93(int iParam0, char* cParam1) //Position: 0x47E7 / 18407
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B3E / 19262
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

int Function_95(int iParam0) //Position: 0x4BC6 / 19398
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BE0 / 19424
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4C0B / 19467
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C39 / 19513
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4ED5 / 20181
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

void Function_100(int iParam0, int iParam1) //Position: 0x50A9 / 20649
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5313 / 21267
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

int Function_102() //Position: 0x54A3 / 21667
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

void Function_103() //Position: 0x5544 / 21828
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

void Function_104(int iParam0) //Position: 0x5602 / 22018
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

var Function_105(int iParam0) //Position: 0x5668 / 22120
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

int Function_106(int iParam0, bool bParam1) //Position: 0x56F7 / 22263
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

var Function_107(int iParam0, int iParam1) //Position: 0x58A3 / 22691
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

void Function_108() //Position: 0x58E8 / 22760
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x58FE / 22782
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x593E / 22846
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x597E / 22910
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x598D / 22925
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

int Function_113(int iParam0) //Position: 0x5B55 / 23381
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

var Function_114() //Position: 0x5BEA / 23530
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5C0F / 23567
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60DE / 24798
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

var Function_117(int iParam0) //Position: 0x6405 / 25605
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x64A8 / 25768
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

int Function_119(int iParam0, bool bParam1) //Position: 0x66A5 / 26277
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6850 / 26704
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6922 / 26914
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

void Function_122(int iParam0) //Position: 0x723D / 29245
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73BA / 29626
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x74C5 / 29893
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x74F1 / 29937
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

var Function_126(vector3 vParam0) //Position: 0x7548 / 30024
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

void Function_127(var uParam0, int iParam1) //Position: 0x7596 / 30102
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x75F1 / 30193
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

void Function_129() //Position: 0x7792 / 30610
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7798 / 30616
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7847 / 30791
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x789C / 30876
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x78B2 / 30898
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7903 / 30979
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

void Function_135(var uParam0, int iParam1) //Position: 0x7930 / 31024
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7941 / 31041
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x795B / 31067
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x796C / 31084
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

void Function_139(float fParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7AC8 / 31432
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
		PRINT_HELP_B(&fParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&fParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7B53 / 31571
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7B80 / 31616
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

int Function_142(int iParam0) //Position: 0x7D30 / 32048
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7D87 / 32135
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

var Function_144(int iParam0) //Position: 0x7DAC / 32172
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7E02 / 32258
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

bool Function_146(bool bParam0) //Position: 0x7E61 / 32353
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7E6D / 32365
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7E89 / 32393
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

bool Function_149() //Position: 0x7EDB / 32475
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7F0B / 32523
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

int Function_151(int iParam0, int iParam1) //Position: 0x7F80 / 32640
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7FDD / 32733
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

void Function_169(struct<185> Param0) //Position: 0x9689 / 38537
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
			Function_170(4, 0, 0);
		}
	}
	return;
}

void Function_170(int iParam0, var uParam1, int iParam2) //Position: 0x96F4 / 38644
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
		Function_171(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_171(int iParam0, int iParam1, bool bParam2) //Position: 0x97DE / 38878
{
	int iVar0;
	
	Function_173(iParam0);
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
	Function_172();
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

void Function_172() //Position: 0x995D / 39261
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_173(int iParam0) //Position: 0x9969 / 39273
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

void Function_174() //Position: 0x99AF / 39343
{
	Function_175();
	return;
}

void Function_175() //Position: 0x99B8 / 39352
{
	Function_181(&iLocal_4 + 8);
	Function_181(&iLocal_4 + 160);
	Function_181(&iLocal_4 + 232);
	Function_181(&iLocal_4 + 304);
	Function_181(&iLocal_4 + 392);
	Function_181(&iLocal_4 + 528);
	Function_181(&iLocal_4 + 632);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_176() //Position: 0x99F9 / 39417
{
	Function_181(&iLocal_4 + 632);
	return;
}

void Function_177() //Position: 0x9A07 / 39431
{
	Function_181(&iLocal_4 + 528);
	return;
}

void Function_178() //Position: 0x9A15 / 39445
{
	Function_181(&iLocal_4 + 392);
	return;
}

void Function_179() //Position: 0x9A23 / 39459
{
	Function_181(&iLocal_4 + 304);
	return;
}

void Function_180() //Position: 0x9A31 / 39473
{
	Function_181(&iLocal_4 + 160);
	return;
}

void Function_181(int iParam0) //Position: 0x9A3E / 39486
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_182(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_182(struct<2>[] Param0, int iParam1) //Position: 0x9A66 / 39526
{
	if (Function_184(&(Param0[iParam12]), 4))
	{
		if (Function_184(&(Param0[iParam12]), 1))
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
			Function_183(&(Param0[iParam12]), 1);
			Function_183(&(Param0[iParam12]), 2);
			Function_183(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_183(struct<13> Param0) //Position: 0x9BB1 / 39857
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_184(struct<13> Param0) //Position: 0x9BCE / 39886
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9BEC / 39916
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
	Function_229();
	Function_208(0);
	Function_207();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_206();
	Function_205();
	Function_210();
	ENABLE_JOURNAL_REPLAY(1);
	Function_204(1);
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
		Function_203(&Global_54076);
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
	Function_200(Global_42825);
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
	Function_199();
	Function_198(1178687);
	Function_219(33039);
	Function_197(0x218003f);
	Function_196(4194560);
	Function_195();
	Function_194();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_191(0, 1, 1);
	}
	else
	{
		Function_191(0, 1, 1);
	}
	Function_190();
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
	Function_186();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_186() //Position: 0x9DF8 / 40440
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
		if (Function_189() > 3)
		{
			iVar0 *= 2;
		}
		Function_187(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_187(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9E4F / 40527
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_188(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_188(bool bParam0) //Position: 0x9E9F / 40607
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_189() //Position: 0x9EC8 / 40648
{
	return Global_21369.f_248;
}

void Function_190() //Position: 0x9ED3 / 40659
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

void Function_191(int iParam0, bool bParam1, int iParam2) //Position: 0x9EFD / 40701
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
			Function_192(Global_43789);
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

void Function_192(int iParam0) //Position: 0xA009 / 40969
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_193())
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

bool Function_193() //Position: 0xA088 / 41096
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

void Function_194() //Position: 0xA0F1 / 41201
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

void Function_195() //Position: 0xA117 / 41239
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

void Function_196(int iParam0) //Position: 0xA13D / 41277
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_197(int iParam0) //Position: 0xA15A / 41306
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_198(bool bParam0) //Position: 0xA16D / 41325
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_199() //Position: 0xA19A / 41370
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

void Function_200(int iParam0) //Position: 0xA212 / 41490
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
		Function_201(78, 1, 1);
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

int Function_201(bool bParam0, bool bParam1, int iParam2) //Position: 0xA348 / 41800
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_202(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_202(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_202(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_202(bool bParam0) //Position: 0xA396 / 41878
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

void Function_203(int iParam0) //Position: 0xA48A / 42122
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

void Function_204(bool bParam0) //Position: 0xA50D / 42253
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

void Function_205() //Position: 0xA584 / 42372
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

void Function_206() //Position: 0xA5C8 / 42440
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

void Function_207() //Position: 0xA60C / 42508
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_208(int iParam0) //Position: 0xA622 / 42530
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_209())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_209() //Position: 0xA662 / 42594
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

void Function_210() //Position: 0xA687 / 42631
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

int Function_211() //Position: 0xA6B2 / 42674
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_212(bool bParam0, bool bParam1) //Position: 0xA6CF / 42703
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

void Function_213() //Position: 0xA725 / 42789
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_214(int iParam0) //Position: 0xA72E / 42798
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

int Function_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA796 / 42902
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
		Function_216(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_233(&Global_15402[iParam014] + 8);
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

void Function_216(int iParam0) //Position: 0xAAD8 / 43736
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_217(int iParam0, bool bParam1, bool bParam2) //Position: 0xAAEF / 43759
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
						Function_233(&uVar1);
					}
				}
				Function_218(&uVar0);
			}
		}
	}
	return;
}

void Function_218(int iParam0) //Position: 0xABFE / 44030
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
		}
	}
	return;
}

void Function_219(int iParam0) //Position: 0xAC31 / 44081
{
	Function_220(&Global_43580, iParam0);
	return;
}

void Function_220(var uParam0, var uParam1) //Position: 0xAC3F / 44095
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_221() //Position: 0xAC5E / 44126
{
	Function_181(&iLocal_1488 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1488);
	return;
}

void Function_222(bool bParam0) //Position: 0xAC73 / 44147
{
	if (IS_OBJECT_VALID(&bParam0))
	{
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

void Function_223(bool bParam0) //Position: 0xAC88 / 44168
{
	if (IS_BLIP_VALID(&bParam0))
	{
		REMOVE_BLIP(&bParam0);
	}
	return;
}

void Function_224(var uParam0) //Position: 0xAC9D / 44189
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		RELEASE_ACTOR(&uParam0);
	}
	return;
}

void Function_225() //Position: 0xACB2 / 44210
{
	if (IS_ACTORSET_VALID(&iLocal_1259))
	{
		Function_226(&iLocal_1259);
	}
	if (IS_ACTORSET_VALID(&iLocal_1261))
	{
		Function_226(&iLocal_1261);
	}
	return;
}

void Function_226(int iParam0) //Position: 0xACDA / 44250
{
	bool bVar0;
	
	Function_227(&iParam0);
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

void Function_227(int iParam0) //Position: 0xAD26 / 44326
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

void Function_228(bool bParam0) //Position: 0xAD85 / 44421
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

void Function_229() //Position: 0xADB9 / 44473
{
	Global_15862 = 0.0f;
	return;
}

void Function_230() //Position: 0xADC3 / 44483
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_OBJECT_VALID(&(Local_922[iVar04])))
		{
			DESTROY_OBJECT(&(Local_922[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_231(bool bParam0) //Position: 0xADF4 / 44532
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_OBJECT_VALID(&(Local_922[iVar04])))
		{
			if (bParam0)
			{
				if (!IS_BLIP_VALID(&(uLocal_1291[iVar0])))
				{
					uLocal_1291[iVar0] = ADD_BLIP_FOR_COORD(&iLocal_4 + 2712[iVar03], 322, 0, 2, 0);
					SET_BLIP_SCALE(&(uLocal_1291[iVar0]), 0,65f);
					SET_BLIP_NAME(&(uLocal_1291[iVar0]), "Gun01_bottleBlip");
				}
			}
			else
			{
				Function_223(&(uLocal_1291[iVar0]));
			}
		}
		iVar0++;
	}
	return;
}

void Function_232(int iParam0) //Position: 0xAE84 / 44676
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

void Function_233(bool bParam0) //Position: 0xAEDD / 44765
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

void Function_234(bool bParam0) //Position: 0xAF10 / 44816
{
	if (bParam0)
	{
	}
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 0, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 2, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 3, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 4, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 5, bParam0);
	SET_EQUIP_SLOT_ENABLED(&Global_54076, 6, bParam0);
	return;
}

void Function_235() //Position: 0xAF5A / 44890
{
	var uVar0[20];
	char[] cVar21[4];
	
	if (!Function_284())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "Stage 03: Birds";
	uVar0[4] = "Stage 04: Rescue";
	uVar0[5] = "Stage 05: Escort";
	uVar0[6] = "Final Cutscene";
	uVar0[7] = "Cheat Bottles";
	uVar0[8] = "Cheat Birds";
	uVar0[9] = "Full Dead Eye";
	uVar0[10] = "Kill Banditos";
	uVar0[11] = "Reset Speech Hist";
	uVar0[12] = "GiveWeapon (Anim)";
	uVar0[13] = "GiveWeapon (NoAnim)";
	uVar0[14] = "Landon Betrayal";
	uVar0[15] = "Driver is Friendly";
	uVar0[16] = "Driver is Neutral";
	uVar0[17] = "Cower Animset";
	uVar0[18] = "Teleport Plr Horse";
	uVar0[19] = "Kill Captor";
	cVar21 = Function_270(&uLocal_898, &uVar0, &Local_830 + 4, GET_DEBUG_PADINDEX(), 0);
	if (Function_269(&cVar21, &iLocal_918, &bLocal_919, &iLocal_906))
	{
		Function_262();
		Function_261();
	}
	switch (cVar21)
	{
		case 0x00000000:
			Function_262();
			Function_261();
			Function_260(&bLocal_1450, 8);
			break;
		
		case 0x00000001:
			Function_262();
			Function_261();
			Function_259("Failed from debug menu.");
			Function_255(iLocal_918);
			Function_251(StackVal, 5, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
			break;
		
		case 0x00000002:
			Function_262();
			Function_261();
			Function_247(&bLocal_1453, 4);
			break;
		
		case 0x00000003:
			Function_262();
			Function_261();
			Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_245();
			iLocal_906 = 1000;
			iLocal_918 = 2;
			Function_242(0);
			break;
		
		case 0x00000004:
			Function_262();
			Function_261();
			Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_241();
			iLocal_906 = 1000;
			iLocal_918 = 3;
			Function_242(0);
			break;
		
		case 0x00000005:
			Function_262();
			Function_261();
			Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_240();
			iLocal_906 = 1000;
			iLocal_918 = 4;
			Function_242(0);
			break;
		
		case 0x00000006:
			Function_262();
			Function_261();
			Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_238();
			iLocal_906 = 1000;
			iLocal_918 = 101;
			Function_242(0);
			break;
		
		case 0x00000007:
			Function_262();
			iLocal_1462 = 1;
			break;
		
		case 0x00000008:
			Function_262();
			Function_237();
			iLocal_1463 = 1;
			break;
		
		case 0x00000009:
			Function_262();
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			break;
		
		case 0x0000000A:
			Function_262();
			if (IS_ACTORSET_VALID(&iLocal_1263))
			{
				Function_236(&iLocal_1263);
			}
			break;
		
		case 0x0000000B:
			Function_262();
			AUDIO_RESET_SPEECH_HISTORY();
			break;
		
		case 0x0000000C:
			Function_262();
			if (IS_ACTOR_ALIVE(&iLocal_4 + 928[02]))
			{
				ACTOR_PUT_WEAPON_IN_HAND(&iLocal_4 + 928[02], 5, 1);
			}
			break;
		
		case 0x0000000D:
			Function_262();
			if (IS_ACTOR_ALIVE(&iLocal_4 + 928[02]))
			{
				ACTOR_PUT_WEAPON_IN_HAND(&iLocal_4 + 928[02], 5, 0);
			}
			break;
		
		case 0x0000000E:
			Function_262();
			TASK_KILL_CHAR(&bLocal_1265, &bLocal_1279);
			break;
		
		case 0x0000000F:
			Function_262();
			SET_ACTOR_FACTION(&bLocal_1279, 20);
			SET_ACTOR_IS_COMPANION(&bLocal_1279, 1);
			break;
		
		case 0x00000010:
			Function_262();
			SET_ACTOR_FACTION(&bLocal_1279, 21);
			SET_ACTOR_IS_COMPANION(&bLocal_1279, 0);
			break;
		
		case 0x00000011:
			Function_262();
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1279, 0);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1279, "knl_cower_A", 1);
			break;
		
		case 0x00000012:
			Function_262();
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
			break;
		
		case 0x00000013:
			Function_262();
			if (IS_ACTOR_ALIVE(&iLocal_4 + 928[02]))
			{
				KILL_ACTOR(&iLocal_4 + 928[02]);
			}
			break;
	}
	return;
}

void Function_236(int iParam0) //Position: 0xB40B / 46091
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

void Function_237() //Position: 0xB456 / 46166
{
	if (IS_ACTORSET_VALID(&iLocal_1259))
	{
		Function_236(&iLocal_1259);
	}
	return;
}

void Function_238() //Position: 0xB46C / 46188
{
	Function_231(0);
	Function_230();
	Function_239();
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(&Global_54076, 1);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1279);
	Function_223(&bLocal_1289);
	Function_229();
	Function_228(2097152);
	return;
}

void Function_239() //Position: 0xB4C9 / 46281
{
	if (IS_ACTORSET_VALID(&iLocal_1259))
	{
		Function_236(&iLocal_1259);
	}
	if (IS_ACTORSET_VALID(&iLocal_1261))
	{
		Function_236(&iLocal_1261);
	}
	return;
}

void Function_240() //Position: 0xB4EF / 46319
{
	Function_231(0);
	Function_230();
	Function_239();
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(&Global_54076, 1);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	Function_234(1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	Function_223(&bLocal_1289);
	Function_217(5, 0, 1);
	if (IS_ACTORSET_VALID(&iLocal_1263))
	{
		Function_226(&iLocal_1263);
	}
	else
	{
		iLocal_1263 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_828, "CurBanditoSet", 0);
	}
	ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1279);
	Function_229();
	Function_228(2097152);
	return;
}

void Function_241() //Position: 0xB5A2 / 46498
{
	Function_231(0);
	Function_230();
	Function_239();
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(&Global_54076, 1);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	Function_234(1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	Function_223(&bLocal_1289);
	Function_229();
	Function_228(2097152);
	return;
}

void Function_242(int iParam0) //Position: 0xB610 / 46608
{
	char* cVar0[32];
	
	Function_243(&bLocal_1373);
	Function_243(&iLocal_1377);
	Function_243(&iLocal_1381);
	bLocal_919 = iParam0;
	iLocal_1433 = 0;
	iLocal_1457 = 0;
	iLocal_1458 = 0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_918)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
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

void Function_243(bool bParam0) //Position: 0xB7DF / 47071
{
	Function_244(&bParam0, 0.0f);
	return;
}

void Function_244(vector3 vParam0) //Position: 0xB7EC / 47084
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_245() //Position: 0xB811 / 47121
{
	Function_231(0);
	Function_230();
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	Function_229();
	Function_228(2097152);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	Function_234(1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	return;
}

void Function_246(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xB86A / 47210
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

void Function_247(bool bParam0, int iParam1) //Position: 0xB894 / 47252
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_248(&iParam1);
	bParam0 = 1;
	return;
}

void Function_248(int iParam0) //Position: 0xB8B9 / 47289
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_259("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_250(2) || Function_250(8)) || Function_250(9)) || Function_250(10))
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
		Function_259("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_259("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_259("");
	}
	else if (iParam0 == 8)
	{
		Function_249();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_249();
	}
	return;
}

void Function_249() //Position: 0xB9B0 / 47536
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_250(int iParam0) //Position: 0xB9BC / 47548
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

void Function_251(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB9F2 / 47602
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_252(StackVal, Param4, uParam3, &iParam6);
		Function_248(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_252(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBA33 / 47667
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_254(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_253(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_253(int iParam0) //Position: 0xBAB5 / 47797
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

var Function_254(struct<2> Param0, bool bParam2) //Position: 0xBF63 / 48995
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

struct<8> Function_255(int iParam0) //Position: 0xBFCF / 49103
{
	Function_256(iParam0 + 1);
	return StackVal, Function_256(iParam0 + 1);
}

struct<8> Function_256(int iParam0) //Position: 0xBFDC / 49116
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, *(&iLocal_4 + 1472[03]);
		
		case 0x00000001:
		case 0x00000002:
			return StackVal, *(&iLocal_4 + 1472[13]);
		
		case 0x00000003:
			return StackVal, *(&iLocal_4 + 1472[23]);
		
		case 0x00000004:
			return StackVal, *(&iLocal_4 + 1472[33]);
		
		default:
	}
	return StackVal, *(&iLocal_4 + 1472[43]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return StackVal, *(&iLocal_4 + 1472[03]);
}

int Function_257(int iParam0) //Position: 0xC0B4 / 49332
{
	return Function_258(iParam0 + 1);
}

int Function_258(bool bParam0) //Position: 0xC0C1 / 49345
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal;
		
		case 0x00000001:
		case 0x00000002:
			return StackVal;
		
		case 0x00000003:
			return StackVal;
		
		case 0x00000004:
			return StackVal;
		
		default:
	}
	return StackVal;
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return StackVal;
}

void Function_259(char* cParam0) //Position: 0xC188 / 49544
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_260(bool bParam0, int iParam1) //Position: 0xC1F4 / 49652
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_248(&iParam1);
	bParam0 = 1;
	return;
}

void Function_261() //Position: 0xC219 / 49689
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_262() //Position: 0xC22E / 49710
{
	Function_264();
	Function_263(10, 3);
	return;
}

void Function_263(int iParam0, int iParam1) //Position: 0xC23D / 49725
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

void Function_264() //Position: 0xC38A / 50058
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_268())
	{
		Function_267(10, 3);
	}
	else
	{
		Function_265();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_265() //Position: 0xC3D5 / 50133
{
	Function_266(25, 2);
	return;
}

void Function_266(int iParam0, int iParam1) //Position: 0xC3E1 / 50145
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

void Function_267(int iParam0, int iParam1) //Position: 0xC60D / 50701
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

bool Function_268() //Position: 0xC75A / 51034
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

bool Function_269(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC7C2 / 51138
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_262();
			Function_261();
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
		Function_259("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_270(struct<17> Param0) //Position: 0xC871 / 51313
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_283(&Var12, &Var0);
	uVar15 = Function_282(uParam1, &Var12);
	Function_281(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_280(&Param0, uVar15);
	Function_278(StackVal, &Param0, Var12.f_12);
	Function_276(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_275(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_272(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_271(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_271(int iParam0, int iParam1, int iParam2) //Position: 0xC965 / 51557
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

bool Function_272(struct<17> Param0) //Position: 0xC9C5 / 51653
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
				Function_274(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_274(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_271(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_273(Param1.f_64);
	}
	else
	{
		Function_273(Param1.f_64);
	}
	return 0;
}

void Function_273(bool bParam0) //Position: 0xCB58 / 52056
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

void Function_274(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCB96 / 52118
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

var Function_275(int iParam0, struct<21> Param1) //Position: 0xCC4C / 52300
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_276(vector3 vParam0) //Position: 0xCC73 / 52339
{
	switch (Function_277())
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

int Function_277() //Position: 0xCD1F / 52511
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

void Function_278(vector3 vParam0) //Position: 0xCD5B / 52571
{
	switch (Function_279(&vParam0))
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

int Function_279(int iParam0) //Position: 0xCE04 / 52740
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_77(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_77(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_77(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_77(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&iParam0, 0x20000000);
	return 0;
}

var Function_280(struct<21> Param0) //Position: 0xCF24 / 53028
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

void Function_281(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD0DE / 53470
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

var Function_282(int iParam0, struct<13> Param1) //Position: 0xD17A / 53626
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_283(struct<17> Param0) //Position: 0xD196 / 53654
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

bool Function_284() //Position: 0xD1F0 / 53744
{
	return Global_47307;
}

bool Function_285() //Position: 0xD1F9 / 53753
{
	if (IS_EXITFLAG_SET())
	{
		Function_255(iLocal_918);
		Function_251(StackVal, 4, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
		return 0;
	}
	Function_645(StackVal, StackVal, StackVal, StackVal, StackVal, Local_830, iLocal_918, bLocal_919, &bLocal_1453, &bLocal_1450, &bLocal_1451);
	if (iLocal_918 == 99 && iLocal_918 == 100)
	{
		if (Function_644(bLocal_919))
		{
			if (iLocal_918 <= 0 && iLocal_918 >= 2)
			{
				if (!IS_PLAYER_DEADEYE(0))
				{
					ADD_PLAYER_DEADEYE_POINTS(0, 0,5f, 0);
				}
			}
			if (IS_ACTOR_DEAD(&Global_54076))
			{
				Function_255(iLocal_918);
				Function_251(StackVal, 1, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
				return 1;
			}
			if (Global_6647)
			{
				Function_255(iLocal_918);
				Function_251(StackVal, 2, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
				return 1;
			}
			if (Global_6646)
			{
				Function_255(iLocal_918);
				Function_251(StackVal, 2, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
				return 1;
			}
			if (Function_624(&Local_1002, &uLocal_948, &uLocal_1184, &uLocal_1251, iLocal_1464))
			{
				if (Function_622(&uLocal_1184))
				{
					Function_255(iLocal_918);
					Function_251(StackVal, 5, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1265))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&bLocal_1265))
				{
					Function_259("Gunslinger_attacked");
					Function_255(iLocal_918);
					Function_251(StackVal, 5, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
					return 1;
				}
			}
			Function_621();
		}
	}
	switch (iLocal_918)
	{
		case 0x00000063:
			Function_589();
			break;
		
		case 0x00000000:
			Function_554();
			break;
		
		case 0x00000002:
			Function_519();
			break;
		
		case 0x00000003:
			Function_471();
			break;
		
		case 0x00000004:
			Function_376();
			break;
		
		case 0x00000065:
			Function_288();
			break;
		
		case 0x00000064:
			if (Function_287(&bLocal_1451))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_286(&iLocal_918, &bLocal_919, &iLocal_906))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1450)
	{
		Function_260(&bLocal_1450, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1451 && iLocal_918 == 100)
	{
		Function_255(iLocal_918);
		Function_251(StackVal, 5, &bLocal_1451, &iLocal_918, Function_257(iLocal_918), Function_255(iLocal_918), 0);
	}
	if (bLocal_1453)
	{
		Function_247(&bLocal_1453, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_286(var uParam0, var uParam1, int iParam2) //Position: 0xD419 / 54297
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

bool Function_287(int iParam0) //Position: 0xD462 / 54370
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_288() //Position: 0xD476 / 54390
{
	switch (bLocal_919)
	{
		case 0x00000000:
			Function_372(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_228(8);
			Function_370(1);
			Function_370(256);
			Function_369(&iLocal_4 + 1208[0]);
			if (!iLocal_1436[4])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_368(Global_46866[0]))
				{
					Function_367(&Local_830);
				}
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_366();
				Function_242(1);
			}
			else
			{
				Function_365();
				Function_242(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_368(Global_46866[0])) && Function_364())
			{
				Function_365();
				Function_242(2);
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x00000002:
			if (Function_361(&bLocal_1373) < 1.0f || iLocal_1436[4])
			{
				Function_242(3);
			}
			break;
		
		case 0x00000003:
			if (Function_291("$/cutscene/GUN01_CS03/GUN01_CS03", &iLocal_906, &Local_830, &iLocal_918, 79280, 63427, 59569, 59375, 59147, 57854, 1, 2, 1, 1, 2, 0, 1))
			{
				Function_242(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_290(&bLocal_1277);
				Function_289(StackVal, &bLocal_1277, Function_290(&bLocal_1277), 0, 0, 2, 1);
				Function_176();
				bLocal_1450 = true;
			}
			break;
	}
	return;
}

void Function_289(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xD5D2 / 54738
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

struct<8> Function_290(bool bParam0) //Position: 0xD6F1 / 55025
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_291(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD703 / 55043
{
	if (!&bParam15)
	{
		Function_301(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_300(&Param2) || Param2.f_40 < 1))
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
				Function_243(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_299())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_298(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_243(&iParam1 + 4);
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
					Function_298(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_361(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_361(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_296(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_298(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_243(&iParam1 + 4);
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
						Function_295(1.0f);
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
						Function_293();
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
					Function_292(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_300(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_292(int iParam0, bool bParam1) //Position: 0xDD65 / 56677
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
		Function_199();
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

void Function_293() //Position: 0xDE34 / 56884
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_294();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_294() //Position: 0xDE79 / 56953
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_295(bool bParam0) //Position: 0xDE8B / 56971
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

void Function_296(var uParam0, int iParam1) //Position: 0xDEA8 / 57000
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
			if ((&iVar3 == &Global_54076 && !Function_297(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_297(int iParam0) //Position: 0xDF3A / 57146
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

int Function_298(bool bParam0) //Position: 0xDF6B / 57195
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

bool Function_299() //Position: 0xE02E / 57390
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

bool Function_300(struct<37> Param0) //Position: 0xE06B / 57451
{
	return Param0.f_36;
}

void Function_301(var uParam0, int iParam1) //Position: 0xE076 / 57462
{
	Function_302(&uParam0, &iParam1, 0);
	return;
}

void Function_302(var uParam0, bool bParam1, var uParam2) //Position: 0xE086 / 57478
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
			Function_246(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						if (!IS_STRING_VALID(&uParam2))
						{
							Function_246(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_303() //Position: 0xE1FE / 57854
{
	if (!IS_ACTOR_VALID(&bLocal_1273))
	{
		bLocal_1273 = Function_304(1, 1, 0, 0, 0, 0, 1, 0);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_1273, 1);
	}
	iLocal_1452 = 1;
	return 1;
}

var Function_304(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xE22B / 57899
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
		Function_311(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_310())
		{
			return "";
		}
	}
	if (!Function_308())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_199();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_307(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_307(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_307(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_307(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_306(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_306(StackVal, Var4, 0, 1, 1);
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
		Function_305(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xE588 / 58760
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

var Function_306(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE5D2 / 58834
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

struct<8> Function_307(bool bParam0) //Position: 0xE672 / 58994
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

bool Function_308() //Position: 0xE69B / 59035
{
	if (Function_309() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_309() //Position: 0xE6B1 / 59057
{
	return Global_21369.f_244;
}

bool Function_310() //Position: 0xE6BC / 59068
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_311(var uParam0, bool bParam1, bool bParam2) //Position: 0xE6DC / 59100
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

int Function_312() //Position: 0xE70B / 59147
{
	Function_313(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_313(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xE720 / 59168
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
		Function_261();
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
	Function_292(&iParam9, &bParam10);
}

int Function_314() //Position: 0xE7EF / 59375
{
	if (!iLocal_1452)
	{
		Function_315();
	}
	return 1;
}

void Function_315() //Position: 0xE800 / 59392
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[43]), 1, 1, 1);
	if (GET_MOUNT(&Global_54076) != &bLocal_1273)
	{
		ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1273);
	}
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_1277);
	ENABLE_VEHICLE_SEAT(&bLocal_1277, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1277, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1277, 2, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1277, 3, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1277, 4, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1277, 5, 0);
	TASK_STAND_STILL(&bLocal_1277, -1.0f, 0, 0);
	Function_316(&bLocal_1279);
	Function_316(&bLocal_1275);
	return;
}

void Function_316(bool bParam0) //Position: 0xE89C / 59548
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		DESTROY_ACTOR(&bParam0);
	}
	return;
}

int Function_317() //Position: 0xE8B1 / 59569
{
	if (!IS_ACTOR_VALID(&bLocal_1273))
	{
		if (Function_310())
		{
			bLocal_1273 = Function_304(1, 1, 0, 0, 0, 0, 1, 0);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_1273, 1);
		}
	}
	if (!iLocal_1487)
	{
		Function_330();
		iLocal_1487 = 1;
	}
	Function_316(&bLocal_1275);
	Function_318();
	return 1;
}

int Function_318() //Position: 0xE8F9 / 59641
{
	var uVar0;
	int iVar1;
	
	if (iLocal_1472)
	{
		return 1;
	}
	if (!IS_ACTOR_VALID(&bLocal_1277))
	{
		return 0;
	}
	if (!Function_319(&bLocal_1277))
	{
		return 0;
	}
	uLocal_1329[0] = &iLocal_1488 + 64;
	uLocal_1329[1] = &iLocal_1488 + 72;
	uLocal_1329[2] = &iLocal_1488 + 80;
	uLocal_1329[3] = &iLocal_1488 + 88;
	uLocal_1329[4] = &iLocal_1488 + 96;
	uLocal_1329[5] = &iLocal_1488 + 104;
	uLocal_1329[6] = &iLocal_1488 + 112;
	uLocal_1329[7] = &iLocal_1488 + 120;
	uLocal_1329[8] = &iLocal_1488 + 128;
	uLocal_1329[9] = &iLocal_1488 + 136;
	uLocal_1329[10] = &iLocal_1488 + 144;
	uLocal_1329[11] = &iLocal_1488 + 152;
	uLocal_1329[12] = &iLocal_1488 + 160;
	uLocal_1329[13] = &iLocal_1488 + 168;
	uLocal_1329[14] = &iLocal_1488 + 176;
	uLocal_1329[15] = &iLocal_1488 + 184;
	uLocal_1329[16] = &iLocal_1488 + 192;
	uLocal_1329[17] = &iLocal_1488 + 200;
	iVar1 = 0;
	while (iVar1 <= 18)
	{
		uVar0 = &uLocal_1329[iVar1];
		if (IS_OBJECT_VALID(&uVar0))
		{
			SET_PROP_AI_OBSTACLE_ENABLED(&uVar0, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(&uVar0, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar0, 0);
		}
		iVar1++;
	}
	iLocal_1472 = 1;
	return 1;
}

bool Function_319(var uParam0) //Position: 0xEA57 / 59991
{
	var uVar0;
	
	Function_329(3, 2);
	uVar0 = &uVar0;
	Function_327(&iLocal_1488 + 8, "p_gen_sackMoney01x", 0, 0);
	Function_327(&iLocal_1488 + 8, "p_gen_crate07x", 0, 0);
	Function_327(&iLocal_1488 + 8, "p_gen_crate06x", 0, 0);
	if (!Function_321(&iLocal_1488 + 8))
	{
		return 0;
	}
	iLocal_1488 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_1488 + 64) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x0", "p_gen_sackMoney01x", Vector(-0,3154486f, 1,154155f, -0,9622214f), Vector(0.0f, 0.0f, -9,321589f), 0);
	*(&iLocal_1488 + 72) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x1", "p_gen_sackMoney01x", Vector(-0,2916805f, 1,196864f, -0,9578612f), Vector(0.0f, 178,9254f, 0.0f), 1);
	*(&iLocal_1488 + 80) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x2", "p_gen_sackMoney01x", Vector(0,6156588f, 1,195278f, -1,019992f), Vector(0.0f, -3,339726f, 0.0f), 0);
	*(&iLocal_1488 + 88) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x3", "p_gen_sackMoney01x", Vector(-0,1661063f, 1,385329f, -1,016633f), Vector(0.0f, 0.0f, -0,7161102f), 0);
	*(&iLocal_1488 + 96) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x4", "p_gen_sackMoney01x", Vector(0,2781922f, 1,297465f, -1,005139f), Vector(181,1454f, 3,207685f, -70,33696f), 0);
	*(&iLocal_1488 + 104) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x5", "p_gen_sackMoney01x", Vector(0,2053301f, 1,52676f, -0,9958731f), Vector(-3,766711f, -180,4286f, -24,28022f), 0);
	*(&iLocal_1488 + 112) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x6", "p_gen_sackMoney01x", Vector(0,003635607f, 1,447243f, -0,9762917f), Vector(-0,341668f, -180,0235f, 93,93499f), 0);
	*(&iLocal_1488 + 120) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x7", "p_gen_sackMoney01x", Vector(-0,3629942f, 1,792408f, -1,002066f), Vector(0.0f, 0.0f, 60,03253f), 0);
	*(&iLocal_1488 + 128) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x8", "p_gen_sackMoney01x", Vector(0,3350504f, 1,629029f, -1,054297f), Vector(0.0f, 0.0f, -12,34705f), 0);
	*(&iLocal_1488 + 136) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x9", "p_gen_sackMoney01x", Vector(0,4773167f, 1,593739f, -1,020887f), Vector(0.0f, 0.0f, -55,31095f), 0);
	*(&iLocal_1488 + 144) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x10", "p_gen_sackMoney01x", Vector(-0,2654437f, 1,557662f, -0,9422174f), Vector(-1,651038f, 180,4257f, 75,54572f), 0);
	*(&iLocal_1488 + 152) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x11", "p_gen_sackMoney01x", Vector(0,2665071f, 1,181799f, -0,2288854f), Vector(0.0f, -90,16331f, 0.0f), 0);
	*(&iLocal_1488 + 160) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x12", "p_gen_sackMoney01x", Vector(0,193605f, 1,18296f, -0,2179785f), Vector(0.0f, 90,47365f, 0.0f), 0);
	*(&iLocal_1488 + 168) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x13", "p_gen_sackMoney01x", Vector(0,262015f, 1,347278f, -0,4580409f), Vector(88,95199f, -43,29229f, -89,28131f), 0);
	*(&iLocal_1488 + 176) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x14", "p_gen_sackMoney01x", Vector(0,2027059f, 1,384273f, -0,3965118f), Vector(0.0f, 89,66659f, 0.0f), 0);
	*(&iLocal_1488 + 184) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "sackMoney01x15", "p_gen_sackMoney01x", Vector(-0,1216361f, 1,423949f, 0,121199f), Vector(128,6321f, -5,478947f, 178,8779f), 1);
	*(&iLocal_1488 + 192) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "ncrate07x0", "p_gen_crate07x", Vector(-0,5709198f, 1,193682f, 1,084488f), Vector(0.0f, 8,083189f, 0.0f), 1);
	*(&iLocal_1488 + 200) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1488, "ncrate06x0", "p_gen_crate06x", Vector(-0,6212885f, 1,204079f, 0,3885851f), Vector(0.0f, 0.0f, 0.0f), 1);
	Function_320(&iLocal_1488, &uParam0);
	return 1;
}

void Function_320(int iParam0, var uParam1) //Position: 0xF04E / 61518
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

bool Function_321(struct<2>[] Param0) //Position: 0xF099 / 61593
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_326();
	iVar1 = 0;
	if (!Function_184(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_325(&(Param0[iVar02]), 8);
		}
		else if (Function_324())
		{
			iVar1 = 1;
			Function_325(&(Param0[iVar02]), 8);
		}
		Function_325(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_184(&(Param0[iVar02]), 4))
		{
			if (!Function_184(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_184(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_184(&(Param0[02]), 8) || iVar1));
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
				Function_325(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_184(&(Param0[iVar02]), 4))
		{
			if (!Function_184(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
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
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
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
	Function_322();
	return 1;
}

void Function_322() //Position: 0xF45B / 62555
{
	if (!Function_323(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_323(int iParam0) //Position: 0xF49B / 62619
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_324() //Position: 0xF4B7 / 62647
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

void Function_325(struct<13> Param0) //Position: 0xF4E5 / 62693
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_326() //Position: 0xF4F8 / 62712
{
	if (!Function_323(128))
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

var Function_327(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xF53A / 62778
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_328(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_325(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_328(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xF578 / 62840
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_184(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_325(&(Param0[iVar02]), 4);
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

void Function_329(int iParam0, int iParam1) //Position: 0xF647 / 63047
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

void Function_330() //Position: 0xF691 / 63121
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

int Function_331() //Position: 0xF7C3 / 63427
{
	var uVar0;
	
	if (Function_343() && Function_368(Global_46866[0]))
	{
		if (!IS_LAYOUTREF_VALID(&iLocal_4))
		{
			Function_338();
		}
		if (!IS_ACTOR_VALID(&bLocal_1277))
		{
			Function_333();
			bLocal_1277 = &iLocal_4 + 880[02];
			if (Function_332(&bLocal_1277, 1))
			{
				ENABLE_VEHICLE_SEAT(&bLocal_1277, 0, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1277, 1, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1277, 2, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1277, 3, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1277, 4, 0);
				ENABLE_VEHICLE_SEAT(&bLocal_1277, 5, 0);
			}
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1277, *(&iLocal_4 + 1472[173]), 1, 1, 1);
		uVar0 = GET_DRAFT_ACTOR(false, &bLocal_1277);
		if (IS_ACTOR_VALID(&uVar0))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&uVar0);
		}
		uVar0 = GET_DRAFT_ACTOR(true, &bLocal_1277);
		if (IS_ACTOR_VALID(&uVar0))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(&uVar0);
		}
		CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1277);
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
		Function_243(&bLocal_1373);
		return 1;
	}
	if (Function_361(&bLocal_1373) < 2.0f)
	{
		Function_243(&bLocal_1373);
	}
	return 0;
}

bool Function_332(bool bParam0, bool bParam1) //Position: 0xF8CA / 63690
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		return 1;
	}
	if (&bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

void Function_333() //Position: 0xF90D / 63757
{
	*(&iLocal_4 + 880[02]) = Function_334(StackVal, StackVal, &iLocal_4, "nBankWagon", 1196, 981, Vector(-2841,317f, 33,12941f, 4594,135f), Vector(0.0f, -93,85719f, 0.0f), 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 880[02], false);
	return;
}

int Function_334(int iParam0, int iParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xF964 / 63844
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
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
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_337(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_336(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_335(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_335(int iParam0, bool[] bParam1) //Position: 0xFBB7 / 64439
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

var Function_336(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xFBEB / 64491
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_337(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xFC07 / 64519
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

void Function_338() //Position: 0xFC33 / 64563
{
	var uVar0;
	
	Function_329(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Gun01_layout");
	(&iLocal_4 + 1088) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Cutscene01Volumes_set");
	*(&iLocal_4 + 1064[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol01", 2,802597E-45f, Vector(-2709,677f, 33,31509f, 4248,861f), Vector(0.0f, 29,87804f, 0.0f), Vector(51,53463f, 4,401145f, 20,31111f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1064[0]);
	*(&iLocal_4 + 1064[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol02", 2,802597E-45f, Vector(-2741,321f, 32,1448f, 4297,811f), Vector(0.0f, 61,87787f, 0.0f), Vector(9,700404f, 4,401145f, 11,15567f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1088, &iLocal_4 + 1064[1]);
	*(&iLocal_4 + 1112) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Cutscene02Volumes_set");
	*(&iLocal_4 + 1096[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-2733,458f, 34,09637f, 4255,628f), Vector(0.0f, 16,00453f, 0.0f), Vector(6,946649f, 4,107396f, 20,23523f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1112, &iLocal_4 + 1096[0]);
	*(&iLocal_4 + 1136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Cutscene03Volumes_set");
	*(&iLocal_4 + 1120[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-2732,239f, 33,98906f, 4255,876f), Vector(0.0f, 48,75816f, 0.0f), Vector(23,06067f, 4,107396f, 18,88566f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1136, &iLocal_4 + 1120[0]);
	*(&iLocal_4 + 1200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "PlayerReturnVolumes_set");
	*(&iLocal_4 + 1144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerReturnVol01", 4,203895E-45f, Vector(-2742,25f, 33,56947f, 4268,056f), Vector(0.0f, 20.0f, 0.0f), Vector(13,16938f, 2,481075f, 26,9215f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1144[0]);
	*(&iLocal_4 + 1144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerReturnVol02", 4,203895E-45f, Vector(-2715,818f, 33,53601f, 4236,863f), Vector(0.0f, 20.0f, 0.0f), Vector(30,57804f, 2,411075f, 22,27658f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1144[1]);
	*(&iLocal_4 + 1144[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerReturnVol03", 4,203895E-45f, Vector(-2705,599f, 33,50017f, 4277,215f), Vector(0.0f, 9,486036f, 0.0f), Vector(30,57804f, 3,277385f, 22,27658f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1144[2]);
	*(&iLocal_4 + 1144[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerReturnVol04", 4,203895E-45f, Vector(-2728,781f, 35,12071f, 4261,163f), Vector(0.0f, 9,486036f, 0.0f), Vector(7,194406f, 3,277385f, 6,865405f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1144[3]);
	*(&iLocal_4 + 1144[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerReturnVol05", 4,203895E-45f, Vector(-2688,04f, 33,90737f, 4256,896f), Vector(0.0f, 9,486036f, 0.0f), Vector(14,51902f, 3,277385f, 42,57685f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1144[4]);
	*(&iLocal_4 + 1144[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerReturnVol06", 2,802597E-45f, Vector(-2762,693f, 33,71651f, 4270,652f), Vector(0.0f, 15,82649f, 0.0f), Vector(22,41126f, 5,599864f, 20,73567f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1144[5]);
	*(&iLocal_4 + 1360) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "ChuparosaVolumes_set");
	*(&iLocal_4 + 1208[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "TaxiVol", 2,802597E-45f, Vector(-2761,548f, 33,43235f, 4283,491f), Vector(0.0f, 14,92516f, 0.0f), Vector(11,99586f, 4,107396f, 8,547808f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[0]);
	*(&iLocal_4 + 1208[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nBottleVol", 2,802597E-45f, Vector(-2740,996f, 33,29825f, 4298,223f), Vector(0.0f, -28,89841f, 0.0f), Vector(10,36101f, 4,107396f, 10,50894f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[1]);
	*(&iLocal_4 + 1208[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BottleHomeVol", 4,203895E-45f, Vector(-2741,571f, 32,8153f, 4298,172f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[2]);
	*(&iLocal_4 + 1208[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PatioVol", 2,802597E-45f, Vector(-2744,101f, 33,50801f, 4293,105f), Vector(0.0f, -23,23163f, 0.0f), Vector(3,054472f, 2,926493f, 3,776453f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[3]);
	*(&iLocal_4 + 1208[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "DrunkReactLeftVol", 2,802597E-45f, Vector(-2737,182f, 32,21512f, 4295,468f), Vector(0.0f, -28,89841f, 0.0f), Vector(0,8860464f, 4,107396f, 1,725623f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[4]);
	*(&iLocal_4 + 1208[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "DrunkReactRightVol", 2,802597E-45f, Vector(-2736,405f, 32,21512f, 4295,897f), Vector(0.0f, -28,89841f, 0.0f), Vector(0,8860464f, 4,107396f, 1,725623f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[5]);
	*(&iLocal_4 + 1208[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "DrunkReactBottleVol", 2,802597E-45f, Vector(-2736,844f, 32,21512f, 4295,773f), Vector(0.0f, -28,89841f, 0.0f), Vector(0,8860464f, 4,107396f, 1,474904f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[6]);
	*(&iLocal_4 + 1208[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BirdVol", 2,802597E-45f, Vector(-2761,32f, 33,83716f, 4282,292f), Vector(0.0f, 12,46887f, 0.0f), Vector(24,93764f, 4,107396f, 43,45214f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[7]);
	*(&iLocal_4 + 1208[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CompanionBirdVol", 2,802597E-45f, Vector(-2759,366f, 33,76879f, 4286,129f), Vector(0.0f, 18,23129f, 0.0f), Vector(9,880864f, 4,051019f, 6,937664f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[8]);
	*(&iLocal_4 + 1208[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CompanionGateWaitVol", 2,802597E-45f, Vector(-2753,521f, 33,40255f, 4267,469f), Vector(0.0f, 18,23129f, 0.0f), Vector(9,880864f, 4,051019f, 11,03994f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[9]);
	*(&iLocal_4 + 1208[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerGateWaitVol", 2,802597E-45f, Vector(-2714,401f, 33,77802f, 4260,153f), Vector(0.0f, 13,24638f, 0.0f), Vector(80,13781f, 6,916871f, 40,4608f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[10]);
	*(&iLocal_4 + 1208[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BankVol", 2,802597E-45f, Vector(-2728,294f, 32,53136f, 4258,142f), Vector(0.0f, 22,76826f, 0.0f), Vector(13,43371f, 4,107396f, 14,61672f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[11]);
	*(&iLocal_4 + 1208[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ManagerRetardVol", 2,802597E-45f, Vector(-2745,803f, 33,60411f, 4256,521f), Vector(0.0f, 46,3212f, 0.0f), Vector(6,047449f, 4,107396f, 3,679657f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[12]);
	*(&iLocal_4 + 1208[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "LeaveChuparosaStartVol", 2,802597E-45f, Vector(-2746,94f, 33,59293f, 4265,968f), Vector(0.0f, 22,76826f, 0.0f), Vector(38,22214f, 4,107396f, 20,10774f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[13]);
	*(&iLocal_4 + 1208[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseImpatientVol", 2,802597E-45f, Vector(-2761,034f, 33,54052f, 4269,835f), Vector(0.0f, 15,49598f, 0.0f), Vector(11,99586f, 4,107396f, 8,547808f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[14]);
	*(&iLocal_4 + 1208[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SafeReturnVol", 2,802597E-45f, Vector(-2788,762f, 32,64554f, 4357,014f), Vector(0.0f, -13,58609f, 0.0f), Vector(69,42378f, 5,91193f, 144,1286f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[15]);
	*(&iLocal_4 + 1208[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ChuparosaApproachVol", 2,802597E-45f, Vector(-2759,25f, 33,09032f, 4271,547f), Vector(0.0f, 28,05206f, 0.0f), Vector(17,34942f, 6,183097f, 43,45214f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[16]);
	*(&iLocal_4 + 1208[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "LateCSTriggerVol", 2,802597E-45f, Vector(-2726,594f, 33,77378f, 4257,609f), Vector(0.0f, 41,09572f, 0.0f), Vector(46,39699f, 6,183097f, 43,45214f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1360, &iLocal_4 + 1208[17]);
	*(&iLocal_4 + 1464) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CombatVolumes_set");
	*(&iLocal_4 + 1368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SiegeVol", 2,802597E-45f, Vector(-2839,203f, 34,7983f, 4588,333f), Vector(0.0f, 41,88469f, 0.0f), Vector(41,56334f, 8,158757f, 41,66103f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[0]);
	*(&iLocal_4 + 1368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SiegeWagonVol", 2,802597E-45f, Vector(-2839,011f, 34,7983f, 4591,494f), Vector(0.0f, 85,08726f, 0.0f), Vector(15,84207f, 8,158757f, 26,82027f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[1]);
	*(&iLocal_4 + 1368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CompanionSiegeVol", 2,802597E-45f, Vector(-2829,746f, 34,7983f, 4577,383f), Vector(0.0f, 40,71558f, 0.0f), Vector(12,17292f, 8,158757f, 16,70416f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[2]);
	*(&iLocal_4 + 1368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseRoadVol", 2,802597E-45f, Vector(-2846,514f, 34,36823f, 4578,478f), Vector(0.0f, 47,69881f, 0.0f), Vector(22,5677f, 6,617369f, 7,824667f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[3]);
	*(&iLocal_4 + 1368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ExecuteVol01", 2,802597E-45f, Vector(-2839,962f, 39,79591f, 4599,274f), Vector(0.0f, 76,98192f, 0.0f), Vector(12,64904f, 59,31402f, 344,4431f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[4]);
	*(&iLocal_4 + 1368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ExecuteVol02", 2,802597E-45f, Vector(-2847,142f, 39,79591f, 4594,446f), Vector(0.0f, 23,39602f, 0.0f), Vector(12,64904f, 59,31402f, 344,4431f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[5]);
	*(&iLocal_4 + 1368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayerRoadblockVol", 2,802597E-45f, Vector(-2766,289f, 35,28691f, 4388,827f), Vector(0.0f, 26,89347f, 0.0f), Vector(141,3574f, 11,75961f, 122,5121f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[6]);
	*(&iLocal_4 + 1368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CompanionRoadblockVol", 2,802597E-45f, Vector(-2771,477f, 24,4789f, 4378,598f), Vector(0.0f, 26,89347f, 0.0f), Vector(444,2672f, 36,1755f, 102,2547f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[7]);
	*(&iLocal_4 + 1368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RoadblockWagonVol", 2,802597E-45f, Vector(-2795,481f, 32,86611f, 4408,63f), Vector(0.0f, 70,19115f, 0.0f), Vector(6,641654f, 5,546166f, 16,6231f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[8]);
	*(&iLocal_4 + 1368[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RoadblockPanicVol", 2,802597E-45f, Vector(-2795,64f, 32,48137f, 4412,987f), Vector(0.0f, -21,21051f, 0.0f), Vector(6,617662f, 3,327458f, 6,819799f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[9]);
	*(&iLocal_4 + 1368[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RoadblockKillVol", 2,802597E-45f, Vector(-2836.0f, 14,76718f, 4372f), Vector(0.0f, 32,95726f, 0.0f), Vector(45,82703f, 10,85972f, 57,73615f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1368[10]);
	*(&iLocal_4 + 1472[03]) = Vector(-2741,6f, 32,14339f, 4298,206f);
	*(&iLocal_4 + 1472[03] + 12) = Vector(0.0f, 325,5399f, 0.0f);
	*(&iLocal_4 + 1472[13]) = Vector(-2757,146f, 32,12549f, 4289,622f);
	*(&iLocal_4 + 1472[13] + 12) = Vector(0.0f, -365,3234f, 0.0f);
	*(&iLocal_4 + 1472[23]) = Vector(-2730,962f, 32,80562f, 4262,326f);
	*(&iLocal_4 + 1472[23] + 12) = Vector(0.0f, -289,3771f, 0.0f);
	*(&iLocal_4 + 1472[33]) = Vector(-2847,755f, 33,09273f, 4594,559f);
	*(&iLocal_4 + 1472[33] + 12) = Vector(0.0f, -43,35249f, 0.0f);
	*(&iLocal_4 + 1472[43]) = Vector(-2733,662f, 32,61979f, 4257,286f);
	*(&iLocal_4 + 1472[43] + 12) = Vector(0.0f, -38,82964f, 0.0f);
	*(&iLocal_4 + 1472[53]) = Vector(-2742,391f, 32,12951f, 4298,045f);
	*(&iLocal_4 + 1472[53] + 12) = Vector(0.0f, -20,63119f, 0.0f);
	*(&iLocal_4 + 1472[63]) = Vector(-2756.0f, 32,12549f, 4288f);
	*(&iLocal_4 + 1472[63] + 12) = Vector(0.0f, 106,9532f, 0.0f);
	*(&iLocal_4 + 1472[73]) = Vector(-2731,983f, 32,80579f, 4263,076f);
	*(&iLocal_4 + 1472[73] + 12) = Vector(0,1260134f, 34,67302f, 0,02682312f);
	*(&iLocal_4 + 1472[83]) = Vector(-2848,165f, 33,07391f, 4591,086f);
	*(&iLocal_4 + 1472[83] + 12) = Vector(0.0f, -43,15279f, 0.0f);
	*(&iLocal_4 + 1472[93]) = Vector(-2728.0f, 32,61269f, 4256,723f);
	*(&iLocal_4 + 1472[93] + 12) = Vector(0.0f, 31,58359f, 0.0f);
	*(&iLocal_4 + 1472[103]) = Vector(-2741,483f, 32,30319f, 4258,799f);
	*(&iLocal_4 + 1472[103] + 12) = Vector(0.0f, 45,86407f, 0.0f);
	*(&iLocal_4 + 1472[113]) = Vector(-2741,483f, 32,30319f, 4258,799f);
	*(&iLocal_4 + 1472[113] + 12) = Vector(0.0f, 45,86407f, 0.0f);
	*(&iLocal_4 + 1472[123]) = Vector(-2741,483f, 32,30319f, 4258,799f);
	*(&iLocal_4 + 1472[123] + 12) = Vector(0.0f, 45,86407f, 0.0f);
	*(&iLocal_4 + 1472[133]) = Vector(-2848,939f, 33,02f, 4593,571f);
	*(&iLocal_4 + 1472[133] + 12) = Vector(0.0f, -43,35249f, 0.0f);
	*(&iLocal_4 + 1472[143]) = Vector(-2742,596f, 32,24027f, 4260,01f);
	*(&iLocal_4 + 1472[143] + 12) = Vector(0,1769326f, 54,14531f, 0,09853994f);
	*(&iLocal_4 + 1472[153]) = Vector(-2742,596f, 32,24027f, 4260,01f);
	*(&iLocal_4 + 1472[153] + 12) = Vector(0,1769326f, 54,14531f, 0,09853994f);
	*(&iLocal_4 + 1472[163]) = Vector(-2756.0f, 32,12549f, 4285,659f);
	*(&iLocal_4 + 1472[163] + 12) = Vector(0.0f, 6,119954f, 0.0f);
	*(&iLocal_4 + 1472[173]) = Vector(-2730,673f, 32,29004f, 4250,744f);
	*(&iLocal_4 + 1472[173] + 12) = Vector(0.0f, -39,28831f, 0.0f);
	*(&iLocal_4 + 1912[03]) = Vector(-2741,002f, 32,19243f, 4294,383f);
	*(&iLocal_4 + 1912[03] + 12) = Vector(0.0f, -110,5788f, 0.0f);
	*(&iLocal_4 + 1912[13]) = Vector(-2740.0f, 32,22191f, 4294,539f);
	*(&iLocal_4 + 1912[13] + 12) = Vector(0.0f, -83,5015f, 0.0f);
	*(&iLocal_4 + 1912[23]) = Vector(-2739,436f, 33,11522f, 4294,454f);
	*(&iLocal_4 + 1912[23] + 12) = Vector(0.0f, 142,8443f, 0.0f);
	*(&iLocal_4 + 1912[33]) = Vector(-2757,535f, 32,12549f, 4287,701f);
	*(&iLocal_4 + 1912[33] + 12) = Vector(0.0f, -98,04256f, 0.0f);
	*(&iLocal_4 + 1912[43]) = Vector(-2759,827f, 35,74706f, 4289,089f);
	*(&iLocal_4 + 1912[43] + 12) = Vector(0.0f, -110,5788f, 0.0f);
	*(&iLocal_4 + 1912[53]) = Vector(-2762,856f, 48,47132f, 4280,429f);
	*(&iLocal_4 + 1912[53] + 12) = Vector(0.0f, -89,46988f, 0.0f);
	*(&iLocal_4 + 1912[63]) = Vector(-2757,811f, 48,47132f, 4272,912f);
	*(&iLocal_4 + 1912[63] + 12) = Vector(0.0f, -89,46988f, 0.0f);
	*(&iLocal_4 + 1912[73]) = Vector(-2767,047f, 48,47132f, 4273,267f);
	*(&iLocal_4 + 1912[73] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1912[83]) = Vector(-2757,434f, 31,97549f, 4271,287f);
	*(&iLocal_4 + 1912[83] + 12) = Vector(0.0f, 131,2716f, 0.0f);
	*(&iLocal_4 + 1912[93]) = Vector(-2738,745f, 32,66573f, 4262,078f);
	*(&iLocal_4 + 1912[93] + 12) = Vector(0.0f, -128,5914f, 0.0f);
	*(&iLocal_4 + 1912[103]) = Vector(-2732,575f, 32,31193f, 4251,476f);
	*(&iLocal_4 + 1912[103] + 12) = Vector(0.0f, -177,6804f, 0.0f);
	*(&iLocal_4 + 1912[113]) = Vector(-2730,921f, 32,80103f, 4261,026f);
	*(&iLocal_4 + 1912[113] + 12) = Vector(0.0f, -239,8409f, 0.0f);
	*(&iLocal_4 + 1912[123]) = Vector(-2734,502f, 32,52249f, 4243,025f);
	*(&iLocal_4 + 1912[123] + 12) = Vector(0.0f, -150,2162f, 0.0f);
	*(&iLocal_4 + 1912[133]) = Vector(-2740,285f, 32,41903f, 4259,859f);
	*(&iLocal_4 + 1912[133] + 12) = Vector(0,1987685f, -232,2412f, -1,0256f);
	*(&iLocal_4 + 1912[143]) = Vector(-2766,844f, 32,13541f, 4270,399f);
	*(&iLocal_4 + 1912[143] + 12) = Vector(0.0f, -73,91867f, 0.0f);
	*(&iLocal_4 + 1912[153]) = Vector(-2765,711f, 32,13735f, 4274,011f);
	*(&iLocal_4 + 1912[153] + 12) = Vector(0.0f, -61,3947f, 0.0f);
	*(&iLocal_4 + 1912[163]) = Vector(-2764,074f, 32,14268f, 4271,7f);
	*(&iLocal_4 + 1912[163] + 12) = Vector(0.0f, -71,46024f, 0.0f);
	*(&iLocal_4 + 1912[173]) = Vector(-2725,689f, 32,82584f, 4263,838f);
	*(&iLocal_4 + 1912[173] + 12) = Vector(0.0f, -66,96333f, 0.0f);
	*(&iLocal_4 + 1912[183]) = Vector(-2752.0f, 32,12549f, 4253,61f);
	*(&iLocal_4 + 1912[183] + 12) = Vector(0.0f, -315,5042f, 0.0f);
	*(&iLocal_4 + 1912[193]) = Vector(-2739,914f, 32,40908f, 4263,521f);
	*(&iLocal_4 + 1912[193] + 12) = Vector(0.0f, -83,09573f, 0.0f);
	*(&iLocal_4 + 1912[203]) = Vector(-2745,713f, 32,62653f, 4255,814f);
	*(&iLocal_4 + 1912[203] + 12) = Vector(0.0f, -34,63631f, 0.0f);
	*(&iLocal_4 + 2424[03]) = Vector(-2743,361f, 32,118f, 4297,736f);
	*(&iLocal_4 + 2424[03] + 12) = Vector(0.0f, 59,842f, 0.0f);
	*(&iLocal_4 + 2424[13]) = Vector(-2743,597f, 32,09972f, 4298,408f);
	*(&iLocal_4 + 2424[13] + 12) = Vector(0.0f, 64,92086f, 0.0f);
	*(&iLocal_4 + 2480[03]) = Vector(-2739,184f, 33,0175f, 4294,623f);
	*(&iLocal_4 + 2480[03] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2480[13]) = Vector(-2739,01f, 33,01875f, 4294,777f);
	*(&iLocal_4 + 2480[13] + 12) = Vector(0.0f, 142,8443f, 0.0f);
	*(&iLocal_4 + 2480[23]) = Vector(-2738,84f, 33,015f, 4294,948f);
	*(&iLocal_4 + 2480[23] + 12) = Vector(0.0f, 140,6732f, 0.0f);
	*(&iLocal_4 + 2560[03]) = Vector(-2738,888f, 33,09969f, 4295,009f);
	*(&iLocal_4 + 2560[03] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2560[13]) = Vector(-2738,789f, 33,08573f, 4294,884f);
	*(&iLocal_4 + 2560[13] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2560[23]) = Vector(-2739,053f, 33,19901f, 4294,831f);
	*(&iLocal_4 + 2560[23] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2560[33]) = Vector(-2738,941f, 33,16768f, 4294,692f);
	*(&iLocal_4 + 2560[33] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2560[43]) = Vector(-2739,237f, 33,06237f, 4294,684f);
	*(&iLocal_4 + 2560[43] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2560[53]) = Vector(-2739,135f, 33,06023f, 4294,56f);
	*(&iLocal_4 + 2560[53] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2712[03]) = Vector(-2739,572f, 33,0175f, 4294,287f);
	*(&iLocal_4 + 2712[03] + 12) = Vector(0.0f, 139,1611f, 0.0f);
	*(&iLocal_4 + 2712[13]) = Vector(-2739,01f, 33,01875f, 4294,777f);
	*(&iLocal_4 + 2712[13] + 12) = Vector(0.0f, 142,8443f, 0.0f);
	*(&iLocal_4 + 2712[23]) = Vector(-2738,448f, 33,015f, 4295,27f);
	*(&iLocal_4 + 2712[23] + 12) = Vector(0.0f, 140,6732f, 0.0f);
	*(&iLocal_4 + 2792[03]) = Vector(-2841,387f, 33,08849f, 4591,688f);
	*(&iLocal_4 + 2792[03] + 12) = Vector(0.0f, -28,62082f, 0.0f);
	*(&iLocal_4 + 2792[13]) = Vector(-2836,208f, 32,93369f, 4587,257f);
	*(&iLocal_4 + 2792[13] + 12) = Vector(0.0f, -65,3969f, 0.0f);
	*(&iLocal_4 + 2792[23]) = Vector(-2837,485f, 32,70855f, 4585,434f);
	*(&iLocal_4 + 2792[23] + 12) = Vector(0.0f, -57,60249f, 0.0f);
	*(&iLocal_4 + 2792[33]) = Vector(-2832f, 32,12549f, 4578,165f);
	*(&iLocal_4 + 2792[33] + 12) = Vector(0.0f, 137,6328f, 0.0f);
	*(&iLocal_4 + 2792[43]) = Vector(-2839,851f, 33,12941f, 4592f);
	*(&iLocal_4 + 2792[43] + 12) = Vector(0.0f, 11,44669f, 0.0f);
	*(&iLocal_4 + 2792[53]) = Vector(-2841,851f, 33,12941f, 4586,15f);
	*(&iLocal_4 + 2792[53] + 12) = Vector(0.0f, -178,4031f, 0.0f);
	*(&iLocal_4 + 2792[63]) = Vector(-2845,287f, 32,40707f, 4579,198f);
	*(&iLocal_4 + 2792[63] + 12) = Vector(0.0f, -46,76951f, 0.0f);
	*(&iLocal_4 + 2792[73]) = Vector(-2802,475f, 31,1183f, 4424,515f);
	*(&iLocal_4 + 2792[73] + 12) = Vector(0.0f, -25,17855f, 0.0f);
	*(&iLocal_4 + 2792[83]) = Vector(-2797,435f, 32,06524f, 4394,651f);
	*(&iLocal_4 + 2792[83] + 12) = Vector(0.0f, 185,8862f, 0.0f);
	*(&iLocal_4 + 2792[93]) = Vector(-2838,295f, 15,67522f, 4374,056f);
	*(&iLocal_4 + 2792[93] + 12) = Vector(0.0f, 105,2156f, 0.0f);
	*(&iLocal_4 + 3040[03]) = Vector(-2794,754f, 30,9805f, 4410,462f);
	*(&iLocal_4 + 3040[03] + 12) = Vector(0.0f, 158,5703f, 0.0f);
	*(&iLocal_4 + 3040[13]) = Vector(-2788,802f, 31,00997f, 4411,15f);
	*(&iLocal_4 + 3040[13] + 12) = Vector(0.0f, 158,5703f, 0.0f);
	*(&iLocal_4 + 3040[23]) = Vector(-2803,386f, 30,81734f, 4408,59f);
	*(&iLocal_4 + 3040[23] + 12) = Vector(0.0f, 202,2342f, 0.0f);
	*(&iLocal_4 + 3120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SitDrinking", "gun01_drunk", Vector(-2737,108f, 32,24866f, 4296,192f), Vector(0.0f, -35,08794f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3120), 0);
	DECOR_SET_BOOL(&iLocal_4 + 3120, "ForceAllowRain", 1);
	*(&iLocal_4 + 3128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nRandSmoke", "smoking_stand", Vector(-2740,996f, 32,19243f, 4294,389f), Vector(0.0f, -110,5788f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3128, "ForceAllowRain", 1);
	*(&iLocal_4 + 3136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BirdIdle", "stand_pocketwatch_e_any", Vector(-2756.0f, 32,12549f, 4288f), Vector(0.0f, 106,9532f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3136, "ForceAllowRain", 1);
	*(&iLocal_4 + 3144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "ShootAtBirds", "Gun_01_shoot_birds", Vector(-2756.0f, 32,12549f, 4288f), Vector(0.0f, 106,9532f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3144, "ForceAllowRain", 1);
	*(&iLocal_4 + 3152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nBankSmoke", "smoking_stand_nospawn", Vector(-2732,281f, 32,78061f, 4261,275f), Vector(0.0f, 83,78045f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3152, "ForceAllowRain", 1);
	*(&iLocal_4 + 3160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HoldHostage", "hold_hostage", Vector(-2840,793f, 33,1304f, 4591,881f), Vector(0.0f, -49,7223f, 0.0f));
	DECOR_SET_BOOL(&iLocal_4 + 3160, "ForceAllowRain", 1);
	*(&iLocal_4 + 3168) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockWagonCover", Vector(-2790,036f, 31,07581f, 4409,256f), Vector(0.0f, -110,3795f, 0.0f), 1);
	Function_341(&iLocal_4 + 3168);
	*(&iLocal_4 + 3176) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockWagonCover1", Vector(-2790,709f, 31,07581f, 4411,242f), Vector(0.0f, -199,8012f, 0.0f), 1);
	Function_341(&iLocal_4 + 3176);
	*(&iLocal_4 + 3184) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockWagonCover2", Vector(-2798,389f, 31,07581f, 4409,692f), Vector(0.0f, -287,8762f, 0.0f), 1);
	Function_341(&iLocal_4 + 3184);
	*(&iLocal_4 + 3192) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockWagonCover3", Vector(-2797,125f, 31,07581f, 4405,857f), Vector(0.0f, -377,0923f, 0.0f), 1);
	Function_341(&iLocal_4 + 3192);
	PushArrayP();
	*(&iLocal_4 + 3200) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "ToBirdsPath");
	PushArrayP();
	*(&iLocal_4 + 3208) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "ToBankPath");
	PushArrayP();
	*(&iLocal_4 + 3216) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "ToHorsePath");
	PushArrayP();
	*(&iLocal_4 + 3224) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "FromChuparosaPath");
	PushArrayP();
	*(&iLocal_4 + 3232) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "SiegeThreatPath01");
	PushArrayP();
	*(&iLocal_4 + 3240) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "SiegeThreatPath02");
}

struct<112> «½EáÅ-æA÷cEÊÀÅ-gA÷|ÒE³aÅ-,øA÷&VE3Å,ÖXAöúEfqÅ,A÷´E-2Å,NA÷FEíåÅ,AöüEºÅ+£A÷"EpÅ+3A÷	wE®Å+!àA÷ ñEÎÓÅ+I©AöÿEuÅ+A÷2E<Å+áA÷4E	mÅ,CA÷EÝAÅ-¤¨A÷EGèÅ.ZAA÷	EçüÅ.¤íA÷wErÅ.qAøúüEQÀÅ.AùãE-Å.HÎAù Eþ¡Å(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211) //Position: 0x12049 / 73801
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 4294965710 * -30264;
}

var Å.XVAý¢EÁÅ."AþEÃÅ.°,Aþ±¹EèÅ.·PAþùLE¦üÅ.©*AÿEWÅ.r?Aÿ
Eõ«Å.
SAÿ
E\Å-DB E@kÅ-hB E
9Å- äB ÑEÃÂÅ,ã¦(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x12157 / 74071
{
	int iVar24;
	
	PatchTrapD();
	return TASK_SEQUENCE_CLOSE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, IntToFloat(StackVal + 136) * -31338) + 137;
	MEMORY_CONSIDER_AS_ENEMY(StackVal, StackVal * -31362);
}

void Function_341(bool bParam0) //Position: 0x128A2 / 75938
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_307(&bParam0);
	Var0 = Function_307(&bParam0);
	Function_342(&bParam0);
	Var2 = Function_342(&bParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&bParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&bParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&bParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&bParam0);
	bParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

struct<8> Function_342(var uParam0) //Position: 0x12976 / 76150
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

bool Function_343() //Position: 0x1299F / 76191
{
	bool bVar0;
	
	if (Function_361(&bLocal_1373) < 1.0f)
	{
		bVar0 = true;
		Function_243(&bLocal_1373);
	}
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_355(1))
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!Function_353())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!Function_321(&iLocal_842))
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("smoking_stand_gped"))
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_1265))
	{
		bLocal_1265 = Function_344(5, 0, 1, 0, 0, 0, 0, 0, 0);
		if (bVar0)
		{
		}
		return 0;
	}
	if (!Function_310())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_1273))
	{
		if (bVar0)
		{
		}
		bLocal_1273 = Function_304(1, 1, 0, 0, 0, 0, 1, 0);
		if (IS_ACTOR_VALID(&bLocal_1273))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_1273, 1);
		}
		return 0;
	}
	if (!IS_ACTOR_READY_FOR_ACTION(&bLocal_1273))
	{
		if (bVar0)
		{
		}
		MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1273, 1);
		return 0;
	}
	return 1;
}

var Function_344(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x12A94 / 76436
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
		Function_217(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_352(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_347(&Global_15402[iParam014] + 16, &uParam7);
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
		Function_346(&bVar1, 0, 0, 0, 0);
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
		Function_345(&bVar1, 0);
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

void Function_345(var uParam0, bool bParam1) //Position: 0x12FD4 / 77780
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_346(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x12FF6 / 77814
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

var Function_347(int iParam0, int iParam1) //Position: 0x13057 / 77911
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_351(iParam0))
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
						Function_348(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_348(var uParam0, int iParam1) //Position: 0x130E5 / 78053
{
	Function_350(&uParam0);
	Function_349(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_349(int iParam0) //Position: 0x13111 / 78097
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_350(int iParam0) //Position: 0x13137 / 78135
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

bool Function_351(int iParam0) //Position: 0x1320D / 78349
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_352(int iParam0, var uParam1) //Position: 0x13224 / 78372
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

bool Function_353() //Position: 0x132CA / 78538
{
	Function_354(&iLocal_4 + 8, 981, 2, 0);
	Function_354(&iLocal_4 + 8, 1200, 2, 0);
	Function_354(&iLocal_4 + 8, 977, 2, 0);
	Function_327(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/gun01_drunk", 1, 0);
	Function_327(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_327(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_327(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/gun_01_shoot_birds", 1, 0);
	Function_327(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_327(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/hold_hostage", 1, 0);
	if (Function_321(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_354(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x134A4 / 79012
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_184(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_325(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_325(&(Param0[iVar02]), 8);
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

bool Function_355(bool bParam0) //Position: 0x13580 / 79232
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

int Function_356() //Position: 0x135B0 / 79280
{
	iLocal_1452 = 0;
	if (!bLocal_1486)
	{
		Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	}
	Function_357(StackVal, &uLocal_828, Global_54078, &iLocal_4 + 1120[0], 0, 0, 0, 0, 1, 1);
	Function_243(&bLocal_1373);
	return 1;
}

void Function_357(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x135F7 / 79351
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
				Function_358(&uVar1, &uParam0);
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

void Function_358(var uParam0, float fParam1) //Position: 0x13897 / 80023
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

void Function_359(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x13919 / 80153
{
	var uVar0;
	float fVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_261();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		fVar1 = Function_50();
		if (IS_ACTOR_VALID(&fVar1))
		{
			if (GET_WEAPON_IN_HAND(&fVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&fVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&fVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&fVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&fVar1, 0);
			}
			SET_ACTOR_HEALTH(&fVar1, GET_ACTOR_MAX_HEALTH(&fVar1));
			SET_ACTOR_INVULNERABILITY(&fVar1, 1);
			AI_IGNORE_ACTOR(&fVar1);
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
				Function_290(&fVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_290(&fVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_360()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_360()));
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
	if (Function_323(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_228(0x4000000);
	}
	if (Function_323(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_228(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_360() //Position: 0x13BCB / 80843
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

float Function_361(vector3 vParam0) //Position: 0x13C59 / 80985
{
	if (Function_363(&vParam0))
	{
		if (Function_362(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_362(int iParam0) //Position: 0x13D26 / 81190
{
	return Function_14(iParam0, 2);
}

bool Function_363(bool bParam0) //Position: 0x13D34 / 81204
{
	return Function_14(bParam0, 1);
}

int Function_364() //Position: 0x13D42 / 81218
{
	Function_354(&iLocal_4 + 632, 703, 2, 0);
	Function_354(&iLocal_4 + 632, 1196, 2, 0);
	Function_354(&iLocal_4 + 632, 262, 2, 0);
	if (Function_321(&iLocal_4 + 632))
	{
		return 1;
	}
	return 0;
}

void Function_365() //Position: 0x13D80 / 81280
{
	return;
}

void Function_366() //Position: 0x13D86 / 81286
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, (&iLocal_4 + 1472[43]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1273)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1273);
			RESET_ACTOR_GAITS(&bLocal_1273, 0);
		}
	}
	else
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[43]), 1, 1, 1);
		RESET_ACTOR_GAITS(&Global_54076, 0);
	}
	return;
}

void Function_367(int iParam0) //Position: 0x13E03 / 81411
{
	if (!Function_300(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_191(1, 0, 1);
		}
	}
	return;
}

bool Function_368(int iParam0) //Position: 0x13E1F / 81439
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

void Function_369(var uParam0) //Position: 0x13E3B / 81467
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (IS_VOLUME_VALID(&uParam0))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", &Global_10994, 4294967295, 0);
		if (IS_OBJECTSET_VALID(&uVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(&uVar1) - 1))
			{
				iVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar1);
				if (IS_OBJECT_VALID(&iVar2))
				{
					iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
					if (IS_ACTOR_VALID(&iVar3))
					{
						if (&iVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(&iVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(&uVar1);
		}
	}
	return;
}

void Function_370(int iParam0) //Position: 0x13EE8 / 81640
{
	Function_371(&Global_43580, iParam0);
	return;
}

void Function_371(var uParam0, int iParam1) //Position: 0x13EF6 / 81654
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_372(bool bParam0) //Position: 0x13F1E / 81694
{
	Function_373(0, 0x40400000);
	Function_206();
	Function_205();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_373(float fParam0, float fParam1) //Position: 0x13F54 / 81748
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
	Function_375();
	Function_374();
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

void Function_374() //Position: 0x14079 / 82041
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_375() //Position: 0x140AD / 82093
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

void Function_376() //Position: 0x141B3 / 82355
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	Function_452();
	switch (bLocal_919)
	{
		case 0x00000000:
			Function_372(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			Function_228(8);
			Function_370(1);
			Function_370(256);
			Function_369(&iLocal_4 + 1208[0]);
			if (iLocal_1436[3] == 0)
			{
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_367(&Local_830);
				Function_370(1);
				Function_370(256);
				Function_369(&iLocal_4 + 1208[0]);
				Function_451();
				Function_242(1);
			}
			else
			{
				Function_420();
				Function_242(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_419()) && Function_321(&iLocal_1488 + 8))
			{
				Function_420();
				Function_242(2);
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x00000002:
			if (Function_361(&bLocal_1373) < 2.0f)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_295(1.0f);
				Function_242(6);
			}
			break;
		
		case 0x00000006:
			fVar0 = Function_418(&Global_54076, &bLocal_1277);
			if (fVar0 < 100.0f)
			{
				Function_259("Wagon_abandoned");
				bLocal_1451 = true;
			}
			else if (fVar0 < 50.0f)
			{
				if (!iLocal_1457)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
					iLocal_1457 = 1;
					Function_414(&iLocal_1377, 8.0f, "Wagon_return_escort", 7,5f, 2, 1);
				}
			}
			else
			{
				iLocal_1457 = 0;
				Function_412();
			}
			break;
		
		case 0x00000010:
			fVar0 = Function_418(&Global_54076, &bLocal_1277);
			if (fVar0 < 100.0f)
			{
				Function_259("Wagon_abandoned");
				bLocal_1451 = true;
			}
			else if (!Function_411())
			{
				if (fVar0 < 50.0f)
				{
					if (!iLocal_1457)
					{
						Function_410();
						Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else
				{
					iLocal_1457 = 0;
					if (iLocal_1433 == 0)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_409())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 1.0f)
						{
							Function_408();
							iLocal_1433 = 1;
						}
					}
					else if (iLocal_1433 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 1.0f)
						{
							Function_417("Gun01_obj05a", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 2)
					{
						if (!HUD_IS_SHOWING_OBJECTIVE() || Function_361(&bLocal_1373) < 5.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_Banter1stAmbush_v1_AA"))
							{
								Function_407();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_Banter1stAmbush_v2_AA"))
							{
								Function_406();
							}
							Function_243(&bLocal_1373);
							iLocal_1433 = 3;
						}
					}
				}
			}
			break;
		
		case 0x0000001A:
			fVar0 = Function_418(&Global_54076, &bLocal_1277);
			fVar1 = Function_418(&Global_54076, &bLocal_1287);
			if (fVar0 < fVar1)
			{
				fVar0 = fVar1;
			}
			if (fVar0 < 100.0f)
			{
				Function_259("Wagon_abandoned");
				bLocal_1451 = true;
			}
			else if (!Function_403())
			{
				if (fVar0 < 50.0f)
				{
					if (!iLocal_1457)
					{
						Function_402(0);
						Function_410();
						Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else
				{
					Function_402(1);
					iLocal_1457 = 0;
					if (iLocal_1433 == 0)
					{
						ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
						bVar2 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3256, 4, 1, 0, 1, 3.0f);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &iLocal_4 + 2792[73], -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar2);
						TASK_SEQUENCE_RELEASE(bVar2, 1);
						SET_PLAYER_DEADEYE_POINTS(0, 1E+07.0f, 0);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_401();
						Function_243(&bLocal_1373);
						iLocal_1433 = 1;
					}
					else if (iLocal_1433 == 1)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_1279) || Function_361(&bLocal_1373) < 10.0f)
						{
							Function_400();
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 2)
					{
						if (Function_361(&bLocal_1373) < 3.0f)
						{
							Function_139("Gun01_lanternHelp", 10.0f, 1, 0, 2, 1, 0);
							Function_243(&bLocal_1373);
							iLocal_1433 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			Function_390();
			fVar0 = Function_418(&Global_54076, &bLocal_1277);
			if (fVar0 < 100.0f && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[15]))
			{
				Function_259("Wagon_abandoned");
				bLocal_1451 = true;
			}
			else if (!Function_386())
			{
				if (fVar0 < 50.0f && iLocal_1433 < 0)
				{
					if (!iLocal_1457)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else
				{
					if (iLocal_1457)
					{
						HUD_CLEAR_OBJECTIVE();
						iLocal_1457 = 0;
					}
					if (iLocal_1433 == 0)
					{
						if (Function_361(&bLocal_1373) < 1.0f)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1279, &iLocal_4 + 3248, 4, 0, 0, 1, false);
							TASK_FOLLOW_OBJECT_ALONG_PATH(&bLocal_1265, &bLocal_1277, &iLocal_4 + 3248, 4.0f, 1, 2.0f);
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1265, 3212836864, 3212836864, 4, 1, 0);
							Function_385();
							Function_243(&bLocal_1373);
							iLocal_1433 = 1;
						}
					}
					else if (iLocal_1433 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 1.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterTo2ndAmbush_v1_AA"))
							{
								Function_384();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterTo2ndAmbush_v2_AA"))
							{
								Function_383();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterTo2ndAmbush_v3_AA"))
							{
								Function_380();
							}
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
				}
			}
			break;
		
		case 0x0000002E:
			Function_390();
			fVar0 = Function_418(&Global_54076, &bLocal_1277);
			if (fVar0 < 100.0f && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[15]))
			{
				Function_259("Wagon_abandoned");
				bLocal_1451 = true;
			}
			else if (!Function_379())
			{
				if (fVar0 < 50.0f && iLocal_1433 < 0)
				{
					if (!iLocal_1457)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else if (iLocal_1457)
				{
					HUD_CLEAR_OBJECTIVE();
					iLocal_1457 = 0;
				}
			}
			break;
		
		case 0x00000038:
			if (Function_361(&bLocal_1373) < 8.0f)
			{
				Function_242(106);
			}
			break;
		
		case 0x0000006A:
			if (bLocal_1486)
			{
				Function_378(&Global_54076, 0, 1);
			}
			Function_377();
			iLocal_1436[4] = 1;
			iLocal_918 = 101;
			Function_242(0);
			break;
	}
	return;
}

void Function_377() //Position: 0x148E3 / 84195
{
	Function_177();
	return;
}

void Function_378(var uParam0, bool bParam1, bool bParam2) //Position: 0x148EC / 84204
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&uParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&uParam0))
		{
			FIRE_STOP_ON_ACTOR(&uParam0);
		}
		SET_ACTOR_INVULNERABILITY(&uParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&uParam0);
		CLEAR_ACTOR_MAX_SPEED(&uParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&uParam0);
		RESET_ACTOR_GAITS(&uParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&uParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&uParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&uParam0);
		SET_ACTOR_INVULNERABILITY(&uParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

bool Function_379() //Position: 0x1499C / 84380
{
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[17]))
	{
		return 0;
	}
	Function_242(106);
	return 1;
}

void Function_380() //Position: 0x149BF / 84415
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v3_AA", "Gun01_BanterTo2ndAmbush_v3_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v3_AB", "Gun01_BanterTo2ndAmbush_v3_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v3_AC1", "Gun01_BanterTo2ndAmbush_v3_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v3_AC2", "Gun01_BanterTo2ndAmbush_v3_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v3_AC3", "Gun01_BanterTo2ndAmbush_v3_AC3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v3_AD", "Gun01_BanterTo2ndAmbush_v3_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v3_AE", "Gun01_BanterTo2ndAmbush_v3_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v3_AF", "Gun01_BanterTo2ndAmbush_v3_AF", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_381(int iParam0) //Position: 0x14C27 / 85031
{
	Function_382(0, &Global_54076, iParam0, 0);
	Function_382(1, &bLocal_1265, iParam0, 0);
	Function_382(2, &iLocal_1269, iParam0, 0);
	Function_382(3, &bLocal_1279, iParam0, 0);
	Function_382(5, &bLocal_1271, iParam0, 0);
	return;
}

void Function_382(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x14C64 / 85092
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_383() //Position: 0x14C8C / 85132
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AA", "Gun01_BanterTo2ndAmbush_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v2_AB", "Gun01_BanterTo2ndAmbush_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AC", "Gun01_BanterTo2ndAmbush_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v2_AD", "Gun01_BanterTo2ndAmbush_v2_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AE", "Gun01_BanterTo2ndAmbush_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v2_AF", "Gun01_BanterTo2ndAmbush_v2_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AG", "Gun01_BanterTo2ndAmbush_v2_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v2_AH", "Gun01_BanterTo2ndAmbush_v2_AH", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AI1", "Gun01_BanterTo2ndAmbush_v2_AI1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AI2", "Gun01_BanterTo2ndAmbush_v2_AI2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v2_AI3", "Gun01_BanterTo2ndAmbush_v2_AI3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v2_AJ", "Gun01_BanterTo2ndAmbush_v2_AJ", 1, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384() //Position: 0x15018 / 86040
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v1_AA", "Gun01_BanterTo2ndAmbush_v1_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v1_AB1", "Gun01_BanterTo2ndAmbush_v1_AB1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v1_AB2", "Gun01_BanterTo2ndAmbush_v1_AB2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterTo2ndAmbush_v1_AC", "Gun01_BanterTo2ndAmbush_v1_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterTo2ndAmbush_v1_AD", "Gun01_BanterTo2ndAmbush_v1_AD", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_385() //Position: 0x151A3 / 86435
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_DeafetedAmbush1", "Gun01_DeafetedAmbush1", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_386() //Position: 0x151F6 / 86518
{
	var uVar0;
	bool bVar2;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1200) || (IS_ACTOR_IN_VOLUME(&bLocal_1277, &iLocal_4 + 1208[16]) && ACTORS_IN_RANGE(&bLocal_1277, &Global_54076, 30.0f)))
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		Function_359(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
		Function_389(&uLocal_828, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
		Function_387(StackVal, StackVal, Vector(-2758,716f, 37,094f, 4273,336f), Vector(0,458f, -0,6f, -0,656f), 99999,9f, 0, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1275, *(&iLocal_4 + 1912[153]), 1, 1, 1);
		if (!IS_ACTOR_RIDING(&bLocal_1265))
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1265, &bLocal_1275);
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1912[143]), 1, 1, 1);
			if (GET_MOUNT(&Global_54076) != &bLocal_1273)
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1273);
			}
		}
		else
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1912[143]), 1, 1, 1);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1277, *(&iLocal_4 + 1912[163]), 1, 1, 1);
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(&bLocal_1277), &uVar0);
		RESET_ACTOR_GAITS(&bLocal_1277, 0);
		Function_378(&Global_54076, 1, 1);
		MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1265);
		MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1279);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Global_54076, true);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1265, true);
		AI_SET_NAV_ALLOW_TWEAK_DESIRED_MOVEMENT(&Global_54076, 0);
		AI_SET_NAV_ALLOW_TWEAK_DESIRED_MOVEMENT(&bLocal_1265, 0);
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3280, 1, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3288, 1, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
		AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1279, 0);
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3272, 2, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1279, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
		bLocal_1486 = true;
		Function_242(56);
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&bLocal_1277, &iLocal_4 + 1208[16]))
	{
		return 0;
	}
	bVar2 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3248, 2, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1279, bVar2);
	TASK_SEQUENCE_RELEASE(bVar2, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1265);
	bVar2 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(0, &iLocal_4 + 1912[173], 2);
	TASK_DISMOUNT(0, 1);
	TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 1912[93], 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar2);
	TASK_SEQUENCE_RELEASE(bVar2, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1265, 1, 0);
	Function_242(46);
	return 1;
}

void Function_387(struct<2> Param0, struct<2> Param2, int iParam4, int iParam5, int iParam6) //Position: 0x15508 / 87304
{
	Function_388(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (&iParam4 >= 0.0f)
	{
		iParam4 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &iParam6);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, &iParam4);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam5))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &iParam5, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_388(float fParam0) //Position: 0x15621 / 87585
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_389(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, float fParam12, int iParam13) //Position: 0x15634 / 87604
{
	Function_212(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &iParam3;
	Global_99148.f_20 = &iParam4;
	Global_99148.f_24 = &iParam5;
	Global_99148.f_28 = &iParam6;
	Global_99148.f_32 = &iParam7;
	Global_99148.f_36 = &iParam8;
	Global_99148.f_40 = &iParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &iParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &iParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &iParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_390() //Position: 0x1573D / 87869
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (iLocal_1484)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1277, &iLocal_4 + 1368[10]))
		{
			Function_399(&bLocal_1277);
		}
		if (Function_363(&bLocal_1421))
		{
			if (Function_361(&bLocal_1421) < 3.0f)
			{
				if (IS_ACTOR_ALIVE(&iLocal_4 + 1008[22]))
				{
					if (IS_ACTOR_RIDING_VEHICLE(&iLocal_4 + 1008[22]))
					{
						KILL_ACTOR(&iLocal_4 + 1008[22]);
					}
				}
				Function_398(&bLocal_1421);
			}
		}
	}
	if (COUNT_FLAMES_IN_VOLUME(&iLocal_4 + 1368[8]) < 0)
	{
		if (!Function_397())
		{
			return;
		}
	}
	SET_ACTOR_MIN_SPEED(&bLocal_1287, 3);
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 2792[93], 3);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1287, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1287, 0);
	AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1287, 0);
	bVar2 = false;
	while (bVar2 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1287))
	{
		bVar0 = GET_DRAFT_ACTOR(bVar2, &bLocal_1287);
		if (Function_393(&bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			Function_392(&bVar0);
		}
		bVar2++;
	}
	Function_391(&bLocal_1421);
	iLocal_1484 = 1;
	return;
}

void Function_391(bool bParam0) //Position: 0x15850 / 88144
{
	if (!Function_363(&bParam0))
	{
		Function_244(&bParam0, 0.0f);
	}
	return;
}

void Function_392(bool bParam0) //Position: 0x15867 / 88167
{
	int iVar0;
	
	iVar0 = FIRE_CREATE_HANDLE();
	FIRE_CREATE_ON_ACTOR(&iVar0, &bParam0);
	FIRE_RELEASE_HANDLE(&iVar0, 1);
	return;
}

bool Function_393(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x15883 / 88195
{
	int iVar0;
	
	if (bParam1)
	{
		Function_396(&iVar0, 1);
	}
	if (&bParam2)
	{
		Function_396(&iVar0, 2);
	}
	if (&bParam3)
	{
		Function_396(&iVar0, 4);
	}
	if (&bParam4)
	{
		Function_396(&iVar0, 8);
	}
	if (&bParam5)
	{
		Function_396(&iVar0, 1024);
	}
	if (&bParam7)
	{
		Function_396(&iVar0, 16);
	}
	if (&bParam8)
	{
		Function_396(&iVar0, 32);
	}
	if (&bParam6)
	{
		Function_396(&iVar0, 1048576);
	}
	return Function_394(&bParam0, iVar0);
}

int Function_394(int iParam0, int iParam1) //Position: 0x158FA / 88314
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_395(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_395(&iParam1, 64))
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

bool Function_395(var uParam0, int iParam1) //Position: 0x159E8 / 88552
{
	return (uParam0 && iParam1) == 0;
}

void Function_396(int iParam0, bool bParam1) //Position: 0x159F5 / 88565
{
	Function_77(&iParam0, bParam1);
	return;
}

bool Function_397() //Position: 0x15A03 / 88579
{
	if (!IS_OBJECT_VALID(&bLocal_1367) || !IS_OBJECT_VALID(&bLocal_1369))
	{
		return 1;
	}
	if (IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(&bLocal_1367)) || IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(&bLocal_1369)))
	{
		return 1;
	}
	return 0;
}

void Function_398(vector3 vParam0) //Position: 0x15A3A / 88634
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_399(bool bParam0) //Position: 0x15A51 / 88657
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&bParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
		if (IS_ACTOR_ALIVE(&uVar1))
		{
			KILL_ACTOR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_400() //Position: 0x15AC7 / 88775
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_RickettSpotsAmbush1", "Gun01_RickettSpotsAmbush1", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401() //Position: 0x15B22 / 88866
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Gun01_BankerSpotsAmbush1", "Gun01_BankerSpotsAmbush1", 0, 1, 1, 0, 1);
		Function_381(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402(bool bParam0) //Position: 0x15B7C / 88956
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar0 = &iLocal_4 + 1008[iVar12];
		if (IS_ACTOR_VALID(&bVar0))
		{
			if (bParam0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar0)))
				{
					ADD_BLIP_FOR_ACTOR(&bVar0, 322, 0.0f, 2, 0);
				}
			}
			else
			{
				Function_233(&bVar0);
			}
		}
		iVar1++;
	}
	return;
}

bool Function_403() //Position: 0x15BD2 / 89042
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	if (!iLocal_1484)
	{
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			bVar0 = &iLocal_4 + 1008[iVar42];
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&bVar0))
				{
					SET_ACTOR_MIN_SPEED(&bLocal_1287, 3);
					bVar7 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 2792[93], 3);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1287, bVar7);
					TASK_SEQUENCE_RELEASE(bVar7, 1);
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1287, 0);
					AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1287, 0);
					Function_222(&iLocal_4 + 3168);
					if (IS_ACTOR_VALID(&iLocal_4 + 1008[22]))
					{
						if (!FIRE_IS_ACTOR_ON_FIRE(&bVar0))
						{
							Function_392(&iLocal_4 + 1008[22]);
						}
					}
					bVar5 = false;
					while (bVar5 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1287))
					{
						bVar1 = GET_DRAFT_ACTOR(bVar5, &bLocal_1287);
						if (Function_393(&bVar1, 0, 0, 0, 0, 0, 0, 0, 0))
						{
							Function_392(&bVar1);
						}
						bVar5++;
					}
					iLocal_1484 = 1;
					iVar4 = 999999;
				}
			}
			iVar4++;
		}
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		bVar0 = &iLocal_4 + 1008[iVar42];
		if (Function_393(&bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
		{
			if (!FIRE_IS_ACTOR_ON_FIRE(&bVar0))
			{
				iVar6++;
			}
		}
		iVar4++;
	}
	if (iVar6 >= 0)
	{
		if (!iLocal_1482)
		{
			uVar2 = GET_LAST_ATTACK_TARGET(&Global_54076);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (IS_ACTOR_IN_ACTORSET(&iLocal_1263, &uVar2))
				{
					if (GET_LAST_DAMAGE(&uVar2) < 0.0f)
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_405();
						iLocal_1482 = 1;
					}
				}
			}
		}
		if (!iLocal_1482)
		{
			if (Function_397())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_405();
				iLocal_1482 = 1;
			}
		}
		if (iVar6 == 1)
		{
			if (!iLocal_1485)
			{
				iVar4 = 0;
				while (iVar4 <= 3)
				{
					bVar0 = &iLocal_4 + 1008[iVar42];
					if (Function_393(&bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
					{
						if (!FIRE_IS_ACTOR_ON_FIRE(&bVar0))
						{
							TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_1279);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bVar0);
							AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bVar0, 1);
							bVar7 = TASK_SEQUENCE_OPEN();
							TASK_VEHICLE_LEAVE(0);
							TASK_GO_NEAR_COORD(0, &iLocal_4 + 2792[83], 1.0f, 4);
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bVar0, bVar7);
							TASK_SEQUENCE_RELEASE(bVar7, 1);
							iLocal_1485 = 1;
							iVar4 = 999999;
						}
					}
					iVar4++;
				}
			}
		}
		else
		{
			if (IS_ACTOR_ALIVE(&iLocal_4 + 1008[22]))
			{
				if (GET_LAST_ATTACKER(&iLocal_4 + 1008[22]) != &Global_54076 || GET_ACTOR_HEALTH(&iLocal_4 + 1008[22]) > GET_ACTOR_MAX_HEALTH(&iLocal_4 + 1008[22]))
				{
					bVar7 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(0);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &iLocal_4 + 3040[03], -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_4 + 1008[22], bVar7);
					TASK_SEQUENCE_RELEASE(bVar7, 1);
				}
			}
			if (IS_ACTOR_ALIVE(&iLocal_4 + 1008[02]))
			{
				if (iLocal_1483)
				{
					if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1368[9]))
					{
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_4 + 1008[02], &iLocal_4 + 3040[03], -1f);
						iLocal_1483 = 0;
					}
				}
				else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1368[9]))
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_4 + 1008[02], &iLocal_4 + 3040[23], -1f);
					iLocal_1483 = 1;
				}
			}
		}
		return 0;
	}
	Function_404(&iLocal_4 + 1008);
	Function_233(&bLocal_1287);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1277)))
	{
		uVar3 = ADD_BLIP_FOR_ACTOR(&bLocal_1277, 325, 0, 2, 0);
		SET_BLIP_NAME(&uVar3, "Gun01_wagonBlip");
	}
	ACTOR_START_FORCE_HOLSTER(&bLocal_1265, 1, 0);
	iLocal_1464 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
	Function_242(36);
	return 1;
}

void Function_404(struct<2>[] Param0) //Position: 0x15F82 / 89986
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_ACTOR_VALID(&(Param0[iVar02])))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&(Param0[iVar02]));
			if (IS_BLIP_VALID(&uVar1))
			{
				REMOVE_BLIP(&uVar1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_405() //Position: 0x15FCA / 90058
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_ShoutEncRescue", "Gun01_ShoutEncRescue", 0, 2, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406() //Position: 0x1601B / 90139
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v2_AA1", "Gun01_Banter1stAmbush_v2_AA1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v2_AA2", "Gun01_Banter1stAmbush_v2_AA2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v2_AA3", "Gun01_Banter1stAmbush_v2_AA3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_Banter1stAmbush_v2_AB1", "Gun01_Banter1stAmbush_v2_AB1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_Banter1stAmbush_v2_AB2", "Gun01_Banter1stAmbush_v2_AB2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v2_AC1", "Gun01_Banter1stAmbush_v2_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v2_AC2", "Gun01_Banter1stAmbush_v2_AC2", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_407() //Position: 0x16226 / 90662
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Gun01_Banter1stAmbush_v1_AA", "Gun01_Banter1stAmbush_v1_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v1_AB", "Gun01_Banter1stAmbush_v1_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_Banter1stAmbush_v1_AC", "Gun01_Banter1stAmbush_v1_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v1_AD1", "Gun01_Banter1stAmbush_v1_AD1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v1_AD2", "Gun01_Banter1stAmbush_v1_AD2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_Banter1stAmbush_v1_AE", "Gun01_Banter1stAmbush_v1_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v1_AF1", "Gun01_Banter1stAmbush_v1_AF1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Banter1stAmbush_v1_AF2", "Gun01_Banter1stAmbush_v1_AF2", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x16470 / 91248
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_EscprtWagon", "Gun01_EscprtWagon", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_409() //Position: 0x164BB / 91323
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_410() //Position: 0x164C8 / 91336
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_411() //Position: 0x164D4 / 91348
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1368[6]))
	{
		if (!IS_ACTOR_IN_VOLUME(&bLocal_1265, &iLocal_4 + 1368[7]))
		{
			if (!IS_ACTOR_IN_VOLUME(&bLocal_1277, &iLocal_4 + 1368[7]))
			{
				return 0;
			}
		}
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_1279, 0, "DUCK");
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3264, 4, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1279, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		bVar0 = &iLocal_4 + 1008[iVar22];
		if (Function_393(&bVar0, 0, 1, 1, 0, 0, 0, 0, 0))
		{
			if (iVar2 == 0)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(0);
				TASK_GO_TO_COORD(0, &iLocal_4 + 3040[03], 4);
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &iLocal_4 + 3040[03], -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bVar0, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
			else if (iVar2 == 1)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(0);
				TASK_SHOOT_ENEMIES_FROM_COVER(0, GET_COVER_LOCATION_FROM_OBJECT(&iLocal_4 + 3168), -1.0f, 1086324736);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bVar0, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
			else if (iVar2 == 2)
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bVar0, 0);
				MEMORY_PREFER_RIDING(&bVar0, false);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_KILL_CHAR(false, &Global_54076);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bVar0, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
			}
		}
		iVar2++;
	}
	SET_ACTOR_PROOF(&bLocal_1265, 16);
	SET_ACTOR_PROOF(&bLocal_1279, 16);
	iLocal_1464 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 0);
	AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
	Function_242(26);
	return 1;
}

int Function_412() //Position: 0x16682 / 91778
{
	bool bVar0;
	
	if (!Function_413(&bLocal_1279, &bLocal_1277, 0))
	{
		return 0;
	}
	SET_ACTOR_IS_COMPANION(&bLocal_1279, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1279, &iLocal_4 + 3248, 4, 0, 0, 1, false);
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1277, 3212836864, 3212836864, 4, 1, 0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bLocal_1277, &iLocal_4 + 3248, 4.0f, 1, 2.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	Function_242(16);
	return 1;
}

bool Function_413(int iParam0, int iParam1, bool bParam2) //Position: 0x166F7 / 91895
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

int Function_414(bool bParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x16721 / 91937
{
	if (Function_361(&bParam0) <= fParam1)
	{
		if (&bParam5)
		{
			Function_261();
		}
		if (!Function_140())
		{
			Function_415(&uParam2, &uParam3, &uParam4);
			Function_243(&bParam0);
			return 1;
		}
		Function_244(&bParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_415(bool bParam0, float fParam1, bool bParam2) //Position: 0x1676D / 92013
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_416(&bParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_139(&bParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_417(&bParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&bParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_416(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x167D1 / 92113
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
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_417(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x16856 / 92246
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
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

float Function_418(float fParam0, bool bParam1) //Position: 0x168EB / 92395
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

int Function_419() //Position: 0x169E0 / 92640
{
	Function_354(&iLocal_4 + 528, 703, 2, 0);
	Function_354(&iLocal_4 + 528, 1196, 2, 0);
	Function_354(&iLocal_4 + 528, 262, 2, 0);
	Function_354(&iLocal_4 + 528, 499, 2, 0);
	Function_354(&iLocal_4 + 528, 502, 2, 0);
	Function_354(&iLocal_4 + 528, 498, 2, 0);
	if (Function_321(&iLocal_4 + 528))
	{
		return 1;
	}
	return 0;
}

void Function_420() //Position: 0x16A48 / 92744
{
	var uVar0;
	
	Function_256(iLocal_918);
	Function_443(StackVal, Function_256(iLocal_918), iLocal_918, Global_46746[0], Function_258(iLocal_918), 2);
	MEMORY_PREFER_RIDING(&bLocal_1265, true);
	AI_GOAL_LOOK_CLEAR(&bLocal_1265);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1265, 1, 0);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1265, 1);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1265);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1265, true);
	Function_228(8);
	Function_370(1);
	Function_370(256);
	Function_369(&iLocal_4 + 1208[0]);
	Function_316(&bLocal_1271);
	if (!IS_ACTOR_VALID(&bLocal_1277))
	{
		Function_333();
		bLocal_1277 = &iLocal_4 + 880[02];
		if (Function_332(&bLocal_1277, 1))
		{
			ENABLE_VEHICLE_SEAT(&bLocal_1277, 0, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1277, 1, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1277, 2, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1277, 3, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1277, 4, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1277, 5, 0);
			Function_442(&bLocal_1277, 0.0f);
			Function_441(&bLocal_1277);
			Function_440(&bLocal_1277);
			Function_436(&(Local_1002[515]), &bLocal_1277, "Wagon", 0, 0x5f5e100, 1);
			Function_434(&(Local_1002[515]), 16);
		}
	}
	Function_431(&(Local_1002[415]), 8, 1);
	if (!IS_ACTOR_VALID(&bLocal_1279))
	{
		Function_430();
		bLocal_1279 = &iLocal_4 + 904[02];
		if (Function_332(&bLocal_1279, 1))
		{
			SET_ANIMAL_CAN_ATTACK(&bLocal_1279, 0);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_1279, false);
			SET_CRIPPLE_ENABLE(&bLocal_1279, 0);
			MEMORY_PREFER_RIDING(&bLocal_1279, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1279, 0);
			TASK_PRIORITY_SET(&bLocal_1279, true);
			TASK_STAND_STILL(&bLocal_1279, -1.0f, 0, 0);
			ACTOR_START_FORCE_HOLSTER(&bLocal_1279, 0, 0);
			DECOR_SET_BOOL(&bLocal_1279, "CanBeLasso", 0);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_1279, false);
			Function_436(&(Local_1002[415]), &bLocal_1279, "Wagoner", 1, 0x5f5e100, 1);
		}
	}
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1279, true);
	SET_ACTOR_IS_COMPANION(&bLocal_1279, 1);
	SET_ACTOR_IS_COMPANION(&bLocal_1279, 1);
	SET_ACTOR_FACTION(&bLocal_1279, 20);
	if (!iLocal_1436[3])
	{
		if (Function_332(&bLocal_1275, 1))
		{
			ACCESSORIZE_HORSE(&bLocal_1275, 3);
			SET_ANIMAL_CAN_ATTACK(&bLocal_1275, 0);
			MEMORY_IDENTIFY(&bLocal_1265, &bLocal_1275);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_1265, &bLocal_1275, 1);
			DECOR_SET_BOOL(&bLocal_1275, "bNoInjuryEjection", 1);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, (&iLocal_4 + 1472[133]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1275, *(&iLocal_4 + 1472[83]), 1, 1, 1);
		if (GET_MOUNT(&Global_54076) != &bLocal_1273)
		{
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1273);
		}
		if (GET_MOUNT(&bLocal_1265) != &bLocal_1275)
		{
			ACTOR_MOUNT_ACTOR(&bLocal_1265, &bLocal_1275);
		}
		SET_ACTOR_IN_VEHICLE(&bLocal_1279, &bLocal_1277, false);
		TASK_CLEAR(&bLocal_1279);
	}
	Function_424();
	if (!iLocal_1459)
	{
		CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair01", "p_gen_chair01x", *(&iLocal_4 + 2424[03]), *(&iLocal_4 + 2424[03] + 12), 0);
		CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair02", "p_gen_chair01x", *(&iLocal_4 + 2424[13]), *(&iLocal_4 + 2424[13] + 12), 0);
		iLocal_1459 = 1;
	}
	Function_423(&fLocal_1193);
	Function_421(&Global_54076, &fLocal_1193);
	Function_421(&bLocal_1265, &fLocal_1193);
	Function_421(&bLocal_1279, &fLocal_1193);
	Function_421(&bLocal_1277, &fLocal_1193);
	iLocal_1192 = 0;
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	iLocal_1476 = 0;
	iLocal_1460 = 0;
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	Function_217(5, 0, 1);
	uVar0 = ADD_BLIP_FOR_ACTOR(&bLocal_1277, 325, 0.0f, 2, 0);
	SET_BLIP_NAME(&uVar0, "Gun01_wagonBlip");
	return;
}

void Function_421(bool bParam0, struct<5>[] Param1) //Position: 0x16E20 / 93728
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		bVar0 = Function_422(&bParam0, &Param1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= Param1)
			{
				if (!IS_ACTOR_VALID(&(Param1[iVar15])))
				{
					Param1[iVar15] = &bParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_422(int iParam0, struct<5>[] Param1) //Position: 0x16E6F / 93807
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

void Function_423(struct<5>[] Param0) //Position: 0x16EA9 / 93865
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

void Function_424() //Position: 0x16EFE / 93950
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (IS_ACTOR_VALID(&iLocal_4 + 984[02]))
	{
		return;
	}
	Function_429();
	bLocal_1287 = &iLocal_4 + 984[02];
	if (Function_332(&bLocal_1287, 1))
	{
		SET_ACTOR_INVULNERABILITY(&bLocal_1287, 1);
		ENABLE_VEHICLE_SEAT(&bLocal_1287, 0, 0);
		ENABLE_VEHICLE_SEAT(&bLocal_1287, 1, 0);
		ENABLE_VEHICLE_SEAT(&bLocal_1287, 2, 0);
		ENABLE_VEHICLE_SEAT(&bLocal_1287, 3, 0);
		ENABLE_VEHICLE_SEAT(&bLocal_1287, 4, 0);
		ENABLE_VEHICLE_SEAT(&bLocal_1287, 5, 0);
		uVar2 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_828, "Prop01", "p_bat_crate02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar2, GET_OBJECT_FROM_ACTOR(&bLocal_1287), 0);
		ATTACH_OBJECTS(StackVal, StackVal, &uVar2, GET_OBJECT_FROM_ACTOR(&bLocal_1287), Function_54(), Vector(-0,376f, 1,238f, -0,615f), Vector(0.0f, -101,886f, 0.0f), 4294967295);
		uVar3 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_828, "Prop02", "p_bat_barrel05x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar3, GET_OBJECT_FROM_ACTOR(&bLocal_1287), 0);
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_ACTOR(&bLocal_1287), Function_54(), Vector(-0,213f, 1,236f, 1,356f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		bLocal_1367 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_828, "nLantern01", "p_gen_lantern04x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1367, GET_OBJECT_FROM_ACTOR(&bLocal_1287), 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1367, &uVar2, 0);
		ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1367, GET_OBJECT_FROM_ACTOR(&bLocal_1287), Function_54(), Vector(-0,103f, 2,311f, -0,288f), Vector(0.0f, 98,07f, 0.0f), 4294967295);
		uVar1 = GET_PHYSINST_FROM_OBJECT(&bLocal_1367);
		SET_PROP_TARGETABLE(&uVar1, 1, 0);
		SET_PROP_TARGETABLE_ACQUISITION_RADIUS(&uVar1, 10.0f);
		SET_PROP_TARGETABLE_TARGET_BOX_SIZE(&uVar1, 1.0f, 1.0f);
		SET_PROP_TARGETABLE_SCORE_BIAS(&uVar1, -100.0f);
		SET_PROP_TARGETABLE_AS_ENEMY(&uVar1, 1);
		bLocal_1369 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_828, "nLantern02", "p_gen_lantern04x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1369, GET_OBJECT_FROM_ACTOR(&bLocal_1287), 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&bLocal_1369, &uVar3, 0);
		ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1369, GET_OBJECT_FROM_ACTOR(&bLocal_1287), Function_54(), Vector(-0,46f, 2,19f, 1,434f), Vector(0.0f, -82,358f, 0.0f), 4294967295);
		uVar1 = GET_PHYSINST_FROM_OBJECT(&bLocal_1369);
		SET_PROP_TARGETABLE(&uVar1, 1, 0);
		SET_PROP_TARGETABLE_ACQUISITION_RADIUS(&uVar1, 10.0f);
		SET_PROP_TARGETABLE_TARGET_BOX_SIZE(&uVar1, 1.0f, 1.0f);
		SET_PROP_TARGETABLE_SCORE_BIAS(&uVar1, -100.0f);
		SET_PROP_TARGETABLE_AS_ENEMY(&uVar1, 1);
	}
	Function_428();
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		bVar0 = &iLocal_4 + 1008[iVar42];
		if (Function_332(&bVar0, 1))
		{
			Function_427(&bVar0, &Global_54076);
			Function_427(&bVar0, &bLocal_1265);
			Function_427(&bVar0, &bLocal_1279);
			Function_426(&bVar0, 70.0f, 2.0f, 3.0f);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&bVar0, 359,5f);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar0, 15, true);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bVar0, 1);
			SET_ACTOR_MAX_HEALTH(&bVar0, (GET_ACTOR_MAX_HEALTH(&bVar0) * 0,5f));
			Function_425(&bVar0);
			AI_SET_NAV_ACTOR_WIDTH(&bVar0, 0,5f);
			if (iLocal_918 == 4)
			{
				ADD_ACTORSET_MEMBER(&iLocal_1263, &bVar0);
			}
			if (iVar4 == 0)
			{
				SET_ACTOR_IN_VEHICLE(&bVar0, &bLocal_1287, false);
			}
			else if (iVar4 == 2)
			{
				SET_ACTOR_IN_VEHICLE(&bVar0, &bLocal_1287, true);
			}
			TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
		}
		iVar4++;
	}
	return;
}

void Function_425(bool bParam0) //Position: 0x17270 / 94832
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			SET_ACTOR_HEALTH(&bParam0, GET_ACTOR_MAX_HEALTH(&bParam0));
		}
	}
	return;
}

void Function_426(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x17294 / 94868
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

void Function_427(bool bParam0, bool bParam1) //Position: 0x172E5 / 94949
{
	MEMORY_CONSIDER_AS_ENEMY(&bParam0, &bParam1);
	MEMORY_IDENTIFY(&bParam0, &bParam1);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(&bParam0, &bParam1, 1);
	return;
}

void Function_428() //Position: 0x1730E / 94990
{
	*(&iLocal_4 + 1008[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockBandito01", 499, Vector(-2794,754f, 30,9805f, 4410,462f), Vector(0.0f, 158,5703f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 1008[02], 19);
	*(&iLocal_4 + 1008[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockBandito02", 502, Vector(-2790,394f, 31,04593f, 4408,135f), Vector(0.0f, 228,097f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 1008[12], 19);
	*(&iLocal_4 + 1008[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RoadblockBandito03", 498, Vector(-2791,672f, 30,95862f, 4412,051f), Vector(0.0f, 159,5943f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 1008[22], 19);
	return;
}

void Function_429() //Position: 0x173FB / 95227
{
	*(&iLocal_4 + 984[02]) = Function_334(StackVal, StackVal, &iLocal_4, "RoadblockWagon", 1200, 977, Vector(-2792,14f, 31,02058f, 4409,789f), Vector(0.0f, 70,1304f, 0.0f), 1, 976, 976, 976, 4);
	return;
}

void Function_430() //Position: 0x1744A / 95306
{
	*(&iLocal_4 + 904[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Driver", 262, Vector(-2840,793f, 33,1304f, 4591,881f), Vector(0.0f, -49,7223f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 904[02]);
	SET_ACTOR_FACTION(&iLocal_4 + 904[02], 20);
	return;
}

void Function_431(var uParam0, int iParam1, int iParam2) //Position: 0x1749D / 95389
{
	if (iParam1 != 100000000)
	{
		Function_433(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_432(&uParam0, &iParam2);
	}
	return;
}

void Function_432(struct<69> Param0) //Position: 0x174C4 / 95428
{
	Param0.f_68 = 0;
	Function_433(&Param0, 2, &bParam1);
	Function_433(&Param0, 4, &bParam1);
	Function_433(&Param0, 8, &bParam1);
	Function_433(&Param0, 16, &bParam1);
	Function_433(&Param0, 32, &bParam1);
	Function_433(&Param0, 64, &bParam1);
	Function_433(&Param0, 128, &bParam1);
	Function_433(&Param0, 256, &bParam1);
	Function_433(&Param0, 512, &bParam1);
	Function_433(&Param0, 1024, &bParam1);
	return;
}

void Function_433(int iParam0, int iParam1, bool bParam2) //Position: 0x1753F / 95551
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

void Function_434(int iParam0, int iParam1) //Position: 0x1757E / 95614
{
	if (iParam1 != 100000000)
	{
		Function_435(&iParam0, iParam1);
	}
	else
	{
		Function_432(&iParam0, 1);
	}
	return;
}

void Function_435(int iParam0, bool bParam1) //Position: 0x175A0 / 95648
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_436(struct<69> Param0) //Position: 0x175CD / 95693
{
	if (!Function_439(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_438(&Param0, &bParam2))
	{
		return 0;
	}
	Function_437(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_431(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_437(struct<65> Param0) //Position: 0x17613 / 95763
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_438(int iParam0, char* cParam1) //Position: 0x17620 / 95776
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

bool Function_439(struct<61> Param0) //Position: 0x176AD / 95917
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

void Function_440(bool bParam0) //Position: 0x17860 / 96352
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&bParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_FACTION(&uVar1, 20);
		}
		bVar0++;
	}
	return;
}

void Function_441(bool bParam0) //Position: 0x178D8 / 96472
{
	var uVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("IGNORE_VEHICLE_DRAFTS -- Invalid vehicle");
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_NUM_DRAFTED_ACTORS(&bParam0))
	{
		uVar0 = GET_DRAFT_ACTOR(bVar1, &bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			AI_IGNORE_ACTOR(&uVar0);
		}
		bVar1++;
	}
	return;
}

void Function_442(bool bParam0, bool bParam1) //Position: 0x17949 / 96585
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_INVINCIBLE -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&bParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar1, &bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_443(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x179C4 / 96708
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
	if (iParam2 != Global_53524.f_48 && !Function_450())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_449(0);
	Function_448();
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
		Function_446(iParam2);
	}
	Function_445(uParam3, iVar0, iVar1);
	Function_444();
}

void Function_444() //Position: 0x17A6D / 96877
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

void Function_445(int iParam0, bool bParam1, bool bParam2) //Position: 0x17AAE / 96942
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

void Function_446(bool bParam0) //Position: 0x17C17 / 97303
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_447() };
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

struct<16> Function_447() //Position: 0x17DAF / 97711
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

void Function_448() //Position: 0x17DF5 / 97781
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_449(bool bParam0) //Position: 0x17E19 / 97817
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

bool Function_450() //Position: 0x17E48 / 97864
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_451() //Position: 0x17E63 / 97891
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[33]), 1, 1, 1);
	Function_228(8);
	Function_370(1);
	Function_370(256);
	Function_369(&iLocal_4 + 1208[0]);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	return;
}

void Function_452() //Position: 0x17EAE / 97966
{
	if (!Function_644(bLocal_919))
	{
		return;
	}
	Function_222(DROP_ACCESSORY_ENUM(&bLocal_1279, 0));
	Function_469();
	Function_468();
	Function_318();
	Function_463();
	Function_459();
	Function_453(StackVal, "$/cutscene/GUN01_CS03/GUN01_CS03", &iLocal_1192, *(&iLocal_4 + 1472[23]), 0, 150.0f, 300.0f, 2, 1, 2, 2, 0, 1);
	return;
}

int Function_453(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x17F1F / 98079
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_456(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_458()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam7, &uParam8, &uParam9, &uParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_454();
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
	else if ((!Function_456(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_458()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_456(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_454() //Position: 0x18188 / 98696
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
			Function_455(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_455(char* cParam0) //Position: 0x181DC / 98780
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

bool Function_456(var uParam0, struct<2> Param1, float fParam3) //Position: 0x18305 / 99077
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_457(&uParam0);
		if (VDIST(Function_457(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_457(var uParam0) //Position: 0x18391 / 99217
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

int Function_458() //Position: 0x183FD / 99325
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_459() //Position: 0x1840C / 99340
{
	int iVar0;
	
	if (Function_361(&iLocal_1429) > 8.0f)
	{
		return;
	}
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_ALIVE(&iVar0))
	{
		if (IS_ACTOR_HUMAN(&iVar0))
		{
			if (GET_ACTOR_FACTION(&iVar0) == 20 && GET_ACTOR_FACTION(&iVar0) == 19)
			{
				if (((&iVar0 == &bLocal_1265 && &iVar0 == &iLocal_1269) && &iVar0 == &bLocal_1271) && &iVar0 == &bLocal_1279)
				{
					if (iLocal_918 != 0 && bLocal_919 >= 36)
					{
						Function_462();
					}
					else if (iLocal_918 != 0 || (iLocal_918 != 2 && bLocal_919 == 56))
					{
						Function_461();
					}
					else
					{
						Function_460();
					}
					Function_243(&iLocal_1429);
				}
			}
		}
	}
	return;
}

void Function_460() //Position: 0x184B4 / 99508
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_GunOnAmbRescue", "Gun01_GunOnAmbRescue", 0, 2, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_461() //Position: 0x18505 / 99589
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_GunOnAmbBird", "Gun01_GunOnAmbBird", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_462() //Position: 0x18552 / 99666
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_GunOnSpectBottle", "Gun01_GunOnSpectBottle", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_463() //Position: 0x185A7 / 99751
{
	if (!IS_ACTOR_ALIVE(&iLocal_1269))
	{
		return;
	}
	if (!iLocal_1455)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&iLocal_1257))
		{
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_1269, "gun01_drunk/React");
			Function_243(&bLocal_1389);
			iLocal_1455 = 1;
			iLocal_1299 = "";
			EVENT_TRAP_CLEAR_TRAP_FLAG(&iLocal_1257);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1253);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1255);
			return;
		}
	}
	if (Function_466(0))
	{
		iLocal_1456 = 0;
		iLocal_1455 = 0;
	}
	else if (!iLocal_1456)
	{
		if (!(iLocal_918 != 0 && IS_PLAYER_DEADEYE(0)))
		{
			if (!Function_465())
			{
				Function_464();
				iLocal_1456 = 1;
			}
		}
	}
	if (Function_361(&bLocal_1389) > 8.0f)
	{
		return;
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1253))
	{
		SET_ACTION_NODE_FOR_ACTOR(&iLocal_1269, "gun01_drunk/reactL");
		Function_243(&bLocal_1389);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1253);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1255);
	}
	else if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1255))
	{
		SET_ACTION_NODE_FOR_ACTOR(&iLocal_1269, "gun01_drunk/reactR");
		Function_243(&bLocal_1389);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1253);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1255);
	}
	return;
}

void Function_464() //Position: 0x186CD / 100045
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun01_DrunkRuns", "Gun01_DrunkRuns", 0, 1, 1, 0, 1);
		Function_381(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_465() //Position: 0x18714 / 100116
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_922[iVar04].f_24)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_466(bool bParam0) //Position: 0x1873B / 100155
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (bParam0)
	{
		uVar0 = GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3120);
		if (Function_467(&uVar0, 1))
		{
			uVar1 = GRINGO_GET_USE_COMPONENT_EXT(&uVar0, "UseCase1");
			if (IS_GRINGO_COMPONENT_VALID(&uVar1))
			{
				iVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar1, 0);
				while (iVar4 >= 4294967295)
				{
					uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar4, &uVar1);
					if (IS_GRINGO_COMPONENT_VALID(&uVar2))
					{
						uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar2, &uVar0);
						if (IS_PHYSINST_VALID(&uVar3))
						{
							if (!HAS_PHYSINST_BROKEN_APART(&uVar3))
							{
								if (!IS_PHYSINST_VALID(&iLocal_1299))
								{
									iLocal_1299 = &uVar3;
								}
								Function_222(&iLocal_1257);
								iLocal_1257 = CREATE_EVENT_TRAP("BottleTrap", 5, &uLocal_828);
								EVENT_TRAP_ON_VOLUME(&iLocal_1257, &iLocal_4 + 1208[6]);
								return 1;
							}
						}
					}
					iVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar1, iVar4 + 1);
				}
			}
			else
			{
				LOG_ERROR("Could not find a valid 'UseCase1' component on the gringo!");
			}
		}
	}
	else
	{
		if (!DECOR_CHECK_EXIST(&iLocal_1269, "bNeedBottle"))
		{
			return 0;
		}
		LOG_ERROR("Found bNeedBottle decorator!");
		iLocal_1299 = GET_PHYSINST_FROM_OBJECT(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_828, Function_54(), "p_gen_bottletequila02x", Vector(0.0f, 5.0f, 5.0f), Vector(0.0f, 0.0f, 0.0f), 1));
		ATTACH_OBJECTS_USING_LOCATOR(&iLocal_1299, &iLocal_1269, "wrist_l_Attachment", "grab", ATTACH_SLOT_FROM_STRING("A"));
		Function_222(&iLocal_1257);
		iLocal_1257 = CREATE_EVENT_TRAP("BottleTrap", 5, &uLocal_828);
		EVENT_TRAP_ON_VOLUME(&iLocal_1257, &iLocal_4 + 1208[6]);
		DECOR_REMOVE(&iLocal_1269, "bNeedBottle");
		return 1;
	}
	return 0;
}

bool Function_467(var uParam0, bool bParam1) //Position: 0x18958 / 100696
{
	if (IS_GRINGO_VALID(&uParam0))
	{
		return 1;
	}
	if (&bParam1)
	{
		LOG_ERROR("AssertGringoValid: Gringo not valid!");
	}
	return 0;
}

void Function_468() //Position: 0x1899D / 100765
{
	if (GET_ALLOW_RIDE_BY_PLAYER(&bLocal_1275))
	{
		if (!IS_ACTOR_ALIVE(&bLocal_1273))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_1275, 0);
		}
	}
	return;
}

void Function_469() //Position: 0x189C0 / 100800
{
	if (!Function_368(Global_46866[0]))
	{
		return;
	}
	if (!IS_DOOR_VALID(&uLocal_1301))
	{
		uLocal_1301 = Function_470(Global_46866[0], "nchuparosa", "bank01props01x", 1);
	}
	if (!IS_DOOR_VALID(&uLocal_1301))
	{
		return;
	}
	if (iLocal_1460)
	{
		if (!IS_DOOR_LOCKED(&uLocal_1301))
		{
			Function_127(&uLocal_1301, 1);
		}
	}
	else if (IS_DOOR_LOCKED(&uLocal_1301))
	{
		Function_161(&uLocal_1301, 1);
	}
	return;
}

var Function_470(int iParam0, char* cParam1, bool bParam3) //Position: 0x18A44 / 100932
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

void Function_471() //Position: 0x18AE9 / 101097
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar5;
	int iVar7;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	uVar3 = Vector(1.0f, 0.0f, 0.0f);
	Function_518();
	switch (bLocal_919)
	{
		case 0x00000000:
			Function_372(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(19);
			if (!iLocal_1436[2])
			{
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_368(Global_46866[0]))
				{
					Function_367(&Local_830);
				}
				Function_228(8);
				Function_370(1);
				Function_370(256);
				Function_369(&iLocal_4 + 1208[0]);
				Function_517();
				Function_242(1);
			}
			else
			{
				Function_516();
				Function_242(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_515()) && Function_321(&iLocal_1488 + 8))
			{
				if (!IS_ACTOR_VALID(&iLocal_4 + 832[02]))
				{
					Function_514();
					bLocal_1271 = &iLocal_4 + 832[02];
					TASK_STAND_STILL(&bLocal_1271, -1.0f, 0, 0);
					DECOR_SET_BOOL(&bLocal_1271, "CanBeLasso", 0);
					Function_436(&(Local_1002[315]), &bLocal_1271, "BankManager", 0, 0x5f5e100, 1);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1265, (&iLocal_4 + 1472[73]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1271, *(&iLocal_4 + 1912[113]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1275, *(&iLocal_4 + 1472[153]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1271, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1275, -1.0f, 0, 0);
				if (IS_ACTOR_VALID(&bLocal_1273))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
				}
				if (!iLocal_1459)
				{
					CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair01", "p_gen_chair01x", *(&iLocal_4 + 2424[03]), *(&iLocal_4 + 2424[03] + 12), 0);
					CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair02", "p_gen_chair01x", *(&iLocal_4 + 2424[13]), *(&iLocal_4 + 2424[13] + 12), 0);
					iLocal_1459 = 1;
				}
				Function_516();
				Function_242(2);
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x00000002:
			if (Function_512(StackVal, StackVal, StackVal, StackVal, StackVal, Local_830, iLocal_918))
			{
				Function_242(3);
			}
			else
			{
				if (IS_ACTOR_VALID(&bLocal_1273))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
				}
				Function_511();
				Function_242(4);
			}
			break;
		
		case 0x00000003:
			if (Function_291("$/cutscene/GUN_01_CS02/GUN_01_CS02", &iLocal_906, &Local_830, &iLocal_918, 114472, 114289, 114184, 113855, 113834, 113735, 0, 2, 0, 2, 2, 0, 1))
			{
				Function_511();
				Function_242(4);
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(&bLocal_1273))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
			}
			if (!IS_ACTOR_ALIVE(&bLocal_1273))
			{
				if (!Function_310())
				{
					LOG_ERROR("We need to spawn the player horse after the mid cutscene, but it's not streamed in!");
				}
				else
				{
					bLocal_1273 = Function_304(1, 1, 0, 0, 0, 0, 1, 0);
					if (Function_332(&bLocal_1273, 1))
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
						TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
					}
				}
			}
			Function_256(iLocal_918);
			Function_443(StackVal, Function_256(iLocal_918), iLocal_918, Global_46746[2], Function_258(iLocal_918), 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_295(1.0f);
			Function_242(6);
			break;
		
		case 0x00000006:
			if (!Function_500())
			{
				if (!iLocal_1473)
				{
					if (IS_ACTOR_VALID(&bLocal_1279))
					{
						if (Function_497(&iLocal_4 + 928[02], &bLocal_1279, 0,5f, 1, 0))
						{
							iLocal_1473 = 1;
							SET_ANIMATION_OVERRIDE_SCALE(&bLocal_1279, 0.0f);
							SET_ANIMATION_OVERRIDE_SCALE(&iLocal_4 + 928[02], 0.0f);
						}
					}
				}
				fVar9 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar9 < 100.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (fVar9 < 50.0f)
				{
					if (!iLocal_1457)
					{
						Function_233(&bLocal_1273);
						Function_217(5, 1, 1);
						Function_410();
						Function_417("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else
				{
					Function_217(5, 0, 1);
					if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1273)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_1273, 334, 0, 2, 0);
						}
					}
					iLocal_1457 = 0;
					if (!iLocal_1474)
					{
						if (IS_ACTOR_SHOOTING(&Global_54076))
						{
							if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_ShootsRandRescue", Function_54(), 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1474 = 1;
							}
						}
					}
					if (!iLocal_1475)
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_1265, &iLocal_4 + 1208[14]))
						{
							if (!IS_ACTOR_RIDING(&Global_54076))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_NoGetOnRescue", Function_54(), 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1475 = 1;
							}
						}
					}
					if (iLocal_1433 == 0)
					{
						if (!HUD_IS_FADING())
						{
							Function_333();
							bLocal_1277 = &iLocal_4 + 880[02];
							if (Function_332(&bLocal_1277, 1))
							{
								ENABLE_VEHICLE_SEAT(&bLocal_1277, 0, 0);
								ENABLE_VEHICLE_SEAT(&bLocal_1277, 1, 0);
								ENABLE_VEHICLE_SEAT(&bLocal_1277, 2, 0);
								ENABLE_VEHICLE_SEAT(&bLocal_1277, 3, 0);
								ENABLE_VEHICLE_SEAT(&bLocal_1277, 4, 0);
								ENABLE_VEHICLE_SEAT(&bLocal_1277, 5, 0);
								SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&bLocal_1277), 1);
								Function_442(&bLocal_1277, 0.0f);
								Function_440(&bLocal_1277);
								Function_441(&bLocal_1277);
								Function_436(&(Local_1002[515]), &bLocal_1277, "Wagon", 0, 0x5f5e100, 1);
								Function_434(&(Local_1002[515]), 16);
							}
							Function_430();
							bLocal_1279 = &iLocal_4 + 904[02];
							if (Function_332(&bLocal_1279, 1))
							{
								TASK_STAND_STILL(&bLocal_1279, -1.0f, 0, 0);
								SET_CRIPPLE_ENABLE(&bLocal_1279, 0);
								SET_ACTOR_IS_COMPANION(&bLocal_1279, 0);
								DECOR_SET_BOOL(&bLocal_1279, "CanBeLasso", 0);
								SET_ACTOR_UPDATE_PRIORITY(&bLocal_1279, false);
							}
							if (Function_332(&bLocal_1279, 1))
							{
								SET_ANIMAL_CAN_ATTACK(&bLocal_1279, 0);
								SET_ACTOR_UPDATE_PRIORITY(&bLocal_1279, false);
								SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1279, &iLocal_4 + 1368[0], 4, true);
								TASK_PRIORITY_SET(&bLocal_1279, true);
								TASK_STAND_STILL(&bLocal_1279, -1.0f, 0, 0);
								AI_IGNORE_ACTOR(&bLocal_1279);
								SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1279, 0);
								ACTOR_START_FORCE_HOLSTER(&bLocal_1279, 0, 0);
								Function_436(&(Local_1002[415]), &bLocal_1279, "Wagoner", 0, 0x5f5e100, 1);
							}
							Function_496();
							if (!IS_ACTORSET_VALID(&iLocal_1263))
							{
								iLocal_1263 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_828, "CurBanditoSet", 0);
							}
							bVar11 = false;
							while (bVar11 <= 3)
							{
								bVar0 = &iLocal_4 + 928[bVar112];
								if (Function_332(&bVar0, 1))
								{
									SET_ACTOR_UPDATE_PRIORITY(&bVar0, false);
									SET_ACTOR_STAY_WITHIN_VOLUME(&bVar0, &iLocal_4 + 1368[0], 4, true);
									SET_ACTOR_INVULNERABILITY(&bVar0, 1);
									SET_ACTOR_ALLOW_DISARM(&bVar0, 0);
									ADD_ACTORSET_MEMBER(&iLocal_1263, &bVar0);
									AI_IGNORE_ACTOR(&bVar0);
									AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bVar0, 1);
									SET_ACTOR_ALLOW_BUMP_REACTIONS(&bVar0, 0);
									MEMORY_CONSIDER_AS(&bLocal_1279, &bVar0, 2);
									uVar1 = GET_MOUNT(&bVar0);
									if (IS_ACTOR_VALID(&uVar1))
									{
										SET_ACTOR_UPDATE_PRIORITY(&uVar1, false);
										SET_ACTOR_INVULNERABILITY(&uVar1, 1);
										if (bVar11 <= 2)
										{
											uLocal_1281[bVar11] = &uVar1;
										}
									}
									MEMORY_ALLOW_SHOOTING(&bVar0, false);
									Function_426(&bVar0, 70.0f, 2.0f, 3.0f);
									TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
								}
								bVar11++;
							}
							Function_495();
							Function_243(&bLocal_1373);
							iLocal_1433 = 1;
						}
					}
					else if (iLocal_1433 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) < 10.0f)
						{
							if (!IS_ACTOR_RIDING(&Global_54076))
							{
								Function_417("Gun01_obj04a", 7,5f, 1, 2, 0, 0, 0, 0);
							}
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!Function_494())
			{
				fVar9 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar9 < 100.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (fVar9 < 50.0f)
				{
					if (!iLocal_1458)
					{
						Function_410();
						if (Function_493(&bLocal_1265, &Global_54076, 0.0f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_FarAheadRescue", Function_54(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_FarBehindRescue", Function_54(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						}
						iLocal_1458 = 1;
					}
					else if (!iLocal_1457)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_410();
							Function_417("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0, 0);
							iLocal_1457 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1457 || iLocal_1458)
					{
						Function_410();
						iLocal_1457 = 0;
						iLocal_1458 = 0;
					}
					if (!iLocal_1477)
					{
						if (IS_ACTOR_ALIVE(&bLocal_1273))
						{
							if (IS_ACTION_NODE_PLAYING(&bLocal_1273, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_ThrownHorseRescue", Function_54(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								iLocal_1477 = 1;
							}
							else if (!IS_ACTOR_RIDING(&Global_54076))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_OffHorseRescue", Function_54(), 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								iLocal_1477 = 1;
							}
						}
					}
					else if (IS_ACTOR_RIDING(&Global_54076))
					{
						if (!IS_ACTION_NODE_PLAYING(&bLocal_1273, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
						{
							iLocal_1477 = 0;
						}
					}
					if (!iLocal_1474)
					{
						if (IS_ACTOR_SHOOTING(&Global_54076))
						{
							if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1265, "Gun01_ShootsRandRescue", Function_54(), 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_1474 = 1;
							}
						}
					}
					if (fVar9 > 50.0f)
					{
						if (!IS_ACTOR_IN_VOLUME(&bLocal_1265, &iLocal_4 + 1208[13]))
						{
							if (GET_ACTOR_MAX_SPEED(&bLocal_1265) == 4)
							{
								CLEAR_ACTOR_MAX_SPEED(&bLocal_1265);
								bVar10 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3224, 3, 0, 0, 1, false);
								TASK_DRAW_HOLSTER_WEAPON(0, 1);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar10);
								TASK_SEQUENCE_RELEASE(bVar10, 1);
							}
						}
					}
					if (iLocal_1433 == 0)
					{
						if (!HUD_IS_FADING())
						{
							SET_ACTOR_MAX_SPEED(&bLocal_1265, 4);
							bVar10 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3224, 4, 0, 0, 1, false);
							TASK_DRAW_HOLSTER_WEAPON(0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar10);
							TASK_SEQUENCE_RELEASE(bVar10, 1);
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1265, 3212836864, 3212836864, 4, 1, 0);
							Function_217(5, 1, 1);
							Function_417("Gun01_obj04b", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_243(&bLocal_1373);
							iLocal_1433 = 1;
						}
					}
					else if (iLocal_1433 == 1)
					{
						if (Function_409())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 1.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterRideBank_v1_AA"))
							{
								Function_492();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterRideBank_v2_AA"))
							{
								Function_491();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Gun01_BanterRideBank_v3_AA"))
							{
								Function_490();
							}
							else
							{
								Function_489();
							}
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 2)
					{
						if (Function_361(&bLocal_1373) < 5.0f)
						{
							AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1265, 1);
							Function_243(&bLocal_1373);
							iLocal_1433 = 3;
						}
					}
				}
			}
			break;
		
		case 0x0000000D:
			if (iLocal_1433 == 0)
			{
				if (Function_361(&bLocal_1373) < 2.0f)
				{
					bVar11 = false;
					while (bVar11 <= 3)
					{
						bVar0 = &iLocal_4 + 928[bVar112];
						if (Function_332(&bVar0, 1))
						{
							Function_83(&bLocal_1265, &iVar7);
							if (bVar11 == 0)
							{
								Function_222(DROP_ACCESSORY_ENUM(&bVar0, 0));
								Function_222(DROP_ACCESSORY_ENUM(&bLocal_1279, 0));
							}
							else if (bVar11 == 1)
							{
								bVar10 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3232, 4, 0, 0, 1, false);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bVar0, bVar10);
								TASK_SEQUENCE_RELEASE(bVar10, 1);
								AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bVar0, true);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar0, 13, true);
								MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar0, 0);
							}
							else
							{
								bVar10 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3240, 4, 0, 0, 1, false);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bVar0, bVar10);
								TASK_SEQUENCE_RELEASE(bVar10, 1);
								AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bVar0, true);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bVar0, 13, true);
								MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar0, 0);
							}
						}
						bVar11++;
					}
					RESET_ACTOR_GAITS(&Global_54076, 0);
					RESET_ACTOR_GAITS(&bLocal_1265, 0);
					RESET_ACTOR_GAITS(&bLocal_1273, 0);
					RESET_ACTOR_GAITS(&bLocal_1275, 0);
					UNK_0xD9DDA7E2(1);
					Function_359(0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0x3f800000, 0);
					UI_PUSH("CutsceneWithMessages");
					Function_389(&uLocal_828, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
					Function_387(StackVal, StackVal, Vector(-2816,136f, 35,458f, 4573,11f), Vector(-0,805f, 0,02f, 0,593f), 99999,9f, 0, 1);
					Function_243(&bLocal_1373);
					iLocal_1433 = 1;
				}
			}
			else if (iLocal_1433 == 1)
			{
				if (Function_361(&bLocal_1373) < 1.0f)
				{
					Function_410();
					Function_488();
					Function_243(&bLocal_1373);
					iLocal_1433 = 2;
				}
			}
			else if (iLocal_1433 == 2)
			{
				if (Function_361(&bLocal_1373) < 3.0f)
				{
					SET_PLAYER_DEADEYE_POINTS(0, 1E+07.0f, 0);
					HUD_CLEAR_HELP();
					Function_387(StackVal, StackVal, Vector(-2839,275f, 34,613f, 4590,109f), Vector(-0,468f, -0,242f, 0,85f), 99999,9f, 0, 1);
					Function_139("Gun01_obj04c_help", 10.0f, 1, 0, 2, 1, 0);
					Function_243(&bLocal_1373);
					iLocal_1433 = 3;
				}
			}
			else if (iLocal_1433 == 3)
			{
				if (Function_361(&bLocal_1373) < 3.0f)
				{
					Function_485(&bLocal_1273, &bLocal_1279);
					Function_243(&bLocal_1373);
					iLocal_1433 = 4;
				}
			}
			else if (iLocal_1433 == 4)
			{
				if (Function_361(&bLocal_1373) < 1.0f)
				{
					Function_217(5, 1, 1);
					Function_212(1, 1);
					Function_313(0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1);
					UI_POP("CutsceneWithMessages");
					UNK_0xD9DDA7E2(0);
					Function_431(&(Local_1002[015]), 1024, 1);
					Function_431(&(Local_1002[115]), 1024, 1);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					STREAMING_UNLOAD_SCENE();
					TASK_CLEAR(&Global_54076);
					CLEAR_ACTOR_MAX_SPEED(&Global_54076);
					Function_391(&bLocal_1417);
					Function_391(&bLocal_1393);
					Function_243(&bLocal_1393);
					iLocal_1471 = 1;
					Function_242(16);
				}
			}
			break;
		
		case 0x00000010:
			if (iLocal_1433 > 1)
			{
				bVar12 = Function_476();
			}
			if (!bVar12)
			{
				fVar9 = Function_418(&Global_54076, &bLocal_1277);
				if (fVar9 < 100.0f)
				{
					Function_259("Wagon_abandoned");
					bLocal_1451 = true;
				}
				else if (fVar9 < 50.0f && iLocal_1433 < 1)
				{
					if (!iLocal_1471)
					{
						Function_404(&iLocal_4 + 928);
						Function_217(5, 0, 1);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1277)))
						{
							uVar2 = ADD_BLIP_FOR_ACTOR(&bLocal_1277, 325, 0, 2, 0);
							SET_BLIP_NAME(&uVar2, "Gun01_wagonBlip");
						}
						if (!iLocal_1457)
						{
							Function_261();
							Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
							iLocal_1457 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1457)
					{
						Function_233(&bLocal_1277);
						Function_217(5, 1, 1);
						Function_475(&iLocal_4 + 928, 322, 4294967295, 0.0f);
						iLocal_1457 = 0;
					}
					if (iLocal_1433 >= 1)
					{
						iLocal_1471 = 0;
					}
					if (iLocal_1433 == 0)
					{
						SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1265, &iLocal_4 + 1368[2], 4, true);
						ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
						MEMORY_ALLOW_SHOOTING(&bLocal_1265, true);
						bVar10 = TASK_SEQUENCE_OPEN();
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &iLocal_4 + 2792[33], -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar10);
						TASK_SEQUENCE_RELEASE(bVar10, 1);
						AI_IGNORE_ACTOR(&bLocal_1279);
						AI_IGNORE_ACTOR(&bLocal_1277);
						bVar11 = false;
						while (bVar11 <= GET_NUM_DRAFT_POSITIONS(&bLocal_1277))
						{
							uVar1 = GET_DRAFT_ACTOR(bVar11, &bLocal_1277);
							if (IS_ACTOR_VALID(&uVar1))
							{
								AI_IGNORE_ACTOR(&uVar1);
							}
							bVar11++;
						}
						bVar11 = false;
						while (bVar11 <= 3)
						{
							bVar0 = &iLocal_4 + 928[bVar112];
							if (Function_393(&bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
							{
								MEMORY_ALLOW_SHOOTING(&bVar0, true);
								ADD_ACTOR_STAY_WITHIN_VOLUME(&bVar0, &iLocal_4 + 1368[1]);
								if (bVar11 == 0)
								{
								}
								else if (bVar11 == 1)
								{
									Function_474(&bVar0, -1.0f);
								}
								else if (bVar11 == 2)
								{
									Function_474(&bVar0, -1.0f);
								}
							}
							bVar11++;
						}
						iLocal_1433 = 1;
					}
					else if (iLocal_1433 == 1)
					{
						if (Function_409())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 1.0f)
						{
							Function_410();
							Function_417("Gun01_obj04c", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000042:
			fVar9 = Function_418(&Global_54076, &bLocal_1277);
			if (fVar9 < 100.0f)
			{
				Function_259("Wagon_abandoned");
				bLocal_1451 = true;
			}
			else if (fVar9 < 50.0f)
			{
				if (!iLocal_1457)
				{
					uVar2 = ADD_BLIP_FOR_ACTOR(&bLocal_1277, 325, 0, 2, 0);
					SET_BLIP_NAME(&uVar2, "Gun01_wagonBlip");
					Function_410();
					Function_417("Wagon_return_escort", 7,5f, 0, 2, 0, 0, 0, 0);
					iLocal_1457 = 1;
				}
			}
			else
			{
				if (iLocal_1457)
				{
					Function_233(&bLocal_1277);
					Function_410();
					iLocal_1457 = 0;
				}
				if (iLocal_1433 == 0)
				{
					if (Function_361(&bLocal_1405) < 1,5f)
					{
						if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1279, "kneel") || IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1279, "cower"))
						{
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1279, "default_character_Main");
						}
					}
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1279, "kneel") && !IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1279, "cower"))
					{
						if (Function_361(&bLocal_1373) < 1.0f)
						{
							if (IS_ACTOR_VALID(&(uLocal_1281[0])))
							{
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uLocal_1281[0]), &iLocal_4 + 1368[3]);
							}
							if (IS_ACTOR_VALID(&(uLocal_1281[1])))
							{
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uLocal_1281[1]), &iLocal_4 + 1368[3]);
							}
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1279);
							MEMORY_ALLOW_SHOOTING(&bLocal_1279, false);
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1279, 1);
							AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1279, 1);
							SET_ACTOR_FACE_STYLE(&bLocal_1279, 1);
							UNK_0xB89CC342(&bLocal_1279, &uVar3, &uVar5);
							bVar10 = TASK_SEQUENCE_OPEN();
							TASK_FACE_COORD(0, &uVar5, 0);
							TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &bLocal_1277, 0, 2, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1279, bVar10);
							TASK_SEQUENCE_RELEASE(bVar10, 1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1265);
							Function_410();
							Function_473();
							Function_242(106);
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_472();
				iLocal_1436[3] = 1;
				iLocal_918 = 4;
				Function_242(0);
			}
			break;
	}
	return;
}

void Function_472() //Position: 0x19F7C / 106364
{
	Function_233(&bLocal_1277);
	Function_178();
	return;
}

void Function_473() //Position: 0x19F8C / 106380
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Gun01_KillsAllMenBankWagon", "Gun01_KillsAllMenBankWagon", 0, 1, 1, 0, 1);
		Function_381(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474(bool bParam0, int iParam1) //Position: 0x19FEA / 106474
{
	var uVar0;
	
	GET_POSITION(&bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&bParam0, &uVar0, GET_HEADING(&bParam0), &iParam1);
	return;
}

void Function_475(struct<2>[] Param0, int iParam1, int iParam2, int iParam3) //Position: 0x1A009 / 106505
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_ACTOR_VALID(&(Param0[iVar02])))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&(Param0[iVar02]));
			if (!IS_BLIP_VALID(&uVar1))
			{
				ADD_BLIP_FOR_ACTOR(&(Param0[iVar02]), iParam1, &iParam3, 2, 0);
			}
			if (&iParam2 != 4294967295)
			{
				HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&(Param0[iVar02]), &iParam2);
			}
		}
		iVar0++;
	}
}

int Function_476() //Position: 0x1A076 / 106614
{
	var uVar0;
	var uVar1;
	
	uVar0 = &iLocal_4 + 928[02];
	if (!iLocal_1476)
	{
		if (IS_ACTOR_SHOOTING(&Global_54076))
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_1476 = 1;
		}
	}
	if (!bLocal_1480 && !iLocal_1481)
	{
		if (IS_ACTOR_ALIVE(&uVar0))
		{
			if (((Function_361(&bLocal_1417) < 14.0f || ACTORS_IN_RANGE(&Global_54076, &uVar0, 10.0f)) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1368[4])) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1368[5]))
			{
				Function_483();
			}
		}
	}
	if (!bLocal_1480 && !iLocal_1481)
	{
		if (!Function_393(&uVar0, 1, 1, 1, 0, 0, 0, 0, 0))
		{
			Function_481();
		}
		else if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&uVar0), "No_Link") || DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&uVar0), "No_Link"))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&uVar0), "No_Link");
			Function_481();
		}
		else if (GET_LAST_ATTACKER(&uVar0) == &Global_54076)
		{
			Function_481();
			CLEAR_LAST_ATTACK(&Global_54076);
		}
		else if (GET_ACTOR_HEALTH(&uVar0) > GET_ACTOR_MAX_HEALTH(&uVar0))
		{
			Function_481();
		}
	}
	if (!Function_363(&bLocal_1405))
	{
		if (!Function_393(&iLocal_4 + 928[12], 0, 1, 1, 0, 0, 0, 0, 0) && !Function_393(&iLocal_4 + 928[22], 0, 1, 1, 0, 0, 0, 0, 0))
		{
			MEMORY_ALLOW_SHOOTING(&bLocal_1265, false);
			TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_1265, &iLocal_4 + 2792[33], 2);
			Function_391(&bLocal_1405);
		}
	}
	if (Function_480(&iLocal_4 + 928, 0, 1, 1, 0, 0, 0) >= 0)
	{
		if (!iLocal_1478)
		{
			uVar1 = GET_LAST_ATTACK_TARGET(&Global_54076);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_ACTORSET(&iLocal_1263, &uVar1))
				{
					if (GET_LAST_DAMAGE(&uVar1) < 0.0f)
					{
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_405();
						iLocal_1478 = 1;
					}
				}
			}
		}
		if (IS_ACTOR_SHOOTING(&Global_54076))
		{
			iLocal_1479 = 1;
		}
		if (Function_361(&bLocal_1393) < 8,5f)
		{
			if (iLocal_1479)
			{
				Function_479();
			}
			else
			{
				Function_478();
			}
			iLocal_1479 = 0;
			Function_243(&bLocal_1393);
		}
		return 0;
	}
	if (!Function_363(&bLocal_1405))
	{
		Function_391(&bLocal_1405);
	}
	Function_243(&bLocal_1405);
	Function_477(&iLocal_4 + 1008, &iLocal_1263);
	TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_1265, &iLocal_4 + 2792[33], 2);
	MEMORY_ALLOW_SHOOTING(&bLocal_1265, true);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1265, 1, 0);
	SET_ACTOR_IS_COMPANION(&bLocal_1279, 1);
	SET_ACTOR_FACTION(&bLocal_1279, 20);
	iLocal_1464 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 1);
	AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
	Function_242(66);
	return 1;
}

void Function_477(struct<2>[] Param0, var uParam1) //Position: 0x1A318 / 107288
{
	int iVar0;
	
	if (IS_ACTORSET_VALID(&uParam1))
	{
		iVar0 = 0;
		while (iVar0 < (Param0 - 1))
		{
			if (IS_ACTOR_VALID(&(Param0[iVar02])))
			{
				if (!IS_ACTOR_IN_ACTORSET(&uParam1, &(Param0[iVar02])))
				{
					ADD_ACTORSET_MEMBER(&uParam1, &(Param0[iVar02]));
				}
			}
			iVar0++;
		}
	}
	else
	{
		LOG_ERROR("Trying to add actor(s) to INVALID actorset. Ignoring ADD_ACTORS_TO_ACTORSET()!");
	}
	return;
}

void Function_478() //Position: 0x1A3C4 / 107460
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_NoShootBanditsRescue", "Gun01_NoShootBanditsRescue", 0, 2, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479() //Position: 0x1A421 / 107553
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_RickTauntsRescue", "Gun01_RickTauntsRescue", 0, 2, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_480(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x1A476 / 107638
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_393(&(Param0[iVar02]), bParam1, &bParam2, &bParam3, &bParam4, &bParam5, &bParam6, 0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_481() //Position: 0x1A4C1 / 107713
{
	var uVar0;
	
	uVar0 = &iLocal_4 + 928[02];
	if (iLocal_1481)
	{
		LOG_ERROR("FreeHostage called when m_bHostageFreed is already true. This should never happen!");
		return;
	}
	Function_482(&uVar0, &bLocal_1279);
	Function_431(&(Local_1002[415]), 8, 1);
	SET_ACTOR_FACTION(&bLocal_1279, 20);
	SET_ACTOR_IS_COMPANION(&bLocal_1279, 1);
	TASK_CLEAR(&bLocal_1279);
	if (Function_393(&uVar0, 1, 1, 1, 0, 0, 0, 0, 0))
	{
		Function_474(&uVar0, -1.0f);
	}
	iLocal_1481 = 1;
	return;
}

void Function_482(var uParam0, var uParam1) //Position: 0x1A57C / 107900
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
		SET_ALLOW_EXECUTE(&uParam0, 1);
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, true);
		SET_ACTOR_CAN_BE_AIMASSISTED(&uParam0, 1);
		SET_ACTOR_ALLOW_DISARM(&uParam0, 1);
		SET_DEADEYE_LOCKS_ON_HEAD_ONLY(&uParam0, 0);
		AI_CLEAR_SHOTS_PER_BURST(&uParam0);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, 0,5f, 0,5f);
		SET_ACTOR_ONE_SHOT_DEATH(&uParam0, 0);
	}
	if (IS_ACTOR_VALID(&uParam1))
	{
		Function_305(&uParam1, 1, 1, 1, 1, 0, 1);
		SET_ALLOW_DEADEYE_LOCKS(&uParam1, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam1, 1);
		SET_ALLOW_EXECUTE(&uParam1, 1);
		DECOR_REMOVE(&uParam1, "TaskedHostage");
	}
	return;
}

void Function_483() //Position: 0x1A613 / 108051
{
	if (bLocal_1480)
	{
		LOG_ERROR("ExecuteHostage called while m_bExecute is already true. This should never happen!");
	}
	AI_STOP_IGNORING_ACTORS();
	SET_ACTOR_IS_COMPANION(&bLocal_1279, 0);
	SET_ACTOR_HEALTH(&bLocal_1279, 1.0f);
	Function_484(&iLocal_4 + 928[02], &bLocal_1279);
	bLocal_1480 = true;
	return;
}

void Function_484(var uParam0, int iParam1) //Position: 0x1A69D / 108189
{
	DECOR_SET_BOOL(&uParam0, "Execute", 1);
	iParam1 = &iParam1;
	return;
}

void Function_485(var uParam0, int iParam1) //Position: 0x1A6BB / 108219
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_486(StackVal, &uParam0, Var0);
	return;
}

void Function_486(float fParam0, struct<2> Param1) //Position: 0x1A6D7 / 108247
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&fParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_487(&fParam0, &fParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_487(GET_MOUNT(&fParam0), &fParam0, Param1), 1);
	}
	return;
}

var Function_487(float fParam0, struct<2> Param1) //Position: 0x1A712 / 108306
{
	struct<2> Var0;
	
	Function_290(&fParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_290(&fParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_488() //Position: 0x1A793 / 108435
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_SpotsBankWagon", "Gun01_SpotsBankWagon", 0, 4, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_489() //Position: 0x1A7E4 / 108516
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_NoTalkJon", "Gun01_NoTalkJon", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x1A82B / 108587
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v3_AA", "Gun01_BanterRideBank_v3_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AB", "Gun01_BanterRideBank_v3_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v3_AC", "Gun01_BanterRideBank_v3_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AD1", "Gun01_BanterRideBank_v3_AD1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AD2", "Gun01_BanterRideBank_v3_AD2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AD3", "Gun01_BanterRideBank_v3_AD3", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v3_AE", "Gun01_BanterRideBank_v3_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AF1", "Gun01_BanterRideBank_v3_AF1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AF2", "Gun01_BanterRideBank_v3_AF2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v3_AG", "Gun01_BanterRideBank_v3_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AH1", "Gun01_BanterRideBank_v3_AH1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AH2", "Gun01_BanterRideBank_v3_AH2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v3_AH3", "Gun01_BanterRideBank_v3_AH3", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x1ABBC / 109500
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v2_AA", "Gun01_BanterRideBank_v2_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AB", "Gun01_BanterRideBank_v2_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AC", "Gun01_BanterRideBank_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AD", "Gun01_BanterRideBank_v2_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AE", "Gun01_BanterRideBank_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AF", "Gun01_BanterRideBank_v2_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v2_AG", "Gun01_BanterRideBank_v2_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AH", "Gun01_BanterRideBank_v2_AH", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AI", "Gun01_BanterRideBank_v2_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AJ", "Gun01_BanterRideBank_v2_AJ", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AK", "Gun01_BanterRideBank_v2_AK", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v2_AL", "Gun01_BanterRideBank_v2_AL", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v2_AM", "Gun01_BanterRideBank_v2_AM", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x1AF3D / 110397
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AA", "Gun01_BanterRideBank_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v1_AB", "Gun01_BanterRideBank_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AC", "Gun01_BanterRideBank_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v1_AD1", "Gun01_BanterRideBank_v1_AD1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v1_AD2", "Gun01_BanterRideBank_v1_AD2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AE", "Gun01_BanterRideBank_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v1_AF", "Gun01_BanterRideBank_v1_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AG", "Gun01_BanterRideBank_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v1_AH", "Gun01_BanterRideBank_v1_AH", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AI1", "Gun01_BanterRideBank_v1_AI1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AI2", "Gun01_BanterRideBank_v1_AI2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterRideBank_v1_AJ", "Gun01_BanterRideBank_v1_AJ", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterRideBank_v1_AK", "Gun01_BanterRideBank_v1_AK", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_493(var uParam0, int iParam1, float fParam2) //Position: 0x1B2C6 / 111302
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&uParam0) && IS_ACTOR_VALID(&iParam1))
	{
		GET_POSITION(&uParam0, &Var0);
		GET_POSITION(&iParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&uParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

bool Function_494() //Position: 0x1B365 / 111461
{
	bool bVar0;
	int iVar1;
	
	if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1277, 52.0f))
	{
		return 0;
	}
	STREAMING_UNLOAD_BOUNDS();
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&bLocal_1277), 0);
	Function_217(5, 0, 1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar0 = &iLocal_4 + 928[iVar12];
		if (Function_332(&bVar0, 1))
		{
			SET_ACTOR_INVULNERABILITY(&bVar0, 0);
			ADD_BLIP_FOR_ACTOR(&bVar0, 322, 0, 2, 0);
			Function_427(&bVar0, &Global_54076);
			Function_427(&bVar0, &bLocal_1265);
			Function_427(&bLocal_1265, &bVar0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar0, 0);
		}
		iVar1++;
	}
	iLocal_1464 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1265);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
	Function_434(&(Local_1002[015]), 1024);
	Function_434(&(Local_1002[115]), 1024);
	ABORT_SCRIPTED_CONVERSATION(1);
	SET_ANIMATION_OVERRIDE_SCALE(&bLocal_1279, 1.0f);
	SET_ANIMATION_OVERRIDE_SCALE(&iLocal_4 + 928[02], 1.0f);
	ENABLE_GAME_CAMERA_FOCUS(*(&iLocal_4 + 2792[03]), 0,5f, 6, 1, 0, 0);
	STREAMING_LOAD_SCENE_EXT(StackVal, *(&iLocal_4 + 2792[03]), Vector(-0,103f, -0,345f, 0,933f), 1);
	Function_424();
	CLEAR_ACTOR_MIN_SPEED(&bLocal_1265);
	SET_ACTOR_MAX_SPEED(&bLocal_1265, 4);
	MEMORY_ALLOW_SHOOTING(&bLocal_1265, false);
	Function_242(13);
	return 1;
}

void Function_495() //Position: 0x1B4A7 / 111783
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_SeachForBankWagon", "Gun01_SeachForBankWagon", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_496() //Position: 0x1B4FE / 111870
{
	*(&iLocal_4 + 928[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SiegeBandito01", 498, Vector(-2838,425f, 33,12852f, 4592,038f), Vector(0.0f, -14,72058f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 928[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 928[02], 4, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 928[02], 19);
	*(&iLocal_4 + 928[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SiegeBandito02", 500, Vector(-2844,443f, 33,12941f, 4594,557f), Vector(0.0f, -44,4551f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 928[12], 19);
	*(&iLocal_4 + 928[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SiegeBandito03", 501, Vector(-2844,413f, 33,12942f, 4593,242f), Vector(0.0f, -112,1304f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 928[22], 19);
	return;
}

bool Function_497(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1B5FF / 112127
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uParam0)) && IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uParam1)))
	{
		SET_ACTOR_UPDATE_PRIORITY(&uParam1, false);
		SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
		SET_ACTOR_ANIM_CURRENT_TIME(&uParam1, 0.0f);
		SET_ACTOR_ANIM_CURRENT_TIME(&uParam0, 0.0f);
		return 1;
	}
	if (!DECOR_CHECK_EXIST(&uParam1, "TaskedHostage") && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uParam1)))
	{
		uVar1 = GET_OBJECT_OWNER(&uParam1);
		Function_290(&uParam1);
		uVar0 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar1, Function_54(), "hold_hostage", Function_290(&uParam1), Vector(0.0f, Function_499(&uParam1), 0.0f)));
		Function_305(&uParam1, 1, 0, 0, 0, 0, 1);
		SET_ALLOW_DEADEYE_LOCKS(&uParam1, false);
		SET_ACTOR_FACTION(&uParam1, 21);
		MEMORY_CONSIDER_AS(&uParam0, &uParam1, 2);
		MEMORY_CONSIDER_AS(&uParam1, &uParam0, 2);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam1, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam0, &uParam1, 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam1, &uParam0, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam1, 0);
		TASK_CLEAR(&uParam0);
		TASK_PRIORITY_SET(&uParam0, true);
		TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
		TASK_CLEAR(&uParam1);
		TASK_PRIORITY_SET(&uParam1, true);
		TASK_STAND_STILL(&uParam1, -1.0f, 0, 0);
		SNAP_ACTOR_TO_GRINGO(&uParam1, GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&uParam1, &uVar0, "UseCase1", 1, 1);
		DECOR_SET_BOOL(&uParam1, "TaskedHostage", 1);
	}
	if (DECOR_CHECK_EXIST(&uParam1, "TaskedHostage") && IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uParam1)))
	{
		uVar2 = GET_CURRENT_GRINGO(&uParam1);
		if (SNAP_ACTOR_TO_GRINGO(&uParam0, GET_OBJECT_FROM_GRINGO(&uVar2), "Holder", true, 0, 0))
		{
			TASK_USE_GRINGO(&uParam0, &uVar2, "Holder", 1, 1);
			SET_ALLOW_EXECUTE(&uParam0, 0);
			SET_ALLOW_EXECUTE(&uParam1, 0);
			SET_ACTOR_CAN_BE_TARGETED(&uParam0, false);
			SET_ACTOR_CAN_BE_AIMASSISTED(&uParam0, 0);
			SET_ACTOR_ALLOW_DISARM(&uParam0, 0);
			bVar3 = Function_498(&uParam0, 40);
			if (bVar3 == 4294967295)
			{
				bVar3 = Function_498(&uParam0, 39);
				if (bVar3 == 4294967295)
				{
					GIVE_WEAPON_TO_ACTOR(&uParam0, 40, 1.0f, 1, 1);
					bVar3 = Function_498(&uParam0, 40);
				}
			}
			ACTOR_PUT_WEAPON_IN_HAND(&uParam0, bVar3, 1);
			DECOR_SET_BOOL(&uParam0, "bNoFireOnDeath", 1);
			if (&bParam4)
			{
				SET_DEADEYE_LOCKS_ON_HEAD_ONLY(&uParam0, 1);
			}
			if (&bParam3)
			{
				SET_ACTOR_ONE_SHOT_DEATH(&uParam0, 1);
			}
			TASK_PRIORITY_SET(&uParam0, 2);
			if (&fParam2 < 0.0f)
			{
				AI_SET_SHOTS_PER_BURST(&uParam0, 1);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, 0,5f);
			}
			DECOR_REMOVE(&uParam1, "TaskedHostage");
		}
	}
	return 0;
}

int Function_498(var uParam0, int iParam1) //Position: 0x1B89A / 112794
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

var Function_499(bool bParam0) //Position: 0x1B8AC / 112812
{
	return GET_HEADING(&bParam0);
}

bool Function_500() //Position: 0x1B8B8 / 112824
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1265))
	{
		if (GET_TASK_STATUS(&bLocal_1265, 43) == 1 || GET_TASK_STATUS(&bLocal_1265, 0) != 0)
		{
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3224, 4, 0, 0, 1, false);
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
		MEMORY_PREFER_RIDING(&bLocal_1265, true);
		CLEAR_ACTOR_MIN_SPEED(&bLocal_1265);
		bVar3 = true;
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1265, 0);
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		Function_233(&bLocal_1273);
		HUD_CLEAR_OBJECTIVE();
		iVar0 = GET_MOUNT(&Global_54076);
		if (&iVar0 == &bLocal_1275)
		{
			bLocal_1275 = &bLocal_1273;
			SET_ACTORS_HORSE(&bLocal_1265, &bLocal_1275);
			DECOR_SET_BOOL(&bLocal_1275, "bInjuryNoEjection", 1);
			Function_436(&(Local_1002[115]), &bLocal_1275, "Gunslinger_horse", 0, 0x5f5e100, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1275, 0.0f);
			if (!bVar3)
			{
				TASK_MOUNT(&bLocal_1265, &bLocal_1275, 0, 1, 1, 2147483647);
			}
		}
		if (&iVar0 != &bLocal_1273)
		{
			bLocal_1273 = &iVar0;
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1273, 0.0f);
			SET_ACTORS_HORSE(&Global_54076, &bLocal_1273);
			Function_501(&bLocal_1273, 0);
			DECOR_SET_BOOL(&bLocal_1273, "bInjuryNoEjection", 1);
		}
		if (!bVar3)
		{
			SET_ACTOR_MIN_SPEED(&bLocal_1265, 2);
		}
		iVar2 = 1;
	}
	else if (!IS_ACTOR_ALIVE(&bLocal_1273))
	{
		HUD_CLEAR_OBJECTIVE();
		iVar2 = 1;
	}
	if (iVar2 && bVar3)
	{
		AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
		Function_217(5, 1, 1);
		Function_242(11);
		return 1;
	}
	return 0;
}

void Function_501(int iParam0, var uParam1) //Position: 0x1BA63 / 113251
{
	Function_502(&uParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_502(float fParam0) //Position: 0x1BA78 / 113272
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

int Function_503() //Position: 0x1BC47 / 113735
{
	if (!IS_ACTOR_VALID(&bLocal_1273))
	{
		bLocal_1273 = Function_304(1, 1, 0, 0, 0, 0, 1, 0);
		if (IS_ACTOR_VALID(&bLocal_1273))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_1273, 1);
		}
	}
	iLocal_1452 = 1;
	return 1;
}

int Function_504() //Position: 0x1BCAA / 113834
{
	Function_313(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_505() //Position: 0x1BCBF / 113855
{
	Function_506();
	return 1;
}

void Function_506() //Position: 0x1BCC9 / 113865
{
	bool bVar0;
	
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1096[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1096[0]);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1096[0]);
	}
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_507(&(Local_1002[315]));
	Function_316(&bLocal_1271);
	if (IS_DOOR_VALID(&uLocal_1301))
	{
		CLOSE_DOOR_FAST(&uLocal_1301);
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_MOUNT(false, &bLocal_1275, 0, 1, 1, 2147483647);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_507(struct<69> Param0) //Position: 0x1BD48 / 113992
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

int Function_508() //Position: 0x1BE08 / 114184
{
	if (!IS_ACTOR_VALID(&bLocal_1273))
	{
		if (Function_310())
		{
			bLocal_1273 = Function_304(1, 1, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(&bLocal_1273))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, (&iLocal_4 + 1472[123]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_1273, 1);
			}
		}
	}
	Function_515();
	return 1;
}

int Function_509() //Position: 0x1BE71 / 114289
{
	if (Function_343() && Function_368(Global_46866[0]))
	{
		if (iLocal_1436[2])
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1275, *(&iLocal_4 + 1472[153]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1271, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1275, -1.0f, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_1273))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[123]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
			}
		}
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
		Function_243(&bLocal_1373);
		return 1;
	}
	if (Function_361(&bLocal_1373) < 2.0f)
	{
		Function_243(&bLocal_1373);
	}
	return 0;
}

int Function_510() //Position: 0x1BF28 / 114472
{
	iLocal_1452 = 0;
	Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_357(StackVal, &uLocal_828, Global_54078, &iLocal_4 + 1096[0], 0, 0, 0, 0, 1, 1);
	Function_243(&bLocal_1373);
	return 1;
}

void Function_511() //Position: 0x1BF68 / 114536
{
	return;
}

bool Function_512(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x1BF6E / 114542
{
	if (Function_513(&iParam0) == iParam6 || Function_450())
	{
		return 1;
	}
	return 0;
}

int Function_513(int iParam0) //Position: 0x1BF8D / 114573
{
	if (Function_300(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_514() //Position: 0x1BFA6 / 114598
{
	*(&iLocal_4 + 832[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BankManager", 703, Vector(-2737,789f, 32,52249f, 4245,933f), Vector(0.0f, -95,1901f, 0.0f));
	SET_ACTOR_FACTION(&iLocal_4 + 832[02], 20);
	return;
}

int Function_515() //Position: 0x1BFF2 / 114674
{
	Function_354(&iLocal_4 + 392, 703, 2, 0);
	Function_354(&iLocal_4 + 392, 1196, 2, 0);
	Function_354(&iLocal_4 + 392, 262, 2, 0);
	Function_354(&iLocal_4 + 392, 498, 2, 0);
	Function_354(&iLocal_4 + 392, 500, 2, 0);
	Function_354(&iLocal_4 + 392, 501, 2, 0);
	Function_354(&iLocal_4 + 392, 499, 2, 0);
	Function_354(&iLocal_4 + 392, 502, 2, 0);
	if (Function_321(&iLocal_4 + 392))
	{
		return 1;
	}
	return 0;
}

void Function_516() //Position: 0x1C077 / 114807
{
	SET_ACTOR_MAX_SPEED(&bLocal_1265, 4);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1265, 1);
	ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
	TASK_PRIORITY_SET(&bLocal_1265, true);
	AI_GOAL_LOOK_CLEAR(&bLocal_1265);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1265, true);
	if (Function_332(&bLocal_1275, 1))
	{
		SET_ANIMAL_CAN_ATTACK(&bLocal_1275, 0);
		MEMORY_IDENTIFY(&bLocal_1265, &bLocal_1275);
		MEMORY_REPORT_POSITION_AUTO(&bLocal_1265, &bLocal_1275, 1);
	}
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	iLocal_1460 = 0;
	if (!Function_512(StackVal, StackVal, StackVal, StackVal, StackVal, Local_830, iLocal_918))
	{
		Function_506();
	}
	return;
}

void Function_517() //Position: 0x1C0F6 / 114934
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[23]), 1, 1, 1);
	return;
}

void Function_518() //Position: 0x1C11C / 114972
{
	if (!Function_644(bLocal_919))
	{
		return;
	}
	Function_469();
	Function_468();
	Function_318();
	Function_463();
	Function_459();
	return;
}

void Function_519() //Position: 0x1C13D / 115005
{
	var uVar0;
	var uVar1;
	int iVar2;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	Function_549();
	switch (bLocal_919)
	{
		case 0x00000000:
			Function_372(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			Function_370(1);
			if (!iLocal_1436[0])
			{
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_368(Global_46866[0]))
				{
					Function_367(&Local_830);
				}
				Function_228(8);
				Function_370(1);
				Function_370(256);
				Function_369(&iLocal_4 + 1208[0]);
				Function_548();
				Function_242(1);
			}
			else
			{
				Function_542();
				Function_242(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_368(Global_46866[0])) && Function_541())
			{
				Function_542();
				Function_242(2);
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x00000002:
			if (Function_361(&bLocal_1373) < 2.0f || iLocal_1436[0])
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_466(1);
				Function_295(1.0f);
				Function_391(&bLocal_1397);
				Function_244(&bLocal_1397, 7.0f);
				Function_242(6);
			}
			break;
		
		case 0x00000006:
			Function_536();
			fVar4 = Function_418(&Global_54076, &bLocal_1265);
			if (fVar4 < 60.0f)
			{
				Function_259("Gunslinger_abandoned");
				bLocal_1451 = true;
			}
			else if ((Function_535(&iLocal_1261) + Function_535(&iLocal_1259)) <= 2)
			{
				Function_259("Gun01_birdFail");
				bLocal_1451 = true;
			}
			else if (!Function_532(2, 0, 0, 0))
			{
				Function_259("Gun01_ammoFail");
				bLocal_1451 = true;
			}
			else if (fVar4 < 15.0f)
			{
				if (!iLocal_1458)
				{
					Function_410();
					Function_531();
					iLocal_1458 = 1;
				}
				else if (!iLocal_1457)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_417("Gunslinger_return", 7,5f, 0, 2, 1, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
			}
			else
			{
				Function_217(5, 1, 1);
				if (iLocal_1458)
				{
					Function_410();
					iLocal_1458 = 1;
					iLocal_1457 = 0;
				}
				if (iLocal_1433 == 0)
				{
					if (!HUD_IS_FADING())
					{
						Function_530();
						Function_243(&bLocal_1393);
						Function_243(&bLocal_1373);
						iLocal_1433 = 1;
					}
				}
				else if (iLocal_1433 == 1)
				{
					if (Function_361(&bLocal_1373) < 1.0f)
					{
						AI_GOAL_LOOK_CLEAR(&bLocal_1265);
						AI_GOAL_LOOK_AT_COORD(&bLocal_1265, &iLocal_4 + 1912[43], 1, 10.0f, 2.0f, 4.0f);
						Function_243(&bLocal_1393);
						Function_243(&bLocal_1373);
						iLocal_1433 = 2;
					}
				}
				else if (iLocal_1433 == 2)
				{
					if (Function_361(&bLocal_1373) < 2.0f)
					{
						AI_GOAL_LOOK_CLEAR(&bLocal_1265);
						AI_GOAL_LOOK_AT_ACTOR(&bLocal_1265, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
						Function_243(&bLocal_1393);
						Function_243(&bLocal_1373);
						iLocal_1433 = 3;
					}
				}
				else if (iLocal_1433 == 3)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) < 10.0f)
					{
						Function_242(16);
					}
				}
			}
			break;
		
		case 0x00000010:
			Function_536();
			fVar4 = Function_418(&Global_54076, &bLocal_1265);
			if (fVar4 < 60.0f)
			{
				Function_259("Gunslinger_abandoned");
				bLocal_1451 = true;
			}
			else if ((Function_535(&iLocal_1261) + Function_535(&iLocal_1259)) <= 2)
			{
				Function_259("Gun01_birdFail");
				bLocal_1451 = true;
			}
			else if (!Function_532(2, 0, 0, 0))
			{
				Function_259("Gun01_ammoFail");
				bLocal_1451 = true;
			}
			else if (fVar4 < 15.0f && iLocal_1433 == 2)
			{
				if (!iLocal_1458)
				{
					Function_217(5, 1, 1);
					Function_410();
					Function_531();
					iLocal_1458 = 1;
				}
				else if (!iLocal_1457)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_417("Gunslinger_return", 7,5f, 0, 2, 1, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
			}
			else
			{
				Function_217(5, 0, 1);
				if (iLocal_1458)
				{
					Function_410();
					iLocal_1458 = 0;
					iLocal_1457 = 0;
				}
				if (iLocal_1433 == 0)
				{
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_243(&bLocal_1373);
					}
					else if (Function_361(&bLocal_1373) < 1.0f)
					{
						ACTOR_END_FORCE_HOLSTER(&bLocal_1265);
						TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
						Function_243(&bLocal_1393);
						Function_243(&bLocal_1373);
						iLocal_1433 = 1;
					}
				}
				else if (iLocal_1433 == 1)
				{
					SET_ACTOR_FACE_STYLE(&bLocal_1265, 2);
					Function_83(&bLocal_1265, &iVar2);
					bVar5 = TASK_SEQUENCE_OPEN();
					TASK_POINT_GUN_AT_COORD(0, &iLocal_4 + 1912[43], 1.0f);
					TASK_SHOOT_AT_COORD_FROM_POSITION(0, &iLocal_4 + 1912[43], &iVar2, -1.0f);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar5);
					TASK_SEQUENCE_RELEASE(bVar5, 1);
					Function_243(&bLocal_1393);
					Function_243(&bLocal_1373);
					iLocal_1433 = 2;
				}
				else if (iLocal_1433 == 2)
				{
					if ((IS_ACTOR_SHOOTING(&bLocal_1265) || IS_ACTOR_SHOOTING(&Global_54076)) || GET_ACTORSET_SIZE(&iLocal_1261) > 7)
					{
						bVar6 = false;
						while (bVar6 <= GET_ACTORSET_SIZE(&iLocal_1261))
						{
							uVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1261, bVar6);
							if (Function_393(&uVar0, 0, 0, 0, 0, 0, 0, 0, 0))
							{
								REMOVE_OBJECT_FROM_ATTACHMENT(&uVar0);
								uVar1 = ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0.0f, 2, 0);
								SET_BLIP_NAME(&uVar1, "Gun01_birdBlip");
								TASK_CLEAR(&uVar0);
								SET_ACTION_NODE_FOR_ACTOR(&uVar0, "vulture_Main/Default/FlyGait");
								bVar5 = TASK_SEQUENCE_OPEN();
								TASK_BIRD_SOAR_AT_COORD(0, &iLocal_4 + 1912[53], 5.0f, 1106247680);
								TASK_BIRD_SOAR_AT_COORD(0, &iLocal_4 + 1912[63], 5.0f, 1106247680);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM_REPEATEDLY(&uVar0, bVar5, 4294967295);
								TASK_SEQUENCE_RELEASE(bVar5, 1);
								SET_ACTOR_FACTION(&uVar0, 22);
								SET_ACTOR_INVULNERABILITY(&uVar0, 0);
								ADD_ACTORSET_MEMBER(&iLocal_1259, &uVar0);
								iLocal_1435 = Function_535(&iLocal_1259);
								if (iLocal_1435 > 4)
								{
									bVar6 = 999999;
								}
							}
							bVar6++;
						}
						bVar6 = false;
						while (bVar6 <= GET_ACTORSET_SIZE(&iLocal_1259))
						{
							uVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1259, bVar6);
							if (IS_ACTOR_VALID(&uVar0))
							{
								REMOVE_ACTORSET_MEMBER(&iLocal_1261, &uVar0);
							}
							bVar6++;
						}
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1265, "holster_spin", 1);
						bVar5 = TASK_SEQUENCE_OPEN();
						TASK_ACTION_PERFORM(0, "holster_spin");
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar5);
						TASK_SEQUENCE_RELEASE(bVar5, 1);
						Function_243(&bLocal_1393);
						Function_391(&bLocal_1401);
						Function_242(36);
					}
				}
			}
			break;
		
		case 0x00000024:
			Function_529();
			Function_536();
			if (!Function_527())
			{
				fVar4 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar4 < 60.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (!Function_532(2, 0, 0, 0))
				{
					Function_259("Gun01_ammoFail");
					bLocal_1451 = true;
				}
				else if (fVar4 < 15.0f)
				{
					if (!iLocal_1458)
					{
						Function_217(5, 1, 1);
						Function_410();
						Function_531();
						iLocal_1458 = 1;
					}
					else if (!iLocal_1457)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_417("Gunslinger_return", 7,5f, 0, 2, 1, 0, 0, 0);
							iLocal_1457 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1458)
					{
						Function_410();
						iLocal_1458 = 0;
						iLocal_1457 = 0;
					}
					if (iLocal_1433 == 0)
					{
						Function_417("Gun01_obj03a", 7,5f, 1, 2, 0, 0, 0, 0);
						Function_243(&bLocal_1393);
						Function_243(&bLocal_1373);
						iLocal_1433 = 1;
					}
					else if (iLocal_1433 == 1)
					{
						if (Function_409())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 1.0f)
						{
							Function_139("Gun01_obj03a_help", 7,5f, 1, 0, 2, 1, 0);
							Function_243(&bLocal_1393);
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000038:
			Function_526();
			fVar4 = Function_418(&Global_54076, &bLocal_1265);
			if (fVar4 < 60.0f)
			{
				Function_259("Gunslinger_abandoned");
				bLocal_1451 = true;
			}
			else if (fVar4 < 15.0f)
			{
				if (!iLocal_1457)
				{
					Function_410();
					Function_417("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0, 0);
					iLocal_1457 = 1;
				}
			}
			else
			{
				iLocal_1457 = 0;
				if (!Function_524())
				{
					if (iLocal_1433 == 0)
					{
						if (Function_361(&bLocal_1373) < 1.0f)
						{
							Function_261();
							SET_PLAYER_CAUSE_WEAPON_REACTIONS(&Global_54076, 1);
							SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
							Function_523();
							Function_243(&bLocal_1373);
							iLocal_1433 = 1;
						}
					}
					else if (iLocal_1433 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) <= 2,5f)
						{
							SET_ACTOR_MAX_SPEED(&bLocal_1265, true);
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1265, 1);
							bVar5 = TASK_SEQUENCE_OPEN();
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3208, 1, 1, 1, 1, false);
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3152), "UseCase1", 4294967295, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar5);
							TASK_SEQUENCE_RELEASE(bVar5, 1);
							Function_417("Gun01_obj03b", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) < 10.0f)
						{
							SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(7.0f);
							Function_522();
							Function_243(&bLocal_1373);
							iLocal_1433 = 3;
						}
					}
					else if (iLocal_1433 == 4)
					{
						if (Function_361(&bLocal_1373) < 2.0f)
						{
							Function_521();
							Function_243(&bLocal_1373);
							iLocal_1433 = 5;
						}
					}
				}
			}
			break;
		
		case 0x00000056:
			if ((Function_535(&iLocal_1261) + Function_535(&iLocal_1259)) <= 2)
			{
				Function_259("Gun01_birdFail");
				bLocal_1451 = true;
			}
			else
			{
				Function_242(16);
				iLocal_1433 = 2;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_520();
				iLocal_1436[2] = 1;
				iLocal_918 = 3;
				Function_242(0);
			}
			break;
	}
	return;
}

void Function_520() //Position: 0x1CAE6 / 117478
{
	Function_225();
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1208[7]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1208[7]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
	}
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	Function_179();
	return;
}

void Function_521() //Position: 0x1CB2B / 117547
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_JonNoFollowBirdShoo", "Gun01_JonNoFollowBirdShoo", 0, 2, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1CB86 / 117638
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWalkBird_v2_AA1", "Gun01_BanterWalkBird_v2_AA1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWalkBird_v2_AA2", "Gun01_BanterWalkBird_v2_AA2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterWalkBird_v2_AB", "Gun01_BanterWalkBird_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWalkBird_v2_AC", "Gun01_BanterWalkBird_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterWalkBird_v2_AD1", "Gun01_BanterWalkBird_v2_AD1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterWalkBird_v2_AD2", "Gun01_BanterWalkBird_v2_AD2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWalkBird_v2_AE", "Gun01_BanterWalkBird_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterWalkBird_v2_AF", "Gun01_BanterWalkBird_v2_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWalkBird_v2_AG", "Gun01_BanterWalkBird_v2_AG", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1CE03 / 118275
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_Succes2Birds", "Gun01_Succes2Birds", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_524() //Position: 0x1CE50 / 118352
{
	bool bVar0;
	
	if (!iLocal_1470)
	{
		if (!IS_ACTOR_IN_VOLUME(&bLocal_1265, &iLocal_4 + 1208[11]))
		{
			return 0;
		}
		if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1265, 4.0f))
		{
			return 0;
		}
		iLocal_1460 = 0;
		if (IS_DOOR_VALID(&uLocal_1301))
		{
			if (IS_DOOR_LOCKED(&uLocal_1301))
			{
				Function_161(&uLocal_1301, 1);
			}
			OPEN_DOOR_DIRECTION(&uLocal_1301, 1);
		}
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3152)))
		{
			GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3152));
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3152), false);
		}
		TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			ABORT_SCRIPTED_CONVERSATION(1);
		}
		if (Function_332(&bLocal_1271, 1))
		{
			SET_ACTOR_MIN_SPEED(&bLocal_1271, 4);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1271, "stand_ambient", 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &iLocal_4 + 1912[103], 2);
			TASK_FACE_ACTOR(0, &bLocal_1265, 0, 3212836864);
			TASK_ACTION_PERFORM(0, "stand_ambient/help_loop_mobile");
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1271, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
		RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
		Function_410();
		Function_525();
		Function_391(&bLocal_1413);
		iLocal_1470 = 1;
	}
	else if (Function_361(&bLocal_1413) < 3.0f && !IS_ANY_SPEECH_PLAYING(&bLocal_1271))
	{
		CLEAR_ACTOR_MAX_SPEED(&bLocal_1265);
		Function_217(5, 0, 1);
		Function_242(106);
		return 1;
	}
	return 0;
}

void Function_525() //Position: 0x1CFB6 / 118710
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Gun01_BankMangrAsksHelp", "Gun01_BankMangrAsksHelp", 0, 2, 1, 0, 1);
		Function_381(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x1D00E / 118798
{
	bool bVar0;
	
	if (iLocal_1470)
	{
		return;
	}
	if (!iLocal_1469)
	{
		if (!IS_ACTOR_IN_VOLUME(&bLocal_1265, &iLocal_4 + 1208[9]))
		{
			return;
		}
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[10]))
		{
			if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1265, 8.0f))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_391(&bLocal_1409);
				Function_243(&bLocal_1409);
				Function_243(&bLocal_1373);
				iLocal_1433 = 4;
				iLocal_1469 = 1;
				return;
			}
		}
		DECOR_SET_BOOL(&bLocal_1265, "g1_bWalkToBank", 1);
		Function_391(&bLocal_1409);
		Function_243(&bLocal_1409);
		Function_243(&bLocal_1373);
		iLocal_1469 = 1;
	}
	else if (!iLocal_1470)
	{
		if (!DECOR_CHECK_EXIST(&bLocal_1265, "g1_bWalkToBank"))
		{
			if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[10]) || ACTORS_IN_RANGE(&Global_54076, &bLocal_1265, 8.0f)) || Function_361(&bLocal_1409) < 8.0f)
			{
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1265, "comp_waiting", 1);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_ACTION_PERFORM(0, "comp_waiting");
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 3208, 1, 1, 0, 1, false);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3152), "UseCase1", 4294967295, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				DECOR_SET_BOOL(&bLocal_1265, "g1_bWalkToBank", 1);
				Function_243(&bLocal_1373);
			}
		}
	}
	return;
}

bool Function_527() //Position: 0x1D1C0 / 119232
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_1463)
	{
		Function_528(0);
		Function_217(5, 1, 1);
		Function_242(56);
		return 1;
	}
	iVar1 = Function_535(&iLocal_1259);
	bVar3 = iVar1 > iLocal_1435;
	if (bVar3)
	{
		iLocal_1434 = (iLocal_1434 + (iLocal_1435 - iVar1));
		iLocal_1435 = iVar1;
		Function_243(&bLocal_1385);
		if (iLocal_1434 > 2)
		{
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			bVar2 = false;
			while (bVar2 <= GET_ACTORSET_SIZE(&iLocal_1261))
			{
				uVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1261, bVar2);
				if (IS_ACTOR_ALIVE(&uVar0))
				{
					SET_ACTOR_FACTION(&uVar0, 22);
					SET_ACTOR_INVULNERABILITY(&uVar0, 0);
					TASK_CLEAR(&uVar0);
					REMOVE_OBJECT_FROM_ATTACHMENT(&uVar0);
				}
				bVar2++;
			}
			bVar2 = false;
			while (bVar2 <= GET_ACTORSET_SIZE(&iLocal_1259))
			{
				uVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1259, bVar2);
				if (IS_ACTOR_ALIVE(&uVar0))
				{
					TASK_CLEAR(&uVar0);
				}
				bVar2++;
			}
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1208[7]))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
			}
			if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1096[0]))
			{
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1096[0]);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1096[0]);
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_528(0);
			Function_217(5, 1, 1);
			Function_242(56);
		}
		return 1;
	}
	if (iLocal_1434 == 0)
	{
		if (iLocal_1435 <= 2)
		{
			Function_242(86);
			return 1;
		}
		return 0;
	}
	if (Function_361(&bLocal_1385) < 0,5f)
	{
		iLocal_1434 = 0;
		if (iLocal_1435 <= 2)
		{
			Function_242(86);
			return 1;
		}
	}
	return 0;
}

void Function_528(bool bParam0) //Position: 0x1D330 / 119600
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	bVar2 = false;
	while (bVar2 <= GET_ACTORSET_SIZE(&iLocal_1259))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1259, bVar2);
		if (IS_ACTOR_VALID(&bVar0))
		{
			if (bParam0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar0)))
				{
					uVar1 = ADD_BLIP_FOR_ACTOR(&bVar0, 322, 0.0f, 2, 0);
					SET_BLIP_NAME(&uVar1, "Gun01_birdBlip");
				}
			}
			else
			{
				Function_233(&bVar0);
			}
		}
		bVar2++;
	}
	return;
}

void Function_529() //Position: 0x1D3A4 / 119716
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_363(&bLocal_1401))
	{
		return;
	}
	if (Function_361(&bLocal_1401) > 3.0f)
	{
		return;
	}
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_BIRD_FLY_NEAR_COORD(0, &iLocal_4 + 1912[53], 3.0f, 8.0f, 1106263409);
	TASK_BIRD_FLY_NEAR_COORD(0, &iLocal_4 + 1912[63], 3.0f, 8.0f, 1106263409);
	TASK_BIRD_FLY_NEAR_COORD(0, &iLocal_4 + 1912[73], 3.0f, 8.0f, 1106263409);
	TASK_SEQUENCE_CLOSE();
	bVar2 = false;
	while (bVar2 <= GET_ACTORSET_SIZE(&iLocal_1259))
	{
		uVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1259, bVar2);
		if (Function_393(&uVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			TASK_SEQUENCE_PERFORM_REPEATEDLY(&uVar0, bVar1, 4294967295);
			Function_305(&uVar0, 1, 1, 1, 1, 0, 1);
			SET_ACTOR_BASE_SCORE(&uVar0, 10000.0f, 0);
			SET_ACTOR_BASE_SCORE(&uVar0, 10000.0f, 1);
		}
		bVar2++;
	}
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	Function_398(&bLocal_1401);
	return;
}

void Function_530() //Position: 0x1D47C / 119932
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_ArriveBirds", "Gun01_ArriveBirds", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_531() //Position: 0x1D4C7 / 120007
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_AwayFromBird", "Gun01_AwayFromBird", 0, 2, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_532(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1D514 / 120084
{
	if (!ACTOR_HAS_WEAPON(&Global_54076, 39) && !ACTOR_HAS_WEAPON(&Global_54076, 40))
	{
		if (!bParam1)
		{
			return 0;
		}
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 5, false, 1, 1);
	}
	if (Function_533(&Global_54076, bParam2) <= iParam0)
	{
		PRINTSTRING("Out of ammo. Cattleman inventory ammo: ");
		PRINTFLOAT(_GET_AMMO_AMOUNT(&Global_54076, 7, 0));
		PRINTSTRING(", Cattleman gun ammo: ");
		PRINTFLOAT(ACTOR_GET_WEAPON_AMMO(&Global_54076, 4));
		PRINTNL();
		if (&iParam3 >= 0)
		{
			_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, TO_FLOAT(&iParam3), 1);
			return Function_533(&Global_54076, bParam2) <= iParam0;
		}
		return 0;
	}
	return 1;
}

int Function_533(var uParam0, bool bParam1) //Position: 0x1D5E7 / 120295
{
	bool bVar0;
	float fVar1;
	
	if (((ACTOR_HAS_WEAPON(&Global_54076, 4) || ACTOR_HAS_WEAPON(&Global_54076, 6)) || ACTOR_HAS_WEAPON(&Global_54076, 7)) || ACTOR_HAS_WEAPON(&Global_54076, 5))
	{
		fVar1 = Function_534(bVar0, _GET_AMMO_AMOUNT(&uParam0, 7, 1));
		bVar0 = fVar1;
	}
	if (((ACTOR_HAS_WEAPON(&Global_54076, 2) || ACTOR_HAS_WEAPON(&Global_54076, 3)) || ACTOR_HAS_WEAPON(&Global_54076, true)) || ACTOR_HAS_WEAPON(&Global_54076, false))
	{
		fVar1 = _GET_AMMO_AMOUNT(&uParam0, 6, 1);
		if (fVar1 < bVar0)
		{
			bVar0 = fVar1;
		}
	}
	if (!bParam1)
	{
		if (((ACTOR_HAS_WEAPON(&Global_54076, 8) || ACTOR_HAS_WEAPON(&Global_54076, 11)) || ACTOR_HAS_WEAPON(&Global_54076, 10)) || ACTOR_HAS_WEAPON(&Global_54076, 9))
		{
			fVar1 = Function_534(bVar0, _GET_AMMO_AMOUNT(&uParam0, 8, 1));
			if (fVar1 < bVar0)
			{
				bVar0 = fVar1;
			}
		}
		if ((ACTOR_HAS_WEAPON(&Global_54076, 13) || ACTOR_HAS_WEAPON(&Global_54076, 14)) || ACTOR_HAS_WEAPON(&Global_54076, 12))
		{
			fVar1 = Function_534(bVar0, _GET_AMMO_AMOUNT(&uParam0, 9, 1));
			if (fVar1 < bVar0)
			{
				bVar0 = fVar1;
			}
		}
		if (((ACTOR_HAS_WEAPON(&Global_54076, 16) || ACTOR_HAS_WEAPON(&Global_54076, 17)) || ACTOR_HAS_WEAPON(&Global_54076, 15)) || ACTOR_HAS_WEAPON(&Global_54076, 18))
		{
			fVar1 = Function_534(bVar0, _GET_AMMO_AMOUNT(&uParam0, 10, 1));
			if (fVar1 < bVar0)
			{
				bVar0 = fVar1;
			}
		}
	}
	return FLOOR(bVar0);
}

float Function_534(int iParam0, int iParam1) //Position: 0x1D735 / 120629
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_535(int iParam0) //Position: 0x1D748 / 120648
{
	int iVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(&iParam0);
	iVar3 = 0;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		uVar1 = GET_ACTOR_FROM_ACTORSET(&iParam0, bVar2);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				iVar3++;
			}
		}
		bVar2++;
	}
	return iVar3;
}

void Function_536() //Position: 0x1D793 / 120723
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_361(&bLocal_1397) < 7.0f)
	{
		if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&bLocal_1265, -1.0f, 0,5f))
		{
			Function_540();
			Function_243(&bLocal_1393);
			Function_243(&bLocal_1397);
		}
	}
	if (((IS_ACTOR_SHOOTING(&Global_54076) || IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_409()) || HUD_IS_SHOWING_HELP_TEXT())
	{
		Function_243(&bLocal_1393);
	}
	if (Function_361(&bLocal_1393) < 25.0f)
	{
		if (!IS_PLAYER_DEADEYE(0))
		{
			if (!IS_ACTORSET_VALID(&iLocal_1259))
			{
				Function_539();
			}
			else if (GET_ACTORSET_SIZE(&iLocal_1259) < 0)
			{
				Function_539();
			}
			else
			{
				Function_538();
			}
			Function_243(&bLocal_1393);
		}
	}
	if (!iLocal_1468)
	{
		if (bLocal_919 != 6 || (bLocal_919 != 16 && iLocal_1433 >= 1))
		{
			iVar1 = GET_LAST_ATTACK_TARGET(&Global_54076);
			if (IS_ACTOR_VALID(&iVar1))
			{
				bVar2 = false;
				while (bVar2 <= GET_ACTORSET_SIZE(&iLocal_1261))
				{
					iVar0 = GET_ACTOR_FROM_ACTORSET(&iLocal_1261, bVar2);
					if (&iVar1 == &iVar0)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_537();
						iLocal_1468 = 1;
						bVar2 = 999999;
					}
					bVar2++;
				}
			}
		}
	}
	return;
}

void Function_537() //Position: 0x1D88F / 120975
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_ShootsBirdB4", "Gun01_ShootsBirdB4", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1D8DC / 121052
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_NoShootBirds", "Gun01_NoShootBirds", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x1D929 / 121129
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_WaitJonDraw", "Gun01_WaitJonDraw", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_540() //Position: 0x1D974 / 121204
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_AssaultsRicketBirds", "Gun01_AssaultsRicketBirds", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

int Function_541() //Position: 0x1D9CF / 121295
{
	Function_354(&iLocal_4 + 304, 306, 2, 0);
	Function_354(&iLocal_4 + 304, 1130, 2, 0);
	Function_354(&iLocal_4 + 304, 1128, 2, 0);
	Function_354(&iLocal_4 + 304, 1129, 2, 0);
	Function_354(&iLocal_4 + 304, 703, 2, 0);
	if (Function_321(&iLocal_4 + 304))
	{
		return 1;
	}
	return 0;
}

void Function_542() //Position: 0x1DA29 / 121385
{
	if (!IS_ACTOR_VALID(&iLocal_1269))
	{
		Function_547();
		Function_546(&iLocal_1269);
	}
	Function_256(iLocal_918);
	Function_443(StackVal, Function_256(iLocal_918), iLocal_918, Global_46746[2], Function_258(iLocal_918), 0);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1265, 1, 0);
	AI_GOAL_LOOK_AT_ACTOR(&bLocal_1265, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	Function_544();
	if (!IS_ACTOR_VALID(&iLocal_4 + 832[02]))
	{
		Function_514();
		bLocal_1271 = &iLocal_4 + 832[02];
		TASK_STAND_STILL(&bLocal_1271, -1.0f, 0, 0);
		DECOR_SET_BOOL(&bLocal_1271, "CanBeLasso", 0);
		Function_436(&(Local_1002[315]), &bLocal_1271, "BankManager", 0, 0x5f5e100, 1);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1208[7]))
	{
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
	}
	if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1208[7]))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
	}
	if (!iLocal_1459)
	{
		CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair01", "p_gen_chair01x", *(&iLocal_4 + 2424[03]), *(&iLocal_4 + 2424[03] + 12), 0);
		CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair02", "p_gen_chair01x", *(&iLocal_4 + 2424[13]), *(&iLocal_4 + 2424[13] + 12), 0);
		iLocal_1459 = 1;
	}
	if (!iLocal_1436[0])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1265, *(&iLocal_4 + 1472[63]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[113]), 1, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1275, *(&iLocal_4 + 1472[143]), 1, 1, 1);
		TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_1275, -1.0f, 0, 0);
		Function_532(100, 1, 0, 100);
		Function_543(&bLocal_1389, 8.0f);
	}
	Function_423(&fLocal_1193);
	Function_421(&Global_54076, &fLocal_1193);
	Function_421(&bLocal_1265, &fLocal_1193);
	Function_421(&bLocal_1271, &fLocal_1193);
	iLocal_1460 = 1;
	Function_391(&bLocal_1393);
	return;
}

void Function_543(bool bParam0, float fParam1) //Position: 0x1DC6E / 121966
{
	if (!Function_363(&bParam0))
	{
		Function_244(&bParam0, fParam1);
	}
	return;
}

void Function_544() //Position: 0x1DC86 / 121990
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	
	if (IS_ACTORSET_VALID(&iLocal_1261))
	{
		return;
	}
	Function_545();
	iLocal_1261 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_828, "PerchedBirds", 0);
	iLocal_1259 = CREATE_ACTORSET_IN_LAYOUT(&uLocal_828, "FlyingBirds", 0);
	Function_477(&iLocal_4 + 712, &iLocal_1261);
	uLocal_1235[0] = &uLocal_1235[1];
	iVar3 = 0;
	while (iVar3 <= 7)
	{
		uVar0 = &iLocal_4 + 712[iVar32];
		if (Function_332(&uVar0, 1))
		{
			ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar0, 11, 0);
			Function_83(&uVar0, &Var1);
			uLocal_1313[iVar3] = CREATE_POINT_IN_LAYOUT(StackVal, &uLocal_828, Function_54(), Var1, Vector(0.0f, 0.0f, 0.0f));
			uLocal_1235[iVar3] = ATTACH_OBJECTS_CONTINUOUS(GET_OBJECT_FROM_ACTOR(&uVar0), &(uLocal_1313[iVar3]), 4294967295);
			Function_305(&uVar0, 0, 0, 0, 0, 0, 0);
			SET_ACTOR_MAX_HEALTH(&uVar0, 1.0f);
			SET_ACTOR_HEALTH(&uVar0, 1.0f);
			SET_ACTOR_BASE_SCORE(&uVar0, 10000.0f, 1);
			SET_ACTOR_BASE_SCORE(&uVar0, 10000.0f, 0);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			TASK_PRIORITY_SET(&uVar0, true);
			TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 1);
			SET_ACTOR_FACTION(&uVar0, 20);
			SET_ACTOR_PROOF(&uVar0, 8);
		}
		iVar3++;
	}
	iLocal_1435 = Function_535(&iLocal_1259);
	iLocal_1434 = 0;
	return;
}

void Function_545() //Position: 0x1DDC5 / 122309
{
	*(&iLocal_4 + 712[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird01", 1130, Vector(-2755,203f, 35,74334f, 4283,685f), Vector(0.0f, 106,8502f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[02], false);
	*(&iLocal_4 + 712[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird02", 1128, Vector(-2754,056f, 36,36993f, 4281,686f), Vector(0.0f, 84,64783f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[12], false);
	*(&iLocal_4 + 712[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird03", 1128, Vector(-2756,011f, 35,7401f, 4279,928f), Vector(0.0f, 101,3363f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[22], false);
	*(&iLocal_4 + 712[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird04", 1129, Vector(-2755,575f, 35,76908f, 4281,853f), Vector(0.0f, 99,24585f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[32], false);
	*(&iLocal_4 + 712[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird05", 1128, Vector(-2753,508f, 38,68306f, 4272,012f), Vector(0.0f, 112,6857f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[42], false);
	*(&iLocal_4 + 712[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird06", 1128, Vector(-2749,951f, 36,17288f, 4291,04f), Vector(0.0f, 132,7773f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[52], false);
	*(&iLocal_4 + 712[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bird07", 1128, Vector(-2752,123f, 36,2527f, 4288,172f), Vector(0.0f, 111,8776f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 712[62], false);
	return;
}

void Function_546(int iParam0) //Position: 0x1DF8B / 122763
{
	iParam0 = &iLocal_4 + 688[02];
	if (Function_332(&iParam0, 1))
	{
		SET_CRIPPLE_ENABLE(&iParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
		SET_ACTOR_FACTION(&iParam0, 20);
		DECOR_SET_BOOL(&iParam0, "CanBeLasso", 1);
		SET_ANIMAL_CAN_ATTACK(&iParam0, 0);
	}
	Function_436(&(Local_1002[215]), &iLocal_1269, "DrunkGuy", 0, 0x5f5e100, 1);
	return;
}

void Function_547() //Position: 0x1E000 / 122880
{
	*(&iLocal_4 + 688[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DrunkGuy", 306, Vector(-2737,108f, 32,24866f, 4296,192f), Vector(0.0f, 145,5943f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 688[02]);
	SET_ACTOR_FACTION(&iLocal_4 + 688[02], 23);
	return;
}

void Function_548() //Position: 0x1E055 / 122965
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[13]), 1, 1, 1);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	return;
}

void Function_549() //Position: 0x1E085 / 123013
{
	if (!Function_644(bLocal_919))
	{
		return;
	}
	Function_469();
	Function_463();
	Function_459();
	Function_551(StackVal, "$/cutscene/GUN_01_CS02/GUN_01_CS02", &iLocal_1192, &fLocal_1193, *(&iLocal_4 + 1472[23]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
	Function_550(16);
	Function_515();
	return;
}

void Function_550(bool bParam0) //Position: 0x1E0F1 / 123121
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_99472 && bParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_99472 && bParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_99471);
	}
	return;
}

int Function_551(var uParam0, var uParam1, var uParam2, struct<2> Param3, bool bParam5, float fParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x1E124 / 123172
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_456(StackVal, &Global_54076, Param3, (&fParam6 + ((IntToFloat(Function_458()) * (&fParam7 - &fParam6)) * 0,5f))))
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
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
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
					Function_423(&uParam2);
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_552(&uParam2);
				CUTSCENE_MANAGER_RESUME_LOADING();
				uParam1 = 3;
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: preload cutscene was skipped, is cutscene missing or failed to load?");
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if (!Function_456(StackVal, &Global_54076, Param3, (&fParam7 + ((IntToFloat(Function_458()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_456(StackVal, &Global_54076, Param3, &fParam6))
	{
	}
	return 0;
}

void Function_552(int iParam0) //Position: 0x1E477 / 124023
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			Function_553(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, &iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var5, &Var7);
			Function_455(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_553(var uParam0, bool bParam1, struct<5>[] Param2) //Position: 0x1E4D8 / 124120
{
	int iVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= Param2)
		{
			if (IS_ACTOR_VALID(&(Param2[iVar05])))
			{
				if (GET_ACTOR_ENUM(&uParam0) == GET_ACTOR_ENUM(&(Param2[iVar05])))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bParam1), &(Param2[iVar05]));
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bParam1, &Param2[iVar05] + 8, &Var1);
					Param2[iVar05].f_20 = (StackVal + 180.0f);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bParam1, &Param2[iVar05] + 24, &Var1);
					Param2[iVar05].f_36 = (StackVal + 180.0f);
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_554() //Position: 0x1E576 / 124278
{
	float fVar0;
	bool bVar1;
	
	Function_588();
	switch (bLocal_919)
	{
		case 0x00000000:
			Function_372(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_228(8);
			Function_370(1);
			Function_370(256);
			Function_369(&iLocal_4 + 1208[0]);
			if (Function_300(&Local_830))
			{
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_367(&Local_830);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_587();
				Function_242(1);
			}
			else if (iLocal_1452)
			{
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_367(&Local_830);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_587();
				Function_242(1);
			}
			else
			{
				Function_584();
				Function_242(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_368(Global_46866[0])) && Function_583())
			{
				if (!IS_ACTOR_VALID(&iLocal_1269))
				{
					Function_547();
					Function_546(&iLocal_1269);
					Function_582();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1265, *(&iLocal_4 + 1472[53]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
				if (Function_332(&bLocal_1273, 1))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[103]), 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
				}
				Function_584();
				Function_242(2);
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x00000002:
			if (Function_361(&bLocal_1373) < 2.0f || (!iLocal_1452 && !Function_300(&Local_830)))
			{
				if (Function_300(&Local_830) || iLocal_1452)
				{
					Function_581();
					if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 1208[7]))
					{
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[1]);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[1]);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1208[1], 15);
					}
				}
				Function_466(1);
				Function_256(iLocal_918);
				Function_443(StackVal, Function_256(iLocal_918), iLocal_918, Global_46746[2], Function_258(iLocal_918), 0);
				Function_295(1.0f);
				Function_543(&bLocal_1397, 7.0f);
				Function_242(6);
			}
			break;
		
		case 0x00000006:
			if (Function_363(&bLocal_1425))
			{
				if (Function_361(&bLocal_1425) < 11.0f)
				{
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
					Function_398(&bLocal_1425);
				}
			}
			if (!Function_575())
			{
				Function_572();
				fVar0 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar0 < 60.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (!Function_532(3, 0, 1, 0))
				{
					Function_259("Gun01_ammoFail");
					bLocal_1451 = true;
				}
				else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[2]))
				{
					if (!iLocal_1457)
					{
						Function_231(0);
						GATEWAY_DISABLE(&bLocal_1371, 0);
						if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1371)))
						{
							ADD_BLIP_FOR_OBJECT(&bLocal_1371, 330, 0f, 2, 0);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_417("Gun01_bottleReturn", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
					else if (!iLocal_1458)
					{
						if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1265, 15.0f))
						{
							Function_571();
							iLocal_1458 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1457)
					{
						if (GATEWAY_UPDATE(&bLocal_1371))
						{
							HUD_CLEAR_OBJECTIVE();
							GATEWAY_DISABLE(&bLocal_1371, 1);
							Function_218(&bLocal_1371);
							Function_217(5, 0, 1);
							Function_231(1);
							iLocal_1457 = 0;
							if (iLocal_1433 >= 1)
							{
								iLocal_1433 = 1;
							}
						}
					}
					if (iLocal_1458)
					{
						iLocal_1458 = 0;
					}
					if (!Function_570())
					{
						if (iLocal_1433 == 0)
						{
							if (!HUD_IS_FADING())
							{
								Function_231(1);
								DISABLE_GAME_CAMERA_FOCUS();
								Function_569();
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								Function_243(&bLocal_1393);
								Function_243(&bLocal_1373);
								iLocal_1433 = 1;
							}
						}
						else if (iLocal_1433 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) < 10.0f)
							{
								Function_417("Gun01_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
								Function_243(&bLocal_1393);
								Function_243(&bLocal_1373);
								iLocal_1433 = 2;
							}
						}
						else if (iLocal_1433 == 2)
						{
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								Function_243(&bLocal_1373);
							}
							else if (Function_361(&bLocal_1373) < 1.0f)
							{
								Function_139("Gun01_obj01a_help", 10.0f, 1, 0, 2, 1, 0);
								Function_243(&bLocal_1393);
								Function_243(&bLocal_1373);
								iLocal_1433 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			if (!Function_575())
			{
				Function_572();
				fVar0 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar0 < 60.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (!Function_532(3, 0, 1, 0))
				{
					Function_259("Gun01_ammoFail");
					bLocal_1451 = true;
				}
				else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[2]))
				{
					if (!iLocal_1457)
					{
						Function_231(0);
						GATEWAY_DISABLE(&bLocal_1371, 0);
						ADD_BLIP_FOR_OBJECT(&bLocal_1371, 330, 0f, 2, 0);
						HUD_CLEAR_HELP();
						HUD_CLEAR_OBJECTIVE();
						Function_417("Gun01_bottleReturn", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
					else if (!iLocal_1458)
					{
						if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1265, 15.0f))
						{
							Function_571();
							iLocal_1458 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1457)
					{
						if (GATEWAY_UPDATE(&bLocal_1371))
						{
							HUD_CLEAR_OBJECTIVE();
							if (iLocal_1433 > 1)
							{
								Function_417("Gun01_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
							}
							GATEWAY_DISABLE(&bLocal_1371, 1);
							Function_218(&bLocal_1371);
							Function_217(5, 0, 1);
							Function_231(1);
							iLocal_1457 = 0;
							if (iLocal_1433 >= 1)
							{
								iLocal_1433 = 1;
							}
						}
					}
					if (iLocal_1458)
					{
						iLocal_1458 = 0;
					}
					if (iLocal_1433 == 0)
					{
						if (Function_361(&bLocal_1373) < 0,05f)
						{
							HUD_CLEAR_HELP();
							Function_139("Gun01_obj01b_help", 100.0f, 1, 0, 2, 1, 0);
							Function_243(&bLocal_1393);
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 1)
					{
						if (HUD_IS_SHOWING_HELP_TEXT())
						{
							Function_243(&bLocal_1373);
						}
						else if (Function_361(&bLocal_1373) < 0,05f)
						{
							Function_417("Gun01_obj01b", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_243(&bLocal_1393);
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 2)
					{
						if (Function_361(&bLocal_1373) < 20.0f)
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_139("Gun01_obj01b_help", 10.0f, 1, 0, 2, 1, 0);
								Function_243(&bLocal_1373);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000002E:
			if (!Function_568())
			{
				fVar0 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar0 < 60.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (!Function_532(3, 0, 1, 0))
				{
					Function_259("Gun01_ammoFail");
					bLocal_1451 = true;
				}
				else if (fVar0 < 25.0f)
				{
					if (!iLocal_1457)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_417("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else
				{
					if (iLocal_1457)
					{
						HUD_CLEAR_OBJECTIVE();
						if (iLocal_1433 > 2)
						{
							Function_417("Gun01_obj01c", 7,5f, 1, 2, 0, 0, 0, 0);
						}
						iLocal_1457 = 0;
					}
					if (iLocal_1433 == 0)
					{
						TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
						HUD_CLEAR_SMALL_TEXT();
						Function_567();
						Function_243(&bLocal_1373);
						iLocal_1433 = 1;
					}
					else if (iLocal_1433 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) < 10.0f)
						{
							CLEAR_AMBIENT_ALL_RESTRICTIONS();
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1265, &iLocal_4 + 1208[3]);
							AI_SET_NAV_ACTOR_WIDTH(&bLocal_1265, 0,5f);
							bVar1 = TASK_SEQUENCE_OPEN();
							TASK_STAND_STILL(false, 0,5f, 0, 0);
							TASK_FOLLOW_PATH(0, &iLocal_4 + 3200, 1, 1, 0, 1, 0);
							TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &iLocal_4 + 1472[63], 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar1);
							TASK_SEQUENCE_RELEASE(bVar1, 1);
							Function_566();
							Function_243(&bLocal_1373);
							iLocal_1433 = 2;
						}
					}
					else if (iLocal_1433 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_361(&bLocal_1373) < 4.0f)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_417("Gun01_obj01c", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_243(&bLocal_1373);
							iLocal_1433 = 3;
						}
					}
					else if (iLocal_1433 == 3)
					{
						if (!HUD_IS_SHOWING_OBJECTIVE() || Function_361(&bLocal_1373) < 4.0f)
						{
							Function_565();
							Function_243(&bLocal_1373);
							iLocal_1433 = 4;
						}
					}
				}
			}
			break;
		
		case 0x00000038:
			Function_541();
			if (!Function_564())
			{
				fVar0 = Function_418(&Global_54076, &bLocal_1265);
				if (fVar0 < 60.0f)
				{
					Function_259("Gunslinger_abandoned");
					bLocal_1451 = true;
				}
				else if (!Function_532(3, 0, 1, 0))
				{
					Function_259("Gun01_ammoFail");
					bLocal_1451 = true;
				}
				else if (fVar0 < 25.0f)
				{
					if (!iLocal_1457)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_417("Gunslinger_return", 7,5f, 0, 2, 0, 0, 0, 0);
						iLocal_1457 = 1;
					}
				}
				else if (iLocal_1457)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_417("Gun01_obj01c", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_1457 = 0;
				}
			}
			break;
		
		case 0x00000042:
			if (IS_PLAYER_DEADEYE(0))
			{
				CANCEL_DEADEYE();
			}
			if (Function_361(&bLocal_1373) < 1.0f)
			{
				GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3128));
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_261();
				if (IS_OBJECT_VALID(&iLocal_1299))
				{
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_1269, "gun01_drunk/taunt");
				}
				else
				{
					Function_466(0);
				}
				if (iLocal_1461)
				{
					Function_563();
					iLocal_1461 = 0;
				}
				else
				{
					Function_563();
				}
				Function_223(GET_BLIP_ON_OBJECT(&(Local_922[04])));
				Function_223(GET_BLIP_ON_OBJECT(&(Local_922[14])));
				Function_223(GET_BLIP_ON_OBJECT(&(Local_922[24])));
				Function_559(&uLocal_828, 0, &Global_54076, 1, 0, 0);
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				Function_242(67);
			}
			break;
		
		case 0x00000043:
			if (Function_361(&bLocal_1373) < 5.0f)
			{
				if (IS_OBJECT_VALID(&iLocal_1299))
				{
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_1269, "gun01_drunk/idle");
					AI_GOAL_LOOK_CLEAR(&iLocal_1269);
				}
				else
				{
					Function_466(0);
				}
				Function_558();
				Function_556();
				Function_242(68);
			}
			break;
		
		case 0x00000044:
			if (Function_361(&bLocal_1373) < 2.0f)
			{
				ALLOW_GAME_CAMERA_AUTO_CENTERING(iLocal_920, 2);
				ALLOW_GAME_CAMERA_AUTO_TILTING(iLocal_921, 2);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_243(&bLocal_1393);
				Function_242(6);
				iLocal_1433 = 1;
			}
			break;
		
		case 0x0000006A:
			Function_555();
			iLocal_1436[0] = 1;
			iLocal_918 = 2;
			Function_242(0);
			break;
	}
	return;
}

void Function_555() //Position: 0x1F060 / 127072
{
	int iVar0;
	
	if (DECOR_CHECK_EXIST(&bLocal_1265, "g1_bWalkToBank"))
	{
		DECOR_REMOVE(&bLocal_1265, "g1_WalkToBank");
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_922[iVar04].f_24 = 0;
		iVar0++;
	}
	Function_223(&bLocal_1289);
	Function_222(&bLocal_1371);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1265, true);
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	Function_229();
	Function_228(2097152);
	Function_180();
	return;
}

void Function_556() //Position: 0x1F0DD / 127197
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3128), "UseCase1", 4294967295, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	Function_557();
	DECOR_SET_BOOL(&Global_54076, "_EndTransition", 1);
	return;
}

void Function_557() //Position: 0x1F138 / 127288
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BottlesUp", "Gun01_BottlesUp", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x1F17F / 127359
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uVar0 = &Local_922[iVar14];
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
		Local_922[iVar14] = CREATE_PROP_IN_LAYOUT(&uLocal_828, Function_54(), "$/fragments/p_gen_bottle02x", *(&iLocal_4 + 2480[iVar13]), *(&iLocal_4 + 2480[iVar13] + 12), 0);
		*(&Local_922[iVar14] + 8) = GET_PROP_FROM_OBJECT(&(Local_922[iVar14]));
		Local_922[iVar14].f_24 = 0;
		SET_PHYSINST_FROZEN(&Local_922[iVar14] + 8, 1);
		iVar1++;
	}
	if (!iLocal_1467)
	{
		iLocal_1467 = 1;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			SET_PHYSINST_FROZEN(&Local_922[iVar14] + 8, 1);
			iVar1++;
		}
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[2]))
	{
		Function_231(1);
	}
	return;
}

var Function_559(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1F26C / 127596
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Gun01_Cutscene02", 2, 1);
	}
	Function_560(&uVar0, &uParam2);
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

void Function_560(var uParam0, int iParam1) //Position: 0x1F2F9 / 127737
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_562(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_561(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 1, &iParam1, "_EndTransition", 2, 0, 6.0f);
	return;
}

void Function_561(int iParam0) //Position: 0x1F367 / 127847
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2736,878f, 32,69702f, 4297,167f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,050893f, -0,019264f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_562(var uParam0) //Position: 0x1F3DC / 127964
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2736,591f, 32,86623f, 4297,462f));
	SET_CAMERASHOT_DIRECTION(StackVal, &uParam0, Vector(-0,022686f, 0,065344f, 0,997605f), 0);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_563() //Position: 0x1F44D / 128077
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun01_MissesBottles", "Gun01_MissesBottles", 0, 1, 1, 0, 1);
		Function_381(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_564() //Position: 0x1F49C / 128156
{
	if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1265, 8.0f))
	{
		return 0;
	}
	Function_242(106);
	return 1;
}

void Function_565() //Position: 0x1F4BE / 128190
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWayBirds_v1_AA1", "Gun01_BanterWayBirds_v1_AA1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWayBirds_v1_AA2", "Gun01_BanterWayBirds_v1_AA2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun01_BanterWayBirds_v1_AB", "Gun01_BanterWayBirds_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWayBirds_v1_AC1", "Gun01_BanterWayBirds_v1_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun01_BanterWayBirds_v1_AD", "Gun01_BanterWayBirds_v1_AD", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x1F62D / 128557
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_SetsOffTownSquare", "Gun01_SetsOffTownSquare", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_567() //Position: 0x1F684 / 128644
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_ShootsDeadEyeSuccess", "Gun01_ShootsDeadEyeSuccess", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_568() //Position: 0x1F6E1 / 128737
{
	if (!IS_ACTOR_IN_VOLUME(&bLocal_1265, &iLocal_4 + 1208[8]))
	{
		return 0;
	}
	Function_242(56);
	return 1;
}

void Function_569() //Position: 0x1F704 / 128772
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_GivesRevolver", "Gun01_GivesRevolver", 0, 1, 1, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_570() //Position: 0x1F753 / 128851
{
	if (!IS_PLAYER_DEADEYE(0))
	{
		return 0;
	}
	HUD_CLEAR_OBJECTIVE();
	Function_242(36);
	return 1;
}

void Function_571() //Position: 0x1F76C / 128876
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_RunsAwayBottles", "Gun01_RunsAwayBottles", 0, 2, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_572() //Position: 0x1F7BF / 128959
{
	if (Function_361(&bLocal_1397) < 7.0f)
	{
		if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&bLocal_1265, 1,3f, 0,5f))
		{
			Function_574();
			Function_243(&bLocal_1393);
			Function_243(&bLocal_1397);
		}
	}
	if (((IS_ACTOR_SHOOTING(&Global_54076) || IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_409()) || HUD_IS_SHOWING_HELP_TEXT())
	{
		Function_243(&bLocal_1393);
	}
	if (Function_361(&bLocal_1393) < 20.0f)
	{
		if (!IS_PLAYER_DEADEYE(0))
		{
			Function_573();
			Function_243(&bLocal_1393);
		}
	}
	return;
}

void Function_573() //Position: 0x1F82F / 129071
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_WaitJonBottles", "Gun01_WaitJonBottles", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_574() //Position: 0x1F880 / 129152
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun01_AssaultsRickBottle", "Gun01_AssaultsRickBottle", 0, 1, 0, 0, 1);
		Function_381(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_575() //Position: 0x1F8D9 / 129241
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Function_580();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_922[iVar04].f_24)
		{
			if (!IS_PHYSINST_VALID(&Local_922[iVar04] + 8))
			{
				Local_922[iVar04].f_24 = 1;
				Function_223(&(uLocal_1291[iVar0]));
				iVar1 = 1;
				Function_579(GET_WEAPON_IN_HAND(&Global_54076));
			}
			else if (HAS_PHYSINST_BROKEN_APART(&Local_922[iVar04] + 8))
			{
				Local_922[iVar04].f_24 = 1;
				Function_223(&(uLocal_1291[iVar0]));
				iVar1 = 1;
				SET_PHYSINST_FROZEN(&Local_922[iVar04] + 8, 0);
				uVar2 = Vector(0.0f, 0.0f, 1.0f);
				SET_PROP_ANGULAR_VELOCITY_DEGS(&Local_922[iVar04] + 8, &uVar2);
				Function_579(GET_WEAPON_IN_HAND(&Global_54076));
			}
		}
		iVar0++;
	}
	if (iVar1 || iLocal_1462)
	{
		Function_243(&bLocal_1385);
		return Function_578();
	}
	if (Function_577())
	{
		if (Function_361(&bLocal_1385) < 0,5f)
		{
			Function_576();
			return 1;
		}
	}
	return 0;
}

void Function_576() //Position: 0x1F9BF / 129471
{
	iLocal_920 = GET_GAME_CAMERA_AUTO_CENTERING_STATE(2);
	iLocal_921 = GET_GAME_CAMERA_AUTO_TILTING_STATE(2);
	ALLOW_GAME_CAMERA_AUTO_CENTERING(0, 2);
	ALLOW_GAME_CAMERA_AUTO_TILTING(0, 2);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_231(0);
	Function_243(&bLocal_1393);
	Function_242(66);
	return;
}

bool Function_577() //Position: 0x1F9FD / 129533
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_922[iVar04].f_24 == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_578() //Position: 0x1FA25 / 129573
{
	int iVar0;
	
	if (iLocal_1462)
	{
		CANCEL_DEADEYE();
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ENABLE_NAV_STICK_INPUT(0, 1);
		Function_234(1);
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		AI_STOP_IGNORING_ACTOR(&Global_54076);
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		Function_229();
		Function_228(2097152);
		HUD_CLEAR_HELP();
		Function_223(&bLocal_1289);
		Function_231(0);
		Function_217(5, 1, 1);
		Function_242(46);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Local_922[iVar04].f_24 = 0;
			iVar0++;
		}
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_922[iVar04].f_24 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1208[2]))
	{
		iLocal_1461 = 1;
		Function_576();
	}
	else
	{
		CANCEL_DEADEYE();
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ENABLE_NAV_STICK_INPUT(0, 1);
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		AI_STOP_IGNORING_ACTOR(&Global_54076);
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		Function_234(1);
		Function_229();
		Function_228(2097152);
		HUD_CLEAR_HELP();
		Function_223(&bLocal_1289);
		Function_231(0);
		Function_217(5, 1, 1);
		Function_242(46);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Local_922[iVar04].f_24 = 0;
			iVar0++;
		}
	}
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	return 1;
}

void Function_579(int iParam0) //Position: 0x1FB40 / 129856
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_89(49, 1, 0, 0);
			break;
	}
	iVar0 = (50 + iParam0);
	Function_89(iVar0, 1, 0, 0);
	return;
}

void Function_580() //Position: 0x1FB90 / 129936
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	
	uVar0 = GET_CURRENT_GRINGO(&iLocal_1269);
	if (IS_GRINGO_VALID(&uVar0))
	{
		Function_307(GET_OBJECT_FROM_GRINGO(&uVar0));
		Var1 = Function_307(GET_OBJECT_FROM_GRINGO(&uVar0));
		iVar3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var1, 0,25f, "p_gen_bottletequila02x", 1);
		if (IS_PHYSINST_VALID(&iVar3))
		{
			if (&iVar3 != &iLocal_1299)
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(&iVar3));
			}
		}
	}
	return;
}

void Function_581() //Position: 0x1FBFA / 130042
{
	bool bVar0;
	
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1265, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3128), "UseCase1", 4294967295, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1265, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1273, true);
	Function_222(&(uLocal_1303[0]));
	Function_222(&(uLocal_1303[1]));
	Function_222(&(uLocal_1303[2]));
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 5);
	AI_IGNORE_ACTOR(&Global_54076);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 5, 0);
	Function_234(0);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
	Function_391(&bLocal_1425);
	ENABLE_GAME_CAMERA_FOCUS(*(&iLocal_4 + 1912[23]), 9999,9f, 6, 0, 1, 1);
	Function_369(&iLocal_4 + 1208[0]);
	if (!iLocal_1454)
	{
		Function_558();
		iLocal_1454 = 1;
	}
	return;
}

void Function_582() //Position: 0x1FCD4 / 130260
{
	var uVar0;
	
	uVar0 = GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3120);
	if (Function_467(&uVar0, 1))
	{
		SNAP_ACTOR_TO_GRINGO(&iLocal_1269, GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&iLocal_1269, &uVar0, "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(&iLocal_1269, true);
	}
	else
	{
		LOG_ERROR("The drunk gringo is not valid! We are screwed!");
	}
	return;
}

int Function_583() //Position: 0x1FD62 / 130402
{
	Function_354(&iLocal_4 + 160, 306, 2, 0);
	Function_354(&iLocal_4 + 160, 1130, 2, 0);
	Function_354(&iLocal_4 + 160, 1128, 2, 0);
	Function_354(&iLocal_4 + 160, 1129, 2, 0);
	if (Function_321(&iLocal_4 + 160))
	{
		return 1;
	}
	return 0;
}

void Function_584() //Position: 0x1FDA9 / 130473
{
	SET_PLAYER_CAUSE_WEAPON_REACTIONS(&Global_54076, 0);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 0);
	ACTOR_START_FORCE_HOLSTER(&bLocal_1265, 0, 0);
	Function_586(10.0f);
	Function_198(2097152);
	if (!ACTOR_HAS_WEAPON(&Global_54076, 5))
	{
		Function_167(5, 1, 1);
	}
	_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 10000.0f, 1);
	bLocal_1371 = Function_585(&uLocal_828, "BottleHome", &iLocal_4 + 1208[2], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
	GATEWAY_DISABLE(&bLocal_1371, 1);
	Function_218(&bLocal_1371);
	AI_GOAL_LOOK_AT_ACTOR(&bLocal_1265, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair01", "p_gen_chair01x", *(&iLocal_4 + 2424[03]), *(&iLocal_4 + 2424[03] + 12), 0);
	CREATE_PROP_IN_LAYOUT(&uLocal_828, "Chair02", "p_gen_chair01x", *(&iLocal_4 + 2424[13]), *(&iLocal_4 + 2424[13] + 12), 0);
	iLocal_1459 = 1;
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_391(&bLocal_1393);
	Function_543(&bLocal_1389, 8.0f);
	iLocal_1460 = 1;
	Function_544();
	return;
}

var Function_585(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x1FEEB / 130795
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

void Function_586(var uParam0) //Position: 0x1FF7C / 130940
{
	if (Global_15862 < 0,1f)
	{
		return;
	}
	Global_15862 = uParam0;
	return;
}

void Function_587() //Position: 0x1FF94 / 130964
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[03]), 1, 1, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	return;
}

void Function_588() //Position: 0x1FFC4 / 131012
{
	if (!Function_644(bLocal_919))
	{
		return;
	}
	Function_469();
	Function_463();
	Function_459();
	Function_550(16);
	return;
}

void Function_589() //Position: 0x1FFE3 / 131043
{
	switch (bLocal_919)
	{
		case 0x00000000:
		case 0x00000006:
			Function_613(&Local_830, 1);
			uLocal_828 = CREATE_LAYOUT("Gun01_DynamicLayout");
			Function_612();
			Function_228(8);
			Function_370(1);
			Function_370(256);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_391(&bLocal_1373);
			if ((!Function_300(&Local_830) && Local_830.f_40 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GUN_01/GUN_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2733,88f, 32,72f, 4261,21f), -75,3f, 1, 1, 1);
				Global_99147 = 1;
				bLocal_919 = 8;
			}
			else
			{
				bLocal_919 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_243(&bLocal_1373);
				bLocal_919 = 8;
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x00000008:
			if (Function_596("$/cutscene/GUN_01/GUN_01", "$/cutscene/GUN_01_S/GUN_01_S", &iLocal_906, &Local_830, iLocal_918, 138284, 138088, 137686, 137392, 137127, 136809, 136792, 136771, 136728, 1, 2, 1, 2, 2))
			{
				Function_243(&bLocal_1373);
				bLocal_919 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_343())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_338();
				}
				Function_243(&bLocal_1373);
				bLocal_919 = 10;
			}
			else if (Function_361(&bLocal_1373) < 2.0f)
			{
				Function_243(&bLocal_1373);
			}
			break;
		
		case 0x0000000A:
			Function_592();
			iLocal_918 = 0;
			bLocal_919 = false;
			Function_590(&Local_830, &iLocal_918, &bLocal_919);
			switch (iLocal_918)
			{
				case 0x00000000:
					break;
				
				case 0x00000002:
					Function_245();
					break;
				
				case 0x00000003:
					Function_241();
					break;
				
				case 0x00000004:
					Function_240();
					break;
				
				case 0x00000065:
					Function_238();
					break;
			}
			break;
	}
	return;
}

void Function_590(int iParam0, var uParam1, var uParam2) //Position: 0x20226 / 131622
{
	if (Function_300(&iParam0))
	{
		uParam1 = Function_513(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			uParam2 = 0;
		}
		Function_591();
	}
	return;
}

void Function_591() //Position: 0x20262 / 131682
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

void Function_592() //Position: 0x202B3 / 131763
{
	if (Function_332(&bLocal_1265, 1))
	{
		RESET_ACTOR_GAITS(&bLocal_1265, 0);
		SET_CRIPPLE_ENABLE(&bLocal_1265, 0);
		SET_ACTOR_FACTION(&bLocal_1265, 20);
		TASK_PRIORITY_SET(&bLocal_1265, true);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1265, 0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1265, 0);
		AI_SET_ALLOWED_MOUNT_DIRECTIONS(&bLocal_1265, 2);
		SET_ACTOR_MAX_HEALTH(&bLocal_1265, 50.0f);
		SET_ANIMAL_CAN_ATTACK(&bLocal_1265, 0);
		SET_ACTOR_FACE_STYLE(&bLocal_1265, 2);
		UNK_0x99AFD2D1(&bLocal_1265, 1, 0);
		DECOR_SET_BOOL(&bLocal_1265, "Smoke_Quick_Exit", 1);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_1265, 0);
		Function_425(&bLocal_1265);
	}
	if (!IS_ACTOR_VALID(&bLocal_1275))
	{
		Function_595();
		bLocal_1275 = &iLocal_4 + 856[02];
		ACCESSORIZE_HORSE(&bLocal_1275, 3);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1275, 0.0f);
		DECOR_SET_BOOL(&bLocal_1275, "bNoInjuryEjection", 1);
		Function_436(&(Local_1002[115]), &bLocal_1275, "Gunslinger_horse", 0, 0x5f5e100, 1);
		TASK_STAND_STILL(&bLocal_1275, -1.0f, 1, 0);
	}
	SET_DISABLE_DEADEYE(0, 0);
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
	Function_593(&uLocal_948, &uLocal_828);
	Function_436(&(Local_1002[015]), &bLocal_1265, "Gunslinger", 0, 0x5f5e100, 1);
	uLocal_1253 = CREATE_EVENT_TRAP("DrunkTrapLeft", 5, &uLocal_828);
	EVENT_TRAP_ON_VOLUME(&uLocal_1253, &iLocal_4 + 1208[5]);
	uLocal_1255 = CREATE_EVENT_TRAP("DrunkTrapRight", 5, &uLocal_828);
	EVENT_TRAP_ON_VOLUME(&uLocal_1255, &iLocal_4 + 1208[4]);
	uLocal_1251 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	Function_243(&bLocal_1373);
	Function_391(&iLocal_1377);
	Function_391(&iLocal_1381);
	Function_391(&bLocal_1385);
	Function_543(&iLocal_1429, 8.0f);
	return;
}

int Function_593(struct<2>[] Param0) //Position: 0x2048B / 132235
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_594(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_594(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_594(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_594(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_594(struct<13> Param0) //Position: 0x20B64 / 133988
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

void Function_595() //Position: 0x20C33 / 134195
{
	*(&iLocal_4 + 856[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorse", 981, Vector(-2742,596f, 32,24027f, 4260,01f), Vector(0,1769326f, 54,14531f, 0,09853994f));
	TASK_STAND_STILL(&iLocal_4 + 856[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 856[02], 24);
	TASK_PRIORITY_SET(&iLocal_4 + 856[02], true);
	ACCESSORIZE_HORSE(&iLocal_4 + 856[02], 3);
	return;
}

bool Function_596(var uParam0, var uParam1, int iParam2, struct<41> Param3) //Position: 0x20CB4 / 134324
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_301(&iParam2, &uParam14);
	switch (iParam2)
	{
		case 0x000003E8:
			if (iParam4 != 99 && (Function_300(&Param3) || Param3.f_40 < 1))
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
				Function_243(&iParam2 + 4);
				iParam2 = 1002;
			}
			else if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_299())
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
					Function_243(&iParam2 + 4);
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
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_361(&iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam2 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_361(&iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_243(&iParam2 + 4);
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
						Function_295(1.0f);
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
				Function_243(&iParam2 + 4);
				iParam2 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_361(&iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam2 = 1105;
				return 0;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_361(&iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_295(1.0f);
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
					Function_293();
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
					Function_292(1, 1);
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
			if ((HUD_IS_FADED() && iParam4 == 99) && !Function_300(&Param3))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam2 = 1105;
			break;
	}
	return 0;
}

int Function_597() //Position: 0x21618 / 136728
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[03]), 1, 1, 1);
	iLocal_1452 = 1;
	return 1;
}

int Function_598() //Position: 0x21643 / 136771
{
	Function_313(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_599() //Position: 0x21658 / 136792
{
	if (!iLocal_1452)
	{
		Function_581();
	}
	return 1;
}

int Function_600() //Position: 0x21669 / 136809
{
	int iVar0;
	
	iVar0 = CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA();
	switch (iVar0)
	{
		case 0x00000000:
			FIRE_PROJECTILE(&Global_54076, "base_pistol", 0,0001f, &iLocal_4 + 2560[03], &iLocal_4 + 2560[13]);
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			Function_243(&bLocal_1373);
			break;
		
		case 0x00000001:
			FIRE_PROJECTILE(&Global_54076, "base_pistol", 0,0001f, &iLocal_4 + 2560[23], &iLocal_4 + 2560[33]);
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			Function_243(&bLocal_1373);
			break;
		
		case 0x00000002:
			FIRE_PROJECTILE(&Global_54076, "base_pistol", 0,0001f, &iLocal_4 + 2560[43], &iLocal_4 + 2560[53]);
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			Function_243(&bLocal_1373);
			break;
		
		case 0xFFFFFFFF:
			break;
		
		default:
			LOG_ERROR("Invalid cutscene event given!");
			CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			break;
	}
	if (!iLocal_1454)
	{
		if (Function_361(&bLocal_1373) < 10.0f)
		{
			Function_222(&(uLocal_1303[0]));
			Function_222(&(uLocal_1303[1]));
			Function_222(&(uLocal_1303[2]));
			Function_558();
			iLocal_1454 = 1;
		}
	}
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	return 1;
}

int Function_601() //Position: 0x217A7 / 137127
{
	if (!iLocal_1465)
	{
		if (Function_361(&bLocal_1373) < 0,5f)
		{
			Function_602();
		}
	}
	if (!iLocal_1466)
	{
		if (STREAMING_IS_ACTOR_LOADED(558, 4294967295))
		{
			GIVE_WEAPON_TO_ACTOR(&bLocal_1265, 5, false, 1, 1);
			iLocal_1466 = 1;
		}
	}
	return 1;
}

void Function_602() //Position: 0x217E7 / 137191
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (!IS_ACTOR_VALID(&bLocal_1267))
	{
		LOG_ERROR("ChickenStartPath called while chicken is invalid!");
	}
	GET_PATH_POINT(&iLocal_1311, false, &Var0);
	GET_PATH_POINT(&iLocal_1311, true, &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
	TELEPORT_ACTOR_WITH_HEADING(&bLocal_1267, Var0, UNK_0x9C40E671(&uVar4), 1, 1, 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1267, false);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1267, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1267, 0);
	AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1267, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&bLocal_1267, 0);
	if (ACTOR_IS_HIDDEN_BY_CUTSCENE(&bLocal_1267))
	{
		CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_1267);
	}
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1267, &iLocal_1311, 3, 1, 0, 0, false);
	iLocal_1465 = 1;
	return;
}

int Function_603() //Position: 0x218B0 / 137392
{
	if (STREAMING_IS_WORLD_LOADED() && Function_343())
	{
		uLocal_1303[0] = CREATE_PROP_IN_LAYOUT(&uLocal_828, "LeftCSBottle", "$/fragments/p_gen_bottle02x", *(&iLocal_4 + 2480[03]), *(&iLocal_4 + 2480[03] + 12), 0);
		uLocal_1303[1] = CREATE_PROP_IN_LAYOUT(&uLocal_828, "CenterCSBottle", "$/fragments/p_gen_bottle02x", *(&iLocal_4 + 2480[13]), *(&iLocal_4 + 2480[13] + 12), 0);
		uLocal_1303[2] = CREATE_PROP_IN_LAYOUT(&uLocal_828, "RightCSBottle", "$/fragments/p_gen_bottle02x", *(&iLocal_4 + 2480[23]), *(&iLocal_4 + 2480[23] + 12), 0);
		Function_243(&bLocal_1373);
		return 1;
	}
	if (Function_361(&bLocal_1373) < 2.0f)
	{
		Function_243(&bLocal_1373);
	}
	return 0;
}

int Function_604() //Position: 0x219D6 / 137686
{
	if ((((STREAMING_IS_WORLD_LOADED() && Function_343()) && Function_605()) && Function_368(Global_46866[0])) && Function_583())
	{
		Function_338();
		bLocal_1267 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 1016, Vector(-2725,604f, 32,68447f, 4258,396f), Vector(0.0f, 109,3097f, 0.0f));
		if (Function_332(&bLocal_1267, 1))
		{
			SET_ACTOR_INVULNERABILITY(&bLocal_1267, 1);
			AI_IGNORE_ACTOR(&bLocal_1267);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1267, false);
			TASK_STAND_STILL(&bLocal_1267, -1.0f, 1, 0);
		}
		Function_547();
		Function_546(&iLocal_1269);
		Function_582();
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1265, *(&iLocal_4 + 1472[53]), 1, 1, 1);
		TASK_STAND_STILL(&bLocal_1265, -1.0f, 0, 0);
		if (Function_332(&bLocal_1273, 1))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1273, *(&iLocal_4 + 1472[103]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1273, -1.0f, 0, 0);
		}
		if (!IS_ACTOR_VALID(&bLocal_1275))
		{
			Function_595();
			bLocal_1275 = &iLocal_4 + 856[02];
			ACCESSORIZE_HORSE(&bLocal_1275, 3);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1275, 0.0f);
			DECOR_SET_BOOL(&bLocal_1275, "bNoInjuryEjection", 1);
			Function_436(&(Local_1002[115]), &bLocal_1275, "Gunslinger_horse", 0, 0x5f5e100, 1);
			TASK_STAND_STILL(&bLocal_1275, -1.0f, 1, 0);
		}
		Function_243(&bLocal_1373);
		return 1;
	}
	if (Function_361(&bLocal_1373) < 2.0f)
	{
		Function_243(&bLocal_1373);
	}
	return 0;
}

int Function_605() //Position: 0x21B55 / 138069
{
	if (!Function_321(&iLocal_892))
	{
		return 0;
	}
	return 1;
}

int Function_606() //Position: 0x21B68 / 138088
{
	bool bVar0;
	
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 1472[03]), 1, 1, 1);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_828, "Cutscene01Vol02", 2,802597E-45f, Vector(-2741,321f, 32,145f, 4297,811f), Vector(0.0f, 61,878f, 0.0f), Vector(9,7f, 4,401f, 11,156f));
	Function_357(StackVal, &uLocal_828, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[7]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[1]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1208[1]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1208[1], 15);
	Function_243(&bLocal_1373);
	return 1;
}

int Function_607() //Position: 0x21C2C / 138284
{
	bool bVar0;
	
	Function_611();
	iLocal_1452 = 0;
	Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_828, "Cutscene01Vol01a", 2,802597E-45f, Vector(-2709,677f, 33,315f, 4248,861f), Vector(0.0f, 29,878f, 0.0f), Vector(51,535f, 4,401f, 20,311f));
	Function_357(StackVal, &uLocal_828, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	Function_608();
	Function_243(&bLocal_1373);
	return 1;
}

void Function_608() //Position: 0x21CB2 / 138418
{
	struct<2> Var0[33];
	struct<2> Var67;
	int iVar69;
	
	Var67 = Vector(0.0f, 0.0f, -1.0f);
	Var0[02] = Vector(17,42885f, 0,5794648f, 0,8136859f);
	Var0[12] = Vector(17,38322f, 0,6024109f, 0,6626224f);
	Var0[22] = Vector(17,31449f, 0,6115423f, 0,3895724f);
	Var0[32] = Vector(17,23024f, 0,6243848f, -0,02260362f);
	Var0[42] = Vector(17,23092f, 0,6368651f, -0,451795f);
	Var0[52] = Vector(17,21263f, 0,6521536f, -1,015109f);
	Var0[62] = Vector(17,0533f, 0,6572071f, -1,404063f);
	Var0[72] = Vector(16,77116f, 0,6555124f, -1,724398f);
	Var0[82] = Vector(16,65177f, 0,6385251f, -1,956773f);
	Var0[92] = Vector(16,70936f, 0,6734279f, -2,251606f);
	Var0[102] = Vector(16,9376f, 0,686588f, -2,586254f);
	Var0[112] = Vector(17,34337f, 0,7085953f, -2,980505f);
	Var0[122] = Vector(17,74304f, 0,7159209f, -3,379117f);
	Var0[132] = Vector(18,19065f, 0,7763395f, -4,414411f);
	Var0[142] = Vector(18,52858f, 0,8267609f, -5,047154f);
	Var0[152] = Vector(19,21733f, 0,8158041f, -5,524431f);
	Var0[162] = Vector(19,96884f, 0,8289587f, -5,918071f);
	Var0[172] = Vector(20,384f, 0,8332762f, -5,986698f);
	Var0[182] = Vector(20,85136f, 0,8225191f, -5,480697f);
	Var0[192] = Vector(21,07889f, 0,8099104f, -4,962402f);
	Var0[202] = Vector(21,27778f, 0,7887797f, -4,138159f);
	Var0[212] = Vector(21,18196f, 0,7893295f, -3,46963f);
	Var0[222] = Vector(20,01147f, 0,7286519f, -2,713439f);
	Var0[232] = Vector(19,17324f, 0,7402518f, -2,744792f);
	Var0[242] = Vector(18,43091f, 0,7626163f, -3,387514f);
	Var0[252] = Vector(18,04757f, 0,7645865f, -3,961611f);
	Var0[262] = Vector(17,80935f, 0,7886862f, -4,625106f);
	Var0[272] = Vector(17,98495f, 0,8130674f, -5,297006f);
	Var0[282] = Vector(18,5341f, 0,8424538f, -6,121916f);
	Var0[292] = Vector(18,79133f, 0,8665956f, -6,917522f);
	Var0[302] = Vector(18,60849f, 0,8870133f, -7,598661f);
	Var0[312] = Vector(18,38969f, 0,9041262f, -8,271118f);
	Var0[322] = Vector(18,54358f, 0,9334065f, -9,102202f);
	Function_610(&Var67, 32,5f);
	Var67 = Function_610(&Var67, 32,5f);
	iVar69 = 0;
	while (iVar69 <= Var0)
	{
		UNK_0x141201A3(StackVal, Vector(-2710,05f, 31,895f, 4243,7f), Var67, &(Var0[iVar692]));
		iVar69++;
	}
	iLocal_1311 = Function_609(&uLocal_828, &Var0);
	return;
}

int Function_609(var uParam0, struct<2>[] Param1) //Position: 0x21FFE / 139262
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = CREATE_PATH_IN_LAYOUT(&uParam0, Function_54(), Param1);
	iVar0 = 0;
	while (iVar0 < (Param1 - 1))
	{
		ADD_POINT_TO_PATH(&iVar1, Param1[iVar02]);
		iVar0++;
	}
	return &iVar1;
}

struct<8> Function_610(struct<2> Param0) //Position: 0x22041 / 139329
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

void Function_611() //Position: 0x2205B / 139355
{
	if (!Function_300(&Local_830))
	{
		Function_354(&iLocal_892, 1016, 3, 0);
	}
	return;
}

void Function_612() //Position: 0x22077 / 139383
{
	Function_327(&iLocal_842, "gun01", 10, 0);
	Function_327(&iLocal_842, "custom/stand_ambient", 8, 0);
	Function_327(&iLocal_842, "custom/hold_hostage", 8, 0);
	Function_327(&iLocal_842, "custom/comp_waiting", 8, 0);
	Function_327(&iLocal_842, "custom/holster_spin", 8, 0);
	Function_327(&iLocal_842, "dead_ground_male", 5, 0);
	Function_327(&iLocal_842, "hold_hostage_male", 5, 0);
	Function_327(&iLocal_842, "comp_waiting", 5, 0);
	Function_327(&iLocal_842, "gped_ptl", 5, 0);
	Function_327(&iLocal_842, "holster_spin", 5, 0);
	Function_327(&iLocal_842, "hold_hostage", 1, 0);
	Function_327(&iLocal_842, "p_gen_chair01x", 0, 0);
	Function_327(&iLocal_1488 + 8, "p_gen_sackMoney01x", 0, 0);
	Function_327(&iLocal_1488 + 8, "p_gen_crate07x", 0, 0);
	Function_327(&iLocal_1488 + 8, "p_gen_crate06x", 0, 0);
	REQUEST_ANIM_SET("smoking_stand_gped", 0);
	return;
}

void Function_613(int iParam0, bool bParam1) //Position: 0x22230 / 139824
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_619(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_300(&iParam0))
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
	if (!Function_300(&iParam0))
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
	Function_261();
	Function_294();
	Function_259("");
	Function_618(0);
	Function_617();
	Function_206();
	Function_205();
	ENABLE_JOURNAL_REPLAY(0);
	Function_616();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_304(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_373(0, 0x40400000);
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
	Function_615(13);
	Function_615(14);
	Function_615(25);
	Function_615(24);
	Function_615(12);
	Function_615(27);
	Function_615(26);
	Function_615(15);
	Function_614();
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

void Function_614() //Position: 0x22670 / 140912
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

void Function_615(int iParam0) //Position: 0x226F5 / 141045
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_616() //Position: 0x22715 / 141077
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

void Function_617() //Position: 0x2275B / 141147
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_618(int iParam0) //Position: 0x22771 / 141169
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_209())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_619(int iParam0, int iParam1) //Position: 0x227AA / 141226
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
			Function_620(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_620(struct<113> Param0) //Position: 0x22831 / 141361
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

void Function_621() //Position: 0x2288F / 141455
{
	return;
}

bool Function_622(struct<25> Param0) //Position: 0x22895 / 141461
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
			Function_623(&Param0, 1);
			return 1;
		}
	}
	Function_623(&Param0, 0);
	return 0;
}

void Function_623(struct<25> Param0) //Position: 0x22921 / 141601
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

bool Function_624(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2294C / 141644
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
		Function_623(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_643(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_642(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_642(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_628(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_623(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_627(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_626(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_627(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_625(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_259(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_626(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_623(&Param2, 0);
	return 0;
}

void Function_625(char* cParam0) //Position: 0x22D62 / 142690
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

void Function_626(struct<25> Param0) //Position: 0x22E56 / 142934
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

void Function_627(bool bParam0) //Position: 0x22ECE / 143054
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_628(struct<57> Param0) //Position: 0x22EF2 / 143090
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
			return Function_639(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_632(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_639(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_629(&Param0, bVar2);
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
						bVar2 = Function_639(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_629(&Param0, bVar2);
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

var Function_629(int iParam0, bool bParam1) //Position: 0x23063 / 143459
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
				bParam1 = Function_631(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_630(16);
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
				bParam1 = Function_631(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_630(256);
			}
		}
	}
	return bParam1;
}

bool Function_630(int iParam0) //Position: 0x2319F / 143775
{
	return 2 | iParam0;
}

int Function_631(int iParam0) //Position: 0x231A9 / 143785
{
	return 4 | iParam0;
}

int Function_632(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x231B3 / 143795
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
				iParam3 = Function_638(&iParam0, &iParam1, bParam4);
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
			return Function_630(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_633(&iParam0, &iParam1, 0, bParam4);
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
			return Function_630(16);
		}
	}
	return 0;
}

int Function_633(int iParam0, vector3 vParam1) //Position: 0x2326E / 143982
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_637(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_636(iVar0, 3, 1, bParam3))
			{
				if (!Function_642(&iParam0, 8, 1))
				{
					return Function_635(64, 1024, bParam2);
				}
			}
			return Function_634(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_636(iVar0, 2, 1, bParam3))
			{
				if (!Function_642(&iParam0, 32, 1))
				{
					return Function_635(64, 1024, bParam2);
				}
			}
			return Function_634(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_636(iVar0, 1, 1, bParam3))
			{
				if (!Function_642(&iParam0, 64, 1))
				{
					return Function_635(64, 1024, bParam2);
				}
			}
			return Function_634(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_636(iVar0, 3, 1, bParam3))
			{
				if (!Function_642(&iParam0, 128, 1))
				{
					return Function_635(64, 1024, bParam2);
				}
			}
			return Function_634(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_636(iVar0, 1, 1, bParam3))
			{
				if (!Function_642(&iParam0, 1024, 1))
				{
					return Function_635(64, 1024, bParam2);
				}
			}
			return Function_634(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_636(iVar0, 1, 1, bParam3))
			{
				if (!Function_642(&iParam0, 1024, 1))
				{
					return Function_635(64, 1024, bParam2);
				}
			}
			return Function_634(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_634(int iParam0, int iParam1, bool bParam2) //Position: 0x23436 / 144438
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_635(int iParam0, int iParam1, bool bParam2) //Position: 0x2344B / 144459
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_636(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x23460 / 144480
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_637(int iParam0) //Position: 0x2347D / 144509
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

int Function_638(var uParam0, vector3 vParam1) //Position: 0x234F0 / 144624
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_637(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_636(iVar0, 3, 1, bParam2))
			{
				if (!Function_642(&uParam0, 8, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000009:
			if (Function_636(iVar0, 3, 1, bParam2))
			{
				if (!Function_642(&uParam0, 8, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x0000006E:
			if (Function_636(iVar0, 2, 1, bParam2))
			{
				if (!Function_642(&uParam0, 16, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x0000005B:
			if (Function_636(iVar0, 2, 1, bParam2))
			{
				if (!Function_642(&uParam0, 32, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000031:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&uParam0, 64, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000007:
			if (Function_636(iVar0, 3, 1, bParam2))
			{
				if (!Function_642(&uParam0, 128, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000008:
			if (Function_636(iVar0, 2, 1, bParam2))
			{
				if (!Function_642(&uParam0, 256, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000014:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&uParam0, 512, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000018:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&uParam0, 512, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000057:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&uParam0, 1024, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000058:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&uParam0, 1024, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_639(struct<65> Param0) //Position: 0x23719 / 145177
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
						return Function_638(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_642(&Param0, 2, 1))
					{
						return Function_631(8);
					}
					return Function_630(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_642(&Param0, 4, 1))
					{
						return Function_631(16);
					}
					return Function_630(16);
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
							return Function_633(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_642(&Param0, 2, 1))
						{
							return Function_631(128);
						}
						return Function_630(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_642(&Param0, 4, 1))
						{
							return Function_631(256);
						}
						return Function_630(256);
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
						return Function_633(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_642(&Param0, 2, 1))
					{
						return Function_631(8);
					}
					return Function_630(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_642(&Param0, 4, 1))
					{
						return Function_631(16);
					}
					return Function_630(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_641(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_642(&Param0, 2, 1))
					{
						return Function_631(8);
					}
					return Function_630(8);
				}
				if (!Function_642(&Param0, 4, 1))
				{
					return Function_631(16);
				}
				return Function_630(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_633(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_640(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_630(128);
							}
							if (!Function_642(&Param0, 2, 1))
							{
								return Function_631(8);
							}
							return Function_630(8);
						}
						if (iParam4 == 2)
						{
							if (Function_640(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_630(256);
							}
							if (!Function_642(&Param0, 4, 1))
							{
								return Function_631(16);
							}
							return Function_630(16);
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

bool Function_640(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x239FF / 145919
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

int Function_641(int iParam0, vector3 vParam1) //Position: 0x23ACD / 146125
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_637(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_636(iVar0, 2, 1, bParam2))
			{
				if (!Function_642(&iParam0, 16, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x0000005B:
			if (Function_636(iVar0, 2, 1, bParam2))
			{
				if (!Function_642(&iParam0, 32, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000057:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&iParam0, 1024, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		case 0x00000058:
			if (Function_636(iVar0, 1, 1, bParam2))
			{
				if (!Function_642(&iParam0, 1024, 1))
				{
					return Function_631(64);
				}
			}
			return Function_630(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_642(struct<69> Param0) //Position: 0x23BEF / 146415
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

int Function_643(int iParam0) //Position: 0x23C19 / 146457
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

bool Function_644(bool bParam0) //Position: 0x23C4F / 146511
{
	switch (bParam0)
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

void Function_645(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x23C86 / 146566
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

