//Decompiled with MagicRDR v1.0
//Function Count : 686
//Statics Count : 1655
//Natives Count : 774
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 1;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 7;
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
	var uLocal_42 = 14;
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
	var uLocal_100 = 14;
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
	var uLocal_158 = 7;
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
	var uLocal_188 = 7;
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
	var uLocal_218 = 1;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 4;
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
	var uLocal_246 = 3;
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
	var uLocal_262 = 4;
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
	var uLocal_282 = 5;
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
	var uLocal_306 = 2;
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
	var uLocal_318 = 2;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 4;
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
	var uLocal_338 = 6;
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
	var uLocal_354 = 6;
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
	var uLocal_370 = 8;
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
	var uLocal_390 = 8;
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
	var uLocal_470 = 6;
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
	var uLocal_486 = 4;
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
	var uLocal_498 = 4;
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
	var uLocal_510 = 4;
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
	var uLocal_522 = 4;
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
	var uLocal_534 = 4;
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
	var uLocal_546 = 4;
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
	var uLocal_558 = 4;
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
	var uLocal_570 = 7;
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
	var uLocal_588 = 7;
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
	var uLocal_606 = 3;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 6;
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
	var uLocal_632 = 5;
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
	int iLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 1;
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
	int iLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	int iLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 3;
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
	int iLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 2;
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
	int iLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 5;
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
	int iLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	struct<6> Local_878 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	int iLocal_890 = 16;
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
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
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
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	bool bLocal_978 = false;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	bool bLocal_981 = false;
	var uLocal_982 = 0;
	bool bLocal_983 = false;
	var uLocal_984 = 0;
	int iLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	int iLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	float fLocal_993 = 0.0f;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	int iLocal_997[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_1017 = false;
	bool bLocal_1018 = false;
	bool bLocal_1019 = false;
	int iLocal_1020 = 0;
	var uLocal_1021 = 13;
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
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	struct<15> Local_1075[9];
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 5;
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
	var uLocal_1245 = 5;
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
	var uLocal_1275 = 5;
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
	var uLocal_1305 = 5;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 5;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	bool bLocal_1355 = false;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	int iLocal_1359 = 0;
	int iLocal_1360 = 0;
	int iLocal_1361 = 0;
	int iLocal_1362 = 0;
	int iLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	int iLocal_1366 = 0;
	bool bLocal_1367 = false;
	bool bLocal_1368 = false;
	bool bLocal_1369 = false;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	bool bLocal_1372 = false;
	int iLocal_1373 = 0;
	bool bLocal_1374 = false;
	bool bLocal_1375 = false;
	bool bLocal_1376 = false;
	int iLocal_1377 = 6;
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
	int iLocal_1391 = 0;
	var uLocal_1392 = 0;
	bool bLocal_1393 = false;
	var uLocal_1394 = 0;
	bool bLocal_1395 = false;
	var uLocal_1396 = 0;
	bool bLocal_1397 = false;
	var uLocal_1398 = 0;
	int iLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	struct<2> Local_1409 = { 0, 0 } ;
	var uLocal_1411 = 0;
	struct<2> Local_1412 = { 0, 0 } ;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	bool bLocal_1418 = false;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	struct<2> Local_1421 = { 0, 0 } ;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	struct<5> Local_1430 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1435 = 0;
	float fLocal_1436 = 0.0f;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	int iLocal_1445 = 0;
	int iLocal_1446 = 0;
	bool bLocal_1447 = false;
	bool bLocal_1448 = false;
	int iLocal_1449[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	int iLocal_1461 = 0;
	int iLocal_1462 = 0;
	int iLocal_1463 = 0;
	bool bLocal_1464 = false;
	int iLocal_1465 = 0;
	int iLocal_1466 = 0;
	int iLocal_1467 = 0;
	int iLocal_1468 = 0;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471[4] = { 0, 0, 0, 0 };
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497[2] = { 0, 0 };
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	int iLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	int iLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	int iLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	int iLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	int iLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	int iLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	int iLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	int iLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	int iLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	int iLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	int iLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	int iLocal_1547 = 0;
	var uLocal_1548 = 0;
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
	var uLocal_1559[2] = { 0, 0 };
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	int iLocal_1565 = 0;
	var uLocal_1566 = 0;
	struct<149> Local_1567 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_878 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_976 = 99;
	iLocal_977 = 6;
	iLocal_964 = 1000;
	while (Function_283())
	{
		Function_237();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	var uVar0;
	var uVar2;
	bool bVar4;
	
	SET_ALLOW_RIDE_BY_AI(&bLocal_983, 1);
	CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
	uVar0 = Vector(-77,638f, 117,517f, 1417,121f);
	uVar2 = Vector(-0,857f, 129,9f, 1444,653f);
	bVar4 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(0, &uVar0, 4);
	TASK_DISMOUNT(0, 1);
	TASK_GO_TO_COORD(0, &uVar2, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_981, bVar4);
	TASK_SEQUENCE_RELEASE(bVar4, 1);
	Function_235(13, 0, 1, 1, 1);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_981);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_983);
	Function_235(12, 0, 0, 1, 1);
	Function_235(11, 0, 0, 1, 1);
	Function_234(&uLocal_876);
	Function_234(&iLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_233();
	Function_232();
	Function_203(bLocal_1018, 1, 0, 1, 1, 1, 1, 1);
	Function_199(2, 0, 0);
	Function_177();
	Function_173(&iLocal_890);
	Function_171();
	if (IS_ITERATOR_VALID(&uLocal_979))
	{
		DESTROY_ITERATOR(&uLocal_979);
	}
	RELEASE_LAYOUT_REF(&uLocal_876);
	if (bLocal_1017)
	{
		Function_26(Local_878, 1, 1, 1, 0);
	}
	else if (bLocal_1018)
	{
		Function_22(Local_878);
	}
	else
	{
		Function_2(Local_878);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x163 / 355
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x184 / 388
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1A1 / 417
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1C4 / 452
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x1DB / 475
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

void Function_7(int iParam0) //Position: 0x27D / 637
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x2A0 / 672
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

void Function_9() //Position: 0x2EA / 746
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x303 / 771
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

void Function_11(var uParam0, int iParam1) //Position: 0x356 / 854
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

struct<16> Function_12(int iParam0) //Position: 0x480 / 1152
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

bool Function_13() //Position: 0x4BA / 1210
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x4D5 / 1237
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x4E2 / 1250
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x502 / 1282
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x519 / 1305
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x534 / 1332
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x77B / 1915
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x7A7 / 1959
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

bool Function_21(int iParam0) //Position: 0x7CB / 1995
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x7E0 / 2016
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x7FE / 2046
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

struct<16> Function_24(int iParam0) //Position: 0x8A4 / 2212
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

struct<24> Function_25(char* cParam0) //Position: 0x8E3 / 2275
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB39 / 2873
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

void Function_27() //Position: 0xC2D / 3117
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

int Function_28(int iParam0, bool bParam1) //Position: 0xC5F / 3167
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

int Function_29(int iParam0) //Position: 0xC9D / 3229
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xCB7 / 3255
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xCCD / 3277
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xFCA / 4042
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

void Function_33(char* cParam0) //Position: 0x103F / 4159
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1079 / 4217
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

bool Function_35(var uParam0, int iParam1) //Position: 0x10F5 / 4341
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1108 / 4360
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

int Function_37(int iParam0) //Position: 0x11A9 / 4521
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x11E6 / 4582
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11FC / 4604
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x145A / 5210
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1498 / 5272
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

void Function_42(bool bParam0) //Position: 0x14D7 / 5335
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

void Function_43() //Position: 0x152C / 5420
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

void Function_44() //Position: 0x1577 / 5495
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

void Function_45() //Position: 0x167D / 5757
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

void Function_46() //Position: 0x16B0 / 5808
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

void Function_47() //Position: 0x1843 / 6211
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

void Function_48() //Position: 0x19FC / 6652
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1A0A / 6666
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

bool Function_50() //Position: 0x1C27 / 7207
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1C3C / 7228
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CE3 / 7395
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F7F / 8063
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

var Function_54() //Position: 0x25BD / 9661
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x25C6 / 9670
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25D7 / 9687
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

struct<32> Function_57(char* cParam0) //Position: 0x26CE / 9934
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26E9 / 9961
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2750 / 10064
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2762 / 10082
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2774 / 10100
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

int Function_62(int iParam0) //Position: 0x28A8 / 10408
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x28B7 / 10423
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x28F0 / 10480
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x292D / 10541
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AC7 / 10951
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

int Function_67(bool bParam0) //Position: 0x2D0B / 11531
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2D4C / 11596
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

struct<8> Function_69() //Position: 0x2DD5 / 11733
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

struct<8> Function_70() //Position: 0x2E6C / 11884
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

void Function_71() //Position: 0x2EEB / 12011
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2F28 / 12072
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

void Function_73() //Position: 0x3134 / 12596
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

bool Function_74(char* cParam0) //Position: 0x31EB / 12779
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3203 / 12803
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

struct<8> Function_76() //Position: 0x32FB / 13051
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3305 / 13061
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3316 / 13078
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x332C / 13100
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x33F8 / 13304
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3415 / 13333
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

bool Function_82(int iParam0) //Position: 0x3C41 / 15425
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C7C / 15484
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3C8B / 15499
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

bool Function_85(int iParam0) //Position: 0x4168 / 16744
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x417E / 16766
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x419D / 16797
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x41B7 / 16823
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4221 / 16929
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

void Function_90(int iParam0) //Position: 0x4449 / 17481
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

void Function_91() //Position: 0x44E7 / 17639
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

void Function_92() //Position: 0x4649 / 17993
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

int Function_93(int iParam0, char* cParam1) //Position: 0x46C9 / 18121
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4A20 / 18976
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

int Function_95(int iParam0) //Position: 0x4AA8 / 19112
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4AC2 / 19138
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4AED / 19181
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4B1B / 19227
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4DB7 / 19895
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F8B / 20363
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

int Function_101(int iParam0, char* cParam1) //Position: 0x51F5 / 20981
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

int Function_102() //Position: 0x5385 / 21381
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

void Function_103() //Position: 0x5426 / 21542
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

void Function_104(int iParam0) //Position: 0x54E4 / 21732
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

var Function_105(int iParam0) //Position: 0x554A / 21834
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

int Function_106(int iParam0, bool bParam1) //Position: 0x55D9 / 21977
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

var Function_107(int iParam0, int iParam1) //Position: 0x5785 / 22405
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

void Function_108() //Position: 0x57CA / 22474
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x57E0 / 22496
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5820 / 22560
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5860 / 22624
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x586F / 22639
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

int Function_113(int iParam0) //Position: 0x5A37 / 23095
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

var Function_114() //Position: 0x5ACC / 23244
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5AF1 / 23281
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5FC0 / 24512
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

var Function_117(int iParam0) //Position: 0x62E7 / 25319
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x638A / 25482
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6587 / 25991
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6732 / 26418
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6804 / 26628
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

void Function_122(int iParam0) //Position: 0x711F / 28959
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x729C / 29340
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x73A7 / 29607
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x73D3 / 29651
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

var Function_126(vector3 vParam0) //Position: 0x742A / 29738
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

void Function_127(var uParam0, int iParam1) //Position: 0x7478 / 29816
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x74D3 / 29907
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

void Function_129() //Position: 0x7674 / 30324
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x767A / 30330
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7729 / 30505
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x777E / 30590
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7794 / 30612
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

bool Function_134(int iParam0, int iParam1) //Position: 0x77E5 / 30693
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

void Function_135(var uParam0, int iParam1) //Position: 0x7812 / 30738
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7823 / 30755
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x783D / 30781
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x784E / 30798
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

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x79AA / 31146
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

bool Function_140() //Position: 0x7A35 / 31285
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7A62 / 31330
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

int Function_142(int iParam0) //Position: 0x7C12 / 31762
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7C69 / 31849
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

var Function_144(int iParam0) //Position: 0x7C8E / 31886
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7CE4 / 31972
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

bool Function_146(bool bParam0) //Position: 0x7D43 / 32067
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7D4F / 32079
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D6B / 32107
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

bool Function_149() //Position: 0x7DBD / 32189
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7DED / 32237
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

int Function_151(int iParam0, int iParam1) //Position: 0x7E62 / 32354
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7EBF / 32447
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

int Function_153(int iParam0, int iParam1) //Position: 0x7F32 / 32562
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F8D / 32653
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x824F / 33359
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

void Function_156(int iParam0, bool bParam1) //Position: 0x84EE / 34030
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

void Function_157() //Position: 0x855D / 34141
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

int Function_158(int iParam0, int iParam1) //Position: 0x85DD / 34269
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

int Function_159(int iParam0) //Position: 0x9240 / 37440
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x9255 / 37461
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

void Function_161(var uParam0, int iParam1) //Position: 0x92A4 / 37540
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x92FC / 37628
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

bool Function_163(int iParam0, int iParam1) //Position: 0x936F / 37743
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9383 / 37763
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

var Function_165(int iParam0) //Position: 0x9474 / 38004
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

bool Function_166(var uParam0, int iParam1) //Position: 0x94CC / 38092
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x94E9 / 38121
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

bool Function_168(int iParam0) //Position: 0x9543 / 38211
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x9555 / 38229
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

void Function_170(struct<185> Param0) //Position: 0x9589 / 38281
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
			Function_199(4, 0, 0);
		}
	}
	return;
}

void Function_171() //Position: 0x95F4 / 38388
{
	Function_172();
	return;
}

void Function_172() //Position: 0x95FD / 38397
{
	Function_173(&iLocal_4 + 8);
	Function_173(&iLocal_4 + 32);
	Function_173(&iLocal_4 + 152);
	Function_173(&iLocal_4 + 384);
	Function_173(&iLocal_4 + 616);
	Function_173(&iLocal_4 + 736);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_173(int iParam0) //Position: 0x9636 / 38454
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

void Function_174(struct<2>[] Param0, int iParam1) //Position: 0x965E / 38494
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

void Function_175(struct<13> Param0) //Position: 0x97A9 / 38825
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_176(struct<13> Param0) //Position: 0x97C6 / 38854
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_177() //Position: 0x97E4 / 38884
{
	AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
	UI_HIDE("RacePosition");
	Function_196(13, 0, 1);
	DECOR_REMOVE(&Global_54076, "herding");
	Function_195();
	Function_194();
	Function_193();
	Function_192();
	Function_191();
	if (IS_BLIP_VALID(&uLocal_1403))
	{
		REMOVE_BLIP(&uLocal_1403);
	}
	REMOVE_OBJECT_ATTACHMENT(&uLocal_1483);
	Function_190(&uLocal_1497);
	Function_190(&uLocal_1485);
	if (IS_OBJECT_VALID(&Local_1567 + 8))
	{
		DESTROY_OBJECT(&Local_1567 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1567))
	{
		DESTROY_OBJECT(&Local_1567);
	}
	if (IS_OBJECT_VALID(&uLocal_1405))
	{
		Function_189();
		DESTROY_OBJECT(&uLocal_1405);
	}
	if (IS_ACTOR_VALID(&iLocal_1391))
	{
		DESTROY_ACTOR(&iLocal_1391);
	}
	if (IS_ACTOR_VALID(&bLocal_1393))
	{
		RELEASE_ACTOR(&bLocal_1393);
	}
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_981, false);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 64))
	{
		Function_187(&Local_1567 + 64, 0, 0);
		RELEASE_OBJECT_REF(&Local_1567 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 72))
	{
		Function_187(&Local_1567 + 72, 0, 0);
		RELEASE_OBJECT_REF(&Local_1567 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 80))
	{
		Function_187(&Local_1567 + 80, 0, 0);
		RELEASE_OBJECT_REF(&Local_1567 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 88))
	{
		Function_187(&Local_1567 + 88, 0, 0);
		RELEASE_OBJECT_REF(&Local_1567 + 88);
	}
	if (IS_OBJECT_VALID(&uLocal_1481))
	{
		DESTROY_OBJECT(&uLocal_1481);
	}
	if (IS_OBJECT_VALID(&(Local_1615[02])))
	{
		Function_178();
	}
	return;
}

void Function_178() //Position: 0x9957 / 39255
{
	TRAIN_RELEASE_TRAIN(iLocal_1365, 200.0f);
	Function_180();
	Function_179(&Local_1615);
	return;
}

void Function_179(struct<2>[] Param0) //Position: 0x9971 / 39281
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_VOLUME_VALID(&Param0[iVar02] + 8))
		{
			DESTROY_VOLUME(&Param0[iVar02] + 8);
		}
		iVar0++;
	}
	return;
}

void Function_180() //Position: 0x99AB / 39339
{
	if (IS_LAYOUTREF_VALID(&iLocal_754))
	{
		Function_186();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_770))
	{
		Function_185();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_774))
	{
		Function_184();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_798))
	{
		Function_183();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_834))
	{
		Function_182();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_872))
	{
		Function_181();
	}
	return;
}

void Function_181() //Position: 0x99FF / 39423
{
	RELEASE_LAYOUT_REF(&iLocal_872);
	return;
}

void Function_182() //Position: 0x9A0C / 39436
{
	Function_173(&iLocal_834 + 8);
	RELEASE_LAYOUT_REF(&iLocal_834);
	return;
}

void Function_183() //Position: 0x9A21 / 39457
{
	Function_173(&iLocal_798 + 8);
	RELEASE_LAYOUT_REF(&iLocal_798);
	return;
}

void Function_184() //Position: 0x9A36 / 39478
{
	Function_173(&iLocal_774 + 8);
	RELEASE_LAYOUT_REF(&iLocal_774);
	return;
}

void Function_185() //Position: 0x9A4B / 39499
{
	RELEASE_LAYOUT_REF(&iLocal_770);
	return;
}

void Function_186() //Position: 0x9A58 / 39512
{
	Function_173(&iLocal_754 + 8);
	RELEASE_LAYOUT_REF(&iLocal_754);
	return;
}

void Function_187(var uParam0, bool bParam1, bool bParam2) //Position: 0x9A6D / 39533
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
				if (!Function_188(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x9AF6 / 39670
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_189() //Position: 0x9B16 / 39702
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

void Function_190(var[] uParam0) //Position: 0x9B41 / 39745
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (IS_ATTACHMENT_VALID(&(uParam0[iVar0])))
		{
			REMOVE_OBJECT_ATTACHMENT(&(uParam0[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_191() //Position: 0x9B77 / 39799
{
	Function_173(&iLocal_4 + 736);
	return;
}

void Function_192() //Position: 0x9B85 / 39813
{
	Function_173(&iLocal_4 + 616);
	return;
}

void Function_193() //Position: 0x9B93 / 39827
{
	Function_173(&iLocal_4 + 384);
	return;
}

void Function_194() //Position: 0x9BA1 / 39841
{
	Function_173(&iLocal_4 + 152);
	return;
}

void Function_195() //Position: 0x9BAE / 39854
{
	Function_173(&iLocal_4 + 32);
	return;
}

void Function_196(int iParam0, bool bParam1, bool bParam2) //Position: 0x9BBB / 39867
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
						Function_198(&uVar1);
					}
				}
				Function_197(&uVar0);
			}
		}
	}
	return;
}

void Function_197(bool bParam0) //Position: 0x9CCA / 40138
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

void Function_198(int iParam0) //Position: 0x9CFD / 40189
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

void Function_199(int iParam0, int iParam1, int iParam2) //Position: 0x9D30 / 40240
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_200(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_200(bool bParam0, int iParam1, bool bParam2) //Position: 0x9E1A / 40474
{
	int iVar0;
	
	Function_202(bParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, &iParam1);
	Function_201();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
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

void Function_201() //Position: 0x9F99 / 40857
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_202(bool bParam0) //Position: 0x9FA5 / 40869
{
	switch (bParam0)
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

void Function_203(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9FEB / 40939
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_231());
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
	Function_189();
	CLEAR_PRINTED_OBJECTIVE();
	Function_230();
	Function_228(0);
	Function_227();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_226();
	Function_225();
	Function_189();
	ENABLE_JOURNAL_REPLAY(1);
	Function_224(1);
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
		Function_223(&Global_54076);
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
	Function_220(Global_42825);
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
	Function_219();
	Function_218(1178687);
	Function_216(33039);
	Function_215(0x218003f);
	Function_214(4194560);
	Function_213();
	Function_212();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_209(0, 1, 1);
	}
	else
	{
		Function_209(0, 1, 1);
	}
	Function_208();
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
	Function_204();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_204() //Position: 0xA1F7 / 41463
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
		if (Function_207() > 3)
		{
			bVar0 *= 2;
		}
		Function_205(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA24E / 41550
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_206(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_206(bool bParam0) //Position: 0xA29E / 41630
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_207() //Position: 0xA2C7 / 41671
{
	return Global_21369.f_248;
}

void Function_208() //Position: 0xA2D2 / 41682
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

void Function_209(int iParam0, bool bParam1, int iParam2) //Position: 0xA2FC / 41724
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
			Function_210(Global_43789);
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

void Function_210(int iParam0) //Position: 0xA408 / 41992
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_211())
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

bool Function_211() //Position: 0xA487 / 42119
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

void Function_212() //Position: 0xA4F0 / 42224
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

void Function_213() //Position: 0xA516 / 42262
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

void Function_214(int iParam0) //Position: 0xA53C / 42300
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_215(int iParam0) //Position: 0xA559 / 42329
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_216(int iParam0) //Position: 0xA56C / 42348
{
	Function_217(&Global_43580, iParam0);
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xA57A / 42362
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_218(bool bParam0) //Position: 0xA599 / 42393
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_219() //Position: 0xA5C6 / 42438
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

void Function_220(int iParam0) //Position: 0xA63E / 42558
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
		Function_221(78, 1, 1);
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

int Function_221(bool bParam0, bool bParam1, int iParam2) //Position: 0xA774 / 42868
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_222(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_222(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_222(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_222(bool bParam0) //Position: 0xA7C2 / 42946
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

void Function_223(int iParam0) //Position: 0xA8B6 / 43190
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

void Function_224(bool bParam0) //Position: 0xA939 / 43321
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

void Function_225() //Position: 0xA9B0 / 43440
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

void Function_226() //Position: 0xA9F4 / 43508
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

void Function_227() //Position: 0xAA38 / 43576
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_228(int iParam0) //Position: 0xAA4E / 43598
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_229())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_229() //Position: 0xAA8E / 43662
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

void Function_230() //Position: 0xAAB3 / 43699
{
	Global_15862 = 0.0f;
	return;
}

int Function_231() //Position: 0xAABD / 43709
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_232() //Position: 0xAADA / 43738
{
	if (VMAG((&Global_99148 + 48)) < 0.0f)
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

void Function_233() //Position: 0xAC0C / 44044
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_234(int iParam0) //Position: 0xAC15 / 44053
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

int Function_235(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xAC7D / 44157
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
		Function_236(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_198(&Global_15402[iParam014] + 8);
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

void Function_236(var uParam0) //Position: 0xAFBF / 44991
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_237() //Position: 0xAFD6 / 45014
{
	var uVar0[11];
	int iVar12;
	
	if (Function_282())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Out of the pen";
		uVar0[4] = "Stage 03 - Outside Beecher's";
		uVar0[5] = "Stage 04 - Out to pasture I";
		uVar0[6] = "Stage 05 - Stampede";
		uVar0[7] = "Stage 06 - Train robbery";
		uVar0[8] = "Stage 07 - Round 'em up";
		uVar0[9] = "Stage 08 - Out to pasture II";
		uVar0[10] = "Last Stage";
		iVar12 = Function_268(&uLocal_956, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_267(&iVar12, &iLocal_976, &iLocal_977, &iLocal_964))
		{
			Function_260();
			Function_259();
		}
		if (iVar12 == 0)
		{
			Function_260();
			Function_259();
			Function_258(&bLocal_1017, 8);
		}
		else if (iVar12 == 1)
		{
			Function_260();
			Function_259();
			Function_253(iLocal_976);
			Function_249(StackVal, 5, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
		}
		else if (iVar12 == 2)
		{
			Function_260();
			Function_259();
			Function_244(&bLocal_1019, 4);
		}
		else if (iVar12 == 3)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 1;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 4)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 2;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 5)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 3;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 6)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 4;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 7)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 5;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 8)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 6;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 9)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 7;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
		else if (iVar12 == 10)
		{
			Function_240();
			Function_260();
			Function_259();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_238(&iLocal_985);
			iLocal_976 = 101;
			iLocal_977 = 0;
			iLocal_964 = 1000;
		}
	}
	return;
}

void Function_238(int iParam0) //Position: 0xB356 / 45910
{
	Function_239(&iParam0, 0.0f);
	return;
}

void Function_239(vector3 vParam0) //Position: 0xB363 / 45923
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_240() //Position: 0xB388 / 45960
{
	STREAMING_UNLOAD_BOUNDS();
	UI_HIDE("RacePosition");
	Function_196(13, 0, 1);
	DECOR_REMOVE(&Global_54076, "herding");
	Function_195();
	Function_194();
	Function_193();
	Function_192();
	Function_191();
	if (IS_BLIP_VALID(&uLocal_1403))
	{
		REMOVE_BLIP(&uLocal_1403);
	}
	REMOVE_OBJECT_ATTACHMENT(&uLocal_1483);
	Function_190(&uLocal_1497);
	Function_190(&uLocal_1485);
	if (IS_OBJECT_VALID(&Local_1567 + 8))
	{
		DESTROY_OBJECT(&Local_1567 + 8);
	}
	if (IS_OBJECT_VALID(&Local_1567))
	{
		DESTROY_OBJECT(&Local_1567);
	}
	if (IS_OBJECT_VALID(&uLocal_1405))
	{
		Function_189();
		DESTROY_OBJECT(&uLocal_1405);
	}
	if (IS_ACTOR_VALID(&iLocal_1391))
	{
		DESTROY_ACTOR(&iLocal_1391);
	}
	if (IS_ACTOR_VALID(&bLocal_1393))
	{
		DESTROY_ACTOR(&bLocal_1393);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 64))
	{
		Function_243(&Local_1567 + 64);
		DESTROY_OBJECT(&Local_1567 + 64);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 72))
	{
		Function_243(&Local_1567 + 72);
		DESTROY_OBJECT(&Local_1567 + 72);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 80))
	{
		Function_243(&Local_1567 + 80);
		DESTROY_OBJECT(&Local_1567 + 80);
	}
	if (SQUAD_IS_VALID(&Local_1567 + 88))
	{
		Function_243(&Local_1567 + 88);
		DESTROY_OBJECT(&Local_1567 + 88);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_243(&iLocal_4 + 880);
		DESTROY_OBJECT(&iLocal_4 + 880);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1104))
	{
		Function_243(&iLocal_4 + 1104);
		DESTROY_OBJECT(&iLocal_4 + 1104);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		Function_243(&iLocal_4 + 960);
		DESTROY_OBJECT(&iLocal_4 + 960);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		Function_243(&iLocal_4 + 1024);
		DESTROY_OBJECT(&iLocal_4 + 1024);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		Function_243(&iLocal_4 + 1200);
		DESTROY_OBJECT(&iLocal_4 + 1200);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		Function_243(&iLocal_4 + 1248);
		DESTROY_OBJECT(&iLocal_4 + 1248);
	}
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_981);
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(&bLocal_981, false);
	}
	if (IS_OBJECT_VALID(&uLocal_1481))
	{
		DESTROY_OBJECT(&uLocal_1481);
	}
	if (IS_OBJECT_VALID(&(Local_1615[02])))
	{
		Function_241();
	}
	return;
}

void Function_241() //Position: 0xB5A8 / 46504
{
	TRAIN_DESTROY_TRAIN(iLocal_1365);
	Function_242();
	Function_179(&Local_1615);
	return;
}

void Function_242() //Position: 0xB5BD / 46525
{
	if (IS_LAYOUTREF_VALID(&iLocal_754))
	{
		DESTROY_LAYOUT(&iLocal_754);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_770))
	{
		DESTROY_LAYOUT(&iLocal_770);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_774))
	{
		DESTROY_LAYOUT(&iLocal_774);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_798))
	{
		DESTROY_LAYOUT(&iLocal_798);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_834))
	{
		DESTROY_LAYOUT(&iLocal_834);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_872))
	{
		DESTROY_LAYOUT(&iLocal_872);
	}
	return;
}

void Function_243(int iParam0) //Position: 0xB629 / 46633
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
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_244(bool bParam0, int iParam1) //Position: 0xB677 / 46711
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_245(&iParam1);
	bParam0 = 1;
	return;
}

void Function_245(int iParam0) //Position: 0xB69C / 46748
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_248("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_247(2) || Function_247(8)) || Function_247(9)) || Function_247(10))
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
		Function_248("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_248("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_248("");
	}
	else if (iParam0 == 8)
	{
		Function_246();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_246();
	}
	return;
}

void Function_246() //Position: 0xB793 / 46995
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_247(int iParam0) //Position: 0xB79F / 47007
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

void Function_248(char* cParam0) //Position: 0xB7D5 / 47061
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_249(int iParam0, var uParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB841 / 47169
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_250(StackVal, Param4, uParam3, &iParam6);
		Function_245(iParam0);
		uParam1 = 1;
		iParam2 = 100;
	}
}

