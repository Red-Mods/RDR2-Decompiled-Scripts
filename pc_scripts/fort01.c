//Decompiled with MagicRDR v1.0
//Function Count : 640
//Statics Count : 1913
//Natives Count : 822
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 15;
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
	var uLocal_68 = 6;
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
	var uLocal_94 = 14;
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
	var uLocal_152 = 4;
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
	var uLocal_170 = 5;
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
	var uLocal_192 = 3;
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
	var uLocal_208 = 4;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 3;
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
	var uLocal_272 = 3;
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
	var uLocal_288 = 3;
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
	var uLocal_320 = 5;
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
	var uLocal_342 = 2;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 2;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 6;
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
	var uLocal_374 = 7;
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
	var uLocal_398 = 14;
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
	var uLocal_430 = 11;
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
	var uLocal_456 = 17;
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
	var uLocal_494 = 24;
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
	var uLocal_546 = 24;
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
	var uLocal_598 = 4;
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
	var uLocal_618 = 6;
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
	var uLocal_634 = 6;
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
	var uLocal_650 = 6;
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
	var uLocal_666 = 6;
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
	var uLocal_682 = 6;
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
	var uLocal_698 = 2;
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
	var uLocal_712 = 2;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 2;
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
	var uLocal_734 = 2;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 1;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 1;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 1;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 1;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 2;
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
	var uLocal_784 = 2;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 2;
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
	var uLocal_806 = 2;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 6;
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
	var uLocal_830 = 7;
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
	var uLocal_848 = 3;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 2;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 3;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 10;
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
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 10;
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
	var uLocal_962 = 4;
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
	var uLocal_974 = 19;
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
	var uLocal_1092 = 8;
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
	int iLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	struct<6> Local_1237 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	int iLocal_1249 = 29;
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
	var uLocal_1335 = 0;
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
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	int iLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	bool bLocal_1387 = false;
	int iLocal_1388 = 0;
	int iLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	bool bLocal_1392 = false;
	var uLocal_1393 = 0;
	bool bLocal_1394 = false;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	bool bLocal_1398 = false;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	bool bLocal_1402 = false;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	int iLocal_1406[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	bool bLocal_1418 = false;
	bool bLocal_1419 = false;
	bool bLocal_1420 = false;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 13;
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
	var uLocal_1437 = 0;
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
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	struct<15> Local_1487[8];
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 5;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 5;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 5;
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
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 5;
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
	int iLocal_1729 = 0;
	bool bLocal_1730 = false;
	bool bLocal_1731 = false;
	var uLocal_1732 = 0;
	bool bLocal_1733 = false;
	var uLocal_1734 = 0;
	bool bLocal_1735 = false;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	int iLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 4;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	bool bLocal_1755 = false;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	bool bLocal_1764 = false;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	bool bLocal_1768 = false;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	bool bLocal_1772 = false;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	bool bLocal_1776 = false;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	bool bLocal_1780 = false;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	bool bLocal_1784 = false;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	bool bLocal_1788 = false;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	bool bLocal_1792 = false;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	struct<2> Local_1801 = { 0, 0 } ;
	var uLocal_1803 = 0;
	int iLocal_1804 = 0;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	char[] cLocal_1807[4] = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 2;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	int iLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 2;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	int iLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 2;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
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
	iLocal_1234 = 0;
	Local_1237 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_1387 = 99;
	iLocal_1388 = 6;
	iLocal_1375 = 1000;
	while (Function_267())
	{
		Function_222();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x44 / 68
{
	ENABLE_CHILD_SECTOR("fom_guardTowerProps02x");
	ENABLE_CHILD_SECTOR("fom_corral01x");
	ENABLE_CHILD_SECTOR("fom_guardTower01x");
	ENABLE_CHILD_SECTOR("fom_guardTower02x");
	ENABLE_CHILD_SECTOR("fom_courtyardProps01x");
	ENABLE_CHILD_SECTOR("fom_leftWingProps01x");
	ENABLE_CHILD_SECTOR("fom_gallowsProps01x");
	ENABLE_CHILD_SECTOR("fom_guardTowerProps01x");
	ENABLE_CHILD_SECTOR("fom_gallows01x");
	ENABLE_CHILD_SECTOR("fom_corralProps01x");
	ENABLE_CHILD_SECTOR("fom_rightWing01x");
	ENABLE_CHILD_SECTOR("fom_rightWingProps01x");
	ENABLE_CHILD_SECTOR("fom_leftWing01x");
	if (IS_ACTOR_VALID(&iLocal_4 + 1136[22]))
	{
		DESTROY_ACTOR(&iLocal_4 + 1136[22]);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 1072[22]))
	{
		DESTROY_ACTOR(&iLocal_4 + 1072[22]);
	}
	Function_221(1);
	SET_TIME_ACCELERATION(1.0f);
	if (iLocal_1804)
	{
		ENABLE_MOVER(&Global_54076);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		Function_220(&iLocal_4 + 808);
		DESTROY_OBJECT(&iLocal_4 + 808);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPreventCam"))
	{
		DECOR_SET_BOOL(&Global_54076, "bPreventCam", 1);
	}
	Function_219();
	Global_6663 = 0;
	if (!IS_HUD_MAP_VISIBLE())
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	SET_WAGON_TO_WAGON_JACK_ENABLE(0, 0);
	if (IS_HUD_MAP_SCALE_OVERRIDE_SET())
	{
		ABORT_HUD_MAP_SCALE_OVERRIDE();
	}
	RESET_GAME_CAMERA_CURVE_OVERRIDES();
	if (DECOR_CHECK_EXIST(&Global_54076, "MountCompleteFort01"))
	{
		DECOR_REMOVE(&Global_54076, "MountCompleteFort01");
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1392);
	if (IS_ACTOR_VALID(&bLocal_1735))
	{
		DESTROY_ACTOR(&bLocal_1735);
		DESTROY_OBJECT(&uLocal_1756);
		Function_218();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_1837))
	{
		DESTROY_LAYOUT_OBJECTS(&iLocal_1837);
		Function_217();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_1869))
	{
		DESTROY_LAYOUT_OBJECTS(&iLocal_1869);
		Function_216();
	}
	Function_213(2, 1, 0, 1, 1);
	Function_213(1, 1, 0, 1, 1);
	Function_213(4, 1, 0, 1, 1);
	Function_213(0, 1, 0, 1, 1);
	Function_212(&uLocal_1235);
	Function_212(&iLocal_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_211();
	Function_182(bLocal_1419, 0, 0, 1, 0, 0, 1, 1);
	Function_181();
	Function_177(&iLocal_1249);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_1390))
	{
		DESTROY_ITERATOR(&uLocal_1390);
	}
	RELEASE_LAYOUT_REF(&uLocal_1235);
	if (bLocal_1418)
	{
		Function_26(Local_1237, 1, 1, 1, 0);
	}
	else if (bLocal_1419)
	{
		Function_22(Local_1237);
	}
	else
	{
		Function_2(Local_1237);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x363 / 867
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x384 / 900
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x3A1 / 929
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x3C4 / 964
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x3DB / 987
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

void Function_7(int iParam0) //Position: 0x47D / 1149
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x4A0 / 1184
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

void Function_9() //Position: 0x4EA / 1258
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x503 / 1283
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

void Function_11(var uParam0, int iParam1) //Position: 0x556 / 1366
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

struct<16> Function_12(int iParam0) //Position: 0x680 / 1664
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

bool Function_13() //Position: 0x6BA / 1722
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x6D5 / 1749
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x6E2 / 1762
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x702 / 1794
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x719 / 1817
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x734 / 1844
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x97B / 2427
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x9A7 / 2471
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

bool Function_21(int iParam0) //Position: 0x9CB / 2507
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x9E0 / 2528
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x9FE / 2558
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
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
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xAA4 / 2724
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

struct<24> Function_25(char* cParam0) //Position: 0xAE3 / 2787
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD39 / 3385
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

void Function_27() //Position: 0xE2D / 3629
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

int Function_28(int iParam0, bool bParam1) //Position: 0xE5F / 3679
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

int Function_29(int iParam0) //Position: 0xE9D / 3741
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xEB7 / 3767
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xECD / 3789
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11CA / 4554
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

void Function_33(char* cParam0) //Position: 0x123F / 4671
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1279 / 4729
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

bool Function_35(var uParam0, int iParam1) //Position: 0x12F5 / 4853
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1308 / 4872
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

int Function_37(int iParam0) //Position: 0x13A9 / 5033
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x13E6 / 5094
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13FC / 5116
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
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
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x165A / 5722
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1698 / 5784
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

void Function_42(bool bParam0) //Position: 0x16D7 / 5847
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

void Function_43() //Position: 0x172C / 5932
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

void Function_44() //Position: 0x1777 / 6007
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

void Function_45() //Position: 0x187D / 6269
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

void Function_46() //Position: 0x18B0 / 6320
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

void Function_47() //Position: 0x1A43 / 6723
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

void Function_48() //Position: 0x1BFC / 7164
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1C0A / 7178
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

var Function_50() //Position: 0x1E27 / 7719
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1E3C / 7740
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1EE3 / 7907
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x217F / 8575
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

var Function_54() //Position: 0x27BD / 10173
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x27C6 / 10182
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27D7 / 10199
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

struct<32> Function_57(char* cParam0) //Position: 0x28CE / 10446
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x28E9 / 10473
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2950 / 10576
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2962 / 10594
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2974 / 10612
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

int Function_62(int iParam0) //Position: 0x2AA8 / 10920
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2AB7 / 10935
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2AF0 / 10992
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2B2D / 11053
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2CC7 / 11463
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

int Function_67(bool bParam0) //Position: 0x2F0B / 12043
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2F4C / 12108
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

struct<8> Function_69() //Position: 0x2FD5 / 12245
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

struct<8> Function_70() //Position: 0x306C / 12396
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

void Function_71() //Position: 0x30EB / 12523
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3128 / 12584
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

void Function_73() //Position: 0x3334 / 13108
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

bool Function_74(char* cParam0) //Position: 0x33EB / 13291
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3403 / 13315
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

struct<8> Function_76() //Position: 0x34FB / 13563
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3505 / 13573
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3516 / 13590
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x352C / 13612
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x35F8 / 13816
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3615 / 13845
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

bool Function_82(int iParam0) //Position: 0x3E41 / 15937
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3E7C / 15996
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3E8B / 16011
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
							else if (iVar0 != Global_46866[7])
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

bool Function_85(int iParam0) //Position: 0x4368 / 17256
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x437E / 17278
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x439D / 17309
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x43B7 / 17335
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4421 / 17441
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

void Function_90(int iParam0) //Position: 0x4649 / 17993
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

void Function_91() //Position: 0x46E7 / 18151
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

void Function_92() //Position: 0x4849 / 18505
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

int Function_93(int iParam0, char* cParam1) //Position: 0x48C9 / 18633
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4C20 / 19488
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

int Function_95(int iParam0) //Position: 0x4CA8 / 19624
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4CC2 / 19650
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4CED / 19693
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4D1B / 19739
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4FB7 / 20407
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

void Function_100(int iParam0, int iParam1) //Position: 0x518B / 20875
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

int Function_101(int iParam0, char* cParam1) //Position: 0x53F5 / 21493
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

int Function_102() //Position: 0x5585 / 21893
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

void Function_103() //Position: 0x5626 / 22054
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

void Function_104(int iParam0) //Position: 0x56E4 / 22244
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

var Function_105(int iParam0) //Position: 0x574A / 22346
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

int Function_106(int iParam0, bool bParam1) //Position: 0x57D9 / 22489
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

var Function_107(int iParam0, int iParam1) //Position: 0x5985 / 22917
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

void Function_108() //Position: 0x59CA / 22986
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x59E0 / 23008
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5A20 / 23072
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5A60 / 23136
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5A6F / 23151
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

int Function_113(int iParam0) //Position: 0x5C37 / 23607
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

var Function_114() //Position: 0x5CCC / 23756
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5CF1 / 23793
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x61C0 / 25024
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

var Function_117(int iParam0) //Position: 0x64E7 / 25831
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x658A / 25994
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6787 / 26503
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6932 / 26930
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6A04 / 27140
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

void Function_122(int iParam0) //Position: 0x731F / 29471
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x749C / 29852
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x75A7 / 30119
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x75D3 / 30163
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

var Function_126(vector3 vParam0) //Position: 0x762A / 30250
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

void Function_127(var uParam0, int iParam1) //Position: 0x7678 / 30328
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x76D3 / 30419
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

void Function_129() //Position: 0x7874 / 30836
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x787A / 30842
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7929 / 31017
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x797E / 31102
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7994 / 31124
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

bool Function_134(int iParam0, int iParam1) //Position: 0x79E5 / 31205
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

void Function_135(var uParam0, int iParam1) //Position: 0x7A12 / 31250
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7A23 / 31267
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7A3D / 31293
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7A4E / 31310
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

void Function_139(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7BAA / 31658
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

bool Function_140() //Position: 0x7C35 / 31797
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7C62 / 31842
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

int Function_142(int iParam0) //Position: 0x7E12 / 32274
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

void Function_143(var uParam0, int iParam1) //Position: 0x7E69 / 32361
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7E8E / 32398
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7EE4 / 32484
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

bool Function_146(bool bParam0) //Position: 0x7F43 / 32579
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7F4F / 32591
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7F6B / 32619
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

bool Function_149() //Position: 0x7FBD / 32701
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7FED / 32749
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

int Function_151(int iParam0, int iParam1) //Position: 0x806A / 32874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x80C7 / 32967
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

int Function_153(int iParam0, int iParam1) //Position: 0x813A / 33082
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x8195 / 33173
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8455 / 33877
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

void Function_156(int iParam0, bool bParam1) //Position: 0x86F4 / 34548
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

void Function_157() //Position: 0x8763 / 34659
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

int Function_158(int iParam0, int iParam1) //Position: 0x87E3 / 34787
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

int Function_159(int iParam0) //Position: 0x9446 / 37958
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x945B / 37979
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

void Function_161(var uParam0, int iParam1) //Position: 0x94AA / 38058
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9502 / 38146
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
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

bool Function_163(int iParam0, int iParam1) //Position: 0x9575 / 38261
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9589 / 38281
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

var Function_165(int iParam0) //Position: 0x967A / 38522
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

bool Function_166(var uParam0, int iParam1) //Position: 0x96D2 / 38610
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x96EF / 38639
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

bool Function_168(int iParam0) //Position: 0x9749 / 38729
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x975B / 38747
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

void Function_170(struct<185> Param0) //Position: 0x978F / 38799
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

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x97FA / 38906
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

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x98E4 / 39140
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

void Function_173() //Position: 0x9A63 / 39523
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9A6F / 39535
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

void Function_175() //Position: 0x9AB5 / 39605
{
	Function_176();
	return;
}

void Function_176() //Position: 0x9ABE / 39614
{
	Function_177(&iLocal_4 + 8);
	Function_177(&iLocal_4 + 256);
	Function_177(&iLocal_4 + 360);
	Function_177(&iLocal_4 + 592);
	Function_177(&iLocal_4 + 664);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177(int iParam0) //Position: 0x9AF1 / 39665
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_178(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_178(struct<2>[] Param0, int iParam1) //Position: 0x9B19 / 39705
{
	if (Function_180(&(Param0[iParam12]), 4))
	{
		if (Function_180(&(Param0[iParam12]), 1))
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
			Function_179(&(Param0[iParam12]), 1);
			Function_179(&(Param0[iParam12]), 2);
			Function_179(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_179(struct<13> Param0) //Position: 0x9C64 / 40036
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_180(struct<13> Param0) //Position: 0x9C81 / 40065
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181() //Position: 0x9C9F / 40095
{
	if (IS_BLIP_VALID(&uLocal_1753))
	{
		REMOVE_BLIP(&uLocal_1753);
	}
	if (IS_OBJECT_ANIMATOR_VALID(&uLocal_1756))
	{
		DESTROY_OBJECT_ANIMATOR(&uLocal_1756);
	}
	if (IS_ACTOR_VALID(&bLocal_1735))
	{
		RELEASE_ACTOR(&bLocal_1735);
	}
	if (IS_POPSET_VALID(&uLocal_1760))
	{
		DESTROY_POPULATION_SET(&uLocal_1760);
	}
	if (IS_POPSET_VALID(&uLocal_1762))
	{
		DESTROY_POPULATION_SET(&uLocal_1762);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		if (IS_ACTOR_VALID(&bLocal_1733))
		{
			SQUAD_LEAVE(&bLocal_1733);
		}
		if (IS_ACTOR_VALID(&bLocal_1731))
		{
			SQUAD_LEAVE(&bLocal_1731);
		}
		if (IS_ACTOR_VALID(&bLocal_1392))
		{
			SQUAD_LEAVE(&bLocal_1392);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1758))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1758);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_1819))
	{
		Function_218();
	}
	return;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9D57 / 40279
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_210());
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
	Function_209();
	CLEAR_PRINTED_OBJECTIVE();
	Function_219();
	Function_207(0);
	Function_206();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_205();
	Function_204();
	Function_209();
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

void Function_183() //Position: 0x9F63 / 40803
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
		if (Function_186() > 3)
		{
			iVar0 *= 2;
		}
		Function_184(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_184(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9FBA / 40890
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_185(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_185(bool bParam0) //Position: 0xA00A / 40970
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_186() //Position: 0xA033 / 41011
{
	return Global_21369.f_248;
}

void Function_187() //Position: 0xA03E / 41022
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

void Function_188(int iParam0, bool bParam1, int iParam2) //Position: 0xA068 / 41064
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

void Function_189(int iParam0) //Position: 0xA174 / 41332
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

bool Function_190() //Position: 0xA1F3 / 41459
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

void Function_191() //Position: 0xA25C / 41564
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

void Function_192() //Position: 0xA282 / 41602
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

void Function_193(int iParam0) //Position: 0xA2A8 / 41640
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_194(int iParam0) //Position: 0xA2C5 / 41669
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_195(int iParam0) //Position: 0xA2D8 / 41688
{
	Function_196(&Global_43580, iParam0);
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0xA2E6 / 41702
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_197(bool bParam0) //Position: 0xA305 / 41733
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_198() //Position: 0xA332 / 41778
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

void Function_199(int iParam0) //Position: 0xA3AA / 41898
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

int Function_200(bool bParam0, bool bParam1, int iParam2) //Position: 0xA4E0 / 42208
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

var Function_201(bool bParam0) //Position: 0xA52E / 42286
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

void Function_202(int iParam0) //Position: 0xA622 / 42530
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

void Function_203(bool bParam0) //Position: 0xA6A5 / 42661
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

void Function_204() //Position: 0xA71C / 42780
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

void Function_205() //Position: 0xA760 / 42848
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

void Function_206() //Position: 0xA7A4 / 42916
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_207(int iParam0) //Position: 0xA7BA / 42938
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

bool Function_208() //Position: 0xA7FA / 43002
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

void Function_209() //Position: 0xA81F / 43039
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

int Function_210() //Position: 0xA84A / 43082
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_211() //Position: 0xA867 / 43111
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_212(int iParam0) //Position: 0xA870 / 43120
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

int Function_213(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA8D8 / 43224
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
		Function_215(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
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

void Function_214(int iParam0) //Position: 0xAC1A / 44058
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

void Function_215(var uParam0) //Position: 0xAC4D / 44109
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_216() //Position: 0xAC64 / 44132
{
	Function_177(&iLocal_1869 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1869);
	return;
}

void Function_217() //Position: 0xAC79 / 44153
{
	Function_177(&iLocal_1837 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1837);
	return;
}

void Function_218() //Position: 0xAC8E / 44174
{
	Function_177(&iLocal_1819 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1819);
	return;
}

void Function_219() //Position: 0xACA3 / 44195
{
	Global_15862 = 0.0f;
	return;
}

void Function_220(int iParam0) //Position: 0xACAD / 44205
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

void Function_221(int iParam0) //Position: 0xACFB / 44283
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = START_CURVE_QUERY(&uLocal_1235, *(&iLocal_4 + 3488[63]), 2, 0.0f, 1.0f, 0,1f, 0);
	iVar1 = GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0);
	if (IS_CURVE_QUERY_VALID(&uVar0) && iVar1 < 0)
	{
		uVar2 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, false);
		if (!IS_OBJECT_VALID(&uVar2))
		{
			uVar2 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar0, false);
			if (!IS_OBJECT_VALID(&uVar2))
			{
			}
		}
		if (IS_OBJECT_VALID(&uVar2))
		{
			SET_CURVE_ACTIVE(&uVar2, iParam0);
		}
	}
	return;
}

void Function_222() //Position: 0xAD73 / 44403
{
	var uVar0[8];
	int iVar9;
	
	if (Function_266())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02: Machine Gun I";
		uVar0[4] = "Stage 03: Cover the Marshal";
		uVar0[5] = "Stage 04: Machine Gun II";
		uVar0[6] = "Last Stage";
		uVar0[7] = "Destroy Stage 2 baddies";
		iVar9 = Function_252(&uLocal_1367, &uVar0, &Local_1237 + 4, 1, 0);
		if (Function_251(&iVar9, &bLocal_1387, &iLocal_1388, &iLocal_1375))
		{
			Function_244();
			Function_243();
		}
		if (iVar9 == 0)
		{
			Function_244();
			Function_243();
			Function_242(&bLocal_1418, 8);
		}
		else if (iVar9 == 1)
		{
			Function_244();
			Function_243();
			Function_237(bLocal_1387);
			Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
		}
		else if (iVar9 == 2)
		{
			Function_244();
			Function_243();
			Function_228(&bLocal_1420, 4);
		}
		else if (iVar9 == 3)
		{
			Function_226();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_224(&bLocal_1394);
			bLocal_1387 = true;
			iLocal_1388 = 0;
			iLocal_1375 = 1000;
		}
		else if (iVar9 == 4)
		{
			Function_226();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_224(&bLocal_1394);
			bLocal_1387 = 2;
			iLocal_1388 = 0;
			iLocal_1375 = 1000;
		}
		else if (iVar9 == 5)
		{
			Function_226();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_224(&bLocal_1394);
			bLocal_1387 = 3;
			iLocal_1388 = 0;
			iLocal_1375 = 1000;
		}
		else if (iVar9 == 6)
		{
			Function_226();
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_224(&bLocal_1394);
			bLocal_1387 = 101;
			iLocal_1388 = 0;
			iLocal_1375 = 1000;
		}
		else if (iVar9 == 7)
		{
			Function_223(&iLocal_4 + 904);
		}
	}
	return;
}

void Function_223(int iParam0) //Position: 0xAFAD / 44973
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

void Function_224(bool bParam0) //Position: 0xAFF8 / 45048
{
	Function_225(&bParam0, 0.0f);
	return;
}

void Function_225(vector3 vParam0) //Position: 0xB005 / 45061
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_226() //Position: 0xB02A / 45098
{
	Global_6663 = 0;
	DECOR_REMOVE(&Global_54076, "iMountingGun");
	if (IS_BLIP_VALID(&uLocal_1753))
	{
		REMOVE_BLIP(&uLocal_1753);
	}
	if (IS_OBJECT_VALID(&iLocal_1837 + 112))
	{
		DESTROY_OBJECT(&iLocal_1837 + 112);
		Function_218();
	}
	if (IS_OBJECT_ANIMATOR_VALID(&uLocal_1756))
	{
		DESTROY_OBJECT_ANIMATOR(&uLocal_1756);
	}
	if (IS_ACTOR_VALID(&bLocal_1735))
	{
		DESTROY_ACTOR(&bLocal_1735);
	}
	Function_227(&uLocal_1741);
	if (IS_POPSET_VALID(&uLocal_1760))
	{
		DESTROY_POPULATION_SET(&uLocal_1760);
	}
	if (IS_POPSET_VALID(&uLocal_1762))
	{
		DESTROY_POPULATION_SET(&uLocal_1762);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		if (IS_ACTOR_VALID(&bLocal_1733))
		{
			SQUAD_LEAVE(&bLocal_1733);
		}
		if (IS_ACTOR_VALID(&bLocal_1731))
		{
			SQUAD_LEAVE(&bLocal_1731);
		}
		if (IS_ACTOR_VALID(&bLocal_1392))
		{
			SQUAD_LEAVE(&bLocal_1392);
		}
		Function_220(&iLocal_4 + 808);
		DESTROY_OBJECT(&iLocal_4 + 808);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 888))
	{
		Function_220(&iLocal_4 + 888);
		DESTROY_OBJECT(&iLocal_4 + 888);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 896))
	{
		Function_220(&iLocal_4 + 896);
		DESTROY_OBJECT(&iLocal_4 + 896);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 904))
	{
		Function_220(&iLocal_4 + 904);
		DESTROY_OBJECT(&iLocal_4 + 904);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 984))
	{
		Function_220(&iLocal_4 + 984);
		DESTROY_OBJECT(&iLocal_4 + 984);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 992))
	{
		Function_220(&iLocal_4 + 992);
		DESTROY_OBJECT(&iLocal_4 + 992);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1000))
	{
		Function_220(&iLocal_4 + 1000);
		DESTROY_OBJECT(&iLocal_4 + 1000);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1008))
	{
		Function_220(&iLocal_4 + 1008);
		DESTROY_OBJECT(&iLocal_4 + 1008);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1016))
	{
		Function_220(&iLocal_4 + 1016);
		DESTROY_OBJECT(&iLocal_4 + 1016);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1032))
	{
		Function_220(&iLocal_4 + 1032);
		DESTROY_OBJECT(&iLocal_4 + 1032);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1056))
	{
		Function_220(&iLocal_4 + 1056);
		DESTROY_OBJECT(&iLocal_4 + 1056);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1064))
	{
		Function_220(&iLocal_4 + 1064);
		DESTROY_OBJECT(&iLocal_4 + 1064);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1758))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1758);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_1819))
	{
		Function_218();
	}
	return;
}

void Function_227(int[] iParam0) //Position: 0xB26B / 45675
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		if (IS_OBJECT_VALID(&(iParam0[iVar0])))
		{
			DESTROY_OBJECT(&(iParam0[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_228(bool bParam0, int iParam1) //Position: 0xB2A1 / 45729
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229(&iParam1);
	bParam0 = 1;
	return;
}

void Function_229(int iParam0) //Position: 0xB2C6 / 45766
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_232("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_231(2) || Function_231(8)) || Function_231(9)) || Function_231(10))
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
		Function_232("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_232("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_232("");
	}
	else if (iParam0 == 8)
	{
		Function_230();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_230();
	}
	return;
}

void Function_230() //Position: 0xB3BD / 46013
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_231(int iParam0) //Position: 0xB3C9 / 46025
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

void Function_232(char* cParam0) //Position: 0xB3FF / 46079
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_233(int iParam0, bool bParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB46B / 46187
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_234(StackVal, Param4, uParam3, &iParam6);
		Function_229(iParam0);
		bParam1 = 1;
		bParam2 = 100;
	}
}

void Function_234(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB4AC / 46252
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_236(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_235(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_235(int iParam0) //Position: 0xB52E / 46382
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

var Function_236(struct<2> Param0, bool bParam2) //Position: 0xB9DC / 47580
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

struct<8> Function_237(bool bParam0) //Position: 0xBA48 / 47688
{
	Function_238(bParam0 + 1);
	return StackVal, Function_238(bParam0 + 1);
}

struct<8> Function_238(bool bParam0) //Position: 0xBA55 / 47701
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_239(&iLocal_4 + 1576[0]);
			return StackVal, Function_239(&iLocal_4 + 1576[0]);
			break;
		
		case 0x00000001:
			Function_239(&iLocal_4 + 1704[0]);
			return StackVal, Function_239(&iLocal_4 + 1704[0]);
			break;
		
		case 0x00000002:
			Function_239(&iLocal_4 + 1808[0]);
			return StackVal, Function_239(&iLocal_4 + 1808[0]);
			break;
		
		case 0x00000003:
			Function_239(&iLocal_4 + 1960[1]);
			return StackVal, Function_239(&iLocal_4 + 1960[1]);
			break;
		
		default:
			Function_239(&iLocal_4 + 2168[0]);
			return StackVal, Function_239(&iLocal_4 + 2168[0]);
			break;
	}
	Function_239(&iLocal_4 + 2168[0]);
	return StackVal, Function_239(&iLocal_4 + 2168[0]);
}

struct<8> Function_239(bool bParam0) //Position: 0xBAD6 / 47830
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

int Function_240(bool bParam0) //Position: 0xBAFF / 47871
{
	return Function_241(bParam0 + 1);
}

int Function_241(bool bParam0) //Position: 0xBB0C / 47884
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1576[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1704[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1808[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 1960[1]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 2168[0]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 2168[0]);
}

void Function_242(bool bParam0, int iParam1) //Position: 0xBB8D / 48013
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229(&iParam1);
	bParam0 = 1;
	return;
}

void Function_243() //Position: 0xBBB2 / 48050
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_244() //Position: 0xBBC7 / 48071
{
	Function_246();
	Function_245(10, 3);
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xBBD6 / 48086
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

void Function_246() //Position: 0xBD23 / 48419
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_250())
	{
		Function_249(10, 3);
	}
	else
	{
		Function_247();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_247() //Position: 0xBD6E / 48494
{
	Function_248(25, 2);
	return;
}

void Function_248(int iParam0, int iParam1) //Position: 0xBD7A / 48506
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

void Function_249(int iParam0, int iParam1) //Position: 0xBFA6 / 49062
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

bool Function_250() //Position: 0xC0F8 / 49400
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

bool Function_251(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC160 / 49504
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_244();
			Function_243();
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
		Function_232("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_252(struct<17> Param0) //Position: 0xC20F / 49679
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_265(&Var12, &Var0);
	uVar15 = Function_264(uParam1, &Var12);
	Function_263(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_262(&Param0, uVar15);
	Function_260(StackVal, &Param0, Var12.f_12);
	Function_258(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_257(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_254(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_253(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_253(int iParam0, int iParam1, int iParam2) //Position: 0xC303 / 49923
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

bool Function_254(struct<17> Param0) //Position: 0xC363 / 50019
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
				Function_256(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_256(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_253(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_255(Param1.f_64);
	}
	else
	{
		Function_255(Param1.f_64);
	}
	return 0;
}

void Function_255(bool bParam0) //Position: 0xC4F6 / 50422
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

void Function_256(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC534 / 50484
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

var Function_257(int iParam0, struct<21> Param1) //Position: 0xC5EA / 50666
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_258(vector3 vParam0) //Position: 0xC611 / 50705
{
	switch (Function_259())
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

int Function_259() //Position: 0xC6BD / 50877
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

void Function_260(vector3 vParam0) //Position: 0xC6F9 / 50937
{
	switch (Function_261(&vParam0))
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

int Function_261(bool bParam0) //Position: 0xC7A2 / 51106
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

var Function_262(struct<21> Param0) //Position: 0xC8C2 / 51394
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

void Function_263(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCA7C / 51836
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

var Function_264(int iParam0, struct<13> Param1) //Position: 0xCB18 / 51992
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_265(struct<17> Param0) //Position: 0xCB34 / 52020
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

bool Function_266() //Position: 0xCB8E / 52110
{
	return Global_47307;
}

bool Function_267() //Position: 0xCB97 / 52119
{
	if (IS_EXITFLAG_SET())
	{
		Function_237(bLocal_1387);
		Function_233(StackVal, 4, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
		return 0;
	}
	Function_639(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1237, bLocal_1387, iLocal_1388, &bLocal_1420, &bLocal_1418, &bLocal_1419);
	if ((bLocal_1387 == 99 && bLocal_1387 == 100) && bLocal_1387 == 101)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_237(bLocal_1387);
			Function_233(StackVal, 1, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
			return 1;
		}
		Function_638();
		if ((bLocal_1387 != 2 && (iLocal_1388 > 8 || iLocal_1388 < 14)) && iLocal_1729)
		{
			iLocal_1729 = 0;
		}
		else if (!iLocal_1729)
		{
			iLocal_1729 = 1;
		}
		if (Function_618(&Local_1487, &uLocal_1425, &uLocal_1479, &uLocal_1390, iLocal_1729))
		{
			if (Function_616(&uLocal_1479))
			{
				Function_237(bLocal_1387);
				Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
			}
		}
		if (bLocal_1387 == 101 && bLocal_1387 == 0)
		{
			if (iLocal_1388 < 5 && iLocal_1388 > 105)
			{
				Function_613();
			}
		}
		if (Function_612(2048))
		{
			Function_237(bLocal_1387);
			Function_233(StackVal, 3, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&bLocal_1392))
		{
			Function_232("Merchant_dead");
			Function_237(bLocal_1387);
			Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&bLocal_1731))
		{
			Function_232("GraveRobber_dead");
			Function_237(bLocal_1387);
			Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&bLocal_1733))
		{
			Function_232("Marshal_dead");
			Function_237(bLocal_1387);
			Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
			return 1;
		}
		if (SQUAD_IS_VALID(&iLocal_4 + 808))
		{
			if ((IS_ACTOR_DEAD(&iLocal_4 + 752[02]) || IS_ACTOR_DEAD(&iLocal_4 + 752[12])) || IS_ACTOR_DEAD(&iLocal_4 + 752[22]))
			{
				Function_232("fort01_Deputys_dead");
				Function_237(bLocal_1387);
				Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
				return 1;
			}
		}
		Function_611();
	}
	switch (bLocal_1387)
	{
		case 0x00000063:
			Function_575();
			break;
		
		case 0x00000000:
			Function_565();
			break;
		
		case 0x00000001:
			Function_547();
			break;
		
		case 0x00000002:
			Function_470();
			break;
		
		case 0x00000003:
			Function_372();
			break;
		
		case 0x00000065:
			Function_270();
			break;
		
		case 0x00000064:
			if (Function_269(&bLocal_1419))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_268(&bLocal_1387, &iLocal_1388, &iLocal_1375))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1418)
	{
		Function_242(&bLocal_1418, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1419 && bLocal_1387 == 100)
	{
		Function_237(bLocal_1387);
		Function_233(StackVal, 5, &bLocal_1419, &bLocal_1387, Function_240(bLocal_1387), Function_237(bLocal_1387), 0);
	}
	if (bLocal_1420)
	{
		Function_228(&bLocal_1420, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_268(var uParam0, var uParam1, int iParam2) //Position: 0xCE8C / 52876
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

bool Function_269(int iParam0) //Position: 0xCED5 / 52949
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_270() //Position: 0xCEE9 / 52969
{
	switch (iLocal_1388)
	{
		case 0x00000000:
			Function_368(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_1392))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
				TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1392, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1733))
			{
				TASK_STAND_STILL(&bLocal_1733, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1733, true);
			}
			if (IS_ACTOR_VALID(&bLocal_1731))
			{
				TASK_STAND_STILL(&bLocal_1731, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_1731, true);
			}
			SET_ACTOR_HEALTH(&bLocal_1392, GET_ACTOR_MAX_HEALTH(&bLocal_1392));
			SET_ACTOR_HEALTH(&bLocal_1733, GET_ACTOR_MAX_HEALTH(&bLocal_1733));
			SET_ACTOR_HEALTH(&bLocal_1731, GET_ACTOR_MAX_HEALTH(&bLocal_1731));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365();
				Function_239(&iLocal_4 + 2168[0]);
				iLocal_1389 = Function_364(StackVal, Function_239(&iLocal_4 + 2168[0]), 0, 1, 1);
				if (!Function_363(iLocal_1389))
				{
					Function_362(&Local_1237);
				}
				Function_361(&Global_54076, &iLocal_4 + 2168[0], 1, 1, 1);
				Function_224(&bLocal_1394);
				iLocal_1388 = 1;
			}
			else
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_363(Global_46838[1]))
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000002:
			SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
			Function_361(&bLocal_1731, &iLocal_4 + 2168[8], 1, 1, 1);
			Function_361(&bLocal_1733, &iLocal_4 + 2168[6], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_1735))
			{
				Function_218();
				DESTROY_ACTOR(&bLocal_1735);
			}
			if (IS_OBJECT_VALID(&iLocal_1819 + 64))
			{
				DESTROY_OBJECT(&iLocal_1819 + 64);
			}
			Function_224(&bLocal_1394);
			iLocal_1388 = 3;
			break;
		
		case 0x00000003:
			if (Function_271("$/cutscene/FORT_01_CS07_SEQ/FORT_01_CS07_SEQ", &iLocal_1375, &Local_1237, &bLocal_1387, 71488, 71113, 70165, 63064, 59951, 56641, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_224(&bLocal_1394);
				iLocal_1388 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_1418 = true;
			}
			break;
	}
	return;
}

bool Function_271(var uParam0, int iParam1, struct<41> Param2) //Position: 0xD133 / 53555
{
	if (!&bParam15)
	{
		Function_284(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (bParam3 != 99 && (Function_283(&Param2) || Param2.f_40 < 1))
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
				Function_224(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_282())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_281(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_224(&iParam1 + 4);
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
					Function_281(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_278(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_278(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_276(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_281(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_224(&iParam1 + 4);
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
						Function_275(1.0f);
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
						Function_273();
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
					Function_272(1, 1);
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
			if ((HUD_IS_FADED() && bParam3 == 99) && !Function_283(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_272(int iParam0, bool bParam1) //Position: 0xD795 / 55189
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

void Function_273() //Position: 0xD864 / 55396
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_274();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_274() //Position: 0xD8A9 / 55465
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_275(bool bParam0) //Position: 0xD8BB / 55483
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

void Function_276(var uParam0, int iParam1) //Position: 0xD8D8 / 55512
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
			if ((&iVar3 == &Global_54076 && !Function_277(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_277(int iParam0) //Position: 0xD96A / 55658
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == &iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

float Function_278(vector3 vParam0) //Position: 0xD99B / 55707
{
	if (Function_280(&vParam0))
	{
		if (Function_279(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_279(int iParam0) //Position: 0xDA68 / 55912
{
	return Function_14(iParam0, 2);
}

bool Function_280(bool bParam0) //Position: 0xDA76 / 55926
{
	return Function_14(bParam0, 1);
}

int Function_281(bool bParam0) //Position: 0xDA84 / 55940
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
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
		iVar0++;
	}
	return 1;
}

bool Function_282() //Position: 0xDB47 / 56135
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

bool Function_283(struct<37> Param0) //Position: 0xDB84 / 56196
{
	return Param0.f_36;
}

void Function_284(var uParam0, int iParam1) //Position: 0xDB8F / 56207
{
	Function_285(&uParam0, &iParam1, 0);
	return;
}

void Function_285(var uParam0, bool bParam1, bool bParam2) //Position: 0xDB9F / 56223
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
			Function_286(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_286(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_286(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDD17 / 56599
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

int Function_287() //Position: 0xDD41 / 56641
{
	struct<2> Var0;
	
	switch (bLocal_1387)
	{
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "skippedthirdsatge"))
			{
				DECOR_SET_FLOAT(&uLocal_1235, "skippedthirdsatge", GET_CURRENT_GAME_TIME());
			}
			if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 1;
			}
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "skippedthirdsatge")) < 5.0f)
			{
				return 1;
			}
			break;
		
		case 0x00000003:
			if (SQUAD_IS_VALID(&iLocal_4 + 1040))
			{
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1040);
				Function_303(&iLocal_4 + 1040);
				Function_301(1, &iLocal_4 + 1040, 0, 0);
				Function_296(StackVal, StackVal, &iLocal_4 + 1040, *(&iLocal_4 + 3488[53]), *(&iLocal_4 + 3488[53] + 12), 1.0f, 3);
				Function_295(&iLocal_4 + 1040, 10.0f);
				Function_294(&iLocal_4 + 1040, 1);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1056))
			{
				GET_PATH_POINT(&iLocal_4 + 4736, (GET_NUM_PATH_POINTS(&iLocal_4 + 4736) - 1), &Var0);
				Function_293(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, false), Var0, 1, 1, 1);
				Function_289(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, false)), &Global_54076);
				GET_PATH_POINT(&iLocal_4 + 4736, (GET_NUM_PATH_POINTS(&iLocal_4 + 4736) - 2), &Var0);
				Function_293(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, true), Var0, 1, 1, 1);
				Function_289(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, true)), &Global_54076);
				GET_PATH_POINT(&iLocal_4 + 4736, (GET_NUM_PATH_POINTS(&iLocal_4 + 4736) - 3), &Var0);
				Function_293(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, 2), Var0, 1, 1, 1);
				Function_289(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, 2)), &Global_54076);
				Function_288(&iLocal_4 + 1056, &iLocal_4 + 4736, 0, 0);
			}
			TASK_CLEAR(&Global_54076);
			if (!SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_1739, "GatlingShoot", true, 0, 1))
			{
			}
			if (!IS_OBJECT_VALID(&iLocal_1739))
			{
			}
			Global_6663 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "skippedlastsatge"))
			{
				DECOR_SET_FLOAT(&uLocal_1235, "skippedlastsatge", GET_CURRENT_GAME_TIME());
			}
			if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 1;
			}
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "skippedlastsatge")) < 5.0f)
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_288(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xDFCB / 57291
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	bParam3 = &bParam3;
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (!SQUAD_IS_VALID(&uLocal_1811))
		{
			uLocal_1811 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_1235, Function_54()));
		}
		SQUAD_GOALS_CLEAR(&uParam0);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (!GET_TASK_STATUS(&uVar1, 0) != 1)
				{
					bVar2 = TASK_SEQUENCE_OPEN();
					if (IS_OBJECT_VALID(&bParam2))
					{
						if (FLOOR((RAND_FLOAT_RANGE(0.0f, 200000.0f) / 100000.0f)) > 1)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iParam1, 4, 1, 0, 1, TO_FLOAT(bVar0));
						}
						else
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &bParam2, 4, 1, 0, 1, TO_FLOAT(bVar0));
						}
						TASK_DISMOUNT(0, 1);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iParam1, 4, 1, 0, 1, TO_FLOAT(bVar0));
						TASK_DISMOUNT(0, 1);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uVar1, bVar2);
					TASK_SEQUENCE_RELEASE(bVar2, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar1, 0);
					SET_CRIPPLE_ENABLE(&uVar1, 0);
					ADD_BLIP_FOR_ACTOR(&uVar1, 322, 0, 2, 0);
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &Global_54076, 1);
					GIVE_WEAPON_TO_ACTOR(&uVar1, 41, 0f, 1, 1);
					GIVE_WEAPON_TO_ACTOR(&uVar1, 16, 0f, 1, 1);
					SET_ACTOR_FROZEN_AFTER_CORPSIFY(&uVar1, 1);
					SET_ACTOR_FACTION(&uVar1, 19);
					SET_ACTOR_VISION_XRAY(&uVar1, 1);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iLocal_4 + 1480[3], 2, 1);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iLocal_4 + 1480[6], 2, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar1, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, 15, true);
					AI_GOAL_LOOK_AT_ACTOR(&uVar1, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
					SET_ACTOR_VISION_XRAY(&uVar1, 1);
					SET_ACTOR_UPDATE_PRIORITY(&uVar1, true);
					SET_ACTOR_FROZEN_AFTER_CORPSIFY(&uVar1, 1);
					uVar3 = GET_MOUNT(&uVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (!IS_ACTOR_IN_VOLUME(&uVar3, &iLocal_4 + 1552))
						{
							TASK_GO_TO_COORD(&uVar3, &iLocal_4 + 4352[63], 3);
						}
						else
						{
							TASK_GO_TO_COORD(&uVar3, &iLocal_4 + 4352[73], 3);
						}
						SET_ACTOR_UPDATE_PRIORITY(&uVar3, true);
						SQUAD_JOIN(&uVar3, &uLocal_1811);
						SET_ACTOR_FROZEN_AFTER_CORPSIFY(&uVar3, 1);
					}
				}
			}
			bVar0++;
		}
	}
}

void Function_289(bool bParam0, int iParam1) //Position: 0xE1CF / 57807
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_290(StackVal, &bParam0, Var0);
	return;
}

void Function_290(bool bParam0, struct<2> Param1) //Position: 0xE1EB / 57835
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_291(&bParam0, &bParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_291(GET_MOUNT(&bParam0), &bParam0, Param1), 1);
	}
	return;
}

var Function_291(bool bParam0, struct<2> Param1) //Position: 0xE226 / 57894
{
	struct<2> Var0;
	
	Function_292(&bParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_292(&bParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_292(bool bParam0) //Position: 0xE2A7 / 58023
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_293(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xE2B9 / 58041
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		uVar0 = GET_MOUNT(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &iParam4, &bParam5);
		}
		else
		{
			uVar0 = GET_VEHICLE(&bParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &iParam4, &bParam5);
			}
			else
			{
				TELEPORT_ACTOR(&bParam0, &uParam1, &bParam3, &iParam4, &bParam5);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

void Function_294(var uParam0, bool bParam1) //Position: 0xE35B / 58203
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

void Function_295(var uParam0, bool bParam1) //Position: 0xE3AA / 58282
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
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_296(var uParam0, struct<2> Param1, struct<5> Param3) //Position: 0xE3F9 / 58361
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	Function_300(fParam5, iParam6);
	Var3 = { StackVal, Function_300(fParam5, iParam6) };
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar5 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar5))
		{
			Function_298(&Var3, bVar0);
			Var1 = Function_298(&Var3, bVar0);
			Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Param1, Var1, StackVal);
			Var1.f_4 = (StackVal + 2.0f);
			Function_297(StackVal, StackVal, &uVar5, Var1, 1, 1, 1);
			PRINTSTRING("TELEPORT_SQUAD_IN_FORMATION - Teleporting squad actor ");
			PRINTINT(bVar0);
			PRINTSTRING(" to ");
			PRINTVECTOR(Var1);
			PRINTNL();
			SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&uVar5), 5.0f, 0, 1092616192);
		}
		bVar0++;
	}
}

void Function_297(Vector3 vParam0, struct<2> Param1, float fParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0xE4DB / 58587
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&vParam0))
	{
		uVar0 = GET_MOUNT(&vParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &iParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&vParam0))
			{
				ACTOR_MOUNT_ACTOR(&vParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&vParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &iParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&vParam0, Param1, fParam3, &bParam4, &iParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

struct<8> Function_298(vector3 vParam0) //Position: 0xE5AA / 58794
{
	struct<2> Var0;
	
	if (!Function_299(&vParam0))
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

bool Function_299(int iParam0) //Position: 0xE6F7 / 59127
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

struct<8> Function_300(var uParam0, int iParam1) //Position: 0xE71B / 59163
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_301(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0xE736 / 59190
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&uParam1))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
			if (IS_ACTOR_VALID(&bVar1))
			{
				Function_302(bParam0, &bVar1, &bParam2, &bParam3, TO_FLOAT(bVar0));
			}
			bVar0++;
		}
	}
}

void Function_302(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xE785 / 59269
{
	bool bVar0;
	char* cVar1[64];
	var uVar17;
	struct<2> Var19;
	var uVar21;
	struct<2> Var23;
	var uVar25;
	var uVar27;
	bool bVar29;
	
	bVar0 = FLOOR((RAND_FLOAT_RANGE(0.0f, 200000.0f) / 100000.0f));
	strcpy(&cVar1, "Tasking Footsoldier to go to vol: ", 64);
	stradd(&cVar1, INT_TO_STRING(bVar0), 64);
	if (bParam0)
	{
		SET_ACTOR_STAY_WITHIN_VOLUME(&bParam1, &iLocal_4 + 1480[2], 4, true);
		GET_VOLUME_CENTER(&iLocal_4 + 1480[2], &uVar17);
		FIND_GROUND_INTERSECTION(&uVar17, 20.0f, &Var19, &uVar21);
		if (&bParam2)
		{
			Var23 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			Var23.f_8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			uVar27 = Vector(StackVal, StackVal, StackVal) + Vector(Var23, Var19, StackVal);
			FIND_GROUND_INTERSECTION(&uVar27, 10.0f, &uVar25, &uVar21);
			TELEPORT_ACTOR(&bParam1, &uVar25, 1, 1, 1);
			Function_289(&bParam1, &Global_54076);
		}
	}
	else
	{
		SET_ACTOR_STAY_WITHIN_VOLUME(&bParam1, &iLocal_4 + 1480[1], 4, true);
		GET_VOLUME_CENTER(&iLocal_4 + 1480[1], &uVar17);
		FIND_GROUND_INTERSECTION(&uVar17, 20.0f, &Var19, &uVar21);
		if (&bParam2)
		{
			Var23 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			Var23.f_8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			uVar27 = Vector(StackVal, StackVal, StackVal) + Vector(Var23, Var19, StackVal);
			FIND_GROUND_INTERSECTION(&uVar27, 10.0f, &uVar25, &uVar21);
			TELEPORT_ACTOR(&bParam1, &uVar25, 1, 1, 1);
			Function_289(&bParam1, &Global_54076);
		}
	}
	if (&bParam2)
	{
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&bParam1, -1.0f);
	}
	else
	{
		bVar29 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		if (IS_OBJECT_VALID(&iParam3))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bParam1, &iParam3, 4, 1, 0, 0, &bParam4);
		}
		Var23 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		Var23.f_8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		uVar27 = Vector(StackVal, StackVal, StackVal) + Vector(Var23, Var19, StackVal);
		FIND_GROUND_INTERSECTION(&uVar27, 10.0f, &uVar25, &uVar21);
		TASK_GO_TO_COORD(0, &uVar25, 4);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bParam1, bVar29);
		TASK_SEQUENCE_RELEASE(bVar29, 1);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam1, 0);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam1)))
	{
		ADD_BLIP_FOR_ACTOR(&bParam1, 322, 0, 2, 0);
	}
	SET_CRIPPLE_ENABLE(&bParam1, 0);
	MEMORY_REPORT_POSITION_AUTO(&bParam1, &Global_54076, 1);
	GIVE_WEAPON_TO_ACTOR(&bParam1, 42, 0f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&bParam1, 41, 0f, 1, 1);
	SET_ACTOR_VISION_XRAY(&bParam1, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bParam1, &iLocal_4 + 1480[3], 2, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bParam1, &iLocal_4 + 1480[6], 2, 1);
	DECOR_SET_BOOL(&bParam1, "retasked", 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bParam1, 15, true);
	SET_ACTOR_UPDATE_PRIORITY(&bParam1, 2);
	SET_ACTOR_FROZEN_AFTER_CORPSIFY(&bParam1, 1);
}

void Function_303(var uParam0) //Position: 0xE9FA / 59898
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_304() //Position: 0xEA2F / 59951
{
	switch (bLocal_1387)
	{
		case 0x00000000:
			if (IS_ACTOR_VALID(&uLocal_1737))
			{
				DESTROY_ACTOR(&uLocal_1737);
			}
			Function_313(2, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			if (!UI_ISACTIVE("nCutscenes"))
			{
				UI_PUSH("nCutscenes");
			}
			if (!Global_6663)
			{
			}
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && IS_OBJECT_VALID(&iLocal_1739)) && !DECOR_CHECK_EXIST(&uLocal_1235, "snappedplayer02"))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), true);
				SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_1739, "GatlingShoot", true, 0, 0);
				Global_6663 = 1;
				if (!SQUAD_IS_VALID(&iLocal_4 + 904))
				{
					Function_312();
				}
				Function_307(&iLocal_4 + 904, &iLocal_4 + 3872);
				Function_294(&iLocal_4 + 904, 0);
				Function_223(&iLocal_4 + 968);
				DECOR_SET_BOOL(&uLocal_1235, "snappedplayer02", 1);
			}
			if ((!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_1375 + 24), 0)) || HUD_IS_FADED())
			{
				if (IS_OBJECT_VALID(&iLocal_1375 + 24))
				{
					DECOR_REMOVE(&Global_54076, "__CameraReady");
					DECOR_REMOVE(&Global_54076, "__CameraGo");
					if (IS_OBJECT_VALID(&iLocal_1375 + 24))
					{
						DESTROY_OBJECT(&iLocal_1375 + 24);
					}
				}
				Function_223(&iLocal_4 + 968);
				TASK_OVERRIDE_CLEAR_POSTURE(&bLocal_1392);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1392, 4, 0f, 1, 1);
				SET_DRAW_ACTOR(&bLocal_1735, 1);
				AI_STOP_IGNORING_ACTORS();
				Function_313(2, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000002:
			AI_STOP_IGNORING_ACTORS();
			Function_313(2, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			if (!UI_ISACTIVE("nCutscenes"))
			{
				UI_PUSH("nCutscenes");
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !HUD_IS_FADED())
			{
				if (!DECOR_CHECK_EXIST(&uLocal_1235, "snappedplayer04"))
				{
					TASK_CLEAR(&Global_54076);
					if (!SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_1739, "GatlingShoot", true, 0, 1))
					{
					}
					if (!IS_OBJECT_VALID(&iLocal_1739))
					{
					}
					Global_6663 = 1;
					DECOR_SET_BOOL(&uLocal_1235, "snappedplayer04", 1);
				}
				else if (!GET_CURRENT_GRINGO(&Global_54076) != GET_GRINGO_FROM_OBJECT(&iLocal_1739))
				{
					if (!SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_1739, "GatlingShoot", true, 0, 1))
					{
					}
				}
			}
			if ((!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_1375 + 24), 0)) || HUD_IS_FADED())
			{
				if (IS_OBJECT_VALID(&iLocal_1375 + 24))
				{
					DECOR_REMOVE(&Global_54076, "__CameraReady");
					DECOR_REMOVE(&Global_54076, "__CameraGo");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_1375 + 24))
					{
						DESTROY_OBJECT(&iLocal_1375 + 24);
					}
				}
				cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 7);
				if (IS_DOOR_VALID(&cLocal_1807))
				{
					SET_DRAW_OBJECT(&cLocal_1807, 1);
				}
				cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 8);
				if (IS_DOOR_VALID(&cLocal_1807))
				{
					SET_DRAW_OBJECT(&cLocal_1807, 1);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1040))
				{
					Function_305(&iLocal_4 + 1040, 0);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1056))
				{
					Function_305(&iLocal_4 + 1056, 0);
				}
				AI_STOP_IGNORING_ACTORS();
				Function_313(2, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 7);
			if (IS_DOOR_VALID(&cLocal_1807))
			{
				SET_DRAW_OBJECT(&cLocal_1807, 1);
			}
			cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 8);
			if (IS_DOOR_VALID(&cLocal_1807))
			{
				SET_DRAW_OBJECT(&cLocal_1807, 1);
			}
			Function_313(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_313(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_305(var uParam0, bool bParam1) //Position: 0xEEC1 / 61121
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
				if (bParam1)
				{
				}
				ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar1, bParam1);
				if (IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					ACTOR_SET_GRABBED_BY_CUTSCENE(GET_MOUNT(&uVar1), bParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

int Function_306(int iParam0, char* cParam1, bool bParam3) //Position: 0xEF22 / 61218
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

void Function_307(var uParam0, bool bParam1) //Position: 0xEFC7 / 61383
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	bool bVar6;
	var uVar7;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&bVar1))
			{
				bVar2 = false;
				Function_292(&bVar1);
				bVar3 = Function_311(StackVal, &bParam1, Function_292(&bVar1), &bVar2);
				if (IS_OBJECT_VALID(&bVar3))
				{
					Function_239(&bVar3);
					Var4 = Function_239(&bVar3);
					bVar6 = GET_OBJECT_HEADING(&bVar3);
					uVar7 = FIND_NEAREST_COVER_LOCATION(&Var4, 2.0f, bVar6, 90.0f, 7);
					if (!IS_COVER_LOCATION_VALID(&uVar7))
					{
						Function_310(&bVar3);
						uVar7 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), Var4, Function_310(&bVar3), 4));
					}
					SET_ACTOR_MAX_HEALTH(&bVar1, 24.0f);
					Function_308(&bVar1, &uParam0, &uVar7, 0, 0, 0);
					DECOR_SET_INT(&bVar1, "nindexused", bVar2);
					DECOR_SET_BOOL(&bVar3, "bUsed", 1);
					DECOR_SET_INT(&bVar1, "iNumMovedUp", 3);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_308(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0xF0C5 / 61637
{
	bool bVar0;
	var uVar1;
	
	TASK_CLEAR(&uParam0);
	SET_ACTOR_FACTION(&uParam0, 19);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 40, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 39, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 15, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 3, false);
	SET_ACTOR_ALLOW_DISARM(&uParam0, 0);
	SET_ACTOR_ONE_SHOT_DEATH(&uParam0, iParam3);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	SET_ACTOR_ALLOW_DISARM(&uParam0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, false);
	SET_ACTOR_VISION_XRAY(&uParam0, 1);
	SET_ACTOR_VISION_MAX_RANGE(&uParam0, 50.0f, 1);
	SET_ACTOR_STAY_WITHIN_VOLUME(&uParam0, &iLocal_4 + 1384[0], 2, true);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam0, 0);
	DECOR_SET_INT(&uParam0, "AiCoverExpose", true);
	SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
	MEMORY_CONSIDER_AS_ENEMY(&uParam0, &Global_54076);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 17, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, &uParam5, 0, 0);
	if (IS_OBJECT_VALID(&uParam4))
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &uParam4, 3, 0, 0, 1, false);
	}
	GET_COVER_LOCATION_BASE_POSITION(&uParam2, &uVar1);
	TASK_SHOOT_ENEMIES_FROM_COVER(0, &uParam2, -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	ADD_BLIP_FOR_ACTOR(&uParam0, 322, 0, 2, 0);
	TASK_PRIORITY_SET(&uParam0, true);
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_309(&uParam0, &uParam1, 1))
		{
			SQUAD_JOIN(&uParam0, &uParam1);
		}
	}
}

bool Function_309(bool bParam0, int iParam1, bool bParam2) //Position: 0xF242 / 62018
{
	if (!IS_ACTOR_VALID(&bParam0))
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
	if (SQUAD_GET(&bParam0) == &iParam1)
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

struct<8> Function_310(bool bParam0) //Position: 0xF28A / 62090
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

var Function_311(bool bParam0, struct<2> Param1, bool bParam3) //Position: 0xF2B3 / 62131
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&bParam0))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &bParam0);
			if (IS_OBJECT_VALID(&bVar2))
			{
				if (!DECOR_CHECK_EXIST(&bVar2, "bUsed"))
				{
					Function_239(&bVar2);
					uVar3 = Function_239(&bVar2);
					if (!IS_OBJECT_VALID(&bVar1))
					{
						bVar1 = &bVar2;
						bParam3 = bVar0;
					}
					else
					{
						Function_239(&bVar1);
						Function_239(&bVar2);
						if (VDIST(Function_239(&bVar1), Param1) < VDIST(Function_239(&bVar2), Param1))
						{
							bVar1 = &bVar2;
							bParam3 = bVar0;
						}
					}
				}
			}
			bVar0++;
		}
		return &bVar1;
	}
	return "";
}

void Function_312() //Position: 0xF355 / 62293
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	(&iLocal_4 + 904) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Guards01"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_01", 672, Vector(-2696,401f, 67,26275f, 3500,725f), Vector(0.0f, -132,2131f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_02", 670, Vector(-2696,715f, 67,26273f, 3492.0f), Vector(0.0f, 228,7678f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_03", 481, Vector(-2692.0f, 67,26276f, 3492,381f), Vector(0.0f, 188,026f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_04", 480, Vector(-2698,769f, 67,26274f, 3492,313f), Vector(-0,5629327f, 224,566f, 0,8072823f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_05", 399, Vector(-2704,89f, 67,26273f, 3496,655f), Vector(-172,6628f, -46,20323f, 169,7913f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_06", 397, Vector(-2702,819f, 67,26274f, 3494,484f), Vector(179,4371f, -44,56599f, -179,1927f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_07", 668, Vector(-2703,088f, 67,26274f, 3487,658f), Vector(0.0f, 223,9011f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_01_08", 673, Vector(-2696.0f, 67,26273f, 3484,999f), Vector(0.0f, 207,3367f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 904);
	return;
}

void Function_313(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xF589 / 62857
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
		Function_243();
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
	Function_272(&iParam9, &iParam10);
}

int Function_314() //Position: 0xF658 / 63064
{
	switch (bLocal_1387)
	{
		case 0x00000000:
			SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1735, 2);
			SET_GAME_CAMERA_CURVE_OVERRIDE(4, "fort01_backofwagon");
			if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1392))
			{
				SET_ACTOR_IN_VEHICLE(&bLocal_1392, &bLocal_1735, false);
			}
			HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&uLocal_1737));
			return 1;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(&iLocal_1375 + 24))
			{
				DESTROY_OBJECT(&iLocal_1375 + 24);
			}
			*(&iLocal_1375 + 24) = Function_350(&iLocal_4, 0, 1, 0, 0);
			Global_6663 = 0;
			Function_361(&bLocal_1731, &iLocal_4 + 1704[5], 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1731, -1.0f, 0, 0);
			Function_361(&bLocal_1392, &iLocal_4 + 2424[0], 1, 1, 1);
			ACTOR_START_FORCE_HOLSTER(&bLocal_1392, 0, 0);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1392);
			TASK_OVERRIDE_SET_POSTURE(&bLocal_1392, 1);
			TASK_CROUCH(&bLocal_1392, -1.0f);
			return 1;
			break;
		
		case 0x00000002:
			MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
			Function_361(&Global_54076, &iLocal_4 + 1808[1], 1, 1, 0);
			Function_361(&bLocal_1392, &iLocal_4 + 1808[3], 0, 1, 1);
			Function_361(&bLocal_1731, &iLocal_4 + 1808[5], 0, 1, 1);
			Function_361(&bLocal_1733, &iLocal_4 + 1808[7], 1, 1, 1);
			Function_361(&iLocal_4 + 752[02], &iLocal_4 + 1808[11], 0, 1, 1);
			Function_361(&iLocal_4 + 752[12], &iLocal_4 + 1808[12], 0, 1, 1);
			Function_361(&iLocal_4 + 752[22], &iLocal_4 + 1808[13], 0, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_1735))
			{
				CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_1735);
			}
			if (IS_OBJECT_VALID(&iLocal_1819 + 64))
			{
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_1819 + 64));
			}
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			SQUAD_MAKE_EMPTY(&iLocal_4 + 808);
			SQUAD_JOIN(&bLocal_1733, &iLocal_4 + 808);
			SQUAD_JOIN(&iLocal_4 + 752[02], &iLocal_4 + 808);
			SQUAD_JOIN(&iLocal_4 + 752[12], &iLocal_4 + 808);
			SQUAD_JOIN(&iLocal_4 + 752[22], &iLocal_4 + 808);
			SQUAD_JOIN(&bLocal_1731, &iLocal_4 + 808);
			Function_347(&iLocal_4 + 808, &iLocal_4 + 2448, 2.0f, 75.0f, 7, &iLocal_4 + 4600, 0);
			Function_346(&iLocal_4 + 808, 1);
			Function_345(&iLocal_4 + 968, 0);
			Function_344(&iLocal_4 + 808, 16, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1731, 13, false);
			ACTOR_POP_NEXT_GAIT(&bLocal_1731, 3, 0);
			ACTOR_POP_NEXT_GAIT(&bLocal_1733, 3, 0);
			ACTOR_POP_NEXT_GAIT(&iLocal_4 + 752[02], 3, 0);
			ACTOR_POP_NEXT_GAIT(&iLocal_4 + 752[12], 3, 0);
			ACTOR_POP_NEXT_GAIT(&iLocal_4 + 752[22], 3, 0);
			return 1;
			break;
		
		case 0x00000003:
			*(&iLocal_1375 + 24) = Function_333(&iLocal_4, 0, &Global_54076, 1, 0, 0);
			if (IS_OBJECT_VALID(&iLocal_1375 + 24))
			{
			}
			CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_1375 + 24, 1);
			DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
			Function_361(&bLocal_1731, &iLocal_4 + 1960[8], 1, 1, 1);
			Function_315(&iLocal_4 + 3304[4]);
			STOP_VEHICLE(&bLocal_1735);
			SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/open");
			Global_6663 = 0;
			if (SQUAD_IS_VALID(&iLocal_4 + 1040))
			{
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1040);
				Function_303(&iLocal_4 + 1040);
				Function_301(1, &iLocal_4 + 1040, 0, 0);
				Function_295(&iLocal_4 + 1040, 10.0f);
				Function_294(&iLocal_4 + 1040, 0);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1056))
			{
				Function_288(&iLocal_4 + 1056, &iLocal_4 + 4736, 0, 1);
			}
			AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000065:
			MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
			Function_361(&Global_54076, &iLocal_4 + 2168[1], 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_315(var uParam0) //Position: 0xFA58 / 64088
{
	var uVar0;
	
	if (!IS_ACTOR_VALID(&bLocal_1735))
	{
		Function_332(&uParam0);
		Function_310(&uParam0);
		bLocal_1735 = Function_328(StackVal, StackVal, &uLocal_1235, "ASTAGECOACH01", 1198, 976, Function_332(&uParam0), Function_310(&uParam0), 1, 976, 976, 976, 4);
	}
	else
	{
		Function_361(&bLocal_1735, &uParam0, 1, 1, 1);
	}
	uVar0 = GET_DRAFT_ACTOR(false, &bLocal_1735);
	if (IS_ACTOR_VALID(&uVar0))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0.0f);
	}
	uVar0 = GET_DRAFT_ACTOR(true, &bLocal_1735);
	if (IS_ACTOR_VALID(&uVar0))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0.0f);
	}
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_1735, false);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 1, 0);
	if (bLocal_1387 == 0)
	{
		ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 1);
	}
	else
	{
		ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
	}
	SET_ALLOW_JACK(&bLocal_1735, 0);
	SET_WAGON_TO_WAGON_JACK_ENABLE(0, 0);
	Function_327(&bLocal_1735);
	if (!IS_OBJECT_VALID(&uLocal_1756))
	{
		uLocal_1756 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&bLocal_1735, "close_wagon", "$close_wagon", "close_wagon/wagon/close");
	}
	if (bLocal_1387 != 1 || bLocal_1387 != 3)
	{
		SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/open");
	}
	if (!IS_OBJECT_VALID(&iLocal_1819 + 64))
	{
		Function_316(&bLocal_1735);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_1819 + 64, &bLocal_1735, 0);
	if (!IS_OBJECT_VALID(&iLocal_1739))
	{
		iLocal_1739 = FIND_OBJECT_IN_OBJECT(&iLocal_1819 + 64, "shootBabyShoot");
		SET_OBJECT_COLLIDE_WITH_OBJECT(&Global_54076, &iLocal_1819 + 64, 0);
	}
	return;
}

int Function_316(var uParam0) //Position: 0xFC13 / 64531
{
	var uVar0;
	
	Function_326(3, 2);
	uVar0 = &uVar0;
	Function_324(&iLocal_1819 + 8, "p_gen_gatlingGun01x", 0, 0);
	Function_324(&iLocal_1819 + 8, "$/content/scripting/gringo/simplegringo/close_wagon", 1, 0);
	if (!Function_318(&iLocal_1819 + 8))
	{
		return 0;
	}
	iLocal_1819 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_1819 + 48) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1819, "point_objective", Vector(0.0f, 1,778774f, 1,982979f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1819 + 56) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1819, "gringo_close_wagon", "close_wagon", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1819 + 64) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1819, "gatlingGun01x0", "p_gen_gatlingGun01x", Vector(0,0001175492f, 1,19679f, 0,5939018f), Vector(0.0f, 180.0f, 0.0f), 1);
	Function_317(&iLocal_1819, &uParam0);
	return 1;
}

void Function_317(int iParam0, float fParam1) //Position: 0xFD60 / 64864
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &fParam1, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

bool Function_318(struct<2>[] Param0) //Position: 0xFDAB / 64939
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_323();
	iVar1 = 0;
	if (!Function_180(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_322(&(Param0[iVar02]), 8);
		}
		else if (Function_321())
		{
			iVar1 = 1;
			Function_322(&(Param0[iVar02]), 8);
		}
		Function_322(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_180(&(Param0[iVar02]), 4))
		{
			if (!Function_180(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_180(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_180(&(Param0[02]), 8) || iVar1));
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
				Function_322(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_180(&(Param0[iVar02]), 4))
		{
			if (!Function_180(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
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
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
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
	Function_319();
	return 1;
}

void Function_319() //Position: 0x1016E / 65902
{
	if (!Function_320(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_320(int iParam0) //Position: 0x101AE / 65966
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_321() //Position: 0x101CA / 65994
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

void Function_322(struct<13> Param0) //Position: 0x101F8 / 66040
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_323() //Position: 0x1020B / 66059
{
	if (!Function_320(128))
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

var Function_324(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1024D / 66125
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_325(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_322(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_325(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1028B / 66187
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_322(&(Param0[iVar02]), 4);
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

void Function_326(int iParam0, int iParam1) //Position: 0x1035A / 66394
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

void Function_327(bool bParam0) //Position: 0x103A4 / 66468
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

int Function_328(int iParam0, int iParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x1041C / 66588
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
			if (Function_331(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_330(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_329(bVar16, &iVar1))
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

bool Function_329(int iParam0, bool[] bParam1) //Position: 0x1066F / 67183
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

var Function_330(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5) //Position: 0x106A3 / 67235
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &iParam3, &iParam4, &iParam5, 1,401298E-45f, Param1);
}

int Function_331(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x106BF / 67263
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

struct<8> Function_332(bool bParam0) //Position: 0x106EB / 67307
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

var Function_333(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x10759 / 67417
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 9, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "fort01_cutscene04", 9, 1);
	}
	Function_334(&uVar0, &uParam2);
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

void Function_334(var uParam0, int iParam1) //Position: 0x107E9 / 67561
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_343(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_342(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_341(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_340(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_339(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_338(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 6);
	Function_337(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 7);
	Function_336(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 8);
	Function_335(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 5, 6, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 7, 8, 2.0f, 2, 0);
	return;
}

void Function_335(int iParam0) //Position: 0x108CA / 67786
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,43893f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2638,33f, 69,69411f, 3407,017f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,018149f, 2,050266f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_336(int iParam0) //Position: 0x10937 / 67895
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,43893f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2637,923f, 69,70944f, 3406,802f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,051611f, 2,052002f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_337(int iParam0) //Position: 0x109A4 / 68004
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,10753f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2656,635f, 73,10036f, 3413,487f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,071515f, -0,56514f, -3,1E-05f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_338(int iParam0) //Position: 0x10A15 / 68117
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,10753f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2657,521f, 73,21847f, 3414,878f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,071515f, -0,56514f, -3,1E-05f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_339(int iParam0) //Position: 0x10A86 / 68230
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 13f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2663,96f, 67,94399f, 3431,04f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,115979f, -0,727173f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_340(int iParam0) //Position: 0x10AF3 / 68339
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 14.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2659,938f, 67,8796f, 3427,54f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,19524f, 2,39214f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_341(int iParam0) //Position: 0x10B60 / 68448
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 13f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2663,896f, 67,91018f, 3431,107f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,139338f, -0,640988f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_342(int iParam0) //Position: 0x10BCD / 68557
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 14.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2659,938f, 67,8796f, 3427,54f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,19524f, 2,39214f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_343(int iParam0) //Position: 0x10C3A / 68666
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2658,992f, 68,52949f, 3426,915f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,578425f, 2,392665f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_344(var uParam0, int iParam1, bool bParam2) //Position: 0x10CA7 / 68775
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
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_345(var uParam0, int iParam1) //Position: 0x10CF8 / 68856
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
				SET_CRIPPLE_ENABLE(&uVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_346(var uParam0, int iParam1) //Position: 0x10D45 / 68933
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
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_347(var uParam0, var uParam1, bool bParam2, float fParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x10D8C / 69004
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		SQUAD_GOALS_CLEAR(&uParam0);
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (&iParam5 == &iLocal_4 + 4600)
				{
					if (&iVar1 != &bLocal_1733 || &iVar1 != &iLocal_4 + 752[02])
					{
						Function_348(&iVar1, &bVar2, bParam2, fParam3, iParam4, bVar0, &iLocal_4 + 4752, 0, 0);
					}
					else
					{
						Function_348(&iVar1, &bVar2, bParam2, fParam3, iParam4, bVar0, &iParam5, 0, 0);
					}
				}
				else
				{
					Function_348(&iVar1, &bVar2, bParam2, fParam3, iParam4, bVar0, &iParam5, 0, &bParam6);
				}
			}
			bVar0++;
		}
	}
}

void Function_348(int iParam0, bool bParam1, bool bParam2, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8) //Position: 0x10E54 / 69204
{
	var uVar0;
	var uVar2;
	var uVar3;
	struct<9> Var5;
	
	bLocal_1755 = TASK_SEQUENCE_OPEN();
	if ((&iParam0 != &bLocal_1731 && iLocal_1388 > 8) && !DECOR_CHECK_EXIST(&uLocal_1235, "cutscene03finish"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1731, 0);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_1731, "stand_rowdy", 0);
		Function_292(&bLocal_1731);
		uVar0 = Function_292(&bLocal_1731);
		uVar2 = Function_349(&bLocal_1731);
		TASK_ACTION_PERFORM_AT_POSITION(0, "stand_rowdy", &uVar0, uVar2, 2.0f, 1, 3212836864);
		TASK_DRAW_HOLSTER_WEAPON(&iParam0, 1);
		TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_4 + 4752, 3.0f, 1, 0);
	}
	else if (IS_OBJECT_VALID(&iParam6))
	{
		ACTOR_PUT_WEAPON_IN_HAND(&iParam0, 40, 1);
		if (&bParam7)
		{
			TASK_FOLLOW_PATH(0, &iParam6, 4, 1, 0, 1, 0);
		}
		else
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iParam6, 4, 1, 0, 1, false);
		}
	}
	if (IS_OBJECT_VALID(&bParam1))
	{
		if (&bParam8)
		{
			Function_361(&iParam0, &bParam1, 1, 1, 1);
		}
		else
		{
			Function_239(&bParam1);
			uVar3 = Function_239(&bParam1);
			TASK_GO_NEAR_COORD(0, &uVar3, 2.0f, 4);
		}
		Function_239(&bParam1);
		vVar5 = Function_239(&bParam1);
		bVar7 = GET_OBJECT_HEADING(&bParam1);
		uVar8 = FIND_NEAREST_COVER_LOCATION(&vVar5, bParam2, bVar7, fParam3, iParam4);
		if (IS_COVER_LOCATION_VALID(&uVar8))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar8, -1.0f, 1086324736);
		}
		else
		{
			Function_310(&bParam1);
			uVar8 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), vVar5, Function_310(&bParam1), 4));
			TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar8, -1.0f, 1086324736);
		}
		DECOR_SET_FLOAT(&iParam0, "x_vector", vVar5.x);
		DECOR_SET_FLOAT(&iParam0, "y_vector", vVar5.y);
		DECOR_SET_FLOAT(&iParam0, "z_vector", vVar5.z);
		DECOR_SET_INT(&iParam0, "ncoverused", bParam5);
		DECOR_SET_BOOL(&bParam1, "used", 1);
	}
	else
	{
		TASK_GO_NEAR_ACTOR(0, &Global_54076, 3.0f, 2);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iParam0, bLocal_1755);
	TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
	TASK_PRIORITY_SET(&iParam0, true);
	GIVE_WEAPON_TO_ACTOR(&iParam0, 40, 0f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iParam0, 41, 0f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 0);
}

var Function_349(int iParam0) //Position: 0x11067 / 69735
{
	return GET_HEADING(&iParam0);
}

var Function_350(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11073 / 69747
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Fort01_Seth", 2, 1);
	}
	Function_351(&uVar0);
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

void Function_351(int iParam0) //Position: 0x110F8 / 69880
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_353(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_352(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 3.0f, 0, 0);
	return;
}

void Function_352(int iParam0) //Position: 0x11133 / 69939
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,32643f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2691,016f, 67,94894f, 3499,56f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,01283f, -1,907765f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_353(var uParam0) //Position: 0x111A8 / 70056
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 37,32576f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2691,017f, 67,95568f, 3498,6f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,012834f, -2,216056f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

int Function_354() //Position: 0x11215 / 70165
{
	switch (bLocal_1387)
	{
		case 0x00000000:
			if (!DECOR_CHECK_EXIST(&bLocal_1735, "cs01hide") && (HUD_IS_FADING() || !HUD_IS_FADED()))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1735);
				CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1392);
				DECOR_SET_BOOL(&bLocal_1735, "cs01hide", 1);
			}
			return 1;
			break;
		
		case 0x00000001:
			if (SQUAD_IS_VALID(&iLocal_4 + 896))
			{
				Function_220(&iLocal_4 + 896);
				DESTROY_OBJECT(&iLocal_4 + 896);
			}
			if (!DECOR_CHECK_EXIST(&bLocal_1735, "cs02hide") && (HUD_IS_FADING() || !HUD_IS_FADED()))
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&Global_54076));
				}
				if (IS_ACTOR_VALID(&bLocal_1735))
				{
					SET_ACTOR_SPEED(&bLocal_1735, 0.0f);
					ACTOR_RESET_ANIMS(&bLocal_1735, 1);
					RESET_ACTOR_GAITS(&bLocal_1735, 0);
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, &bLocal_1735)))
					{
						SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &bLocal_1735), 0.0f);
						ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(false, &bLocal_1735), 1);
						RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(false, &bLocal_1735), 0);
						AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &bLocal_1735), 5);
					}
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, &bLocal_1735)))
					{
						SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, &bLocal_1735), 0.0f);
						ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(true, &bLocal_1735), 1);
						RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(true, &bLocal_1735), 0);
						AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &bLocal_1735), 5);
					}
					Function_361(&bLocal_1735, &iLocal_4 + 3304[2], 1, 1, 1);
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, &bLocal_1735)))
					{
						CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(false, &bLocal_1735));
					}
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, &bLocal_1735)))
					{
						CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(true, &bLocal_1735));
					}
					SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/open");
					STOP_VEHICLE(&bLocal_1735);
					CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1735);
				}
				CUTSCENE_MANAGER_HIDE_ACTOR(&Global_54076);
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				DECOR_SET_BOOL(&bLocal_1735, "cs02hide", 1);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "cs03hide") && (HUD_IS_FADING() || !HUD_IS_FADED()))
			{
				if (IS_ACTOR_VALID(&bLocal_1735))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&bLocal_1735);
					SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/close");
					SET_OBJECT_ANIMATOR_PHASE(&uLocal_1756, 1.0f);
					SET_OBJECT_ANIMATOR_RATE(&uLocal_1756, 10.0f);
				}
				if (IS_OBJECT_VALID(&iLocal_1819 + 64))
				{
					HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_1819 + 64));
				}
				CUTSCENE_MANAGER_HIDE_ACTOR(&Global_54076);
				DECOR_SET_BOOL(&uLocal_1235, "cs03hide", 1);
			}
			return 1;
			break;
		
		case 0x00000003:
			if ((!DECOR_CHECK_EXIST(&uLocal_1235, "temp") && !HUD_IS_FADED()) && !HUD_IS_FADING())
			{
				cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 7);
				if (IS_DOOR_VALID(&cLocal_1807))
				{
					HIDE_PHYSINST(&cLocal_1807);
					SET_DRAW_OBJECT(&cLocal_1807, 0);
				}
				cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 8);
				if (IS_DOOR_VALID(&cLocal_1807))
				{
					HIDE_PHYSINST(&cLocal_1807);
					SET_DRAW_OBJECT(&cLocal_1807, 0);
				}
				DECOR_SET_BOOL(&uLocal_1235, "temp", 1);
			}
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&iLocal_4 + 1136[22]))
			{
				DESTROY_ACTOR(&iLocal_4 + 1136[22]);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 1072[22]))
			{
				DESTROY_ACTOR(&iLocal_4 + 1072[22]);
			}
			return 1;
			break;
	}
	return 1;
}

int Function_355() //Position: 0x115C9 / 71113
{
	switch (bLocal_1387)
	{
		case 0x00000000:
			SET_GAME_CAMERA_CURVE_OVERRIDE(4, "fort01_backofwagon");
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			RESET_GAME_CAMERA_CURVE_OVERRIDES();
			if (iLocal_1804)
			{
				ENABLE_MOVER(&Global_54076);
				iLocal_1804 = 0;
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&Global_54076));
				}
			}
			Function_239(&iLocal_4 + 2456[4]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_239(&iLocal_4 + 2456[4]), -3.0f, 0);
			return 1;
			break;
		
		case 0x00000003:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			if (SQUAD_IS_VALID(&iLocal_4 + 1040))
			{
				Function_305(&iLocal_4 + 1040, 1);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1056))
			{
				Function_305(&iLocal_4 + 1056, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1735))
			{
				Function_361(&bLocal_1735, &iLocal_4 + 3304[4], 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 7);
			if (IS_DOOR_VALID(&cLocal_1807))
			{
				SET_DRAW_OBJECT(&cLocal_1807, 0);
			}
			cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 8);
			if (IS_DOOR_VALID(&cLocal_1807))
			{
				SET_DRAW_OBJECT(&cLocal_1807, 0);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_356() //Position: 0x11740 / 71488
{
	switch (bLocal_1387)
	{
		case 0x00000000:
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_239(&iLocal_4 + 1576[0]);
			Function_357(StackVal, &uLocal_1235, Function_239(&iLocal_4 + 1576[0]), &iLocal_1375 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_239(&iLocal_4 + 1704[0]);
			Function_357(StackVal, &uLocal_1235, Function_239(&iLocal_4 + 1704[0]), &iLocal_1375 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_239(&iLocal_4 + 1808[0]);
			Function_357(StackVal, &uLocal_1235, Function_239(&iLocal_4 + 1808[0]), &iLocal_1375 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_239(&iLocal_4 + 1960[0]);
			Function_357(StackVal, &uLocal_1235, Function_239(&iLocal_4 + 1960[0]), &iLocal_1375 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_239(&iLocal_4 + 2168[0]);
			Function_357(StackVal, &uLocal_1235, Function_239(&iLocal_4 + 2168[0]), &iLocal_1375 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_357(StackVal, &uLocal_1235, Global_54078, &iLocal_1375 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_357(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x118B6 / 71862
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

void Function_358(var uParam0, float fParam1) //Position: 0x11B56 / 72534
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

void Function_359(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x11BD8 / 72664
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
	Function_243();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_50();
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
				TASK_OVERRIDE_SET_POSTURE(&bVar1, 0);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, 1);
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
				Function_292(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_292(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if (Function_320(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_320(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_360() //Position: 0x11E8A / 73354
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

void Function_361(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11F18 / 73496
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

void Function_362(int iParam0) //Position: 0x12028 / 73768
{
	if (!Function_283(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_188(1, 0, 1);
		}
	}
	return;
}

bool Function_363(int iParam0) //Position: 0x12044 / 73796
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

int Function_364(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x12060 / 73824
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

void Function_365() //Position: 0x12106 / 73990
{
	Function_193(47);
	Function_194(256);
	Function_169(2060);
	Function_366(9);
	return;
}

void Function_366(int iParam0) //Position: 0x12122 / 74018
{
	Function_367(&Global_43580, iParam0);
	return;
}

void Function_367(var uParam0, int iParam1) //Position: 0x12130 / 74032
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_368(bool bParam0) //Position: 0x12158 / 74072
{
	Function_369(0, 0x40400000);
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

void Function_369(float fParam0, float fParam1) //Position: 0x1218E / 74126
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
	Function_371();
	Function_370();
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

void Function_370() //Position: 0x1229F / 74399
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_371() //Position: 0x122D3 / 74451
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

void Function_372() //Position: 0x123D9 / 74713
{
	if (iLocal_1388 < 4 && iLocal_1388 > 105)
	{
		if (Function_278(&bLocal_1768) < 1.0f)
		{
			Function_468(&iLocal_4 + 1032);
			Function_468(&iLocal_4 + 1056);
			Function_468(&iLocal_4 + 1064);
			Function_467(&iLocal_4 + 1032);
			Function_467(&iLocal_4 + 1056);
			Function_467(&iLocal_4 + 1064);
			Function_467(&iLocal_4 + 1040);
			Function_467(&iLocal_4 + 1048);
			Function_466();
			Function_224(&bLocal_1768);
		}
		if (IS_OBJECT_VALID(&uLocal_1813))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1813))
			{
				Function_464(&iLocal_4 + 1072[22], &iLocal_4 + 1072[02], &iLocal_4 + 1072[12], 1);
				DESTROY_OBJECT(&uLocal_1813);
			}
		}
		if (IS_OBJECT_VALID(&uLocal_1815))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1815))
			{
				Function_464(&iLocal_4 + 1136[22], &iLocal_4 + 1136[02], &iLocal_4 + 1136[12], 2);
				DESTROY_OBJECT(&uLocal_1815);
			}
		}
		if (Function_278(&bLocal_1776) < 0,5f)
		{
			if (SQUAD_IS_VALID(&iLocal_4 + 1192))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 1136[22]))
				{
					if (DECOR_CHECK_EXIST(&iLocal_4 + 1136[22], "ndestroyme"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_4 + 1136[22], "ndestroyme")) < 5.0f)
						{
							DESTROY_OBJECT(&iLocal_1869 + 112);
							DESTROY_ACTOR(&iLocal_4 + 1136[22]);
						}
					}
					else
					{
						Function_457(&iLocal_4 + 1136[22], &iLocal_4 + 1136[02], &iLocal_4 + 1136[12], &iLocal_4 + 4688, &iLocal_1818);
					}
				}
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1128))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 1072[22]))
				{
					if (DECOR_CHECK_EXIST(&iLocal_4 + 1072[22], "ndestroyme"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_4 + 1072[22], "ndestroyme")) < 5.0f)
						{
							DESTROY_OBJECT(&iLocal_1837 + 112);
							DESTROY_ACTOR(&iLocal_4 + 1072[22]);
						}
					}
					else
					{
						Function_457(&iLocal_4 + 1072[22], &iLocal_4 + 1072[02], &iLocal_4 + 1072[12], &iLocal_4 + 4696, &iLocal_1817);
					}
				}
			}
		}
		if (iLocal_1388 > 10)
		{
			Function_239(&iLocal_4 + 1960[1]);
			Function_453(StackVal, "$/cutscene/FORT_01_CS07_SEQ/FORT_01_CS07_SEQ", &uLocal_1424, Function_239(&iLocal_4 + 1960[1]), 91926, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		}
		Function_450();
	}
	switch (iLocal_1388)
	{
		case 0x00000000:
			Function_368(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_1406[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365();
				Function_239(&iLocal_4 + 1960[0]);
				iLocal_1389 = Function_364(StackVal, Function_239(&iLocal_4 + 1960[0]), 0, 1, 1);
				if (!Function_363(iLocal_1389))
				{
					Function_362(&Local_1237);
				}
				Function_361(&Global_54076, &iLocal_4 + 1960[1], 1, 1, 1);
			}
			Function_224(&bLocal_1394);
			iLocal_1388 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_363(Global_46838[1])) && Function_448())
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000002:
			SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
			Function_442();
			Function_224(&bLocal_1394);
			if (Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1237, bLocal_1387))
			{
				iLocal_1388 = 3;
			}
			else
			{
				iLocal_1388 = 4;
			}
			Function_238(bLocal_1387);
			Function_432(StackVal, Function_238(bLocal_1387), bLocal_1387, Global_46736[3], Function_241(bLocal_1387), 3);
			break;
		
		case 0x00000003:
			if (Function_271("$/cutscene/FORT01_CS06/FORT01_CS06", &iLocal_1375, &Local_1237, &bLocal_1387, 71488, 71113, 87087, 63064, 59951, 56641, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 4;
			}
			break;
		
		case 0x00000004:
			Function_430();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!iLocal_1406[2])
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 1040))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1040);
					Function_303(&iLocal_4 + 1040);
					Function_296(StackVal, StackVal, &iLocal_4 + 1040, *(&iLocal_4 + 3488[53]), *(&iLocal_4 + 3488[53] + 12), 3.0f, 3);
					Function_301(1, &iLocal_4 + 1040, 0, 0);
					Function_295(&iLocal_4 + 1040, 10.0f);
					Function_294(&iLocal_4 + 1040, 1);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1056))
				{
					GET_PATH_POINT(&iLocal_4 + 4736, (GET_NUM_PATH_POINTS(&iLocal_4 + 4736) - 1), &Local_1801);
					Function_293(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, false), Local_1801, 1, 1, 1);
					Function_289(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, false)), &Global_54076);
					GET_PATH_POINT(&iLocal_4 + 4736, (GET_NUM_PATH_POINTS(&iLocal_4 + 4736) - 2), &Local_1801);
					Function_293(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, true), Local_1801, 1, 1, 1);
					Function_289(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, true)), &Global_54076);
					GET_PATH_POINT(&iLocal_4 + 4736, (GET_NUM_PATH_POINTS(&iLocal_4 + 4736) - 3), &Local_1801);
					Function_293(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, 2), Local_1801, 1, 1, 1);
					Function_289(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, 2)), &Global_54076);
					Function_288(&iLocal_4 + 1056, &iLocal_4 + 4736, 0, 0);
				}
				Global_6663 = 0;
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1392)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1392));
			}
			if (HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(&Global_54076);
				if (!SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_1739, "GatlingShoot", true, 0, 1))
				{
				}
				Global_6663 = 1;
			}
			Function_426();
			DISABLE_CHILD_SECTOR("fom_rightWingProps01x");
			DISABLE_CHILD_SECTOR("fom_courtyardProps01x");
			DISABLE_CHILD_SECTOR("fom_gallowsProps01x");
			DISABLE_CHILD_SECTOR("fom_gallows01x");
			DISABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			DISABLE_CHILD_SECTOR("fom_corral01x");
			DISABLE_CHILD_SECTOR("fom_leftWingProps01x");
			DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
			DISABLE_CHILD_SECTOR("fom_corralProps01x");
			DISABLE_CHILD_SECTOR("fom_leftWing01x");
			DISABLE_CHILD_SECTOR("fom_gallows01x");
			DISABLE_CHILD_SECTOR("fom_guardTower02x");
			Function_419(&(Local_1487[015]), &bLocal_1392, "Merchant", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[115]), &bLocal_1733, "Marshal", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[215]), &bLocal_1731, "GraveRobber", 0, 0x5f5e100, 1);
			Function_418(&(Local_1487[315]));
			Function_418(&(Local_1487[415]));
			Function_418(&(Local_1487[515]));
			Function_419(&(Local_1487[615]), &bLocal_1735, "Wagon", 0, 0x5f5e100, 1);
			Function_225(&bLocal_1394, 2.0f);
			iLocal_1388 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "attached"))
			{
				Global_6663 = 1;
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				AUDIO_MUSIC_SET_MOOD("CAR", 0, 4294967295, 4294967295);
				Function_224(&bLocal_1394);
				iLocal_1388 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_347(&iLocal_4 + 808, &iLocal_4 + 3232, 2.0f, 360.0f, 7, 0, 1);
				Function_417(&iLocal_4 + 808);
				Function_294(&iLocal_4 + 808, 1);
				Function_294(&iLocal_4 + 1040, 1);
				Function_416();
				Function_224(&bLocal_1394);
				iLocal_1388 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_278(&bLocal_1394) <= 5.0f)
			{
				Function_294(&iLocal_4 + 1040, 1);
				Function_415("Fort01_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_224(&bLocal_1394);
				Function_224(&bLocal_1398);
				Function_224(&bLocal_1402);
				iLocal_1388 = 8;
			}
			break;
		
		case 0x00000008:
			Function_406();
			Function_402();
			if (SQUAD_IS_VALID(&iLocal_4 + 1032))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1032) >= 0)
				{
					if (IS_ACTOR_VALID(Function_400(&iLocal_4 + 1032, &Global_54076)))
					{
						Function_292(Function_400(&iLocal_4 + 1032, &Global_54076));
						STREAMING_LOAD_BOUNDS_EXT(0, Function_292(Function_400(&iLocal_4 + 1032, &Global_54076)), 20.0f, 1);
					}
				}
			}
			if (((SQUAD_IS_VALID(&iLocal_4 + 1032) && SQUAD_IS_VALID(&iLocal_4 + 1192)) && !SQUAD_IS_VALID(&iLocal_4 + 1048)) && (!IS_ACTOR_ALIVE(&iLocal_4 + 1136[12]) || !IS_ACTOR_ALIVE(&iLocal_4 + 1136[02])))
			{
				if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1056) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1032)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1040)) >= 2 || Function_278(&bLocal_1394) <= 90.0f)
				{
					Function_397();
					Function_288(&iLocal_4 + 1064, &iLocal_4 + 4744, 0, 1);
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_396())
						{
							Function_395();
						}
						else if (Function_396())
						{
							Function_394();
						}
						else
						{
							Function_393();
						}
					}
					Function_224(&bLocal_1764);
					Function_224(&bLocal_1394);
					iLocal_1388 = 9;
				}
			}
			break;
		
		case 0x00000009:
			Function_406();
			if (SQUAD_IS_VALID(&iLocal_4 + 1032))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1032) >= 0)
				{
					if (IS_ACTOR_VALID(Function_400(&iLocal_4 + 1032, &Global_54076)))
					{
						Function_292(Function_400(&iLocal_4 + 1032, &Global_54076));
						STREAMING_LOAD_BOUNDS_EXT(0, Function_292(Function_400(&iLocal_4 + 1032, &Global_54076)), 20.0f, 1);
					}
				}
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1064))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064) >= 0)
				{
					if (IS_ACTOR_VALID(Function_400(&iLocal_4 + 1064, &Global_54076)))
					{
						Function_292(Function_400(&iLocal_4 + 1064, &Global_54076));
						STREAMING_LOAD_BOUNDS_EXT(3, Function_292(Function_400(&iLocal_4 + 1064, &Global_54076)), 20.0f, 1);
					}
				}
			}
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064) >= 2 && Function_278(&bLocal_1394) <= 15.0f) || Function_278(&bLocal_1394) <= 30.0f) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064) >= 0)
			{
				Function_392();
				SQUAD_GOALS_CLEAR(&iLocal_4 + 1048);
				Function_391(&iLocal_4 + 1064, 0);
				Function_301(1, &iLocal_4 + 1048, 0, &iLocal_4 + 4672);
				if (!SQUAD_IS_VALID(&iLocal_4 + 1128))
				{
					Function_388();
				}
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_396())
					{
						Function_395();
					}
					else if (Function_396())
					{
						Function_394();
					}
					else
					{
						Function_393();
					}
				}
				Function_224(&bLocal_1764);
				Function_224(&bLocal_1394);
				iLocal_1388 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_379(&bLocal_1402, 60.0f, 200.0f, &bLocal_1392, "Merchant_return", "Merchant_abandoned", &bLocal_1419, 0, 0, 0, 325, 1);
			Function_406();
			if (SQUAD_IS_VALID(&iLocal_4 + 1064))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064) >= 0)
				{
					if (IS_ACTOR_VALID(Function_400(&iLocal_4 + 1064, &Global_54076)))
					{
						Function_292(Function_400(&iLocal_4 + 1064, &Global_54076));
						STREAMING_LOAD_BOUNDS_EXT(3, Function_292(Function_400(&iLocal_4 + 1064, &Global_54076)), 20.0f, 1);
					}
				}
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1048))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1048) >= 0)
				{
					if (IS_ACTOR_VALID(Function_400(&iLocal_4 + 1048, &Global_54076)))
					{
						Function_292(Function_400(&iLocal_4 + 1048, &Global_54076));
						STREAMING_LOAD_BOUNDS_EXT(0, Function_292(Function_400(&iLocal_4 + 1048, &Global_54076)), 20.0f, 1);
					}
				}
			}
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "finish04"))
			{
				if (Function_377())
				{
					DECOR_SET_FLOAT(&uLocal_1235, "finish04", GET_CURRENT_GAME_TIME());
					Function_224(&bLocal_1394);
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "finish04")) < 2.0f)
			{
				Function_374();
				Function_243();
				Function_224(&bLocal_1394);
				iLocal_1388 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_278(&bLocal_1394) < 3.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_224(&bLocal_1394);
				iLocal_1388 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Global_6663 = 0;
				if (SQUAD_IS_VALID(&iLocal_4 + 808))
				{
					if (IS_ACTOR_VALID(&bLocal_1733))
					{
						SQUAD_LEAVE(&bLocal_1733);
					}
					if (IS_ACTOR_VALID(&bLocal_1731))
					{
						SQUAD_LEAVE(&bLocal_1731);
					}
					if (IS_ACTOR_VALID(&bLocal_1392))
					{
						SQUAD_LEAVE(&bLocal_1392);
					}
					Function_220(&iLocal_4 + 808);
					DESTROY_OBJECT(&iLocal_4 + 808);
				}
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				STREAMING_UNLOAD_BOUNDS();
				ENABLE_CHILD_SECTOR("fom_corral01x");
				ENABLE_CHILD_SECTOR("fom_guardTower02x");
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_373();
				iLocal_1406[3] = 1;
				Function_224(&bLocal_1394);
				bLocal_1387 = 101;
				iLocal_1388 = 0;
			}
			break;
	}
	return;
}

void Function_373() //Position: 0x13098 / 77976
{
	Function_177(&iLocal_4 + 664);
	return;
}

void Function_374() //Position: 0x130A6 / 77990
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_AllEnemy", "Fort01_gatlingGun_AllEnemy", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375(int iParam0) //Position: 0x13103 / 78083
{
	Function_376(0, &Global_54076, iParam0, 0);
	Function_376(1, &bLocal_1392, iParam0, 0);
	Function_376(2, &bLocal_1733, iParam0, 0);
	Function_376(3, &uLocal_1797, iParam0, 0);
	Function_376(4, &uLocal_1799, iParam0, 0);
	Function_376(5, &bLocal_1731, iParam0, 0);
	return;
}

void Function_376(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1314B / 78155
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_377() //Position: 0x13173 / 78195
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!Function_280(&bLocal_1784))
	{
		Function_378(&bLocal_1784);
	}
	else if (Function_278(&bLocal_1784) < 1.0f)
	{
		bVar0 = true;
		iVar1 = 0;
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1064));
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1064, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1032) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1032));
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1032, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1056) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1056));
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1056, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1040) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1040));
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1040, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1048) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1048));
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1048, false);
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1072[02]) && !DECOR_CHECK_EXIST(&iLocal_4 + 1072[02], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			uVar2 = &iLocal_4 + 1072[02];
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1136[02]) && !DECOR_CHECK_EXIST(&iLocal_4 + 1136[02], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			uVar2 = &iLocal_4 + 1136[02];
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1072[12]) && !DECOR_CHECK_EXIST(&iLocal_4 + 1072[12], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			uVar2 = &iLocal_4 + 1072[12];
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1136[12]) && !DECOR_CHECK_EXIST(&iLocal_4 + 1136[12], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			uVar2 = &iLocal_4 + 1136[12];
		}
		Function_224(&bLocal_1784);
		if (!bVar0)
		{
			if (iVar1 == 1)
			{
				if (!DECOR_CHECK_EXIST(&uLocal_1235, "iNumLeft"))
				{
					DECOR_SET_FLOAT(&uLocal_1235, "iNumLeft", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "iNumLeft")) < 10.0f)
				{
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar2));
						}
						TASK_FLEE_ACTOR(&uVar2, &Global_54076, 100.0f, -1.0f, 0, 0, 0);
						return 1;
					}
				}
			}
		}
		return bVar0;
	}
	return 0;
}

void Function_378(bool bParam0) //Position: 0x133FB / 78843
{
	if (!Function_280(&bParam0))
	{
		Function_225(&bParam0, 0.0f);
	}
	return;
}

bool Function_379(struct<2> Param0, bool bParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x13412 / 78866
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_387(&Global_54076, &iParam3, bParam2))
	{
		Function_232(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_387(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_386(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_415(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_385(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_384(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_384(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_386(2))
	{
		Function_383(2);
		if (!Function_382())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_214(&iParam3);
				Function_380(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_384(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_384(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_380(bool bParam0) //Position: 0x135D0 / 79312
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

void Function_381() //Position: 0x13603 / 79363
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

bool Function_382() //Position: 0x13631 / 79409
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

void Function_383(bool bParam0) //Position: 0x13678 / 79480
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

void Function_384(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x136DF / 79583
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

void Function_385(bool bParam0) //Position: 0x1379A / 79770
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

bool Function_386(bool bParam0) //Position: 0x13801 / 79873
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

bool Function_387(var uParam0, var uParam1, bool bParam2) //Position: 0x1384B / 79947
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

void Function_388() //Position: 0x13960 / 80224
{
	Function_390();
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1072[02], false);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1072[12], false);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1072[22], false);
	Function_389(&iLocal_4 + 1072[22]);
	STREAMING_LOAD_SCENE_EXT(StackVal, Function_389(&iLocal_4 + 1072[22]), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_4 + 1072[12], &iLocal_4 + 1072[22], 0);
	SET_ACTOR_IN_VEHICLE(&iLocal_4 + 1072[02], &iLocal_4 + 1072[22], false);
	TASK_STAND_STILL(&iLocal_4 + 1072[02], -1.0f, 0, 0);
	TASK_STAND_STILL(&iLocal_4 + 1072[12], -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO(&iLocal_4 + 1072[12], &Global_54076, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1072[02], 19);
	SET_ACTOR_FACTION(&iLocal_4 + 1072[12], 19);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, &iLocal_4 + 1072[22]), 2);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, &iLocal_4 + 1072[22]), 2);
	Function_378(&bLocal_1788);
	LOG_ERROR("creating wagon 02");
	iLocal_1817 = 0;
	return;
}

struct<8> Function_389(bool bParam0) //Position: 0x13A5F / 80479
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

void Function_390() //Position: 0x13ACB / 80587
{
	*(&iLocal_4 + 1128) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "GatlingWagon01"));
	*(&iLocal_4 + 1072[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GatlingWagon01_Driver", 397, Vector(-2704,208f, 66,03459f, 3362,852f), Vector(0.0f, 262,9543f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1072[02], &iLocal_4 + 1128);
	*(&iLocal_4 + 1072[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GatlingWagon01_Gunner", 401, Vector(-2707,898f, 65,77737f, 3363,713f), Vector(0.0f, 248,7768f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1072[12], &iLocal_4 + 1128);
	*(&iLocal_4 + 1072[22]) = Function_328(StackVal, StackVal, &iLocal_4, "GatlingWagon01_Wagon", 1182, 976, Vector(-2700,734f, 66,33609f, 3358,256f), Vector(1,453714f, -85,47672f, -0,09585846f), 1, 976, 976, 976, 4);
	SQUAD_JOIN(&iLocal_4 + 1072[22], &iLocal_4 + 1128);
	return;
}

void Function_391(var uParam0, bool bParam1) //Position: 0x13C02 / 80898
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

void Function_392() //Position: 0x13C49 / 80969
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1048) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "FootSoldiersWaveCenter02"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave03_01", 397, Vector(-2590,195f, 70,54312f, 3325,727f), Vector(0.0f, 176,1319f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1048);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave03_02", 401, Vector(-2584,75f, 70,15592f, 3326,114f), Vector(0.0f, 145,6651f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1048);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave03_03", 397, Vector(-2592,018f, 70,42278f, 3324,866f), Vector(0.0f, 176,1319f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1048);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave03_04", 401, Vector(-2588,057f, 70,64392f, 3326,534f), Vector(0.0f, 145,6651f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1048);
	SET_ACTOR_FACTION(&uVar0, 19);
	return;
}

void Function_393() //Position: 0x13DC5 / 81349
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_gatlingGun_SethMore", "Fort01_gatlingGun_SethMore", 0, 2, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_394() //Position: 0x13E23 / 81443
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_Marshal_More", "Fort01_gatlingGun_Marshal_More", 0, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x13E88 / 81544
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_gatlingGun_killMore", "Fort01_gatlingGun_killMore", 0, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_396() //Position: 0x13EE5 / 81637
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_397() //Position: 0x13EF8 / 81656
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1064) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "CalvaryWaveCenter02"));
	iVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CalvaryWaveCenter02_01", 397, Function_54(), 977, Vector(-2577,883f, 70,256f, 3329,968f), Vector(0.0f, 157,6969f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1064);
	SET_ACTOR_FACTION(&iVar0, 19);
	iVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CalvaryWaveCenter02_02", 401, Function_54(), 980, Vector(-2573,357f, 68,7939f, 3322,491f), Vector(0.0f, 170,9846f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1064);
	SET_ACTOR_FACTION(&iVar0, 19);
	iVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CalvaryWaveCenter02_03", 402, Function_54(), 981, Vector(-2569,76f, 67,29948f, 3316,636f), Vector(0.0f, 152,7042f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1064);
	SET_ACTOR_FACTION(&iVar0, 19);
	return;
}

int Function_398(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x14036 / 81974
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_399(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_399(bParam4))
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

bool Function_399(int iParam0) //Position: 0x1416E / 82286
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_400(var uParam0, int iParam1) //Position: 0x14185 / 82309
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
					fVar3 = Function_401(&iParam1, &uVar2);
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

var Function_401(bool bParam0, bool bParam1) //Position: 0x1420A / 82442
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_332(&bParam0);
			Var0 = Function_332(&bParam0);
			Function_332(&bParam1);
			Var2 = Function_332(&bParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_402() //Position: 0x142A7 / 82599
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 1032) && ((Function_278(&bLocal_1394) <= 10.0f || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1040) >= 1) || !IS_ACTOR_ALIVE(&iLocal_4 + 1136[12])))
	{
		Function_405();
		Function_288(&iLocal_4 + 1032, &iLocal_4 + 4712, &iLocal_4 + 4680, 1);
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1192) && (Function_278(&bLocal_1394) <= 30.0f || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1040) >= 2))
	{
		Function_403();
	}
	return;
}

void Function_403() //Position: 0x14323 / 82723
{
	Function_404();
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1136[02], false);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1136[12], false);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 1136[22], false);
	Function_389(&iLocal_4 + 1136[22]);
	STREAMING_LOAD_SCENE_EXT(StackVal, Function_389(&iLocal_4 + 1136[22]), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_4 + 1136[12], &iLocal_4 + 1136[22], 0);
	SET_ACTOR_IN_VEHICLE(&iLocal_4 + 1136[02], &iLocal_4 + 1136[22], false);
	TASK_STAND_STILL(&iLocal_4 + 1136[02], -1.0f, 0, 0);
	TASK_STAND_STILL(&iLocal_4 + 1136[12], -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO(&iLocal_4 + 1136[12], &Global_54076, 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1136[02], 19);
	SET_ACTOR_FACTION(&iLocal_4 + 1136[12], 19);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, &iLocal_4 + 1136[22]), 2);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, &iLocal_4 + 1136[22]), 2);
	Function_378(&bLocal_1792);
	iLocal_1818 = 0;
	return;
}

void Function_404() //Position: 0x1440B / 82955
{
	(&iLocal_4 + 1192) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "GatlingWagon02"));
	*(&iLocal_4 + 1136[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GatlingWagon02_Driver", 397, Vector(-2579,368f, 70,32078f, 3477,229f), Vector(0.0f, 361,7977f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1136[02], &iLocal_4 + 1192);
	*(&iLocal_4 + 1136[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GatlingWagon02_Gunner", 401, Vector(-2580,578f, 70,24747f, 3481,021f), Vector(0.0f, 335,4494f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1136[12], &iLocal_4 + 1192);
	*(&iLocal_4 + 1136[22]) = Function_328(StackVal, StackVal, &iLocal_4, "GatlingWagon02_Wagon", 1182, 976, Vector(-2576,896f, 70,32078f, 3478,302f), Vector(0.0f, -19,50162f, 0.0f), 1, 976, 976, 976, 4);
	SQUAD_JOIN(&iLocal_4 + 1136[22], &iLocal_4 + 1192);
	return;
}

void Function_405() //Position: 0x1453A / 83258
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1032) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "CalvaryRight"));
	uVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CALVARY_02_01", 397, Function_54(), 981, Vector(-2588,298f, 69,33908f, 3503,036f), Vector(0.0f, -30,8852f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1032);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CALVARY_02_02", 401, Function_54(), 977, Vector(-2588,709f, 69,10439f, 3507,462f), Vector(0.0f, -42,32414f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1032);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CALVARY_02_03", 397, Function_54(), 981, Vector(-2590,885f, 69,11345f, 3505,501f), Vector(0.0f, -30,8852f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1032);
	SET_ACTOR_FACTION(&uVar0, 19);
	return;
}

void Function_406() //Position: 0x14654 / 83540
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_280(&bLocal_1764))
	{
		Function_378(&bLocal_1764);
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_278(&bLocal_1764) < 15.0f)
	{
		if (IS_ACTOR_SHOOTING(&Global_54076))
		{
			bVar0 = FLOOR(RAND_FLOAT_RANGE(0.0f, 4.0f));
			if (Function_396())
			{
				Function_414();
			}
			else
			{
				Function_413();
			}
		}
		else if (Function_410())
		{
			bVar1 = FLOOR(RAND_FLOAT_RANGE(0.0f, 3.0f));
			switch (bVar1)
			{
				case 0x00000001:
					Function_409();
					break;
				
				case 0x00000002:
					Function_408();
					break;
				
				default:
					Function_407();
					break;
				}
		}
		Function_224(&bLocal_1764);
	}
	return;
}

void Function_407() //Position: 0x146DF / 83679
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_gatlingGun_shoot", "Fort01_gatlingGun_shoot", 0, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x14736 / 83766
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_gatlingGun_noShoot_Seth", "Fort01_gatlingGun_noShoot_Seth", 0, 2, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_409() //Position: 0x1479C / 83868
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_noShoot_Mar", "Fort01_gatlingGun_noShoot_Mar", 0, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_410() //Position: 0x147FF / 83967
{
	if (SQUAD_IS_VALID(&iLocal_4 + 1056))
	{
		if (Function_411(&iLocal_4 + 1056, &Global_54076, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1032))
	{
		if (Function_411(&iLocal_4 + 1032, &Global_54076, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1064))
	{
		if (Function_411(&iLocal_4 + 1064, &Global_54076, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1040))
	{
		if (Function_411(&iLocal_4 + 1040, &Global_54076, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1048))
	{
		if (Function_411(&iLocal_4 + 1048, &Global_54076, 50.0f, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_411(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x148BA / 84154
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
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_412(&uVar1, 1) || iParam3)
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

bool Function_412(int iParam0, int iParam1) //Position: 0x1495F / 84319
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

void Function_413() //Position: 0x149B1 / 84401
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_Marshal", "Fort01_gatlingGun_Marshal", 0, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_414() //Position: 0x14A0C / 84492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_gatlingGun_Seth", "Fort01_gatlingGun_Seth", 0, 1, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14A62 / 84578
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

void Function_416() //Position: 0x14AF7 / 84727
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_gatlingGun_killWave", "Fort01_gatlingGun_killWave", 0, 1, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_417(int iParam0) //Position: 0x14B54 / 84820
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

void Function_418(struct<69> Param0) //Position: 0x14B99 / 84889
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

int Function_419(struct<69> Param0) //Position: 0x14C59 / 85081
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

void Function_420(var uParam0, int iParam1, int iParam2) //Position: 0x14C9F / 85151
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

void Function_421(struct<69> Param0) //Position: 0x14CC6 / 85190
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

void Function_422(int iParam0, int iParam1, bool bParam2) //Position: 0x14D41 / 85313
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

void Function_423(struct<65> Param0) //Position: 0x14D80 / 85376
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_424(int iParam0, char* cParam1) //Position: 0x14D8D / 85389
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

bool Function_425(struct<61> Param0) //Position: 0x14E1A / 85530
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

void Function_426() //Position: 0x14FCD / 85965
{
	int iVar0;
	
	Function_427(StackVal, (&iLocal_4 + 3488[13]), 0, 0);
	iVar0 = LOCATE_ACTOR_OF_TYPE(*(&iLocal_4 + 3488[13]), 2.0f, 23, 4294967295);
	if (IS_ACTOR_VALID(&iVar0))
	{
		DESTROY_ACTOR(&iVar0);
	}
	Function_427(StackVal, *(&iLocal_4 + 3488[23]), 0, 0);
	iVar0 = LOCATE_ACTOR_OF_TYPE(*(&iLocal_4 + 3488[23]), 2.0f, 23, 4294967295);
	if (IS_ACTOR_VALID(&iVar0))
	{
		DESTROY_ACTOR(&iVar0);
	}
	return;
}

int Function_427(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x15039 / 86073
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_429(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_428(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_428(&(uVar0[1]), "UseCase1"));
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

var Function_428(var uParam0, int iParam1) //Position: 0x151B6 / 86454
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_429(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x151C5 / 86469
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &iParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &iParam0);
		if (!Function_13())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &iParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &iParam0, 2.0f, 0);
		}
	}
}

void Function_430() //Position: 0x1530F / 86799
{
	var uVar0;
	
	Function_361(&bLocal_1392, &iLocal_4 + 1960[4], 1, 1, 1);
	SQUAD_GOALS_CLEAR(&iLocal_4 + 808);
	Function_361(&bLocal_1733, &iLocal_4 + 1960[6], 1, 1, 1);
	Function_361(&bLocal_1731, &iLocal_4 + 1960[8], 1, 1, 1);
	DESTROY_ACTOR(&iLocal_4 + 752[02]);
	DESTROY_ACTOR(&iLocal_4 + 752[12]);
	DESTROY_ACTOR(&iLocal_4 + 752[22]);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 808, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_MAKE_EMPTY(&iLocal_4 + 808);
	SQUAD_JOIN(&bLocal_1733, &iLocal_4 + 808);
	SQUAD_JOIN(&bLocal_1731, &iLocal_4 + 808);
	SQUAD_JOIN(&bLocal_1392, &iLocal_4 + 808);
	Function_294(&iLocal_4 + 808, 0);
	Function_391(&iLocal_4 + 808, 2);
	uVar0 = GET_DRAFT_ACTOR(false, &bLocal_1735);
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
	SET_ACTOR_STOP_UPDATE(&uVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&uVar0), 1);
	uVar0 = GET_DRAFT_ACTOR(true, &bLocal_1735);
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
	SET_ACTOR_STOP_UPDATE(&uVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&uVar0), 1);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&bLocal_1735), 1);
	return;
}

int Function_431() //Position: 0x1542F / 87087
{
	return 1;
}

void Function_432(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x15436 / 87094
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
	if (bParam2 != Global_53524.f_48 && !Function_439())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_438(0);
	Function_437();
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
		Function_435(bParam2);
	}
	Function_434(uParam3, iVar0, iVar1);
	Function_433();
}

void Function_433() //Position: 0x154DF / 87263
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

void Function_434(int iParam0, bool bParam1, bool bParam2) //Position: 0x15520 / 87328
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

void Function_435(bool bParam0) //Position: 0x15689 / 87689
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_436() };
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

struct<16> Function_436() //Position: 0x15821 / 88097
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

void Function_437() //Position: 0x15867 / 88167
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_438(bool bParam0) //Position: 0x1588B / 88203
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

bool Function_439() //Position: 0x158BA / 88250
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

bool Function_440(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x158D5 / 88277
{
	if (Function_441(&iParam0) == iParam6 || Function_439())
	{
		return 1;
	}
	return 0;
}

int Function_441(int iParam0) //Position: 0x158F4 / 88308
{
	if (Function_283(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_442() //Position: 0x1590D / 88333
{
	if (!IS_HUD_MAP_VISIBLE())
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_315(&iLocal_4 + 3304[4]);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 1);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), true);
	SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/open");
	SET_OBJECT_ANIMATOR_RATE(&uLocal_1756, 10.0f);
	STOP_VEHICLE(&bLocal_1735);
	if (!SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		Function_447();
	}
	if (Function_309(&bLocal_1733, &iLocal_4 + 808, 1))
	{
		SQUAD_LEAVE(&bLocal_1733);
	}
	uLocal_1797 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, false);
	uLocal_1799 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, true);
	SQUAD_JOIN(&bLocal_1733, &iLocal_4 + 808);
	SQUAD_GOALS_CLEAR(&iLocal_4 + 808);
	Function_303(&iLocal_4 + 808);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 808, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_446(&iLocal_4 + 808, 0);
	SQUAD_SET_FACTION(&iLocal_4 + 808, 20);
	Function_445(&iLocal_4 + 808, &Global_54076, 0);
	if (SQUAD_IS_VALID(&iLocal_4 + 888))
	{
		Function_223(&iLocal_4 + 888);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&iLocal_4 + 888));
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1040))
	{
		Function_444();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 1040, 19);
	Function_391(&iLocal_4 + 1040, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1040, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	if (!SQUAD_IS_VALID(&iLocal_4 + 1056))
	{
		Function_443();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 1056, 19);
	Function_391(&iLocal_4 + 1056, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1056, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_443() //Position: 0x15AB0 / 88752
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1056) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "CalvaryWaveCenter01"));
	uVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CalvaryWaveCenter01_01", 397, Function_54(), 977, Vector(-2579,132f, 71,27841f, 3340,868f), Vector(0.0f, 157,6969f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1056);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CalvaryWaveCenter01_02", 401, Function_54(), 980, Vector(-2583,374f, 71,51366f, 3337,041f), Vector(0.0f, 170,9846f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1056);
	SET_ACTOR_FACTION(&uVar0, 19);
	uVar0 = Function_398(StackVal, StackVal, &iLocal_4, "CalvaryWaveCenter01_03", 402, Function_54(), 981, Vector(-2576.0f, 71,27841f, 3343,014f), Vector(0.0f, 152,7042f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1056);
	SET_ACTOR_FACTION(&uVar0, 19);
	return;
}

void Function_444() //Position: 0x15BEC / 89068
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1040) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "FootSoldiersWaveCenter01"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave01_01", 397, Vector(-2604.0f, 73,33077f, 3337,39f), Vector(0.0f, 176,1319f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iVar0, 19);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave01_02", 398, Vector(-2613,909f, 72,62855f, 3336.0f), Vector(0.0f, 173,9642f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iVar0, 19);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave01_03", 397, Vector(-2608.0f, 72,92206f, 3335,013f), Vector(0.0f, 176,1319f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iVar0, 19);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FootSoldiersWave01_04", 398, Vector(-2610,464f, 73,22685f, 3338,464f), Vector(0.0f, 173,9642f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1040);
	SET_ACTOR_FACTION(&iVar0, 19);
	return;
}

void Function_445(var uParam0, var uParam1, bool bParam2) //Position: 0x15D68 / 89448
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

void Function_446(var uParam0, int iParam1) //Position: 0x15DB4 / 89524
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

void Function_447() //Position: 0x15DEE / 89582
{
	*(&iLocal_4 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Deputy01"));
	*(&iLocal_4 + 752[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DEPUTY_01_01", 588, Vector(-2869,656f, 62,83144f, 3404.0f), Vector(0.0f, -74,11799f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 752[02], &iLocal_4 + 808);
	TASK_STAND_STILL(&iLocal_4 + 752[02], -1.0f, 0, 0);
	*(&iLocal_4 + 752[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DEPUTY_01_02", 590, Vector(-2869,224f, 62,93977f, 3405,628f), Vector(0.0f, -53,57393f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 752[12], &iLocal_4 + 808);
	TASK_STAND_STILL(&iLocal_4 + 752[12], -1.0f, 0, 0);
	*(&iLocal_4 + 752[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DEPUTY_01_03", 592, Vector(-2865,601f, 63,49453f, 3408,298f), Vector(0.0f, -50,89732f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 752[22], &iLocal_4 + 808);
	TASK_STAND_STILL(&iLocal_4 + 752[22], -1.0f, 0, 0);
	return;
}

int Function_448() //Position: 0x15F1C / 89884
{
	Function_449(&iLocal_4 + 664, 397, 2, 0);
	Function_449(&iLocal_4 + 664, 401, 2, 0);
	Function_449(&iLocal_4 + 664, 398, 2, 0);
	Function_449(&iLocal_4 + 664, 402, 2, 0);
	Function_449(&iLocal_4 + 664, 1182, 2, 0);
	if (Function_318(&iLocal_4 + 664))
	{
		return 1;
	}
	return 0;
}

var Function_449(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x15F76 / 89974
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_322(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_322(&(Param0[iVar02]), 8);
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

void Function_450() //Position: 0x16052 / 90194
{
	if (Function_363(Global_46838[1]))
	{
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 1);
		if (IS_DOOR_VALID(&cLocal_1807))
		{
			if (bLocal_1387 == 3)
			{
				Function_452(&cLocal_1807);
			}
			else
			{
				Function_451(&cLocal_1807, 0);
			}
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 2);
		if (IS_DOOR_VALID(&cLocal_1807))
		{
			if (bLocal_1387 == 3)
			{
				Function_452(&cLocal_1807);
			}
			else
			{
				Function_451(&cLocal_1807, 1);
			}
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 7);
		if (IS_DOOR_VALID(&cLocal_1807))
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "guardTowerProps", 8);
		if (IS_DOOR_VALID(&cLocal_1807))
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 3);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 4);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 5);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 6);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 7);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 9);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
		cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "leftwingprops", 17);
		if (bLocal_1387 == 1)
		{
			Function_451(&cLocal_1807, 0);
		}
		else
		{
			Function_452(&cLocal_1807);
		}
	}
	return;
}

void Function_451(float fParam0, int iParam1) //Position: 0x1634E / 90958
{
	if (IS_DOOR_LOCKED(&fParam0))
	{
		Function_161(&fParam0, 0);
	}
	if (!IS_DOOR_OPENED(&fParam0))
	{
		OPEN_DOOR_DIRECTION_FAST(&fParam0, iParam1);
	}
	return;
}

void Function_452(float fParam0) //Position: 0x16376 / 90998
{
	if (IS_DOOR_OPENED(&fParam0))
	{
		CLOSE_DOOR_FAST(&fParam0);
	}
	if (!IS_DOOR_LOCKED(&fParam0))
	{
		Function_127(&fParam0, 0);
	}
	return;
}

bool Function_453(float fParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x1639C / 91036
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_454(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_455()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &fParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&fParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &fParam0))
				{
					uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(&fParam0, 0, &iParam8, &iParam9, &iParam10, &iParam11);
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
				Call_Loc(&iParam4);
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
	else if ((!Function_454(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_455()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_454(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_454(var uParam0, struct<2> Param1, float fParam3) //Position: 0x1667B / 91771
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_389(&uParam0);
		if (VDIST(Function_389(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_455() //Position: 0x16707 / 91911
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_456() //Position: 0x16716 / 91926
{
	var uVar0;
	var uVar2;
	int iVar4;
	int iVar5;
	
	switch (bLocal_1387)
	{
		case 0x00000000:
			Function_239(&iLocal_4 + 1576[0]);
			Function_310(&iLocal_4 + 1576[0]);
			uLocal_1737 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1235, "tempmerchant", 546, Function_239(&iLocal_4 + 1576[0]), Function_310(&iLocal_4 + 1576[0]));
			iVar4 = 0;
			while (iVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(iVar4);
					if (Function_399(iVar5))
					{
						if (iVar5 == 546)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar4), &uLocal_1737);
						}
					}
				}
				iVar4++;
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_239(&iLocal_4 + 1576[0]);
			Function_310(&iLocal_4 + 1576[0]);
			uLocal_1737 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1235, "tempmerchant", 546, Function_239(&iLocal_4 + 1576[0]), Function_310(&iLocal_4 + 1576[0]));
			iVar4 = 0;
			while (iVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(iVar4);
					if (Function_399(iVar5))
					{
						if (iVar5 == 398)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar4), &iLocal_4 + 912[02]);
						}
						if (iVar5 == 405)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar4), &iLocal_4 + 912[12]);
						}
						if (iVar5 == 401)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar4), &iLocal_4 + 912[22]);
						}
					}
				}
				iVar4++;
			}
			return 1;
			break;
		
		case 0x00000003:
			ENABLE_CHILD_SECTOR("fom_gallowsProps01x");
			ENABLE_CHILD_SECTOR("fom_gallows01x");
			ENABLE_CHILD_SECTOR("fom_courtyardProps01x");
			ENABLE_CHILD_SECTOR("fom_rightWingProps01x");
			ENABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			ENABLE_CHILD_SECTOR("fom_leftWing01x");
			ENABLE_CHILD_SECTOR("fom_leftWingProps01x");
			ENABLE_CHILD_SECTOR("fom_gallows01x");
			ENABLE_CHILD_SECTOR("fom_guardTower02x");
			return 1;
			break;
	}
	return 1;
}

void Function_457(bool bParam0, bool bParam1, bool bParam2, float fParam3, var uParam4) //Position: 0x16946 / 92486
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(&bParam0, "setup"))
	{
		if (&bParam0 == &iLocal_4 + 1136[22])
		{
			if (!IS_OBJECT_VALID(&iLocal_1869 + 120))
			{
				if (IS_ACTOR_ALIVE(&bParam2))
				{
					KILL_ACTOR(&bParam2);
				}
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					if (IS_ACTOR_INSIDE_VEHICLE(&bParam1) || GET_ACTOR_IN_VEHICLE_SEAT(&bParam0, false) != &bParam1)
					{
						KILL_ACTOR(&bParam1);
					}
				}
			}
		}
	}
	if (DECOR_CHECK_EXIST(&bParam0, "setup"))
	{
		if (&bParam0 == &iLocal_4 + 1072[22])
		{
			if (!IS_OBJECT_VALID(&iLocal_1837 + 120))
			{
				if (IS_ACTOR_ALIVE(&bParam2))
				{
					KILL_ACTOR(&bParam2);
				}
				if (IS_ACTOR_ALIVE(&bParam1))
				{
					if (IS_ACTOR_INSIDE_VEHICLE(&bParam1) || GET_ACTOR_IN_VEHICLE_SEAT(&bParam0, false) != &bParam1)
					{
						KILL_ACTOR(&bParam1);
					}
				}
			}
		}
	}
	if (&bParam0 == &iLocal_4 + 1136[22])
	{
		Function_389(&iLocal_4 + 1136[22]);
		STREAMING_LOAD_BOUNDS_EXT(1, Function_389(&iLocal_4 + 1136[22]), 25.0f, 1);
	}
	else
	{
		Function_389(&iLocal_4 + 1072[22]);
		STREAMING_LOAD_BOUNDS_EXT(2, Function_389(&iLocal_4 + 1072[22]), 25.0f, 1);
	}
	if (uParam4 >= 0)
	{
		if (IS_ACTOR_ALIVE(&bParam2))
		{
			if (IS_USING_TURRET(&bParam2))
			{
				Function_463(&bParam2);
			}
		}
	}
	if (uParam4 <= 4)
	{
		if (&bParam0 != &iLocal_4 + 1072[22] && Function_280(&bLocal_1788))
		{
			if (Function_278(&bLocal_1788) < 15.0f)
			{
				uParam4 = 7;
			}
		}
		else if (Function_280(&bLocal_1792))
		{
			if (Function_278(&bLocal_1792) < 15.0f)
			{
				uParam4 = 7;
			}
		}
	}
	switch (uParam4)
	{
		case 0x00000000:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				Function_389(&bParam0);
				uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_389(&bParam0), 20.0f, "gatlinggun", 1);
				if (IS_PHYSINST_VALID(&uVar0))
				{
					DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar0));
					DECOR_SET_BOOL(&bParam0, "destroyedgun", 1);
					uParam4 = 1;
				}
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				if (&bParam0 == &iLocal_4 + 1072[22])
				{
					Function_462(&bParam0);
					uVar1 = &iLocal_1837 + 112;
					SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_1837 + 120, &iLocal_4 + 1072[22], 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_1837 + 120, &iLocal_4 + 1072[12], 0);
					DECOR_SET_BOOL(&iLocal_1837 + 120, "nnoExplode", 1);
					uLocal_1813 = CREATE_EVENT_TRAP("wagon01kersplode", 13, &uLocal_1235);
					EVENT_TRAP_ON_TARGET(&uLocal_1813, &iLocal_1837 + 120);
					EVENT_TRAP_STORE_EVENTS(&uLocal_1813, 1);
				}
				else
				{
					Function_458(&bParam0);
					uVar1 = &iLocal_1869 + 112;
					SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_1869 + 120, &iLocal_4 + 1136[22], 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_1869 + 120, &iLocal_4 + 1136[12], 0);
					DECOR_SET_BOOL(&iLocal_1869 + 120, "nnoExplode", 1);
					uLocal_1815 = CREATE_EVENT_TRAP("wagon02kersplode", 13, &uLocal_1235);
					EVENT_TRAP_ON_TARGET(&uLocal_1815, &iLocal_1869 + 120);
					EVENT_TRAP_STORE_EVENTS(&uLocal_1815, 1);
				}
				DESTROY_ACTOR(GET_DRAFT_ACTOR(2, &bParam0));
				DESTROY_ACTOR(GET_DRAFT_ACTOR(3, &bParam0));
				SET_OBJECT_COLLIDE_WITH_OBJECT(&uVar1, &bParam0, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&bParam2, &uVar1, 0);
				DECOR_SET_BOOL(&bParam0, "setup", 1);
				uParam4 = 2;
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				if (&bParam0 == &iLocal_4 + 1072[22])
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam2, *(&iLocal_1837 + 48), 1, 1, 1);
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam2, *(&iLocal_1869 + 48), 1, 1, 1);
				}
				TASK_STAND_STILL(&bParam2, -1.0f, 0, 0);
				uParam4 = 3;
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				if (&bParam0 == &iLocal_4 + 1072[22])
				{
					Function_239(&iLocal_1837 + 112);
					Local_1801 = Function_239(&iLocal_1837 + 112);
					uVar2 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("gatling_attach", &Local_1801, 5.0f, 1));
					if (IS_OBJECT_VALID(&uVar2) && !GET_CURRENT_GRINGO(&bParam2) != GET_GRINGO_FROM_OBJECT(&uVar2))
					{
						SNAP_ACTOR_TO_GRINGO(&bParam2, &uVar2, "GatlingShoot", true, 0, 0);
					}
					TASK_USE_TURRET_AGAINST_OBJECT(&bParam2, &iLocal_1837 + 112, &Global_54076, -1.0f);
				}
				else
				{
					Function_239(&iLocal_1869 + 112);
					Local_1801 = Function_239(&iLocal_1869 + 112);
					uVar2 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("gatling_attach", &Local_1801, 5.0f, 1));
					if (IS_OBJECT_VALID(&uVar2) && !GET_CURRENT_GRINGO(&bParam2) != GET_GRINGO_FROM_OBJECT(&uVar2))
					{
						SNAP_ACTOR_TO_GRINGO(&bParam2, &uVar2, "GatlingShoot", true, 0, 0);
					}
					TASK_USE_TURRET_AGAINST_OBJECT(&bParam2, &iLocal_1869 + 112, &Global_54076, -1.0f);
				}
				if (IS_USING_TURRET(&bParam2))
				{
					uParam4 = 4;
				}
				else if (!DECOR_CHECK_EXIST(&bParam2, "puttingongun"))
				{
					DECOR_SET_FLOAT(&bParam2, "puttingongun", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bParam2, "puttingongun")) < 15.0f)
				{
					DESTROY_ACTOR(&bParam2);
					DESTROY_ACTOR(&bParam1);
					DESTROY_ACTOR(&bParam0);
					if (&bParam0 == &iLocal_4 + 1072[22])
					{
						DECOR_SET_BOOL(&uLocal_1235, "destroywagon01", 1);
					}
					else if (&bParam0 == &iLocal_4 + 1136[22])
					{
						DECOR_SET_BOOL(&uLocal_1235, "destroywagon02", 1);
					}
				}
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bParam2, 40.0f);
				AI_SET_RANGE_ACCURACY_MODIFIER(&bParam2, &Global_54076, 40.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam2, 53, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam2, 54, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bParam2, 16, true);
				MEMORY_REPORT_POSITION_AUTO(&bParam2, &Global_54076, 1);
				SET_ACTOR_FACTION(&bParam2, 19);
				MEMORY_CONSIDER_AS_ENEMY(&bParam2, &Global_54076);
				SET_ACTOR_VISION_XRAY(&bParam2, 1);
				SET_ACTOR_VISION_MAX_RANGE(&bParam2, 100.0f, 1);
				DECOR_SET_BOOL(&bParam2, "setup", 1);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bParam1, &fParam3, 4, 1, 0, 1, false);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bParam1, 8.0f);
				START_VEHICLE(&bParam0);
				AI_ACTOR_FORCE_SPEED(&bParam1, 4);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &bParam0), 4);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &bParam0), 4);
				SET_ACTOR_SPEED(&bParam1, 8.0f);
				SET_ACTOR_SPEED(&bParam0, 8.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &bParam0), 8.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &bParam0), 8.0f);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam1, true);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bParam1, 0);
				ADD_BLIP_FOR_ACTOR(&bParam1, 322, 0, 2, 0);
				ADD_BLIP_FOR_ACTOR(&bParam2, 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING(&bParam1, false);
				uParam4 = 5;
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				if (!GET_TASK_STATUS(&bParam1, 0) != 1 && IS_ACTOR_IN_VOLUME(&bParam0, &iLocal_4 + 1480[4]))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam1);
					bVar3 = TASK_SEQUENCE_OPEN();
					if (&bParam0 == &iLocal_4 + 1072[22])
					{
						TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 4352[33], 2, 3212836864);
					}
					else
					{
						TASK_GO_TO_COORD_NONSTOP(0, &iLocal_4 + 4352[23], 2, 3212836864);
					}
					TASK_VEHICLE_LEAVE(0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bParam1, bVar3);
					TASK_SEQUENCE_RELEASE(bVar3, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam1);
					SQUAD_JOIN(&bParam1, &iLocal_4 + 1040);
					SQUAD_JOIN(&bParam2, &iLocal_4 + 1040);
					uParam4 = 6;
				}
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_ALIVE(&bParam1))
			{
				if (GET_TASK_STATUS(&bParam1, 0) == 0)
				{
					Function_302(1, &bParam1, 0, 0, 0);
					DECOR_SET_BOOL(&bParam1, "staywithin", 1);
					if (IS_ACTOR_VALID(&bParam0))
					{
						SET_PROP_AI_OBSTACLE_ENABLED(&bParam0, 1);
					}
					uParam4 = 7;
				}
				else if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(&bParam1, 4294967295) >= 0)
				{
					MEMORY_ALLOW_SHOOTING(&bParam1, true);
				}
			}
			else
			{
				uParam4 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_ALIVE(&bParam1))
			{
				if (IS_ACTOR_VALID(&bParam0))
				{
					if (IS_ACTOR_IN_VOLUME(&bParam0, &iLocal_4 + 1480[4]))
					{
						if (&bParam0 == &iLocal_4 + 1072[22])
						{
							TASK_GO_TO_COORD_NONSTOP(&bParam0, &iLocal_4 + 4352[33], 2, 3212836864);
						}
						else
						{
							TASK_GO_TO_COORD_NONSTOP(&bParam0, &iLocal_4 + 4352[23], 2, 3212836864);
						}
					}
					else if (!DECOR_CHECK_EXIST(&bParam0, "stopped"))
					{
						TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
						DECOR_SET_BOOL(&bParam0, "stopped", 1);
					}
				}
				if (IS_ACTOR_ALIVE(&bParam2))
				{
					if ((!IS_ACTOR_IN_VOLUME(&bParam2, &iLocal_4 + 1560) && (!MEMORY_GET_IS_VISIBLE(&bParam2, &Global_54076) || GET_LAST_ATTACK_TIME(&bParam2) < 5.0f)) && !DECOR_CHECK_EXIST(&bParam2, "fleeing"))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam2));
						}
						TASK_FLEE_ACTOR(&bParam2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						DECOR_SET_BOOL(&bParam2, "fleeing", 1);
						LOG_ERROR("telling gunner to flee!");
					}
				}
			}
			else if (!IS_ACTOR_DRIVING_VEHICLE(&bParam1))
			{
				if (IS_ACTOR_VALID(&bParam0))
				{
					if (IS_ACTOR_IN_VOLUME(&bParam0, &iLocal_4 + 1480[4]))
					{
						if (&bParam0 == &iLocal_4 + 1072[22])
						{
							TASK_GO_TO_COORD_NONSTOP(&bParam0, &iLocal_4 + 4352[33], 2, 3212836864);
						}
						else
						{
							TASK_GO_TO_COORD_NONSTOP(&bParam0, &iLocal_4 + 4352[23], 2, 3212836864);
						}
					}
					else if (!DECOR_CHECK_EXIST(&bParam0, "stopped"))
					{
						TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
						DECOR_SET_BOOL(&bParam0, "stopped", 1);
					}
				}
				else if (IS_ACTOR_ALIVE(&bParam2))
				{
					if ((!IS_ACTOR_IN_VOLUME(&bParam2, &iLocal_4 + 1560) && (!MEMORY_GET_IS_VISIBLE(&bParam2, &Global_54076) || GET_LAST_ATTACK_TIME(&bParam2) < 5.0f)) && !DECOR_CHECK_EXIST(&bParam2, "fleeing"))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam2));
						}
						TASK_FLEE_ACTOR(&bParam2, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						DECOR_SET_BOOL(&bParam2, "fleeing", 1);
						LOG_ERROR("telling gunner to flee!");
					}
				}
				if ((!IS_ACTOR_IN_VOLUME(&bParam1, &iLocal_4 + 1560) && (!MEMORY_GET_IS_VISIBLE(&bParam1, &Global_54076) || GET_LAST_ATTACK_TIME(&bParam1) < 5.0f)) && !DECOR_CHECK_EXIST(&bParam1, "fleeing"))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam1));
					}
					TASK_FLEE_ACTOR(&bParam1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					DECOR_SET_BOOL(&bParam1, "fleeing", 1);
				}
			}
			if (IS_ACTOR_ALIVE(&bParam2))
			{
				Function_463(&bParam2);
			}
			break;
	}
}

int Function_458(float fParam0) //Position: 0x17412 / 95250
{
	var uVar0;
	
	Function_326(3, 2);
	uVar0 = &uVar0;
	Function_324(&iLocal_1869 + 8, "p_gen_gatlingGun01x", 0, 0);
	Function_324(&iLocal_1869 + 8, "p_gen_crateTnt01x", 0, 0);
	if (!Function_318(&iLocal_1869 + 8))
	{
		return 0;
	}
	iLocal_1869 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_1869 + 48) = Vector(0,3286236f, 1,171718f, 0,2749805f);
	*(&iLocal_1869 + 48 + 12) = Vector(0.0f, 179,0417f, 0.0f);
	Function_459(&fParam0, &iLocal_1869 + 48);
	*(&iLocal_1869 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1869, "TeleportGunner", Vector(0,3286236f, 1,171718f, 0,2749805f), Vector(0.0f, 179,0417f, 0.0f));
	*(&iLocal_1869 + 80) = Vector(0,1157726f, 0,3695362f, -0,04391552f);
	*(&iLocal_1869 + 80 + 12) = Vector(0.0f, 179,0417f, 0.0f);
	Function_459(&fParam0, &iLocal_1869 + 80);
	*(&iLocal_1869 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1869, "nExplosion", Vector(0,1157726f, 0,3695362f, -0,04391552f), Vector(0.0f, 179,0417f, 0.0f));
	*(&iLocal_1869 + 112) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1869, "gatlingGun01x0", "p_gen_gatlingGun01x", Vector(-0,1998849f, 1,132385f, 1,592617f), Vector(0.0f, -239,7721f, 0.0f), 1);
	*(&iLocal_1869 + 120) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1869, "crateTnt01x0", "p_gen_crateTnt01x", Vector(0,339658f, 1,155977f, 0,179589f), Vector(0.0f, 90,51331f, 0.0f), 1);
	Function_317(&iLocal_1869, &fParam0);
	return 1;
}

void Function_459(float fParam0, int iParam1) //Position: 0x175E8 / 95720
{
	Function_460(&fParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_460(int iParam0, bool bParam1, struct<2> Param2) //Position: 0x175FD / 95741
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&iParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_461(&Var0, &Param2))
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
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&iParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_461(vector3 vParam0) //Position: 0x1772A / 96042
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

int Function_462(float fParam0) //Position: 0x177A0 / 96160
{
	var uVar0;
	
	Function_326(3, 2);
	uVar0 = &uVar0;
	Function_324(&iLocal_1837 + 8, "p_gen_gatlingGun01x", 0, 0);
	Function_324(&iLocal_1837 + 8, "p_gen_crateTnt01x", 0, 0);
	if (!Function_318(&iLocal_1837 + 8))
	{
		return 0;
	}
	iLocal_1837 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_1837 + 48) = Vector(-0,02870048f, 1,177934f, 0,1923085f);
	*(&iLocal_1837 + 48 + 12) = Vector(0.0f, 185,4607f, 0.0f);
	Function_459(&fParam0, &iLocal_1837 + 48);
	*(&iLocal_1837 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1837, "TeleportGunner", Vector(-0,02870048f, 1,177934f, 0,1923085f), Vector(0.0f, 185,4607f, 0.0f));
	*(&iLocal_1837 + 80) = Vector(-0,04937503f, 0,4326947f, -0,05728117f);
	*(&iLocal_1837 + 80 + 12) = Vector(0.0f, 185,4607f, 0.0f);
	Function_459(&fParam0, &iLocal_1837 + 80);
	*(&iLocal_1837 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1837, "nExplosion", Vector(-0,04937503f, 0,4326947f, -0,05728117f), Vector(0.0f, 185,4607f, 0.0f));
	*(&iLocal_1837 + 112) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1837, "gatlingGun01x0", "p_gen_gatlingGun01x", Vector(0,1797771f, 1,128213f, 1,584153f), Vector(0.0f, -120,6607f, 0.0f), 1);
	*(&iLocal_1837 + 120) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1837, "crateTnt01x0", "p_gen_crateTnt01x", Vector(-0,319578f, 1,110294f, -0,3084635f), Vector(0.0f, -91,8523f, 0.0f), 1);
	Function_317(&iLocal_1837, &fParam0);
	return 1;
}

void Function_463(bool bParam0) //Position: 0x17976 / 96630
{
	struct<2> Var0;
	float fVar2;
	struct<2> Var4;
	var uVar6;
	var uVar8;
	float fVar10;
	var uVar11;
	bool bVar12;
	
	if (IS_ACTOR_ALIVE(&bParam0))
	{
		Var0 = Vector(0.0f, 0.0f, 0.0f);
		fVar2 = Vector(0.0f, 0.0f, 0.0f);
		Function_292(&bParam0);
		Var4 = Function_292(&bParam0);
		GET_RETICLE_TARGET_POINT(&Global_54076, &Var0);
		Function_292(&Global_54076);
		uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_292(&Global_54076), Var4, StackVal);
		Function_292(&Global_54076);
		uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_292(&Global_54076), Var0, StackVal);
		fVar10 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar6, &uVar8);
		uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, &uLocal_1235, Function_54(), Var0, Vector(0.0f, 0.0f, 0.0f));
		Function_389(&bParam0);
		GET_OBJECT_RELATIVE_OFFSET(&uVar11, Function_389(&bParam0), &fVar2);
		DESTROY_OBJECT(&uVar11);
		bVar12 = false;
		if (bVar12)
		{
		}
		if (fVar10 > 15.0f)
		{
			if (DECOR_CHECK_EXIST(&bParam0, "onright"))
			{
				DECOR_REMOVE(&bParam0, "onright");
			}
			if (DECOR_CHECK_EXIST(&bParam0, "onleft"))
			{
				DECOR_REMOVE(&bParam0, "onleft");
			}
			if (!DECOR_CHECK_EXIST(&bParam0, "onhead"))
			{
				AI_SHOOT_TARGET_SET_BONE(&bParam0, &Global_54076, "head");
				AI_SET_RANGE_ACCURACY_MODIFIER(&bParam0, &Global_54076, 50.0f);
				DECOR_SET_BOOL(&bParam0, "onhead", 1);
				if (bVar12)
				{
				}
			}
		}
		else if (fVar2 > 0.0f)
		{
			if (DECOR_CHECK_EXIST(&bParam0, "onright"))
			{
				DECOR_REMOVE(&bParam0, "onright");
			}
			if (DECOR_CHECK_EXIST(&bParam0, "onhead"))
			{
				DECOR_REMOVE(&bParam0, "onhead");
			}
			if (!DECOR_CHECK_EXIST(&bParam0, "onleft"))
			{
				AI_SHOOT_TARGET_SET_BONE(&bParam0, &Global_54076, "elbow_l");
				AI_SET_RANGE_ACCURACY_MODIFIER(&bParam0, &Global_54076, 50.0f);
				DECOR_SET_BOOL(&bParam0, "onleft", 1);
				if (bVar12)
				{
				}
			}
		}
		else
		{
			if (DECOR_CHECK_EXIST(&bParam0, "onleft"))
			{
				DECOR_REMOVE(&bParam0, "onleft");
			}
			if (DECOR_CHECK_EXIST(&bParam0, "onhead"))
			{
				DECOR_REMOVE(&bParam0, "onhead");
			}
			if (!DECOR_CHECK_EXIST(&bParam0, "onright"))
			{
				AI_SHOOT_TARGET_SET_BONE(&bParam0, &Global_54076, "elbow_r");
				AI_SET_RANGE_ACCURACY_MODIFIER(&bParam0, &Global_54076, 50.0f);
				DECOR_SET_BOOL(&bParam0, "onright", 0);
				if (bVar12)
				{
				}
			}
		}
	}
	return;
}

void Function_464(bool bParam0, int iParam1, var uParam2, int iParam3) //Position: 0x17BC9 / 97225
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	struct<5> Var5;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_389(&bParam0);
		Local_1801 = Function_389(&bParam0);
		Function_310(&bParam0);
		Var0 = Function_310(&bParam0);
		if (IS_ACTOR_ALIVE(&uParam2))
		{
			KILL_ACTOR(&uParam2);
		}
		if (IS_ACTOR_ALIVE(&iParam1))
		{
			if (IS_ACTOR_INSIDE_VEHICLE(&iParam1) || GET_ACTOR_IN_VEHICLE_SEAT(&bParam0, false) != &iParam1)
			{
				KILL_ACTOR(&iParam1);
			}
		}
		if (IS_ACTOR_ALIVE(GET_DRAFT_ACTOR(false, &bParam0)))
		{
			KILL_ACTOR(GET_DRAFT_ACTOR(false, &bParam0));
		}
		if (IS_ACTOR_ALIVE(GET_DRAFT_ACTOR(true, &bParam0)))
		{
			KILL_ACTOR(GET_DRAFT_ACTOR(true, &bParam0));
		}
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "kersploded", 1);
		REMOVE_ALL_OBJECT_ATTACHMENTS(&bParam0);
		uVar2 = GET_PHYSINST_FROM_ACTOR(&bParam0);
		SET_DRAW_ACTOR(&bParam0, 0);
		Function_292(&bParam0);
		Var5 = Function_292(&bParam0);
		Var5.f_4 = (StackVal - 10.0f);
		TELEPORT_ACTOR(&bParam0, &Var5, 1, 1, 1);
		DECOR_SET_FLOAT(&bParam0, "ndestroyme", GET_CURRENT_GAME_TIME());
		switch (iParam3)
		{
			case 0x00000001:
				SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(&iLocal_1837 + 112), 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment01x", "stagecoach003_fragment01x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment02x", "stagecoach003_fragment02x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment06x", "stagecoach003_fragment06x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment08x", "stagecoach003_fragment08x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment09x", "stagecoach003_fragment09x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment10x", "stagecoach003_fragment10x", Local_1801, Var0, 0);
				DESTROY_OBJECT(&iLocal_1837 + 112);
				Function_239(&iLocal_1837 + 104);
				uVar3 = Function_239(&iLocal_1837 + 104);
				break;
			
			case 0x00000002:
				SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(&iLocal_1869 + 112), 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment01x1", "stagecoach003_fragment01x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment02x1", "stagecoach003_fragment02x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment06x1", "stagecoach003_fragment06x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment08x1", "stagecoach003_fragment08x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment09x1", "stagecoach003_fragment09x", Local_1801, Var0, 0);
				CREATE_PROP_IN_LAYOUT(&uLocal_1235, "stagecoach003_fragment10x1", "stagecoach003_fragment10x", Local_1801, Var0, 0);
				DESTROY_OBJECT(&iLocal_1869 + 112);
				Function_239(&iLocal_1869 + 104);
				uVar3 = Function_239(&iLocal_1869 + 104);
				break;
		}
		Function_465(&uVar3, "DynamiteExplosion", 0, 0);
	}
}

void Function_465(float fParam0, float fParam1, float fParam2, var uParam3) //Position: 0x180AB / 98475
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &uParam3);
}

void Function_466() //Position: 0x180CB / 98507
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uLocal_1811))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uLocal_1811))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uLocal_1811, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (GET_TASK_STATUS(&uVar1, 1) == 0)
				{
					SQUAD_LEAVE(&uVar1);
					DESTROY_ACTOR(&uVar1);
					return;
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_467(int iParam0) //Position: 0x18120 / 98592
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_463(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_468(int iParam0) //Position: 0x18160 / 98656
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&bVar1))
			{
				if (IS_ACTOR_RIDING(&bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&bVar1, &iLocal_4 + 1480[0]) && !DECOR_CHECK_EXIST(&bVar1, "slowdown"))
					{
						TASK_OVERRIDE_SET_MOVETYPE(&bVar1, 1);
						DECOR_SET_BOOL(&bVar1, "slowdown", 1);
						ACTOR_MOUNTED_WEAPON_EVEN(&bVar1, 16, 10.0f);
					}
					else if (!IS_ACTOR_IN_VOLUME(&bVar1, &iLocal_4 + 1480[0]) && DECOR_CHECK_EXIST(&bVar1, "slowdown"))
					{
						TASK_OVERRIDE_SET_MOVETYPE(&bVar1, 4);
						DECOR_REMOVE(&bVar1, "slowdown");
						ACTOR_MOUNTED_WEAPON_EVEN(&bVar1, 16, 0,1f);
					}
				}
				else if (!DECOR_CHECK_EXIST(&bVar1, "retasked"))
				{
					Function_469(&iLocal_4 + 1480[1]);
					Function_292(&bVar1);
					Function_469(&iLocal_4 + 1480[2]);
					Function_292(&bVar1);
					if (VDIST(Function_469(&iLocal_4 + 1480[1]), Function_292(&bVar1)) > VDIST(Function_469(&iLocal_4 + 1480[2]), Function_292(&bVar1)))
					{
						Function_302(0, &bVar1, 0, 0, 0);
					}
					else
					{
						Function_302(1, &bVar1, 0, 0, 0);
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

struct<8> Function_469(var uParam0) //Position: 0x1829A / 98970
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_470() //Position: 0x182AC / 98988
{
	if (iLocal_1388 < 4 && iLocal_1388 > 105)
	{
		if (iLocal_1388 >= 9)
		{
			Function_546(Function_379(&bLocal_1402, (30.0f + 20.0f), 100.0f, &bLocal_1733, "Marshal_return", "Marshal_abandoned", &bLocal_1419, 0, &iLocal_4, &uLocal_1235, 325, 1));
		}
		else
		{
			Function_546(Function_379(&bLocal_1402, 30.0f, 100.0f, &bLocal_1733, "Marshal_return", "Marshal_abandoned", &bLocal_1419, 0, &iLocal_4, &uLocal_1235, 325, 1));
		}
		if (Function_278(&bLocal_1768) < 1.0f)
		{
			Function_545(&iLocal_4 + 992);
			Function_545(&iLocal_4 + 1000);
			Function_545(&iLocal_4 + 1008);
			Function_545(&iLocal_4 + 1016);
			Function_545(&iLocal_4 + 1024);
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "GUNFIGHT_RUN"))
			{
				if (((IS_ACTOR_SHOOTING(&Global_54076) || Function_544(&iLocal_4 + 984)) || Function_544(&iLocal_4 + 808)) || IS_ACTOR_SHOOTING(&bLocal_1392))
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_RUN", 0, 4294967295, 4294967295);
					DECOR_SET_BOOL(&uLocal_1235, "GUNFIGHT_RUN", 1);
				}
			}
			if (iLocal_1388 <= 6 && iLocal_1388 >= 12)
			{
				Function_542();
				Function_540();
				Function_538();
				Function_536();
				Function_534();
			}
			Function_224(&bLocal_1768);
		}
		Function_527();
		Function_450();
		if (iLocal_1388 > 8)
		{
			Function_239(&iLocal_4 + 1960[0]);
			Function_524(StackVal, "$/cutscene/FORT01_CS06/FORT01_CS06", &uLocal_1424, Function_239(&iLocal_4 + 1960[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
	}
	switch (iLocal_1388)
	{
		case 0x00000000:
			Function_368(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_1406[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365();
				Function_239(&iLocal_4 + 1808[0]);
				iLocal_1389 = Function_364(StackVal, Function_239(&iLocal_4 + 1808[0]), 0, 1, 1);
				if (!Function_363(iLocal_1389))
				{
					Function_362(&Local_1237);
				}
				Function_361(&Global_54076, &iLocal_4 + 1808[0], 1, 1, 1);
				Function_224(&bLocal_1394);
				iLocal_1388 = 1;
			}
			else
			{
				Function_521();
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_363(Global_46838[1])) && Function_520())
			{
				Function_521();
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1237, bLocal_1387))
			{
				Function_238(bLocal_1387);
				Function_432(StackVal, Function_238(bLocal_1387), bLocal_1387, Global_46736[3], Function_241(bLocal_1387), 0);
				Function_224(&bLocal_1394);
				iLocal_1388 = 3;
			}
			else if (Function_278(&bLocal_1394) < 1.0f)
			{
				Function_238(bLocal_1387);
				Function_432(StackVal, Function_238(bLocal_1387), bLocal_1387, Global_46736[3], Function_241(bLocal_1387), 0);
				Function_224(&bLocal_1394);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1388 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_271("$/cutscene/FORT01_CS05_SEQ/FORT01_CS05_SEQ", &iLocal_1375, &Local_1237, &bLocal_1387, 71488, 71113, 70165, 63064, 110967, 56641, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 4;
			}
			break;
		
		case 0x00000004:
			Function_510();
			if (!iLocal_1406[1])
			{
				Function_361(&Global_54076, &iLocal_4 + 1808[1], 0, 1, 1);
				Function_361(&bLocal_1731, &iLocal_4 + 1808[5], 0, 1, 1);
				Function_361(&bLocal_1733, &iLocal_4 + 1808[7], 1, 1, 1);
				Function_361(&iLocal_4 + 752[02], &iLocal_4 + 1808[11], 0, 1, 1);
				Function_361(&iLocal_4 + 752[12], &iLocal_4 + 1808[12], 0, 1, 1);
				Function_361(&iLocal_4 + 752[22], &iLocal_4 + 1808[13], 0, 1, 1);
				Function_347(&iLocal_4 + 808, &iLocal_4 + 2448, 2.0f, 75.0f, 7, &iLocal_4 + 4600, 0);
				Function_346(&iLocal_4 + 808, 1);
				Function_344(&iLocal_4 + 808, 16, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1731, 13, false);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				ACTOR_POP_NEXT_GAIT(&bLocal_1731, 2, 0);
				ACTOR_POP_NEXT_GAIT(&bLocal_1733, 2, 0);
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 752[02], 1);
				DECOR_SET_BOOL(&iLocal_4 + 752[02], "slowed", 1);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 752[02], 1, 0);
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 752[12], 1);
				DECOR_SET_BOOL(&iLocal_4 + 752[12], "slowed", 1);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 752[12], 1, 0);
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 752[22], 1);
				DECOR_SET_BOOL(&iLocal_4 + 752[22], "slowed", 1);
				ACTOR_POP_NEXT_GAIT(&iLocal_4 + 752[22], 1, 0);
			}
			else
			{
				Function_509();
				ACTOR_SET_NEXT_WEAPON(&Global_54076, Function_508(&Global_54076, 41));
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 752[02], 1);
				DECOR_SET_BOOL(&iLocal_4 + 752[02], "slowed", 1);
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 752[12], 1);
				DECOR_SET_BOOL(&iLocal_4 + 752[12], "slowed", 1);
				TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 752[22], 1);
				DECOR_SET_BOOL(&iLocal_4 + 752[22], "slowed", 1);
			}
			Function_507(&iLocal_4 + 1416[5]);
			ENABLE_CHILD_SECTOR("fom_rightWingProps01x");
			ENABLE_CHILD_SECTOR("fom_rightWing01x");
			ENABLE_CHILD_SECTOR("fom_guardTower01x");
			ENABLE_CHILD_SECTOR("fom_guardTower02x");
			ENABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			ENABLE_CHILD_SECTOR("fom_courtyardProps01x");
			ENABLE_CHILD_SECTOR("fom_gallowsProps01x");
			ENABLE_CHILD_SECTOR("fom_gallows01x");
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1731, false);
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1733, false);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_4 + 752[02], false);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_4 + 752[12], false);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_4 + 752[22], false);
			Function_506(&iLocal_4 + 808, 0);
			if (DECOR_CHECK_EXIST(&Global_54076, "GringoNoQuit"))
			{
				DECOR_REMOVE(&Global_54076, "GringoNoQuit");
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
			Function_426();
			AUDIO_MUSIC_SET_MOOD("RUN", 0, 4294967295, 4294967295);
			bLocal_1730 = Function_505();
			Function_419(&(Local_1487[015]), &bLocal_1392, "Merchant", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[115]), &bLocal_1733, "Marshal", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[215]), &bLocal_1731, "GraveRobber", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[315]), &iLocal_4 + 752[02], "Deputies", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[415]), &iLocal_4 + 752[12], "Deputies", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[515]), &iLocal_4 + 752[22], "Deputies", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[615]), &bLocal_1735, "Wagon", 0, 0x5f5e100, 1);
			Function_221(0);
			Function_224(&bLocal_1394);
			iLocal_1388 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_500();
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1733);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_4 + 752[02]);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_4 + 752[12]);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_4 + 752[22]);
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1392, false);
				Function_499();
				Function_224(&bLocal_1394);
				iLocal_1388 = 7;
			}
			break;
		
		case 0x00000007:
			if (DECOR_CHECK_EXIST(&iLocal_4 + 752[02], "slowed") && Function_278(&bLocal_1394) <= 1.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_4 + 752[02]);
				DECOR_REMOVE(&iLocal_4 + 752[02], "slowed");
			}
			if (DECOR_CHECK_EXIST(&iLocal_4 + 752[12], "slowed") && Function_278(&bLocal_1394) <= 0,5f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_4 + 752[12]);
				DECOR_REMOVE(&iLocal_4 + 752[12], "slowed");
			}
			if (DECOR_CHECK_EXIST(&iLocal_4 + 752[22], "slowed") && Function_278(&bLocal_1394) <= 1,5f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_4 + 752[22]);
				DECOR_REMOVE(&iLocal_4 + 752[22], "slowed");
			}
			if (Function_278(&bLocal_1394) <= 5.0f)
			{
				Function_415("Fort01_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1733)))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_1733, 325, 0, 2, 0);
				}
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1392, true);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_224(&bLocal_1394);
				Function_224(&bLocal_1398);
				Function_224(&bLocal_1402);
				iLocal_1388 = 8;
			}
			break;
		
		case 0x00000008:
			Function_492("guards2a", &iLocal_4 + 984);
			if (Function_278(&bLocal_1772) < 1.0f)
			{
				Function_491(&iLocal_4 + 808, &iLocal_4 + 984);
				Function_491(&iLocal_4 + 984, &iLocal_4 + 808);
				Function_489(&iLocal_4 + 2448, 2.0f, 75.0f, 7);
				Function_224(&bLocal_1772);
			}
			Function_534();
			break;
		
		case 0x00000009:
			Function_492("guards2b", &iLocal_4 + 992);
			if (Function_278(&bLocal_1772) < 1.0f)
			{
				Function_491(&iLocal_4 + 808, &iLocal_4 + 992);
				Function_491(&iLocal_4 + 992, &iLocal_4 + 808);
				Function_489(&iLocal_4 + 2512, 1.0f, 75.0f, 7);
				Function_224(&bLocal_1772);
			}
			Function_536();
			break;
		
		case 0x0000000A:
			Function_492("guards2c", &iLocal_4 + 1000);
			if (Function_278(&bLocal_1772) < 1.0f)
			{
				Function_491(&iLocal_4 + 808, &iLocal_4 + 1000);
				Function_491(&iLocal_4 + 1000, &iLocal_4 + 808);
				Function_489(&iLocal_4 + 2576, 1.0f, 75.0f, 7);
				Function_224(&bLocal_1772);
			}
			Function_538();
			break;
		
		case 0x0000000B:
			Function_492("guards2d", &iLocal_4 + 1008);
			if (Function_278(&bLocal_1772) < 1.0f)
			{
				Function_491(&iLocal_4 + 808, &iLocal_4 + 1008);
				Function_491(&iLocal_4 + 1008, &iLocal_4 + 808);
				Function_224(&bLocal_1772);
			}
			Function_540();
			break;
		
		case 0x0000000C:
			Function_492("guards2e", &iLocal_4 + 1016);
			if (SQUAD_IS_VALID(&iLocal_4 + 1016))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1016) >= 0)
				{
					if (Function_278(&bLocal_1772) < 1.0f)
					{
						Function_491(&iLocal_4 + 808, &iLocal_4 + 1016);
						Function_491(&iLocal_4 + 1016, &iLocal_4 + 808);
						Function_489(&iLocal_4 + 2704, 1.0f, 75.0f, 7);
						Function_224(&bLocal_1772);
					}
				}
				else if (SQUAD_IS_VALID(&iLocal_4 + 1024))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
					{
						if (Function_278(&bLocal_1772) < 1.0f)
						{
							Function_491(&iLocal_4 + 808, &iLocal_4 + 1024);
							Function_491(&iLocal_4 + 1024, &iLocal_4 + 808);
							Function_489(&iLocal_4 + 2704, 1.0f, 75.0f, 7);
							Function_224(&bLocal_1772);
						}
					}
				}
			}
			else if (SQUAD_IS_VALID(&iLocal_4 + 1024))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
				{
					if (Function_278(&bLocal_1772) < 1.0f)
					{
						Function_491(&iLocal_4 + 808, &iLocal_4 + 1024);
						Function_491(&iLocal_4 + 1024, &iLocal_4 + 808);
						Function_489(&iLocal_4 + 2704, 1.0f, 75.0f, 7);
						Function_224(&bLocal_1772);
					}
				}
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 1016) && SQUAD_IS_VALID(&iLocal_4 + 1024))
			{
				if (((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 984) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 992) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1000) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1008) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1016) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
				{
					Function_488(&iLocal_4 + 808);
					Function_224(&bLocal_1394);
					iLocal_1388 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_278(&bLocal_1394) <= 1.0f)
			{
				Function_487();
				Function_224(&bLocal_1394);
				iLocal_1388 = 14;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_278(&bLocal_1394) <= 3.0f)
			{
				SQUAD_GOALS_CLEAR(&iLocal_4 + 808);
				Function_303(&iLocal_4 + 808);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_485();
				if (!IS_ACTOR_IN_VOLUME(&bLocal_1733, &iLocal_4 + 1416[0]))
				{
					uLocal_1751 = Function_484(&uLocal_1235, Function_54(), &iLocal_4 + 1264[3], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
					Function_415("Fort01_obj06_yellow", 7,5f, 1, 2, 0, 0, 0, 0);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1733)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1733));
					}
				}
				else
				{
					Function_415("Fort01_obj06_blue", 7,5f, 1, 2, 0, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1733)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_1733, 325, 0, 2, 0);
					}
				}
				Function_224(&bLocal_1394);
				iLocal_1388 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_476();
			if (IS_OBJECT_VALID(&uLocal_1751))
			{
				if (Function_473(&uLocal_1751, 0, 1, 0, 0, 0))
				{
					Function_472(&uLocal_1751);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1392)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1392));
					}
					Function_243();
					Function_224(&bLocal_1394);
					iLocal_1388 = 106;
				}
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1264[3]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1392)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1392));
				}
				Function_243();
				Function_224(&bLocal_1394);
				iLocal_1388 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_278(&bLocal_1394) < 3.0f)
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				if (SQUAD_IS_VALID(&iLocal_4 + 984))
				{
					Function_220(&iLocal_4 + 984);
					DESTROY_OBJECT(&iLocal_4 + 984);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 992))
				{
					Function_220(&iLocal_4 + 992);
					DESTROY_OBJECT(&iLocal_4 + 992);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1000))
				{
					Function_220(&iLocal_4 + 1000);
					DESTROY_OBJECT(&iLocal_4 + 1000);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1008))
				{
					Function_220(&iLocal_4 + 1008);
					DESTROY_OBJECT(&iLocal_4 + 1008);
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 1016))
				{
					Function_220(&iLocal_4 + 1016);
					DESTROY_OBJECT(&iLocal_4 + 1016);
				}
				ACTOR_END_FORCE_HOLSTER(&bLocal_1392);
				MEMORY_ALLOW_SHOOTING(&bLocal_1392, true);
				Function_361(&bLocal_1735, &iLocal_4 + 3304[4], 1, 1, 1);
				Function_471();
				iLocal_1406[2] = 1;
				Function_224(&bLocal_1394);
				bLocal_1387 = 3;
				iLocal_1388 = 2;
			}
			break;
	}
	return;
}

void Function_471() //Position: 0x191F6 / 102902
{
	Function_177(&iLocal_4 + 592);
	return;
}

void Function_472(bool bParam0) //Position: 0x19204 / 102916
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

bool Function_473(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1929A / 103066
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &uParam1, &uParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_475(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_474(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_474(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_461(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_461(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

float Function_474(var uParam0, bool bParam1) //Position: 0x194CF / 103631
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_475(var uParam0, bool bParam1) //Position: 0x194F0 / 103664
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
	else if (!&bParam1 || Function_474(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_476() //Position: 0x1955A / 103770
{
	bool bVar0;
	
	if (!Function_483(4, bLocal_1730))
	{
		if ((GET_TASK_STATUS(&bLocal_1733, 0) != 0 || GET_TASK_STATUS(&bLocal_1733, 6) != 0) || !GET_TASK_STATUS(&bLocal_1733, 0) != 1)
		{
			if (!Function_480(&bLocal_1733, &Global_54076, 5.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1733, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1733, "one_handed_wave", 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_ACTION_PERFORM(0, "one_handed_wave/wave");
				TASK_STAND_STILL(false, 15.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1733, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				Function_292(&bLocal_1733);
				AI_GOAL_STAND_AT_COORD(&bLocal_1733, Function_292(&bLocal_1733), 1);
			}
			else
			{
				TASK_STAND_STILL(&bLocal_1733, 15.0f, 0, 0);
			}
			DECOR_SET_FLOAT(&bLocal_1733, "taskedwave", GET_CURRENT_GAME_TIME());
			Function_479(4);
			bLocal_1730 = Function_505();
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bLocal_1733, "taskedwave")) < 20.0f)
	{
		DECOR_REMOVE(&bLocal_1733, "taskedwave");
		Function_478(3);
		Function_478(4);
		bLocal_1730 = Function_505();
	}
	if ((IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1733, "wave") && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !Function_483(3, bLocal_1730))
	{
		Function_477();
		Function_479(3);
		bLocal_1730 = Function_505();
	}
	return;
}

void Function_477() //Position: 0x196C2 / 104130
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_farBehind_Marshal", "Fort01_farBehind_Marshal", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_478(int iParam0) //Position: 0x1971B / 104219
{
	int iVar0;
	
	*(&iVar0 + 80) = 3;
	RETRIEVE_GAME_STATE(&iVar0, 48, 1);
	Function_38(&iVar0 + 164, iParam0);
	STORE_GAME_STATE(&iVar0, 48, 1);
	return;
}

void Function_479(int iParam0) //Position: 0x19743 / 104259
{
	int iVar0;
	
	*(&iVar0 + 80) = 3;
	RETRIEVE_GAME_STATE(&iVar0, 48, 1);
	Function_77(&iVar0 + 164, iParam0);
	STORE_GAME_STATE(&iVar0, 48, 1);
	return;
}

bool Function_480(var uParam0, var uParam1, float fParam2) //Position: 0x1976B / 104299
{
	float fVar0;
	
	fVar0 = Function_481(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_481(var uParam0, int iParam1) //Position: 0x1978A / 104330
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_482(&uVar0, &uVar2);
	return iVar4;
}

var Function_482(struct<2> Param0) //Position: 0x197AB / 104363
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_483(bool bParam0, bool bParam1) //Position: 0x197CA / 104394
{
	return Function_14(bParam1, bParam0);
}

var Function_484(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x197D7 / 104407
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
		ADD_BLIP_FOR_OBJECT(&uVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &uParam8);
	}
	return &uVar0;
}

void Function_485() //Position: 0x19868 / 104552
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bLocal_1733))
	{
		TASK_CLEAR(&bLocal_1733);
		GET_OBJECT_POSITION(&iLocal_4 + 1960[5], &uVar0);
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		if (Function_486(&bLocal_1733, &iLocal_4 + 2712[0], 2.0f))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4792, 2, 1, 0, 1, false);
		}
		else if (IS_ACTOR_IN_VOLUME(&bLocal_1733, &iLocal_4 + 1416[0]))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4808, 2, 1, 0, 1, false);
		}
		TASK_GO_TO_COORD(0, &uVar0, 2);
		TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1733, bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&bLocal_1733, true);
	}
	if (IS_ACTOR_VALID(&bLocal_1731))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1731, 0);
		GET_OBJECT_POSITION(&iLocal_4 + 1960[7], &uVar0);
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &uVar0, 2);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4592), "UseCase1", 4294967295, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1731, bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&bLocal_1731, true);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 752[02]))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 1960[9], &uVar0);
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &uVar0, 2);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4552), "UseCase1", 4294967295, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iLocal_4 + 752[02], bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&iLocal_4 + 752[02], true);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 752[12]))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 1960[12], &uVar0);
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4784, 2, 1, 0, 1, false);
		TASK_GO_TO_COORD(0, &uVar0, 2);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4560), "UseCase1", 4294967295, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iLocal_4 + 752[12], bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&iLocal_4 + 752[12], true);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 752[22]))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 1960[14], &uVar0);
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &uVar0, 2);
		TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iLocal_4 + 752[22], bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&iLocal_4 + 752[22], true);
	}
	return;
}

bool Function_486(bool bParam0, bool bParam1, float fParam2) //Position: 0x19ABF / 105151
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_389(&bParam0);
			Function_332(&bParam1);
			if (VDIST(Function_389(&bParam0), Function_332(&bParam1)) >= fParam2)
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

void Function_487() //Position: 0x19BDD / 105437
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_regroup_Marshal", "Fort01_regroup_Marshal", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488(int iParam0) //Position: 0x19C32 / 105522
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
				AI_GOAL_SHOOT_CLEAR(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_489(var uParam0, bool bParam1, float fParam2, int iParam3) //Position: 0x19C72 / 105586
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	bool bVar4;
	
	if (SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iLocal_4 + 808))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, bVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				if ((DECOR_CHECK_EXIST(&iVar1, "x_vector") && DECOR_CHECK_EXIST(&iVar1, "y_vector")) && DECOR_CHECK_EXIST(&iVar1, "z_vector"))
				{
					Var2 = Vector(0.0f, 0.0f, 0.0f);
					Var2 = DECOR_GET_FLOAT(&iVar1, "x_vector");
					Var2.f_4 = DECOR_GET_FLOAT(&iVar1, "y_vector");
					Var2.f_8 = DECOR_GET_FLOAT(&iVar1, "z_vector");
					if (Function_454(StackVal, &Global_54076, Var2, 2.0f))
					{
						bVar4 = Function_490(&uParam0);
						if (!DECOR_CHECK_EXIST(&bVar4, "altused"))
						{
							if (DECOR_CHECK_EXIST(&iVar1, "ncoverused"))
							{
								DECOR_REMOVE(GET_INDEXED_OBJECT_IN_OBJECTSET(DECOR_GET_INT(&iVar1, "ncoverused"), &uParam0), "used");
							}
							Function_348(&iVar1, &bVar4, bParam1, fParam2, iParam3, bVar0, 0, 0, 0);
						}
						if (&iVar1 == &bLocal_1733)
						{
						}
					}
				}
				else if (&iVar1 == &bLocal_1733)
				{
				}
			}
			bVar0++;
		}
	}
}

var Function_490(int iParam0) //Position: 0x19DC4 / 105924
{
	bool bVar0;
	var uVar1;
	
	if (IS_OBJECTSET_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
		{
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				if (!DECOR_CHECK_EXIST(&uVar1, "used"))
				{
					return &uVar1;
				}
			}
			bVar0++;
		}
	}
	return "";
}

void Function_491(int iParam0, int iParam1) //Position: 0x19E15 / 106005
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	var uVar6;
	
	if (SQUAD_IS_VALID(&iParam0) && SQUAD_IS_VALID(&iParam1))
	{
		iVar0 = SQUAD_GET_SIZE(&iParam1);
		if (iVar0 > 1)
		{
			bVar1 = false;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(&iParam0))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
				if (IS_ACTOR_VALID(&bVar2))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, RAND_INT_RANGE(0, (iVar0 - 1)));
					if (IS_ACTOR_VALID(&uVar3))
					{
						if ((DECOR_CHECK_EXIST(&uVar3, "x_vector") && DECOR_CHECK_EXIST(&uVar3, "y_vector")) && DECOR_CHECK_EXIST(&uVar3, "z_vector"))
						{
							MEMORY_REPORT_POSITION_AUTO(&bVar2, &uVar3, 1);
							Var4 = Vector(0.0f, 0.0f, 0.0f);
							Var4 = DECOR_GET_FLOAT(&bVar2, "x_vector");
							Var4.f_4 = DECOR_GET_FLOAT(&bVar2, "y_vector");
							Var4.f_8 = DECOR_GET_FLOAT(&bVar2, "z_vector");
							Function_389(&bVar2);
							if (VDIST(Function_389(&bVar2), Var4) > 2.0f)
							{
								AI_GOAL_SHOOT_AT_OBJECT(&bVar2, &uVar3);
							}
							else
							{
								Function_389(&bVar2);
								uVar6 = Function_389(&bVar2);
							}
						}
					}
				}
				bVar1++;
			}
		}
		else
		{
			Function_488(&iParam0);
		}
	}
	return;
}

void Function_492(var uParam0, var uParam1) //Position: 0x19F37 / 106295
{
	bool bVar0;
	
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (!DECOR_CHECK_EXIST(&uLocal_1235, &uParam0))
		{
			if (Function_396())
			{
				if (Function_498(&uParam1, &bLocal_1733))
				{
					Function_497();
				}
			}
			else if (Function_498(&uParam1, &bLocal_1731))
			{
				Function_496();
			}
			DECOR_SET_BOOL(&uLocal_1235, &uParam0, 1);
		}
		else if (Function_278(&bLocal_1394) < (30.0f / 2.0f))
		{
			bVar0 = FLOOR(RAND_FLOAT_RANGE(0.0f, 3.0f));
			if (bVar0 != 2 && Function_498(&uParam1, &bLocal_1733))
			{
				Function_495();
				Function_224(&bLocal_1394);
			}
			else if (bVar0 != 1 && Function_498(&uParam1, &bLocal_1731))
			{
				Function_494();
				Function_224(&bLocal_1394);
			}
			else if (Function_498(&uParam1, &Global_54076))
			{
				Function_493();
				Function_224(&bLocal_1394);
			}
		}
	}
	return;
}

void Function_493() //Position: 0x19FF7 / 106487
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Fort01_JonTaunts", "Fort01_JonTaunts", 2, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_494() //Position: 0x1A040 / 106560
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_SethTaunts", "Fort01_SethTaunts", 0, 1, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x1A08C / 106636
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_MarshalTaunts", "Fort01_MarshalTaunts", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_496() //Position: 0x1A0DD / 106717
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_SethSpots_enemies", "Fort01_SethSpots_enemies", 0, 1, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_497() //Position: 0x1A137 / 106807
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_MarshalSpots_enemies", "Fort01_MarshalSpots_enemies", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_498(var uParam0, bool bParam1) //Position: 0x1A196 / 106902
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
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1) && MEMORY_GET_IS_VISIBLE(&uVar1, &bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_499() //Position: 0x1A1F4 / 106996
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_movesIn", "Fort01_movesIn", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x1A239 / 107065
{
	if (SQUAD_IS_VALID(&iLocal_4 + 984))
	{
		SQUAD_GOALS_CLEAR(&iLocal_4 + 984);
		Function_303(&iLocal_4 + 984);
		SQUAD_SET_FACTION(&iLocal_4 + 984, 19);
		Function_504(&iLocal_4 + 984, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		DECOR_SET_BOOL(&iLocal_4 + 984, "blipped", 1);
		Function_503(&iLocal_4 + 984, &iLocal_4 + 2768, 1.0f, 75.0f, 7, 0, &iLocal_4 + 2776, 0);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 992))
	{
		SQUAD_GOALS_CLEAR(&iLocal_4 + 992);
		Function_303(&iLocal_4 + 992);
		SQUAD_SET_FACTION(&iLocal_4 + 992, 19);
		Function_503(&iLocal_4 + 992, &iLocal_4 + 2856, 1.0f, 75.0f, 7, 0, &iLocal_4 + 2864, 0);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1000))
	{
		SQUAD_GOALS_CLEAR(&iLocal_4 + 1000);
		Function_303(&iLocal_4 + 1000);
		SQUAD_SET_FACTION(&iLocal_4 + 1000, 19);
		Function_503(&iLocal_4 + 1000, &iLocal_4 + 2944, 1.0f, 75.0f, 7, 0, &iLocal_4 + 2952, 0);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1008))
	{
		SQUAD_GOALS_CLEAR(&iLocal_4 + 1008);
		Function_303(&iLocal_4 + 1008);
		SQUAD_SET_FACTION(&iLocal_4 + 1008, 19);
		Function_502(&iLocal_4 + 1008, 40, 0,5f);
		Function_502(&iLocal_4 + 1008, 41, 0,5f);
		Function_501(&iLocal_4 + 1008, 41, 1, 1);
		Function_503(&iLocal_4 + 1008, &iLocal_4 + 3000, 1.0f, 75.0f, 7, 0, &iLocal_4 + 3008, 0);
	}
	return;
}

void Function_501(var uParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x1A3B1 / 107441
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
					GIVE_WEAPON_TO_ACTOR(&uVar1, bParam1, 0f, 1, 1);
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

void Function_502(var uParam0, bool bParam1, bool bParam2) //Position: 0x1A42D / 107565
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

void Function_503(bool bParam0, var uParam1, bool bParam2, float fParam3, int iParam4, float fParam5, vector3[] vParam6, bool bParam7) //Position: 0x1A480 / 107648
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	struct<9> Var3;
	
	fParam5 = fParam5;
	if (SQUAD_IS_VALID(&bParam0))
	{
		SQUAD_GOALS_CLEAR(&bParam0);
		Function_303(&bParam0);
		if (IS_OBJECTSET_VALID(&uParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
					if (IS_OBJECT_VALID(&bVar2))
					{
						Function_332(&bVar2);
						vVar3 = Function_332(&bVar2);
						fVar5 = GET_OBJECT_HEADING(&bVar2);
						bLocal_1755 = TASK_SEQUENCE_OPEN();
						TASK_DRAW_HOLSTER_WEAPON(0, 1);
						if (IS_OBJECT_VALID(&bParam7))
						{
							uVar6 = Vector(0.0f, 0.0f, 0.0f);
							GET_PATH_POINT(&bParam7, 0, &uVar6);
							TASK_GO_TO_COORD(0, &uVar6, 4);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &bParam7, 4, 0, 0, 1, false);
						}
						TASK_GO_TO_COORD(0, &vVar3, 4);
						if (bLocal_1387 == 1)
						{
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
						}
						else
						{
							uVar8 = FIND_NEAREST_COVER_LOCATION(StackVal, &(vParam6[bVar03]), bParam2, fParam3, iParam4);
							if (!IS_COVER_LOCATION_VALID(&uVar8))
							{
								uVar9 = Vector(0.0f, 0.0f, 0.0f);
								UNK_0x44986367(&uVar9, fVar5);
								uVar8 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), vParam6[bVar03], (&vParam6[bVar03] + 12), 4));
							}
							TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar8, -1.0f, 1086324736);
							DECOR_SET_FLOAT(&uVar1, "x_vector", vVar3.x);
							DECOR_SET_FLOAT(&uVar1, "y_vector", vVar3.y);
							DECOR_SET_FLOAT(&uVar1, "z_vector", vVar3.z);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1755);
						TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
					}
					else
					{
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, -1.0f);
					}
					TASK_PRIORITY_SET(&uVar1, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar1, 0);
					SET_ACTOR_UPDATE_PRIORITY(&uVar1, false);
					DECOR_SET_INT(&uVar1, "AiCoverExpose", true);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, 2, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, 3, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, 16, true);
					SET_CRIPPLE_ENABLE(&uVar1, 0);
				}
				bVar0++;
			}
		}
	}
}

void Function_504(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1A660 / 108128
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

bool Function_505() //Position: 0x1A770 / 108400
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_164;
}

void Function_506(var uParam0, bool bParam1) //Position: 0x1A78B / 108427
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_507(var uParam0) //Position: 0x1A7D0 / 108496
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

var Function_508(var uParam0, int iParam1) //Position: 0x1A87D / 108669
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_509() //Position: 0x1A88F / 108687
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &uLocal_1235, 4294967295, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&bVar2))
		{
			Var3 = Vector(0.0f, 0.0f, 0.0f);
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&bVar2), "p_gen_crateWeaponsBreak01x"))
			{
				Function_239(&bVar2);
				if (VDIST(StackVal, Function_239(&bVar2), Vector(-2697,192f, 67,26273f, 3501,675f)) > 5.0f)
				{
					DESTROY_OBJECT(&bVar2);
				}
				else
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar2, Vector(1,35f, 0,5f, -0,6f), &Var3);
					Function_310(&bVar2);
					Var5 = Function_310(&bVar2);
					ROTATE_VECTOR_XZ(&Var5, 180.0f, 0);
					CREATE_OBSTACLE_ON_OBJECT(StackVal, &bVar2, Function_54(), Var3, Var5, Vector(2,7f, 1.0f, 1,2f));
				}
			}
			else
			{
				Function_239(&bVar2);
				Function_239(&iLocal_4 + 3376[0]);
				if (VDIST(Function_239(&bVar2), Function_239(&iLocal_4 + 3376[0])) > 5.0f)
				{
					DESTROY_OBJECT(&bVar2);
				}
				else
				{
					GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar2, Vector(0,8f, 0,5f, -0,6f), &Var3);
					Function_310(&bVar2);
					Var5 = Function_310(&bVar2);
					ROTATE_VECTOR_XZ(&Var5, 180.0f, 0);
					CREATE_OBSTACLE_ON_OBJECT(StackVal, &bVar2, Function_54(), Var3, Var5, Vector(1,6f, 1.0f, 1,2f));
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_510() //Position: 0x1A9E2 / 109026
{
	struct<2> Var0;
	struct<2> Var2;
	
	Global_6663 = 0;
	Function_315(&iLocal_4 + 3304[2]);
	START_VEHICLE(&bLocal_1735);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 1, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), false);
	Function_361(&bLocal_1392, &iLocal_4 + 1808[3], 0, 1, 1);
	SNAP_ACTOR_TO_GRINGO(&bLocal_1392, &iLocal_4 + 4584, "UseCAse1", true, 0, 0);
	TASK_USE_GRINGO(&bLocal_1392, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4584), "UseCAse1", 4294967295, 1);
	SQUAD_MAKE_EMPTY(&iLocal_4 + 808);
	SQUAD_JOIN(&bLocal_1733, &iLocal_4 + 808);
	SQUAD_JOIN(&iLocal_4 + 752[02], &iLocal_4 + 808);
	SQUAD_JOIN(&iLocal_4 + 752[12], &iLocal_4 + 808);
	SQUAD_JOIN(&iLocal_4 + 752[22], &iLocal_4 + 808);
	SQUAD_JOIN(&bLocal_1731, &iLocal_4 + 808);
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 808, 0, &iLocal_4 + 1416[4], 2, 1);
	GET_VOLUME_SCALE(&iLocal_4 + 1416[4], &Var0);
	GET_VOLUME_CENTER(&iLocal_4 + 1416[4], &Var2);
	Function_310(&iLocal_4 + 1416[4]);
	CREATE_OBSTACLE_IN_LAYOUT(&uLocal_1235, Function_54(), Var2, Function_310(&iLocal_4 + 1416[4]), Var0);
	if (!SQUAD_IS_VALID(&iLocal_4 + 984))
	{
		Function_518();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 984, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 984, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 984, 2048);
	if (!SQUAD_IS_VALID(&iLocal_4 + 992))
	{
		Function_517();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 992, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 992, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 992, 2048);
	if (!SQUAD_IS_VALID(&iLocal_4 + 1000))
	{
		Function_516();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 1000, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1000, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1000, 2048);
	if (!SQUAD_IS_VALID(&iLocal_4 + 1008))
	{
		Function_515();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 1008, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 1008, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1008, 2048);
	if (!SQUAD_IS_VALID(&iLocal_4 + 888))
	{
		Function_514();
	}
	Function_391(&iLocal_4 + 888, 0);
	Function_513(&iLocal_4 + 888, 3);
	Function_361(&iLocal_4 + 816[02], &iLocal_4 + 1808[8], 1, 1, 1);
	Function_361(&iLocal_4 + 816[12], &iLocal_4 + 1808[9], 1, 1, 1);
	Function_361(&iLocal_4 + 816[22], &iLocal_4 + 1808[10], 1, 1, 1);
	Function_361(&iLocal_4 + 816[32], &iLocal_4 + 1808[6], 1, 1, 1);
	Function_512(&iLocal_4 + 888, 1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 888, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(&iLocal_4 + 888);
	Function_511(&iLocal_4 + 888, &iLocal_4 + 2368);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 888, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_511(var uParam0, var uParam1) //Position: 0x1ACD1 / 109777
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	struct<5> Var5;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECTSET_VALID(&uParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
					if (IS_OBJECT_VALID(&bVar2))
					{
						Function_239(&bVar2);
						Var3 = Function_239(&bVar2);
						Function_310(&bVar2);
						Var5 = Function_310(&bVar2);
						if (!Function_74(StackVal, Var3))
						{
							if (!Function_74(StackVal, Var5))
							{
								TELEPORT_ACTOR_WITH_HEADING(StackVal, &uVar1, Var3, 1, 1, 1);
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

void Function_512(var uParam0, float fParam1) //Position: 0x1AD75 / 109941
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				AI_SET_NAV_ACTOR_WIDTH(&uVar1, fParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_513(var uParam0, bool bParam1) //Position: 0x1ADBA / 110010
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

void Function_514() //Position: 0x1AE02 / 110082
{
	*(&iLocal_4 + 888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Horse01"));
	*(&iLocal_4 + 816[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_01", 976, Vector(-2882,762f, 59,54217f, 3413,238f), Vector(0.0f, -56,94253f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 816[02], &iLocal_4 + 888);
	*(&iLocal_4 + 816[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_02", 977, Vector(-2884.0f, 59,87371f, 3409,441f), Vector(0.0f, -71,10464f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 816[12], &iLocal_4 + 888);
	*(&iLocal_4 + 816[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_03", 980, Vector(-2880.0f, 60,23529f, 3414,172f), Vector(0.0f, -53,03073f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 816[22], &iLocal_4 + 888);
	*(&iLocal_4 + 816[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_04", 981, Vector(-2885,114f, 59,23135f, 3412.0f), Vector(0.0f, -55,90071f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 816[32], &iLocal_4 + 888);
	return;
}

void Function_515() //Position: 0x1AF49 / 110409
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1008) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nGuards02d"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02D_01", 400, Vector(-2657,675f, 71,64566f, 3412,395f), Vector(0.0f, 133,2612f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1008);
	return;
}

void Function_516() //Position: 0x1AFB5 / 110517
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1000) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nGuards02c"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02C_03", 402, Vector(-2662,57f, 71,66015f, 3414,565f), Vector(0.0f, 137,8481f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1000);
	return;
}

void Function_517() //Position: 0x1B021 / 110625
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 992) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nGuards02b"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02B_01", 400, Vector(-2675,966f, 71,65486f, 3429,128f), Vector(0.0f, 139,9928f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 992);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02B_02", 401, Vector(-2692,043f, 71,68845f, 3430,981f), Vector(0.0f, 173,5133f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 992);
	return;
}

void Function_518() //Position: 0x1B0CC / 110796
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 984) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nGuards02a"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02A_01", 402, Vector(-2702,362f, 73,99786f, 3442,58f), Vector(0.0f, 157,0074f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 984);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02A_02", 397, Vector(-2696,372f, 75,79185f, 3445,864f), Vector(0.0f, 136,6832f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 984);
	return;
}

int Function_519() //Position: 0x1B177 / 110967
{
	Function_313(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

int Function_520() //Position: 0x1B18C / 110988
{
	Function_449(&iLocal_4 + 592, 402, 2, 0);
	Function_449(&iLocal_4 + 592, 397, 2, 0);
	Function_449(&iLocal_4 + 592, 400, 2, 0);
	Function_449(&iLocal_4 + 592, 401, 2, 0);
	if (Function_318(&iLocal_4 + 592))
	{
		return 1;
	}
	return 0;
}

void Function_521() //Position: 0x1B1D8 / 111064
{
	SET_HUD_MAP_DRAW_ENABLED(1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
	Function_361(&bLocal_1392, &iLocal_4 + 1808[2], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1392, true);
	SET_ACTOR_HEALTH(&bLocal_1392, GET_ACTOR_MAX_HEALTH(&bLocal_1392));
	Function_361(&bLocal_1731, &iLocal_4 + 1808[4], 1, 1, 1);
	bLocal_1755 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1731, bLocal_1755);
	TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
	TASK_PRIORITY_SET(&bLocal_1731, true);
	SET_ACTOR_HEALTH(&bLocal_1731, GET_ACTOR_MAX_HEALTH(&bLocal_1731));
	Function_361(&bLocal_1733, &iLocal_4 + 1808[6], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1733, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1733, true);
	SET_ACTOR_HEALTH(&bLocal_1733, GET_ACTOR_MAX_HEALTH(&bLocal_1733));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1733);
	GIVE_WEAPON_TO_ACTOR(&bLocal_1733, 4, false, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(&bLocal_1733, 0);
	SET_ACTOR_ALLOW_DISARM(&bLocal_1733, 0);
	if (!SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		Function_447();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 808, 20);
	Function_523(&iLocal_4 + 808);
	Function_445(&iLocal_4 + 808, &Global_54076, 0);
	uLocal_1797 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, false);
	uLocal_1799 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, true);
	SQUAD_JOIN(&bLocal_1733, &iLocal_4 + 808);
	Function_522(&iLocal_4 + 808, &iLocal_4 + 888);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 808, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_446(&iLocal_4 + 808, 0);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1733);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_4 + 752[02]);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_4 + 752[12]);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_4 + 752[22]);
	return;
}

void Function_522(bool bParam0, var uParam1) //Position: 0x1B373 / 111475
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&bParam0) && SQUAD_IS_VALID(&uParam1))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
		{
			iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&iVar1) && IS_ACTOR_VALID(&uVar2))
			{
				if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_MOUNTED(&iVar1))
				{
					ACTOR_MOUNT_ACTOR(&uVar2, &iVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_523(bool bParam0) //Position: 0x1B3EA / 111594
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_MAX_HEALTH(&uVar1, 300.0f);
				SET_ACTOR_HEALTH(&uVar1, 300.0f);
			}
			bVar0++;
		}
	}
	return;
}

int Function_524(bool bParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1B43D / 111677
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_454(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_455()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&bParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_525();
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
	else if ((!Function_454(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_455()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_454(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_525() //Position: 0x1B6A5 / 112293
{
	int iVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &Var5, &Var7);
			Function_526(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_526(char* cParam0) //Position: 0x1B6F9 / 112377
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

void Function_527() //Position: 0x1B822 / 112674
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	if (!DECOR_CHECK_EXIST(&uLocal_1235, "cutscene03finish"))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_1235, "cutscene03escape"))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1416[3]) && iLocal_1388 >= 8)
			{
				*(&iLocal_1375 + 24) = Function_530(&uLocal_1235, 0, 1, 0, 0);
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_1375 + 24, 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1375 + 24, 0);
				DECOR_SET_FLOAT(&uLocal_1235, "cutscene03escape", GET_CURRENT_GAME_TIME());
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				bLocal_1755 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(0, 1);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4768, 2, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1755);
				TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
				AI_IGNORE_ACTOR(&Global_54076);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
				bLocal_1755 = TASK_SEQUENCE_OPEN();
				SET_ACTOR_IN_VEHICLE(&bLocal_1392, &bLocal_1735, false);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4616, 2, 0, 0, 1, false);
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_VEHICLE_LEAVE(0);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4576), "UseCase1", 4294967295, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1392, bLocal_1755);
				TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
				TASK_PRIORITY_SET(&bLocal_1392, true);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1392, 0);
				ACTOR_START_FORCE_HOLSTER(&bLocal_1392, 0, 0);
				MEMORY_ALLOW_SHOOTING(&bLocal_1392, false);
				START_VEHICLE(&bLocal_1735);
				DECOR_SET_FLOAT(&uLocal_1235, "escape", GET_CURRENT_GAME_TIME());
				if (iLocal_1406[1] && GET_OBJECT_ANIMATOR_PHASE(&uLocal_1756) > 1.0f)
				{
					SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/close");
					SET_OBJECT_ANIMATOR_PHASE(&uLocal_1756, 1.0f);
					SET_OBJECT_ANIMATOR_RATE(&uLocal_1756, 10.0f);
				}
			}
		}
		else
		{
			Function_239(&iLocal_4 + 3736[9]);
			Function_529(StackVal, &Var0, &Var2, Function_239(&iLocal_4 + 3736[9]), GET_OBJECT_HEADING(&iLocal_4 + 3736[9]), 0);
			STREAMING_LOAD_SCENE_EXT(Var0, Var2, 1);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
				}
				Function_528();
			}
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_1375 + 24), 0))
			{
				DECOR_SET_BOOL(&uLocal_1235, "cutscene03finish", 1);
				TASK_CLEAR(&Global_54076);
				Function_361(&Global_54076, &iLocal_4 + 3736[9], 1, 1, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				AI_STOP_IGNORING_ACTOR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 2, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				bVar4 = false;
				while (bVar4 <= SQUAD_GET_SIZE(&iLocal_4 + 808))
				{
					iVar5 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, bVar4);
					uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, &iLocal_4 + 2448);
					if (IS_ACTOR_VALID(&iVar5))
					{
						Function_361(&iVar5, &uVar6, 0, 1, 1);
					}
					bVar4++;
				}
				Function_347(&iLocal_4 + 808, &iLocal_4 + 2448, 2.0f, 75.0f, 7, 0, 0);
				if (DECOR_CHECK_EXIST(&bLocal_1731, "ncoverused") && iLocal_1388 >= 8)
				{
					Function_348(&bLocal_1731, &iLocal_4 + 2456[4], 2.0f, 75.0f, 7, DECOR_GET_INT(&bLocal_1731, "ncoverused"), 0, 0, 0);
				}
			}
		}
	}
	return;
}

void Function_528() //Position: 0x1BB5C / 113500
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_WestDick_Departure", "Fort01_WestDick_Departure", 0, 3, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_529(var uParam0, var uParam1, struct<2> Param2, bool bParam4, int iParam5) //Position: 0x1BBB7 / 113591
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam5)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(Param2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam4);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(&bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(&uParam0, &uParam1, Param2, bParam4, &bVar0);
}

var Function_530(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1BCE9 / 113897
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Fort01_MerchantEscape", 2, 1);
	}
	Function_531(&uVar0);
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

void Function_531(int iParam0) //Position: 0x1BD78 / 114040
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_533(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_532(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_532(int iParam0) //Position: 0x1BDB3 / 114099
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 48,72546f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2677,648f, 68,19208f, 3516,797f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,069356f, 1,488886f, -1E-06f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_533(var uParam0) //Position: 0x1BE24 / 114212
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 48,72546f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2678,87f, 68,23093f, 3518,662f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,069356f, 1,12835f, -1E-06f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_534() //Position: 0x1BE95 / 114325
{
	if (iLocal_1388 <= 9)
	{
		if (SQUAD_IS_VALID(&iLocal_4 + 984))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 984) < 0)
			{
				if (!DECOR_CHECK_EXIST(&uLocal_1235, "cutscene03escape"))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
					bLocal_1755 = TASK_SEQUENCE_OPEN();
					SET_ACTOR_IN_VEHICLE(&bLocal_1392, &bLocal_1735, false);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 4616, 2, 0, 0, 1, false);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_VEHICLE_LEAVE(0);
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4576), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1392, bLocal_1755);
					TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
					TASK_PRIORITY_SET(&bLocal_1392, true);
					AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1392, 0);
					ACTOR_START_FORCE_HOLSTER(&bLocal_1392, 0, 0);
					MEMORY_ALLOW_SHOOTING(&bLocal_1392, false);
					START_VEHICLE(&bLocal_1735);
				}
				Function_504(&iLocal_4 + 992, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(&iLocal_4 + 992, "blipped", 1);
				Function_504(&iLocal_4 + 1000, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(&iLocal_4 + 1000, "blipped", 1);
				Function_347(&iLocal_4 + 808, &iLocal_4 + 2512, 1.0f, 75.0f, 7, 0, 0);
				Function_243();
				Function_535();
				Function_224(&bLocal_1394);
				iLocal_1388 = 9;
			}
		}
	}
	return;
}

void Function_535() //Position: 0x1BFEF / 114671
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_moveForward", "Fort01_moveForward", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x1C03D / 114749
{
	if (iLocal_1388 <= 10)
	{
		if (SQUAD_IS_VALID(&iLocal_4 + 992))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 992) < 0)
			{
				Function_347(&iLocal_4 + 808, &iLocal_4 + 2576, 1.0f, 75.0f, 7, 0, 0);
				Function_243();
				Function_537();
				Function_224(&bLocal_1394);
				iLocal_1388 = 10;
			}
		}
	}
	return;
}

void Function_537() //Position: 0x1C08C / 114828
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_coverMarshal", "Fort01_coverMarshal", 0, 1, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1C0DB / 114907
{
	if (iLocal_1388 <= 11)
	{
		if (SQUAD_IS_VALID(&iLocal_4 + 1000))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1000) < 0)
			{
				Function_504(&iLocal_4 + 1008, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(&iLocal_4 + 1008, "blipped", 1);
				Function_504(&iLocal_4 + 1016, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(&iLocal_4 + 1016, "blipped", 1);
				Function_539();
				Function_224(&bLocal_1394);
				iLocal_1388 = 11;
			}
		}
	}
	return;
}

void Function_539() //Position: 0x1C172 / 115058
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_coverSeth", "Fort01_coverSeth", 0, 1, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_540() //Position: 0x1C1BC / 115132
{
	if (iLocal_1388 <= 12)
	{
		if (SQUAD_IS_VALID(&iLocal_4 + 1008))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1008) < 0)
			{
				Function_347(&iLocal_4 + 808, &iLocal_4 + 2704, 1.0f, 75.0f, 7, 0, 0);
				if (!SQUAD_IS_VALID(&iLocal_4 + 1016))
				{
					Function_541();
					SQUAD_SET_FACTION(&iLocal_4 + 1016, 19);
					Function_504(&iLocal_4 + 1016, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUAD_GOALS_CLEAR(&iLocal_4 + 1016);
					Function_303(&iLocal_4 + 1016);
					Function_503(&iLocal_4 + 1016, &iLocal_4 + 3056, 2.0f, 75.0f, 7, 1, &iLocal_4 + 3064, 0);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1016, 2048);
				}
				if (Function_396())
				{
					Function_497();
				}
				else
				{
					Function_496();
				}
				Function_448();
				Function_224(&bLocal_1394);
				iLocal_1388 = 12;
			}
		}
	}
	return;
}

void Function_541() //Position: 0x1C289 / 115337
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	(&iLocal_4 + 1016) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nGuards02e"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02E_01", 401, Vector(-2657,275f, 67,45486f, 3451,831f), Vector(0.0f, 80,07938f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1016);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02E_02", 400, Vector(-2655,962f, 67,45486f, 3452,851f), Vector(0.0f, 72,90717f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 1016);
	return;
}

void Function_542() //Position: 0x1C334 / 115508
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1416[0]) || (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 984) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 992) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1000) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1008) >= 0))
	{
		if (!SQUAD_IS_VALID(&iLocal_4 + 1016))
		{
			Function_541();
			SQUAD_SET_FACTION(&iLocal_4 + 1016, 19);
			Function_504(&iLocal_4 + 1016, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 1016);
			Function_303(&iLocal_4 + 1016);
			Function_503(&iLocal_4 + 1016, &iLocal_4 + 3056, 2.0f, 75.0f, 7, 1, &iLocal_4 + 3064, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1016, 2048);
		}
		if (!SQUAD_IS_VALID(&iLocal_4 + 1024))
		{
			Function_543();
			SQUAD_SET_FACTION(&iLocal_4 + 1024, 19);
			Function_504(&iLocal_4 + 1024, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
			Function_303(&iLocal_4 + 1024);
			Function_503(&iLocal_4 + 1024, &iLocal_4 + 3144, 2.0f, 75.0f, 7, 1, &iLocal_4 + 3152, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1024, 2048);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1416[1]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1416[2]))
		{
			Function_543();
			SQUAD_SET_FACTION(&iLocal_4 + 1024, 19);
			Function_504(&iLocal_4 + 1024, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
			Function_303(&iLocal_4 + 1024);
			Function_503(&iLocal_4 + 1024, &iLocal_4 + 3144, 2.0f, 75.0f, 7, 1, &iLocal_4 + 3152, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1024, 2048);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 1024) && SQUAD_IS_VALID(&iLocal_4 + 1016))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1016) < 0)
		{
			Function_543();
			SQUAD_SET_FACTION(&iLocal_4 + 1024, 19);
			Function_504(&iLocal_4 + 1024, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(&iLocal_4 + 1024);
			Function_303(&iLocal_4 + 1024);
			Function_503(&iLocal_4 + 1024, &iLocal_4 + 3144, 2.0f, 75.0f, 7, 1, &iLocal_4 + 3152, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 1024, 2048);
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 1016) && SQUAD_IS_VALID(&iLocal_4 + 1024))
	{
		if (((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 984) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 992) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1000) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1008) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1016) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
		{
			Function_488(&iLocal_4 + 808);
			Function_224(&bLocal_1394);
			iLocal_1388 = 13;
		}
		else
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 984) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 992) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1000) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1008) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1016) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 1024) >= 0)
			{
			}
		}
	}
	return;
}

void Function_543() //Position: 0x1C641 / 116289
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nGuards02f"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02F_01", 400, Vector(-2653,941f, 71,72182f, 3454,655f), Vector(0.0f, 49,65565f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1024);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_02F_02", 402, Vector(-2653,213f, 71,65486f, 3447,668f), Vector(0.0f, -17,86923f, 0.0f));
	SQUAD_JOIN(&iVar0, &iLocal_4 + 1024);
	return;
}

int Function_544(var uParam0) //Position: 0x1C6EC / 116460
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_SHOOTING(&iVar1))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void Function_545(int iParam0) //Position: 0x1C731 / 116529
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "blipped"))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (MEMORY_GET_IS_VISIBLE(&uVar1, &Global_54076) || GET_LAST_ATTACKER(&uVar1) != &Global_54076)
					{
						DECOR_SET_BOOL(&iParam0, "blipped", 1);
					}
				}
				bVar0++;
			}
			if (DECOR_CHECK_EXIST(&iParam0, "blipped"))
			{
				Function_504(&iParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	return;
}

void Function_546(bool bParam0) //Position: 0x1C7D6 / 116694
{
	if (!Function_280(&bLocal_1780))
	{
		Function_378(&bLocal_1780);
	}
	else if (Function_278(&bLocal_1780) < 1.0f)
	{
		if (IS_ACTOR_VALID(&bLocal_1392) && IS_ACTOR_VALID(&bLocal_1731))
		{
			if (bParam0)
			{
				if (!DECOR_CHECK_EXIST(&uLocal_1235, "Fort01_farBehind_Marshal"))
				{
					Function_292(&Global_54076);
					Function_239(&iLocal_4 + 1808[1]);
					Function_292(&bLocal_1733);
					Function_239(&iLocal_4 + 1808[1]);
					if (VDIST(Function_292(&Global_54076), Function_239(&iLocal_4 + 1808[1])) > VDIST(Function_292(&bLocal_1733), Function_239(&iLocal_4 + 1808[1])))
					{
						Function_292(&Global_54076);
						Function_292(&bLocal_1733);
						Function_292(&Global_54076);
						Function_292(&bLocal_1731);
						if (VDIST(Function_292(&Global_54076), Function_292(&bLocal_1733)) > VDIST(Function_292(&Global_54076), Function_292(&bLocal_1731)) || !DECOR_CHECK_EXIST(&uLocal_1235, "cutscene03finish"))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1392, "Fort01_farBehind_Marshal", "Fort01_farBehind_Marshal", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(&uLocal_1235, "Fort01_farBehind_Marshal", GET_CURRENT_GAME_TIME());
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1731, "Fort01_farBehind_Seth", "Fort01_farBehind_Seth", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(&uLocal_1235, "Fort01_farBehind_Seth", GET_CURRENT_GAME_TIME());
						}
					}
					else
					{
						Function_292(&Global_54076);
						Function_292(&bLocal_1733);
						Function_292(&Global_54076);
						Function_292(&bLocal_1731);
						if (VDIST(Function_292(&Global_54076), Function_292(&bLocal_1733)) > VDIST(Function_292(&Global_54076), Function_292(&bLocal_1731)) || !DECOR_CHECK_EXIST(&uLocal_1235, "cutscene03finish"))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1392, "Fort01_farAhead_Marshal", "Fort01_farAhead_Marshal", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(&uLocal_1235, "Fort01_farAhead_Marshal", GET_CURRENT_GAME_TIME());
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1731, "Fort01_farAhead_Seth", "Fort01_farAhead_Seth", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(&uLocal_1235, "Fort01_farAhead_Seth", GET_CURRENT_GAME_TIME());
						}
					}
				}
			}
			else
			{
				if (DECOR_CHECK_EXIST(&uLocal_1235, "Fort01_farBehind_Marshal"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "Fort01_farBehind_Marshal")) < 15.0f)
					{
						DECOR_REMOVE(&uLocal_1235, "Fort01_farBehind_Marshal");
					}
				}
				if (DECOR_CHECK_EXIST(&uLocal_1235, "Fort01_farBehind_Seth"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "Fort01_farBehind_Seth")) < 15.0f)
					{
						DECOR_REMOVE(&uLocal_1235, "Fort01_farBehind_Seth");
					}
				}
				if (DECOR_CHECK_EXIST(&uLocal_1235, "Fort01_farAhead_Marshal"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "Fort01_farAhead_Marshal")) < 15.0f)
					{
						DECOR_REMOVE(&uLocal_1235, "Fort01_farAhead_Marshal");
					}
				}
				if (DECOR_CHECK_EXIST(&uLocal_1235, "Fort01_farAhead_Seth"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, "Fort01_farAhead_Seth")) < 15.0f)
					{
						DECOR_REMOVE(&uLocal_1235, "Fort01_farAhead_Seth");
					}
				}
			}
		}
		Function_224(&bLocal_1780);
	}
	return;
}

void Function_547() //Position: 0x1CC69 / 117865
{
	if (iLocal_1388 < 4 && iLocal_1388 > 105)
	{
		if (iLocal_1388 > 8)
		{
			Function_239(&iLocal_4 + 1808[0]);
			Function_453(StackVal, "$/cutscene/FORT01_CS05_SEQ/FORT01_CS05_SEQ", &uLocal_1424, Function_239(&iLocal_4 + 1808[0]), 91926, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		}
		Function_450();
	}
	switch (iLocal_1388)
	{
		case 0x00000000:
			if (Global_99145)
			{
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				Function_223(&iLocal_4 + 896);
				if (IS_ACTOR_VALID(&bLocal_1735))
				{
					DESTROY_ACTOR(&bLocal_1735);
					DESTROY_OBJECT(&uLocal_1756);
					Function_218();
				}
				Function_181();
			}
			Function_368(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1392, GET_ACTOR_MAX_HEALTH(&bLocal_1392));
			SET_ACTOR_HEALTH(&bLocal_1733, GET_ACTOR_MAX_HEALTH(&bLocal_1733));
			SET_ACTOR_HEALTH(&bLocal_1731, GET_ACTOR_MAX_HEALTH(&bLocal_1731));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_1406[0] != 0 || Global_99145)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365();
				Function_239(&iLocal_4 + 1704[0]);
				iLocal_1389 = Function_364(StackVal, Function_239(&iLocal_4 + 1704[0]), 0, 1, 1);
				if (!Function_363(iLocal_1389))
				{
					Function_362(&Local_1237);
				}
				Function_361(&Global_54076, &iLocal_4 + 1704[0], 1, 1, 1);
			}
			Function_224(&bLocal_1394);
			iLocal_1388 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_363(Global_46838[1])) && Function_564())
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&bLocal_1735))
			{
				Function_315(&iLocal_4 + 3304[2]);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				STOP_VEHICLE(&bLocal_1735);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), true);
			}
			DISABLE_CHILD_SECTOR("fom_rightWingProps01x");
			DISABLE_CHILD_SECTOR("fom_rightWing01x");
			DISABLE_CHILD_SECTOR("fom_guardTower01x");
			DISABLE_CHILD_SECTOR("fom_courtyardProps01x");
			DISABLE_CHILD_SECTOR("fom_gallowsProps01x");
			DISABLE_CHILD_SECTOR("fom_gallows01x");
			DISABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			Function_563();
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 968, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_224(&bLocal_1394);
			if (Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1237, bLocal_1387))
			{
				iLocal_1388 = 3;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1388 = 4;
			}
			Function_238(bLocal_1387);
			Function_432(StackVal, Function_238(bLocal_1387), bLocal_1387, Global_46736[3], Function_241(bLocal_1387), 3);
			break;
		
		case 0x00000003:
			if (Function_271("$/cutscene/FORT_01_CS03_seq/FORT_01_CS03_seq", &iLocal_1375, &Local_1237, &bLocal_1387, 71488, 71113, 70165, 63064, 59951, 56641, 1, 1, 1, 2, 2, 0, 1))
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 4;
			}
			break;
		
		case 0x00000004:
			Function_562();
			if (IS_ACTOR_VALID(&bLocal_1392))
			{
				Function_361(&bLocal_1392, &iLocal_4 + 1704[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1731))
			{
				Function_361(&bLocal_1731, &iLocal_4 + 1704[5], 1, 1, 1);
			}
			if (!iLocal_1406[0])
			{
				if (!SQUAD_IS_VALID(&iLocal_4 + 808))
				{
					Function_447();
				}
				Function_561(&bLocal_1733, &iLocal_4 + 1704[6], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1733, -1.0f, 0, 0);
				Function_561(&iLocal_4 + 752[02], &iLocal_4 + 1704[7], 1, 1, 1);
				Function_561(&iLocal_4 + 752[12], &iLocal_4 + 1704[8], 1, 1, 1);
				Function_561(&iLocal_4 + 752[22], &iLocal_4 + 1704[9], 1, 1, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), true);
				SNAP_ACTOR_TO_GRINGO(&Global_54076, &iLocal_1739, "GatlingShoot", true, 0, 0);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				DECOR_SET_BOOL(&Global_54076, "GringoNoQuit", 1);
				SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/open");
				SET_OBJECT_ANIMATOR_RATE(&uLocal_1756, 10.0f);
				if (!SQUAD_IS_VALID(&iLocal_4 + 904))
				{
					Function_312();
				}
				Function_307(&iLocal_4 + 904, &iLocal_4 + 3872);
				Function_294(&iLocal_4 + 904, 0);
				SQUAD_GOALS_CLEAR(&iLocal_4 + 968);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 968, false, 1, 4294967295);
				TASK_CROUCH(0, -1.0f);
				Function_294(&iLocal_4 + 968, 0);
			}
			if (IS_ACTOR_VALID(&uLocal_1737))
			{
				DESTROY_ACTOR(&uLocal_1737);
			}
			Function_426();
			bLocal_1730 = Function_505();
			Function_419(&(Local_1487[015]), &bLocal_1392, "Merchant", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[215]), &bLocal_1731, "GraveRobber", 0, 0x5f5e100, 1);
			Function_419(&(Local_1487[615]), &bLocal_1735, "Wagon", 0, 0x5f5e100, 1);
			MEMORY_CONSIDER_AS(&bLocal_1392, &Global_54076, false);
			MEMORY_CONSIDER_AS(&bLocal_1731, &Global_54076, false);
			AUDIO_MUSIC_SET_MOOD("MACHINE_GUN", 0, 4294967295, 4294967295);
			ACTOR_END_FORCE_HOLSTER(&bLocal_1392);
			ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
			Function_509();
			Function_224(&bLocal_1394);
			iLocal_1388 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "attached"))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_224(&bLocal_1394);
				iLocal_1388 = 6;
			}
			else
			{
				Function_224(&bLocal_1394);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				Function_560();
				Function_559();
				Function_224(&bLocal_1394);
				iLocal_1388 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_278(&bLocal_1394) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_415("Fort01_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_294(&iLocal_4 + 904, 1);
				Function_558(&iLocal_4 + 904, 1);
				Function_378(&bLocal_1764);
				if (!Function_280(&bLocal_1768))
				{
					Function_378(&bLocal_1768);
				}
				Function_520();
				Function_224(&bLocal_1394);
				Function_224(&bLocal_1398);
				Function_224(&bLocal_1402);
				iLocal_1388 = 8;
			}
			break;
		
		case 0x00000008:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_278(&bLocal_1764) < 10.0f) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) < 0)
			{
				if (Function_396())
				{
					if (IS_ACTOR_SHOOTING(&Global_54076) || UNK_0x062C5047("@GENERIC.FIRE", 1, 0))
					{
						Function_557();
					}
					else
					{
						Function_556();
					}
				}
				else if (IS_ACTOR_SHOOTING(&Global_54076) || UNK_0x062C5047("@GENERIC.FIRE", 1, 0))
				{
					Function_555();
				}
				else
				{
					Function_554();
				}
				Function_224(&bLocal_1764);
			}
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !Function_140()) && !DECOR_CHECK_EXIST(&uLocal_1235, "medshelp"))
			{
				Function_139("fort01_help_meds", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(&uLocal_1235, "medshelp", 1);
			}
			if (Function_278(&bLocal_1768) < 0,5f)
			{
				Function_467(&iLocal_4 + 904);
				Function_552(&iLocal_4 + 904, &iLocal_4 + 3872);
				Function_551(&iLocal_4 + 904);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) > 6 && !DECOR_CHECK_EXIST(&uLocal_1235, "sentramparts"))
			{
				Function_239(&iLocal_4 + 3832[3]);
				Function_310(&iLocal_4 + 3832[3]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[3]), Function_310(&iLocal_4 + 3832[3]), &iLocal_4 + 4760, 0.0f);
				Function_239(&iLocal_4 + 3832[3]);
				Function_310(&iLocal_4 + 3832[3]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[3]), Function_310(&iLocal_4 + 3832[3]), &iLocal_4 + 4760, 1.0f);
				Function_239(&iLocal_4 + 3832[3]);
				Function_310(&iLocal_4 + 3832[3]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[3]), Function_310(&iLocal_4 + 3832[3]), &iLocal_4 + 4760, 2.0f);
				DECOR_SET_BOOL(&uLocal_1235, "sentramparts", 1);
			}
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "finish02mid"))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) >= 0 || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) >= 2 && Function_278(&bLocal_1394) < 30.0f))
				{
					DECOR_SET_BOOL(&uLocal_1235, "finish02mid", 1);
					Function_224(&bLocal_1394);
				}
			}
			else if (Function_278(&bLocal_1394) < 1.0f)
			{
				Function_557();
				Function_224(&bLocal_1394);
				iLocal_1388 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_278(&bLocal_1394) <= 5.0f)
			{
				Function_557();
				iLocal_1805 = 0;
				Function_239(&iLocal_4 + 3832[0]);
				Function_310(&iLocal_4 + 3832[0]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[0]), Function_310(&iLocal_4 + 3832[0]), &iLocal_4 + 4648, 0);
				Function_239(&iLocal_4 + 3832[1]);
				Function_310(&iLocal_4 + 3832[1]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[1]), Function_310(&iLocal_4 + 3832[1]), &iLocal_4 + 4656, 0);
				Function_239(&iLocal_4 + 3832[2]);
				Function_310(&iLocal_4 + 3832[2]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[2]), Function_310(&iLocal_4 + 3832[2]), &iLocal_4 + 4664, 0);
				Function_239(&iLocal_4 + 3832[1]);
				Function_310(&iLocal_4 + 3832[1]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[1]), Function_310(&iLocal_4 + 3832[1]), &iLocal_4 + 4656, 2.0f);
				Function_239(&iLocal_4 + 3832[2]);
				Function_310(&iLocal_4 + 3832[2]);
				Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[2]), Function_310(&iLocal_4 + 3832[2]), &iLocal_4 + 4664, 2.0f);
				Function_224(&bLocal_1394);
				Function_224(&bLocal_1398);
				Function_224(&bLocal_1402);
				iLocal_1388 = 10;
			}
			break;
		
		case 0x0000000A:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_278(&bLocal_1764) < 30.0f) && (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) < 0))
			{
				if (Function_396())
				{
					if (IS_ACTOR_SHOOTING(&Global_54076) || UNK_0x062C5047("@GENERIC.FIRE", 1, 0))
					{
						Function_557();
					}
					else
					{
						Function_556();
					}
				}
				else if (IS_ACTOR_SHOOTING(&Global_54076) || UNK_0x062C5047("@GENERIC.FIRE", 1, 0))
				{
				}
				else
				{
					Function_554();
				}
				Function_224(&bLocal_1764);
			}
			if (Function_278(&bLocal_1768) < 0,5f)
			{
				Function_467(&iLocal_4 + 904);
				Function_552(&iLocal_4 + 904, &iLocal_4 + 3872);
			}
			if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) > 3 || Function_278(&bLocal_1394) < 30.0f) && iLocal_1805 > 12)
			{
				Function_239(&iLocal_4 + 3832[0]);
				Function_310(&iLocal_4 + 3832[0]);
				Function_239(&iLocal_4 + 3832[1]);
				Function_310(&iLocal_4 + 3832[1]);
				Function_239(&iLocal_4 + 3832[2]);
				Function_310(&iLocal_4 + 3832[2]);
				if (StackVal || Function_549(StackVal, (StackVal || Function_549(StackVal, Function_549(StackVal, StackVal, &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[0]), Function_310(&iLocal_4 + 3832[0]), &iLocal_4 + 4648, 0), &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[1]), Function_310(&iLocal_4 + 3832[1]), &iLocal_4 + 4656, 0)), &iLocal_4 + 3872, Function_239(&iLocal_4 + 3832[2]), Function_310(&iLocal_4 + 3832[2]), &iLocal_4 + 4664, 0))
				{
					Function_224(&bLocal_1394);
				}
			}
			if (!DECOR_CHECK_EXIST(&uLocal_1235, "finish02"))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 904) >= 0 && iLocal_1805 <= 12)
				{
					DECOR_SET_BOOL(&uLocal_1235, "finish02", 1);
					Function_224(&bLocal_1394);
				}
			}
			else if (Function_278(&bLocal_1394) < 2.0f)
			{
				Function_243();
				Function_224(&bLocal_1394);
				iLocal_1388 = 106;
			}
			break;
		
		case 0x00000069:
			if (Function_278(&bLocal_1394) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 106;
			}
			break;
		
		case 0x0000006A:
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, &bLocal_1735), true);
			SET_ACTOR_STOP_UPDATE(GET_DRAFT_ACTOR(false, &bLocal_1735), 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(GET_DRAFT_ACTOR(false, &bLocal_1735)), 0);
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, &bLocal_1735), true);
			SET_ACTOR_STOP_UPDATE(GET_DRAFT_ACTOR(true, &bLocal_1735), 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(GET_DRAFT_ACTOR(true, &bLocal_1735)), 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&bLocal_1735), 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 752[02]))
			{
				SET_ACTOR_STOP_UPDATE(&iLocal_4 + 752[02], 0);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 752[12]))
			{
				SET_ACTOR_STOP_UPDATE(&iLocal_4 + 752[12], 0);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 752[22]))
			{
				SET_ACTOR_STOP_UPDATE(&iLocal_4 + 752[22], 0);
			}
			SET_ACTOR_STOP_UPDATE(&bLocal_1733, 0);
			Function_548();
			iLocal_1406[1] = 1;
			Function_224(&bLocal_1394);
			bLocal_1387 = 2;
			iLocal_1388 = 2;
			break;
	}
	return;
}

void Function_548() //Position: 0x1D8EA / 121066
{
	Function_177(&iLocal_4 + 360);
	return;
}

int Function_549(bool bParam0, struct<2> Param1, struct<2> Param3, var uParam5, float fParam6) //Position: 0x1D8F8 / 121080
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	bVar1 = Function_311(StackVal, &bParam0, Param1, &bVar0);
	if (IS_OBJECT_VALID(&bVar1))
	{
		Function_239(&bVar1);
		Var2 = Function_239(&bVar1);
		bVar4 = GET_OBJECT_HEADING(&bVar1);
		uVar5 = FIND_NEAREST_COVER_LOCATION(&Var2, 2.0f, bVar4, 90.0f, 7);
		if (!IS_COVER_LOCATION_VALID(&uVar5))
		{
			Function_310(&bVar1);
			uVar5 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), Var2, Function_310(&bVar1), 4));
		}
		uVar6 = Function_550(StackVal, StackVal, &iLocal_4 + 904, &uVar5, Param1, Param3, 1, &uParam5, &fParam6);
		DECOR_SET_INT(&uVar6, "nindexused", bVar0);
		DECOR_SET_BOOL(&bVar1, "bUsed", 1);
		iLocal_1805++;
		return 1;
	}
	return 0;
}

var Function_550(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4, int iParam6, bool bParam7, var uParam8) //Position: 0x1D9AE / 121262
{
	var uVar0;
	bool bVar1;
	
	if (IS_COVER_LOCATION_VALID(&uParam1))
	{
		if (!IS_POPSET_VALID(&uLocal_1760))
		{
			uLocal_1760 = CREATE_POPULATION_SET_IN_LAYOUT(&uLocal_1235, "pEnemyPopset01", 1);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 397, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 398, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 399, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 400, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 401, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 402, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 403, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 404, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 405, 1.0f);
		}
		bVar1 = Function_330(StackVal, &uLocal_1760, Param2, 0, 0, 0);
		if (Function_399(bVar1))
		{
			uVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1235, Function_54(), bVar1, Param2, Param4);
			if (IS_ACTOR_VALID(&uVar0))
			{
				Function_308(&uVar0, &uParam0, &uParam1, iParam6, &bParam7, &uParam8);
			}
		}
	}
	return &uVar0;
}

void Function_551(int iParam0) //Position: 0x1DA99 / 121497
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (bLocal_1387 == 1)
	{
		iLocal_1806 = 0;
	}
	if (SQUAD_IS_VALID(&iParam0))
	{
		iVar1 = 0;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar3 = COMBAT_CLASS_AI_GET_ATTRIB_BOOL(&uVar2, 13);
				if (!bVar3)
				{
					iLocal_1806++;
				}
				if (GET_ACTOR_HEALTH(&Global_54076) < (GET_ACTOR_MAX_HEALTH(&Global_54076) / 2.0f))
				{
					if (iLocal_1806 <= 4 && !bVar3)
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar2, 13, true);
					}
				}
				else if (iLocal_1806 <= 2 && !bVar3)
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar2, 13, true);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_552(bool bParam0, int iParam1) //Position: 0x1DB3A / 121658
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	struct<2> Var7;
	bool bVar9;
	var uVar10;
	
	if (SQUAD_IS_VALID(&bParam0) && IS_OBJECTSET_VALID(&iParam1))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&iParam1))
		{
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "bUsed"))
				{
					bVar3 = false;
					bVar2 = false;
					while (bVar2 <= SQUAD_GET_SIZE(&bParam0))
					{
						bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar2);
						if (IS_ACTOR_ALIVE(&bVar4))
						{
							if (DECOR_CHECK_EXIST(&bVar4, "nindexused"))
							{
								if (DECOR_GET_INT(&bVar4, "nindexused") == bVar0)
								{
									bVar3 = true;
									if (Function_486(&bVar4, &uVar1, 1.0f) && IS_ACTOR_USING_COVER(&bVar4))
									{
										if (!DECOR_CHECK_EXIST(&bVar4, "timeincover"))
										{
											DECOR_SET_FLOAT(&bVar4, "timeincover", GET_CURRENT_GAME_TIME());
										}
										else if (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bVar4, "timeincover")) < (RAND_FLOAT_RANGE(5000.0f, 10000.0f) / 1000.0f)
										{
											DECOR_REMOVE(&uVar1, "bUsed");
											bVar3 = false;
											if (!DECOR_CHECK_EXIST(&bVar4, "iNumMovedUp"))
											{
												DECOR_SET_INT(&bVar4, "iNumMovedUp", true);
											}
											else
											{
												DECOR_SET_INT(&bVar4, "iNumMovedUp", DECOR_GET_INT(&bVar4, "iNumMovedUp") + 1);
											}
											if (DECOR_GET_INT(&bVar4, "iNumMovedUp") <= 3)
											{
												bVar5 = 4294967295;
												Function_292(&bVar4);
												bVar6 = Function_553(StackVal, &iParam1, Function_292(&bVar4), &bVar5, &uVar1);
												Function_239(&bVar6);
												Var7 = Function_239(&bVar6);
												bVar9 = GET_OBJECT_HEADING(&bVar6);
												uVar10 = FIND_NEAREST_COVER_LOCATION(&Var7, 2.0f, bVar9, 90.0f, 7);
												if (!IS_COVER_LOCATION_VALID(&uVar10))
												{
													Function_310(&bVar6);
													uVar10 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), Var7, Function_310(&bVar6), 4));
												}
												bLocal_1755 = TASK_SEQUENCE_OPEN();
												TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar10, -1.0f, 1.0f);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(&bVar4, bLocal_1755);
												TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
												DECOR_SET_INT(&bVar4, "nindexused", bVar5);
												DECOR_SET_BOOL(&bVar6, "bUsed", 1);
											}
											else
											{
												TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&bVar4, -1.0f);
											}
											DECOR_REMOVE(&bVar4, "timeincover");
										}
									}
								}
							}
						}
						bVar2++;
					}
					if (!bVar3)
					{
						DECOR_REMOVE(&uVar1, "bUsed");
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

int Function_553(var uParam0, struct<2> Param1, bool bParam3, bool bParam4) //Position: 0x1DDC1 / 122305
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
			if (IS_OBJECT_VALID(&bVar2))
			{
				if (&bVar2 != &bParam4)
				{
					if (!DECOR_CHECK_EXIST(&bVar2, "bUsed"))
					{
						Function_239(&bVar2);
						uVar3 = Function_239(&bVar2);
						if (!IS_OBJECT_VALID(&bVar1))
						{
							bVar1 = &bVar2;
							bParam3 = bVar0;
						}
						else
						{
							Function_239(&bVar1);
							Function_239(&bVar2);
							Function_292(&Global_54076);
							Function_239(&bVar2);
							Function_389(&Global_54076);
							if (VDIST(Function_239(&bVar1), Param1) < VDIST(Function_239(&bVar2), Param1) && VDIST(Param1, Function_292(&Global_54076)) < VDIST(Function_239(&bVar2), Function_389(&Global_54076)))
							{
								bVar1 = &bVar2;
								bParam3 = bVar0;
							}
						}
					}
				}
			}
			bVar0++;
		}
		return &bVar1;
	}
	return "";
}

void Function_554() //Position: 0x1DE8C / 122508
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_jonNoFire_Seth", "Fort01_jonNoFire_Seth", 0, 1, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_555() //Position: 0x1DEE0 / 122592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_criesSeth", "Fort01_criesSeth", 0, 2, 1, 0, 1);
		Function_375(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x1DF2A / 122666
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_jonNoFire", "Fort01_jonNoFire", 0, 1, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x1DF73 / 122739
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_criesWestDick", "Fort01_criesWestDick", 0, 1, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558(var uParam0, bool bParam1) //Position: 0x1DFC4 / 122820
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

void Function_559() //Position: 0x1E014 / 122900
{
	var uVar0;
	struct<2> Var1;
	
	if (IS_ACTOR_VALID(&bLocal_1392))
	{
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		Function_239(&iLocal_4 + 2424[0]);
		Var1 = Function_239(&iLocal_4 + 2424[0]);
		uVar0 = FIND_NEAREST_COVER_LOCATION(&Var1, 2.0f, GET_OBJECT_HEADING(&iLocal_4 + 2424[0]), 90.0f, 7);
		if (!IS_COVER_LOCATION_VALID(&uVar0))
		{
			Function_310(&iLocal_4 + 2424[0]);
			uVar0 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), Var1, Function_310(&iLocal_4 + 2424[0]), 4));
		}
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar0, -1.0f, 1.0f);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1392, bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&bLocal_1392, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1392, 13, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1392, 1, true);
	}
	if (IS_ACTOR_VALID(&bLocal_1731))
	{
		bLocal_1755 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		Function_239(&iLocal_4 + 2424[1]);
		Var1 = Function_239(&iLocal_4 + 2424[1]);
		uVar0 = FIND_NEAREST_COVER_LOCATION(&Var1, 2.0f, GET_OBJECT_HEADING(&iLocal_4 + 2424[1]), 90.0f, 7);
		if (!IS_COVER_LOCATION_VALID(&uVar0))
		{
			Function_310(&iLocal_4 + 2424[1]);
			uVar0 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(&uLocal_1235, Function_54(), Var1, Function_310(&iLocal_4 + 2424[1]), 4));
		}
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar0, -1.0f, 1.0f);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1731, bLocal_1755);
		TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
		TASK_PRIORITY_SET(&bLocal_1731, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1731, 13, true);
	}
	return;
}

void Function_560() //Position: 0x1E163 / 123235
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_signal", "Fort01_signal", 0, 1, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1E1A6 / 123302
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				Function_297(StackVal, StackVal, &uParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_562() //Position: 0x1E2C6 / 123590
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iLocal_4 + 752[02]))
	{
		SET_ACTOR_STOP_UPDATE(&iLocal_4 + 752[02], 1);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 752[12]))
	{
		SET_ACTOR_STOP_UPDATE(&iLocal_4 + 752[12], 1);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 752[22]))
	{
		SET_ACTOR_STOP_UPDATE(&iLocal_4 + 752[22], 1);
	}
	SET_HUD_MAP_DRAW_ENABLED(1);
	CAMERA_RESET(0);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
	TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1392, true);
	Function_361(&bLocal_1733, &iLocal_4 + 1704[6], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1733, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1733, true);
	SET_ACTOR_STOP_UPDATE(&bLocal_1733, 1);
	SQUAD_LEAVE(&bLocal_1733);
	TASK_STAND_STILL(&bLocal_1731, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1731, true);
	if (!IS_OBJECT_VALID(&bLocal_1735))
	{
		Function_315(&iLocal_4 + 3304[2]);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		STOP_VEHICLE(&bLocal_1735);
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), true);
	}
	uVar0 = GET_DRAFT_ACTOR(false, &bLocal_1735);
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
	SET_ACTOR_STOP_UPDATE(&uVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&uVar0), 1);
	uVar0 = GET_DRAFT_ACTOR(true, &bLocal_1735);
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
	SET_ACTOR_STOP_UPDATE(&uVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&uVar0), 1);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&bLocal_1735), 1);
	if (SQUAD_IS_VALID(&iLocal_4 + 888))
	{
		Function_223(&iLocal_4 + 888);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&iLocal_4 + 888));
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 904))
	{
		Function_312();
		SQUAD_SET_FACTION(&iLocal_4 + 904, 21);
		SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 904, false, 1, 4294967295);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
	}
	if (!IS_POPSET_VALID(&uLocal_1760))
	{
		uLocal_1760 = CREATE_POPULATION_SET_IN_LAYOUT(&uLocal_1235, "pEnemyPopset01", 1);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 397, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 398, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 399, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 400, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 401, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 402, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 403, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 404, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(&uLocal_1760, 405, 1.0f);
	}
	return;
}

void Function_563() //Position: 0x1E4ED / 124141
{
	(&iLocal_4 + 968) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Guards02RampartsCover"));
	*(&iLocal_4 + 912[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARDR_01_01", 398, Vector(-2726,229f, 71,35181f, 3473,138f), Vector(-172,6628f, -46,20323f, 169,7913f));
	SQUAD_JOIN(&iLocal_4 + 912[02], &iLocal_4 + 968);
	*(&iLocal_4 + 912[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARDR_01_02", 405, Vector(-2723,361f, 71,39669f, 3470,037f), Vector(-172,6628f, -46,20323f, 169,7913f));
	SQUAD_JOIN(&iLocal_4 + 912[12], &iLocal_4 + 968);
	*(&iLocal_4 + 912[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARDR_01_03", 401, Vector(-2721,874f, 71,45267f, 3468,646f), Vector(-172,6628f, -46,20323f, 169,7913f));
	SQUAD_JOIN(&iLocal_4 + 912[22], &iLocal_4 + 968);
	return;
}

int Function_564() //Position: 0x1E613 / 124435
{
	Function_449(&iLocal_4 + 360, 400, 2, 0);
	Function_449(&iLocal_4 + 360, 401, 2, 0);
	Function_449(&iLocal_4 + 360, 402, 2, 0);
	Function_449(&iLocal_4 + 360, 397, 2, 0);
	Function_449(&iLocal_4 + 360, 398, 2, 0);
	Function_449(&iLocal_4 + 360, 399, 2, 0);
	Function_449(&iLocal_4 + 360, 672, 2, 0);
	Function_449(&iLocal_4 + 360, 670, 2, 0);
	Function_449(&iLocal_4 + 360, 481, 2, 0);
	Function_449(&iLocal_4 + 360, 480, 2, 0);
	Function_449(&iLocal_4 + 360, 668, 2, 0);
	Function_449(&iLocal_4 + 360, 673, 2, 0);
	Function_449(&iLocal_4 + 360, 405, 2, 0);
	Function_449(&iLocal_4 + 360, 403, 2, 0);
	if (Function_318(&iLocal_4 + 360))
	{
		return 1;
	}
	return 0;
}

void Function_565() //Position: 0x1E6EB / 124651
{
	if (iLocal_1388 < 4 && iLocal_1388 > 105)
	{
		if (Function_363(Global_46838[1]) && !SQUAD_IS_VALID(&iLocal_4 + 896))
		{
			Function_574();
			SQUAD_SET_FACTION(&iLocal_4 + 896, 21);
			Function_391(&iLocal_4 + 896, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 896, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_502(&iLocal_4 + 896, 41, 0.0f);
			Function_446(&iLocal_4 + 896, 0);
			Function_305(&iLocal_4 + 896, 1);
			Function_427(StackVal, *(&iLocal_4 + 3488[13]), 0, 0);
			Function_427(StackVal, *(&iLocal_4 + 3488[23]), 0, 0);
			cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 1);
			if (IS_DOOR_VALID(&cLocal_1807))
			{
				if (IS_DOOR_OPENED(&cLocal_1807))
				{
					CLOSE_DOOR_FAST(&cLocal_1807);
				}
			}
			cLocal_1807 = Function_306(Global_46838[1], "fortmercer", "corralprops", 2);
			if (IS_DOOR_VALID(&cLocal_1807))
			{
				if (IS_DOOR_OPENED(&cLocal_1807))
				{
					CLOSE_DOOR_FAST(&cLocal_1807);
				}
			}
		}
		if (iLocal_1388 > 11)
		{
			Function_239(&iLocal_4 + 1704[0]);
			Function_524(StackVal, "$/cutscene/FORT_01_CS03_seq/FORT_01_CS03_seq", &uLocal_1424, Function_239(&iLocal_4 + 1704[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
	}
	switch (iLocal_1388)
	{
		case 0x00000000:
			Function_368(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_GAME_CAMERA_CURVE_OVERRIDE(false, "Fort01_backofwagon");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1392, GET_ACTOR_MAX_HEALTH(&bLocal_1392));
			SET_ACTOR_HEALTH(&bLocal_1733, GET_ACTOR_MAX_HEALTH(&bLocal_1733));
			SET_ACTOR_HEALTH(&bLocal_1731, GET_ACTOR_MAX_HEALTH(&bLocal_1731));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_365();
			Function_239(&iLocal_4 + 1576[0]);
			iLocal_1389 = Function_364(StackVal, Function_239(&iLocal_4 + 1576[0]), 0, 1, 1);
			if (!Function_363(iLocal_1389))
			{
				Function_362(&Local_1237);
			}
			Function_361(&Global_54076, &iLocal_4 + 1576[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_1735))
			{
				SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1735, 2);
			}
			SET_GAME_CAMERA_CURVE_OVERRIDE(4, "fort01_backofwagon");
			Function_224(&bLocal_1394);
			iLocal_1388 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_363(iLocal_1389) || iLocal_1389 != 4294967295)) && Function_573())
			{
				Function_572();
				Function_224(&bLocal_1394);
				iLocal_1388 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1237, bLocal_1387) && !Global_99145)
			{
				Function_239(&iLocal_4 + 1576[0]);
				if (Function_453(StackVal, "$/cutscene/FORT01_WARWAGON_CLIMB/FORT01_WARWAGON_CLIMB", &uLocal_1424, Function_239(&iLocal_4 + 1576[0]), 91926, 1, 75.0f, 160.0f, 2, 1, 2, 2, 1, 1))
				{
					Function_238(bLocal_1387);
					Function_432(StackVal, Function_238(bLocal_1387), bLocal_1387, Global_46736[3], Function_241(bLocal_1387), 0);
					iLocal_1388 = 3;
				}
			}
			else
			{
				Function_238(bLocal_1387);
				Function_432(StackVal, Function_238(bLocal_1387), bLocal_1387, Global_46736[3], Function_241(bLocal_1387), 0);
				Function_224(&bLocal_1394);
				iLocal_1388 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_271("$/cutscene/FORT01_WARWAGON_CLIMB/FORT01_WARWAGON_CLIMB", &iLocal_1375, &Local_1237, &bLocal_1387, 71488, 71113, 70165, 63064, 59951, 56641, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 4;
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 0, 1, 1);
			AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
			Function_571();
			START_VEHICLE(&bLocal_1735);
			if (!IS_ACTOR_RIDING_VEHICLE(&bLocal_1392))
			{
				SET_ACTOR_IN_VEHICLE(&bLocal_1392, &bLocal_1735, false);
			}
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1392, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1392, &iLocal_4 + 4608, 2, 0, 0, 1, false);
			TASK_PRIORITY_SET(&bLocal_1392, true);
			Function_564();
			Function_239(&iLocal_4 + 1576[4]);
			uLocal_1809 = CREATE_CAMERA_FOCUS_POINT(&uLocal_1235, "camfoc", Function_239(&iLocal_4 + 1576[4]), 250.0f, 350.0f);
			SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1809, 1);
			SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1809, "fort01_look_at_fort_mercer");
			if (Function_283(&Local_1237) || HUD_IS_FADED())
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 5;
			}
			else
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 11;
			}
			break;
		
		case 0x00000005:
			if (Function_278(&bLocal_1394) < 1.0f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_224(&bLocal_1394);
				iLocal_1388 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_ACTOR_IN_VOLUME(&bLocal_1392, &iLocal_4 + 1352[0]) && !DECOR_CHECK_EXIST(&uLocal_1235, "spedwagonup"))
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1392, 6,5f);
				DECOR_SET_BOOL(&uLocal_1235, "spedwagonup", 1);
			}
			if (Function_454(StackVal, &Global_54076, *(&iLocal_4 + 3488[43]), 20.0f) && !DECOR_CHECK_EXIST(&uLocal_1235, "clearedtrees"))
			{
				CLEAR_AREA_OF_TREE_TYPE(*(&iLocal_4 + 3488[43]), 2,5f, "");
				DECOR_SET_BOOL(&uLocal_1235, "clearedtrees", 1);
			}
			if (IS_ACTOR_IN_VOLUME(&bLocal_1735, &iLocal_4 + 1264[1]) && !IS_OBJECT_VALID(&iLocal_1375 + 24))
			{
				*(&iLocal_1375 + 24) = Function_567(&iLocal_4, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(&uLocal_1809))
				{
					DESTROY_OBJECT(&uLocal_1809);
				}
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1731, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1731, "one_handed_wave", 0);
				bLocal_1755 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(0, "one_handed_wave/wave");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1731, bLocal_1755);
				TASK_SEQUENCE_RELEASE(bLocal_1755, 1);
			}
			if (GET_TASK_STATUS(&bLocal_1392, 43) == 0)
			{
				TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
				Function_243();
				Function_224(&bLocal_1394);
				iLocal_1388 = 106;
			}
			break;
		
		case 0x0000000C:
			if (HUD_IS_FADED())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1735, *(&iLocal_4 + 3488[33]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1392, "default_character_Main/Vehicle/Engaged/Driver/EngagedStopped/Reverse");
				Function_224(&bLocal_1394);
				iLocal_1388 = 13;
			}
			break;
		
		case 0x0000000D:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_1392, 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1392, &iLocal_4 + 4608, 4, 0, 0, 1, false);
				TASK_PRIORITY_SET(&bLocal_1392, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_1392, 7.0f);
				DECOR_SET_BOOL(&uLocal_1235, "spedwagonup", 1);
				AI_ACTOR_FORCE_SPEED(&bLocal_1392, 4);
				Function_224(&bLocal_1394);
				iLocal_1388 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_278(&bLocal_1394) <= 2.0f)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				Function_224(&bLocal_1394);
				iLocal_1388 = 11;
			}
			break;
		
		case 0x0000006A:
			if (Global_99145)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1392, 2);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1731, 1);
			Function_566();
			if (Global_99145)
			{
				iLocal_1388 = 0;
			}
			else
			{
				iLocal_1388 = 2;
			}
			iLocal_1406[0] = 1;
			Function_224(&bLocal_1394);
			bLocal_1387 = true;
			break;
	}
	return;
}

void Function_566() //Position: 0x1EF07 / 126727
{
	Function_177(&iLocal_4 + 256);
	return;
}

var Function_567(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1EF15 / 126741
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Fort01_FortArrival", 2, 1);
	}
	Function_568(&uVar0);
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

void Function_568(int iParam0) //Position: 0x1EFA1 / 126881
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_570(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_569(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 0, 1, 10.0f, 0, 0);
	return;
}

void Function_569(int iParam0) //Position: 0x1EFE0 / 126944
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 48,54745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2681,005f, 69,56496f, 3524,061f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,009935f, 0,137086f, 0,019159f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_570(var uParam0) //Position: 0x1F059 / 127065
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 48,54745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2683,319f, 69,50622f, 3526,002f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,060584f, 0,474899f, 0,019193f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_571() //Position: 0x1F0CA / 127178
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AA", "Fort01_driveBanter_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AB", "Fort01_driveBanter_v1_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AC", "Fort01_driveBanter_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AD", "Fort01_driveBanter_v1_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Fort01_driveBanter_v1_AE", "Fort01_driveBanter_v1_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AF", "Fort01_driveBanter_v1_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AG", "Fort01_driveBanter_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AH", "Fort01_driveBanter_v1_AH", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AI", "Fort01_driveBanter_v1_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AJ", "Fort01_driveBanter_v1_AJ", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AK", "Fort01_driveBanter_v1_AK", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Fort01_driveBanter_v1_AL", "Fort01_driveBanter_v1_AL", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Fort01_driveBanter_v1_AM", "Fort01_driveBanter_v1_AM", 0, 1, 0, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_572() //Position: 0x1F417 / 128023
{
	Function_315(&iLocal_4 + 3304[0]);
	SET_OBJECT_ANIMATOR_NODE(&uLocal_1756, "/global/close_wagon/wagon/close");
	SET_OBJECT_ANIMATOR_RATE(&uLocal_1756, 10.0f);
	SET_OBJECT_ANIMATOR_PHASE(&uLocal_1756, 1.0f);
	STOP_VEHICLE(&bLocal_1735);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_1739), false);
	TASK_PRIORITY_SET(&bLocal_1733, true);
	Function_361(&bLocal_1392, &iLocal_4 + 1576[3], 1, 1, 1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1392);
	SET_ACTOR_IN_VEHICLE(&bLocal_1392, &bLocal_1735, false);
	TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
	ENABLE_VEHICLE_SEAT(&bLocal_1735, 2, 1);
	DECOR_SET_BOOL(&Global_54076, "bPreventCam", 1);
	SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1735, 2);
	Function_514();
	Function_391(&iLocal_4 + 888, 0);
	Function_513(&iLocal_4 + 888, 3);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 888, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_361(&bLocal_1733, &iLocal_4 + 1576[6], 1, 1, 1);
	TASK_USE_GRINGO(&bLocal_1733, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4568), "UseCase1", 4294967295, 1);
	Function_447();
	SQUAD_SET_FACTION(&iLocal_4 + 808, 20);
	Function_361(&iLocal_4 + 752[02], &iLocal_4 + 1576[8], 1, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 752[02], -1.0f, 0, 0);
	Function_361(&iLocal_4 + 752[12], &iLocal_4 + 1576[10], 1, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 752[12], -1.0f, 0, 0);
	Function_361(&iLocal_4 + 752[22], &iLocal_4 + 1576[12], 1, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 752[22], -1.0f, 0, 0);
	Function_445(&iLocal_4 + 808, &Global_54076, 0);
	Function_361(&bLocal_1731, &iLocal_4 + 1576[4], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1731, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bLocal_1731, true);
	uLocal_1797 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, false);
	uLocal_1799 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 808, true);
	return;
}

int Function_573() //Position: 0x1F612 / 128530
{
	Function_449(&iLocal_4 + 256, 400, 2, 0);
	Function_449(&iLocal_4 + 256, 401, 2, 0);
	Function_449(&iLocal_4 + 256, 402, 2, 0);
	Function_449(&iLocal_4 + 256, 397, 2, 0);
	Function_449(&iLocal_4 + 256, 398, 2, 0);
	Function_449(&iLocal_4 + 256, 399, 2, 0);
	if (Function_318(&iLocal_4 + 256))
	{
		return 1;
	}
	return 0;
}

void Function_574() //Position: 0x1F67A / 128634
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 896) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Guards00"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_01", 400, Vector(-2657,584f, 72,13779f, 3476,534f), Vector(0.0f, 165,0264f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_02", 401, Vector(-2697,628f, 75,89033f, 3444,752f), Vector(0.0f, 108,8646f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_03", 402, Vector(-2701,185f, 75,65486f, 3428,282f), Vector(0.0f, 108,8646f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_04", 397, Vector(-2696,171f, 71,64413f, 3418,868f), Vector(0.0f, 42,31024f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_05", 398, Vector(-2642,228f, 71,65485f, 3451,334f), Vector(0.0f, -129,3837f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_06", 399, Vector(-2730,613f, 71,72044f, 3472,551f), Vector(0.0f, 394,059f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GUARD_00_07", 400, Vector(-2712,053f, 71,62858f, 3453,127f), Vector(0.0f, 34,05901f, 0.0f));
	SQUAD_JOIN(&uVar0, &iLocal_4 + 896);
	return;
}

void Function_575() //Position: 0x1F858 / 129112
{
	switch (iLocal_1388)
	{
		case 0x00000006:
			SET_TIME_ACCELERATION(0.0f);
			Function_596(&Local_1237, 1);
			uLocal_1235 = CREATE_LAYOUT("Fort01_DynamicLayout");
			Function_595();
			Function_137(&(Global_43791[Global_46838[1]]), 256);
			if (iLocal_1234 != 0)
			{
				Function_188(1, 0, 1);
			}
			if ((!Function_283(&Local_1237) && !Global_99145) && (Local_1237.f_40 >= 1 && iLocal_1234 != 0))
			{
				uLocal_1421 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_1235, "Cutscene01Vol", 2,802597E-45f, Vector(-2086,236f, 18,18687f, 2603,849f), Vector(0.0f, 27,77918f, 0.0f), Vector(25.0f, 50.0f, 25.0f));
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1421);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_1421);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_1421, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&uLocal_1421);
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/FORT_01/FORT_01", 0, 0, 0, 0, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2860,451f, 63,74861f, 3393,943f), 0.0f, 1, 1, 1);
				Function_188(1, 0, 1);
				Global_99147 = 1;
				iLocal_1388 = 7;
			}
			else
			{
				iLocal_1388 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_594())
			{
				Function_224(&bLocal_1394);
				iLocal_1388 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_583())
			{
				iLocal_1388 = 10;
				Function_582();
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_1390 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_169(13);
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_581(2, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_1392, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1392, 0);
			SET_ACTOR_FACTION(&bLocal_1392, 20);
			TASK_PRIORITY_SET(&bLocal_1392, true);
			TASK_STAND_STILL(&bLocal_1392, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1392, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1392, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1392, GET_ACTOR_MAX_HEALTH(&bLocal_1392));
			Function_581(1, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_1731, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1731, 0);
			SET_ACTOR_FACTION(&bLocal_1731, 20);
			TASK_PRIORITY_SET(&bLocal_1731, true);
			TASK_STAND_STILL(&bLocal_1731, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1731, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1731, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1731, GET_ACTOR_MAX_HEALTH(&bLocal_1731));
			Function_581(4, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_1733, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1733, 0);
			SET_ACTOR_FACTION(&bLocal_1733, 20);
			TASK_PRIORITY_SET(&bLocal_1733, true);
			TASK_STAND_STILL(&bLocal_1733, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1733, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1733, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1733, GET_ACTOR_MAX_HEALTH(&bLocal_1733));
			Function_378(&bLocal_1394);
			Function_378(&bLocal_1398);
			Function_378(&bLocal_1402);
			Function_378(&bLocal_1768);
			Function_378(&bLocal_1772);
			Function_378(&bLocal_1776);
			SET_TIME_ACCELERATION(0.0f);
			Function_164(Global_46838[1]);
			SET_DUST_LEVEL_MODIFIER(4294967294);
			ENABLE_CHILD_SECTOR("fom_corralBreakProps01x");
			Function_579(&uLocal_1425, &uLocal_1235);
			bLocal_1387 = iLocal_1234;
			iLocal_1388 = 0;
			Function_577(&Local_1237, &bLocal_1387, &iLocal_1388);
			Function_576(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1237);
			switch (bLocal_1387)
			{
				case 0x00000000:
				case 0x00000001:
					DISABLE_CHILD_SECTOR("fom_rightWingProps01x");
					DISABLE_CHILD_SECTOR("fom_courtyardProps01x");
					DISABLE_CHILD_SECTOR("fom_gallowsProps01x");
					DISABLE_CHILD_SECTOR("fom_gallows01x");
					DISABLE_CHILD_SECTOR("fom_guardTowerProps02x");
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_576(struct<41> Param0) //Position: 0x1FC58 / 130136
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_1387 = false;
			break;
		
		case 0x00000002:
			bLocal_1387 = true;
			break;
		
		case 0x00000003:
			bLocal_1387 = 2;
			break;
		
		case 0x00000004:
			bLocal_1387 = 3;
			break;
		
		case 0x00000005:
			bLocal_1387 = 101;
			break;
	}
}

void Function_577(int iParam0, var uParam1, int iParam2) //Position: 0x1FCAB / 130219
{
	if (Function_283(&iParam0))
	{
		uParam1 = Function_441(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_578();
	}
	return;
}

void Function_578() //Position: 0x1FCE7 / 130279
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

int Function_579(struct<2>[] Param0) //Position: 0x1FD38 / 130360
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_580(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_580(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_580(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_580(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_580(struct<13> Param0) //Position: 0x20422 / 132130
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

void Function_581(bool bParam0, bool bParam1, bool bParam2) //Position: 0x204F1 / 132337
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[bParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[bParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[bParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[bParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[bParam014] + 104))
		{
			*(&Global_15402[bParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[bParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[bParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[bParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[bParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[bParam014] + 104);
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
				Function_380(&uVar0);
			}
		}
	}
	return;
}

void Function_582() //Position: 0x20600 / 132608
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
	
	Function_326(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Fort01_layout");
	*(&iLocal_4 + 1312) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 1264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-2872.0f, 62,24313f, 3411,941f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1264[0]);
	*(&iLocal_4 + 1264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-2692,914f, 67,26273f, 3493,086f), Vector(0.0f, -60,63634f, 0.0f), Vector(60.0f, 20.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1264[1]);
	*(&iLocal_4 + 1264[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-2712.0f, 67,26273f, 3508.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1264[2]);
	*(&iLocal_4 + 1264[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene04Vol", 2,802597E-45f, Vector(-2656,676f, 68,26385f, 3424,723f), Vector(0.0f, -46,15242f, 0.0f), Vector(10,8006f, 6.0f, 9,922954f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1264[3]);
	*(&iLocal_4 + 1264[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-2664.0f, 67,26275f, 3438,638f), Vector(0.0f, 42,89478f, 0.0f), Vector(37,45848f, 13,32184f, 32,49471f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1312, &iLocal_4 + 1264[4]);
	*(&iLocal_4 + 1320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01", 2,802597E-45f, Vector(-2684.0f, 67,26276f, 3516.0f), Vector(0.0f, 30,65824f, 0.0f), Vector(15.0f, 20.0f, 15.0f));
	*(&iLocal_4 + 1328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective03", 2,802597E-45f, Vector(-2645,931f, 67,26276f, 3424,557f), Vector(0.0f, 49,4478f, 0.0f), Vector(3.0f, 6.0f, 5.0f));
	*(&iLocal_4 + 1336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_left", 2,802597E-45f, Vector(-2717,238f, 68,5312f, 3364,652f), Vector(0.0f, 5,365824f, 0.0f), Vector(100.0f, 20.0f, 130.0f));
	*(&iLocal_4 + 1344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_trigger_right", 2,802597E-45f, Vector(-2576,068f, 70,66935f, 3507,868f), Vector(0.0f, 86,54026f, 0.0f), Vector(150.0f, 20.0f, 140.0f));
	*(&iLocal_4 + 1376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageOneVols_set");
	*(&iLocal_4 + 1352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WagonWarnVol", 2,802597E-45f, Vector(-2863,652f, 63,72982f, 3405,272f), Vector(0.0f, 0.0f, 0.0f), Vector(66,23914f, 17,99555f, 61,1905f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1376, &iLocal_4 + 1352[0]);
	*(&iLocal_4 + 1352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WagonFailVol", 2,802597E-45f, Vector(-2863,652f, 63,72982f, 3405,272f), Vector(0.0f, 0.0f, 0.0f), Vector(112,5227f, 17,99555f, 109,1866f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1376, &iLocal_4 + 1352[1]);
	*(&iLocal_4 + 1408) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageTwoVols_set");
	*(&iLocal_4 + 1384[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CombatVol02", 2,802597E-45f, Vector(-2696,6f, 68,67726f, 3487,083f), Vector(0.0f, 44,32879f, 0.0f), Vector(31,30718f, 9,454073f, 29,10532f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1384[0]);
	*(&iLocal_4 + 1384[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CombatRampartsVol02", 2,802597E-45f, Vector(-2724,081f, 72,33966f, 3470,301f), Vector(0.0f, 44,32879f, 0.0f), Vector(14,63313f, 4,414308f, 5,10809f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1384[1]);
	*(&iLocal_4 + 1472) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageThreeVols_set");
	*(&iLocal_4 + 1416[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CourtyardVol", 2,802597E-45f, Vector(-2664.0f, 67,26273f, 3438,995f), Vector(0.0f, 60,06348f, 0.0f), Vector(52,32473f, 6,771692f, 38,996f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1472, &iLocal_4 + 1416[0]);
	*(&iLocal_4 + 1416[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Enemy03fAlert01", 2,802597E-45f, Vector(-2650,193f, 73,17046f, 3452,049f), Vector(0.0f, 60,88577f, 0.0f), Vector(19,88601f, 4,268281f, 19,49997f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1472, &iLocal_4 + 1416[1]);
	*(&iLocal_4 + 1416[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Enemy03fAlert02", 2,802597E-45f, Vector(-2671,216f, 74,81244f, 3466,268f), Vector(0.0f, 60,88577f, 0.0f), Vector(16,67282f, 4,268281f, 38,76835f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1472, &iLocal_4 + 1416[2]);
	*(&iLocal_4 + 1416[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StairsCutsceneTrigger", 2,802597E-45f, Vector(-2724,848f, 67,42574f, 3481,322f), Vector(0.0f, 161,1456f, 0.0f), Vector(5,582445f, 7,29354f, 3,806271f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1472, &iLocal_4 + 1416[3]);
	*(&iLocal_4 + 1416[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WalkwayObstacle", 2,802597E-45f, Vector(-2698,735f, 75,85184f, 3434,93f), Vector(0.0f, 154,6925f, 0.0f), Vector(2,03129f, 3,35483f, 7,113015f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1472, &iLocal_4 + 1416[4]);
	*(&iLocal_4 + 1416[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ClearActorsInWay", 2,802597E-45f, Vector(-2680,48f, 68,73964f, 3521,654f), Vector(0.0f, 120,7191f, 0.0f), Vector(24,75898f, 7,29354f, 3,806271f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1472, &iLocal_4 + 1416[5]);
	*(&iLocal_4 + 1544) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageFourVols_set");
	*(&iLocal_4 + 1480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SlowDownVol", 2,802597E-45f, Vector(-2631,639f, 68,69238f, 3400.0f), Vector(0.0f, 45,50919f, 0.0f), Vector(26,81543f, 9,212499f, 24,62779f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[0]);
	*(&iLocal_4 + 1480[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CoverVolRight", 2,802597E-45f, Vector(-2615,179f, 67,27757f, 3400,487f), Vector(0.0f, 45,50919f, 0.0f), Vector(5,485882f, 9,212499f, 10,26545f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[1]);
	*(&iLocal_4 + 1480[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CoverVolLeft", 2,802597E-45f, Vector(-2632,761f, 68,276f, 3390,376f), Vector(0.0f, 45,50919f, 0.0f), Vector(18,79527f, 9,212499f, 14,09775f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[2]);
	*(&iLocal_4 + 1480[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CoverRestrictVol01", 2,802597E-45f, Vector(-2620,234f, 69,20957f, 3380,312f), Vector(1,162501f, 50,79906f, -0,5824705f), Vector(6,443115f, 9,212499f, 6,789951f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[3]);
	*(&iLocal_4 + 1480[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StopWagons", 2,802597E-45f, Vector(-2609,796f, 72,69597f, 3372,734f), Vector(0.0f, 55,63082f, 0.0f), Vector(35,52695f, 15,8733f, 29,17947f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[4]);
	*(&iLocal_4 + 1480[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CheckWagons", 2,802597E-45f, Vector(-2620,176f, 72,69597f, 3387,91f), Vector(0.0f, 51,5552f, 0.0f), Vector(53,72239f, 15,8733f, 121,647f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[5]);
	*(&iLocal_4 + 1480[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CoverRestrictVol02", 2,802597E-45f, Vector(-2623,08f, 67,26273f, 3396,92f), Vector(0,89974f, 35,25396f, -0,9640217f), Vector(5,20354f, 9,212499f, 2,98046f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1480[6]);
	*(&iLocal_4 + 1552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseFleeVol", 2,802597E-45f, Vector(-2581,48f, 69,53617f, 3427,894f), Vector(0.0f, 139,5579f, 0.0f), Vector(117,3825f, 20.0f, 140.0f));
	*(&iLocal_4 + 1560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CombatVol04", 2,802597E-45f, Vector(-2619,044f, 68,4581f, 3387,032f), Vector(0.0f, 139,5579f, 0.0f), Vector(141,8944f, 23,89495f, 94,11919f));
	*(&iLocal_4 + 1568) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1576[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-2865,611f, 63,48338f, 3405,611f), Vector(0.0f, 289,9952f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[0], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd01", Vector(-2857,151f, 63,76876f, 3401,151f), Vector(0.0f, 236,6619f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[1], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantStart01", Vector(-2859,016f, 63,7344f, 3397,329f), Vector(0.0f, 25,13361f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[2], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEnd01", Vector(-2846,096f, 63,72982f, 3402,096f), Vector(0.0f, 243,3992f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[3], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberStart01", Vector(-2678,274f, 72,96165f, 3505,137f), Vector(0.0f, 176,138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[4], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalStart01", Vector(-2860,91f, 63,7344f, 3397,329f), Vector(0.0f, -2,631643f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[5], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalEnd01", Vector(-2868.0f, 63,24704f, 3407,365f), Vector(0.0f, -69,79194f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[6], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01Start01", Vector(-2852.0f, 62,24313f, 3416.0f), Vector(0.0f, -28,79f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[7], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01End01", Vector(-2869,773f, 62,80204f, 3404.0f), Vector(-1,644377f, 1001,601f, 0,3918516f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[8], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02Start01", Vector(-2852.0f, 63,24704f, 3412.0f), Vector(0.0f, -36,513f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[9], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02End01", Vector(-2868,987f, 62,9994f, 3405,632f), Vector(0,8976003f, -67,35041f, -0,9675536f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[10], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03Start01", Vector(-2848.0f, 62,24313f, 3416.0f), Vector(0.0f, -38,51493f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[11], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03End01", Vector(-2865,963f, 63,45712f, 3408,253f), Vector(0.0f, -75,76511f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[12], &iLocal_4 + 1568);
	*(&iLocal_4 + 1576[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart01", Vector(-2861,594f, 63,72316f, 3392,04f), Vector(0.0f, 229,6898f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1576[13], &iLocal_4 + 1568);
	*(&iLocal_4 + 1696) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1704[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-2690,018f, 67,26274f, 3516.0f), Vector(0.0f, -271,7662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[0], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd02", Vector(-2692.0f, 67,26273f, 3508.0f), Vector(0.0f, -324,4327f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[1], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantStart02", Vector(-2687,822f, 67,26273f, 3500,378f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[2], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEnd02", Vector(-2687,801f, 67,23531f, 3500,485f), Vector(0.0f, 49,0811f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[3], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberStart02", Vector(-2678,274f, 72,96165f, 3505,137f), Vector(0.0f, 176,366f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[4], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberEnd02", Vector(-2680,392f, 72,83021f, 3498,665f), Vector(0.0f, 89,30868f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[5], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalEnd02", Vector(-2692.0f, 67,26276f, 3520.0f), Vector(0.0f, -42,82462f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[6], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01End02", Vector(-2692.0f, 67,26274f, 3524.0f), Vector(0.0f, -44,44624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[7], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02End02", Vector(-2696.0f, 67,26273f, 3520.0f), Vector(0.0f, -36,23001f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[8], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03End02", Vector(-2696,137f, 67,2462f, 3523,618f), Vector(0.0f, -30,95118f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[9], &iLocal_4 + 1696);
	*(&iLocal_4 + 1704[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd02", Vector(-2700.0f, 67,26273f, 3520.0f), Vector(0.0f, -60,76933f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1704[10], &iLocal_4 + 1696);
	*(&iLocal_4 + 1800) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1808[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-2693,052f, 67,26275f, 3504.0f), Vector(0.0f, -2,833623f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[0], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd03", Vector(-2693,286f, 67,26273f, 3500,092f), Vector(0.0f, 46,39815f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[1], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantStart03", Vector(-2688.0f, 67,26273f, 3501,646f), Vector(-0,4626188f, 47,82355f, -0,9756708f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[2], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEnd03", Vector(-2688.0f, 67,26273f, 3501,606f), Vector(0.0f, 51,56776f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[3], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberStart03", Vector(-2687,705f, 67,42548f, 3497,218f), Vector(0.0f, 47,86215f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[4], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberEnd03", Vector(-2687,724f, 67,42548f, 3497,229f), Vector(0.0f, 42,11629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[5], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalStart03", Vector(-2684,68f, 67,33083f, 3514,377f), Vector(0.0f, 23,27995f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[6], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalEnd03", Vector(-2697,824f, 67,26274f, 3496.0f), Vector(0.0f, 54,54109f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[7], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01Start03", Vector(-2685,455f, 67,26273f, 3512,112f), Vector(0.0f, 22,75547f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[8], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02Start03", Vector(-2684.0f, 67,26274f, 3524.0f), Vector(0.0f, 16,29624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[9], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03Start03", Vector(-2685,919f, 67,22498f, 3526,722f), Vector(0.0f, 5,636109f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[10], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01End03", Vector(-2695,357f, 67,26274f, 3498,615f), Vector(0.0f, 52,11643f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[11], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02End03", Vector(-2692,667f, 67,26273f, 3496,816f), Vector(0.0f, 75,89851f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[12], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03End03", Vector(-2690,767f, 67,26273f, 3500.0f), Vector(0.0f, 51,0082f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[13], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart03", Vector(-2687,199f, 67,22352f, 3527,448f), Vector(0.0f, -7,277934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[14], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd03", Vector(-2693,602f, 67,26274f, 3518,398f), Vector(0.0f, 315,2412f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[15], &iLocal_4 + 1800);
	*(&iLocal_4 + 1808[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01HorseStart03", Vector(-2686,083f, 67,26273f, 3504,971f), Vector(0.0f, -59,26527f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1808[16], &iLocal_4 + 1800);
	*(&iLocal_4 + 1952) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1960[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(-2657,43f, 67,26f, 3424,91f), Vector(0.0f, 376,98f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[0], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd04", Vector(-2645,608f, 67,26273f, 3416.0f), Vector(0.0f, -45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[1], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantStart04", Vector(-2649,59f, 67,26f, 3415,88f), Vector(0.0f, 405,19f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[2], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantStart04a", Vector(-2650,605f, 67,22231f, 3418,554f), Vector(0.0f, 130,287f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[3], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEnd04", Vector(-2659,219f, 67,26273f, 3426,369f), Vector(0.0f, 130,287f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[4], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalStart04", Vector(-2658,75f, 67,26f, 3421,71f), Vector(0.0f, 394,77f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[5], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalEnd04", Vector(-2662,62f, 67,26273f, 3430,17f), Vector(0.0f, -46,37946f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[6], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberStart04", Vector(-2657,996f, 67,26273f, 3429,07f), Vector(0.0f, 49,51379f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[7], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberEnd04", Vector(-2657,996f, 67,26273f, 3429,07f), Vector(0.0f, 49,51379f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[8], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01Start04", Vector(-2655,96f, 67,26f, 3424,62f), Vector(0.0f, 330,07f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[9], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01Start04a", Vector(-2654,911f, 67,26276f, 3421,058f), Vector(0.0f, -44,39471f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[10], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01End04", Vector(-2657,438f, 67,26276f, 3423,449f), Vector(0.0f, -214,3167f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[11], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02Start04", Vector(-2650,942f, 72,6483f, 3418,032f), Vector(0.0f, -44,36398f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[12], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02End04", Vector(-2656,146f, 67,26276f, 3425,188f), Vector(0.0f, 121,9506f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[13], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03Start04", Vector(-2645,25f, 72,66524f, 3423,36f), Vector(0.0f, -13,87006f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[14], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03End04", Vector(-2645,25f, 72,66524f, 3423,36f), Vector(0.0f, -13,87006f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[15], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart04", Vector(-2689,782f, 67,22352f, 3530,354f), Vector(0.0f, -7,277934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[16], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Enemy01End04", Vector(-2589,265f, 71,97211f, 3341,479f), Vector(0.0f, 139,8033f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[17], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Enemy02End04", Vector(-2583,178f, 70,94917f, 3331,298f), Vector(0.0f, 168,111f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[18], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Enemy03End04", Vector(-2575,258f, 68,17435f, 3318,507f), Vector(0.0f, 139,4567f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[19], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Enemy04End04", Vector(-2604,036f, 72,28152f, 3327,882f), Vector(0.0f, 177,2232f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[20], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Enemy05End04", Vector(-2612.0f, 72,28235f, 3324.0f), Vector(0.0f, 186,0924f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[21], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Enemy06End04", Vector(-2620,058f, 70,58868f, 3319,891f), Vector(0.0f, 187,1508f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[22], &iLocal_4 + 1952);
	*(&iLocal_4 + 1960[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerGotoEnd04", Vector(-2637,348f, 67,26274f, 3409,194f), Vector(0.0f, -45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1960[23], &iLocal_4 + 1952);
	*(&iLocal_4 + 2160) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2168[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStartLast", Vector(-2660,888f, 67,26273f, 3426,739f), Vector(0.0f, -200,8276f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[0], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEndLast", Vector(-2645,092f, 67,26274f, 3413,049f), Vector(0.0f, -48,81252f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[1], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantStartLast", Vector(-2657,155f, 67,26273f, 3427,086f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[2], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEndLast", Vector(-2658,184f, 67,26273f, 3428,335f), Vector(0.0f, 54,17259f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[3], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEndLast1", Vector(-2659,736f, 67,26273f, 3427,462f), Vector(0.0f, 76,49671f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[4], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantEndLast2", Vector(-2646,95f, 67,26273f, 3414,875f), Vector(0.0f, -42,57013f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[5], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalStartLast", Vector(-2662,62f, 67,26273f, 3430,17f), Vector(0.0f, -46,37946f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[6], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalEndLast", Vector(-2662,62f, 67,26273f, 3430,17f), Vector(0.0f, -46,37946f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[7], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberStartLast", Vector(-2665,286f, 67,26273f, 3428,237f), Vector(0.0f, -174,3413f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[8], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberEndLast", Vector(-2662,833f, 67,28097f, 3424,375f), Vector(0.0f, -117,7744f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[9], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01StartLast", Vector(-2662,62f, 67,26273f, 3432,091f), Vector(0.0f, -11,56318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[10], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01EndLast", Vector(-2662,62f, 67,26273f, 3432,091f), Vector(0.0f, -11,56318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[11], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02StartLast", Vector(-2648.0f, 67,26273f, 3440.0f), Vector(0.0f, -50,18544f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[12], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy02EndLast", Vector(-2648.0f, 67,26273f, 3440.0f), Vector(0.0f, -50,18544f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[13], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03StartLast", Vector(-2670,615f, 67,26273f, 3431,431f), Vector(0.0f, -58,32727f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[14], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy03EndLast", Vector(-2667,391f, 67,26273f, 3429,712f), Vector(0.0f, -58,32727f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[15], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OutlawStartLast", Vector(-2651,033f, 67,26273f, 3420,029f), Vector(0.0f, -229,6378f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[16], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OutlawEndLast", Vector(-2659,969f, 67,26273f, 3426,783f), Vector(0.0f, -222,6022f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[17], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "OutlawEndLast1", Vector(-2659,969f, 67,26273f, 3426,783f), Vector(0.0f, -215,7498f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[18], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStartLast", Vector(-2642,923f, 67,26276f, 3413,077f), Vector(0.0f, -7,277934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[19], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PrisonerStartLast", Vector(-2672,024f, 67,26273f, 3431,224f), Vector(0.0f, -80,91577f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[20], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PrisonerEndLast", Vector(-2668,799f, 67,26273f, 3429,227f), Vector(0.0f, -77,44008f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[21], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MarshalEndLast1", Vector(-2646,95f, 67,26273f, 3416,121f), Vector(0.0f, -44,81846f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[22], &iLocal_4 + 2160);
	*(&iLocal_4 + 2168[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberEndLast1", Vector(-2648,115f, 67,26273f, 3414,62f), Vector(0.0f, -44,11522f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2168[23], &iLocal_4 + 2160);
	*(&iLocal_4 + 2368) = CREATE_OBJECTSET_IN_LAYOUT("HorseMove01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2376[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_horse01_01", Vector(-2690,139f, 67,26274f, 3518,139f), Vector(0.0f, 338,6316f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2376[0], &iLocal_4 + 2368);
	*(&iLocal_4 + 2376[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_horse01_02", Vector(-2688,379f, 67,26273f, 3516,379f), Vector(0.0f, 338,1814f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2376[1], &iLocal_4 + 2368);
	*(&iLocal_4 + 2376[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_horse01_03", Vector(-2689,586f, 67,26276f, 3520f), Vector(0.0f, -18,61553f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2376[2], &iLocal_4 + 2368);
	*(&iLocal_4 + 2376[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_horse01_04", Vector(-2690,465f, 67,26275f, 3521,535f), Vector(0.0f, -4,007645f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2376[3], &iLocal_4 + 2368);
	*(&iLocal_4 + 2416) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2424[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MerchantCover02", Vector(-2687,812f, 67,25204f, 3500,448f), Vector(0.0f, 52,35759f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[0], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GraveRobberCover02", Vector(-2680,423f, 72,83021f, 3497,646f), Vector(0.0f, 26,90582f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[1], &iLocal_4 + 2416);
	*(&iLocal_4 + 2448) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03aSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2456[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03a_Marshal", Vector(-2715,429f, 71,62858f, 3462,199f), Vector(0.0f, -38,35629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2456[0], &iLocal_4 + 2448);
	*(&iLocal_4 + 2456[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03a_Deputy01", Vector(-2718,257f, 71,45237f, 3465,055f), Vector(0.0f, -45,91118f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2456[1], &iLocal_4 + 2448);
	*(&iLocal_4 + 2456[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03a_Deputy02", Vector(-2722,238f, 71,44849f, 3463,872f), Vector(0.0f, -52,30455f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2456[2], &iLocal_4 + 2448);
	*(&iLocal_4 + 2456[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03a_Deputy03", Vector(-2712,578f, 71,44228f, 3459,661f), Vector(0.0f, -42,72345f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2456[3], &iLocal_4 + 2448);
	*(&iLocal_4 + 2456[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03a_Seth", Vector(-2725,873f, 71,31695f, 3473,054f), Vector(0.0f, -42,06234f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2456[4], &iLocal_4 + 2448);
	*(&iLocal_4 + 2456[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03a_Extra", Vector(-2715,714f, 71,44128f, 3456,714f), Vector(0.0f, -42,06234f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2456[5], &iLocal_4 + 2448);
	*(&iLocal_4 + 2512) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03bSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2520[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03b_Marshal", Vector(-2694,643f, 73,85524f, 3441,76f), Vector(0.0f, -27,40825f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2520[0], &iLocal_4 + 2512);
	*(&iLocal_4 + 2520[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03b_Deputy01", Vector(-2699,138f, 75,76976f, 3442,737f), Vector(0.0f, -41,92825f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2520[1], &iLocal_4 + 2512);
	*(&iLocal_4 + 2520[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03b_Deputy02", Vector(-2694,654f, 75,78565f, 3444,83f), Vector(0.0f, -22,00206f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2520[2], &iLocal_4 + 2512);
	*(&iLocal_4 + 2520[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03b_Deputy03", Vector(-2698,295f, 73,85524f, 3439,905f), Vector(0.0f, -25,48923f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2520[3], &iLocal_4 + 2512);
	*(&iLocal_4 + 2520[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03b_Seth", Vector(-2695,191f, 73,85683f, 3449,335f), Vector(0.0f, -31,23751f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2520[4], &iLocal_4 + 2512);
	*(&iLocal_4 + 2520[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03b_Extra", Vector(-2691,416f, 73,85525f, 3443,297f), Vector(0,07382786f, -21,3548f, 0,5949711f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2520[5], &iLocal_4 + 2512);
	*(&iLocal_4 + 2576) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03cSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2584[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03c_Marshal", Vector(-2679,337f, 71,65485f, 3427,686f), Vector(0.0f, -38,35629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2584[0], &iLocal_4 + 2576);
	*(&iLocal_4 + 2584[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03c_Deputy01", Vector(-2689,681f, 71,65552f, 3432,96f), Vector(0.0f, -38,35629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2584[1], &iLocal_4 + 2576);
	*(&iLocal_4 + 2584[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03c_Deputy02", Vector(-2682,983f, 71,74915f, 3435,439f), Vector(0.0f, -33,28273f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2584[2], &iLocal_4 + 2576);
	*(&iLocal_4 + 2584[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03c_Deputy03", Vector(-2687,033f, 71,65839f, 3450,798f), Vector(0.0f, -21,19123f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2584[3], &iLocal_4 + 2576);
	*(&iLocal_4 + 2584[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03c_Seth", Vector(-2691,412f, 73,85527f, 3443,291f), Vector(0.0f, -19,78155f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2584[4], &iLocal_4 + 2576);
	*(&iLocal_4 + 2584[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03c_Extra", Vector(-2677,483f, 71,77161f, 3431,227f), Vector(0.0f, -38,35629f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2584[5], &iLocal_4 + 2576);
	*(&iLocal_4 + 2640) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03dSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2648[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03d_Marshal", Vector(-2666,466f, 71,65486f, 3420,208f), Vector(0.0f, -68,27863f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[0], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03d_Deputy01", Vector(-2669,284f, 71,69891f, 3422,637f), Vector(0.0f, -118,3604f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[1], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03d_Deputy02", Vector(-2659,742f, 71,65427f, 3417,979f), Vector(0.0f, -122,7962f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[2], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03d_Deputy03", Vector(-2661,485f, 71,65427f, 3419,646f), Vector(0.0f, 225,45f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[3], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03d_Seth", Vector(-2672,345f, 71,61861f, 3425,856f), Vector(0.0f, -129,5734f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[4], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03d_Extra", Vector(-2656,782f, 72,8146f, 3419,03f), Vector(0.0f, -225,1662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[5], &iLocal_4 + 2640);
	*(&iLocal_4 + 2704) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03eSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03e_Marshal", Vector(-2653,68f, 67,25487f, 3439,243f), Vector(0.0f, -229,1561f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[0], &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03e_Deputy01", Vector(-2671,617f, 67,39581f, 3426,037f), Vector(0.0f, -176,9978f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[1], &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03e_Deputy02", Vector(-2652,982f, 72,65476f, 3422,88f), Vector(0.0f, 134,0245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[2], &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03e_Deputy03", Vector(-2648,339f, 72,65478f, 3427,687f), Vector(0.0f, -229,8939f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[3], &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03e_Seth", Vector(-2664,948f, 67,22917f, 3425,506f), Vector(0.0f, 491,4511f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[4], &iLocal_4 + 2704);
	*(&iLocal_4 + 2712[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverAlly03e_Extra", Vector(-2667,022f, 67,43769f, 3428,849f), Vector(0.0f, -163,8641f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2712[5], &iLocal_4 + 2704);
	*(&iLocal_4 + 2768) = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03aSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2776[03]) = Vector(-2702,235f, 73,84142f, 3443,299f);
	*(&iLocal_4 + 2776[03] + 12) = Vector(0.0f, 157,3038f, 0.0f);
	*(&iLocal_4 + 2832[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02A_01", Vector(-2702,235f, 73,84142f, 3443,299f), Vector(0.0f, 157,3038f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2832[0], &iLocal_4 + 2768);
	*(&iLocal_4 + 2776[13]) = Vector(-2696,724f, 75,79555f, 3446,038f);
	*(&iLocal_4 + 2776[13] + 12) = Vector(0.0f, 134,6333f, 0.0f);
	*(&iLocal_4 + 2832[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02A_02", Vector(-2696,724f, 75,79555f, 3446,038f), Vector(0.0f, 134,6333f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2832[1], &iLocal_4 + 2768);
	*(&iLocal_4 + 2856) = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03bSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2864[03]) = Vector(-2676,073f, 71,64713f, 3429,556f);
	*(&iLocal_4 + 2864[03] + 12) = Vector(0.0f, 141,2341f, 0.0f);
	*(&iLocal_4 + 2920[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02B_01", Vector(-2676,073f, 71,64713f, 3429,556f), Vector(0.0f, 141,2341f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2920[0], &iLocal_4 + 2856);
	*(&iLocal_4 + 2864[13]) = Vector(-2692,095f, 71,64719f, 3431,016f);
	*(&iLocal_4 + 2864[13] + 12) = Vector(0.0f, 180,5328f, 0.0f);
	*(&iLocal_4 + 2920[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02B_02", Vector(-2692,095f, 71,64719f, 3431,016f), Vector(0.0f, 180,5328f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2920[1], &iLocal_4 + 2856);
	*(&iLocal_4 + 2944) = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03cSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2952[03]) = Vector(-2662,491f, 72,13671f, 3414,696f);
	*(&iLocal_4 + 2952[03] + 12) = Vector(0.0f, 131,9133f, 0.0f);
	*(&iLocal_4 + 2984[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02C_03", Vector(-2662,491f, 72,13671f, 3414,696f), Vector(0.0f, 131,9133f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2984[0], &iLocal_4 + 2944);
	*(&iLocal_4 + 3000) = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03dSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3008[03]) = Vector(-2657,595f, 71,64566f, 3412,475f);
	*(&iLocal_4 + 3008[03] + 12) = Vector(0.0f, 133,2243f, 0.0f);
	*(&iLocal_4 + 3040[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02D_01", Vector(-2657,595f, 71,64566f, 3412,475f), Vector(0.0f, 133,2243f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3040[0], &iLocal_4 + 3000);
	*(&iLocal_4 + 3056) = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03eSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3064[03]) = Vector(-2677,769f, 67,24471f, 3441,914f);
	*(&iLocal_4 + 3064[03] + 12) = Vector(0.0f, -58,72967f, 0.0f);
	*(&iLocal_4 + 3120[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02E_01", Vector(-2677,769f, 67,24471f, 3441,914f), Vector(0.0f, -58,72967f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3120[0], &iLocal_4 + 3056);
	*(&iLocal_4 + 3064[13]) = Vector(-2657,158f, 67,26275f, 3445,487f);
	*(&iLocal_4 + 3064[13] + 12) = Vector(0.0f, -24,46681f, 0.0f);
	*(&iLocal_4 + 3120[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02E_02", Vector(-2657,158f, 67,26275f, 3445,487f), Vector(0.0f, -24,46681f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3120[1], &iLocal_4 + 3056);
	*(&iLocal_4 + 3144) = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03fSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3152[03]) = Vector(-2657,279f, 71,65486f, 3448,943f);
	*(&iLocal_4 + 3152[03] + 12) = Vector(0.0f, 52,95694f, 0.0f);
	*(&iLocal_4 + 3208[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02F_01", Vector(-2657,279f, 71,65486f, 3448,943f), Vector(0.0f, 52,95694f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3208[0], &iLocal_4 + 3144);
	*(&iLocal_4 + 3152[13]) = Vector(-2653,964f, 71,65479f, 3440,849f);
	*(&iLocal_4 + 3152[13] + 12) = Vector(0.0f, 62,53495f, 0.0f);
	*(&iLocal_4 + 3208[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_enemy_02F_02", Vector(-2653,964f, 71,65479f, 3440,849f), Vector(0.0f, 62,53495f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3208[1], &iLocal_4 + 3144);
	*(&iLocal_4 + 3232) = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3240[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_ally_04_01", Vector(-2635,543f, 72,65486f, 3421,243f), Vector(0.0f, -37,45364f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3240[0], &iLocal_4 + 3232);
	*(&iLocal_4 + 3240[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_ally_04_02", Vector(-2634,206f, 72,65486f, 3423,01f), Vector(0.0f, -35,31872f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3240[1], &iLocal_4 + 3232);
	*(&iLocal_4 + 3240[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_ally_04_03", Vector(-2631,636f, 72,65486f, 3426,614f), Vector(-0,7719588f, -392,6155f, -9,133805f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3240[2], &iLocal_4 + 3232);
	*(&iLocal_4 + 3240[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_ally_04_04", Vector(-2636,67f, 72,65486f, 3426,512f), Vector(0.0f, 317,9547f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3240[3], &iLocal_4 + 3232);
	*(&iLocal_4 + 3240[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_ally_04_05", Vector(-2636,597f, 72,65486f, 3426,022f), Vector(0.0f, 328,8183f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3240[4], &iLocal_4 + 3232);
	*(&iLocal_4 + 3240[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_cover_ally_04_06", Vector(-2637,564f, 72,65486f, 3426,821f), Vector(0.0f, 328,8183f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3240[5], &iLocal_4 + 3232);
	*(&iLocal_4 + 3296) = CREATE_OBJECTSET_IN_LAYOUT("WagonSpawnSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3304[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon01", Vector(-2851,145f, 63,72f, 3402,94f), Vector(0.0f, 248,8572f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[0], &iLocal_4 + 3296);
	*(&iLocal_4 + 3304[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon02", Vector(-2681,641f, 67,26276f, 3519,817f), Vector(0.0f, 30,1183f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[1], &iLocal_4 + 3296);
	*(&iLocal_4 + 3304[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon03", Vector(-2691,635f, 67,26f, 3504,03f), Vector(0.0f, 217,2104f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[2], &iLocal_4 + 3296);
	*(&iLocal_4 + 3304[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon04", Vector(-2682,933f, 67,26273f, 3519,224f), Vector(0.0f, 211,0539f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[3], &iLocal_4 + 3296);
	*(&iLocal_4 + 3304[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon05", Vector(-2640.0f, 67,26276f, 3408.0f), Vector(0.0f, 134,7962f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[4], &iLocal_4 + 3296);
	*(&iLocal_4 + 3304[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon06", Vector(-2641,977f, 67,26273f, 3409,999f), Vector(0.0f, 135,6804f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[5], &iLocal_4 + 3296);
	*(&iLocal_4 + 3304[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_spawn_wagon07", Vector(-2640.0f, 67,26276f, 3408.0f), Vector(0.0f, 135,6804f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3304[6], &iLocal_4 + 3296);
	*(&iLocal_4 + 3368) = CREATE_OBJECTSET_IN_LAYOUT("GuardsMove01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3376[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_guard01_01", Vector(-2701,741f, 67,26276f, 3491,377f), Vector(0.0f, -138,1414f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3376[0], &iLocal_4 + 3368);
	*(&iLocal_4 + 3376[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_guard01_02", Vector(-2701,059f, 67,26273f, 3489,6f), Vector(0.0f, -147,9411f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3376[1], &iLocal_4 + 3368);
	*(&iLocal_4 + 3376[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_guard01_03", Vector(-2700,24f, 67,26273f, 3487,792f), Vector(0.0f, -149,4766f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3376[2], &iLocal_4 + 3368);
	*(&iLocal_4 + 3408) = CREATE_OBJECTSET_IN_LAYOUT("FortGringosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3416[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_winch01", Vector(-2643,987f, 67,26276f, 3423,903f), Vector(0.0f, -225,0778f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3416[0], &iLocal_4 + 3408);
	*(&iLocal_4 + 3416[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_gringo_winch02", Vector(-2654,31f, 67,76144f, 3412,083f), Vector(0.0f, -225,0778f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3416[1], &iLocal_4 + 3408);
	*(&iLocal_4 + 3440) = CREATE_OBJECTSET_IN_LAYOUT("DeputyStageOneGotosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3448[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_deputy01_00", Vector(-2856.0f, 63,72982f, 3407,074f), Vector(-0,3304513f, -65,53627f, 0,09580173f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3448[0], &iLocal_4 + 3440);
	*(&iLocal_4 + 3448[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_deputy02_00", Vector(-2850,442f, 63,72982f, 3401,558f), Vector(0.0f, -120,1343f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3448[1], &iLocal_4 + 3440);
	*(&iLocal_4 + 3448[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_deputy03_00", Vector(-2850,915f, 63,59885f, 3409,085f), Vector(0.0f, 329,5341f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3448[2], &iLocal_4 + 3440);
	*(&iLocal_4 + 3480) = CREATE_OBJECTSET_IN_LAYOUT("MiscSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3488[03]) = Vector(-2685,341f, 69,91605f, 3501,361f);
	*(&iLocal_4 + 3488[03] + 12) = Vector(0.0f, -301,4992f, 0.0f);
	*(&iLocal_4 + 3736[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_graverobber01", Vector(-2685,341f, 69,91605f, 3501,361f), Vector(0.0f, -301,4992f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[0], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[13]) = Vector(-2722,991f, 67,26275f, 3472f);
	*(&iLocal_4 + 3488[13] + 12) = Vector(0.0f, 36,44467f, 0.0f);
	*(&iLocal_4 + 3736[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hitchingpost01", Vector(-2722,991f, 67,26275f, 3472f), Vector(0.0f, 36,44467f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[1], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[23]) = Vector(-2720,803f, 67,53471f, 3469,728f);
	*(&iLocal_4 + 3488[23] + 12) = Vector(0.0f, 36,44467f, 0.0f);
	*(&iLocal_4 + 3736[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "hitchingpost02", Vector(-2720,803f, 67,53471f, 3469,728f), Vector(0.0f, 36,44467f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[2], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[33]) = Vector(-2699,169f, 67,21678f, 3521,723f);
	*(&iLocal_4 + 3488[33] + 12) = Vector(0.0f, -83,19875f, 0.0f);
	*(&iLocal_4 + 3736[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "napskippoint", Vector(-2699,169f, 67,21678f, 3521,723f), Vector(0.0f, -83,19875f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[3], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[43]) = Vector(-2692.0f, 67,26276f, 3520.0f);
	*(&iLocal_4 + 3488[43] + 12) = Vector(0.0f, -101,3578f, 0.0f);
	*(&iLocal_4 + 3736[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "cleartrees", Vector(-2692.0f, 67,26276f, 3520.0f), Vector(0.0f, -101,3578f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[4], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[53]) = Vector(-2614,092f, 68,99974f, 3380,68f);
	*(&iLocal_4 + 3488[53] + 12) = Vector(0.0f, -218,7067f, 0.0f);
	*(&iLocal_4 + 3736[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TeleportInfantry04", Vector(-2614,092f, 68,99974f, 3380,68f), Vector(0.0f, -218,7067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[5], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[63]) = Vector(-2677,552f, 74,77432f, 3468,953f);
	*(&iLocal_4 + 3488[63] + 12) = Vector(0.0f, -218,7067f, 0.0f);
	*(&iLocal_4 + 3736[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DisableCurve", Vector(-2677,552f, 74,77432f, 3468,953f), Vector(0.0f, -218,7067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[6], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[73]) = Vector(-2712,5f, 67,26276f, 3499,5f);
	*(&iLocal_4 + 3488[73] + 12) = Vector(0.0f, -218,7067f, 0.0f);
	*(&iLocal_4 + 3736[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CalcAngleStage02", Vector(-2712,5f, 67,26276f, 3499,5f), Vector(0.0f, -218,7067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[7], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[83]) = Vector(-2682,276f, 66,7188f, 3322,033f);
	*(&iLocal_4 + 3488[83] + 12) = Vector(0.0f, -218,7067f, 0.0f);
	*(&iLocal_4 + 3736[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CalcAngleStage04", Vector(-2682,276f, 66,7188f, 3322,033f), Vector(0.0f, -218,7067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[8], &iLocal_4 + 3480);
	*(&iLocal_4 + 3488[93]) = Vector(-2728,221f, 71,40936f, 3471,753f);
	*(&iLocal_4 + 3488[93] + 12) = Vector(0.0f, -411,6581f, 0.0f);
	*(&iLocal_4 + 3736[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TeleportPlayerCut03", Vector(-2728,221f, 71,40936f, 3471,753f), Vector(0.0f, -411,6581f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3736[9], &iLocal_4 + 3480);
	*(&iLocal_4 + 3824) = CREATE_OBJECTSET_IN_LAYOUT("StageTwo_WaveSpawnsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3832[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SpawnPoint01", Vector(-2699,533f, 67,50015f, 3465,856f), Vector(0.0f, 254,4175f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3832[0], &iLocal_4 + 3824);
	*(&iLocal_4 + 3832[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SpawnPoint03", Vector(-2690,013f, 67,26276f, 3457,987f), Vector(0.0f, 156,7712f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3832[1], &iLocal_4 + 3824);
	*(&iLocal_4 + 3832[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SpawnPoint04", Vector(-2677,189f, 67,45486f, 3467,041f), Vector(0.0f, 140,1511f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3832[2], &iLocal_4 + 3824);
	*(&iLocal_4 + 3832[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SpawnPoint05", Vector(-2716,209f, 71,53252f, 3460,162f), Vector(0.0f, 140,1511f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3832[3], &iLocal_4 + 3824);
	*(&iLocal_4 + 3872) = CREATE_OBJECTSET_IN_LAYOUT("StageTwo_CoverLocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3880[03]) = Vector(-2683,686f, 67,26273f, 3490,775f);
	*(&iLocal_4 + 3880[03] + 12) = Vector(0.0f, -227,898f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs01", Vector(-2683,686f, 67,26273f, 3490,775f), Vector(0.0f, -227,898f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[13]) = Vector(-2682,992f, 67,26273f, 3484,811f);
	*(&iLocal_4 + 3880[13] + 12) = Vector(0.0f, -232,6976f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs02", Vector(-2682,992f, 67,26273f, 3484,811f), Vector(0.0f, -232,6976f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[23]) = Vector(-2689,926f, 67,26276f, 3482,361f);
	*(&iLocal_4 + 3880[23] + 12) = Vector(0.0f, -218,9792f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs03", Vector(-2689,926f, 67,26276f, 3482,361f), Vector(0.0f, -218,9792f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[33]) = Vector(-2706,969f, 67,26273f, 3483,938f);
	*(&iLocal_4 + 3880[33] + 12) = Vector(0.0f, 223,0209f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs04", Vector(-2706,969f, 67,26273f, 3483,938f), Vector(0.0f, 223,0209f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[43]) = Vector(-2695,609f, 67,26274f, 3477,199f);
	*(&iLocal_4 + 3880[43] + 12) = Vector(0.0f, -213,369f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs06", Vector(-2695,609f, 67,26274f, 3477,199f), Vector(0.0f, -213,369f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[53]) = Vector(-2700,192f, 67,26273f, 3477,244f);
	*(&iLocal_4 + 3880[53] + 12) = Vector(0.0f, -144,5227f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs07", Vector(-2700,192f, 67,26273f, 3477,244f), Vector(0.0f, -144,5227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[63]) = Vector(-2708,857f, 67,26274f, 3486,15f);
	*(&iLocal_4 + 3880[63] + 12) = Vector(0.0f, 222,8288f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs09", Vector(-2708,857f, 67,26274f, 3486,15f), Vector(0.0f, 222,8288f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[73]) = Vector(-2697,9f, 67,26275f, 3480,136f);
	*(&iLocal_4 + 3880[73] + 12) = Vector(0.0f, -163,6613f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs10", Vector(-2697,9f, 67,26275f, 3480,136f), Vector(0.0f, -163,6613f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[83]) = Vector(-2701,044f, 67,26275f, 3481,368f);
	*(&iLocal_4 + 3880[83] + 12) = Vector(0.0f, -128,8706f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs11", Vector(-2701,044f, 67,26275f, 3481,368f), Vector(0.0f, -128,8706f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[93]) = Vector(-2695,797f, 67,26274f, 3484,915f);
	*(&iLocal_4 + 3880[93] + 12) = Vector(0.0f, -156,6634f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs12", Vector(-2695,797f, 67,26274f, 3484,915f), Vector(0.0f, -156,6634f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[103]) = Vector(-2703,032f, 67,26274f, 3487,602f);
	*(&iLocal_4 + 3880[103] + 12) = Vector(0.0f, -132,6344f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs13", Vector(-2703,032f, 67,26274f, 3487,602f), Vector(0.0f, -132,6344f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[113]) = Vector(-2698,767f, 67,26275f, 3492,26f);
	*(&iLocal_4 + 3880[113] + 12) = Vector(0.0f, -132,9883f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs14", Vector(-2698,767f, 67,26275f, 3492,26f), Vector(0.0f, -132,9883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[123]) = Vector(-2702,849f, 67,26274f, 3494,823f);
	*(&iLocal_4 + 3880[123] + 12) = Vector(0.0f, -132,9883f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs15", Vector(-2702,849f, 67,26274f, 3494,823f), Vector(0.0f, -132,9883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[133]) = Vector(-2685,613f, 67,26273f, 3491,953f);
	*(&iLocal_4 + 3880[133] + 12) = Vector(0.0f, -234,1708f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs16", Vector(-2685,613f, 67,26273f, 3491,953f), Vector(0.0f, -234,1708f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[143]) = Vector(-2695,864f, 67,26273f, 3490,604f);
	*(&iLocal_4 + 3880[143] + 12) = Vector(0.0f, -149,6156f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs17", Vector(-2695,864f, 67,26273f, 3490,604f), Vector(0.0f, -149,6156f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[153]) = Vector(-2697,306f, 67,26273f, 3491,962f);
	*(&iLocal_4 + 3880[153] + 12) = Vector(0.0f, -141,9156f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs18", Vector(-2697,306f, 67,26273f, 3491,962f), Vector(0.0f, -141,9156f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[163]) = Vector(-2704,724f, 67,26273f, 3496,644f);
	*(&iLocal_4 + 3880[163] + 12) = Vector(0.0f, -133,9802f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs19", Vector(-2704,724f, 67,26273f, 3496,644f), Vector(0.0f, -133,9802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[173]) = Vector(-2694,189f, 67,26276f, 3489,844f);
	*(&iLocal_4 + 3880[173] + 12) = Vector(0.0f, -162,934f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs21", Vector(-2694,189f, 67,26276f, 3489,844f), Vector(0.0f, -162,934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_4 + 3872);
	*(&iLocal_4 + 3880[183]) = Vector(-2705,817f, 67,26276f, 3498,183f);
	*(&iLocal_4 + 3880[183] + 12) = Vector(0.0f, -133,9802f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CoverLocs22", Vector(-2705,817f, 67,26276f, 3498,183f), Vector(0.0f, -133,9802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_4 + 3872);
	*(&iLocal_4 + 4344) = CREATE_OBJECTSET_IN_LAYOUT("StageFourSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 4352[03]) = Vector(-2704,44f, 66,03447f, 3361,031f);
	*(&iLocal_4 + 4352[03] + 12) = Vector(0.0f, 317,5318f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "StreamWagon01", Vector(-2704,44f, 66,03447f, 3361,031f), Vector(0.0f, 317,5318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[13]) = Vector(-2579,842f, 70,2523f, 3480,366f);
	*(&iLocal_4 + 4352[13] + 12) = Vector(0.0f, 317,5318f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "StreamWagon02", Vector(-2579,842f, 70,2523f, 3480,366f), Vector(0.0f, 317,5318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[23]) = Vector(-2628,125f, 69,7486f, 3370,597f);
	*(&iLocal_4 + 4352[23] + 12) = Vector(0.0f, 409,0646f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Wagon02Goto", Vector(-2628,125f, 69,7486f, 3370,597f), Vector(0.0f, 409,0646f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[33]) = Vector(-2600.0f, 69,60719f, 3375,377f);
	*(&iLocal_4 + 4352[33] + 12) = Vector(0.0f, 224,5567f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Wagon01Goto", Vector(-2600.0f, 69,60719f, 3375,377f), Vector(0.0f, 224,5567f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[43]) = Vector(-2570,093f, 66,26746f, 3310,743f);
	*(&iLocal_4 + 4352[43] + 12) = Vector(0.0f, 317,5318f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "StreamWagon03", Vector(-2570,093f, 66,26746f, 3310,743f), Vector(0.0f, 317,5318f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[53]) = Vector(-2634,547f, 71,28917f, 3359,726f);
	*(&iLocal_4 + 4352[53] + 12) = Vector(0.0f, 441,0409f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Wagon03Goto", Vector(-2634,547f, 71,28917f, 3359,726f), Vector(0.0f, 441,0409f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[63]) = Vector(-2691,105f, 65,11156f, 3315,55f);
	*(&iLocal_4 + 4352[63] + 12) = Vector(0.0f, 409,0646f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HorsesGoto04_01", Vector(-2691,105f, 65,11156f, 3315,55f), Vector(0.0f, 409,0646f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_4 + 4344);
	*(&iLocal_4 + 4352[73]) = Vector(-2576.0f, 70,27451f, 3512.0f);
	*(&iLocal_4 + 4352[73] + 12) = Vector(0.0f, 409,0646f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HorsesGoto04_02", Vector(-2576.0f, 70,27451f, 3512.0f), Vector(0.0f, 409,0646f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_4 + 4344);
	*(&iLocal_4 + 4552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2656.0f, 67,26275f, 3424,644f), Vector(0.0f, -41,17199f, 0.0f));
	*(&iLocal_4 + 4560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2650,094f, 72,63702f, 3417,571f), Vector(0.0f, -48,11462f, 0.0f));
	*(&iLocal_4 + 4568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand_nospawn", "smoking_stand_nospawn", Vector(-2658,571f, 67,26273f, 3421,429f), Vector(0.0f, -169,1498f, 0.0f));
	*(&iLocal_4 + 4576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_lookdistance_merchant", "stand_lookdistance_w_any", Vector(-2633,2f, 67,26275f, 3408.0f), Vector(0.0f, -38,31894f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 4576), 0);
	*(&iLocal_4 + 4584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_wring_hand_merchant", "stand_wring_hands", Vector(-2687,214f, 67,26273f, 3504,786f), Vector(0.0f, 35,00843f, 0.0f));
	*(&iLocal_4 + 4592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "smoking_stand_seth", "smoking_stand_nospawn", Vector(-2657,979f, 67,26274f, 3429,115f), Vector(0.0f, -36,42729f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 4600) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "AllyFollowPath03_01");
	PushArrayP();
	*(&iLocal_4 + 4608) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_wagon02");
	PushArrayP();
	*(&iLocal_4 + 4616) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_wagon03");
	PushArrayP();
	*(&iLocal_4 + 4624) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_wagon04");
	PushArrayP();
	*(&iLocal_4 + 4632) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_deputy01");
	PushArrayP();
	*(&iLocal_4 + 4640) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_marshal01");
	PushArrayP();
	*(&iLocal_4 + 4648) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PathSpawnPoint01");
	PushArrayP();
	*(&iLocal_4 + 4656) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PathSpawnPoint03");
	PushArrayP();
	*(&iLocal_4 + 4664) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PathSpawnPoint04");
	PushArrayP();
	*(&iLocal_4 + 4672) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Calvary04ApproachCenter");
	PushArrayP();
	*(&iLocal_4 + 4680) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Calvary04ApproachCloseLeft");
	PushArrayP();
	*(&iLocal_4 + 4688) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "GatlingStagecoachApproachLeft");
	PushArrayP();
	*(&iLocal_4 + 4696) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "GatlingStagecoachApproachRight");
	PushArrayP();
	*(&iLocal_4 + 4704) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "GatlingStagecoachApproachCenter");
	PushArrayP();
	*(&iLocal_4 + 4712) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Calvary04ApproachLeft");
	PushArrayP();
	*(&iLocal_4 + 4720) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Foot04ApproachCenter");
	PushArrayP();
	*(&iLocal_4 + 4728) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "DeputyHighGround");
	PushArrayP();
	*(&iLocal_4 + 4736) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Calvary04ApproachSwoopLeft");
	PushArrayP();
	*(&iLocal_4 + 4744) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Calvary04ApproachSwoopRight");
	PushArrayP();
	*(&iLocal_4 + 4752) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "AllyFollowPath03_02");
	PushArrayP();
	*(&iLocal_4 + 4760) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PathSpawnPoint05");
	PushArrayP();
	*(&iLocal_4 + 4768) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PlayerStairs03");
	PushArrayP();
	*(&iLocal_4 + 4776) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "AllyFollowPath03_GraveRobber");
	PushArrayP();
	*(&iLocal_4 + 4784) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "Deputy02Path03");
	PushArrayP();
	*(&iLocal_4 + 4792) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "MarshalPathCover03");
	PushArrayP();
	*(&iLocal_4 + 4800) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "CoverAlly03b_SethDep02");
	PushArrayP();
	*(&iLocal_4 + 4808) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "MarshalPathUpstairs03");
	*(&iLocal_4 + 4816) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x0", "p_gen_crateTnt01x", Vector(-2621,969f, 67,20763f, 3399,589f), Vector(0.0f, 114,5182f, 0.0f), 1);
	*(&iLocal_4 + 4824) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x1", "p_gen_crateTnt01x", Vector(-2628.0f, 68,26836f, 3391,563f), Vector(0.0f, 147,6549f, 0.0f), 1);
	*(&iLocal_4 + 4832) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x2", "p_gen_crateTnt01x", Vector(-2615,063f, 68,39067f, 3388,36f), Vector(0.0f, 45,26032f, 0.0f), 1);
	*(&iLocal_4 + 4840) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "powderKeg01x0", "p_gen_powderKeg01x", Vector(-2657,646f, 71,64135f, 3410,711f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_4 + 4848) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "powderKeg01x1", "p_gen_powderKeg01x", Vector(-2655,854f, 71,67629f, 3443,507f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_4 + 4856) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x3", "p_gen_crateTnt01x", Vector(-2657,389f, 67,34171f, 3446,675f), Vector(0.0f, -29,92066f, 0.0f), 1);
	*(&iLocal_4 + 4864) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lantern05x0", "p_gen_lantern05x", Vector(-2676,955f, 69,33235f, 3441,989f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_4 + 4872) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lantern04x0", "p_gen_lantern04x", Vector(-2665,327f, 72,45562f, 3419,787f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_4 + 4880) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x4", "p_gen_crateTnt01x", Vector(-2690,548f, 71,66881f, 3424,265f), Vector(0.0f, 153,2777f, 0.0f), 1);
	*(&iLocal_4 + 4888) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "lantern05x1", "p_gen_lantern05x", Vector(-2701,801f, 76,81946f, 3443,833f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_4 + 4896) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x5", "p_gen_crateTnt01x", Vector(-2713,563f, 67,26274f, 3486,025f), Vector(0.0f, 404,6089f, 0.0f), 1);
	*(&iLocal_4 + 4904) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateTnt01x6", "p_gen_crateTnt01x", Vector(-2716,75f, 67,26141f, 3486,991f), Vector(0.0f, -48,7275f, 0.0f), 1);
	*(&iLocal_4 + 4912) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "powderKeg01x2", "p_gen_powderKeg01x", Vector(-2699,391f, 67,77728f, 3469,06f), Vector(0.0f, -83,23221f, 0.0f), 1);
	return;
}

bool Function_583() //Position: 0x26C1E / 158750
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_593(0))
		{
			return 0;
		}
		if (!Function_592())
		{
			return 0;
		}
		if (!Function_318(&iLocal_1249))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1392))
		{
			bLocal_1392 = Function_584(2, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1392, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1731))
		{
			bLocal_1731 = Function_584(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1731, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1733))
		{
			bLocal_1733 = Function_584(4, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1733, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_584(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x26CD5 / 158933
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
		Function_581(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_591(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_587(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_586(&bVar1, 0, 0, 0, 0);
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
		Function_585(&bVar1, 0);
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

void Function_585(var uParam0, bool bParam1) //Position: 0x27215 / 160277
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_586(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x27237 / 160311
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

var Function_587(int iParam0, int iParam1) //Position: 0x27298 / 160408
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_399(iParam0))
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
						Function_588(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_588(var uParam0, int iParam1) //Position: 0x27326 / 160550
{
	Function_590(&uParam0);
	Function_589(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_589(int iParam0) //Position: 0x27352 / 160594
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_590(int iParam0) //Position: 0x27378 / 160632
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

var Function_591(int iParam0, var uParam1) //Position: 0x2744E / 160846
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

bool Function_592() //Position: 0x274F4 / 161012
{
	Function_449(&iLocal_4 + 8, 588, 2, 0);
	Function_449(&iLocal_4 + 8, 590, 2, 0);
	Function_449(&iLocal_4 + 8, 592, 2, 0);
	Function_449(&iLocal_4 + 8, 976, 2, 0);
	Function_449(&iLocal_4 + 8, 977, 2, 0);
	Function_449(&iLocal_4 + 8, 980, 2, 0);
	Function_449(&iLocal_4 + 8, 981, 2, 0);
	Function_324(&iLocal_4 + 8, "p_gen_crateTnt01x", 0, 0);
	Function_324(&iLocal_4 + 8, "p_gen_powderKeg01x", 0, 0);
	Function_324(&iLocal_4 + 8, "p_gen_lantern05x", 0, 0);
	Function_324(&iLocal_4 + 8, "p_gen_lantern04x", 0, 0);
	Function_324(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_324(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_324(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_324(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_wring_hands", 1, 0);
	if (Function_318(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

bool Function_593(bool bParam0) //Position: 0x27700 / 161536
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

bool Function_594() //Position: 0x27730 / 161584
{
	Function_284(&iLocal_1375, 0);
	switch (iLocal_1375)
	{
		case 0x000003E8:
			if (bLocal_1387 != 99 && (Function_283(&Local_1237) || Local_1237.f_40 < 1))
			{
				iLocal_1375 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FORT_01/FORT_01"))
			{
				LOG_ERROR("FORT_01/FORT_01 does not exist! No play...");
				iLocal_1375 = 1106;
				return 0;
			}
			Function_359(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_357(StackVal, &uLocal_1235, (&Global_6667[2428] + 88), &iLocal_1375 + 32, 1, 0, 0, 0, 1, 1);
			Function_365();
			Global_99147 = 1;
			Function_224(&iLocal_1375 + 4);
			iLocal_1375 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_278(&iLocal_1375 + 4) <= 50.0f)
			{
				LOG_ERROR("\FORT_01/FORT_01 either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_1375 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_1375 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_592();
			Function_318(&iLocal_1249);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1375 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_1375 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_1375 + 32);
				DESTROY_VOLUME(&iLocal_1375 + 32);
				Function_313(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				iLocal_1375 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				iLocal_1375 = 1104;
			}
			break;
		
		case 0x00000452:
			iLocal_1375 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_595() //Position: 0x2796A / 162154
{
	Function_449(&iLocal_1249, 1198, 2, 0);
	Function_449(&iLocal_1249, 1182, 2, 0);
	Function_324(&iLocal_1249, "close_wagon", 5, 0);
	Function_324(&iLocal_1249, "custom/close_wagon", 8, 0);
	Function_324(&iLocal_1249, "one_handed_wave", 5, 0);
	Function_324(&iLocal_1249, "custom/one_handed_wave", 8, 0);
	Function_324(&iLocal_1249, "p_gen_crateTnt01x", 0, 0);
	Function_324(&iLocal_1249, "p_gen_gatlingGun01x", 0, 0);
	Function_324(&iLocal_1249, "stand_rowdy", 5, 0);
	Function_324(&iLocal_1249, "custom/stand_rowdy", 8, 0);
	Function_324(&iLocal_1249, "one_handed_wave", 5, 0);
	Function_324(&iLocal_1249, "custom/one_handed_wave", 8, 0);
	Function_324(&iLocal_1249, "$/content/scripting/gringo/simplegringo/close_wagon", 1, 0);
	Function_324(&iLocal_1249, "Fort01", 10, 0);
	Function_449(&iLocal_1249, 397, 3, 0);
	Function_449(&iLocal_1249, 398, 3, 0);
	Function_449(&iLocal_1249, 399, 3, 0);
	Function_449(&iLocal_1249, 400, 3, 0);
	Function_449(&iLocal_1249, 401, 3, 0);
	Function_449(&iLocal_1249, 402, 3, 0);
	Function_449(&iLocal_1249, 403, 3, 0);
	Function_449(&iLocal_1249, 404, 3, 0);
	Function_449(&iLocal_1249, 405, 3, 0);
	Function_449(&iLocal_1249, 546, 3, 0);
	Function_324(&iLocal_1249, "stagecoach003_fragment01x", 0, 0);
	Function_324(&iLocal_1249, "stagecoach003_fragment02x", 0, 0);
	Function_324(&iLocal_1249, "stagecoach003_fragment06x", 0, 0);
	Function_324(&iLocal_1249, "stagecoach003_fragment08x", 0, 0);
	Function_324(&iLocal_1249, "stagecoach003_fragment09x", 0, 0);
	Function_324(&iLocal_1249, "stagecoach003_fragment10x", 0, 0);
	return;
}

void Function_596(int iParam0, bool bParam1) //Position: 0x27C54 / 162900
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_609(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_283(&iParam0))
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
	if (!Function_283(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_211();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_243();
	Function_274();
	Function_232("");
	Function_608(0);
	Function_607();
	Function_205();
	Function_204();
	ENABLE_JOURNAL_REPLAY(0);
	Function_606();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_599(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_369(0, 0x40400000);
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
	Function_598(13);
	Function_598(14);
	Function_598(25);
	Function_598(24);
	Function_598(12);
	Function_598(27);
	Function_598(26);
	Function_598(15);
	Function_597();
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

void Function_597() //Position: 0x28095 / 163989
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

void Function_598(bool bParam0) //Position: 0x2811A / 164122
{
	if (bParam0 >= 4294967295 || bParam0 <= 32)
	{
		return;
	}
	Global_47080[bParam0] = 0;
	Global_47147 = 1;
	return;
}

var Function_599(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x2813A / 164154
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
		Function_605(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_604())
		{
			return "";
		}
	}
	if (!Function_602())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_198();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_239(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_239(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_239(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_239(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_601(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_601(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_74(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
		Function_600(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_600(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x28497 / 165015
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

var Function_601(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x284E1 / 165089
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

bool Function_602() //Position: 0x28581 / 165249
{
	if (Function_603() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_603() //Position: 0x28597 / 165271
{
	return Global_21369.f_244;
}

bool Function_604() //Position: 0x285A2 / 165282
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_605(var uParam0, bool bParam1, bool bParam2) //Position: 0x285C2 / 165314
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

void Function_606() //Position: 0x285F1 / 165361
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

void Function_607() //Position: 0x28637 / 165431
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_608(int iParam0) //Position: 0x2864D / 165453
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

void Function_609(int iParam0, int iParam1) //Position: 0x28686 / 165510
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
			Function_610(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_610(struct<113> Param0) //Position: 0x2870D / 165645
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

void Function_611() //Position: 0x2876B / 165739
{
	return;
}

bool Function_612(int iParam0) //Position: 0x28771 / 165745
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_613() //Position: 0x2878F / 165775
{
	if (bLocal_1387 != 2 && iLocal_1388 != 15)
	{
		Function_476();
	}
	Function_615(&bLocal_1392, "Fort01_gunOnMerchant");
	Function_615(&bLocal_1733, "Fort01_gunOnMarshal");
	Function_615(&iLocal_4 + 752[02], "Fort01_gunOnDeputy1");
	Function_615(&iLocal_4 + 752[12], "Fort01_gunOnDeputy2");
	Function_614(&bLocal_1392, "Fort01_assaultDickens_Fort");
	Function_614(&bLocal_1733, "Fort01_assaultMarshal_combat");
	Function_614(&bLocal_1731, "Fort01_assaultSeth_combat");
	Function_614(&iLocal_4 + 752[02], "Fort01_assaultDeputy1_combat");
	Function_614(&iLocal_4 + 752[12], "Fort01_assaultDeputy1_combat");
	return;
}

void Function_614(int iParam0, int iParam1) //Position: 0x288E9 / 166121
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!Function_483(2, bLocal_1730))
		{
			if (!DECOR_CHECK_EXIST(&uLocal_1235, &iParam1))
			{
				if (GET_LAST_ATTACK_TARGET(&Global_54076) == &iParam0)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1392, &iParam1, &iParam1, 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_1235, &iParam1, GET_CURRENT_GAME_TIME());
					CLEAR_LAST_HIT(&Global_54076);
					Function_479(2);
					bLocal_1730 = Function_505();
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, &iParam1)) < 20.0f)
		{
			DECOR_REMOVE(&uLocal_1235, &iParam1);
			Function_478(2);
			bLocal_1730 = Function_505();
		}
	}
	return;
}

void Function_615(int iParam0, int iParam1) //Position: 0x28986 / 166278
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!Function_483(1, bLocal_1730))
		{
			if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &iParam0)
			{
				if (!DECOR_CHECK_EXIST(&uLocal_1235, &iParam1))
				{
					DECOR_SET_FLOAT(&uLocal_1235, &iParam1, GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, &iParam1)) < 0,5f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1392, &iParam1, &iParam1, 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_1235, &iParam1, -1.0f);
					Function_479(1);
					bLocal_1730 = Function_505();
				}
			}
		}
		else if (DECOR_CHECK_EXIST(&uLocal_1235, &iParam1) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1235, &iParam1)) < 15.0f)
		{
			DECOR_REMOVE(&uLocal_1235, &iParam1);
			Function_478(1);
			bLocal_1730 = Function_505();
		}
	}
	return;
}

bool Function_616(struct<25> Param0) //Position: 0x28A4E / 166478
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
			Function_617(&Param0, 1);
			return 1;
		}
	}
	Function_617(&Param0, 0);
	return 0;
}

void Function_617(struct<25> Param0) //Position: 0x28ADA / 166618
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

bool Function_618(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x28B05 / 166661
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
		Function_617(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_637(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_636(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_636(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_622(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_617(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_621(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_620(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_621(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_619(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_232(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_620(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_617(&Param2, 0);
	return 0;
}

void Function_619(char* cParam0) //Position: 0x28F1B / 167707
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

void Function_620(struct<25> Param0) //Position: 0x2900F / 167951
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

void Function_621(bool bParam0) //Position: 0x29087 / 168071
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_622(struct<57> Param0) //Position: 0x290AB / 168107
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
			return Function_633(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_626(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_633(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_623(&Param0, bVar2);
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
						bVar2 = Function_633(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_623(&Param0, bVar2);
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

var Function_623(int iParam0, bool bParam1) //Position: 0x2921C / 168476
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
				bParam1 = Function_625(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_624(16);
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
				bParam1 = Function_625(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_624(256);
			}
		}
	}
	return bParam1;
}

bool Function_624(int iParam0) //Position: 0x29358 / 168792
{
	return 2 | iParam0;
}

int Function_625(int iParam0) //Position: 0x29362 / 168802
{
	return 4 | iParam0;
}

int Function_626(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2936C / 168812
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
				iParam3 = Function_632(&iParam0, &iParam1, bParam4);
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
			return Function_624(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_627(&iParam0, &iParam1, 0, bParam4);
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
			return Function_624(16);
		}
	}
	return 0;
}

int Function_627(int iParam0, vector3 vParam1) //Position: 0x29427 / 168999
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_631(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_630(iVar0, 3, 1, bParam3))
			{
				if (!Function_636(&iParam0, 8, 1))
				{
					return Function_629(64, 1024, bParam2);
				}
			}
			return Function_628(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_630(iVar0, 2, 1, bParam3))
			{
				if (!Function_636(&iParam0, 32, 1))
				{
					return Function_629(64, 1024, bParam2);
				}
			}
			return Function_628(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_630(iVar0, 1, 1, bParam3))
			{
				if (!Function_636(&iParam0, 64, 1))
				{
					return Function_629(64, 1024, bParam2);
				}
			}
			return Function_628(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_630(iVar0, 3, 1, bParam3))
			{
				if (!Function_636(&iParam0, 128, 1))
				{
					return Function_629(64, 1024, bParam2);
				}
			}
			return Function_628(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_630(iVar0, 1, 1, bParam3))
			{
				if (!Function_636(&iParam0, 1024, 1))
				{
					return Function_629(64, 1024, bParam2);
				}
			}
			return Function_628(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_630(iVar0, 1, 1, bParam3))
			{
				if (!Function_636(&iParam0, 1024, 1))
				{
					return Function_629(64, 1024, bParam2);
				}
			}
			return Function_628(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_628(int iParam0, int iParam1, bool bParam2) //Position: 0x295EF / 169455
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_629(int iParam0, int iParam1, bool bParam2) //Position: 0x29604 / 169476
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_630(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x29619 / 169497
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_631(int iParam0) //Position: 0x29636 / 169526
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

int Function_632(var uParam0, vector3 vParam1) //Position: 0x296A9 / 169641
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_631(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_630(iVar0, 3, 1, bParam2))
			{
				if (!Function_636(&uParam0, 8, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000009:
			if (Function_630(iVar0, 3, 1, bParam2))
			{
				if (!Function_636(&uParam0, 8, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x0000006E:
			if (Function_630(iVar0, 2, 1, bParam2))
			{
				if (!Function_636(&uParam0, 16, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x0000005B:
			if (Function_630(iVar0, 2, 1, bParam2))
			{
				if (!Function_636(&uParam0, 32, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000031:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&uParam0, 64, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000007:
			if (Function_630(iVar0, 3, 1, bParam2))
			{
				if (!Function_636(&uParam0, 128, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000008:
			if (Function_630(iVar0, 2, 1, bParam2))
			{
				if (!Function_636(&uParam0, 256, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000014:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&uParam0, 512, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000018:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&uParam0, 512, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000057:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&uParam0, 1024, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000058:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&uParam0, 1024, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_633(struct<65> Param0) //Position: 0x298D2 / 170194
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
						return Function_632(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_636(&Param0, 2, 1))
					{
						return Function_625(8);
					}
					return Function_624(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_636(&Param0, 4, 1))
					{
						return Function_625(16);
					}
					return Function_624(16);
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
							return Function_627(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_636(&Param0, 2, 1))
						{
							return Function_625(128);
						}
						return Function_624(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_636(&Param0, 4, 1))
						{
							return Function_625(256);
						}
						return Function_624(256);
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
						return Function_627(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_636(&Param0, 2, 1))
					{
						return Function_625(8);
					}
					return Function_624(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_636(&Param0, 4, 1))
					{
						return Function_625(16);
					}
					return Function_624(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_635(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_636(&Param0, 2, 1))
					{
						return Function_625(8);
					}
					return Function_624(8);
				}
				if (!Function_636(&Param0, 4, 1))
				{
					return Function_625(16);
				}
				return Function_624(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_627(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_634(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_624(128);
							}
							if (!Function_636(&Param0, 2, 1))
							{
								return Function_625(8);
							}
							return Function_624(8);
						}
						if (iParam4 == 2)
						{
							if (Function_634(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_624(256);
							}
							if (!Function_636(&Param0, 4, 1))
							{
								return Function_625(16);
							}
							return Function_624(16);
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

bool Function_634(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x29BB8 / 170936
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

int Function_635(int iParam0, vector3 vParam1) //Position: 0x29C86 / 171142
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_631(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_630(iVar0, 2, 1, bParam2))
			{
				if (!Function_636(&iParam0, 16, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x0000005B:
			if (Function_630(iVar0, 2, 1, bParam2))
			{
				if (!Function_636(&iParam0, 32, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000057:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&iParam0, 1024, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		case 0x00000058:
			if (Function_630(iVar0, 1, 1, bParam2))
			{
				if (!Function_636(&iParam0, 1024, 1))
				{
					return Function_625(64);
				}
			}
			return Function_624(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_636(struct<69> Param0) //Position: 0x29DA8 / 171432
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

int Function_637(int iParam0) //Position: 0x29DD2 / 171474
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

void Function_638() //Position: 0x29E08 / 171528
{
	int iVar0;
	var uVar1;
	
	if (!DECOR_CHECK_EXIST(&uLocal_1235, "destroyedcrate"))
	{
		if (Function_363(Global_46838[1]))
		{
			iVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(-2697,192f, 67,26273f, 3501,675f), 5.0f, "crateweaponsbreak", 1);
			if (IS_PHYSINST_VALID(&iVar0))
			{
				uVar1 = GET_OBJECT_FROM_PHYSINST(&iVar0);
				if (IS_OBJECT_VALID(&uVar1))
				{
					DESTROY_OBJECT(&uVar1);
					DECOR_SET_BOOL(&uLocal_1235, "destroyedcrate", 1);
				}
			}
		}
	}
	return;
}

void Function_639(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x29E9D / 171677
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

