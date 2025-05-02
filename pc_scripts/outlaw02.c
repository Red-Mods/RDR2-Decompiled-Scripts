//Decompiled with MagicRDR v1.0
//Function Count : 722
//Statics Count : 1091
//Natives Count : 764
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 3;
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
	var uLocal_20 = 1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 14;
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
	var uLocal_84 = 11;
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
	var uLocal_130 = 5;
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
	var uLocal_152 = 2;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 2;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 1;
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
	var uLocal_210 = 3;
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
	var uLocal_226 = 5;
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
	var uLocal_240 = 5;
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
	var uLocal_254 = 12;
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
	var uLocal_282 = 16;
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
	var uLocal_318 = 18;
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
	var uLocal_358 = 5;
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
	var uLocal_374 = 4;
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
	var uLocal_386 = 16;
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
	var uLocal_422 = 3;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 3;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 13;
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
	var uLocal_472 = 11;
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
	var uLocal_498 = 5;
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
	var uLocal_512 = 33;
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
	var uLocal_582 = 7;
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
	int iLocal_622 = 0;
	var uLocal_623 = 0;
	struct<6> Local_624 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	int iLocal_636 = 11;
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
	int iLocal_682 = 0;
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
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	bool bLocal_697 = false;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	int iLocal_700 = 0;
	var uLocal_701 = 0;
	int iLocal_702 = 0;
	var uLocal_703 = 0;
	int iLocal_704 = 0;
	var uLocal_705 = 0;
	bool bLocal_706 = false;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	bool bLocal_710 = false;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	bool bLocal_714 = false;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	bool bLocal_718 = false;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	int iLocal_722[5] = { 0, 0, 0, 0, 0 };
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	bool bLocal_734 = false;
	bool bLocal_735 = false;
	bool bLocal_736 = false;
	var uLocal_737 = 0;
	var uLocal_738 = 13;
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
	struct<15> Local_792[4];
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
	var uLocal_872 = 5;
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
	var uLocal_902 = 5;
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
	int iLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	struct<2> Local_938 = { 0, 0 } ;
	var uLocal_940 = 0;
	struct<2> Local_941 = { 0, 0 } ;
	var uLocal_943 = 0;
	struct<2> Local_944 = { 0, 0 } ;
	var uLocal_946 = 0;
	struct<2> Local_947 = { 0, 0 } ;
	var uLocal_949 = 0;
	bool bLocal_950 = false;
	bool bLocal_951 = false;
	bool bLocal_952 = false;
	bool bLocal_953 = false;
	int iLocal_954 = 0;
	var uLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	struct<2> Local_965 = { 0, 0 } ;
	var uLocal_967 = 0;
	struct<2> Local_968 = { 0, 0 } ;
	var uLocal_970 = 0;
	float fLocal_971 = 0.0f;
	float fLocal_972 = 0.0f;
	float fLocal_973 = 0.0f;
	int iLocal_974 = 0;
	var uLocal_975 = 0;
	bool bLocal_976 = false;
	int iLocal_977 = 0;
	bool bLocal_978 = false;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	bool bLocal_981 = false;
	bool bLocal_982 = false;
	bool bLocal_983 = false;
	var uLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	var uLocal_989 = 0;
	bool bLocal_990 = false;
	bool bLocal_991 = false;
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
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	int iLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	struct<5> Local_1014[5];
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
	int iLocal_1066 = 0;
	int iLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	int iLocal_1071 = 0;
	int iLocal_1072 = 0;
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
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
	iLocal_987 = 4294967295;
	iLocal_988 = "";
	iLocal_1012 = 0;
	iLocal_1013 = 0;
	iLocal_1066 = 0;
	iLocal_1067 = 0;
	iLocal_1068 = 0;
	uLocal_1075 = "";
	Local_624 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_694 = 99;
	iLocal_695 = 6;
	iLocal_682 = 1000;
	while (Function_261())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x61 / 97
{
	Function_230();
	Function_227(0, 0, 0, 1, 1);
	Function_226(&iLocal_622);
	Function_226(&iLocal_4);
	Function_196(bLocal_735, 1, bLocal_735, 0, 1, 1, 1, 1);
	Function_192(&iLocal_636);
	Function_185();
	if (IS_ITERATOR_VALID(&uLocal_698))
	{
		DESTROY_ITERATOR(&uLocal_698);
	}
	RELEASE_LAYOUT_REF(&iLocal_622);
	if (bLocal_734)
	{
		Function_175(Global_46796[3], &Global_11284, &Global_13196, 1);
		Function_26(Local_624, 1, 1, 1, 0);
	}
	else if (bLocal_735)
	{
		Function_22(Local_624);
	}
	else
	{
		Function_2(Local_624);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xEB / 235
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x10C / 268
{
	(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x129 / 297
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x14C / 332
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x163 / 355
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

void Function_7(int iParam0) //Position: 0x205 / 517
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x228 / 552
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

void Function_9() //Position: 0x272 / 626
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x28B / 651
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

void Function_11(var uParam0, bool bParam1) //Position: 0x2DE / 734
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

struct<16> Function_12(int iParam0) //Position: 0x408 / 1032
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

bool Function_13() //Position: 0x442 / 1090
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x45D / 1117
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x46A / 1130
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x48A / 1162
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x4A1 / 1185
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x4BC / 1212
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x703 / 1795
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x72F / 1839
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

bool Function_21(int iParam0) //Position: 0x753 / 1875
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x768 / 1896
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x786 / 1926
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

struct<16> Function_24(int iParam0) //Position: 0x82C / 2092
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

struct<24> Function_25(char* cParam0) //Position: 0x86B / 2155
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAC1 / 2753
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

void Function_27() //Position: 0xBB5 / 2997
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

int Function_28(int iParam0, bool bParam1) //Position: 0xBE7 / 3047
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

int Function_29(int iParam0) //Position: 0xC25 / 3109
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC3F / 3135
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC55 / 3157
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF52 / 3922
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

void Function_33(char* cParam0) //Position: 0xFC7 / 4039
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1001 / 4097
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

bool Function_35(var uParam0, int iParam1) //Position: 0x107D / 4221
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1090 / 4240
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

int Function_37(int iParam0) //Position: 0x1131 / 4401
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x116E / 4462
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1184 / 4484
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x13E2 / 5090
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1420 / 5152
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

void Function_42(bool bParam0) //Position: 0x145F / 5215
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

void Function_43() //Position: 0x14B4 / 5300
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

void Function_44() //Position: 0x14FF / 5375
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

void Function_45() //Position: 0x1605 / 5637
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

void Function_46() //Position: 0x1638 / 5688
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

void Function_47() //Position: 0x17CB / 6091
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

void Function_48() //Position: 0x1984 / 6532
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1992 / 6546
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

var Function_50() //Position: 0x1BAF / 7087
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1BC4 / 7108
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C6B / 7275
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F07 / 7943
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

var Function_54() //Position: 0x2545 / 9541
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x254E / 9550
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x255F / 9567
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

struct<32> Function_57(char* cParam0) //Position: 0x2656 / 9814
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2671 / 9841
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x26D8 / 9944
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x26EA / 9962
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x26FC / 9980
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

int Function_62(int iParam0) //Position: 0x2830 / 10288
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x283F / 10303
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2878 / 10360
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x28B5 / 10421
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A4F / 10831
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

int Function_67(bool bParam0) //Position: 0x2C93 / 11411
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2CD4 / 11476
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

struct<8> Function_69() //Position: 0x2D5D / 11613
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

struct<8> Function_70() //Position: 0x2DF4 / 11764
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

void Function_71() //Position: 0x2E73 / 11891
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EB0 / 11952
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

void Function_73() //Position: 0x30BC / 12476
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

bool Function_74(char* cParam0) //Position: 0x3173 / 12659
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x318B / 12683
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

struct<8> Function_76() //Position: 0x3283 / 12931
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x328D / 12941
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x329E / 12958
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x32B4 / 12980
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3380 / 13184
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x339D / 13213
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

bool Function_82(int iParam0) //Position: 0x3BC9 / 15305
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C04 / 15364
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3C13 / 15379
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

bool Function_85(int iParam0) //Position: 0x40F1 / 16625
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x4107 / 16647
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x4126 / 16678
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4140 / 16704
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41AA / 16810
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

void Function_90(int iParam0) //Position: 0x43D2 / 17362
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

void Function_91() //Position: 0x4470 / 17520
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

void Function_92() //Position: 0x45D2 / 17874
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4652 / 18002
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49A9 / 18857
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

int Function_95(int iParam0) //Position: 0x4A31 / 18993
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A4B / 19019
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A76 / 19062
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4AA4 / 19108
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D40 / 19776
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F14 / 20244
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

int Function_101(int iParam0, char* cParam1) //Position: 0x517E / 20862
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

int Function_102() //Position: 0x530E / 21262
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

void Function_103() //Position: 0x53AF / 21423
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

void Function_104(int iParam0) //Position: 0x546D / 21613
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

var Function_105(int iParam0) //Position: 0x54D3 / 21715
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5562 / 21858
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

var Function_107(int iParam0, int iParam1) //Position: 0x570E / 22286
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

void Function_108() //Position: 0x5753 / 22355
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5769 / 22377
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57A9 / 22441
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x57E9 / 22505
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x57F8 / 22520
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

int Function_113(int iParam0) //Position: 0x59C0 / 22976
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

var Function_114() //Position: 0x5A55 / 23125
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5A7A / 23162
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F49 / 24393
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

var Function_117(int iParam0) //Position: 0x6270 / 25200
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6313 / 25363
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6510 / 25872
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66BB / 26299
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x678D / 26509
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

void Function_122(int iParam0) //Position: 0x70A8 / 28840
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7225 / 29221
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7330 / 29488
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x735C / 29532
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

var Function_126(vector3 vParam0) //Position: 0x73B3 / 29619
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

void Function_127(var uParam0, int iParam1) //Position: 0x7401 / 29697
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x745C / 29788
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

void Function_129() //Position: 0x75FD / 30205
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7603 / 30211
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76B2 / 30386
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7707 / 30471
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x771D / 30493
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

bool Function_134(int iParam0, int iParam1) //Position: 0x776E / 30574
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

void Function_135(var uParam0, int iParam1) //Position: 0x779B / 30619
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77AC / 30636
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x77C6 / 30662
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x77D7 / 30679
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

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7933 / 31027
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

bool Function_140() //Position: 0x79BE / 31166
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x79EB / 31211
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

int Function_142(int iParam0) //Position: 0x7B9B / 31643
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7BF2 / 31730
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

var Function_144(int iParam0) //Position: 0x7C17 / 31767
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7C6D / 31853
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

bool Function_146(bool bParam0) //Position: 0x7CCC / 31948
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7CD8 / 31960
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7CF4 / 31988
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

bool Function_149() //Position: 0x7D46 / 32070
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7D76 / 32118
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

int Function_151(int iParam0, int iParam1) //Position: 0x7DEB / 32235
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E48 / 32328
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

int Function_153(int iParam0, int iParam1) //Position: 0x7EBB / 32443
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F16 / 32534
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x81D7 / 33239
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8476 / 33910
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

void Function_157() //Position: 0x84E5 / 34021
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

int Function_158(int iParam0, int iParam1) //Position: 0x8565 / 34149
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

int Function_159(int iParam0) //Position: 0x91C8 / 37320
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x91DD / 37341
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

void Function_161(var uParam0, int iParam1) //Position: 0x922C / 37420
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9284 / 37508
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

bool Function_163(int iParam0, int iParam1) //Position: 0x92F7 / 37623
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x930B / 37643
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

var Function_165(int iParam0) //Position: 0x93FC / 37884
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9454 / 37972
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9471 / 38001
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

bool Function_168(bool bParam0) //Position: 0x94CB / 38091
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x94DD / 38109
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

void Function_170(struct<185> Param0) //Position: 0x9511 / 38161
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

void Function_171(bool bParam0, int iParam1, int iParam2) //Position: 0x957C / 38268
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
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &iParam1, &iParam2);
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9666 / 38502
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

void Function_173() //Position: 0x97E5 / 38885
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x97F1 / 38897
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

void Function_175(int iParam0, struct<2>[] Param1, vector3[] vParam2, var uParam3) //Position: 0x9837 / 38967
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	Function_137(&(Global_43791[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= Param1)
	{
		bVar1 = iVar0;
		if (Function_184(&(Param1[iVar02]), 1))
		{
			Function_181(&Param1, &vParam2, bVar1, 0);
		}
		Function_179(&Param1, &vParam2, bVar1, 0);
		Function_176(&(Param1[iVar02]), &(vParam2[iVar03]), 0);
		uVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&uVar2, &uParam3, 0, false, 0);
		*(&Param1[iVar02] + 8) = &uVar2;
		iVar0++;
	}
}

void Function_176(bool bParam0, int iParam1, int iParam2) //Position: 0x98BB / 39099
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&iVar0, Function_178(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&iVar0, &iParam2, 0, false, 0);
	}
	*(&bParam0 + 8) = &iVar0;
	Function_177(&bParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

void Function_177(int iParam0, int iParam1) //Position: 0x991B / 39195
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_178(int iParam0) //Position: 0x992C / 39212
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

void Function_179(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x9960 / 39264
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_177(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_178(Global_43790), Function_180(Global_43790), false, 0);
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
		Function_177(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_178(Global_43790), Function_180(Global_43790), false, 0);
	}
}

int Function_180(int iParam0) //Position: 0x9AC6 / 39622
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

void Function_181(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x9AF1 / 39665
{
	int iVar0;
	
	iVar0 = uParam2;
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
		Function_179(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_182(int iParam0) //Position: 0x9B99 / 39833
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

void Function_183(var uParam0, int iParam1) //Position: 0x9C42 / 40002
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_184(int iParam0, int iParam1) //Position: 0x9C5C / 40028
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185() //Position: 0x9C79 / 40057
{
	Function_191();
	Function_190();
	Function_189();
	Function_188();
	Function_187();
	Function_186();
	return;
}

void Function_186() //Position: 0x9C91 / 40081
{
	Function_192(&iLocal_4 + 592);
	return;
}

void Function_187() //Position: 0x9C9F / 40095
{
	Function_192(&iLocal_4 + 504);
	return;
}

void Function_188() //Position: 0x9CAD / 40109
{
	Function_192(&iLocal_4 + 320);
	return;
}

void Function_189() //Position: 0x9CBB / 40123
{
	Function_192(&iLocal_4 + 88);
	return;
}

void Function_190() //Position: 0x9CC8 / 40136
{
	Function_192(&iLocal_4 + 64);
	return;
}

void Function_191() //Position: 0x9CD5 / 40149
{
	Function_192(&iLocal_4 + 8);
	Function_192(&iLocal_4 + 64);
	Function_192(&iLocal_4 + 88);
	Function_192(&iLocal_4 + 320);
	Function_192(&iLocal_4 + 504);
	Function_192(&iLocal_4 + 592);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_192(int iParam0) //Position: 0x9D0E / 40206
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_193(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_193(struct<2>[] Param0, int iParam1) //Position: 0x9D36 / 40246
{
	if (Function_195(&(Param0[iParam12]), 4))
	{
		if (Function_195(&(Param0[iParam12]), 1))
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
			Function_194(&(Param0[iParam12]), 1);
			Function_194(&(Param0[iParam12]), 2);
			Function_194(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_194(struct<13> Param0) //Position: 0x9E81 / 40577
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_195(struct<13> Param0) //Position: 0x9E9E / 40606
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9EBC / 40636
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_225());
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
	Function_224();
	CLEAR_PRINTED_OBJECTIVE();
	Function_223();
	Function_221(0);
	Function_220();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_219();
	Function_218();
	Function_224();
	ENABLE_JOURNAL_REPLAY(1);
	Function_217(1);
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
		Function_216(&Global_54076);
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
	Function_213(Global_42825);
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
	Function_212();
	Function_211(1178687);
	Function_209(33039);
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

void Function_197() //Position: 0xA0C8 / 41160
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
		if (Function_200() > 3)
		{
			bVar0 *= 2;
		}
		Function_198(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA11F / 41247
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_199(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_199(bool bParam0) //Position: 0xA16F / 41327
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_200() //Position: 0xA198 / 41368
{
	return Global_21369.f_248;
}

void Function_201() //Position: 0xA1A3 / 41379
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

void Function_202(int iParam0, bool bParam1, int iParam2) //Position: 0xA1CD / 41421
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

void Function_203(int iParam0) //Position: 0xA2D9 / 41689
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

bool Function_204() //Position: 0xA358 / 41816
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

void Function_205() //Position: 0xA3C1 / 41921
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

void Function_206() //Position: 0xA3E7 / 41959
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

void Function_207(int iParam0) //Position: 0xA40D / 41997
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_208(int iParam0) //Position: 0xA42A / 42026
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_209(int iParam0) //Position: 0xA43D / 42045
{
	Function_210(&Global_43580, iParam0);
	return;
}

void Function_210(var uParam0, int iParam1) //Position: 0xA44B / 42059
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_211(bool bParam0) //Position: 0xA46A / 42090
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_212() //Position: 0xA497 / 42135
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

void Function_213(int iParam0) //Position: 0xA50F / 42255
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
		Function_214(78, 1, 1);
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

int Function_214(bool bParam0, bool bParam1, int iParam2) //Position: 0xA645 / 42565
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_215(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_215(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_215(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_215(bool bParam0) //Position: 0xA693 / 42643
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

void Function_216(int iParam0) //Position: 0xA787 / 42887
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

void Function_217(bool bParam0) //Position: 0xA80A / 43018
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

void Function_218() //Position: 0xA881 / 43137
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

void Function_219() //Position: 0xA8C5 / 43205
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

void Function_220() //Position: 0xA909 / 43273
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_221(int iParam0) //Position: 0xA91F / 43295
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_222())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_222() //Position: 0xA95F / 43359
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

void Function_223() //Position: 0xA984 / 43396
{
	Global_15862 = 0.0f;
	return;
}

void Function_224() //Position: 0xA98E / 43406
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

int Function_225() //Position: 0xA9B9 / 43449
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_226(int iParam0) //Position: 0xA9D6 / 43478
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

int Function_227(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xAA3E / 43582
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
		Function_229(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_228(&Global_15402[iParam014] + 8);
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

void Function_228(int iParam0) //Position: 0xAD80 / 44416
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

void Function_229(var uParam0) //Position: 0xADB3 / 44467
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_230() //Position: 0xADCA / 44490
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	Function_136(&(Global_43791[Global_46796[3]]), 384);
	Function_258(1);
	Function_251();
	Function_249();
	Function_247();
	Function_241();
	Function_239();
	Function_238();
	Function_234(0);
	if (IS_ACTOR_ALIVE(&iLocal_702))
	{
		Function_233(0);
	}
	if (IS_ACTOR_ALIVE(&Global_54076))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
		Function_231();
		if (DECOR_CHECK_EXIST(&Global_54076, "nmineRider"))
		{
			DECOR_REMOVE(&Global_54076, "nmineRider");
		}
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	}
	Function_217(1);
	if (IS_ACTOR_ALIVE(&iLocal_700))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	}
	return;
}

void Function_231() //Position: 0xAE92 / 44690
{
	Function_232();
	if (IS_OBJECT_VALID(&uLocal_999))
	{
		DESTROY_OBJECT(&uLocal_999);
	}
	return;
}

void Function_232() //Position: 0xAEAC / 44716
{
	if (IS_ATTACHMENT_VALID(&uLocal_995))
	{
		REMOVE_OBJECT_ATTACHMENT(&uLocal_995);
	}
	return;
}

void Function_233(bool bParam0) //Position: 0xAEC3 / 44739
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_702)))
		{
			ADD_BLIP_FOR_ACTOR(&iLocal_702, 334, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_702)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_702));
	}
	return;
}

void Function_234(bool bParam0) //Position: 0xAF04 / 44804
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_237(0)))
		{
			Function_235(0, 1, 1);
		}
	}
	else if (IS_BLIP_VALID(Function_237(0)))
	{
		Function_235(0, 0, 1);
	}
	return;
}

void Function_235(int iParam0, bool bParam1, bool bParam2) //Position: 0xAF33 / 44851
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
						Function_228(&uVar1);
					}
				}
				Function_236(&uVar0);
			}
		}
	}
	return;
}

void Function_236(bool bParam0) //Position: 0xB042 / 45122
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

var Function_237(int iParam0) //Position: 0xB075 / 45173
{
	return &Global_15402[iParam014] + 104;
}

void Function_238() //Position: 0xB085 / 45189
{
	if (IS_BLIP_VALID(&iLocal_954))
	{
		REMOVE_BLIP(&iLocal_954);
	}
	return;
}

void Function_239() //Position: 0xB09C / 45212
{
	if (IS_OBJECT_VALID(&uLocal_928))
	{
		Function_240(&uLocal_928);
	}
	return;
}

void Function_240(var uParam0) //Position: 0xB0B3 / 45235
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

void Function_241() //Position: 0xB149 / 45385
{
	Function_242();
	if (!IS_OBJECT_VALID(&iLocal_4 + 2408))
	{
		DESTROY_OBJECT(&iLocal_4 + 2408);
	}
	if (!IS_OBJECT_VALID(&iLocal_4 + 2416))
	{
		DESTROY_OBJECT(&iLocal_4 + 2416);
	}
	return;
}

void Function_242() //Position: 0xB17E / 45438
{
	Function_243();
	if (!IS_OBJECT_VALID(&iLocal_4 + 2440))
	{
		DESTROY_OBJECT(&iLocal_4 + 2440);
	}
	return;
}

void Function_243() //Position: 0xB19D / 45469
{
	Function_244();
	return;
}

void Function_244() //Position: 0xB1A6 / 45478
{
	Function_245();
	return;
}

void Function_245() //Position: 0xB1AF / 45487
{
	Function_246();
	if (!IS_OBJECT_VALID(&iLocal_4 + 2424))
	{
		DESTROY_OBJECT(&iLocal_4 + 2424);
	}
	if (!IS_OBJECT_VALID(&iLocal_4 + 2432))
	{
		DESTROY_OBJECT(&iLocal_4 + 2432);
	}
	return;
}

void Function_246() //Position: 0xB1E4 / 45540
{
	if (!IS_OBJECT_VALID(&iLocal_4 + 2448))
	{
		DESTROY_OBJECT(&iLocal_4 + 2448);
	}
	return;
}

void Function_247() //Position: 0xB200 / 45568
{
	if (IS_OBJECTSET_VALID(&uLocal_1008))
	{
		Function_248(&uLocal_1008);
		DESTROY_OBJECTSET(&uLocal_1008);
	}
	return;
}

void Function_248(var uParam0) //Position: 0xB21E / 45598
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
	}
	return;
}

void Function_249() //Position: 0xB26D / 45677
{
	if (Function_250())
	{
		TRAIN_RELEASE_TRAIN(iLocal_987, 0f);
		iLocal_987 = 4294967295;
	}
	return;
}

bool Function_250() //Position: 0xB284 / 45700
{
	if (iLocal_987 <= 0)
	{
		return 0;
	}
	iLocal_988 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_987, false));
	if (!IS_ACTOR_VALID(&iLocal_988))
	{
		return 0;
	}
	return 1;
}

void Function_251() //Position: 0xB2AF / 45743
{
	Function_252();
	return;
}

void Function_252() //Position: 0xB2B8 / 45752
{
	Function_253();
	return;
}

void Function_253() //Position: 0xB2C1 / 45761
{
	Function_254();
	return;
}

void Function_254() //Position: 0xB2CA / 45770
{
	Function_255();
	return;
}

void Function_255() //Position: 0xB2D3 / 45779
{
	ABORT_SCRIPTED_CONVERSATION(0);
	Function_257();
	Function_256();
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	if (IS_OBJECT_VALID(&iLocal_682 + 24))
	{
		DESTROY_OBJECT(&iLocal_682 + 24);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	return;
}

void Function_256() //Position: 0xB303 / 45827
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_257() //Position: 0xB315 / 45845
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_258(bool bParam0) //Position: 0xB32A / 45866
{
	if (bParam0)
	{
		Function_211(1048576);
	}
	else
	{
		Function_169(1048576);
	}
	return;
}

void Function_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB346 / 45894
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_260(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_260(int iParam0) //Position: 0xB370 / 45936
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

bool Function_261() //Position: 0xB8C5 / 47301
{
	if (IS_EXITFLAG_SET())
	{
		Function_720(iLocal_694);
		Function_716(StackVal, 4, &bLocal_735, &iLocal_694, Function_721(iLocal_694), Function_720(iLocal_694), 0);
		return 0;
	}
	Function_715(StackVal, StackVal, StackVal, StackVal, StackVal, Local_624, iLocal_694, iLocal_695, &bLocal_736, &bLocal_734, &bLocal_735);
	if (iLocal_694 == 99 && iLocal_694 == 100)
	{
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_720(iLocal_694);
			Function_716(StackVal, 1, &bLocal_735, &iLocal_694, Function_721(iLocal_694), Function_720(iLocal_694), 0);
			return 1;
		}
		if (Function_714(2048))
		{
			Function_720(iLocal_694);
			Function_716(StackVal, 3, &bLocal_735, &iLocal_694, Function_721(iLocal_694), Function_720(iLocal_694), 0);
			return 1;
		}
		if (Function_694(&Local_792, &uLocal_738, &uLocal_914, &uLocal_698, uLocal_737))
		{
			if (Function_685(&uLocal_914))
			{
				Function_720(iLocal_694);
				Function_716(StackVal, 5, &bLocal_735, &iLocal_694, Function_721(iLocal_694), Function_720(iLocal_694), 0);
				return 1;
			}
		}
	}
	switch (iLocal_694)
	{
		case 0x00000063:
			Function_625();
			break;
		
		case 0x00000000:
			Function_585();
			break;
		
		case 0x00000001:
			Function_529();
			break;
		
		case 0x00000002:
			Function_480();
			break;
		
		case 0x00000003:
			Function_464();
			break;
		
		case 0x00000004:
			Function_361();
			break;
		
		case 0x00000065:
			Function_270();
			break;
		
		case 0x00000064:
			if (Function_269(&bLocal_735))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_268(&iLocal_694, &iLocal_695, &iLocal_682))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_734)
	{
		Function_267(&bLocal_734, 8);
		Function_1();
		return 0;
	}
	if (bLocal_735 && iLocal_694 == 100)
	{
		Function_720(iLocal_694);
		Function_716(StackVal, 5, &bLocal_735, &iLocal_694, Function_721(iLocal_694), Function_720(iLocal_694), 0);
	}
	if (bLocal_736)
	{
		Function_262(&bLocal_736, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_262(var uParam0, int iParam1) //Position: 0xBA64 / 47716
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_263(&iParam1);
	uParam0 = 1;
	return;
}

void Function_263(int iParam0) //Position: 0xBA89 / 47753
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_266("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_265(2) || Function_265(8)) || Function_265(9)) || Function_265(10))
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
		Function_266("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_266("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_266("");
	}
	else if (iParam0 == 8)
	{
		Function_264();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_264();
	}
	return;
}

void Function_264() //Position: 0xBB80 / 48000
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_265(int iParam0) //Position: 0xBB8C / 48012
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

void Function_266(char* cParam0) //Position: 0xBBC2 / 48066
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_267(var uParam0, int iParam1) //Position: 0xBC2E / 48174
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_263(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_268(var uParam0, var uParam1, int iParam2) //Position: 0xBC53 / 48211
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

bool Function_269(int iParam0) //Position: 0xBC9C / 48284
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_270() //Position: 0xBCB0 / 48304
{
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_357(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 944[4]))
			{
				Function_356();
				DESTROY_VOLUME(&iLocal_4 + 944[4]);
			}
			Function_354();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_351();
			bLocal_697 = Global_46796[3];
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_202(1, 0, 1);
				Function_350(&Global_54076, &iLocal_4 + 1872[0], 1, 1, 1);
				Function_349(1, "LAST STAGE - STREAMING GOAL");
			}
			else
			{
				Function_349(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_341() && STREAMING_IS_WORLD_LOADED()) && (Function_340(bLocal_697) || bLocal_697 != 4294967295))
			{
				Function_339();
				STREAMING_RELEASE_MAIN_POI();
				Function_349(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_320();
			Function_349(3, "LAST STAGE - CUTSCENE GOAL");
			break;
		
		case 0x00000003:
			if (Function_277())
			{
				Function_276(1.0f);
				Function_273();
				Function_349(106, "LAST STAGE - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_271();
				bLocal_734 = true;
			}
			break;
	}
	return;
}

void Function_271() //Position: 0xBE33 / 48691
{
	DESTROY_OBJECT(&iLocal_4 + 2456);
	DESTROY_OBJECT(&iLocal_4 + 2464);
	Function_249();
	Function_272();
	Function_241();
	return;
}

void Function_272() //Position: 0xBE54 / 48724
{
	if (IS_ACTOR_VALID(&iLocal_4 + 696[02]))
	{
		RELEASE_ACTOR(&iLocal_4 + 696[02]);
	}
	return;
}

void Function_273() //Position: 0xBE75 / 48757
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	AI_GOAL_LOOK_CLEAR(&iLocal_700);
	Function_227(0, 0, 0, 1, 1);
	Function_275(StackVal, &iLocal_700, Vector(-4305,174f, 8,038f, 3291,699f), 131088, 3, 1, 1);
	Function_274();
	return;
}

void Function_274() //Position: 0xBEB6 / 48822
{
	TASK_CLEAR(&iLocal_702);
	TASK_PRIORITY_SET(&iLocal_702, true);
	TASK_STAND_STILL(&iLocal_702, -1.0f, 0, 0);
	return;
}

void Function_275(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xBED5 / 48853
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
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

void Function_276(bool bParam0) //Position: 0xBFF4 / 49140
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

bool Function_277() //Position: 0xC012 / 49170
{
	var uVar0;
	
	Function_318(&iLocal_682, 1, 0);
	switch (iLocal_682)
	{
		case 0x000003E8:
			Function_314(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			iLocal_960 = 0;
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				*(&iLocal_682 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				Function_313(&iLocal_682 + 24, 0);
			}
			else
			{
				*(&iLocal_682 + 24) = Function_305(&iLocal_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene05 - Failed to create Outlaw02_Cutscene05_cutscene");
				iLocal_682 = 1000;
				return 1;
			}
			iLocal_682 = 1001;
			break;
		
		case 0x000003E9:
			Function_304(&Global_54076, 1, 1);
			Function_304(&iLocal_700, 1, 1);
			Function_304(&iLocal_702, 1, 1);
			SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
			Function_350(&Global_54076, &iLocal_4 + 1872[0], 1, 1, 1);
			if (GET_MOUNT(&iLocal_700) != &iLocal_702)
			{
				ACTOR_MOUNT_ACTOR(&iLocal_700, &iLocal_702);
			}
			Function_350(&iLocal_702, &iLocal_4 + 1872[4], 1, 1, 1);
			Function_303(&iLocal_4 + 1872[9]);
			Function_350(&iLocal_4 + 696[02], &iLocal_4 + 1872[10], 1, 1, 1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[4]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[4]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 888[4], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 888[4]);
			iLocal_682 = 1002;
			break;
		
		case 0x000003EA:
			Function_276(1.0f);
			Function_302();
			Function_301();
			Function_300(1);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "out02_marston", 0);
			RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
			iLocal_682 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_1077 = 15;
				iLocal_1078 = 15;
				iLocal_682 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_293() && Function_282())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_682 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_304(&Global_54076, 0, 1);
				Function_304(&iLocal_700, 0, 1);
				Function_304(&iLocal_702, 0, 1);
				SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[4]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[4]);
				DESTROY_VOLUME(&iLocal_4 + 888[4]);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				if (iLocal_960)
				{
					Function_280(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_280(1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				}
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_682 + 24))
				{
					DESTROY_OBJECT(&iLocal_682 + 24);
				}
				iLocal_682 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_960 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_257();
				Function_256();
				Function_279();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 0);
				Function_278();
				TASK_CLEAR(&iLocal_702);
				TASK_PRIORITY_SET(&iLocal_702, true);
				TASK_STAND_STILL(&iLocal_702, -1.0f, 0, 0);
				Function_350(&Global_54076, &iLocal_4 + 1872[3], 1, 1, 1);
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_4 + 696[02], false) != &iLocal_700)
				{
					SET_ACTOR_IN_VEHICLE(&iLocal_700, &iLocal_4 + 696[02], false);
				}
				Function_350(&iLocal_4 + 696[02], &iLocal_4 + 1872[6], 1, 1, 1);
				Function_350(&iLocal_702, &iLocal_4 + 1872[8], 1, 1, 1);
				Function_303(&iLocal_4 + 1872[9]);
				iLocal_682 = 1104;
			}
			break;
	}
	return 0;
}

void Function_278() //Position: 0xC3C7 / 50119
{
	if (IS_ACTOR_VALID(&iLocal_4 + 696[02]))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_4 + 696[02]), false);
	}
	else
	{
		LOG_ERROR("SupplyWagonCleanupAnimate: Failed to get valid SupplyWagon!");
	}
	return;
}

void Function_279() //Position: 0xC430 / 50224
{
	if (IS_MOVER_FROZEN(&Global_54076))
	{
		SET_MOVER_FROZEN(&Global_54076, false);
	}
	return;
}

void Function_280(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xC448 / 50248
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
		Function_257();
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
	Function_281(&iParam9, &iParam10);
}

void Function_281(var uParam0, bool bParam1) //Position: 0xC517 / 50455
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
		Function_212();
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