void Function_250(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB882 / 47234
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_252(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_251(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_251(int iParam0) //Position: 0xB904 / 47364
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

var Function_252(struct<2> Param0, bool bParam2) //Position: 0xBDB2 / 48562
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

struct<8> Function_253(int iParam0) //Position: 0xBE1E / 48670
{
	Function_254(iParam0 + 1);
	return StackVal, Function_254(iParam0 + 1);
}

struct<8> Function_254(bool bParam0) //Position: 0xBE2B / 48683
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_255(&iLocal_4 + 1864[0]);
			return StackVal, Function_255(&iLocal_4 + 1864[0]);
			break;
		
		case 0x00000001:
			Function_255(&iLocal_4 + 1928[0]);
			return StackVal, Function_255(&iLocal_4 + 1928[0]);
			break;
		
		case 0x00000002:
			Function_255(&iLocal_4 + 1976[0]);
			return StackVal, Function_255(&iLocal_4 + 1976[0]);
			break;
		
		case 0x00000003:
			Function_255(&iLocal_4 + 2024[0]);
			return StackVal, Function_255(&iLocal_4 + 2024[0]);
			break;
		
		case 0x00000004:
			Function_255(&iLocal_4 + 2072[0]);
			return StackVal, Function_255(&iLocal_4 + 2072[0]);
			break;
		
		case 0x00000005:
			Function_255(&iLocal_4 + 2120[0]);
			return StackVal, Function_255(&iLocal_4 + 2120[0]);
			break;
		
		case 0x00000006:
			Function_255(&iLocal_4 + 2168[0]);
			return StackVal, Function_255(&iLocal_4 + 2168[0]);
			break;
		
		case 0x00000007:
			Function_255(&iLocal_4 + 2216[0]);
			return StackVal, Function_255(&iLocal_4 + 2216[0]);
			break;
		
		default:
			Function_255(&iLocal_4 + 2264[0]);
			return StackVal, Function_255(&iLocal_4 + 2264[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_255(&iLocal_4 + 1864[0]);
	return StackVal, Function_255(&iLocal_4 + 1864[0]);
}

struct<8> Function_255(bool bParam0) //Position: 0xBF68 / 49000
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

int Function_256(int iParam0) //Position: 0xBF91 / 49041
{
	return Function_257(iParam0 + 1);
}

int Function_257(bool bParam0) //Position: 0xBF9E / 49054
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1864[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1928[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1976[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 2024[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 2072[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&iLocal_4 + 2120[0]);
			break;
		
		case 0x00000006:
			return GET_OBJECT_HEADING(&iLocal_4 + 2168[0]);
			break;
		
		case 0x00000007:
			return GET_OBJECT_HEADING(&iLocal_4 + 2216[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 2264[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 1864[0]);
}

void Function_258(bool bParam0, int iParam1) //Position: 0xC0DE / 49374
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_245(&iParam1);
	bParam0 = 1;
	return;
}

void Function_259() //Position: 0xC103 / 49411
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_260() //Position: 0xC118 / 49432
{
	Function_262();
	Function_261(10, 3);
	return;
}

void Function_261(int iParam0, int iParam1) //Position: 0xC127 / 49447
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

void Function_262() //Position: 0xC274 / 49780
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_266())
	{
		Function_265(10, 3);
	}
	else
	{
		Function_263();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_263() //Position: 0xC2BF / 49855
{
	Function_264(25, 2);
	return;
}

void Function_264(int iParam0, int iParam1) //Position: 0xC2CB / 49867
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

void Function_265(int iParam0, int iParam1) //Position: 0xC4F7 / 50423
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

bool Function_266() //Position: 0xC644 / 50756
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

bool Function_267(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC6AC / 50860
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_260();
			Function_259();
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
		Function_248("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_268(struct<17> Param0) //Position: 0xC75B / 51035
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_281(&Var12, &Var0);
	uVar15 = Function_280(uParam1, &Var12);
	Function_279(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_278(&Param0, uVar15);
	Function_276(StackVal, &Param0, Var12.f_12);
	Function_274(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_273(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_270(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_269(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_269(int iParam0, int iParam1, int iParam2) //Position: 0xC84F / 51279
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

bool Function_270(struct<17> Param0) //Position: 0xC8AF / 51375
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
				Function_272(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_272(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_269(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_271(Param1.f_64);
	}
	else
	{
		Function_271(Param1.f_64);
	}
	return 0;
}

void Function_271(bool bParam0) //Position: 0xCA42 / 51778
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

void Function_272(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCA80 / 51840
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

var Function_273(int iParam0, struct<21> Param1) //Position: 0xCB36 / 52022
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_274(vector3 vParam0) //Position: 0xCB5D / 52061
{
	switch (Function_275())
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

int Function_275() //Position: 0xCC09 / 52233
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

void Function_276(vector3 vParam0) //Position: 0xCC45 / 52293
{
	switch (Function_277(&vParam0))
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

int Function_277(bool bParam0) //Position: 0xCCEE / 52462
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

var Function_278(struct<21> Param0) //Position: 0xCE0E / 52750
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

void Function_279(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCFC8 / 53192
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

var Function_280(int iParam0, struct<13> Param1) //Position: 0xD064 / 53348
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_281(struct<17> Param0) //Position: 0xD080 / 53376
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

bool Function_282() //Position: 0xD0DA / 53466
{
	return Global_47307;
}

bool Function_283() //Position: 0xD0E3 / 53475
{
	if (IS_EXITFLAG_SET())
	{
		Function_253(iLocal_976);
		Function_249(StackVal, 4, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
		return 0;
	}
	Function_685(StackVal, StackVal, StackVal, StackVal, StackVal, Local_878, iLocal_976, iLocal_977, &bLocal_1019, &bLocal_1017, &bLocal_1018);
	if (iLocal_976 == 99 && iLocal_976 == 100)
	{
		if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_684(8), Function_683(8)))
		{
			Function_682(8);
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_253(iLocal_976);
			Function_249(StackVal, 1, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
			return 1;
		}
		if (Function_681(2048))
		{
			Function_253(iLocal_976);
			Function_249(StackVal, 3, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
			return 1;
		}
		if (Function_661(&Local_1075, &uLocal_1021, &uLocal_1347, &uLocal_979, iLocal_1020))
		{
			if (Function_659(&uLocal_1347))
			{
				Function_253(iLocal_976);
				Function_249(StackVal, 5, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
				return 1;
			}
		}
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			if (iLocal_977 > 8)
			{
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					if (SQUAD_IS_VALID(&Local_1567 + 72))
					{
						if (SQUAD_IS_VALID(&Local_1567 + 80))
						{
							if (!iLocal_977 != 106)
							{
								bLocal_1367 = (((SQUAD_GET_SIZE(&Local_1567 + 64) + SQUAD_GET_SIZE(&Local_1567 + 88)) + SQUAD_GET_SIZE(&Local_1567 + 72)) + SQUAD_GET_SIZE(&Local_1567 + 80));
								bLocal_1368 = (15 - bLocal_1367);
								bLocal_1369 = ROUND((0,6f * IntToFloat(bLocal_1367)));
								if (bLocal_1368 > bLocal_1369)
								{
									PRINTINT(bLocal_1367);
									PRINTNL();
									PRINTINT(bLocal_1368);
									PRINTNL();
									PRINTINT(bLocal_1369);
									PRINTNL();
									Function_248("nHerd_lost");
									Function_253(iLocal_976);
									Function_249(StackVal, 5, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
									return 1;
								}
							}
						}
					}
				}
			}
		}
		Function_658(&bLocal_983, &bLocal_981);
		Function_657();
	}
	switch (iLocal_976)
	{
		case 0x00000063:
			Function_600();
			break;
		
		case 0x00000000:
			Function_580();
			break;
		
		case 0x00000001:
			Function_574();
			break;
		
		case 0x00000002:
			Function_561();
			break;
		
		case 0x00000003:
			Function_553();
			break;
		
		case 0x00000004:
			Function_530();
			break;
		
		case 0x00000005:
			Function_488();
			break;
		
		case 0x00000006:
			Function_466();
			break;
		
		case 0x00000007:
			Function_350();
			break;
		
		case 0x00000065:
			Function_286();
			break;
		
		case 0x00000064:
			if (Function_285(&bLocal_1018))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_284(&iLocal_976, &iLocal_977, &iLocal_964))
			{
				return 0;
			}
			break;
	}
	if (bLocal_1017)
	{
		Function_258(&bLocal_1017, 8);
		return 0;
	}
	if (bLocal_1018 && iLocal_976 == 100)
	{
		Function_253(iLocal_976);
		Function_249(StackVal, 5, &bLocal_1018, &iLocal_976, Function_256(iLocal_976), Function_253(iLocal_976), 0);
	}
	if (bLocal_1019)
	{
		Function_244(&bLocal_1019, 4);
		return 0;
	}
	return 1;
}

bool Function_284(var uParam0, var uParam1, int iParam2) //Position: 0xD38F / 54159
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

bool Function_285(int iParam0) //Position: 0xD3D8 / 54232
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_286() //Position: 0xD3EC / 54252
{
	Function_349(&uLocal_876);
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			if (IS_ACTOR_VALID(&bLocal_983))
			{
				TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_983, true);
			}
			if (IS_ACTOR_VALID(&bLocal_981))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
				TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_981, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1395))
			{
				TASK_STAND_STILL(&bLocal_1395, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1395, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1397))
			{
				TASK_STAND_STILL(&bLocal_1397, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1397, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46754[0];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 2264[0], 1, 1, 1);
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295))
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			iLocal_1445 = 0;
			iLocal_1020 = 0;
			iLocal_1357 = 0;
			bLocal_1367 = Function_331(Function_332(Local_878));
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			Function_315();
			if (iLocal_997[6] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_983))
					{
						Function_333(&bLocal_983, &iLocal_4 + 2264[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					Function_333(&bLocal_981, &iLocal_4 + 2264[1], 1, 1, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
					{
						Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2264[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
						{
							ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
						}
					}
				}
			}
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				Function_314(&Local_1567 + 88, &Local_1567 + 64);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 64);
				Function_313(&Local_1567 + 64);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1672, -1.0f);
			}
			Function_238(&iLocal_985);
			iLocal_977 = 3;
			break;
		
		case 0x00000003:
			if (Function_287())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				PRINTINT(Local_1567.f_120);
				PRINTNL();
				PRINTINT(Local_1567.f_124);
				PRINTNL();
				bLocal_1374 = Local_1567.f_120;
				Global_53524.f_176 = bLocal_1374;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1375 = Local_1567.f_124;
				Global_53524.f_180 = bLocal_1375;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_89(355, bLocal_1367, 1, 0);
				if (bLocal_1367 == 15)
				{
					Function_116(200, 1, 0);
				}
				bLocal_1017 = true;
			}
			break;
	}
	return;
}

bool Function_287() //Position: 0xD75D / 55133
{
	var uVar0;
	
	if (Function_312(&iLocal_964 + 4))
	{
		if (Function_310(&iLocal_964 + 4) <= 2.0f)
		{
			Function_308(&iLocal_964, 1, 0);
		}
	}
	switch (iLocal_964)
	{
		case 0x000003E8:
			Function_304(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(&uVar0, 6, &bLocal_981);
				*(&iLocal_964 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				*(&iLocal_964 + 24) = Function_298(&iLocal_4, 0, &Global_54076, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_964 + 24))
				{
				}
				else
				{
					LOG_ERROR("home02_ranch01_cutsceneLast - Failed to create home02_ranch01_cutsceneLast_cutscene");
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &bLocal_981, -1.0f, 0);
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
					{
						Function_333(&bLocal_983, &iLocal_4 + 2264[2], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
					}
					else
					{
						Function_296(&Global_54076, &iLocal_4 + 2264[2], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_981))
			{
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_981, 1);
				MEMORY_ATTACK_ON_SIGHT(&bLocal_981, 0);
				if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
				{
					if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
					{
						Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2264[3], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
					}
					else
					{
						Function_296(&bLocal_981, &iLocal_4 + 2264[3], 1, 1, 1);
					}
				}
			}
			iLocal_964 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_964 + 24), 0))
			{
				Function_295(&Global_54076, 1, 1);
				Function_295(&bLocal_981, 1, 1);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1256[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1256[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1256[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1256[1]);
				Function_238(&iLocal_964 + 4);
				iLocal_964 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iLocal_964 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_310(&iLocal_964 + 4) < 0,75f)
				{
					DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
					Function_238(&iLocal_964 + 4);
					iLocal_1641 = 15;
					iLocal_1642 = 15;
					iLocal_964 = 1004;
				}
			}
			else
			{
				Function_238(&iLocal_964 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_291() && Function_290())
			{
				Function_238(&iLocal_964 + 4);
				iLocal_964 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_295(&Global_54076, 0, 1);
				Function_295(&bLocal_981, 0, 1);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					AI_GOAL_LOOK_CLEAR(&Global_54076);
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_288(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
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
				Function_296(&Global_54076, &iLocal_4 + 2264[2], 1, 1, 1);
				Function_296(&bLocal_981, &iLocal_4 + 2264[5], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2264[4], &bLocal_1418);
					TASK_GO_NEAR_COORD(&bLocal_981, &bLocal_1418, 3.0f, 3);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				iLocal_964 = 1104;
			}
			break;
	}
	return 0;
}

void Function_288(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xDB45 / 56133
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
		Function_259();
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
	Function_289(&iParam9, &bParam10);
}

void Function_289(var uParam0, bool bParam1) //Position: 0xDC14 / 56340
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
		Function_219();
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

int Function_290() //Position: 0xDCE3 / 56547
{
	switch (iLocal_1642)
	{
		case 0x0000000F:
			if (Function_310(&iLocal_964 + 4) < 0,1f)
			{
				iLocal_1642 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_310(&iLocal_964 + 4) < 1.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &iLocal_4 + 2984, 1, 0, 0, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				iLocal_1642 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_310(&iLocal_964 + 4) < 3.0f)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_983))
					{
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 2264[2], 1, 1, 1);
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
						}
						else
						{
							Function_296(&Global_54076, &iLocal_4 + 2264[2], 1, 1, 1);
						}
					}
				}
				iLocal_1642 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_310(&iLocal_964 + 4) < 10.0f)
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2264[4], &bLocal_1418);
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &iLocal_4 + 2992, 2, 1, 0, 1, 0);
					TASK_GO_NEAR_COORD(&bLocal_981, &bLocal_1418, 10.0f, 3);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				iLocal_1642 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_310(&iLocal_964 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_291() //Position: 0xDE7C / 56956
{
	switch (iLocal_1641)
	{
		case 0x0000000F:
			if (Function_310(&iLocal_964 + 4) < 0,1f)
			{
				iLocal_1641 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_310(&iLocal_964 + 4) < 4.0f)
			{
				Function_292();
				iLocal_1641 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_310(&iLocal_964 + 4) < 5.0f)
			{
				iLocal_1641 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_310(&iLocal_964 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_292() //Position: 0xDEFF / 57087
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_CS02_v1_AA", "Home02_r1_CS02_v1_AA", 1, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_CS02_v1_AB", "Home02_r1_CS02_v1_AB", 0, 4, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_293(int iParam0) //Position: 0xDF87 / 57223
{
	Function_294(0, &Global_54076, iParam0, 0);
	Function_294(1, &bLocal_981, iParam0, 0);
	Function_294(5, &bLocal_1393, iParam0, 0);
	return;
}

void Function_294(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0xDFAE / 57262
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_295(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDFD6 / 57302
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
		SET_ACTOR_INVULNERABILITY(&bParam0, 1);
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
		SET_ACTOR_INVULNERABILITY(&bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
	}
	return;
}

void Function_296(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xE086 / 57478
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
				Function_297(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_297(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xE1A6 / 57766
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

var Function_298(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xE275 / 57973
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "home02_ranch01_cutsceneLast", 4, 1);
	}
	Function_299(&uVar0, &uParam2);
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

void Function_299(var uParam0, int iParam1) //Position: 0xE30D / 58125
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_303(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_302(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_301(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_300(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 2, 3, 8.0f, 2, 0);
	return;
}

void Function_300(int iParam0) //Position: 0xE39C / 58268
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30,19111f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(541,0181f, 107,966f, 1694,455f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,133492f, -1,82422f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_301(int iParam0) //Position: 0xE411 / 58385
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30,19111f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(539,3389f, 108,0128f, 1695,448f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,111851f, -1,451095f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_302(int iParam0) //Position: 0xE47E / 58494
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,16917f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(559,4105f, 107,7716f, 1685,928f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,180491f, -2,756297f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_303(float fParam0) //Position: 0xE4EB / 58603
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 35,16917f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(553,0671f, 107,7716f, 1691,787f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(-0,180491f, -2,134217f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_304(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xE558 / 58712
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
	Function_259();
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
				Function_307(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_307(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_306()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_306()));
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
	if (Function_305(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_305(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_305(int iParam0) //Position: 0xE80A / 59402
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_306() //Position: 0xE826 / 59430
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

struct<8> Function_307(int iParam0) //Position: 0xE8B4 / 59572
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_308(int iParam0, bool bParam1, bool bParam2) //Position: 0xE8C6 / 59590
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
			Function_309(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_309(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_309(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xEA3E / 59966
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

float Function_310(vector3 vParam0) //Position: 0xEA68 / 60008
{
	if (Function_312(&vParam0))
	{
		if (Function_311(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_311(int iParam0) //Position: 0xEB35 / 60213
{
	return Function_14(iParam0, 2);
}

bool Function_312(int iParam0) //Position: 0xEB43 / 60227
{
	return Function_14(iParam0, 1);
}

void Function_313(int iParam0) //Position: 0xEB51 / 60241
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

void Function_314(bool bParam0, var uParam1) //Position: 0xEBA0 / 60320
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

void Function_315() //Position: 0xEBED / 60397
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2264[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_316();
	return;
}

void Function_316() //Position: 0xEC93 / 60563
{
	Function_324();
	(&Local_1567 + 24) = &iLocal_4 + 2928;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2624, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1672, -1.0f);
		}
	}
	return;
}

void Function_317(var uParam0, var uParam1, int iParam2) //Position: 0xED6F / 60783
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

void Function_318(var uParam0, int iParam1) //Position: 0xEDBD / 60861
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

void Function_319(var uParam0, bool bParam1) //Position: 0xEE04 / 60932
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

void Function_320(var uParam0, bool bParam1) //Position: 0xEE4B / 61003
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

void Function_321(struct<113> Param0) //Position: 0xEE95 / 61077
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
					Function_255(&bParam2);
					Var36 = Function_255(&bParam2);
					Function_323(&bParam2);
					Var38 = Function_323(&bParam2);
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
						if (Function_322(bVar48))
						{
							uVar34 = CREATE_ACTOR_IN_LAYOUT(&uParam1, &cVar2, bVar48, Var42, Var44);
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

bool Function_322(int iParam0) //Position: 0xF049 / 61513
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_323(var uParam0) //Position: 0xF060 / 61536
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

void Function_324() //Position: 0xF089 / 61577
{
	iLocal_1471[0] = 1008;
	iLocal_1471[1] = 1009;
	iLocal_1471[2] = 1010;
	iLocal_1471[3] = 1011;
	*(&Local_1567 + 152[0]) = &Global_54076;
	*(&Local_1567 + 152[1]) = &bLocal_981;
	Local_1567.f_112 = Function_331(Function_332(Local_878));
	Local_1567.f_116 = 15;
	PRINTINT(Local_1567.f_112);
	PRINTNL();
	*(&Local_1567 + 104) = "HOME02_RANCH01_COWS01";
	if (!Function_312(&Local_1567 + 132))
	{
		Function_325(&Local_1567 + 132);
	}
	else
	{
		Function_238(&Local_1567 + 132);
	}
	if (!IS_OBJECT_VALID(&Local_1567))
	{
		Local_1567 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "COWS_01_BASE", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1567))
		{
		}
	}
	if (!IS_OBJECT_VALID(&Local_1567 + 8))
	{
		*(&Local_1567 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "COWS_01_CENTER", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&Local_1567 + 8))
		{
		}
	}
	if (!SQUAD_IS_VALID(&Local_1567 + 72))
	{
		*(&Local_1567 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 72))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 72);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1567 + 80))
	{
		*(&Local_1567 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 80))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 80);
		}
	}
	if (!SQUAD_IS_VALID(&Local_1567 + 88))
	{
		*(&Local_1567 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 88))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 88);
		}
	}
	if (!IS_VOLUME_VALID(&Local_1567 + 56))
	{
		*(&Local_1567 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_876, "HERD_VOLUME_MEDIUM", 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(9.0f, 9.0f, 9.0f));
		if (IS_VOLUME_VALID(&Local_1567 + 56))
		{
			if (IS_OBJECT_VALID(&Local_1567 + 8))
			{
				ATTACH_OBJECTS(StackVal, StackVal, &Local_1567 + 56, &Local_1567 + 8, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
		}
	}
	(&Local_1567 + 24) = "";
	(&Local_1567 + 16) = "";
	Local_1567.f_148 = 0;
	return;
}

void Function_325(int iParam0) //Position: 0xF319 / 62233
{
	if (!Function_312(&iParam0))
	{
		Function_239(&iParam0, 0.0f);
	}
	return;
}

void Function_326(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xF330 / 62256
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_327(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_327(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF36B / 62315
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

void Function_328(var uParam0, bool bParam1) //Position: 0xF3B5 / 62389
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

void Function_329(var uParam0, bool bParam1) //Position: 0xF3FD / 62461
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

void Function_330() //Position: 0xF444 / 62532
{
	*(&iLocal_4 + 880) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Horse01"));
	*(&iLocal_4 + 856[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_01", 977, Vector(-77,50741f, 116,8651f, 1419,258f), Vector(0.0f, -89,88698f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 856[02], &iLocal_4 + 880);
	return;
}

bool Function_331(bool bParam0) //Position: 0xF4AD / 62637
{
	int iVar0;
	int iVar1;
	
	iVar1 = bParam0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = (iVar1 / 10);
		iVar0++;
	}
	return (bParam0 - iVar1 * 100);
}

bool Function_332(int iParam0) //Position: 0xF4D7 / 62679
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_333(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xF4F1 / 62705
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

void Function_334(int iParam0) //Position: 0xF601 / 62977
{
	if (!Function_335(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_209(1, 0, 1);
		}
	}
	return;
}

bool Function_335(struct<37> Param0) //Position: 0xF61D / 63005
{
	return Param0.f_36;
}

bool Function_336(bool bParam0) //Position: 0xF628 / 63016
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_337() //Position: 0xF644 / 63044
{
	Function_214(47);
	Function_215(256);
	Function_169(18447);
	Function_344(12);
	Function_344(9);
	Function_344(13);
	Function_344(11);
	Function_344(35);
	Function_344(6);
	Function_344(3);
	Function_342(33037);
	Function_341();
	Function_340();
	if (iLocal_976 == 0)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 1)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 2)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 3)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 4)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 5)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 6)
	{
		Function_339(0);
		Function_338(0);
	}
	else if (iLocal_976 == 7)
	{
		Function_339(0);
		Function_338(0);
	}
	else
	{
		Function_339(0);
		Function_338(0);
	}
	return;
}

void Function_338(int iParam0) //Position: 0xF721 / 63265
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

void Function_339(int iParam0) //Position: 0xF73F / 63295
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

void Function_340() //Position: 0xF764 / 63332
{
	Global_43580.f_60 = 4294967295;
	return;
}

void Function_341() //Position: 0xF770 / 63344
{
	Global_43580.f_56 = 0;
	return;
}

void Function_342(int iParam0) //Position: 0xF77C / 63356
{
	Function_343(&Global_43580, iParam0);
	return;
}

void Function_343(var uParam0, int iParam1) //Position: 0xF78A / 63370
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_344(int iParam0) //Position: 0xF7B2 / 63410
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_345(bool bParam0) //Position: 0xF7D2 / 63442
{
	Function_346(0, 0x40400000);
	Function_226();
	Function_225();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_346(float fParam0, float fParam1) //Position: 0xF808 / 63496
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
	Function_348();
	Function_347();
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

void Function_347() //Position: 0xF919 / 63769
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_348() //Position: 0xF94D / 63821
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

void Function_349(var uParam0) //Position: 0xFA53 / 64083
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
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
						if (((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1102) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1103) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1104)
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

void Function_350() //Position: 0xFC70 / 64624
{
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_465(&Local_1567 + 64, &Local_1567 + 88, &iLocal_4 + 1752);
		Function_464(&Local_1567);
		if (bLocal_1447)
		{
			Function_460(&Local_1567);
			Function_459(&Local_1567);
			Function_458(&Local_1567, 0x41700000);
			if (Function_310(&iLocal_1507) <= 0,2f)
			{
				Function_455(&Local_1567);
				Function_238(&iLocal_1507);
			}
			Function_454();
		}
		Function_451(&Local_1567 + 72, &iLocal_1503, 3.0f, &iLocal_4 + 2928, -14.0f);
		Function_450();
		Function_446();
		Function_445(&Global_54076);
		Function_444();
		Function_429();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[6] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46754[0];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 2216[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295))
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415() && Function_408())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1358 = 0;
				iLocal_1359 = 0;
				iLocal_1360 = 0;
				iLocal_1361 = 0;
				iLocal_1371 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				iLocal_1470 = 0;
				Function_407(&iLocal_1449);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1374 = Global_53524.f_176;
				bLocal_1375 = Global_53524.f_180;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1567.f_120 = bLocal_1374;
				Local_1567.f_124 = bLocal_1375;
				Function_400();
				if (IS_ACTOR_VALID(&bLocal_1395))
				{
					SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
					Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1397))
				{
					SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
					Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				}
				if (iLocal_997[6] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 2216[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 2216[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2216[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 64);
					Function_313(&Local_1567 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_394(&(Local_1075[515]));
				Function_394(&(Local_1075[615]));
				Function_394(&(Local_1075[715]));
				Function_390(&(Local_1075[115]), 2);
				Function_390(&(Local_1075[215]), 2);
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				Function_379();
				Function_378();
				Function_313(&Local_1567 + 64);
				Function_376(&Local_1567 + 64, &iLocal_4 + 1544);
				Function_375(&Local_1567 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1481))
				{
					if (IS_OBJECT_VALID(&Local_1567 + 8))
					{
						uLocal_1481 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_876, "HOME02RANCH01_CAMERA_FOCUS", &Local_1567 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1481))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1481, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2624, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2624, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2624, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (iLocal_997[6] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_378();
						Function_313(&Local_1567 + 64);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1544);
						Function_375(&Local_1567 + 64, 2, 1);
					}
				}
				iLocal_1445 = 0;
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 72);
					Function_374(&Local_1567 + 72);
				}
				*(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1567 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 80);
					Function_374(&Local_1567 + 80);
				}
				*(&Local_1567 + 16) = &iLocal_4 + 2624;
				GET_OBJECT_POSITION(&iLocal_4 + 2624, &uLocal_1415);
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 88);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1672, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				}
				if (Function_373(RAND_INT_RANGE(0, true)))
				{
					Function_372();
				}
				else
				{
					Function_371();
				}
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_370("home02_ranch01_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 135.0f, 315.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2624, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2624, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2624, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
				if ((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0) && SQUAD_GET_SIZE(&Local_1567 + 72) >= 3)
					{
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 9;
					}
				}
				if (((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 88)) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 72) != 0) && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						Function_354(&Local_1567 + 64);
						Function_354(&Local_1567 + 72);
						Function_354(&Local_1567 + 80);
						Function_354(&Local_1567 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 11;
					}
				}
			}
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_1393))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1393, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_1393, "home02_r1_JonGoesBakT4", &Global_54076, 1, 0, 0, 0, 0);
						Function_238(&iLocal_989);
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[02], "home02_r1_JonGoesBakT1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[22], "home02_r1_JonGoesBakT3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[42]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[42], "home02_r1_JonGoesBakT5", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[12], "home02_r1_JonGoesBakT2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[32], "home02_r1_JonGoesBakT6", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			if (!iLocal_1470)
			{
				if (IS_OBJECT_VALID(&Local_1567 + 8) && IS_ACTOR_VALID(&bLocal_981))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 1848))
					{
						if (IS_OBJECT_IN_VOLUME(&Local_1567 + 8, &iLocal_4 + 1848) || IS_ACTOR_IN_VOLUME(&bLocal_981, &iLocal_4 + 1848))
						{
							iLocal_1470 = 1;
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			if (SQUAD_GET_SIZE(&Local_1567 + 72) == 1)
			{
				Function_370("home02_ranch01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				Function_370("home02_ranch01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			Function_238(&iLocal_985);
			Function_238(&iLocal_989);
			Function_238(&fLocal_993);
			iLocal_977 = 10;
			break;
		
		case 0x0000000A:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 245.0f, 395.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2624, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2624, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2624, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 72) != 0)
					{
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 8;
					}
				}
			}
			if (!iLocal_1449[0])
			{
				if ((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0) && SQUAD_GET_SIZE(&Local_1567 + 72) >= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_981))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 24.0f))
							{
								iLocal_1449[0] = 1;
								Function_353();
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_259();
				Function_238(&iLocal_985);
				iLocal_977 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					bLocal_1367 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88);
				}
				PRINTINT(bLocal_1372);
				PRINTNL();
				bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
				PRINTINT(bLocal_1372);
				PRINTNL();
				Function_351(Local_878, bLocal_1372);
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1374 = Local_1567.f_120;
				Global_53524.f_176 = bLocal_1374;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1375 = Local_1567.f_124;
				Global_53524.f_180 = bLocal_1375;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_191();
				iLocal_997[7] = 1;
				Function_238(&iLocal_985);
				iLocal_976 = 101;
				iLocal_977 = 0;
			}
			break;
	}
	return;
}

void Function_351(int iParam0, bool bParam1) //Position: 0x10D82 / 68994
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = bParam1;
	return;
}

bool Function_352(int iParam0, bool bParam1) //Position: 0x10D9D / 69021
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = bParam1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = (iVar2 / 10);
		iVar0++;
	}
	iVar1 = (iVar2 % 10);
	return ((10000 + iVar1 * 1000) + iParam0);
}

void Function_353() //Position: 0x10DD3 / 69075
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_GetLastStrag", "Home02_r1_GetLastStrag", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354(bool bParam0) //Position: 0x10E28 / 69160
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

void Function_355() //Position: 0x10E7C / 69244
{
	bLocal_1447 = true;
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1567 + 64, &Local_1567 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1567 + 64, &Local_1567 + 96, &Global_54076, 23.0f, 1.0f, 15.0f, 10.0f, 0);
	UI_SHOW("RacePosition");
	DECOR_SET_BOOL(&Global_54076, "herding", 1);
	return;
}

