//Decompiled with MagicRDR v1.0
//Function Count : 635
//Statics Count : 1600
//Natives Count : 794
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	bool bLocal_6 = false;
	var uLocal_7 = 0;
	var uLocal_8 = 32;
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
	var uLocal_138 = 5;
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
	var uLocal_162 = 5;
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
	var uLocal_186 = 6;
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
	var uLocal_214 = 1;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 1;
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
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 2;
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
	var uLocal_250 = 6;
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
	var uLocal_278 = 3;
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
	var uLocal_294 = 5;
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
	var uLocal_318 = 1;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 1;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 9;
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
	var uLocal_372 = 5;
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
	var uLocal_386 = 1;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 4;
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
	var uLocal_404 = 9;
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
	var uLocal_426 = 23;
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
	var uLocal_476 = 6;
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
	var uLocal_492 = 6;
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
	var uLocal_510 = 3;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 4;
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
	var uLocal_532 = 5;
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
	var uLocal_546 = 5;
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
	var uLocal_560 = 6;
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
	var uLocal_576 = 5;
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
	var uLocal_590 = 5;
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
	var uLocal_604 = 5;
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
	var uLocal_618 = 5;
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
	var uLocal_632 = 3;
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
	var uLocal_658 = 3;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 4;
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
	var uLocal_692 = 2;
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
	var uLocal_708 = 5;
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
	var uLocal_722 = 5;
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
	var uLocal_736 = 6;
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
	var uLocal_752 = 6;
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
	var uLocal_768 = 8;
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
	var uLocal_788 = 6;
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
	var uLocal_804 = 3;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 5;
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
	var uLocal_828 = 4;
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
	bool bLocal_890 = false;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	struct<6> Local_893 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	bool bLocal_905 = false;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
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
	bool bLocal_919 = false;
	bool bLocal_920 = false;
	bool bLocal_921 = false;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	int iLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 9;
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
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	bool bLocal_1027 = false;
	var uLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	int iLocal_1042 = 13;
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
	int iLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	int iLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	int iLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	int iLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	int iLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	int iLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	int iLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	struct<2> Local_1130[5];
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
	int iLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	int iLocal_1156 = 0;
	var uLocal_1157 = 13;
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
	struct<15> Local_1211[3];
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
	bool bLocal_1311 = false;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	float fLocal_1314 = 0.0f;
	var uLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	bool bLocal_1323 = false;
	int iLocal_1324 = 0;
	bool bLocal_1325 = false;
	var uLocal_1326 = 0;
	bool bLocal_1327 = false;
	var uLocal_1328 = 0;
	int iLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	bool bLocal_1334 = false;
	var uLocal_1335 = 0;
	bool bLocal_1336 = false;
	var uLocal_1337 = 0;
	var uLocal_1338[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	struct<2> Local_1374[5];
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
	var uLocal_1395 = 0;
	bool bLocal_1396[5] = { false, false, false, false, false };
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	int iLocal_1408 = 0;
	var uLocal_1409[2] = { 0, 0 };
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	int iLocal_1415 = 0;
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	vector3 vLocal_1492[6] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	vector3 vLocal_1530[6] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	vector3 vLocal_1568[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
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
	bLocal_890 = 2696;
	iLocal_930 = 0;
	iLocal_1332 = 4294967295;
	iLocal_1415 = 0;
	iLocal_1417 = 4294967295;
	uLocal_1418 = Vector(-805,317f, 13,268f, 3709,162f);
	iLocal_1478 = 17;
	iLocal_1479 = 8;
	Local_893 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_905 = 99;
	iLocal_906 = 6;
	iLocal_907 = 1000;
	while (Function_287())
	{
		Function_247();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x74 / 116
{
	int iVar0;
	var uVar1;
	
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_246(&(Global_43791[Global_46894[2]]), 256);
	STREAMING_UNLOAD_BOUNDS();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_245(1);
	if (IS_GRINGO_VALID(&uLocal_1463))
	{
		Function_244(GET_OBJECT_FROM_GRINGO(&uLocal_1463));
		Function_241(StackVal, Function_244(GET_OBJECT_FROM_GRINGO(&uLocal_1463)), 1, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_ACTOR_VALID(&bLocal_6 + 1312[iVar02]))
		{
			SET_CORPSE_PERMANENT(&bLocal_6 + 1312[iVar02], 0);
		}
		iVar0++;
	}
	iLocal_1312 = 0;
	iLocal_1312 = 0;
	while (iLocal_1312 <= 14)
	{
		uVar1 = GET_ACTOR_FROM_PERS_CHAR(Function_240(&Global_12284, &Global_14676, iLocal_1312));
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_ALLOW_SHOOTING(&uVar1, true);
			MEMORY_PREFER_MELEE(&uVar1, 1);
			DEREFERENCE_ACTOR(&uVar1);
		}
		iLocal_1312++;
	}
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 1);
	Function_238();
	Function_236(1);
	Function_236(256);
	Function_235(1);
	SET_CURVE_WEIGHT(&uLocal_1467, 10);
	SET_CURVE_WEIGHT(&uLocal_1469, 10);
	SET_CURVE_WEIGHT(&uLocal_1471, 10);
	SET_CURVE_WEIGHT(&uLocal_1473, 10);
	iLocal_1312 = 0;
	while (iLocal_1312 <= 5)
	{
		if (Function_234(&(uLocal_1338[iLocal_1312])))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &(uLocal_1338[iLocal_1312]));
		}
		iLocal_1312++;
	}
	if (IS_ACTOR_VALID(&bLocal_1327))
	{
		DEREFERENCE_ACTOR(&bLocal_1327);
	}
	Function_233(&bLocal_6 + 616);
	Function_233(&bLocal_6 + 712);
	Function_233(&bLocal_6 + 824);
	Function_233(&bLocal_6 + 856);
	Function_232(&bLocal_6 + 896, 1);
	Function_233(&bLocal_6 + 1080);
	Function_233(&bLocal_6 + 1240);
	Function_229(8, 1, 0, 1, 1);
	if (Function_228(7))
	{
		Function_229(7, 1, 0, 1, 1);
	}
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_1025);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1325);
	if (bLocal_919 == 1)
	{
		Function_218(Global_46894[2], &Global_12284, &Global_14676, 7);
		if (IS_ACTOR_VALID(&bLocal_1334))
		{
			if (IS_ACTOR_ALIVE(&bLocal_1334))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1334)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1334));
				}
				Function_217(&bLocal_1334);
				TASK_WANDER(&bLocal_1334, -1.0f);
			}
			DEREFERENCE_ACTOR(&bLocal_1334);
		}
		Function_208(&bLocal_6 + 1280[02], GET_GRINGO_FROM_OBJECT(&uLocal_1465), "UseCase1", 4294967295, 1, 2);
	}
	else
	{
		if (IS_ACTOR_VALID(&bLocal_1334))
		{
			DEREFERENCE_ACTOR(&bLocal_1334);
		}
		Function_232(&bLocal_6 + 1280, 1);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_1025);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1027);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1334);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(976);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(977);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(978);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(979);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(980);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(981);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(982);
	Function_207(&uLocal_891);
	Function_207(&bLocal_6);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_203(&iLocal_1042);
	Function_201();
	if (IS_ITERATOR_VALID(&uLocal_1096))
	{
		DESTROY_ITERATOR(&uLocal_1096);
	}
	RELEASE_LAYOUT_REF(&uLocal_891);
	if (bLocal_919)
	{
		Function_65(Local_893, 1, 1, 1, 0);
		Function_26(bLocal_920, 1, 0, 1, 0, 1, 1, 1);
	}
	else if (bLocal_920)
	{
		Function_22(Local_893);
		Function_26(bLocal_920, 1, 0, 1, 1, 1, 1, 1);
	}
	else
	{
		Function_2(Local_893);
		Function_26(bLocal_920, 1, 0, 1, 1, 1, 1, 1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x381 / 897
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x3A2 / 930
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x3BF / 959
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(bool bParam0) //Position: 0x3E2 / 994
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x3F9 / 1017
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

void Function_7(int iParam0) //Position: 0x49B / 1179
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x4BE / 1214
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

void Function_9() //Position: 0x508 / 1288
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x521 / 1313
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

void Function_11(var uParam0, bool bParam1) //Position: 0x574 / 1396
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

struct<16> Function_12(int iParam0) //Position: 0x69E / 1694
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

bool Function_13() //Position: 0x6D8 / 1752
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x6F3 / 1779
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x700 / 1792
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x720 / 1824
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x737 / 1847
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x752 / 1874
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x999 / 2457
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x9C5 / 2501
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

bool Function_21(int iParam0) //Position: 0x9E9 / 2537
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x9FE / 2558
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0xA1C / 2588
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

struct<16> Function_24(int iParam0) //Position: 0xAC2 / 2754
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

struct<24> Function_25(char* cParam0) //Position: 0xB01 / 2817
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

void Function_26(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0xD57 / 3415
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_64());
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
	Function_63();
	CLEAR_PRINTED_OBJECTIVE();
	Function_62();
	Function_60(0);
	Function_59();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_58();
	Function_57();
	Function_63();
	ENABLE_JOURNAL_REPLAY(1);
	Function_56(1);
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
		Function_55(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && iParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_44(Global_42825);
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
	Function_43();
	Function_235(1178687);
	Function_236(33039);
	Function_42(0x218003f);
	Function_41(4194560);
	Function_40();
	Function_39();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_33(0, 1, 1);
	}
	else
	{
		Function_33(0, 1, 1);
	}
	Function_32();
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
	Function_28();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_27(&Global_21369 + 72 + 32, 16);
}

void Function_27(bool bParam0, bool bParam1) //Position: 0xF63 / 3939
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_28() //Position: 0xF79 / 3961
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
		if (Function_31() > 3)
		{
			bVar0 *= 2;
		}
		Function_29(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_29(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xFD0 / 4048
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_30(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_30(bool bParam0) //Position: 0x1020 / 4128
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_31() //Position: 0x1049 / 4169
{
	return Global_21369.f_248;
}

void Function_32() //Position: 0x1054 / 4180
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_246(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x107E / 4222
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
		if (Function_38(Global_43789))
		{
			Function_37(&(Global_43791[Global_43789]), 131072);
			Function_246(&(Global_43791[Global_43789]), 2097152);
			Function_35(Global_43789);
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
				if (Function_34(&(Global_43791[iVar0]), 4) || Function_34(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_246(&(Global_43791[iVar0]), 2097155);
					Function_37(&(Global_43791[iVar0]), 262144);
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

bool Function_34(var uParam0, int iParam1) //Position: 0x118A / 4490
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_35(int iParam0) //Position: 0x11A7 / 4519
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_36())
			{
				return;
			}
		}
		if (!Function_34(&(Global_43791[iParam0]), 2048))
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

bool Function_36() //Position: 0x1226 / 4646
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_34(&(Global_43791[iVar0]), 4) || Function_34(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_37(var uParam0, int iParam1) //Position: 0x128F / 4751
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_38(int iParam0) //Position: 0x12A0 / 4768
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_39() //Position: 0x12B6 / 4790
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

void Function_40() //Position: 0x12DC / 4828
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

void Function_41(int iParam0) //Position: 0x1302 / 4866
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_42(int iParam0) //Position: 0x131F / 4895
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_43() //Position: 0x1332 / 4914
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

void Function_44(int iParam0) //Position: 0x13AA / 5034
{
	int iVar0;
	int iVar1;
	
	if (!Function_54(iParam0))
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
		Function_51(78, 1, 1);
		if (!Function_50(Global_119935, 64))
		{
			Function_45(&Global_54076, 64, 2, 0);
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

void Function_45(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x14E0 / 5344
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_47(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_46(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_46(char* cParam0) //Position: 0x1555 / 5461
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

bool Function_47(int iParam0, var uParam1, int iParam2) //Position: 0x158F / 5519
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
		if (Function_49(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_48(uVar0))
		{
			case 0x00000002:
				if (!Function_50(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_48(char* cParam0) //Position: 0x160B / 5643
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

int Function_49(int iParam0) //Position: 0x16AC / 5804
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_27(&bVar1, 2147483648);
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

bool Function_50(var uParam0, int iParam1) //Position: 0x16E9 / 5865
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_51(bool bParam0, bool bParam1, int iParam2) //Position: 0x16FC / 5884
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_53(bParam0), Function_52()) == 0)
		{
			ADD_ITEM(Function_53(bParam0), Function_52(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_53(bParam0), Function_52(), &iParam2);
	return 1;
}

bool Function_52() //Position: 0x174A / 5962
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_53(bool bParam0) //Position: 0x175F / 5983
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

bool Function_54(int iParam0) //Position: 0x1853 / 6227
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_55(int iParam0) //Position: 0x1869 / 6249
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

void Function_56(bool bParam0) //Position: 0x18EC / 6380
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

void Function_57() //Position: 0x1963 / 6499
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

void Function_58() //Position: 0x19A7 / 6567
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

void Function_59() //Position: 0x19EB / 6635
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_60(int iParam0) //Position: 0x1A01 / 6657
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_61())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_61() //Position: 0x1A41 / 6721
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

void Function_62() //Position: 0x1A66 / 6758
{
	Global_15862 = 0.0f;
	return;
}

void Function_63() //Position: 0x1A70 / 6768
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

int Function_64() //Position: 0x1A9B / 6811
{
	var uVar0;
	
	uVar0 = Function_52();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_65(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1AB8 / 6840
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
		Function_196(&(Global_6667[iVar228]));
		Function_195(4194304);
		if (&bParam3)
		{
			Function_151(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_145(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_151(iVar2, &uVar0, 0);
		}
		bVar1 = Function_144();
		if (&bParam1)
		{
			Function_128(iVar2, bParam0, bVar1);
			Function_127();
		}
	}
	Function_71(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_70(iVar2, bVar1);
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
	Function_66();
}

void Function_66() //Position: 0x1BAC / 7084
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_67(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_67(int iParam0, bool bParam1) //Position: 0x1BDE / 7134
{
	int iVar0;
	
	iVar0 = Function_68(iParam0);
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

int Function_68(int iParam0) //Position: 0x1C1C / 7196
{
	if (!Function_69(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_69(int iParam0) //Position: 0x1C36 / 7222
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_70(int iParam0, bool bParam1) //Position: 0x1C4C / 7244
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
							Function_45(&Global_54076, 0x1000000, 3, 0);
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
							Function_45(&Global_54076, 0x1000000, 3, 0);
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
							Function_45(&Global_54076, 0x1000000, 3, 0);
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
							Function_45(&Global_54076, 0x1000000, 3, 0);
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
							Function_45(&Global_54076, 0x1000000, 3, 0);
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
							Function_45(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_70(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_70(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_70(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_70(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_70(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_70(57, 0);
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

void Function_71(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1F49 / 8009
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
		if (Function_126())
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
		if (Function_126())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_122();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_126())
	{
		Function_121();
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
			Function_115(bParam0);
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
			Function_74(1);
			Function_73(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_72(bParam0, &Var14);
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

void Function_72(int iParam0, struct<41> Param1) //Position: 0x21A7 / 8615
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_73(bool bParam0, int iParam1) //Position: 0x21E5 / 8677
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

void Function_74(bool bParam0) //Position: 0x2224 / 8740
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_104();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_75();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_27(&Global_99144, 1);
		Function_27(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_75() //Position: 0x2279 / 8825
{
	Function_102();
	Function_101();
	Function_101();
	Function_100();
	Function_100();
	Function_99();
	Function_99();
	Function_82(0);
	Function_82(0);
	Function_80();
	Function_79();
	Function_78();
	Function_77();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_76();
	return;
}

void Function_76() //Position: 0x22C4 / 8900
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

void Function_77() //Position: 0x23CA / 9162
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

void Function_78() //Position: 0x23FD / 9213
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

void Function_79() //Position: 0x2590 / 9616
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

void Function_80() //Position: 0x2749 / 10057
{
	Function_81(&Global_42918, 1, 0);
	return;
}

void Function_81(struct<2317> Param0) //Position: 0x2757 / 10071
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
	
	uVar0 = Function_52();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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

struct<8> Function_82(int iParam0) //Position: 0x2974 / 10612
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
					iVar2 = ((Function_98((50 + iVar4)) + Function_98((183 + iVar4))) + Function_98((90 + iVar4)));
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
	Function_83(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_83(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A1B / 10779
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
		Function_97(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_96(iParam0);
	if (&bParam2)
	{
		Function_84(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_84(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2CB7 / 11447
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_95(390))), 32);
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
					bVar19 = (Function_94(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_94(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_92(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_89(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_86(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_85(), &Var9);
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

var Function_85() //Position: 0x32F5 / 13045
{
	int iVar0;
	
	return &iVar0;
}

var Function_86(int iParam0) //Position: 0x32FE / 13054
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x330F / 13071
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_88(char* cParam0) //Position: 0x3406 / 13318
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_89(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3421 / 13345
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_91(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_90(Function_91(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_90(int iParam0, int iParam1) //Position: 0x3488 / 13448
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_91(int iParam0, bool bParam1) //Position: 0x349A / 13466
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_92(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x34AC / 13484
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
	if (((Function_93(iParam0) != 19 || Function_93(iParam0) != 17) || Function_93(iParam0) != 10) || Function_93(iParam0) != 9)
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

int Function_93(int iParam0) //Position: 0x35E0 / 13792
{
	return Global_55480[iParam016].f_96;
}

float Function_94(int iParam0) //Position: 0x35EF / 13807
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_95(int iParam0) //Position: 0x3628 / 13864
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_96(int iParam0) //Position: 0x3665 / 13925
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

int Function_97(int iParam0, bool bParam1, bool bParam2) //Position: 0x37FF / 14335
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

int Function_98(bool bParam0) //Position: 0x3A43 / 14915
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_99() //Position: 0x3A84 / 14980
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
		iVar2 = ((Function_98((50 + iVar3) + 15) + Function_98((183 + iVar3) + 15)) + Function_98((90 + iVar3) + 15));
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
	Function_83(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_100() //Position: 0x3B0D / 15117
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
			iVar2 = ((Function_98((50 + iVar3) + 8) + Function_98((183 + iVar3) + 8)) + Function_98((90 + iVar3) + 8));
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
	Function_83(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_101() //Position: 0x3BA4 / 15268
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
		iVar2 = ((Function_98((50 + iVar3)) + Function_98((183 + iVar3))) + Function_98((90 + iVar3)));
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
	Function_83(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_102() //Position: 0x3C23 / 15395
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_103(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_83(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_103(int iParam0, bool bParam1, int iParam2) //Position: 0x3C60 / 15456
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
	Function_97(iParam0, bParam1, 1);
	Function_96(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_84(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_104() //Position: 0x3E6C / 15980
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_112(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_112(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_106(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_106(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_105(StackVal, Var0))
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
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_105(char* cParam0) //Position: 0x3F23 / 16163
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_106(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3F3B / 16187
{
	int iVar0;
	
	iVar0 = Function_110(&uParam2, &fParam3);
	if (Function_109(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_108(&Global_99144, 1);
			Function_27(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_108(&Global_99144, 2);
			Function_27(&Global_99144, 1);
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
		Function_108(&Global_99144, 2);
		Function_27(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_107();
	return StackVal, Function_107();
}

struct<8> Function_107() //Position: 0x4037 / 16439
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_108(bool bParam0, bool bParam1) //Position: 0x4041 / 16449
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_109(int iParam0) //Position: 0x4052 / 16466
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_110(bool bParam0, bool bParam1) //Position: 0x4068 / 16488
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
				fVar2 = Function_111(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_111(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_109(iVar0) && !&bParam1)
	{
		iVar0 = Function_110(&bParam0, 1);
	}
	return iVar0;
}

float Function_111(struct<2> Param0, struct<2> Param2) //Position: 0x4134 / 16692
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_112(float fParam0, int iParam1) //Position: 0x4151 / 16721
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_114(&Global_54076, &Var3);
	if (!Function_113(Global_46760[0]))
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
	if (!Function_113(Global_46760[2]))
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
	if (!Function_113(Global_46760[1]))
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
	if (!Function_113(Global_46796[1]))
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
	if (!Function_113(Global_46796[3]))
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
	if (!Function_113(Global_46796[2]))
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
	if (!Function_113(Global_46796[4]))
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
	if (!Function_113(Global_46816[0]))
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
	if (!Function_113(Global_46816[1]))
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
	if (!Function_113(Global_46816[2]))
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
	if (!Function_113(Global_46838[0]))
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
	if (!Function_113(Global_46850[0]))
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
	if (!Function_113(Global_46850[1]))
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
	if (!Function_113(Global_46850[2]))
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
	if (!Function_113(Global_46866[0]))
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
	if (!Function_113(Global_46866[1]))
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
	if (!Function_113(Global_46866[2]))
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
	if (!Function_113(Global_46894[2]))
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
	if (!Function_113(Global_46894[3]))
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
	if (!Function_113(Global_46894[0]))
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
	if (!Function_113(Global_46914[0]))
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
	if (!Function_113(Global_46926[2]))
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
	if (!Function_113(Global_46926[1]))
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
	if (!Function_113(Global_46926[0]))
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
	if (!Function_113(Global_46838[1]))
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
	if (!Function_113(Global_46894[1]))
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
	Function_108(&Global_99144, 2);
	Function_27(&Global_99144, 1);
	iParam1 = 0;
	if (Function_105(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_113(int iParam0) //Position: 0x497D / 18813
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_114(var uParam0, int iParam1) //Position: 0x49B8 / 18872
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_115(bool bParam0) //Position: 0x49C7 / 18887
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
				Function_119(12, 1, 0, 0);
				Function_118(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_119(13, 1, 0, 0);
				Function_118(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_119(14, 1, 0, 0);
				Function_118(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_119(15, 1, 0, 0);
				Function_118(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_119(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_117(bParam0) == 1)
					{
						iVar0 = Function_116(bParam0);
						if (Function_38(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_118(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_118(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_118(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_118(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_118(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_118(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_118(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_118(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_118(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_118(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_118(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_118(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_118(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_118(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_118(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_118(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_118(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_118(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_118(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_118(4, 19);
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
								Function_119(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_119(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_119(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_116(bParam0) == 0)
			{
				if (Function_117(bParam0) == 1)
				{
					Function_119(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_38(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_118(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_118(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_118(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_118(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_118(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_118(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_118(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_118(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_117(bParam0) == 1)
			{
				Function_119(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_119(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_118(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_118(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_118(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_119(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_118(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_118(6, 9);
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

int Function_116(bool bParam0) //Position: 0x4EA3 / 20131
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_117(bool bParam0) //Position: 0x4EC2 / 20162
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_118(int iParam0, int iParam1) //Position: 0x4EDC / 20188
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

int Function_119(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4F46 / 20294
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
	Function_97(iParam0, TO_FLOAT(bParam1), 1);
	Function_96(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_84(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_120(iParam0);
	return 1;
}

void Function_120(int iParam0) //Position: 0x516E / 20846
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

void Function_121() //Position: 0x520C / 21004
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
	PLAYSTAT_INT("HC_MONEY", Function_98(0));
	PLAYSTAT_INT("HC_FAME", Function_98(3));
	PLAYSTAT_INT("HC_HONOR", Function_98(1));
	return;
}

void Function_122() //Position: 0x536E / 21358
{
	int iVar0;
	int iVar1;
	
	if (!Function_69(Global_10966))
	{
		return;
	}
	iVar0 = Function_98(24);
	iVar1 = Function_68(Global_10966);
	if (!Function_69(iVar0) && Function_125(iVar1) < 0)
	{
		Function_83(24, Global_10966, 0);
		Function_123(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_125(Function_68(iVar0)))
	{
		Function_83(24, Global_10966, 0);
		Function_123(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_123(int iParam0, char* cParam1) //Position: 0x53EE / 21486
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
		Function_124(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_124(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x5745 / 22341
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

int Function_125(int iParam0) //Position: 0x57CD / 22477
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_126() //Position: 0x57E7 / 22503
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_127() //Position: 0x5812 / 22546
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

void Function_128(int iParam0, int iParam1, bool bParam2) //Position: 0x5840 / 22592
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
	
	if (!Function_69(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_143(iParam0);
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
				bVar0 = (Function_98(42) - Global_53524.f_168);
				bVar1 = (Function_98(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_95(49)) - Global_53524.f_176);
				bVar3 = (Function_98(49) - Global_53524.f_180);
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
				bVar4 = (Function_98(355) - Global_53524.f_168);
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
		iVar15 = Function_142(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_129(50, 1, 0);
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

void Function_129(int iParam0, bool bParam1, bool bParam2) //Position: 0x5ADC / 23260
{
	int iVar0;
	bool bVar1;
	
	if (Function_141(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_126())
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
	iVar0 = Function_98(3);
	Function_138();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_136(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_50(Global_119936, 4))
			{
				Function_45(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_119(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_94(3));
	iVar0 = Function_98(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_131(4, Function_135(Global_21369.f_248), 1);
				Function_130(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_131(4, Function_135(Global_21369.f_248), 1);
				Function_130(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_131(4, Function_135(Global_21369.f_248), 1);
				Function_130(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_131(4, Function_135(Global_21369.f_248), 1);
				Function_130(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_131(4, Function_135(Global_21369.f_248), 1);
				Function_130(Global_21369.f_244, Global_21369.f_248);
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

void Function_130(int iParam0, int iParam1) //Position: 0x5CB0 / 23728
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

int Function_131(int iParam0, char* cParam1) //Position: 0x5F1A / 24346
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
	Function_123(iParam0, &cParam1, 0, 1);
	iVar1 = Function_132();
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

int Function_132() //Position: 0x60AA / 24746
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
	Function_133();
	return 0;
}

void Function_133() //Position: 0x614B / 24907
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
		Function_134(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_134(int iParam0) //Position: 0x6209 / 25097
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

var Function_135(int iParam0) //Position: 0x626F / 25199
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

int Function_136(int iParam0, bool bParam1) //Position: 0x62FE / 25342
{
	bool bVar0;
	int iVar1;
	
	Function_119(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_137(iParam0, 4294967295);
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
	iVar1 = Function_132();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_137(int iParam0, int iParam1) //Position: 0x64AA / 25770
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

void Function_138() //Position: 0x64EF / 25839
{
	Function_140(3, 0.0f);
	Function_139(3, 10000.0f);
	return;
}

int Function_139(int iParam0, int iParam1) //Position: 0x6505 / 25861
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_140(int iParam0, int iParam1) //Position: 0x6545 / 25925
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_141(int iParam0) //Position: 0x6585 / 25989
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_142(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x6594 / 26004
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

int Function_143(int iParam0) //Position: 0x675C / 26460
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

var Function_144() //Position: 0x67F1 / 26609
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_145(int iParam0) //Position: 0x6816 / 26646
{
	if (!Function_69(iParam0))
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
			Function_129(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_129(25, 1, 0);
			Function_150(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_150(50, 1, 1);
			Function_129(250, 1, 0);
			Function_146(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_129(75, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_129(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_150(50, 1, 1);
			Function_129(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_150(5, 1, 1);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_129(75, 1, 0);
			Function_146(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_150(5, 1, 1);
			Function_129(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_129(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_146(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_150(25, 1, 1);
			Function_129(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_150(10, 1, 1);
			Function_129(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_129(50, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_129(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_129(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_146(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_150(20, 1, 1);
			Function_129(75, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_150(25, 1, 1);
			Function_129(150, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_150(10, 1, 1);
			Function_129(150, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_129(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_146(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_146(100, 1, 0);
			Function_150(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_150(3, 1, 1);
			Function_129(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_146(125, 1, 0);
			Function_129(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_150(50, 1, 1);
			Function_129(100, 1, 0);
			Function_146(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_150(50, 1, 1);
			Function_129(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_150(75, 1, 1);
			Function_129(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_129(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_129(75, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_129(250, 1, 0);
			Function_146(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_129(75, 1, 0);
			Function_146(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_129(200, 1, 0);
			Function_146(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_129(75, 1, 0);
			Function_146(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_129(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_150(50, 1, 1);
			Function_129(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_150(100, 1, 1);
			Function_129(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_129(200, 1, 0);
			Function_146(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_129(300, 1, 0);
			Function_146(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_129(300, 1, 0);
			Function_146(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_129(300, 1, 0);
			Function_146(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_129(500, 1, 0);
			Function_146(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_129(150, 1, 0);
			Function_146(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_146(25, 1, 0);
			Function_150(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_129(150, 1, 0);
			Function_146(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_146(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_146(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_146(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_146(150, 1, 0);
			Function_150(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_146(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_146(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_146(150, 1, 0);
			Function_150(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_146(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_146(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_146(int iParam0, bool bParam1, bool bParam2) //Position: 0x6CE5 / 27877
{
	int iVar0;
	bool bVar1;
	
	if (Function_141(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_126())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_98(1);
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
			Function_136(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_50(Global_119936, 1))
				{
					Function_45(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_149(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_50(Global_119936, 2))
				{
					Function_45(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_119(1, bVar1, 0, 0);
	}
	else
	{
		Function_148(1, (4294967295 * bVar1), 0);
	}
	if (Function_98(1) <= 4294962296)
	{
		Function_83(1, 4294962296, 0);
	}
	else if (Function_98(1) >= 5000)
	{
		Function_83(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_94(1));
	iVar0 = Function_98(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_131(2, Function_147(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_131(2, Function_147(Global_21369.f_244), 0);
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
				Function_131(2, Function_147(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_131(2, Function_147(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_131(2, Function_147(Global_21369.f_244), 1);
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
				Function_131(2, Function_147(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_131(2, Function_147(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_131(2, Function_147(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_131(2, Function_147(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_131(2, Function_147(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_131(2, Function_147(Global_21369.f_244), 1);
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
				Function_131(2, Function_147(Global_21369.f_244), 0);
			}
			break;
	}
	Function_130(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_147(int iParam0) //Position: 0x700C / 28684
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

int Function_148(int iParam0, bool bParam1, int iParam2) //Position: 0x70AF / 28847
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
	Function_96(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_84(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_149(int iParam0, bool bParam1) //Position: 0x72AC / 29356
{
	bool bVar0;
	int iVar1;
	
	Function_148(iParam0, bParam1, 0);
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
	iVar1 = Function_137(iParam0, 4294967295);
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
	iVar1 = Function_132();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_150(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7457 / 29783
{
	bool bVar0;
	
	bVar0 = Function_98(0);
	if ((Function_98(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_119(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_98(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_119(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_98(597) + Function_98(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_151(int iParam0, var uParam1, bool bParam2) //Position: 0x7529 / 29993
{
	struct<4> Var0;
	
	if (!Function_69(iParam0))
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
			Function_193(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_191(Global_46760[0]);
			Function_191(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_189(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_191(Global_46816[0]);
			Function_181(0);
			Function_179(2, 1);
			Function_179(0, 1);
			Function_179(1, 1);
			break;
		
		case 0x00000003:
			Function_191(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_191(Global_46816[0]);
			Function_191(Global_46760[0]);
			Function_177(0, 1);
			Function_177(15, 1);
			Function_177(9, 1);
			Function_177(12, 1);
			Function_177(16, 1);
			Function_179(3, 1);
			break;
		
		case 0x00000005:
			Function_191(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_189(21, &bParam2, 4);
			Function_191(Global_46816[0]);
			Function_179(39, 1);
			break;
		
		case 0x00000007:
			Function_191(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_191(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_176())
				{
					if (!Function_175(4))
					{
						Function_165(4, 0, 0, 1, 0);
					}
				}
			}
			Function_191(Global_46760[0]);
			Function_191(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_191(Global_46760[0]);
			Function_191(Global_46816[2]);
			Function_37(&(Global_43791[Global_46816[2]]), 32768);
			Function_246(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_189(9, &bParam2, 4);
			Function_191(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_191(Global_46760[0]);
			Function_191(Global_46796[0]);
			Function_37(&(Global_43791[Global_46796[0]]), 32768);
			Function_246(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_191(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_191(Global_46760[0]);
			Function_191(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_191(Global_46760[1]);
			Function_191(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_191(Global_46838[0]);
			Function_191(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_191(Global_46796[5]);
			Function_191(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_189(21, &bParam2, 4);
			Function_191(Global_46760[4]);
			Function_191(Global_46796[4]);
			Function_164(&Global_119935, 0x2000000);
			Function_164(&Global_119935, 0x4000000);
			Function_164(&Global_119935, 4096);
			Function_164(&Global_119935, 8);
			Function_164(&Global_119935, 8388608);
			Function_164(&Global_119935, 524288);
			Function_164(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_191(Global_46760[4]);
			Function_191(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_246(&(Global_43791[Global_46760[4]]), 256);
			Function_191(Global_46760[4]);
			Function_191(Global_46796[0]);
			Function_37(&(Global_43791[Global_46796[0]]), 32768);
			Function_246(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_191(Global_46760[0]);
			Function_191(Global_46760[5]);
			Function_189(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_191(Global_46796[3]);
			Function_37(&(Global_43791[Global_46796[3]]), 32768);
			Function_246(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_189(9, &bParam2, 4);
			Function_191(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_37(&(Global_43791[Global_46838[1]]), 32768);
			Function_191(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_189(12, &bParam2, 4);
			Function_246(&(Global_43791[Global_46838[1]]), 256);
			Function_191(Global_46816[3]);
			Function_191(Global_46866[0]);
			Function_191(Global_46850[0]);
			Function_181(4);
			Function_177(13, 1);
			Function_177(1, 1);
			Function_177(18, 1);
			Function_179(34, 1);
			Function_179(44, 1);
			Function_179(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_189(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_191(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_191(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_191(Global_46866[0]);
			Function_191(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_191(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_191(Global_46850[0]);
			Function_191(Global_46866[0]);
			Function_191(Global_46866[1]);
			Function_191(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_189(23, &bParam2, 3);
			Function_177(23, 1);
			Function_191(Global_46850[0]);
			Function_191(Global_46850[2]);
			Function_37(&(Global_43791[Global_46850[2]]), 32768);
			Function_246(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_189(19, &bParam2, 4);
			Function_191(Global_46850[0]);
			Function_191(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_189(24, &bParam2, 3);
			Function_177(24, 1);
			Function_191(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_191(Global_46850[0]);
			Function_191(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_191(Global_46866[12]);
			Function_191(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_191(Global_46866[12]);
			Function_191(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_189(25, &bParam2, 10);
			Function_191(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_191(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_191(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_189(13, &bParam2, 4);
			Function_191(Global_46866[2]);
			Function_191(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_175(8))
				{
					Function_165(8, 0, 0, 1, 0);
				}
			}
			Function_191(Global_46850[0]);
			Function_181(9);
			Function_177(7, 1);
			Function_177(11, 1);
			Function_177(3, 1);
			Function_177(20, 1);
			Function_179(57, 1);
			break;
		
		case 0x0000002A:
			Function_189(2, &bParam2, 4);
			Function_191(Global_46914[0]);
			Function_191(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_191(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_191(Global_46914[0]);
			Function_191(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_191(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_191(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_191(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_189(17, &bParam2, 4);
			Function_191(Global_46926[0]);
			Function_191(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_162(15))
				{
					Function_158(15, 0, 1);
				}
			}
			Function_118(2, 26);
			Function_246(&(Global_43791[Global_46914[1]]), 256);
			Function_181(11);
			Function_191(Global_46914[1]);
			Function_191(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_191(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_191(Global_46914[1]);
			Function_191(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_191(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_191(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_191(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_191(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_191(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_191(Global_46914[1]);
			Function_152(11);
			Function_181(12);
			Global_26200[1114].f_40 = 0;
			Function_179(56, 1);
			if (!&bParam2)
			{
				if (!Function_175(9))
				{
					Function_165(9, 0, 0, 0, 0);
				}
				if (!Function_175(10))
				{
					Function_165(10, 0, 0, 1, 0);
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

void Function_152(int iParam0) //Position: 0x7E44 / 32324
{
	var uVar0;
	
	if (!Function_109(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_157(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_157(&Global_26200[iParam014] + 88, 0);
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
			Function_153(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_153(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7FC1 / 32705
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
		Function_155(Function_156(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_155(Function_156(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_155(StackVal);
				Var1 = Function_155(StackVal);
				if (Function_154(StackVal, StackVal, Var1, Var3))
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

bool Function_154(struct<2> Param0, struct<2> Param2) //Position: 0x80CE / 32974
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_155(int iParam0) //Position: 0x80FA / 33018
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

var Function_156(vector3 vParam0) //Position: 0x8151 / 33105
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

void Function_157(var uParam0, int iParam1) //Position: 0x819F / 33183
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

void Function_158(bool bParam0, bool bParam1, bool bParam2) //Position: 0x81FA / 33274
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_54(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_162(bParam0))
	{
		if (!Function_175(bParam0))
		{
			Function_165(bParam0, 1, 0, 0, 1);
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
		Function_119(457, 1, 0, 0);
		Function_161(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_160(0, 0, 1, 1))
			{
				Function_74(1);
				Function_73(1, 0);
			}
			else
			{
				Function_159();
			}
		}
	}
	return;
}

void Function_159() //Position: 0x839B / 33691
{
	return;
}

bool Function_160(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x83A1 / 33697
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

void Function_161(bool bParam0, int iParam1) //Position: 0x8450 / 33872
{
	if (!Function_54(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_162(int iParam0) //Position: 0x84A5 / 33957
{
	if (!Function_54(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_163(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x84F6 / 34038
{
	int iVar0;
	
	if (!Function_54(iParam0))
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

void Function_164(var uParam0, int iParam1) //Position: 0x8523 / 34083
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_165(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8534 / 34100
{
	struct<8> Var0;
	
	if (!Function_54(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_174(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_175(bParam0))
	{
		Function_119(456, 1, 0, 0);
		Function_161(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_160(0, 0, 1, 1))
			{
				Function_74(1);
				Function_73(1, 5);
			}
			else
			{
				Function_159();
			}
		}
		Function_168(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_167() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_167() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_166(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_50(Global_119934, 2))
			{
				Function_45(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8690 / 34448
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
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_167() //Position: 0x871B / 34587
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_168(bool bParam0) //Position: 0x8748 / 34632
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
			if (Function_172(bParam0, Function_173(bVar24)))
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
			if (Function_172(bParam0, Function_173(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_171(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_170(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_169(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_169(int iParam0) //Position: 0x88F8 / 35064
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_54(iParam0))
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

void Function_170(bool bParam0, bool bParam1) //Position: 0x894F / 35151
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

var Function_171(int iParam0) //Position: 0x8974 / 35188
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_54(iParam0))
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

bool Function_172(bool bParam0, bool bParam1) //Position: 0x89CA / 35274
{
	int iVar0;
	
	if (!Function_54(bParam0))
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

bool Function_173(bool bParam0) //Position: 0x8A29 / 35369
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_174(int iParam0) //Position: 0x8A35 / 35381
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_175(int iParam0) //Position: 0x8A51 / 35409
{
	if (!Function_54(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_163(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_176() //Position: 0x8AA3 / 35491
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_177(int iParam0, int iParam1) //Position: 0x8AD3 / 35539
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_178(iParam0, iParam1);
	Function_45(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_178(int iParam0, int iParam1) //Position: 0x8B48 / 35656
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_179(int iParam0, int iParam1) //Position: 0x8BA5 / 35749
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_180(iParam0, iParam1);
	Function_45(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_180(int iParam0, int iParam1) //Position: 0x8C18 / 35864
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_181(int iParam0) //Position: 0x8C73 / 35955
{
	var uVar0;
	var uVar1;
	
	if (!Function_109(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_188(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_188(&Global_26200[iParam014] + 88, 0);
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
			Function_119(468, 1, 0, 0);
			Function_118(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_166("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_153(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_165(14, 1, 0, 0, 0);
				Function_182(14, 1, 0, 0, 0);
			}
			if (!Function_160(0, 0, 1, 1))
			{
				Function_74(1);
				Function_73(1, 6);
			}
			else
			{
				Function_159();
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
			Function_166("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_119(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_118(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8F33 / 36659
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_54(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_174(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_163(bParam0, 2))
	{
		Function_119(456, 1, 0, 0);
		Function_161(bParam0, 2);
		if (!&bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_166(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_172(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_161(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_160(0, 0, 1, 1))
			{
				Function_74(1);
				Function_73(1, 0);
			}
			else
			{
				Function_159();
			}
		}
		Function_168(bParam0);
		if (StackVal && !Function_14(((((!Function_167() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_167() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_50(Global_119934, 2))
			{
				Function_45(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_184();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_183(3, bParam1);
				break;
			
			case 0x00000005:
				Function_183(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_183(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_183(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_183(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_183(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_118(2, 24);
				break;
			
			case 0x00000003:
				Function_118(2, 25);
				break;
			
			case 0x0000000F:
				Function_118(2, 26);
				break;
			
			case 0x0000000D:
				Function_118(2, 27);
				break;
			
			case 0x0000000E:
				Function_118(2, 28);
				break;
			}
	}
}

void Function_183(int iParam0, bool bParam1) //Position: 0x91D2 / 37330
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

void Function_184() //Position: 0x9241 / 37441
{
	if (Function_54(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_187(Global_42827);
			(&Global_42827 + 8) = Function_185(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_187(Global_42827);
			*(&Global_42827 + 8) = Function_185(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_185(int iParam0, int iParam1) //Position: 0x92C1 / 37569
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
					if (Function_67(6, 0) || Function_67(12, 0))
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
					if (Function_186(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_67(5, 0))
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
					if (Function_186(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_186(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_186(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_186(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_67(26, 0))
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
					if (Function_186(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_186(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_186(27) && iVar16)
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
					if (Function_186(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_186(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_186(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_186(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_67(17, 0) && iVar13)
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
					if (Function_186(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_67(6, 0) && Function_186(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_186(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_67(9, 0) && Function_186(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_186(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_67(8, 0) && iVar17)
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
	if (Function_105(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_105(StackVal, vVar2))
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
	if (!Function_105(StackVal, vVar2))
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

int Function_186(int iParam0) //Position: 0x9F24 / 40740
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_187(int iParam0) //Position: 0x9F39 / 40761
{
	int iVar0;
	int iVar1;
	
	if (!Function_54(iParam0))
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

void Function_188(var uParam0, int iParam1) //Position: 0x9F88 / 40840
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

void Function_189(bool bParam0, bool bParam1, int iParam2) //Position: 0x9FE0 / 40928
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_190(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_193(bParam0, 0, 0);
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

bool Function_190(int iParam0, int iParam1) //Position: 0xA053 / 41043
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_191(int iParam0) //Position: 0xA067 / 41063
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_34(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_37(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_119(473, 1, 0, 0);
		iVar0 = Function_192(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_119(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_119(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_119(476, 1, 0, 0);
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
		Function_118(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_118(7, 30);
	}
	if (Function_94(473) <= Function_95(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_192(int iParam0) //Position: 0xA158 / 41304
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_38(iParam0))
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

int Function_193(bool bParam0, bool bParam1, int iParam2) //Position: 0xA1B0 / 41392
{
	if (!Function_194(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_52(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_52(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_52(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_194(int iParam0) //Position: 0xA20A / 41482
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_195(bool bParam0) //Position: 0xA21C / 41500
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

void Function_196(struct<185> Param0) //Position: 0xA250 / 41552
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
			Function_197(4, 0, 0);
		}
	}
	return;
}

void Function_197(bool bParam0, var uParam1, int iParam2) //Position: 0xA2BB / 41659
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
		Function_198(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_198(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA3A5 / 41893
{
	int iVar0;
	
	Function_200(bParam0);
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
	Function_199();
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

void Function_199() //Position: 0xA524 / 42276
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_200(int iParam0) //Position: 0xA530 / 42288
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

void Function_201() //Position: 0xA576 / 42358
{
	Function_202();
	return;
}

void Function_202() //Position: 0xA57F / 42367
{
	Function_203(&bLocal_6 + 8);
	RELEASE_LAYOUT_REF(&bLocal_6);
	return;
}

void Function_203(int iParam0) //Position: 0xA592 / 42386
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_204(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_204(struct<2>[] Param0, int iParam1) //Position: 0xA5BA / 42426
{
	if (Function_206(&(Param0[iParam12]), 4))
	{
		if (Function_206(&(Param0[iParam12]), 1))
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
			Function_205(&(Param0[iParam12]), 1);
			Function_205(&(Param0[iParam12]), 2);
			Function_205(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_205(struct<13> Param0) //Position: 0xA705 / 42757
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_206(struct<13> Param0) //Position: 0xA722 / 42786
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_207(bool bParam0) //Position: 0xA740 / 42816
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&bParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
	ITERATE_IN_LAYOUT(&uVar0, &bParam0);
	bVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&bVar1))
	{
		while (IS_OBJECT_VALID(&bVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&bVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_208(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0xA7A8 / 42920
{
	if (!IS_GRINGO_VALID(&uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&uParam2) != 0 || STRINGS_ARE_EQUAL(&uParam2, ""))
	{
		return 0;
	}
	if (&iParam3 <= 0)
	{
		iParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&uParam1), &Global_10998);
		if (!(GET_TASK_STATUS(&uParam0, 19) != 1 || GET_TASK_STATUS(&uParam0, 19) != 3))
		{
			TASK_USE_GRINGO(&uParam0, &uParam1, &uParam2, &iParam3, 1);
			TASK_PRIORITY_SET(&uParam0, &uParam5);
		}
		Function_209(&uParam0, 5, GET_OBJECT_FROM_GRINGO(&uParam1), &uParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_209(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xA855 / 43093
{
	char* cVar0[32];
	
	Function_216();
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
	if (Function_215(&uParam0) == 1)
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
	Function_214(&uParam0, 0);
	Function_213(&uParam0, uParam1);
	Function_212(&uParam0, &uParam2);
	Function_211(&uParam0, uParam3);
	if (Function_210(&uParam0) != 5)
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

int Function_210(int iParam0) //Position: 0xAAC1 / 43713
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_211(var uParam0, bool bParam1) //Position: 0xAAE5 / 43749
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_212(var uParam0, int iParam1) //Position: 0xAB09 / 43785
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_213(var uParam0, bool bParam1) //Position: 0xAB2F / 43823
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_214(var uParam0, bool bParam1) //Position: 0xAB56 / 43862
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_215(bool bParam0) //Position: 0xAB7A / 43898
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_216() //Position: 0xAB99 / 43929
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

void Function_217(bool bParam0) //Position: 0xABE8 / 44008
{
	TASK_CLEAR(&bParam0);
	TASK_PRIORITY_SET(&bParam0, true);
	return;
}

void Function_218(int iParam0, struct<2>[] Param1, vector3[] vParam2, var uParam3) //Position: 0xABFB / 44027
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	Function_37(&(Global_43791[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= Param1)
	{
		bVar1 = iVar0;
		if (Function_227(&(Param1[iVar02]), 1))
		{
			Function_224(&Param1, &vParam2, bVar1, 0);
		}
		Function_222(&Param1, &vParam2, bVar1, 0);
		Function_219(&(Param1[iVar02]), &(vParam2[iVar03]), 0);
		uVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&uVar2, &uParam3, 0, false, 0);
		*(&Param1[iVar02] + 8) = &uVar2;
		iVar0++;
	}
}

void Function_219(bool bParam0, int iParam1, int iParam2) //Position: 0xAC7F / 44159
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&iVar0, Function_221(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&iVar0, &iParam2, 0, false, 0);
	}
	*(&bParam0 + 8) = &iVar0;
	Function_220(&bParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

void Function_220(int iParam0, int iParam1) //Position: 0xACDF / 44255
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_221(int iParam0) //Position: 0xACF0 / 44272
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

void Function_222(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xAD24 / 44324
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_220(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_221(Global_43790), Function_223(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_227(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_227(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_220(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_221(Global_43790), Function_223(Global_43790), false, 0);
	}
}

int Function_223(int iParam0) //Position: 0xAE8A / 44682
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

void Function_224(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0xAEB5 / 44725
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_227(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_227(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_227(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_226(&(Param0[iVar02]), 8);
	}
	Function_226(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_225(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_222(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_225(int iParam0) //Position: 0xAF5D / 44893
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

void Function_226(var uParam0, int iParam1) //Position: 0xB006 / 45062
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_227(var uParam0, int iParam1) //Position: 0xB020 / 45088
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_228(int iParam0) //Position: 0xB03D / 45117
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_HAS_BEEN_STOLEN: CompanionsList out of bounds.");
		return 0;
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		return GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", &uVar2);
	}
	return IS_ACTOR_VALID(&Global_15402[iParam014] + 8);
}

int Function_229(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xB101 / 45313
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
		Function_231(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_230(&Global_15402[iParam014] + 8);
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

void Function_230(var uParam0) //Position: 0xB443 / 46147
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_231(int iParam0) //Position: 0xB476 / 46198
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_232(struct<2>[] Param0, int iParam1) //Position: 0xB48D / 46221
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_ACTOR_VALID(&(Param0[iVar02])))
		{
			uVar1 = GET_MOUNT(&(Param0[iVar02]));
			if (IS_ACTOR_VALID(&uVar1) && iParam1)
			{
				DESTROY_ACTOR(&uVar1);
			}
			DESTROY_ACTOR(&(Param0[iVar02]));
		}
		iVar0++;
	}
	return;
}

void Function_233(int iParam0) //Position: 0xB4E7 / 46311
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

bool Function_234(bool bParam0) //Position: 0xB532 / 46386
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		return 0;
	}
	return 1;
}

void Function_235(bool bParam0) //Position: 0xB551 / 46417
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_236(int iParam0) //Position: 0xB57E / 46462
{
	Function_237(&Global_43580, iParam0);
	return;
}

void Function_237(var uParam0, var uParam1) //Position: 0xB58C / 46476
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_238() //Position: 0xB5AB / 46507
{
	if (IS_OBJECT_VALID(&fLocal_1314))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&fLocal_1314)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&fLocal_1314));
		}
		Function_239(&fLocal_1314);
	}
	return;
}

void Function_239(int iParam0) //Position: 0xB5D9 / 46553
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

var Function_240(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xB66F / 46703
{
	int iVar0;
	
	iVar0 = iParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_227(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

int Function_241(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0xB6C9 / 46793
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_243(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_242(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_242(&(uVar0[1]), "UseCase1"));
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

var Function_242(var uParam0, int iParam1) //Position: 0xB846 / 47174
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_243(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xB855 / 47189
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

struct<8> Function_244(bool bParam0) //Position: 0xB99F / 47519
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

void Function_245(bool bParam0) //Position: 0xB9C8 / 47560
{
	if (bParam0)
	{
		Function_108(&Global_21369 + 72 + 32, 4);
	}
	else
	{
		Function_27(&Global_21369 + 72 + 32, 4);
	}
	return;
}

void Function_246(var uParam0, int iParam1) //Position: 0xB9EC / 47596
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_247() //Position: 0xBA06 / 47622
{
	var uVar0[9];
	int iVar10;
	
	if (Function_286())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "02 - Capture Officer @ Sepulcro";
		uVar0[4] = "03 - Ride to Casa M";
		uVar0[5] = "04 - Search Casa M";
		uVar0[6] = "Last Stage";
		uVar0[7] = "Kill all Enemies";
		uVar0[8] = "Teleport to objective";
		iVar10 = Function_272(&uLocal_922, &uVar0, &Local_893 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_271(&iVar10, &bLocal_905, &iLocal_906, &iLocal_907))
		{
			Function_264();
			Function_263();
		}
		if (iVar10 == 0)
		{
			Function_264();
			Function_263();
			Function_262(&bLocal_919, 8);
		}
		else if (iVar10 == 1)
		{
			Function_264();
			Function_263();
			Function_258(bLocal_905);
			Function_254(StackVal, 5, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
		}
		else if (iVar10 == 2)
		{
			Function_264();
			Function_263();
			Function_249(&bLocal_921, 4);
		}
		else if (iVar10 == 3)
		{
			Function_264();
			Function_263();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_905 = true;
			iLocal_906 = 0;
			iLocal_907 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_264();
			Function_263();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_905 = 2;
			iLocal_906 = 0;
			iLocal_907 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_264();
			Function_263();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_905 = 3;
			iLocal_906 = 0;
			iLocal_907 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_264();
			Function_263();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_905 = 101;
			iLocal_906 = 0;
			iLocal_907 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_264();
			if (SQUAD_IS_VALID(&bLocal_6 + 824))
			{
				iLocal_1312 = 0;
				while (iLocal_1312 <= 6)
				{
					if (Function_234(&(vLocal_1492[iLocal_13123])))
					{
						KILL_ACTOR(&(vLocal_1492[iLocal_13123]));
					}
					iLocal_1312++;
				}
			}
			if (SQUAD_IS_VALID(&bLocal_6 + 1080))
			{
				iLocal_1312 = 0;
				while (iLocal_1312 <= 6)
				{
					if (Function_234(&(vLocal_1530[iLocal_13123])))
					{
						KILL_ACTOR(&(vLocal_1530[iLocal_13123]));
					}
					iLocal_1312++;
				}
			}
			if (SQUAD_IS_VALID(&bLocal_6 + 1144))
			{
				iLocal_1312 = 0;
				while (iLocal_1312 <= 6)
				{
					if (Function_234(&(vLocal_1568[iLocal_13123])))
					{
						KILL_ACTOR(&(vLocal_1568[iLocal_13123]));
					}
					iLocal_1312++;
				}
			}
		}
		else if (iVar10 == 8)
		{
			if (bLocal_905 == 0)
			{
				Function_264();
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1027);
				}
				Function_248(StackVal, &Global_54076, Vector(-1434,775f, 7,342f, 4388,509f), 299,227f, 1, 1, 1);
				Function_248(StackVal, &bLocal_1334, Vector(-1442,054f, 6,024f, 4381,785f), 297,603f, 1, 1, 1);
			}
			else if (bLocal_905 == 2)
			{
				Function_264();
				Function_248(StackVal, &Global_54076, Vector(-749,038f, 14,535f, 3740,872f), 56,706f, 1, 1, 1);
				Function_248(StackVal, &bLocal_1334, Vector(-753,955f, 14,399f, 3740,554f), 75,336f, 1, 1, 1);
			}
		}
	}
	return;
}

void Function_248(float fParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xBD95 / 48533
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		uVar0 = GET_MOUNT(&fParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&fParam0))
			{
				ACTOR_MOUNT_ACTOR(&fParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&fParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&fParam0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_249(bool bParam0, int iParam1) //Position: 0xBE64 / 48740
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_250(&iParam1);
	bParam0 = 1;
	return;
}

void Function_250(int iParam0) //Position: 0xBE89 / 48777
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_253("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_252(2) || Function_252(8)) || Function_252(9)) || Function_252(10))
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
		Function_253("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_253("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_253("");
	}
	else if (iParam0 == 8)
	{
		Function_251();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_251();
	}
	return;
}

void Function_251() //Position: 0xBF80 / 49024
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_252(int iParam0) //Position: 0xBF8C / 49036
{
	int iVar0;
	
	if (!Function_69(iParam0))
	{
		return 0;
	}
	iVar0 = Function_68(iParam0);
	if (!Function_20(Function_68(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_253(char* cParam0) //Position: 0xBFC2 / 49090
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_254(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xC02F / 49199
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_255(StackVal, Param4, uParam3, &iParam6);
		Function_250(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_255(struct<2> Param0, var uParam2, var uParam3) //Position: 0xC070 / 49264
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_257(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_256(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_256(int iParam0) //Position: 0xC0F2 / 49394
{
	if (!Function_38(iParam0))
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

var Function_257(struct<2> Param0, bool bParam2) //Position: 0xC5A0 / 50592
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

struct<8> Function_258(int iParam0) //Position: 0xC60C / 50700
{
	Function_259(iParam0 + 1);
	return StackVal, Function_259(iParam0 + 1);
}

struct<8> Function_259(int iParam0) //Position: 0xC619 / 50713
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_244(&bLocal_6 + 2016[0]);
			return StackVal, Function_244(&bLocal_6 + 2016[0]);
			break;
		
		case 0x00000001:
			Function_244(&bLocal_6 + 2056[0]);
			return StackVal, Function_244(&bLocal_6 + 2056[0]);
			break;
		
		case 0x00000002:
			Function_244(&bLocal_6 + 2336[0]);
			return StackVal, Function_244(&bLocal_6 + 2336[0]);
			break;
		
		case 0x00000003:
			Function_244(&bLocal_6 + 2504[0]);
			return StackVal, Function_244(&bLocal_6 + 2504[0]);
			break;
		
		default:
			Function_244(&bLocal_6 + 2544[0]);
			return StackVal, Function_244(&bLocal_6 + 2544[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_244(&bLocal_6 + 2016[0]);
	return StackVal, Function_244(&bLocal_6 + 2016[0]);
}

int Function_260(int iParam0) //Position: 0xC6FE / 50942
{
	return Function_261(iParam0 + 1);
}

int Function_261(int iParam0) //Position: 0xC70B / 50955
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&bLocal_6 + 2016[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&bLocal_6 + 2056[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&bLocal_6 + 2336[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&bLocal_6 + 2504[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&bLocal_6 + 2544[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&bLocal_6 + 2016[0]);
}

void Function_262(bool bParam0, int iParam1) //Position: 0xC7F0 / 51184
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_250(&iParam1);
	bParam0 = 1;
	return;
}

void Function_263() //Position: 0xC815 / 51221
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_264() //Position: 0xC82A / 51242
{
	Function_266();
	Function_265(10, 3);
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0xC839 / 51257
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

void Function_266() //Position: 0xC986 / 51590
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_270())
	{
		Function_269(10, 3);
	}
	else
	{
		Function_267();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_52(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_52());
	UI_POP("nDebugMenu");
	return;
}

void Function_267() //Position: 0xC9D1 / 51665
{
	Function_268(25, 2);
	return;
}

void Function_268(int iParam0, int iParam1) //Position: 0xC9DD / 51677
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

void Function_269(int iParam0, int iParam1) //Position: 0xCC09 / 52233
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

bool Function_270() //Position: 0xCD56 / 52566
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

bool Function_271(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCDBE / 52670
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_264();
			Function_263();
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
		Function_253("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_272(struct<17> Param0) //Position: 0xCE6D / 52845
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_285(&Var12, &Var0);
	uVar15 = Function_284(uParam1, &Var12);
	Function_283(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_282(&Param0, uVar15);
	Function_280(StackVal, &Param0, Var12.f_12);
	Function_278(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_277(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_274(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_273(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_273(int iParam0, int iParam1, int iParam2) //Position: 0xCF61 / 53089
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

bool Function_274(struct<17> Param0) //Position: 0xCFC1 / 53185
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
				Function_276(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_276(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_273(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_275(Param1.f_64);
	}
	else
	{
		Function_275(Param1.f_64);
	}
	return 0;
}

void Function_275(bool bParam0) //Position: 0xD154 / 53588
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

void Function_276(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xD192 / 53650
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

var Function_277(int iParam0, struct<21> Param1) //Position: 0xD248 / 53832
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_278(vector3 vParam0) //Position: 0xD26F / 53871
{
	switch (Function_279())
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

int Function_279() //Position: 0xD31B / 54043
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

void Function_280(vector3 vParam0) //Position: 0xD357 / 54103
{
	switch (Function_281(&vParam0))
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

int Function_281(bool bParam0) //Position: 0xD400 / 54272
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_108(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_108(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_27(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_108(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_108(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_27(&bParam0, 0x20000000);
	return 0;
}

var Function_282(struct<21> Param0) //Position: 0xD520 / 54560
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

void Function_283(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD6DA / 55002
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

var Function_284(int iParam0, struct<13> Param1) //Position: 0xD776 / 55158
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_285(struct<17> Param0) //Position: 0xD792 / 55186
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

bool Function_286() //Position: 0xD7EC / 55276
{
	return Global_47307;
}

bool Function_287() //Position: 0xD7F5 / 55285
{
	if (IS_EXITFLAG_SET())
	{
		Function_258(bLocal_905);
		Function_254(StackVal, 4, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
		return 0;
	}
	Function_634(StackVal, StackVal, StackVal, StackVal, StackVal, Local_893, bLocal_905, iLocal_906, &bLocal_921, &bLocal_919, &bLocal_920);
	if (bLocal_905 == 99 && bLocal_905 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_258(bLocal_905);
			Function_254(StackVal, 1, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
			return 1;
		}
		if (Function_633(2048))
		{
			Function_258(bLocal_905);
			Function_254(StackVal, 3, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
			return 1;
		}
		if (Function_614(&Local_1211, &uLocal_1157, &uLocal_1303, &uLocal_1096, iLocal_1156))
		{
			if (Function_610(&uLocal_1303))
			{
				Function_258(bLocal_905);
				Function_254(StackVal, 5, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
				return 1;
			}
		}
		if (IS_ACTOR_VALID(&iLocal_1025))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(&iLocal_1025))
			{
				Function_253("MexGirl_attacked");
				Function_258(bLocal_905);
				Function_254(StackVal, 5, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
				return 1;
			}
		}
		if ((Function_228(8) && bLocal_905 == 0) && bLocal_905 == 100)
		{
			Function_229(8, 1, 0, 1, 1);
		}
		Function_609();
	}
	switch (bLocal_905)
	{
		case 0x00000063:
			Function_569();
			break;
		
		case 0x00000000:
			Function_551();
			break;
		
		case 0x00000001:
			Function_493();
			break;
		
		case 0x00000002:
			Function_443();
			break;
		
		case 0x00000003:
			Function_343();
			break;
		
		case 0x00000065:
			Function_290();
			break;
		
		case 0x00000064:
			if (Function_289(&bLocal_920))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_288(&bLocal_905, &iLocal_906, &iLocal_907))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_921)
	{
		Function_249(&bLocal_921, 4);
		Function_1();
		return 0;
	}
	if (bLocal_919)
	{
		Function_262(&bLocal_919, 8);
		Function_1();
		return 0;
	}
	if (bLocal_920 && bLocal_905 == 100)
	{
		Function_258(bLocal_905);
		Function_254(StackVal, 5, &bLocal_920, &bLocal_905, Function_260(bLocal_905), Function_258(bLocal_905), 0);
	}
	return 1;
}

bool Function_288(var uParam0, var uParam1, int iParam2) //Position: 0xD9EC / 55788
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

bool Function_289(int iParam0) //Position: 0xDA35 / 55861
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_290() //Position: 0xDA49 / 55881
{
	switch (iLocal_906)
	{
		case 0x00000000:
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			iLocal_1316 = Function_342();
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			FIRE_STOP_ALL_FIRES();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_244(&bLocal_6 + 2544[0]);
			iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2544[0]), 0, 1, 1);
			if (!Function_340(iLocal_1029))
			{
				Function_339(&Local_893);
			}
			if (Function_234(&Global_54076))
			{
				Function_217(&Global_54076);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				Function_338(&Global_54076, &bLocal_6 + 2544[0], 1, 1, 1);
			}
			if (Function_234(&bLocal_1027))
			{
				Function_217(&bLocal_1027);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
				Function_338(&bLocal_1027, &bLocal_6 + 2544[2], 1, 1, 1);
			}
			if (Function_234(&bLocal_1334))
			{
				DESTROY_ACTOR(&bLocal_1334);
			}
			iLocal_906 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_340(iLocal_1029) || iLocal_1029 != 4294967295))
			{
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_906 = 3;
			break;
		
		case 0x00000003:
			if (Function_291("$/cutscene/Rebel02_CS05/Rebel02_CS05", &iLocal_907, &Local_893, &bLocal_905, 63262, 63069, 63062, 60010, 59538, 59531, 0, 1, 1, 2, 2, 0, 1))
			{
				if (Function_234(&Global_54076))
				{
					Function_217(&Global_54076);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_906 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_919 = true;
			}
			break;
	}
	return;
}

bool Function_291(int iParam0, int iParam1, struct<41> Param2) //Position: 0xDC4B / 56395
{
	if (!&bParam15)
	{
		Function_306(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_305(&Param2) || Param2.f_40 < 1))
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
				Function_303(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_302())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_301(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_303(&iParam1 + 4);
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
					Function_301(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_298(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_298(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_301(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_303(&iParam1 + 4);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_305(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_292(var uParam0, bool bParam1) //Position: 0xE2AD / 58029
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
		Function_43();
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

void Function_293() //Position: 0xE37C / 58236
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_294();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_294() //Position: 0xE3C1 / 58305
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_295(bool bParam0) //Position: 0xE3D3 / 58323
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

void Function_296(var uParam0, int iParam1) //Position: 0xE3F0 / 58352
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), &iParam1, 4294967295, 1);
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

bool Function_297(int iParam0) //Position: 0xE482 / 58498
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

float Function_298(vector3 vParam0) //Position: 0xE4B3 / 58547
{
	if (Function_300(&vParam0))
	{
		if (Function_299(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_299(int iParam0) //Position: 0xE580 / 58752
{
	return Function_14(iParam0, 2);
}

bool Function_300(int iParam0) //Position: 0xE58E / 58766
{
	return Function_14(iParam0, 1);
}

int Function_301(bool bParam0) //Position: 0xE59C / 58780
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

bool Function_302() //Position: 0xE65F / 58975
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

void Function_303(int iParam0) //Position: 0xE69C / 59036
{
	Function_304(&iParam0, 0.0f);
	return;
}

void Function_304(vector3 vParam0) //Position: 0xE6A9 / 59049
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_108(&vParam0, 1);
	Function_27(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_305(struct<37> Param0) //Position: 0xE6CE / 59086
{
	return Param0.f_36;
}

void Function_306(var uParam0, int iParam1) //Position: 0xE6D9 / 59097
{
	Function_307(&uParam0, &iParam1, 0);
	return;
}

void Function_307(var uParam0, bool bParam1, bool bParam2) //Position: 0xE6E9 / 59113
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
			Function_308(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_119(20, 1, 0, 0);
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
							Function_308(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_119(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_308(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xE861 / 59489
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

int Function_309() //Position: 0xE88B / 59531
{
	return 1;
}

int Function_310() //Position: 0xE892 / 59538
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	switch (bLocal_905)
	{
		case 0x00000063:
			bVar5 = false;
			Function_312(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(&bLocal_6 + 1464[1]);
			Function_312(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			bVar5 = false;
			Function_312(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			REMOVE_CORPSE_RETAINMENT_VOLUME_OBJ(&bLocal_6 + 1464[4]);
			bVar5 = false;
			Function_312(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_311();
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

int Function_311() //Position: 0xE986 / 59782
{
	Function_312(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_312(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xE99B / 59803
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
		uVar0 = Function_52();
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
		Function_119(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_263();
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

int Function_313() //Position: 0xEA6A / 60010
{
	bool bVar0;
	struct<9> Var1;
	
	switch (bLocal_905)
	{
		case 0x00000063:
			if (Function_234(&(uLocal_1338[0])) && Function_234(&(uLocal_1350[0])))
			{
				if (GET_MOUNT(&(uLocal_1338[0])) != &uLocal_1350[0])
				{
					ACTOR_MOUNT_ACTOR(&(uLocal_1338[0]), &(uLocal_1350[0]));
					TASK_CLEAR(&(uLocal_1338[0]));
				}
			}
			if (Function_234(&(uLocal_1338[2])) && Function_234(&(uLocal_1350[2])))
			{
				if (GET_MOUNT(&(uLocal_1338[2])) != &uLocal_1350[2])
				{
					ACTOR_MOUNT_ACTOR(&(uLocal_1338[2]), &(uLocal_1350[2]));
					TASK_CLEAR(&(uLocal_1338[2]));
				}
			}
			if (Function_234(&(uLocal_1338[3])) && Function_234(&(uLocal_1350[3])))
			{
				if (GET_MOUNT(&(uLocal_1338[3])) != &uLocal_1350[3])
				{
					ACTOR_MOUNT_ACTOR(&(uLocal_1338[3]), &(uLocal_1350[3]));
					TASK_CLEAR(&(uLocal_1338[3]));
				}
			}
			break;
		
		case 0x00000001:
			Function_338(&Global_54076, &bLocal_6 + 2056[1], 0, 0, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 2, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1.0f, 0);
			if (Function_234(&bLocal_1027))
			{
				Function_338(&bLocal_1027, &bLocal_6 + 2056[2], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
			}
			else
			{
				GET_OBJECT_POSITION(&bLocal_6 + 2056[2], &vVar1);
				GET_OBJECT_POSITION(&bLocal_6 + 2056[2], &Var3);
				bLocal_1027 = Function_318(StackVal, 1, 1, vVar1.x, vVar1.y, vVar1.z, 1, 0);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
			}
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (Function_234(&(uLocal_1338[bVar0])))
				{
					Function_217(&(uLocal_1338[bVar0]));
					Function_338(&(uLocal_1338[bVar0]), &bLocal_6 + 2104[bVar0], 1, 1, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&(uLocal_1338[bVar0]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(uLocal_1338[bVar0]), Function_317(bVar0), 4, 0, 0, 1, false);
					AI_ACTOR_FORCE_SPEED(&(uLocal_1338[bVar0]), 4);
					iLocal_1480[bVar0] = 3;
				}
				if (Function_234(&(uLocal_1350[bVar0])))
				{
					Function_338(&(uLocal_1350[bVar0]), &bLocal_6 + 2160[bVar0], 1, 1, 1);
					TASK_STAND_STILL(&(uLocal_1350[bVar0]), -1.0f, 0, 0);
				}
				bVar0++;
			}
			Function_338(&bLocal_1325, &bLocal_6 + 2056[3], 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1325, -1.0f, 0, 0);
			bVar0 = false;
			while (bVar0 <= 6)
			{
				if (Function_234(&(vLocal_1492[bVar03])))
				{
					Function_217(&(vLocal_1492[bVar03]));
					Function_338(&(vLocal_1492[bVar03]), &bLocal_6 + 2216[bVar0], 1, 1, 1);
					TASK_STAND_STILL(&(vLocal_1492[bVar03]), -1.0f, 0, 0);
				}
				bVar0++;
			}
			Function_316();
			return 1;
			break;
		
		case 0x00000002:
			if (Function_234(&Global_54076))
			{
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				Function_338(&Global_54076, &bLocal_6 + 2336[1], 0, 0, 0);
			}
			if (Function_234(&bLocal_1027))
			{
				Function_338(&bLocal_1027, &bLocal_6 + 2336[3], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
			}
			else
			{
				bLocal_1027 = Function_318(1, 1, 0, 0, 0, 0, 1, 0);
				Function_338(&bLocal_1027, &bLocal_6 + 2336[3], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
			}
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (Function_234(&(uLocal_1338[bVar0])))
				{
					Function_217(&(uLocal_1338[bVar0]));
					Function_338(&(uLocal_1338[bVar0]), &bLocal_6 + 2392[bVar0], 0, 1, 1);
					TASK_POINT_GUN_AT_OBJECT(&(uLocal_1338[bVar0]), &bLocal_1325, -1.0f, 1);
					TASK_PRIORITY_SET(&(uLocal_1338[bVar0]), true);
					if (Function_234(&(uLocal_1350[bVar0])))
					{
						Function_338(&(uLocal_1350[bVar0]), &bLocal_6 + 2448[bVar0], 1, 1, 1);
						TASK_STAND_STILL(&(uLocal_1350[bVar0]), -1.0f, 0, 0);
					}
				}
				bVar0++;
			}
			Function_338(&bLocal_1336, &bLocal_6 + 2448[4], 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1336, -1.0f, 0, 0);
			Function_316();
			Function_315();
			return 1;
			break;
		
		case 0x00000065:
			Function_338(&Global_54076, &bLocal_6 + 2544[1], 1, 1, 1);
			Function_338(&bLocal_1027, &bLocal_6 + 2544[2], 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
			if (Function_234(&bLocal_6 + 1280[02]))
			{
				Function_338(&bLocal_6 + 1280[02], &bLocal_6 + 2544[3], 1, 1, 1);
				SET_ACTOR_INVULNERABILITY(&bLocal_6 + 1280[02], false);
				Function_217(&bLocal_6 + 1280[02]);
				TASK_GO_TO_OBJECT(&bLocal_6 + 1280[02], &bLocal_6 + 2544[4], 1, 0, 1);
				GET_OBJECT_POSITION(&bLocal_6 + 2544[4], &Var5);
				GET_OBJECT_ORIENTATION(&bLocal_6 + 2544[4], &Var7);
				uLocal_1465 = CREATE_GRINGO_IN_LAYOUT(&bLocal_6 + 1280[02], "oOutroWhoreGringo", "stand_drunkdancing_woman", Var5, Var7);
			}
			return 1;
			break;
		
		default:
			LOG_ERROR("MISSING STAGE IN CUTSCENE_CUSTOM_SET_POSES");
			Function_314();
			break;
	}
	return 1;
}

int Function_314() //Position: 0xEF85 / 61317
{
	return 1;
}

void Function_315() //Position: 0xEF8C / 61324
{
	if (Function_234(&bLocal_1325))
	{
		TASK_STAND_STILL(&bLocal_1325, -1.0f, 0, 0);
		AI_IGNORE_ACTOR(&bLocal_1325);
		SET_MOVER_FROZEN(&bLocal_1325, true);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&bLocal_1325, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1325, 0);
		Function_338(&bLocal_1325, &bLocal_6 + 2336[2], 1, 1, 1);
		ACTOR_START_FORCE_HOLSTER(&bLocal_1325, 1, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1325, "reb02_santa_ground", 0);
		SET_ACTION_NODE_FOR_ACTOR(&bLocal_1325, "reb02_santa_ground");
		TASK_STAND_STILL(&bLocal_1325, -1.0f, 0, 0);
		DECOR_SET_BOOL(&bLocal_1325, "ActionArea_DisableHogtie", true);
	}
	Function_338(&Global_54076, &bLocal_6 + 2336[0], 1, 1, 1);
	return;
}

void Function_316() //Position: 0xF05F / 61535
{
	struct<2> Var0;
	int iVar2;
	
	if (IS_ACTOR_VALID(&bLocal_6 + 896[02]))
	{
		GET_POSITION(&bLocal_6 + 896[02], &Var0);
		DESTROY_ACTOR(&bLocal_6 + 896[02]);
		CREATE_CORPSE_IN_LAYOUT(StackVal, &uLocal_891, Function_85(), 518, Var0, Vector(0.0f, 0.0f, 0.0f), "dead_ground_male", "inj_deadpose_4");
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (IS_ACTOR_VALID(&(uLocal_1409[iVar2])))
		{
			GET_POSITION(&(uLocal_1409[iVar2]), &Var0);
			DESTROY_ACTOR(&(uLocal_1409[iVar2]));
			if (iVar2 == 0)
			{
				CREATE_CORPSE_IN_LAYOUT(StackVal, &uLocal_891, Function_85(), 520, Var0, Vector(0.0f, 0.0f, 0.0f), "dead_ground_male", "inj_deadpose_2");
			}
			else
			{
				CREATE_CORPSE_IN_LAYOUT(StackVal, &uLocal_891, Function_85(), 518, Var0, Vector(0.0f, 0.0f, 0.0f), "dead_ground_male", "inj_deadpose_1");
			}
		}
		iVar2++;
	}
	return;
}

var Function_317(bool bParam0) //Position: 0xF17D / 61821
{
	if (bParam0 != 1 || bParam0 != 3)
	{
		return &bLocal_6 + 3440;
	}
	return &bLocal_6 + 3448;
}

var Function_318(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xF19F / 61855
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
		Function_324(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_323())
		{
			return "";
		}
	}
	if (!Function_321())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_43();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_244(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_244(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_244(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_244(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_320(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_320(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_85(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_85(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_105(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_85(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_85(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_319(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_319(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF4FC / 62716
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

var Function_320(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF546 / 62790
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

bool Function_321() //Position: 0xF5E6 / 62950
{
	if (Function_322() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_322() //Position: 0xF5FC / 62972
{
	return Global_21369.f_244;
}

bool Function_323() //Position: 0xF607 / 62983
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_324(var uParam0, bool bParam1, bool bParam2) //Position: 0xF627 / 63015
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_108(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_108(&Global_21369 + 72 + 32, 64);
	}
	return;
}

int Function_325() //Position: 0xF656 / 63062
{
	return 1;
}

int Function_326() //Position: 0xF65D / 63069
{
	switch (bLocal_905)
	{
		case 0x00000063:
			Function_244(&bLocal_6 + 2016[2]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_244(&bLocal_6 + 2016[2]), 0, 0);
			return 1;
			break;
		
		case 0x00000001:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000002:
			Function_244(&bLocal_6 + 2336[4]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_244(&bLocal_6 + 2336[4]), -3.0f, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000065:
			Function_244(&bLocal_6 + 2544[5]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_244(&bLocal_6 + 2544[5]), 0.0f, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		default:
			Function_327();
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

int Function_327() //Position: 0xF717 / 63255
{
	return 1;
}

int Function_328() //Position: 0xF71E / 63262
{
	int iVar0;
	
	switch (bLocal_905)
	{
		case 0x00000063:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_332(StackVal, &uLocal_891, Global_54078, &bLocal_6 + 1464[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_332(StackVal, &uLocal_891, Global_54078, &bLocal_6 + 1464[1], 0, 0, 0, 0, 1, 1);
			ADD_CORPSE_REMOVAL_VOLUME_OBJ(&bLocal_6 + 1464[1]);
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (Function_234(&(uLocal_1338[iVar0])))
				{
					TASK_STAND_STILL(&(uLocal_1338[iVar0]), -1.0f, 0, 0);
				}
				iVar0++;
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_6 + 864[02], true);
			SNAP_ACTOR_TO_GRINGO(&bLocal_6 + 864[02], &bLocal_6 + 3344, "UseCase1", true, 0, 0);
			return 1;
			break;
		
		case 0x00000002:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_332(StackVal, &uLocal_891, Global_54078, &bLocal_6 + 1464[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_334(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			ADD_CORPSE_RETAINMENT_VOLUME_OBJ(&bLocal_6 + 1464[4]);
			if (!IS_ACTOR_ALIVE(&bLocal_6 + 1280[02]))
			{
				Function_331();
				SET_ACTOR_INVULNERABILITY(&bLocal_6 + 1280[02], true);
				TASK_STAND_STILL(&bLocal_6 + 1280[02], -1.0f, 0, 0);
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_6 + 1280[02], true);
			Function_330();
			return 1;
			break;
		
		default:
			LOG_ERROR("MISSING STAGE IN CUTSCENE_CUSTOM_SETUP");
			Function_329();
			break;
	}
	return 1;
}

int Function_329() //Position: 0xF8E1 / 63713
{
	bool bVar0;
	
	Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_332(StackVal, &Global_10996, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_330() //Position: 0xF947 / 63815
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyCorpse0", 5,49309E-43f, Vector(-786,3391f, 13,05098f, 3716.0f), Vector(0.0f, 102,1398f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[02], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[02]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyCorpse1", 5,366973E-43f, Vector(-810,7024f, 13,05098f, 3721,298f), Vector(0.0f, 176,6927f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[12], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[12]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyCorpse2", 5,521116E-43f, Vector(-819,4138f, 16,66465f, 3710,385f), Vector(0.0f, 24,56277f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[22], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[22]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyCorpse3", 5,394999E-43f, Vector(-806,319f, 16,66464f, 3705,952f), Vector(0.0f, 116,9639f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[32], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[32]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyCorpse4", 5,324934E-43f, Vector(-806,6494f, 13,05098f, 3717,351f), Vector(0.0f, 194,1287f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[42], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[42]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyCorpse5", 5,507103E-43f, Vector(-805,9866f, 13,05098f, 3726,013f), Vector(0.0f, 300,6884f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[52], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[52]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyTwoCorpse0", 5,310921E-43f, Vector(-802,7205f, 13,05098f, 3713,28f), Vector(0.0f, 137,4445f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[62], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[62]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyTwoCorpse1", 5,535129E-43f, Vector(-797,174f, 13,05098f, 3714,826f), Vector(0.0f, 97,22491f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[72], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_6 + 1312[72]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &bLocal_6, "CasaArmyTwoCorpse2", 5,549142E-43f, Vector(-796.0f, 13,05098f, 3721,924f), Vector(0.0f, 339,0005f, 0.0f), "dead_ground_male");
	SET_CORPSE_PERMANENT(&bLocal_6 + 1312[82], 1);
	return;
}

void Function_331() //Position: 0xFCB3 / 64691
{
	*(&bLocal_6 + 1304) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "OutroWhore"));
	*(&bLocal_6 + 1280[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "OutroWhore0", 687, Vector(-790,5936f, 13,16464f, 3703,144f), Vector(0.0f, 377,5249f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1280[02], &bLocal_6 + 1304);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 1280[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 1280[02]);
	MEMORY_ATTACK_ON_SIGHT(&bLocal_6 + 1280[02], 0);
	return;
}

void Function_332(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xFD45 / 64837
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
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
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
				Function_333(&uVar1, &uParam0);
			}
		}
		if (!Function_105(StackVal, Var2))
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

void Function_333(var uParam0, float fParam1) //Position: 0xFFE5 / 65509
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

void Function_334(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x10068 / 65640
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
	Function_263();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_52();
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
				TASK_OVERRIDE_SET_POSTURE(&bVar1, false);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, true);
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
				Function_337(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_85(), 2, Function_337(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_119(19, 1, 0, 0);
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
	if (Function_335(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_195(0x4000000);
	}
	if (Function_335(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_195(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_335(int iParam0) //Position: 0x1031A / 66330
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_336() //Position: 0x10336 / 66358
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

struct<8> Function_337(bool bParam0) //Position: 0x103C4 / 66500
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_338(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x103D6 / 66518
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

void Function_339(int iParam0) //Position: 0x104E6 / 66790
{
	if (!Function_305(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_33(1, 0, 1);
		}
	}
	return;
}

bool Function_340(int iParam0) //Position: 0x10502 / 66818
{
	if (!Function_38(iParam0))
	{
		return 1;
	}
	return Function_34(&(Global_43791[iParam0]), 4);
}

int Function_341(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x1051E / 66846
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

int Function_342() //Position: 0x105C4 / 67012
{
	return Global_53524.f_68;
}

void Function_343() //Position: 0x105CF / 67023
{
	if (iLocal_906 < 4 && iLocal_906 > 13)
	{
		Function_436(&iLocal_1152, &bLocal_6 + 1680[17], &bLocal_6 + 1680[18], "Rebel02_return_casa", "Rebel02_fail_casa", &bLocal_920, 0, 0, 0, 330, 1);
		if (iLocal_906 >= 7)
		{
			Function_435(19, 2, 15.0f, 1.0f, 0,8f, 0,2f, 0, 1);
		}
		Function_426();
		Function_413(4);
		Function_412();
		Function_244(&bLocal_6 + 2544[0]);
		Function_406(StackVal, "$/cutscene/Rebel02_CS05/Rebel02_CS05", &uLocal_931, Function_244(&bLocal_6 + 2544[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_906)
	{
		case 0x00000000:
			Function_402(0);
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			iLocal_1316 = Function_342();
			Function_245(0);
			uLocal_1463 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uLocal_1418, 5.0f, 0);
			Function_244(GET_OBJECT_FROM_GRINGO(&uLocal_1463));
			Function_241(StackVal, Function_244(GET_OBJECT_FROM_GRINGO(&uLocal_1463)), 0, 0);
			SET_FACTIONS_STATUS_TWO_WAY(20, 19, 4);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(26);
			Function_244(&bLocal_6 + 2504[0]);
			iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2504[0]), 0, 1, 1);
			if (iLocal_1030[2] == 0)
			{
				if (!HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_195(3);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_244(&bLocal_6 + 2504[0]);
				iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2504[0]), 0, 1, 1);
				if (!Function_340(iLocal_1029))
				{
					Function_339(&Local_893);
				}
				Function_233(&bLocal_6 + 616);
				Function_233(&bLocal_6 + 712);
				if (!SQUAD_IS_VALID(&bLocal_6 + 1272))
				{
					Function_400();
				}
				if (Function_234(&bLocal_1334))
				{
					Function_217(&bLocal_1334);
					TASK_STAND_STILL(&bLocal_1334, -1.0f, 0, 0);
					Function_338(&bLocal_1334, &bLocal_6 + 2504[2], 1, 1, 1);
					MEMORY_PREFER_RIDING(&bLocal_1334, false);
				}
				if (Function_234(&Global_54076))
				{
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						if (Function_234(GET_MOUNT(&Global_54076)))
						{
							TASK_STAND_STILL(GET_MOUNT(&Global_54076), -1.0f, 0, 0);
							Function_338(GET_MOUNT(&Global_54076), &bLocal_6 + 2544[2], 1, 1, 1);
							ACTOR_DISMOUNT_NOW(&Global_54076);
						}
					}
					Function_338(&Global_54076, &bLocal_6 + 2504[0], 1, 1, 1);
				}
				if (Function_234(&bLocal_1027))
				{
					Function_217(&bLocal_1027);
					TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
					Function_338(&bLocal_1027, &bLocal_6 + 2544[2], 1, 1, 1);
				}
				iLocal_906 = 1;
			}
			else
			{
				Function_399();
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_340(iLocal_1029) || iLocal_1029 != 4294967295))
			{
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000002:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_906 = 4;
			Function_259(bLocal_905);
			Function_391(StackVal, Function_259(bLocal_905), bLocal_905, Global_46746[1], Function_261(bLocal_905), 0);
			break;
		
		case 0x00000004:
			if (iLocal_1030[2] == 0)
			{
				if (!IS_ACTOR_VALID(&(uLocal_1338[4])))
				{
					uLocal_1338[4] = &bLocal_1334;
				}
				Function_233(&bLocal_6 + 616);
				Function_233(&bLocal_6 + 712);
				if (!SQUAD_IS_VALID(&bLocal_6 + 1272))
				{
					Function_400();
				}
				if (Function_234(&bLocal_1334))
				{
					Function_217(&bLocal_1334);
					TASK_STAND_STILL(&bLocal_1334, -1.0f, 0, 0);
					Function_338(&bLocal_1334, &bLocal_6 + 2504[2], 1, 1, 1);
					MEMORY_PREFER_RIDING(&bLocal_1334, false);
				}
				if (Function_234(&Global_54076))
				{
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						if (Function_234(GET_MOUNT(&Global_54076)))
						{
							TASK_STAND_STILL(GET_MOUNT(&Global_54076), -1.0f, 0, 0);
							Function_338(GET_MOUNT(&Global_54076), &bLocal_6 + 2544[2], 1, 1, 1);
							ACTOR_DISMOUNT_NOW(&Global_54076);
						}
					}
					Function_338(&Global_54076, &bLocal_6 + 2504[0], 1, 1, 1);
				}
				if (Function_234(&bLocal_1027))
				{
					Function_217(&bLocal_1027);
					TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
					Function_338(&bLocal_1027, &bLocal_6 + 2544[2], 1, 1, 1);
				}
				if (Function_234(&bLocal_1334))
				{
					Function_390(4);
				}
				Function_387();
			}
			Function_386(&(Local_1211[115]));
			Function_381(&(Local_1211[115]), &bLocal_6 + 616, "RebelSoldier", 0, 0x5f5e100, 1);
			Function_377(&(Local_1211[115]), 2);
			Function_369();
			Function_367(&uLocal_932, 8, 0, 4294967295, 4294967295);
			iLocal_1317 = 0;
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 5;
			break;
		
		case 0x00000005:
			if (Function_366(&iLocal_1098, 1,3f))
			{
				Function_387();
				if (Function_234(&Global_54076))
				{
					Function_217(&Global_54076);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_1319 = 0;
				iLocal_906 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_364("Rebel02_obj_search_casa");
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 7;
				iLocal_1319 = 0;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_1319)
			{
				if (Function_366(&iLocal_1098, 5.0f))
				{
					Function_363();
					iLocal_1319 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[7]) || IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[8]))
			{
				Function_361();
			}
			else if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uLocal_1421[4]), 1.0f, 200.0f, 1, 1, 0))
			{
				Function_361();
			}
			iLocal_1312 = 0;
			while (iLocal_1312 <= 6)
			{
				if (IS_ACTOR_VALID(&(vLocal_1530[iLocal_13123])))
				{
					if ((GET_LAST_ATTACKER(&(vLocal_1530[iLocal_13123])) != &Global_54076 || GET_LAST_ATTACKER(&(vLocal_1530[iLocal_13123])) != &bLocal_1334) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(vLocal_1530[iLocal_13123]), 1.0f, 200.0f, 1, 1, 0))
					{
						Function_361();
					}
				}
				iLocal_1312++;
			}
			break;
		
		case 0x00000008:
			if (Function_366(&iLocal_1098, 2.0f))
			{
				Function_364("Rebel02_obj_fightCasa");
				iLocal_906 = 9;
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_1317 = 0;
				iLocal_1319 = 0;
			}
			break;
		
		case 0x00000009:
			if (Function_366(&iLocal_1098, 4.0f))
			{
				Function_360();
				iLocal_906 = 10;
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_1317 = 0;
				iLocal_1319 = 0;
			}
			break;
		
		case 0x0000000A:
			if (Function_359())
			{
				iLocal_1156 = 0;
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 105;
				Function_367(&uLocal_932, 1, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_350();
				if (iLocal_1416)
				{
					Function_337(&Global_54076);
					if (!IS_POSITION_INDOORS(Function_337(&Global_54076)))
					{
						iLocal_1416 = 0;
						Function_367(&uLocal_932, 40, 0, 4294967295, 4294967295);
					}
				}
				else
				{
					Function_337(&Global_54076);
					if (IS_POSITION_INDOORS(Function_337(&Global_54076)))
					{
						iLocal_1416 = 1;
						Function_367(&uLocal_932, 38, 0, 4294967295, 4294967295);
					}
				}
				if (!iLocal_1408)
				{
					if (Function_234(&bLocal_1334))
					{
						if (GET_ACTOR_HEALTH(&bLocal_1334) > 30.0f)
						{
							if (!Function_349())
							{
								iLocal_1408 = 1;
								Function_348();
							}
						}
					}
				}
				if (Function_366(&iLocal_1098, 15.0f))
				{
					if (!Function_349())
					{
						if (Function_234(&(vLocal_1568[03])))
						{
							Function_347();
						}
						else
						{
							Function_344();
						}
						Function_303(&iLocal_1098);
					}
				}
			}
			break;
		
		case 0x00000069:
			if (Function_366(&iLocal_1098, 2,5f))
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_1156 = 0;
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED() && Function_366(&iLocal_1098, 2.0f))
			{
				Function_367(&uLocal_932, 0, 0, 4294967295, 4294967295);
				iLocal_1030[3] = 1;
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				bLocal_905 = 101;
				iLocal_906 = 0;
			}
			break;
	}
	return;
}

void Function_344() //Position: 0x10DBA / 69050
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel02_YellsAtJon2", "Rebel02_YellsAtJon2", false, 2, 1, 0, 1);
		Function_345(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_345(int iParam0) //Position: 0x10E0A / 69130
{
	Function_346(0, &Global_54076, iParam0, 0);
	Function_346(1, &iLocal_1025, iParam0, 0);
	Function_346(2, &bLocal_1325, iParam0, 0);
	Function_346(3, &bLocal_6 + 896[02], iParam0, 0);
	Function_346(4, &bLocal_1334, iParam0, 0);
	Function_346(5, &(vLocal_1530[03]), iParam0, 0);
	Function_346(6, &(vLocal_1568[13]), iParam0, 0);
	Function_346(7, &(vLocal_1530[23]), iParam0, 0);
	Function_346(8, &(vLocal_1568[03]), iParam0, 0);
	return;
}

void Function_346(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x10E85 / 69253
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_173(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_347() //Position: 0x10EAD / 69293
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel02_YellsAtJon3", "Rebel02_YellsAtJon3", false, 2, 1, 0, 1);
		Function_345(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_348() //Position: 0x10EFD / 69373
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelTakesDamage", "Rebel02_RebelTakesDamage", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_349() //Position: 0x10F57 / 69463
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		return 1;
	}
	return 0;
}

void Function_350() //Position: 0x10F6E / 69486
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bLocal_6 + 1144))
	{
		if (iLocal_1313 >= 3 || IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[8]))
		{
			Function_358();
			(&vLocal_1568[03] + 16) = &bLocal_6 + 3416;
			*(&vLocal_1568[13] + 16) = &bLocal_6 + 3408;
			*(&vLocal_1568[23] + 16) = Function_357(&vLocal_1530);
			bVar0 = false;
			while (bVar0 <= 3)
			{
				vLocal_1568[bVar03] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 1144, bVar0);
				if (Function_234(&(vLocal_1568[bVar03])))
				{
					Function_356(&(vLocal_1568[bVar03]));
					vLocal_1568[bVar03].f_12 = 4294967295;
					Function_217(&(vLocal_1568[bVar03]));
					if (&vLocal_1568[bVar03] + 16 == &bLocal_6 + 3408 && &vLocal_1568[bVar03] + 16 == &bLocal_6 + 3424)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(vLocal_1568[bVar03]), &bLocal_6 + 3512, 3, 1, 0, 1, false);
					}
					SET_ACTOR_STAY_WITHIN_VOLUME(&(vLocal_1568[bVar03]), &bLocal_6 + 1680[6], 3, true);
					MEMORY_ALLOW_SHOOTING(&(vLocal_1568[bVar03]), true);
					vLocal_1568[bVar03].f_8 = 7;
				}
				bVar0++;
			}
			Function_355(&bLocal_6 + 1144, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_354(&bLocal_6 + 1144, bLocal_890);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_6 + 1144, bLocal_890);
			Function_353(&bLocal_6 + 1144, 36, 0.0f);
			Function_352(&bLocal_6 + 1144, 0);
			Function_351(&bLocal_6 + 1144, 1);
		}
	}
	return;
}

void Function_351(var uParam0, int iParam1) //Position: 0x110DA / 69850
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
				ACTOR_DRAW_LAST_WEAPON(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_352(var uParam0, int iParam1) //Position: 0x11129 / 69929
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

void Function_353(var uParam0, int iParam1, bool bParam2) //Position: 0x11163 / 69987
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
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_354(var uParam0, bool bParam1) //Position: 0x111B4 / 70068
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (Function_234(&bVar1))
		{
			SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(&bVar1), bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_355(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x111F0 / 70128
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
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_356(int iParam0) //Position: 0x11300 / 70400
{
	if (Function_234(&iParam0))
	{
		SET_ACTOR_VISION_XRAY(&iParam0, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 56.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,2f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 5.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 3.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, 2,5f);
		AI_SET_BURST_DURATION(&iParam0, 4.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1,9f, 0,1f);
	}
	return;
}

int Function_357(vector3[] vParam0) //Position: 0x11388 / 70536
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= vParam0)
	{
		if (!IS_ACTOR_ALIVE(&(vParam0[iVar03])))
		{
			if (IS_OBJECT_IN_VOLUME(&vParam0[iVar03] + 16, &bLocal_6 + 1680[20]))
			{
				return &vParam0[iVar03] + 16;
			}
		}
		iVar0++;
	}
	return &bLocal_6 + 3424;
}

void Function_358() //Position: 0x113DD / 70621
{
	*(&bLocal_6 + 1144) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "CasaArmyTwo"));
	*(&bLocal_6 + 1088[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmyTwo0_UPSTAIRS", 379, Vector(-828.0f, 13,05098f, 3704.0f), Vector(0.0f, 137,4445f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1088[02], &bLocal_6 + 1144);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 1088[02], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 1088[02], 42, 0,5f, 1, 1);
	TASK_STAND_STILL(&bLocal_6 + 1088[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 1088[02], 16);
	SET_ACTOR_FACTION(&bLocal_6 + 1088[02], 19);
	*(&bLocal_6 + 1088[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmyTwo1_UP_GUARD_STAIRS", 395, Vector(-828,1556f, 13,05098f, 3702,062f), Vector(0.0f, 144,4962f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1088[12], &bLocal_6 + 1144);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 1088[12], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 1088[12], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 1088[12], 19);
	*(&bLocal_6 + 1088[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmyTwo2_UPSTAIRS_IN_ROOM", 396, Vector(-824,8502f, 13,05098f, 3701,903f), Vector(0.0f, 132,0983f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1088[22], &bLocal_6 + 1144);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 1088[22], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 1088[22], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 1088[22], 19);
	return;
}

bool Function_359() //Position: 0x115B8 / 71096
{
	iLocal_1313 = 0;
	iLocal_1313 = (iLocal_1313 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_6 + 1080));
	if (SQUAD_IS_VALID(&bLocal_6 + 1144))
	{
		iLocal_1313 = (iLocal_1313 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_6 + 1144));
	}
	if (iLocal_1313 >= 0)
	{
		return 0;
	}
	return 1;
}

void Function_360() //Position: 0x115F8 / 71160
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelSoldiersAmbush", "Rebel02_RebelSoldiersAmbush", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_361() //Position: 0x11658 / 71256
{
	Function_362();
	iLocal_1156 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	if (IS_ACTOR_VALID(&(uLocal_1421[4])))
	{
		TASK_FLEE_ACTOR(&(uLocal_1421[4]), &(vLocal_1530[43]), 10.0f, -1.0f, 0, 0, 0);
	}
	vLocal_1530[43].f_8 = 6;
	Function_303(&iLocal_1098);
	Function_303(&iLocal_1106);
	Function_367(&uLocal_932, 40, 0, 4294967295, 4294967295);
	iLocal_906 = 8;
	iLocal_1319 = 0;
	return;
}

void Function_362() //Position: 0x116BA / 71354
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Rebel02_FightBreaksYell", "Rebel02_FightBreaksYell", false, 2, 1, 0, 1);
		Function_345(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_363() //Position: 0x11712 / 71442
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_CallsOut", "Rebel02_CallsOut", 4, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_364(bool bParam0) //Position: 0x1175C / 71516
{
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	Function_365(&bParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	return;
}

void Function_365(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1177F / 71551
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
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_366(int iParam0, float fParam1) //Position: 0x11814 / 71700
{
	if (Function_300(&iParam0))
	{
		if (Function_298(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_367(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11832 / 71730
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_368(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_368(int iParam0) //Position: 0x1185C / 71772
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

void Function_369() //Position: 0x11DB1 / 73137
{
	bool bVar0;
	
	if (!iLocal_1415)
	{
		bVar0 = false;
		iLocal_1322 = 0;
		if (IS_DOOR_VALID(&(uLocal_1433[0])))
		{
			Function_157(&(uLocal_1433[0]), 0);
		}
		if (!SQUAD_IS_VALID(&bLocal_6 + 1240))
		{
			Function_376();
			bVar0 = false;
			while (bVar0 <= 5)
			{
				uLocal_1421[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 1240, bVar0);
				SET_ACTOR_HEALTH(&(uLocal_1421[bVar0]), 15.0f);
				SET_ACTOR_ONE_SHOT_DEATH(&(uLocal_1421[bVar0]), true);
				bVar0++;
			}
			Function_375(&bLocal_6 + 1240, 0);
			Function_374(&bLocal_6 + 1240, 100.0f);
			CREATE_CORPSE_IN_LAYOUT(StackVal, StackVal, &uLocal_891, Function_85(), 3,503246E-43f, Vector(-813,071f, 13,787f, 3698,773f), Vector(0.0f, 405,928f, 0.0f), "dead_ground_female", "inj_deadpose_2");
			CREATE_DECAL(StackVal, 0f, Vector(-813,071f, 13,787f, 3698,773f), 0,75f, 0, 0);
		}
		if (!SQUAD_IS_VALID(&bLocal_6 + 1080))
		{
			Function_373();
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_6 + 1080, bLocal_890);
			bVar0 = false;
			while (bVar0 <= 6)
			{
				vLocal_1530[bVar03] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 1080, bVar0);
				if (Function_234(&(vLocal_1530[bVar03])))
				{
					Function_356(&(vLocal_1530[bVar03]));
					vLocal_1530[bVar03].f_8 = 5;
					vLocal_1530[bVar03].f_12 = 4294967295;
					Function_217(&(vLocal_1530[bVar03]));
					TASK_STAND_STILL(&(vLocal_1530[bVar03]), -1.0f, 0, 0);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(vLocal_1530[bVar03]), &bLocal_6 + 1680[6], 2, true);
					MEMORY_ALLOW_SHOOTING(&(vLocal_1530[bVar03]), false);
				}
				bVar0++;
			}
			Function_353(&bLocal_6 + 1080, 36, 0.0f);
			Function_352(&bLocal_6 + 1080, 0);
			Function_351(&bLocal_6 + 1080, 1);
			vLocal_1530[03].f_12 = 3;
			vLocal_1530[13].f_12 = 2;
			vLocal_1530[23].f_12 = 1;
			vLocal_1530[33].f_12 = 12;
			vLocal_1530[43].f_12 = 11;
			vLocal_1530[53].f_12 = 8;
			(&vLocal_1530[03] + 16) = &bLocal_6 + 3360;
			*(&vLocal_1530[13] + 16) = &bLocal_6 + 3368;
			*(&vLocal_1530[23] + 16) = &bLocal_6 + 3376;
			*(&vLocal_1530[33] + 16) = &bLocal_6 + 3384;
			*(&vLocal_1530[43] + 16) = &bLocal_6 + 3392;
			*(&vLocal_1530[53] + 16) = &bLocal_6 + 3400;
		}
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
		if (Function_234(&bLocal_1027))
		{
			Function_217(&bLocal_1027);
			TASK_WANDER_IN_VOLUME(&bLocal_1027, &bLocal_6 + 1680[19], -1.0f);
		}
		if (Function_234(&bLocal_1336))
		{
			Function_217(&bLocal_1336);
			TASK_WANDER_IN_VOLUME(&bLocal_1336, &bLocal_6 + 1680[19], -1.0f);
		}
		uLocal_1433[0] = Function_371("casaMadrugada", "whorehouse", 1);
		uLocal_1433[1] = Function_371("casaMadrugada", "whorehouse", 2);
		uLocal_1433[2] = Function_371("casaMadrugada", "whorehouse", 3);
		uLocal_1433[3] = Function_371("casaMadrugada", "whorehouse", 4);
		uLocal_1433[4] = Function_371("casaMadrugada", "whorehouse", 5);
		uLocal_1433[5] = Function_371("casaMadrugada", "whorehouse", 6);
		uLocal_1433[6] = Function_371("casaMadrugada", "whorehouse", 7);
		uLocal_1433[7] = Function_371("casaMadrugada", "whorehouse", 8);
		uLocal_1433[8] = Function_371("casaMadrugada", "whorehouse", 9);
		uLocal_1433[9] = Function_371("casaMadrugada", "whorehouse", 10);
		uLocal_1433[10] = Function_371("casaMadrugada", "whorehouse", 11);
		uLocal_1433[11] = Function_371("casaMadrugada", "cantina", 1);
		uLocal_1433[12] = Function_371("casaMadrugada", "cantina", 2);
		uLocal_1433[13] = Function_371("casaMadrugada", "Cantina", 3);
		if (!Function_370(1))
		{
		}
		iLocal_1415 = 1;
	}
	return;
}

bool Function_370(bool bParam0) //Position: 0x12296 / 74390
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (IS_DOOR_VALID(&(uLocal_1433[iVar0])))
		{
			if (bParam0)
			{
				if (IS_DOOR_OPENED(&(uLocal_1433[iVar0])))
				{
					CLOSE_DOOR_FAST(&(uLocal_1433[iVar0]));
				}
			}
			if (IS_DOOR_LOCKED(&(uLocal_1433[iVar0])))
			{
				Function_188(&(uLocal_1433[iVar0]), 0);
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int Function_371(var uParam0, bool bParam1, int iParam2) //Position: 0x122FB / 74491
{
	return Function_372(Global_43789, &uParam0, &bParam1, iParam2);
}

int Function_372(int iParam0, char* cParam1, bool bParam3) //Position: 0x1230F / 74511
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_38(iParam0))
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

void Function_373() //Position: 0x123B4 / 74676
{
	(&bLocal_6 + 1080) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "CasaArmy"));
	*(&bLocal_6 + 976[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy0_DOWN_LEFT", 392, Vector(-820,9395f, 13,12402f, 3708,717f), Vector(0.0f, 215,1328f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 976[02], &bLocal_6 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 976[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 976[02]);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 976[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 976[02], 19);
	*(&bLocal_6 + 976[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy1_DOWN_MIDDLE", 383, Vector(-816,9576f, 13,2208f, 3704,431f), Vector(0.0f, 147,1979f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 976[12], &bLocal_6 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 976[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 976[12]);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 976[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 976[12], 19);
	*(&bLocal_6 + 976[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy2_DOWN_RIGHT", 394, Vector(-811,3104f, 13,11813f, 3697,865f), Vector(0.0f, 206,2046f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 976[22], &bLocal_6 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 976[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 976[22]);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 976[22], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 976[22], 19);
	*(&bLocal_6 + 976[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy3_UP_REAR", 385, Vector(-818,996f, 16,665f, 3701,4f), Vector(0.0f, 205,441f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 976[32], &bLocal_6 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 976[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 976[32]);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 976[32], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 976[32], 19);
	*(&bLocal_6 + 976[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy4_UP_LEFT", 380, Vector(-810,6151f, 16,62663f, 3704,948f), Vector(0.0f, 240,5381f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 976[42], &bLocal_6 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 976[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 976[42]);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 976[42], 9, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 976[42], 19);
	*(&bLocal_6 + 976[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy5_UP_RIGHT", 393, Vector(-806,0187f, 16,70065f, 3702,745f), Vector(0.0f, 218,4696f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 976[52], &bLocal_6 + 1080);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 976[52], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 976[52]);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 976[52], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 976[52], 19);
	return;
}

void Function_374(var uParam0, float fParam1) //Position: 0x12726 / 75558
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
				SET_ACTOR_HEARING_MAX_RANGE(&uVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_375(var uParam0, bool bParam1) //Position: 0x12774 / 75636
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

void Function_376() //Position: 0x127B9 / 75705
{
	*(&bLocal_6 + 1240) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "CasaWhores"));
	*(&bLocal_6 + 1152[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Whore3_DOWN_LEFT", 249, Vector(-819,4217f, 13,17263f, 3709,654f), Vector(0.0f, 213,8942f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1152[02], &bLocal_6 + 1240);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 1152[02]);
	MEMORY_ATTACK_ON_SIGHT(&bLocal_6 + 1152[02], 0);
	TASK_STAND_STILL(&bLocal_6 + 1152[02], -1.0f, 0, 0);
	*(&bLocal_6 + 1152[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Whore4_DOWN_MIDDLE", 245, Vector(-817,377f, 13,16848f, 3704,994f), Vector(0.0f, 333,886f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1152[12], &bLocal_6 + 1240);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 1152[12]);
	MEMORY_ATTACK_ON_SIGHT(&bLocal_6 + 1152[12], 0);
	TASK_STAND_STILL(&bLocal_6 + 1152[12], -1.0f, 0, 0);
	*(&bLocal_6 + 1152[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Whore0_BUNK_HOUSE_A", 315, Vector(-812,6106f, 16,67441f, 3708.0f), Vector(0.0f, 210,2915f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1152[22], &bLocal_6 + 1240);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 1152[22]);
	MEMORY_ATTACK_ON_SIGHT(&bLocal_6 + 1152[22], 0);
	TASK_STAND_STILL(&bLocal_6 + 1152[22], -1.0f, 0, 0);
	*(&bLocal_6 + 1152[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Whore1_BUNK_HOUSE_B", 248, Vector(-787,2917f, 13,13237f, 3691,669f), Vector(0.0f, 228,4089f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1152[32], &bLocal_6 + 1240);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 1152[32]);
	MEMORY_ATTACK_ON_SIGHT(&bLocal_6 + 1152[32], 0);
	TASK_STAND_STILL(&bLocal_6 + 1152[32], -1.0f, 0, 0);
	*(&bLocal_6 + 1152[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Whore2_UP_LEFT", 315, Vector(-809,4716f, 16,70065f, 3705,695f), Vector(0.0f, 219,2876f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1152[42], &bLocal_6 + 1240);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 1152[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 1152[42]);
	MEMORY_ATTACK_ON_SIGHT(&bLocal_6 + 1152[42], 0);
	TASK_STAND_STILL(&bLocal_6 + 1152[42], -1.0f, 0, 0);
	return;
}

void Function_377(int iParam0, int iParam1) //Position: 0x12A3E / 76350
{
	if (iParam1 != 100000000)
	{
		Function_380(&iParam0, iParam1);
	}
	else
	{
		Function_378(&iParam0, 1);
	}
	return;
}

void Function_378(struct<69> Param0) //Position: 0x12A60 / 76384
{
	Param0.f_68 = 0;
	Function_379(&Param0, 2, &bParam1);
	Function_379(&Param0, 4, &bParam1);
	Function_379(&Param0, 8, &bParam1);
	Function_379(&Param0, 16, &bParam1);
	Function_379(&Param0, 32, &bParam1);
	Function_379(&Param0, 64, &bParam1);
	Function_379(&Param0, 128, &bParam1);
	Function_379(&Param0, 256, &bParam1);
	Function_379(&Param0, 512, &bParam1);
	Function_379(&Param0, 1024, &bParam1);
	return;
}

void Function_379(int iParam0, int iParam1, bool bParam2) //Position: 0x12ADB / 76507
{
	bool bVar0;
	
	Function_108(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_108(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_27(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_108(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_380(int iParam0, bool bParam1) //Position: 0x12B1A / 76570
{
	bool bVar0;
	
	Function_27(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_108(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_27(&iParam0 + 68, bVar0);
	return;
}

int Function_381(struct<69> Param0) //Position: 0x12B47 / 76615
{
	if (!Function_385(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_384(&Param0, &bParam2))
	{
		return 0;
	}
	Function_383(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_382(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_382(var uParam0, int iParam1, int iParam2) //Position: 0x12B8D / 76685
{
	if (iParam1 != 100000000)
	{
		Function_379(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_378(&uParam0, &iParam2);
	}
	return;
}

void Function_383(struct<65> Param0) //Position: 0x12BB4 / 76724
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_384(int iParam0, char* cParam1) //Position: 0x12BC1 / 76737
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

bool Function_385(struct<61> Param0) //Position: 0x12C4E / 76878
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

void Function_386(struct<69> Param0) //Position: 0x12E01 / 77313
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

void Function_387() //Position: 0x12EC1 / 77505
{
	int iVar0;
	
	switch (bLocal_905)
	{
		case 0x00000000:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iLocal_1480[iVar0] = 22;
				iVar0++;
			}
			break;
		
		case 0x00000001:
			if (iLocal_1030[0] == 0)
			{
				Function_388();
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iLocal_1480[iVar0] = 13;
				iVar0++;
			}
			break;
		
		case 0x00000003:
			if (iLocal_1030[2] == 0)
			{
				if (Function_234(&bLocal_1334))
				{
					Function_217(&bLocal_1334);
					TASK_STAND_STILL(&bLocal_1334, -1.0f, 0, 0);
					iLocal_1480[4] = 17;
				}
			}
			break;
		
		default:
			iLocal_1480[4] = 23;
			break;
	}
	return;
}

void Function_388() //Position: 0x12F6E / 77678
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&bLocal_6 + 616))
	{
		Function_389(&bLocal_6 + 616);
	}
	if (SQUAD_GOAL_IS_VALID(&uLocal_1475))
	{
		SQUAD_GOAL_REMOVE(&bLocal_6 + 616, &uLocal_1475);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1334);
		SQUAD_GOAL_ADD_BATTLE_ALLIES(&bLocal_6 + 616, 0, &Global_54076, 4294967295);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_234(&(uLocal_1338[iVar0])))
		{
			Function_217(&(uLocal_1338[iVar0]));
			MEMORY_PREFER_RIDING(&(uLocal_1338[iVar0]), false);
			TASK_OVERRIDE_CLEAR_POSTURE(&(uLocal_1338[iVar0]));
			AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[iVar0]), 1);
			CLEAR_ACTOR_MAX_SPEED(&(uLocal_1338[iVar0]));
			CLEAR_ACTOR_MIN_SPEED(&(uLocal_1338[iVar0]));
			Function_303(&(Local_1130[iVar02]));
			bLocal_1396[iVar0] = RAND_FLOAT_RANGE(1.0f, 3,5f);
			iLocal_1480[iVar0] = 3;
		}
		iVar0++;
	}
	return;
}

void Function_389(int iParam0) //Position: 0x1303F / 77887
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ACTOR_END_FORCE_HOLSTER(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_390(bool bParam0) //Position: 0x1308B / 77963
{
	AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[bParam0]), 1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&(uLocal_1338[bParam0]));
	MEMORY_PREFER_RIDING(&(uLocal_1338[bParam0]), false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uLocal_1338[bParam0]), 0);
	AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[bParam0]), 1);
	SET_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_1338[bParam0]), &bLocal_6 + 1680[21], 2, true);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uLocal_1338[bParam0]), 0,4f);
	SET_ACTOR_VISION_XRAY(&(uLocal_1338[bParam0]), false);
	MEMORY_ALLOW_SHOOTING(&(uLocal_1338[bParam0]), true);
	return;
}

void Function_391(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1310C / 78092
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
	if (iParam2 != Global_53524.f_48 && !Function_398())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_397(0);
	Function_396();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_126())
	{
		Function_394(iParam2);
	}
	Function_393(uParam3, iVar0, iVar1);
	Function_392();
}

void Function_392() //Position: 0x131B5 / 78261
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

void Function_393(int iParam0, bool bParam1, bool bParam2) //Position: 0x131F6 / 78326
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
	if (Function_38(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_75();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_394(bool bParam0) //Position: 0x1335F / 78687
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_395() };
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
	PLAYSTAT_INT("HC_MONEY", Function_98(0));
	PLAYSTAT_INT("HC_FAME", Function_98(3));
	PLAYSTAT_INT("HC_HONOR", Function_98(1));
	return;
}

struct<16> Function_395() //Position: 0x134F7 / 79095
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

void Function_396() //Position: 0x1353D / 79165
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_397(bool bParam0) //Position: 0x13561 / 79201
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

bool Function_398() //Position: 0x13590 / 79248
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_399() //Position: 0x135AB / 79275
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&uLocal_1338[iVar0] != &bLocal_1334)
		{
			if (Function_234(&(uLocal_1338[iVar0])))
			{
				if (Function_234(GET_MOUNT(&(uLocal_1338[iVar0]))))
				{
					RELEASE_ACTOR(GET_MOUNT(&(uLocal_1338[iVar0])));
				}
				RELEASE_ACTOR(&(uLocal_1338[iVar0]));
			}
		}
		iVar0++;
	}
	return;
}

void Function_400() //Position: 0x1360D / 79373
{
	Function_401();
	bLocal_1334 = &bLocal_6 + 1248[02];
	SET_ACTOR_FACTION(&bLocal_1334, 20);
	MEMORY_CONSIDER_AS(&bLocal_1334, &Global_54076, false);
	SET_ACTOR_CAN_BE_TARGETED(&bLocal_1334, false);
	MEMORY_ALLOW_SHOOTING(&bLocal_1334, false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bLocal_1334, 0);
	Function_381(&(Local_1211[115]), &bLocal_1334, "RebelSoldier", 1, 0x5f5e100, 1);
	Function_377(&(Local_1211[115]), 2);
	SET_ACTOR_VISION_XRAY(&bLocal_1334, false);
	return;
}

void Function_401() //Position: 0x13687 / 79495
{
	*(&bLocal_6 + 1272) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "nCasaRebel"));
	*(&bLocal_6 + 1248[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaRebel0", 529, Vector(-790,6715f, 13,05098f, 3728f), Vector(0.0f, 367,7576f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 1248[02], &bLocal_6 + 1272);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 1248[02], false);
	return;
}

void Function_402(bool bParam0) //Position: 0x136FE / 79614
{
	Function_403(0, 0x40400000);
	Function_58();
	Function_57();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_403(float fParam0, float fParam1) //Position: 0x13734 / 79668
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
	Function_405();
	Function_404();
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

void Function_404() //Position: 0x13845 / 79941
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_405() //Position: 0x13879 / 79993
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

int Function_406(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1397F / 80255
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_409(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_411()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
				if (!Function_105(StackVal, Var16))
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
					Function_407();
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
	else if ((!Function_409(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_411()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_409(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_407() //Position: 0x13BE7 / 80871
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
			Function_408(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_408(char* cParam0) //Position: 0x13C3B / 80955
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

bool Function_409(var uParam0, struct<2> Param1, float fParam3) //Position: 0x13D64 / 81252
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_410(&uParam0);
		if (VDIST(Function_410(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_410(bool bParam0) //Position: 0x13DF0 / 81392
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

int Function_411() //Position: 0x13E5C / 81500
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_412() //Position: 0x13E6B / 81515
{
	int iVar0;
	
	if (Function_234(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
	{
		if (iLocal_1322 == 0)
		{
			iLocal_1322 = 1;
			if (bLocal_905 == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (Function_234(&(vLocal_1492[iVar03])))
					{
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(vLocal_1492[iVar03]), 0);
						AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&(vLocal_1492[iVar03]), 1);
					}
					iVar0++;
				}
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 0,01f);
			}
			else if (bLocal_905 == 3)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (Function_234(&(vLocal_1530[iVar03])))
					{
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(vLocal_1530[iVar03]), 0);
						AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&(vLocal_1530[iVar03]), 1);
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (Function_234(&(vLocal_1568[iVar03])))
					{
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(vLocal_1568[iVar03]), 0);
						AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&(vLocal_1568[iVar03]), 1);
					}
					iVar0++;
				}
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 0,01f);
			}
		}
	}
	else if (iLocal_1322)
	{
		iLocal_1322 = 0;
		if (bLocal_905 == 1)
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Function_234(&(vLocal_1492[iVar03])))
				{
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(vLocal_1492[iVar03]), 0);
				}
				iVar0++;
			}
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 1.0f);
		}
		else if (bLocal_905 == 3)
		{
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if (Function_234(&(vLocal_1530[iVar03])))
				{
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(vLocal_1530[iVar03]), 0);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Function_234(&(vLocal_1568[iVar03])))
				{
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(vLocal_1568[iVar03]), 0);
				}
				iVar0++;
			}
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 1.0f);
		}
	}
	return;
}

void Function_413(bool bParam0) //Position: 0x14008 / 81928
{
	var uVar2;
	var uVar4;
	var uVar6;
	var uVar8;
	var uVar10;
	var uVar12;
	struct<5> Var14;
	struct<5> Var19;
	
	if (Function_234(&(uLocal_1338[bParam0])))
	{
		switch (iLocal_1480[bParam0])
		{
			case 0x00000000:
				Function_423(bParam0, 1);
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				Function_244(&bLocal_6 + 2280[bParam0]);
				if (Function_422(StackVal, &(uLocal_1338[bParam0]), Function_244(&bLocal_6 + 2280[bParam0])) > 5.0f)
				{
					SET_ANIM_SET_FOR_ACTOR(&(uLocal_1338[bParam0]), "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&(uLocal_1338[bParam0]), "tense_with_guns");
					Function_217(&(uLocal_1338[bParam0]));
					TASK_STAND_STILL(&(uLocal_1338[bParam0]), -1.0f, 0, 0);
					iLocal_1480[bParam0] = 3;
				}
				break;
			
			case 0x00000003:
				if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 17) != 1)
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&(uLocal_1338[bParam0]), true);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uLocal_1338[bParam0]), 0);
					if (bParam0 != 0 || bParam0 != 4)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(uLocal_1338[bParam0]), Function_317(bParam0), 4, 0, 0, 1, false);
						AI_ACTOR_FORCE_SPEED(&(uLocal_1338[bParam0]), 4);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(uLocal_1338[bParam0]), Function_317(bParam0), 2, 0, 0, 1, false);
						AI_ACTOR_FORCE_SPEED(&(uLocal_1338[bParam0]), 2);
					}
				}
				iLocal_1480[bParam0] = 4;
				break;
			
			case 0x00000004:
				if (Function_421(&(uLocal_1338[bParam0]), Function_317(bParam0), 2,5f))
				{
					Function_217(&(uLocal_1338[bParam0]));
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&(uLocal_1338[bParam0]), 2);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uLocal_1338[bParam0]), 1);
					TASK_OVERRIDE_CLEAR_POSTURE(&(uLocal_1338[bParam0]));
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&(uLocal_1338[bParam0]), -1.0f);
					Function_303(&(Local_1130[bParam02]));
					bLocal_1396[bParam0] = RAND_FLOAT_RANGE(1.0f, 3,5f);
					iLocal_1480[bParam0] = 5;
				}
				break;
			
			case 0x00000005:
				if (Function_420())
				{
					Function_418(bParam0);
				}
				else if (StackVal || Function_422(Function_366(&(Local_1130[bParam02]), (8.0f + bLocal_1396[bParam0])), &Global_54076, *(&bLocal_6 + 2744[iLocal_13293])) >= 12.0f)
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(uLocal_1338[bParam0]), &(uLocal_1362[bParam0]), 2, 0, 0, 1, false);
					iLocal_1480[bParam0] = 6;
				}
				break;
			
			case 0x00000006:
				if (Function_422(StackVal, &(uLocal_1338[bParam0]), Local_1374[bParam02]) > 5.0f)
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&(uLocal_1338[bParam0]), -1.0f);
					Function_303(&(Local_1130[bParam02]));
					bLocal_1396[bParam0] = RAND_FLOAT_RANGE(1.0f, 3,5f);
					iLocal_1480[bParam0] = 7;
				}
				else if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 43) != 1)
				{
					if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 1) != 1)
					{
						Function_217(&(uLocal_1338[bParam0]));
						TASK_GO_TO_COORD(&(uLocal_1338[bParam0]), &(Local_1374[bParam02]), 2);
					}
				}
				break;
			
			case 0x00000007:
				if (Function_420())
				{
					Function_418(bParam0);
				}
				else if (StackVal || Function_422(Function_366(&(Local_1130[bParam02]), (15.0f + bLocal_1396[bParam0])), &Global_54076, *(&bLocal_6 + 2744[iLocal_13293])) >= 12.0f)
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(uLocal_1338[bParam0]), &(uLocal_1362[bParam0]), 2, 0, 0, 1, false);
					Function_244(&bLocal_6 + 2864[bParam0]);
					Local_1374[bParam02] = Function_244(&bLocal_6 + 2864[bParam0]);
					iLocal_1480[bParam0] = 8;
				}
				break;
			
			case 0x00000008:
				if (Function_422(StackVal, &(uLocal_1338[bParam0]), Local_1374[bParam02]) > 5.0f)
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&(uLocal_1338[bParam0]), -1.0f);
					iLocal_1480[bParam0] = 9;
				}
				else if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 43) != 1)
				{
					if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 1) != 1)
					{
						Function_217(&(uLocal_1338[bParam0]));
						TASK_GO_TO_COORD(&(uLocal_1338[bParam0]), &(Local_1374[bParam02]), 2);
					}
				}
				break;
			
			case 0x00000009:
				if (Function_420())
				{
					Function_418(bParam0);
				}
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 6) == 1)
				{
					if (Function_234(&bLocal_1325))
					{
						SET_ANIM_SET_FOR_ACTOR(&(uLocal_1338[bParam0]), "tense_with_guns", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uLocal_1338[bParam0]), "tense_with_guns");
						Function_217(&(uLocal_1338[bParam0]));
						TASK_STAND_STILL(&(uLocal_1338[bParam0]), -1.0f, 0, 0);
						iLocal_1480[bParam0] = 11;
					}
				}
				break;
			
			case 0x0000000B:
				iLocal_1480[bParam0] = 13;
				break;
			
			case 0x0000000C:
				if (Function_234(&bLocal_1325))
				{
					if (IS_ACTOR_HOGTIED(&bLocal_1325))
					{
						Function_417(bParam0);
					}
					else if (Function_416(&bLocal_1325))
					{
						iLocal_1480[bParam0] = 13;
					}
					else if (Function_366(&(Local_1130[bParam02]), 1,5f))
					{
						iLocal_1480[bParam0] = 13;
					}
				}
				break;
			
			case 0x0000000D:
				if (!Function_234(&bLocal_1325))
				{
					Function_217(&(uLocal_1338[bParam0]));
					RESET_ANIM_SET_FOR_ACTOR(&(uLocal_1338[bParam0]), 1);
					MEMORY_PREFER_RIDING(&(uLocal_1338[bParam0]), true);
					if (&uLocal_1338[bParam0] == &bLocal_1334)
					{
						Function_217(&(uLocal_1338[bParam0]));
						if (Function_234(GET_ACTORS_HORSE(&(uLocal_1338[bParam0]))))
						{
							if (IS_ACTOR_VALID(&bLocal_1325) && !bLocal_1323)
							{
								GET_POSITION(&bLocal_1325, &uVar2);
								GET_POSITION(&(uLocal_1338[bParam0]), &uVar4);
								TASK_SHOOT_FROM_POSITION(0, &bLocal_1325, &uVar4);
								TASK_SHOOT_AT_COORD_FROM_POSITION(0, &uVar2, &uVar4, RAND_FLOAT_RANGE(0,4f, 0,9f));
							}
							TASK_MOUNT(&(uLocal_1338[bParam0]), GET_ACTORS_HORSE(&(uLocal_1338[bParam0])), 0, 1, 4, 2147483647);
						}
						else
						{
							TASK_FOLLOW_ACTOR(&(uLocal_1338[bParam0]), &Global_54076);
						}
						ACTOR_HOLSTER_WEAPON(&(uLocal_1338[bParam0]), 1);
						MEMORY_ALLOW_SHOOTING(&(uLocal_1338[bParam0]), false);
						iLocal_1480[bParam0] = 15;
					}
					else
					{
						bLocal_1311 = TASK_SEQUENCE_OPEN();
						if (IS_ACTOR_VALID(&bLocal_1325) && !bLocal_1323)
						{
							GET_POSITION(&bLocal_1325, &uVar6);
							GET_POSITION(&(uLocal_1338[bParam0]), &uVar8);
							TASK_SHOOT_AT_COORD_FROM_POSITION(0, &uVar6, &uVar8, RAND_FLOAT_RANGE(1.0f, 2.0f));
							TASK_STAND_STILL(false, (1.0f + RAND_FLOAT_RANGE(0,5f, 1,9f)), 0, 0);
						}
						else
						{
							TASK_STAND_STILL(false, (3.0f + RAND_FLOAT_RANGE(0,5f, 1,9f)), 0, 0);
						}
						if (IS_ACTOR_VALID(&(uLocal_1350[bParam0])) && &uLocal_1350[bParam0] == &bLocal_1336)
						{
							TASK_GO_NEAR_ACTOR(0, &(uLocal_1350[bParam0]), 5.0f, 1);
							TASK_MOUNT(false, &(uLocal_1350[bParam0]), 0, 1, 2, 2147483647);
						}
						else
						{
							PRINTSTRING(" invalid aRebelHorse ");
							PRINTINT(bParam0);
							PRINTNL();
						}
						if (IS_ACTOR_VALID(&iLocal_1025))
						{
							TASK_GO_NEAR_ACTOR(0, &iLocal_1025, 15.0f, 4);
						}
						else
						{
							uVar10 = Vector(-2288.0f, 21,99682f, 4957,407f);
							TASK_GO_NEAR_COORD(false, &uVar10, 15.0f, 1);
						}
						TASK_WANDER(false, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(uLocal_1338[bParam0]), bLocal_1311);
						TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
						AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&(uLocal_1338[bParam0]), 0, 1);
						MEMORY_PREFER_RIDING(&(uLocal_1338[bParam0]), false);
						iLocal_1480[bParam0] = 14;
					}
				}
				break;
			
			case 0x0000000E:
				break;
			
			case 0x0000000F:
				if (IS_ACTOR_RIDING(&(uLocal_1338[bParam0])))
				{
					Function_217(&(uLocal_1338[bParam0]));
					if (Function_234(&Global_54076))
					{
						TASK_FACE_ACTOR(&(uLocal_1338[bParam0]), &Global_54076, 1, 3212836864);
					}
				}
				break;
			
			case 0x00000010:
				Function_423(bParam0, 0);
				break;
			
			case 0x00000011:
				if (bLocal_905 == 2)
				{
					if (!IS_ACTOR_RIDING(&(uLocal_1338[bParam0])))
					{
					}
					else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&(uLocal_1338[bParam0])))
					{
						TASK_DISMOUNT(&(uLocal_1338[bParam0]), 1);
					}
				}
				else if (!IS_ACTOR_RIDING(&(uLocal_1338[bParam0])))
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_HIDE_AT_COVER(&(uLocal_1338[bParam0]), GET_COVER_LOCATION_FROM_OBJECT(&bLocal_6 + 3352), -1.0f, 6f, 1);
					iLocal_1480[bParam0] = 18;
				}
				break;
			
			case 0x00000012:
				if (!IS_ACTOR_ALIVE(&(uLocal_1421[4])))
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_SHOOT_ENEMIES_FROM_COVER(&(uLocal_1338[bParam0]), GET_COVER_LOCATION_FROM_OBJECT(&bLocal_6 + 3352), -1.0f, 1086324736);
					iLocal_1480[bParam0] = 19;
				}
				break;
			
			case 0x00000013:
				if (Function_359())
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_USE_GRINGO(&(uLocal_1338[bParam0]), GET_GRINGO_FROM_OBJECT(&bLocal_6 + 3336), "UseCase1", 4294967295, 1);
					iLocal_1480[bParam0] = 21;
				}
				else if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[10]))
				{
					if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 28) != 1)
					{
						Function_217(&(uLocal_1338[bParam0]));
						TASK_SHOOT_ENEMIES_FROM_COVER(&(uLocal_1338[bParam0]), GET_COVER_LOCATION_FROM_OBJECT(&bLocal_6 + 3352), -1.0f, 1086324736);
					}
				}
				else
				{
					GET_OBJECT_POSITION(&bLocal_6 + 2984[5], &uVar12);
					GET_OBJECT_ORIENTATION(&bLocal_6 + 2984[5], &Var14);
					uVar16 = FIND_NEAREST_COVER_LOCATION(StackVal, &uVar12, 2.0f, 45.0f, 4);
					if (IS_COVER_LOCATION_VALID(&uVar16))
					{
						Function_217(&(uLocal_1338[bParam0]));
						TASK_SHOOT_ENEMIES_FROM_COVER(&(uLocal_1338[bParam0]), &uVar16, -1.0f, 1086324736);
						iLocal_1480[bParam0] = 20;
					}
				}
				break;
			
			case 0x00000014:
				if (Function_359())
				{
					Function_217(&(uLocal_1338[bParam0]));
					TASK_USE_GRINGO(&(uLocal_1338[bParam0]), GET_GRINGO_FROM_OBJECT(&bLocal_6 + 3336), "UseCase1", 4294967295, 1);
					iLocal_1480[bParam0] = 21;
				}
				else if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 28) != 1)
				{
					GET_OBJECT_POSITION(&bLocal_6 + 2984[5], &uVar17);
					GET_OBJECT_ORIENTATION(&bLocal_6 + 2984[5], &Var19);
					uVar21 = FIND_NEAREST_COVER_LOCATION(StackVal, &uVar17, 2.0f, 45.0f, 4);
					if (IS_COVER_LOCATION_VALID(&uVar21))
					{
						Function_217(&(uLocal_1338[bParam0]));
						TASK_SHOOT_ENEMIES_FROM_COVER(&(uLocal_1338[bParam0]), &uVar21, -1.0f, 1086324736);
					}
				}
				break;
			
			case 0x00000015:
				break;
			
			case 0x00000016:
				Function_414(bParam0);
				break;
			
			default:
				break;
		}
	}
	else if (iLocal_1480[bParam0] != 0 || iLocal_1480[bParam0] != 22)
	{
		iLocal_1480[bParam0] = 23;
	}
	return;
}

void Function_414(int iParam0) //Position: 0x14A2D / 84525
{
	if (IS_ACTOR_RIDING(&(uLocal_1338[iParam0])))
	{
		if (bLocal_905 == 0)
		{
		}
		else if (bLocal_905 == 1)
		{
		}
		else
		{
			AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[iParam0]), 0);
			iLocal_1480[iParam0] = 16;
		}
	}
	else if (GET_TASK_STATUS(&(uLocal_1338[iParam0]), 11) == 1)
	{
	}
	else if (Function_234(GET_ACTORS_HORSE(&(uLocal_1338[iParam0]))))
	{
		if (Function_234(GET_RIDER(GET_ACTORS_HORSE(&(uLocal_1338[iParam0])))))
		{
			Function_217(&(uLocal_1338[iParam0]));
			Function_415(&(uLocal_1338[iParam0]));
		}
		else
		{
			Function_217(&(uLocal_1338[iParam0]));
			TASK_MOUNT(&(uLocal_1338[iParam0]), GET_ACTORS_HORSE(&(uLocal_1338[iParam0])), 0, 1, 4, 2147483647);
		}
	}
	else
	{
		Function_217(&(uLocal_1338[iParam0]));
		Function_415(&(uLocal_1338[iParam0]));
	}
	return;
}

int Function_415(int iParam0) //Position: 0x14B03 / 84739
{
	int iVar0;
	
	Function_337(&iParam0);
	iVar0 = LOCATE_ACTOR_OF_TYPE(Function_337(&iParam0), 30.0f, 23, 4294967295);
	if (Function_234(&iVar0))
	{
		if (IS_ACTOR_RIDEABLE(&iVar0))
		{
			if (GET_RIDER(&iVar0) == "")
			{
				Function_217(&iParam0);
				TASK_MOUNT(&iParam0, &iVar0, 0, 1, 4, 2147483647);
				SET_ACTORS_HORSE(&iParam0, &iVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_416(bool bParam0) //Position: 0x14B5D / 84829
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

void Function_417(bool bParam0) //Position: 0x14B6C / 84844
{
	var uVar0;
	
	Function_217(&(uLocal_1338[bParam0]));
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uLocal_1338[bParam0]), 0);
	AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[bParam0]), 1);
	bLocal_1311 = TASK_SEQUENCE_OPEN();
	GET_OBJECT_POSITION(&bLocal_6 + 2392[bParam0], &uVar0);
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_GO_TO_COORD(0, &uVar0, 2);
	TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&(uLocal_1338[bParam0]), bLocal_1311);
	TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
	iLocal_1480[bParam0] = 10;
	return;
}

void Function_418(bool bParam0) //Position: 0x14BED / 84973
{
	if (SQUAD_IS_VALID(&bLocal_6 + 616))
	{
		if (Function_234(&bLocal_1325))
		{
			AI_IGNORE_ACTOR(&bLocal_1325);
			Function_417(bParam0);
		}
		Function_419(&bLocal_6 + 616, &bLocal_1325, 2);
	}
	return;
}

void Function_419(var uParam0, bool bParam1, bool bParam2) //Position: 0x14C24 / 85028
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

bool Function_420() //Position: 0x14C70 / 85104
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_6 + 824) < 0)
	{
		return 1;
	}
	return 0;
}

bool Function_421(var uParam0, var uParam1, float fParam2) //Position: 0x14C86 / 85126
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = (GET_PATH_NUM_POINTS(&uParam1) - 1);
	GET_PATH_POINT(&uParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (Function_422(StackVal, &uParam0, Var0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_422(bool bParam0, struct<2> Param1) //Position: 0x14D1D / 85277
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_410(&bParam0);
		Var0 = Function_410(&bParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_423(bool bParam0, bool bParam1) //Position: 0x14D94 / 85396
{
	var uVar0;
	var uVar1;
	
	if (bParam1)
	{
		uVar1 = &bLocal_6 + 1592[5];
	}
	else
	{
		uVar0 = &bLocal_6 + 3496;
		uVar1 = &bLocal_6 + 1680[0];
	}
	if (&uLocal_1338[bParam0] == &bLocal_1334)
	{
		if (IS_ACTOR_IN_VOLUME(&(uLocal_1338[bParam0]), &uVar1))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &(uLocal_1338[bParam0]));
			CLEAR_ACTOR_MAX_SPEED(&(uLocal_1338[bParam0]));
			CLEAR_ACTOR_MIN_SPEED(&(uLocal_1338[bParam0]));
			if (bParam1)
			{
			}
			else
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&(uLocal_1338[bParam0]));
				Function_425(bParam0);
			}
		}
		else if (bParam1)
		{
		}
		else
		{
			if (IS_ACTOR_RIDING(&(uLocal_1338[bParam0])))
			{
				if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 72) != 1)
				{
					TASK_FOLLOW_OBJECT_ALONG_PATH(&(uLocal_1338[bParam0]), &Global_54076, &uVar0, 10.0f, 1, 2.0f);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&(uLocal_1338[bParam0]));
					iLocal_1477 = 1;
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&(uLocal_1338[bParam0]), &Global_54076, 25.0f, 10.0f, 20.0f);
				}
			}
			else
			{
				CLEAR_ACTOR_MAX_SPEED(&(uLocal_1338[bParam0]));
				CLEAR_ACTOR_MIN_SPEED(&(uLocal_1338[bParam0]));
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &(uLocal_1338[bParam0]));
				AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[bParam0]), 1);
				iLocal_1480[bParam0] = 22;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1592[8]))
			{
				if (iLocal_1477)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&(uLocal_1338[bParam0]));
					iLocal_1477 = 0;
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[22]))
			{
				if (!iLocal_1477)
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&(uLocal_1338[bParam0]), &Global_54076, 25.0f, 10.0f, 20.0f);
					iLocal_1477 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[22]))
			{
				if (iLocal_1477)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&(uLocal_1338[bParam0]));
					iLocal_1477 = 0;
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1592[8]))
			{
				if (!iLocal_1477)
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&(uLocal_1338[bParam0]), &Global_54076, 25.0f, 10.0f, 20.0f);
					iLocal_1477 = 1;
				}
			}
		}
	}
	else if (IS_ACTOR_IN_VOLUME(&(uLocal_1338[bParam0]), &uVar1))
	{
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &(uLocal_1338[bParam0]));
		if (bParam1)
		{
			Function_424(bParam0);
		}
		else
		{
			Function_425(bParam0);
		}
	}
	else if (IS_ACTOR_RIDING(&(uLocal_1338[bParam0])))
	{
		if (GET_TASK_STATUS(&(uLocal_1338[bParam0]), 72) == 1)
		{
		}
	}
	return;
}

void Function_424(int iParam0) //Position: 0x14FF5 / 86005
{
	var uVar0;
	bool bVar2;
	
	CLEAR_ACTOR_MAX_SPEED(&(uLocal_1338[iParam0]));
	CLEAR_ACTOR_MIN_SPEED(&(uLocal_1338[iParam0]));
	AI_SET_NAV_PATHFINDING_ENABLED(&(uLocal_1338[iParam0]), 1);
	bVar2 = RAND_FLOAT_RANGE(0.0f, 2.0f);
	GET_OBJECT_POSITION(&bLocal_6 + 2280[iParam0], &uVar0);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&(uLocal_1338[iParam0]));
	MEMORY_PREFER_RIDING(&(uLocal_1338[iParam0]), false);
	Function_217(&(uLocal_1338[iParam0]));
	bLocal_1311 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bVar2, 0, 0);
	TASK_DISMOUNT(false, 1);
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_GO_TO_COORD(0, &uVar0, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&(uLocal_1338[iParam0]), bLocal_1311);
	TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uLocal_1338[iParam0]), 0);
	iLocal_1480[iParam0] = 2;
	return;
}

void Function_425(int iParam0) //Position: 0x150A1 / 86177
{
	Function_217(&(uLocal_1338[iParam0]));
	bLocal_1311 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
	TASK_DISMOUNT(false, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(0, GET_COVER_LOCATION_FROM_OBJECT(&bLocal_6 + 3352), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&(uLocal_1338[iParam0]), bLocal_1311);
	TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
	Function_390(iParam0);
	iLocal_1480[iParam0] = 17;
	return;
}

void Function_426() //Position: 0x15101 / 86273
{
	int iVar0;
	var uVar1;
	int iVar5;
	
	if (Function_366(&iLocal_1114, 0,5f))
	{
		iVar0 = 0;
		Function_370(0);
		if (Function_234(&bLocal_1027))
		{
			if (!IS_ACTOR_MOUNTED(&bLocal_1027))
			{
				if (GET_TASK_STATUS(&bLocal_1027, 57) != 1)
				{
					TASK_WANDER_IN_VOLUME(&bLocal_1027, &bLocal_6 + 1680[19], -1.0f);
				}
			}
		}
		if (Function_234(&bLocal_1336))
		{
			if (!IS_ACTOR_MOUNTED(&bLocal_1336))
			{
				if (GET_TASK_STATUS(&bLocal_1336, 57) != 1)
				{
					TASK_WANDER_IN_VOLUME(&bLocal_1336, &bLocal_6 + 1680[19], -1.0f);
				}
			}
		}
		iVar5 = 0;
		while (iVar5 <= 6)
		{
			if (Function_234(&(vLocal_1530[iVar53])))
			{
				Function_427(&(vLocal_1530[iVar53]));
			}
			else
			{
				vLocal_1530[iVar53].f_8 = 12;
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			if (Function_234(&(vLocal_1568[iVar53])))
			{
				Function_427(&(vLocal_1568[iVar53]));
			}
			else
			{
				vLocal_1568[iVar53].f_8 = 12;
			}
			iVar5++;
		}
		if (iLocal_1417 == 0)
		{
			iVar5 = 0;
			while (iVar5 <= 5)
			{
				if (Function_234(&(uLocal_1421[iVar5])))
				{
					Function_217(&(uLocal_1421[iVar5]));
					if (iVar5 == 0)
					{
						bLocal_1311 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &bLocal_6 + 3504, 3, 1, 0, 1, false);
						TASK_FLEE_ACTOR(false, &Global_54076, 150.0f, -1.0f, 1, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(uLocal_1421[iVar5]), bLocal_1311);
						TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
					}
					else
					{
						Function_244(&bLocal_6 + 2984[0]);
						uVar1 = Function_244(&bLocal_6 + 2984[0]);
						bLocal_1311 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uVar1, 3);
						TASK_FLEE_ACTOR(false, &Global_54076, 150.0f, -1.0f, 1, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(uLocal_1421[iVar5]), bLocal_1311);
						TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
					}
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uLocal_1421[iVar5]), &bLocal_6 + 1680[6], 3, 1);
				}
				iVar5++;
			}
			iLocal_1417 = 1;
		}
		Function_303(&iLocal_1114);
	}
	return;
}

void Function_427(struct<13> Param0) //Position: 0x152D3 / 86739
{
	var uVar0;
	var uVar1;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	var uVar9;
	
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!Function_234(&(uLocal_1409[Param0.f_12])))
			{
				if (GET_TASK_STATUS(&Param0, 19) == 1)
				{
				}
				else
				{
					Function_356(&Param0);
					if (DECOR_CHECK_EXIST(&uLocal_891, "sepulcroshootout"))
					{
						Function_217(&Param0);
						TASK_KILL_CHAR(&Param0, &Global_54076);
						Param0.f_8 = 3;
					}
					else
					{
						Function_217(&Param0);
						TASK_STAND_STILL(&Param0, -1.0f, 0, 0);
						Param0.f_8 = 12;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_433(&Param0, &Param0 + 16) > 3.0f)
			{
				Function_217(&Param0);
				GET_OBJECT_POSITION(&Param0 + 16, &uVar1);
				uVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 2.0f, 140.0f, 100.0f, 7);
				if (IS_COVER_LOCATION_VALID(&uVar0))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(&Param0, &uVar0, -1.0f, 1086324736);
				}
				else
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(&Param0, &uVar1, 130.0f, -1.0f);
				}
				Param0.f_8 = 2;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_ALIVE(&(vLocal_1530[43])))
			{
				SET_ACTOR_VISION_XRAY(&bLocal_1334, true);
				MEMORY_ALLOW_SHOOTING(&bLocal_1334, true);
				Function_303(&(Local_1130[42]));
				iLocal_1417 = 0;
				Function_432(&vLocal_1530, 7);
			}
			break;
		
		case 0x00000006:
			if (!DECOR_CHECK_EXIST(&Param0, "CasaBlipped"))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0)))
				{
					Function_431(&Param0);
					MEMORY_ALLOW_SHOOTING(&Param0, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Param0, 0);
					ACTOR_PUT_WEAPON_IN_HAND(&Param0, 9, 0);
				}
				else
				{
					DECOR_SET_BOOL(&Param0, "CasaBlipped", true);
				}
			}
			else if (IS_ACTOR_ALIVE(&(uLocal_1421[4])))
			{
				if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&(uLocal_1421[4])))
				{
					SET_ACTOR_ONE_SHOT_DEATH(&(uLocal_1421[4]), true);
				}
				if (!IS_ACTOR_IN_VOLUME(&(uLocal_1421[4]), &bLocal_6 + 1680[9]))
				{
					if (GET_TASK_STATUS(&(uLocal_1421[4]), 64) != 1)
					{
						GET_OBJECT_POSITION(&bLocal_6 + 1680[9], &uVar3);
						TASK_GO_TO_COORD_NONSTOP(&(uLocal_1421[4]), &uVar3, 3, 3212836864);
					}
				}
				else
				{
					if (GET_TASK_STATUS(&(uLocal_1421[4]), 6) != 1)
					{
						TASK_STAND_STILL(&(uLocal_1421[4]), -1.0f, 0, 0);
					}
					Function_337(&Param0);
					Function_337(&(uLocal_1421[4]));
					Var5 = Vector(StackVal, StackVal, StackVal) - Vector(Function_337(&(uLocal_1421[4])), Function_337(&Param0), StackVal);
					Var7 = Var5;
					VNORMALIZE(&Var7);
					VSCALE(&Var7, 1,2f);
					Function_337(&(uLocal_1421[4]));
					Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Function_337(&(uLocal_1421[4])), StackVal);
					Function_430(StackVal, &(uLocal_1421[4]), Var5, &Param0, "head");
				}
			}
			else
			{
				SET_ACTOR_VISION_XRAY(&bLocal_1334, true);
				MEMORY_ALLOW_SHOOTING(&bLocal_1334, true);
				Function_303(&(Local_1130[42]));
				iLocal_1417 = 0;
				Function_432(&vLocal_1530, 7);
			}
			break;
		
		case 0x00000007:
			if (!DECOR_CHECK_EXIST(&Param0, "CasaBlipped"))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0)))
				{
					Function_431(&Param0);
					MEMORY_ALLOW_SHOOTING(&Param0, true);
				}
				else
				{
					DECOR_SET_BOOL(&Param0, "CasaBlipped", true);
				}
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[10]))
			{
				if (GET_TASK_STATUS(&Param0, 27) == 1 && GET_TASK_STATUS(&Param0, 43) == 1)
				{
					TASK_SHOOT_FROM_COVER(&Param0, &Global_54076, GET_COVER_LOCATION_FROM_OBJECT(&Param0 + 16), -1.0f, 1086324736);
				}
			}
			else if (Function_366(&iLocal_1118, 0,2f))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&Param0, &bLocal_6 + 1680[6], 2, true);
				Function_303(&iLocal_1118);
				TASK_KILL_CHAR(&Param0, &Global_54076);
				Param0.f_8 = 9;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_ALIVE(&bLocal_1334))
			{
				if (GET_TASK_STATUS(&Param0, 8) != 1)
				{
					GET_OBJECT_POSITION(&Param0 + 16, &uVar9);
					TASK_SHOOT_FROM_POSITION(&Param0, &bLocal_1334, &uVar9);
				}
			}
			else
			{
				Param0.f_8 = 7;
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[10]))
			{
				if (GET_TASK_STATUS(&bLocal_1027, 83) == 1 && GET_TASK_STATUS(&bLocal_1027, 50) == 1)
				{
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				}
			}
			else
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&Param0, &bLocal_6 + 1680[20], 2, true);
				TASK_KILL_CHAR(&Param0, &Global_54076);
				Param0.f_8 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_366(&iLocal_1118, 0,4f))
			{
				if (ACTORS_IN_RANGE(&Param0, &Global_54076, 40.0f))
				{
					if (!Function_428(19, &Global_54076, 1))
					{
						if (GET_TASK_STATUS(&Param0, 5) != 1)
						{
							TASK_KILL_CHAR(&Param0, &Global_54076);
						}
						Function_303(&iLocal_1118);
					}
				}
				else
				{
					if (GET_TASK_STATUS(&Param0, 5) != 1)
					{
						TASK_KILL_CHAR(&Param0, &Global_54076);
					}
					Function_303(&iLocal_1118);
				}
			}
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	return;
}

bool Function_428(int iParam0, bool bParam1, bool bParam2) //Position: 0x157BF / 87999
{
	int iVar0;
	struct<2> Var1;
	
	if (GET_OBJECT_TYPE(&bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, &bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bParam1)));
		}
		return 0;
	}
	if (&bParam2)
	{
		if (!IS_ITERATOR_VALID(&Global_39554))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(&bParam1, &Var1);
		Function_429(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 15);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar0)) == iParam0)
			{
				return 1;
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
		Function_429(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, &Global_10996);
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 24);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))) == iParam0)
				{
					return 1;
				}
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
	}
	return 0;
}

int Function_429(int iParam0) //Position: 0x1594F / 88399
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_85());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_85());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_430(var uParam0, struct<2> Param1, var uParam3, var uParam4) //Position: 0x15985 / 88453
{
	struct<2> Var0;
	var uVar2;
	
	if (!IS_STRING_VALID(&uParam4))
	{
		uParam4 = "spine03";
	}
	GET_OBJECT_NAMED_BONE_POSITION(&uParam0, &uParam4, &Var0);
	PRINTSTRING("fake shoot: origin = ");
	PRINTVECTOR(Param1);
	PRINTNL();
	PRINTSTRING("taget point = ");
	PRINTVECTOR(Var0);
	PRINTNL();
	uVar2 = &uParam3;
	if (!IS_ACTOR_VALID(&uVar2))
	{
		uVar2 = &Global_54076;
	}
	FIRE_PROJECTILE(&uVar2, "base_pistol", 0,0001f, &Param1, &Var0);
}

void Function_431(int iParam0) //Position: 0x15A27 / 88615
{
	if (!DECOR_CHECK_EXIST(&iParam0, "CasaBlipped"))
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
		{
			ADD_BLIP_FOR_ACTOR(&iParam0, 322, 0, 2, 0);
			SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(&iParam0), bLocal_890);
			DECOR_SET_BOOL(&iParam0, "CasaBlipped", true);
		}
	}
	return;
}

void Function_432(vector3[] vParam0, int iParam1) //Position: 0x15A81 / 88705
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= vParam0)
	{
		vParam0[iVar03].z = iParam1;
		iVar0++;
	}
	return;
}

float Function_433(bool bParam0, bool bParam1) //Position: 0x15AA7 / 88743
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_410(&bParam0);
			Var0 = Function_410(&bParam0);
			Function_434(&bParam1);
			Var2 = Function_434(&bParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_434(bool bParam0) //Position: 0x15B49 / 88905
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

void Function_435(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6, bool bParam7) //Position: 0x15BB7 / 89015
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) <= 0.0f && GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) >= GET_CURRENT_GAME_TIME())
	{
		fVar2 = (GET_CURRENT_GAME_TIME() - GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)));
	}
	else
	{
		fVar1 = (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(GET_PLAYER_ACTOR(0)));
		fVar0 = (GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(GET_PLAYER_ACTOR(0)));
		if (fVar1 > fVar0)
		{
			fVar2 = fVar1;
		}
		else
		{
			fVar2 = fVar0;
		}
	}
	if (fVar2 < fParam2)
	{
		fVar4 = ((fVar2 - fParam2) / fParam3);
		if (bParam6)
		{
			fVar3 = (fParam4 - fVar4);
		}
		else
		{
			fVar3 = (fParam5 + fVar4);
		}
		if (fVar3 < fParam4)
		{
			fVar3 = fParam4;
		}
		else if (fVar3 > fParam5)
		{
			fVar3 = fParam5;
		}
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(iParam0, iParam1, fVar3);
		if (!bParam7)
		{
			SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(iParam1, iParam0, fVar3);
		}
	}
}

int Function_436(struct<2> Param0, int iParam2, var uParam3, char* cParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x15C78 / 89208
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&bParam1) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
	{
		Function_253(&cParam4);
		iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &bParam1))
	{
		if (!Function_442(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_365(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_441(64);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_440(&iParam7, 0, 4294967295, 0, &bParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_440(&iParam8, 0, 4294967295, 0, &bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bParam1)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&bParam1, &iParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_442(64))
	{
		Function_439(64);
		if (!Function_438())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_437();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bParam1)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8))) && DECOR_CHECK_EXIST(&bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bParam1));
				DECOR_REMOVE(&bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_440(&iParam7, 1, 4294967295, 0, &bParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_440(&iParam8, 1, 4294967295, 0, &bParam1);
			}
		}
	}
	return 0;
}

void Function_437() //Position: 0x15E13 / 89619
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

bool Function_438() //Position: 0x15E41 / 89665
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

void Function_439(bool bParam0) //Position: 0x15E88 / 89736
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_27(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_440(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x15EEF / 89839
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

void Function_441(bool bParam0) //Position: 0x15FAA / 90026
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_108(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_442(bool bParam0) //Position: 0x16011 / 90129
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

void Function_443() //Position: 0x1605B / 90203
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_906 < 4 && iLocal_906 > 105)
	{
		Function_492();
		if (!iLocal_1317)
		{
			if (Function_234(&Global_54076))
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					Function_367(&uLocal_932, 6, 0, 4294967295, 4294967295);
					iLocal_1317 = 1;
				}
			}
		}
	}
	switch (iLocal_906)
	{
		case 0x00000000:
			Function_402(0);
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			iLocal_1316 = Function_342();
			Function_491(&Global_119937, 128);
			if (SQUAD_IS_VALID(&bLocal_6 + 824))
			{
				Function_490(&bLocal_6 + 824);
				Function_489(&bLocal_6 + 824);
			}
			if (Function_234(&bLocal_1027))
			{
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
				Function_338(&bLocal_1027, &bLocal_6 + 2336[3], 1, 1, 1);
			}
			else
			{
				bLocal_1027 = Function_318(1, 1, 0, 0, 0, 0, 1, 0);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
				Function_338(&bLocal_1027, &bLocal_6 + 2336[3], 1, 1, 1);
			}
			if (!SQUAD_IS_VALID(&bLocal_6 + 856))
			{
				Function_487();
			}
			if (Function_234(&bLocal_1325))
			{
				if (!iLocal_1030[1])
				{
					Function_338(&bLocal_1325, &bLocal_6 + 2336[2], 1, 1, 1);
					Function_338(&Global_54076, &bLocal_6 + 2336[0], 1, 1, 1);
				}
				if (IS_ACTOR_HOGTIED(&bLocal_1325))
				{
					FREE_FROM_HOGTIE(&bLocal_1325);
				}
				DELETE_ACCESSORY("WRIST_BIND", &bLocal_1325);
				DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1325);
				AI_IGNORE_ACTOR(&bLocal_1325);
				SET_ACTOR_HEALTH(&bLocal_1325, GET_ACTOR_MAX_HEALTH(&bLocal_1325));
				SET_CRIPPLE_FLAG(&bLocal_1325, false);
				TASK_STAND_STILL(&bLocal_1325, -1.0f, 0, 0);
				DECOR_SET_INT(&bLocal_1325, "iAdditionalMoney", 100);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1325);
				if (!SQUAD_IS_VALID(&bLocal_6 + 616))
				{
					Function_482(1);
				}
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					if (Function_234(&(uLocal_1338[iVar0])))
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uLocal_1338[iVar0]), 0);
						MEMORY_CLEAR_ALL(&(uLocal_1338[iVar0]));
						Function_217(&(uLocal_1338[iVar0]));
						TASK_STAND_STILL(&(uLocal_1338[iVar0]), -1.0f, 0, 0);
						Function_338(&(uLocal_1338[iVar0]), &bLocal_6 + 2392[iVar0], 1, 1, 1);
						SET_ACTOR_POSTURE(&(uLocal_1338[iVar0]), 0);
						Function_481(&(uLocal_1338[iVar0]), 1, 1);
						MEMORY_PREFER_RIDING(&(uLocal_1338[iVar0]), false);
						if (Function_234(&bLocal_1325))
						{
							Function_217(&(uLocal_1338[iVar0]));
							TASK_POINT_GUN_AT_OBJECT(&(uLocal_1338[iVar0]), &bLocal_1325, -1.0f, 1);
							TASK_PRIORITY_SET(&(uLocal_1338[iVar0]), true);
						}
					}
					iVar0++;
				}
			}
			if (Function_234(&bLocal_1334))
			{
				SET_ACTOR_IS_COMPANION(&bLocal_1334, 0);
				MEMORY_PREFER_RIDING(&bLocal_1334, false);
				if (Function_234(&bLocal_1336))
				{
					Function_338(&bLocal_1336, &bLocal_6 + 2448[4], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1336, -1.0f, 0, 0);
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_1336, 0);
					SET_ACTORS_HORSE(&bLocal_1334, &bLocal_1336);
					SET_ACTOR_CAN_BE_TARGETED(&bLocal_1336, false);
				}
				else
				{
					Function_480();
					bLocal_1336 = &bLocal_6 + 624[42];
					bLocal_1336 = &bLocal_1336;
					SET_ACTORS_HORSE(&bLocal_1334, &bLocal_1336);
					Function_338(&bLocal_1336, &bLocal_6 + 2448[4], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1336, -1.0f, 0, 0);
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_1336, 0);
					SET_ACTOR_CAN_BE_TARGETED(&bLocal_1336, false);
				}
			}
			if (SQUAD_IS_VALID(&bLocal_6 + 616))
			{
				Function_381(&(Local_1211[115]), &bLocal_6 + 616, "RebelSoldier", 1, 0x5f5e100, 1);
				Function_377(&(Local_1211[115]), 2);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(12);
			Function_244(&bLocal_6 + 2336[0]);
			iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2336[0]), 0, 1, 1);
			if (iLocal_1030[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_478();
				Function_244(&bLocal_6 + 2336[0]);
				iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2336[0]), 0, 1, 1);
				if (!Function_340(iLocal_1029))
				{
					Function_339(&Local_893);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_906 = 1;
			}
			else
			{
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_340(iLocal_1029) || iLocal_1029 != 4294967295))
			{
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, Local_893, bLocal_905))
			{
				FIRE_STOP_ALL_FIRES();
				iLocal_906 = 3;
			}
			else
			{
				Function_313();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_906 = 4;
			}
			Function_259(bLocal_905);
			Function_391(StackVal, Function_259(bLocal_905), bLocal_905, Global_46746[2], Function_261(bLocal_905), 0);
			break;
		
		case 0x00000003:
			if (Function_291("$/cutscene/Rebel02_CS03/Rebel02_CS03", &iLocal_907, &Local_893, &bLocal_905, 63262, 63069, 98325, 60010, 59538, 59531, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_906 = 4;
			}
			break;
		
		case 0x00000004:
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 1.0f);
			if (IS_ACTOR_VALID(&bLocal_6 + 864[02]))
			{
				TASK_BIRD_SOAR(&bLocal_6 + 864[02], -1.0f, 1106247680);
			}
			if (SQUAD_IS_VALID(&bLocal_6 + 616))
			{
				Function_389(&bLocal_6 + 616);
				Function_474(&bLocal_6 + 616, 1);
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (Function_234(&(uLocal_1338[iVar1])))
					{
						Function_481(&(uLocal_1338[iVar1]), 0, 1);
					}
					iVar1++;
				}
			}
			Function_387();
			Function_195(1);
			Function_472(1);
			Function_472(256);
			Function_367(&uLocal_932, 8, 0, 4294967295, 4294967295);
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 5;
			break;
		
		case 0x00000005:
			iLocal_1156 = 0;
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			if (Function_234(&Global_54076))
			{
				Function_217(&Global_54076);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 6;
			if (Function_234(&Global_54076))
			{
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
				ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			}
			Function_367(&uLocal_932, 0, 0, 4294967295, 4294967295);
			iLocal_1317 = 0;
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_234(&bLocal_1325))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1325)))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_1325, 393, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1325), GET_ACTOR_ENUM_STRING(&bLocal_1325));
				}
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_471();
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_1319 = 0;
				Function_166("Rebel02_help_assasinate", 0x41200000, 1, 0, 2, 1, 0);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 0, -100.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 1, -100.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 2, -100.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 5, 0.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 6, 0.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 7, 0.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&bLocal_1325, 8, 0.0f);
				CLEAR_LAST_HIT(&bLocal_1325);
				iLocal_906 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_234(&bLocal_1325))
			{
				iVar2 = 8;
				if (GET_LAST_HIT_ZONE(&bLocal_1325, &iVar2))
				{
					if (iVar2 != 0 || iVar2 != 2)
					{
						SET_ACTOR_HEALTH(&bLocal_1325, 0.0f);
						SET_ACTOR_ONE_SHOT_DEATH(&bLocal_1325, true);
					}
				}
				if (Function_468(&bLocal_1325, &Global_54076, 10.0f))
				{
					if (Function_366(&iLocal_1098, 9.0f))
					{
						if (iLocal_1319)
						{
							Function_471();
							iLocal_1319 = 0;
						}
						else
						{
							Function_467();
							iLocal_1319 = 1;
						}
						Function_303(&iLocal_1098);
					}
				}
				else
				{
					Function_466();
					SET_ACTOR_ONE_SHOT_DEATH(&bLocal_1325, true);
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					iLocal_906 = 8;
				}
			}
			else
			{
				if (Function_465(&bLocal_1325, &Global_54076))
				{
					Function_464();
					bLocal_1323 = true;
					Function_164(&Global_119937, 128);
				}
				SET_ACTOR_ONE_SHOT_DEATH(&bLocal_1325, true);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_234(&bLocal_1325))
			{
				if (Function_366(&iLocal_1098, 4.0f))
				{
					Function_462();
					Function_303(&iLocal_1098);
				}
			}
			else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_1323)
				{
					Function_461();
				}
				else
				{
					Function_460();
				}
				SET_MOVER_FROZEN(&bLocal_1325, false);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_459();
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_364("Rebel02_obj_RideCasa");
				iLocal_1480[4] = 22;
				fLocal_1314 = Function_458(&uLocal_891, Function_85(), &bLocal_6 + 1680[14], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
				ADD_BLIP_FOR_OBJECT(&fLocal_1314, 330, 0f, 2, 0);
				Function_455(&bLocal_6 + 1680[14]);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				Function_191(Global_46894[2]);
				iLocal_1319 = 0;
				iLocal_1478 = 11;
				iLocal_906 = 11;
				MEMORY_PREFER_RIDING(&bLocal_1334, true);
				SET_FACTIONS_STATUS_TWO_WAY(20, 19, 2);
			}
			break;
		
		case 0x0000000B:
			Function_450();
			Function_436(&iLocal_1152, &bLocal_6 + 1680[12], &bLocal_6 + 1680[13], "Rebel02_return_casapath", "Rebel02_fail_casapath", &bLocal_920, 0, 0, 0, 330, 1);
			if (Function_449(&Global_54076, &bLocal_6 + 1680[6], 150.0f))
			{
				if (!SQUAD_IS_VALID(&bLocal_6 + 1080))
				{
					Function_448(&bLocal_6 + 1680[6]);
					if (!STREAMING_ARE_BOUNDS_LOADED(Function_448(&bLocal_6 + 1680[6]), 100.0f))
					{
						Function_448(&bLocal_6 + 1680[6]);
						STREAMING_LOAD_BOUNDS(Function_448(&bLocal_6 + 1680[6]), 100.0f, 1);
					}
					else if (Global_43789 == Global_46894[2])
					{
						if (IS_DOOR_VALID(Function_371("casaMadrugada", "whorehouse", 1)) && IS_DOOR_VALID(Function_371("casaMadrugada", "cantina", 1)))
						{
							Function_369();
						}
					}
				}
				else
				{
					Function_426();
				}
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1680[6]))
				{
					Function_238();
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					Function_63();
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						Function_446(&Global_54076, 0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						if (Function_234(GET_MOUNT(&Global_54076)))
						{
							bLocal_1027 = GET_MOUNT(&Global_54076);
							Function_217(&bLocal_1027);
							TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
							Function_217(&Global_54076);
							TASK_DISMOUNT(&Global_54076, 1);
						}
						iLocal_906 = 12;
					}
					else
					{
						Function_303(&iLocal_1098);
						Function_303(&iLocal_1106);
						Function_63();
						iLocal_906 = 13;
					}
				}
				else if (Function_445())
				{
					Function_238();
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					Function_63();
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						Function_446(&Global_54076, 0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						if (Function_234(GET_MOUNT(&Global_54076)))
						{
							bLocal_1027 = GET_MOUNT(&Global_54076);
							Function_217(&bLocal_1027);
							TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
							Function_217(&Global_54076);
							TASK_DISMOUNT(&Global_54076, 1);
						}
						iLocal_906 = 12;
					}
					else
					{
						Function_303(&iLocal_1098);
						Function_303(&iLocal_1106);
						Function_63();
						iLocal_906 = 13;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (GET_TASK_STATUS(&Global_54076, 12) != 1)
				{
					TASK_DISMOUNT(&Global_54076, 1);
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (Function_234(&bLocal_1027))
				{
					Function_217(&bLocal_1027);
					TASK_WANDER_IN_VOLUME(&bLocal_1027, &bLocal_6 + 1680[19], -1.0f);
				}
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				Function_63();
				iLocal_906 = 13;
			}
			break;
		
		case 0x0000000D:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			if (Function_234(&bLocal_1334))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 20.0f))
				{
					Function_444();
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					Function_63();
					iLocal_906 = 106;
				}
				else
				{
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					Function_63();
					iLocal_906 = 106;
				}
			}
			else
			{
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				Function_63();
				iLocal_906 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1030[2] = 1;
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			bLocal_905 = 3;
			iLocal_906 = 0;
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&bLocal_6 + 3328)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&bLocal_6 + 3328), false);
			}
			if (Function_234(&bLocal_1334))
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1334);
			}
			STREAMING_UNLOAD_BOUNDS();
			break;
	}
	return;
}

void Function_444() //Position: 0x16CA3 / 93347
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_CasaQuiet_v1_AA", "Rebel02_CasaQuiet_v1_AA", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_CasaQuiet_v1_AB", "Rebel02_CasaQuiet_v1_AB", false, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_445() //Position: 0x16D38 / 93496
{
	if (IS_OBJECT_VALID(&fLocal_1314))
	{
		if (GATEWAY_UPDATE(&fLocal_1314))
		{
			return 1;
		}
	}
	return 0;
}

void Function_446(int iParam0, bool bParam1) //Position: 0x16D55 / 93525
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_RIDING(&iParam0))
	{
		uVar0 = GET_MOUNT(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&iParam0))
	{
		iVar1 = GET_VEHICLE(&iParam0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			STOP_VEHICLE(&iVar1);
		}
	}
	else if (!&bParam1 || Function_447(&iParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&iParam0, 1);
	}
	return;
}

float Function_447(var uParam0, bool bParam1) //Position: 0x16DBF / 93631
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

struct<8> Function_448(int iParam0) //Position: 0x16DE0 / 93664
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_449(var uParam0, int iParam1, float fParam2) //Position: 0x16DF2 / 93682
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_448(&iParam1);
		Function_410(&uParam0);
		if (VDIST(Function_448(&iParam1), Function_410(&uParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

void Function_450() //Position: 0x16E7F / 93823
{
	switch (iLocal_1478)
	{
		case 0x0000000B:
			if (Function_366(&iLocal_1106, 5.0f))
			{
				iLocal_1478 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_167())
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 15.0f))
				{
					if (bLocal_1323)
					{
						Function_454();
					}
					else
					{
						Function_453();
					}
					Function_367(&uLocal_932, 21, 0, 4294967295, 4294967295);
					iLocal_1478 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 40.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else
			{
				Function_303(&iLocal_1106);
				iLocal_1478 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_366(&iLocal_1106, 10.0f))
			{
				iLocal_1478 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!Function_167())
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 15.0f))
				{
					Function_452();
					iLocal_1478 = 16;
				}
			}
			break;
		
		case 0x00000010:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 40.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else
			{
				Function_303(&iLocal_1106);
				iLocal_1478 = 17;
			}
			break;
		
		case 0x00000011:
			break;
		
		default:
			LOG_ERROR("invalid stage three m_eConvState");
			break;
	}
	Function_451(&bLocal_1334, "Rebel02_RebelJonThrownOffHors", "Rebel02_RebelJonShotsRand", "Rebel02_RebelJonGetsOffHors", "Rebel02_RebelJonNoGetBakOn", "Rebel02_RebelJonStopsHors", "Rebel02_RebelJon2FarAhead", "Rebel02_RebelJon2FarBehind", "Rebel02_RebelJonRidesWrong");
	return;
}

void Function_451(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, bool bParam8) //Position: 0x170BC / 94396
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar11;
	float fVar13;
	float fVar14;
	var uVar15;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = 0;
	iVar4 = 0;
	uVar5 = "";
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	if (!Function_300(&iLocal_1110))
	{
		Function_303(&iLocal_1110);
	}
	else if (ACTORS_IN_RANGE(&Global_54076, &iParam0, 35.0f))
	{
		if (Function_366(&iLocal_1110, 5.0f))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam2, &uParam2, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
				}
			}
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam1, &uParam1, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
				}
				else if (!iLocal_1321)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam3, &uParam3, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
					iLocal_1321 = 1;
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam4, &uParam4, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
				}
			}
			else
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					iLocal_1321 = 0;
					if (Function_447(GET_MOUNT(&Global_54076), 0) > 0,5f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam5, &uParam5, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
						Function_303(&iLocal_1110);
					}
				}
				Function_337(&Global_54076);
				uVar9 = Function_337(&Global_54076);
				Function_337(&iParam0);
				uVar11 = Function_337(&iParam0);
				ESTIMATE_DISTANCE_ALONG_PATH(&bLocal_6 + 3432, &uVar11, &fVar14, &uVar15);
				ESTIMATE_DISTANCE_ALONG_PATH(&bLocal_6 + 3432, &uVar9, &fVar13, &uVar15);
				if ((fVar13 - fVar14) < 20.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam6, &uParam6, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
				}
				else if ((fVar13 - fVar14) > -27.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam7, &uParam7, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
				}
				else if (!ACTORS_IN_RANGE(&Global_54076, &iParam0, 30.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &bParam8, &bParam8, iVar0, iVar1, iVar2, 3, 1, iVar4, &uVar5, iVar6, iVar7, iVar8);
					Function_303(&iLocal_1110);
				}
			}
		}
	}
}

void Function_452() //Position: 0x1731C / 95004
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AA", "Rebel02_RebelBantMad_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v2_AB", "Rebel02_RebelBantMad_v2_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AC", "Rebel02_RebelBantMad_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v2_AD", "Rebel02_RebelBantMad_v2_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AE1", "Rebel02_RebelBantMad_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AE2", "Rebel02_RebelBantMad_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v2_AF", "Rebel02_RebelBantMad_v2_AF", 4, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453() //Position: 0x17510 / 95504
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AA", "Rebel02_BantMadNoKill_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_BantMadNoKill_v1_AB", "Rebel02_BantMadNoKill_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AC", "Rebel02_BantMadNoKill_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_BantMadNoKill_v1_AD", "Rebel02_BantMadNoKill_v1_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AE1", "Rebel02_BantMadNoKill_v1_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AE2", "Rebel02_BantMadNoKill_v1_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_BantMadNoKill_v1_AF", "Rebel02_BantMadNoKill_v1_AF", 4, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_454() //Position: 0x17712 / 96018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AA", "Rebel02_RebelBantMad_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v1_AB", "Rebel02_RebelBantMad_v1_AB", 4, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AC", "Rebel02_RebelBantMad_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v1_AD", "Rebel02_RebelBantMad_v1_AD", 4, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AE1", "Rebel02_RebelBantMad_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AE2", "Rebel02_RebelBantMad_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v1_AF", "Rebel02_RebelBantMad_v1_AF", 4, 1, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_455(int iParam0) //Position: 0x17906 / 96518
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	Function_456(StackVal, Var0, 0, 393264, 1);
	return;
}

void Function_456(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x17921 / 96545
{
	(&Global_42834 + 32) = Param0;
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
		Function_457(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_457(bool bParam0) //Position: 0x179E2 / 96738
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&bParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &bParam0);
		CLEAN_OBJECTSET(&bParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

var Function_458(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9) //Position: 0x17A2B / 96811
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &iParam6, &iParam7, &iParam8, &iParam9, 1);
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
		DECOR_SET_BOOL(&uVar0, "voldestroy", &iParam8);
	}
	return &uVar0;
}

void Function_459() //Position: 0x17ABC / 96956
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelSaysLesGo", "Rebel02_RebelSaysLesGo", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x17B12 / 97042
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelJonKillsComen", "Rebel02_RebelJonKillsComen", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x17B70 / 97136
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelJonKills", "Rebel02_RebelJonKills", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x17BC4 / 97220
{
	int iVar0;
	var uVar1;
	var uVar3;
	
	if (Function_234(&bLocal_1325))
	{
		if (SQUAD_IS_VALID(&bLocal_6 + 856))
		{
			SQUAD_SET_FACTION(&bLocal_6 + 856, 19);
		}
		if (SQUAD_IS_VALID(&bLocal_6 + 616))
		{
			Function_419(&bLocal_6 + 616, &bLocal_1325, 4);
		}
		AI_STOP_IGNORING_ACTORS();
		AI_CLEAR_DONT_HARM_ACTOR(&bLocal_1325);
		GET_POSITION(&bLocal_1325, &uVar3);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Function_234(&(uLocal_1338[iVar0])))
			{
				MEMORY_ALLOW_SHOOTING(&(uLocal_1338[iVar0]), true);
				AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&(uLocal_1338[iVar0]), 1);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(uLocal_1338[iVar0]), 0);
				Function_217(&(uLocal_1338[iVar0]));
				GET_POSITION(&(uLocal_1338[iVar0]), &uVar1);
				bLocal_1311 = TASK_SEQUENCE_OPEN();
				TASK_POINT_GUN_AT_OBJECT(0, &bLocal_1325, RAND_FLOAT_RANGE(0,1f, 0,25f), 1);
				if (&uLocal_1338[iVar0] == &bLocal_1334)
				{
					AI_SHOOT_TARGET_SET_BONE(&(uLocal_1338[iVar0]), &bLocal_1325, "neck");
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uLocal_1338[iVar0]), 31, -1.0f);
					TASK_SHOOT_FROM_POSITION(&(uLocal_1338[iVar0]), &bLocal_1325, &uVar1);
				}
				else
				{
					Function_463(&(uLocal_1338[iVar0]), 200.0f, -1.0f, -1.0f);
					AI_SHOOT_TARGET_SET_BONE(&(uLocal_1338[iVar0]), &bLocal_1325, "neck");
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uLocal_1338[iVar0]), 31, -1.0f);
					TASK_SHOOT_FROM_POSITION(&(uLocal_1338[iVar0]), &bLocal_1325, &uVar1);
					TASK_POINT_GUN_AT_OBJECT(0, &bLocal_1325, RAND_FLOAT_RANGE(0,5f, 1.0f), 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uLocal_1338[iVar0]), bLocal_1311);
				TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
			}
			iVar0++;
		}
	}
	return;
}

void Function_463(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x17D48 / 97608
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

void Function_464() //Position: 0x17D99 / 97689
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_PlayerKillsDesanta", "Rebel02_PlayerKillsDesanta", 4, 1, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_465(int iParam0, int iParam1) //Position: 0x17DF7 / 97783
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

void Function_466() //Position: 0x17E2D / 97837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_PlayaNoKillDeSanta", "Rebel02_PlayaNoKillDeSanta", 4, 1, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467() //Position: 0x17E8B / 97931
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelWait4Kill", "Rebel02_RebelWait4Kill", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_468(bool bParam0, var uParam1, float fParam2) //Position: 0x17EE1 / 98017
{
	float fVar0;
	
	fVar0 = Function_469(&bParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_469(var uParam0, int iParam1) //Position: 0x17F00 / 98048
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_470(&uVar0, &uVar2);
	return iVar4;
}

var Function_470(struct<2> Param0) //Position: 0x17F21 / 98081
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_471() //Position: 0x17F40 / 98112
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_Pleads4Life", "Rebel02_Pleads4Life", false, 1, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_472(int iParam0) //Position: 0x17F8F / 98191
{
	Function_473(&Global_43580, iParam0);
	return;
}

void Function_473(var uParam0, int iParam1) //Position: 0x17F9D / 98205
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_474(var uParam0, bool bParam1) //Position: 0x17FC5 / 98245
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

int Function_475() //Position: 0x18015 / 98325
{
	switch (bLocal_905)
	{
		case 0x00000001:
			if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(&bLocal_1325))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1325);
			}
			if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(&bLocal_6 + 896[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_6 + 896[02]);
				LOG_ERROR("hide Gravedigger0 - SID_SECOND_STAGE");
			}
			switch (iLocal_1333)
			{
				case 0x00000000:
					if (IS_ACTOR_VALID(&bLocal_6 + 864[02]))
					{
						TASK_USE_GRINGO(&bLocal_6 + 864[02], GET_GRINGO_FROM_OBJECT(&bLocal_6 + 3344), "UseCase1", true, 1);
						iLocal_1333 = 1;
					}
					break;
				
				case 0x00000001:
					return 1;
					break;
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_478();
			if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(&bLocal_1325))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1325);
				LOG_ERROR("hide De Santa - SID_THIRD_STAGE");
			}
			return 1;
			break;
		
		default:
			LOG_ERROR("MISSING STAGE IN CUTSCENE_CUSTOM_FIRSTSHOT");
			Function_325();
			return 0;
			break;
	}
	return 0;
}

bool Function_476(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x18159 / 98649
{
	if (Function_477(&iParam0) == iParam6 || Function_398())
	{
		return 1;
	}
	return 0;
}

int Function_477(int iParam0) //Position: 0x18178 / 98680
{
	if (Function_305(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_478() //Position: 0x18191 / 98705
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (Function_234(&bLocal_1325))
	{
		if (GET_ACTOR_ENUM(&bLocal_1325) != 557)
		{
			GET_OBJECT_POSITION(&bLocal_1325, &Var0);
			GET_OBJECT_ORIENTATION(&bLocal_1325, &Var2);
			uVar4 = GET_OBJECT_OWNER(&bLocal_1325);
			DESTROY_ACTOR(&bLocal_1325);
			bLocal_1325 = CREATE_ACTOR_IN_LAYOUT(&uVar4, "DeSanta0Beaten", 557, Var0, Var2);
			TASK_STAND_STILL(&bLocal_1325, -1.0f, 0, 0);
			SET_ACTOR_PROOF(&bLocal_1325, 4096);
			SET_ALLOW_EXECUTE(&bLocal_1325, 0);
			MEMORY_REPORT_POSITION_AUTO(&bLocal_1325, &Global_54076, 1);
			AI_GOAL_LOOK_AT_ACTOR(&bLocal_1325, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
			FORCE_LOOK_AT_ACTOR(&bLocal_1325, &Global_54076, -1.0f);
			SET_AMBIENT_VOICE_NAME(&bLocal_1325, "COMPANION_MEXICANHENCHMAN");
			Function_479(&bLocal_1325);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1325);
		}
	}
	return;
}

void Function_479(var uParam0) //Position: 0x1827A / 98938
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&uParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_480() //Position: 0x182A0 / 98976
{
	*(&bLocal_6 + 712) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "SepulcroRebelHorses"));
	*(&bLocal_6 + 624[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelHorse0", 984, Vector(-2275,753f, 21,83818f, 4944,088f), Vector(0.0f, -41,25875f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 624[02], &bLocal_6 + 712);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 624[02], false);
	ACCESSORIZE_HORSE(&bLocal_6 + 624[02], 3);
	TASK_STAND_STILL(&bLocal_6 + 624[02], -1.0f, 0, 0);
	*(&bLocal_6 + 624[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelHorse1", 990, Vector(-2279,212f, 21,83815f, 4943,137f), Vector(0.0f, -47,18135f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 624[12], &bLocal_6 + 712);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 624[12], false);
	ACCESSORIZE_HORSE(&bLocal_6 + 624[12], 3);
	TASK_STAND_STILL(&bLocal_6 + 624[12], -1.0f, 0, 0);
	*(&bLocal_6 + 624[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelHorse2", 988, Vector(-2278,378f, 21,83815f, 4950,349f), Vector(0.0f, -36,06071f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 624[22], &bLocal_6 + 712);
	ACCESSORIZE_HORSE(&bLocal_6 + 624[22], 3);
	TASK_STAND_STILL(&bLocal_6 + 624[22], -1.0f, 0, 0);
	*(&bLocal_6 + 624[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelHorse3", 977, Vector(-2284,309f, 21,83815f, 4947,354f), Vector(0.0f, -61,27039f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 624[32], &bLocal_6 + 712);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 624[32], false);
	ACCESSORIZE_HORSE(&bLocal_6 + 624[32], 3);
	TASK_STAND_STILL(&bLocal_6 + 624[32], -1.0f, 0, 0);
	*(&bLocal_6 + 624[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DialogueRebelHorse0", 986, Vector(-2280.0f, 21.0f, 4948.0f), Vector(0.0f, -31,58469f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 624[42], &bLocal_6 + 712);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 624[42], false);
	ACCESSORIZE_HORSE(&bLocal_6 + 624[42], 3);
	TASK_STAND_STILL(&bLocal_6 + 624[42], -1.0f, 0, 0);
	return;
}

void Function_481(var uParam0, bool bParam1, bool bParam2) //Position: 0x1850A / 99594
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
		SET_ACTOR_INVULNERABILITY(&uParam0, true);
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
		SET_ACTOR_INVULNERABILITY(&uParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

void Function_482(bool bParam0) //Position: 0x185BA / 99770
{
	bool bVar0;
	
	bVar0 = false;
	Function_486();
	bVar0 = false;
	while (bVar0 <= 5)
	{
		uLocal_1338[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 616, bVar0);
		if (Function_234(&(uLocal_1338[bVar0])))
		{
			SET_ACTOR_VISION_XRAY(&(uLocal_1338[bVar0]), false);
			SET_ACTOR_CAN_BE_TARGETED(&(uLocal_1338[bVar0]), false);
			Function_485(&(uLocal_1338[bVar0]));
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uLocal_1338[bVar0]), 0);
		}
		iLocal_1480[bVar0] = 23;
		bVar0++;
	}
	bLocal_1334 = &uLocal_1338[4];
	if (Function_234(&bLocal_1334))
	{
		SET_ACTOR_IS_COMPANION(&bLocal_1334, 1);
	}
	if (bParam0)
	{
		Function_480();
		bVar0 = false;
		while (bVar0 <= 5)
		{
			uLocal_1350[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 712, bVar0);
			bVar0++;
		}
		Function_484();
		Function_483();
		bLocal_1336 = &uLocal_1350[4];
	}
	SQUAD_SET_FACTION(&bLocal_6 + 616, 20);
	Function_474(&bLocal_6 + 616, 0);
	Function_381(&(Local_1211[115]), &bLocal_6 + 616, "RebelSoldier", 1, 0x5f5e100, 1);
	Function_377(&(Local_1211[115]), 2);
	return;
}

void Function_483() //Position: 0x186D2 / 100050
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Function_234(&(uLocal_1338[iVar0])))
		{
			if (Function_234(&(uLocal_1350[iVar0])))
			{
				SET_ACTORS_HORSE(&(uLocal_1338[iVar0]), &(uLocal_1350[iVar0]));
				SET_ACTOR_CAN_BE_TARGETED(&(uLocal_1350[iVar0]), false);
			}
		}
		iVar0++;
	}
	return;
}

void Function_484() //Position: 0x18728 / 100136
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Function_217(&(uLocal_1350[iVar0]));
		TASK_STAND_STILL(&(uLocal_1350[iVar0]), -1.0f, 0, 0);
		iVar0++;
	}
	return;
}

void Function_485(int iParam0) //Position: 0x1875C / 100188
{
	if (Function_234(&iParam0))
	{
		SET_ACTOR_VISION_XRAY(&iParam0, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 75.0f);
		AI_SET_BURST_DURATION(&iParam0, 5.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,2f, 0,1f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,05f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, 3.0f);
	}
	return;
}

void Function_486() //Position: 0x187B8 / 100280
{
	*(&bLocal_6 + 616) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "SepulcroRebels"));
	*(&bLocal_6 + 528[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel0", 538, Vector(-2278,104f, 21,8383f, 4947,605f), Vector(0.0f, -41,05096f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 528[02], &bLocal_6 + 616);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 528[02], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 528[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&bLocal_6 + 528[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 528[02], 20);
	*(&bLocal_6 + 528[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel1", 534, Vector(-2282,375f, 21,83827f, 4946,942f), Vector(0.0f, -40,81004f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 528[12], &bLocal_6 + 616);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 528[12], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 528[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&bLocal_6 + 528[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 528[12], 20);
	*(&bLocal_6 + 528[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel2", 537, Vector(-2280,053f, 21,83827f, 4952,278f), Vector(0.0f, -40,29132f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 528[22], &bLocal_6 + 616);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 528[22], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 528[22], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&bLocal_6 + 528[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 528[22], 20);
	*(&bLocal_6 + 528[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel3", 535, Vector(-2285,445f, 21,83827f, 4949,665f), Vector(0.0f, -30,29641f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 528[32], &bLocal_6 + 616);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 528[32], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 528[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&bLocal_6 + 528[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 528[32], 20);
	*(&bLocal_6 + 528[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DialogueRebel0", 529, Vector(-2283,53f, 21,83827f, 4950,075f), Vector(0.0f, -65,03015f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 528[42], &bLocal_6 + 616);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 528[42], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 528[42], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&bLocal_6 + 528[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 528[42], 20);
	return;
}

void Function_487() //Position: 0x18A7A / 100986
{
	Function_488();
	bLocal_1325 = &bLocal_6 + 832[02];
	if (Function_234(&bLocal_1325))
	{
		SET_ACTOR_PROOF(&bLocal_1325, 4096);
		SET_ALLOW_EXECUTE(&bLocal_1325, 0);
		if (Function_234(&Global_54076))
		{
			MEMORY_REPORT_POSITION_AUTO(&bLocal_1325, &Global_54076, 1);
		}
	}
	return;
}

void Function_488() //Position: 0x18AC2 / 101058
{
	*(&bLocal_6 + 856) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "DeSanta"));
	*(&bLocal_6 + 832[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DeSanta0", 556, Vector(-1364,195f, 13,05098f, 4309,366f), Vector(0.0f, 40,07217f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 832[02], &bLocal_6 + 856);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 832[02], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 832[02], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 832[02], 19);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 832[02], 41, false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 832[02], 40, false, 1, 1);
	return;
}

void Function_489(int iParam0) //Position: 0x18B7A / 101242
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_490(int iParam0) //Position: 0x18BD1 / 101329
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

void Function_491(var uParam0, var uParam1) //Position: 0x18C25 / 101413
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_492() //Position: 0x18C3F / 101439
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Function_413(iVar0);
		iVar0++;
	}
	return;
}

void Function_493() //Position: 0x18C5C / 101468
{
	int iVar0;
	
	if (iLocal_906 < 4 && iLocal_906 > 105)
	{
		if (!IS_ACTOR_ALIVE(&bLocal_1325))
		{
			Function_253("Rebel02_fail_officer_killed");
			bLocal_920 = true;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_01_AND_JOBS/REBEL02"))
		{
			REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_01_AND_JOBS/REBEL02");
		}
		Function_550();
		Function_535();
		Function_412();
		if (Function_534(&bLocal_6 + 616, 0, 0, 0, 0, 0))
		{
			Function_492();
		}
		else
		{
			Function_253("Rebel02_fail_rebels_killed");
			bLocal_920 = true;
		}
		if (iLocal_906 >= 8)
		{
			Function_244(&bLocal_6 + 2336[0]);
			Function_530(StackVal, "$/cutscene/Rebel02_CS03/Rebel02_CS03", &uLocal_931, &uLocal_933, Function_244(&bLocal_6 + 2336[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
			if (!iLocal_1317)
			{
				if (Function_234(&Global_54076))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1592[3]))
					{
						Function_367(&uLocal_932, 33, 0, 4294967295, 4294967295);
						iLocal_1317 = 1;
					}
				}
			}
			Function_435(19, 2, 15.0f, 1.0f, 0,8f, 0,2f, 0, 1);
			if (!DECOR_CHECK_EXIST(&uLocal_891, "helpcapture") && !Function_167())
			{
				Function_166("Rebel02_help_capture", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(&uLocal_891, "helpcapture", true);
			}
			if (!iLocal_906 != 104)
			{
				if (!DECOR_CHECK_EXIST(&uLocal_891, "officerflee"))
				{
					Function_436(&iLocal_1152, &bLocal_6 + 1592[2], &bLocal_6 + 1592[1], "Rebel02_return_sepulcro", "Rebel02_fail_sepulcro", &bLocal_920, 0, 0, 0, 330, 1);
				}
			}
			if (iLocal_906 < 12 && iLocal_906 > 105)
			{
				if (!iLocal_906 != 104)
				{
					if (!iLocal_906 != 103)
					{
						if (Function_234(&bLocal_1325))
						{
							if (!IS_ACTOR_HOGTIED(&bLocal_1325) && !Function_529())
							{
								Function_527();
							}
						}
					}
				}
			}
		}
	}
	switch (iLocal_906)
	{
		case 0x00000000:
			Function_402(0);
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			iLocal_1316 = Function_342();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(21);
			Function_244(&bLocal_6 + 2056[0]);
			iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2056[0]), 0, 1, 1);
			Function_526();
			if (!SQUAD_IS_VALID(&bLocal_6 + 888))
			{
				Function_525();
				TASK_STAND_STILL(&bLocal_6 + 864[02], -1.0f, 0, 0);
			}
			if (iLocal_1030[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_524();
				if (Function_234(&Global_54076))
				{
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						if (Function_234(&bLocal_1027))
						{
							TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
							Function_338(&bLocal_1027, &bLocal_6 + 2056[0], 1, 1, 1);
						}
					}
					else
					{
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
						Function_338(&Global_54076, &bLocal_6 + 2056[0], 1, 1, 1);
						if (Function_234(&bLocal_1027))
						{
							TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
							Function_338(&bLocal_1027, &bLocal_6 + 2056[2], 1, 1, 1);
						}
					}
				}
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					if (Function_234(&(uLocal_1338[iVar0])))
					{
						if (IS_ACTOR_RIDING(&(uLocal_1338[iVar0])))
						{
							TASK_STAND_STILL(&(uLocal_1338[iVar0]), -1.0f, 0, 0);
							Function_338(&(uLocal_1338[iVar0]), &bLocal_6 + 2104[iVar0], 1, 1, 1);
						}
						else
						{
							TASK_STAND_STILL(&(uLocal_1338[iVar0]), -1.0f, 0, 0);
							Function_338(&(uLocal_1338[iVar0]), &bLocal_6 + 2104[iVar0], 1, 1, 1);
							if (Function_234(&(uLocal_1350[iVar0])))
							{
								TASK_STAND_STILL(&(uLocal_1350[iVar0]), -1.0f, 0, 0);
								Function_338(&(uLocal_1350[iVar0]), &bLocal_6 + 2160[iVar0], 1, 1, 1);
							}
						}
					}
					iVar0++;
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_244(&bLocal_6 + 2056[0]);
				iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2056[0]), 0, 1, 1);
				if (!Function_340(iLocal_1029))
				{
					Function_339(&Local_893);
				}
				iLocal_906 = 1;
			}
			else
			{
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_340(iLocal_1029) || iLocal_1029 != 4294967295))
			{
				Function_448(&bLocal_6 + 1592[2]);
				if (!STREAMING_ARE_BOUNDS_LOADED(Function_448(&bLocal_6 + 1592[2]), 100.0f))
				{
					Function_448(&bLocal_6 + 1592[2]);
					STREAMING_LOAD_BOUNDS(Function_448(&bLocal_6 + 1592[2]), 100.0f, 1);
				}
				else
				{
					iLocal_906 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_1030[0] == 0)
			{
				Function_517();
			}
			if (Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, Local_893, bLocal_905))
			{
				FIRE_STOP_ALL_FIRES();
				Function_367(&uLocal_932, 6, 0, 4294967295, 4294967295);
				if (!SQUAD_IS_VALID(&bLocal_6 + 888))
				{
					Function_525();
				}
				iLocal_906 = 3;
			}
			else
			{
				Function_313();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_906 = 4;
			}
			Function_259(bLocal_905);
			Function_391(StackVal, Function_259(bLocal_905), bLocal_905, Global_46746[2], Function_261(bLocal_905), 0);
			break;
		
		case 0x00000003:
			if (Function_291("$/cutscene/REBEL02_CS02/REBEL02_CS02", &iLocal_907, &Local_893, &bLocal_905, 63262, 63069, 98325, 60010, 59538, 59531, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_906 = 4;
			}
			break;
		
		case 0x00000004:
			Function_387();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_367(&uLocal_932, 21, 0, 4294967295, 4294967295);
			Function_303(&iLocal_1098);
			iLocal_906 = 5;
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_510(0);
			if (Function_234(&Global_54076))
			{
				Function_217(&Global_54076);
			}
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 6;
			Function_367(&uLocal_932, 21, 0, 4294967295, 4294967295);
			break;
		
		case 0x00000006:
			if (Function_234(&bLocal_6 + 896[02]))
			{
				if (Function_509())
				{
					Function_510(1);
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					iLocal_906 = 7;
				}
				else if (Function_366(&iLocal_1098, 5.0f))
				{
					if (Function_234(&bLocal_1325))
					{
						Function_217(&bLocal_6 + 896[02]);
						TASK_FLEE_ACTOR(&bLocal_6 + 896[02], &bLocal_1325, -1.0f, -1.0f, 0, 0, 0);
						Function_510(0);
						Function_303(&iLocal_1098);
						Function_303(&iLocal_1106);
						iLocal_906 = 7;
					}
				}
			}
			else
			{
				Function_510(0);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
			}
			Function_508();
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 8;
			if (Function_234(&bLocal_1325))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1325, 13, true);
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_364("Rebel02_obj_captureDS");
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1592[2]))
				{
					iLocal_906 = 9;
				}
				else
				{
					Function_508();
					iLocal_906 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (!DECOR_CHECK_EXIST(&uLocal_891, "officerflee"))
			{
				Function_507(&bLocal_6 + 616, 75.0f, 0x40400000, 0x40000000);
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1592[2]))
				{
					Function_303(&iLocal_1098);
					Function_303(&iLocal_1106);
					iLocal_906 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_HOGTIED(&bLocal_1325) || Function_529())
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
					{
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
					else if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &bLocal_6 + 1592[2]))
					{
						if (Function_420())
						{
							Function_504();
						}
						else
						{
							Function_238();
							Function_364("Rebel02_obj_killSoldiersSepulcro");
							Function_303(&iLocal_1098);
							Function_303(&iLocal_1106);
							iLocal_906 = 103;
						}
					}
					else
					{
						Function_504();
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
			}
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_CRIPPLED(&bLocal_1325, 3) || IS_ACTOR_CRIPPLED(&bLocal_1325, 4))
				{
					Function_503();
				}
				else
				{
					Function_502();
				}
			}
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 11;
			break;
		
		case 0x0000000B:
			if (Function_366(&iLocal_1098, 4.0f))
			{
				ACTOR_START_FORCE_HOLSTER(&bLocal_1325, 0, 0);
				Function_527();
			}
			break;
		
		case 0x0000000C:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_HOGTIED(&bLocal_1325))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
					{
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
					else if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &bLocal_6 + 1592[2]))
					{
						if (Function_420())
						{
							Function_504();
						}
						else
						{
							Function_238();
							Function_364("Rebel02_obj_killSoldiersSepulcro");
							Function_303(&iLocal_1098);
							Function_303(&iLocal_1106);
							iLocal_906 = 103;
						}
					}
					else
					{
						Function_504();
					}
				}
				else if (Function_529())
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &bLocal_6 + 1592[2]))
					{
						if (Function_420())
						{
							Function_504();
						}
						else
						{
							Function_238();
							Function_364("Rebel02_obj_killSoldiersSepulcro");
							Function_303(&iLocal_1098);
							Function_303(&iLocal_1106);
							iLocal_906 = 103;
						}
					}
					else
					{
						Function_504();
					}
				}
				else if (Function_501(&bLocal_1325, &Global_54076, 100.0f))
				{
					if (Function_366(&iLocal_1102, 60.0f))
					{
						if (iLocal_1479 != 5)
						{
							if (!Function_416(&bLocal_1325))
							{
								if (GET_NUM_WEAPONS_IN_INVENTORY(&bLocal_1325) >= 0)
								{
									if (IS_ACTOR_RIDING(&bLocal_1325))
									{
										if (IS_ACTOR_RIDING(&Global_54076))
										{
											Function_500();
										}
									}
									else
									{
										Function_500();
									}
								}
							}
						}
					}
					if (Function_366(&iLocal_1098, 15.0f))
					{
						if (Function_501(&bLocal_1325, &Global_54076, 20.0f))
						{
							Function_499();
							Function_303(&iLocal_1098);
						}
						else
						{
							Function_498();
							Function_303(&iLocal_1098);
						}
					}
				}
				else
				{
					Function_253("Rebel02_fail_officer_getaway");
					bLocal_920 = true;
				}
			}
			break;
		
		case 0x00000067:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_HOGTIED(&bLocal_1325) || Function_529())
				{
					if (Function_420())
					{
						if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
						{
							if (GET_HOGTIED_MASTER(&bLocal_1325) == "")
							{
								if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_1330))
								{
									Function_506();
								}
								else
								{
									Function_364("Rebel02_obj_returnToDS");
									Function_303(&iLocal_1098);
									Function_303(&iLocal_1106);
									iLocal_906 = 17;
								}
							}
							else if (Function_420())
							{
								Function_506();
							}
							else
							{
								Function_505();
							}
						}
						else
						{
							Function_504();
						}
					}
				}
				else
				{
					Function_527();
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
				{
					if (GET_HOGTIED_MASTER(&bLocal_1325) == "")
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1330)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1330));
						}
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(&bLocal_1325) == 4)
					{
						Function_495();
					}
					else if (GET_HOGTIED_MASTER(&bLocal_1325) == &Global_54076)
					{
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
				}
				else if (!iLocal_1319)
				{
					if (iLocal_1480[4] == 11)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &(uLocal_1338[4]), 24.0f))
						{
							Function_494();
							LOG_ERROR("Rebel02_PLAY_RebelShoutCarryDS");
							iLocal_1319 = 1;
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
				{
					if (GET_ACTOR_HOGTIE_STATE(&bLocal_1325) != 4)
					{
						if (Function_234(GET_ACTORS_HORSE(&Global_54076)))
						{
							Function_217(GET_ACTORS_HORSE(&Global_54076));
							TASK_WANDER(GET_ACTORS_HORSE(&Global_54076), -1.0f);
						}
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
				}
				else
				{
					Function_504();
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
				{
					if (GET_HOGTIED_MASTER(&bLocal_1325) == "")
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uLocal_1330)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uLocal_1330));
						}
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(&bLocal_1325) == 4)
					{
						Function_495();
					}
				}
				else
				{
					Function_504();
				}
			}
			break;
		
		case 0x00000010:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
				{
					if (GET_HOGTIED_MASTER(&bLocal_1325) == "")
					{
						if (Function_420())
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_1330))
							{
								Function_506();
							}
							else
							{
								Function_364("Rebel02_obj_returnToDS");
								Function_367(&uLocal_932, 20, 0, 4294967295, 4294967295);
								Function_303(&iLocal_1098);
								Function_303(&iLocal_1106);
								iLocal_906 = 17;
							}
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(&bLocal_1325) == 4)
					{
						Function_495();
					}
					else if (GET_HOGTIED_MASTER(&bLocal_1325) == &Global_54076)
					{
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
				}
				else
				{
					Function_504();
				}
			}
			break;
		
		case 0x00000011:
			if (Function_234(&bLocal_1325))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1325, &uLocal_1330))
				{
					if (GET_HOGTIED_MASTER(&bLocal_1325) == "")
					{
						if (Function_420())
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_1330))
							{
								Function_506();
							}
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(&bLocal_1325) == 4)
					{
						Function_495();
					}
					else if (GET_HOGTIED_MASTER(&bLocal_1325) == &Global_54076)
					{
						if (Function_420())
						{
							Function_506();
						}
						else
						{
							Function_505();
						}
					}
				}
				else
				{
					Function_504();
				}
			}
			break;
		
		case 0x00000069:
			if (Function_366(&iLocal_1098, 1.0f))
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_1156 = 0;
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING() && Function_366(&iLocal_1098, 2.0f))
			{
				iLocal_1030[1] = 1;
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1325)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1325));
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1325);
				Function_389(&bLocal_6 + 616);
				iLocal_1030[1] = 1;
				Function_367(&uLocal_932, 0, 0, 4294967295, 4294967295);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				bLocal_905 = 2;
				iLocal_906 = 0;
			}
			break;
	}
	return;
}

void Function_494() //Position: 0x19B2A / 105258
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelShoutCarryDS", "Rebel02_RebelShoutCarryDS", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x19B86 / 105350
{
	Function_496();
	iLocal_1319 = 0;
	Function_364("Rebel02_obj_getDSoffHorse");
	Function_303(&iLocal_1098);
	Function_303(&iLocal_1106);
	iLocal_906 = 14;
	return;
}

void Function_496() //Position: 0x19BC3 / 105411
{
	if (!IS_OBJECT_VALID(&fLocal_1314))
	{
		fLocal_1314 = Function_497(StackVal, StackVal, &uLocal_891, Function_85(), (&bLocal_6 + 2640[23]), Vector(0.0f, 31,909f, 0.0f), &Global_54076, 9.0f, 2, 2, 330, 4294967295, 1, -1.0f, -1.0f, 0);
		ADD_BLIP_FOR_OBJECT(&fLocal_1314, 330, 0f, 2, 0);
	}
	return;
}

float Function_497(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x19C15 / 105493
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

void Function_498() //Position: 0x19D00 / 105728
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelJonNoChaseDes", "Rebel02_RebelJonNoChaseDes", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x19D5E / 105822
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelCaptDeSanWait", "Rebel02_RebelCaptDeSanWait", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x19DBC / 105916
{
	Function_217(&bLocal_1325);
	GIVE_WEAPON_TO_ACTOR(&bLocal_1325, 41, false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&bLocal_1325, 40, false, 1, 1);
	ACTOR_END_FORCE_HOLSTER(&bLocal_1325);
	bLocal_1311 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1325, bLocal_1311);
	TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
	TASK_PRIORITY_SET(&bLocal_1325, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1325, 13, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1325, 75.0f);
	iLocal_1479 = 5;
	return;
}

bool Function_501(bool bParam0, var uParam1, bool bParam2) //Position: 0x19E2F / 106031
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&bParam0, &uParam1, bParam2))
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

void Function_502() //Position: 0x19F44 / 106308
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_ShoutsOffEunning", "Rebel02_ShoutsOffEunning", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503() //Position: 0x19F9D / 106397
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_ShotBothLegs", "Rebel02_ShotBothLegs", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x19FEE / 106478
{
	Function_496();
	iLocal_1319 = 0;
	Function_364("Rebel02_obj_carryDS");
	Function_303(&iLocal_1098);
	Function_303(&iLocal_1106);
	Function_367(&uLocal_932, 20, 0, 4294967295, 4294967295);
	iLocal_906 = 13;
	return;
}

void Function_505() //Position: 0x1A030 / 106544
{
	Function_238();
	iLocal_1319 = 0;
	Function_364("Rebel02_obj_killSoldiersSepulcro");
	Function_303(&iLocal_1098);
	Function_303(&iLocal_1106);
	iLocal_906 = 16;
	return;
}

void Function_506() //Position: 0x1A074 / 106612
{
	Function_238();
	if (Function_234(&bLocal_1325))
	{
		DECOR_SET_BOOL(&bLocal_1325, "bDisableCutFree", true);
		DECOR_SET_BOOL(&bLocal_1325, "ActionArea_DisableHogtie", true);
	}
	Function_367(&uLocal_932, 11, 0, 4294967295, 4294967295);
	Function_303(&iLocal_1098);
	Function_303(&iLocal_1106);
	iLocal_906 = 105;
	return;
}

void Function_507(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x1A0E2 / 106722
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
			Function_463(&uVar1, fParam1, &iParam2, &iParam3);
		}
		bVar0++;
	}
}

void Function_508() //Position: 0x1A130 / 106800
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_YellsAtJon", "Rebel02_YellsAtJon", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_509() //Position: 0x1A17D / 106877
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_234(&(vLocal_1492[iVar03])))
		{
			if (ACTORS_IN_RANGE(&(vLocal_1492[iVar03]), &Global_54076, 20.0f))
			{
				LOG_ERROR("player spotted by soldier");
				return 1;
			}
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&(vLocal_1492[iVar03]))))
			{
				return 1;
			}
		}
		return 1;
		iVar0++;
	}
	if (Function_234(&bLocal_1325))
	{
		if (ACTORS_IN_RANGE(&bLocal_1325, &Global_54076, 20.0f))
		{
			LOG_ERROR("player spotted by de Santa");
			return 1;
		}
		if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&bLocal_1325)))
		{
			return 1;
		}
	}
	if (Function_234(&bLocal_6 + 896[02]))
	{
		if (ACTORS_IN_RANGE(&bLocal_6 + 896[02], &Global_54076, 20.0f))
		{
			LOG_ERROR("player spotted by gravedigger");
			return 1;
		}
		if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&bLocal_6 + 896[02])))
		{
			return 1;
		}
	}
	return 1;
	return 0;
}

void Function_510(int iParam0) //Position: 0x1A2B3 / 107187
{
	int iVar0;
	
	if (!DECOR_CHECK_EXIST(&uLocal_891, "sepulcroshootout"))
	{
		Function_516();
		iLocal_1329 = 0;
		Function_515(iParam0);
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1325)))
		{
			ADD_BLIP_FOR_ACTOR(&bLocal_1325, 393, 0, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_1325), GET_ACTOR_ENUM_STRING(&bLocal_1325));
		}
		AI_STOP_IGNORING_ACTORS();
		Function_514(&bLocal_6 + 824);
		SQUAD_GOALS_CLEAR(&bLocal_6 + 824);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&bLocal_6 + 824, 0);
		Function_513(&bLocal_6 + 824, &Global_54076, 1);
		SQUAD_SET_FACTION(&bLocal_6 + 824, 19);
		Function_355(&bLocal_6 + 824, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_354(&bLocal_6 + 824, bLocal_890);
		Function_512(&bLocal_6 + 824, 1);
		Function_352(&bLocal_6 + 824, 0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_6 + 824, bLocal_890);
		if (iLocal_1329 == 0)
		{
			uLocal_1362[0] = &bLocal_6 + 3456;
			uLocal_1362[1] = &bLocal_6 + 3464;
			uLocal_1362[2] = &bLocal_6 + 3472;
			uLocal_1362[3] = &bLocal_6 + 3480;
			uLocal_1362[4] = &bLocal_6 + 3488;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				Function_244(&bLocal_6 + 2808[iVar0]);
				Local_1374[iVar02] = Function_244(&bLocal_6 + 2808[iVar0]);
				iVar0++;
			}
		}
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,45f);
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 1,7f);
		Function_389(&bLocal_6 + 616);
		Function_511();
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Function_234(&(uLocal_1338[iVar0])))
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uLocal_1338[iVar0]), 0,4f);
			}
			iVar0++;
		}
		if (SQUAD_IS_VALID(&bLocal_6 + 824))
		{
			Function_474(&bLocal_6 + 824, 1);
		}
		if (SQUAD_IS_VALID(&bLocal_6 + 616))
		{
			Function_474(&bLocal_6 + 616, 1);
		}
		DECOR_SET_BOOL(&uLocal_891, "sepulcroshootout", true);
		iLocal_1156 = 1;
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
		Function_507(&bLocal_6 + 616, 40.0f, 0x40400000, 0x40000000);
	}
	return;
}

void Function_511() //Position: 0x1A4BB / 107707
{
	if (Function_234(&bLocal_1325))
	{
		AI_IGNORE_ACTOR(&bLocal_1325);
		AI_DONT_HARM_ACTOR(&bLocal_1325);
	}
	return;
}

void Function_512(var uParam0, bool bParam1) //Position: 0x1A4DA / 107738
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

void Function_513(var uParam0, var uParam1, bool bParam2) //Position: 0x1A52A / 107818
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
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uVar1, &uParam1);
			if (!&bParam2)
			{
				GET_POSITION(&uParam1, &uVar2);
				MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
			}
			else
			{
				MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_514(int iParam0) //Position: 0x1A596 / 107926
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

void Function_515(int iParam0) //Position: 0x1A5CB / 107979
{
	int iVar0;
	
	if (Function_234(&bLocal_1325))
	{
		Function_410(&bLocal_1325);
		iVar0 = Function_410(&bLocal_1325);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1325, 100.0f);
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&bLocal_1325, 0);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_1325, 0, 0);
		AI_SET_SHOTS_PER_BURST(&bLocal_1325, 5);
		AI_SET_BURST_DURATION(&bLocal_1325, 3000.0f);
		Function_217(&bLocal_1325);
		bLocal_1311 = TASK_SEQUENCE_OPEN();
		if (iParam0 == 1)
		{
			if (Function_234(&bLocal_6 + 896[02]))
			{
				SET_ACTOR_FACTION(&bLocal_6 + 896[02], 20);
				TASK_SHOOT_FROM_POSITION(0, &bLocal_6 + 896[02], &iVar0);
			}
		}
		TASK_GO_TO_COORD(0, &bLocal_6 + 2744[iLocal_13293], 4);
		TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1325, bLocal_1311);
		TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
		iLocal_1479 = 0;
	}
	return;
}

void Function_516() //Position: 0x1A68A / 108170
{
	var uVar0;
	
	if (vLocal_1492[33].z == 0)
	{
		if (Function_234(&(vLocal_1492[33])))
		{
			if (Function_234(&(uLocal_1409[0])))
			{
				Function_217(&(vLocal_1492[33]));
				MEMORY_ALLOW_SHOOTING(&(vLocal_1492[33]), true);
				GET_POSITION(&(vLocal_1492[33]), &uVar0);
				bLocal_1311 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_FROM_POSITION(0, &(uLocal_1409[0]), &uVar0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(vLocal_1492[33]), bLocal_1311);
				TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
				vLocal_1492[33].f_8 = 1;
				vLocal_1492[33].f_12 = 0;
			}
		}
		if (Function_234(&(vLocal_1492[43])))
		{
			if (Function_234(&(uLocal_1409[1])))
			{
				Function_217(&(vLocal_1492[43]));
				MEMORY_ALLOW_SHOOTING(&(vLocal_1492[43]), true);
				GET_POSITION(&(vLocal_1492[43]), &uVar0);
				bLocal_1311 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_FROM_POSITION(0, &(uLocal_1409[1]), &uVar0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(vLocal_1492[43]), bLocal_1311);
				TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
				vLocal_1492[43].f_8 = 1;
				vLocal_1492[43].f_12 = 1;
			}
		}
	}
	return;
}

void Function_517() //Position: 0x1A798 / 108440
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bLocal_6 + 616))
	{
		Function_482(1);
	}
	if (!IS_ACTORSET_VALID(&bLocal_6 + 920))
	{
		Function_523();
		DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_6 + 896[02]);
		SET_ACTOR_ONE_SHOT_DEATH(&bLocal_6 + 896[02], true);
	}
	if (!SQUAD_IS_VALID(&bLocal_6 + 968))
	{
		Function_522();
		bVar0 = false;
		while (bVar0 <= 2)
		{
			uLocal_1409[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 968, bVar0);
			SET_ACTOR_ONE_SHOT_DEATH(&(uLocal_1409[bVar0]), true);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&(uLocal_1409[bVar0]));
			bVar0++;
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_6 + 824))
	{
		Function_521();
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_6 + 824, bLocal_890);
		bVar0 = false;
		while (bVar0 <= 6)
		{
			vLocal_1492[bVar03] = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 824, bVar0);
			*(&vLocal_1492[bVar03] + 16) = &bLocal_6 + 2920[bVar0];
			vLocal_1492[bVar03].f_8 = 0;
			if (Function_234(&(vLocal_1492[bVar03])))
			{
				Function_356(&(vLocal_1492[bVar03]));
				MEMORY_ALLOW_SHOOTING(&(vLocal_1492[bVar03]), false);
				Function_217(&(vLocal_1492[33]));
				TASK_STAND_STILL(&(vLocal_1492[bVar03]), -1.0f, 0, 0);
			}
			bVar0++;
		}
		Function_520(&bLocal_6 + 824);
		if (Function_234(&(vLocal_1492[03])))
		{
			Function_217(&(vLocal_1492[03]));
			if (Function_234(&bLocal_6 + 896[02]))
			{
				TASK_POINT_GUN_AT_OBJECT(&(vLocal_1492[03]), &bLocal_6 + 896[02], -1.0f, 1);
			}
		}
		if (Function_234(&(vLocal_1492[13])))
		{
			Function_217(&(vLocal_1492[13]));
			TASK_STAND_STILL(&(vLocal_1492[13]), -1.0f, 0, 0);
		}
		if (Function_234(&(vLocal_1492[23])))
		{
			Function_217(&(vLocal_1492[23]));
			TASK_STAND_STILL(&(vLocal_1492[13]), -1.0f, 0, 0);
		}
		if (Function_234(&(vLocal_1492[33])))
		{
			TASK_STAND_STILL(&(vLocal_1492[13]), -1.0f, 0, 0);
		}
		if (Function_234(&(vLocal_1492[43])))
		{
			TASK_STAND_STILL(&(vLocal_1492[13]), -1.0f, 0, 0);
		}
		if (Function_234(&(vLocal_1492[53])))
		{
			Function_217(&(vLocal_1492[53]));
			TASK_STAND_STILL(&(vLocal_1492[13]), -1.0f, 0, 0);
		}
	}
	Function_520(&bLocal_6 + 616);
	AI_IGNORE_ACTOR(&Global_54076);
	if (!SQUAD_IS_VALID(&bLocal_6 + 856))
	{
		Function_487();
		Function_518(&bLocal_1325, &uLocal_933);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1325);
		GIVE_WEAPON_TO_ACTOR(&bLocal_1325, 39, false, 1, 1);
		if (Function_234(&bLocal_6 + 896[02]))
		{
			bLocal_1311 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_POINT_GUN_AT_OBJECT(0, &bLocal_6 + 896[02], -1.0f, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1325, bLocal_1311);
			TASK_SEQUENCE_RELEASE(bLocal_1311, 1);
		}
		else
		{
			TASK_STAND_STILL(&bLocal_1325, -1.0f, 0, 0);
		}
	}
	if (!IS_OBJECT_VALID(&uLocal_1330))
	{
		uLocal_1330 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_891, Function_85(), 2, *(&bLocal_6 + 2640[23]), Vector(0.0f, 31,909f, 0.0f), Vector(9.0f, 9.0f, 9.0f));
	}
	Function_516();
	if (!SQUAD_IS_VALID(&bLocal_6 + 888))
	{
		Function_525();
	}
	iLocal_1313 = 6;
	return;
}

void Function_518(int iParam0, struct<5>[] Param1) //Position: 0x1AA7F / 109183
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = Function_519(&iParam0, &Param1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= Param1)
			{
				if (!IS_ACTOR_VALID(&(Param1[iVar15])))
				{
					Param1[iVar15] = &iParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_519(int iParam0, struct<5>[] Param1) //Position: 0x1AACE / 109262
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

void Function_520(bool bParam0) //Position: 0x1AB08 / 109320
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
			AI_IGNORE_ACTOR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_521() //Position: 0x1AB4D / 109389
{
	*(&bLocal_6 + 824) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "SepulcroArmy"));
	*(&bLocal_6 + 720[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy0", 380, Vector(-1369,257f, 13,18632f, 4307,396f), Vector(0.0f, -62,47959f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 720[02], &bLocal_6 + 824);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 720[02], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 720[02], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 720[02], 19);
	*(&bLocal_6 + 720[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy1", 396, Vector(-1352f, 13,05099f, 4280.0f), Vector(0.0f, -36,92808f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 720[12], &bLocal_6 + 824);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 720[12], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 720[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 720[12], 19);
	*(&bLocal_6 + 720[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy2", 392, Vector(-1368f, 13,05099f, 4288.0f), Vector(0.0f, 36,89134f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 720[22], &bLocal_6 + 824);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 720[22], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 720[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 720[22], 19);
	*(&bLocal_6 + 720[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy3", 379, Vector(-1362,761f, 13,05098f, 4299,19f), Vector(0.0f, 208,8689f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 720[32], &bLocal_6 + 824);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 720[32], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 720[32], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 720[32], 19);
	*(&bLocal_6 + 720[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy4", 395, Vector(-1361,531f, 13,05128f, 4298,384f), Vector(179,9985f, -28,34848f, -179,9977f));
	SQUAD_JOIN(&bLocal_6 + 720[42], &bLocal_6 + 824);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 720[42], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 720[42], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 720[42], 19);
	*(&bLocal_6 + 720[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy5", 393, Vector(-1333,823f, 13,06128f, 4301,142f), Vector(0.0f, 267,4944f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 720[52], &bLocal_6 + 824);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 720[52], false);
	GIVE_WEAPON_TO_ACTOR(&bLocal_6 + 720[52], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&bLocal_6 + 720[52], 19);
	return;
}

void Function_522() //Position: 0x1AE61 / 110177
{
	*(&bLocal_6 + 968) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "CapturedRebels"));
	*(&bLocal_6 + 928[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CapturedRebel0", 518, Vector(-1357,75f, 13,05099f, 4306,776f), Vector(0.0f, 223,0429f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 928[02], &bLocal_6 + 968);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 928[02], false);
	TASK_STAND_STILL(&bLocal_6 + 928[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 928[02], 20);
	*(&bLocal_6 + 928[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CapturedRebel1", 520, Vector(-1357,179f, 13,05099f, 4306,335f), Vector(0.0f, 215,169f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 928[12], &bLocal_6 + 968);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 928[12], false);
	TASK_STAND_STILL(&bLocal_6 + 928[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&bLocal_6 + 928[12], 20);
	return;
}

void Function_523() //Position: 0x1AF75 / 110453
{
	*(&bLocal_6 + 920) = CREATE_ACTORSET_IN_LAYOUT(&bLocal_6, "Gravediggerset", 0);
	*(&bLocal_6 + 896[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Gravedigger0", 518, Vector(-1366,36f, 13,05099f, 4306,36f), Vector(0.0f, 228,0118f, 0.0f));
	ADD_ACTORSET_MEMBER(&bLocal_6 + 920, &bLocal_6 + 896[02]);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 896[02], false);
	return;
}

void Function_524() //Position: 0x1AFF2 / 110578
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_234(&(uLocal_1338[iVar0])))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &(uLocal_1338[iVar0]));
		}
		iVar0++;
	}
	Function_238();
	Function_63();
	return;
}

void Function_525() //Position: 0x1B02A / 110634
{
	*(&bLocal_6 + 888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bLocal_6, "Vulture"));
	*(&bLocal_6 + 864[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Vulture0", 1128, Vector(-1386,635f, 16,62871f, 4308,941f), Vector(0.0f, 120,7193f, 0.0f));
	SQUAD_JOIN(&bLocal_6 + 864[02], &bLocal_6 + 888);
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_6 + 864[02], false);
	TASK_STAND_STILL(&bLocal_6 + 864[02], -1.0f, 0, 0);
	return;
}

void Function_526() //Position: 0x1B0AC / 110764
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_234(&(uLocal_1338[iVar0])))
		{
			SET_ACTOR_HEALTH(&(uLocal_1338[iVar0]), GET_ACTOR_MAX_HEALTH(&(uLocal_1338[iVar0])));
		}
		iVar0++;
	}
	return;
}

void Function_527() //Position: 0x1B0E8 / 110824
{
	Function_528();
	Function_238();
	iLocal_1319 = 0;
	Function_364("Rebel02_obj_lassoHogtie");
	Function_303(&iLocal_1098);
	Function_303(&iLocal_1106);
	iLocal_906 = 12;
	return;
}

void Function_528() //Position: 0x1B126 / 110886
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelCaptDeSan", "Rebel02_RebelCaptDeSan", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_529() //Position: 0x1B17C / 110972
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (Function_416(&bLocal_1325))
		{
			if (!iLocal_1324)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_166("Rebel02_help_drag", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_1324 = 1;
				}
			}
			return 1;
		}
	}
	return 0;
}

int Function_530(var uParam0, var uParam1, var uParam2, struct<2> Param3, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x1B1CC / 111052
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_409(StackVal, &Global_54076, Param3, (&fParam6 + ((IntToFloat(Function_411()) * (&fParam7 - &fParam6)) * 0,5f))))
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
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_105(StackVal, Var16))
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam8, &iParam9, &iParam10, &iParam11);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Function_533(&uParam2);
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_531(&uParam2);
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
	else if (!Function_409(StackVal, &Global_54076, Param3, (&fParam7 + ((IntToFloat(Function_411()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_409(StackVal, &Global_54076, Param3, &fParam6))
	{
	}
	return 0;
}

void Function_531(int iParam0) //Position: 0x1B51F / 111903
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			Function_532(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, &iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var5, &Var7);
			Function_408(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_532(var uParam0, bool bParam1, struct<5>[] Param2) //Position: 0x1B580 / 112000
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

void Function_533(struct<5>[] Param0) //Position: 0x1B61E / 112158
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

bool Function_534(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1B673 / 112243
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar2, 3) || IS_ACTOR_CRIPPLED(&uVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_RIDING_VEHICLE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_535() //Position: 0x1B738 / 112440
{
	if (Function_234(&bLocal_1325))
	{
		if (!iLocal_1479 != 6)
		{
			if (Function_416(&bLocal_1325))
			{
				iLocal_1479 = 6;
				Function_549();
				Function_367(&uLocal_932, 20, 0, 4294967295, 4294967295);
			}
		}
		switch (iLocal_1479)
		{
			case 0x00000000:
				if (Function_422(StackVal, &bLocal_1325, *(&bLocal_6 + 2744[iLocal_13293])) > 1.0f || GET_TASK_STATUS(&bLocal_1325, 0) != 0)
				{
					Function_217(&bLocal_1325);
					ACTOR_HOLSTER_WEAPON(&bLocal_1325, 1);
					TASK_CROUCH(&bLocal_1325, -1.0f);
					iLocal_1479 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_234(&Global_54076))
				{
					if (Function_468(&Global_54076, &bLocal_1325, 18.0f))
					{
						Function_548();
					}
					else if (Function_420())
					{
						Function_548();
					}
				}
				break;
			
			case 0x00000002:
				Function_545();
				Function_544();
				Function_337(&bLocal_1325);
				bLocal_1327 = LOCATE_ACTOR_OF_TYPE(Function_337(&bLocal_1325), 12.0f, 23, 4294967295);
				Function_543();
				if (Function_234(&bLocal_1327))
				{
					if (IS_ACTOR_RIDEABLE(&bLocal_1327))
					{
						if (GET_RIDER(&bLocal_1327) == "")
						{
							if (&bLocal_1327 != &bLocal_1027)
							{
								if (&bLocal_1327 != &bLocal_1336)
								{
									Function_542();
								}
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				Function_545();
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1325))
				{
					Function_540();
				}
				else if (Function_234(&bLocal_1327))
				{
					if (GET_RIDER(&bLocal_1327) == "")
					{
						if (!ACTORS_IN_RANGE(&bLocal_1325, &bLocal_1327, 20.0f))
						{
							Function_539();
						}
					}
					else
					{
						Function_539();
					}
				}
				else
				{
					Function_539();
				}
				break;
			
			case 0x00000003:
				Function_545();
				Function_543();
				if (Function_234(&bLocal_1327))
				{
					if (!IS_ACTOR_RIDING(&bLocal_1325))
					{
						TASK_CLEAR(GET_MOUNT(&bLocal_1325));
						Function_539();
					}
				}
				else
				{
					Function_539();
				}
				break;
			
			case 0x00000005:
				if (Function_366(&iLocal_1122, 8,5f))
				{
					if (!Function_349())
					{
						Function_538();
						Function_303(&iLocal_1122);
					}
				}
				if (GET_NUM_WEAPONS_IN_INVENTORY(&bLocal_1325) < 0)
				{
					Function_217(&bLocal_1325);
					Function_539();
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_HOGTIED(&bLocal_1325))
				{
					Function_367(&uLocal_932, 20, 0, 4294967295, 4294967295);
					iLocal_1479 = 7;
					if (Function_420())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1325, "Rebel02_JonHogtiesDSanta", Function_85(), 1, 1, 0, 1, 0, 0, 0, 1000, 0, 0);
						LOG_ERROR("Rebel02_PLAY_JonHogtiesDSanta");
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1325, "Rebel02_HogTiesDSantaAlive", Function_85(), 1, 1, 0, 1, 0, 0, 0, 1000, 0, 0);
						LOG_ERROR("Rebel02_PLAY_JonHogtiesDSanta");
					}
				}
				else if (!Function_416(&bLocal_1325))
				{
					Function_217(&bLocal_1325);
					Function_539();
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_HOGTIED(&bLocal_1325))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1325, 10.0f))
					{
						if (Function_366(&iLocal_1122, 12,5f))
						{
							if (!Function_349())
							{
								Function_537();
								Function_303(&iLocal_1122);
							}
						}
					}
					else if (Function_366(&iLocal_1122, 12,5f))
					{
						if (!Function_349())
						{
							Function_536();
							Function_303(&iLocal_1122);
						}
					}
				}
				else
				{
					Function_367(&uLocal_932, 26, 0, 4294967295, 4294967295);
					Function_217(&bLocal_1325);
					Function_539();
				}
				break;
			
			case 0x00000008:
				break;
			}
	}
	return;
}

void Function_536() //Position: 0x1BA96 / 113302
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_LeavesDSantaTied", "Rebel02_LeavesDSantaTied", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x1BAEF / 113391
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_PelaseWitJon", "Rebel02_PelaseWitJon", false, 2, 0, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1BB40 / 113472
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_AttacksJon", "Rebel02_AttacksJon", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x1BB8D / 113549
{
	if (Function_234(&bLocal_1325))
	{
		if (Function_234(&Global_54076))
		{
			Function_217(&bLocal_1325);
			TASK_OVERRIDE_CLEAR_POSTURE(&bLocal_1325);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1325, &bLocal_6 + 1592[6], 3, 1);
			TASK_FLEE_ACTOR(&bLocal_1325, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			SET_ACTOR_MAX_SPEED(&bLocal_1325, 3);
			Function_303(&iLocal_1126);
			if (iLocal_1332 <= 0)
			{
				iLocal_1332 = 0;
			}
			iLocal_1479 = 2;
		}
	}
	return;
}

void Function_540() //Position: 0x1BBF4 / 113652
{
	Function_217(&bLocal_1325);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1325, &bLocal_6 + 1592[6], 2, 1);
	if (iLocal_1332 <= 0)
	{
		iLocal_1332 = 0;
	}
	TASK_FLEE_ACTOR(&bLocal_1325, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
	iLocal_1479 = 3;
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		Function_541();
	}
	return;
}

void Function_541() //Position: 0x1BC40 / 113728
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_SantaGetsOnHorse", "Rebel02_SantaGetsOnHorse", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542() //Position: 0x1BC99 / 113817
{
	Function_217(&bLocal_1325);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1325);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_1325);
	TASK_MOUNT(&bLocal_1325, &bLocal_1327, 1, 1, 2, 2147483647);
	if (iLocal_1332 <= 0)
	{
		iLocal_1332 = 0;
	}
	iLocal_1479 = 4;
	return;
}

void Function_543() //Position: 0x1BCD6 / 113878
{
	if (IS_ACTOR_CRIPPLED(&bLocal_1325, 2) && IS_ACTOR_CRIPPLED(&bLocal_1325, 1))
	{
		KILL_ACTOR(&bLocal_1325);
	}
	return;
}

void Function_544() //Position: 0x1BCF7 / 113911
{
	if (GET_ACTOR_MAX_SPEED(&bLocal_1325) == 3)
	{
		if (Function_366(&iLocal_1126, 7,5f))
		{
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1325, 2);
			SET_ACTOR_MAX_SPEED(&bLocal_1325, 2);
			Function_303(&iLocal_1126);
		}
	}
	else if (Function_366(&iLocal_1126, 15.0f))
	{
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1325, 3);
		SET_ACTOR_MAX_SPEED(&bLocal_1325, 3);
		Function_303(&iLocal_1126);
	}
	return;
}

void Function_545() //Position: 0x1BD53 / 114003
{
	if (Function_234(&bLocal_1325))
	{
		if (Function_234(&Global_54076))
		{
			if (!IS_ACTOR_HOGTIED(&bLocal_1325))
			{
				if (Function_366(&iLocal_1122, 8,5f))
				{
					if (!Function_349())
					{
						switch (iLocal_1332)
						{
							case 0x00000000:
								Function_547();
								Function_303(&iLocal_1122);
								iLocal_1332 = 1;
								break;
							
							case 0x00000001:
								Function_546();
								Function_303(&iLocal_1122);
								iLocal_1332 = 0;
								break;
							
							default:
								LOG_ERROR("invalid iDeSantaOrJohnShoutStage");
								iLocal_1332 = 0;
								break;
							}
						}
					}
				}
			}
	}
	return;
}

void Function_546() //Position: 0x1BDEE / 114158
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_ShoutsAtJonWileEscape", "Rebel02_ShoutsAtJonWileEscape", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x1BE51 / 114257
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_Shouts2DeSanta", "Rebel02_Shouts2DeSanta", 2, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_548() //Position: 0x1BEA6 / 114342
{
	if (Function_234(&bLocal_1325))
	{
		if (Function_234(&Global_54076))
		{
			Function_539();
			DECOR_SET_BOOL(&uLocal_891, "officerflee", true);
			Function_367(&uLocal_932, 28, 0, 4294967295, 4294967295);
			Function_303(&iLocal_1102);
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_906 = 10;
		}
	}
	return;
}

void Function_549() //Position: 0x1BEFC / 114428
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_JonLassoDeSanta", "Rebel02_JonLassoDeSanta", false, 2, 1, 0, 1);
		Function_345(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_550() //Position: 0x1BF53 / 114515
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_234(&(vLocal_1492[iVar03])))
		{
			Function_427(&(vLocal_1492[iVar03]));
		}
		else
		{
			vLocal_1492[iVar03].f_8 = 12;
		}
		iVar0++;
	}
	return;
}

void Function_551() //Position: 0x1BF91 / 114577
{
	if (!iLocal_906 != 0)
	{
		if (IS_OBJECT_VALID(&fLocal_1314) && !DECOR_CHECK_EXIST(&uLocal_891, "trafficdisabled"))
		{
			if (Function_568(&Global_54076, &fLocal_1314, 100.0f))
			{
				Function_472(1);
				DECOR_SET_BOOL(&uLocal_891, "trafficdisabled", true);
			}
		}
		Function_244(&bLocal_6 + 2056[0]);
		Function_406(StackVal, "$/cutscene/REBEL02_CS02/REBEL02_CS02", &uLocal_931, Function_244(&bLocal_6 + 2056[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		if (iLocal_906 < 4 && iLocal_906 > 10)
		{
			if (Function_534(&bLocal_6 + 616, 0, 0, 0, 0, 0))
			{
				Function_492();
			}
			else
			{
				Function_253("Rebel02_fail_rebels_killed");
				bLocal_920 = true;
			}
		}
	}
	switch (iLocal_906)
	{
		case 0x00000000:
			Function_402(0);
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			if (Function_234(&Global_54076))
			{
				DECOR_SET_BOOL(&Global_54076, "bDisableTieToTracks", true);
			}
			iLocal_1316 = Function_342();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&iLocal_1025, GET_ACTOR_MAX_HEALTH(&iLocal_1025));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(21);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_244(&bLocal_6 + 2016[0]);
			iLocal_1029 = Function_341(StackVal, Function_244(&bLocal_6 + 2016[0]), 0, 1, 1);
			if (!Function_340(iLocal_1029))
			{
				Function_339(&Local_893);
			}
			Function_367(&uLocal_932, 0, 0, 4294967295, 4294967295);
			iLocal_906 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_340(iLocal_1029) || iLocal_1029 != 4294967295))
			{
				iLocal_906 = 2;
			}
			break;
		
		case 0x00000002:
			Function_259(bLocal_905);
			Function_391(StackVal, Function_259(bLocal_905), bLocal_905, Global_46746[2], Function_261(bLocal_905), 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_234(&(uLocal_1338[0])) && Function_234(&(uLocal_1350[0])))
			{
				if (GET_MOUNT(&(uLocal_1338[0])) != &uLocal_1350[0])
				{
					ACTOR_MOUNT_ACTOR(&(uLocal_1338[0]), &(uLocal_1350[0]));
					TASK_CLEAR(&(uLocal_1338[0]));
				}
			}
			if (Function_234(&(uLocal_1338[2])) && Function_234(&(uLocal_1350[2])))
			{
				if (GET_MOUNT(&(uLocal_1338[2])) != &uLocal_1350[2])
				{
					ACTOR_MOUNT_ACTOR(&(uLocal_1338[2]), &(uLocal_1350[2]));
					TASK_CLEAR(&(uLocal_1338[2]));
				}
			}
			if (Function_234(&(uLocal_1338[3])) && Function_234(&(uLocal_1350[3])))
			{
				if (GET_MOUNT(&(uLocal_1338[3])) != &uLocal_1350[3])
				{
					ACTOR_MOUNT_ACTOR(&(uLocal_1338[3]), &(uLocal_1350[3]));
					TASK_CLEAR(&(uLocal_1338[3]));
				}
			}
			Function_387();
			iLocal_1320 = 0;
			uLocal_1467 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_chu_loop_road", 4));
			SET_CURVE_WEIGHT(&uLocal_1467, 50);
			uLocal_1469 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_chu_cas_roaddetachedCurve14", 4));
			SET_CURVE_WEIGHT(&uLocal_1469, 5);
			uLocal_1471 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_chu_cas_roaddetachedCurve16detachedCurve2", 4));
			SET_CURVE_WEIGHT(&uLocal_1471, 50);
			uLocal_1473 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156detachedCurve2", 18));
			SET_CURVE_WEIGHT(&uLocal_1473, 5);
			if (Function_234(&Global_54076))
			{
				Function_217(&Global_54076);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_1319 = 0;
			iLocal_1317 = 0;
			iLocal_906 = 6;
			break;
		
		case 0x00000006:
			if (!iLocal_1317)
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					Function_367(&uLocal_932, 10, 0, 4294967295, 4294967295);
					iLocal_1317 = 1;
				}
			}
			if (!HUD_IS_FADING())
			{
				Function_567();
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 7;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_1317)
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					Function_367(&uLocal_932, 10, 0, 4294967295, 4294967295);
					iLocal_1317 = 1;
				}
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_364("rebel02_obj_RideSepulcro");
				fLocal_1314 = Function_458(&uLocal_891, Function_85(), &bLocal_6 + 1592[7], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&fLocal_1314)))
				{
					ADD_BLIP_FOR_OBJECT(&fLocal_1314, 330, 0f, 2, 0);
				}
				Function_456(StackVal, (&bLocal_6 + 2640[13]), 0, 393272, 1);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				uLocal_1475 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(&bLocal_6 + 616, 0, 4294967295, &bLocal_6 + 3432, 4, 1, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(&bLocal_6 + 616, &uLocal_1475, 1, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_6 + 616, &uLocal_1475, 4, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_6 + 616, &uLocal_1475, 1, 1);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_DESIRED_LEADER(&bLocal_6 + 616, &uLocal_1475, SQUAD_GET_ACTOR_BY_INDEX(&bLocal_6 + 616, false));
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1334, -1.0f, -1.0f, 4, 1, 1);
				iLocal_906 = 8;
				Function_191(Global_46866[4]);
			}
			break;
		
		case 0x00000008:
			if (!iLocal_1317)
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					Function_367(&uLocal_932, 10, 0, 4294967295, 4294967295);
					iLocal_1317 = 1;
				}
			}
			else if (!iLocal_1318)
			{
				if (Function_568(&Global_54076, &fLocal_1314, 500.0f))
				{
					Function_367(&uLocal_932, 22, 0, 4294967295, 4294967295);
					iLocal_1318 = 1;
				}
			}
			Function_566();
			if (Function_366(&iLocal_1098, 5.0f))
			{
				if (Function_449(&Global_54076, &bLocal_6 + 1592[2], 125.0f))
				{
					if (!IS_ACTORSET_VALID(&bLocal_6 + 920))
					{
						Function_448(&bLocal_6 + 1592[2]);
						if (!STREAMING_ARE_BOUNDS_LOADED(Function_448(&bLocal_6 + 1592[2]), 90.0f))
						{
							Function_448(&bLocal_6 + 1592[2]);
							STREAMING_LOAD_BOUNDS(Function_448(&bLocal_6 + 1592[2]), 90.0f, 1);
						}
						else
						{
							Function_565();
							Function_517();
							Function_303(&iLocal_1098);
							Function_303(&iLocal_1106);
							iLocal_906 = 9;
						}
					}
				}
				else
				{
					Function_554();
				}
			}
			break;
		
		case 0x00000009:
			if (Function_366(&iLocal_1098, 2.0f))
			{
				Function_516();
			}
			if (Function_445())
			{
				Function_367(&uLocal_932, 8, 0, 4294967295, 4294967295);
				Function_446(&Global_54076, 0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (Function_234(GET_MOUNT(&Global_54076)))
				{
					bLocal_1027 = GET_MOUNT(&Global_54076);
					Function_446(&bLocal_1027, 0);
					Function_217(&bLocal_1027);
					TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
				}
				Function_238();
				Function_63();
				FIRE_STOP_ALL_FIRES();
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 106;
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &bLocal_6 + 1592[3]))
			{
				Function_367(&uLocal_932, 8, 0, 4294967295, 4294967295);
				Function_552();
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 106;
			}
			else if (Function_509())
			{
				Function_510(1);
				Function_303(&iLocal_1098);
				Function_303(&iLocal_1106);
				iLocal_906 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_524();
			STREAMING_UNLOAD_BOUNDS();
			SET_CURVE_WEIGHT(&uLocal_1467, 10);
			SET_CURVE_WEIGHT(&uLocal_1469, 10);
			SET_CURVE_WEIGHT(&uLocal_1471, 10);
			SET_CURVE_WEIGHT(&uLocal_1473, 10);
			iLocal_1030[0] = 1;
			Function_303(&iLocal_1098);
			Function_303(&iLocal_1106);
			iLocal_1317 = 0;
			bLocal_905 = true;
			iLocal_906 = 0;
			break;
	}
	return;
}

void Function_552() //Position: 0x1C6FD / 116477
{
	Function_515(1);
	Function_553();
	return;
}

void Function_553() //Position: 0x1C70A / 116490
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_MidScene_v1_AA1", "Rebel02_MidScene_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_MidScene_v1_AA2", "Rebel02_MidScene_v1_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Rebel02_MidScene_v1_AB", "Rebel02_MidScene_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_MidScene_v1_AC", "Rebel02_MidScene_v1_AC", false, 1, 0, 0, 1);
		Function_345(13);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_554() //Position: 0x1C815 / 116757
{
	if (Function_234(&iLocal_1025))
	{
		if (IS_PLAYER_TARGETTING_ACTOR(false, &iLocal_1025, 0))
		{
			Function_564();
			Function_303(&iLocal_1106);
		}
		else if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1025, 8.0f))
		{
			if (!Function_563(&iLocal_1025, &Global_54076, -0,825f))
			{
				if (GET_TASK_STATUS(&iLocal_1025, 22) != 1)
				{
					TASK_FACE_ACTOR(&iLocal_1025, &Global_54076, 0, 3212836864);
				}
			}
			else if (GET_TASK_STATUS(&iLocal_1025, 6) != 1)
			{
				TASK_STAND_STILL(&iLocal_1025, RAND_FLOAT_RANGE(3.0f, 5.0f), 0, 0);
			}
			if (Function_366(&iLocal_1106, 8,5f))
			{
				if (iLocal_1320 == 1)
				{
					Function_562();
					Function_303(&iLocal_1106);
				}
				else if (IS_ACTOR_RIDING(&Global_54076))
				{
					Function_561();
					Function_303(&iLocal_1106);
				}
				else
				{
					Function_560();
					Function_303(&iLocal_1106);
				}
			}
		}
		else if (!iLocal_1320)
		{
			Function_559();
			Function_303(&iLocal_1106);
			iLocal_1320 = 1;
			iLocal_1321 = 0;
			switch (iLocal_1316)
			{
				case 0x00000000:
					iLocal_1478 = 1;
					break;
				
				case 0x00000001:
					iLocal_1478 = 4;
					break;
				
				case 0x00000002:
					iLocal_1478 = 7;
					break;
				
				default:
					iLocal_1478 = 10;
					break;
			}
		}
		else
		{
			switch (iLocal_1478)
			{
				case 0x00000000:
					if (Function_366(&iLocal_1106, 5.0f))
					{
						iLocal_1478 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_167())
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 15.0f))
						{
							Function_558();
							iLocal_1478 = 2;
						}
					}
					break;
				
				case 0x00000002:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 40.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
					}
					else
					{
						Function_303(&iLocal_1106);
						iLocal_1478 = 3;
					}
					break;
				
				case 0x00000003:
					if (Function_366(&iLocal_1106, 10.0f))
					{
						iLocal_1478 = 4;
					}
					break;
				
				case 0x00000004:
					if (!Function_167())
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 15.0f))
						{
							Function_557();
							iLocal_1478 = 5;
						}
					}
					break;
				
				case 0x00000005:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 40.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
					}
					else
					{
						Function_303(&iLocal_1106);
						iLocal_1478 = 6;
					}
					break;
				
				case 0x00000006:
					if (Function_366(&iLocal_1106, 15.0f))
					{
						iLocal_1478 = 7;
					}
					break;
				
				case 0x00000007:
					if (!Function_167())
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 15.0f))
						{
							Function_556();
							iLocal_1478 = 8;
						}
					}
					break;
				
				case 0x00000008:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 40.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
					}
					else
					{
						Function_303(&iLocal_1106);
						iLocal_1478 = 9;
					}
					break;
				
				case 0x00000009:
					if (Function_366(&iLocal_1106, 10.0f))
					{
						iLocal_1478 = 10;
					}
					break;
				
				case 0x0000000A:
					if (!Function_167())
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1334, 15.0f))
						{
							Function_555();
							iLocal_1478 = 17;
						}
					}
					break;
				
				case 0x00000011:
					break;
				
				default:
					LOG_ERROR("invalid stage one m_eConvState");
					break;
			}
			Function_451(&bLocal_1334, "Rebel02_RebelJonThrownOffHors", "Rebel02_RebelJonShotsRand", "Rebel02_RebelJonGetsOffHors", "Rebel02_RebelJonNoGetBakOn", "Rebel02_RebelJonStopsHors", "Rebel02_RebelJon2FarAhead", "Rebel02_RebelJon2FarBehind", "Rebel02_RebelJonRidesWrong");
		}
	}
	return;
}

void Function_555() //Position: 0x1CC0F / 117775
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelNoTalk", "Rebel02_RebelNoTalk", false, 2, 1, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x1CC5F / 117855
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AA", "Rebel02_RebelBant_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v3_AB", "Rebel02_RebelBant_v3_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AC", "Rebel02_RebelBant_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v3_AD", "Rebel02_RebelBant_v3_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AE1", "Rebel02_RebelBant_v3_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AE2", "Rebel02_RebelBant_v3_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v3_AF", "Rebel02_RebelBant_v3_AF", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AG1", "Rebel02_RebelBant_v3_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AG2", "Rebel02_RebelBant_v3_AG2", false, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x1CEA7 / 118439
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AA", "Rebel02_RebelBant_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v2_AB", "Rebel02_RebelBant_v2_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AC", "Rebel02_RebelBant_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v2_AD", "Rebel02_RebelBant_v2_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AE1", "Rebel02_RebelBant_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AE2", "Rebel02_RebelBant_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v2_AF", "Rebel02_RebelBant_v2_AF", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AG", "Rebel02_RebelBant_v2_AG", false, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x1D0AE / 118958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AA", "Rebel02_RebelBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AB", "Rebel02_RebelBant_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AC", "Rebel02_RebelBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AD", "Rebel02_RebelBant_v1_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AE", "Rebel02_RebelBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AF", "Rebel02_RebelBant_v1_AF", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AG", "Rebel02_RebelBant_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AH", "Rebel02_RebelBant_v1_AH", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AI", "Rebel02_RebelBant_v1_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AJ", "Rebel02_RebelBant_v1_AJ", 4, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x1D32B / 119595
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_SetsOff", "Rebel02_SetsOff", false, 2, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1D372 / 119666
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_WaitMountHorse", "Rebel02_WaitMountHorse", false, 1, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561() //Position: 0x1D3C7 / 119751
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_WaitSetOff", "Rebel02_WaitSetOff", false, 1, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x1D414 / 119828
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_ComesBakToLuisa", "Rebel02_ComesBakToLuisa", false, 2, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_563(var uParam0, int iParam1, float fParam2) //Position: 0x1D46B / 119915
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

void Function_564() //Position: 0x1D50A / 120074
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_JonTargetsLuisa", "Rebel02_JonTargetsLuisa", false, 1, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_565() //Position: 0x1D561 / 120161
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelNearSepBant_v1_AA", "Rebel02_RebelNearSepBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelNearSepBant_v1_AB", "Rebel02_RebelNearSepBant_v1_AB", 4, 1, 0, 0, 1);
		Function_345(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x1D612 / 120338
{
	if (SQUAD_IS_VALID(&bLocal_6 + 616))
	{
		if (SQUAD_GOAL_IS_VALID(&uLocal_1475))
		{
			if (IS_VOLUME_VALID(&bLocal_6 + 1544[0]))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1334, &bLocal_6 + 1544[0]))
				{
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(&bLocal_6 + 616, &uLocal_1475, 8, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED_ABSOLUTE(&bLocal_6 + 616, &uLocal_1475, 16.0f);
					if (IS_ACTOR_VALID(&(uLocal_1338[0])))
					{
						SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&(uLocal_1338[0]), 1);
						SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&(uLocal_1338[0]), 1);
					}
					DESTROY_VOLUME(&bLocal_6 + 1544[0]);
				}
			}
		}
	}
	return;
}

void Function_567() //Position: 0x1D6A1 / 120481
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_RideToElSep", "Rebel02_RideToElSep", false, 1, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_568(var uParam0, var uParam1, float fParam2) //Position: 0x1D6F0 / 120560
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_410(&uParam0);
			Function_434(&uParam1);
			if (VDIST(Function_410(&uParam0), Function_434(&uParam1)) >= fParam2)
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

void Function_569() //Position: 0x1D80E / 120846
{
	switch (iLocal_906)
	{
		case 0x00000006:
			Function_600(&Local_893, 1);
			uLocal_891 = CREATE_LAYOUT(Function_85());
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&Global_6667[3928] + 88), 0.0f, 1, 1, true);
			Function_33(1, 0, 1);
			Function_599();
			FIRE_STOP_ALL_FIRES();
			Function_41(47);
			Function_195(114693);
			Function_472(9);
			Function_37(&(Global_43791[Global_46894[2]]), 256);
			Function_42(256);
			Function_472(256);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_367(&uLocal_932, 0, 0, 4294967295, 4294967295);
			iLocal_906 = 7;
			break;
		
		case 0x00000007:
			Unknown_Function();
			if (StackVal)
			{
				Function_580();
				iLocal_906 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_234(&Global_54076))
			{
				Function_338(&Global_54076, &bLocal_6 + 2016[0], 1, 1, 1);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
			}
			if (Function_234(&bLocal_1027))
			{
				Function_217(&bLocal_1027);
				Function_338(&bLocal_1027, &bLocal_6 + 2016[2], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
				SET_ALLOW_RIDE_BY_AI(&bLocal_1027, 0);
			}
			if (Function_234(&iLocal_1025))
			{
				Function_338(&iLocal_1025, &bLocal_6 + 2016[1], 1, 1, 1);
				TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
			}
			Function_578(&bLocal_6 + 3352);
			Function_578(&bLocal_6 + 3360);
			Function_578(&bLocal_6 + 3416);
			Function_578(&bLocal_6 + 3424);
			Function_482(1);
			Function_518(&Global_54076, &uLocal_933);
			Function_518(&iLocal_1025, &uLocal_933);
			iLocal_1312 = 0;
			while (iLocal_1312 <= 5)
			{
				Function_518(&(uLocal_1338[iLocal_1312]), &uLocal_933);
				iLocal_1312++;
			}
			iLocal_906 = 9;
			break;
		
		case 0x00000009:
			if ((!Function_305(&Local_893) && (Local_893.f_40 >= 1 && iLocal_930 != 0)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_02/REBEL_02"))
			{
				Function_530(Function_580(), "$/cutscene/REBEL_02/REBEL_02", &uLocal_931, &uLocal_933, *(&Global_6667[3928] + 88), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
				iLocal_906 = 10;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_02/REBEL_02"))
				{
					LOG_ERROR("REBEL_02/REBEL_02 cutscene does NOT exist");
				}
				iLocal_906 = 12;
			}
			break;
		
		case 0x0000000A:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_906 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_291("$/cutscene/REBEL_02/REBEL_02", &iLocal_907, &Local_893, &bLocal_905, 63262, 63069, 63062, 60010, 59538, 59531, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_906 = 12;
			}
			break;
		
		case 0x0000000C:
			if (IS_LAYOUTREF_VALID(&bLocal_6))
			{
				uLocal_1096 = CREATE_OBJECT_ITERATOR(&bLocal_6);
			}
			Function_576(8, 0, 1);
			RESET_ACTOR_GAITS(&iLocal_1025, 0);
			SET_CRIPPLE_ENABLE(&iLocal_1025, 0);
			SET_ACTOR_FACTION(&iLocal_1025, 20);
			TASK_PRIORITY_SET(&iLocal_1025, true);
			TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_1025, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_1025, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_1025, GET_ACTOR_MAX_HEALTH(&iLocal_1025));
			SET_ACTOR_IS_COMPANION(&iLocal_1025, 1);
			SET_ANIM_SET_FOR_ACTOR(&iLocal_1025, "stolen_panic", 0);
			SET_ACTION_NODE_FOR_ACTOR(&iLocal_1025, "stolen_panic/loop");
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_1025, &bLocal_6 + 1520[0], 1, 1);
			SET_ACTOR_PROOF(&iLocal_1025, 16);
			RESET_ACTOR_GAITS(&bLocal_1027, 0);
			TASK_PRIORITY_SET(&bLocal_1027, true);
			TASK_STAND_STILL(&bLocal_1027, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1027, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1027, GET_ACTOR_MAX_HEALTH(&bLocal_1027));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_6 + 1592[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_6 + 1592[2]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_6 + 1680[18]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bLocal_6 + 1680[18]);
			Function_575(&iLocal_1114);
			Function_575(&iLocal_1122);
			Function_575(&iLocal_1106);
			Function_575(&iLocal_1152);
			Function_575(&iLocal_1098);
			Function_575(&iLocal_1118);
			Function_575(&iLocal_1102);
			iLocal_1312 = 0;
			while (iLocal_1312 <= 5)
			{
				Function_575(&(Local_1130[iLocal_13122]));
				iLocal_1312++;
			}
			Function_573(&uLocal_1157, &uLocal_891);
			Function_381(&(Local_1211[015]), &iLocal_1025, "MexGirl", 0, 0x5f5e100, 1);
			bLocal_905 = iLocal_930;
			iLocal_906 = 0;
			Function_571(&Local_893, &bLocal_905, &iLocal_906);
			Function_570(StackVal, StackVal, StackVal, StackVal, StackVal, Local_893);
			switch (bLocal_905)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_524();
					break;
				
				case 0x00000002:
					Function_524();
					break;
				
				case 0x00000003:
					Function_524();
					break;
				
				case 0x00000065:
					Function_524();
					break;
			}
			break;
	}
	return;
}

void Function_570(struct<41> Param0) //Position: 0x1DD1B / 122139
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_905 = false;
			break;
		
		case 0x00000002:
			bLocal_905 = true;
			break;
		
		case 0x00000003:
			bLocal_905 = 2;
			break;
		
		case 0x00000004:
			bLocal_905 = 3;
			break;
		
		case 0x00000005:
			bLocal_905 = 101;
			break;
		
		case 0x0000000A:
			bLocal_905 = 101;
			break;
	}
}

void Function_571(int iParam0, var uParam1, int iParam2) //Position: 0x1DD7C / 122236
{
	if (Function_305(&iParam0))
	{
		uParam1 = Function_477(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_572();
	}
	return;
}

void Function_572() //Position: 0x1DDB8 / 122296
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

int Function_573(struct<2>[] Param0) //Position: 0x1DE09 / 122377
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_574(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_574(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_574(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_574(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_574(struct<13> Param0) //Position: 0x1E4E2 / 124130
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
	Function_108(&Param0 + 12, bParam4);
	return 1;
}

void Function_575(int iParam0) //Position: 0x1E5B1 / 124337
{
	if (!Function_300(&iParam0))
	{
		Function_304(&iParam0, 0.0f);
	}
	return;
}

void Function_576(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E5C8 / 124360
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
						Function_230(&uVar1);
					}
				}
				Function_577(&uVar0);
			}
		}
	}
	return;
}

void Function_577(var uParam0) //Position: 0x1E6D7 / 124631
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

void Function_578(bool bParam0) //Position: 0x1E70A / 124682
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_244(&bParam0);
	Var0 = Function_244(&bParam0);
	Function_579(&bParam0);
	Var2 = Function_579(&bParam0);
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

struct<8> Function_579(var uParam0) //Position: 0x1E7DE / 124894
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

struct<8> Function_580() //Position: 0x1E807 / 124935
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = &uVar0;
	bLocal_6 = CREATE_LAYOUT("Rebel02_layout");
	*(&bLocal_6 + 1512) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "CutsceneVol_set");
	*(&bLocal_6 + 1464[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &bLocal_6, "Cutscene01Vol", 2,802597E-45f, Vector(-2281,876f, 22,84285f, 4948,497f), Vector(0.0f, -38,21188f, 0.0f), Vector(17,32746f, 6.0f, 30,43822f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1512, &bLocal_6 + 1464[0]);
	*(&bLocal_6 + 1464[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "Cutscene02Vol", 2,802597E-45f, Vector(-1384.0f, 12,48991f, 4332.0f), Vector(0.0f, 28,35184f, 0.0f), Vector(150.0f, 15.0f, 90.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1512, &bLocal_6 + 1464[1]);
	*(&bLocal_6 + 1464[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "Cutscene03Vol", 2,802597E-45f, Vector(-1336,107f, 14,02453f, 4280,146f), Vector(0.0f, 124,8945f, 0.0f), Vector(6,719318f, 3,840477f, 5,085996f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1512, &bLocal_6 + 1464[2]);
	*(&bLocal_6 + 1464[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "Cutscene04Vol", 2,802597E-45f, Vector(-794,0623f, 14,54007f, 3725,522f), Vector(0.0f, -44,16404f, 0.0f), Vector(15,33967f, 6.0f, 11,47158f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1512, &bLocal_6 + 1464[3]);
	*(&bLocal_6 + 1464[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CutsceneLastVol", 2,802597E-45f, Vector(-805,0764f, 17,42245f, 3715,483f), Vector(0.0f, 44,40644f, 0.0f), Vector(55.0f, 10.0f, 35.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1512, &bLocal_6 + 1464[4]);
	*(&bLocal_6 + 1536) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "CampVol_set");
	*(&bLocal_6 + 1520[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CampFireVol", 4,203895E-45f, Vector(-2290,252f, 22,84285f, 4960,256f), Vector(0.0f, 20.0f, 0.0f), Vector(2,5f, 3.0f, 2,5f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1536, &bLocal_6 + 1520[0]);
	*(&bLocal_6 + 1584) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "SepulcroPathVol_set");
	*(&bLocal_6 + 1544[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroPathVol01_a_frame", 2,802597E-45f, Vector(-2239,244f, 19,98923f, 4896,755f), Vector(0.0f, -125,2121f, 0.0f), Vector(30,20986f, 10.0f, 56,8928f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1584, &bLocal_6 + 1544[0]);
	*(&bLocal_6 + 1544[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroPathVol02_wide", 2,802597E-45f, Vector(-2164,877f, 11,58188f, 4640,637f), Vector(0.0f, -56,72931f, 0.0f), Vector(192,1288f, 10.0f, 90,26276f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1584, &bLocal_6 + 1544[1]);
	*(&bLocal_6 + 1544[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroPathVol03_a_frame", 2,802597E-45f, Vector(-1792,621f, 11,51082f, 4388,814f), Vector(0.0f, -76,92083f, 0.0f), Vector(176,3353f, 10.0f, 84,03155f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1584, &bLocal_6 + 1544[2]);
	*(&bLocal_6 + 1544[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroPathVol04_wide", 2,802597E-45f, Vector(-1486,161f, 5,873007f, 4398,119f), Vector(0.0f, -87,23183f, 0.0f), Vector(173,5752f, 10.0f, 83,13451f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1584, &bLocal_6 + 1544[3]);
	*(&bLocal_6 + 1672) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "SepulcroVols_set");
	*(&bLocal_6 + 1592[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroGatewayVol_old", 2,802597E-45f, Vector(-1418,947f, 6,614375f, 4366,244f), Vector(-4,49027f, -86,85162f, 4,638273f), Vector(26,26359f, 19,31931f, 21,80397f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[0]);
	*(&bLocal_6 + 1592[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroFailZone", 2,802597E-45f, Vector(-1360,031f, 15,36022f, 4301,221f), Vector(-0,3972119f, -57,66007f, 0,5370321f), Vector(176,8064f, 20,52011f, 245,8219f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[1]);
	*(&bLocal_6 + 1592[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroWarnZone", 2,802597E-45f, Vector(-1361,077f, 15,35175f, 4295,252f), Vector(-0,3972119f, -57,66007f, 0,5370321f), Vector(91,7904f, 18,34962f, 119,2616f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[2]);
	*(&bLocal_6 + 1592[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "StartFightZone", 2,802597E-45f, Vector(-1358,66f, 15,33175f, 4290,241f), Vector(-0,3972119f, -57,66007f, 0,5370321f), Vector(64,52715f, 8,322174f, 77,65456f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[3]);
	*(&bLocal_6 + 1592[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroCutsceneZone", 2,802597E-45f, Vector(-1418,987f, 7,476637f, 4369,297f), Vector(-0,7555158f, -73,66512f, 0,9264526f), Vector(32,63662f, 7,504638f, 28,41595f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[4]);
	*(&bLocal_6 + 1592[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "ArriveAtSepulcro", 2,802597E-45f, Vector(-1430,193f, 6,023529f, 4382,405f), Vector(0.0f, 19,99104f, 0.0f), Vector(24,93632f, 7,818124f, 29,56864f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[5]);
	*(&bLocal_6 + 1592[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroDeSantaFleeAvoid", 2,802597E-45f, Vector(-1359,665f, 14,48099f, 4296,851f), Vector(-0,3972119f, -57,66007f, 0,5370321f), Vector(65.0f, 10.0f, 80.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[6]);
	*(&bLocal_6 + 1592[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "SepulcroGatewayVol", 4,203895E-45f, Vector(-1418,181f, 6,625381f, 4368,323f), Vector(-0,7675238f, -71,27706f, 0,881665f), Vector(8,889435f, 7,071726f, 8,800609f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[7]);
	*(&bLocal_6 + 1592[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "NoEmergTele", 2,802597E-45f, Vector(-1363,042f, 14,01561f, 4299,311f), Vector(0.0f, 27,52722f, 0.0f), Vector(101,3839f, 39,00605f, 98,6326f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1672, &bLocal_6 + 1592[8]);
	*(&bLocal_6 + 1872) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "CasaVols_set");
	*(&bLocal_6 + 1680[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "ArriveAtCasa", 2,802597E-45f, Vector(-785,8796f, 13,19093f, 3732,29f), Vector(0.0f, 44,24192f, 0.0f), Vector(11,65239f, 7,204329f, 13,64436f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[0]);
	*(&bLocal_6 + 1680[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "UpstairsVol1", 2,802597E-45f, Vector(-821,0635f, 18,14322f, 3710,551f), Vector(0.0f, -45,41219f, 0.0f), Vector(15,87828f, 6,024815f, 9,669018f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[1]);
	*(&bLocal_6 + 1680[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "UpstairsVol2", 2,802597E-45f, Vector(-805,7776f, 18,06658f, 3689,99f), Vector(0.0f, -44,86248f, 0.0f), Vector(8,122869f, 3.0f, 3,662236f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[2]);
	*(&bLocal_6 + 1680[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "UpstairsVol3", 2,802597E-45f, Vector(-811,484f, 19,06912f, 3699,881f), Vector(0.0f, -44,86248f, 0.0f), Vector(14,65629f, 4,89556f, 18,80337f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[3]);
	*(&bLocal_6 + 1680[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "WhoreAttackTriggerVol", 2,802597E-45f, Vector(-801,2439f, 13,05098f, 3714,231f), Vector(0.0f, -47,25315f, 0.0f), Vector(5,254804f, 3,324615f, 11,47997f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[4]);
	*(&bLocal_6 + 1680[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "DownstairsVol1", 2,802597E-45f, Vector(-826,8104f, 13,05098f, 3720,175f), Vector(0.0f, 45,60822f, 0.0f), Vector(19,01092f, 4,653508f, 29,41936f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[5]);
	*(&bLocal_6 + 1680[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaVol", 2,802597E-45f, Vector(-812,3151f, 19,57695f, 3716,852f), Vector(0.0f, 45,62794f, 0.0f), Vector(79,9892f, 15,36838f, 45,44862f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[6]);
	*(&bLocal_6 + 1680[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaTrapVol", 2,802597E-45f, Vector(-811,4215f, 19,64425f, 3712,991f), Vector(0.0f, 45,62794f, 0.0f), Vector(62,77083f, 15,36838f, 39,95352f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[7]);
	*(&bLocal_6 + 1680[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaFuckWithMissionVol", 2,802597E-45f, Vector(-830,5871f, 19,64425f, 3693,503f), Vector(0.0f, 44,52172f, 0.0f), Vector(123,2553f, 15,36838f, 54,54554f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[8]);
	*(&bLocal_6 + 1680[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaKillWhore2IpLeftVol", 2,802597E-45f, Vector(-807,5696f, 18,09917f, 3707,478f), Vector(0.0f, 46,04857f, 0.0f), Vector(2,218433f, 3,682728f, 2,681694f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[9]);
	*(&bLocal_6 + 1680[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaCourtVol", 2,802597E-45f, Vector(-800,1019f, 13,05097f, 3720,991f), Vector(0.0f, 45,62794f, 0.0f), Vector(29,3678f, 15.0f, 19,41295f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[10]);
	*(&bLocal_6 + 1680[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaUpstairs", 2,802597E-45f, Vector(-813,894f, 19,78325f, 3704,024f), Vector(0.0f, -44,74883f, 0.0f), Vector(17,11305f, 5,977152f, 29,6314f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[11]);
	*(&bLocal_6 + 1680[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaPathWarnVol", 2,802597E-45f, Vector(-1091,958f, 8,737683f, 4096,133f), Vector(0.0f, 45,62794f, 0.0f), Vector(1050.0f, 25.0f, 270.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[12]);
	*(&bLocal_6 + 1680[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaPathFailVol", 2,802597E-45f, Vector(-1091,958f, 8,737683f, 4096,133f), Vector(0.0f, 45,62794f, 0.0f), Vector(1160.0f, 85.0f, 365.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[13]);
	*(&bLocal_6 + 1680[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaGatewayVol", 2,802597E-45f, Vector(-793,3562f, 13,19093f, 3726,369f), Vector(0.0f, 44,24192f, 0.0f), Vector(6,45608f, 6,666006f, 4,961687f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[14]);
	*(&bLocal_6 + 1680[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "WagonStopVol", 2,802597E-45f, Vector(-792,571f, 12,8516f, 3740,485f), Vector(0.0f, -47,25315f, 0.0f), Vector(20,44823f, 6,001912f, 12,36438f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[15]);
	*(&bLocal_6 + 1680[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "WagonHorseStopVol", 2,802597E-45f, Vector(-796,0919f, 14,96102f, 3722,747f), Vector(0.0f, -47,25315f, 0.0f), Vector(12,25886f, 6,001912f, 11,71792f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[16]);
	*(&bLocal_6 + 1680[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaWarnVol", 2,802597E-45f, Vector(-810,4734f, 17,44446f, 3719,353f), Vector(0.0f, 44,24192f, 0.0f), Vector(114,6363f, 30.0f, 162,1472f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[17]);
	*(&bLocal_6 + 1680[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaFailVol", 2,802597E-45f, Vector(-793,7752f, 17,44446f, 3734,75f), Vector(0.0f, 44,24192f, 0.0f), Vector(140.0f, 30.0f, 227,3136f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[18]);
	*(&bLocal_6 + 1680[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaHorseVol", 2,802597E-45f, Vector(-766,5235f, 16,35103f, 3735,034f), Vector(0.0f, 45,62794f, 0.0f), Vector(53,21231f, 15,36838f, 45,44862f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[19]);
	*(&bLocal_6 + 1680[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaCourtCoverVol", 2,802597E-45f, Vector(-805,2587f, 13,99237f, 3715,975f), Vector(0.0f, 45,62794f, 0.0f), Vector(32,96155f, 3.0f, 21,70452f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[20]);
	*(&bLocal_6 + 1680[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaRebelRestrictVol", 2,802597E-45f, Vector(-808,3603f, 19,57695f, 3720,721f), Vector(0.0f, 45,62794f, 0.0f), Vector(79,9892f, 15,36838f, 61,87353f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[21]);
	*(&bLocal_6 + 1680[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "NoEmergCasa", 2,802597E-45f, Vector(-804,0441f, 13,2438f, 3726,527f), Vector(0.0f, 44,24192f, 0.0f), Vector(133,7371f, 73,98309f, 210,8413f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1872, &bLocal_6 + 1680[22]);
	*(&bLocal_6 + 1936) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "CasaSearchVols_set");
	*(&bLocal_6 + 1880[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaSearchVol01", 2,802597E-45f, Vector(-820,0051f, 13,05098f, 3712,232f), Vector(0.0f, -47,25315f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1936, &bLocal_6 + 1880[0]);
	*(&bLocal_6 + 1880[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaSearchVol02", 2,802597E-45f, Vector(-815,3091f, 13,05098f, 3707,505f), Vector(0.0f, 43,13705f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1936, &bLocal_6 + 1880[1]);
	*(&bLocal_6 + 1880[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaSearchVol03", 2,802597E-45f, Vector(-809,3848f, 13,05098f, 3701,383f), Vector(0.0f, -45,52593f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1936, &bLocal_6 + 1880[2]);
	*(&bLocal_6 + 1880[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaSearchVol04", 2,802597E-45f, Vector(-811,1065f, 17,88917f, 3694,835f), Vector(0.0f, 44,24192f, 0.0f), Vector(6,517704f, 2,6f, 3.0f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1936, &bLocal_6 + 1880[3]);
	*(&bLocal_6 + 1880[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaSearchVol05", 2,802597E-45f, Vector(-788,7782f, 13,19093f, 3690,674f), Vector(0.0f, 44,24192f, 0.0f), Vector(6,45608f, 6,666006f, 14,33444f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1936, &bLocal_6 + 1880[4]);
	*(&bLocal_6 + 1880[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "CasaSearchVol06", 2,802597E-45f, Vector(-793,3562f, 13,19093f, 3698,587f), Vector(0.0f, 44,24192f, 0.0f), Vector(6,45608f, 6,666006f, 17,11549f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 1936, &bLocal_6 + 1880[5]);
	*(&bLocal_6 + 2000) = CREATE_VOLUME_SET_IN_LAYOUT(&bLocal_6, "CasaAttackVols_set");
	*(&bLocal_6 + 1944[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "AttackVolDown", 2,802597E-45f, Vector(-808,8519f, 13,05098f, 3710,336f), Vector(0.0f, -47,25315f, 0.0f), Vector(31,3943f, 3.0f, 34,37615f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 2000, &bLocal_6 + 1944[0]);
	*(&bLocal_6 + 1944[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "AttackVolFront", 2,802597E-45f, Vector(-793,0328f, 13,05098f, 3727,451f), Vector(0.0f, -47,25315f, 0.0f), Vector(23,82177f, 3.0f, 34,37615f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 2000, &bLocal_6 + 1944[1]);
	*(&bLocal_6 + 1944[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "AttackVolLeft", 2,802597E-45f, Vector(-832,026f, 13,05098f, 3735,47f), Vector(0.0f, -46,18567f, 0.0f), Vector(44,41051f, 3.0f, 34,26023f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 2000, &bLocal_6 + 1944[2]);
	*(&bLocal_6 + 1944[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "AttackVolBack", 2,802597E-45f, Vector(-822,1957f, 13,05098f, 3696,679f), Vector(0.0f, -46,18567f, 0.0f), Vector(14,98617f, 3,335109f, 67,01739f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 2000, &bLocal_6 + 1944[3]);
	*(&bLocal_6 + 1944[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "AttackVolRight", 2,802597E-45f, Vector(-784,9143f, 13,05098f, 3696,614f), Vector(0.0f, -46,18567f, 0.0f), Vector(33,38948f, 3,335109f, 20,33838f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 2000, &bLocal_6 + 1944[4]);
	*(&bLocal_6 + 1944[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_6, "AttackVolUp", 2,802597E-45f, Vector(-805,1093f, 19,78325f, 3705,748f), Vector(0.0f, -44,74883f, 0.0f), Vector(31,19502f, 5,977152f, 42,243f));
	ADD_TO_VOLUME_SET(&bLocal_6 + 2000, &bLocal_6 + 1944[5]);
	*(&bLocal_6 + 2008) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2016[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerStart01", Vector(-2289,386f, 21,89979f, 4956,069f), Vector(-171,831f, -99,01144f, 171,2124f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2016[0], &bLocal_6 + 2008);
	*(&bLocal_6 + 2016[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CompanionStart01", Vector(-2288.0f, 21,99682f, 4957,407f), Vector(0.0f, 50,13224f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2016[1], &bLocal_6 + 2008);
	*(&bLocal_6 + 2016[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerHorseStart01", Vector(-2284.0f, 21,83827f, 4952.0f), Vector(0.0f, -35,13409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2016[2], &bLocal_6 + 2008);
	*(&bLocal_6 + 2048) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerStart02", Vector(-1418,947f, 6,614375f, 4366,244f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2056[0], &bLocal_6 + 2048);
	*(&bLocal_6 + 2056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerEnd02", Vector(-1403,208f, 7,344431f, 4338,462f), Vector(0.0f, -21,89324f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2056[1], &bLocal_6 + 2048);
	*(&bLocal_6 + 2056[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerHorseEnd02", Vector(-1418,947f, 6,614375f, 4366,244f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2056[2], &bLocal_6 + 2048);
	*(&bLocal_6 + 2056[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DeSantaEnd02", Vector(-1360,7f, 13,0707f, 4305,65f), Vector(0.0f, 93,6547f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2056[3], &bLocal_6 + 2048);
	*(&bLocal_6 + 2096) = CREATE_OBJECTSET_IN_LAYOUT("RebelEndCutscene02Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2104[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel0End02", Vector(-1403,071f, 7,694747f, 4336,041f), Vector(0.0f, -16,64769f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2104[0], &bLocal_6 + 2096);
	*(&bLocal_6 + 2104[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel1End02", Vector(-1403,314f, 8,101326f, 4333,533f), Vector(0.0f, 7,391869f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2104[1], &bLocal_6 + 2096);
	*(&bLocal_6 + 2104[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel2End02", Vector(-1401,234f, 8,069402f, 4334,121f), Vector(0.0f, -14,39168f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2104[2], &bLocal_6 + 2096);
	*(&bLocal_6 + 2104[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel3End02", Vector(-1404,751f, 7,295949f, 4336,829f), Vector(0.0f, -18,50282f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2104[3], &bLocal_6 + 2096);
	*(&bLocal_6 + 2104[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelDialogueEnd02", Vector(-1401,772f, 7,785682f, 4336,618f), Vector(0.0f, -22,61957f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2104[4], &bLocal_6 + 2096);
	*(&bLocal_6 + 2152) = CREATE_OBJECTSET_IN_LAYOUT("HorseEndCutscene02Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2160[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse0End02", Vector(-1421,507f, 6,008529f, 4370,813f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2160[0], &bLocal_6 + 2152);
	*(&bLocal_6 + 2160[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse1End02", Vector(-1421,592f, 5,821729f, 4373,336f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2160[1], &bLocal_6 + 2152);
	*(&bLocal_6 + 2160[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse2End02", Vector(-1419,094f, 5,861488f, 4370,803f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2160[2], &bLocal_6 + 2152);
	*(&bLocal_6 + 2160[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse3End02", Vector(-1420,242f, 6,166512f, 4374,376f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2160[3], &bLocal_6 + 2152);
	*(&bLocal_6 + 2160[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DialogueHorseEnd02", Vector(-1420,549f, 5,874701f, 4367,945f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2160[4], &bLocal_6 + 2152);
	*(&bLocal_6 + 2208) = CREATE_OBJECTSET_IN_LAYOUT("SepulcroArmyEndCutscene02Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2216[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy0End02", Vector(-1366,21f, 13,0512f, 4306,71f), Vector(0.0f, -78,5213f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2216[0], &bLocal_6 + 2208);
	*(&bLocal_6 + 2216[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy1End02", Vector(-1352,11f, 13,0509f, 4279,76f), Vector(0.0f, -15,9567f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2216[1], &bLocal_6 + 2208);
	*(&bLocal_6 + 2216[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy2End02", Vector(-1368,24f, 13,051f, 4287,32f), Vector(0.0f, 22,5908f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2216[2], &bLocal_6 + 2208);
	*(&bLocal_6 + 2216[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy3End02", Vector(-1362,76f, 13,0661f, 4299,19f), Vector(0.0f, 159,591f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2216[3], &bLocal_6 + 2208);
	*(&bLocal_6 + 2216[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy4End02", Vector(-1361,53f, 13,0661f, 4298,38f), Vector(0.0f, 154,099f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2216[4], &bLocal_6 + 2208);
	*(&bLocal_6 + 2216[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroArmy5End02", Vector(-1333,94f, 13,0604f, 4301,18f), Vector(0.0f, -15,9567f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2216[5], &bLocal_6 + 2208);
	*(&bLocal_6 + 2272) = CREATE_OBJECTSET_IN_LAYOUT("RebelArriveAtSepulcroSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2280[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel0AtSepulcro", Vector(-1426,039f, 6,023529f, 4369,763f), Vector(0.0f, -137,9353f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2280[0], &bLocal_6 + 2272);
	*(&bLocal_6 + 2280[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel1AtSepulcro", Vector(-1426,154f, 6,023533f, 4368,642f), Vector(0.0f, -105,7062f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2280[1], &bLocal_6 + 2272);
	*(&bLocal_6 + 2280[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel2AtSepulcro", Vector(-1426,814f, 6,023533f, 4367,644f), Vector(0.0f, -134,1365f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2280[2], &bLocal_6 + 2272);
	*(&bLocal_6 + 2280[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel3AtSepulcro", Vector(-1426,947f, 6,023533f, 4369,498f), Vector(0.0f, -77,14767f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2280[3], &bLocal_6 + 2272);
	*(&bLocal_6 + 2280[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelDialogueAtSepulcro", Vector(-1428,127f, 6,023529f, 4367,745f), Vector(0.0f, 7,554352f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2280[4], &bLocal_6 + 2272);
	*(&bLocal_6 + 2328) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2336[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerStart03", Vector(-1335,886f, 13,051f, 4279,69f), Vector(0.0f, 150,627f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2336[0], &bLocal_6 + 2328);
	*(&bLocal_6 + 2336[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerEnd03", Vector(-1335,886f, 13,051f, 4279,69f), Vector(0.0f, 150,627f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2336[1], &bLocal_6 + 2328);
	*(&bLocal_6 + 2336[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DeSantaEnd03", Vector(-1335,767f, 12,99541f, 4280,204f), Vector(0.0f, -59,45884f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2336[2], &bLocal_6 + 2328);
	*(&bLocal_6 + 2336[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerHorseEnd03", Vector(-1324,691f, 13,1626f, 4267,309f), Vector(-7,063324f, -109,3736f, 8,245247f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2336[3], &bLocal_6 + 2328);
	*(&bLocal_6 + 2336[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DeSantaHeadEnd03", Vector(-1336,21f, 13,051f, 4282,489f), Vector(0.0f, -59,45884f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2336[4], &bLocal_6 + 2328);
	*(&bLocal_6 + 2384) = CREATE_OBJECTSET_IN_LAYOUT("RebelEndCutscene03Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2392[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel0End03", Vector(-1333,768f, 13,05099f, 4282,641f), Vector(0.0f, 8,907767f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2392[0], &bLocal_6 + 2384);
	*(&bLocal_6 + 2392[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel1End03", Vector(-1337,63f, 13,05099f, 4276.0f), Vector(0.0f, -489,3514f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2392[1], &bLocal_6 + 2384);
	*(&bLocal_6 + 2392[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel2End03", Vector(-1330,797f, 13,05098f, 4280.0f), Vector(0.0f, 87,98988f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2392[2], &bLocal_6 + 2384);
	*(&bLocal_6 + 2392[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel3End03", Vector(-1334,938f, 13,05099f, 4274,938f), Vector(0.0f, -200,4303f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2392[3], &bLocal_6 + 2384);
	*(&bLocal_6 + 2392[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DialogueRebelEnd03", Vector(-1332,328f, 13,05098f, 4276,329f), Vector(0.0f, -207,2115f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2392[4], &bLocal_6 + 2384);
	*(&bLocal_6 + 2440) = CREATE_OBJECTSET_IN_LAYOUT("HorseEndCutscene03Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2448[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse0End03", Vector(-1421,507f, 6,008529f, 4370,813f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2448[0], &bLocal_6 + 2440);
	*(&bLocal_6 + 2448[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse1End03", Vector(-1421,592f, 5,821729f, 4373,336f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2448[1], &bLocal_6 + 2440);
	*(&bLocal_6 + 2448[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse2End03", Vector(-1419,094f, 5,861488f, 4370,803f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2448[2], &bLocal_6 + 2440);
	*(&bLocal_6 + 2448[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Horse3End03", Vector(-1420,242f, 6,166512f, 4374,376f), Vector(0.0f, -61,12954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2448[3], &bLocal_6 + 2440);
	*(&bLocal_6 + 2448[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "DialogueHorseEnd03", Vector(-1320,924f, 13,05099f, 4271,189f), Vector(0.0f, -112,0724f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2448[4], &bLocal_6 + 2440);
	*(&bLocal_6 + 2496) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2504[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerStart04", Vector(-792.0f, 13,05098f, 3729,833f), Vector(0.0f, 38,82521f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2504[0], &bLocal_6 + 2496);
	*(&bLocal_6 + 2504[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerHorseStart04", Vector(-781,2715f, 13,01245f, 3726,85f), Vector(0.0f, 189,6276f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2504[1], &bLocal_6 + 2496);
	*(&bLocal_6 + 2504[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelStart04", Vector(-790,6715f, 13,05098f, 3728f), Vector(0.0f, 367,7576f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2504[2], &bLocal_6 + 2496);
	*(&bLocal_6 + 2536) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2544[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerStartLast", Vector(-803,2122f, 13,05097f, 3716,6f), Vector(0.0f, -26,73706f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2544[0], &bLocal_6 + 2536);
	*(&bLocal_6 + 2544[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerEndLast", Vector(-791,275f, 13,0516f, 3710,17f), Vector(0.0f, -130,298f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2544[1], &bLocal_6 + 2536);
	*(&bLocal_6 + 2544[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "PlayerHorseEndLast", Vector(-780,9337f, 12,80098f, 3727,935f), Vector(0,977945f, -173,0403f, -1,501878f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2544[2], &bLocal_6 + 2536);
	*(&bLocal_6 + 2544[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "OutriWhoreEndLast", Vector(-788,769f, 13,0516f, 3706,97f), Vector(0.0f, -18,7286f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2544[3], &bLocal_6 + 2536);
	*(&bLocal_6 + 2544[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "OutroWhoreGotoLast", Vector(-792,9061f, 13,16718f, 3697,833f), Vector(0.0f, 242,6073f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2544[4], &bLocal_6 + 2536);
	*(&bLocal_6 + 2544[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CamOrientLast", Vector(-793,2162f, 14,05098f, 3726,659f), Vector(0.0f, -223,6263f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2544[5], &bLocal_6 + 2536);
	*(&bLocal_6 + 2600) = CREATE_OBJECTSET_IN_LAYOUT("CasaAmyCutsceneLastSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2608[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy0DeadLast", Vector(-800,61f, 13,05f, 3715,47f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2608[0], &bLocal_6 + 2600);
	*(&bLocal_6 + 2608[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy1DeadLast", Vector(-806,18f, 13,05097f, 3711,79f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2608[1], &bLocal_6 + 2600);
	*(&bLocal_6 + 2608[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "CasaArmy2DeadLast", Vector(-797,04f, 13,05097f, 3709,71f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2608[2], &bLocal_6 + 2600);
	*(&bLocal_6 + 2640[03]) = Vector(-1386,635f, 16,62871f, 4308,941f);
	*(&bLocal_6 + 2640[03] + 12) = Vector(0.0f, 120,7193f, 0.0f);
	*(&bLocal_6 + 2640[13]) = Vector(-1419,369f, 5,873005f, 4371,827f);
	*(&bLocal_6 + 2640[13] + 12) = Vector(0.0f, -57,45818f, 0.0f);
	*(&bLocal_6 + 2640[23]) = Vector(-1335,767f, 12,99541f, 4280,204f);
	*(&bLocal_6 + 2640[23] + 12) = Vector(0.0f, -57,45818f, 0.0f);
	*(&bLocal_6 + 2640[33]) = Vector(-1430,471f, 5,873005f, 4383,987f);
	*(&bLocal_6 + 2640[33] + 12) = Vector(0.0f, -64,63998f, 0.0f);
	*(&bLocal_6 + 2744[03]) = Vector(-1346,947f, 13,05099f, 4294,266f);
	*(&bLocal_6 + 2744[03] + 12) = Vector(0.0f, 131,9816f, 0.0f);
	*(&bLocal_6 + 2744[13]) = Vector(-1369,693f, 13,05099f, 4294,177f);
	*(&bLocal_6 + 2744[13] + 12) = Vector(0.0f, 153,735f, 0.0f);
	*(&bLocal_6 + 2800) = CREATE_OBJECTSET_IN_LAYOUT("RebelFirstAttackPos0Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2808[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel0FirstAttackPos0", Vector(-1367,406f, 13,05099f, 4320,348f), Vector(0.0f, -51,83665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2808[0], &bLocal_6 + 2800);
	*(&bLocal_6 + 2808[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel1FirstAttackPos0", Vector(-1370,372f, 13,05099f, 4298,534f), Vector(0.0f, -98,37217f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2808[1], &bLocal_6 + 2800);
	*(&bLocal_6 + 2808[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel2FirstAttackPos0", Vector(-1369,296f, 13,05099f, 4310,208f), Vector(0.0f, -51,83665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2808[2], &bLocal_6 + 2800);
	*(&bLocal_6 + 2808[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel3FirstAttackPos0", Vector(-1375,071f, 13,05099f, 4291,836f), Vector(0.0f, -96,79039f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2808[3], &bLocal_6 + 2800);
	*(&bLocal_6 + 2808[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel4FirstAttackPos0", Vector(-1361,202f, 13,05099f, 4320,477f), Vector(0.0f, -51,83665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2808[4], &bLocal_6 + 2800);
	*(&bLocal_6 + 2856) = CREATE_OBJECTSET_IN_LAYOUT("RebelSecondAttackPos0Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2864[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel0SecondAttackPos0", Vector(-1342,617f, 13,05099f, 4306,234f), Vector(0.0f, -51,83665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2864[0], &bLocal_6 + 2856);
	*(&bLocal_6 + 2864[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel1SecondAttackPos0", Vector(-1360,346f, 13,05099f, 4300,875f), Vector(0.0f, -98,37217f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2864[1], &bLocal_6 + 2856);
	*(&bLocal_6 + 2864[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel2SecondAttackPos0", Vector(-1355,944f, 13,05099f, 4299,225f), Vector(0.0f, -51,83665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2864[2], &bLocal_6 + 2856);
	*(&bLocal_6 + 2864[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel3SecondAttackPos0", Vector(-1347,814f, 13,05099f, 4286,334f), Vector(0.0f, -96,79039f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2864[3], &bLocal_6 + 2856);
	*(&bLocal_6 + 2864[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "Rebel4SecondAttackPos0", Vector(-1337,483f, 13,05099f, 4306,114f), Vector(0.0f, -51,83665f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2864[4], &bLocal_6 + 2856);
	*(&bLocal_6 + 2912) = CREATE_OBJECTSET_IN_LAYOUT("SepulcroGuardPos0Set", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2920[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroGuard0", Vector(-1346,545f, 13,05099f, 4295,356f), Vector(0.0f, 149,5599f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2920[0], &bLocal_6 + 2912);
	*(&bLocal_6 + 2920[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroGuard1", Vector(-1350,283f, 13,05099f, 4288,63f), Vector(0.0f, 130,2092f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2920[1], &bLocal_6 + 2912);
	*(&bLocal_6 + 2920[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroGuard2", Vector(-1357,791f, 13,04197f, 4299,609f), Vector(0.0f, 123,3329f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2920[2], &bLocal_6 + 2912);
	*(&bLocal_6 + 2920[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroGuard3", Vector(-1354,995f, 13,05099f, 4304,596f), Vector(0.0f, 120,3261f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2920[3], &bLocal_6 + 2912);
	*(&bLocal_6 + 2920[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroGuard4", Vector(-1347,79f, 13,05099f, 4293,177f), Vector(0.0f, 135,6103f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2920[4], &bLocal_6 + 2912);
	*(&bLocal_6 + 2920[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SepulcroGuard5", Vector(-1341,553f, 13,05098f, 4301,245f), Vector(0.0f, 90,97581f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2920[5], &bLocal_6 + 2912);
	*(&bLocal_6 + 2976) = CREATE_OBJECTSET_IN_LAYOUT("CasaFlagsSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 2984[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "WhoreFleeTo", Vector(-796.0f, 13,05098f, 3764.0f), Vector(0.0f, -389,5181f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2984[0], &bLocal_6 + 2976);
	*(&bLocal_6 + 2984[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "WhoreCRunTo", Vector(-807,7966f, 16,89852f, 3707,202f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2984[1], &bLocal_6 + 2976);
	*(&bLocal_6 + 2984[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "UpstairsAttack", Vector(-805,6595f, 16,89852f, 3694,176f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2984[2], &bLocal_6 + 2976);
	*(&bLocal_6 + 2984[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "WagonBounds", Vector(-852,8894f, 12,91355f, 3815,232f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2984[3], &bLocal_6 + 2976);
	*(&bLocal_6 + 2984[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "WagonStart", Vector(-899,6647f, 18,09273f, 3834,129f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2984[4], &bLocal_6 + 2976);
	*(&bLocal_6 + 2984[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "RebelCoverPosition", Vector(-800,9064f, 13,051f, 3727,673f), Vector(0.0f, 30,33031f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 2984[5], &bLocal_6 + 2976);
	*(&bLocal_6 + 3040) = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackDownSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 3048[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown01", Vector(-817,2635f, 13,22676f, 3716,48f), Vector(0.0f, -138,0263f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[0], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown02", Vector(-808,625f, 13,05098f, 3709,656f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[1], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown03", Vector(-808,2468f, 13,05098f, 3707,752f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[2], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown04", Vector(-804,3552f, 13,05098f, 3701,17f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[3], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown05", Vector(-789,406f, 13,05098f, 3707,136f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[4], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown06", Vector(-785,4894f, 13,05098f, 3711,815f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[5], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown07", Vector(-801,8536f, 13,05098f, 3708,375f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[6], &bLocal_6 + 3040);
	*(&bLocal_6 + 3048[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackDown08", Vector(-816,9571f, 13,05098f, 3723,515f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3048[7], &bLocal_6 + 3040);
	*(&bLocal_6 + 3120) = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackUpSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 3128[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackUp01", Vector(-815,8548f, 16,8461f, 3715,082f), Vector(0.0f, -131,9682f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3128[0], &bLocal_6 + 3120);
	*(&bLocal_6 + 3128[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackUp02", Vector(-805,0466f, 16,89852f, 3704,812f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3128[1], &bLocal_6 + 3120);
	*(&bLocal_6 + 3128[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackUp03", Vector(-817,9808f, 16,8461f, 3706,609f), Vector(0.0f, -131,9682f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3128[2], &bLocal_6 + 3120);
	*(&bLocal_6 + 3128[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackUp04", Vector(-804,9977f, 16,8461f, 3692,507f), Vector(0.0f, -131,9682f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3128[3], &bLocal_6 + 3120);
	*(&bLocal_6 + 3128[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackUp05", Vector(-801,6591f, 16,89852f, 3701,326f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3128[4], &bLocal_6 + 3120);
	*(&bLocal_6 + 3128[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackUp06", Vector(-806,9894f, 16,8461f, 3687,792f), Vector(0.0f, -131,9682f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3128[5], &bLocal_6 + 3120);
	*(&bLocal_6 + 3184) = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackLeftSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 3192[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackLeft01", Vector(-818,0289f, 13,05098f, 3740,31f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3192[0], &bLocal_6 + 3184);
	*(&bLocal_6 + 3192[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackLeft02", Vector(-828,904f, 13,05098f, 3725,194f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3192[1], &bLocal_6 + 3184);
	*(&bLocal_6 + 3192[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackLeft03", Vector(-831,7933f, 13,05098f, 3714,198f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3192[2], &bLocal_6 + 3184);
	*(&bLocal_6 + 3224) = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackBackSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 3232[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackBack01", Vector(-807,6249f, 13,05098f, 3687,546f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3232[0], &bLocal_6 + 3224);
	*(&bLocal_6 + 3232[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackBack02", Vector(-798,7274f, 13,05098f, 3687,208f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3232[1], &bLocal_6 + 3224);
	*(&bLocal_6 + 3232[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackBack03", Vector(-813,5142f, 13,05098f, 3689,783f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3232[2], &bLocal_6 + 3224);
	*(&bLocal_6 + 3232[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackBack04", Vector(-831,4257f, 13,05098f, 3707,72f), Vector(0.0f, -134,8413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3232[3], &bLocal_6 + 3224);
	*(&bLocal_6 + 3232[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackBack05", Vector(-799,4173f, 13,05098f, 3683,661f), Vector(0.0f, -244,3242f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3232[4], &bLocal_6 + 3224);
	*(&bLocal_6 + 3280) = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackRightSet", &bLocal_6, 8, 0);
	*(&bLocal_6 + 3288[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackRight01", Vector(-775,7743f, 13,05098f, 3704,381f), Vector(0.0f, -313,204f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3288[0], &bLocal_6 + 3280);
	*(&bLocal_6 + 3288[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackRight02", Vector(-781,4497f, 13,05098f, 3697,697f), Vector(0.0f, -169,4503f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3288[1], &bLocal_6 + 3280);
	*(&bLocal_6 + 3288[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackRight03", Vector(-782,5757f, 13,05097f, 3707,967f), Vector(0.0f, -52,86881f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3288[2], &bLocal_6 + 3280);
	*(&bLocal_6 + 3288[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "AttackRight04", Vector(-787,3358f, 13,05098f, 3706,822f), Vector(0.0f, -213,4433f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bLocal_6 + 3288[3], &bLocal_6 + 3280);
	*(&bLocal_6 + 3328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SmokeCasa1", "rand_idle_stand", Vector(-793,2352f, 13,05098f, 3720,15f), Vector(0.0f, 176,8846f, 0.0f));
	*(&bLocal_6 + 3336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "SmokeCasa2", "rand_idle_stand", Vector(-811,3754f, 13,05098f, 3713,183f), Vector(0.0f, 236,912f, 0.0f));
	*(&bLocal_6 + 3344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "rebel02_cs02_v", "rebel02_cs02_v", Vector(-1386,635f, 16,62871f, 4308,941f), Vector(0.0f, 120,7193f, 0.0f));
	*(&bLocal_6 + 3352) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverRightCorner_rebel_start", Vector(-791,0948f, 13,05098f, 3726,799f), Vector(0.0f, 135,6715f, 0.0f), 1);
	*(&bLocal_6 + 3360) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverRightCorner_0_DOWN_LEFT", Vector(-816,186f, 13,05098f, 3715,877f), Vector(0.0f, -47,35138f, 0.0f), 1);
	*(&bLocal_6 + 3368) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverLeftCorner_1_DOWN_MIDDLE", Vector(-808,7753f, 13,2208f, 3708,6f), Vector(0.0f, 44,12181f, 0.0f), 1);
	*(&bLocal_6 + 3376) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverLeftCorner_2_DOWN_RIGHT", Vector(-804,4324f, 13,05098f, 3704,116f), Vector(0.0f, 46,25525f, 0.0f), 1);
	*(&bLocal_6 + 3384) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverLow_3_UP_REAR", Vector(-814,3682f, 16,70065f, 3713,648f), Vector(0.0f, -134,5891f, 0.0f), 4);
	*(&bLocal_6 + 3392) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverLow_4_UP_LEFT", Vector(-807,8585f, 16,85747f, 3707,326f), Vector(0.0f, -134,5891f, 0.0f), 4);
	*(&bLocal_6 + 3400) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverLow_5_UP_RIGHT", Vector(-805,0452f, 16,78913f, 3703,989f), Vector(0.0f, -134,5891f, 0.0f), 4);
	*(&bLocal_6 + 3408) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverLow_two0", Vector(-814,0518f, 13,051f, 3724,316f), Vector(0.0f, -132,9721f, 0.0f), 4);
	*(&bLocal_6 + 3416) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverRightCorner_two1", Vector(-811,9688f, 12,99737f, 3711,613f), Vector(0.0f, -47,35138f, 0.0f), 1);
	*(&bLocal_6 + 3424) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &bLocal_6, "coverRightCorner_two2", Vector(-816,2787f, 13,05098f, 3727,967f), Vector(0.0f, 46,39547f, 0.0f), 1);
	PushArrayP();
	*(&bLocal_6 + 3432) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "SepulcroPath");
	PushArrayP();
	*(&bLocal_6 + 3440) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "RebelPath_A");
}

int A)&YEùÄ®ýA.IþE Ä®SA9'^EéÜÄ® AEäfEâ=(int iParam0, bool bParam1, int iParam2, struct<2> Param3, struct<2> Param5, var uParam7, bool bParam8, var uParam9, var uParam10, int iParam11, var uParam12, var uParam13, struct<2> Param14, int iParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40) //Position: 0x228EA / 141546
{
	*(&bLocal_6 + 3448) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
	PushArrayP();
	*(&bLocal_6 + 3456) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "Rebel0Path1");
	PushArrayP();
	*(&bLocal_6 + 3464) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "Rebel1Path1");
	PushArrayP();
	*(&bLocal_6 + 3472) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "Rebel2Path1");
	PushArrayP();
	*(&bLocal_6 + 3480) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "Rebel3Path1");
	PushArrayP();
	*(&bLocal_6 + 3488) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "DialogueRebelPath1");
	PushArrayP();
	*(&bLocal_6 + 3496) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "CasaPath");
	PushArrayP();
	*(&bLocal_6 + 3504) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "Whore3_FleePath");
	PushArrayP();
	*(&bLocal_6 + 3512) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &bLocal_6, "CasaArmyTwoPath");
	Unknown_Function();
	*(&bLocal_6 + 3520) = 1;
	Unknown_Function();
	*(&bLocal_6 + 3528) = 1;
	return;
	iParam0 = &iParam0;
	bParam1 = &bParam1;
	iParam2 = &iParam2;
	Param3 = Param3;
	Param5 = Param5;
	uParam7 = uParam7;
	return "";
	switch (&bParam1)
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
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_595())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_590(&iLocal_1042))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_1025))
		{
			Unknown_Function();
			iLocal_1025 = 0;
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1027))
		{
			bLocal_1027 = Function_318(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1027, 1))
		{
			return 0;
		}
	}
	return 1;
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iParam11 = iParam0;
	if (iParam11 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = &iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_34(&(Global_43791[Global_46722[3]]), 4))
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
		uParam13 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uParam13), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_576(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		uParam12 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			uParam12 = Function_589(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			uParam12 = Function_584(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&uParam12))
		{
			Param14 = &Param3;
			Param14.f_4 = &uParam4;
			Param14.f_8 = &Param5;
			if (Function_105((0 / 0 == 0), Param14))
			{
				iParam16 = 0;
				while (iParam16 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iParam1628] + 160))
					{
						Param14 = (&Global_6667[iParam1628] + 88);
					}
					iParam16++;
				}
			}
			uParam12 = CREATE_ACTOR_IN_LAYOUT(false, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Param14, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&uParam12))
	{
		REFERENCE_ACTOR(&uParam12);
		TASK_CLEAR(&uParam12);
		TASK_PRIORITY_SET(&uParam12, true);
		MAKE_ACTOR_READY_FOR_ACTION(&uParam12, 1);
		SET_ACTOR_UPDATE_PRIORITY(&uParam12, false);
		Function_583(&uParam12, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&uParam12));
		}
		SET_ACTOR_FACTION(&uParam12, 20);
		MEMORY_CONSIDER_AS(&uParam12, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&uParam12, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uParam12, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uParam12, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&uParam12))
		{
			FREE_FROM_HOGTIE(&uParam12);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&uParam12, 0);
			SET_ANIM_SET_FOR_ACTOR(&uParam12, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uParam12, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam12, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&uParam12, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&uParam12, 3);
		SET_ACTOR_IS_COMPANION(&uParam12, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam12, false);
		SET_ACTOR_IS_AMBIENT(&uParam12, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam12, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam12, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&uParam12, 0);
		Function_582(&uParam12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam12, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&uParam12, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&uParam12, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&uParam12, 1);
		if (DECOR_CHECK_EXIST(&uParam12, "hidden"))
		{
			DECOR_REMOVE(&uParam12, "hidden");
		}
		SET_DRAW_ACTOR(&uParam12, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam12, 1);
		*(&Global_15402[iParam014] + 8) = &uParam12;
		return &uParam12;
	}
	return "";
}

void Function_582(var uParam0, bool bParam1) //Position: 0x23A09 / 145929
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_583(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x23A2B / 145963
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

var Function_584(int iParam0, int iParam1) //Position: 0x23A8C / 146060
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_588(iParam0))
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
						Function_585(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_585(var uParam0, int iParam1) //Position: 0x23B1A / 146202
{
	Function_587(&uParam0);
	Function_586(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_586(int iParam0) //Position: 0x23B46 / 146246
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_587(int iParam0) //Position: 0x23B6C / 146284
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

bool Function_588(int iParam0) //Position: 0x23C42 / 146498
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_589(int iParam0, var uParam1) //Position: 0x23C59 / 146521
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

bool Function_590(struct<2>[] Param0) //Position: 0x23CFF / 146687
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_594();
	iVar1 = 0;
	if (!Function_206(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_593(&(Param0[iVar02]), 8);
		}
		else if (Function_592())
		{
			iVar1 = 1;
			Function_593(&(Param0[iVar02]), 8);
		}
		Function_593(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_206(&(Param0[iVar02]), 4))
		{
			if (!Function_206(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_206(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_206(&(Param0[02]), 8) || iVar1));
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
				Function_593(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_206(&(Param0[iVar02]), 4))
		{
			if (!Function_206(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_593(&(Param0[iVar02]), 2);
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
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_593(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_593(&(Param0[iVar02]), 2);
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
	Function_591();
	return 1;
}

void Function_591() //Position: 0x240C3 / 147651
{
	if (!Function_335(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_592() //Position: 0x24103 / 147715
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

void Function_593(struct<13> Param0) //Position: 0x24131 / 147761
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_594() //Position: 0x24144 / 147780
{
	if (!Function_335(128))
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

bool Function_595() //Position: 0x24186 / 147846
{
	Function_598(&bLocal_6 + 8, 538, 2, 0);
	Function_598(&bLocal_6 + 8, 534, 2, 0);
	Function_598(&bLocal_6 + 8, 537, 2, 0);
	Function_598(&bLocal_6 + 8, 535, 2, 0);
	Function_598(&bLocal_6 + 8, 529, 2, 0);
	Function_598(&bLocal_6 + 8, 984, 2, 0);
	Function_598(&bLocal_6 + 8, 990, 2, 0);
	Function_598(&bLocal_6 + 8, 988, 2, 0);
	Function_598(&bLocal_6 + 8, 977, 2, 0);
	Function_598(&bLocal_6 + 8, 986, 2, 0);
	Function_598(&bLocal_6 + 8, 380, 2, 0);
	Function_598(&bLocal_6 + 8, 396, 2, 0);
	Function_598(&bLocal_6 + 8, 392, 2, 0);
	Function_598(&bLocal_6 + 8, 379, 2, 0);
	Function_598(&bLocal_6 + 8, 395, 2, 0);
	Function_598(&bLocal_6 + 8, 393, 2, 0);
	Function_598(&bLocal_6 + 8, 556, 2, 0);
	Function_598(&bLocal_6 + 8, 1128, 2, 0);
	Function_598(&bLocal_6 + 8, 518, 2, 0);
	Function_598(&bLocal_6 + 8, 520, 2, 0);
	Function_598(&bLocal_6 + 8, 383, 2, 0);
	Function_598(&bLocal_6 + 8, 394, 2, 0);
	Function_598(&bLocal_6 + 8, 385, 2, 0);
	Function_598(&bLocal_6 + 8, 249, 2, 0);
	Function_598(&bLocal_6 + 8, 245, 2, 0);
	Function_598(&bLocal_6 + 8, 315, 2, 0);
	Function_598(&bLocal_6 + 8, 248, 2, 0);
	Function_598(&bLocal_6 + 8, 687, 2, 0);
	Function_596(&bLocal_6 + 8, "p_uti_cover2x1x", 0, 0);
	Function_596(&bLocal_6 + 8, "p_uti_cover1x1x", 0, 0);
	Function_596(&bLocal_6 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_596(&bLocal_6 + 8, "$/content/scripting/gringo/simplegringo/rebel02_cs02_v", 1, 0);
	if (Function_590(&bLocal_6 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_596(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x243C1 / 148417
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_597(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_593(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_597(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x243FF / 148479
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_206(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_593(&(Param0[iVar02]), 4);
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

var Function_598(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x244CE / 148686
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_206(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_593(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_593(&(Param0[iVar02]), 8);
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

void Function_599() //Position: 0x245AA / 148906
{
	Function_596(&iLocal_1042, "Rebel02", 10, 0);
	Function_598(&iLocal_1042, 518, 3, 0);
	Function_598(&iLocal_1042, 250, 3, 0);
	Function_598(&iLocal_1042, 557, 3, 0);
	Function_596(&iLocal_1042, "DEAD_GROUND_MALE", 5, 0);
	Function_596(&iLocal_1042, "DEAD_GROUND_FEMALE", 5, 0);
	Function_596(&iLocal_1042, "tense_with_guns", 5, 0);
	Function_596(&iLocal_1042, "custom/tense_with_guns", 8, 0);
	Function_596(&iLocal_1042, "stolen_panic", 5, 0);
	Function_596(&iLocal_1042, "custom/stolen_panic", 8, 0);
	Function_596(&iLocal_1042, "reb02_santa_ground", 5, 0);
	Function_596(&iLocal_1042, "custom/reb02_santa_ground", 8, 0);
	Function_596(&iLocal_1042, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_woman", 1, 0);
	return;
}

void Function_600(int iParam0, bool bParam1) //Position: 0x24727 / 149287
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_607(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_305(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_127();
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
	if (!Function_305(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_606();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_263();
	Function_294();
	Function_253("");
	Function_605(0);
	Function_604();
	Function_58();
	Function_57();
	ENABLE_JOURNAL_REPLAY(0);
	Function_603();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_318(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_403(0, 0x40400000);
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
	Function_602(13);
	Function_602(14);
	Function_602(25);
	Function_602(24);
	Function_602(12);
	Function_602(27);
	Function_602(26);
	Function_602(15);
	Function_601();
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

void Function_601() //Position: 0x24B67 / 150375
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

void Function_602(int iParam0) //Position: 0x24BEC / 150508
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_603() //Position: 0x24C0C / 150540
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

void Function_604() //Position: 0x24C52 / 150610
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_605(int iParam0) //Position: 0x24C68 / 150632
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_61())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_606() //Position: 0x24CA1 / 150689
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_607(int iParam0, int iParam1) //Position: 0x24CAA / 150698
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
			Function_608(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_608(struct<113> Param0) //Position: 0x24D31 / 150833
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

void Function_609() //Position: 0x24D8F / 150927
{
	return;
}

bool Function_610(struct<25> Param0) //Position: 0x24D95 / 150933
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					Function_613();
					break;
			}
			break;
		
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					Function_612();
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
			Function_611(&Param0, 1);
			return 1;
		}
	}
	Function_611(&Param0, 0);
	return 0;
}

void Function_611(struct<25> Param0) //Position: 0x24E5D / 151133
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

void Function_612() //Position: 0x24E88 / 151176
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_JonAssaultsLuisa", "Rebel02_JonAssaultsLuisa", false, 1, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_613() //Position: 0x24EE1 / 151265
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_ShootsLuisa", "Rebel02_ShootsLuisa", false, 1, 1, 0, 1);
		Function_345(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_614(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x24F30 / 151344
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
		Function_611(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_429(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_632(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_632(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_618(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_611(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_617(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_616(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_617(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_615(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_253(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_616(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_611(&Param2, 0);
	return 0;
}

void Function_615(char* cParam0) //Position: 0x25346 / 152390
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

void Function_616(struct<25> Param0) //Position: 0x2543A / 152634
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
			Function_27(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_27(&iParam2, 2);
			break;
	}
	Function_27(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_617(bool bParam0) //Position: 0x254B2 / 152754
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_27(&iVar0, 1);
	Function_27(&iVar0, 2);
	Function_27(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_618(struct<57> Param0) //Position: 0x254D6 / 152790
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
			return Function_629(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_622(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_629(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_619(&Param0, bVar2);
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
						bVar2 = Function_629(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_619(&Param0, bVar2);
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

var Function_619(int iParam0, bool bParam1) //Position: 0x25647 / 153159
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
				bParam1 = Function_621(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_620(16);
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
				bParam1 = Function_621(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_620(256);
			}
		}
	}
	return bParam1;
}

bool Function_620(int iParam0) //Position: 0x25783 / 153475
{
	return 2 | iParam0;
}

int Function_621(int iParam0) //Position: 0x2578D / 153485
{
	return 4 | iParam0;
}

int Function_622(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x25797 / 153495
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
				iParam3 = Function_628(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_108(&iParam3, 2);
					Function_27(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_620(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_623(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_108(&iParam3, 2);
					Function_27(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_620(16);
		}
	}
	return 0;
}

int Function_623(int iParam0, vector3 vParam1) //Position: 0x25852 / 153682
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_627(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_626(iVar0, 3, 1, bParam3))
			{
				if (!Function_632(&iParam0, 8, 1))
				{
					return Function_625(64, 1024, bParam2);
				}
			}
			return Function_624(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_626(iVar0, 2, 1, bParam3))
			{
				if (!Function_632(&iParam0, 32, 1))
				{
					return Function_625(64, 1024, bParam2);
				}
			}
			return Function_624(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_626(iVar0, 1, 1, bParam3))
			{
				if (!Function_632(&iParam0, 64, 1))
				{
					return Function_625(64, 1024, bParam2);
				}
			}
			return Function_624(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_626(iVar0, 3, 1, bParam3))
			{
				if (!Function_632(&iParam0, 128, 1))
				{
					return Function_625(64, 1024, bParam2);
				}
			}
			return Function_624(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_626(iVar0, 1, 1, bParam3))
			{
				if (!Function_632(&iParam0, 1024, 1))
				{
					return Function_625(64, 1024, bParam2);
				}
			}
			return Function_624(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_626(iVar0, 1, 1, bParam3))
			{
				if (!Function_632(&iParam0, 1024, 1))
				{
					return Function_625(64, 1024, bParam2);
				}
			}
			return Function_624(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_624(int iParam0, int iParam1, bool bParam2) //Position: 0x25A1A / 154138
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_625(int iParam0, int iParam1, bool bParam2) //Position: 0x25A2F / 154159
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_626(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x25A44 / 154180
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_627(int iParam0) //Position: 0x25A61 / 154209
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

int Function_628(var uParam0, vector3 vParam1) //Position: 0x25AD4 / 154324
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_627(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_626(iVar0, 3, 1, bParam2))
			{
				if (!Function_632(&uParam0, 8, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000009:
			if (Function_626(iVar0, 3, 1, bParam2))
			{
				if (!Function_632(&uParam0, 8, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x0000006E:
			if (Function_626(iVar0, 2, 1, bParam2))
			{
				if (!Function_632(&uParam0, 16, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x0000005B:
			if (Function_626(iVar0, 2, 1, bParam2))
			{
				if (!Function_632(&uParam0, 32, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000031:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&uParam0, 64, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000007:
			if (Function_626(iVar0, 3, 1, bParam2))
			{
				if (!Function_632(&uParam0, 128, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000008:
			if (Function_626(iVar0, 2, 1, bParam2))
			{
				if (!Function_632(&uParam0, 256, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000014:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&uParam0, 512, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000018:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&uParam0, 512, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000057:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&uParam0, 1024, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000058:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&uParam0, 1024, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_629(struct<65> Param0) //Position: 0x25CFD / 154877
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
						return Function_628(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_632(&Param0, 2, 1))
					{
						return Function_621(8);
					}
					return Function_620(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_632(&Param0, 4, 1))
					{
						return Function_621(16);
					}
					return Function_620(16);
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
							return Function_623(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_632(&Param0, 2, 1))
						{
							return Function_621(128);
						}
						return Function_620(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_632(&Param0, 4, 1))
						{
							return Function_621(256);
						}
						return Function_620(256);
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
						return Function_623(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_632(&Param0, 2, 1))
					{
						return Function_621(8);
					}
					return Function_620(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_632(&Param0, 4, 1))
					{
						return Function_621(16);
					}
					return Function_620(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_631(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_632(&Param0, 2, 1))
					{
						return Function_621(8);
					}
					return Function_620(8);
				}
				if (!Function_632(&Param0, 4, 1))
				{
					return Function_621(16);
				}
				return Function_620(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_623(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_108(&iParam4, 2);
								Function_27(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_630(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_620(128);
							}
							if (!Function_632(&Param0, 2, 1))
							{
								return Function_621(8);
							}
							return Function_620(8);
						}
						if (iParam4 == 2)
						{
							if (Function_630(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_620(256);
							}
							if (!Function_632(&Param0, 4, 1))
							{
								return Function_621(16);
							}
							return Function_620(16);
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

bool Function_630(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x25FE3 / 155619
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

int Function_631(int iParam0, vector3 vParam1) //Position: 0x260B1 / 155825
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_627(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_626(iVar0, 2, 1, bParam2))
			{
				if (!Function_632(&iParam0, 16, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x0000005B:
			if (Function_626(iVar0, 2, 1, bParam2))
			{
				if (!Function_632(&iParam0, 32, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000057:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&iParam0, 1024, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		case 0x00000058:
			if (Function_626(iVar0, 1, 1, bParam2))
			{
				if (!Function_632(&iParam0, 1024, 1))
				{
					return Function_621(64);
				}
			}
			return Function_620(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_632(struct<69> Param0) //Position: 0x261D3 / 156115
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

bool Function_633(bool bParam0) //Position: 0x261FD / 156157
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_634(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x2621B / 156187
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