int Function_282() //Position: 0xC5E6 / 50662
{
	switch (iLocal_1078)
	{
		case 0x0000000F:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_290(&iLocal_682 + 4) < 0,5f)
			{
				Function_289("out02_marston", "out02_marston/cart/cart_out/cart_out_ready");
				iLocal_1078 = 18;
			}
			break;
		
		case 0x00000012:
			if (Function_290(&iLocal_682 + 4) < 3.0f)
			{
				Function_289("out02_marston", "out02_marston/cart/cart_out/cart_out_pre");
				iLocal_1078 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_290(&iLocal_682 + 4) < 6,8f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 26;
			}
			break;
		
		case 0x0000001A:
			if (Function_290(&iLocal_682 + 4) < 0,5f)
			{
				GET_PATH_POINT(&iLocal_4 + 2408, false, &Local_938);
				bLocal_952 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 0);
				TASK_FACE_COORD(0, &Local_938, 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2408, 1, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_SEQUENCE_PERFORM(&iLocal_700, bLocal_952);
				TASK_SEQUENCE_RELEASE(bLocal_952, 1);
				iLocal_1078 = 27;
			}
			break;
		
		case 0x0000001B:
			if (Function_290(&iLocal_682 + 4) < 1.0f)
			{
				Function_350(&Global_54076, &iLocal_4 + 1872[1], 1, 1, 1);
				Function_279();
				iLocal_1078 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_290(&iLocal_682 + 4) < 2,25f)
			{
				Function_289("out02_marston", "out02_marston/carry_crate/carry");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_290(&iLocal_682 + 4) < 5.0f)
			{
				Function_301();
				Function_287();
				Function_286();
				Function_289("out02_marston", "out02_marston/wagon/put_in_wagon");
				Function_350(&iLocal_702, &iLocal_4 + 1872[8], 1, 1, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_290(&iLocal_682 + 4) < 3,8f)
			{
				Function_350(&Global_54076, &iLocal_4 + 1872[2], 1, 1, 1);
				Function_279();
				Function_289("out02_marston", "out02_marston/end/out02_end");
				Function_284();
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_700, &iLocal_4 + 696[02], 0, 1, 0);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_283(&iLocal_700, &iLocal_4 + 696[02], 0))
			{
				Function_278();
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_700, &iLocal_4 + 2416, 3, 1, 0, 1, false);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_290(&iLocal_682 + 4) < 2.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				iLocal_1078 = 85;
			}
			break;
		
		case 0x00000055:
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				iLocal_1078 = 106;
			}
			break;
		
		case 0x0000005F:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1078 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_283(int iParam0, int iParam1, bool bParam2) //Position: 0xCA00 / 51712
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

void Function_284() //Position: 0xCA2A / 51754
{
	if (IS_ACTOR_VALID(&iLocal_4 + 696[02]))
	{
		Function_285();
		GET_OBJECT_POSITION(&iLocal_4 + 2032[4], &Local_938);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[4], &Local_944);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_4 + 2456, &iLocal_4 + 696[02], 0);
		uLocal_997 = ATTACH_OBJECTS(&iLocal_4 + 2456, &iLocal_4 + 696[02], Function_54(), Local_938, Local_944, 4294967295);
		if (!IS_ATTACHMENT_VALID(&uLocal_997))
		{
			LOG_ERROR("SupplyWagonAttachCrate: Failed to attach crate to SupplyWagon!");
		}
	}
	else
	{
		LOG_ERROR("SupplyWagonAttachCrate: Failed to get valid SupplyWagon!");
	}
	return;
}

void Function_285() //Position: 0xCB29 / 52009
{
	if (IS_ATTACHMENT_VALID(&uLocal_997))
	{
		REMOVE_OBJECT_ATTACHMENT(&uLocal_997);
	}
	return;
}

void Function_286() //Position: 0xCB40 / 52032
{
	if (IS_ACTOR_VALID(&iLocal_4 + 696[02]))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_4 + 696[02]), true);
	}
	else
	{
		LOG_ERROR("SupplyWagonSetupAnimate: Failed to get valid SupplyWagon!");
	}
	return;
}

void Function_287() //Position: 0xCBA7 / 52135
{
	if (IS_ACTOR_VALID(&iLocal_4 + 696[02]))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 2032[32], &Local_938);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[32], &Local_944);
		GET_OBJECT_RELATIVE_POSITION(&iLocal_4 + 696[02], Local_938, &Local_941);
		bLocal_950 = (StackVal + Function_288(&iLocal_4 + 696[02]));
		TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_941, bLocal_950, 1, 1, 1);
	}
	else
	{
		LOG_ERROR("TeleportPlayerNearSupplyWagon: Failed to get valid SupplyWagon!");
	}
	return;
}

float Function_288(int iParam0) //Position: 0xCC62 / 52322
{
	return GET_HEADING(&iParam0);
}

void Function_289(var uParam0, int iParam1) //Position: 0xCC6E / 52334
{
	if (!ACTOR_HAS_ANIM_SET(&Global_54076, &uParam0))
	{
		SET_ANIM_SET_FOR_ACTOR(&Global_54076, &uParam0, 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(&Global_54076, &iParam1);
	return;
}

float Function_290(vector3 vParam0) //Position: 0xCC99 / 52377
{
	if (Function_292(&vParam0))
	{
		if (Function_291(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_291(int iParam0) //Position: 0xCD66 / 52582
{
	return Function_14(iParam0, 2);
}

bool Function_292(bool bParam0) //Position: 0xCD74 / 52596
{
	return Function_14(bParam0, 1);
}

int Function_293() //Position: 0xCD82 / 52610
{
	switch (iLocal_1077)
	{
		case 0x0000000F:
			if (Function_290(&iLocal_682 + 4) < 4,5f)
			{
				Function_297();
				iLocal_1077 = 25;
			}
			break;
		
		case 0x00000019:
			if (GET_CUTSCENEOBJECT_SEQUENCE(&iLocal_682 + 24) != 6 && Function_290(&iLocal_682 + 4) < 0.0f)
			{
				Function_294();
				iLocal_1077 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_294() //Position: 0xCDF5 / 52725
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS04_v2_AA", "Outlaw02_CS04_v2_AA", true, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_295(int iParam0) //Position: 0xCE44 / 52804
{
	Function_296(0, &Global_54076, iParam0, 0);
	Function_296(1, &iLocal_700, iParam0, 0);
	Function_296(2, &iLocal_4 + 656[02], iParam0, 0);
	return;
}

void Function_296(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xCE70 / 52848
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_297() //Position: 0xCE98 / 52888
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS04_v1_AA", "Outlaw02_CS04_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS04_v1_AB", "Outlaw02_CS04_v1_AB", false, 4, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_298(bool bParam0) //Position: 0xCF1C / 53020
{
	Function_299(&bParam0, 0.0f);
	return;
}

void Function_299(vector3 vParam0) //Position: 0xCF29 / 53033
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_300(int iParam0) //Position: 0xCF4E / 53070
{
	if (Function_250())
	{
		if (iParam0 == 1)
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2032[13], &Local_938);
			GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[13], &Local_944);
		}
		else if (iParam0 == 2)
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2032[12], &Local_938);
			GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[12], &Local_944);
		}
		else if (iParam0 == 3)
		{
			GET_OBJECT_POSITION(&iLocal_4 + 2032[14], &Local_938);
			GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[14], &Local_944);
		}
		GET_OBJECT_RELATIVE_POSITION(&iLocal_988, Local_938, &Local_941);
		bLocal_950 = (StackVal + Function_288(&iLocal_988));
		TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_941, bLocal_950, 1, 1, 1);
	}
	else
	{
		LOG_ERROR("TeleportPlayerNearMineCart: Failed to get MineCart actor!");
	}
	return;
}

void Function_301() //Position: 0xD04C / 53324
{
	if (!IS_MOVER_FROZEN(&Global_54076))
	{
		SET_MOVER_FROZEN(&Global_54076, true);
	}
	return;
}

void Function_302() //Position: 0xD065 / 53349
{
	Function_285();
	SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_4 + 2456, &Global_54076, 0);
	uLocal_997 = ATTACH_OBJECTS_USING_LOCATOR(&iLocal_4 + 2456, &Global_54076, "root_attachment", "grab", 4294967295);
	if (!IS_ATTACHMENT_VALID(&uLocal_997))
	{
		LOG_ERROR("PlayerAttachCrate: Failed to attach crate to player!");
	}
	return;
}

void Function_303(int iParam0) //Position: 0xD0EC / 53484
{
	if (Function_250())
	{
		GET_OBJECT_POSITION(&iParam0, &Local_938);
		GET_OBJECT_ORIENTATION(&iParam0, &Local_944);
		UNK_0x44986367(StackVal, &Local_944);
		TRAIN_SET_POSITION_DIRECTION(iLocal_987, &Local_938, &Local_944);
	}
	else
	{
		LOG_ERROR("MineCartSetPosDir: Failed to get MineCart actor!");
	}
	return;
}

void Function_304(int iParam0, bool bParam1, bool bParam2) //Position: 0xD15C / 53596
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&iParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			FIRE_STOP_ON_ACTOR(&iParam0);
		}
		SET_ACTOR_INVULNERABILITY(&iParam0, true);
		CLEAR_ACTOR_MIN_SPEED(&iParam0);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&iParam0);
		RESET_ACTOR_GAITS(&iParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&iParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&iParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&iParam0);
		SET_ACTOR_INVULNERABILITY(&iParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&iParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
	}
	return;
}