int Function_356(struct<2> Param0, float fParam2, int iParam3, float fParam4, char* cParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x10EE9 / 69353
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_363(&Global_54076, &iParam3, fParam2))
	{
		Function_248(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_363(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_362(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_370(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_361(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_360(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_360(&iParam9, 0, 15, 1, &iParam3);
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
	if (Function_362(1))
	{
		Function_359(1);
		if (!Function_358())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_357();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_360(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_360(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_357() //Position: 0x11092 / 69778
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

bool Function_358() //Position: 0x110C0 / 69824
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

void Function_359(bool bParam0) //Position: 0x11107 / 69895
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

void Function_360(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1116E / 69998
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

void Function_361(bool bParam0) //Position: 0x11229 / 70185
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

bool Function_362(bool bParam0) //Position: 0x11290 / 70288
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

bool Function_363(int iParam0, var uParam1, float fParam2) //Position: 0x112DA / 70362
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_365(&iParam0);
			Function_364(&uParam1);
			if (VDIST(Function_365(&iParam0), Function_364(&uParam1)) >= fParam2)
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

struct<8> Function_364(int iParam0) //Position: 0x113F8 / 70648
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

struct<8> Function_365(var uParam0) //Position: 0x11466 / 70758
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

void Function_366() //Position: 0x114D2 / 70866
{
	var uVar0;
	var uVar1;
	
	bLocal_1447 = false;
	_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(&Local_1567 + 64, &Local_1567 + 96, &Global_54076);
	if (IS_OBJECT_VALID(&Local_1567 + 8))
	{
		uVar0 = GET_BLIP_ON_OBJECT(&Local_1567 + 8);
		if (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
		}
	}
	if (IS_OBJECT_VALID(&Local_1567))
	{
		uVar1 = GET_BLIP_ON_OBJECT(&Local_1567);
		if (IS_BLIP_VALID(&uVar1))
		{
			REMOVE_BLIP(&uVar1);
		}
	}
	Function_354(&Local_1567 + 64);
	Function_354(&Local_1567 + 72);
	Function_354(&Local_1567 + 80);
	Function_354(&Local_1567 + 88);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(&Global_54076, "herding");
	return;
}

bool Function_367(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, int iParam10) //Position: 0x11581 / 71041
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_362(16))
			{
				if (&bParam7)
				{
					Function_259();
				}
				if (!Function_369())
				{
					Function_370(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_361(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_248(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_362(8))
		{
			if (&bParam7)
			{
				Function_259();
			}
			if (!Function_369())
			{
				Function_370(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_361(8);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_360(&uParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_360(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_362(8))
	{
		Function_359(8);
		if (!Function_358())
		{
			Function_368();
			Function_357();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_360(&uParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_360(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_368() //Position: 0x116F7 / 71415
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_369() //Position: 0x11703 / 71427
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_370(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11710 / 71440
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

void Function_371() //Position: 0x117A5 / 71589
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_BeginHerdOut", "Home02_r1_BeginHerdOut", 1, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372() //Position: 0x117FA / 71674
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_MoveCowsAgain", "Home02_r1_MoveCowsAgain", 1, 2, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_373(bool bParam0) //Position: 0x11851 / 71761
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

void Function_374(int iParam0) //Position: 0x11863 / 71779
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

int Function_375(var uParam0, int iParam1, int iParam2) //Position: 0x11898 / 71832
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

void Function_376(var uParam0, int[] iParam1) //Position: 0x118E0 / 71904
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_377(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_377(bool bParam0, int iParam1) //Position: 0x11929 / 71977
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

void Function_378() //Position: 0x11987 / 72071
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_379() //Position: 0x119B2 / 72114
{
	Function_374(&Local_1567 + 64);
	SQUAD_GOALS_CLEAR(&Local_1567 + 64);
	(&Local_1567 + 96) = UNK_0x48588CCB(&Local_1567 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1567 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1567 + 64, &Local_1567 + 96);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 19, 45.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 12, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 19, 40.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 12, 0,5f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1567 + 64, &Local_1567 + 96, &Global_54076, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1567 + 64, &Local_1567 + 96, &Global_54076, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1567 + 64, &Local_1567 + 96, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1567 + 64, &Local_1567 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1567 + 64, &Local_1567 + 96, 0, 1);
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		if (IS_VOLUME_VALID(&Local_1567 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_981);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1567 + 56);
			if (!iLocal_976 != 1 || !iLocal_976 != 2)
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_981, &Local_1567 + 56);
			}
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1567 + 64, &Local_1567 + 96, &bLocal_981, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(&Global_54076, "herding", 1);
	bLocal_1447 = true;
	return;
}

int Function_380(int iParam0, bool bParam1) //Position: 0x11B98 / 72600
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				if (!Function_381(&iVar1, bParam1, 0x41700000))
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

bool Function_381(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11BFE / 72702
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
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &bParam2)
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

void Function_382(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x11CA0 / 72864
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
	if (bParam2 != Global_53524.f_48 && !Function_389())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_388(0);
	Function_387();
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
		Function_385(bParam2);
	}
	Function_384(uParam3, iVar0, iVar1);
	Function_383();
}

void Function_383() //Position: 0x11D49 / 73033
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

void Function_384(int iParam0, bool bParam1, bool bParam2) //Position: 0x11D8A / 73098
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

void Function_385(bool bParam0) //Position: 0x11EF3 / 73459
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_386() };
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

struct<16> Function_386() //Position: 0x1208B / 73867
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

void Function_387() //Position: 0x120D1 / 73937
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_388(bool bParam0) //Position: 0x120F5 / 73973
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

bool Function_389() //Position: 0x12124 / 74020
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_390(int iParam0, int iParam1) //Position: 0x1213F / 74047
{
	if (iParam1 != 100000000)
	{
		Function_393(&iParam0, iParam1);
	}
	else
	{
		Function_391(&iParam0, 1);
	}
	return;
}

void Function_391(struct<69> Param0) //Position: 0x12161 / 74081
{
	Param0.f_68 = 0;
	Function_392(&Param0, 2, &bParam1);
	Function_392(&Param0, 4, &bParam1);
	Function_392(&Param0, 8, &bParam1);
	Function_392(&Param0, 16, &bParam1);
	Function_392(&Param0, 32, &bParam1);
	Function_392(&Param0, 64, &bParam1);
	Function_392(&Param0, 128, &bParam1);
	Function_392(&Param0, 256, &bParam1);
	Function_392(&Param0, 512, &bParam1);
	Function_392(&Param0, 1024, &bParam1);
	return;
}

void Function_392(int iParam0, int iParam1, bool bParam2) //Position: 0x121DC / 74204
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

void Function_393(int iParam0, bool bParam1) //Position: 0x1221B / 74267
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

void Function_394(struct<69> Param0) //Position: 0x12248 / 74312
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

int Function_395(struct<69> Param0) //Position: 0x12308 / 74504
{
	if (!Function_399(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_398(&Param0, &bParam2))
	{
		return 0;
	}
	Function_397(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_396(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_396(var uParam0, int iParam1, int iParam2) //Position: 0x1234E / 74574
{
	if (iParam1 != 100000000)
	{
		Function_392(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_391(&uParam0, &iParam2);
	}
	return;
}

void Function_397(struct<65> Param0) //Position: 0x12375 / 74613
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_398(int iParam0, char* cParam1) //Position: 0x12382 / 74626
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

bool Function_399(struct<61> Param0) //Position: 0x1240F / 74767
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

void Function_400() //Position: 0x125C2 / 75202
{
	if (!IS_ACTOR_VALID(&bLocal_1393))
	{
		bLocal_1393 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "HOME02_RANCH01_ENGINEER01", 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_ACTOR_VALID(&bLocal_1393))
		{
			SET_ACTOR_FACTION(&bLocal_1393, 20);
			SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			Function_327(&bLocal_1393, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1393);
			uLocal_1483 = ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1393, &iLocal_754 + 48, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_STAND_STILL(&bLocal_1393, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1393, true);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		Function_406();
		if (SQUAD_IS_VALID(&iLocal_4 + 1248))
		{
			Function_329(&iLocal_4 + 1248, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
			Function_326(&iLocal_4 + 1248, 0, 0, 0);
			Function_405(&iLocal_4 + 1248, 4, 0.0f);
			Function_404();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		Function_403();
		if (SQUAD_IS_VALID(&iLocal_4 + 1200))
		{
			Function_329(&iLocal_4 + 1200, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
			Function_326(&iLocal_4 + 1200, 0, 0, 0);
			Function_402();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2216[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_401();
	return;
}

void Function_401() //Position: 0x127CD / 75725
{
	Function_324();
	(&Local_1567 + 24) = &iLocal_4 + 2928;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2632, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
		}
	}
	return;
}

void Function_402() //Position: 0x128A9 / 75945
{
	bool bVar0;
	var uVar1[5];
	var uVar7;
	
	uVar1[0] = &iLocal_798 + 56;
	uVar1[1] = &iLocal_798 + 88;
	uVar1[2] = &iLocal_798 + 72;
	uVar1[3] = &iLocal_798 + 80;
	uVar1[4] = &iLocal_798 + 64;
	if (SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iLocal_4 + 1200) - 1))
		{
			uVar7 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1200, bVar0);
			if (IS_ACTOR_VALID(&uVar7))
			{
				uLocal_1485[bVar0] = ATTACH_OBJECTS(StackVal, StackVal, &uVar7, &(uVar1[bVar0]), Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
			bVar0++;
		}
	}
	return;
}

void Function_403() //Position: 0x12953 / 76115
{
	*(&iLocal_4 + 1200) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Passenger01"));
	*(&iLocal_4 + 1112[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PASSENGER_01_01", 208, Vector(150,4297f, 116,1939f, 1780,356f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1112[02], &iLocal_4 + 1200);
	*(&iLocal_4 + 1112[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PASSENGER_01_02", 73, Vector(146,5272f, 116,4716f, 1779,625f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1112[12], &iLocal_4 + 1200);
	*(&iLocal_4 + 1112[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PASSENGER_01_03", 74, Vector(142,6323f, 116,7408f, 1778,784f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1112[22], &iLocal_4 + 1200);
	*(&iLocal_4 + 1112[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PASSENGER_01_04", 33, Vector(138,7059f, 116,9362f, 1778,046f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1112[32], &iLocal_4 + 1200);
	*(&iLocal_4 + 1112[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PASSENGER_01_05", 238, Vector(134,784f, 117,1212f, 1777,246f), Vector(0.0f, 200,9943f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1112[42], &iLocal_4 + 1200);
	return;
}

void Function_404() //Position: 0x12AE7 / 76519
{
	bool bVar0;
	var uVar1[2];
	var uVar4;
	
	uVar1[0] = &iLocal_774 + 80;
	uVar1[1] = &iLocal_834 + 144;
	if (SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iLocal_4 + 1248) - 1))
		{
			uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1248, bVar0);
			if (IS_ACTOR_VALID(&uVar4))
			{
				uLocal_1497[bVar0] = ATTACH_OBJECTS(StackVal, StackVal, &uVar4, &(uVar1[bVar0]), Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			}
			bVar0++;
		}
	}
	return;
}

void Function_405(var uParam0, bool bParam1, bool bParam2) //Position: 0x12B6D / 76653
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

void Function_406() //Position: 0x12BC0 / 76736
{
	*(&iLocal_4 + 1248) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Guard01"));
	*(&iLocal_4 + 1208[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_01", 191, Vector(145,2672f, 116,4716f, 1785,992f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1208[02], &iLocal_4 + 1248);
	*(&iLocal_4 + 1208[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_02", 192, Vector(141,3345f, 116,7212f, 1785,201f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1208[12], &iLocal_4 + 1248);
	return;
}

void Function_407(int[] iParam0) //Position: 0x12C69 / 76905
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

int Function_408() //Position: 0x12C8E / 76942
{
	Function_414(&iLocal_4 + 736, 208, 2, 0);
	Function_414(&iLocal_4 + 736, 73, 2, 0);
	Function_414(&iLocal_4 + 736, 74, 2, 0);
	Function_414(&iLocal_4 + 736, 33, 2, 0);
	Function_414(&iLocal_4 + 736, 238, 2, 0);
	Function_414(&iLocal_4 + 736, 191, 2, 0);
	Function_414(&iLocal_4 + 736, 192, 2, 0);
	if (Function_409(&iLocal_4 + 736))
	{
		return 1;
	}
	return 0;
}

bool Function_409(struct<2>[] Param0) //Position: 0x12CFD / 77053
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_413();
	iVar1 = 0;
	if (!Function_176(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_412(&(Param0[iVar02]), 8);
		}
		else if (Function_411())
		{
			iVar1 = 1;
			Function_412(&(Param0[iVar02]), 8);
		}
		Function_412(&(Param0[iVar02]), 16);
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
				Function_412(&(Param0[iVar02]), 1);
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
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_412(&(Param0[iVar02]), 2);
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
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_412(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_412(&(Param0[iVar02]), 2);
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
	Function_410();
	return 1;
}

void Function_410() //Position: 0x130BF / 78015
{
	if (!Function_305(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_411() //Position: 0x130FF / 78079
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

void Function_412(struct<13> Param0) //Position: 0x1312D / 78125
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_413() //Position: 0x13140 / 78144
{
	if (!Function_305(128))
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

var Function_414(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13182 / 78210
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
			Function_412(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_412(&(Param0[iVar02]), 8);
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

bool Function_415() //Position: 0x1325E / 78430
{
	bool bVar0;
	
	switch (iLocal_1364)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(&(Local_1615[02])))
			{
				iLocal_1364++;
			}
			else
			{
				iLocal_1364 = 9;
			}
			break;
		
		case 0x00000001:
			iLocal_1365 = TRAIN_CREATE_NEW_TRAIN(6, "rail__rrtrack_02x", 0);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1365, 1175);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1365, 1176);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1365, 1169);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1365, 1168);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1365, 1160);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1365, 1173);
			iLocal_1364++;
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (bVar0 < (Local_1615 - 1))
			{
				Local_1615[bVar02] = TRAIN_GET_CAR(iLocal_1365, bVar0);
				if (IS_OBJECT_VALID(&(Local_1615[bVar02])))
				{
					PRINTINT(bVar0);
					PRINTNL();
					SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(&(Local_1615[bVar02])), 1);
				}
				else
				{
					PRINTINT(bVar0);
					PRINTNL();
				}
				bVar0++;
			}
			iLocal_1364++;
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(&(Local_1615[02])))
			{
			}
			iLocal_1364++;
			break;
		
		case 0x00000004:
			iLocal_1363 = 0;
			iLocal_1364++;
			break;
		
		case 0x00000005:
			if (Function_418())
			{
				iLocal_1364++;
			}
			break;
		
		case 0x00000006:
			Function_417(&Local_1615);
			Function_416();
			iLocal_1364++;
			break;
		
		case 0x00000007:
			if (((iLocal_976 != 0 || iLocal_976 != 1) || iLocal_976 != 2) || iLocal_976 != 3)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2328), &uLocal_1427);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_4 + 2328), &Local_1430);
				UNK_0x44986367(StackVal, &Local_1430);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
				bLocal_1376 = 0.0f;
			}
			else if (iLocal_976 == 4)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2328), &uLocal_1427);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2328), &Local_1430);
				UNK_0x44986367(StackVal, &Local_1430);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
				bLocal_1376 = 0.0f;
			}
			else if (iLocal_976 == 5)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2328), &uLocal_1427);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_4 + 2328), &Local_1430);
				UNK_0x44986367(StackVal, &Local_1430);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
				bLocal_1376 = 0.0f;
			}
			else if (iLocal_976 == 6)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_4 + 2328), &uLocal_1427);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_4 + 2328), &Local_1430);
				UNK_0x44986367(StackVal, &Local_1430);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
				bLocal_1376 = 0.0f;
			}
			else
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_4 + 2328), &uLocal_1427);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_4 + 2328), &Local_1430);
				UNK_0x44986367(StackVal, &Local_1430);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
				bLocal_1376 = 0.0f;
			}
			PRINTVECTOR(Local_1430);
			PRINTNL();
			PRINTFLOAT(StackVal);
			PRINTNL();
			PRINTFLOAT(bLocal_1376);
			PRINTNL();
			TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1365, 0);
			TRAIN_SET_POSITION_DIRECTION(iLocal_1365, &uLocal_1427, &Local_1430);
			TRAIN_SET_TARGET_POS(iLocal_1365, &Local_1433);
			TRAIN_SET_TARGET_SPEED(iLocal_1365, bLocal_1376);
			TRAIN_SET_MAX_ACCEL(iLocal_1365, 2,5f);
			TRAIN_SET_MAX_DECEL(iLocal_1365, -2,5f);
			iLocal_1364++;
			break;
		
		case 0x00000008:
			iLocal_1364++;
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

void Function_416() //Position: 0x135D1 / 79313
{
	if (IS_VOLUME_VALID(&iLocal_754 + 32))
	{
		*(&Local_1615[02] + 8) = &iLocal_754 + 32;
	}
	*(&Local_1615[02] + 8) = &iLocal_754 + 32;
	*(&Local_1615[12] + 8) = &iLocal_770 + 8;
	*(&Local_1615[22] + 8) = &iLocal_774 + 64;
	*(&Local_1615[32] + 8) = &iLocal_798 + 48;
	*(&Local_1615[42] + 8) = &iLocal_834 + 96;
	*(&Local_1615[52] + 8) = &iLocal_872 + 8;
	return;
}

void Function_417(struct<2>[] Param0) //Position: 0x1364F / 79439
{
	var uVar0[6];
	
	uVar0[0] = "home02_ranch01_steamer01";
	uVar0[1] = "home02_ranch01_woodcar01";
	uVar0[2] = "home02_ranch01_baggage01";
	uVar0[3] = "home02_ranch01_passenger01_01";
	uVar0[4] = "home02_ranch01_boxcar04_01";
	uVar0[5] = "home02_ranch01_caboose01";
	if (IS_OBJECT_VALID(&(Param0[22])))
	{
		SET_ACTOR_MOVABLE_NAV_MESH(GET_ACTOR_FROM_OBJECT(&(Param0[22])), &(uVar0[2]));
	}
	if (IS_OBJECT_VALID(&(Param0[42])))
	{
		SET_ACTOR_MOVABLE_NAV_MESH(GET_ACTOR_FROM_OBJECT(&(Param0[42])), &(uVar0[4]));
	}
	return;
}

bool Function_418() //Position: 0x13767 / 79719
{
	switch (iLocal_1363)
	{
		case 0x00000000:
			iLocal_1363++;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(&(Local_1615[02])))
			{
				if (Function_428(&(Local_1615[02])))
				{
					iLocal_1363++;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(&(Local_1615[12])))
			{
				if (Function_427(&(Local_1615[12])))
				{
					iLocal_1363++;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(&(Local_1615[22])))
			{
				if (Function_426(&(Local_1615[22])))
				{
					iLocal_1363++;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&(Local_1615[32])))
			{
				if (Function_425(&(Local_1615[32])))
				{
					iLocal_1363++;
				}
			}
			break;
		
		case 0x00000005:
			iLocal_1363++;
			break;
		
		case 0x00000006:
			if (IS_OBJECT_VALID(&(Local_1615[42])))
			{
				if (Function_422(&(Local_1615[42])))
				{
					iLocal_1363++;
				}
			}
			break;
		
		case 0x00000007:
			if (IS_OBJECT_VALID(&(Local_1615[52])))
			{
				if (Function_419(&(Local_1615[52])))
				{
					iLocal_1363++;
				}
			}
			break;
		
		case 0x00000008:
			iLocal_1363++;
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

bool Function_419(int iParam0) //Position: 0x138B6 / 80054
{
	var uVar0;
	
	Function_421(3, 2);
	uVar0 = &uVar0;
	iLocal_872 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_872 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_872, "volume_main", 2,802597E-45f, Vector(0.0f, 3,645308f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 6.0f, 10.0f));
	Function_420(&iLocal_872, &iParam0);
	return 1;
}

void Function_420(int iParam0, var uParam1) //Position: 0x1390F / 80143
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

void Function_421(int iParam0, int iParam1) //Position: 0x1395A / 80218
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

bool Function_422(int iParam0) //Position: 0x139A4 / 80292
{
	var uVar0;
	
	Function_421(3, 2);
	uVar0 = &uVar0;
	Function_423(&iLocal_834 + 8, "p_gen_lantern05x", 0, 0);
	Function_423(&iLocal_834 + 8, "p_gen_hayHook01x", 0, 0);
	Function_423(&iLocal_834 + 8, "p_gen_boxcar0401x", 0, 0);
	Function_423(&iLocal_834 + 8, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_423(&iLocal_834 + 8, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (!Function_409(&iLocal_834 + 8))
	{
		return 0;
	}
	iLocal_834 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_834 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_834, "volume_main", 2,802597E-45f, Vector(0.0f, 3,580699f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(4,5f, 6.0f, 12,5f));
	*(&iLocal_834 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "point_spawn_guard01", Vector(0,1342256f, 1,039f, -2,877801f), Vector(0.0f, 98,22744f, 0.0f));
	*(&iLocal_834 + 112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "train_climb_left", "train_climb_left", Vector(-1,411f, 1,039f, -2,620399f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_834 + 112, "trainAttach", 2);
	*(&iLocal_834 + 120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "train_climb_left1", "train_climb_left", Vector(-1,411f, 1,039f, 2,286764f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_834 + 120, "trainAttach", false);
	*(&iLocal_834 + 128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "train_climb_right", "train_climb_right", Vector(1,411f, 1,039f, -2,406803f), Vector(0.0f, -90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_834 + 128, "trainAttach", 3);
	*(&iLocal_834 + 136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "train_climb_right1", "train_climb_right", Vector(1,411f, 1,039f, 2,540062f), Vector(0.0f, -90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_834 + 136, "trainAttach", true);
	*(&iLocal_834 + 144) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "cover_low01", Vector(-0,09129481f, 1,058997f, -2,83302f), Vector(0.0f, 97,11233f, 0.0f), 4);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "lantern05x0", "p_gen_lantern05x", Vector(1,081683f, 2,713609f, 3,589049f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "hayHook01x0", "p_gen_hayHook01x", Vector(0,9783603f, 3,393837f, 3,707323f), Vector(-180.0f, 180.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "hayHook01x1", "p_gen_hayHook01x", Vector(-0,9380003f, 3,394967f, -1,363513f), Vector(-180.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "lantern05x1", "p_gen_lantern05x", Vector(-0,8359354f, 2,718448f, -1,447383f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_834, "boxcar0401x0", "p_gen_boxcar0401x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	Function_420(&iLocal_834, &iParam0);
	return 1;
}

var Function_423(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x13E34 / 81460
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_424(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_412(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_424(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x13E72 / 81522
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_176(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_412(&(Param0[iVar02]), 4);
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

bool Function_425(int iParam0) //Position: 0x13F41 / 81729
{
	var uVar0;
	
	Function_421(3, 2);
	uVar0 = &uVar0;
	Function_423(&iLocal_798 + 8, "p_gen_lamp06x", 0, 0);
	Function_423(&iLocal_798 + 8, "p_gen_lampExterior04x", 0, 0);
	if (!Function_409(&iLocal_798 + 8))
	{
		return 0;
	}
	iLocal_798 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_798 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_798, "volume_main", 2,802597E-45f, Vector(0.0f, 3,419341f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 6.0f, 19,5f));
	*(&iLocal_798 + 56) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "point_spawn_passenger01", Vector(0,1707019f, 1,047706f, -5,053849f), Vector(0.0f, 124,2493f, 0.0f));
	*(&iLocal_798 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "point_spawn_passenger02", Vector(0,1989597f, 1,047706f, -3,398942f), Vector(0.0f, -256,4455f, 0.0f));
	*(&iLocal_798 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "point_spawn_passenger03", Vector(0,3675559f, 1,047706f, -0,3697999f), Vector(0.0f, -268,0821f, 0.0f));
	*(&iLocal_798 + 80) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "point_spawn_passenger04", Vector(0,5537775f, 1,047706f, 2,376214f), Vector(0.0f, -268,0821f, 0.0f));
	*(&iLocal_798 + 88) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "point_spawn_passenger05", Vector(0,436794f, 1,047706f, 4,957778f), Vector(0.0f, -281,733f, 0.0f));
	*(&iLocal_798 + 96) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "cover_low01", Vector(0,1819467f, 1,135272f, -5,088047f), Vector(0.0f, 96,23324f, 0.0f), 4);
	*(&iLocal_798 + 104) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "cover_low02", Vector(0,1926757f, 1,142686f, -3,375624f), Vector(0.0f, 96,23324f, 0.0f), 4);
	*(&iLocal_798 + 112) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "cover_low03", Vector(0,3641178f, 1,13794f, -0,3800394f), Vector(0.0f, 90,70776f, 0.0f), 4);
	*(&iLocal_798 + 120) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "cover_low04", Vector(0,563873f, 1,13794f, 2,365209f), Vector(0.0f, 96,23324f, 0.0f), 4);
	*(&iLocal_798 + 128) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "cover_low05", Vector(0,4238341f, 1,13794f, 4,949275f), Vector(0.0f, 90,26797f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_798 + 136) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_798, "path_forward01");
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "lamp06x0", "p_gen_lamp06x", Vector(0.0f, 3,939871f, -3,118036f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "lamp06x1", "p_gen_lamp06x", Vector(0.0f, 3,939871f, 3,160479f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "lampExterior04x0", "p_gen_lampExterior04x", Vector(-0,8401687f, 2,71118f, -6,728905f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "lampExterior04x1", "p_gen_lampExterior04x", Vector(0,8279965f, 2,71118f, -6,728905f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "lampExterior04x2", "p_gen_lampExterior04x", Vector(0,8279965f, 2,71118f, 6,648854f), Vector(0.0f, 180.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_798, "lampExterior04x3", "p_gen_lampExterior04x", Vector(-0,8341438f, 2,71118f, 6,648854f), Vector(0.0f, 180.0f, 0.0f), 1);
	Function_420(&iLocal_798, &iParam0);
	return 1;
}

bool Function_426(int iParam0) //Position: 0x143F5 / 82933
{
	var uVar0;
	
	Function_421(3, 2);
	uVar0 = &uVar0;
	Function_423(&iLocal_774 + 8, "p_gen_trunk01x", 0, 0);
	Function_423(&iLocal_774 + 8, "p_gen_trunk02x", 0, 0);
	Function_423(&iLocal_774 + 8, "p_gen_footLocker05x", 0, 0);
	if (!Function_409(&iLocal_774 + 8))
	{
		return 0;
	}
	iLocal_774 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_774 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_774, "volume_main", 2,802597E-45f, Vector(0.0f, 3,59183f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 6.0f, 15.0f));
	*(&iLocal_774 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "point_spawn_guard01", Vector(0,3410997f, 1,052769f, -3,472827f), Vector(0.0f, 96,0258f, 0.0f));
	*(&iLocal_774 + 80) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "cover_low01", Vector(0,1362652f, 1,075994f, -3,47607f), Vector(0.0f, 100,7674f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_774 + 88) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_774, "path_forward01");
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "ntrunk01x0", "p_gen_trunk01x", Vector(-1,035785f, 0,9796962f, 1,148012f), Vector(0.0f, -90.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "ntrunk01x1", "p_gen_trunk01x", Vector(-1,109259f, 0,9767184f, -2,886785f), Vector(0.0f, 100,1813f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "ntrunk02x0", "p_gen_trunk02x", Vector(1,098212f, 0,9822146f, -0,4734266f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "footLocker05x0", "p_gen_footLocker05x", Vector(0,9435517f, 0,9819844f, 1,647581f), Vector(0.0f, -90.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_774, "footLocker05x1", "p_gen_footLocker05x", Vector(-1,015875f, 0,9838129f, 4,421314f), Vector(0.0f, 90.0f, 0.0f), 1);
	Function_420(&iLocal_774, &iParam0);
	return 1;
}

bool Function_427(int iParam0) //Position: 0x146A7 / 83623
{
	var uVar0;
	
	Function_421(3, 2);
	uVar0 = &uVar0;
	iLocal_770 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_770 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_770, "volume_main", 2,802597E-45f, Vector(0.0f, 3,602211f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 6.0f, 8.0f));
	Function_420(&iLocal_770, &iParam0);
	return 1;
}

bool Function_428(int iParam0) //Position: 0x14700 / 83712
{
	var uVar0;
	
	Function_421(3, 2);
	uVar0 = &uVar0;
	Function_423(&iLocal_754 + 8, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_409(&iLocal_754 + 8))
	{
		return 0;
	}
	iLocal_754 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_754 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_754, "volume_main", 2,802597E-45f, Vector(0.0f, 3,708214f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 6.0f, 12.0f));
	*(&iLocal_754 + 40) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_754, "point_spawn_engineer01", Vector(0,29686f, 1,14288f, 3,992368f), Vector(0.0f, 125,5412f, 0.0f));
	*(&iLocal_754 + 48) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_754, "gringo_train_engineer", "train_engineer", Vector(-0,374f, 1,14288f, 3,992368f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_754 + 56) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_754, "ncover_low", Vector(-0,1960669f, 1,14288f, 4,545358f), Vector(0.0f, 120,5009f, 0.0f), 4);
	Function_420(&iLocal_754, &iParam0);
	return 1;
}

void Function_429() //Position: 0x14865 / 84069
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_430(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
						{
							if (Function_310(&iLocal_989) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_UnclYells1", &Global_54076, 0, 0, 0, 0, 0);
								Function_238(&iLocal_989);
							}
						}
					}
					else if (iLocal_1445)
					{
						if (SQUAD_GET_SIZE(&Local_1567 + 72) > 2)
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
							{
								if (Function_310(&iLocal_989) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_Going4Strags", &Global_54076, 0, 0, 0, 0, 0);
									Function_238(&iLocal_989);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_430(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4) //Position: 0x149C8 / 84424
{
	if (Function_310(&iLocal_1531) <= 6.0f)
	{
		Function_437();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1461)
				{
					iLocal_1461 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_JonOffHors", "Home02_r1_JonOffHors", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
				else if (Function_310(&iLocal_989) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_NoGetOnHors", "Home02_r1_NoGetOnHors", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
					Function_238(&iLocal_989);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1461)
				{
					iLocal_1461 = 0;
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_983, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_238(&iLocal_1531);
					}
				}
			}
			if (&bParam0)
			{
				if (!iLocal_1462)
				{
					if (!iLocal_1463)
					{
						if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1421))
						{
							if (VMAG(Local_1421) >= 0.0f)
							{
								iLocal_1463 = 1;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_JonBadHerd", "Home02_r1_JonBadHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_238(&iLocal_1531);
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (iLocal_1463)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1421))
					{
						if (VMAG(Local_1421) <= 0.0f)
						{
							iLocal_1463 = 0;
						}
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
			}
			if (&bParam2)
			{
				Function_255(&Local_1567 + 16);
				if (!Function_436(StackVal, &Local_1567 + 64, Function_255(&Local_1567 + 16), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_HerdsWrongDirec", "Home02_r1_HerdsWrongDirec", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 80) <= 3 || SQUAD_GET_SIZE(&Local_1567 + 72) <= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_981))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_JonBadHerd", "Home02_r1_JonBadHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_238(&iLocal_1531);
							}
						}
					}
				}
			}
			if (bParam1 && !iLocal_1470)
			{
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (!Function_363(&Global_54076, &Local_1567 + 8, &iParam3) && !ACTORS_IN_RANGE(&Global_54076, &bLocal_981, &iParam3))
						{
							if (!iLocal_1463)
							{
								if (!iLocal_1462)
								{
									if (iLocal_976 == 0)
									{
										uLocal_1407 = &iLocal_4 + 2904;
									}
									else if (iLocal_976 == 1)
									{
										uLocal_1407 = &iLocal_4 + 2912;
									}
									else if (iLocal_976 == 2)
									{
										uLocal_1407 = &iLocal_4 + 2920;
									}
									else if (iLocal_976 == 3)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									else if (iLocal_976 == 4)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									else if (iLocal_976 == 5)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									else if (iLocal_976 == 6)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									if (Function_435(&Global_54076, &bLocal_981, &uLocal_1407))
									{
										iLocal_1462 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										if (Function_373(RAND_INT_RANGE(0, true)))
										{
											Function_434();
										}
										else
										{
											Function_433();
										}
										Function_238(&iLocal_1531);
									}
									else
									{
										iLocal_1462 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										Function_432();
										Function_238(&iLocal_1531);
									}
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, &fParam4) && Function_363(&Global_54076, &Local_1567 + 8, &fParam4))
			{
				if (&bParam1)
				{
					if (iLocal_1462)
					{
						iLocal_1462 = 0;
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_238(&iLocal_1531);
					}
				}
			}
		}
	}
}

void Function_431() //Position: 0x14F13 / 85779
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_comesbakFromherd", "Home02_r1_comesbakFromherd", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x14F70 / 85872
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_2FarBehind", "Home02_r1_2FarBehind", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x14FC1 / 85953
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_WrongDir", "Home02_r1_WrongDir", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x1500E / 86030
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_2FarAhead", "Home02_r1_2FarAhead", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_435(var uParam0, var uParam1, int iParam2) //Position: 0x1505D / 86109
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

bool Function_436(var uParam0, struct<2> Param1, float fParam3) //Position: 0x150BC / 86204
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

void Function_437() //Position: 0x15148 / 86344
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_981)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_443(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_238(&iLocal_1531);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_442();
						Function_238(&iLocal_1531);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_442();
					Function_238(&iLocal_1531);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_GunOnUncle", "Home02_r1_GunOnUncle", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
		}
		else if (&iVar0 == &iLocal_4 + 856[02])
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_443(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_441();
						Function_238(&iLocal_1531);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_440();
						Function_238(&iLocal_1531);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_440();
					Function_238(&iLocal_1531);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_GunOnAmb", "Home02_r1_GunOnAmb", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
		}
		else if ((Function_439(&iVar0, &Local_1567 + 64, 0) || Function_439(&iVar0, &Local_1567 + 80, 0)) || Function_439(&iVar0, &Local_1567 + 72, 0))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_443(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_438();
						Function_238(&iLocal_1531);
					}
					else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_LassoCow", "Home02_r1_LassoCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_238(&iLocal_1531);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_440();
						Function_238(&iLocal_1531);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_440();
					Function_238(&iLocal_1531);
				}
			}
			else if (GET_WEAPON_IN_HAND(&Global_54076) != 21 || GET_WEAPON_IN_HAND(&Global_54076) != 45)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_LassoCow", "Home02_r1_LassoCow", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_GunOnUncle", "Home02_r1_GunOnUncle", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
		}
		else if (!IS_ACTOR_ANIMAL(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_443(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_438();
						Function_238(&iLocal_1531);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_440();
						Function_238(&iLocal_1531);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_440();
					Function_238(&iLocal_1531);
				}
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_GunOnAmb", "Home02_r1_GunOnAmb", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_443(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_ShootsGunRand", "Home02_r1_ShootsGunRand", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
			}
		}
	}
	return;
}

void Function_438() //Position: 0x1557F / 87423
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_JonShootsCow", "Home02_r1_JonShootsCow", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_439(int iParam0, int iParam1, bool bParam2) //Position: 0x155D4 / 87508
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

void Function_440() //Position: 0x1561C / 87580
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_AssaultsAmb", "Home02_r1_AssaultsAmb", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441() //Position: 0x1566F / 87663
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_ShootsUncleHors", "Home02_r1_ShootsUncleHors", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_442() //Position: 0x156CA / 87754
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_AssualtsUncle", "Home02_r1_AssualtsUncle", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_443(bool bParam0) //Position: 0x15721 / 87841
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

void Function_444() //Position: 0x15767 / 87911
{
	if (Function_310(&iLocal_1547) <= 5.0f)
	{
		PRINTINT(Local_1567.f_120);
		PRINTNL();
		PRINTINT(Local_1567.f_124);
		PRINTNL();
		PRINTFLOAT((TO_FLOAT(Local_1567.f_124) / TO_FLOAT(Local_1567.f_120)));
		PRINTNL();
		Function_238(&iLocal_1547);
	}
	return;
}

void Function_445(var uParam0) //Position: 0x157AB / 87979
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

void Function_446() //Position: 0x157E0 / 88032
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		switch (iLocal_1359)
		{
			case 0x00000000:
				iLocal_1359++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_449(&iLocal_4 + 1024, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 2);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 2, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 3, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 4, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[12]);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000002:
				if (Function_310(&iLocal_1523) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_449(&iLocal_4 + 1024, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 3);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1523) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_374(&iLocal_4 + 1024);
					Function_447(StackVal, &iLocal_4 + 1024, *(&iLocal_4 + 2640), 0, 3);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000004:
				iLocal_1359++;
				break;
			}
	}
	return;
}

void Function_447(var uParam0, struct<2> Param1, int iParam3, int iParam4) //Position: 0x15981 / 88449
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		Function_448(StackVal, &uVar1, Param1, &iParam3, &iParam4, 2, 1);
		if (&iParam4 != 0)
		{
			AI_ACTOR_FORCE_SPEED(&uVar1, &iParam4);
		}
		bVar0++;
	}
}

void Function_448(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x159D2 / 88530
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

void Function_449(var uParam0, int iParam1, bool bParam2) //Position: 0x15AF1 / 88817
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
				SET_ACTOR_MIN_SPEED(&uVar1, iParam1);
				SET_ACTOR_MAX_SPEED(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_450() //Position: 0x15B48 / 88904
{
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		switch (iLocal_1358)
		{
			case 0x00000000:
				iLocal_1358++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 1);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[12]);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x00000002:
				if (Function_310(&iLocal_1511) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_449(&iLocal_4 + 960, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 3);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1511) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_374(&iLocal_4 + 960);
					Function_447(StackVal, &iLocal_4 + 960, *(&iLocal_4 + 2640), 0, 3);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000004:
				iLocal_1358++;
				break;
			}
	}
	return;
}

void Function_451(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x15CE9 / 89321
{
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		if (SQUAD_IS_VALID(&iParam0))
		{
			switch (iLocal_1357)
			{
				case 0x00000000:
					iLocal_1357++;
					break;
				
				case 0x00000001:
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					Function_196(13, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_981, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &iLocal_4 + 2928, -14.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
					iLocal_1357++;
					break;
				
				case 0x00000002:
					if (Function_310(&iParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(&iParam0))
						{
							if (SQUAD_GET_SIZE(&iParam0) > 2)
							{
								if (!iLocal_1445)
								{
									iLocal_1391 = Function_452(&iParam0, &Local_1567 + 8);
									if (IS_ACTOR_VALID(&iLocal_1391))
									{
										bLocal_1418 = Vector(0.0f, 0.0f, 0.0f);
										bLocal_1355 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &iLocal_1391, &bLocal_1418, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
										TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
										TASK_PRIORITY_SET(&bLocal_981, true);
										iLocal_1445 = 1;
									}
								}
								else if (!Function_439(&iLocal_1391, &iParam0, 0))
								{
									iLocal_1445 = 0;
								}
							}
							else if (!GET_TASK_STATUS(&bLocal_981, 72) != 1)
							{
								bLocal_1355 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &fParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
								TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
								TASK_PRIORITY_SET(&bLocal_981, true);
								iLocal_1445 = 0;
							}
						}
						Function_238(&iParam1);
					}
					if (IS_VOLUME_VALID(&iLocal_4 + 1840))
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_981, &iLocal_4 + 1840))
						{
							iLocal_1357++;
						}
					}
					break;
				
				case 0x00000003:
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					GET_OBJECT_POSITION(&iLocal_4 + 2608, &uLocal_1439);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2264[6], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(0, &uLocal_1439, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
					iLocal_1357++;
					break;
				
				case 0x00000004:
					iLocal_1357++;
					break;
			}
		}
	}
}

var Function_452(var uParam0, int iParam1) //Position: 0x15F4D / 89933
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
					fVar3 = Function_453(&iParam1, &uVar2);
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

var Function_453(int iParam0, int iParam1) //Position: 0x15FD2 / 90066
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_364(&iParam0);
			Var0 = Function_364(&iParam0);
			Function_364(&iParam1);
			Var2 = Function_364(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_454() //Position: 0x1606F / 90223
{
	int iVar0;
	int iVar1;
	
	iVar0 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 80));
	iVar1 = (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 72) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 80));
	UI_SET_STRING("Race_Pos", INT_TO_STRING((iVar0 - iVar1)));
	UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(15));
	UI_LABEL_SET_TEXT("RacePosition", "Race_Position_Format");
	UI_REFRESH("RacePosition");
	return;
}

void Function_455(struct<113> Param0) //Position: 0x16120 / 90400
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
						if ((!Function_457(&iVar1, &Global_54076, bVar6) && !Function_363(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_456(&iVar1), &uVar3, 3212836864))
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
						if ((!Function_457(&iVar1, &Global_54076, bVar6) && !Function_363(&iVar1, &Param0 + 8, fVar5)) && !WOULD_ACTOR_BE_VISIBLE(Function_456(&iVar1), &uVar3, 3212836864))
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

var Function_456(bool bParam0) //Position: 0x162E8 / 90856
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bParam0));
	}
	return 4294967295;
}

bool Function_457(int iParam0, var uParam1, bool bParam2) //Position: 0x16305 / 90885
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

void Function_458(struct<149> Param0) //Position: 0x1641A / 91162
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
										if (!Function_363(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_363(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_363(&iVar1, &Param0 + 16, fVar4))
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
								if (Function_310(&Param0 + 132) <= &fParam1)
								{
									if (!Function_363(&iVar1, &Param0 + 8, fVar4))
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
									Function_238(&Param0 + 132);
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

void Function_459(struct<153> Param0) //Position: 0x168D2 / 92370
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
									if (!Function_363(&iVar0, &Param0 + 16, fVar8))
									{
										if (Function_363(&iVar0, &Param0 + 16, fVar6))
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
									Function_238(&Param0 + 132);
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
								if (!Function_363(&iVar0, &Param0 + 8, fVar7))
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
								if (Function_363(&iVar0, &Param0 + 8, fVar6) || Function_363(&iVar0, &Param0 + 16, fVar6))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_363(&iVar0, &Param0 + 8, fVar6))
									{
									}
									else if (Function_363(&iVar0, &Param0 + 16, fVar6))
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
												if (Function_363(&iVar0, &Param0 + 152[bVar3], 7.0f))
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
											else if (Function_363(&iVar0, &Param0 + 152[bVar3], 15.0f))
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

void Function_460(struct<113> Param0) //Position: 0x17046 / 94278
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
								Function_462(&Param0 + 88);
								Var2 = Function_462(&Param0 + 88);
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
								Function_461(StackVal, Var0, &Param0 + 24);
								Var0 = Function_461(StackVal, Var0, &Param0 + 24);
								Function_462(&Param0 + 80);
								Var2 = Function_462(&Param0 + 80);
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
								Function_461(StackVal, Var0, &Param0 + 24);
								Var0 = Function_461(StackVal, Var0, &Param0 + 24);
								Function_462(&Param0 + 72);
								Var2 = Function_462(&Param0 + 72);
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
							Function_462(&Param0 + 64);
							Var2 = Function_462(&Param0 + 64);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
							{
								Function_255(&Param0);
								if (!Function_74(StackVal, Function_255(&Param0)))
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
								Function_255(&Param0 + 8);
								if (!Function_74(StackVal, Function_255(&Param0 + 8)))
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

struct<8> Function_461(struct<2> Param0, int iParam2) //Position: 0x1736C / 95084
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

struct<8> Function_462(int iParam0) //Position: 0x1740C / 95244
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
		UNK_0x44986367(&Var4, Function_463(&uVar1));
		vVar6 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, vVar6, StackVal);
		bVar0++;
	}
	vVar6 = (vVar6.x / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	vVar6.f_4 = 0.0f;
	vVar6.f_8 = (vVar6.z / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	Var2.f_4 = UNK_0x9C40E671(&vVar6);
	return StackVal, Var2;
}

var Function_463(int iParam0) //Position: 0x1747E / 95358
{
	return GET_HEADING(&iParam0);
}

void Function_464(struct<125> Param0) //Position: 0x1748A / 95370
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
								if (Function_363(&uVar1, &Param0 + 16, fVar2))
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
								if (Function_363(&uVar1, &Param0 + 16, fVar2))
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
								if (Function_363(&uVar1, &Param0 + 16, fVar2))
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

void Function_465(var uParam0, var uParam1, bool bParam2) //Position: 0x176EB / 95979
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

void Function_466() //Position: 0x1775D / 96093
{
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		if (bLocal_1447)
		{
			Function_460(&Local_1567);
			Function_459(&Local_1567);
			Function_458(&Local_1567, 0x41700000);
			if (iLocal_977 > 10)
			{
				if (!iLocal_1446)
				{
					Function_487(&Local_1567 + 72, &iLocal_1503, 3.0f, &iLocal_4 + 2928, -14.0f);
				}
			}
			if (iLocal_977 > 10)
			{
				if (Function_310(&iLocal_985) <= (3.0f * 8.0f))
				{
					if (Function_310(&iLocal_1507) <= 0,2f)
					{
						Function_455(&Local_1567);
						Function_238(&iLocal_1507);
					}
				}
			}
			Function_454();
		}
		Function_486();
		Function_445(&Global_54076);
		Function_485();
		Function_484();
		Function_444();
		if (iLocal_977 > 9)
		{
			if (((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 88)) && SQUAD_IS_VALID(&Local_1567 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1567 + 64) != bLocal_1367 || ((SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 88) != 0) && SQUAD_GET_SIZE(&Local_1567 + 80) != 0))
				{
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
			}
		}
		Function_478();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[5] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46754[0];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 2168[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295))
			{
				Function_477();
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415() && Function_477())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1360 = 0;
				iLocal_1361 = 0;
				iLocal_1358 = 0;
				iLocal_1359 = 0;
				iLocal_1371 = 0;
				iLocal_1362 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				Function_407(&iLocal_1449);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1448 = Function_476(Function_332(Local_878));
				if (bLocal_1448)
				{
				}
				bLocal_1374 = Global_53524.f_176;
				bLocal_1375 = Global_53524.f_180;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1567.f_120 = bLocal_1374;
				Local_1567.f_124 = bLocal_1375;
				Function_474();
				if (IS_ACTOR_VALID(&bLocal_1395))
				{
					SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
					Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1397))
				{
					SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
					Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				}
				if (iLocal_997[5] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 2168[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 2168[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2168[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if ((SQUAD_IS_VALID(&Local_1567 + 88) && SQUAD_IS_VALID(&Local_1567 + 80)) && SQUAD_IS_VALID(&Local_1567 + 72))
				{
					Function_354(&Local_1567 + 88);
					Function_354(&Local_1567 + 80);
					Function_354(&Local_1567 + 72);
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
					Function_314(&Local_1567 + 80, &Local_1567 + 64);
					Function_314(&Local_1567 + 72, &Local_1567 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 64);
					Function_313(&Local_1567 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[515]), &bLocal_1393, "Engineer", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[615]), &iLocal_4 + 1200, "Train_Passenger", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[715]), &iLocal_4 + 1248, "Train_Marshal", 0, 0x5f5e100, 1);
				Function_390(&(Local_1075[115]), 2);
				Function_390(&(Local_1075[215]), 2);
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_390(&(Local_1075[515]), 2);
				Function_390(&(Local_1075[615]), 2);
				Function_390(&(Local_1075[715]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				Function_379();
				Function_473();
				Function_313(&Local_1567 + 64);
				Function_313(&Local_1567 + 72);
				Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
				Function_376(&Local_1567 + 72, &iLocal_4 + 1464);
				Function_375(&Local_1567 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1481))
				{
					if (IS_OBJECT_VALID(&Local_1567 + 8))
					{
						uLocal_1481 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_876, "HOME02RANCH01_CAMERA_FOCUS", &Local_1567 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1481))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1481, 0);
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					Function_196(13, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_981, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				if (iLocal_997[5] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_473();
						Function_313(&Local_1567 + 64);
						Function_313(&Local_1567 + 72);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
						Function_376(&Local_1567 + 72, &iLocal_4 + 1464);
						Function_375(&Local_1567 + 64, 2, 1);
					}
				}
				iLocal_1445 = 0;
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 72);
					Function_374(&Local_1567 + 72);
				}
				(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1567 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 80);
					Function_374(&Local_1567 + 80);
				}
				*(&Local_1567 + 16) = &iLocal_4 + 2624;
				GET_OBJECT_POSITION(&iLocal_4 + 2624, &uLocal_1415);
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 88);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1672, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				}
				if (bLocal_1448)
				{
					if (IS_ACTOR_DEAD(&bLocal_1393))
					{
						Function_433();
					}
					else
					{
						Function_472();
					}
				}
				else
				{
					Function_471();
				}
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				if (bLocal_1448)
				{
					Function_470();
				}
				else
				{
					Function_469();
				}
				Function_238(&iLocal_985);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				Function_468();
				Function_238(&iLocal_985);
				iLocal_977 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_370("home02_ranch01_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				if (iLocal_1445)
				{
					Function_356(&fLocal_993, 245.0f, 395.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				}
				else
				{
					Function_356(&fLocal_993, 135.0f, 315.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
			}
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_1393))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1393, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_1393, "home02_r1_JonGoesBakT4", &Global_54076, 1, 0, 0, 0, 0);
						Function_238(&iLocal_989);
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[02], "home02_r1_JonGoesBakT1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[22], "home02_r1_JonGoesBakT3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[42]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[42], "home02_r1_JonGoesBakT5", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[12], "home02_r1_JonGoesBakT2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[32], "home02_r1_JonGoesBakT6", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			if (Function_310(&iLocal_985) <= (2,5f * 8.0f))
			{
				if ((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 64) <= bLocal_1367)
					{
						if (SQUAD_GET_SIZE(&Local_1567 + 80) == 0)
						{
							if (SQUAD_GET_SIZE(&Local_1567 + 72) <= 0 && SQUAD_GET_SIZE(&Local_1567 + 72) > 3)
							{
								Function_259();
								Function_238(&iLocal_985);
								iLocal_977 = 11;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (SQUAD_GET_SIZE(&Local_1567 + 72) == 1)
				{
					Function_370("home02_ranch01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_370("home02_ranch01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 245.0f, 395.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
			}
			if (!iLocal_1449[0])
			{
				if ((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0) && SQUAD_GET_SIZE(&Local_1567 + 72) >= 3)
					{
						if (IS_ACTOR_VALID(&bLocal_981))
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 24.0f))
							{
								iLocal_1449[0] = 1;
								Function_353();
							}
						}
					}
				}
			}
			if ((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1567 + 64) == bLocal_1367)
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 10;
					}
				}
			}
			if (Function_310(&iLocal_989) <= 45.0f)
			{
				Function_259();
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				iLocal_977 = 10;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 64);
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			bLocal_1374 = Local_1567.f_120;
			Global_53524.f_176 = bLocal_1374;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1375 = Local_1567.f_124;
			Global_53524.f_180 = bLocal_1375;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_467();
			Function_192();
			iLocal_997[6] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 7;
			iLocal_977 = 0;
			break;
	}
	return;
}