int Function_305(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xD20C / 53772
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 6, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Outlaw02_Cutscene05", 6, 1);
	}
	Function_306(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 6.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_306(int iParam0) //Position: 0xD299 / 53913
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_312(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_311(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_310(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_309(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 4);
	Function_308(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 5);
	Function_307(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1000.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 1000.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1000.0f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 4, 1000.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 5, 1000.0f, 6);
	return;
}

void Function_307(int iParam0) //Position: 0xD36E / 54126
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4459,651f, 10,15404f, 3266,929f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,025253f, -2,713236f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_308(int iParam0) //Position: 0xD3DB / 54235
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4455,484f, 9,620727f, 3268,904f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,043183f, 2,00075f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_309(int iParam0) //Position: 0xD448 / 54344
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4463,613f, 10,32656f, 3271,572f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,13418f, -1,280341f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_310(int iParam0) //Position: 0xD4B5 / 54453
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4461,499f, 9,79605f, 3276,282f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,121872f, -1,037903f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_311(int iParam0) //Position: 0xD52A / 54570
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4464,05f, 10,171f, 3268,945f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,035427f, -2,483792f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_312(int iParam0) //Position: 0xD597 / 54679
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4461,456f, 10,72137f, 3273,161f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,093014f, -2,616642f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_313(var uParam0, bool bParam1) //Position: 0xD604 / 54788
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 6.0f, 4294967295, 6, 0, 0, 0, 0);
	return;
}

void Function_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xD61A / 54810
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
	Function_257();
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
				Function_317(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_317(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_316()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_316()));
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
	if (Function_315(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_315(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_315(int iParam0) //Position: 0xD8CC / 55500
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_316() //Position: 0xD8E8 / 55528
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

struct<8> Function_317(int iParam0) //Position: 0xD976 / 55670
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_318(int iParam0, bool bParam1, bool bParam2) //Position: 0xD988 / 55688
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
			Function_319(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_319(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_319(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDB00 / 56064
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

void Function_320() //Position: 0xDB2A / 56106
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	if (!Function_250())
	{
		if (Function_338())
		{
			Function_337(0);
			Function_336();
		}
	}
	else
	{
		Function_336();
	}
	Function_323();
	Function_322(0, 0);
	AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_700, &Global_54076, -1f, 0);
	Function_321();
	Function_274();
	return;
}

void Function_321() //Position: 0xDB73 / 56179
{
	TASK_CLEAR(&iLocal_700);
	TASK_PRIORITY_SET(&iLocal_700, true);
	TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
	return;
}

void Function_322(bool bParam0, int iParam1) //Position: 0xDB92 / 56210
{
	if (bParam0)
	{
		if (!Function_168(GET_WEAPON_IN_HAND(&iLocal_700)))
		{
			ACTOR_DRAW_ANY_WEAPON(&iLocal_700, &iParam1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_700, 0);
		}
	}
	else if (Function_168(GET_WEAPON_IN_HAND(&iLocal_700)))
	{
		ACTOR_HOLSTER_WEAPON(&iLocal_700, &iParam1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_700, 1);
	}
	return;
}

void Function_323() //Position: 0xDBE1 / 56289
{
	if (!IS_ACTOR_VALID(&iLocal_4 + 696[02]))
	{
		Function_331();
		Function_324(&(Local_792[115]), &iLocal_4 + 696[02], "Wagon", 1, 0x5f5e100, 1);
	}
	return;
}

int Function_324(struct<69> Param0) //Position: 0xDC1C / 56348
{
	if (!Function_330(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_329(&Param0, &uParam2))
	{
		return 0;
	}
	Function_328(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_325(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_325(var uParam0, int iParam1, int iParam2) //Position: 0xDC62 / 56418
{
	if (iParam1 != 100000000)
	{
		Function_327(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_326(&uParam0, &iParam2);
	}
	return;
}

void Function_326(struct<69> Param0) //Position: 0xDC89 / 56457
{
	Param0.f_68 = 0;
	Function_327(&Param0, 2, &bParam1);
	Function_327(&Param0, 4, &bParam1);
	Function_327(&Param0, 8, &bParam1);
	Function_327(&Param0, 16, &bParam1);
	Function_327(&Param0, 32, &bParam1);
	Function_327(&Param0, 64, &bParam1);
	Function_327(&Param0, 128, &bParam1);
	Function_327(&Param0, 256, &bParam1);
	Function_327(&Param0, 512, &bParam1);
	Function_327(&Param0, 1024, &bParam1);
	return;
}

void Function_327(int iParam0, int iParam1, bool bParam2) //Position: 0xDD04 / 56580
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

void Function_328(struct<65> Param0) //Position: 0xDD43 / 56643
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_329(int iParam0, char* cParam1) //Position: 0xDD50 / 56656
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

bool Function_330(struct<61> Param0) //Position: 0xDDDD / 56797
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

void Function_331() //Position: 0xDF90 / 57232
{
	(&iLocal_4 + 696[02]) = Function_332(StackVal, StackVal, &iLocal_4, Function_54(), 1199, 976, Vector(-4456,296f, 8,527809f, 3272,443f), Vector(0.0f, 235.0f, 0.0f), 1, 976, 976, 976, 4);
	TASK_STAND_STILL(&iLocal_4 + 696[02], -1.0f, 0, 0);
	return;
}

int Function_332(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xDFE0 / 57312
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
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_335(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_334(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_333(bVar16, &iVar1))
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
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, bVar18, 0);
			bVar18++;
		}
	}
	return &uVar0;
}

bool Function_333(int iParam0, bool[] bParam1) //Position: 0xE233 / 57907
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

var Function_334(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xE267 / 57959
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_335(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xE283 / 57987
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

void Function_336() //Position: 0xE2AF / 58031
{
	if (Function_250())
	{
		ENABLE_VEHICLE_SEAT(&iLocal_988, false, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_988, true, 0);
		TRAIN_SET_ENGINE_ENABLED(iLocal_987, 0);
	}
	else
	{
		LOG_ERROR("MineCartStop: Failed to get MineCart actor!");
	}
	return;
}

void Function_337(bool bParam0) //Position: 0xE30A / 58122
{
	if (Function_250())
	{
		Function_285();
		GET_OBJECT_POSITION(&iLocal_4 + 2032[3], &Local_938);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[3], &Local_944);
		if (bParam0)
		{
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_4 + 2464, &iLocal_988, 0);
			uLocal_997 = ATTACH_OBJECTS(&iLocal_4 + 2464, &iLocal_988, Function_54(), Local_938, Local_944, 4294967295);
			if (!IS_ATTACHMENT_VALID(&uLocal_997))
			{
				LOG_ERROR("MineCartAttachCrate: Failed to attach opened crate to MineCart!");
			}
		}
		else
		{
			DESTROY_OBJECT(&iLocal_4 + 2464);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_4 + 2456, &iLocal_988, 0);
			uLocal_997 = ATTACH_OBJECTS(&iLocal_4 + 2456, &iLocal_988, Function_54(), Local_938, Local_944, 4294967295);
			if (!IS_ATTACHMENT_VALID(&uLocal_997))
			{
				LOG_ERROR("MineCartAttachCrate: Failed to attach closed crate to MineCart!");
			}
		}
	}
	else
	{
		LOG_ERROR("MineCartAttachCrate: Failed to get MineCart actor!");
	}
	return;
}

bool Function_338() //Position: 0xE47F / 58495
{
	iLocal_987 = TRAIN_CREATE_NEW_TRAIN(1, "rail__mctrack_01x", 0);
	if (iLocal_987 <= 0)
	{
		LOG_ERROR("CreateMineCart: Failed to create single car train for MineCart!");
		return 0;
	}
	TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_987, 1203);
	iLocal_988 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_987, false));
	if (IS_ACTOR_VALID(&iLocal_988))
	{
		TRAIN_SET_ENGINE_ENABLED(iLocal_987, 0);
		TRAIN_SET_JUNCTION_STATE(iLocal_987, 1, 1);
		SET_ACTOR_INVULNERABILITY(&iLocal_988, true);
	}
	else
	{
		LOG_ERROR("CreateMineCart: Failed to add MineCart to single car train!");
		return 0;
	}
	return 1;
}

void Function_339() //Position: 0xE56F / 58735
{
	return;
}

int Function_340(bool bParam0) //Position: 0xE575 / 58741
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

bool Function_341() //Position: 0xE591 / 58769
{
	if (Function_342())
	{
		return 1;
	}
	return 0;
}

bool Function_342() //Position: 0xE5A0 / 58784
{
	Function_348(&iLocal_4 + 592, 1199, 2, 0);
	Function_348(&iLocal_4 + 592, 976, 2, 0);
	if (Function_343(&iLocal_4 + 592))
	{
		return 1;
	}
	return 0;
}

bool Function_343(struct<2>[] Param0) //Position: 0xE5D0 / 58832
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_347();
	iVar1 = 0;
	if (!Function_195(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_346(&(Param0[iVar02]), 8);
		}
		else if (Function_345())
		{
			iVar1 = 1;
			Function_346(&(Param0[iVar02]), 8);
		}
		Function_346(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_195(&(Param0[iVar02]), 4))
		{
			if (!Function_195(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_195(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_195(&(Param0[02]), 8) || iVar1));
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
				Function_346(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_195(&(Param0[iVar02]), 4))
		{
			if (!Function_195(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_346(&(Param0[iVar02]), 2);
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
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_346(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_346(&(Param0[iVar02]), 2);
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
	Function_344();
	return 1;
}

void Function_344() //Position: 0xE992 / 59794
{
	if (!Function_315(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_345() //Position: 0xE9D2 / 59858
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

void Function_346(struct<13> Param0) //Position: 0xEA00 / 59904
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_347() //Position: 0xEA13 / 59923
{
	if (!Function_315(128))
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

var Function_348(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xEA55 / 59989
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_195(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_346(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_346(&(Param0[iVar02]), 8);
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

void Function_349(bool bParam0, int iParam1) //Position: 0xEB31 / 60209
{
	Function_298(&bLocal_706);
	iLocal_695 = bParam0;
	return;
}

void Function_350(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xEB42 / 60226
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_351() //Position: 0xEC52 / 60498
{
	Function_169(15);
	Function_352(9);
	return;
}

void Function_352(int iParam0) //Position: 0xEC62 / 60514
{
	Function_353(&Global_43580, iParam0);
	return;
}

void Function_353(var uParam0, var uParam1) //Position: 0xEC70 / 60528
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_354() //Position: 0xEC98 / 60568
{
	Function_355(&iLocal_700);
	Function_355(&iLocal_702);
	return;
}

void Function_355(int iParam0) //Position: 0xECAC / 60588
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			SET_ACTOR_HEALTH(&iParam0, GET_ACTOR_MAX_HEALTH(&iParam0));
		}
	}
	return;
}

void Function_356() //Position: 0xECD0 / 60624
{
	Function_342();
	Function_187();
	(&iLocal_682 + 24) = Function_305(&iLocal_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(&iLocal_682 + 24))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene05 - Failed to create Outlaw02_Cutscene05_cutscene (paused)");
	}
	return;
}

void Function_357(bool bParam0) //Position: 0xED5C / 60764
{
	Function_358(0, 0x40400000);
	Function_219();
	Function_218();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_358(float fParam0, float fParam1) //Position: 0xED92 / 60818
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
	Function_360();
	Function_359();
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

void Function_359() //Position: 0xEEA3 / 61091
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_360() //Position: 0xEED7 / 61143
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

void Function_361() //Position: 0xEFDD / 61405
{
	if (iLocal_695 < 5 && iLocal_695 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 944[4]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 944[4]))
			{
				Function_356();
				iLocal_957 = 0;
				DESTROY_VOLUME(&iLocal_4 + 944[4]);
			}
		}
		else if (!iLocal_957)
		{
			if (Function_341())
			{
				Function_339();
				iLocal_957 = 1;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&Global_54076))
		{
			ACTOR_DISMOUNT_NOW(&Global_54076);
			TASK_ACTION_PERFORM(&Global_54076, "/Global/default_character_Main/ReactionProcessing/ReactionProcessing_Player/Fire/Standing");
		}
		if (!Function_447())
		{
			Function_349(106, "STAGE 05 - COMPLETE");
		}
	}
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_357(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 944[3]))
			{
				Function_446();
				DESTROY_VOLUME(&iLocal_4 + 944[3]);
			}
			Function_445();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_351();
			bLocal_697 = Global_46796[3];
			if (iLocal_722[3] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_319(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_202(1, 0, 1);
				Function_350(&Global_54076, &iLocal_4 + 1752[0], 1, 1, 1);
				Function_349(1, "STAGE 05 - STREAMING GOAL");
			}
			else
			{
				Function_349(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_443() && STREAMING_IS_WORLD_LOADED()) && (Function_340(bLocal_697) || bLocal_697 != 4294967295))
			{
				Function_442();
				Function_349(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_439(StackVal, StackVal, StackVal, StackVal, StackVal, Local_624, iLocal_694))
			{
				Function_438();
				Function_349(3, "STAGE 05 - CUTSCENE GOAL");
			}
			else
			{
				if (!Function_250())
				{
					if (Function_338())
					{
						Function_337(0);
						Function_336();
					}
				}
				else
				{
					Function_336();
				}
				iLocal_960 = 1;
				Function_350(&Global_54076, &iLocal_4 + 1752[4], 1, 1, 1);
				Function_350(&iLocal_700, &iLocal_4 + 1752[9], 1, 1, 1);
				Function_350(&iLocal_702, &iLocal_4 + 1752[10], 1, 1, 1);
				Function_303(&iLocal_4 + 1752[12]);
				Function_430();
				Function_349(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			Function_428(iLocal_694);
			Function_418(StackVal, Function_428(iLocal_694), iLocal_694, Global_46736[1], Function_426(iLocal_694), 0);
			iLocal_696 = Function_417();
			break;
		
		case 0x00000003:
			if (Function_392())
			{
				Function_430();
				if (!iLocal_960)
				{
					Function_391();
					Function_390("out02_irish", "out02_irish/irish_leave/leave");
				}
				Function_349(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_276(1.0f);
			Function_389();
			Function_388(1);
			Function_349(6, "STAGE 05 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_960)
				{
					Function_257();
					Function_391();
					Function_390("out02_irish", "out02_irish/irish_leave/leave");
				}
				Function_349(7, "STAGE 05 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_387("Outlaw02_obj05_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_386(1);
				Function_349(13, "STAGE 05 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (!Function_385())
			{
				Function_379();
			}
			if (Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_386(0);
				Function_377(5);
				Function_349(14, "STAGE 05 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_238();
				Function_386(1);
				Function_349(13, "STAGE 05 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_257();
				Function_387("Outlaw02_obj05_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_386(0);
				Function_374(1);
				Function_372(6, &Global_54076, 1.0f, 4294967295);
				Function_349(23, "STAGE 05 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x00000017:
			if (!Function_385())
			{
				Function_379();
			}
			if (Function_365(&bLocal_710, 60.0f, &iLocal_988, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_239();
				Function_386(1);
				Function_349(24, "STAGE 05 - OBJ_02-LOOP_FAIL");
			}
			break;
		
		case 0x00000018:
			if (!Function_365(&bLocal_710, 60.0f, &iLocal_988, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_386(0);
				Function_372(6, &Global_54076, 1.0f, 4294967295);
				Function_349(23, "STAGE 05 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_362();
				Function_388(0);
				iLocal_694 = 101;
				iLocal_722[4] = 1;
				Function_349(0, "LAST STAGE - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_362() //Position: 0xF71E / 63262
{
	Function_363(&iLocal_4 + 880, 0, 1);
	DESTROY_OBJECT(&iLocal_4 + 880);
	Function_242();
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	return;
}

void Function_363(var uParam0, bool bParam1, bool bParam2) //Position: 0xF741 / 63297
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
				if (!Function_364(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF7CA / 63434
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

bool Function_365(struct<2> Param0, bool bParam2, int iParam3, int iParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0xF7EA / 63466
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&bParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &bParam2, bParam1))
	{
		Function_266(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_283(&Global_54076, &bParam2, iParam3) && !(iParam3 != 4294967295 && GET_VEHICLE(&Global_54076) != &bParam2))
	{
		if (!Function_371(32))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_387(&iParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_370(32);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 0, 4294967295, 0, &bParam2);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_369(&iParam9, 0, 4294967295, 0, &bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bParam2)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&bParam2, &iParam10, 0f, 2, 0);
				DECOR_SET_BOOL(&bParam2, "MVDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_371(32))
	{
		Function_368(32);
		if (!Function_367())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_366();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bParam2)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&bParam2, "MVDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bParam2));
				DECOR_REMOVE(&bParam2, "MVDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 1, 4294967295, 0, &bParam2);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_369(&iParam9, 1, 4294967295, 0, &bParam2);
			}
		}
	}
	return 0;
}

void Function_366() //Position: 0xF990 / 63888
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

bool Function_367() //Position: 0xF9BE / 63934
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

void Function_368(bool bParam0) //Position: 0xFA05 / 64005
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

void Function_369(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFA6C / 64108
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

void Function_370(bool bParam0) //Position: 0xFB27 / 64295
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

bool Function_371(bool bParam0) //Position: 0xFB8E / 64398
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

void Function_372(int iParam0, int iParam1, float fParam2, int iParam3) //Position: 0xFBD8 / 64472
{
	Function_239();
	GET_OBJECT_POSITION(&iLocal_4 + 2312[iParam0], &Local_938);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 2312[iParam0], &Local_944);
	uLocal_928 = Function_373(StackVal, StackVal, &iLocal_622, "GatewayDest", Local_938, Local_944, &iParam1, &fParam2, 1, 3, 330, &iParam3, 1, 3212836864, 3212836864, 1);
	if (!IS_OBJECT_VALID(&uLocal_928))
	{
		LOG_ERROR("Failed to create destination gateway!");
	}
}

var Function_373(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0xFC78 / 64632
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

void Function_374(bool bParam0) //Position: 0xFD63 / 64867
{
	if (bParam0)
	{
		Function_376(&iLocal_4 + 880, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
	}
	else
	{
		Function_375(&iLocal_4 + 880);
	}
	return;
}

void Function_375(bool bParam0) //Position: 0xFD92 / 64914
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

void Function_376(var uParam0, bool bParam1, int iParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xFDE6 / 64998
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
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
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

void Function_377(bool bParam0) //Position: 0xFEF6 / 65270
{
	Function_238();
	iLocal_954 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2032[bParam0], 330, 0f, 2, 0);
	return;
}

bool Function_378(bool bParam0, bool bParam1, bool bParam2, var uParam3, char* cParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0xFF16 / 65302
{
	if (!Function_85(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (bParam2 && Function_340(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[bParam19] + 8))
		{
			Function_266(&cParam4);
			iParam5 = 1;
			return 1;
		}
		if (!Global_6629)
		{
			if (!Function_371(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_387(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
					Function_370(128);
				}
				if (IS_LAYOUTREF_VALID(&iParam7))
				{
					Function_369(&iParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(&iParam8))
				{
					Function_369(&iParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
				{
					ADD_BLIP_FOR_OBJECT(&Global_44085[bParam19] + 8, &iParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_371(128))
		{
			Function_368(128);
			Function_368(256);
			if (!Function_367())
			{
				if (&bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_366();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8));
				}
				if (IS_LAYOUTREF_VALID(&iParam7))
				{
					Function_369(&iParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(&iParam8))
				{
					Function_369(&iParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[bParam19] + 8))
	{
		if (Function_371(256))
		{
			if (Function_290(&bParam0) <= 8.0f)
			{
				Function_266(&cParam4);
				iParam5 = 1;
			}
		}
		else if (!Function_371(256))
		{
			if (&bParam6)
			{
				Function_257();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_387(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_370(256);
				Function_298(&bParam0);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_369(&iParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&Global_44085[bParam19] + 8, &iParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_371(256))
	{
		Function_368(128);
		Function_368(256);
		if (!Function_367())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_366();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8));
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_369(&iParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

bool Function_379() //Position: 0x1020F / 66063
{
	if (Function_384(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		iLocal_934 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
		if (IS_ACTOR_ALIVE(&iLocal_934))
		{
			if (!IS_ACTOR_ANIMAL(&iLocal_934))
			{
				if (!Function_292(&bLocal_718))
				{
					Function_298(&bLocal_718);
				}
				else if (&iLocal_974 != &iLocal_934)
				{
					Function_298(&bLocal_718);
				}
				else if (Function_290(&bLocal_718) <= 1.0f)
				{
					if (&iLocal_974 == &iLocal_700)
					{
						if (MEMORY_GET_IS_VISIBLE(&iLocal_700, &Global_54076))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_383();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_GunOnIrish", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							iLocal_964 = 1;
						}
					}
					else if (Function_382(&iLocal_974) == &iLocal_622 && Function_382(&iLocal_974) == &iLocal_4)
					{
						if (MEMORY_GET_IS_VISIBLE(&iLocal_700, &iLocal_974))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_381();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_GunOnAmbGapt", "", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
							}
							iLocal_964 = 1;
						}
					}
					if (iLocal_964)
					{
						Function_380(&bLocal_718);
						return 1;
					}
				}
				iLocal_974 = &iLocal_934;
				return 0;
			}
		}
	}
	iLocal_974 = "";
	Function_380(&bLocal_718);
	return 0;
}

void Function_380(vector3 vParam0) //Position: 0x1035D / 66397
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_381() //Position: 0x10374 / 66420
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_GunOnAmbGapt", "Outlaw02_GunOnAmbGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

int Function_382(int iParam0) //Position: 0x103C7 / 66503
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 1)
		{
			uVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
		}
		while (!IS_LAYOUTREF_VALID(&uVar0) && IS_OBJECT_VALID(&iParam0))
		{
			iParam0 = GET_OBJECT_OWNER(&iParam0);
			if (GET_OBJECT_TYPE(&iParam0) == 1)
			{
				uVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return "";
}

void Function_383() //Position: 0x1042E / 66606
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_GunOnIrish", "Outlaw02_GunOnIrish", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_384(bool bParam0) //Position: 0x1047D / 66685
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

bool Function_385() //Position: 0x104C3 / 66755
{
	if (iLocal_964)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(&iLocal_700))
		{
			iLocal_964 = 0;
		}
		return 1;
	}
	return 0;
}

void Function_386(bool bParam0) //Position: 0x104E6 / 66790
{
	if (Function_250())
	{
		if (bParam0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_988)))
			{
				ADD_BLIP_FOR_ACTOR(&iLocal_988, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&iLocal_988), "Outlaw02_minecart_blip");
			}
		}
		else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_988)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_988));
		}
	}
	return;
}

void Function_387(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x10550 / 66896
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
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_388(bool bParam0) //Position: 0x105E5 / 67045
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	}
	else
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	}
	return;
}

void Function_389() //Position: 0x10611 / 67089
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	GET_OBJECT_POSITION(&iLocal_4 + 2032[31], &Local_938);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[31], &Local_944);
	STREAMING_SET_POI_LIMIT(2);
	STREAMING_LOAD_SCENE_EXT(Local_938, Local_944, 0);
	GET_POSITION(&iLocal_4 + 824[02], &Local_938);
	bLocal_950 = GET_HEADING(&iLocal_4 + 824[02]);
	TASK_CLEAR(&iLocal_4 + 824[02]);
	TASK_PRIORITY_SET(&iLocal_4 + 824[02], true);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_4 + 824[02], &Local_938, bLocal_950, -1.0f);
	GET_POSITION(&iLocal_4 + 824[12], &Local_938);
	bLocal_950 = GET_HEADING(&iLocal_4 + 824[12]);
	TASK_CLEAR(&iLocal_4 + 824[12]);
	TASK_PRIORITY_SET(&iLocal_4 + 824[12], true);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_4 + 824[12], &Local_938, bLocal_950, -1.0f);
	SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 824[22], "dynamite", 0);
	TASK_CLEAR(&iLocal_4 + 824[22]);
	TASK_PRIORITY_SET(&iLocal_4 + 824[22], true);
	TASK_STAND_STILL(&iLocal_4 + 824[22], -1.0f, 0, 0);
	return;
}

void Function_390(var uParam0, int iParam1) //Position: 0x1072A / 67370
{
	if (!ACTOR_HAS_ANIM_SET(&iLocal_700, &uParam0))
	{
		SET_ANIM_SET_FOR_ACTOR(&iLocal_700, &uParam0, 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(&iLocal_700, &iParam1);
	return;
}

void Function_391() //Position: 0x10755 / 67413
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_IrishShoutsOff", "Outlaw02_IrishShoutsOff", false, 2, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_392() //Position: 0x107AC / 67500
{
	var uVar0;
	
	Function_318(&iLocal_682, 1, 0);
	switch (iLocal_682)
	{
		case 0x000003E8:
			Function_314(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			iLocal_960 = 0;
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (Function_416() == 12)
			{
				Function_171(0, 0, 0);
			}
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				(&iLocal_682 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				Function_415(&iLocal_682 + 24, 0);
			}
			else
			{
				*(&iLocal_682 + 24) = Function_403(&iLocal_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene04 - Failed to create Outlaw02_Cutscene04_cutscene");
				iLocal_682 = 1000;
				return 1;
			}
			iLocal_682 = 1001;
			break;
		
		case 0x000003E9:
			Function_304(&Global_54076, 1, 1);
			Function_304(&iLocal_700, 1, 1);
			SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
			SET_AUTO_CONVERSATION_LOOK(&iLocal_700, 0);
			Function_350(&Global_54076, &iLocal_4 + 1752[0], 1, 1, 1);
			Function_350(&iLocal_700, &iLocal_4 + 1752[5], 1, 1, 1);
			Function_303(&iLocal_4 + 1752[11]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[3]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 888[3], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 888[3]);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_OUTLAWO2_WINCH_CUTSCENE", &uLocal_1075);
			iLocal_682 = 1002;
			break;
		
		case 0x000003EA:
			Function_276(1.0f);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "out02_marston", 0);
			SET_ANIM_SET_FOR_ACTOR(&iLocal_700, "out02_irish", 0);
			iLocal_682 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_1073 = 15;
				iLocal_1074 = 15;
				iLocal_682 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_400() && Function_394())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_682 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_304(&Global_54076, 0, 1);
				Function_304(&iLocal_700, 0, 1);
				SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
				SET_AUTO_CONVERSATION_LOOK(&iLocal_700, 1);
				Function_337(0);
				TASK_CLEAR(&iLocal_702);
				TASK_PRIORITY_SET(&iLocal_702, true);
				TASK_STAND_STILL(&iLocal_702, -1.0f, 0, 0);
				Function_350(&Global_54076, &iLocal_4 + 1752[4], 1, 1, 1);
				Function_350(&iLocal_700, &iLocal_4 + 1752[9], 1, 1, 1);
				Function_350(&iLocal_702, &iLocal_4 + 1752[10], 1, 1, 1);
				Function_303(&iLocal_4 + 1752[12]);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[3]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[3]);
				DESTROY_VOLUME(&iLocal_4 + 888[3]);
				DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1075, 1);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				Function_280(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_682 + 24))
				{
					DESTROY_OBJECT(&iLocal_682 + 24);
				}
				iLocal_682 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_960 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				if (IS_SOUND_ID_VALID(&uLocal_958))
				{
					if (!HAS_SOUND_FINISHED(&uLocal_958))
					{
						STOP_SOUND(&uLocal_958);
					}
					RELEASE_SOUND_ID(&uLocal_958);
				}
				Function_257();
				Function_256();
				Function_231();
				Function_279();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				Function_393();
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
				Function_350(&Global_54076, &iLocal_4 + 1752[4], 1, 1, 1);
				Function_350(&iLocal_700, &iLocal_4 + 1752[9], 1, 1, 1);
				Function_350(&iLocal_702, &iLocal_4 + 1752[10], 1, 1, 1);
				Function_303(&iLocal_4 + 1752[12]);
				iLocal_682 = 1104;
			}
			break;
	}
	return 0;
}

void Function_393() //Position: 0x10BB7 / 68535
{
	Function_285();
	if (IS_OBJECT_VALID(&uLocal_1001))
	{
		DESTROY_OBJECT(&uLocal_1001);
	}
	return;
}

int Function_394() //Position: 0x10BD1 / 68561
{
	switch (iLocal_1074)
	{
		case 0x0000000F:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				TRAIN_SET_TARGET_SPEED(iLocal_987, 0.0f);
				Function_390("out02_irish", "out02_irish/pre");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 25;
			}
			break;
		
		case 0x00000019:
			if (IS_ACTION_NODE_PLAYING(&iLocal_700, "out02_irish/idle") && Function_290(&iLocal_682 + 4) < 0.0f)
			{
				Function_390("out02_irish", "out02_irish/talk");
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 26;
			}
			break;
		
		case 0x0000001A:
			if (Function_290(&iLocal_682 + 4) < 0,5f)
			{
				Function_350(&Global_54076, &iLocal_4 + 1752[1], 1, 1, 1);
				Function_302();
				Function_289("out02_marston", "out02_marston/winch/winch_in/winch_in_ready");
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 35;
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_290(&iLocal_682 + 4) < 0.0f)
			{
				Function_289("out02_marston", "out02_marston/winch/winch_in/winch_in_pre");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 36;
			}
			break;
		
		case 0x00000024:
			if (Function_290(&iLocal_682 + 4) < 1.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 0);
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
				Function_350(&iLocal_700, &iLocal_4 + 1752[6], 1, 1, 1);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 37;
			}
			break;
		
		case 0x00000025:
			if (Function_290(&iLocal_682 + 4) < 2,5f)
			{
				if (Function_399())
				{
					SNAP_ACTOR_TO_GRINGO(&iLocal_700, &uLocal_993, "UseCase2", true, 1, 0);
					TASK_CLEAR(&iLocal_700);
					TASK_PRIORITY_SET(&iLocal_700, true);
					TASK_USE_GRINGO(&iLocal_700, &bLocal_991, "UseCase2", 4294967295, 1);
				}
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_290(&iLocal_682 + 4) < 3,8f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 46;
			}
			break;
		
		case 0x0000002E:
			if (Function_290(&iLocal_682 + 4) < 0,5f)
			{
				Function_398();
				Function_397();
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_290(&iLocal_682 + 4) < 2.0f)
			{
				uLocal_958 = GET_SOUND_ID();
				if (IS_SOUND_ID_VALID(&uLocal_958))
				{
					GET_POSITION(&iLocal_700, &Local_938);
					PLAY_SOUND_FROM_POSITION_PERSISTENT(&uLocal_958, "OUTLAW02_WINCH_LOOP_MASTER", Local_938);
				}
				Function_396(6);
				Function_289("out02_marston", "out02_marston/ride_lift/lift");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 56;
			}
			Function_395();
			break;
		
		case 0x00000038:
			if (Function_290(&iLocal_682 + 4) < 5.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 0);
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
				Function_350(&iLocal_700, &iLocal_4 + 1752[7], 1, 1, 1);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 65;
			}
			Function_395();
			break;
		
		case 0x00000041:
			if (Function_290(&iLocal_682 + 4) < 6,5f)
			{
				Function_390("out02_irish", "out02_irish/wave_down_mine/wave");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 66;
			}
			Function_395();
			break;
		
		case 0x00000042:
			if (Function_290(&iLocal_682 + 4) < 0,5f)
			{
				Function_231();
				Function_393();
				Function_302();
				Function_350(&Global_54076, &iLocal_4 + 1752[2], 1, 1, 1);
				Function_289("out02_marston", "out02_marston/winch/winch_out/winch_out_ready");
				Function_336();
				Function_303(&iLocal_4 + 1752[12]);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_290(&iLocal_682 + 4) < 8.0f)
			{
				Function_396(1);
				Function_289("out02_marston", "out02_marston/winch/winch_out/winch_out_pre");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
				if (IS_SOUND_ID_VALID(&uLocal_958))
				{
					STOP_SOUND(&uLocal_958);
					RELEASE_SOUND_ID(&uLocal_958);
				}
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 76;
			}
			break;
		
		case 0x0000004C:
			if (Function_290(&iLocal_682 + 4) < 0,5f)
			{
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
				Function_350(&iLocal_700, &iLocal_4 + 1752[8], 1, 1, 1);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_290(&iLocal_682 + 4) < 3,8f)
			{
				Function_350(&Global_54076, &iLocal_4 + 1752[3], 1, 1, 1);
				Function_289("out02_marston", "out02_marston/carry_crate/carry");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_290(&iLocal_682 + 4) < 5.0f)
			{
				Function_301();
				Function_300(1);
				Function_289("out02_marston", "out02_marston/cart/cart_in/cart_in_pre");
				Function_390("out02_irish", "out02_irish/irish_wagon/irish");
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				Function_298(&iLocal_682 + 4);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 96;
			}
			break;
		
		case 0x00000060:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_290(&iLocal_682 + 4) < 3,8f)
			{
				Function_279();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				CAMERA_MANUAL_CUT();
				iLocal_1074 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_395() //Position: 0x112E4 / 70372
{
	GET_OBJECT_POSITION(&uLocal_1001, &Local_938);
	SET_OBJECT_POSITION(&iLocal_4 + 2456, Local_938);
	return;
}

void Function_396(bool bParam0) //Position: 0x11304 / 70404
{
	if (Function_399())
	{
		switch (bParam0)
		{
			case 0x00000001:
				DECOR_SET_INT(&uLocal_993, "liftTopMidBot", true);
				break;
			
			case 0x00000002:
				DECOR_SET_INT(&uLocal_993, "liftTopMidBot", 2);
				break;
			
			case 0x00000003:
				DECOR_SET_INT(&uLocal_993, "liftTopMidBot", 3);
				break;
			
			case 0x00000004:
				DECOR_SET_INT(&uLocal_993, "liftMoveDownUp", true);
				break;
			
			case 0x00000005:
				DECOR_SET_INT(&uLocal_993, "liftMoveDownUp", 2);
				break;
			
			case 0x00000006:
				DECOR_SET_INT(&uLocal_993, "liftMoveDownUp", 3);
				break;
			}
	}
	return;
}

void Function_397() //Position: 0x113E6 / 70630
{
	if (Function_399())
	{
		uLocal_922 = GET_OBJECT_OWNER(&uLocal_993);
		if (IS_OBJECT_VALID(&uLocal_922))
		{
			Function_393();
			uLocal_1001 = CREATE_OBJECT_LOCATOR(&iLocal_622, "LiftBucketLoc02");
			if (IS_OBJECT_VALID(&uLocal_1001))
			{
				Function_76();
				Function_76();
				if (OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(&uLocal_1001, &uLocal_922, "liftbucket02", Function_76(), Function_76()))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2032[2], &Local_938);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[2], &Local_944);
					uLocal_997 = ATTACH_OBJECTS(&iLocal_4 + 2456, &uLocal_1001, Function_54(), Local_938, Local_944, 4294967295);
					if (!IS_ATTACHMENT_VALID(&uLocal_997))
					{
						LOG_ERROR("LiftBucketAttachCrate: Failed to attach crate to Lift Bucket locator!");
					}
				}
				else
				{
					LOG_ERROR("LiftBucketAttachCrate: Failed to attach Lift Bucket locator to Old Winch!");
				}
			}
			else
			{
				LOG_ERROR("LiftBucketAttachCrate: Failed to create Lift Bucket locator for Old Winch!");
			}
		}
		else
		{
			LOG_ERROR("LiftBucketAttachCrate: Failed to get Old Winch from Old Winch gringo!");
		}
	}
	else
	{
		LOG_ERROR("LiftBucketAttachPlayer: Failed to find Old Winch gringo! This is bad!");
	}
	return;
}

void Function_398() //Position: 0x1162A / 71210
{
	if (Function_399())
	{
		uLocal_922 = GET_OBJECT_OWNER(&uLocal_993);
		if (IS_OBJECT_VALID(&uLocal_922))
		{
			Function_231();
			uLocal_999 = CREATE_OBJECT_LOCATOR(&iLocal_622, "LiftBucketLoc01");
			if (IS_OBJECT_VALID(&uLocal_999))
			{
				Function_76();
				Function_76();
				if (OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(&uLocal_999, &uLocal_922, "liftbucket01", Function_76(), Function_76()))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2032[28], &Local_938);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[28], &Local_944);
					uLocal_995 = ATTACH_OBJECTS(&Global_54076, &uLocal_999, Function_54(), Local_938, Local_944, 4294967295);
					if (!IS_ATTACHMENT_VALID(&uLocal_995))
					{
						LOG_ERROR("LiftBucketAttachPlayer: Failed to attach player to Lift Bucket locator!");
					}
				}
				else
				{
					LOG_ERROR("LiftBucketAttachPlayer: Failed to attach Lift Bucket locator to Old Winch!");
				}
			}
			else
			{
				LOG_ERROR("LiftBucketAttachPlayer: Failed to create Lift Bucket locator for Old Winch!");
			}
		}
		else
		{
			LOG_ERROR("LiftBucketAttachPlayer: Failed to get Old Winch from Old Winch gringo!");
		}
	}
	else
	{
		LOG_ERROR("LiftBucketAttachPlayer: Failed to find Old Winch gringo! This is bad!");
	}
	return;
}

bool Function_399() //Position: 0x11873 / 71795
{
	if (!IS_GRINGO_VALID(&bLocal_991))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 2032[21], &Local_938);
		bLocal_991 = LOCATE_GRINGO_OF_TYPE("nold_winch", &Local_938, 1.0f, 0);
		if (IS_GRINGO_VALID(&bLocal_991))
		{
			uLocal_993 = GET_OBJECT_FROM_GRINGO(&bLocal_991);
			if (!IS_OBJECT_VALID(&uLocal_993))
			{
				return 0;
			}
		}
		return 0;
	}
	return 1;
}

int Function_400() //Position: 0x118D5 / 71893
{
	switch (iLocal_1073)
	{
		case 0x0000000F:
			if (IS_ACTION_NODE_PLAYING(&iLocal_700, "out02_irish/talk") && Function_290(&iLocal_682 + 4) < 0.0f)
			{
				Function_402();
				iLocal_1073 = 25;
			}
			break;
		
		case 0x00000019:
			if (GET_CUTSCENEOBJECT_SEQUENCE(&iLocal_682 + 24) != 8 && Function_290(&iLocal_682 + 4) < 0.0f)
			{
				Function_401();
				iLocal_1073 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_401() //Position: 0x11960 / 72032
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v2_AA", "Outlaw02_CS03_v2_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v2_AB", "Outlaw02_CS03_v2_AB", false, 4, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402() //Position: 0x119E4 / 72164
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v1_AA1", "Outlaw02_CS03_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS03_v1_AA2", "Outlaw02_CS03_v1_AA2", false, 4, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_403(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x11A6C / 72300
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 10, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Outlaw02_Cutscene04", 10, 1);
	}
	Function_404(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_404(int iParam0) //Position: 0x11AFB / 72443
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_414(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_413(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_412(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_411(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 4);
	Function_410(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 5);
	Function_409(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 6);
	Function_408(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 7);
	Function_407(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 8);
	Function_406(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 9);
	Function_405(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1000.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 1000.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1000.0f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 4, 1000.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 5, 1000.0f, 6);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 6, 1000.0f, 7);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 7, 1000.0f, 8);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 8, 9, 3,5f, 9, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 9, 1000.0f, 10);
	return;
}

void Function_405(int iParam0) //Position: 0x11C59 / 72793
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4469,906f, 37,73529f, 3145,784f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-1,489563f, -2,36896f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_406(int iParam0) //Position: 0x11CC6 / 72902
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4469,862f, 38,77385f, 3145,629f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-1,489693f, -2,370227f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_407(int iParam0) //Position: 0x11D33 / 73011
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4471,23f, 30,0332f, 3148,579f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,03929f, -0,574267f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_408(int iParam0) //Position: 0x11DA0 / 73120
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4473,898f, 37,27301f, 3145,41f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,317032f, 0,174779f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_409(int iParam0) //Position: 0x11E0D / 73229
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4473,025f, 24,75736f, 3142,187f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(1,153683f, 2,43313f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_410(int iParam0) //Position: 0x11E7A / 73338
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4473,107f, 28,44963f, 3142,48f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-1,540938f, 2,865356f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_411(int iParam0) //Position: 0x11EE7 / 73447
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4461,771f, 29,07048f, 3130,95f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,223597f, 2,493835f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_412(int iParam0) //Position: 0x11F54 / 73556
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4471,216f, 2,271105f, 3143,844f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,114335f, 1,790613f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_413(int iParam0) //Position: 0x11FC1 / 73665
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 13.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4472,96f, 20,55961f, 3143,185f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(1,391443f, 0,947451f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_414(int iParam0) //Position: 0x1202E / 73774
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 13.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4471,905f, 13,57181f, 3143,966f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(1,391541f, 1,103474f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_415(var uParam0, bool bParam1) //Position: 0x1209B / 73883
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

int Function_416() //Position: 0x120B1 / 73905
{
	return StackVal;
}

int Function_417() //Position: 0x120BC / 73916
{
	return Global_53524.f_68;
}

void Function_418(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x120C7 / 73927
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

void Function_419() //Position: 0x12170 / 74096
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

void Function_420(int iParam0, bool bParam1, bool bParam2) //Position: 0x121B1 / 74161
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

void Function_421(bool bParam0) //Position: 0x1231A / 74522
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

struct<16> Function_422() //Position: 0x124B2 / 74930
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

void Function_423() //Position: 0x124F8 / 75000
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_424(bool bParam0) //Position: 0x1251C / 75036
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

bool Function_425() //Position: 0x1254B / 75083
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_426(int iParam0) //Position: 0x12566 / 75110
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1480[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1528[1]);
			break;
		
		case 0x00000002:
			if (Function_427(Local_624) == 0)
			{
				return GET_OBJECT_HEADING(&iLocal_4 + 1672[0]);
			}
			return GET_OBJECT_HEADING(&iLocal_4 + 1672[1]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 1712[1]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 1752[4]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1872[0]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 1480[0]);
}

int Function_427(int iParam0) //Position: 0x12617 / 75287
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

struct<8> Function_428(int iParam0) //Position: 0x12631 / 75313
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_429(&iLocal_4 + 1480[0]);
			return StackVal, Function_429(&iLocal_4 + 1480[0]);
			break;
		
		case 0x00000001:
			Function_429(&iLocal_4 + 1528[1]);
			return StackVal, Function_429(&iLocal_4 + 1528[1]);
			break;
		
		case 0x00000002:
			if (Function_427(Local_624) == 0)
			{
				Function_429(&iLocal_4 + 1672[0]);
				return StackVal, Function_429(&iLocal_4 + 1672[0]);
			}
			Function_429(&iLocal_4 + 1672[1]);
			return StackVal, Function_429(&iLocal_4 + 1672[1]);
			break;
		
		case 0x00000003:
			Function_429(&iLocal_4 + 1712[1]);
			return StackVal, Function_429(&iLocal_4 + 1712[1]);
			break;
		
		case 0x00000004:
			Function_429(&iLocal_4 + 1752[4]);
			return StackVal, Function_429(&iLocal_4 + 1752[4]);
			break;
		
		default:
			Function_429(&iLocal_4 + 1872[0]);
			return StackVal, Function_429(&iLocal_4 + 1872[0]);
			break;
	}
	Function_429(&iLocal_4 + 1480[0]);
	return StackVal, Function_429(&iLocal_4 + 1480[0]);
}

struct<8> Function_429(bool bParam0) //Position: 0x126E2 / 75490
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

void Function_430() //Position: 0x1270B / 75531
{
	Function_323();
	Function_396(1);
	Function_435();
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	Function_434(&iLocal_4 + 880, 5);
	GET_OBJECT_POSITION(&iLocal_4 + 2032[29], &Local_938);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[29], &Local_944);
	iLocal_1010 = CREATE_PROP_IN_LAYOUT(&iLocal_622, "nPowderKeg", "p_gen_powderKeg02x", Local_938, Local_944, 1);
	if (IS_OBJECT_VALID(&iLocal_1010))
	{
		uLocal_924 = GET_PHYSINST_FROM_OBJECT(&iLocal_1010);
		if (IS_PHYSINST_VALID(&uLocal_924))
		{
			SET_PROP_TARGETABLE(&uLocal_924, 1, 0);
			SET_PROP_TARGETABLE_AS_ENEMY(&uLocal_924, 1);
			SET_PROP_TARGETABLE_SCORE_BIAS(&uLocal_924, -100000.0f);
			SET_PROP_TARGETABLE_ACQUISITION_RADIUS(&uLocal_924, 100.0f);
			SET_PROP_TARGETABLE_TARGET_BOX_SIZE(&uLocal_924, 5.0f, 5.0f);
		}
		else
		{
			LOG_ERROR("Failed to make PowderKeg targettable!");
		}
	}
	else
	{
		LOG_ERROR("Failed to create PowderKeg on the tracks!");
	}
	Function_433();
	SET_ACTOR_INVULNERABILITY(&iLocal_700, false);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, false);
	Function_274();
	Function_431(&iLocal_4 + 824[02], &Global_54076, 1);
	Function_431(&iLocal_4 + 824[12], &Global_54076, 1);
	ACTOR_DRAW_ANY_WEAPON(&iLocal_4 + 824[02], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 824[02], 0);
	ACTOR_DRAW_ANY_WEAPON(&iLocal_4 + 824[12], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 824[12], 0);
	return;
}

void Function_431(var uParam0, var uParam1, bool bParam2) //Position: 0x128A1 / 75937
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &uParam1);
			Function_432(&uParam1);
			uVar0 = Function_432(&uParam1);
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

struct<8> Function_432(var uParam0) //Position: 0x129B2 / 76210
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

void Function_433() //Position: 0x12A1E / 76318
{
	if (Function_250())
	{
		ENABLE_VEHICLE_SEAT(&iLocal_988, false, 1);
		ENABLE_VEHICLE_SEAT(&iLocal_988, true, 1);
		TRAIN_SET_ENGINE_ENABLED(iLocal_987, 0);
	}
	else
	{
		LOG_ERROR("MineCartStart: Failed to get MineCart actor!");
	}
	return;
}

void Function_434(var uParam0, bool bParam1) //Position: 0x12A7A / 76410
{
	bool bVar0;
	
	bVar0 = 4294967295;
	bLocal_952 = false;
	while (bLocal_952 <= SQUAD_GET_SIZE(&uParam0))
	{
		iLocal_934 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_952);
		if (IS_ACTOR_ALIVE(&iLocal_934))
		{
			bVar0 = GET_ACTOR_ENUM(&iLocal_934);
			switch (bParam1)
			{
				case 0x00000000:
					switch (bVar0)
					{
						case 0x000001F9:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_OtherMinersSpotJon_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_OtherMinersSpotJon_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_OtherMinersSpotJon_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_OtherMinersSpotJon_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_OtherMinersSpotJon_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_OtherMinersSpotJon_02");
							break;
						
						case 0x000001FB:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_OtherMinersSpotJon_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_OtherMinersSpotJon_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_OtherMinersSpotJon_03");
							break;
					}
					break;
				
				case 0x00000001:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonEntersFrontMine");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonEntersFrontMine");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonEntersFrontMine");
							break;
					}
					break;
				
				case 0x00000002:
					switch (bVar0)
					{
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonEntersTruShaft");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonEntersTruShaft");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonEntersTruShaft");
							break;
					}
					break;
				
				case 0x00000003:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonSpottedInsideMine_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonSpottedInsideMine_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonSpottedInsideMine_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonSpottedInsideMine_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonSpottedInsideMine_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonSpottedInsideMine_02");
							break;
						
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonSpottedInsideMine_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonSpottedInsideMine_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonSpottedInsideMine_03");
							break;
					}
					break;
				
				case 0x00000004:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonClose2MachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonClose2MachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonClose2MachineGun_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonClose2MachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonClose2MachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonClose2MachineGun_02");
							break;
						
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonClose2MachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonClose2MachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonClose2MachineGun_03");
							break;
					}
					break;
				
				case 0x00000005:
					switch (bVar0)
					{
						case 0x000001FC:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonOnMachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonOnMachineGun_01");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonOnMachineGun_01");
							break;
						
						case 0x000001FA:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonOnMachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonOnMachineGun_02");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonOnMachineGun_02");
							break;
						
						case 0x000001FE:
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "THIS_WAY", "Outlaw02_JonOnMachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "SPOTTED", "Outlaw02_JonOnMachineGun_03");
							AUDIO_ADD_ALTERNATE_CONTEXT(&iLocal_934, "TAUNT_FIGHT", "Outlaw02_JonOnMachineGun_03");
							break;
					}
					break;
				}
		}
		bLocal_952++;
	}
	return;
}

void Function_435() //Position: 0x13408 / 78856
{
	*(&iLocal_4 + 880) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 824[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 508, Vector(-4528.0f, 30,10574f, 3136f), Vector(0.0f, 220,6965f, 0.0f));
	Function_436(&iLocal_4 + 824[02], &iLocal_4 + 880, 1, 1, 0);
	*(&iLocal_4 + 824[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 509, Vector(-4465,452f, 24,76764f, 3191,795f), Vector(179,9547f, 46,43098f, -179,9583f));
	Function_436(&iLocal_4 + 824[12], &iLocal_4 + 880, 1, 1, 0);
	*(&iLocal_4 + 824[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 510, Vector(-4513,111f, 15,85748f, 3230,002f), Vector(0.0f, 152,57f, 0.0f));
	Function_436(&iLocal_4 + 824[22], &iLocal_4 + 880, 1, 1, 0);
	return;
}

void Function_436(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x134EE / 79086
{
	SQUAD_JOIN(&bParam0, &uParam1);
	SET_ACTOR_UPDATE_PRIORITY(&bParam0, false);
	Function_437(&bParam0);
	if (bParam2)
	{
		SET_ACTOR_FACTION(&bParam0, 19);
	}
	if (bParam3)
	{
		TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&bParam0, true);
	}
	if (bParam4)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&bParam0);
	}
}

void Function_437(bool bParam0) //Position: 0x13539 / 79161
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

void Function_438() //Position: 0x13570 / 79216
{
	Function_259(&iLocal_956, 7, 0, 4294967295, 4294967295);
	if (!Function_250())
	{
		if (Function_338())
		{
			Function_337(0);
			Function_336();
		}
	}
	else
	{
		Function_336();
	}
	Function_396(3);
	Function_322(0, 0);
	Function_321();
	Function_274();
	return;
}

bool Function_439(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x135A9 / 79273
{
	if (Function_440(&iParam0) == iParam6 || Function_425())
	{
		return 1;
	}
	return 0;
}

int Function_440(int iParam0) //Position: 0x135C8 / 79304
{
	if (Function_441(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_441(struct<37> Param0) //Position: 0x135E1 / 79329
{
	return Param0.f_36;
}

void Function_442() //Position: 0x135EC / 79340
{
	return;
}

bool Function_443() //Position: 0x135F2 / 79346
{
	if (Function_444())
	{
		return 1;
	}
	return 0;
}

bool Function_444() //Position: 0x13601 / 79361
{
	Function_348(&iLocal_4 + 504, 1199, 2, 0);
	Function_348(&iLocal_4 + 504, 976, 2, 0);
	Function_348(&iLocal_4 + 504, 508, 2, 0);
	Function_348(&iLocal_4 + 504, 509, 2, 0);
	Function_348(&iLocal_4 + 504, 510, 2, 0);
	if (Function_343(&iLocal_4 + 504))
	{
		return 1;
	}
	return 0;
}

void Function_445() //Position: 0x1365B / 79451
{
	Function_355(&iLocal_700);
	Function_355(&iLocal_702);
	return;
}

void Function_446() //Position: 0x1366F / 79471
{
	Function_444();
	*(&iLocal_682 + 24) = Function_403(&iLocal_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(&iLocal_682 + 24))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene04 - Failed to create Outlaw02_Cutscene04_cutscene (paused)");
	}
	return;
}

bool Function_447() //Position: 0x136F8 / 79608
{
	Function_250();
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[4]))
	{
		KILL_ACTOR(&Global_54076);
	}
	if (IS_OBJECT_VALID(&iLocal_1010))
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Vehicle/Engaged/MineCart/Riding") || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Vehicle/VehicleGunplay/MineCart/PistolAim/PistolMineCartRide"))
		{
			Function_259(&iLocal_956, 17, 0, 4294967295, 4294967295);
		}
		if (IS_ACTOR_IN_VOLUME(&iLocal_988, &iLocal_4 + 1112[11]))
		{
			GET_OBJECT_POSITION(&iLocal_1010, &Local_938);
			Function_463(&Local_938, "DynamiteExplosion", 0, 1);
			DESTROY_OBJECT(&iLocal_1010);
			if (Function_462())
			{
				KILL_ACTOR(&Global_54076);
				return 1;
			}
			Function_266("Outlaw02_exploded_minecart");
			bLocal_735 = true;
			return 1;
		}
	}
	if (!iLocal_1006)
	{
		Function_259(&iLocal_956, 40, 0, 4294967295, 4294967295);
	}
	switch (iLocal_1068)
	{
		case 0x00000000:
			iLocal_1068 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_462())
			{
				Function_259(&iLocal_956, 10, 0, 4294967295, 4294967295);
				if (!iLocal_1004)
				{
					Function_461();
				}
				Function_349(15, "STAGE 05 - OBJ_02-OBJ_01");
				iLocal_1068 = 2;
			}
			if (!iLocal_1004)
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_988, 5.0f))
				{
					iLocal_1004 = 1;
					Function_374(1);
					Function_461();
				}
			}
			break;
		
		case 0x00000002:
			if (Function_459(&iLocal_4 + 1112[12], &iLocal_4 + 2312[6]))
			{
				iLocal_1068 = 3;
				return 1;
			}
			if (IS_OBJECT_VALID(&iLocal_1010))
			{
				if (!iLocal_1005)
				{
					if (Function_457(&iLocal_988, &iLocal_4 + 2312[5], 0,5f))
					{
						Function_259(&iLocal_956, 17, 0, 4294967295, 4294967295);
						iLocal_1005 = 1;
						Function_298(&bLocal_714);
						Function_314(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
						Function_456(&iLocal_622, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
						Function_454(StackVal, StackVal, Vector(-4513,695f, 16,211f, 3232,042f), Vector(-0,073f, 0,223f, -0,972f), -1.0f, 0, 1);
						if (IS_ACTOR_ALIVE(&iLocal_4 + 824[22]))
						{
							Function_431(&iLocal_4 + 824[22], &Global_54076, 1);
							ACTOR_DRAW_ANY_WEAPON(&iLocal_4 + 824[22], 1);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 824[22], 0);
							GET_OBJECT_POSITION(&iLocal_4 + 2032[30], &Local_938);
							GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[30], &Local_944);
							bLocal_952 = TASK_SEQUENCE_OPEN();
							TASK_ACTION_PERFORM(false, "dynamite/mex_burry");
							TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_938, -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_CLEAR(&iLocal_4 + 824[22]);
							TASK_PRIORITY_SET(&iLocal_4 + 824[22], true);
							TASK_SEQUENCE_PERFORM(&iLocal_4 + 824[22], bLocal_952);
							TASK_SEQUENCE_RELEASE(bLocal_952, 1);
						}
					}
				}
				else if (Function_292(&bLocal_714))
				{
					if (Function_290(&bLocal_714) <= 2.0f)
					{
						Function_280(0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						Function_453(1, 1);
						STREAMING_UNLOAD_SCENE();
						STREAMING_SET_POI_LIMIT(1);
						Function_380(&bLocal_714);
					}
				}
			}
			if (!iLocal_1006)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[7]))
				{
					iLocal_1006 = 1;
					RESET_ACTOR_GAITS(&iLocal_702, 0);
					MEMORY_PREFER_RIDING(&iLocal_700, false);
					Function_321();
					Function_451(&iLocal_700, &iLocal_4 + 2032[7], 1, 1, 1);
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[7]))
			{
				Function_259(&iLocal_956, 10, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			if (Function_449(&iLocal_4 + 2312[6], 1.0f))
			{
				iLocal_1068 = 4;
				return 1;
			}
			if (IS_OBJECT_VALID(&uLocal_928))
			{
				if (GATEWAY_UPDATE(&uLocal_928))
				{
					Function_239();
				}
			}
			if (!iLocal_1007)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[0]))
				{
					iLocal_1007 = 1;
					Function_448();
				}
			}
			break;
		
		case 0x00000004:
			return 0;
			break;
	}
	if (!iLocal_1003)
	{
		if (iLocal_695 < 6 && !IS_ACTION_NODE_PLAYING(&iLocal_700, "out02_irish/irish_leave/leave"))
		{
			iLocal_1003 = 1;
			MEMORY_PREFER_RIDING(&iLocal_700, false);
			bLocal_952 = TASK_SEQUENCE_OPEN();
			TASK_MOUNT(false, &iLocal_702, 0, 1, 2, 2147483647);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2440, 3, 0, 0, 1, false);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&iLocal_700);
			TASK_PRIORITY_SET(&iLocal_700, true);
			TASK_SEQUENCE_PERFORM(&iLocal_700, bLocal_952);
			TASK_SEQUENCE_RELEASE(bLocal_952, 1);
		}
	}
	return 1;
}

void Function_448() //Position: 0x13BC1 / 80833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_JonIrishMineCart", "Outlaw02_JonIrishMineCart", false, 2, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_449(var uParam0, int iParam1) //Position: 0x13C1C / 80924
{
	GET_OBJECT_POSITION(&uParam0, &Local_938);
	return Function_450(StackVal, Local_938, iParam1);
}

int Function_450(struct<2> Param0, float fParam2) //Position: 0x13C36 / 80950
{
	bLocal_950 = TRAIN_GET_VELOCITY(iLocal_987);
	if (Function_462())
	{
		GET_POSITION(&iLocal_988, &Local_938);
		bLocal_951 = VDIST(Local_938, Param0);
		if (bLocal_951 < bLocal_990 || (bLocal_951 >= fParam2 && bLocal_950 >= 0,5f))
		{
			Function_336();
			return 1;
		}
		bLocal_990 = bLocal_951;
		if (bLocal_950 > 2.0f)
		{
			TRAIN_SET_TARGET_SPEED(iLocal_987, 2.0f);
		}
		else if (bLocal_950 < 5.0f)
		{
			TRAIN_SET_TARGET_SPEED(iLocal_987, 5.0f);
		}
	}
	else if (bLocal_950 < 0.0f)
	{
		TRAIN_SET_TARGET_SPEED(iLocal_987, 0.0f);
	}
	return 0;
}

void Function_451(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x13CBE / 81086
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				Function_452(StackVal, StackVal, &iParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_452(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x13DDE / 81374
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

void Function_453(bool bParam0, bool bParam1) //Position: 0x13EAD / 81581
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

void Function_454(struct<2> Param0, struct<2> Param2, int iParam4, var uParam5, var uParam6) //Position: 0x13F03 / 81667
{
	Function_455(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (&iParam4 >= 0.0f)
	{
		iParam4 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &uParam6);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, &iParam4);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam5))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam5, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_455(float fParam0) //Position: 0x1401D / 81949
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_456(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x14030 / 81968
{
	Function_453(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &uParam3;
	Global_99148.f_20 = &uParam4;
	Global_99148.f_24 = &uParam5;
	Global_99148.f_28 = &uParam6;
	Global_99148.f_32 = &uParam7;
	Global_99148.f_36 = &uParam8;
	Global_99148.f_40 = &uParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &uParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &uParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

bool Function_457(int iParam0, var uParam1, float fParam2) //Position: 0x14139 / 82233
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_432(&iParam0);
			Function_458(&uParam1);
			if (VDIST(Function_432(&iParam0), Function_458(&uParam1)) >= fParam2)
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

struct<8> Function_458(int iParam0) //Position: 0x14257 / 82519
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

bool Function_459(var uParam0, int iParam1) //Position: 0x142C5 / 82629
{
	GET_OBJECT_POSITION(&iParam1, &Local_938);
	return Function_460(StackVal, &uParam0, Local_938);
}

int Function_460(var uParam0, int iParam1, int iParam2) //Position: 0x142E0 / 82656
{
	if (Function_462())
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_988, &uParam0))
		{
			CANCEL_DEADEYE();
			SET_PLAYER_CONTROL(0, 0, 1, 1);
			SET_ACTOR_INVULNERABILITY(&Global_54076, true);
			TRAIN_SET_ENGINE_ENABLED(iLocal_987, 1);
			TRAIN_SET_TARGET_POS(iLocal_987, &iParam1);
			bLocal_990 = 10000.0f;
			return 1;
		}
	}
	return 0;
}

void Function_461() //Position: 0x14325 / 82725
{
	GET_OBJECT_POSITION(&iLocal_4 + 2032[22], &Local_938);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[22], &Local_944);
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &Local_938, 2,5f, 2);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_938, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 824[02]);
	TASK_PRIORITY_SET(&iLocal_4 + 824[02], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 824[02], bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	GET_OBJECT_POSITION(&iLocal_4 + 2032[23], &Local_938);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 2032[23], &Local_944);
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &Local_938, 2,5f, 2);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_938, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 824[12]);
	TASK_PRIORITY_SET(&iLocal_4 + 824[12], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 824[12], bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 824[12], 2048, 1);
	return;
}

bool Function_462() //Position: 0x14423 / 82979
{
	if (Function_250())
	{
		if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_988, false) != &Global_54076 || GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_988, true) != &Global_54076)
		{
			return 1;
		}
	}
	return 0;
}

void Function_463(float fParam0, float fParam1, float fParam2, var uParam3) //Position: 0x14450 / 83024
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &uParam3);
}

void Function_464() //Position: 0x14470 / 83056
{
	if (iLocal_695 < 5 && iLocal_695 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 944[3]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 944[3]))
			{
				Function_446();
				iLocal_957 = 0;
				DESTROY_VOLUME(&iLocal_4 + 944[3]);
			}
		}
		else if (!iLocal_957)
		{
			if (Function_443())
			{
				Function_442();
				iLocal_957 = 1;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&Global_54076))
		{
			ACTOR_DISMOUNT_NOW(&Global_54076);
			TASK_ACTION_PERFORM(&Global_54076, "/Global/default_character_Main/ReactionProcessing/ReactionProcessing_Player/Fire/Standing");
		}
		if (!Function_479())
		{
			Function_349(106, "STAGE 04 - COMPLETE");
		}
	}
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_357(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 944[2]))
			{
				Function_478();
				DESTROY_VOLUME(&iLocal_4 + 944[2]);
			}
			Function_477();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_351();
			bLocal_697 = Global_46736[1];
			if (iLocal_722[2] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_319(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_202(1, 0, 1);
				Function_350(&Global_54076, &iLocal_4 + 1712[0], 1, 1, 1);
				Function_349(1, "STAGE 04 - STREAMING GOAL");
			}
			else
			{
				Function_349(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_476() && STREAMING_IS_WORLD_LOADED()) && (Function_340(bLocal_697) || bLocal_697 != 4294967295))
			{
				Function_475();
				Function_349(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_439(StackVal, StackVal, StackVal, StackVal, StackVal, Local_624, iLocal_694))
			{
				Function_474();
				Function_349(3, "STAGE 04 - CUTSCENE GOAL");
			}
			else
			{
				if (!Function_250())
				{
					if (Function_338())
					{
						Function_337(0);
						Function_336();
						Function_303(&iLocal_4 + 2032[11]);
					}
				}
				else
				{
					Function_336();
				}
				Function_350(&Global_54076, &iLocal_4 + 1712[1], 1, 1, 1);
				Function_350(&iLocal_700, &iLocal_4 + 1712[2], 1, 1, 1);
				Function_473();
				Function_349(4, "STAGE 04 - POST-CUTSCENE GOAL");
			}
			Function_428(iLocal_694);
			Function_418(StackVal, Function_428(iLocal_694), iLocal_694, Global_46736[1], Function_426(iLocal_694), 1);
			iLocal_696 = Function_417();
			break;
		
		case 0x00000003:
			if (Function_466())
			{
				Function_473();
				Function_349(4, "STAGE 04 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_276(1.0f);
			Function_388(1);
			Function_349(6, "STAGE 04 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_257();
				Function_387("Outlaw02_obj04_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_386(1);
				Function_349(7, "STAGE 04 - OBJ_01-HELP_01");
			}
			break;
		
		case 0x00000007:
			if (Function_290(&bLocal_706) <= 2.0f)
			{
				Function_139("Outlaw02_obj04_help_1", 10.0f, 1, 0, 2, 1, 0);
				Function_349(13, "STAGE 04 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_386(0);
				Function_377(5);
				Function_349(14, "STAGE 04 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_238();
				Function_386(1);
				Function_349(13, "STAGE 04 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_257();
				Function_387("Outlaw02_obj04_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_386(0);
				Function_372(0, &iLocal_988, 1.0f, 4294967295);
				Function_349(16, "STAGE 04 - OBJ_02-HELP_01");
			}
			break;
		
		case 0x00000010:
			if (Function_290(&bLocal_706) <= 2.0f)
			{
				Function_139("Outlaw02_obj04_help_2", 10.0f, 1, 0, 2, 1, 0);
				Function_349(17, "STAGE 04 - OBJ_02-HELP_02");
			}
			break;
		
		case 0x00000011:
			if (Function_290(&bLocal_706) <= 10,5f)
			{
				Function_139("Outlaw02_obj04_help_3", 10.0f, 1, 0, 2, 1, 0);
				Function_349(18, "STAGE 04 - OBJ_02-HELP_03");
			}
			break;
		
		case 0x00000012:
			if (Function_290(&bLocal_706) <= 10,5f)
			{
				Function_139("Outlaw02_obj05_help", 10.0f, 1, 0, 2, 1, 0);
				Function_349(23, "STAGE 04 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x00000017:
			if (Function_365(&bLocal_710, 60.0f, &iLocal_988, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_239();
				Function_386(1);
				Function_349(24, "STAGE 04 - OBJ_02-LOOP_FAIL");
			}
			break;
		
		case 0x00000018:
			if (!Function_365(&bLocal_710, 60.0f, &iLocal_988, 4294967295, "Outlaw02_obj_return_minecart", "Outlaw02_too_far_minecart", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_386(0);
				Function_372(0, &iLocal_988, 1.0f, 4294967295);
				Function_349(23, "STAGE 04 - OBJ_02-LOOP_PASS");
			}
			break;
		
		case 0x0000006A:
			Function_465();
			iLocal_694 = 4;
			iLocal_722[3] = 1;
			Function_349(0, "STAGE 05 - INITIALIZE");
			break;
	}
	return;
}

void Function_465() //Position: 0x14C36 / 85046
{
	Function_247();
	Function_243();
	return;
}

bool Function_466() //Position: 0x14C42 / 85058
{
	var uVar0;
	
	Function_318(&iLocal_682, 1, 0);
	switch (iLocal_682)
	{
		case 0x000003E8:
			Function_314(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				*(&iLocal_682 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				Function_472(&iLocal_682 + 24, 0);
			}
			else
			{
				*(&iLocal_682 + 24) = Function_469(&iLocal_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene03 - Failed to create Outlaw02_Cutscene03_cutscene");
				iLocal_682 = 1000;
				return 1;
			}
			iLocal_682 = 1001;
			break;
		
		case 0x000003E9:
			Function_304(&Global_54076, 1, 1);
			Function_350(&Global_54076, &iLocal_4 + 1712[0], 1, 1, 1);
			Function_350(&iLocal_700, &iLocal_4 + 1712[2], 1, 1, 1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 888[2], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 888[2]);
			iLocal_682 = 1002;
			break;
		
		case 0x000003EA:
			Function_276(1.0f);
			Function_301();
			Function_300(3);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "out02_marston", 0);
			uLocal_924 = GET_PHYSINST_FROM_OBJECT(&iLocal_4 + 2464);
			if (IS_PHYSINST_VALID(&uLocal_924))
			{
				uLocal_926 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_924);
				if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_926))
				{
					uLocal_926 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_924, "out02_marston", "out02_marston", "out02_marston/close_crate/");
				}
				if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_926))
				{
					LOG_ERROR("Failed to create object animator on 'CrateGatling02x'!");
				}
			}
			else
			{
				LOG_ERROR("Failed to get physinst from 'CrateGatling02x'!");
			}
			iLocal_682 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_1071 = 15;
				iLocal_1072 = 15;
				iLocal_682 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_468() && Function_467())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_682 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_304(&Global_54076, 0, 1);
				Function_337(0);
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
				Function_350(&Global_54076, &iLocal_4 + 1712[1], 1, 1, 1);
				Function_350(&iLocal_700, &iLocal_4 + 1712[2], 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[2]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[2]);
				DESTROY_VOLUME(&iLocal_4 + 888[2]);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				Function_280(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_682 + 24))
				{
					DESTROY_OBJECT(&iLocal_682 + 24);
				}
				iLocal_682 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_257();
				Function_256();
				Function_279();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				iLocal_682 = 1104;
			}
			break;
	}
	return 0;
}

int Function_467() //Position: 0x14FF9 / 86009
{
	switch (iLocal_1072)
	{
		case 0x0000000F:
			if (IS_OBJECT_ANIMATOR_READY(&uLocal_926))
			{
				Function_289("out02_marston", "out02_marston/close_crate/close");
				SET_OBJECT_ANIMATOR_NODE(&uLocal_926, "/global/out02_marston/close_crate/crate");
				iLocal_1072 = 25;
			}
			break;
		
		case 0x00000019:
			if (!IS_ACTION_NODE_PLAYING(&Global_54076, "out02_marston/close_crate/close"))
			{
				Function_279();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				iLocal_1072 = 106;
			}
			break;
		
		case 0x00000023:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1072 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_468() //Position: 0x151A2 / 86434
{
	switch (iLocal_1071)
	{
		case 0x0000000F:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				iLocal_1071 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var Function_469(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x151E4 / 86500
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Outlaw02_Cutscene03", 1, 1);
	}
	Function_470(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_470(int iParam0) //Position: 0x15271 / 86641
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_471(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1000.0f, 0);
	return;
}

void Function_471(int iParam0) //Position: 0x1529E / 86686
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4431,866f, 2,872099f, 3126,31f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,856409f, -0,659559f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_472(var uParam0, bool bParam1) //Position: 0x1530B / 86795
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

void Function_473() //Position: 0x15321 / 86817
{
	Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
	Function_396(3);
	Function_433();
	return;
}

void Function_474() //Position: 0x15338 / 86840
{
	Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
	if (!Function_250())
	{
		if (Function_338())
		{
			Function_337(1);
			Function_336();
			Function_303(&iLocal_4 + 2032[11]);
		}
	}
	else
	{
		Function_336();
	}
	return;
}

void Function_475() //Position: 0x1536F / 86895
{
	return;
}

bool Function_476() //Position: 0x15375 / 86901
{
	return 1;
}

void Function_477() //Position: 0x1537C / 86908
{
	Function_355(&iLocal_700);
	Function_355(&iLocal_702);
	return;
}

void Function_478() //Position: 0x15390 / 86928
{
	Function_188();
	*(&iLocal_682 + 24) = Function_469(&iLocal_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(&iLocal_682 + 24))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene03 - Failed to create Outlaw02_Cutscene03_cutscene (paused)");
	}
	return;
}

bool Function_479() //Position: 0x15418 / 87064
{
	Function_250();
	switch (iLocal_1067)
	{
		case 0x00000000:
			iLocal_1067 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_462())
			{
				Function_259(&iLocal_956, 10, 0, 4294967295, 4294967295);
				Function_349(15, "STAGE 04 - OBJ_02-OBJ_01");
				iLocal_1067 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (Function_459(&iLocal_4 + 1112[3], &iLocal_4 + 2312[0]))
			{
				Function_259(&iLocal_956, 17, 0, 4294967295, 4294967295);
				iLocal_1067 = 3;
				return 1;
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Vehicle/Engaged/MineCart/Riding") || IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "Vehicle/VehicleGunplay/MineCart/PistolAim/PistolMineCartRide"))
			{
				Function_259(&iLocal_956, 17, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			if (Function_449(&iLocal_4 + 2312[0], 1.0f))
			{
				iLocal_1067 = 4;
				return 1;
			}
			if (IS_OBJECT_VALID(&uLocal_928))
			{
				if (GATEWAY_UPDATE(&uLocal_928))
				{
					Function_239();
				}
			}
			break;
		
		case 0x00000004:
			return 0;
			break;
	}
	return 1;
}

void Function_480() //Position: 0x1556E / 87406
{
	if (iLocal_695 < 5 && iLocal_695 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 944[2]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 944[2]))
			{
				Function_478();
				iLocal_957 = 0;
				DESTROY_VOLUME(&iLocal_4 + 944[2]);
			}
		}
		else if (!iLocal_957)
		{
			if (Function_476())
			{
				Function_475();
				iLocal_957 = 1;
			}
		}
		if (!Function_516())
		{
			Function_349(106, "STAGE 03 - COMPLETE");
		}
	}
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_357(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 944[1]))
			{
				Function_515();
				DESTROY_VOLUME(&iLocal_4 + 944[1]);
			}
			Function_514();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
			Function_351();
			bLocal_697 = Global_46796[3];
			if (iLocal_722[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_319(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_202(1, 0, 1);
				if (Function_427(Local_624) == 0)
				{
					Function_350(&Global_54076, &iLocal_4 + 1672[0], 1, 1, 1);
				}
				else
				{
					Function_350(&Global_54076, &iLocal_4 + 1672[1], 1, 1, 1);
				}
				Function_350(&iLocal_700, &iLocal_4 + 1672[2], 1, 1, 1);
				Function_349(1, "STAGE 03 - STREAMING GOAL");
			}
			else
			{
				Function_349(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_512() && STREAMING_IS_WORLD_LOADED()) && (Function_340(bLocal_697) || bLocal_697 != 4294967295))
			{
				Function_501();
				Function_349(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_428(iLocal_694);
			Function_418(StackVal, Function_428(iLocal_694), iLocal_694, Global_46736[1], Function_426(iLocal_694), 1);
			iLocal_696 = Function_417();
			Function_276(1.0f);
			Function_487();
			Function_388(1);
			Function_349(6, "STAGE 03 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_257();
				Function_387("Outlaw02_obj03_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_377(15);
				Function_349(13, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_377(5);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_349(14, "STAGE 03 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_377(15);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_349(13, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_257();
				Function_387("Outlaw02_obj03_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_238();
				Function_372(4, &Global_54076, 3.0f, 4294967295);
				Function_349(23, "STAGE 03 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_239();
				Function_377(5);
				Function_349(24, "STAGE 03 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_378(&bLocal_710, Global_46796[3], 0, "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_238();
				Function_372(4, &Global_54076, 3.0f, 4294967295);
				Function_349(23, "STAGE 03 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			if (Function_290(&bLocal_706) <= 3.0f)
			{
				Function_349(106, "STAGE 03 - COMPLETE");
				iLocal_1066 = 15;
			}
			else if (!Function_457(&Global_54076, &iLocal_4 + 2312[4], 3.0f))
			{
				Function_349(15, "STAGE 03 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x0000006A:
			Function_481();
			Function_388(0);
			iLocal_694 = 3;
			iLocal_722[2] = 1;
			Function_349(0, "STAGE 04 - INITIALIZE");
			break;
	}
	return;
}

void Function_481() //Position: 0x15B09 / 88841
{
	Function_486();
	Function_485();
	Function_483();
	Function_482();
	Function_244();
	return;
}

void Function_482() //Position: 0x15B1E / 88862
{
	if (SQUAD_IS_VALID(&iLocal_4 + 768))
	{
		Function_363(&iLocal_4 + 768, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 768);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 760))
	{
		Function_363(&iLocal_4 + 760, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 760);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 784))
	{
		Function_363(&iLocal_4 + 784, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 784);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 736))
	{
		Function_363(&iLocal_4 + 736, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 736);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 776))
	{
		Function_363(&iLocal_4 + 776, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 776);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 792))
	{
		Function_363(&iLocal_4 + 792, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 792);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 744))
	{
		Function_363(&iLocal_4 + 744, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 744);
	}
	return;
}

void Function_483() //Position: 0x15BFD / 89085
{
	if (SQUAD_IS_VALID(&bLocal_983))
	{
		Function_484(&bLocal_983);
		DESTROY_OBJECT(&bLocal_983);
	}
	return;
}

void Function_484(bool bParam0) //Position: 0x15C1A / 89114
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

void Function_485() //Position: 0x15C68 / 89192
{
	if (SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		Function_484(&iLocal_4 + 808);
		DESTROY_OBJECT(&iLocal_4 + 808);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 816))
	{
		Function_484(&iLocal_4 + 816);
		DESTROY_OBJECT(&iLocal_4 + 816);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 800))
	{
		Function_484(&iLocal_4 + 800);
		DESTROY_OBJECT(&iLocal_4 + 800);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 752))
	{
		Function_484(&iLocal_4 + 752);
		DESTROY_OBJECT(&iLocal_4 + 752);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 728))
	{
		Function_484(&iLocal_4 + 728);
		DESTROY_OBJECT(&iLocal_4 + 728);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 720))
	{
		Function_484(&iLocal_4 + 720);
		DESTROY_OBJECT(&iLocal_4 + 720);
	}
	return;
}

void Function_486() //Position: 0x15D1C / 89372
{
	bLocal_952 = false;
	while (bLocal_952 <= 2)
	{
		iLocal_934 = &iLocal_4 + 656[bLocal_9522];
		if (IS_ACTOR_VALID(&iLocal_934))
		{
			uLocal_936 = GET_MOUNT(&iLocal_934);
			DESTROY_ACTOR(&iLocal_934);
			if (IS_ACTOR_VALID(&uLocal_936))
			{
				DESTROY_ACTOR(&uLocal_936);
			}
		}
		bLocal_952++;
	}
	return;
}

void Function_487() //Position: 0x15D74 / 89460
{
	if (Function_427(Local_624) == 0)
	{
		Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
	}
	else
	{
		Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
	}
	if (Function_338())
	{
		Function_337(1);
		Function_336();
		Function_303(&iLocal_4 + 2032[11]);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	if (iLocal_696 < 0 || Function_427(Local_624) != 0)
	{
		Function_396(3);
	}
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	if (Function_427(Local_624) == 0)
	{
		Function_434(&iLocal_4 + 768, 1);
		Function_434(&iLocal_4 + 760, 1);
		Function_434(&iLocal_4 + 784, 3);
	}
	else
	{
		Function_434(&iLocal_4 + 784, 2);
	}
	Function_434(&iLocal_4 + 736, 3);
	Function_434(&iLocal_4 + 776, 3);
	Function_434(&iLocal_4 + 792, 3);
	Function_434(&iLocal_4 + 744, 4);
	if (Function_427(Local_624) == 0)
	{
		Function_500(&iLocal_4 + 768, 1);
		Function_499(&iLocal_4 + 768, 0);
		Function_500(&iLocal_4 + 760, 1);
		Function_499(&iLocal_4 + 760, 0);
	}
	Function_500(&iLocal_4 + 784, 1);
	Function_499(&iLocal_4 + 784, 0);
	Function_500(&iLocal_4 + 736, 1);
	Function_499(&iLocal_4 + 736, 0);
	Function_500(&iLocal_4 + 776, 1);
	Function_499(&iLocal_4 + 776, 0);
	Function_500(&iLocal_4 + 792, 1);
	Function_499(&iLocal_4 + 792, 0);
	Function_500(&iLocal_4 + 744, 1);
	Function_499(&iLocal_4 + 744, 0);
	if (Function_427(Local_624) == 0)
	{
		Function_496(&iLocal_4 + 768);
		Function_496(&iLocal_4 + 760);
	}
	Function_496(&iLocal_4 + 784);
	Function_496(&iLocal_4 + 736);
	Function_496(&iLocal_4 + 776);
	Function_496(&iLocal_4 + 792);
	Function_493(&iLocal_4 + 744);
	Function_492(&iLocal_4 + 744, 1);
	Function_491(&iLocal_4 + 744, 359.0f);
	Function_489();
	Function_488(&iLocal_622, 4, &iLocal_4 + 2032[24], 1, 1, 0, 1, 3212836864);
	Function_488(&iLocal_622, 4, &iLocal_4 + 2032[25], 1, 1, 0, 1, 3212836864);
	Function_488(&iLocal_622, 4, &iLocal_4 + 2032[26], 1, 1, 0, 1, 3212836864);
	Function_488(&iLocal_622, 4, &iLocal_4 + 2032[27], 1, 1, 0, 1, 3212836864);
	return;
}

var Function_488(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7) //Position: 0x15F9B / 90011
{
	var uVar0;
	var uVar1;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	
	GET_OBJECT_POSITION(&uParam2, &uVar3);
	uVar0 = CREATE_WEAPON_PICKUP(&iParam0, iParam1, &uVar3, 0.0f, &fParam5, &fParam6, &fParam7);
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

void Function_489() //Position: 0x16029 / 90153
{
	if (Function_427(Local_624) == 0)
	{
		*(&Local_1014[05] + 8) = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 768, false);
		*(&Local_1014[05] + 16) = &iLocal_4 + 1416[0];
		*(&Local_1014[05] + 24) = &iLocal_4 + 1976[0];
		(&Local_1014[05] + 32) = "";
		*(&Local_1014[15] + 8) = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 760, false);
		*(&Local_1014[15] + 16) = &iLocal_4 + 1416[1];
		*(&Local_1014[15] + 24) = &iLocal_4 + 1976[1];
		*(&Local_1014[15] + 32) = &iLocal_4 + 2376;
		if (IS_ACTOR_ALIVE(&Local_1014[15] + 8))
		{
			Function_490(1, 0, 1);
		}
		*(&Local_1014[25] + 8) = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 784, false);
		*(&Local_1014[25] + 16) = &iLocal_4 + 1416[2];
		*(&Local_1014[25] + 24) = &iLocal_4 + 1976[2];
		*(&Local_1014[25] + 32) = &iLocal_4 + 2384;
		if (IS_ACTOR_ALIVE(&Local_1014[25] + 8))
		{
			Function_490(2, 1, 1);
		}
	}
	*(&Local_1014[35] + 8) = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 736, false);
	*(&Local_1014[35] + 16) = &iLocal_4 + 1416[3];
	*(&Local_1014[35] + 24) = &iLocal_4 + 1976[3];
	*(&Local_1014[35] + 32) = &iLocal_4 + 2392;
	if (IS_ACTOR_ALIVE(&Local_1014[35] + 8))
	{
		Function_490(3, 0, 1);
	}
	*(&Local_1014[45] + 8) = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 776, false);
	*(&Local_1014[45] + 16) = &iLocal_4 + 1416[4];
	*(&Local_1014[45] + 24) = &iLocal_4 + 1976[4];
	*(&Local_1014[45] + 32) = &iLocal_4 + 2400;
	if (IS_ACTOR_ALIVE(&Local_1014[45] + 8))
	{
		Function_490(4, 0, 1);
	}
	return;
}

void Function_490(int iParam0, bool bParam1, bool bParam2) //Position: 0x161E7 / 90599
{
	if (bParam1)
	{
		Function_431(&Local_1014[iParam05] + 8, &Global_54076, 1);
	}
	GET_OBJECT_POSITION(&Local_1014[iParam05] + 24, &Local_938);
	GET_OBJECT_ORIENTATION(&Local_1014[iParam05] + 24, &Local_944);
	if (bParam2)
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_1014[iParam05] + 8, Local_938, 1, 1, 1);
	}
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(0, &Local_938, 1, 3212836864);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_938, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&Local_1014[iParam05] + 8);
	TASK_PRIORITY_SET(&Local_1014[iParam05] + 8, true);
	TASK_SEQUENCE_PERFORM(&Local_1014[iParam05] + 8, bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	return;
}

void Function_491(var uParam0, bool bParam1) //Position: 0x16299 / 90777
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
			SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_492(var uParam0, bool bParam1) //Position: 0x162DE / 90846
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

void Function_493(int iParam0) //Position: 0x1632E / 90926
{
	Function_495(&iParam0);
	SQUAD_GOALS_CLEAR(&iParam0);
	Function_494(&iParam0, -1.0f, 1, 0x40c00000, 1);
	return;
}

void Function_494(var uParam0, float fParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1634E / 90958
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_83(&uVar1, &uVar3);
			uVar2 = FIND_NEAREST_COVER_LOCATION(&uVar3, 3.0f, Function_288(&uVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(&uVar2))
			{
				TASK_PRIORITY_SET(&uVar1, &uParam2);
				TASK_HIDE_AT_COVER(&uVar1, &uVar2, fParam1, &uParam3, &bParam4);
			}
			else
			{
				TASK_PRIORITY_SET(&uVar1, &uParam2);
				TASK_CROUCH(&uVar1, fParam1);
			}
		}
		bVar0++;
	}
}

void Function_495(bool bParam0) //Position: 0x163E7 / 91111
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

void Function_496(bool bParam0) //Position: 0x1641C / 91164
{
	Function_495(&bParam0);
	SQUAD_GOALS_CLEAR(&bParam0);
	Function_498(&bParam0, 1);
	Function_497(&bParam0, -1.0f);
	return;
}

void Function_497(bool bParam0, bool bParam1) //Position: 0x1643C / 91196
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			Function_83(&iVar1, &iVar3);
			uVar2 = FIND_NEAREST_COVER_LOCATION(&iVar3, 3.0f, Function_288(&iVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(&uVar2))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(&iVar1, &uVar2, bParam1, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_498(bool bParam0, bool bParam1) //Position: 0x164BE / 91326
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_499(var uParam0, int iParam1) //Position: 0x164FF / 91391
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

void Function_500(var uParam0, bool bParam1) //Position: 0x16539 / 91449
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
				ACTOR_DRAW_ANY_WEAPON(&uVar1, &bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_501() //Position: 0x16588 / 91528
{
	Function_502();
	return;
}

void Function_502() //Position: 0x16591 / 91537
{
	int iVar0;
	
	if (Function_427(Local_624) == 0)
	{
		Function_511();
		Function_510();
	}
	Function_509();
	Function_508();
	Function_507();
	Function_506();
	Function_505();
	iVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 784);
	iVar0 |= 2048;
	if (Function_427(Local_624) == 0)
	{
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 768, iVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 760, iVar0);
	}
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 784, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 736, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 776, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 792, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 744, iVar0);
	if (Function_427(Local_624) == 0)
	{
		Function_504(&iLocal_4 + 768, 2, 0);
		Function_504(&iLocal_4 + 768, 3, 0);
		Function_503(&iLocal_4 + 768, 20, 1.0f);
		Function_503(&iLocal_4 + 768, 14, 2.0f);
		Function_503(&iLocal_4 + 768, 15, 1.0f);
		Function_504(&iLocal_4 + 760, 2, 0);
		Function_504(&iLocal_4 + 760, 3, 0);
		Function_503(&iLocal_4 + 760, 20, 1.0f);
		Function_503(&iLocal_4 + 760, 14, 2.0f);
		Function_503(&iLocal_4 + 760, 15, 1.0f);
	}
	Function_504(&iLocal_4 + 784, 2, 0);
	Function_504(&iLocal_4 + 784, 3, 0);
	Function_503(&iLocal_4 + 784, 20, 1.0f);
	Function_503(&iLocal_4 + 784, 14, 2.0f);
	Function_503(&iLocal_4 + 784, 15, 1.0f);
	Function_504(&iLocal_4 + 736, 2, 0);
	Function_504(&iLocal_4 + 736, 3, 0);
	Function_503(&iLocal_4 + 736, 20, 1.0f);
	Function_503(&iLocal_4 + 736, 14, 2.0f);
	Function_503(&iLocal_4 + 736, 15, 1.0f);
	Function_504(&iLocal_4 + 776, 2, 0);
	Function_504(&iLocal_4 + 776, 3, 0);
	Function_503(&iLocal_4 + 776, 20, 1.0f);
	Function_503(&iLocal_4 + 776, 14, 2.0f);
	Function_503(&iLocal_4 + 776, 15, 1.0f);
	Function_504(&iLocal_4 + 792, 2, 0);
	Function_504(&iLocal_4 + 792, 3, 0);
	Function_503(&iLocal_4 + 792, 20, 1.0f);
	Function_503(&iLocal_4 + 792, 14, 2.0f);
	Function_503(&iLocal_4 + 792, 15, 1.0f);
	Function_504(&iLocal_4 + 744, 2, 0);
	Function_504(&iLocal_4 + 744, 3, 0);
	Function_503(&iLocal_4 + 744, 20, 1.0f);
	Function_503(&iLocal_4 + 744, 14, 2.0f);
	Function_503(&iLocal_4 + 744, 15, 1.0f);
	return;
}

void Function_503(var uParam0, int iParam1, bool bParam2) //Position: 0x167C0 / 92096
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

void Function_504(var uParam0, int iParam1, bool bParam2) //Position: 0x16811 / 92177
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

void Function_505() //Position: 0x16862 / 92258
{
	bool bVar0;
	
	*(&iLocal_4 + 744) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 508, Vector(-4431,644f, 0,405f, 3121,539f), Vector(0.0f, 1,919f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 744, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 506, Vector(-4430,684f, 0,493f, 3134,359f), Vector(0.0f, 10,93f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 744, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 514, Vector(-4433,008f, 0,5413505f, 3129,284f), Vector(0.0f, 15,22374f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 744, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 509, Vector(-4431,299f, 0,297f, 3113,729f), Vector(0.0f, 229,536f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 744, 1, 1, 0);
	return;
}

void Function_506() //Position: 0x16952 / 92498
{
	bool bVar0;
	
	*(&iLocal_4 + 792) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 513, Vector(-4407,786f, 2,360869f, 3101,635f), Vector(0.0f, 53.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 792, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 515, Vector(-4408,523f, 2,345f, 3107,874f), Vector(0.0f, 5,109f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 792, 1, 1, 0);
	return;
}

void Function_507() //Position: 0x169D6 / 92630
{
	bool bVar0;
	
	*(&iLocal_4 + 776) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 506, Vector(-4448,678f, 5,520928f, 3102,264f), Vector(0.0f, 90,23727f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 776, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 512, Vector(-4432,271f, 3,593189f, 3105,224f), Vector(0.0f, 104,9251f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 776, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 514, Vector(-4427,064f, 3,607f, 3101,404f), Vector(0.0f, 129,722f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 776, 1, 1, 0);
	return;
}

void Function_508() //Position: 0x16A90 / 92816
{
	bool bVar0;
	
	*(&iLocal_4 + 736) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 505, Vector(-4471,834f, 4,543998f, 3117,979f), Vector(0.0f, 118,2564f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 736, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 507, Vector(-4467,98f, 4,621925f, 3119,827f), Vector(0.0f, 105,3092f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 736, 1, 1, 0);
	return;
}

void Function_509() //Position: 0x16B14 / 92948
{
	bool bVar0;
	
	*(&iLocal_4 + 784) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 510, Vector(-4477,285f, 1,620933f, 3151,326f), Vector(0.0f, -31,91767f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 784, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 511, Vector(-4482,028f, 2,534517f, 3130,835f), Vector(0.0f, 213,0261f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 784, 1, 1, 0);
	return;
}

void Function_510() //Position: 0x16B98 / 93080
{
	bool bVar0;
	
	*(&iLocal_4 + 760) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 513, Vector(-4454,759f, 2,548524f, 3146,653f), Vector(0.0f, 253,961f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 760, 1, 1, 0);
	return;
}

void Function_511() //Position: 0x16BE6 / 93158
{
	bool bVar0;
	
	*(&iLocal_4 + 768) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 508, Vector(-4426,696f, 6,701437f, 3172,029f), Vector(0.0f, 211,1524f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 768, 1, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 509, Vector(-4437,501f, 4,779f, 3168,31f), Vector(0.0f, 236,323f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 768, 1, 1, 0);
	return;
}

bool Function_512() //Position: 0x16C6A / 93290
{
	if (Function_513())
	{
		return 1;
	}
	return 0;
}

bool Function_513() //Position: 0x16C79 / 93305
{
	Function_348(&iLocal_4 + 320, 505, 2, 0);
	Function_348(&iLocal_4 + 320, 507, 2, 0);
	Function_348(&iLocal_4 + 320, 508, 2, 0);
	Function_348(&iLocal_4 + 320, 506, 2, 0);
	Function_348(&iLocal_4 + 320, 514, 2, 0);
	Function_348(&iLocal_4 + 320, 509, 2, 0);
	Function_348(&iLocal_4 + 320, 513, 2, 0);
	Function_348(&iLocal_4 + 320, 512, 2, 0);
	Function_348(&iLocal_4 + 320, 510, 2, 0);
	Function_348(&iLocal_4 + 320, 511, 2, 0);
	Function_348(&iLocal_4 + 320, 515, 2, 0);
	if (Function_343(&iLocal_4 + 320))
	{
		return 1;
	}
	return 0;
}

void Function_514() //Position: 0x16D27 / 93479
{
	Function_355(&iLocal_700);
	Function_355(&iLocal_702);
	return;
}

void Function_515() //Position: 0x16D3B / 93499
{
	Function_513();
	Function_189();
	return;
}

bool Function_516() //Position: 0x16D48 / 93512
{
	Function_528();
	switch (iLocal_1066)
	{
		case 0x00000000:
			iLocal_1066 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (Function_427(Local_624) == 0)
			{
				Function_526(&iLocal_4 + 768, &iLocal_4 + 1256[5], 1);
				iLocal_1066 = 2;
				return 1;
			}
			Function_525();
			Function_524();
			Function_526(&iLocal_4 + 784, &iLocal_4 + 1256[0], 1);
			iLocal_1066 = 9;
			return 1;
			break;
		
		case 0x00000002:
			if (Function_522(&Global_54076, &iLocal_4 + 760, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[6]))
			{
				Function_521(&iLocal_4 + 768, &iLocal_4 + 760);
				Function_526(&iLocal_4 + 760, &iLocal_4 + 1256[6], 1);
				iLocal_1066 = 3;
				return 1;
			}
			Function_519(0);
			Function_519(1);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 768) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 768, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 752))
			{
				if (Function_518(&iLocal_4 + 752, 0x3f800000, 0x42960000, 1, 1) || !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[5]))
				{
					Function_376(&iLocal_4 + 752, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
				}
				else
				{
					Function_375(&iLocal_4 + 752);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_522(&Global_54076, &iLocal_4 + 784, 1, 0, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[7]))
			{
				Function_525();
				Function_521(&iLocal_4 + 760, &iLocal_4 + 784);
				Function_526(&iLocal_4 + 784, &iLocal_4 + 1256[7], 1);
				iLocal_1066 = 4;
				return 1;
			}
			Function_519(1);
			Function_519(2);
			if (Function_518(&iLocal_4 + 784, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_376(&iLocal_4 + 784, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 760) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 760, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 752))
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[5]))
				{
					Function_376(&iLocal_4 + 752, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
				}
				else
				{
					Function_375(&iLocal_4 + 752);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_522(&Global_54076, &iLocal_4 + 736, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[8]))
			{
				Function_521(&iLocal_4 + 784, &iLocal_4 + 736);
				Function_526(&iLocal_4 + 736, &iLocal_4 + 1256[8], 1);
				iLocal_1066 = 5;
				return 1;
			}
			Function_519(2);
			Function_519(3);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 784) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000005:
			if (Function_522(&Global_54076, &iLocal_4 + 744, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[11]))
			{
				Function_259(&iLocal_956, 35, 0, 4294967295, 4294967295);
				Function_496(&iLocal_4 + 744);
				Function_521(&iLocal_4 + 736, &iLocal_4 + 744);
				Function_521(&iLocal_4 + 776, &iLocal_4 + 744);
				Function_521(&iLocal_4 + 792, &iLocal_4 + 744);
				Function_526(&iLocal_4 + 744, &iLocal_4 + 1256[11], 1);
				iLocal_1066 = 8;
				return 1;
			}
			if (Function_522(&Global_54076, &iLocal_4 + 776, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[9]))
			{
				Function_521(&iLocal_4 + 736, &iLocal_4 + 776);
				Function_526(&iLocal_4 + 776, &iLocal_4 + 1256[9], 1);
				iLocal_1066 = 6;
				return 1;
			}
			Function_519(3);
			Function_519(4);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 736) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 736, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (Function_518(&iLocal_4 + 744, 1.0f, 20.0f, 1, 1))
			{
				Function_376(&iLocal_4 + 744, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000006:
			if (Function_522(&Global_54076, &iLocal_4 + 744, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[11]))
			{
				Function_259(&iLocal_956, 35, 0, 4294967295, 4294967295);
				Function_496(&iLocal_4 + 744);
				Function_521(&iLocal_4 + 776, &iLocal_4 + 744);
				Function_521(&iLocal_4 + 792, &iLocal_4 + 744);
				Function_526(&iLocal_4 + 744, &iLocal_4 + 1256[11], 1);
				iLocal_1066 = 8;
				return 1;
			}
			if (Function_522(&Global_54076, &iLocal_4 + 792, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[10]))
			{
				Function_521(&iLocal_4 + 776, &iLocal_4 + 792);
				Function_526(&iLocal_4 + 792, &iLocal_4 + 1256[10], 1);
				iLocal_1066 = 7;
				return 1;
			}
			Function_519(4);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 776) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 776, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (Function_518(&iLocal_4 + 744, 1.0f, 20.0f, 1, 1))
			{
				Function_376(&iLocal_4 + 744, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000007:
			if (Function_522(&Global_54076, &iLocal_4 + 744, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[11]))
			{
				Function_259(&iLocal_956, 35, 0, 4294967295, 4294967295);
				Function_496(&iLocal_4 + 744);
				Function_521(&iLocal_4 + 792, &iLocal_4 + 744);
				Function_526(&iLocal_4 + 744, &iLocal_4 + 1256[11], 1);
				iLocal_1066 = 8;
				return 1;
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 792) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 792, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (Function_518(&iLocal_4 + 744, 1.0f, 20.0f, 1, 1))
			{
				Function_376(&iLocal_4 + 744, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000008:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 744) == 0)
			{
				Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
				AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!Function_457(&Global_54076, &iLocal_4 + 2312[4], 3.0f))
				{
					Function_349(15, "STAGE 03 - OBJ_02-OBJ_01");
				}
				else
				{
					Function_349(25, "STAGE 03 - OBJ_03-OBJ_01");
				}
				iLocal_1066 = 14;
				return 1;
			}
			Function_517();
			break;
		
		case 0x00000009:
			if (Function_522(&Global_54076, &iLocal_4 + 736, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[1]))
			{
				Function_521(&iLocal_4 + 784, &iLocal_4 + 736);
				Function_526(&iLocal_4 + 736, &iLocal_4 + 1256[1], 1);
				iLocal_1066 = 10;
				return 1;
			}
			Function_519(3);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 784) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x0000000A:
			if (Function_522(&Global_54076, &iLocal_4 + 744, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[4]))
			{
				Function_259(&iLocal_956, 35, 0, 4294967295, 4294967295);
				Function_496(&iLocal_4 + 744);
				Function_521(&iLocal_4 + 736, &iLocal_4 + 744);
				Function_521(&iLocal_4 + 776, &iLocal_4 + 744);
				Function_521(&iLocal_4 + 792, &iLocal_4 + 744);
				Function_526(&iLocal_4 + 744, &iLocal_4 + 1256[4], 1);
				iLocal_1066 = 13;
				return 1;
			}
			if (Function_522(&Global_54076, &iLocal_4 + 776, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[2]))
			{
				Function_521(&iLocal_4 + 736, &iLocal_4 + 776);
				Function_526(&iLocal_4 + 776, &iLocal_4 + 1256[2], 1);
				iLocal_1066 = 11;
				return 1;
			}
			Function_519(3);
			Function_519(4);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 736) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 736, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (Function_518(&iLocal_4 + 744, 1.0f, 20.0f, 1, 1))
			{
				Function_376(&iLocal_4 + 744, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000B:
			if (Function_522(&Global_54076, &iLocal_4 + 744, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[4]))
			{
				Function_259(&iLocal_956, 35, 0, 4294967295, 4294967295);
				Function_496(&iLocal_4 + 744);
				Function_521(&iLocal_4 + 776, &iLocal_4 + 744);
				Function_521(&iLocal_4 + 792, &iLocal_4 + 744);
				Function_526(&iLocal_4 + 744, &iLocal_4 + 1256[4], 1);
				iLocal_1066 = 13;
				return 1;
			}
			if (Function_522(&Global_54076, &iLocal_4 + 792, 1, 0, 1, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[3]))
			{
				Function_521(&iLocal_4 + 776, &iLocal_4 + 792);
				Function_526(&iLocal_4 + 792, &iLocal_4 + 1256[3], 1);
				iLocal_1066 = 12;
				return 1;
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 776) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 776, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (Function_518(&iLocal_4 + 744, 1.0f, 20.0f, 1, 1))
			{
				Function_376(&iLocal_4 + 744, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000C:
			if (Function_522(&Global_54076, &iLocal_4 + 744, 1, 1, 0, 3212836864) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[4]))
			{
				Function_259(&iLocal_956, 35, 0, 4294967295, 4294967295);
				Function_496(&iLocal_4 + 744);
				Function_521(&iLocal_4 + 792, &iLocal_4 + 744);
				Function_526(&iLocal_4 + 744, &iLocal_4 + 1256[4], 1);
				iLocal_1066 = 13;
				return 1;
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 792) == 0)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
			}
			else if (Function_518(&iLocal_4 + 792, 0x3f800000, 0x42960000, 1, 1))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
			}
			if (Function_518(&iLocal_4 + 744, 1.0f, 20.0f, 1, 1))
			{
				Function_376(&iLocal_4 + 744, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x0000000D:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 744) == 0)
			{
				Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
				AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (!Function_457(&Global_54076, &iLocal_4 + 2312[4], 3.0f))
				{
					Function_349(15, "STAGE 03 - OBJ_02-OBJ_01");
				}
				else
				{
					Function_349(25, "STAGE 03 - OBJ_03-OBJ_01");
				}
				iLocal_1066 = 14;
				return 1;
			}
			Function_517();
			break;
		
		case 0x0000000E:
			if (IS_OBJECT_VALID(&uLocal_928))
			{
				if (GATEWAY_UPDATE(&uLocal_928))
				{
					Function_239();
					iLocal_1066 = 15;
					return 1;
				}
			}
			break;
		
		case 0x0000000F:
			return 0;
			break;
	}
	return 1;
}

void Function_517() //Position: 0x178F0 / 96496
{
	if (SQUAD_IS_VALID(&iLocal_4 + 744))
	{
		bLocal_952 = false;
		while (bLocal_952 <= SQUAD_GET_SIZE(&iLocal_4 + 744))
		{
			iLocal_934 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 744, bLocal_952);
			if (IS_ACTOR_VALID(&iLocal_934))
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_934, 60.0f))
				{
					SQUAD_LEAVE(&iLocal_934);
					RELEASE_ACTOR(&iLocal_934);
				}
				else
				{
					bLocal_952++;
				}
			}
			else
			{
				bLocal_952++;
			}
		}
	}
	else
	{
		LOG_ERROR("MinerMineCoreSquad invalid! This shouldn't be happening!");
	}
	return;
}

bool Function_518(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x179AB / 96683
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_364(&iVar1, &iParam1, &iParam2, &iParam3, &bParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_519(int iParam0) //Position: 0x179F9 / 96761
{
	switch (iParam0)
	{
		case 0x00000000:
			if (!Local_1014[iParam05])
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_1014[iParam05] + 16))
				{
					Local_1014[iParam05] = 1;
					if (IS_ACTOR_ALIVE(&Local_1014[iParam05] + 8))
					{
						Function_490(iParam0, 1, 0);
					}
				}
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			if (!Local_1014[iParam05])
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_1014[iParam05] + 16))
				{
					Local_1014[iParam05] = 1;
					if (IS_ACTOR_ALIVE(&Local_1014[iParam05] + 8))
					{
						Function_520(iParam0, 1);
					}
				}
			}
			break;
	}
	return;
}