void Function_467() //Position: 0x1889B / 100507
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1104))
	{
		Function_187(&iLocal_4 + 1104, 0, 0);
		RELEASE_OBJECT_REF(&iLocal_4 + 1104);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
		Function_447(StackVal, &iLocal_4 + 960, Local_1433, 0, 3);
		RELEASE_OBJECT_REF(&iLocal_4 + 960);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
		Function_447(StackVal, &iLocal_4 + 1024, Local_1433, 0, 3);
		RELEASE_OBJECT_REF(&iLocal_4 + 1024);
	}
	return;
}

void Function_468() //Position: 0x1892C / 100652
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_DealWitStrags", "Home02_r1_DealWitStrags", 0, 2, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469() //Position: 0x18983 / 100739
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_responds2UncleTrain", "Home02_r1_responds2UncleTrain", 1, 2, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470() //Position: 0x189E6 / 100838
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_ContinueHerdPlains", "Home02_r1_ContinueHerdPlains", 1, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_471() //Position: 0x18A47 / 100935
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_NoHelpRobs", "Home02_r1_NoHelpRobs", 0, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_472() //Position: 0x18A98 / 101016
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_BakHerdTrain", "Home02_r1_BakHerdTrain", 0, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x18AED / 101101
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_474() //Position: 0x18B18 / 101144
{
	if (!IS_ACTOR_VALID(&bLocal_1393))
	{
		bLocal_1393 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "HOME02_RANCH01_ENGINEER01", 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_ACTOR_VALID(&bLocal_1393))
		{
			SET_ACTOR_FACTION(&bLocal_1393, 20);
			SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			Function_327(&bLocal_1393, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1393);
			uLocal_1483 = ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1393, &iLocal_754 + 48, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_STAND_STILL(&bLocal_1393, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1393, true);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		Function_406();
		if (SQUAD_IS_VALID(&iLocal_4 + 1248))
		{
			Function_329(&iLocal_4 + 1248, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
			Function_326(&iLocal_4 + 1248, 0, 0, 0);
			Function_405(&iLocal_4 + 1248, 4, 0.0f);
			Function_404();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		Function_403();
		if (SQUAD_IS_VALID(&iLocal_4 + 1200))
		{
			Function_329(&iLocal_4 + 1200, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
			Function_326(&iLocal_4 + 1200, 0, 0, 0);
			Function_402();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2168[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_475();
	return;
}

void Function_475() //Position: 0x18D23 / 101667
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2928;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2632, &iLocal_1471, 5, 2.0f, 15,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
		}
	}
	return;
}

bool Function_476(bool bParam0) //Position: 0x18DFF / 101887
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = bParam0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (iVar1 / 10);
		iVar0++;
	}
	bVar2 = (iVar1 % 10);
	PRINTINT(bVar2);
	PRINTNL();
	return Function_373(bVar2);
}

int Function_477() //Position: 0x18E36 / 101942
{
	Function_414(&iLocal_4 + 616, 208, 2, 0);
	Function_414(&iLocal_4 + 616, 73, 2, 0);
	Function_414(&iLocal_4 + 616, 74, 2, 0);
	Function_414(&iLocal_4 + 616, 33, 2, 0);
	Function_414(&iLocal_4 + 616, 238, 2, 0);
	Function_414(&iLocal_4 + 616, 191, 2, 0);
	Function_414(&iLocal_4 + 616, 192, 2, 0);
	if (Function_409(&iLocal_4 + 616))
	{
		return 1;
	}
	return 0;
}

void Function_478() //Position: 0x18EA5 / 102053
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 10)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_479(1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					if (iLocal_1445)
					{
						if (SQUAD_GET_SIZE(&Local_1567 + 72) > 2)
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
							{
								if (Function_310(&iLocal_989) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_UncleRoundsWrags", &Global_54076, 0, 0, 0, 0, 0);
									Function_238(&iLocal_989);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_479(bool bParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x18F95 / 102293
{
	if (Function_310(&iLocal_1531) <= 6.0f)
	{
		Function_437();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1461)
				{
					iLocal_1461 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_JonOffHors", "Home02_r1_JonOffHors", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
				else if (Function_310(&iLocal_989) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_NoGetOnHors", "Home02_r1_NoGetOnHors", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
					Function_238(&iLocal_989);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_1461)
				{
					iLocal_1461 = 0;
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_983, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_238(&iLocal_1531);
					}
				}
			}
			if (&bParam0)
			{
				if (!iLocal_1462)
				{
					if (!iLocal_1463)
					{
						if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1421))
						{
							if (VMAG(Local_1421) >= 0.0f)
							{
								iLocal_1463 = 1;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_JonBadHerd", "Home02_r1_JonBadHerd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_238(&iLocal_1531);
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (iLocal_1463)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1421))
					{
						if (VMAG(Local_1421) <= 0.0f)
						{
							iLocal_1463 = 0;
						}
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
			}
			if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
			{
				if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
				{
					if (!Function_481(&Global_54076, &bLocal_981, &fParam2))
					{
						if (&bParam1)
						{
							if (!iLocal_1463)
							{
								if (!iLocal_1462)
								{
									if (iLocal_976 == 0)
									{
										uLocal_1407 = &iLocal_4 + 2904;
									}
									else if (iLocal_976 == 1)
									{
										uLocal_1407 = &iLocal_4 + 2912;
									}
									else if (iLocal_976 == 2)
									{
										uLocal_1407 = &iLocal_4 + 2920;
									}
									else if (iLocal_976 == 3)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									else if (iLocal_976 == 4)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									else if (iLocal_976 == 5)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									else if (iLocal_976 == 6)
									{
										uLocal_1407 = &iLocal_4 + 2928;
									}
									if (Function_480(&Global_54076, &bLocal_981, &uLocal_1407))
									{
										iLocal_1462 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										if (Function_373(RAND_INT_RANGE(0, true)))
										{
											Function_434();
										}
										else
										{
											Function_433();
										}
										Function_238(&iLocal_1531);
									}
									else
									{
										iLocal_1462 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										Function_432();
										Function_238(&iLocal_1531);
									}
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, &uParam3))
			{
				if (&bParam1)
				{
					if (iLocal_1462)
					{
						iLocal_1462 = 0;
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_431();
						Function_238(&iLocal_1531);
					}
				}
			}
		}
	}
}

bool Function_480(var uParam0, var uParam1, int iParam2) //Position: 0x193AC / 103340
{
	var uVar0;
	var uVar2;
	float fVar4;
	var uVar5;
	float fVar6;
	var uVar7;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
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

bool Function_481(bool bParam0, bool bParam1, float fParam2) //Position: 0x1940B / 103435
{
	float fVar0;
	
	fVar0 = Function_482(&bParam0, &bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_482(var uParam0, int iParam1) //Position: 0x1942A / 103466
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_483(&uVar0, &uVar2);
	return iVar4;
}

var Function_483(struct<2> Param0) //Position: 0x1944B / 103499
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_484() //Position: 0x1946A / 103530
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		switch (iLocal_1359)
		{
			case 0x00000000:
				iLocal_1359++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_449(&iLocal_4 + 1024, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 2);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 2, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 3, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 4, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[12]);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000002:
				if (Function_310(&iLocal_1523) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_449(&iLocal_4 + 1024, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 3);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1523) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_374(&iLocal_4 + 1024);
					Function_447(StackVal, &iLocal_4 + 1024, *(&iLocal_4 + 2640), 0, 3);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000004:
				iLocal_1359++;
				break;
			}
	}
	return;
}

void Function_485() //Position: 0x1960B / 103947
{
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		switch (iLocal_1358)
		{
			case 0x00000000:
				iLocal_1358++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 1);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[12]);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x00000002:
				if (Function_310(&iLocal_1511) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_449(&iLocal_4 + 960, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 3);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1511) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_374(&iLocal_4 + 960);
					Function_447(StackVal, &iLocal_4 + 960, *(&iLocal_4 + 2640), 0, 3);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000004:
				iLocal_1358++;
				break;
			}
	}
	return;
}

void Function_486() //Position: 0x197AC / 104364
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			iLocal_1366++;
			break;
		
		case 0x00000001:
			if (bLocal_1448)
			{
				if (IS_ACTOR_VALID(&bLocal_1393))
				{
					if (!IS_ACTOR_DEAD(&bLocal_1393))
					{
						Function_238(&iLocal_1515);
						iLocal_1366++;
					}
				}
			}
			else
			{
				bLocal_1464 = true;
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000002:
			if (bLocal_1464)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 7.0f);
				Function_238(&iLocal_1515);
				iLocal_1366 = 10;
			}
			else
			{
				Function_238(&iLocal_1515);
				iLocal_1366 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_310(&iLocal_1515) <= 40.0f)
			{
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000004:
			TRAIN_SET_TARGET_SPEED(iLocal_1365, 1.0f);
			iLocal_1565 = PLAY_SOUND_FROM_OBJECT(&(Local_1615[02]), "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
			Function_238(&iLocal_1515);
			iLocal_1366++;
			break;
		
		case 0x00000005:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 2.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000006:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 3.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000007:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 4.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000008:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 5.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000009:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 6.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000A:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				iLocal_1565 = PLAY_SOUND_FROM_OBJECT(&(Local_1615[02]), "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 7.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000B:
			if (Function_310(&iLocal_1515) <= 7.0f)
			{
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000C:
			if (IS_OBJECT_VALID(&(Local_1615[02])))
			{
				Function_178();
			}
			if (IS_ACTOR_VALID(&bLocal_1393))
			{
				RELEASE_ACTOR(&bLocal_1393);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1200))
			{
				Function_187(&iLocal_4 + 1200, 0, 0);
				RELEASE_OBJECT_REF(&iLocal_4 + 1200);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1248))
			{
				Function_187(&iLocal_4 + 1248, 0, 0);
				RELEASE_OBJECT_REF(&iLocal_4 + 1248);
			}
			iLocal_1366++;
			break;
		
		case 0x0000000D:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_487(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x19A81 / 105089
{
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		if (SQUAD_IS_VALID(&iParam0))
		{
			switch (iLocal_1357)
			{
				case 0x00000000:
					iLocal_1357++;
					break;
				
				case 0x00000001:
					if (Function_310(&iParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(&iParam0))
						{
							if (SQUAD_GET_SIZE(&iParam0) > 2)
							{
								if (!iLocal_1445)
								{
									iLocal_1391 = Function_452(&iParam0, &Local_1567 + 8);
									if (IS_ACTOR_VALID(&iLocal_1391))
									{
										bLocal_1418 = Vector(0.0f, 0.0f, 0.0f);
										bLocal_1355 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, &iLocal_1391, &bLocal_1418, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
										TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
										TASK_PRIORITY_SET(&bLocal_981, true);
										iLocal_1445 = 1;
									}
								}
								else if (!Function_439(&iLocal_1391, &iParam0, 0))
								{
									iLocal_1445 = 0;
								}
							}
							else if (!GET_TASK_STATUS(&bLocal_981, 72) != 1)
							{
								bLocal_1355 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &fParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
								TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
								TASK_PRIORITY_SET(&bLocal_981, true);
								iLocal_1445 = 0;
							}
						}
						Function_238(&iParam1);
					}
					break;
				
				case 0x00000003:
					iLocal_1357++;
					break;
			}
		}
	}
}

void Function_488() //Position: 0x19BCF / 105423
{
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
		{
			Function_365(Function_452(&iLocal_4 + 1024, &Global_54076));
			STREAMING_LOAD_BOUNDS_EXT(3, Function_365(Function_452(&iLocal_4 + 1024, &Global_54076)), 50.0f, 1);
		}
	}
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_529();
		Function_528();
		Function_520();
		Function_518();
		Function_512();
		Function_511();
		Function_510();
		Function_445(&Global_54076);
		Function_444();
		Function_464(&Local_1567);
		if (bLocal_1447)
		{
			Function_460(&Local_1567);
			Function_459(&Local_1567);
			Function_458(&Local_1567, 0x41700000);
			if (Function_310(&iLocal_1507) <= 0,2f)
			{
				Function_455(&Local_1567);
				Function_238(&iLocal_1507);
			}
		}
		if (iLocal_977 < 8)
		{
			if (IS_ACTOR_VALID(&Global_54076) && IS_OBJECT_VALID(&Local_1567 + 8))
			{
				iLocal_1399 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_VALID(&iLocal_1399))
				{
					if (Function_439(&iLocal_1399, &iLocal_4 + 960, 0) || Function_439(&iLocal_1399, &iLocal_4 + 1024, 0))
					{
						if (!IS_ACTOR_SHOOTING(&Global_54076))
						{
							if (IS_WEAPON_DRAWN(&Global_54076))
							{
								if (Function_509(&Global_54076, &iLocal_4 + 960, (140.0f + 15.0f)) || Function_509(&Global_54076, &iLocal_4 + 1024, (140.0f + 15.0f)))
								{
									bLocal_1448 = true;
									if (IS_BLIP_VALID(&uLocal_1403))
									{
										REMOVE_BLIP(&uLocal_1403);
									}
									if (IS_OBJECT_VALID(&uLocal_1405))
									{
										DESTROY_OBJECT(&uLocal_1405);
									}
									if (bLocal_1447)
									{
										Function_366();
									}
									UI_HIDE("RacePosition");
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_259();
									Function_238(&iLocal_985);
									iLocal_977 = 9;
								}
							}
						}
					}
				}
				if (!Function_363(&Global_54076, &Local_1567 + 8, 135.0f))
				{
					bLocal_1448 = true;
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					if (bLocal_1447)
					{
						Function_366();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 9;
				}
				if (Function_509(&Global_54076, &iLocal_4 + 960, 140.0f) && IS_ACTOR_SHOOTING(&Global_54076))
				{
					bLocal_1448 = true;
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					if (bLocal_1447)
					{
						Function_366();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 9;
				}
				else if (Function_509(&Global_54076, &iLocal_4 + 1024, 140.0f) && IS_ACTOR_SHOOTING(&Global_54076))
				{
					bLocal_1448 = true;
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					if (bLocal_1447)
					{
						Function_366();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 9;
				}
				if (iLocal_977 == 8)
				{
					if (Function_310(&iLocal_985) <= 3.0f)
					{
						if (Function_509(&Global_54076, &iLocal_4 + 960, 4.0f) || Function_509(&Global_54076, &iLocal_4 + 1024, 4.0f))
						{
							bLocal_1448 = true;
							if (IS_BLIP_VALID(&uLocal_1403))
							{
								REMOVE_BLIP(&uLocal_1403);
							}
							if (IS_OBJECT_VALID(&uLocal_1405))
							{
								DESTROY_OBJECT(&uLocal_1405);
							}
							if (bLocal_1447)
							{
								Function_366();
							}
							UI_HIDE("RacePosition");
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_259();
							Function_238(&iLocal_985);
							iLocal_977 = 9;
						}
					}
				}
				if (!bLocal_1448)
				{
					if (Function_310(&iLocal_985) <= 20.0f)
					{
						if (Function_363(&Global_54076, &Local_1567 + 8, (135.0f - 45.0f)))
						{
							iLocal_1020 = 0;
							bLocal_1448 = false;
							Function_354(&iLocal_4 + 960);
							Function_354(&iLocal_4 + 1024);
							if (IS_BLIP_VALID(&uLocal_1403))
							{
								REMOVE_BLIP(&uLocal_1403);
							}
							if (IS_OBJECT_VALID(&uLocal_1405))
							{
								DESTROY_OBJECT(&uLocal_1405);
							}
							UI_HIDE("RacePosition");
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_259();
							Function_238(&iLocal_985);
							iLocal_977 = 106;
						}
					}
				}
				if (!bLocal_1448)
				{
					if (Function_310(&iLocal_985) <= 5.0f)
					{
						if (Function_481(&Global_54076, &bLocal_981, (8.0f * 2.0f)))
						{
							iLocal_1020 = 0;
							bLocal_1448 = false;
							Function_354(&iLocal_4 + 960);
							Function_354(&iLocal_4 + 1024);
							if (IS_BLIP_VALID(&uLocal_1403))
							{
								REMOVE_BLIP(&uLocal_1403);
							}
							if (IS_OBJECT_VALID(&uLocal_1405))
							{
								DESTROY_OBJECT(&uLocal_1405);
							}
							UI_HIDE("RacePosition");
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_259();
							Function_238(&iLocal_985);
							iLocal_977 = 106;
						}
					}
				}
			}
		}
		Function_507();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[4] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46754[0];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 2120[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295)) && Function_506())
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415() && Function_506())
			{
				if (bLocal_1448)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				}
				else
				{
					AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				}
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1358 = 0;
				iLocal_1359 = 0;
				iLocal_1360 = 0;
				iLocal_1361 = 0;
				iLocal_1371 = 0;
				iLocal_1362 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				iLocal_1469 = 0;
				Function_407(&iLocal_1449);
				STREAMING_LOAD_BOUNDS(*(&iLocal_4 + 2688), 250.0f, 1);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1448 = Function_476(Function_332(Local_878));
				if (bLocal_1448)
				{
				}
				bLocal_1374 = Global_53524.f_176;
				bLocal_1375 = Global_53524.f_180;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1567.f_120 = bLocal_1374;
				Local_1567.f_124 = bLocal_1375;
				Function_500();
				if (IS_ACTOR_VALID(&bLocal_1395))
				{
					SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
					Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1397))
				{
					SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
					Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				}
				if (iLocal_997[4] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 2120[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 2120[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2120[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else if (bLocal_1448)
				{
					Function_238(&iLocal_985);
					iLocal_977 = 9;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if ((SQUAD_IS_VALID(&Local_1567 + 88) && SQUAD_IS_VALID(&Local_1567 + 80)) && SQUAD_IS_VALID(&Local_1567 + 72))
				{
					Function_313(&Local_1567 + 88);
					Function_354(&Local_1567 + 88);
					Function_354(&Local_1567 + 80);
					Function_354(&Local_1567 + 72);
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
					Function_314(&Local_1567 + 80, &Local_1567 + 64);
					Function_314(&Local_1567 + 72, &Local_1567 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 64);
					Function_313(&Local_1567 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
				}
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 8.0f);
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[515]), &bLocal_1393, "Engineer", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[615]), &iLocal_4 + 1200, "Train_Passenger", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[715]), &iLocal_4 + 1248, "Train_Marshal", 0, 0x5f5e100, 1);
				Function_390(&(Local_1075[115]), 2);
				Function_390(&(Local_1075[215]), 2);
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_390(&(Local_1075[515]), 2);
				Function_390(&(Local_1075[615]), 2);
				Function_390(&(Local_1075[715]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (IS_OBJECT_VALID(&(Local_1615[02])))
			{
				if (Function_499(iLocal_1365, 4.0f))
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_498();
						Function_313(&Local_1567 + 64);
						Function_313(&Local_1567 + 72);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
						Function_376(&Local_1567 + 72, &iLocal_4 + 1464);
						Function_375(&Local_1567 + 64, 2, 1);
					}
					CAMERA_RESET(0);
					Function_238(&iLocal_985);
					iLocal_977 = 103;
				}
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					Function_497(&iLocal_4 + 960, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!IS_OBJECT_VALID(&uLocal_1481))
				{
					if (IS_OBJECT_VALID(&Local_1567 + 8))
					{
						uLocal_1481 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_876, "HOME02RANCH01_CAMERA_FOCUS", &Local_1567 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1481))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1481, 0);
						}
					}
				}
				if (iLocal_997[4] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_498();
						Function_313(&Local_1567 + 64);
						Function_313(&Local_1567 + 72);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
						Function_376(&Local_1567 + 72, &iLocal_4 + 1464);
						Function_375(&Local_1567 + 64, 2, 1);
					}
				}
				iLocal_1445 = 0;
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 72);
					Function_374(&Local_1567 + 72);
				}
				*(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1567 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 80);
					Function_374(&Local_1567 + 80);
				}
				*(&Local_1567 + 16) = &iLocal_4 + 2624;
				GET_OBJECT_POSITION(&iLocal_4 + 2624, &uLocal_1415);
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 88);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1672, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				}
				Function_496();
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_370("home02_ranch01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[02], "Home02_r1_CrimsYellAtJon1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 888[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[22], "Home02_r1_CriminalsYelJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 968[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 968[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 968[02], "Home02_r1_CriminalsYelJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1393))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1393, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_1393, "Home02_r1_EnginCries4Help", &Global_54076, 1, 0, 0, 0, 0);
						Function_238(&iLocal_989);
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[02], "Home02_r1_PassCries4Helps1", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[42]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[42], "Home02_r1_GuardsCry4Help1", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[12], "Home02_r1_CrimsYellAtJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 968[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 968[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 968[12], "Home02_r1_CriminalsYelJon3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[12], "Home02_r1_PassCries4Helps2", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[32], "Home02_r1_GuardsCry4Help2", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[32], "Home02_r1_CriminalsYelJon1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[22], "Home02_r1_PassCries4Helps3", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			iLocal_1020 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (SQUAD_IS_VALID(&iLocal_4 + 960))
			{
				Function_497(&iLocal_4 + 960, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_SET_FACTION(&iLocal_4 + 960, 19);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1024))
			{
				Function_497(&iLocal_4 + 1024, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_SET_FACTION(&iLocal_4 + 1024, 19);
				Function_494(&iLocal_4 + 1024, &iLocal_4 + 1248, 3);
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
			{
				Function_493();
			}
			Function_238(&iLocal_985);
			iLocal_977 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 5.0f)
			{
				Function_492();
				Function_238(&iLocal_985);
				iLocal_977 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_370("home02_ranch01_obj05a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[02], "Home02_r1_CrimsYellAtJon1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 888[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[32], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[32], "Home02_r1_CriminalsYelJon1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 968[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 968[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 968[12], "Home02_r1_CriminalsYelJon3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_1393))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1393, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_1393, "Home02_r1_EnginCries4Help", &Global_54076, 1, 0, 0, 0, 0);
						Function_238(&iLocal_989);
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[12], "Home02_r1_CrimsYellAtJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 888[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[22], "Home02_r1_CriminalsYelJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 968[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 968[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 968[02], "Home02_r1_CriminalsYelJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[12], "Home02_r1_PassCries4Helps2", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[32], "Home02_r1_GuardsCry4Help2", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[02], "Home02_r1_PassCries4Helps1", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[22], "Home02_r1_PassCries4Helps3", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[42]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[42], "Home02_r1_GuardsCry4Help1", &Global_54076, 1, 1, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			if (!bLocal_1448)
			{
				if (Function_310(&iLocal_985) <= 25.0f)
				{
					if (Function_363(&Global_54076, &Local_1567 + 8, (135.0f - 30.0f)))
					{
						iLocal_1020 = 0;
						bLocal_1448 = false;
						Function_354(&iLocal_4 + 960);
						Function_354(&iLocal_4 + 1024);
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 106;
					}
				}
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 960) && SQUAD_IS_VALID(&iLocal_4 + 1024))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 960) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
				{
					iLocal_1020 = 0;
					bLocal_1448 = true;
					Function_354(&iLocal_4 + 960);
					Function_354(&iLocal_4 + 1024);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 13;
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1393))
			{
				if (IS_ACTOR_DEAD(&bLocal_1393))
				{
					iLocal_1020 = 0;
					bLocal_1448 = true;
					Function_354(&iLocal_4 + 960);
					Function_354(&iLocal_4 + 1024);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 18;
				}
			}
			break;
		
		case 0x0000000D:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			iLocal_1020 = 0;
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1393))
			{
				if (Function_481(&Global_54076, &bLocal_1393, 24.0f))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 16;
				}
				else
				{
					if (!IS_BLIP_VALID(&uLocal_1403))
					{
						uLocal_1403 = ADD_BLIP_FOR_ACTOR(&bLocal_1393, 325, 0, 2, 0);
						if (IS_BLIP_VALID(&uLocal_1403))
						{
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 14;
				}
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 18;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 1.0f)
			{
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_370("home02_ranch01_obj05b", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[02], "Home02_r1_SavesTrain2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[22], "Home02_r1_SavesTrain22", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[42]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[42], "Home02_r1_SaveTrain3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[12], "Home02_r1_SavesTrain21", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[32], "Home02_r1_SaveTrain31", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_1393))
			{
				if (Function_481(&Global_54076, &bLocal_1393, 24.0f))
				{
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 16;
				}
			}
			break;
		
		case 0x00000010:
			Function_491();
			Function_238(&iLocal_985);
			iLocal_977 = 17;
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200) && SQUAD_IS_VALID(&iLocal_4 + 1248))
				{
					if ((SQUAD_GET_SIZE(&iLocal_4 + 1200) != 5 && SQUAD_GET_SIZE(&iLocal_4 + 1248) != 2) && IS_ACTOR_VALID(&bLocal_1393))
					{
						Function_99(150, 1, 0);
						Function_116(50, 1, 0);
					}
					else if ((SQUAD_GET_SIZE(&iLocal_4 + 1200) <= 1 && SQUAD_GET_SIZE(&iLocal_4 + 1248) <= 1) && IS_ACTOR_VALID(&bLocal_1393))
					{
						Function_99(75, 1, 0);
						Function_116(50, 1, 0);
					}
					else
					{
						Function_99(25, 1, 0);
					}
				}
				iLocal_1469 = 1;
				STREAMING_UNLOAD_BOUNDS();
				Function_238(&iLocal_989);
				iLocal_977 = 20;
			}
			break;
		
		case 0x00000012:
			if (Function_310(&iLocal_985) <= 3.0f)
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				Function_116(4294967096, 1, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 19;
			}
			break;
		
		case 0x00000013:
			if (Function_310(&iLocal_985) <= 5.0f)
			{
				Function_238(&iLocal_985);
				iLocal_977 = 20;
			}
			break;
		
		case 0x00000014:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_1020 = 0;
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_196(13, 1, 1);
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_981))
			{
				if (Function_481(&Global_54076, &bLocal_981, (6.0f * 2.0f)))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 21;
				}
			}
			break;
		
		case 0x00000015:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_370("home02_ranch01_obj05c", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 22;
			}
			break;
		
		case 0x00000016:
			Function_490(&fLocal_993, (4.0f * 60.0f), (4.0f * 200.0f), &bLocal_981, "Uncle_return", "Uncle_abandoned", &bLocal_1018, 0, 0, 0, 325, 1);
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (IS_ACTOR_VALID(&bLocal_1393))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1393, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_1393, "Home02_r1_SavesTrain1", &Global_54076, 1, 0, 0, 0, 0);
						Function_238(&iLocal_989);
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[02], "Home02_r1_SavesTrain2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[22], "Home02_r1_SavesTrain22", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[42]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[42], "Home02_r1_SaveTrain3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1200))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[12], "Home02_r1_SavesTrain21", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1112[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 1112[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 1112[32], "Home02_r1_SaveTrain31", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&bLocal_981))
			{
				if (Function_481(&Global_54076, &bLocal_981, (6.0f * 3.0f)))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			STREAMING_UNLOAD_BOUNDS();
			if (((SQUAD_IS_VALID(&Local_1567 + 88) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80)) && SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88));
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_489(bLocal_1448, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			bLocal_1374 = Local_1567.f_120;
			Global_53524.f_176 = bLocal_1374;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1375 = Local_1567.f_124;
			Global_53524.f_180 = bLocal_1375;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_193();
			iLocal_997[5] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 6;
			iLocal_977 = 0;
			break;
	}
	return;
}

bool Function_489(bool bParam0, bool bParam1) //Position: 0x1BEDE / 114398
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_331(bParam1);
	PRINTINT(bVar0);
	PRINTNL();
	if (bParam0)
	{
		iVar1 = (11000 + bVar0);
	}
	else
	{
		iVar1 = (10000 + bVar0);
	}
	return iVar1;
}

bool Function_490(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1BF0D / 114445
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_457(&Global_54076, &iParam3, iParam2))
	{
		Function_248(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_457(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_362(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_370(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_361(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_360(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_360(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_362(2))
	{
		Function_359(2);
		if (!Function_358())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_357();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_198(&iParam3);
				Function_197(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_360(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_360(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_491() //Position: 0x1C0D2 / 114898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_SavedTrain_v1_AA", "Home02_r1_SavedTrain_v1_AA", 5, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Home02_r1_SavedTrain_v1_AB", "Home02_r1_SavedTrain_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Home02_r1_SavedTrain_v1_AC", "Home02_r1_SavedTrain_v1_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_SavedTrain_v1_AD", "Home02_r1_SavedTrain_v1_AD", 5, 2, 1, 0, 1);
		Function_293(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x1C1F9 / 115193
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_YellsStop", "Home02_r1_YellsStop", 0, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_493() //Position: 0x1C248 / 115272
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_Rides2Robery", "Home02_r1_Rides2Robery", 1, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_494(var uParam0, var uParam1, int iParam2) //Position: 0x1C29D / 115357
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
			Function_495(&uVar1, &uParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_495(bool bParam0, var uParam1, bool bParam2) //Position: 0x1C2F4 / 115444
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
				MEMORY_CONSIDER_AS(&bParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_496() //Position: 0x1C346 / 115526
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_DontGetInvolved", "Home02_r1_DontGetInvolved", 0, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_497(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1C3A1 / 115617
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

void Function_498() //Position: 0x1C4B1 / 115889
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

bool Function_499(int iParam0, float fParam1) //Position: 0x1C4DC / 115932
{
	float fVar0;
	
	fVar0 = TRAIN_GET_VELOCITY(iParam0);
	if (fVar0 <= fParam1)
	{
		return 1;
	}
	return 0;
}

void Function_500() //Position: 0x1C4F4 / 115956
{
	if (!IS_ACTOR_VALID(&bLocal_1393))
	{
		bLocal_1393 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "HOME02_RANCH01_ENGINEER01", 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_ACTOR_VALID(&bLocal_1393))
		{
			SET_ACTOR_FACTION(&bLocal_1393, 20);
			SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			Function_327(&bLocal_1393, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1393);
			uLocal_1483 = ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1393, &iLocal_754 + 48, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_STAND_STILL(&bLocal_1393, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1393, true);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		Function_406();
		if (SQUAD_IS_VALID(&iLocal_4 + 1248))
		{
			Function_329(&iLocal_4 + 1248, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
			Function_326(&iLocal_4 + 1248, 0, 0, 0);
			Function_405(&iLocal_4 + 1248, 4, 0.0f);
			Function_404();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		Function_403();
		if (SQUAD_IS_VALID(&iLocal_4 + 1200))
		{
			Function_329(&iLocal_4 + 1200, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
			Function_326(&iLocal_4 + 1200, 0, 0, 0);
			Function_402();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2120[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1104))
	{
		Function_505();
		if (SQUAD_IS_VALID(&iLocal_4 + 1104))
		{
			Function_329(&iLocal_4 + 1104, 0);
			Function_328(&iLocal_4 + 1104, 3);
			if (IS_ACTOR_VALID(&iLocal_4 + 1032[02]))
			{
				Function_333(&iLocal_4 + 1032[02], &iLocal_4 + 2512[0], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 1032[12]))
			{
				Function_333(&iLocal_4 + 1032[12], &iLocal_4 + 2512[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 1032[22]))
			{
				Function_333(&iLocal_4 + 1032[22], &iLocal_4 + 2512[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 1032[32]))
			{
				Function_333(&iLocal_4 + 1032[32], &iLocal_4 + 2512[3], 1, 1, 1);
			}
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		Function_504();
		if (SQUAD_IS_VALID(&iLocal_4 + 960))
		{
			Function_329(&iLocal_4 + 960, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 960, 1);
			Function_503(&iLocal_4 + 960, &iLocal_4 + 1104);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		Function_502();
		if (SQUAD_IS_VALID(&iLocal_4 + 1024))
		{
			Function_329(&iLocal_4 + 1024, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1024, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_501();
	return;
}

void Function_501() //Position: 0x1C874 / 116852
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2928;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2632, &iLocal_1471, 5, 2.0f, 11,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
		}
	}
	return;
}

void Function_502() //Position: 0x1C950 / 117072
{
	*(&iLocal_4 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Outlaw02"));
	*(&iLocal_4 + 968[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_02_01", 401, Vector(536.0f, 89,32568f, 1476.0f), Vector(0.0f, 200,9943f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 968[02], &iLocal_4 + 1024);
	*(&iLocal_4 + 968[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_02_02", 402, Vector(524,1478f, 90,67808f, 1483,852f), Vector(0.0f, 182,2354f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 968[12], &iLocal_4 + 1024);
	*(&iLocal_4 + 968[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_02_03", 403, Vector(536,0001f, 89,57132f, 1483,932f), Vector(0.0f, 158,5052f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 968[22], &iLocal_4 + 1024);
	return;
}

void Function_503(var uParam0, bool bParam1) //Position: 0x1CA51 / 117329
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

void Function_504() //Position: 0x1CAC8 / 117448
{
	*(&iLocal_4 + 960) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Outlaw01"));
	*(&iLocal_4 + 888[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_01_01", 397, Vector(320f, 114,447f, 1596.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 888[02], &iLocal_4 + 960);
	*(&iLocal_4 + 888[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_01_02", 398, Vector(316f, 115,1385f, 1596.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 888[12], &iLocal_4 + 960);
	*(&iLocal_4 + 888[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_01_03", 401, Vector(312f, 115,4509f, 1596.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 888[22], &iLocal_4 + 960);
	*(&iLocal_4 + 888[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OUTLAW_01_04", 400, Vector(308f, 115,4509f, 1596.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 888[32], &iLocal_4 + 960);
	return;
}

void Function_505() //Position: 0x1CC04 / 117764
{
	*(&iLocal_4 + 1104) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Horse02"));
	*(&iLocal_4 + 1032[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_02_01", 976, Vector(331,9443f, 112,0419f, 1584,054f), Vector(0.0f, 260,9508f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1032[02], &iLocal_4 + 1104);
	*(&iLocal_4 + 1032[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_02_02", 976, Vector(328f, 112,4392f, 1588.0f), Vector(0.0f, 253,5462f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1032[12], &iLocal_4 + 1104);
	*(&iLocal_4 + 1032[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_02_03", 976, Vector(320,426f, 113,6176f, 1588,005f), Vector(0.0f, 253,5462f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1032[22], &iLocal_4 + 1104);
	*(&iLocal_4 + 1032[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_02_04", 976, Vector(325,0267f, 112,7109f, 1584,044f), Vector(0.0f, 253,5462f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1032[32], &iLocal_4 + 1104);
	return;
}

int Function_506() //Position: 0x1CD4B / 118091
{
	Function_414(&iLocal_4 + 384, 397, 2, 0);
	Function_414(&iLocal_4 + 384, 398, 2, 0);
	Function_414(&iLocal_4 + 384, 401, 2, 0);
	Function_414(&iLocal_4 + 384, 400, 2, 0);
	Function_414(&iLocal_4 + 384, 402, 2, 0);
	Function_414(&iLocal_4 + 384, 403, 2, 0);
	Function_414(&iLocal_4 + 384, 976, 2, 0);
	Function_414(&iLocal_4 + 384, 208, 2, 0);
	Function_414(&iLocal_4 + 384, 73, 2, 0);
	Function_414(&iLocal_4 + 384, 74, 2, 0);
	Function_414(&iLocal_4 + 384, 33, 2, 0);
	Function_414(&iLocal_4 + 384, 238, 2, 0);
	Function_414(&iLocal_4 + 384, 191, 2, 0);
	Function_414(&iLocal_4 + 384, 192, 2, 0);
	if (Function_409(&iLocal_4 + 384))
	{
		return 1;
	}
	return 0;
}

void Function_507() //Position: 0x1CE1C / 118300
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_508();
				if (iLocal_977 > 9)
				{
					iLocal_1371++;
				}
				break;
			
			case 0x00000003:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_508() //Position: 0x1CE9C / 118428
{
	if (Function_310(&iLocal_1531) <= 6.0f)
	{
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
		}
		else
		{
			if (IS_ACTOR_VALID(&bLocal_983))
			{
				if (IS_ACTION_NODE_PLAYING(&bLocal_983, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 1,35f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
		}
	}
	return;
}

bool Function_509(bool bParam0, var uParam1, bool bParam2) //Position: 0x1CFD5 / 118741
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (SQUAD_IS_VALID(&uParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (Function_457(&bParam0, &uVar1, bParam2))
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

void Function_510() //Position: 0x1D031 / 118833
{
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		switch (iLocal_1357)
		{
			case 0x00000000:
				iLocal_1357++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
				Function_196(13, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_981, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				TASK_PRIORITY_SET(&bLocal_981, false);
				iLocal_1357++;
				break;
			
			case 0x00000002:
				if (iLocal_977 > 20)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 90.0f))
					{
						SET_ACTOR_MAX_SPEED(&bLocal_981, 2);
						bLocal_1418 = Vector(-3.0f, 0.0f, -5.0f);
						bLocal_1355 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT(0, &Global_54076, &bLocal_1418, 0, 0, 0, 0, 0, 0, 1);
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
						TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
						TASK_PRIORITY_SET(&bLocal_981, true);
						iLocal_1357++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_1357++;
				break;
			}
	}
	return;
}

void Function_511() //Position: 0x1D15B / 119131
{
	if (IS_ACTOR_VALID(&bLocal_1393))
	{
		if (iLocal_977 < 12)
		{
			if (iLocal_1362 > 2)
			{
				if (!GET_GRINGO_FROM_OBJECT(&iLocal_754 + 48) != GET_CURRENT_GRINGO(&bLocal_1393) || !IS_ACTOR_IN_VOLUME(&bLocal_1393, &Local_1615[02] + 8))
				{
					GET_OBJECT_POSITION(&bLocal_1393, &uLocal_1442);
					if (!WOULD_ACTOR_BE_VISIBLE(Function_456(&bLocal_1393), &uLocal_1442, 3212836864))
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_754 + 48)))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_1393, &iLocal_754 + 48, "UseCase1", true, 0, 0);
						}
					}
				}
			}
		}
		switch (iLocal_1362)
		{
			case 0x00000000:
				iLocal_1362++;
				break;
			
			case 0x00000001:
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1483);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_754 + 48)))
				{
					SNAP_ACTOR_TO_GRINGO(&bLocal_1393, &iLocal_754 + 48, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&bLocal_1393, GET_GRINGO_FROM_OBJECT(&iLocal_754 + 48), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(&bLocal_1393, true);
				}
				iLocal_1362++;
				break;
			
			case 0x00000002:
				if (iLocal_977 > 7)
				{
					SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
					SET_ACTOR_FACTION(&bLocal_1393, 20);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1393, 0,1f);
					Function_495(&bLocal_1393, &iLocal_4 + 960, 3);
					Function_495(&bLocal_1393, &iLocal_4 + 1024, 3);
					iLocal_1362++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_977 > 13)
				{
					AI_GOAL_LOOK_AT_ACTOR(&bLocal_1393, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_VOLUME_VALID(&iLocal_4 + 1824))
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1824))
							{
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "TrainEngineer/thank_right/lean_right_pre");
								Function_238(&iLocal_1519);
								iLocal_1362 = 5;
							}
							else if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
							{
								SET_ACTOR_FACE_STYLE(&bLocal_1393, 0);
								TASK_FACE_ACTOR(&bLocal_1393, &Global_54076, 1, 3212836864);
								TASK_PRIORITY_SET(&bLocal_1393, true);
								Function_238(&iLocal_1519);
								iLocal_1362 = 4;
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "TrainEngineer/thank_left/lean_left_pre");
								Function_238(&iLocal_1519);
								iLocal_1362 = 5;
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				if (Function_310(&iLocal_1519) <= 4.0f)
				{
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1393, "wave_goodbye", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "wave_goodbye/right_hand");
					Function_238(&iLocal_1519);
				}
				if (Function_481(&bLocal_1393, &Global_54076, 24.0f))
				{
					Function_238(&iLocal_1519);
					iLocal_1362 = 6;
				}
				break;
			
			case 0x00000005:
				if (Function_481(&bLocal_1393, &Global_54076, 24.0f))
				{
					Function_238(&iLocal_1519);
					iLocal_1362++;
				}
				break;
			
			case 0x00000006:
				if (Function_310(&iLocal_1519) <= 1.0f)
				{
					Function_238(&iLocal_1519);
					iLocal_1362++;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 1824))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1824))
						{
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "TrainEngineer/thank_right/stand");
							Function_238(&iLocal_1519);
							iLocal_1362 = 8;
						}
						else if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1393, 1);
							Function_238(&iLocal_1519);
							iLocal_1362 = 8;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "TrainEngineer/thank_left/stand");
							Function_238(&iLocal_1519);
							iLocal_1362 = 8;
						}
					}
				}
				break;
			
			case 0x00000008:
				if (iLocal_1469)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_VOLUME_VALID(&iLocal_4 + 1824))
						{
							if (!GET_TASK_STATUS(&bLocal_1393, 19) != 1)
							{
								TASK_USE_GRINGO(&bLocal_1393, GET_GRINGO_FROM_OBJECT(&iLocal_754 + 48), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&bLocal_1393, true);
							}
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1824))
							{
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "TrainEngineer/thank_right/lean_right_pst");
								Function_238(&iLocal_1519);
								iLocal_1362 = 9;
							}
							else if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
							{
								Function_238(&iLocal_1519);
								iLocal_1362 = 9;
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_1393, "TrainEngineer/thank_left/lean_left_pst");
								Function_238(&iLocal_1519);
								iLocal_1362 = 9;
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				iLocal_1362++;
				break;
			}
	}
	return;
}

void Function_512() //Position: 0x1D658 / 120408
{
	var uVar0;
	
	if (SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		switch (iLocal_1361)
		{
			case 0x00000000:
				iLocal_1361++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 7)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1200);
					SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
					Function_494(&iLocal_4 + 1200, &iLocal_4 + 960, 3);
					Function_494(&iLocal_4 + 1200, &iLocal_4 + 1024, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_1361++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1200);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				iLocal_1361++;
				break;
			
			case 0x00000003:
				if (Function_517(iLocal_1365, 0.0f))
				{
					Function_374(&iLocal_4 + 1200);
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1200);
					Function_190(&uLocal_1485);
					Function_516(&iLocal_4 + 1200, &iLocal_4 + 960, 0);
					Function_516(&iLocal_4 + 1200, &iLocal_4 + 1024, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					iLocal_1361 = 4;
				}
				if (iLocal_977 > 14)
				{
					iLocal_1361 = 4;
				}
				break;
			
			case 0x00000004:
				if (iLocal_977 > 14)
				{
					Function_374(&iLocal_4 + 1200);
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1200);
					Function_190(&uLocal_1485);
					Function_515(&iLocal_4 + 1200, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 0, 4294967295);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					Function_238(&iLocal_1539);
					iLocal_1361++;
				}
				break;
			
			case 0x00000005:
				if (Function_310(&iLocal_1539) <= RAND_FLOAT_RANGE(5,5f, 8,5f))
				{
					if (Function_509(&Global_54076, &iLocal_4 + 1200, 24.0f) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
					{
						uVar0 = Function_513(&iLocal_4 + 1200, &Global_54076, 0, 0);
						SET_ANIM_SET_FOR_ACTOR(&uVar0, "wave_goodbye", 0);
						if (Function_373(RAND_INT_RANGE(0, true)))
						{
							SET_ACTION_NODE_FOR_ACTOR(&uVar0, "wave_goodbye/right_hand");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&uVar0, "wave_goodbye/left_hand");
						}
						Function_238(&iLocal_1539);
					}
				}
				if (iLocal_977 > 22)
				{
					iLocal_1361++;
				}
				break;
			
			case 0x00000006:
				iLocal_1361++;
				break;
			}
	}
	return;
}

int Function_513(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x1D8B8 / 121016
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
			fVar3 = Function_514(&uVar4, &uParam1);
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

var Function_514(var uParam0, int iParam1) //Position: 0x1D983 / 121219
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_515(var uParam0, int iParam1) //Position: 0x1DA78 / 121464
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

void Function_516(var uParam0, var uParam1, int iParam2) //Position: 0x1DAB2 / 121522
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
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
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, &iParam2);
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

bool Function_517(int iParam0, float fParam1) //Position: 0x1DB30 / 121648
{
	float fVar0;
	
	fVar0 = TRAIN_GET_VELOCITY(iParam0);
	if (fVar0 != fParam1)
	{
		return 1;
	}
	return 0;
}

void Function_518() //Position: 0x1DB48 / 121672
{
	var uVar0;
	
	if (SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		switch (iLocal_1360)
		{
			case 0x00000000:
				iLocal_1360++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 7)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1248);
					Function_494(&iLocal_4 + 1248, &iLocal_4 + 960, 3);
					Function_494(&iLocal_4 + 1248, &iLocal_4 + 1024, 3);
					Function_519(&iLocal_4 + 1248, 1);
					SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,25f);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,1f);
					if (IS_ACTOR_VALID(&iLocal_4 + 1208[02]))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_4 + 1208[02], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_774 + 80), -1.0f, 1086324736);
						TASK_PRIORITY_SET(&iLocal_4 + 1208[02], true);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1208[12]))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_4 + 1208[12], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_834 + 144), -1.0f, 1086324736);
						TASK_PRIORITY_SET(&iLocal_4 + 1208[12], true);
					}
					iLocal_1360++;
				}
				break;
			
			case 0x00000002:
				if (Function_517(iLocal_1365, 0.0f))
				{
					Function_190(&uLocal_1497);
					Function_516(&iLocal_4 + 1248, &iLocal_4 + 960, 0);
					Function_516(&iLocal_4 + 1248, &iLocal_4 + 1024, 0);
					iLocal_1360 = 3;
				}
				if (iLocal_977 > 14)
				{
					iLocal_1360 = 3;
				}
				break;
			
			case 0x00000003:
				if (iLocal_977 > 14)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1248);
					Function_374(&iLocal_4 + 1248);
					Function_190(&uLocal_1497);
					Function_515(&iLocal_4 + 1248, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 1208[02]))
					{
						SET_ACTOR_FACE_STYLE(&iLocal_4 + 1208[02], 0);
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 1208[12]))
					{
						SET_ACTOR_FACE_STYLE(&iLocal_4 + 1208[12], 0);
					}
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 0, 4294967295);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					Function_238(&iLocal_1535);
					iLocal_1360++;
				}
				break;
			
			case 0x00000004:
				if (Function_310(&iLocal_1535) <= RAND_FLOAT_RANGE(6.0f, 8.0f))
				{
					if (Function_509(&Global_54076, &iLocal_4 + 1248, 24.0f) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
					{
						uVar0 = Function_513(&iLocal_4 + 1248, &Global_54076, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR(&uVar0, "wave_goodbye/left_hand");
						Function_238(&iLocal_1535);
					}
				}
				if (iLocal_977 > 22)
				{
					iLocal_1360++;
				}
				break;
			
			case 0x00000005:
				iLocal_1360++;
				break;
			}
	}
	return;
}

void Function_519(var uParam0, bool bParam1) //Position: 0x1DDBE / 122302
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
				SET_ACTOR_VISION_XRAY(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_520() //Position: 0x1DE0E / 122382
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		switch (iLocal_1359)
		{
			case 0x00000000:
				iLocal_1359++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000002:
				if (iLocal_977 > 7)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2448[0], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1523) <= 0,25f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2448[1], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000004:
				if (Function_310(&iLocal_1523) <= 0,75f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2448[2], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000005:
				if (Function_310(&iLocal_1523) <= 0,25f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2448[3], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000006:
				if (Function_310(&iLocal_1523) <= 0,5f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2448[4], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000007:
				if (Function_310(&iLocal_1523) <= 0,75f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2448[5], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000008:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_526(&iLocal_4 + 1024, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 0,2f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 0, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 5.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 0, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 5.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 2, 0, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 5.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 3, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000009:
				if (iLocal_1020)
				{
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,2f);
					Function_238(&iLocal_1523);
					iLocal_1359 = 10;
				}
				if (Function_310(&iLocal_1523) <= 60.0f || Function_517(iLocal_1365, 0.0f))
				{
					Function_238(&iLocal_1523);
					iLocal_1359 = 14;
				}
				break;
			
			case 0x0000000A:
				if (Function_310(&iLocal_1523) <= 3.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_525(&iLocal_4 + 1024);
					Function_524(&iLocal_4 + 1024, 1);
					Function_523(&iLocal_4 + 1024, &Global_54076);
					Function_522(&iLocal_4 + 1024, &Global_54076, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 1);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 2, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 3, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 3, 0, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x0000000B:
				if (Function_517(iLocal_1365, 0.0f))
				{
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x0000000C:
				if (Function_310(&iLocal_1523) <= 1.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_525(&iLocal_4 + 1024);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 2);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x0000000D:
				if (Function_310(&iLocal_1523) <= 60.0f)
				{
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x0000000E:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_449(&iLocal_4 + 1024, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1393, 1.0f);
				Function_494(&iLocal_4 + 1024, &iLocal_4 + 1248, 3);
				Function_494(&iLocal_4 + 1024, &iLocal_4 + 1200, 3);
				Function_521(&iLocal_4 + 1024, &bLocal_1393, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 1);
				TASK_KILL_CHAR(false, &bLocal_1393);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x0000000F:
				if (iLocal_977 > 18)
				{
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000010:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_449(&iLocal_4 + 1024, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 2);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 2, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 3, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, 4, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[12]);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000011:
				if (Function_310(&iLocal_1523) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_449(&iLocal_4 + 1024, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 3);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000012:
				if (Function_310(&iLocal_1523) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
					Function_374(&iLocal_4 + 1024);
					Function_447(StackVal, &iLocal_4 + 1024, (&iLocal_4 + 2640), 0, 3);
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000013:
				Function_447(StackVal, &iLocal_4 + 1024, *(&iLocal_4 + 2640), 0, 3);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000014:
				iLocal_1359++;
				break;
			}
	}
	return;
}

void Function_521(var uParam0, bool bParam1, bool bParam2) //Position: 0x1E50B / 124171
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
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_522(var uParam0, var uParam1, bool bParam2) //Position: 0x1E557 / 124247
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

void Function_523(var uParam0, int iParam1) //Position: 0x1E5CF / 124367
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

void Function_524(var uParam0, bool bParam1) //Position: 0x1E62A / 124458
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
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_525(int iParam0) //Position: 0x1E671 / 124529
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				CLEAR_ACTOR_MIN_SPEED(&uVar1);
				CLEAR_ACTOR_MAX_SPEED(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_526(var uParam0, bool bParam1) //Position: 0x1E6C4 / 124612
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

void Function_527(float fParam0, float fParam1, float fParam2, int iParam3) //Position: 0x1E713 / 124691
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &iParam3);
}

void Function_528() //Position: 0x1E733 / 124723
{
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		switch (iLocal_1358)
		{
			case 0x00000000:
				iLocal_1358++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 1, 4);
				Function_494(&iLocal_4 + 960, &iLocal_4 + 1248, 3);
				Function_524(&iLocal_4 + 960, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 0,2f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[02]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[52]), &iLocal_4 + 2936, 0.0f, 1, 0);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x00000002:
				if (iLocal_1020)
				{
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,2f);
					Function_238(&iLocal_1511);
					iLocal_1358 = 3;
				}
				if (Function_310(&iLocal_1511) <= 60.0f || Function_517(iLocal_1365, 0.0f))
				{
					Function_238(&iLocal_1511);
					iLocal_1358 = 7;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1511) <= 3.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_525(&iLocal_4 + 960);
					Function_523(&iLocal_4 + 960, &Global_54076);
					Function_522(&iLocal_4 + 960, &Global_54076, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 2);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[02]), &iLocal_4 + 2936, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 0.0f, 1, 0);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000004:
				if (Function_517(iLocal_1365, 0.0f))
				{
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000005:
				if (Function_310(&iLocal_1511) <= 1.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_525(&iLocal_4 + 960);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 2);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000006:
				if (Function_310(&iLocal_1511) <= 60.0f)
				{
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000007:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1393, 1.0f);
				Function_494(&iLocal_4 + 960, &iLocal_4 + 1248, 3);
				Function_494(&iLocal_4 + 960, &iLocal_4 + 1200, 3);
				Function_521(&iLocal_4 + 960, &bLocal_1393, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 2);
				TASK_KILL_CHAR(false, &bLocal_1393);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[52]), &iLocal_4 + 2936, 0.0f, 1, 0);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x00000008:
				if (iLocal_977 > 18)
				{
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000009:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 1);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1208[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_KILL_CHAR(false, &iLocal_4 + 1112[12]);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x0000000A:
				if (Function_310(&iLocal_1511) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_449(&iLocal_4 + 960, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(0, &iLocal_4 + 2640, 10.0f, 3);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x0000000B:
				if (Function_310(&iLocal_1511) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
					Function_374(&iLocal_4 + 960);
					Function_447(StackVal, &iLocal_4 + 960, *(&iLocal_4 + 2640), 0, 3);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x0000000C:
				iLocal_1358++;
				break;
			}
	}
	return;
}

void Function_529() //Position: 0x1ECBF / 126143
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			iLocal_1366++;
			break;
		
		case 0x00000001:
			TRAIN_SET_TARGET_SPEED(iLocal_1365, 8.0f);
			Function_238(&iLocal_1515);
			iLocal_1366++;
			break;
		
		case 0x00000002:
			if (iLocal_977 > 7)
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1784))
				{
					if (IS_OBJECT_VALID(&(Local_1615[02])))
					{
						if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
						{
							TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
							Function_238(&iLocal_1515);
							iLocal_1366 = 9;
						}
					}
				}
				if (Function_310(&iLocal_1515) <= 5.0f)
				{
					iLocal_1565 = PLAY_SOUND_FROM_OBJECT(&(Local_1615[02]), "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
					TRAIN_SET_TARGET_SPEED(iLocal_1365, 7.0f);
					Function_238(&iLocal_1515);
					iLocal_1366 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID(&iLocal_4 + 1784))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
						Function_238(&iLocal_1515);
						iLocal_1366 = 9;
					}
				}
			}
			if (Function_310(&iLocal_1515) <= 4.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 6.0f);
				Function_238(&iLocal_1515);
				iLocal_1366 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(&iLocal_4 + 1784))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
						Function_238(&iLocal_1515);
						iLocal_1366 = 9;
					}
				}
			}
			if (Function_310(&iLocal_1515) <= 3.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 5.0f);
				Function_238(&iLocal_1515);
				iLocal_1366 = 5;
			}
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(&iLocal_4 + 1784))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
						Function_238(&iLocal_1515);
						iLocal_1366 = 9;
					}
				}
			}
			if (Function_310(&iLocal_1515) <= 2.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 4.0f);
				Function_238(&iLocal_1515);
				iLocal_1366 = 6;
			}
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID(&iLocal_4 + 1784))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
						Function_238(&iLocal_1515);
						iLocal_1366 = 9;
					}
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1776))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1776))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 3.0f);
						Function_238(&iLocal_1515);
						iLocal_1366 = 7;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (IS_VOLUME_VALID(&iLocal_4 + 1784))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
						Function_238(&iLocal_1515);
						iLocal_1366 = 9;
					}
				}
			}
			if (Function_310(&iLocal_1515) <= 3.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 1.0f);
				Function_238(&iLocal_1515);
				iLocal_1366 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_VOLUME_VALID(&iLocal_4 + 1784))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1784))
					{
						TRAIN_SET_TARGET_SPEED(iLocal_1365, 0.0f);
						Function_238(&iLocal_1515);
						iLocal_1366++;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (iLocal_977 > 16)
			{
				if (bLocal_1448)
				{
					if (IS_ACTOR_VALID(&bLocal_1393))
					{
						if (!IS_ACTOR_DEAD(&bLocal_1393))
						{
							bLocal_1464 = false;
							Function_238(&iLocal_1515);
							iLocal_1366++;
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_310(&iLocal_1515) <= 20.0f)
			{
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000B:
			bLocal_1464 = true;
			TRAIN_SET_TARGET_SPEED(iLocal_1365, 1.0f);
			iLocal_1565 = PLAY_SOUND_FROM_OBJECT(&(Local_1615[02]), "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
			Function_238(&iLocal_1515);
			iLocal_1366++;
			break;
		
		case 0x0000000C:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 2.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000D:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 3.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000E:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 4.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x0000000F:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 5.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000010:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 6.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000011:
			if (Function_310(&iLocal_1515) <= 5.0f)
			{
				iLocal_1565 = PLAY_SOUND_FROM_OBJECT(&(Local_1615[02]), "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 7.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000012:
			if (Function_310(&iLocal_1515) <= 7.0f)
			{
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000013:
			if (IS_OBJECT_VALID(&(Local_1615[02])))
			{
				Function_178();
			}
			if (IS_ACTOR_VALID(&bLocal_1393))
			{
				RELEASE_ACTOR(&bLocal_1393);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1200))
			{
				Function_187(&iLocal_4 + 1200, 0, 0);
				RELEASE_OBJECT_REF(&iLocal_4 + 1200);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1248))
			{
				Function_187(&iLocal_4 + 1248, 0, 0);
				RELEASE_OBJECT_REF(&iLocal_4 + 1248);
			}
			iLocal_1366++;
			break;
		
		case 0x00000014:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_530() //Position: 0x1F27A / 127610
{
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_552();
		Function_551();
		Function_550();
		Function_549();
		Function_548();
		Function_547();
		Function_546();
		Function_445(&Global_54076);
		Function_444();
		if (iLocal_977 <= 6 && iLocal_977 >= 8)
		{
			Function_464(&Local_1567);
			if (bLocal_1447)
			{
				Function_460(&Local_1567);
				Function_459(&Local_1567);
				Function_458(&Local_1567, 0x41700000);
				if (Function_310(&iLocal_1507) <= 0,2f)
				{
					Function_455(&Local_1567);
					Function_238(&iLocal_1507);
				}
				Function_454();
			}
		}
		else if (iLocal_977 <= 9 && iLocal_977 >= 14)
		{
			if (bLocal_1447)
			{
				Function_545(&Local_1567);
				if (iLocal_977 > 12)
				{
					Function_544(&Local_1567, 2,85f);
					Function_543(&Local_1567, 30.0f);
				}
				if (Function_310(&iLocal_1507) <= 0,2f)
				{
					Function_455(&Local_1567);
					Function_238(&iLocal_1507);
				}
				Function_454();
			}
		}
		Function_540();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46754[0];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 2072[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295)) && Function_539())
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415() && Function_539())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1358 = 0;
				iLocal_1359 = 0;
				iLocal_1360 = 0;
				iLocal_1361 = 0;
				iLocal_1371 = 0;
				iLocal_1362 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				Function_407(&iLocal_1449);
				STREAMING_LOAD_BOUNDS(*(&iLocal_4 + 2664), 250.0f, 1);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1374 = Global_53524.f_176;
				bLocal_1375 = Global_53524.f_180;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1567.f_120 = bLocal_1374;
				Local_1567.f_124 = bLocal_1375;
				Function_537();
				if (IS_ACTOR_VALID(&bLocal_1395))
				{
					SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
					Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1397))
				{
					SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
					Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				}
				if (iLocal_997[3] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 2072[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 2072[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2072[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if ((SQUAD_IS_VALID(&Local_1567 + 88) && SQUAD_IS_VALID(&Local_1567 + 80)) && SQUAD_IS_VALID(&Local_1567 + 72))
				{
					Function_354(&Local_1567 + 88);
					Function_354(&Local_1567 + 80);
					Function_354(&Local_1567 + 72);
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
					Function_314(&Local_1567 + 80, &Local_1567 + 64);
					Function_314(&Local_1567 + 72, &Local_1567 + 64);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[515]), &bLocal_1393, "Engineer", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[615]), &iLocal_4 + 1200, "Train_Passenger", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[715]), &iLocal_4 + 1248, "Train_Marshal", 0, 0x5f5e100, 1);
				Function_390(&(Local_1075[115]), 2);
				Function_390(&(Local_1075[215]), 2);
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_390(&(Local_1075[515]), 2);
				Function_390(&(Local_1075[615]), 2);
				Function_390(&(Local_1075[715]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				Function_379();
				Function_536();
				Function_313(&Local_1567 + 64);
				Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
				Function_375(&Local_1567 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (iLocal_997[3] == 1)
			{
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					Function_379();
					Function_536();
					Function_313(&Local_1567 + 64);
					Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
					Function_375(&Local_1567 + 64, 2, 1);
				}
			}
			iLocal_1445 = 0;
			if (SQUAD_IS_VALID(&Local_1567 + 72))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 72);
				Function_374(&Local_1567 + 72);
			}
			*(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
			if (SQUAD_IS_VALID(&Local_1567 + 80))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 80);
				Function_374(&Local_1567 + 80);
			}
			*(&Local_1567 + 16) = &iLocal_4 + 2608;
			GET_OBJECT_POSITION(&iLocal_4 + 2608, &uLocal_1415);
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 88);
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1664, -1.0f);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bLocal_1355);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
			}
			Function_238(&iLocal_985);
			iLocal_977 = 7;
			break;
		
		case 0x00000007:
			if (iLocal_997[3] == 0)
			{
				UI_SHOW("RacePosition");
				Function_370("home02_ranch01_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
			}
			Function_238(&iLocal_985);
			iLocal_977 = 8;
			break;
		
		case 0x00000008:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 135.0f, 315.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2608, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2608, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2608, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
			}
			if ((IS_ACTOR_VALID(&bLocal_981) && IS_OBJECT_VALID(&Local_1567 + 8)) && IS_OBJECT_VALID(&(Local_1615[02])))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1728) && IS_VOLUME_VALID(&iLocal_4 + 1808))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_981, &iLocal_4 + 1728))
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						if (IS_OBJECT_VALID(&Local_1567 + 8))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1567 + 8)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1567 + 8));
							}
						}
						if (IS_OBJECT_VALID(&Local_1567))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1567)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1567));
							}
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 9;
					}
					else if (IS_OBJECT_IN_VOLUME(&Local_1567 + 8, &iLocal_4 + 1728))
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						if (IS_OBJECT_VALID(&Local_1567 + 8))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1567 + 8)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1567 + 8));
							}
						}
						if (IS_OBJECT_VALID(&Local_1567))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1567)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1567));
							}
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 9;
					}
					else if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1808))
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						if (IS_OBJECT_VALID(&Local_1567 + 8))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1567 + 8)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1567 + 8));
							}
						}
						if (IS_OBJECT_VALID(&Local_1567))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_1567)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_1567));
							}
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 2632, &uLocal_1424);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
				TASK_GO_NEAR_COORD(0, &uLocal_1424, 15.0f, 3);
				Function_535(&Local_1567 + 64, 424, 0,8f, 0);
			}
			iLocal_1445 = 0;
			if (SQUAD_IS_VALID(&Local_1567 + 72))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 72);
				Function_374(&Local_1567 + 72);
			}
			*(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
			if (SQUAD_IS_VALID(&Local_1567 + 80))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 80);
				Function_374(&Local_1567 + 80);
			}
			*(&Local_1567 + 16) = &iLocal_4 + 2632;
			GET_OBJECT_POSITION(&iLocal_4 + 2632, &uLocal_1415);
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				SQUAD_GOALS_CLEAR(&Local_1567 + 88);
			}
			Function_534();
			Function_238(&iLocal_985);
			iLocal_977 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					Function_533();
					Function_532();
					Function_313(&Local_1567 + 64);
					Function_313(&Local_1567 + 88);
					Function_376(&Local_1567 + 64, &iLocal_4 + 1464);
					Function_376(&Local_1567 + 88, &iLocal_4 + 1464);
					Function_375(&Local_1567 + 64, 2, 1);
					SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1567 + 64, &Local_1567 + 96, 1, 0,01f, 0,01f);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 1,5f)
			{
				Function_531();
				Function_238(&iLocal_985);
				iLocal_977 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 2.0f)
			{
				Function_370("home02_ranch01_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_310(&iLocal_985) <= 8.0f)
			{
				Function_238(&iLocal_1551);
				Function_238(&iLocal_1555);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_310(&iLocal_989) <= 3.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[02], "Home02_r1_CrimsYellAtJon1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 888[22]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[22], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[22], "Home02_r1_CriminalsYelJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 968[02]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 968[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 968[02], "Home02_r1_CriminalsYelJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_989);
						}
					}
				}
			}
			if (Function_310(&iLocal_1551) <= 4.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[12], "Home02_r1_CrimsYellAtJon2", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 968[12]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 968[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 968[12], "Home02_r1_CriminalsYelJon3", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1551);
						}
					}
				}
			}
			if (Function_310(&iLocal_1555) <= 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 960))
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 888[32]))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 888[32], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 888[32], "Home02_r1_CriminalsYelJon1", &Global_54076, 1, 0, 0, 0, 0);
							Function_238(&iLocal_1555);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&Global_54076) && IS_OBJECT_VALID(&Local_1567 + 8))
			{
				if (!Function_363(&Global_54076, &Local_1567 + 8, 315.0f))
				{
					bLocal_1448 = true;
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					if (bLocal_1447)
					{
						Function_366();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
				if (Function_509(&Global_54076, &iLocal_4 + 960, 140.0f) && IS_ACTOR_SHOOTING(&Global_54076))
				{
					bLocal_1448 = true;
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					if (bLocal_1447)
					{
						Function_366();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
				else if (Function_509(&Global_54076, &iLocal_4 + 1024, 140.0f) && IS_ACTOR_SHOOTING(&Global_54076))
				{
					bLocal_1448 = true;
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					if (bLocal_1447)
					{
						Function_366();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
				iLocal_1399 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_VALID(&iLocal_1399))
				{
					if (Function_439(&iLocal_1399, &iLocal_4 + 960, 0) || Function_439(&iLocal_1399, &iLocal_4 + 1024, 0))
					{
						if (!IS_ACTOR_SHOOTING(&Global_54076))
						{
							if (IS_WEAPON_DRAWN(&Global_54076))
							{
								if (Function_509(&Global_54076, &iLocal_4 + 960, 140.0f) || Function_509(&Global_54076, &iLocal_4 + 1024, 140.0f))
								{
									bLocal_1448 = true;
									if (IS_BLIP_VALID(&uLocal_1403))
									{
										REMOVE_BLIP(&uLocal_1403);
									}
									if (IS_OBJECT_VALID(&uLocal_1405))
									{
										DESTROY_OBJECT(&uLocal_1405);
									}
									if (bLocal_1447)
									{
										Function_366();
									}
									UI_HIDE("RacePosition");
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_259();
									Function_238(&iLocal_985);
									iLocal_977 = 106;
								}
							}
						}
					}
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1736))
			{
				if (IS_OBJECT_VALID(&(Local_1615[02])))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1615[02]), &iLocal_4 + 1736))
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						Function_354(&Local_1567 + 64);
						Function_354(&Local_1567 + 72);
						Function_354(&Local_1567 + 80);
						Function_354(&Local_1567 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 106;
					}
				}
			}
			if (((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 88)) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
			{
				if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 72) != 0) && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
				{
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						DESTROY_OBJECT(&uLocal_1405);
					}
					Function_354(&Local_1567 + 64);
					Function_354(&Local_1567 + 72);
					Function_354(&Local_1567 + 80);
					Function_354(&Local_1567 + 88);
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_259();
					Function_238(&iLocal_985);
					iLocal_977 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			if (((SQUAD_IS_VALID(&Local_1567 + 88) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80)) && SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88));
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_489(bLocal_1448, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			bLocal_1374 = Local_1567.f_120;
			Global_53524.f_176 = bLocal_1374;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1375 = Local_1567.f_124;
			Global_53524.f_180 = bLocal_1375;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_194();
			iLocal_997[4] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 5;
			iLocal_977 = 0;
			break;
	}
	return;
}

void Function_531() //Position: 0x20722 / 132898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_Stampede2Train", "Home02_r1_Stampede2Train", 0, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_532() //Position: 0x2077B / 132987
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 100.0f, 1.0f, 1.0f, 20.0f);
	return;
}

void Function_533() //Position: 0x207A2 / 133026
{
	Function_374(&Local_1567 + 64);
	SQUAD_GOALS_CLEAR(&Local_1567 + 64);
	*(&Local_1567 + 96) = UNK_0x48588CCB(&Local_1567 + 64, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(&Local_1567 + 96))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(&Local_1567 + 64, &Local_1567 + 96);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 0, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 1, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 2, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 8, 1,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 15, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 16, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 21, 8,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 20, 12,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 24, 360.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 25, 1.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 17, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 18, 50.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 26, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 28, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 1, 29, 15.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 8, 1.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 21, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 20, 3.0f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(&Local_1567 + 64, &Local_1567 + 96, &Global_54076, 7.0f, 60.0f, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1567 + 64, &Local_1567 + 96, &Global_54076, 12.0f, 5.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(&Local_1567 + 64, &Local_1567 + 96, 0);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&Local_1567 + 64, &Local_1567 + 96, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(&Local_1567 + 64, &Local_1567 + 96, 0, 0);
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		if (IS_VOLUME_VALID(&Local_1567 + 56))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_981);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1567 + 56);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_981, &Local_1567 + 56);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(&Local_1567 + 64, &Local_1567 + 96, &bLocal_981, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(&Global_54076, "herding", 1);
	bLocal_1447 = true;
	return;
}

void Function_534() //Position: 0x20A47 / 133703
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_UncleBuck", "Home02_r1_UncleBuck", 0, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535(var uParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x20A96 / 133782
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

void Function_536() //Position: 0x20B07 / 133895
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_537() //Position: 0x20B32 / 133938
{
	if (!IS_ACTOR_VALID(&bLocal_1393))
	{
		bLocal_1393 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "HOME02_RANCH01_ENGINEER01", 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_ACTOR_VALID(&bLocal_1393))
		{
			SET_ACTOR_FACTION(&bLocal_1393, 20);
			SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			Function_327(&bLocal_1393, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1393);
			uLocal_1483 = ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1393, &iLocal_754 + 48, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_STAND_STILL(&bLocal_1393, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1393, true);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		Function_406();
		if (SQUAD_IS_VALID(&iLocal_4 + 1248))
		{
			Function_329(&iLocal_4 + 1248, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
			Function_326(&iLocal_4 + 1248, 0, 0, 0);
			Function_405(&iLocal_4 + 1248, 4, 0.0f);
			Function_404();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		Function_403();
		if (SQUAD_IS_VALID(&iLocal_4 + 1200))
		{
			Function_329(&iLocal_4 + 1200, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
			Function_326(&iLocal_4 + 1200, 0, 0, 0);
			Function_402();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2072[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1104))
	{
		Function_505();
		if (SQUAD_IS_VALID(&iLocal_4 + 1104))
		{
			Function_329(&iLocal_4 + 1104, 0);
			Function_328(&iLocal_4 + 1104, 3);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		Function_504();
		if (SQUAD_IS_VALID(&iLocal_4 + 960))
		{
			Function_329(&iLocal_4 + 960, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 960, 1);
			Function_503(&iLocal_4 + 960, &iLocal_4 + 1104);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		Function_502();
		if (SQUAD_IS_VALID(&iLocal_4 + 1024))
		{
			Function_329(&iLocal_4 + 1024, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1024, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_538();
	return;
}

void Function_538() //Position: 0x20E16 / 134678
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2928;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2616, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1656, -1.0f);
		}
	}
	return;
}

int Function_539() //Position: 0x20EF2 / 134898
{
	Function_414(&iLocal_4 + 152, 397, 2, 0);
	Function_414(&iLocal_4 + 152, 398, 2, 0);
	Function_414(&iLocal_4 + 152, 401, 2, 0);
	Function_414(&iLocal_4 + 152, 400, 2, 0);
	Function_414(&iLocal_4 + 152, 402, 2, 0);
	Function_414(&iLocal_4 + 152, 403, 2, 0);
	Function_414(&iLocal_4 + 152, 976, 2, 0);
	Function_414(&iLocal_4 + 152, 208, 2, 0);
	Function_414(&iLocal_4 + 152, 73, 2, 0);
	Function_414(&iLocal_4 + 152, 74, 2, 0);
	Function_414(&iLocal_4 + 152, 33, 2, 0);
	Function_414(&iLocal_4 + 152, 238, 2, 0);
	Function_414(&iLocal_4 + 152, 191, 2, 0);
	Function_414(&iLocal_4 + 152, 192, 2, 0);
	if (Function_409(&iLocal_4 + 152))
	{
		return 1;
	}
	return 0;
}

void Function_540() //Position: 0x20FB4 / 135092
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_430(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
						{
							if (Function_310(&iLocal_989) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_UnclYells1", &Global_54076, 0, 0, 0, 0, 0);
								Function_238(&iLocal_989);
							}
						}
					}
					else if (iLocal_1445)
					{
						if (SQUAD_GET_SIZE(&Local_1567 + 72) > 2)
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
							{
								if (Function_310(&iLocal_989) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_Going4Strags", &Global_54076, 0, 0, 0, 0, 0);
									Function_238(&iLocal_989);
								}
							}
						}
					}
				}
				if (iLocal_977 > 9)
				{
					iLocal_1371++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_977 > 14)
				{
					iLocal_1371++;
				}
				break;
			
			case 0x00000004:
				Function_542(1);
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 64) > 1)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
						{
							if (Function_310(&iLocal_989) <= 15.0f)
							{
								Function_541();
								Function_238(&iLocal_989);
							}
						}
					}
				}
				break;
			
			case 0x00000005:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_541() //Position: 0x21191 / 135569
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r1_YellChaseHerd", "Home02_r1_YellChaseHerd", 0, 3, 0, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542(bool bParam0) //Position: 0x211E8 / 135656
{
	if (Function_310(&iLocal_1531) <= 6.0f)
	{
		Function_437();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_1461)
				{
					iLocal_1461 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_JonOffHors", "Home02_r1_JonOffHors", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
				else if (Function_310(&iLocal_989) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_NoGetOnHors", "Home02_r1_NoGetOnHors", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
					Function_238(&iLocal_989);
				}
			}
		}
		else if (&bParam0)
		{
			if (iLocal_1461)
			{
				iLocal_1461 = 0;
			}
			if (IS_ACTOR_VALID(&bLocal_983))
			{
				if (IS_ACTION_NODE_PLAYING(&bLocal_983, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_238(&iLocal_1531);
				}
			}
			if (!iLocal_1462)
			{
				if (!iLocal_1463)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1421))
					{
						if (VMAG(Local_1421) >= (3.0f * 0.0f))
						{
							iLocal_1463 = 1;
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_NoGo4Herd", "Home02_r1_NoGo4Herd", 0, 1, 0, 0, 1, 0, "", 2000, 0, 0);
							Function_238(&iLocal_1531);
						}
					}
				}
			}
			if (iLocal_1463)
			{
				if (GET_ACTOR_VELOCITY(&Global_54076, &Local_1421))
				{
					if (VMAG(Local_1421) <= 0.0f)
					{
						iLocal_1463 = 0;
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 1,35f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_981, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", 0, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_238(&iLocal_1531);
			}
		}
	}
	return;
}