void Function_520(int iParam0, bool bParam1) //Position: 0x17AA5 / 96933
{
	if (bParam1)
	{
		Function_431(&Local_1014[iParam05] + 8, &Global_54076, 1);
	}
	TASK_CLEAR(&Local_1014[iParam05] + 8);
	TASK_PRIORITY_SET(&Local_1014[iParam05] + 8, true);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_1014[iParam05] + 8, GET_COVER_LOCATION_FROM_OBJECT(&Local_1014[iParam05] + 32), -1.0f, 1086324736);
	return;
}

void Function_521(bool bParam0, bool bParam1) //Position: 0x17AFC / 97020
{
	Function_495(&bParam0);
	Function_498(&bParam0, 1);
	SQUADS_MERGE(&bParam0, &bParam1);
	return;
}

int Function_522(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x17B18 / 97048
{
	bool bVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&iParam0))
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
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_523(&iParam0, &iVar1, bParam2, &bParam3, &bParam4, &bParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_523(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x17B83 / 97155
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

void Function_524() //Position: 0x17C89 / 97417
{
	if (SQUAD_IS_VALID(&iLocal_4 + 768))
	{
		Function_363(&iLocal_4 + 768, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 768);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 760))
	{
		Function_363(&iLocal_4 + 760, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 760);
	}
	return;
}

void Function_525() //Position: 0x17CCD / 97485
{
	if (SQUAD_IS_VALID(&iLocal_4 + 808))
	{
		Function_363(&iLocal_4 + 808, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 808);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 816))
	{
		Function_363(&iLocal_4 + 816, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 816);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 800))
	{
		Function_363(&iLocal_4 + 800, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 800);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 752))
	{
		Function_363(&iLocal_4 + 752, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 752);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 728))
	{
		Function_363(&iLocal_4 + 728, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 728);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 720))
	{
		Function_363(&iLocal_4 + 720, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 720);
	}
	return;
}