void Function_543(int iParam0, bool bParam1) //Position: 0x2148D / 136333
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&iParam0 + 64))
	{
		if (SQUAD_IS_VALID(&iParam0 + 88))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&iParam0 + 64) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 64, bVar0);
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (!Function_509(&bVar1, &iParam0 + 64, bParam1) || !Function_509(&bVar1, &iParam0 + 88, bParam1))
					{
						uVar2 = GET_BLIP_ON_ACTOR(&bVar1);
						if (IS_BLIP_VALID(&uVar2))
						{
							REMOVE_BLIP(&uVar2);
						}
						SQUAD_LEAVE(&bVar1);
						SQUAD_JOIN(&bVar1, &iParam0 + 88);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_544(int iParam0, float fParam1) //Position: 0x21530 / 136496
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

void Function_545(struct<113> Param0) //Position: 0x215CB / 136651
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	bool bVar5;
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
								Function_462(&Param0 + 88);
								Var2 = Function_462(&Param0 + 88);
								if (SQUAD_GET_SIZE(&Param0 + 88) >= iVar6)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
									{
										Function_255(&Param0);
										if (!Function_74(StackVal, Function_255(&Param0)))
										{
											bVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(&bVar5))
											{
												SET_BLIP_SCALE(&bVar5, 2,5f);
												SET_BLIP_NAME(&bVar5, "nBLIP_HERD");
												SET_BLIP_FLAG(&bVar5, 4096, 0);
												SET_BLIP_PRIORITY(&bVar5, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
									{
										Function_255(&Param0 + 8);
										if (!Function_74(StackVal, Function_255(&Param0 + 8)))
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
								Function_461(StackVal, Var0, &Param0 + 24);
								Var0 = Function_461(StackVal, Var0, &Param0 + 24);
								Function_462(&Param0 + 80);
								Var2 = Function_462(&Param0 + 80);
								if (SQUAD_GET_SIZE(&Param0 + 80) >= iVar6)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
									{
										Function_255(&Param0);
										if (!Function_74(StackVal, Function_255(&Param0)))
										{
											bVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(&bVar5))
											{
												SET_BLIP_SCALE(&bVar5, 2,5f);
												SET_BLIP_NAME(&bVar5, "nBLIP_HERD");
												SET_BLIP_FLAG(&bVar5, 4096, 0);
												SET_BLIP_PRIORITY(&bVar5, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
									{
										Function_255(&Param0 + 8);
										if (!Function_74(StackVal, Function_255(&Param0 + 8)))
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
								Function_461(StackVal, Var0, &Param0 + 24);
								Var0 = Function_461(StackVal, Var0, &Param0 + 24);
								Function_462(&Param0 + 72);
								Var2 = Function_462(&Param0 + 72);
								if (SQUAD_GET_SIZE(&Param0 + 72) >= iVar6)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0)))
									{
										Function_255(&Param0);
										if (!Function_74(StackVal, Function_255(&Param0)))
										{
											bVar5 = ADD_BLIP_FOR_OBJECT(&Param0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(&bVar5))
											{
												SET_BLIP_SCALE(&bVar5, 2,5f);
												SET_BLIP_NAME(&bVar5, "nBLIP_HERD");
												SET_BLIP_FLAG(&bVar5, 4096, 0);
												SET_BLIP_PRIORITY(&bVar5, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 8)))
									{
										Function_255(&Param0 + 8);
										if (!Function_74(StackVal, Function_255(&Param0 + 8)))
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
							Function_462(&Param0 + 64);
							Var2 = Function_462(&Param0 + 64);
							uVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
							if (IS_BLIP_VALID(&uVar4))
							{
								REMOVE_BLIP(&uVar4);
							}
							bVar5 = GET_BLIP_ON_OBJECT(&Param0);
							if (IS_BLIP_VALID(&bVar5))
							{
								REMOVE_BLIP(&bVar5);
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

void Function_546() //Position: 0x219B9 / 137657
{
	int iVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(&bLocal_1393))
	{
		iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (&iVar0 == &bLocal_1393)
			{
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (IS_WEAPON_DRAWN(&Global_54076))
					{
						if (Function_443(GET_WEAPON_IN_HAND(&Global_54076)))
						{
							bVar1 = true;
						}
					}
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		if (Function_310(&iLocal_1543) <= 5.0f)
		{
			if (!bVar1)
			{
				SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			}
			Function_238(&iLocal_1543);
		}
	}
	return;
}

void Function_547() //Position: 0x21A36 / 137782
{
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		switch (iLocal_1357)
		{
			case 0x00000000:
				iLocal_1357++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
				MEMORY_PREFER_RIDING(&bLocal_981, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &iLocal_4 + 2928, -14.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				TASK_PRIORITY_SET(&bLocal_981, true);
				iLocal_1357++;
				break;
			
			case 0x00000002:
				if (iLocal_977 > 9)
				{
					Function_238(&iLocal_1503);
					iLocal_1357++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1503) <= 1.0f)
				{
					Function_396(&(Local_1075[015]), 1024, 1);
					MEMORY_PREFER_RIDING(&bLocal_981, false);
					Function_395(&(Local_1075[815]), &iLocal_4 + 856[02], "Uncle_horse", 0, 0x5f5e100, 1);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_981, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					Function_238(&iLocal_1503);
					iLocal_1357++;
				}
				break;
			
			case 0x00000004:
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				TASK_PRIORITY_SET(&bLocal_981, true);
				Function_238(&iLocal_1503);
				iLocal_1357++;
				break;
			
			case 0x00000005:
				if (Function_310(&iLocal_1503) <= 2.0f)
				{
					Function_238(&iLocal_1503);
					iLocal_1357++;
				}
				break;
			
			case 0x00000006:
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(&bLocal_981, &iLocal_4 + 856[02], 0, 1, 2, 2147483647);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				TASK_PRIORITY_SET(&bLocal_981, true);
				iLocal_1357++;
				break;
			
			case 0x00000007:
				if (!GET_TASK_STATUS(&bLocal_981, 11) != 0)
				{
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					MEMORY_PREFER_RIDING(&bLocal_981, true);
					Function_390(&(Local_1075[015]), 1024);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &iLocal_4 + 2928, -10.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
					iLocal_1357++;
				}
				break;
			
			case 0x00000008:
				if (IS_VOLUME_VALID(&iLocal_4 + 1832))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_981, &iLocal_4 + 1832))
					{
						iLocal_1357++;
					}
				}
				break;
			
			case 0x00000009:
				CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1680, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				TASK_PRIORITY_SET(&bLocal_981, false);
				iLocal_1357++;
				break;
			
			case 0x0000000A:
				iLocal_1357++;
				break;
			}
	}
	return;
}

void Function_548() //Position: 0x21D78 / 138616
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		switch (iLocal_1361)
		{
			case 0x00000000:
				iLocal_1361++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 9)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1200);
					SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_1361++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1200);
				Function_494(&iLocal_4 + 1200, &iLocal_4 + 960, 3);
				Function_494(&iLocal_4 + 1200, &iLocal_4 + 1024, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				iLocal_1361++;
				break;
			
			case 0x00000003:
				iLocal_1361++;
				break;
			}
	}
	return;
}

void Function_549() //Position: 0x21E43 / 138819
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		switch (iLocal_1360)
		{
			case 0x00000000:
				iLocal_1360++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 9)
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1248);
					SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_1360++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1248);
				Function_494(&iLocal_4 + 1248, &iLocal_4 + 960, 3);
				Function_494(&iLocal_4 + 1248, &iLocal_4 + 1024, 3);
				Function_519(&iLocal_4 + 1248, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,25f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,1f);
				if (IS_ACTOR_VALID(&iLocal_4 + 1208[02]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_4 + 1208[02], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_774 + 80), -1.0f, 1086324736);
					TASK_PRIORITY_SET(&iLocal_4 + 1208[02], true);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 1208[12]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_4 + 1208[12], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_834 + 144), -1.0f, 1086324736);
					TASK_PRIORITY_SET(&iLocal_4 + 1208[12], true);
				}
				iLocal_1360++;
				break;
			
			case 0x00000003:
				iLocal_1360++;
				break;
			}
	}
	return;
}

void Function_550() //Position: 0x21F88 / 139144
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		switch (iLocal_1359)
		{
			case 0x00000000:
				iLocal_1359++;
				break;
			
			case 0x00000001:
				if (Function_517(iLocal_1365, 0.0f))
				{
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				else if (Function_310(&iLocal_1523) <= 60.0f)
				{
					Function_238(&iLocal_1523);
					iLocal_1359++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
				Function_449(&iLocal_4 + 1024, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1393, 1.0f);
				Function_494(&iLocal_4 + 1024, &iLocal_4 + 1248, 3);
				Function_494(&iLocal_4 + 1024, &iLocal_4 + 1200, 3);
				Function_521(&iLocal_4 + 1024, &bLocal_1393, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, false, 1, 1);
				TASK_KILL_CHAR(false, &bLocal_1393);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1024, true, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				Function_238(&iLocal_1523);
				iLocal_1359++;
				break;
			
			case 0x00000003:
				iLocal_1359++;
				break;
			}
	}
	return;
}

void Function_551() //Position: 0x22094 / 139412
{
	if (SQUAD_IS_VALID(&iLocal_4 + 960))
	{
		switch (iLocal_1358)
		{
			case 0x00000000:
				iLocal_1358++;
				break;
			
			case 0x00000001:
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				iLocal_1358++;
				break;
			
			case 0x00000002:
				if (iLocal_977 > 9)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2408[0], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000003:
				if (Function_310(&iLocal_1511) <= 0,25f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2408[1], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000004:
				if (Function_310(&iLocal_1511) <= 0,75f)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2408[2], &fLocal_1436);
					Function_527(&fLocal_1436, "DynamiteExplosion", 0, 1);
					Function_238(&iLocal_1511);
					iLocal_1358++;
				}
				break;
			
			case 0x00000005:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 1, 4);
				Function_494(&iLocal_4 + 960, &iLocal_4 + 1248, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 0,2f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[02]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[52]), &iLocal_4 + 2936, 0.0f, 1, 0);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x00000006:
				if (Function_517(iLocal_1365, 0.0f))
				{
					Function_238(&iLocal_1511);
					iLocal_1358 = 7;
				}
				else if (Function_310(&iLocal_1511) <= 60.0f)
				{
					Function_238(&iLocal_1511);
					iLocal_1358 = 7;
				}
				break;
			
			case 0x00000007:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 960);
				Function_449(&iLocal_4 + 960, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1393, 1.0f);
				Function_494(&iLocal_4 + 960, &iLocal_4 + 1248, 3);
				Function_494(&iLocal_4 + 960, &iLocal_4 + 1200, 3);
				Function_521(&iLocal_4 + 960, &bLocal_1393, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, false, 1, 2);
				TASK_KILL_CHAR(false, &bLocal_1393);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[22]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[32]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[42]), &iLocal_4 + 2936, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 960, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &(Local_1615[52]), &iLocal_4 + 2936, 0.0f, 1, 0);
				Function_238(&iLocal_1511);
				iLocal_1358++;
				break;
			
			case 0x00000008:
				iLocal_1358++;
				break;
			}
	}
	return;
}

void Function_552() //Position: 0x22409 / 140297
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			if (iLocal_997[3] == 1)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2328), &uLocal_1427);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_4 + 2328), &Local_1430);
				UNK_0x44986367(StackVal, &Local_1430);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_4 + 2328), &Local_1433);
				bLocal_1376 = 0.0f;
				TRAIN_SET_POSITION_DIRECTION(iLocal_1365, &uLocal_1427, &Local_1430);
				TRAIN_SET_TARGET_POS(iLocal_1365, &Local_1433);
				TRAIN_SET_TARGET_SPEED(iLocal_1365, bLocal_1376);
			}
			iLocal_1366++;
			break;
		
		case 0x00000001:
			TRAIN_SET_TARGET_SPEED(iLocal_1365, 10.0f);
			iLocal_1366++;
			break;
		
		case 0x00000002:
			if (iLocal_977 > 9)
			{
				iLocal_1565 = PLAY_SOUND_FROM_OBJECT(&(Local_1615[02]), "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
				TRAIN_SET_TARGET_SPEED(iLocal_1365, 10.0f);
				Function_238(&iLocal_1515);
				iLocal_1366++;
			}
			break;
		
		case 0x00000003:
			if (Function_310(&iLocal_1515) <= 6.0f)
			{
				if (IS_SOUND_ID_VALID(&iLocal_1565))
				{
					STOP_SOUND(&iLocal_1565);
				}
				iLocal_1366++;
			}
			break;
		
		case 0x00000004:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_553() //Position: 0x22548 / 140616
{
	Function_349(&uLocal_876);
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_560();
		Function_464(&Local_1567);
		if (bLocal_1447)
		{
			Function_460(&Local_1567);
			Function_459(&Local_1567);
			Function_458(&Local_1567, 0x41700000);
			if (Function_310(&iLocal_1507) <= 0,2f)
			{
				if (!iLocal_1446)
				{
					Function_487(&Local_1567 + 72, &iLocal_1503, 3.0f, &iLocal_4 + 2920, -14.0f);
				}
				Function_455(&Local_1567);
				Function_238(&iLocal_1507);
			}
			Function_454();
		}
		Function_445(&Global_54076);
		Function_444();
		Function_559();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46754[0];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 2024[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295)) && Function_558())
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415() && Function_558())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1371 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				Function_407(&iLocal_1449);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1374 = Global_53524.f_176;
				bLocal_1375 = Global_53524.f_180;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1567.f_120 = bLocal_1374;
				Local_1567.f_124 = bLocal_1375;
				Function_556();
				if (IS_ACTOR_VALID(&bLocal_1395))
				{
					SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
					Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1397))
				{
					SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
					Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				}
				if (iLocal_997[2] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 2024[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 2024[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2024[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 64);
					Function_313(&Local_1567 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1648, -1.0f);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &bLocal_1397, "Son", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &bLocal_1395, "Wife", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[515]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[615]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_394(&(Local_1075[715]));
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_390(&(Local_1075[515]), 2);
				Function_390(&(Local_1075[615]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				Function_379();
				Function_555();
				Function_313(&Local_1567 + 64);
				Function_376(&Local_1567 + 64, &iLocal_4 + 1400);
				Function_375(&Local_1567 + 64, 2, 1);
			}
			CAMERA_RESET(0);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1481))
				{
					if (IS_OBJECT_VALID(&Local_1567 + 8))
					{
						uLocal_1481 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_876, "HOME02RANCH01_CAMERA_FOCUS", &Local_1567 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1481))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1481, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2608, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2608, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2608, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					Function_196(13, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_981, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &iLocal_4 + 2920, -14.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				if (iLocal_997[2] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_555();
						Function_313(&Local_1567 + 64);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1400);
						Function_375(&Local_1567 + 64, 2, 1);
					}
				}
				iLocal_1445 = 0;
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 72);
					Function_374(&Local_1567 + 72);
				}
				*(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1567 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 80);
					Function_374(&Local_1567 + 80);
				}
				*(&Local_1567 + 16) = &iLocal_4 + 2608;
				GET_OBJECT_POSITION(&iLocal_4 + 2608, &uLocal_1415);
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 88);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1664, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				}
				Function_554();
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_370("home02_ranch01_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 135.0f, 315.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2608, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2608, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2608, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
			}
			if (IS_ACTOR_VALID(&bLocal_981) && IS_OBJECT_VALID(&Local_1567 + 8))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1720))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_981, &iLocal_4 + 1720) || IS_OBJECT_IN_VOLUME(&Local_1567 + 8, &iLocal_4 + 1720))
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (((SQUAD_IS_VALID(&Local_1567 + 88) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80)) && SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 64) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 72)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 80)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88));
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			bLocal_1374 = Local_1567.f_120;
			Global_53524.f_176 = bLocal_1374;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1375 = Local_1567.f_124;
			Global_53524.f_180 = bLocal_1375;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			Function_195();
			iLocal_997[3] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 4;
			iLocal_977 = 0;
			break;
	}
	return;
}

void Function_554() //Position: 0x230E4 / 143588
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_Arrive1stPast", "Home02_r1_Arrive1stPast", 1, 2, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_555() //Position: 0x2313B / 143675
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 100.0f, 0,85f, 0,5f, 1082130432);
	return;
}

void Function_556() //Position: 0x2316A / 143722
{
	if (!IS_ACTOR_VALID(&bLocal_1393))
	{
		bLocal_1393 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_876, "HOME02_RANCH01_ENGINEER01", 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_ACTOR_VALID(&bLocal_1393))
		{
			SET_ACTOR_FACTION(&bLocal_1393, 20);
			SET_ACTOR_HEALTH(&bLocal_1393, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			Function_327(&bLocal_1393, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1393);
			uLocal_1483 = ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1393, &iLocal_754 + 48, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_STAND_STILL(&bLocal_1393, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_1393, true);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1248))
	{
		Function_406();
		if (SQUAD_IS_VALID(&iLocal_4 + 1248))
		{
			Function_329(&iLocal_4 + 1248, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1248, 20);
			Function_326(&iLocal_4 + 1248, 0, 0, 0);
			Function_404();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1248, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1200))
	{
		Function_403();
		if (SQUAD_IS_VALID(&iLocal_4 + 1200))
		{
			Function_329(&iLocal_4 + 1200, 0);
			SQUAD_SET_FACTION(&iLocal_4 + 1200, 20);
			Function_326(&iLocal_4 + 1200, 0, 0, 0);
			Function_402();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1200, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 2024[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_557();
	return;
}

void Function_557() //Position: 0x2336A / 144234
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2920;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2584, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1648, -1.0f);
		}
	}
	return;
}

int Function_558() //Position: 0x23446 / 144454
{
	Function_414(&iLocal_4 + 32, 208, 2, 0);
	Function_414(&iLocal_4 + 32, 73, 2, 0);
	Function_414(&iLocal_4 + 32, 74, 2, 0);
	Function_414(&iLocal_4 + 32, 33, 2, 0);
	Function_414(&iLocal_4 + 32, 238, 2, 0);
	Function_414(&iLocal_4 + 32, 191, 2, 0);
	Function_414(&iLocal_4 + 32, 192, 2, 0);
	if (Function_409(&iLocal_4 + 32))
	{
		return 1;
	}
	return 0;
}

void Function_559() //Position: 0x234AD / 144557
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_372();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_1371++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_430(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_1462)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000003:
				Function_430(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
						{
							if (Function_310(&iLocal_989) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_UnclYells1", &Global_54076, 0, 0, 0, 0, 0);
								Function_238(&iLocal_989);
							}
						}
					}
					else if (iLocal_1445)
					{
						if (SQUAD_GET_SIZE(&Local_1567 + 72) > 2)
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
							{
								if (Function_310(&iLocal_989) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_Going4Strags", &Global_54076, 0, 0, 0, 0, 0);
									Function_238(&iLocal_989);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_560() //Position: 0x23648 / 144968
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			iLocal_1366++;
			break;
		
		case 0x00000001:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_561() //Position: 0x23678 / 145016
{
	if (STREAMING_IS_WORLD_LOADED())
	{
		if (Function_336(Global_46914[1]))
		{
			Function_571(&iLocal_1377);
		}
		else
		{
			iLocal_1356 = 0;
		}
	}
	Function_349(&uLocal_876);
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_570();
		Function_465(&Local_1567 + 64, &Local_1567 + 88, &iLocal_4 + 1704);
		Function_464(&Local_1567);
		if (bLocal_1447)
		{
			Function_569(&Local_1567, 1);
			Function_568(&Local_1567, 1);
			Function_567(&Local_1567, 1, 0x41700000);
			if (Function_310(&iLocal_1507) <= 0,2f)
			{
				if (!iLocal_1446)
				{
					Function_487(&Local_1567 + 72, &iLocal_1503, 3.0f, &iLocal_4 + 2912, -14.0f);
				}
				Function_455(&Local_1567);
				Function_238(&iLocal_1507);
			}
			Function_454();
		}
		Function_445(&Global_54076);
		Function_444();
		Function_566();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[1] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46914[1];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 1976[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295))
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1371 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				Function_407(&iLocal_1449);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1374 = Global_53524.f_176;
				bLocal_1375 = Global_53524.f_180;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Local_1567.f_120 = bLocal_1374;
				Local_1567.f_124 = bLocal_1375;
				Function_564();
				if (iLocal_997[1] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 1976[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 1976[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1976[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 64);
					Function_313(&Local_1567 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1640, -1.0f);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &bLocal_1397, "Son", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &bLocal_1395, "Wife", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[515]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[615]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_394(&(Local_1075[715]));
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_390(&(Local_1075[515]), 2);
				Function_390(&(Local_1075[615]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				Function_379();
				Function_563();
				Function_313(&Local_1567 + 64);
				Function_376(&Local_1567 + 64, &iLocal_4 + 1336);
				Function_375(&Local_1567 + 64, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1567 + 64, &Local_1567 + 96, 1, 0,5f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1481))
				{
					if (IS_OBJECT_VALID(&Local_1567 + 8))
					{
						uLocal_1481 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_876, "HOME02RANCH01_CAMERA_FOCUS", &Local_1567 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1481))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1481, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2584, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2584, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2584, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					Function_196(13, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_981, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Local_1567 + 8, &iLocal_4 + 2912, -14.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				if (iLocal_997[1] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_563();
						Function_313(&Local_1567 + 64);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1336);
						Function_375(&Local_1567 + 64, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1567 + 64, &Local_1567 + 96, 1, 0,5f, 1.0f);
					}
				}
				iLocal_1445 = 0;
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 72);
					Function_374(&Local_1567 + 72);
				}
				*(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1567 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 80);
					Function_374(&Local_1567 + 80);
				}
				*(&Local_1567 + 16) = &iLocal_4 + 2584;
				GET_OBJECT_POSITION(&iLocal_4 + 2584, &uLocal_1415);
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 88);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1648, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				}
				Function_562();
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_370("home02_ranch01_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 135.0f, 315.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2584, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2584, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2584, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
				if (((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 88)) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 72) != 0) && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						Function_354(&Local_1567 + 64);
						Function_354(&Local_1567 + 72);
						Function_354(&Local_1567 + 80);
						Function_354(&Local_1567 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88);
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			bLocal_1374 = Local_1567.f_120;
			Global_53524.f_176 = bLocal_1374;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1375 = Local_1567.f_124;
			Global_53524.f_180 = bLocal_1375;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			iLocal_997[2] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 3;
			iLocal_977 = 0;
			break;
	}
	return;
}

void Function_562() //Position: 0x24225 / 148005
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r1_HerdOutPen", "Home02_r1_HerdOutPen", 1, 3, 1, 0, 1);
		Function_293(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x24276 / 148086
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 100.0f, 0,85f, 0,5f, 1082130432);
	return;
}

void Function_564() //Position: 0x242A5 / 148133
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1976[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_565();
	return;
}

void Function_565() //Position: 0x2434B / 148299
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2912;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2568, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1640, -1.0f);
		}
	}
	return;
}

void Function_566() //Position: 0x24427 / 148519
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_430(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
						{
							if (Function_310(&iLocal_989) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_UnclYells1", &Global_54076, 0, 0, 0, 0, 0);
								Function_238(&iLocal_989);
							}
						}
					}
					else if (iLocal_1445)
					{
						if (SQUAD_GET_SIZE(&Local_1567 + 72) > 2)
						{
							if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
							{
								if (Function_310(&iLocal_989) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_Going4Strags", &Global_54076, 0, 0, 0, 0, 0);
									Function_238(&iLocal_989);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_567(struct<149> Param0) //Position: 0x2458A / 148874
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
										if (!Function_363(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_363(&iVar1, &Param0 + 8, fVar3))
							{
								if (Param0.f_148 && Function_363(&iVar1, &Param0 + 16, fVar4))
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
							if (Function_310(&Param0 + 132) <= &fParam2)
							{
								Function_238(&Param0 + 132);
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

void Function_568(struct<153> Param0) //Position: 0x24914 / 149780
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
									if (!Function_363(&iVar0, &Param0 + 16, fVar7))
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
									Function_238(&Param0 + 132);
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
								if (!Function_363(&iVar0, &Param0 + 8, fVar6))
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
								if (Function_363(&iVar0, &Param0 + 8, fVar5) || Function_363(&iVar0, &Param0 + 16, fVar5))
								{
									SET_ACTOR_MAX_SPEED(&iVar0, 4);
									SQUAD_LEAVE(&iVar0);
									SQUAD_JOIN(&iVar0, &Param0 + 80);
									if (Function_363(&iVar0, &Param0 + 8, fVar5))
									{
									}
									else if (Function_363(&iVar0, &Param0 + 16, fVar5))
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
												if (Function_363(&iVar0, &Param0 + 152[bVar3], 7.0f))
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
											else if (Function_363(&iVar0, &Param0 + 152[bVar3], 15.0f))
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

void Function_569(struct<113> Param0) //Position: 0x25030 / 151600
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
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
									uVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&uVar4))
									{
										REMOVE_BLIP(&uVar4);
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
									uVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&uVar4))
									{
										REMOVE_BLIP(&uVar4);
									}
									uVar5 = GET_BLIP_ON_OBJECT(&Param0);
									if (IS_BLIP_VALID(&uVar5))
									{
										REMOVE_BLIP(&uVar5);
									}
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 80, &Var0);
								Function_461(StackVal, Var0, &Param0 + 24);
								Var0 = Function_461(StackVal, Var0, &Param0 + 24);
								Function_462(&Param0 + 64);
								Var2 = Function_462(&Param0 + 64);
							}
							else if (SQUAD_GET_SIZE(&Param0 + 72) > 1)
							{
								if (&bParam1)
								{
									uVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&uVar4))
									{
										REMOVE_BLIP(&uVar4);
									}
									uVar5 = GET_BLIP_ON_OBJECT(&Param0);
									if (IS_BLIP_VALID(&uVar5))
									{
										REMOVE_BLIP(&uVar5);
									}
								}
								SQUAD_COMPUTE_CENTROID(&Param0 + 72, &Var0);
								Function_461(StackVal, Var0, &Param0 + 24);
								Var0 = Function_461(StackVal, Var0, &Param0 + 24);
								Function_462(&Param0 + 72);
								Var2 = Function_462(&Param0 + 72);
							}
							else
							{
								if (&bParam1)
								{
									uVar4 = GET_BLIP_ON_OBJECT(&Param0 + 8);
									if (IS_BLIP_VALID(&uVar4))
									{
										REMOVE_BLIP(&uVar4);
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
								Function_255(&Param0);
								if (!Function_74(StackVal, Function_255(&Param0)))
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
								Function_255(&Param0 + 8);
								if (!Function_74(StackVal, Function_255(&Param0 + 8)))
								{
									uVar4 = ADD_BLIP_FOR_OBJECT(&Param0 + 8, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(&uVar4))
									{
										SET_BLIP_SCALE(&uVar4, 1.0f);
										SET_BLIP_PRIORITY(&uVar4, 2);
									}
								}
							}
							SQUAD_COMPUTE_CENTROID(&Param0 + 64, &Var0);
							Function_462(&Param0 + 64);
							Var2 = Function_462(&Param0 + 64);
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

void Function_570() //Position: 0x2537D / 152445
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			iLocal_1366++;
			break;
		
		case 0x00000001:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_571(int[] iParam0) //Position: 0x253AD / 152493
{
	switch (iLocal_1356)
	{
		case 0x00000000:
			iLocal_1356++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID(&(iParam0[0])))
			{
				iParam0[0] = Function_572("beechersHope", "stable01", 94);
				if (IS_DOOR_VALID(&(iParam0[0])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[1])))
			{
				iParam0[1] = Function_572("beechersHope", "stable01", 95);
				if (IS_DOOR_VALID(&(iParam0[1])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[2])))
			{
				iParam0[2] = Function_572("beechersHope", "stable01", 98);
				if (IS_DOOR_VALID(&(iParam0[2])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[3])))
			{
				iParam0[3] = Function_572("beechersHope", "stable01", 99);
				if (IS_DOOR_VALID(&(iParam0[3])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[4])))
			{
				iParam0[4] = Function_572("beechersHope", "stable01", 96);
				if (IS_DOOR_VALID(&(iParam0[4])))
				{
				}
			}
			if (!IS_DOOR_VALID(&(iParam0[5])))
			{
				iParam0[5] = Function_572("beechersHope", "stable01", 97);
				if (IS_DOOR_VALID(&(iParam0[5])))
				{
				}
			}
			iLocal_1356++;
			break;
		
		case 0x00000002:
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
				OPEN_DOOR_DIRECTION(&(iParam0[2]), 1);
			}
			if (IS_DOOR_VALID(&(iParam0[3])))
			{
				Function_161(&(iParam0[3]), 0);
				OPEN_DOOR_DIRECTION(&(iParam0[3]), 0);
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
			iLocal_1356++;
			break;
		
		case 0x00000003:
			iLocal_1356++;
			break;
	}
	return;
}

int Function_572(var uParam0, var uParam1, int iParam2) //Position: 0x2568B / 153227
{
	return Function_573(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_573(int iParam0, char* cParam1, bool bParam3) //Position: 0x2569F / 153247
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

void Function_574() //Position: 0x25744 / 153412
{
	if (STREAMING_IS_WORLD_LOADED())
	{
		if (Function_336(Global_46914[1]))
		{
			Function_571(&iLocal_1377);
		}
		else
		{
			iLocal_1356 = 0;
		}
	}
	Function_349(&uLocal_876);
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_579();
		Function_465(&Local_1567 + 64, &Local_1567 + 88, &iLocal_4 + 1696);
		Function_464(&Local_1567);
		if (bLocal_1447)
		{
			Function_569(&Local_1567, 1);
			Function_568(&Local_1567, 1);
			Function_567(&Local_1567, 1, 0x41700000);
			if (Function_310(&iLocal_1507) <= 0,2f)
			{
				Function_455(&Local_1567);
				Function_238(&iLocal_1507);
			}
			Function_454();
		}
		Function_445(&Global_54076);
		Function_444();
		Function_578();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_997[0] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_337();
				bLocal_978 = Global_46914[1];
				if (!Function_336(bLocal_978))
				{
					Function_334(&Local_878);
				}
				Function_333(&Global_54076, &iLocal_4 + 1928[0], 1, 1, 1);
				iLocal_1364 = 0;
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				Function_238(&iLocal_985);
				iLocal_977 = 1;
			}
			else
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295))
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1356 = 0;
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1371 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				Function_407(&iLocal_1449);
				bLocal_1367 = Function_331(Function_332(Local_878));
				PRINTINT(bLocal_1367);
				PRINTNL();
				bLocal_1368 = (15 - bLocal_1367);
				PRINTINT(bLocal_1368);
				PRINTNL();
				Local_1567.f_120 = 0;
				Local_1567.f_124 = 0;
				bLocal_1374 = Local_1567.f_120;
				bLocal_1375 = Local_1567.f_124;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_1375) / TO_FLOAT(bLocal_1374)));
				PRINTNL();
				bLocal_1374 = Local_1567.f_120;
				Global_53524.f_176 = bLocal_1374;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1375 = Local_1567.f_124;
				Global_53524.f_180 = bLocal_1375;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_576();
				if (iLocal_997[0] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_983))
						{
							Function_333(&bLocal_983, &iLocal_4 + 1928[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_983))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_983);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						Function_196(13, 0, 1);
						Function_333(&bLocal_981, &iLocal_4 + 1928[1], 1, 1, 1);
						if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
						{
							Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1928[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_981) && !IS_ACTOR_MOUNTED(&iLocal_4 + 856[02]))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_981, &iLocal_4 + 856[02]);
							}
						}
					}
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					Function_314(&Local_1567 + 88, &Local_1567 + 64);
				}
				if (SQUAD_IS_VALID(&Local_1567 + 64))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 64);
					Function_313(&Local_1567 + 64);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1640, -1.0f);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &bLocal_1397, "Son", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &bLocal_1395, "Wife", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[415]), &Local_1567 + 72, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[515]), &Local_1567 + 80, "Cow", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[615]), &Local_1567 + 88, "Cow", 0, 0x5f5e100, 1);
				Function_394(&(Local_1075[715]));
				Function_390(&(Local_1075[315]), 2);
				Function_390(&(Local_1075[415]), 2);
				Function_390(&(Local_1075[515]), 2);
				Function_390(&(Local_1075[615]), 2);
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(&Local_1567 + 64))
			{
				Function_379();
				Function_575();
				Function_313(&Local_1567 + 64);
				Function_376(&Local_1567 + 64, &iLocal_4 + 1288);
				Function_375(&Local_1567 + 64, 2, 1);
				Function_375(&Local_1567 + 88, 2, 1);
				Function_375(&Local_1567 + 72, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1567 + 64, &Local_1567 + 96, 1, 0,25f, 0,25f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 16, (4,5f - 0,5f));
			}
			CAMERA_RESET(0);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_1481))
				{
					if (IS_OBJECT_VALID(&Local_1567 + 8))
					{
						uLocal_1481 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uLocal_876, "HOME02RANCH01_CAMERA_FOCUS", &Local_1567 + 8, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_1481))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1481, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2568, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2568, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2568, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				GET_OBJECT_POSITION(&iLocal_4 + 1976[3], &bLocal_1418);
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
					Function_196(13, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_981, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2976, 4, 1, 1, 1, false);
					TASK_GO_NEAR_COORD(0, &bLocal_1418, 1.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
				if (iLocal_997[0] == 1)
				{
					if (SQUAD_IS_VALID(&Local_1567 + 64))
					{
						Function_379();
						Function_575();
						Function_313(&Local_1567 + 64);
						Function_376(&Local_1567 + 64, &iLocal_4 + 1288);
						Function_375(&Local_1567 + 64, 2, 1);
						Function_375(&Local_1567 + 88, 2, 1);
						Function_375(&Local_1567 + 72, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(&Local_1567 + 64, &Local_1567 + 96, 1, 0,25f, 0,25f);
						_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(&Local_1567 + 64, &Local_1567 + 96, 0, 16, (4,5f - 0,5f));
					}
				}
				iLocal_1445 = 0;
				if (SQUAD_IS_VALID(&Local_1567 + 72))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 72);
					Function_374(&Local_1567 + 72);
				}
				(&Local_1567 + 44) = Vector(0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(&Local_1567 + 80))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 80);
					Function_374(&Local_1567 + 80);
				}
				*(&Local_1567 + 16) = &iLocal_4 + 2568;
				GET_OBJECT_POSITION(&iLocal_4 + 2568, &uLocal_1415);
				if (SQUAD_IS_VALID(&Local_1567 + 88))
				{
					SQUAD_GOALS_CLEAR(&Local_1567 + 88);
					bLocal_1355 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1640, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 88, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1355);
					TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				}
				Function_371();
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_310(&iLocal_985) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_370("home02_ranch01_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, &uLocal_876, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					DESTROY_OBJECT(&uLocal_1405);
				}
				if (bLocal_1447)
				{
					Function_366();
				}
			}
			else
			{
				Function_356(&fLocal_993, 135.0f, 315.0f, &Local_1567 + 8, "Herd_return", "Herd_abandoned", &bLocal_1018, 0, 0, 0, 4294967295, 1, 0);
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2568, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (!IS_OBJECT_VALID(&uLocal_1405))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2568, &Local_1409);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2568, &Local_1412);
					uLocal_1405 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, Vector(1.0f, 1.0f, 1.0f), 0, &Global_54076, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
					}
				}
				if (!bLocal_1447)
				{
					Function_259();
					Function_355();
				}
				if (((SQUAD_IS_VALID(&Local_1567 + 64) && SQUAD_IS_VALID(&Local_1567 + 88)) && SQUAD_IS_VALID(&Local_1567 + 72)) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if ((SQUAD_GET_SIZE(&Local_1567 + 64) != 0 && SQUAD_GET_SIZE(&Local_1567 + 72) != 0) && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							DESTROY_OBJECT(&uLocal_1405);
						}
						Function_354(&Local_1567 + 64);
						Function_354(&Local_1567 + 72);
						Function_354(&Local_1567 + 80);
						Function_354(&Local_1567 + 88);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 88);
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			bLocal_1374 = Local_1567.f_120;
			Global_53524.f_176 = bLocal_1374;
			PRINTINT(Global_53524.f_176);
			PRINTNL();
			bLocal_1375 = Local_1567.f_124;
			Global_53524.f_180 = bLocal_1375;
			PRINTINT(Global_53524.f_180);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
			PRINTNL();
			iLocal_997[1] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 2;
			iLocal_977 = 0;
			break;
	}
	return;
}

void Function_575() //Position: 0x26399 / 156569
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(&Local_1567 + 64, &Local_1567 + 96, &Local_1567 + 24, 1000.0f, 0,85f, 1.0f, 3.0f);
	return;
}

void Function_576() //Position: 0x263C0 / 156608
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1928[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_577();
	return;
}

void Function_577() //Position: 0x26466 / 156774
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2904;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2560, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 1);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1632, -1.0f);
		}
	}
	return;
}

void Function_578() //Position: 0x26542 / 156994
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_430(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(&Local_1567 + 72) && SQUAD_IS_VALID(&Local_1567 + 80))
				{
					if (SQUAD_GET_SIZE(&Local_1567 + 72) != 0 && SQUAD_GET_SIZE(&Local_1567 + 80) != 0)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_981, 36.0f))
						{
							if (Function_310(&iLocal_989) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(&bLocal_981, "Home02_r1_UnclYells1", &Global_54076, 0, 0, 0, 0, 0);
								Function_238(&iLocal_989);
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_579() //Position: 0x2663E / 157246
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			iLocal_1366++;
			break;
		
		case 0x00000001:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_580() //Position: 0x2666E / 157294
{
	if (!iLocal_1468)
	{
		if (STREAMING_IS_WORLD_LOADED())
		{
			if (Function_336(Global_46914[1]))
			{
				Function_571(&iLocal_1377);
			}
			else
			{
				iLocal_1356 = 0;
				iLocal_1468 = 0;
			}
		}
	}
	if (!iLocal_1467)
	{
		if (STREAMING_IS_WORLD_LOADED())
		{
			if (Function_336(Global_46914[1]))
			{
				Function_599();
			}
			else
			{
				iLocal_1373 = 0;
				iLocal_1467 = 0;
			}
		}
	}
	if (!iLocal_1466)
	{
		if (STREAMING_IS_WORLD_LOADED())
		{
			if (Function_336(Global_46914[1]))
			{
				Function_594();
			}
			else
			{
				iLocal_1370 = 0;
				iLocal_1466 = 0;
			}
		}
	}
	Function_349(&uLocal_876);
	if (((iLocal_977 < 5 && iLocal_977 > 105) && !iLocal_977 != 104) && !iLocal_977 != 103)
	{
		Function_590(1, 0);
		Function_589();
		Function_588();
		Function_587();
		Function_586();
	}
	switch (iLocal_977)
	{
		case 0x00000000:
			Function_345(0);
			if (Function_335(&Local_878))
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			iLocal_1364 = 0;
			iLocal_1363 = 0;
			if (IS_ACTOR_VALID(&bLocal_983))
			{
				TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_983, true);
			}
			if (IS_ACTOR_VALID(&bLocal_981))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_981);
				MEMORY_PREFER_RIDING(&bLocal_981, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
				if (Function_335(&Local_878))
				{
					TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_981, true);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_1395))
			{
				TASK_STAND_STILL(&bLocal_1395, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1395, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1397))
			{
				TASK_STAND_STILL(&bLocal_1397, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1397, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_337();
			bLocal_978 = Global_46914[1];
			if (!Function_336(bLocal_978))
			{
				Function_334(&Local_878);
			}
			if (Function_335(&Local_878))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_333(&Global_54076, &iLocal_4 + 1864[0], 1, 1, 1);
			}
			Function_238(&iLocal_985);
			iLocal_977 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(bLocal_978) || bLocal_978 != 4294967295))
			{
				Function_238(&iLocal_985);
				iLocal_977 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415())
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				iLocal_1357 = 0;
				iLocal_1366 = 0;
				iLocal_1371 = 0;
				iLocal_1373 = 0;
				iLocal_1356 = 0;
				iLocal_1468 = 0;
				iLocal_1467 = 0;
				iLocal_1445 = 0;
				iLocal_1020 = 0;
				bLocal_1447 = false;
				iLocal_1446 = 0;
				bLocal_1448 = false;
				iLocal_1461 = 0;
				iLocal_1463 = 0;
				iLocal_1462 = 0;
				iLocal_1465 = 0;
				iLocal_1470 = 0;
				Function_407(&iLocal_1449);
				if (Function_335(&Local_878))
				{
					iLocal_1370 = 0;
					iLocal_1466 = 0;
					if (IS_VOLUME_VALID(&iLocal_4 + 1624))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1624);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1624);
						CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1624, 15);
					}
				}
				bLocal_1367 = 15;
				bLocal_1368 = false;
				PRINTINT(bLocal_1367);
				PRINTNL();
				PRINTINT(bLocal_1368);
				PRINTNL();
				bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
				PRINTINT(bLocal_1372);
				PRINTNL();
				Function_351(Local_878, bLocal_1372);
				Local_1567.f_120 = 0;
				Local_1567.f_124 = 0;
				bLocal_1374 = Local_1567.f_120;
				bLocal_1375 = Local_1567.f_124;
				PRINTINT(bLocal_1374);
				PRINTNL();
				PRINTINT(bLocal_1375);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_1375) / TO_FLOAT(bLocal_1374)));
				PRINTNL();
				bLocal_1374 = Local_1567.f_120;
				Global_53524.f_176 = bLocal_1374;
				PRINTINT(Global_53524.f_176);
				PRINTNL();
				bLocal_1375 = Local_1567.f_124;
				Global_53524.f_180 = bLocal_1375;
				PRINTINT(Global_53524.f_180);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_53524.f_180) / TO_FLOAT(Global_53524.f_176)));
				PRINTNL();
				Function_584();
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					SET_ACTOR_FACTION(&bLocal_981, 20);
					MEMORY_PREFER_RIDING(&bLocal_981, false);
					Function_196(13, 0, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1395))
				{
					SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
					Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_1397))
				{
					SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
					Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				}
				Function_395(&(Local_1075[015]), &bLocal_981, "Uncle", 1, 0x5f5e100, 1);
				Function_395(&(Local_1075[115]), &bLocal_1397, "Son", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[215]), &bLocal_1395, "Wife", 0, 0x5f5e100, 1);
				Function_395(&(Local_1075[315]), &Local_1567 + 64, "Cow", 0, 0x5f5e100, 1);
				Function_394(&(Local_1075[415]));
				Function_394(&(Local_1075[515]));
				Function_394(&(Local_1075[615]));
				Function_394(&(Local_1075[715]));
				Function_390(&(Local_1075[315]), 2);
				if (HUD_IS_FADED())
				{
					Function_238(&iLocal_985);
					iLocal_977 = 5;
				}
				else
				{
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
						TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
						GET_OBJECT_POSITION(&iLocal_4 + 1928[3], &uLocal_1439);
						bLocal_1355 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 2760, 1, 3212836864);
						TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 2712, 1, 3212836864);
						TASK_MOUNT(false, &iLocal_4 + 856[02], 0, 1, 1, 32);
						TASK_FACE_COORD(0, &iLocal_4 + 2736, 0);
						TASK_FOLLOW_PATH(0, &iLocal_4 + 2968, 2, 1, 0, 1, 0);
						TASK_GO_NEAR_COORD(0, &uLocal_1439, 1.0f, 2);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
						TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
						TASK_PRIORITY_SET(&bLocal_981, true);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_238(&iLocal_985);
					iLocal_977 = 6;
				}
				Function_254(iLocal_976);
				Function_382(StackVal, Function_254(iLocal_976), iLocal_976, Global_46754[0], Function_257(iLocal_976), 0);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_981) && SQUAD_IS_VALID(&Local_1567 + 64))
			{
				if (Function_381(&bLocal_981, 1, 0x41700000) && Function_380(&Local_1567 + 64, 1))
				{
					if (IS_ACTOR_VALID(&bLocal_1395))
					{
						TASK_CLEAR(&bLocal_1395);
					}
					if (IS_ACTOR_VALID(&bLocal_1397))
					{
						TASK_CLEAR(&bLocal_1397);
					}
					Function_238(&iLocal_985);
					iLocal_977 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_335(&Local_878))
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,85f, 0);
			}
			Function_333(&bLocal_981, &iLocal_4 + 1864[1], 1, 1, 1);
			CLEAR_ACTOR_MIN_SPEED(&bLocal_981);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_981);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_981);
			ACTOR_POP_NEXT_GAIT(&bLocal_981, 2, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_981, true);
			GET_OBJECT_POSITION(&iLocal_4 + 1928[3], &uLocal_1439);
			bLocal_1355 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 2760, 1, 3212836864);
			TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 2712, 1, 3212836864);
			TASK_MOUNT(false, &iLocal_4 + 856[02], 0, 1, 1, 32);
			TASK_FACE_COORD(0, &iLocal_4 + 2736, 0);
			TASK_FOLLOW_PATH(0, &iLocal_4 + 2968, 2, 1, 0, 1, 0);
			TASK_GO_NEAR_COORD(0, &uLocal_1439, 1.0f, 2);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
			TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
			TASK_PRIORITY_SET(&bLocal_981, true);
			Function_238(&iLocal_985);
			iLocal_977 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_238(&iLocal_985);
				iLocal_977 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (!IS_BLIP_VALID(&uLocal_1403))
					{
						uLocal_1403 = ADD_BLIP_FOR_ACTOR(&bLocal_983, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&uLocal_1403))
						{
						}
					}
				}
				Function_238(&iLocal_985);
				iLocal_977 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_310(&iLocal_985) <= 5.0f)
			{
				Function_370("home02_ranch01_obj00", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_490(&fLocal_993, 60.0f, 200.0f, &bLocal_981, "Uncle_return", "Uncle_abandoned", &bLocal_1018, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_981)))
					{
						Function_196(13, 1, 1);
					}
				}
			}
			else
			{
				if (IS_ACTOR_VALID(&bLocal_981))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_981)))
					{
						Function_196(13, 0, 1);
					}
				}
				if (!IS_BLIP_VALID(&uLocal_1403))
				{
					uLocal_1403 = ADD_BLIP_FOR_ACTOR(&bLocal_983, 334, 0, 2, 0);
					if (IS_BLIP_VALID(&uLocal_1403))
					{
					}
				}
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_983)
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						TASK_CLEAR(&bLocal_983);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 9;
					}
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
				{
					if (GET_MOUNT(&Global_54076) == &iLocal_4 + 856[02])
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_310(&iLocal_985) <= 0,5f)
			{
				Function_238(&iLocal_985);
				iLocal_977 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_370("home02_ranch01_obj00a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238(&iLocal_985);
				Function_238(&iLocal_989);
				Function_238(&fLocal_993);
				iLocal_977 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_367(&fLocal_993, 60.0f, &bLocal_983, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_1018, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_1403))
				{
					REMOVE_BLIP(&uLocal_1403);
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					Function_583(&uLocal_1405);
				}
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (!IS_ACTOR_DEAD(&bLocal_983))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_983)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_983, 334, 0, 2, 0);
						}
					}
				}
			}
			else
			{
				if (Function_490(&fLocal_993, 60.0f, 200.0f, &bLocal_981, "Uncle_return", "Uncle_abandoned", &bLocal_1018, 0, 0, 0, 325, 1))
				{
					if (IS_BLIP_VALID(&uLocal_1403))
					{
						REMOVE_BLIP(&uLocal_1403);
					}
					if (IS_OBJECT_VALID(&uLocal_1405))
					{
						Function_583(&uLocal_1405);
					}
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_981)))
						{
							Function_196(13, 1, 1);
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(&bLocal_981))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_981)))
						{
							Function_196(13, 0, 1);
						}
					}
					if (!IS_BLIP_VALID(&uLocal_1403))
					{
						uLocal_1403 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1928[2], 330, 0f, 2, 0);
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							SET_BLIP_PRIORITY(&uLocal_1403, 3);
						}
					}
					if (!IS_OBJECT_VALID(&uLocal_1405))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 1928[2], &Local_1409);
						GET_OBJECT_ORIENTATION(&iLocal_4 + 1928[2], &Local_1412);
						uLocal_1405 = Function_582(StackVal, StackVal, &uLocal_876, "HOME02RANCH01GATEWAY01", Local_1409, Local_1412, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_983))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_983)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_983));
					}
				}
				if (IS_OBJECT_VALID(&uLocal_1405))
				{
					if (GATEWAY_UPDATE(&uLocal_1405) && Function_581(&Global_54076, &iLocal_4 + 2560, 100.0f))
					{
						if (IS_BLIP_VALID(&uLocal_1403))
						{
							REMOVE_BLIP(&uLocal_1403);
						}
						if (IS_OBJECT_VALID(&uLocal_1405))
						{
							Function_583(&uLocal_1405);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_259();
						Function_238(&iLocal_985);
						iLocal_977 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&Local_1567 + 88))
			{
				bLocal_1367 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_1567 + 64);
			}
			PRINTINT(bLocal_1372);
			PRINTNL();
			bLocal_1372 = Function_352(bLocal_1367, bLocal_1372);
			PRINTINT(bLocal_1372);
			PRINTNL();
			Function_351(Local_878, bLocal_1372);
			PRINTINT(bLocal_1367);
			PRINTNL();
			bLocal_1368 = (15 - bLocal_1367);
			PRINTINT(bLocal_1368);
			PRINTNL();
			iLocal_997[0] = 1;
			Function_238(&iLocal_985);
			iLocal_976 = 1;
			iLocal_977 = 0;
			break;
	}
	return;
}

int Function_581(var uParam0, Vector3 vParam1, float fParam2) //Position: 0x272E9 / 160489
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	float fVar8;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		GET_OBJECT_POSITION(&vParam1, &Var2);
		uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		UNK_0x44986367(&uVar4, GET_HEADING(&uParam0));
		fVar8 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar4, &uVar6);
		if (fVar8 >= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

var Function_582(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x27337 / 160567
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

void Function_583(var uParam0) //Position: 0x27422 / 160802
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

void Function_584() //Position: 0x274B8 / 160952
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1864[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_585();
	return;
}

void Function_585() //Position: 0x2755E / 161118
{
	Function_324();
	*(&Local_1567 + 24) = &iLocal_4 + 2904;
	if (!SQUAD_IS_VALID(&Local_1567 + 64))
	{
		*(&Local_1567 + 64) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_876, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(&Local_1567 + 64))
		{
			SQUAD_GOALS_CLEAR(&Local_1567 + 64);
			Function_321(&Local_1567, &uLocal_876, &iLocal_4 + 2560, &iLocal_1471, 5, 2.0f, 5,5f, 2.0f, 1);
			Function_329(&Local_1567 + 64, 0);
			Function_320(&Local_1567 + 64, 1);
			Function_319(&Local_1567 + 64, 0);
			Function_318(&Local_1567 + 64, 0);
			Function_317(&Local_1567 + 64, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_1567 + 64, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1632, -1.0f);
		}
	}
	return;
}

void Function_586() //Position: 0x2763A / 161338
{
	if (Function_310(&iLocal_1527) <= 0,1f)
	{
		switch (iLocal_1371)
		{
			case 0x00000000:
				iLocal_1371++;
				break;
			
			case 0x00000001:
				if (iLocal_977 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_1371++;
					}
				}
				break;
			
			case 0x00000002:
				Function_430(0, 0, 0, 0x42340000, 0x41f00000);
				if (Function_310(&iLocal_985) <= 10.0f)
				{
					iLocal_1371++;
				}
				break;
			
			case 0x00000003:
				Function_430(1, 0, 0, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000004:
				iLocal_1371++;
				break;
			}
	}
	return;
}

void Function_587() //Position: 0x276E7 / 161511
{
	if (IS_ACTOR_VALID(&bLocal_981))
	{
		switch (iLocal_1357)
		{
			case 0x00000000:
				iLocal_1357++;
				break;
			
			case 0x00000001:
				if (iLocal_1465)
				{
					TASK_CLEAR(&bLocal_981);
					Function_238(&iLocal_1503);
					iLocal_1357++;
				}
				break;
			
			case 0x00000002:
				if (Function_310(&iLocal_1503) <= 1.0f)
				{
					if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
					{
						bLocal_1355 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(0, &iLocal_4 + 856[02], 0, 3212836864);
						TASK_MOUNT(false, &iLocal_4 + 856[02], 0, 1, 2, 2147483647);
						TASK_FACE_COORD(0, &iLocal_4 + 2736, 0);
						TASK_FOLLOW_PATH(0, &iLocal_4 + 2968, 2, 1, 0, 1, 0);
						TASK_GO_NEAR_COORD(0, &uLocal_1439, 1.0f, 2);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_981, bLocal_1355);
						TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
						TASK_PRIORITY_SET(&bLocal_981, true);
					}
					iLocal_1357++;
				}
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
				{
					if (GET_MOUNT(&bLocal_981) == &iLocal_4 + 856[02])
					{
						iLocal_1357++;
					}
				}
				break;
			
			case 0x00000004:
				if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
				{
					TASK_CLEAR(&iLocal_4 + 856[02]);
				}
				iLocal_1357++;
				break;
			
			case 0x00000005:
				iLocal_1357++;
				break;
			}
	}
	return;
}

void Function_588() //Position: 0x27842 / 161858
{
	switch (iLocal_1366)
	{
		case 0x00000000:
			iLocal_1366++;
			break;
		
		case 0x00000001:
			iLocal_1366++;
			break;
	}
	return;
}

void Function_589() //Position: 0x27872 / 161906
{
	if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
	{
		if (!IS_ACTOR_VALID(&bLocal_983) || !IS_ACTOR_ALIVE(&bLocal_983))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 856[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 856[02], 0);
			}
		}
	}
	return;
}

void Function_590(bool bParam0, bool bParam1) //Position: 0x278B7 / 161975
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_198(&bLocal_983);
			if (GET_MOUNT(&Global_54076) != &bLocal_983)
			{
				if (GET_MOUNT(&Global_54076) == &iLocal_4 + 856[02])
				{
					iLocal_1465 = 1;
					TASK_CLEAR(&iLocal_4 + 856[02]);
					uLocal_1401 = &bLocal_983;
					bLocal_983 = &iLocal_4 + 856[02];
					*(&iLocal_4 + 856[02]) = &uLocal_1401;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_983);
					Function_592(&bLocal_983, 0);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_983, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(&bLocal_983, 0);
					SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
					SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
					SET_ALLOW_RIDE_BY_AI(&iLocal_4 + 856[02], 1);
					GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 856[02], &iLocal_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(&bLocal_983, GET_AMBIENT_LAYOUT());
					bLocal_983 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &bLocal_983);
					Function_592(&bLocal_983, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_983, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_983, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(&bLocal_981) != &iLocal_4 + 856[02])
		{
			MEMORY_PREFER_RIDING(&bLocal_981, true);
			SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
			Function_591(&bLocal_981, &iLocal_4 + 856[02], 1);
		}
	}
	return;
}

void Function_591(var uParam0, var uParam1, bool bParam2) //Position: 0x27A26 / 162342
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_365(&uParam1);
			uVar0 = Function_365(&uParam1);
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