void Function_526(var uParam0, var uParam1, bool bParam2) //Position: 0x17D8D / 97677
{
	if (&bParam2)
	{
		Function_376(&uParam0, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
	}
	SQUAD_SET_FACTION(&uParam0, 19);
	Function_527(&uParam0, &Global_54076, 1);
	SQUAD_GOALS_CLEAR(&uParam0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&uParam0, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&uParam0, 1, &uParam1, 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&uParam0, 2, &uParam1, 2, 1);
	return;
}

void Function_527(var uParam0, var uParam1, bool bParam2) //Position: 0x17DE8 / 97768
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
			Function_431(&uVar1, &uParam1, &bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_528() //Position: 0x17E34 / 97844
{
	if (SQUAD_IS_VALID(&bLocal_983))
	{
		bLocal_952 = false;
		while (bLocal_952 <= SQUAD_GET_SIZE(&bLocal_983))
		{
			iLocal_934 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_983, bLocal_952);
			if (IS_ACTOR_VALID(&iLocal_934))
			{
				if (!Function_364(&iLocal_934, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					SQUAD_LEAVE(&iLocal_934);
					DESTROY_ACTOR(&iLocal_934);
				}
				else
				{
					bLocal_952++;
				}
			}
			else
			{
				bLocal_952++;
			}
		}
	}
	return;
}

void Function_529() //Position: 0x17EAC / 97964
{
	if (iLocal_695 < 5 && iLocal_695 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 944[1]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 944[1]))
			{
				Function_515();
				iLocal_957 = 0;
				DESTROY_VOLUME(&iLocal_4 + 944[1]);
			}
		}
		else if (!iLocal_957)
		{
			if (Function_512())
			{
				Function_501();
				iLocal_957 = 1;
			}
		}
		if (!Function_575())
		{
			Function_349(106, "STAGE 02 - COMPLETE");
		}
	}
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_357(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 944[0]))
			{
				Function_574();
				DESTROY_VOLUME(&iLocal_4 + 944[0]);
			}
			Function_573();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
			Function_351();
			bLocal_697 = Global_46736[1];
			if (iLocal_722[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_319(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_202(1, 0, 1);
				Function_350(&Global_54076, &iLocal_4 + 1528[0], 1, 1, 1);
				Function_349(1, "STAGE 02 - STREAMING GOAL");
			}
			else
			{
				Function_349(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_571() && STREAMING_IS_WORLD_LOADED()) && (Function_340(bLocal_697) || bLocal_697 != 4294967295))
			{
				Function_554();
				Function_349(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_439(StackVal, StackVal, StackVal, StackVal, StackVal, Local_624, iLocal_694))
			{
				Function_553();
				Function_349(3, "STAGE 02 - CUTSCENE GOAL");
			}
			else
			{
				iLocal_960 = 1;
				Function_350(&Global_54076, &iLocal_4 + 1528[1], 1, 1, 1);
				Function_350(&iLocal_700, &iLocal_4 + 1528[4], 1, 1, 1);
				Function_350(&iLocal_702, &iLocal_4 + 1528[6], 1, 1, 1);
				Function_350(&iLocal_704, &iLocal_4 + 1528[8], 1, 1, 1);
				Function_451(&iLocal_4 + 656[02], &iLocal_4 + 1528[10], 1, 1, 1);
				Function_451(&iLocal_4 + 656[12], &iLocal_4 + 1528[13], 1, 1, 1);
				Function_550();
				Function_349(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			Function_428(iLocal_694);
			Function_418(StackVal, Function_428(iLocal_694), iLocal_694, Global_46736[1], Function_426(iLocal_694), 0);
			iLocal_696 = Function_417();
			break;
		
		case 0x00000003:
			if (Function_536())
			{
				Function_550();
				Function_349(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_276(1.0f);
			if (iLocal_960)
			{
				Function_535((3.0f + 1.0f));
			}
			Function_388(1);
			Function_349(6, "STAGE 02 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_257();
				Function_534();
				Function_349(7, "STAGE 02 - OBJ_01-HELP_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_139("Outlaw02_obj02_help", 10.0f, 1, 0, 2, 1, 0);
				Function_349(8, "STAGE 02 - OBJ_01-WAIT_01");
			}
			break;
		
		case 0x00000008:
			if (Function_290(&bLocal_706) <= 10,5f)
			{
				Function_349(10, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000009:
			if (Function_290(&bLocal_706) <= 2.0f)
			{
				Function_349(10, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x0000000A:
			Function_387("Outlaw02_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
			if (iLocal_1013 == 7 && iLocal_1013 == 8)
			{
				Function_377(9);
			}
			Function_349(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			break;
		
		case 0x0000000D:
			if (Function_533(&bLocal_710, &iLocal_4 + 1112[5], &iLocal_4 + 1112[6], "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_377(5);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_349(14, "STAGE 02 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_533(&bLocal_710, &iLocal_4 + 1112[5], &iLocal_4 + 1112[6], "GaptoothBreach_return", "GaptoothBreach_abandoned", &bLocal_735, 1, 0, 0, 330, 1))
			{
				Function_377(9);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_349(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			Function_530();
			iLocal_694 = 2;
			iLocal_722[1] = 1;
			Function_349(0, "STAGE 03 - INITIALIZE");
			break;
	}
	return;
}

void Function_530() //Position: 0x18472 / 99442
{
	Function_532();
	Function_531();
	Function_245();
	Function_238();
	return;
}

void Function_531() //Position: 0x18484 / 99460
{
	bLocal_952 = false;
	while (bLocal_952 <= 2)
	{
		iLocal_934 = &iLocal_4 + 656[bLocal_9522];
		if (IS_ACTOR_VALID(&iLocal_934))
		{
			uLocal_936 = GET_MOUNT(&iLocal_934);
			if (Function_364(&iLocal_934, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				RELEASE_ACTOR(&iLocal_934);
			}
			else
			{
				DESTROY_ACTOR(&iLocal_934);
			}
			if (IS_ACTOR_VALID(&uLocal_936))
			{
				if (Function_364(&uLocal_936, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					RELEASE_ACTOR(&uLocal_936);
				}
				else
				{
					DESTROY_ACTOR(&uLocal_936);
				}
			}
		}
		bLocal_952++;
	}
	return;
}

void Function_532() //Position: 0x1851E / 99614
{
	if (IS_ACTOR_VALID(&iLocal_704))
	{
		DESTROY_ACTOR(&iLocal_704);
	}
	return;
}

bool Function_533(struct<2> Param0, bool bParam2, var uParam3, char* cParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x18535 / 99637
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &bParam2))
	{
		Function_266(&cParam4);
		iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_371(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_387(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_370(64);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_369(&iParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &iParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_371(64))
	{
		Function_368(64);
		if (!Function_367())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_366();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_369(&iParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_534() //Position: 0x186D0 / 100048
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw02_MinerApproaches", "Outlaw02_MinerApproaches", false, 1, 1, 0, 1);
		Function_295(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535(int iParam0) //Position: 0x18729 / 100137
{
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, iParam0, 0);
	return;
}

bool Function_536() //Position: 0x18740 / 100160
{
	var uVar0;
	
	Function_318(&iLocal_682, 1, 0);
	switch (iLocal_682)
	{
		case 0x000003E8:
			Function_314(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			iLocal_960 = 0;
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				*(&iLocal_682 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				Function_549(&iLocal_682 + 24, 0);
			}
			else
			{
				*(&iLocal_682 + 24) = Function_542(&iLocal_4, 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
			}
			else
			{
				LOG_ERROR("Outlaw02_Cutscene02 - Failed to create Outlaw02_Cutscene02_cutscene");
				iLocal_682 = 1000;
				return 1;
			}
			iLocal_682 = 1001;
			break;
		
		case 0x000003E9:
			Function_304(&Global_54076, 1, 1);
			Function_304(&iLocal_700, 1, 0);
			Function_304(&iLocal_702, 1, 0);
			Function_304(&iLocal_704, 1, 0);
			TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
			Function_541();
			Function_540(1);
			Function_451(&Global_54076, &iLocal_4 + 1528[0], 1, 1, 1);
			Function_451(&iLocal_700, &iLocal_4 + 1528[3], 1, 1, 1);
			Function_451(&iLocal_4 + 656[02], &iLocal_4 + 1528[9], 1, 1, 1);
			Function_451(&iLocal_4 + 656[12], &iLocal_4 + 1528[12], 1, 1, 1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[1]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[1]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 888[1], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 888[1]);
			iLocal_682 = 1002;
			break;
		
		case 0x000003EA:
			Function_276(1.0f);
			SET_ANIM_SET_FOR_ACTOR(&Global_54076, "out02_marston", 0);
			iLocal_682 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_1069 = 15;
				iLocal_1070 = 15;
				iLocal_682 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_538() && Function_537())
			{
				Function_298(&iLocal_682 + 4);
				iLocal_682 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_304(&Global_54076, 0, 1);
				Function_304(&iLocal_700, 0, 1);
				Function_304(&iLocal_702, 0, 1);
				Function_304(&iLocal_704, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
				TASK_CLEAR(&iLocal_702);
				TASK_PRIORITY_SET(&iLocal_702, true);
				TASK_STAND_STILL(&iLocal_702, -1.0f, 0, 0);
				TASK_CLEAR(&iLocal_704);
				TASK_PRIORITY_SET(&iLocal_704, true);
				TASK_STAND_STILL(&iLocal_704, -1.0f, 0, 0);
				Function_350(&iLocal_700, &iLocal_4 + 1528[4], 1, 1, 1);
				Function_350(&iLocal_702, &iLocal_4 + 1528[6], 1, 1, 1);
				Function_350(&iLocal_704, &iLocal_4 + 1528[8], 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[1]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 888[1]);
				DESTROY_VOLUME(&iLocal_4 + 888[1]);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				if (iLocal_960)
				{
					Function_280(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_280(1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				}
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_682 + 24))
				{
					DESTROY_OBJECT(&iLocal_682 + 24);
				}
				iLocal_682 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_960 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_257();
				Function_256();
				TASK_CLEAR(&iLocal_4 + 656[02]);
				TASK_PRIORITY_SET(&iLocal_4 + 656[02], true);
				TASK_STAND_STILL(&iLocal_4 + 656[02], -1.0f, 0, 0);
				TASK_CLEAR(&iLocal_4 + 656[12]);
				TASK_PRIORITY_SET(&iLocal_4 + 656[12], true);
				TASK_STAND_STILL(&iLocal_4 + 656[12], -1.0f, 0, 0);
				Function_350(&Global_54076, &iLocal_4 + 1528[1], 1, 1, 1);
				Function_451(&iLocal_4 + 656[02], &iLocal_4 + 1528[10], 1, 1, 1);
				Function_451(&iLocal_4 + 656[12], &iLocal_4 + 1528[13], 1, 1, 1);
				iLocal_682 = 1104;
			}
			break;
	}
	return 0;
}

int Function_537() //Position: 0x18B69 / 101225
{
	switch (iLocal_1070)
	{
		case 0x0000000F:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				iLocal_1070 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_290(&iLocal_682 + 4) < 1.0f)
			{
				bLocal_952 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2424, 1, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_4 + 656[02]);
				TASK_PRIORITY_SET(&iLocal_4 + 656[02], true);
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[02], bLocal_952);
				TASK_SEQUENCE_RELEASE(bLocal_952, 1);
				bLocal_952 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2432, 1, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_4 + 656[12]);
				TASK_PRIORITY_SET(&iLocal_4 + 656[12], true);
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[12], bLocal_952);
				TASK_SEQUENCE_RELEASE(bLocal_952, 1);
				iLocal_1070 = 35;
			}
			break;
		
		case 0x00000023:
			if (GET_CUTSCENEOBJECT_SEQUENCE(&iLocal_682 + 24) != 2 && Function_290(&iLocal_682 + 4) < 11.0f)
			{
				Function_289("out02_marston", "out02_marston/dismount/dismountA");
				iLocal_1070 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_290(&iLocal_682 + 4) < 19,5f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				iLocal_1070 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_290(&iLocal_682 + 4) < 29,5f)
			{
				bLocal_952 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2424, 2, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_4 + 656[02]);
				TASK_PRIORITY_SET(&iLocal_4 + 656[02], true);
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[02], bLocal_952);
				TASK_SEQUENCE_RELEASE(bLocal_952, 1);
				bLocal_952 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2432, 2, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_4 + 656[12]);
				TASK_PRIORITY_SET(&iLocal_4 + 656[12], true);
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[12], bLocal_952);
				TASK_SEQUENCE_RELEASE(bLocal_952, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				iLocal_1070 = 65;
			}
			break;
		
		case 0x00000041:
			if (Function_290(&iLocal_682 + 4) < 32.0f)
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1528[5], &Local_938);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[5], &Local_944);
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_700, &Local_938, 1);
				iLocal_1070 = 75;
			}
			break;
		
		case 0x0000004B:
			if (Function_290(&iLocal_682 + 4) < 32,85f)
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1528[7], &Local_938);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[7], &Local_944);
				bLocal_952 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(0, &Local_938, 0);
				TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_938, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_702);
				TASK_PRIORITY_SET(&iLocal_702, true);
				TASK_SEQUENCE_PERFORM(&iLocal_702, bLocal_952);
				TASK_SEQUENCE_RELEASE(bLocal_952, 1);
				iLocal_1070 = 85;
			}
			break;
		
		case 0x00000055:
			if (Function_290(&iLocal_682 + 4) < 33.0f)
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1528[2], &Local_938);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1528[2], &Local_944);
				TASK_CLEAR(&Global_54076);
				TASK_PRIORITY_SET(&Global_54076, true);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &Global_54076, &Local_938, 1);
				iLocal_1070 = 95;
			}
			break;
		
		case 0x0000005F:
			if (Function_290(&iLocal_682 + 4) < 34.0f)
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_682 + 24);
				iLocal_1070 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(&iLocal_682 + 24))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_538() //Position: 0x18F1E / 102174
{
	switch (iLocal_1069)
	{
		case 0x0000000F:
			if (GET_CUTSCENEOBJECT_SEQUENCE(&iLocal_682 + 24) != 2 && Function_290(&iLocal_682 + 4) < 9.0f)
			{
				Function_539();
				iLocal_1069 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&iLocal_682 + 4) < 0.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_539() //Position: 0x18F73 / 102259
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA1", "Outlaw02_CS02_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA2", "Outlaw02_CS02_v1_AA2", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA3", "Outlaw02_CS02_v1_AA3", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_CS02_v1_AA4", "Outlaw02_CS02_v1_AA4", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS02_v1_AB1", "Outlaw02_CS02_v1_AB1", true, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_CS02_v1_AB2", "Outlaw02_CS02_v1_AB2", true, 4, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_540(bool bParam0) //Position: 0x190D7 / 102615
{
	if (IS_ACTOR_ALIVE(&iLocal_704))
	{
		if (&bParam0)
		{
			if (GET_MOUNT(&iLocal_700) != &iLocal_704)
			{
				SET_ACTORS_HORSE(&iLocal_700, &iLocal_704);
				ACTOR_MOUNT_ACTOR(&iLocal_700, &iLocal_704);
			}
		}
		else if (GET_MOUNT(&iLocal_700) != &iLocal_704)
		{
			MEMORY_PREFER_RIDING(&iLocal_700, true);
			SET_ACTORS_HORSE(&iLocal_700, &iLocal_704);
			Function_431(&iLocal_700, &iLocal_704, 1);
		}
	}
	return;
}

void Function_541() //Position: 0x19141 / 102721
{
	if (IS_ACTOR_ALIVE(&iLocal_702))
	{
		if (GET_MOUNT(&Global_54076) != &iLocal_702)
		{
			SET_ACTORS_HORSE(&Global_54076, &iLocal_702);
			ACTOR_MOUNT_ACTOR(&Global_54076, &iLocal_702);
		}
	}
	return;
}

var Function_542(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x19176 / 102774
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 5, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Outlaw02_Cutscene02", 5, 1);
	}
	Function_543(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 3.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_543(int iParam0) //Position: 0x19203 / 102915
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_548(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_547(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_546(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_545(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 4);
	Function_544(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 10.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 1000.0f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1000.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 4, 1000.0f, 4);
	return;
}

void Function_544(int iParam0) //Position: 0x192AE / 103086
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4344,927f, 15,39305f, 3211,466f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,228427f, 2,274438f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_545(int iParam0) //Position: 0x19323 / 103203
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4350,01f, 14,23609f, 3213,99f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,119761f, -1,281553f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_546(int iParam0) //Position: 0x19390 / 103312
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 18.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4340,12f, 16,30666f, 3208,483f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,139927f, 2,152739f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_547(int iParam0) //Position: 0x193FD / 103421
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4357,199f, 14,89027f, 3228,429f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,089579f, 1,959026f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_548(int iParam0) //Position: 0x19472 / 103538
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4355,51f, 14,9126f, 3231,891f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,089579f, 1,959026f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_549(var uParam0, bool bParam1) //Position: 0x194E7 / 103655
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 3.0f, 4294967295, 6, 0, 0, 0, 0);
	return;
}

void Function_550() //Position: 0x194FD / 103677
{
	Function_259(&iLocal_956, 7, 0, 4294967295, 4294967295);
	Function_396(1);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_217(0);
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	if (!iLocal_960)
	{
		Function_535(3.0f);
	}
	SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
	Function_274();
	SET_ACTOR_INVULNERABILITY(&iLocal_704, true);
	Function_552();
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	Function_434(&iLocal_4 + 808, 0);
	Function_434(&iLocal_4 + 816, 0);
	Function_434(&iLocal_4 + 800, 0);
	Function_434(&iLocal_4 + 752, 0);
	Function_434(&iLocal_4 + 728, 0);
	Function_434(&iLocal_4 + 720, 0);
	Function_551();
	SQUAD_SET_FACTION(&bLocal_983, 19);
	Function_495(&bLocal_983);
	SQUAD_GOALS_CLEAR(&bLocal_983);
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2032[16], 5.0f, 4, 1, 1);
	TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2032[17], 5.0f, 4, 1, 1);
	TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 2032[18], 5.0f, 4, 1, 1);
	TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 1000[10], -1.0f);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_983, false, 1, 4294967295);
	TASK_SEQUENCE_PERFORM(false, bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	return;
}

void Function_551() //Position: 0x19615 / 103957
{
	Function_431(&iLocal_4 + 656[02], &Global_54076, 1);
	Function_431(&iLocal_4 + 656[12], &Global_54076, 1);
	AI_GOAL_LOOK_AT_ACTOR(&iLocal_4 + 656[02], &Global_54076, 1, 10.0f, 60.0f, 60.0f, 1);
	AI_GOAL_LOOK_AT_ACTOR(&iLocal_4 + 656[12], &Global_54076, 1, 10.0f, 60.0f, 60.0f, 1);
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(0, &iLocal_4 + 2032[19], 4, 0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 656[02]);
	TASK_PRIORITY_SET(&iLocal_4 + 656[02], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[02], bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(0, &iLocal_4 + 2032[20], 3, 0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 656[12]);
	TASK_PRIORITY_SET(&iLocal_4 + 656[12], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[12], bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	return;
}

void Function_552() //Position: 0x1971D / 104221
{
	TASK_CLEAR(&iLocal_704);
	TASK_PRIORITY_SET(&iLocal_704, true);
	TASK_STAND_STILL(&iLocal_704, -1.0f, 0, 0);
	return;
}

void Function_553() //Position: 0x1973C / 104252
{
	Function_259(&iLocal_956, 3, 0, 4294967295, 4294967295);
	Function_322(0, 1);
	Function_321();
	Function_274();
	Function_552();
	return;
}

void Function_554() //Position: 0x1975A / 104282
{
	Function_566();
	Function_559();
	Function_558();
	Function_557();
	Function_556(&iLocal_4 + 752);
	Function_493(&iLocal_4 + 800);
	Function_555(&iLocal_4 + 808, &iLocal_4 + 1000[8]);
	Function_555(&iLocal_4 + 816, &iLocal_4 + 1000[11]);
	Function_555(&iLocal_4 + 728, &iLocal_4 + 1000[9]);
	Function_555(&iLocal_4 + 720, &iLocal_4 + 1000[5]);
	return;
}

void Function_555(int iParam0, int iParam1) //Position: 0x197C9 / 104393
{
	Function_495(&iParam0);
	SQUAD_GOALS_CLEAR(&iParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 1, 4294967295);
	TASK_WANDER_IN_VOLUME(false, &iParam1, -1.0f);
	return;
}

void Function_556(var uParam0) //Position: 0x197ED / 104429
{
	Function_495(&uParam0);
	SQUAD_GOALS_CLEAR(&uParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_557() //Position: 0x19810 / 104464
{
	if (!IS_OBJECTSET_VALID(&uLocal_1008))
	{
		uLocal_1008 = CREATE_OBJECTSET_IN_LAYOUT("ObstacleSet", &iLocal_622, 4294967295, 0);
		if (IS_OBJECTSET_VALID(&uLocal_1008))
		{
			GET_VOLUME_CENTER(&iLocal_4 + 1000[0], &Local_938);
			Local_944 = Vector(0.0f, GET_VOLUME_HEADING(&iLocal_4 + 1000[0]), 0.0f);
			GET_VOLUME_SCALE(&iLocal_4 + 1000[0], &Local_947);
			uLocal_922 = CREATE_OBSTACLE_IN_LAYOUT(&iLocal_622, "BlockCaveObst01", Local_938, Local_944, Local_947);
			if (IS_OBJECT_VALID(&uLocal_922))
			{
				ADD_OBJECT_TO_OBJECTSET(&uLocal_922, &uLocal_1008);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockCaveObst01' to block off core!");
			}
			GET_VOLUME_CENTER(&iLocal_4 + 1000[1], &Local_938);
			Local_944 = Vector(0.0f, GET_VOLUME_HEADING(&iLocal_4 + 1000[1]), 0.0f);
			GET_VOLUME_SCALE(&iLocal_4 + 1000[1], &Local_947);
			uLocal_922 = CREATE_OBSTACLE_IN_LAYOUT(&iLocal_622, "BlockCaveObst02", Local_938, Local_944, Local_947);
			if (IS_OBJECT_VALID(&uLocal_922))
			{
				ADD_OBJECT_TO_OBJECTSET(&uLocal_922, &uLocal_1008);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockCaveObst02' to block off core!");
			}
			GET_VOLUME_CENTER(&iLocal_4 + 1000[2], &Local_938);
			Local_944 = Vector(0.0f, GET_VOLUME_HEADING(&iLocal_4 + 1000[2]), 0.0f);
			GET_VOLUME_SCALE(&iLocal_4 + 1000[2], &Local_947);
			uLocal_922 = CREATE_OBSTACLE_IN_LAYOUT(&iLocal_622, "BlockCaveObst03", Local_938, Local_944, Local_947);
			if (IS_OBJECT_VALID(&uLocal_922))
			{
				ADD_OBJECT_TO_OBJECTSET(&uLocal_922, &uLocal_1008);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockCaveObst03' to block off core!");
			}
			GET_VOLUME_CENTER(&iLocal_4 + 1000[3], &Local_938);
			Local_944 = Vector(0.0f, GET_VOLUME_HEADING(&iLocal_4 + 1000[3]), 0.0f);
			GET_VOLUME_SCALE(&iLocal_4 + 1000[3], &Local_947);
			uLocal_922 = CREATE_OBSTACLE_IN_LAYOUT(&iLocal_622, "BlockTracksObst01", Local_938, Local_944, Local_947);
			if (IS_OBJECT_VALID(&uLocal_922))
			{
				ADD_OBJECT_TO_OBJECTSET(&uLocal_922, &uLocal_1008);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockTracksObst01' to block off core!");
			}
			GET_VOLUME_CENTER(&iLocal_4 + 1000[4], &Local_938);
			Local_944 = Vector(0.0f, GET_VOLUME_HEADING(&iLocal_4 + 1000[4]), 0.0f);
			GET_VOLUME_SCALE(&iLocal_4 + 1000[4], &Local_947);
			uLocal_922 = CREATE_OBSTACLE_IN_LAYOUT(&iLocal_622, "BlockTracksObst02", Local_938, Local_944, Local_947);
			if (IS_OBJECT_VALID(&uLocal_922))
			{
				ADD_OBJECT_TO_OBJECTSET(&uLocal_922, &uLocal_1008);
			}
			else
			{
				LOG_ERROR("Failed to create 'BlockTracksObst02' to block off core!");
			}
		}
		else
		{
			LOG_ERROR("Failed to create 'ObstacleSet' for various obstacles!");
		}
	}
	return;
}

void Function_558() //Position: 0x19C01 / 105473
{
	bLocal_983 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_622, "MinerRetreat"));
	return;
}

void Function_559() //Position: 0x19C24 / 105508
{
	int iVar0;
	
	Function_565();
	Function_564();
	Function_563();
	Function_562();
	Function_561();
	Function_560();
	iVar0 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 808);
	iVar0 |= 2048;
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 808, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 816, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 800, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 752, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 728, iVar0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 720, iVar0);
	return;
}

void Function_560() //Position: 0x19C91 / 105617
{
	bool bVar0;
	
	*(&iLocal_4 + 720) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 508, Vector(-4465,708f, 28,59759f, 3135,564f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 720, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 512, Vector(-4456,466f, 28,569f, 3129,293f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 720, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 507, Vector(-4465,811f, 28,34898f, 3127,711f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 720, 0, 0, 0);
	return;
}

void Function_561() //Position: 0x19D3F / 105791
{
	bool bVar0;
	
	*(&iLocal_4 + 728) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 505, Vector(-4433,009f, 25,74567f, 3169,412f), Vector(0.0f, 180.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 728, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 506, Vector(-4440.0f, 21,08213f, 3192f), Vector(0.0f, 218,468f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 728, 0, 0, 0);
	return;
}

void Function_562() //Position: 0x19DC3 / 105923
{
	bool bVar0;
	
	*(&iLocal_4 + 752) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 511, Vector(-4420,563f, 8,051668f, 3181,485f), Vector(0.0f, 22,10991f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 752, 0, 1, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 507, Vector(-4419,432f, 8,021976f, 3181,025f), Vector(0.0f, 22,10991f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 752, 0, 1, 0);
	return;
}

void Function_563() //Position: 0x19E47 / 106055
{
	bool bVar0;
	
	*(&iLocal_4 + 800) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 514, Vector(-4452,626f, 9,205f, 3219,144f), Vector(0.0f, 209,956f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 800, 0, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 515, Vector(-4454,733f, 12,618f, 3217,233f), Vector(0.0f, 218,539f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 800, 0, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 505, Vector(-4453,926f, 12,618f, 3225,721f), Vector(0.0f, 209,2187f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 800, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 506, Vector(-4456,794f, 16,052f, 3214,133f), Vector(0.0f, 29,07154f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 800, 0, 0, 0);
	return;
}

void Function_564() //Position: 0x19F37 / 106295
{
	bool bVar0;
	
	*(&iLocal_4 + 816) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 509, Vector(-4510,872f, 12,168f, 3263,568f), Vector(0.0f, 305,479f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 816, 0, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 511, Vector(-4512,353f, 12,168f, 3256,265f), Vector(0.0f, 220,564f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 816, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 512, Vector(-4511,578f, 15,84f, 3258,629f), Vector(0.0f, 355,636f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 816, 0, 0, 0);
	return;
}

void Function_565() //Position: 0x19FF1 / 106481
{
	bool bVar0;
	
	*(&iLocal_4 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 508, Vector(-4432,783f, 8,543463f, 3275,646f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 808, 0, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 510, Vector(-4442,764f, 8,420084f, 3282,146f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 808, 0, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 505, Vector(-4467,257f, 8,530011f, 3270,488f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 808, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 506, Vector(-4451,176f, 8,52773f, 3250,351f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 808, 0, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 507, Vector(-4414,907f, 8,374923f, 3269,061f), Vector(0.0f, 0.0f, 0.0f));
	Function_436(&bVar0, &iLocal_4 + 808, 0, 0, 0);
	return;
}

void Function_566() //Position: 0x1A103 / 106755
{
	Function_567();
	return;
}

void Function_567() //Position: 0x1A10C / 106764
{
	*(&iLocal_4 + 656[02]) = Function_569(StackVal, StackVal, &iLocal_4, Function_54(), 513, Function_54(), 977, Vector(-4428,066f, 8,53166f, 3245,774f), Vector(0.0f, 227,1441f, 0.0f));
	Function_568(&iLocal_4 + 656[02]);
	*(&iLocal_4 + 656[12]) = Function_569(StackVal, StackVal, &iLocal_4, Function_54(), 507, Function_54(), 980, Vector(-4430,098f, 8,512501f, 3247,973f), Vector(0.0f, 227,5606f, 0.0f));
	Function_568(&iLocal_4 + 656[12]);
	return;
}

void Function_568(bool bParam0) //Position: 0x1A190 / 106896
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bParam0);
	GIVE_WEAPON_TO_ACTOR(&bParam0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&bParam0, true);
	MEMORY_ALLOW_SHOOTING(&bParam0, false);
	Function_437(&bParam0);
	ACCESSORIZE_HORSE(GET_MOUNT(&bParam0), 3);
	Function_437(GET_MOUNT(&bParam0));
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(GET_MOUNT(&bParam0), &iLocal_4 + 1000[6], 4, 2);
	return;
}

int Function_569(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x1A1F0 / 106992
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_570(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_570(bParam4))
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

bool Function_570(int iParam0) //Position: 0x1A328 / 107304
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_571() //Position: 0x1A33F / 107327
{
	if (Function_572())
	{
		return 1;
	}
	return 0;
}

bool Function_572() //Position: 0x1A34E / 107342
{
	Function_348(&iLocal_4 + 88, 981, 2, 0);
	Function_348(&iLocal_4 + 88, 513, 2, 0);
	Function_348(&iLocal_4 + 88, 977, 2, 0);
	Function_348(&iLocal_4 + 88, 507, 2, 0);
	Function_348(&iLocal_4 + 88, 980, 2, 0);
	Function_348(&iLocal_4 + 88, 508, 2, 0);
	Function_348(&iLocal_4 + 88, 512, 2, 0);
	Function_348(&iLocal_4 + 88, 505, 2, 0);
	Function_348(&iLocal_4 + 88, 506, 2, 0);
	Function_348(&iLocal_4 + 88, 511, 2, 0);
	Function_348(&iLocal_4 + 88, 514, 2, 0);
	Function_348(&iLocal_4 + 88, 515, 2, 0);
	Function_348(&iLocal_4 + 88, 510, 2, 0);
	Function_348(&iLocal_4 + 88, 509, 2, 0);
	if (Function_343(&iLocal_4 + 88))
	{
		return 1;
	}
	return 0;
}

void Function_573() //Position: 0x1A417 / 107543
{
	Function_355(&iLocal_700);
	Function_355(&iLocal_702);
	Function_355(&iLocal_704);
	return;
}

void Function_574() //Position: 0x1A432 / 107570
{
	Function_572();
	Function_190();
	(&iLocal_682 + 24) = Function_542(&iLocal_4, 0, 1, 1, 0);
	if (IS_OBJECT_VALID(&iLocal_682 + 24))
	{
		STREAMING_SET_POI_LIMIT(2);
		SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_682 + 24, 1);
	}
	else
	{
		LOG_ERROR("Outlaw02_Cutscene02 - Failed to create Outlaw02_Cutscene02_cutscene (paused)");
	}
	return;
}

bool Function_575() //Position: 0x1A4BE / 107710
{
	switch (iLocal_1013)
	{
		case 0x00000000:
			Function_380(&bLocal_714);
			iLocal_1013 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (((((Function_523(&Global_54076, &iLocal_4 + 656[02], 1, 1, 0, 60.0f) || Function_523(&Global_54076, &iLocal_4 + 656[12], 1, 1, 0, 60.0f)) || ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 656[02], 5.0f)) || ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 656[12], 5.0f)) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[15])) || iLocal_985)
			{
				Function_259(&iLocal_956, 8, 0, 4294967295, 4294967295);
				Function_584();
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_583(&iLocal_4 + 808, 2);
				Function_582();
				Function_580(1);
				Function_579(&iLocal_4 + 808, &iLocal_4 + 1256[14], 1);
				Function_493(&iLocal_4 + 816);
				Function_493(&iLocal_4 + 800);
				Function_493(&iLocal_4 + 728);
				Function_493(&iLocal_4 + 720);
				Function_556(&iLocal_4 + 752);
				if (iLocal_695 <= 9)
				{
					Function_349(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_380(&bLocal_714);
				iLocal_1013 = 2;
				return 1;
			}
			if ((((Function_522(&Global_54076, &iLocal_4 + 808, 1, 0, 1, 60.0f) || Function_522(&Global_54076, &iLocal_4 + 816, 1, 0, 1, 60.0f)) || Function_522(&Global_54076, &iLocal_4 + 800, 1, 0, 1, 60.0f)) || Function_522(&Global_54076, &iLocal_4 + 752, 1, 0, 1, 60.0f)) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[14]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_583(&iLocal_4 + 808, 2);
				Function_582();
				Function_580(0);
				Function_579(&iLocal_4 + 808, &iLocal_4 + 1256[14], 1);
				Function_493(&iLocal_4 + 816);
				Function_493(&iLocal_4 + 800);
				Function_493(&iLocal_4 + 728);
				Function_493(&iLocal_4 + 720);
				Function_556(&iLocal_4 + 752);
				if (iLocal_695 <= 9)
				{
					Function_349(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_380(&bLocal_714);
				iLocal_1013 = 2;
				return 1;
			}
			if (Function_522(&Global_54076, &iLocal_4 + 728, 1, 0, 1, 60.0f) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[12]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_583(&iLocal_4 + 808, 2);
				Function_582();
				SQUADS_MERGE(&iLocal_4 + 808, &iLocal_4 + 728);
				Function_579(&iLocal_4 + 728, &iLocal_4 + 1256[12], 1);
				Function_493(&iLocal_4 + 720);
				Function_493(&iLocal_4 + 816);
				Function_493(&iLocal_4 + 800);
				Function_556(&iLocal_4 + 752);
				if (iLocal_695 <= 9)
				{
					Function_349(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_380(&bLocal_714);
				iLocal_1013 = 7;
				return 1;
			}
			if (Function_522(&Global_54076, &iLocal_4 + 720, 1, 0, 1, 60.0f) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[13]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 720);
				Function_579(&iLocal_4 + 720, &iLocal_4 + 1256[13], 1);
				Function_493(&iLocal_4 + 808);
				Function_493(&iLocal_4 + 816);
				Function_493(&iLocal_4 + 800);
				Function_556(&iLocal_4 + 752);
				if (iLocal_695 <= 9)
				{
					Function_349(9, "STAGE 02 - OBJ_01-WAIT_02");
				}
				Function_380(&bLocal_714);
				iLocal_1013 = 8;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[8]))
			{
				if (!iLocal_986)
				{
					if (!Function_292(&bLocal_714))
					{
						Function_298(&bLocal_714);
					}
					else if (Function_290(&bLocal_714) <= 25.0f)
					{
						Function_578();
						Function_577();
						iLocal_986 = 1;
					}
				}
				else if (Function_290(&bLocal_714) <= 40.0f)
				{
					iLocal_985 = 1;
					Function_380(&bLocal_714);
				}
			}
			break;
		
		case 0x00000002:
			if ((((Function_522(&Global_54076, &iLocal_4 + 816, 1, 0, 1, 60.0f) || Function_522(&Global_54076, &iLocal_4 + 800, 1, 0, 1, 60.0f)) || Function_522(&Global_54076, &iLocal_4 + 752, 1, 0, 1, 60.0f)) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 808) >= 1) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[15]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
				Function_377(10);
				Function_583(&iLocal_4 + 816, 1);
				Function_582();
				SQUADS_MERGE(&iLocal_4 + 808, &iLocal_4 + 816);
				Function_579(&iLocal_4 + 816, &iLocal_4 + 1256[15], 1);
				Function_493(&iLocal_4 + 800);
				Function_556(&iLocal_4 + 752);
				iLocal_1013 = 3;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[12]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 808, &iLocal_4 + 728);
				Function_579(&iLocal_4 + 728, &iLocal_4 + 1256[12], 1);
				iLocal_1013 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[13]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 808, &iLocal_4 + 720);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 720);
				Function_579(&iLocal_4 + 720, &iLocal_4 + 1256[13], 1);
				iLocal_1013 = 8;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[14]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000003:
			if (((Function_522(&Global_54076, &iLocal_4 + 800, 1, 0, 1, 60.0f) || Function_522(&Global_54076, &iLocal_4 + 752, 1, 0, 1, 60.0f)) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 816) >= 2) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[16]))
			{
				Function_259(&iLocal_956, 40, 0, 4294967295, 4294967295);
				Function_583(&iLocal_4 + 800, 2);
				Function_582();
				SQUADS_MERGE(&iLocal_4 + 816, &iLocal_4 + 800);
				Function_579(&iLocal_4 + 800, &iLocal_4 + 1256[16], 1);
				Function_556(&iLocal_4 + 752);
				iLocal_1013 = 4;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[12]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 816, &iLocal_4 + 728);
				Function_579(&iLocal_4 + 728, &iLocal_4 + 1256[12], 1);
				iLocal_1013 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[13]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 816, &iLocal_4 + 720);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 720);
				Function_579(&iLocal_4 + 720, &iLocal_4 + 1256[13], 1);
				iLocal_1013 = 8;
				return 1;
			}
			break;
		
		case 0x00000004:
			if ((Function_522(&Global_54076, &iLocal_4 + 752, 1, 0, 1, 60.0f) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 800) >= 2) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[17]))
			{
				Function_259(&iLocal_956, 40, 0, 4294967295, 4294967295);
				SQUADS_MERGE(&iLocal_4 + 800, &iLocal_4 + 752);
				Function_579(&iLocal_4 + 752, &iLocal_4 + 1256[17], 1);
				iLocal_1013 = 5;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[12]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 800, &iLocal_4 + 728);
				Function_579(&iLocal_4 + 728, &iLocal_4 + 1256[12], 1);
				iLocal_1013 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[13]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 800, &iLocal_4 + 720);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 720);
				Function_579(&iLocal_4 + 720, &iLocal_4 + 1256[13], 1);
				iLocal_1013 = 8;
				return 1;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[2]))
			{
				Function_576(Local_624, 0);
				Function_363(&iLocal_4 + 728, 0, 1);
				Function_363(&iLocal_4 + 720, 0, 1);
				iLocal_1013 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[12]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 752, &iLocal_4 + 728);
				Function_579(&iLocal_4 + 728, &iLocal_4 + 1256[12], 1);
				iLocal_1013 = 7;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[13]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				Function_531();
				Function_377(8);
				SQUADS_MERGE(&iLocal_4 + 752, &iLocal_4 + 720);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 720);
				Function_579(&iLocal_4 + 720, &iLocal_4 + 1256[13], 1);
				iLocal_1013 = 8;
				return 1;
			}
			Function_528();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 752) == 0)
			{
				Function_259(&iLocal_956, 10, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 752) < 1)
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000007:
			if ((Function_522(&Global_54076, &iLocal_4 + 720, 1, 0, 1, 60.0f) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 728) >= 1) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[13]))
			{
				Function_259(&iLocal_956, 46, 0, 4294967295, 4294967295);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 720);
				Function_579(&iLocal_4 + 720, &iLocal_4 + 1256[13], 1);
				iLocal_1013 = 8;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[14]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
				Function_377(10);
				SQUADS_MERGE(&iLocal_4 + 728, &iLocal_4 + 808);
				Function_579(&iLocal_4 + 808, &iLocal_4 + 1256[14], 1);
				iLocal_1013 = 2;
				return 1;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[1]) && !IS_PHYSINST_ACTIVE(GET_PHYSINST_FROM_ACTOR(&Global_54076)))
			{
				Function_576(Local_624, 1);
				Function_525();
				iLocal_1013 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[9]))
			{
				iLocal_1013 = 9;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[14]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
				Function_377(10);
				SQUADS_MERGE(&iLocal_4 + 720, &iLocal_4 + 808);
				Function_579(&iLocal_4 + 808, &iLocal_4 + 1256[14], 1);
				iLocal_1013 = 2;
				return 1;
			}
			Function_528();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 720) == 0)
			{
				Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 720) < 1)
			{
				Function_259(&iLocal_956, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[1]) && !IS_PHYSINST_ACTIVE(GET_PHYSINST_FROM_ACTOR(&Global_54076)))
			{
				Function_576(Local_624, 1);
				Function_525();
				iLocal_1013 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[10]))
			{
				Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
				iLocal_1013 = 10;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[14]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
				Function_377(10);
				SQUADS_MERGE(&iLocal_4 + 720, &iLocal_4 + 808);
				Function_579(&iLocal_4 + 808, &iLocal_4 + 1256[14], 1);
				iLocal_1013 = 2;
				return 1;
			}
			Function_528();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 720) == 0)
			{
				Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 720) < 1)
			{
				Function_259(&iLocal_956, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x0000000A:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[1]) && !IS_PHYSINST_ACTIVE(GET_PHYSINST_FROM_ACTOR(&Global_54076)))
			{
				Function_576(Local_624, 1);
				Function_525();
				iLocal_1013 = 11;
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1256[14]))
			{
				Function_259(&iLocal_956, 34, 0, 4294967295, 4294967295);
				Function_377(10);
				SQUADS_MERGE(&iLocal_4 + 720, &iLocal_4 + 808);
				Function_579(&iLocal_4 + 808, &iLocal_4 + 1256[14], 1);
				iLocal_1013 = 2;
				return 1;
			}
			Function_528();
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[10]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 720) != 0)
			{
				Function_259(&iLocal_956, 6, 0, 4294967295, 4294967295);
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 720) < 1)
			{
				Function_259(&iLocal_956, 38, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x0000000B:
			iLocal_1013 = 12;
			return 1;
			break;
		
		case 0x0000000C:
			return 0;
			break;
	}
	return 1;
}

void Function_576(int iParam0, int iParam1) //Position: 0x1B192 / 110994
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_577() //Position: 0x1B1AD / 111021
{
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2.0f, 1.0f), 0, 0);
	TASK_POINT_GUN_AT_OBJECT(0, &Global_54076, -1.0f, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 656[02]);
	TASK_PRIORITY_SET(&iLocal_4 + 656[02], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[02], bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	bLocal_952 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2.0f, 1,5f), 0, 0);
	TASK_POINT_GUN_AT_OBJECT(0, &Global_54076, -1.0f, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 656[12]);
	TASK_PRIORITY_SET(&iLocal_4 + 656[12], true);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 656[12], bLocal_952);
	TASK_SEQUENCE_RELEASE(bLocal_952, 1);
	return;
}

void Function_578() //Position: 0x1B251 / 111185
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw02_MinerWaitingOnJonLeave", "Outlaw02_MinerWaitingOnJonLeave", false, 1, 1, 0, 1);
		Function_295(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_579(int iParam0, var uParam1, bool bParam2) //Position: 0x1B2B8 / 111288
{
	if (&bParam2)
	{
		Function_376(&iParam0, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
	}
	SQUAD_SET_FACTION(&iParam0, 19);
	Function_527(&iParam0, &Global_54076, 1);
	Function_500(&iParam0, 1);
	Function_499(&iParam0, 0);
	Function_495(&iParam0);
	SQUAD_GOALS_CLEAR(&iParam0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iParam0, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iParam0, 1, &uParam1, 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iParam0, 2, &uParam1, 2, 1);
	return;
}

void Function_580(bool bParam0) //Position: 0x1B327 / 111399
{
	bLocal_952 = false;
	while (bLocal_952 <= 2)
	{
		iLocal_934 = &iLocal_4 + 656[bLocal_9522];
		if (IS_ACTOR_ALIVE(&iLocal_934))
		{
			AI_GOAL_LOOK_CLEAR(&iLocal_934);
			MEMORY_ALLOW_SHOOTING(&iLocal_934, true);
			SET_ACTOR_VISION_FIELD_OF_VIEW(&iLocal_934, 359.0f);
			if (bParam0)
			{
				Function_581(&iLocal_934, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_934, 0);
				SET_ACTOR_FACTION(&iLocal_934, 19);
				GET_POSITION(&iLocal_934, &Local_938);
				TASK_CLEAR(&iLocal_934);
				TASK_PRIORITY_SET(&iLocal_934, false);
				TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_934, &Local_938, GET_HEADING(&iLocal_934), 10.0f);
			}
			else
			{
				ACTOR_DRAW_ANY_WEAPON(&iLocal_934, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_934, 0);
				TASK_CLEAR(&iLocal_934);
				SQUAD_JOIN(&iLocal_934, &iLocal_4 + 808);
			}
		}
		bLocal_952++;
	}
	return;
}

void Function_581(var uParam0, bool bParam1) //Position: 0x1B3ED / 111597
{
	if (bParam1)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
		{
			ADD_BLIP_FOR_ACTOR(&uParam0, 322, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	return;
}

void Function_582() //Position: 0x1B42A / 111658
{
	Function_375(&bLocal_983);
	Function_527(&bLocal_983, &Global_54076, 1);
	return;
}

void Function_583(var uParam0, int iParam1) //Position: 0x1B443 / 111683
{
	if (SQUAD_IS_VALID(&bLocal_983))
	{
		bLocal_952 = false;
		bLocal_953 = false;
		if (SQUAD_IS_VALID(&uParam0))
		{
			while (bLocal_952 > iParam1 && bLocal_953 > SQUAD_GET_SIZE(&uParam0))
			{
				iLocal_934 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_953);
				if (IS_ACTOR_VALID(&iLocal_934))
				{
					TASK_CLEAR(&iLocal_934);
					SQUAD_JOIN(&iLocal_934, &bLocal_983);
					MEMORY_ALLOW_SHOOTING(&iLocal_934, false);
					MEMORY_ALLOW_PICKUP_WEAPONS(&iLocal_934, 0);
					MEMORY_ALLOW_THROWING_EXPLOSIVES(&iLocal_934, 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_934, 0);
					bLocal_952++;
				}
				else
				{
					bLocal_953++;
				}
			}
		}
		else
		{
			LOG_ERROR("Joining squad invalid! This shouldn't be happening!");
		}
	}
	else
	{
		LOG_ERROR("MinerRetreatSquad invalid! This shouldn't be happening!");
	}
	return;
}

void Function_584() //Position: 0x1B553 / 111955
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Outlaw02_JonShootsMiner", "Outlaw02_JonShootsMiner", false, 2, 1, 0, 1);
		Function_295(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_585() //Position: 0x1B5AA / 112042
{
	if (iLocal_695 < 5 && iLocal_695 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_4 + 944[0]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 944[0]))
			{
				Function_574();
				iLocal_957 = 0;
				DESTROY_VOLUME(&iLocal_4 + 944[0]);
			}
		}
		else if (!iLocal_957)
		{
			if (Function_571())
			{
				Function_554();
				iLocal_957 = 1;
			}
		}
		if (!Function_615())
		{
			Function_349(106, "STAGE 01 - COMPLETE");
		}
	}
	switch (iLocal_695)
	{
		case 0x00000000:
			Function_357(0);
			Function_614();
			Function_613();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
			Function_612();
			bLocal_697 = Global_46796[4];
			if (iLocal_960)
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (Function_441(&Local_624))
				{
					Function_202(1, 0, 1);
				}
				Function_350(&Global_54076, &iLocal_4 + 1480[0], 1, 1, 1);
				Function_349(1, "STAGE 01 - STREAMING GOAL");
			}
			else
			{
				Function_349(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_340(bLocal_697) || bLocal_697 != 4294967295))
			{
				Function_349(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_428(iLocal_694);
			Function_418(StackVal, Function_428(iLocal_694), iLocal_694, Global_46736[1], Function_426(iLocal_694), 0);
			iLocal_696 = Function_417();
			Function_611();
			Function_349(5, "STAGE 01 - FADE IN");
			break;
		
		case 0x00000005:
			Function_276(1.0f);
			Function_609();
			Function_388(1);
			Function_349(6, "STAGE 01 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_257();
				Function_608();
				Function_349(7, "STAGE 01 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_387("Outlaw02_obj01_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_233(1);
				Function_349(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (!Function_385())
			{
				if (!Function_606())
				{
					Function_379();
				}
			}
			if (Function_604(&bLocal_710, 60.0f, 200.0f, &iLocal_700, "Outlaw02_obj01_1", "Outlaw_abandoned", &bLocal_735, 1, 0, 0, 325, 1))
			{
				Function_349(14, "STAGE 01 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_604(&bLocal_710, 60.0f, 200.0f, &iLocal_700, "Outlaw02_obj01_1", "Outlaw_abandoned", &bLocal_735, 1, 0, 0, 325, 1))
			{
				Function_349(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_257();
				Function_387("Outlaw02_obj01_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_233(0);
				Function_234(1);
				Function_349(22, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000016:
			if (!Function_385())
			{
				if (!Function_606())
				{
					if (!Function_379())
					{
						if (!Function_601())
						{
							if (!Function_596())
							{
								Function_587(&iLocal_961, &iLocal_962, 1);
							}
						}
					}
				}
			}
			if (Function_604(&bLocal_710, 60.0f, 200.0f, &iLocal_700, "Outlaw_return", "Outlaw_abandoned", &bLocal_735, 1, 0, 0, 325, 1))
			{
				Function_349(23, "STAGE 01 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000017:
			if (!Function_604(&bLocal_710, 60.0f, 200.0f, &iLocal_700, "Outlaw_return", "Outlaw_abandoned", &bLocal_735, 1, 0, 0, 325, 1))
			{
				Function_349(22, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_290(&bLocal_706) <= 10.0f)
			{
				Function_586();
				Function_388(0);
				iLocal_694 = 1;
				iLocal_722[0] = 1;
				Function_349(0, "STAGE 02 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_586() //Position: 0x1BAD8 / 113368
{
	Function_246();
	Function_234(0);
	Function_233(0);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1000[7]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1000[7]);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	return;
}

int Function_587(var uParam0, int iParam1, bool bParam2) //Position: 0x1BB18 / 113432
{
	if ((uParam0 && !bLocal_976) && !bLocal_978)
	{
		if (!&bParam2 || ((!Function_595() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !IS_ANY_SPEECH_PLAYING(&iLocal_700)))
		{
			switch (iParam1)
			{
				case 0x00000000:
					uParam0 = 0;
					if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v1_AA"))
					{
						Function_594();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v2_AA"))
					{
						Function_593();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v3_AA"))
					{
						Function_592();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v4_AA"))
					{
						Function_591();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Outlaw02_BanterToGapt_v5_AA"))
					{
						Function_590();
					}
					else if (!iLocal_963)
					{
						Function_589();
						iLocal_963 = 1;
					}
					break;
				
				case 0x00000001:
					uParam0 = 0;
					Function_588();
					break;
				}
		}
		return 1;
	}
	return 0;
}

void Function_588() //Position: 0x1BC59 / 113753
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AA1", "Outlaw02_BanterRideGapt_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AA2", "Outlaw02_BanterRideGapt_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterRideGapt_v1_AB", "Outlaw02_BanterRideGapt_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AC1", "Outlaw02_BanterRideGapt_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AC2", "Outlaw02_BanterRideGapt_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterRideGapt_v1_AD", "Outlaw02_BanterRideGapt_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AE1", "Outlaw02_BanterRideGapt_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterRideGapt_v1_AE2", "Outlaw02_BanterRideGapt_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterRideGapt_v1_AF", "Outlaw02_BanterRideGapt_v1_AF", true, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_589() //Position: 0x1BF10 / 114448
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_NoMoreTalk", "Outlaw02_NoMoreTalk", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_590() //Position: 0x1BF5F / 114527
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AA", "Outlaw02_BanterToGapt_v5_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AB", "Outlaw02_BanterToGapt_v5_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AC1", "Outlaw02_BanterToGapt_v5_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AC2", "Outlaw02_BanterToGapt_v5_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AD", "Outlaw02_BanterToGapt_v5_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AE", "Outlaw02_BanterToGapt_v5_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AF1", "Outlaw02_BanterToGapt_v5_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AF2", "Outlaw02_BanterToGapt_v5_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AG", "Outlaw02_BanterToGapt_v5_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AH", "Outlaw02_BanterToGapt_v5_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AI", "Outlaw02_BanterToGapt_v5_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AJ", "Outlaw02_BanterToGapt_v5_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AK", "Outlaw02_BanterToGapt_v5_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AL", "Outlaw02_BanterToGapt_v5_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AM1", "Outlaw02_BanterToGapt_v5_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AM2", "Outlaw02_BanterToGapt_v5_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AN", "Outlaw02_BanterToGapt_v5_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AO1", "Outlaw02_BanterToGapt_v5_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AO2", "Outlaw02_BanterToGapt_v5_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AP", "Outlaw02_BanterToGapt_v5_AP", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AQ1", "Outlaw02_BanterToGapt_v5_AQ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AQ2", "Outlaw02_BanterToGapt_v5_AQ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AQ3", "Outlaw02_BanterToGapt_v5_AQ3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AR", "Outlaw02_BanterToGapt_v5_AR", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AS1", "Outlaw02_BanterToGapt_v5_AS1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v5_AS2", "Outlaw02_BanterToGapt_v5_AS2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v5_AT", "Outlaw02_BanterToGapt_v5_AT", true, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_591() //Position: 0x1C6E0 / 116448
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AA", "Outlaw02_BanterToGapt_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AB", "Outlaw02_BanterToGapt_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AC", "Outlaw02_BanterToGapt_v4_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AD", "Outlaw02_BanterToGapt_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AE1", "Outlaw02_BanterToGapt_v4_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AE2", "Outlaw02_BanterToGapt_v4_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AF", "Outlaw02_BanterToGapt_v4_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AG1", "Outlaw02_BanterToGapt_v4_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AG2", "Outlaw02_BanterToGapt_v4_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AH", "Outlaw02_BanterToGapt_v4_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AI1", "Outlaw02_BanterToGapt_v4_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AI2", "Outlaw02_BanterToGapt_v4_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AJ", "Outlaw02_BanterToGapt_v4_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AK", "Outlaw02_BanterToGapt_v4_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AL", "Outlaw02_BanterToGapt_v4_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AM1", "Outlaw02_BanterToGapt_v4_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AM2", "Outlaw02_BanterToGapt_v4_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v4_AN", "Outlaw02_BanterToGapt_v4_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v4_AO", "Outlaw02_BanterToGapt_v4_AO", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_592() //Position: 0x1CC29 / 117801
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AA", "Outlaw02_BanterToGapt_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AB", "Outlaw02_BanterToGapt_v3_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AC", "Outlaw02_BanterToGapt_v3_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AD", "Outlaw02_BanterToGapt_v3_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AE", "Outlaw02_BanterToGapt_v3_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AF1", "Outlaw02_BanterToGapt_v3_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AF2", "Outlaw02_BanterToGapt_v3_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AG1", "Outlaw02_BanterToGapt_v3_AG1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AG2", "Outlaw02_BanterToGapt_v3_AG2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AH1", "Outlaw02_BanterToGapt_v3_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AH2", "Outlaw02_BanterToGapt_v3_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AI", "Outlaw02_BanterToGapt_v3_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AJ", "Outlaw02_BanterToGapt_v3_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AK", "Outlaw02_BanterToGapt_v3_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AL1", "Outlaw02_BanterToGapt_v3_AL1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AL2", "Outlaw02_BanterToGapt_v3_AL2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v3_AM", "Outlaw02_BanterToGapt_v3_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v3_AN", "Outlaw02_BanterToGapt_v3_AN", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_593() //Position: 0x1D12D / 119085
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AA", "Outlaw02_BanterToGapt_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AB", "Outlaw02_BanterToGapt_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AC", "Outlaw02_BanterToGapt_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AD", "Outlaw02_BanterToGapt_v2_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AE", "Outlaw02_BanterToGapt_v2_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AF", "Outlaw02_BanterToGapt_v2_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AG1", "Outlaw02_BanterToGapt_v2_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AG2", "Outlaw02_BanterToGapt_v2_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AH1", "Outlaw02_BanterToGapt_v2_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AH2", "Outlaw02_BanterToGapt_v2_AH2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AI1", "Outlaw02_BanterToGapt_v2_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AI2", "Outlaw02_BanterToGapt_v2_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AJ", "Outlaw02_BanterToGapt_v2_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AK1", "Outlaw02_BanterToGapt_v2_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AK2", "Outlaw02_BanterToGapt_v2_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AL", "Outlaw02_BanterToGapt_v2_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AM", "Outlaw02_BanterToGapt_v2_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AN", "Outlaw02_BanterToGapt_v2_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AO1", "Outlaw02_BanterToGapt_v2_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AO2", "Outlaw02_BanterToGapt_v2_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AP1", "Outlaw02_BanterToGapt_v2_AP1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AP2", "Outlaw02_BanterToGapt_v2_AP2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AQ1", "Outlaw02_BanterToGapt_v2_AQ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v2_AQ2", "Outlaw02_BanterToGapt_v2_AQ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v2_AR", "Outlaw02_BanterToGapt_v2_AR", true, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_594() //Position: 0x1D820 / 120864
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AA", "Outlaw02_BanterToGapt_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4750", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AB", "Outlaw02_BanterToGapt_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AC1", "Outlaw02_BanterToGapt_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AC2", "Outlaw02_BanterToGapt_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AD", "Outlaw02_BanterToGapt_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AE1", "Outlaw02_BanterToGapt_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AE2", "Outlaw02_BanterToGapt_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AF", "Outlaw02_BanterToGapt_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AG", "Outlaw02_BanterToGapt_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AH", "Outlaw02_BanterToGapt_v1_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AI1", "Outlaw02_BanterToGapt_v1_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AI2", "Outlaw02_BanterToGapt_v1_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AJ", "Outlaw02_BanterToGapt_v1_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AK1", "Outlaw02_BanterToGapt_v1_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AK2", "Outlaw02_BanterToGapt_v1_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AL1", "Outlaw02_BanterToGapt_v1_AL1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AL2", "Outlaw02_BanterToGapt_v1_AL2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BanterToGapt_v1_AM", "Outlaw02_BanterToGapt_v1_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AN1", "Outlaw02_BanterToGapt_v1_AN1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Outlaw02_BanterToGapt_v1_AN2", "Outlaw02_BanterToGapt_v1_AN2", true, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_595() //Position: 0x1DDD5 / 122325
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_596() //Position: 0x1DDE2 / 122338
{
	if (bLocal_981)
	{
		return 0;
	}
	if (!bLocal_976 && !bLocal_978)
	{
		if ((fLocal_971 - fLocal_972) <= 25.0f)
		{
			Function_600();
			bLocal_976 = true;
			return 1;
		}
		if ((fLocal_972 - fLocal_971) <= 25.0f)
		{
			Function_599();
			bLocal_976 = true;
			return 1;
		}
		if (VDIST(Local_965, Local_968) <= 35.0f)
		{
			Function_598();
			bLocal_976 = true;
			return 1;
		}
	}
	if (VDIST(Local_965, Local_968) >= 10.0f)
	{
		Function_597();
		bLocal_976 = false;
		bLocal_978 = false;
		if (iLocal_962 == 0)
		{
			iLocal_961 = 1;
		}
		return 1;
	}
	return 0;
}

void Function_597() //Position: 0x1DE85 / 122501
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ComesBackGapt", "Outlaw02_ComesBackGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_598() //Position: 0x1DEDA / 122586
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_WrongDirGapt", "Outlaw02_WrongDirGapt", false, 2, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_599() //Position: 0x1DF2D / 122669
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_TooFarBehindGapt", "Outlaw02_TooFarBehindGapt", false, 2, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_600() //Position: 0x1DF88 / 122760
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_TooFarAheadGapt", "Outlaw02_TooFarAheadGapt", false, 2, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_601() //Position: 0x1DFE1 / 122849
{
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "beingBucked"))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_603();
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ThrownOffHorseGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
		}
		else
		{
			Function_602();
		}
		iLocal_964 = 1;
		return 1;
	}
	return 0;
}

void Function_602() //Position: 0x1E059 / 122969
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_OffHorseGapt", "Outlaw02_OffHorseGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_603() //Position: 0x1E0AC / 123052
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ThrownOffHorseGapt", "Outlaw02_ThrownOffHorseGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_604(struct<2> Param0, bool bParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1E10B / 123147
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_605(&Global_54076, &iParam3, bParam2))
	{
		Function_266(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_605(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_371(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_387(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_370(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_369(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_371(2))
	{
		Function_368(2);
		if (!Function_367())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_366();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_228(&iParam3);
				Function_236(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_369(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_369(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_605(var uParam0, var uParam1, bool bParam2) //Position: 0x1E2C9 / 123593
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

bool Function_606() //Position: 0x1E3DE / 123870
{
	if (IS_ACTOR_SHOOTING(&Global_54076))
	{
		if (GET_WEAPON_IN_HAND(&Global_54076) != 21)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_607();
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsRandGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
			iLocal_964 = 1;
			return 1;
		}
	}
	return 0;
}

void Function_607() //Position: 0x1E43F / 123967
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsRandGapt", "Outlaw02_ShootsRandGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_608() //Position: 0x1E496 / 124054
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_OffToGapt", "Outlaw02_OffToGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_609() //Position: 0x1E4E3 / 124131
{
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	Function_259(&iLocal_956, 3, 0, 4294967295, 4294967295);
	if (iLocal_960)
	{
		Function_535((3.0f + 1.0f));
	}
	SET_ACTOR_INVULNERABILITY(&iLocal_700, false);
	SET_ACTOR_INVULNERABILITY(&iLocal_702, false);
	SET_ACTOR_INVULNERABILITY(&iLocal_704, false);
	SET_ANIM_SET_FOR_ACTOR(&iLocal_700, "stand_ambient", 0);
	MEMORY_PREFER_RIDING(&iLocal_700, false);
	if (iLocal_960)
	{
		Function_610();
	}
	return;
}

void Function_610() //Position: 0x1E548 / 124232
{
	ACTOR_POP_NEXT_GAIT(&iLocal_700, 1, 0);
	TASK_CLEAR(&iLocal_700);
	TASK_PRIORITY_SET(&iLocal_700, true);
	TASK_MOUNT(&iLocal_700, &iLocal_704, 0, 1, 1, 2);
	return;
}

void Function_611() //Position: 0x1E575 / 124277
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1000[7]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1000[7], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1000[7]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1000[7]);
	Function_322(0, 0);
	return;
}

void Function_612() //Position: 0x1E5B2 / 124338
{
	Function_169(114695);
	Function_352(9);
	return;
}

void Function_613() //Position: 0x1E5C4 / 124356
{
	Function_355(&iLocal_700);
	Function_355(&iLocal_702);
	return;
}

void Function_614() //Position: 0x1E5D8 / 124376
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	return;
}

bool Function_615() //Position: 0x1E5E8 / 124392
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[14]))
	{
		Function_266("Outlaw02_obj01_fail");
		bLocal_735 = true;
		return 1;
	}
	Function_624();
	switch (iLocal_1012)
	{
		case 0x00000000:
			iLocal_964 = 0;
			iLocal_961 = 1;
			iLocal_962 = 0;
			iLocal_1012 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[13]) && IS_ACTOR_IN_VOLUME(&iLocal_700, &iLocal_4 + 1112[13]))
			{
				SET_ACTOR_MAX_SPEED(&iLocal_700, 5);
				iLocal_1012 = 3;
				return 1;
			}
			if (GET_MOUNT(&Global_54076) != &iLocal_702 && Function_623(&iLocal_700, &iLocal_704))
			{
				Function_259(&iLocal_956, 11, 0, 4294967295, 4294967295);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700, -1.0f, -1.0f, 4, 1, 1);
				SET_ACTOR_MAX_SPEED(&iLocal_700, 4);
				if (!bLocal_978)
				{
					TASK_CLEAR(&iLocal_700);
					TASK_PRIORITY_SET(&iLocal_700, true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_700, &iLocal_4 + 2448, 3, 0, 0, 1, false);
				}
				Function_274();
				Function_552();
				Function_349(15, "STAGE 01 - OBJ_02-OBJ_01");
				Function_380(&bLocal_714);
				iLocal_1012 = 2;
				return 1;
			}
			if (GET_MOUNT(&Global_54076) == &iLocal_704)
			{
				TASK_CLEAR(&iLocal_700);
				TASK_PRIORITY_SET(&iLocal_700, true);
				TASK_MOUNT(&iLocal_700, &iLocal_702, 0, 1, 4, 2147483647);
			}
			Function_620(1, 0);
			if (Function_623(&iLocal_700, &iLocal_704))
			{
				if (GET_TASK_STATUS(&iLocal_700, 0) != 1)
				{
					if (!bLocal_978)
					{
						GET_PATH_POINT(&iLocal_4 + 2448, false, &Local_938);
						bLocal_952 = TASK_SEQUENCE_OPEN();
						TASK_FACE_COORD(0, &Local_938, 0);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2448, 1, 1, 0, 1, false);
						TASK_SEQUENCE_CLOSE();
						TASK_CLEAR(&iLocal_700);
						TASK_PRIORITY_SET(&iLocal_700, true);
						TASK_SEQUENCE_PERFORM(&iLocal_700, bLocal_952);
						TASK_SEQUENCE_RELEASE(bLocal_952, 1);
					}
				}
				else if (GET_TASK_STATUS(&iLocal_700, 0) == 1)
				{
					if (!iLocal_977)
					{
						Function_619(&iLocal_4 + 2448);
						if (fLocal_972 <= (fLocal_973 * 0,001f))
						{
							iLocal_977 = 1;
							Function_599();
							Function_390("stand_ambient", "stand_ambient/one_hnd_hrs");
						}
					}
					else if (!bLocal_978)
					{
						Function_619(&iLocal_4 + 2448);
						if (fLocal_972 <= (fLocal_973 * 0,005f))
						{
							bLocal_978 = true;
							SET_ACTOR_MAX_SPEED(&iLocal_700, 2);
							TASK_CLEAR(&iLocal_700);
							TASK_PRIORITY_SET(&iLocal_700, true);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_700, &iLocal_4 + 2448, 3, 0, 0, 1, false);
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1112[13]) && IS_ACTOR_IN_VOLUME(&iLocal_700, &iLocal_4 + 1112[13]))
			{
				SET_ACTOR_MAX_SPEED(&iLocal_700, 5);
				iLocal_1012 = 3;
				return 1;
			}
			Function_619(&iLocal_4 + 2448);
			if (!iLocal_979)
			{
				if (Function_618(&iLocal_4 + 2448, &iLocal_4 + 2312[3]))
				{
					iLocal_979 = 1;
					iLocal_961 = 1;
					iLocal_962 = 1;
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else if (!iLocal_980)
			{
				if (Function_618(&iLocal_4 + 2448, &iLocal_4 + 2312[1]))
				{
					iLocal_980 = 1;
				}
			}
			else if (!bLocal_981)
			{
				if (!Function_292(&bLocal_714))
				{
					if (Function_618(&iLocal_4 + 2448, &iLocal_4 + 2312[2]))
					{
						bLocal_976 = false;
						bLocal_978 = false;
						Function_298(&bLocal_714);
						SET_ACTOR_MAX_SPEED(&iLocal_700, 2);
					}
				}
				else if (Function_290(&bLocal_714) <= 1.0f)
				{
					bLocal_981 = true;
					Function_617();
					Function_380(&bLocal_714);
				}
			}
			else if (!bLocal_982)
			{
				if (!Function_292(&bLocal_714))
				{
					if (Function_616(&iLocal_4 + 2448))
					{
						iLocal_977 = 0;
						Function_298(&bLocal_714);
						SET_ACTOR_MAX_SPEED(&iLocal_700, 5);
					}
				}
				else if (Function_290(&bLocal_714) <= 5.0f)
				{
					if (!iLocal_977)
					{
						iLocal_977 = 1;
						Function_599();
						Function_390("stand_ambient", "stand_ambient/one_hnd_hrs");
					}
				}
			}
			Function_620(1, 1);
			break;
		
		case 0x00000003:
			return 0;
			break;
	}
	return 1;
}

bool Function_616(int iParam0) //Position: 0x1E9EF / 125423
{
	GET_PATH_POINT(&iParam0, (GET_NUM_PATH_POINTS(&iParam0) - 1), &Local_938);
	if ((GET_TASK_STATUS(&iLocal_700, 43) != 0 || VDIST(Local_968, Local_938) >= 2,5f) || (fLocal_973 - fLocal_972) >= 2,5f)
	{
		return 1;
	}
	return 0;
}

void Function_617() //Position: 0x1EA39 / 125497
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ArriveAtGapt", "Outlaw02_ArriveAtGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_618(var uParam0, int iParam1) //Position: 0x1EA8C / 125580
{
	GET_OBJECT_POSITION(&iParam1, &Local_938);
	ESTIMATE_DISTANCE_ALONG_PATH(&uParam0, &Local_938, &bLocal_950, &fLocal_973);
	if (fLocal_972 <= bLocal_950 || VDIST(Local_968, Local_938) >= 2,5f)
	{
		return 1;
	}
	return 0;
}

void Function_619(int iParam0) //Position: 0x1EACC / 125644
{
	fLocal_971 = 0.0f;
	fLocal_972 = 0.0f;
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iParam0, &Local_965, &Local_968, &fLocal_971, &fLocal_972, &fLocal_973);
	return;
}

void Function_620(bool bParam0, bool bParam1) //Position: 0x1EAEF / 125679
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_233(0);
			if (GET_MOUNT(&Global_54076) != &iLocal_702)
			{
				Function_358(0, 0x40400000);
				if (GET_MOUNT(&Global_54076) == &iLocal_704)
				{
					iLocal_934 = &iLocal_702;
					iLocal_702 = &iLocal_704;
					iLocal_704 = &iLocal_934;
					SET_ACTORS_HORSE(&Global_54076, &iLocal_702);
					Function_621(&iLocal_702, 0);
					GIVE_OBJECT_TO_LAYOUT(&iLocal_702, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ACTORS_HORSE(&iLocal_700, &iLocal_704);
					SET_MOST_RECENT_MOUNT(&iLocal_700, &iLocal_704);
					GIVE_OBJECT_TO_LAYOUT(&iLocal_704, &iLocal_622);
				}
				else
				{
					if (IS_ACTOR_ALIVE(&iLocal_702))
					{
						SET_ACTOR_FACTION(&iLocal_702, 17);
						GIVE_OBJECT_TO_LAYOUT(&iLocal_702, GET_AMBIENT_LAYOUT());
					}
					iLocal_702 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &iLocal_702);
					Function_621(&iLocal_702, 0);
					SET_ACTOR_FACTION(&iLocal_702, 20);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iLocal_702, 1);
					GIVE_OBJECT_TO_LAYOUT(&iLocal_702, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		else
		{
			Function_233(1);
		}
	}
	if (bParam1)
	{
		Function_540(0);
	}
	return;
}

void Function_621(int iParam0, int iParam1) //Position: 0x1EC0E / 125966
{
	Function_622(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_622(float fParam0) //Position: 0x1EC23 / 125987
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

bool Function_623(int iParam0, int iParam1) //Position: 0x1EDF2 / 126450
{
	if (GET_MOUNT(&iParam0) != &iParam1)
	{
		return 0;
	}
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iParam0))
	{
		return 1;
	}
	return 0;
}

void Function_624() //Position: 0x1EE12 / 126482
{
	GET_POSITION(&Global_54076, &Local_965);
	GET_POSITION(&iLocal_700, &Local_968);
	return;
}

void Function_625() //Position: 0x1EE2C / 126508
{
	switch (iLocal_695)
	{
		case 0x00000006:
			Function_676(&Local_624, 1);
			iLocal_622 = CREATE_LAYOUT("Outlaw02_DynamicLayout");
			Function_675();
			Function_612();
			Function_202(1, 0, 1);
			iLocal_695 = 7;
			break;
		
		case 0x00000007:
			if (Function_656())
			{
				Function_650();
				iLocal_695 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_647())
			{
				iLocal_695 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_643())
			{
				Function_640();
				iLocal_695 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_698 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			Function_636();
			Function_635(&bLocal_706);
			Function_635(&bLocal_710);
			iLocal_694 = 0;
			iLocal_695 = 0;
			Function_633(&Local_624, &iLocal_694, &iLocal_695);
			Function_632(StackVal, StackVal, StackVal, StackVal, Function_640(), Local_624);
			switch (iLocal_694)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_631();
					break;
				
				case 0x00000002:
					Function_630();
					break;
				
				case 0x00000003:
					Function_629();
					break;
				
				case 0x00000004:
					Function_628();
					break;
				
				case 0x00000065:
					Function_626();
					break;
			}
			break;
	}
	return;
}

void Function_626() //Position: 0x1EF50 / 126800
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	Function_251();
	Function_532();
	Function_486();
	Function_485();
	Function_483();
	Function_627();
	if (SQUAD_IS_VALID(&iLocal_4 + 880))
	{
		Function_484(&iLocal_4 + 880);
		DESTROY_OBJECT(&iLocal_4 + 880);
	}
	Function_247();
	Function_242();
	Function_239();
	Function_238();
	Function_234(1);
	Function_233(0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_217(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	Function_322(0, 0);
	CLEAR_ACTOR_MAX_SPEED(&iLocal_700);
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
	Function_274();
	return;
}

void Function_627() //Position: 0x1EFE5 / 126949
{
	if (SQUAD_IS_VALID(&iLocal_4 + 768))
	{
		Function_484(&iLocal_4 + 768);
		DESTROY_OBJECT(&iLocal_4 + 768);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 760))
	{
		Function_484(&iLocal_4 + 760);
		DESTROY_OBJECT(&iLocal_4 + 760);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 784))
	{
		Function_484(&iLocal_4 + 784);
		DESTROY_OBJECT(&iLocal_4 + 784);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 736))
	{
		Function_484(&iLocal_4 + 736);
		DESTROY_OBJECT(&iLocal_4 + 736);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 776))
	{
		Function_484(&iLocal_4 + 776);
		DESTROY_OBJECT(&iLocal_4 + 776);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 792))
	{
		Function_484(&iLocal_4 + 792);
		DESTROY_OBJECT(&iLocal_4 + 792);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 744))
	{
		Function_484(&iLocal_4 + 744);
		DESTROY_OBJECT(&iLocal_4 + 744);
	}
	return;
}

void Function_628() //Position: 0x1F0B6 / 127158
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	Function_252();
	Function_532();
	Function_486();
	Function_485();
	Function_483();
	Function_627();
	Function_247();
	Function_243();
	Function_239();
	Function_238();
	Function_234(0);
	Function_233(0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_217(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	Function_322(0, 0);
	CLEAR_ACTOR_MAX_SPEED(&iLocal_700);
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
	Function_274();
	return;
}

void Function_629() //Position: 0x1F12E / 127278
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	Function_253();
	Function_532();
	Function_486();
	Function_485();
	Function_483();
	Function_627();
	Function_557();
	Function_244();
	Function_239();
	Function_238();
	Function_234(0);
	Function_233(0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_217(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	Function_322(0, 0);
	CLEAR_ACTOR_MAX_SPEED(&iLocal_700);
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
	Function_274();
	return;
}

void Function_630() //Position: 0x1F1A6 / 127398
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	Function_254();
	Function_532();
	Function_486();
	Function_485();
	Function_483();
	Function_557();
	Function_245();
	Function_238();
	Function_234(0);
	Function_233(0);
	Function_217(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	Function_322(0, 0);
	CLEAR_ACTOR_MAX_SPEED(&iLocal_700);
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
	Function_274();
	return;
}

void Function_631() //Position: 0x1F213 / 127507
{
	Function_259(&iLocal_956, 0, 0, 4294967295, 4294967295);
	Function_255();
	Function_246();
	Function_234(0);
	Function_233(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &iLocal_700);
	CLEAR_ACTOR_MAX_SPEED(&iLocal_700);
	MEMORY_CLEAR_RIDING_PREFERENCE(&iLocal_700);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_700, 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
	Function_321();
	SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
	Function_274();
	SET_ACTOR_INVULNERABILITY(&iLocal_704, true);
	Function_552();
	return;
}

void Function_632(struct<41> Param0) //Position: 0x1F270 / 127600
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_694 = 0;
			break;
		
		case 0x00000002:
			iLocal_694 = 1;
			break;
		
		case 0x00000003:
			iLocal_694 = 3;
			break;
		
		case 0x00000004:
			iLocal_694 = 4;
			break;
		
		case 0x00000005:
			iLocal_694 = 101;
			break;
	}
}

void Function_633(var uParam0, var uParam1, int iParam2) //Position: 0x1F2C3 / 127683
{
	if (Function_441(&uParam0))
	{
		uParam1 = Function_440(&uParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_634();
	}
	return;
}

void Function_634() //Position: 0x1F2FF / 127743
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

void Function_635(bool bParam0) //Position: 0x1F350 / 127824
{
	if (!Function_292(&bParam0))
	{
		Function_299(&bParam0, 0.0f);
	}
	return;
}

void Function_636() //Position: 0x1F367 / 127847
{
	iLocal_956 = 0;
	Function_639("FTR_SONG_09", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	ENABLE_CHILD_SECTOR("gap_caveBlockades01x");
	Function_164(Global_46796[3]);
	Function_137(&(Global_43791[Global_46796[3]]), 384);
	Function_637(&uLocal_738, &iLocal_622);
	Function_324(&(Local_792[015]), &iLocal_700, "Outlaw", 1, 0x5f5e100, 1);
	Function_325(&(Local_792[015]), 1024, 0);
	return;
}

int Function_637(struct<2>[] Param0) //Position: 0x1F3F6 / 127990
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_638(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_638(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_638(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_638(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_638(struct<13> Param0) //Position: 0x1FACF / 129743
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

void Function_639(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1FB9E / 129950
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_260(iParam1), &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

struct<8> Function_640() //Position: 0x1FBC0 / 129984
{
	var uVar0;
	
	Function_642(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Outlaw02_layout");
	*(&iLocal_4 + 936) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 888[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3668.0f, 12.0f, 3492.0f), Vector(0.0f, 0.0f, 0.0f), Vector(16.0f, 10.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 936, &iLocal_4 + 888[0]);
	*(&iLocal_4 + 888[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4346,712f, 15,7963f, 3212,335f), Vector(0.0f, 67,60052f, 0.0f), Vector(16.0f, 10.0f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 936, &iLocal_4 + 888[1]);
	*(&iLocal_4 + 888[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4431,079f, 2,064837f, 3125,359f), Vector(0.0f, 739,2762f, 0.0f), Vector(5.0f, 4.0f, 5.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 936, &iLocal_4 + 888[2]);
	*(&iLocal_4 + 888[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4472,856f, 35.0f, 3142,665f), Vector(0.0f, -134,75f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 936, &iLocal_4 + 888[3]);
	*(&iLocal_4 + 888[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4455,938f, 10,70426f, 3271,993f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 8.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 936, &iLocal_4 + 888[4]);
	*(&iLocal_4 + 992) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 944[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4252.0f, 40.0f, 3074.0f), Vector(0.0f, 180.0f, 0.0f), Vector(8.0f, 100.0f, 1024.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 992, &iLocal_4 + 944[0]);
	*(&iLocal_4 + 944[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4460.0f, 40.0f, 3198.0f), Vector(0.0f, 90.0f, 0.0f), Vector(204.0f, 100.0f, 112.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 992, &iLocal_4 + 944[1]);
	*(&iLocal_4 + 944[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4460.0f, 40.0f, 3112.0f), Vector(0.0f, 90.0f, 0.0f), Vector(32.0f, 100.0f, 112.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 992, &iLocal_4 + 944[2]);
	*(&iLocal_4 + 944[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4474.0f, 40.0f, 3104.0f), Vector(0.0f, 90.0f, 0.0f), Vector(16.0f, 100.0f, 84.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 992, &iLocal_4 + 944[3]);
	*(&iLocal_4 + 944[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4500.0f, 40.0f, 3252.0f), Vector(0.0f, 90.0f, 0.0f), Vector(96.0f, 100.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 992, &iLocal_4 + 944[4]);
	*(&iLocal_4 + 1104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1000[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4456,076f, 7,5f, 3141,312f), Vector(0.0f, 64,3241f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[0]);
	*(&iLocal_4 + 1000[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4463,153f, 7,5f, 3121,846f), Vector(0.0f, 122,6785f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[1]);
	*(&iLocal_4 + 1000[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4439,965f, 2,771877f, 3153,817f), Vector(0.0f, -2,937966f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[2]);
	*(&iLocal_4 + 1000[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4514.0f, 20,84354f, 3204.0f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 16.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[3]);
	*(&iLocal_4 + 1000[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4498,34f, 15,24227f, 3271,346f), Vector(0.0f, 34.0f, 0.0f), Vector(4.0f, 12.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[4]);
	*(&iLocal_4 + 1000[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4472.0f, 30.0f, 3128.0f), Vector(0.0f, 90.0f, 0.0f), Vector(64.0f, 25.0f, 56.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[5]);
	*(&iLocal_4 + 1000[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4418.0f, 40.0f, 3198.0f), Vector(0.0f, 90.0f, 0.0f), Vector(204.0f, 100.0f, 196.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[6]);
	*(&iLocal_4 + 1000[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-3691,575f, 12.0f, 3488.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[7]);
	*(&iLocal_4 + 1000[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4446.0f, 16,25f, 3266.0f), Vector(0.0f, 90.0f, 0.0f), Vector(36.0f, 20.0f, 52.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[8]);
	*(&iLocal_4 + 1000[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4452.0f, 30.0f, 3180.0f), Vector(0.0f, 90.0f, 0.0f), Vector(40.0f, 25.0f, 96.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[9]);
	*(&iLocal_4 + 1000[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4438.0f, 0,0645872f, 3120.0f), Vector(0.0f, 90.0f, 0.0f), Vector(32.0f, 6.0f, 36.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[10]);
	*(&iLocal_4 + 1000[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4510,411f, 15,78046f, 3260,052f), Vector(0.0f, 34.0f, 0.0f), Vector(8,5f, 10.0f, 12,75f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1104, &iLocal_4 + 1000[11]);
	*(&iLocal_4 + 1248) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-4458,504f, 8,25f, 3274,55f), Vector(0.0f, 719.0f, 0.0f), Vector(10.0f, 20.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[0]);
	*(&iLocal_4 + 1112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4473,481f, 2,012973f, 3143,061f), Vector(0.0f, 760.0f, 0.0f), Vector(10.0f, 2,5f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[1]);
	*(&iLocal_4 + 1112[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4427,81f, 12,95646f, 3201,025f), Vector(0.0f, 357,6206f, 0.0f), Vector(10.0f, 10.0f, 1,5f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[2]);
	*(&iLocal_4 + 1112[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-4476,779f, 7,5f, 3146,604f), Vector(0.0f, 588,6909f, 0.0f), Vector(10.0f, 20.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[3]);
	*(&iLocal_4 + 1112[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4473,481f, 2,012973f, 3143,061f), Vector(0.0f, 760.0f, 0.0f), Vector(10.0f, 2,5f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[4]);
	*(&iLocal_4 + 1112[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4432.0f, 40.0f, 3212.0f), Vector(0.0f, 90.0f, 0.0f), Vector(376.0f, 100.0f, 320.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[5]);
	*(&iLocal_4 + 1112[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4432.0f, 40.0f, 3212.0f), Vector(0.0f, 90.0f, 0.0f), Vector(408.0f, 100.0f, 352.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[6]);
	*(&iLocal_4 + 1112[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4509,38f, 15,78046f, 3259,356f), Vector(0.0f, 34.0f, 0.0f), Vector(6.0f, 10.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[7]);
	*(&iLocal_4 + 1112[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4352.0f, 16,25f, 3233.0f), Vector(0.0f, 90.0f, 0.0f), Vector(66.0f, 20.0f, 24.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[8]);
	*(&iLocal_4 + 1112[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4472,856f, 35.0f, 3142,665f), Vector(0.0f, -134,75f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[9]);
	*(&iLocal_4 + 1112[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4473,563f, 20,11925f, 3143,151f), Vector(0,7881153f, -139,9125f, -1,061563f), Vector(2,022244f, 38.0f, 1,78371f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[10]);
	*(&iLocal_4 + 1112[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4514,233f, 15,85498f, 3230,432f), Vector(0.0f, -180.0f, 0.0f), Vector(8.0f, 6.0f, 1,5f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[11]);
	*(&iLocal_4 + 1112[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 4,203895E-45f, Vector(-4462,316f, 8,25f, 3270,794f), Vector(0.0f, 719.0f, 0.0f), Vector(30.0f, 20.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[12]);
	*(&iLocal_4 + 1112[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4346,712f, 40.0f, 3212,335f), Vector(0.0f, 67,60052f, 0.0f), Vector(16.0f, 100.0f, 48.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[13]);
	*(&iLocal_4 + 1112[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4482.0f, 40.0f, 3208.0f), Vector(0.0f, 90.0f, 0.0f), Vector(240.0f, 100.0f, 220.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[14]);
	*(&iLocal_4 + 1112[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4388.0f, 16,25f, 3250.0f), Vector(0.0f, 90.0f, 0.0f), Vector(100.0f, 20.0f, 48.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1248, &iLocal_4 + 1112[15]);
	*(&iLocal_4 + 1408) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1256[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4474.0f, 7,5f, 3141,98f), Vector(0.0f, 90.0f, 0.0f), Vector(28.0f, 20.0f, 28.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[0]);
	*(&iLocal_4 + 1256[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4472.0f, 7,5f, 3122.0f), Vector(0.0f, 90.0f, 0.0f), Vector(20.0f, 20.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[1]);
	*(&iLocal_4 + 1256[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4439,605f, 7,5f, 3102.0f), Vector(0.0f, 90.0f, 0.0f), Vector(20.0f, 20.0f, 72.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[2]);
	*(&iLocal_4 + 1256[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4412.0f, 7,5f, 3106.0f), Vector(0.0f, 90.0f, 0.0f), Vector(28.0f, 20.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[3]);
	*(&iLocal_4 + 1256[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4438.0f, 0,0645872f, 3120.0f), Vector(0.0f, 90.0f, 0.0f), Vector(32.0f, 6.0f, 36.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[4]);
	*(&iLocal_4 + 1256[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4434.0f, 7,5f, 3172.0f), Vector(0.0f, 90.0f, 0.0f), Vector(56.0f, 20.0f, 36.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[5]);
	*(&iLocal_4 + 1256[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4452.0f, 7,5f, 3146.0f), Vector(0.0f, 90.0f, 0.0f), Vector(12.0f, 20.0f, 24.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[6]);
	*(&iLocal_4 + 1256[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4474.0f, 7,5f, 3141,98f), Vector(0.0f, 90.0f, 0.0f), Vector(28.0f, 20.0f, 28.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[7]);
	*(&iLocal_4 + 1256[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4472.0f, 7,5f, 3122.0f), Vector(0.0f, 90.0f, 0.0f), Vector(20.0f, 20.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[8]);
	*(&iLocal_4 + 1256[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4439,605f, 7,5f, 3102.0f), Vector(0.0f, 90.0f, 0.0f), Vector(20.0f, 20.0f, 72.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[9]);
	*(&iLocal_4 + 1256[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4412.0f, 7,5f, 3106.0f), Vector(0.0f, 90.0f, 0.0f), Vector(28.0f, 20.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[10]);
	*(&iLocal_4 + 1256[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4438.0f, 0,0645872f, 3120.0f), Vector(0.0f, 90.0f, 0.0f), Vector(32.0f, 6.0f, 36.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[11]);
	*(&iLocal_4 + 1256[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4452.0f, 30.0f, 3180.0f), Vector(0.0f, 90.0f, 0.0f), Vector(40.0f, 25.0f, 96.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[12]);
	*(&iLocal_4 + 1256[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4472.0f, 30.0f, 3128.0f), Vector(0.0f, 90.0f, 0.0f), Vector(64.0f, 25.0f, 56.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[13]);
	*(&iLocal_4 + 1256[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4444.0f, 16,25f, 3250.0f), Vector(0.0f, 90.0f, 0.0f), Vector(100.0f, 20.0f, 80.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[14]);
	*(&iLocal_4 + 1256[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4446.0f, 16,25f, 3242.0f), Vector(0.0f, 90.0f, 0.0f), Vector(84.0f, 20.0f, 52.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[15]);
	*(&iLocal_4 + 1256[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4434.0f, 16,25f, 3224.0f), Vector(0.0f, 90.0f, 0.0f), Vector(48.0f, 20.0f, 28.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[16]);
	*(&iLocal_4 + 1256[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4430.0f, 16,25f, 3220.0f), Vector(0.0f, 90.0f, 0.0f), Vector(40.0f, 20.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1408, &iLocal_4 + 1256[17]);
	*(&iLocal_4 + 1464) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 1416[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4425,622f, 7,5f, 3190,682f), Vector(0.0f, 244,348f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1416[0]);
	*(&iLocal_4 + 1416[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4444,12f, 7,5f, 3151,133f), Vector(0.0f, 111,3324f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1416[1]);
	*(&iLocal_4 + 1416[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4459,017f, 7,5f, 3143,612f), Vector(0.0f, -0,5953186f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1416[2]);
	*(&iLocal_4 + 1416[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4477,706f, 7,5f, 3126,163f), Vector(0.0f, 64,3241f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1416[3]);
	*(&iLocal_4 + 1416[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-4462,05f, 7,5f, 3099,152f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 20.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1464, &iLocal_4 + 1416[4]);
	*(&iLocal_4 + 1472) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1480[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3674,274f, 8,196012f, 3497,006f), Vector(0.0f, 72.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1480[0], &iLocal_4 + 1472);
	*(&iLocal_4 + 1480[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3672,754f, 8,197635f, 3495,562f), Vector(0.0f, 72.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1480[1], &iLocal_4 + 1472);
	*(&iLocal_4 + 1480[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3692,684f, 8,990259f, 3489,979f), Vector(0.0f, 8,606f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1480[2], &iLocal_4 + 1472);
	*(&iLocal_4 + 1480[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3694,972f, 8,981619f, 3490,133f), Vector(0.0f, -6,097f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1480[3], &iLocal_4 + 1472);
	*(&iLocal_4 + 1520) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1528[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4347,376f, 13,01225f, 3212,229f), Vector(0.0f, 135.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[0], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,362f, 13,2604f, 3216,831f), Vector(0.0f, 123,933f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[1], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,362f, 13,2604f, 3216,831f), Vector(0.0f, 123,933f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[2], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4346,165f, 12,91193f, 3213,176f), Vector(0.0f, 158,6693f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[3], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,141f, 25,66378f, 2755,905f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[4], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4340,765f, 12,90798f, 3222,189f), Vector(0.0f, 236,1708f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[5], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,141f, 25,66378f, 2753,983f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[6], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4340,765f, 12,90798f, 3222,189f), Vector(0.0f, 236,1708f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[7], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,141f, 25,66378f, 2753,983f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[8], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4428,066f, 8,53166f, 3245,774f), Vector(0.0f, 227,1441f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[9], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4366.0f, 12,6148f, 3224,87f), Vector(0.0f, 301,4246f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[10], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4366.0f, 12,6148f, 3224,87f), Vector(0.0f, 301,4246f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[11], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4430,098f, 8,512501f, 3247,973f), Vector(0.0f, 227,5606f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[12], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4365,929f, 12,77568f, 3227,298f), Vector(-0,656763f, 306,9505f, 0,681389f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[13], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4365,929f, 12,77568f, 3227,298f), Vector(-0,656763f, 306,9505f, 0,681389f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[14], &iLocal_4 + 1520);
	*(&iLocal_4 + 1528[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4417,704f, 8,533113f, 3258,561f), Vector(0.0f, 132,1663f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1528[15], &iLocal_4 + 1520);
	*(&iLocal_4 + 1664) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1672[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4425,622f, 8,568565f, 3190,682f), Vector(0.0f, -19,27355f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1672[0], &iLocal_4 + 1664);
	*(&iLocal_4 + 1672[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4465,451f, 2,006595f, 3143,593f), Vector(0.0f, 90,18207f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1672[1], &iLocal_4 + 1664);
	*(&iLocal_4 + 1672[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,141f, 25,66378f, 2755,905f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1672[2], &iLocal_4 + 1664);
	*(&iLocal_4 + 1704) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4432,226f, 0,475154f, 3125,852f), Vector(0.0f, 649,2762f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1712[0], &iLocal_4 + 1704);
	*(&iLocal_4 + 1712[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4430,68f, 0,5071566f, 3126,805f), Vector(0.0f, 374,3796f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1712[1], &iLocal_4 + 1704);
	*(&iLocal_4 + 1712[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4352,141f, 25,66378f, 2755,905f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1712[2], &iLocal_4 + 1704);
	*(&iLocal_4 + 1744) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1752[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4474,446f, 1,298212f, 3141,912f), Vector(0.0f, 940.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[0], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4474,612f, 1,357391f, 3144,667f), Vector(0.0f, 670.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[1], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4474,612f, 35,54186f, 3144,667f), Vector(0.0f, 670.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[2], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4468,217f, 28,58269f, 3143,331f), Vector(0.0f, 546,4465f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[3], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4469,211f, 28,5778f, 3145,818f), Vector(0.0f, 495.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[4], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4474,862f, 28,57102f, 3141,326f), Vector(0.0f, 219.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[5], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4464,398f, 28,60691f, 3133,416f), Vector(0.0f, 303.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[6], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4475,68f, 28,56377f, 3144,919f), Vector(0.0f, 309,7234f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[7], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4469,764f, 28,54447f, 3148,678f), Vector(0.0f, 360,3854f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[8], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4468,974f, 28,57478f, 3147,142f), Vector(0.0f, -35,75798f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[9], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4456.0f, 28,61154f, 3152f), Vector(0.0f, 243,3488f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[10], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4476,779f, 1,524901f, 3146,604f), Vector(0.0f, 588,6909f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[11], &iLocal_4 + 1744);
	*(&iLocal_4 + 1752[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4469,918f, 28,5553f, 3146,525f), Vector(0.0f, 495.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1752[12], &iLocal_4 + 1744);
	*(&iLocal_4 + 1864) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1872[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4462,337f, 8,533224f, 3272,044f), Vector(0.0f, 719.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[0], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4460,487f, 8,532429f, 3271,37f), Vector(0.0f, 280.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[1], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4458,408f, 8,533562f, 3270,98f), Vector(0.0f, 260.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[2], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4458,967f, 8,532f, 3272,047f), Vector(0.0f, 173,77f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[3], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4458,504f, 8,51453f, 3274,55f), Vector(0.0f, 143,04f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[4], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4454,152f, 8,517f, 3271,51f), Vector(0.0f, 237,6206f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[5], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4400,959f, 8,103735f, 3361,33f), Vector(0.0f, 265,1923f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[6], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4458,504f, 8,51453f, 3274,55f), Vector(0.0f, 143,04f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[7], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4469,829f, 8,410918f, 3289,6f), Vector(0.0f, 143,04f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[8], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4462,316f, 8,535164f, 3270,794f), Vector(0.0f, 719.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[9], &iLocal_4 + 1864);
	*(&iLocal_4 + 1872[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4456,296f, 8,527809f, 3272,443f), Vector(0.0f, -125.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1872[10], &iLocal_4 + 1864);
	*(&iLocal_4 + 1968) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1976[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4422,415f, 7,999504f, 3181,51f), Vector(0.0f, 160,7264f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[0], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4462,465f, 2,53475f, 3144,518f), Vector(0.0f, 272,2872f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[1], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4469,144f, 1,533367f, 3143,33f), Vector(0.0f, -93,48697f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[2], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4466,036f, 4,482996f, 3118,28f), Vector(0.0f, 107,57f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[3], &iLocal_4 + 1968);
	*(&iLocal_4 + 1976[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4427,174f, 3,554859f, 3104,671f), Vector(0.0f, 86,49945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1976[4], &iLocal_4 + 1968);
	*(&iLocal_4 + 2024) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2032[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4434,188f, 25,95795f, 3166,582f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[0], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4430,55f, 25,95795f, 3166,582f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[1], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[2], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-0,2539f, 0,421f, 0,4082f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[3], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-0,2532f, 1,209f, 1,9013f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[4], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4427,573f, 8,533299f, 3201,854f), Vector(0.0f, -1,455596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[5], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-3694,364f, 8,967323f, 3488,467f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[6], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4458,504f, 8,51453f, 3274,55f), Vector(0.0f, 143,04f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[7], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4473,897f, 1,297834f, 3143,457f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[8], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4442,547f, 2,569792f, 3153,903f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[9], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4427,573f, 8,533299f, 3201,854f), Vector(0.0f, -1,455596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[10], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4431,079f, 0,5026309f, 3125,359f), Vector(0.0f, 739,2762f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[11], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, -1,3327f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[12], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 1,439f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[13], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-1,2457f, 0.0f, 0,0871f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[14], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4438,055f, -0,3254981f, 3120,442f), Vector(0.0f, 711,4324f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[15], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4427,81f, 8,61934f, 3201,025f), Vector(0.0f, 357,6206f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[16], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4444,173f, 3,537312f, 3163,352f), Vector(0.0f, 55,50991f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[17], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4438,055f, -0,3254981f, 3120,442f), Vector(0.0f, 81,31999f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[18], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4366.0f, 12,59897f, 3224,87f), Vector(0.0f, 301,4246f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[19], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4365,929f, 12,77568f, 3227,298f), Vector(-0,656763f, 306,9505f, 0,681389f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[20], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4463,677f, 28,87603f, 3133,278f), Vector(0.0f, 488,0865f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[21], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4508.0f, 27,34377f, 3160f), Vector(0.0f, -71,35245f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[22], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4508,826f, 24,1348f, 3183,706f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[23], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4439,196f, -0,409433f, 3125,199f), Vector(0.0f, 374,3796f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[24], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4434,801f, 0,5217391f, 3128,837f), Vector(0.0f, 374,3796f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[25], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[26]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4431,474f, 0,4769607f, 3124,401f), Vector(0.0f, 374,3796f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[26], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[27]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4432,563f, 0,3057425f, 3119,301f), Vector(0.0f, 374,3796f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[27], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[28]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[28], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[29]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4513,955f, 15,85498f, 3230,523f), Vector(0.0f, 139,0215f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[29], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[30]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4510,273f, 15,954f, 3229,752f), Vector(0.0f, 18,295f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[30], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[31]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4511,525f, 12,17798f, 3253,006f), Vector(0.0f, -145,8539f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[31], &iLocal_4 + 2024);
	*(&iLocal_4 + 2032[32]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 2,7267f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2032[32], &iLocal_4 + 2024);
	*(&iLocal_4 + 2304) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 2312[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4476,779f, 1,524901f, 3146,604f), Vector(0.0f, 588,6909f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[0], &iLocal_4 + 2304);
	*(&iLocal_4 + 2312[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4188,186f, 16,34601f, 3087,676f), Vector(0.0f, 66,61306f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[1], &iLocal_4 + 2304);
	*(&iLocal_4 + 2312[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4335,465f, 16,51109f, 3192,526f), Vector(0.0f, 509,5202f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[2], &iLocal_4 + 2304);
	*(&iLocal_4 + 2312[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4166,278f, 11,88363f, 3136,219f), Vector(0.0f, 9,225461f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[3], &iLocal_4 + 2304);
	*(&iLocal_4 + 2312[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4432,226f, 0,475154f, 3125,852f), Vector(0.0f, 649,2762f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[4], &iLocal_4 + 2304);
	*(&iLocal_4 + 2312[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4514,218f, 24,16433f, 3178,537f), Vector(0.0f, 900,0735f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[5], &iLocal_4 + 2304);
	*(&iLocal_4 + 2312[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4462,316f, 8,535164f, 3270,794f), Vector(0.0f, 719.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2312[6], &iLocal_4 + 2304);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4453,926f, 12,618f, 3225,721f), Vector(0.0f, 209,2187f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4456,794f, 16,052f, 3214,133f), Vector(0.0f, 29,07154f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4426,696f, 6,701437f, 3172,029f), Vector(0.0f, 211,1524f, 0.0f), 4);
	*(&iLocal_4 + 2376) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4454,759f, 2,548524f, 3146,653f), Vector(0.0f, 253,961f, 0.0f), 4);
	*(&iLocal_4 + 2384) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4477,285f, 1,620933f, 3151,326f), Vector(0.0f, -31,91767f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4482,028f, 2,534517f, 3130,835f), Vector(0.0f, 213,0261f, 0.0f), 4);
	*(&iLocal_4 + 2392) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4471,834f, 4,543998f, 3117,979f), Vector(0.0f, 118,2564f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4467,98f, 4,621925f, 3119,827f), Vector(0.0f, 105,3092f, 0.0f), 4);
	*(&iLocal_4 + 2400) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4448,678f, 5,520928f, 3102,264f), Vector(0.0f, 90,23727f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4432,271f, 3,593189f, 3105,224f), Vector(0.0f, 104,9251f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4407,786f, 2,360869f, 3101,635f), Vector(0.0f, 53.0f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4433,008f, 0,5413505f, 3129,284f), Vector(0.0f, 15,22374f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-4508,328f, 12,168f, 3260,581f), Vector(0.0f, 30,72593f, 0.0f), 4);
}

struct<8> ^EMÛéÅ73@øËEN>ÅD*@ùjENVÅQ@øÿ_EN>Å^@øúªENËæÅf7@ù)CEOÏÅc+@üåEO_õÅY­AzEOÀÅNÚAìMEOÆ|ÅAzA Iq(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168) //Position: 0x2285A / 141402
{
	var uVar410;
	var uVar17574;
	
	PatchTrapA();
	Unknown_Function();
	return 196, 64;
	itos(0, StackVal ^ (*0)[StackVal * 2048279] * 253 + 96, 69);
	return StackVal, Global_29808 != 0, 64;
	return 4294967295 * 246;
	uLocal_197 = (StackVal + StackVal) * 20647 * 20695;
	*3 = 4294967295 * 236;
	Unknown_Function();
	PatchRet();
	PatchTrapA();
	Global_32629 = &Global_15746385 < 4294967295 * 228[&Global_4256637 * 20740 * 20782 >= 4294967295 * 23069];
	return 4294967295, 4294967295;
	PatchTrapC();
}

void Function_642(int iParam0, int iParam1) //Position: 0x23843 / 145475
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

bool Function_643() //Position: 0x2388D / 145549
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_644())
		{
			return 0;
		}
		if (!Function_343(&iLocal_636))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_644() //Position: 0x238B0 / 145584
{
	Function_645(&iLocal_4 + 8, "p_gen_crateGatling01x", 0, 0);
	Function_645(&iLocal_4 + 8, "p_gen_crateGatling02x", 0, 0);
	Function_645(&iLocal_4 + 8, "p_gen_bottleJD01x", 0, 0);
	if (Function_343(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_645(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x23925 / 145701
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_646(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_346(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_646(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x23963 / 145763
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_195(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_346(&(Param0[iVar02]), 4);
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

bool Function_647() //Position: 0x23A32 / 145970
{
	Function_318(&iLocal_682, 1, 0);
	switch (iLocal_682)
	{
		case 0x000003E8:
			if (iLocal_694 != 99 && (Function_441(&Local_624) || Local_624.f_40 < 1))
			{
				iLocal_682 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTLAW_02/OUTLAW_02"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				iLocal_682 = 1106;
				return 0;
			}
			Function_314(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			iLocal_960 = 0;
			Function_648(StackVal, &iLocal_622, Vector(-3673,812f, 8,102061f, 3495,583f), &iLocal_682 + 32, 1, 0, 0, 0, 1, 1);
			Function_612();
			Function_202(1, 0, 1);
			Global_99147 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/OUTLAW_02/OUTLAW_02", 0, 2, 1, 2, 2);
			Function_298(&iLocal_682 + 4);
			iLocal_682 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(&iLocal_682 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_682 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-3674,274f, 8,196012f, 3497,006f), 72.0f, 1, 1, 1);
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-3670,794f, 9,988f, 3497,926f), Vector(-2,979f, 72.0f, 0.0f));
				iLocal_682 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_644();
			Function_343(&iLocal_636);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_682 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_535(3.0f);
				Function_610();
				HUD_ENABLE(1);
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_682 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_682 + 32);
				DESTROY_VOLUME(&iLocal_682 + 32);
				if (iLocal_960)
				{
					Function_280(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_280(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				}
				iLocal_682 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_99147 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				iLocal_960 = 1;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_257();
				Function_256();
				iLocal_682 = 1104;
			}
			break;
		
		case 0x00000452:
			iLocal_960 = 1;
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_257();
			Function_256();
			iLocal_682 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_648(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0x23D2B / 146731
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
				Function_649(&uVar1, &uParam0);
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

void Function_649(var uParam0, int iParam1) //Position: 0x23FCB / 147403
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

void Function_650() //Position: 0x2404F / 147535
{
	iLocal_956 = 0;
	Function_639("FTR_SONG_09", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_258(0);
	Function_655();
	Function_654();
	Local_938 = Vector(-3694,364f, 8,967323f, 3488,467f);
	Function_653(StackVal, Local_938, &uLocal_930, &uLocal_932);
	Function_652();
	Function_651();
	return;
}

void Function_651() //Position: 0x240A6 / 147622
{
	iLocal_704 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_622, "nCompHorse", 981, Vector(-3694,972f, 8,981619f, 3490,133f), Vector(0.0f, -6,097f, 0.0f));
	if (IS_ACTOR_ALIVE(&iLocal_704))
	{
		ACCESSORIZE_HORSE(&iLocal_704, 3);
		Function_437(&iLocal_704);
		SET_ACTOR_FACTION(&iLocal_704, 20);
		SET_MOST_RECENT_MOUNT(&iLocal_700, &iLocal_704);
		SET_ACTOR_INVULNERABILITY(&iLocal_704, true);
		SET_ACTOR_MAX_HEALTH(&iLocal_704, 50.0f);
		SET_ACTOR_HEALTH(&iLocal_704, 50.0f);
		if (IS_GRINGO_VALID(&uLocal_930))
		{
			TASK_CLEAR(&iLocal_704);
			TASK_PRIORITY_SET(&iLocal_704, true);
			TASK_USE_GRINGO(&iLocal_704, &uLocal_930, "UseCase1", 4294967295, 1);
		}
		else
		{
			TASK_CLEAR(&iLocal_704);
			TASK_PRIORITY_SET(&iLocal_704, true);
			TASK_STAND_STILL(&iLocal_704, -1.0f, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to create/setup CompHorse properly!");
	}
	return;
}

void Function_652() //Position: 0x241AC / 147884
{
	if (IS_ACTOR_ALIVE(&iLocal_702))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_702, Vector(-3692,684f, 8,990259f, 3489,979f), 8,606f, 1, 1, 1);
		ACCESSORIZE_HORSE(&iLocal_702, 4);
		RESET_ACTOR_GAITS(&iLocal_702, 0);
		Function_437(&iLocal_702);
		SET_ACTOR_FACTION(&iLocal_702, 20);
		SET_ACTOR_INVULNERABILITY(&iLocal_702, true);
		SET_ACTOR_MAX_HEALTH(&iLocal_702, 50.0f);
		SET_ACTOR_HEALTH(&iLocal_702, 50.0f);
		if (IS_GRINGO_VALID(&uLocal_932))
		{
			TASK_CLEAR(&iLocal_702);
			TASK_PRIORITY_SET(&iLocal_702, true);
			TASK_USE_GRINGO(&iLocal_702, &uLocal_932, "UseCase1", 4294967295, 1);
		}
		else
		{
			TASK_CLEAR(&iLocal_702);
			TASK_PRIORITY_SET(&iLocal_702, true);
			TASK_STAND_STILL(&iLocal_702, -1.0f, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to setup PlayerHorse properly!");
	}
	return;
}

void Function_653(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x24297 / 148119
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

void Function_654() //Position: 0x243E1 / 148449
{
	if (IS_ACTOR_ALIVE(&iLocal_700))
	{
		Function_235(0, 0, 1);
		RESET_ACTOR_GAITS(&iLocal_700, 0);
		Function_437(&iLocal_700);
		SET_ACTOR_FACTION(&iLocal_700, 20);
		AI_BEHAVIOR_SET_ALLOW(&iLocal_700, 0, 0);
		SET_CRIPPLE_ENABLE(&iLocal_700, 0);
		SET_ACTOR_INVULNERABILITY(&iLocal_700, true);
		SET_ACTOR_MAX_HEALTH(&iLocal_700, 50.0f);
		SET_ACTOR_HEALTH(&iLocal_700, 50.0f);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_700, true);
		TASK_CLEAR(&iLocal_700);
		TASK_PRIORITY_SET(&iLocal_700, true);
		TASK_STAND_STILL(&iLocal_700, -1.0f, 0, 0);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_700, Vector(-3672,754f, 8,197635f, 3495,562f), 72.0f, 1, 1, 1);
	}
	else
	{
		LOG_ERROR("Failed to setup Irish properly!");
	}
	return;
}

void Function_655() //Position: 0x244A8 / 148648
{
	SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	return;
}

bool Function_656() //Position: 0x244B6 / 148662
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_674(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_673())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_700))
		{
			iLocal_700 = Function_665(0, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_664())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_702))
		{
			iLocal_702 = Function_658(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_657(&Global_21369 + 72, FIND_NAMED_LAYOUT("PlayerLayout")))
		{
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, FIND_NAMED_LAYOUT("PlayerLayout"));
			return 0;
		}
	}
	return 1;
}

bool Function_657(bool bParam0, bool bParam1) //Position: 0x24565 / 148837
{
	var uVar0;
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&bParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam1);
	ITERATE_IN_LAYOUT(&uVar0, &bParam1);
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

var Function_658(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x245CB / 148939
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
		Function_663(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_664())
		{
			return "";
		}
	}
	if (!Function_661())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_212();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_429(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_429(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_429(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_429(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_660(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_660(StackVal, Var4, 0, 1, 1);
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
		Function_659(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_659(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x24928 / 149800
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

var Function_660(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x24972 / 149874
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

bool Function_661() //Position: 0x24A12 / 150034
{
	if (Function_662() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_662() //Position: 0x24A28 / 150056
{
	return Global_21369.f_244;
}

void Function_663(var uParam0, bool bParam1, bool bParam2) //Position: 0x24A33 / 150067
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

bool Function_664() //Position: 0x24A62 / 150114
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

var Function_665(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x24A82 / 150146
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
		Function_235(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_672(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_668(&Global_15402[iParam014] + 16, &uParam7);
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
		Function_667(&bVar1, 0, 0, 0, 0);
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
		Function_666(&bVar1, 0);
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

void Function_666(var uParam0, bool bParam1) //Position: 0x24FC2 / 151490
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_667(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x24FE4 / 151524
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

var Function_668(int iParam0, int iParam1) //Position: 0x25045 / 151621
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_570(iParam0))
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
						Function_669(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_669(var uParam0, int iParam1) //Position: 0x250D3 / 151763
{
	Function_671(&uParam0);
	Function_670(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_670(int iParam0) //Position: 0x250FF / 151807
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_671(int iParam0) //Position: 0x25125 / 151845
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

var Function_672(bool bParam0, var uParam1) //Position: 0x251FB / 152059
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
				if (GET_ACTOR_ENUM(&uVar2) == bParam0)
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

bool Function_673() //Position: 0x252A1 / 152225
{
	Function_348(&iLocal_4 + 64, 981, 2, 0);
	if (Function_343(&iLocal_4 + 64))
	{
		return 1;
	}
	return 0;
}

bool Function_674(bool bParam0) //Position: 0x252C1 / 152257
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

void Function_675() //Position: 0x252F1 / 152305
{
	Function_348(&iLocal_636, 1203, 2, 0);
	Function_645(&iLocal_636, "Outlaw02", 10, 0);
	Function_645(&iLocal_636, "stand_ambient", 5, 0);
	Function_645(&iLocal_636, "custom/stand_ambient", 8, 0);
	Function_645(&iLocal_636, "out02_marston", 5, 0);
	Function_645(&iLocal_636, "custom/out02_marston", 8, 0);
	Function_645(&iLocal_636, "out02_irish", 5, 0);
	Function_645(&iLocal_636, "custom/out02_irish", 8, 0);
	Function_645(&iLocal_636, "dynamite", 5, 0);
	Function_645(&iLocal_636, "custom/dynamite", 8, 0);
	Function_645(&iLocal_636, "p_gen_powderKeg02x", 0, 0);
	return;
}

void Function_676(var uParam0, bool bParam1) //Position: 0x25410 / 152592
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_683(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_441(&uParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(uParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_441(&uParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_682();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_257();
	Function_256();
	Function_266("");
	Function_681(0);
	Function_680();
	Function_219();
	Function_218();
	ENABLE_JOURNAL_REPLAY(0);
	Function_679();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_658(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_358(0, 0x40400000);
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
	Function_678(13);
	Function_678(14);
	Function_678(25);
	Function_678(24);
	Function_678(12);
	Function_678(27);
	Function_678(26);
	Function_678(15);
	Function_677();
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

void Function_677() //Position: 0x25850 / 153680
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

void Function_678(int iParam0) //Position: 0x258D5 / 153813
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_679() //Position: 0x258F5 / 153845
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

void Function_680() //Position: 0x2593B / 153915
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_681(int iParam0) //Position: 0x25951 / 153937
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_222())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_682() //Position: 0x2598A / 153994
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_683(int iParam0, int iParam1) //Position: 0x25993 / 154003
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
			Function_684(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_684(struct<113> Param0) //Position: 0x25A1A / 154138
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

bool Function_685(struct<25> Param0) //Position: 0x25A78 / 154232
{
	switch (Param0.f_24)
	{
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_693();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsIrishWagonHorse", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_382(&Param0 + 8) == &iLocal_622 && Function_382(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_692();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_AssOnAmbGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (iLocal_694 >= 0)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_691();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsIrish", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (!Param0.f_20)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_691();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsIrish", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_690();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsIrisHorseGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_693();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsIrishWagonHorse", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_382(&Param0 + 8) == &iLocal_622 && Function_382(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_689();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsAmbGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_688();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_BumpsIrishGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (Param0.f_24 != 64)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_687();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_AssaultsIrish", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
				
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_693();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_ShootsIrishWagonHorse", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_382(&Param0 + 8) == &iLocal_622 && Function_382(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_692();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_700, "Outlaw02_AssOnAmbGapt", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(&iLocal_700))
		{
			Function_686(&Param0, 1);
			return 1;
		}
	}
	Function_686(&Param0, 0);
	return 0;
}

void Function_686(struct<25> Param0) //Position: 0x25EB5 / 155317
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

void Function_687() //Position: 0x25EE0 / 155360
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_AssaultsIrish", "Outlaw02_AssaultsIrish", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_688() //Position: 0x25F35 / 155445
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_BumpsIrishGapt", "Outlaw02_BumpsIrishGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_689() //Position: 0x25F8C / 155532
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsAmbGapt", "Outlaw02_ShootsAmbGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_690() //Position: 0x25FE1 / 155617
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsIrisHorseGapt", "Outlaw02_ShootsIrisHorseGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_691() //Position: 0x26042 / 155714
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsIrish", "Outlaw02_ShootsIrish", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_692() //Position: 0x26093 / 155795
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_AssOnAmbGapt", "Outlaw02_AssOnAmbGapt", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_693() //Position: 0x260E6 / 155878
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Outlaw02_ShootsIrishWagonHorse", "Outlaw02_ShootsIrishWagonHorse", false, 1, 1, 0, 1);
		Function_295(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_694(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2614B / 155979
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
		Function_686(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_713(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_712(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_712(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_698(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_686(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_697(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_696(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_697(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_695(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_266(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_696(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_686(&Param2, 0);
	return 0;
}

void Function_695(char* cParam0) //Position: 0x26561 / 157025
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

void Function_696(struct<25> Param0) //Position: 0x26655 / 157269
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

void Function_697(bool bParam0) //Position: 0x266CD / 157389
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_698(struct<57> Param0) //Position: 0x266F1 / 157425
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
			return Function_709(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_702(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_709(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_699(&Param0, bVar2);
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
						bVar2 = Function_709(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_699(&Param0, bVar2);
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

var Function_699(int iParam0, bool bParam1) //Position: 0x26862 / 157794
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
				bParam1 = Function_701(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_700(16);
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
				bParam1 = Function_701(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_700(256);
			}
		}
	}
	return bParam1;
}

bool Function_700(int iParam0) //Position: 0x2699E / 158110
{
	return 2 | iParam0;
}

int Function_701(int iParam0) //Position: 0x269A8 / 158120
{
	return 4 | iParam0;
}

int Function_702(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x269B2 / 158130
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
				iParam3 = Function_708(&iParam0, &iParam1, bParam4);
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
			return Function_700(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_703(&iParam0, &iParam1, 0, bParam4);
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
			return Function_700(16);
		}
	}
	return 0;
}

int Function_703(int iParam0, vector3 vParam1) //Position: 0x26A6D / 158317
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_707(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_706(iVar0, 3, 1, bParam3))
			{
				if (!Function_712(&iParam0, 8, 1))
				{
					return Function_705(64, 1024, bParam2);
				}
			}
			return Function_704(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_706(iVar0, 2, 1, bParam3))
			{
				if (!Function_712(&iParam0, 32, 1))
				{
					return Function_705(64, 1024, bParam2);
				}
			}
			return Function_704(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_706(iVar0, 1, 1, bParam3))
			{
				if (!Function_712(&iParam0, 64, 1))
				{
					return Function_705(64, 1024, bParam2);
				}
			}
			return Function_704(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_706(iVar0, 3, 1, bParam3))
			{
				if (!Function_712(&iParam0, 128, 1))
				{
					return Function_705(64, 1024, bParam2);
				}
			}
			return Function_704(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_706(iVar0, 1, 1, bParam3))
			{
				if (!Function_712(&iParam0, 1024, 1))
				{
					return Function_705(64, 1024, bParam2);
				}
			}
			return Function_704(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_706(iVar0, 1, 1, bParam3))
			{
				if (!Function_712(&iParam0, 1024, 1))
				{
					return Function_705(64, 1024, bParam2);
				}
			}
			return Function_704(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_704(int iParam0, int iParam1, bool bParam2) //Position: 0x26C35 / 158773
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_705(int iParam0, int iParam1, bool bParam2) //Position: 0x26C4A / 158794
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_706(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x26C5F / 158815
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_707(int iParam0) //Position: 0x26C7C / 158844
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

int Function_708(var uParam0, vector3 vParam1) //Position: 0x26CEF / 158959
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_707(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_706(iVar0, 3, 1, bParam2))
			{
				if (!Function_712(&uParam0, 8, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000009:
			if (Function_706(iVar0, 3, 1, bParam2))
			{
				if (!Function_712(&uParam0, 8, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x0000006E:
			if (Function_706(iVar0, 2, 1, bParam2))
			{
				if (!Function_712(&uParam0, 16, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x0000005B:
			if (Function_706(iVar0, 2, 1, bParam2))
			{
				if (!Function_712(&uParam0, 32, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000031:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&uParam0, 64, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000007:
			if (Function_706(iVar0, 3, 1, bParam2))
			{
				if (!Function_712(&uParam0, 128, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000008:
			if (Function_706(iVar0, 2, 1, bParam2))
			{
				if (!Function_712(&uParam0, 256, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000014:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&uParam0, 512, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000018:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&uParam0, 512, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000057:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&uParam0, 1024, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000058:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&uParam0, 1024, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_709(struct<65> Param0) //Position: 0x26F18 / 159512
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
						return Function_708(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_712(&Param0, 2, 1))
					{
						return Function_701(8);
					}
					return Function_700(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_712(&Param0, 4, 1))
					{
						return Function_701(16);
					}
					return Function_700(16);
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
							return Function_703(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_712(&Param0, 2, 1))
						{
							return Function_701(128);
						}
						return Function_700(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_712(&Param0, 4, 1))
						{
							return Function_701(256);
						}
						return Function_700(256);
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
						return Function_703(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_712(&Param0, 2, 1))
					{
						return Function_701(8);
					}
					return Function_700(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_712(&Param0, 4, 1))
					{
						return Function_701(16);
					}
					return Function_700(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_711(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_712(&Param0, 2, 1))
					{
						return Function_701(8);
					}
					return Function_700(8);
				}
				if (!Function_712(&Param0, 4, 1))
				{
					return Function_701(16);
				}
				return Function_700(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_703(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_710(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_700(128);
							}
							if (!Function_712(&Param0, 2, 1))
							{
								return Function_701(8);
							}
							return Function_700(8);
						}
						if (iParam4 == 2)
						{
							if (Function_710(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_700(256);
							}
							if (!Function_712(&Param0, 4, 1))
							{
								return Function_701(16);
							}
							return Function_700(16);
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

bool Function_710(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x271FE / 160254
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

int Function_711(int iParam0, vector3 vParam1) //Position: 0x272CC / 160460
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_707(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_706(iVar0, 2, 1, bParam2))
			{
				if (!Function_712(&iParam0, 16, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x0000005B:
			if (Function_706(iVar0, 2, 1, bParam2))
			{
				if (!Function_712(&iParam0, 32, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000057:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&iParam0, 1024, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		case 0x00000058:
			if (Function_706(iVar0, 1, 1, bParam2))
			{
				if (!Function_712(&iParam0, 1024, 1))
				{
					return Function_701(64);
				}
			}
			return Function_700(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_712(struct<69> Param0) //Position: 0x273EE / 160750
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

int Function_713(int iParam0) //Position: 0x27418 / 160792
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

bool Function_714(bool bParam0) //Position: 0x2744E / 160846
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_715(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x2746C / 160876
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_716(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x27499 / 160921
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_717(StackVal, Param4, uParam3, &iParam6);
		Function_263(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_717(struct<2> Param0, var uParam2, var uParam3) //Position: 0x274DA / 160986
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_719(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_718(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_718(int iParam0) //Position: 0x2755C / 161116
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

var Function_719(struct<2> Param0, bool bParam2) //Position: 0x27A0A / 162314
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

struct<8> Function_720(int iParam0) //Position: 0x27A76 / 162422
{
	Function_428(iParam0 + 1);
	return StackVal, Function_428(iParam0 + 1);
}

int Function_721(int iParam0) //Position: 0x27A83 / 162435
{
	return Function_426(iParam0 + 1);
}