void Function_592(int iParam0, int iParam1) //Position: 0x27B37 / 162615
{
	Function_593(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_593(float fParam0) //Position: 0x27B4C / 162636
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

int Function_594() //Position: 0x27D1B / 163099
{
	switch (iLocal_1370)
	{
		case 0x00000000:
			iLocal_1370++;
			break;
		
		case 0x00000001:
			if (IS_GRINGO_VALID(&(uLocal_1559[0])) && IS_GRINGO_VALID(&(uLocal_1559[1])))
			{
				iLocal_1370 = 5;
			}
			else
			{
				Function_238(&iLocal_1551);
				iLocal_1370++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(&(uLocal_1559[0])))
			{
				Function_598(StackVal, *(&iLocal_4 + 2808), 0, &(uLocal_1559[0]));
			}
			else
			{
				iLocal_1370 = 3;
			}
			if (Function_310(&iLocal_1551) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
				uLocal_1559[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 2840, 1,5f, 0);
				if (IS_GRINGO_VALID(&(uLocal_1559[0])))
				{
				}
				Function_238(&iLocal_1551);
				iLocal_1370 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_GRINGO_VALID(&(uLocal_1559[1])))
			{
				Function_598(StackVal, *(&iLocal_4 + 2808), 1, &(uLocal_1559[1]));
			}
			else
			{
				iLocal_1370 = 4;
			}
			if (Function_310(&iLocal_1551) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch02 gringo is out of order!!!");
				uLocal_1559[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 2872, 1,5f, 0);
				if (IS_GRINGO_VALID(&(uLocal_1559[1])))
				{
				}
				Function_238(&iLocal_1551);
				iLocal_1370 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(&(uLocal_1559[0])) && IS_GRINGO_VALID(&(uLocal_1559[1])))
			{
				Function_255(GET_OBJECT_FROM_GRINGO(&(uLocal_1559[0])));
				Function_595(StackVal, Function_255(GET_OBJECT_FROM_GRINGO(&(uLocal_1559[0]))), 0, 0);
				Function_255(GET_OBJECT_FROM_GRINGO(&(uLocal_1559[1])));
				Function_595(StackVal, Function_255(GET_OBJECT_FROM_GRINGO(&(uLocal_1559[1]))), 0, 0);
			}
			iLocal_1370++;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_983))
			{
				if (IS_GRINGO_VALID(&(uLocal_1559[0])))
				{
					SNAP_ACTOR_TO_GRINGO(&bLocal_983, GET_OBJECT_FROM_GRINGO(&(uLocal_1559[0])), "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&bLocal_983, &(uLocal_1559[0]), "UseCase1", 1, 1);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
				else
				{
					Function_333(&bLocal_983, &iLocal_4 + 1864[2], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_983, true);
				}
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				if (IS_GRINGO_VALID(&(uLocal_1559[1])))
				{
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 856[02], GET_OBJECT_FROM_GRINGO(&(uLocal_1559[1])), "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 856[02], &(uLocal_1559[1]), "UseCase1", 1, 1);
					TASK_PRIORITY_SET(&iLocal_4 + 856[02], true);
				}
				else
				{
					Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1864[3], 1, 1, 1);
					TASK_STAND_STILL(&iLocal_4 + 856[02], -1.0f, 0, 0);
					TASK_PRIORITY_SET(&iLocal_4 + 856[02], true);
				}
			}
			iLocal_1370++;
			break;
		
		case 0x00000006:
			iLocal_1466 = 1;
			iLocal_1370++;
			break;
		
		case 0x00000007:
			return 1;
			break;
	}
	return 0;
}

int Function_595(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x2809B / 163995
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_597(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_596(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_596(&(uVar0[1]), "UseCase1"));
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

var Function_596(var uParam0, int iParam1) //Position: 0x28218 / 164376
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_597(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x28227 / 164391
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

void Function_598(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x28371 / 164721
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
	if (bParam2)
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
	}
	else
	{
		uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
	}
}

void Function_599() //Position: 0x28427 / 164903
{
	switch (iLocal_1373)
	{
		case 0x00000000:
			iLocal_1373++;
			break;
		
		case 0x00000001:
			iLocal_1373++;
			break;
		
		case 0x00000002:
			iLocal_1373++;
			break;
		
		case 0x00000003:
			iLocal_1373++;
			break;
		
		case 0x00000004:
			iLocal_1373++;
			break;
		
		case 0x00000005:
			iLocal_1373++;
			break;
	}
	return;
}

void Function_600() //Position: 0x2849B / 165019
{
	switch (iLocal_977)
	{
		case 0x00000006:
			Function_337();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_209(1, 0, 1);
			Function_649(&Local_878, 1);
			uLocal_876 = CREATE_LAYOUT("home02_ranch01_DynamicLayout");
			Function_648();
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(15);
			Function_646("NRT_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_644(0, 0);
			Function_325(&iLocal_985);
			Function_325(&iLocal_1551);
			iLocal_977 = 7;
			break;
		
		case 0x00000007:
			if (Function_628())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_626();
				}
				if (!Function_335(&Local_878))
				{
					iLocal_977 = 8;
				}
				else
				{
					iLocal_977 = 11;
				}
			}
			break;
		
		case 0x00000008:
			iLocal_1364 = 0;
			iLocal_1363 = 0;
			iLocal_1370 = 0;
			iLocal_1373 = 0;
			iLocal_1356 = 0;
			iLocal_1468 = 0;
			iLocal_1467 = 0;
			iLocal_1466 = 0;
			Function_333(&Global_54076, &iLocal_4 + 1864[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_981))
			{
				ACTOR_DISABLE_WEAPON_RENDER(&bLocal_981, 1, 1);
				TASK_CLEAR(&bLocal_981);
				TASK_STAND_STILL(&bLocal_981, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_981, true);
				Function_333(&bLocal_981, &iLocal_4 + 1864[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_983))
			{
				TASK_CLEAR(&bLocal_983);
				TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_983, true);
				Function_333(&bLocal_983, &iLocal_4 + 1864[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1395))
			{
				SET_ACTOR_HEALTH(&bLocal_1395, 50.0f);
				Function_333(&bLocal_1395, &iLocal_4 + 1864[4], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1395, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1395, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1397))
			{
				SET_ACTOR_HEALTH(&bLocal_1397, 50.0f);
				Function_333(&bLocal_1397, &iLocal_4 + 1864[5], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1397, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1397, true);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1624))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1624);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1624);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1624, 15);
			}
			iLocal_977 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_336(Global_46914[1]) || bLocal_978 != 4294967295))
			{
				if (Function_415())
				{
					Function_625();
					Function_238(&iLocal_985);
					Function_238(&iLocal_1551);
					iLocal_977 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_594() || Function_310(&iLocal_985) < 5.0f)
			{
				if (Function_607("$/cutscene/UNCLE_01/UNCLE_01", &iLocal_964, &Local_878, &iLocal_976, 171065, 170990, 170910, 170796, 170737, 170636, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_238(&iLocal_985);
					Function_238(&iLocal_1551);
					iLocal_977 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_979 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_196(13, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_981, 0);
			SET_ACTOR_FACTION(&bLocal_981, 20);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_981, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_981, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_981, GET_ACTOR_MAX_HEALTH(&bLocal_981));
			MEMORY_PREFER_RIDING(&bLocal_981, false);
			RESET_ACTOR_GAITS(&bLocal_983, 0);
			TASK_PRIORITY_SET(&bLocal_983, true);
			TASK_STAND_STILL(&bLocal_983, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_983, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_983, GET_ACTOR_MAX_HEALTH(&bLocal_983));
			SET_ALLOW_RIDE_BY_AI(&bLocal_983, 0);
			Function_325(&iLocal_1503);
			Function_325(&iLocal_1507);
			Function_325(&iLocal_1511);
			Function_325(&iLocal_1523);
			Function_325(&iLocal_1515);
			Function_325(&iLocal_1527);
			Function_325(&iLocal_1531);
			Function_325(&iLocal_1519);
			Function_325(&iLocal_1535);
			Function_325(&iLocal_1539);
			Function_325(&iLocal_1543);
			Function_325(&iLocal_1547);
			Function_325(&iLocal_1555);
			Function_646("NRT_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_605(&uLocal_1021, &uLocal_876);
			Function_325(&iLocal_989);
			Function_325(&fLocal_993);
			iLocal_976 = 0;
			iLocal_977 = 0;
			Function_602(&Local_878, &iLocal_976, &iLocal_977);
			Function_601(StackVal, StackVal, StackVal, StackVal, Function_626(), Local_878);
			switch (iLocal_976)
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

void Function_601(struct<41> Param0) //Position: 0x28900 / 166144
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_976 = 0;
			break;
		
		case 0x00000002:
			iLocal_976 = 1;
			break;
		
		case 0x00000003:
			iLocal_976 = 2;
			break;
		
		case 0x00000004:
			iLocal_976 = 3;
			break;
		
		case 0x00000005:
			iLocal_976 = 4;
			break;
		
		case 0x00000006:
			iLocal_976 = 5;
			break;
		
		case 0x00000007:
			iLocal_976 = 6;
			break;
		
		case 0x00000008:
			iLocal_976 = 7;
			break;
		
		case 0x00000009:
			iLocal_976 = 8;
			break;
		
		case 0x0000000A:
			iLocal_976 = 101;
			break;
	}
}

void Function_602(int iParam0, var uParam1, int iParam2) //Position: 0x28995 / 166293
{
	if (Function_335(&iParam0))
	{
		uParam1 = Function_604(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_603();
	}
	return;
}

void Function_603() //Position: 0x289D1 / 166353
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

var Function_604(int iParam0) //Position: 0x28A22 / 166434
{
	if (Function_335(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_605(struct<2>[] Param0) //Position: 0x28A3B / 166459
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_606(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_606(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_606(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_606(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_606(struct<13> Param0) //Position: 0x29114 / 168212
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

bool Function_607(var uParam0, int iParam1, struct<41> Param2) //Position: 0x291E3 / 168419
{
	if (!&bParam15)
	{
		Function_615(&iParam1, &uParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_335(&Param2) || Param2.f_40 < 1))
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
				Function_238(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_614())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_613(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_238(&iParam1 + 4);
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
					Function_613(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_310(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_310(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_611(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_613(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_238(&iParam1 + 4);
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
						Function_610(1.0f);
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
						Function_608();
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
					Function_289(1, 1);
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
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_335(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_608() //Position: 0x29845 / 170053
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_609();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_609() //Position: 0x2988A / 170122
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_610(bool bParam0) //Position: 0x2989C / 170140
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

void Function_611(var uParam0, int iParam1) //Position: 0x298B9 / 170169
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
			if ((&iVar3 == &Global_54076 && !Function_612(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_612(int iParam0) //Position: 0x2994B / 170315
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

int Function_613(bool bParam0) //Position: 0x2997C / 170364
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

bool Function_614() //Position: 0x29A3F / 170559
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

void Function_615(var uParam0, var uParam1) //Position: 0x29A7C / 170620
{
	Function_308(&uParam0, &uParam1, 0);
	return;
}

int Function_616() //Position: 0x29A8C / 170636
{
	switch (iLocal_976)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				Function_333(&Global_54076, &iLocal_4 + 1864[0], 1, 1, 1);
				Function_333(&bLocal_981, &iLocal_4 + 1864[1], 1, 1, 1);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_617() //Position: 0x29AF1 / 170737
{
	switch (iLocal_976)
	{
		case 0x00000063:
			Function_288(2, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_288(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_618() //Position: 0x29B2C / 170796
{
	switch (iLocal_976)
	{
		case 0x00000063:
			Function_333(&Global_54076, &iLocal_4 + 1864[0], 0, 1, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
			TASK_GO_NEAR_COORD(&bLocal_981, &iLocal_4 + 2760, 1,5f, 1);
			TASK_PRIORITY_SET(&bLocal_981, true);
			ACTOR_POP_NEXT_GAIT(&bLocal_981, 1, 0);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_981, 1, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_619() //Position: 0x29B9E / 170910
{
	switch (iLocal_976)
	{
		case 0x00000063:
			if (!Function_620() && !Function_409(&iLocal_890))
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

bool Function_620() //Position: 0x29BCE / 170958
{
	Function_414(&iLocal_4 + 8, 977, 2, 0);
	if (Function_409(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

int Function_621() //Position: 0x29BEE / 170990
{
	switch (iLocal_976)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-78,897f, 118,84f, 1394,355f), Vector(0,057f, -0,052f, 0,997f));
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_622() //Position: 0x29C39 / 171065
{
	switch (iLocal_976)
	{
		case 0x00000063:
			Function_304(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_623(StackVal, &uLocal_876, *(&Global_6667[5528] + 88), &iLocal_4 + 1256[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_304(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_623(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0x29CA2 / 171170
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &uParam5;
	Var2.f_4 = &uParam6;
	Var2.f_8 = &uParam7;
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
				Function_624(&uVar1, &uParam0);
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

void Function_624(var uParam0, int iParam1) //Position: 0x29F42 / 171842
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

void Function_625() //Position: 0x29FC4 / 171972
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_330();
		if (SQUAD_IS_VALID(&iLocal_4 + 880))
		{
			Function_329(&iLocal_4 + 880, 0);
			Function_328(&iLocal_4 + 880, 3);
			Function_326(&iLocal_4 + 880, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 856[02]))
			{
				SET_ACTORS_HORSE(&bLocal_981, &iLocal_4 + 856[02]);
				SET_MOST_RECENT_MOUNT(&bLocal_981, &iLocal_4 + 856[02]);
				Function_333(&iLocal_4 + 856[02], &iLocal_4 + 1864[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 880, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

struct<8> Function_626() //Position: 0x2A067 / 172135
{
	var uVar0;
	
	Function_421(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("home02_ranch01_layout");
	*(&iLocal_4 + 1280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 1256[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-78,491f, 117,077f, 1397,656f), Vector(0.0f, -42,47728f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1256[0]);
	*(&iLocal_4 + 1256[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1280, &iLocal_4 + 1256[1]);
	*(&iLocal_4 + 1328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary01_set");
	*(&iLocal_4 + 1288[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_01", 2,802597E-45f, Vector(-77,43976f, 116,1219f, 1474,599f), Vector(0.0f, 63,79972f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[0]);
	*(&iLocal_4 + 1288[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_02", 2,802597E-45f, Vector(-95,21734f, 116,1219f, 1352,978f), Vector(0.0f, -13,11305f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[1]);
	*(&iLocal_4 + 1288[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_03", 2,802597E-45f, Vector(47,85487f, 116,1219f, 1402,809f), Vector(0.0f, -34,54829f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[2]);
	*(&iLocal_4 + 1288[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_04", 2,802597E-45f, Vector(2,922384f, 116,1219f, 1319,958f), Vector(0.0f, 66,26939f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1328, &iLocal_4 + 1288[3]);
	*(&iLocal_4 + 1392) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary02_set");
	*(&iLocal_4 + 1336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_01", 2,802597E-45f, Vector(-43,5611f, 116,1219f, 1446,754f), Vector(0.0f, 72,3269f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1336[0]);
	*(&iLocal_4 + 1336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_02", 2,802597E-45f, Vector(-105,8501f, 116,1219f, 1325,364f), Vector(0.0f, 1,077084f, 0.0f), Vector(100.0f, 50.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1336[1]);
	*(&iLocal_4 + 1336[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_03", 2,802597E-45f, Vector(-26,43447f, 116,1219f, 1185,509f), Vector(0.0f, -75,04837f, 0.0f), Vector(100.0f, 50.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1336[2]);
	*(&iLocal_4 + 1336[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_05", 2,802597E-45f, Vector(87,99709f, 116,1219f, 1422,952f), Vector(0.0f, -23,7803f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1336[3]);
	*(&iLocal_4 + 1336[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_07", 2,802597E-45f, Vector(133,8068f, 116,1219f, 1267,991f), Vector(0.0f, 4,478785f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1336[4]);
	*(&iLocal_4 + 1336[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary02_08", 2,802597E-45f, Vector(19,57761f, 112,0981f, 1231,264f), Vector(0.0f, 85,16841f, 0.0f), Vector(25.0f, 50.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1392, &iLocal_4 + 1336[5]);
	*(&iLocal_4 + 1456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary03_set");
	*(&iLocal_4 + 1400[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_02", 2,802597E-45f, Vector(310,8641f, 116,1219f, 1336,988f), Vector(0.0f, -143,6801f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1456, &iLocal_4 + 1400[0]);
	*(&iLocal_4 + 1400[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_03", 2,802597E-45f, Vector(165,5406f, 116,1219f, 1487,04f), Vector(0.0f, 38,04403f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1456, &iLocal_4 + 1400[1]);
	*(&iLocal_4 + 1400[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_08", 2,802597E-45f, Vector(325,5414f, 112,1202f, 1484,468f), Vector(0.0f, -36,82767f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1456, &iLocal_4 + 1400[2]);
	*(&iLocal_4 + 1400[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_09", 2,802597E-45f, Vector(161,141f, 116,1219f, 1196,086f), Vector(0.0f, 49,24131f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1456, &iLocal_4 + 1400[3]);
	*(&iLocal_4 + 1400[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_11", 2,802597E-45f, Vector(47,74635f, 116,1219f, 1359,942f), Vector(0.0f, 46,91296f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1456, &iLocal_4 + 1400[4]);
	*(&iLocal_4 + 1400[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary03_12", 2,802597E-45f, Vector(3,270323f, 116,1219f, 1224,88f), Vector(0.0f, 155,2422f, 0.0f), Vector(100.0f, 50.0f, 225.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1456, &iLocal_4 + 1400[5]);
	*(&iLocal_4 + 1536) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary04_set");
	*(&iLocal_4 + 1464[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_02", 2,802597E-45f, Vector(294,3044f, 116,1219f, 1324,625f), Vector(0.0f, -124,5245f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[0]);
	*(&iLocal_4 + 1464[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_03", 2,802597E-45f, Vector(169,1626f, 116,1219f, 1466,114f), Vector(0.0f, 36,79566f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[1]);
	*(&iLocal_4 + 1464[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_04", 2,802597E-45f, Vector(266,5821f, 116,1219f, 1572,933f), Vector(0.0f, -125,1554f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[2]);
	*(&iLocal_4 + 1464[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_05", 2,802597E-45f, Vector(443,938f, 116,1219f, 1447,521f), Vector(0.0f, -131,5285f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[3]);
	*(&iLocal_4 + 1464[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_06", 2,802597E-45f, Vector(446,7664f, 116,1219f, 1704,494f), Vector(0.0f, -125,7935f, 0.0f), Vector(100.0f, 50.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[4]);
	*(&iLocal_4 + 1464[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_07", 2,802597E-45f, Vector(564,9994f, 116,1219f, 1567,985f), Vector(0.0f, 40,26626f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[5]);
	*(&iLocal_4 + 1464[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_08", 2,802597E-45f, Vector(494,6021f, 116,1219f, 1626,635f), Vector(0.0f, -38,44043f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[6]);
	*(&iLocal_4 + 1464[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary04_12", 2,802597E-45f, Vector(152,0407f, 128,0751f, 1311,893f), Vector(0.0f, 132,8004f, 0.0f), Vector(100.0f, 50.0f, 225.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1536, &iLocal_4 + 1464[7]);
	*(&iLocal_4 + 1616) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary05_set");
	*(&iLocal_4 + 1544[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_01", 2,802597E-45f, Vector(294,3044f, 116,1219f, 1324,625f), Vector(0.0f, -124,5245f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[0]);
	*(&iLocal_4 + 1544[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_02", 2,802597E-45f, Vector(169,1626f, 116,1219f, 1466,114f), Vector(0.0f, 36,79566f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[1]);
	*(&iLocal_4 + 1544[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_03", 2,802597E-45f, Vector(266,5821f, 116,1219f, 1572,933f), Vector(0.0f, -125,1554f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[2]);
	*(&iLocal_4 + 1544[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_04", 2,802597E-45f, Vector(443,938f, 116,1219f, 1447,521f), Vector(0.0f, -131,5285f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[3]);
	*(&iLocal_4 + 1544[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_05", 2,802597E-45f, Vector(446,7664f, 116,1219f, 1704,494f), Vector(0.0f, -125,7935f, 0.0f), Vector(100.0f, 50.0f, 400.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[4]);
	*(&iLocal_4 + 1544[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_06", 2,802597E-45f, Vector(564,9994f, 116,1219f, 1567,985f), Vector(0.0f, 40,26626f, 0.0f), Vector(100.0f, 50.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[5]);
	*(&iLocal_4 + 1544[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_07", 2,802597E-45f, Vector(637,413f, 116,1219f, 1702,428f), Vector(0.0f, -27,79716f, 0.0f), Vector(100.0f, 50.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[6]);
	*(&iLocal_4 + 1544[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary05_08", 2,802597E-45f, Vector(152,0407f, 128,0751f, 1311,893f), Vector(0.0f, 132,8004f, 0.0f), Vector(100.0f, 50.0f, 225.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1616, &iLocal_4 + 1544[7]);
	*(&iLocal_4 + 1624) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_hitch_exclude", 2,802597E-45f, Vector(-77,96362f, 116,8612f, 1419,65f), Vector(0.0f, -1,26219f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander00", 4,203895E-45f, Vector(-43,96908f, 118,3659f, 1424,019f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1640) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander01", 4,203895E-45f, Vector(-28,22684f, 115,8573f, 1384f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1648) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander02", 4,203895E-45f, Vector(63,1501f, 114,9941f, 1253,143f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1656) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander02a", 4,203895E-45f, Vector(265,0791f, 116,7787f, 1454,388f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1664) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander03", 4,203895E-45f, Vector(564.0f, 105,4117f, 1696.0f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1672) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander04", 4,203895E-45f, Vector(564.0f, 105,4117f, 1696.0f), Vector(0.0f, 20.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&iLocal_4 + 1680) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander04a", 4,203895E-45f, Vector(379,3721f, 110,658f, 1520,696f), Vector(0.0f, -0,8191981f, 0.0f), Vector(30.0f, 10.0f, 30.0f));
	*(&iLocal_4 + 1688) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01a", 4,203895E-45f, Vector(-28,22684f, 115,8573f, 1384f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1696) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01", 2,802597E-45f, Vector(-27,02115f, 116,9494f, 1407,295f), Vector(0.0f, -38,87104f, 0.0f), Vector(100.0f, 30.0f, 8.0f));
	*(&iLocal_4 + 1704) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective02", 2,802597E-45f, Vector(40,26625f, 115,9082f, 1252,453f), Vector(0.0f, -90,96569f, 0.0f), Vector(90.0f, 30.0f, 8.0f));
	*(&iLocal_4 + 1712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective02a", 4,203895E-45f, Vector(63,0499f, 115,2815f, 1253,115f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective03", 2,802597E-45f, Vector(251,1784f, 121,4745f, 1426,427f), Vector(0.0f, 222,6671f, 0.0f), Vector(1000.0f, 60.0f, 10.0f));
	*(&iLocal_4 + 1728) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective03a", 2,802597E-45f, Vector(302,0987f, 114,7047f, 1478,322f), Vector(0.0f, -130,1763f, 0.0f), Vector(1000.0f, 60.0f, 10.0f));
	*(&iLocal_4 + 1736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_train_objective01", 2,802597E-45f, Vector(481,167f, 101,3594f, 1522,599f), Vector(0.0f, -63,24207f, 0.0f), Vector(60.0f, 40.0f, 10.0f));
	*(&iLocal_4 + 1744) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective04a", 4,203895E-45f, Vector(564.0f, 105,4117f, 1696.0f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 1752) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective04", 2,802597E-45f, Vector(566,2997f, 105,3298f, 1706,871f), Vector(0.0f, 229,816f, 0.0f), Vector(1000.0f, 60.0f, 10.0f));
	*(&iLocal_4 + 1760) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_robbery_start", 2,802597E-45f, Vector(368,947f, 118,2792f, 1585,581f), Vector(0.0f, -57,21249f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1768) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_robbery_start1", 2,802597E-45f, Vector(328,6071f, 118,2792f, 1611,566f), Vector(0.0f, -57,21249f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_train_slow", 2,802597E-45f, Vector(549,5928f, 88,81026f, 1487,682f), Vector(0.0f, -64,82398f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_train_stop", 2,802597E-45f, Vector(576,7399f, 86,60691f, 1472,363f), Vector(0.0f, -64,82398f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_killzone", 2,802597E-45f, Vector(374,5449f, 114,1741f, 1587,43f), Vector(0.0f, -148,4611f, 0.0f), Vector(300.0f, 60.0f, 5.0f));
	*(&iLocal_4 + 1800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_release_attach", 2,802597E-45f, Vector(387,6208f, 112,5812f, 1577,911f), Vector(0.0f, -54,23452f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_train_robbery", 2,802597E-45f, Vector(321,9535f, 118,6778f, 1616,041f), Vector(0.0f, -56,32277f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_train_robbery1", 2,802597E-45f, Vector(290,4163f, 119,7052f, 1640,983f), Vector(0.0f, -49,56361f, 0.0f), Vector(60.0f, 30.0f, 10.0f));
	*(&iLocal_4 + 1824) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_train_right", 2,802597E-45f, Vector(561,9257f, 97,671f, 1599,453f), Vector(0.0f, 29,90425f, 0.0f), Vector(250.0f, 100.0f, 200.0f));
	*(&iLocal_4 + 1832) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_companion", 2,802597E-45f, Vector(363,594f, 117,9788f, 1530,358f), Vector(0.0f, -130,1763f, 0.0f), Vector(1000.0f, 60.0f, 10.0f));
	*(&iLocal_4 + 1840) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_companion02", 2,802597E-45f, Vector(537,7927f, 105,3298f, 1682,794f), Vector(0.0f, 229,816f, 0.0f), Vector(1000.0f, 60.0f, 10.0f));
	*(&iLocal_4 + 1848) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_no_negative", 2,802597E-45f, Vector(529,2573f, 105,3298f, 1675,586f), Vector(0.0f, 229,816f, 0.0f), Vector(1000.0f, 60.0f, 10.0f));
	*(&iLocal_4 + 1856) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1864[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-79,04177f, 117,053f, 1397,965f), Vector(0.0f, 179,1581f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[0], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart01", Vector(-77,4997f, 116,99f, 1398,61f), Vector(0.0f, 176,714f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[1], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart01", Vector(-77,191f, 116,861f, 1417,587f), Vector(0.0f, -89,185f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[2], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart01", Vector(-77,50741f, 116,8689f, 1419,258f), Vector(0.0f, -91,129f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[3], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WifeStart01", Vector(-112.0f, 118,8691f, 1376f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[4], &iLocal_4 + 1856);
	*(&iLocal_4 + 1864[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SonStart01", Vector(-100.0f, 118,8691f, 1348f), Vector(0.0f, 233,661f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1864[5], &iLocal_4 + 1856);
	*(&iLocal_4 + 1920) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1928[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-56f, 115,8748f, 1428f), Vector(0.0f, -117,9832f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1928[0], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(-32f, 116,8572f, 1416f), Vector(0.0f, 238,0081f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1928[1], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart02", Vector(-56f, 115,8574f, 1432f), Vector(0.0f, -51,08987f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1928[2], &iLocal_4 + 1920);
	*(&iLocal_4 + 1928[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart02", Vector(-36f, 116,805f, 1412f), Vector(0.0f, -106,3792f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1928[3], &iLocal_4 + 1920);
	*(&iLocal_4 + 1968) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1976[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-36f, 116,0952f, 1400f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[0], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(-21,18083f, 116,2554f, 1367,744f), Vector(0.0f, 152,2313f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[1], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart03", Vector(-28f, 116,6969f, 1404f), Vector(0.0f, -2,787435f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[2], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart03", Vector(-20,70103f, 116,5114f, 1371,323f), Vector(0.0f, -221,0924f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[3], &iLocal_4 + 1968);
	*(&iLocal_4 + 2016) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2024[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(31,95819f, 116,2469f, 1254,591f), Vector(0.0f, -223,4724f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[0], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart04", Vector(76,47637f, 114,2674f, 1254,547f), Vector(0.0f, 178,7364f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[1], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart04", Vector(32,3925f, 115,9765f, 1251,937f), Vector(0.0f, -92,86956f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[2], &iLocal_4 + 2016);
	*(&iLocal_4 + 2024[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart04", Vector(73,2344f, 113,9259f, 1251,831f), Vector(0.0f, -524,5639f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2024[3], &iLocal_4 + 2016);
	*(&iLocal_4 + 2064) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2072[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart05", Vector(251,3792f, 117,8141f, 1447,177f), Vector(0.0f, -491,8142f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[0], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart05", Vector(283,1788f, 116,11f, 1464,973f), Vector(0.0f, -133,4802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[1], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart05", Vector(245,3878f, 118,793f, 1441,148f), Vector(0.0f, -136,3993f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[2], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart05", Vector(284,1184f, 115,5214f, 1469,944f), Vector(0.0f, -483,6484f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[3], &iLocal_4 + 2064);
	*(&iLocal_4 + 2112) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2120[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart06", Vector(367,4276f, 111,8735f, 1506,605f), Vector(0.0f, -487,3821f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2120[0], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart06", Vector(369,3918f, 111,5975f, 1513,996f), Vector(0.0f, -133,4802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2120[1], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart06", Vector(381,2094f, 111,7333f, 1504,372f), Vector(0.0f, -124,8137f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2120[2], &iLocal_4 + 2112);
	*(&iLocal_4 + 2120[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart06", Vector(360,9926f, 112,1409f, 1513,445f), Vector(0.0f, -429,9284f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2120[3], &iLocal_4 + 2112);
	*(&iLocal_4 + 2160) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene07Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2168[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart07", Vector(378,9939f, 111,3469f, 1507,058f), Vector(0.0f, -487,3821f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[0], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart07", Vector(369,3918f, 111,5975f, 1513,996f), Vector(0.0f, -133,4802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[1], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart07", Vector(375,0832f, 111,6728f, 1506,126f), Vector(0.0f, -124,8137f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[2], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart07", Vector(368,5727f, 111,6381f, 1515,947f), Vector(0.0f, -456,7117f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[3], &iLocal_4 + 2160);
	*(&iLocal_4 + 2208) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene08Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2216[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart08", Vector(378,9939f, 111,3469f, 1507,058f), Vector(0.0f, -487,3821f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[0], &iLocal_4 + 2208);
	*(&iLocal_4 + 2216[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart08", Vector(369,3918f, 111,5975f, 1513,996f), Vector(0.0f, -133,4802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[1], &iLocal_4 + 2208);
	*(&iLocal_4 + 2216[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart08", Vector(375,0832f, 111,6728f, 1506,126f), Vector(0.0f, -124,8137f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[2], &iLocal_4 + 2208);
	*(&iLocal_4 + 2216[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart08", Vector(368,5727f, 111,6381f, 1515,947f), Vector(0.0f, -456,7117f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2216[3], &iLocal_4 + 2208);
	*(&iLocal_4 + 2256) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2264[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStartLast", Vector(544.0f, 105,6855f, 1692.0f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[0], &iLocal_4 + 2256);
	*(&iLocal_4 + 2264[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStartLast", Vector(548.0f, 105,6855f, 1691,948f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[1], &iLocal_4 + 2256);
	*(&iLocal_4 + 2264[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStartLast", Vector(544,0581f, 105,6855f, 1696,058f), Vector(0.0f, -44,86428f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[2], &iLocal_4 + 2256);
	*(&iLocal_4 + 2264[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStartLast", Vector(547,5157f, 105,6919f, 1686,694f), Vector(1,831466f, -198,9328f, 0,399791f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[3], &iLocal_4 + 2256);
	*(&iLocal_4 + 2264[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEndLast1", Vector(516.0f, 102,4f, 1788.0f), Vector(0.0f, -224,0032f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[4], &iLocal_4 + 2256);
	*(&iLocal_4 + 2264[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEndLast", Vector(504f, 113,4431f, 1708.0f), Vector(0.0f, -284,5552f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[5], &iLocal_4 + 2256);
	*(&iLocal_4 + 2264[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStartLast0", Vector(564.0f, 106,3511f, 1672.0f), Vector(1,831466f, -198,9328f, 0,399791f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2264[6], &iLocal_4 + 2256);
	*(&iLocal_4 + 2328) = CREATE_OBJECTSET_IN_LAYOUT("TrainPositionSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2336[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train00", Vector(-161,1691f, 83,83874f, 2041,517f), Vector(0.0f, -7,118357f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[0], &iLocal_4 + 2328);
	*(&iLocal_4 + 2336[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train01", Vector(225,6972f, 116,7543f, 1737,436f), Vector(0.0f, -35,00779f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[1], &iLocal_4 + 2328);
	*(&iLocal_4 + 2336[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train02", Vector(478,7627f, 99,96568f, 1524,154f), Vector(0.0f, -59,75541f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[2], &iLocal_4 + 2328);
	*(&iLocal_4 + 2336[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train03", Vector(577,3911f, 86,60691f, 1473,594f), Vector(0.0f, -55,00977f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[3], &iLocal_4 + 2328);
	*(&iLocal_4 + 2336[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train04", Vector(556,6696f, 90,2271f, 1132,15f), Vector(0.0f, 82,45055f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[4], &iLocal_4 + 2328);
	*(&iLocal_4 + 2336[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train05", Vector(174,3599f, 109,149f, 1143,423f), Vector(0.0f, 82,45055f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[5], &iLocal_4 + 2328);
	*(&iLocal_4 + 2336[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_train01B", Vector(262,7212f, 119,4093f, 1685,038f), Vector(0.0f, -35,00779f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2336[6], &iLocal_4 + 2328);
	*(&iLocal_4 + 2400) = CREATE_OBJECTSET_IN_LAYOUT("Explosion01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2408[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_01_01", Vector(343,4506f, 117,2931f, 1605,079f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[0], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_01_02", Vector(348,8551f, 116,7007f, 1598,648f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[1], &iLocal_4 + 2400);
	*(&iLocal_4 + 2408[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_01_03", Vector(357,0255f, 116,0384f, 1596,717f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2408[2], &iLocal_4 + 2400);
	*(&iLocal_4 + 2440) = CREATE_OBJECTSET_IN_LAYOUT("Explosion02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2448[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_02_01", Vector(507,2043f, 95,30836f, 1511,395f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2448[0], &iLocal_4 + 2440);
	*(&iLocal_4 + 2448[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_02_02", Vector(512,541f, 94,20309f, 1505,868f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2448[1], &iLocal_4 + 2440);
	*(&iLocal_4 + 2448[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_02_03", Vector(533,4975f, 90,95316f, 1495,538f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2448[2], &iLocal_4 + 2440);
	*(&iLocal_4 + 2448[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_02_04", Vector(524,3633f, 92,57935f, 1503,414f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2448[3], &iLocal_4 + 2440);
	*(&iLocal_4 + 2448[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_02_05", Vector(529,5487f, 91,5033f, 1496,864f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2448[4], &iLocal_4 + 2440);
	*(&iLocal_4 + 2448[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_explosion_02_06", Vector(536,226f, 90,81466f, 1496,371f), Vector(0.0f, -38,11245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2448[5], &iLocal_4 + 2440);
	*(&iLocal_4 + 2504) = CREATE_OBJECTSET_IN_LAYOUT("Outlaw01MoveSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2512[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_outlaw01_01", Vector(454,4794f, 102,2655f, 1530,786f), Vector(0.0f, -55,01235f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2512[0], &iLocal_4 + 2504);
	*(&iLocal_4 + 2512[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_outlaw01_02", Vector(447,4348f, 103,2849f, 1534,506f), Vector(0.0f, -50,97606f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2512[1], &iLocal_4 + 2504);
	*(&iLocal_4 + 2512[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_outlaw01_03", Vector(440,3846f, 104,9577f, 1538,263f), Vector(0.0f, -44,79415f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2512[2], &iLocal_4 + 2504);
	*(&iLocal_4 + 2512[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_outlaw01_04", Vector(433,28f, 105,9378f, 1541,629f), Vector(0.0f, -60,6484f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2512[3], &iLocal_4 + 2504);
	*(&iLocal_4 + 2512[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_outlaw01_05", Vector(425,8f, 107,156f, 1546,848f), Vector(0.0f, -54,53351f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2512[4], &iLocal_4 + 2504);
	*(&iLocal_4 + 2560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective00", Vector(-44f, 116,3913f, 1424f), Vector(0.0f, -42,46535f, 0.0f));
	*(&iLocal_4 + 2568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective01", Vector(-28,14231f, 116,3307f, 1384,151f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective01a", Vector(-28f, 116,8612f, 1408f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective02", Vector(63,0499f, 115,2815f, 1253,115f), Vector(0.0f, -105,7594f, 0.0f));
	*(&iLocal_4 + 2592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective02b", Vector(283,8917f, 115,3359f, 1480,856f), Vector(0.0f, -131,4429f, 0.0f));
	*(&iLocal_4 + 2600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective02c", Vector(443,9462f, 107,3727f, 1572,121f), Vector(0.0f, -115,4577f, 0.0f));
	*(&iLocal_4 + 2608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective03", Vector(564.0f, 105,477f, 1696.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective02a", Vector(265,0791f, 116,7787f, 1454,388f), Vector(0.0f, -127,9583f, 0.0f));
	*(&iLocal_4 + 2624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective04", Vector(564.0f, 105,477f, 1696.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective04a", Vector(379,3721f, 110,658f, 1520,696f), Vector(0.0f, -115,4577f, 0.0f));
	*(&iLocal_4 + 2640) = Vector(665,1009f, 79,02516f, 1404,823f);
	*(&iLocal_4 + 2640 + 12) = Vector(0.0f, 59,83783f, 0.0f);
	*(&iLocal_4 + 2664) = Vector(331,2321f, 117,0033f, 1605,253f);
	*(&iLocal_4 + 2664 + 12) = Vector(0.0f, -42,46535f, 0.0f);
	*(&iLocal_4 + 2688) = Vector(463,4287f, 102,1639f, 1530,429f);
	*(&iLocal_4 + 2688 + 12) = Vector(0.0f, -42,46535f, 0.0f);
	*(&iLocal_4 + 2712) = Vector(-79,274f, 116,8612f, 1417,628f);
	*(&iLocal_4 + 2712 + 12) = Vector(0.0f, -42,46535f, 0.0f);
	*(&iLocal_4 + 2736) = Vector(-92.0f, 117,2748f, 1432f);
	*(&iLocal_4 + 2736 + 12) = Vector(0.0f, -42,46535f, 0.0f);
	*(&iLocal_4 + 2760) = Vector(-77,10766f, 116,8399f, 1405,833f);
	*(&iLocal_4 + 2760 + 12) = Vector(0.0f, -42,46535f, 0.0f);
	*(&iLocal_4 + 2784) = Vector(507,1359f, 97,22198f, 1844,348f);
	*(&iLocal_4 + 2784 + 12) = Vector(0.0f, -42,46535f, 0.0f);
	*(&iLocal_4 + 2808) = Vector(-75,8551f, 117,2605f, 1418,279f);
	*(&iLocal_4 + 2808 + 12) = Vector(0.0f, -89,71921f, 0.0f);
	*(&iLocal_4 + 2832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_hitch", Vector(-75,8551f, 117,2605f, 1418,279f), Vector(0.0f, -89,71921f, 0.0f));
	*(&iLocal_4 + 2840) = Vector(-75,861f, 117,708f, 1417,575f);
	*(&iLocal_4 + 2840 + 12) = Vector(0.0f, 267.0f, 0.0f);
	*(&iLocal_4 + 2864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_hitch01", Vector(-75,861f, 117,708f, 1417,575f), Vector(0.0f, 267.0f, 0.0f));
	*(&iLocal_4 + 2872) = Vector(-75,837f, 117,651f, 1418,991f);
	*(&iLocal_4 + 2872 + 12) = Vector(0.0f, 268,941f, 0.0f);
	*(&iLocal_4 + 2896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_horse_hitch02", Vector(-75,837f, 117,651f, 1418,991f), Vector(0.0f, 268,941f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 2904) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding01_01");
	PushArrayP();
	*(&iLocal_4 + 2912) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding02_01");
	PushArrayP();
	*(&iLocal_4 + 2920) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_herding03_01");
}

var C­à8BáÈD»ÏC¹MBß1ëD½'cCÂ4BÜÙD¾Ï&CÊ"`BÙ/DÀACÓ*ÙBØMDÂËTCáÿ/BÕñPDÆÍCï	BÛ DÉÁ,CýÌìBääàDÌó;Dø>BßéyDÏ  D  BØ¥ÞDÑ  D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x2D23F / 184895
{
	(StackVal > StackVal - 11116)->f_54144 = StackVal;
	StackVal->f_3840 = StackVal;
	(StackVal - 11608)->f_54524 = StackVal;
	return StackVal;
	StackVal->f_5120 = StackVal;
	((StackVal * StackVal - 11166))->f_54912 = StackVal;
	*(&iLocal_4 + 2928) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
	PushArrayP();
	*(&iLocal_4 + 2936) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_left_train01");
	PushArrayP();
	*(&iLocal_4 + 2944) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_left_train02");
	PushArrayP();
	*(&iLocal_4 + 2952) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_right_train01");
	PushArrayP();
	*(&iLocal_4 + 2960) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_right_train02");
	PushArrayP();
	*(&iLocal_4 + 2968) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion00");
	PushArrayP();
	*(&iLocal_4 + 2976) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion01");
	PushArrayP();
	*(&iLocal_4 + 2984) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion_last01");
	PushArrayP();
	*(&iLocal_4 + 2992) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion_last02");
	return;
}

bool Function_628() //Position: 0x2D84A / 186442
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_643(0))
		{
			return 0;
		}
		if (!Function_620())
		{
			return 0;
		}
		if (!Function_409(&iLocal_890))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_981))
		{
			bLocal_981 = Function_635(13, 0, 1, -77,4997f, 116,99f, 1398,61f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_981, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1395))
		{
			bLocal_1395 = Function_635(11, 0, 1, -112.0f, 118,869f, 1376.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1395, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1397))
		{
			bLocal_1397 = Function_635(12, 0, 1, -100.0f, 118,869f, 1348.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1397, 1))
		{
			return 0;
		}
		if (!Function_634())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_983))
		{
			bLocal_983 = Function_629(1, 1, -77,341f, 116,861f, 1417,13f, -103,447f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_983, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_629(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x2D96E / 186734
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
		Function_633(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_634())
		{
			return "";
		}
	}
	if (!Function_631())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_219();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_255(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_255(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_255(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_255(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_630(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_630(StackVal, Var4, 0, 1, 1);
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
		Function_327(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_630(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2DCCB / 187595
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

bool Function_631() //Position: 0x2DD6B / 187755
{
	if (Function_632() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_632() //Position: 0x2DD81 / 187777
{
	return Global_21369.f_244;
}

void Function_633(var uParam0, bool bParam1, bool bParam2) //Position: 0x2DD8C / 187788
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

bool Function_634() //Position: 0x2DDBB / 187835
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

var Function_635(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x2DDDB / 187867
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
		Function_196(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_642(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_638(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_637(&bVar1, 0, 0, 0, 0);
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
		Function_636(&bVar1, 0);
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

void Function_636(var uParam0, bool bParam1) //Position: 0x2E31B / 189211
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_637(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x2E33D / 189245
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

var Function_638(int iParam0, int iParam1) //Position: 0x2E39E / 189342
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_322(iParam0))
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
						Function_639(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_639(var uParam0, int iParam1) //Position: 0x2E42C / 189484
{
	Function_641(&uParam0);
	Function_640(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_640(int iParam0) //Position: 0x2E458 / 189528
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_641(int iParam0) //Position: 0x2E47E / 189566
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

var Function_642(int iParam0, var uParam1) //Position: 0x2E554 / 189780
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

bool Function_643(bool bParam0) //Position: 0x2E5FA / 189946
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

void Function_644(var uParam0, int iParam1) //Position: 0x2E62A / 189994
{
	Function_202(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_645(StackVal, &iParam1);
	}
	return;
}

void Function_645(bool bParam0, int iParam1) //Position: 0x2E65C / 190044
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_202(bParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_200(bParam0, &uVar0, &iParam1);
	return;
}

void Function_646(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2E685 / 190085
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_647(iParam1), &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

var Function_647(int iParam0) //Position: 0x2E6A7 / 190119
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

void Function_648() //Position: 0x2EBFC / 191484
{
	Function_423(&iLocal_890, "home02ranch01", 10, 0);
	Function_414(&iLocal_890, 1008, 2, 0);
	Function_414(&iLocal_890, 1009, 2, 0);
	Function_414(&iLocal_890, 1010, 2, 0);
	Function_414(&iLocal_890, 1011, 2, 0);
	Function_414(&iLocal_890, 1175, 2, 0);
	Function_414(&iLocal_890, 1176, 2, 0);
	Function_414(&iLocal_890, 1169, 2, 0);
	Function_414(&iLocal_890, 1168, 2, 0);
	Function_414(&iLocal_890, 1160, 2, 0);
	Function_414(&iLocal_890, 1173, 2, 0);
	Function_414(&iLocal_890, 201, 2, 0);
	Function_423(&iLocal_890, "wave_goodbye", 5, 0);
	Function_423(&iLocal_890, "custom/wave_goodbye", 8, 0);
	Function_423(&iLocal_890, "home02_ranch01_baggage01", 6, 0);
	Function_423(&iLocal_890, "home02_ranch01_boxcar04_01", 6, 0);
	return;
}

void Function_649(int iParam0, bool bParam1) //Position: 0x2ED21 / 191777
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_655(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_335(&iParam0))
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
	if (!Function_335(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_233();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_259();
	Function_609();
	Function_248("");
	Function_654(0);
	Function_653();
	Function_226();
	Function_225();
	ENABLE_JOURNAL_REPLAY(0);
	Function_652();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_629(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_346(0, 0x40400000);
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
	Function_651(13);
	Function_651(14);
	Function_651(25);
	Function_651(24);
	Function_651(12);
	Function_651(27);
	Function_651(26);
	Function_651(15);
	Function_650();
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

void Function_650() //Position: 0x2F161 / 192865
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

void Function_651(int iParam0) //Position: 0x2F1E6 / 192998
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_652() //Position: 0x2F206 / 193030
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

void Function_653() //Position: 0x2F24C / 193100
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_654(int iParam0) //Position: 0x2F262 / 193122
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_229())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_655(int iParam0, int iParam1) //Position: 0x2F29B / 193179
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
			Function_656(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_656(struct<113> Param0) //Position: 0x2F322 / 193314
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

void Function_657() //Position: 0x2F380 / 193408
{
	return;
}

void Function_658(int iParam0, int iParam1) //Position: 0x2F386 / 193414
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
					Function_592(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_592(&iParam0, 0);
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
						Function_592(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_592(&iParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_659(struct<25> Param0) //Position: 0x2F46A / 193642
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
			Function_660(&Param0, 1);
			return 1;
		}
	}
	Function_660(&Param0, 0);
	return 0;
}

void Function_660(struct<25> Param0) //Position: 0x2F4F6 / 193782
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

bool Function_661(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2F521 / 193825
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
		Function_660(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_680(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_679(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_679(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_665(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_660(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_664(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_663(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_664(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_662(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_248(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_663(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_660(&Param2, 0);
	return 0;
}

void Function_662(char* cParam0) //Position: 0x2F937 / 194871
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

void Function_663(struct<25> Param0) //Position: 0x2FA2B / 195115
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

void Function_664(bool bParam0) //Position: 0x2FAA3 / 195235
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_665(struct<57> Param0) //Position: 0x2FAC7 / 195271
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
			return Function_676(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_669(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_676(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_666(&Param0, bVar2);
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
						bVar2 = Function_676(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_666(&Param0, bVar2);
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

var Function_666(int iParam0, bool bParam1) //Position: 0x2FC38 / 195640
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
				bParam1 = Function_668(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_667(16);
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
				bParam1 = Function_668(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_667(256);
			}
		}
	}
	return bParam1;
}

bool Function_667(int iParam0) //Position: 0x2FD74 / 195956
{
	return 2 | iParam0;
}

int Function_668(int iParam0) //Position: 0x2FD7E / 195966
{
	return 4 | iParam0;
}

int Function_669(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2FD88 / 195976
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
				iParam3 = Function_675(&iParam0, &iParam1, bParam4);
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
			return Function_667(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_670(&iParam0, &iParam1, 0, bParam4);
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
			return Function_667(16);
		}
	}
	return 0;
}

int Function_670(int iParam0, vector3 vParam1) //Position: 0x2FE43 / 196163
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_674(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_673(iVar0, 3, 1, bParam3))
			{
				if (!Function_679(&iParam0, 8, 1))
				{
					return Function_672(64, 1024, bParam2);
				}
			}
			return Function_671(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_673(iVar0, 2, 1, bParam3))
			{
				if (!Function_679(&iParam0, 32, 1))
				{
					return Function_672(64, 1024, bParam2);
				}
			}
			return Function_671(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_673(iVar0, 1, 1, bParam3))
			{
				if (!Function_679(&iParam0, 64, 1))
				{
					return Function_672(64, 1024, bParam2);
				}
			}
			return Function_671(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_673(iVar0, 3, 1, bParam3))
			{
				if (!Function_679(&iParam0, 128, 1))
				{
					return Function_672(64, 1024, bParam2);
				}
			}
			return Function_671(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_673(iVar0, 1, 1, bParam3))
			{
				if (!Function_679(&iParam0, 1024, 1))
				{
					return Function_672(64, 1024, bParam2);
				}
			}
			return Function_671(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_673(iVar0, 1, 1, bParam3))
			{
				if (!Function_679(&iParam0, 1024, 1))
				{
					return Function_672(64, 1024, bParam2);
				}
			}
			return Function_671(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_671(int iParam0, int iParam1, bool bParam2) //Position: 0x3000B / 196619
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_672(int iParam0, int iParam1, bool bParam2) //Position: 0x30020 / 196640
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_673(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x30035 / 196661
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_674(int iParam0) //Position: 0x30052 / 196690
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

int Function_675(var uParam0, vector3 vParam1) //Position: 0x300C5 / 196805
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_674(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_673(iVar0, 3, 1, bParam2))
			{
				if (!Function_679(&uParam0, 8, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000009:
			if (Function_673(iVar0, 3, 1, bParam2))
			{
				if (!Function_679(&uParam0, 8, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x0000006E:
			if (Function_673(iVar0, 2, 1, bParam2))
			{
				if (!Function_679(&uParam0, 16, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x0000005B:
			if (Function_673(iVar0, 2, 1, bParam2))
			{
				if (!Function_679(&uParam0, 32, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000031:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&uParam0, 64, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000007:
			if (Function_673(iVar0, 3, 1, bParam2))
			{
				if (!Function_679(&uParam0, 128, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000008:
			if (Function_673(iVar0, 2, 1, bParam2))
			{
				if (!Function_679(&uParam0, 256, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000014:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&uParam0, 512, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000018:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&uParam0, 512, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000057:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&uParam0, 1024, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000058:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&uParam0, 1024, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_676(struct<65> Param0) //Position: 0x302EE / 197358
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
						return Function_675(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_679(&Param0, 2, 1))
					{
						return Function_668(8);
					}
					return Function_667(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_679(&Param0, 4, 1))
					{
						return Function_668(16);
					}
					return Function_667(16);
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
							return Function_670(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_679(&Param0, 2, 1))
						{
							return Function_668(128);
						}
						return Function_667(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_679(&Param0, 4, 1))
						{
							return Function_668(256);
						}
						return Function_667(256);
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
						return Function_670(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_679(&Param0, 2, 1))
					{
						return Function_668(8);
					}
					return Function_667(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_679(&Param0, 4, 1))
					{
						return Function_668(16);
					}
					return Function_667(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_678(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_679(&Param0, 2, 1))
					{
						return Function_668(8);
					}
					return Function_667(8);
				}
				if (!Function_679(&Param0, 4, 1))
				{
					return Function_668(16);
				}
				return Function_667(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_670(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_677(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_667(128);
							}
							if (!Function_679(&Param0, 2, 1))
							{
								return Function_668(8);
							}
							return Function_667(8);
						}
						if (iParam4 == 2)
						{
							if (Function_677(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_667(256);
							}
							if (!Function_679(&Param0, 4, 1))
							{
								return Function_668(16);
							}
							return Function_667(16);
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

bool Function_677(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x305D4 / 198100
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

int Function_678(int iParam0, vector3 vParam1) //Position: 0x306A2 / 198306
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_674(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_673(iVar0, 2, 1, bParam2))
			{
				if (!Function_679(&iParam0, 16, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x0000005B:
			if (Function_673(iVar0, 2, 1, bParam2))
			{
				if (!Function_679(&iParam0, 32, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000057:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&iParam0, 1024, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		case 0x00000058:
			if (Function_673(iVar0, 1, 1, bParam2))
			{
				if (!Function_679(&iParam0, 1024, 1))
				{
					return Function_668(64);
				}
			}
			return Function_667(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_679(struct<69> Param0) //Position: 0x307C4 / 198596
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

int Function_680(int iParam0) //Position: 0x307EE / 198638
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

bool Function_681(int iParam0) //Position: 0x30824 / 198692
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_682(int iParam0) //Position: 0x30842 / 198722
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

var Function_683(int iParam0) //Position: 0x30875 / 198773
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 32)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

var Function_684(bool bParam0) //Position: 0x308E1 / 198881
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

void Function_685(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x3094D / 198989
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

