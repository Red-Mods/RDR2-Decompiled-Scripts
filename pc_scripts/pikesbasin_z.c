//Decompiled with MagicRDR v1.0
//Function Count : 272
//Statics Count : 1034
//Natives Count : 455
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	char[] cLocal_7[4] = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 8;
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
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 13;
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
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = false;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 4;
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
	var uLocal_448 = 2;
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
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	int iLocal_530 = 0;
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
	var uLocal_564 = 5;
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
	var uLocal_898 = 1;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 2;
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
	int iLocal_924 = 1;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	int iLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937[3] = { 0, 0, 0 };
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945[3] = { 0, 0, 0 };
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	struct<2> Local_993 = { 0, 0 } ;
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
	struct<2> Local_1011 = { 0, 0 } ;
	var uLocal_1013 = 0;
	struct<2> Local_1014 = { 0, 0 } ;
	var uLocal_1016 = 0;
	struct<2> Local_1017 = { 0, 0 } ;
	var uLocal_1019 = 0;
	struct<2> Local_1020 = { 0, 0 } ;
	var uLocal_1022 = 0;
	struct<2> Local_1023 = { 0, 0 } ;
	var uLocal_1025 = 0;
	struct<2> Local_1026 = { 0, 0 } ;
	var uLocal_1028 = 0;
	struct<2> Local_1029 = { 0, 0 } ;
	var uLocal_1031 = 0;
	bool bScriptParam_0 = false;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	uLocal_999 = Vector(0,992f, 0,166f, 1,992f);
	uLocal_1002 = Vector(-1,178f, 0,167f, 1,987f);
	uLocal_1005 = Vector(1,177f, 0,122f, -1,801f);
	uLocal_1008 = Vector(-1,144f, 0,126f, -1,827f);
	Local_1011 = Vector(-1451,619f, 77,59732f, 2285,729f);
	Local_1014 = Vector(-1266,49f, 84,303f, 2402,563f);
	Local_1017 = Vector(-1280,695f, 85,915f, 2367,501f);
	Local_1020 = Vector(-1445,339f, 79,31211f, 2302,879f);
	Local_1023 = Vector(-1447,415f, 79,31261f, 2303,509f);
	Local_1026 = Vector(-1455,739f, 79,34842f, 2268,228f);
	Local_1029 = Vector(-1457,966f, 79,35226f, 2268,882f);
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_271(&cVar0, 3);
	Function_270();
	if (StackVal && (((((!Global_6666 && bScriptParam_0 == Global_46838[1]) && bScriptParam_0 == Global_46894[1]) && bScriptParam_0 == Global_46894[2]) && bScriptParam_0 == Global_46914[1]) && bScriptParam_0 == Global_46796[0]) == 5)
	{
		bLocal_177 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_6632)
				{
					if (bLocal_177)
					{
						Unknown_Function();
					}
					else
					{
						Unknown_Function();
					}
					iLocal_5 = 1;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000001:
				if (Function_262())
				{
					Function_261();
					iLocal_5 = 2;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_260())
				{
					Function_259();
					Function_258(&(Global_43791[bScriptParam_0]), 32);
					iLocal_5 = 3;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_6 = 500;
				if (Function_255())
				{
					Function_253(bScriptParam_0);
					if (bLocal_177)
					{
						Function_251(&iLocal_13, Function_252(), bScriptParam_0);
						Function_250(&iLocal_13, Function_252());
					}
					Function_258(&(Global_43791[bScriptParam_0]), 16);
					iLocal_5 = 4;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_7))
				{
					iLocal_5 = 5;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000005:
				Function_249(&uLocal_9);
				Function_247();
				Function_244(bScriptParam_0);
				iLocal_5 = 6;
				bLocal_6 = false;
				break;
			
			case 0x00000006:
				if ((Function_243() && Function_242(Global_44085[bScriptParam_09])) && Function_241(&iLocal_13))
				{
					Function_238();
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				else
				{
					bLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_177)
				{
					Function_226(&iLocal_13, bScriptParam_0, Function_252());
				}
				Function_225(bScriptParam_0);
				Function_224();
				Function_223();
				Function_258(&(Global_43791[bScriptParam_0]), 8);
				if (Function_222(&(Global_43791[bScriptParam_0]), 131072))
				{
					Function_221(&(Global_43791[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000008:
				Function_220(bScriptParam_0);
				Function_219();
				Function_218(bScriptParam_0);
				iLocal_5 = 9;
				bLocal_6 = false;
				break;
			
			case 0x00000009:
				Function_213(bScriptParam_0);
				Function_212(64);
				Function_258(&(Global_43791[bScriptParam_0]), 512);
				iLocal_5 = 10;
				bLocal_6 = false;
				break;
			
			case 0x0000000A:
				Function_211(Function_252(), bScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
				Function_210(&cVar0, 5.0f);
				Function_258(&(Global_43791[bScriptParam_0]), 4);
				iLocal_5 = 11;
				bLocal_6 = false;
				break;
			
			case 0x0000000B:
				Function_205(bScriptParam_0);
				if (Function_222(&(Global_43791[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				if (bLocal_177)
				{
					Function_88(&iLocal_13, bScriptParam_0);
				}
				Function_51(&uLocal_9, &uLocal_898, Function_87(), bScriptParam_0);
				Function_47(&uLocal_906, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(bLocal_6);
	}
	if (bLocal_177)
	{
		Function_30(&iLocal_13, bScriptParam_0);
	}
	Function_25(bScriptParam_0);
	Function_23();
	Function_22();
	Function_21();
	Function_13(&uLocal_9, &uLocal_898);
	Function_12(&uLocal_906);
	Function_10();
	Function_6(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_212(64);
	Function_221(&(Global_43791[bScriptParam_0]), 32);
	Function_221(&(Global_43791[bScriptParam_0]), 64);
	Function_221(&(Global_43791[bScriptParam_0]), 8);
	Function_221(&(Global_43791[bScriptParam_0]), 512);
	Function_221(&(Global_43791[bScriptParam_0]), 16);
	Function_221(&(Global_43791[bScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_210(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x4A5 / 1189
{
	int iVar0;
	
	Function_2(&iLocal_924);
	if (IS_LAYOUTREF_VALID(&uLocal_931))
	{
		DESTROY_LAYOUT(&uLocal_931);
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (&uLocal_967[iVar0] != "")
		{
			RELEASE_CONSTRAINT(&(uLocal_967[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_OBJECT_VALID(&(uLocal_953[iVar0])))
		{
			DESTROY_OBJECT(&(uLocal_953[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x518 / 1304
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x540 / 1344
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x68B / 1675
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x6A8 / 1704
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x6C6 / 1734
{
	int iVar0;
	
	if (!Function_9(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_7(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_7(int iParam0) //Position: 0x6FC / 1788
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_8(int iParam0) //Position: 0x71E / 1822
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x734 / 1844
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x74A / 1866
{
	Function_11();
	return;
}

void Function_11() //Position: 0x753 / 1875
{
	RELEASE_LAYOUT_REF(&iLocal_530);
	return;
}

void Function_12(struct<4>[] Param0) //Position: 0x760 / 1888
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
		}
		iVar0++;
	}
	return;
}

void Function_13(var uParam0, vector3[] vParam1) //Position: 0x7C5 / 1989
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_20(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_19(&(vParam1[iVar03]), 4);
		}
		if (Function_20(&(vParam1[iVar03]), 8))
		{
			Function_14(0, 0, 30);
			Function_19(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_14(bool bParam0, int iParam1, int iParam2) //Position: 0x822 / 2082
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
		Function_15(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_15(bool bParam0, bool bParam1, bool bParam2) //Position: 0x90C / 2316
{
	int iVar0;
	
	Function_18(bParam0);
	Function_17(&bParam1);
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
	Function_16();
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

void Function_16() //Position: 0xA8B / 2699
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_17(int iParam0) //Position: 0xA97 / 2711
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_18(int iParam0) //Position: 0xAE1 / 2785
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

void Function_19(struct<17> Param0) //Position: 0xB27 / 2855
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_20(struct<17> Param0) //Position: 0xB44 / 2884
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21() //Position: 0xB62 / 2914
{
	return;
}

void Function_22() //Position: 0xB68 / 2920
{
	return;
}

void Function_23() //Position: 0xB6E / 2926
{
	Function_24();
	return;
}

void Function_24() //Position: 0xB77 / 2935
{
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_25(bool bParam0) //Position: 0xB83 / 2947
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_222(&(Global_43791[bParam0]), 0x20000000))
	{
		Function_221(&(Global_43791[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(&Global_43578))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			START_OBJECT_ITERATOR(&uVar0);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar2)))
				{
					DEREFERENCE_ACTOR(&uVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar2);
					TASK_CLEAR(&uVar2);
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			DESTROY_ITERATOR(&uVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_27(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_26(1));
		}
	}
	return;
}

bool Function_26(int iParam0) //Position: 0xC3D / 3133
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(bool bParam0) //Position: 0xC59 / 3161
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_46894[2] || bParam0 != Global_46894[1]) || bParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[bParam0];
	return (((Function_29(uVar0, 0x1000000) || Function_29(uVar0, 0x2000000)) || Function_29(uVar0, 0x4000000)) || Function_28(bParam0));
}

bool Function_28(int iParam0) //Position: 0xCCC / 3276
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(var uParam0, bool bParam1) //Position: 0xCE9 / 3305
{
	return (uParam0 && bParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xCF6 / 3318
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_9(iParam1) || Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_33(&iParam0, &Global_11014, iParam1);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_33(&iParam0, &Global_11146, iParam1);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_33(&iParam0, &Global_11120, iParam1);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_33(&iParam0, &Global_11222, iParam1);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_33(&iParam0, &Global_11284, iParam1);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_33(&iParam0, &Global_11492, iParam1);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_33(&iParam0, &Global_11544, iParam1);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_33(&iParam0, &Global_11646, iParam1);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_33(&iParam0, &Global_11704, iParam1);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_33(&iParam0, &Global_11752, iParam1);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_33(&iParam0, &Global_11726, iParam1);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_33(&iParam0, &Global_11836, iParam1);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_33(&iParam0, &Global_11946, iParam1);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_33(&iParam0, &Global_11988, iParam1);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_33(&iParam0, &Global_12048, iParam1);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_33(&iParam0, &Global_12150, iParam1);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_33(&iParam0, &Global_11398, iParam1);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_33(&iParam0, &Global_12284, iParam1);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_33(&iParam0, &Global_12342, iParam1);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_33(&iParam0, &Global_12422, iParam1);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_33(&iParam0, &Global_12392, iParam1);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_33(&iParam0, &Global_12760, iParam1);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_33(&iParam0, &Global_12714, iParam1);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_33(&iParam0, &Global_12644, iParam1);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_33(&iParam0, &Global_12488, iParam1);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_33(&iParam0, &Global_12482, iParam1);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_25(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_6623)
	{
		Function_31(iParam1);
	}
	return;
}

void Function_31(int iParam0) //Position: 0x105D / 4189
{
	var uVar0;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam0);
	if (Function_27(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

int Function_32(int iParam0) //Position: 0x10C4 / 4292
{
	bool bVar0;
	
	bVar0 = "";
	if (iParam0 == Global_46838[1])
	{
		bVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46894[1])
	{
		bVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[1])
	{
		bVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[0])
	{
		bVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[0])
	{
		bVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[1])
	{
		bVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46926[2])
	{
		bVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46850[0])
	{
		bVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46850[1])
	{
		bVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46850[2])
	{
		bVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[0])
	{
		bVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46866[1])
	{
		bVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[2])
	{
		bVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46894[2])
	{
		bVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[3])
	{
		bVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[0])
	{
		bVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46760[0])
	{
		bVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46760[2])
	{
		bVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46760[1])
	{
		bVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_46796[3])
	{
		bVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46796[1])
	{
		bVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[0])
	{
		bVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[1])
	{
		bVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46838[0])
	{
		bVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		bVar0 = "";
	}
	return &bVar0;
}

void Function_33(vector3 vParam0) //Position: 0x140C / 5132
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (!IS_ACTOR_VALID(&uVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(&uVar1))
		{
		}
		else
		{
			Function_46(&(Param1[iVar02]), 4);
		}
		if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
		{
			DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
		}
		iVar0++;
	}
	if (!Function_27(iParam2))
	{
		Global_21684[&vParam0 + 6247].f_32 = 0.0f;
		if (!Function_45(Global_119934, 0x4000000))
		{
			Function_39(&Global_54076, 0x4000000, 1, 0);
		}
	}
	else if (Function_29(&vParam0 + 608, 32))
	{
		if (!Function_45(Global_119934, 8388608))
		{
			Function_39(&Global_54076, 8388608, 1, 0);
		}
	}
	else if (!Function_45(Global_119934, 4194304))
	{
		Function_39(&Global_54076, 4194304, 1, 0);
	}
	Function_37(&vParam0, 0, 0);
	DESTROY_OBJECT(&vParam0);
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRifles"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumPistols"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	Function_2(&vParam0 + 384);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_34(iParam2, Function_27(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_26(1));
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x16EC / 5868
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (bParam1 && Function_36("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_46760[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[4])
	{
	}
	else if (iParam0 == Global_46816[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_35(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46838[1])
	{
	}
	else if (iParam0 == Global_46838[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[1])
	{
	}
	else if (iParam0 == Global_46894[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[0])
	{
	}
	else if (iParam0 == Global_46926[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[1])
	{
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x1E42 / 7746
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x1E57 / 7767
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1E79 / 7801
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
				if (!Function_38(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_38(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1F02 / 7938
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_39(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1F22 / 7970
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_41(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_40(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_40(char* cParam0) //Position: 0x1F97 / 8087
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

bool Function_41(int iParam0, var uParam1, int iParam2) //Position: 0x1FD1 / 8145
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
		if (Function_43(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_42(uVar0))
		{
			case 0x00000002:
				if (!Function_45(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_42(char* cParam0) //Position: 0x204D / 8269
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

int Function_43(int iParam0) //Position: 0x20EE / 8430
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_44(&iVar1, 2147483648);
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

void Function_44(int iParam0, int iParam1) //Position: 0x212B / 8491
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x2141 / 8513
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2154 / 8532
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_47(struct<4>[] Param0, bool bParam1) //Position: 0x216E / 8558
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar6 = false;
	if (Global_46721 > Param0)
	{
		Global_46721 = 0;
	}
	iVar0 = Global_46721;
	while (iVar0 < Function_50((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_49(&(Param0[iVar04]), 16384);
				uVar8 = Param0[iVar04].f_12;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(&uVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(&uVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (&bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_48(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_49(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(&Param0[iVar04] + 24))
							{
								if (IS_PERS_CHAR_ALIVE(&Param0[iVar04] + 24))
								{
									uVar10 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar04] + 24);
									if (IS_ACTOR_VALID(&uVar10))
									{
										if (IS_ACTOR_IN_VOLUME(&uVar10, &Param0[iVar04] + 16))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_48(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
						else
						{
							Function_48(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_49(&(Param0[iVar04]), 1);
						uVar8 = Param0[iVar04].f_12;
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(&uVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_48(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_48(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(&uVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_49(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_49(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			bVar3 = IS_DOOR_LOCKED(&uVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_6630)
				{
					if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
							{
								SET_DOOR_LOCK(&uVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(&uVar7, 1);
				}
			}
			else if (Global_6630)
			{
				if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_87(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_49(&(Param0[iVar04]), 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(&uVar7, 0);
			}
		}
		iVar0++;
	}
	Global_46721 = iVar0;
	return;
}

void Function_48(struct<13> Param0) //Position: 0x258F / 9615
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_49(struct<13> Param0) //Position: 0x25A2 / 9634
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x25BF / 9663
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_51(vector3 vParam0) //Position: 0x25D1 / 9681
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_26(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_52(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_6630)
	{
		vParam0.f_8 = 1;
	}
	else if (Global_6629)
	{
		vParam0.f_8 = 1;
	}
	else if (vParam0.z)
	{
		vParam0.f_8 = 0;
	}
}

bool Function_52(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x265B / 9819
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(&vParam0))
	{
		return 0;
	}
	Function_221(&(Global_43791[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(&vParam0 + 8, "locflag");
	if (bVar0 != 0 && vParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (vParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_20(&vParam0, 2))
					{
						if (!Function_20(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_84(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_83(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (Function_20(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_14(0, 0, 0);
						}
						else
						{
							Function_14(0, 0, 30);
						}
						Function_19(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_20(&vParam0, 2))
					{
						if (!Function_20(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_83(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (Function_20(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_19(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_9(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_81(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_20(&vParam0, 2))
					{
						if (!Function_20(&vParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
							{
								if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime");
								}
							}
							if (bVar2)
							{
								Function_83(&vParam0, 16);
								Function_73(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (Function_20(&vParam0, 16))
					{
						Function_19(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_20(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_83(&vParam0, 2);
			}
			else
			{
				Function_19(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_9(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_222(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_20(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_72(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_83(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_9(iParam2))
					{
						Function_71(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_53(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_53(int iParam0) //Position: 0x2AB3 / 10931
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_222(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_258(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_58(473, 1, 0, 0);
		iVar0 = Function_57(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_58(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_58(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_58(476, 1, 0, 0);
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
		Function_56(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_56(7, 30);
	}
	if (Function_55(473) <= Function_54(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_54(int iParam0) //Position: 0x2BA4 / 11172
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_55(int iParam0) //Position: 0x2BE1 / 11233
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_56(int iParam0, int iParam1) //Position: 0x2C1A / 11290
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

var Function_57(int iParam0) //Position: 0x2C84 / 11396
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

int Function_58(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2CDC / 11484
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_59(iParam0);
	return 1;
}

void Function_59(bool bParam0) //Position: 0x2F04 / 12036
{
	switch (bParam0)
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

void Function_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2FA2 / 12194
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_54(390))), 32);
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
					bVar19 = (Function_55(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_55(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_65(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_61(), &Var9);
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

var Function_61() //Position: 0x35E0 / 13792
{
	int iVar0;
	
	return &iVar0;
}

var Function_62(int iParam0) //Position: 0x35E9 / 13801
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x35FA / 13818
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0) //Position: 0x36F1 / 14065
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x370C / 14092
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_50(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x3773 / 14195
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3785 / 14213
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x38B9 / 14521
{
	return Global_55480[iParam016].f_96;
}

void Function_69(int iParam0) //Position: 0x38C8 / 14536
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3A62 / 14946
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

void Function_71(var uParam0, int iParam1) //Position: 0x3CA6 / 15526
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(int iParam0, var uParam1, int iParam2) //Position: 0x3CB3 / 15539
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x3CDD / 15581
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_80(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_79(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_76(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_74();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_74() //Position: 0x3F90 / 16272
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_75(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_75(var uParam0, int iParam1) //Position: 0x4004 / 16388
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

bool Function_76(bool bParam0) //Position: 0x403A / 16442
{
	if (Function_81(256))
	{
		return 0;
	}
	if (Function_81(262144))
	{
		return 0;
	}
	if (Function_78())
	{
		return 0;
	}
	if (!Function_81(1))
	{
		return 0;
	}
	if (!Function_81(4096))
	{
		return 0;
	}
	if (bParam0 && Function_77(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_81(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_77(int iParam0) //Position: 0x40B0 / 16560
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x40C1 / 16577
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x40DA / 16602
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x40F0 / 16624
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x4105 / 16645
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x4123 / 16675
{
	uParam0 = &uParam0;
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
	if (Global_6636 && uParam2)
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
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_83(struct<17> Param0) //Position: 0x41D2 / 16850
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x41E5 / 16869
{
	int iVar0;
	bool bVar1;
	
	Function_18(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_85(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_15(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x425F / 16991
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_18(iParam0);
	Function_17(&uVar0);
	PRINTNL();
	Function_15(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x4288 / 17032
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam0 + 8))
	{
		return 0;
	}
	return 1;
}

var Function_87() //Position: 0x42A8 / 17064
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(struct<82> Param0) //Position: 0x42BD / 17085
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	char* cVar5[32];
	int iVar13;
	float fVar14;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<5> Var24;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(&Global_54076, "QM_TriggerAttack");
		Function_44(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_200(0, bParam1, 3);
		}
		if (!Function_29(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (bParam1 != Global_46914[1] || HUD_IS_FADED())
	{
		if (!Function_29(&Param0 + 608, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_198(1, 0));
			Function_197(&Param0 + 608, 0x20000000);
		}
		return;
	}
	if (Function_29(&Param0 + 608, 16))
	{
		Function_196(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_29(&Param0 + 608, 4))
	{
		return;
	}
	if (Global_6623 && !Function_29(&Param0 + 608, 4))
	{
		Function_197(&Param0 + 608, 4);
		Function_30(&Param0, bParam1);
		DECOR_SET_FLOAT(&Global_44085[bParam19] + 8, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_25(bParam1);
		return;
	}
	fVar0 = Function_192(Function_193(bParam1));
	fVar1 = Function_191(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (&Param0 + 616 == 4294967295)
	{
		*(&Param0 + 616) = Function_200(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			uVar4 = &Param0 + 8[iVar35];
			if (IS_ACTOR_ALIVE(&uVar4))
			{
				Function_190(&Param0 + 8[iVar35]);
			}
			iVar3++;
		}
		Function_189(&Param0);
		*(&Param0 + 376) = 7;
		return;
	}
	if (Function_188(Function_193(bParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_29(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[bParam19] + 32, 32);
			SET_MISSION_INFO(&cVar5, "");
			if (Function_29(&Param0 + 608, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_185(&Param0, 0);
				Function_190(&Param0 + 336);
				iVar13 = 0;
				while (StackVal < (iVar13 - 1))
				{
					Function_190(&Param0 + 8[iVar135]);
					iVar13++;
				}
				Function_197(&Param0 + 608, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_196(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0,5f);
				Function_184(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(&Global_54076, "nDecayRate", 3);
				*(&Param0 + 376) = 5;
			}
			else
			{
				Function_182();
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(&Global_54076, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(&Global_54076, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (&Param0 + 376 <= 1 && &Param0 + 376 >= 6)
		{
			if (&Param0 + 376 >= 1)
			{
				Function_177(&Param0, bParam1, fVar2);
			}
			if (!Function_29(&Param0 + 608, 131072))
			{
				if (&Param0 + 376 == 6 && &Param0 + 376 < 1)
				{
					if ((Global_6629 && !Function_29(&Param0 + 608, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_197(&Param0 + 608, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar14 = Function_191(bParam1);
						fVar15 = (fVar14 % 10.0f);
						bVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar16));
						UI_REFRESH("ZMeter");
					}
					if (((Function_29(&Param0 + 608, 32768) && !DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && &Param0 + 376 > 5)
					{
						Function_189(&Param0);
					}
				}
			}
		}
	}
	Function_175(&Param0, bParam1);
	if (Function_29(&Param0 + 608, 1024))
	{
		Function_174(&Param0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_99146)
	{
		if (!Function_29(&Param0 + 608, 16384))
		{
			Function_197(&Param0 + 608, 16384);
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], false);
				iVar17++;
			}
		}
	}
	else if (Function_29(&Param0 + 608, 16384))
	{
		Function_44(&Param0 + 608, 16384);
		iVar17 = 0;
		while (StackVal < (iVar17 - 1))
		{
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], true);
			iVar17++;
		}
	}
	if (Function_29(&Param0 + 608, 262144))
	{
		if (Function_241(&Param0))
		{
			Function_44(&Param0 + 608, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, bParam1, Param0);
			if (!Function_27(bParam1))
			{
				if (!Function_29(&Param0 + 608, 8))
				{
					Function_197(&Param0 + 608, 8);
					Function_171();
				}
			}
		}
	}
	if (Function_29(&Param0 + 608, 524288))
	{
		if (Function_171())
		{
			Function_197(&Param0 + 608, 8);
			Function_44(&Param0 + 608, 524288);
		}
	}
	switch (&Param0 + 376)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_45(Global_119934, 65536) || !Global_6606)) && Global_6629) && !Global_6628)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
				{
					DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
				}
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				if (Function_27(bParam1))
				{
					if ((RAND_INT_RANGE(false, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Unknown_Function();
					Function_157(bParam1);
					Function_195(0, 4294967295);
					Function_196(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_29(&Param0 + 608, 1))
					{
						Function_156(&Param0, bParam1);
						Function_155("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						*(&Param0 + 376) = 2;
					}
					else
					{
						*(&Param0 + 376) = 4;
					}
					Function_152("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Unknown_Function();
					Function_157(bParam1);
					Function_197(&Param0 + 608, 2);
					Function_195(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					*(&Param0 + 632) = 1000.0f;
					*(&Param0 + 376) = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_146(&Param0 + 336, 1, &Param0 + 608))
			{
				SET_ANIM_SET_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo", 0);
				iVar18 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&Param0 + 336));
				if (((iVar18 != 41 || iVar18 != 42) || iVar18 != 43) || iVar18 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_114(&Param0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(&Param0 + 336, "GET_US_AMMO_P", &Global_54076, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				*(&Param0 + 376) = 3;
			}
			break;
		
		case 0x00000003:
			bVar19 = false;
			iVar17 = 0;
			while (0 < (iVar17 - 1))
			{
				uVar20 = &Param0 + 8[iVar175];
				if (IS_ACTOR_ALIVE(&uVar20))
				{
					if (Function_29((&Param0 + 8[iVar175])->f_32, 2))
					{
						if (DECOR_CHECK_EXIST(&uVar20, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(&uVar20, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&uVar20, "nUC_NoAmmo"));
								DECOR_REMOVE(&uVar20, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(&uVar20, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_146(&Param0 + 8[iVar175], 0, &Param0 + 8[iVar175] + 32))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
							iVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_103(&Param0 + 8[iVar175], iVar21);
							Function_44(&Param0 + 8[iVar175] + 32, 2);
							Function_197(&Param0 + 8[iVar175] + 32, 16);
						}
						bVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_29((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_44(&Param0 + 8[iVar175] + 32, 16);
						AI_CLEAR_DONT_HARM_ACTOR(&uVar20);
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						SET_MOVER_FROZEN(&uVar20, false);
						RESET_ANIM_SET_FOR_ACTOR(&uVar20, 1);
						uVar22 = Vector(0.0f, 0.0f, 0.0f);
						Var24 = Vector(0.0f, 0.0f, 0.0f);
						GET_OBJECT_POSITION(&Param0 + 8[iVar175] + 8, &uVar22);
						GET_OBJECT_ORIENTATION(&Param0 + 8[iVar175] + 8, &Var24);
						TASK_PRIORITY_SET(&uVar20, true);
						TASK_SHOOT_ENEMIES_FROM_POSITION(bParam1, &uVar20, &uVar22, 3212836864);
						strcpy(&cVar26, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(&uVar20))
						{
							stradd(&cVar26, "M", 64);
						}
						else
						{
							stradd(&cVar26, "F", 64);
						}
						if (Function_102(&uVar20))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "THANKS_FOR_AMMO_P", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "nTHANK_YOU", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						Param0.f_640 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(&uVar20))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
					}
					if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
					{
						DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
					}
				}
				iVar17++;
			}
			if (Global_47151[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar19);
				PRINTNL();
			}
			if (bVar19 == 0)
			{
				*(&Param0 + 376) = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(&Global_54076, "bNoSurvivorHelp", true);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "nDecayRate"))
			{
				bVar42 = DECOR_GET_INT(&Global_54076, "nDecayRate");
				if (bVar42 == 3)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,5f);
				}
				else if (bVar42 == 2)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,75f);
				}
				else if (bVar42 == 1)
				{
					DECOR_REMOVE(&Global_54076, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_184(1);
			if (Function_97(&Param0))
			{
				DECOR_SET_FLOAT(&Global_54076, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_96(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				*(&Param0 + 376) = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 600) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_196(bParam1, 300.0f);
			}
			else
			{
				Function_196(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_29(&Param0 + 608, 8))
			{
				Function_197(&Param0 + 608, 8);
				Function_171();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
			{
				DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
			}
			Function_95(bParam1);
			Function_94(&Param0);
			Function_185(&Param0, 1);
			Function_25(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_200(0, bParam1, 3);
			Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_197(&Param0 + 608, 512);
			if (!Function_29(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_91(Function_193(bParam1));
				Function_58(660, bVar43, 0, 0);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Unknown_Function();
			Function_251(&Param0, &Global_46715, bParam1);
			Function_250(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_241(&Param0))
			{
				if (!bParam1 != Global_46914[0])
				{
					Function_226(&Param0, bParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_226(&Param0, bParam1, &Global_46715);
					DECOR_SET_FLOAT(&Global_54076, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(&Global_54076, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns");
					*(&Param0 + 376) = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(&Global_54076, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(&Global_54076, "Special_BLK_Ready");
				Function_114(&Param0, bParam1);
				Function_163(&Param0);
				Function_197(&Param0 + 608, 262144);
				Unknown_Function();
				Function_197(&Global_21684[Function_200(111, 111, 5)7] + 20, 4);
				Function_157(bParam1);
				Function_195(0, 4294967295);
				Function_196(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], 0);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], 0);
				*(&Param0 + 376) = 3;
			}
			break;
	}
	iVar17 = 0;
	while (1 < (iVar17 - 1))
	{
		iVar44 = &Param0 + 8[iVar175];
		if (IS_ACTOR_VALID(&iVar44))
		{
			if (!IS_ACTOR_ALIVE(&iVar44))
			{
				if (!DECOR_CHECK_EXIST(&iVar44, "DeathTallied"))
				{
					DECOR_SET_BOOL(&iVar44, "DeathTallied", true);
					Global_21684[&Param0 + 6247].f_28 = (Global_21684[&Param0 + 6247].f_28 + 1.0f);
					if (Function_29(Global_21684[&Param0 + 6247].f_24, 1))
					{
						Function_90(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (DECOR_CHECK_EXIST(&Param0 + 8[iVar175], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&Param0 + 8[iVar175], "nUC_NoAmmo"));
				}
				if (&iVar44 == &Param0 + 336)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
					}
					if (&Param0 + 376 <= 7)
					{
						if ((!GET_LAST_ATTACKER(&iVar44) != &Global_54076 && &Param0 + 376 != 2) && !Function_29(&Param0 + 608, 8192))
						{
							Function_197(&Param0 + 608, 8192);
							Function_152("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar45 = 0;
							while (bParam1 < (iVar45 - 1))
							{
								Function_190(&Param0 + 8[iVar455]);
								SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar455], true);
								iVar45++;
							}
							if (&Param0 + 376 <= 4)
							{
								*(&Param0 + 376) = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
				{
					DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
				}
			}
			if (GET_LAST_ATTACKER(&iVar44) != &Global_54076 && !Function_29(&Param0 + 608, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
				}
				iVar46 = 0;
				while (1 < (iVar46 - 1))
				{
					Function_190(&Param0 + 8[iVar465]);
					SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar465], true);
					MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8[iVar465], &Global_54076);
					iVar46++;
				}
				if (&Param0 + 376 <= 7)
				{
					if (&Param0 + 376 <= 5)
					{
						*(&Param0 + 376) = 4;
					}
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_200(0, bParam1, 3);
				Function_197(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			}
		}
		iVar17++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	uVar47 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar47))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar47)), "footlock"))
		{
			Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, 1, &Param0, bParam1, &uVar47, Param0);
		}
	}
	return;
}

void Function_89(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, bool bParam80, var uParam81, char* cParam82) //Position: 0x579F / 22431
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	uVar0 = GET_OBJECT_FROM_GRINGO(&uParam0);
	uVar1 = GET_OBJECT_NAME(&uVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
	uVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(&uVar3));
	Function_197(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x57F6 / 22518
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
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_60(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_91(int iParam0) //Position: 0x59F3 / 23027
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_92(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_12760[iVar102];
					break;
			}
			if (!Function_29(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int[] iParam0) //Position: 0x5BDD / 23517
{
	iParam1 = iParam1;
	if (iParam1 == Global_46760[0])
	{
		iParam0[0] = 65;
		iParam0[1] = 68;
		iParam0[2] = 435;
		iParam0[3] = 428;
		iParam0[4] = 107;
		iParam0[5] = 140;
		return 6;
	}
	if (iParam1 == Global_46914[0])
	{
		iParam0[0] = 89;
		iParam0[1] = 95;
		iParam0[2] = 146;
		return 3;
	}
	if (iParam1 == Global_46816[1])
	{
		iParam0[0] = 56;
		iParam0[1] = 24;
		iParam0[2] = 138;
		iParam0[3] = 139;
		return 4;
	}
	if (iParam1 == Global_46816[0])
	{
		iParam0[0] = 54;
		iParam0[1] = 420;
		iParam0[2] = 38;
		iParam0[3] = 213;
		iParam0[4] = 55;
		return 5;
	}
	if (iParam1 == Global_46866[0])
	{
		iParam0[0] = 276;
		iParam0[1] = 237;
		iParam0[2] = 290;
		iParam0[3] = 460;
		iParam0[4] = 269;
		iParam0[5] = 283;
		return 6;
	}
	if (iParam1 == Global_46850[0])
	{
		iParam0[0] = 289;
		iParam0[1] = 392;
		iParam0[2] = 268;
		iParam0[3] = 266;
		iParam0[4] = 382;
		iParam0[5] = 245;
		iParam0[6] = 304;
		return 7;
	}
	if (iParam1 == Global_46760[2])
	{
		iParam0[0] = 487;
		iParam0[1] = 491;
		iParam0[2] = 493;
		return 3;
	}
	if (iParam1 == Global_46894[3])
	{
		iParam0[0] = 379;
		iParam0[1] = 380;
		iParam0[2] = 391;
		iParam0[3] = 455;
		return 4;
	}
	if (iParam1 == Global_46850[2])
	{
		iParam0[0] = 410;
		iParam0[1] = 411;
		iParam0[2] = 465;
		return 3;
	}
	if (iParam1 == Global_46760[1])
	{
		iParam0[0] = 152;
		iParam0[1] = 176;
		return 2;
	}
	if (iParam1 == Global_46796[1])
	{
		iParam0[0] = 133;
		iParam0[1] = 144;
		return 2;
	}
	if (iParam1 == Global_46926[2])
	{
		iParam0[0] = 29;
		iParam0[1] = 30;
		iParam0[2] = 28;
		return 3;
	}
	if (iParam1 == Global_46850[1])
	{
		iParam0[0] = 516;
		iParam0[1] = 529;
		return 2;
	}
	if (iParam1 == Global_46926[1])
	{
		iParam0[0] = 169;
		iParam0[1] = 39;
		iParam0[2] = 149;
		return 3;
	}
	if (iParam1 == Global_46866[1])
	{
		iParam0[0] = 62;
		iParam0[1] = 242;
		iParam0[2] = 244;
		iParam0[3] = 296;
		iParam0[4] = 297;
		iParam0[5] = 260;
		iParam0[6] = 295;
		iParam0[7] = 141;
		return 8;
	}
	if (iParam1 == Global_46796[3])
	{
		iParam0[0] = 505;
		iParam0[1] = 506;
		iParam0[2] = 507;
		iParam0[3] = 508;
		iParam0[4] = 510;
		iParam0[5] = 509;
		return 6;
	}
	if (iParam1 == Global_46796[4])
	{
		iParam0[0] = 400;
		return 1;
	}
	if (iParam1 == Global_46894[2])
	{
		iParam0[0] = 281;
		iParam0[1] = 282;
		iParam0[2] = 456;
		return 3;
	}
	if (iParam1 == Global_46894[0])
	{
		iParam0[0] = 396;
		iParam0[1] = 462;
		iParam0[2] = 15;
		iParam0[3] = 11;
		iParam0[4] = 461;
		return 5;
	}
	if (iParam1 == Global_46866[2])
	{
		iParam0[0] = 238;
		iParam0[1] = 530;
		iParam0[2] = 294;
		return 3;
	}
	if (iParam1 == Global_46926[0])
	{
		iParam0[0] = 404;
		return 1;
	}
	if (iParam1 == Global_46838[0])
	{
		iParam0[0] = 168;
		iParam0[1] = 176;
		iParam0[2] = 177;
		return 3;
	}
	return 0;
}

var Function_93(int iParam0) //Position: 0x600C / 24588
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

void Function_94(vector3 vParam0) //Position: 0x6192 / 24978
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 8[iVar05] + 16))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 8[iVar05] + 16);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 336 + 16);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x61EC / 25068
{
	var uVar0;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_96(int iParam0) //Position: 0x6226 / 25126
{
	int iVar0;
	
	if (Function_29(iParam0, 1) && Function_29(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_97(int iParam0) //Position: 0x625A / 25178
{
	return Function_98(&iParam0 + 600);
}

int Function_98(int iParam0) //Position: 0x6269 / 25193
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	struct<5> Var5;
	bool bVar10;
	var uVar11;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_61()));
	}
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_61()));
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	ITERATE_IN_VOLUME(&uVar1, &Global_44085[Global_437899] + 8);
	START_OBJECT_ITERATOR(&uVar1);
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		uVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
		if ((!IS_ACTOR_HORSE(&uVar3) && !IS_ACTOR_HOGTIED(&uVar3)) && IS_ACTOR_ALIVE(&uVar3))
		{
			bVar4 = GET_ACTOR_ENUM(&uVar3);
			if ((bVar4 > 1128 || bVar4 < 1130) && bVar4 == 1247)
			{
				Var5 = Vector(0.0f, 0.0f, 0.0f);
				GET_POSITION(&uVar3, &Var5);
				iVar7 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar8 = (Function_29(iVar7, 1024) && iVar7 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
					iVar9 = SQUAD_GET_SIZE(&iParam0);
					if (iVar9 >= 6)
					{
						if (Function_100(StackVal, &uVar3, Global_54078) < 20.0f && !Function_38(&uVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar8 = true;
						}
					}
					if (!bVar8)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar8 = true;
						}
					}
				}
				if (bVar8)
				{
					SQUAD_JOIN(&uVar3, &uVar0);
				}
				else
				{
					SQUAD_JOIN(&uVar3, &iParam0);
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	if (SQUAD_GET_SIZE(&iParam0) > 4)
	{
		Function_99(&uVar0);
		DESTROY_OBJECT(&uVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 2560);
		Function_258(&(Global_43791[Global_43789]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar10 = false;
		while (bVar10 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar10);
			REFERENCE_ACTOR(&uVar11);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uVar11, &Global_44085[Global_437899] + 8, 1, true);
			TASK_PRIORITY_SET(&uVar11, false);
			TASK_GO_NEAR_OBJECT(&uVar11, &Global_54076, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(&uVar11))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar11, 11, false);
			}
			ADD_BLIP_FOR_ACTOR(&uVar11, 322, 0, 2, 0);
			bVar10++;
		}
		return 1;
	}
	DESTROY_OBJECT(&uVar0);
	DESTROY_OBJECT(&iParam0);
	return 0;
}

void Function_99(int iParam0) //Position: 0x64C0 / 25792
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

float Function_100(var uParam0, struct<2> Param1) //Position: 0x6517 / 25879
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_101(&uParam0);
		Var0 = Function_101(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_101(int iParam0) //Position: 0x658E / 25998
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

bool Function_102(int iParam0) //Position: 0x65FA / 26106
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((bVar0 != 9 || bVar0 != 15) || bVar0 != 24) || bVar0 != 420) || bVar0 != 28) || bVar0 != 29) || bVar0 != 30) || bVar0 != 36) || bVar0 != 38) || bVar0 != 39) || bVar0 != 54) || bVar0 != 55) || bVar0 != 56) || bVar0 != 65) || bVar0 != 68) || bVar0 != 404) || bVar0 != 400) || bVar0 != 89) || bVar0 != 95) || bVar0 != 96) || bVar0 != 107) || bVar0 != 139) || bVar0 != 140) || bVar0 != 141) || bVar0 != 144) || bVar0 != 146) || bVar0 != 149) || bVar0 != 152) || bVar0 != 168) || bVar0 != 169) || bVar0 != 176) || bVar0 != 177) || bVar0 != 213) || bVar0 != 509) || bVar0 != 493) || bVar0 != 529) || bVar0 != 237) || bVar0 != 238) || bVar0 != 245) || bVar0 != 266) || bVar0 != 268) || bVar0 != 269) || bVar0 != 276) || bVar0 != 283) || bVar0 != 289) || bVar0 != 294) || bVar0 != 304) || bVar0 != 428) || bVar0 != 435) || bVar0 != 461) || bVar0 != 465) || bVar0 != 455) || bVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x676B / 26475
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	bool bVar8;
	int iVar9;
	int iVar10;
	
	Function_113();
	Function_112();
	GET_POSITION(&iParam0, &Var0);
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar2, "Ammo");
	ITERATE_IN_SPHERE(&uVar2, Var0, 2.0f);
	uVar5 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar3 = &uVar5;
	}
	uVar5 = OBJECT_ITERATOR_NEXT(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar4 = &uVar5;
	}
	DESTROY_ITERATOR(&uVar2);
	Function_58(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(&uVar3) || !IS_OBJECT_VALID(&uVar4))
	{
		SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_111(bParam1, 5.0f, 1);
		Function_190(&iParam0);
		Function_110(Global_43789, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(&uVar3, &Var6);
	bVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, bVar8, 1);
	SET_MOVER_FROZEN(&iParam0, true);
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "DLC_give_ammo", 1);
	if (!Function_109(StackVal, &iParam0, Var6))
	{
		iVar9 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar9 != 41 || iVar9 != 42) || iVar9 != 43) || iVar9 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(&Global_54076) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_STAND_STILL(&iParam0, 3.0f, 0, 0);
	Function_104(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_111(bParam1, 5.0f, 1);
	Function_190(&iParam0);
	Function_110(Global_43789, 10.0f);
	return;
}

var Function_104(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6A65 / 27237
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_61(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_105(&uVar0, &uParam2);
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

void Function_105(var uParam0, int iParam1) //Position: 0x6AF3 / 27379
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_108(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_107(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_106(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 1,6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 1,5f, 1, 0);
	return;
}

void Function_106(int iParam0, int iParam1) //Position: 0x6B5C / 27484
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,402189f, 1,415817f, -0,851866f), Vector(6,384388f, -147,5115f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_107(int iParam0, var uParam1) //Position: 0x6BED / 27629
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,421349f, 1,41818f, -0,861325f), Vector(-6,658212f, -134,564f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x6C7E / 27774
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,442921f, 1,420794f, -0,871029f), Vector(4,479696f, -143,4034f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

bool Function_109(var uParam0, struct<2> Param1) //Position: 0x6D14 / 27924
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_110(int iParam0, float fParam1) //Position: 0x6D4F / 27983
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", bVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6D93 / 28051
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(&Global_54076, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, bParam0, (fVar1 - fVar3), 0);
	}
	if (&bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
	}
	return;
}

void Function_112() //Position: 0x6ED7 / 28375
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x6EE9 / 28393
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, bool bParam1) //Position: 0x6EFE / 28414
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", true);
	Function_117(StackVal, Global_54078, 1, &iParam0 + 336, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 336 + 16);
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", &(uVar0[0]), 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", &(uVar0[0]), &(uVar0[1]), 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), 0, 2, 0, 0);
	}
	Function_155("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_29(&iParam0 + 608, 8))
	{
		if (Function_171())
		{
			Function_197(&iParam0 + 608, 8);
		}
		else
		{
			Function_197(&iParam0 + 608, 524288);
		}
	}
	Function_197(&iParam0 + 608, 32);
	*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	Function_197(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_115(&iParam0);
	return;
}

void Function_115(vector3 vParam0) //Position: 0x7206 / 29190
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		iVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			if (!DECOR_CHECK_EXIST(&iVar1, "PreSaved") || (DECOR_CHECK_EXIST(&iVar1, "PreSaved") && DECOR_CHECK_EXIST(&iVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar1));
				}
				uVar2 = ADD_BLIP_FOR_ACTOR(&iVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(&uVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar2, true);
				if (Global_43789 == Global_46914[0])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 2,5f);
				}
				else if (Global_43789 == Global_46816[1])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 1,75f);
				}
				UNK_0x1E98AFEC(&uVar2, 1);
				if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
				{
					DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
				}
				*(&vParam0 + 8[iVar05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &vParam0 + 8[iVar05] + 24, &iVar1, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_116(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, bVar3, 1) <= 5.0f)
				{
					*(&vParam0 + 8[iVar05] + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(&iVar1, "nUC_NoAmmo"))
				{
					uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
					DECOR_SET_INT(&iVar1, "nUC_NoAmmo", &uVar5);
				}
				Function_197(&vParam0 + 8[iVar05] + 32, 2);
				uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iVar1, Function_61(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uVar6, &iVar1, Function_61(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar7 = ADD_BLIP_FOR_OBJECT(&uVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(&uVar7, 1);
				DECOR_SET_INT(&iVar1, "PauseMapBlip", &uVar7);
				SET_BLIP_NAME(&uVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar7, true);
			}
			else
			{
				Function_110(Global_43789, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_116(int iParam0) //Position: 0x74D4 / 29908
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(&iParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_117(struct<2> Param0, bool bParam2, var uParam3, bool bParam4) //Position: 0x7598 / 30104
{
	bool bVar0;
	var uVar1;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	var uVar10;
	int iVar12;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	int iVar19;
	var uVar20;
	
	if (Function_145(StackVal, Param0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	bVar0 = false;
	Global_53524.f_16 = 0;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	if (&bParam2)
	{
		Global_53524.f_24 = Global_43789;
		if (IS_ACTOR_VALID(&uParam3))
		{
			Function_144(&uParam3);
			uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_144(&uParam3), StackVal);
			VNORMALIZE(&uVar1);
			Global_53524.f_12 = UNK_0x9C40E671(&uVar1);
		}
		else
		{
			Global_53524.f_12 = Function_143(&Global_54076);
		}
		Global_53524 = Param0;
		if (IS_PS3())
		{
			Global_53524.f_4 = (StackVal + 0,1f);
		}
		bVar0 = true;
	}
	else if (&bParam4)
	{
		Global_53524.f_24 = Global_43789;
		if (!Function_142(&Global_53524, &Global_53524 + 12, &uVar3))
		{
			GET_VOLUME_CENTER(&uVar3, &Var4);
			if (Function_138(StackVal, Var4, &uVar3, &Var6, &Var8, 1))
			{
				uVar10 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var8, StackVal);
				VNORMALIZE(&uVar10);
				Global_53524.f_12 = UNK_0x9C40E671(&uVar10);
				Global_53524 = Var6;
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_53524 + 76)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_142(&Global_53524, &Global_53524 + 12, &iVar12))
	{
		Global_53524.f_24 = Function_136(StackVal, Param0, 0.0f, 1);
		if (Function_9(Global_53524.f_24))
		{
			iVar12 = &Global_44085[Global_53524.f_249] + 8;
			GET_VOLUME_CENTER(&iVar12, &Var13);
			if (Function_138(StackVal, Var13, &iVar12, &Var15, &Var17, 0))
			{
				iVar19 = Function_135(StackVal, Var15, 1);
				if ((StackVal && ((iVar19 == Global_46746[0] && iVar19 == Global_46746[2]) && iVar19 == Global_46746[1]) != 3) && Global_43787 != 1)
				{
					Global_53524 = Vector(-3515,646f, 19,234f, 4205,955f);
					Global_53524.f_12 = 225,789f;
				}
				else if (Global_53524.f_24 == Global_46914[1])
				{
					Global_53524 = Vector(-66,023f, 116,861f, 1411,445f);
					Global_53524.f_12 = 64,688f;
				}
				else if (Global_53524.f_24 == Global_46796[3])
				{
					Global_53524 = Vector(-4504,957f, 20,121f, 3406,793f);
					Global_53524.f_12 = 324,417f;
				}
				else if (Global_53524.f_24 == Global_46894[1])
				{
					Global_53524 = Vector(-746,495f, 67,416f, 3414,803f);
					Global_53524.f_12 = 316,104f;
				}
				else if (Global_53524.f_24 == Global_46894[3])
				{
					Global_53524 = Vector(451,281f, 78,306f, 3474,125f);
					Global_53524.f_12 = 79,05f;
				}
				else
				{
					uVar20 = Vector(StackVal, StackVal, StackVal) - Vector(Var15, Var17, StackVal);
					VNORMALIZE(&uVar20);
					Global_53524.f_12 = UNK_0x9C40E671(&uVar20);
					Global_53524 = Var15;
				}
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else if (Global_43789 == Global_46926[0])
			{
				Global_53524 = Vector(-737,414f, 178,366f, 782,796f);
				Global_53524.f_12 = 117,832f;
				Global_53524.f_24 = Global_46926[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_53524.f_24 = Global_43789;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_118();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_118() //Position: 0x79A5 / 31141
{
	Function_131();
	Function_130();
	Function_130();
	Function_129();
	Function_129();
	Function_128();
	Function_128();
	Function_125(0);
	Function_125(0);
	Function_123();
	Function_122();
	Function_121();
	Function_120();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_119();
	return;
}

void Function_119() //Position: 0x79F0 / 31216
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

void Function_120() //Position: 0x7AF6 / 31478
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

void Function_121() //Position: 0x7B29 / 31529
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

void Function_122() //Position: 0x7CBC / 31932
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

void Function_123() //Position: 0x7E75 / 32373
{
	Function_124(&Global_42918, 1, 0);
	return;
}

void Function_124(struct<2317> Param0) //Position: 0x7E83 / 32387
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
	
	uVar0 = Function_87();
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

struct<8> Function_125(int iParam0) //Position: 0x80A2 / 32930
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
					iVar2 = ((Function_127((50 + iVar4)) + Function_127((183 + iVar4))) + Function_127((90 + iVar4)));
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
	Function_126(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_126(int iParam0, bool bParam1, bool bParam2) //Position: 0x8149 / 33097
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
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (&bParam2)
	{
		Function_60(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_127(bool bParam0) //Position: 0x83E5 / 33765
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_128() //Position: 0x8426 / 33830
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
		iVar2 = ((Function_127((50 + iVar3) + 15) + Function_127((183 + iVar3) + 15)) + Function_127((90 + iVar3) + 15));
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
	Function_126(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_129() //Position: 0x84AF / 33967
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
			iVar2 = ((Function_127((50 + iVar3) + 8) + Function_127((183 + iVar3) + 8)) + Function_127((90 + iVar3) + 8));
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
	Function_126(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_130() //Position: 0x8546 / 34118
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
		iVar2 = ((Function_127((50 + iVar3)) + Function_127((183 + iVar3))) + Function_127((90 + iVar3)));
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
	Function_126(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_131() //Position: 0x85C5 / 34245
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x8602 / 34306
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
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_60(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_133(int iParam0) //Position: 0x880E / 34830
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x8828 / 34856
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(struct<2> Param0, bool bParam2) //Position: 0x883E / 34878
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

var Function_136(struct<2> Param0, float fParam2, int iParam3) //Position: 0x88AA / 34986
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_145(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_137(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (!Function_222(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
			{
				iVar4 = 0;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_9(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_137(bool bParam0) //Position: 0x89AA / 35242
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_9(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_44085[bParam09];
		}
		else
		{
			bVar0 = Global_44085[bParam09];
			bVar0 = Global_44085[bVar09];
		}
	}
	return bVar0;
}

bool Function_138(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x8A02 / 35330
{
	var uVar0;
	bool bVar1;
	struct<9> Var2;
	var uVar13;
	int iVar16;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	var uVar25;
	
	if (Function_145(StackVal, Param0) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) < 0)
	{
		UNK_0xDF93BD7C(&uVar0);
		return 0;
	}
	bVar7 = -1.0f;
	bVar9 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, bVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((bVar7 > 0.0f || bVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &iParam2))
		{
			bVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, bVar1);
			bVar9 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(&uVar0);
	if (bVar9)
	{
		Function_140(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_140(StackVal, Param3) };
		if (!bParam5)
		{
			UNK_0x19D652F9(&uVar8, 100.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -100.0f, &vVar10, &iVar16);
		}
		else
		{
			UNK_0x19D652F9(&uVar8, 10.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -10.0f, &vVar10, &iVar16);
		}
		Function_139(&uVar13);
		Var19 = Function_139(&uVar13);
		Function_139(&iVar16);
		Var21 = Function_139(&iVar16);
		GET_VOLUME_CENTER(&iParam2, &Var23);
		if (!bParam5)
		{
			if (VDIST(Var19, Var23) >= VDIST(Var21, Var23))
			{
				bParam4 = Var19;
			}
			else
			{
				bParam4 = Var21;
			}
		}
		else
		{
			uVar25 = Param3;
			Param3 = Var21;
			if (!IS_POINT_IN_VOLUME(Var19, &iParam2))
			{
				Param3 = Var19;
			}
			bParam4 = Var23;
		}
	}
	return bVar9;
}

struct<8> Function_139(vector3 vParam0) //Position: 0x8BBC / 35772
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_140(vector3 vParam0) //Position: 0x8BDE / 35806
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x8BFC / 35836
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(float fParam0, var uParam1, int iParam2) //Position: 0x8C0F / 35855
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_222(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_222(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_222(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_222(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_222(&(Global_43791[Global_46866[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 285,436f;
			fParam0 = Vector(-1402,147f, 10,939f, 4317,528f);
			return 1;
		}
	}
	return 0;
}

var Function_143(int iParam0) //Position: 0x8E5D / 36445
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_144(int iParam0) //Position: 0x8E69 / 36457
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_145(vector3 vParam0) //Position: 0x8E7B / 36475
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x8E93 / 36499
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(&iParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0 + 24) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076))) && !FIRE_IS_ACTOR_ON_FIRE(&iParam0)) && IS_ACTOR_ALIVE(&iParam0)) && !Function_148(&Global_54076, 0, 0))
		{
			DECOR_REMOVE(&iParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iParam0));
		bVar0 = _GET_AMMO_AMOUNT(&Global_54076, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		if (Function_148(&Global_54076, 0, 0) || !IS_ACTOR_ALIVE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_29(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_147(&Global_54076, &iParam0) > 3.0f)
				{
					Function_197(&iParam2, 65536);
					Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				uVar2 = Function_116(&iParam0);
				uVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar2, "", "", "", 4, 0);
				DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_29(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_147(&Global_54076, &iParam0) > 3.0f)
			{
				Function_197(&iParam2, 65536);
				Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
		{
			uVar4 = Function_116(&iParam0);
			uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
			DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar5);
		}
		return 0;
	}
	if (!Function_148(&Global_54076, 0, 0))
	{
		if (bParam1)
		{
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 24, 10, "@GENERIC.USE", "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&iParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
			}
			uVar6 = Function_116(&iParam0);
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iParam0 + 16);
	}
	return 0;
}

float Function_147(var uParam0, int iParam1) //Position: 0x92A9 / 37545
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

bool Function_148(int iParam0, bool bParam1, bool bParam2) //Position: 0x939E / 37790
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_151(&iParam0))
	{
		return 1;
	}
	if (Function_150(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_149())
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x9462 / 37986
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_150(int iParam0) //Position: 0x9479 / 38009
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_151(int iParam0) //Position: 0x9485 / 38021
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9494 / 38036
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x951F / 38175
{
	char* cVar0[16];
	
	if (!Function_154())
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

bool Function_154() //Position: 0x955E / 38238
{
	if (Function_29(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9579 / 38265
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
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x960E / 38414
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, true);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_61(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_200(0, bParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", true);
	return;
}

void Function_157(bool bParam0) //Position: 0x96F6 / 38646
{
	var uVar0;
	var uVar1;
	var uVar5;
	var uVar6;
	var uVar9;
	var uVar11;
	int iVar12;
	var uVar13;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_44085[bParam09] + 32);
	PRINTNL();
	if (Function_28(bParam0))
	{
		if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46894[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_OBJECT_POSITION(&Global_44085[bParam09] + 8, &uVar1);
			uVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0, 2, 0);
			SET_BLIP_NAME(&uVar0, "Status_SafeZone");
			UNK_0xFF3DB575(&uVar0, 1);
			SET_BLIP_PRIORITY(&uVar0, 3);
			uVar5 = Global_43791[bParam0];
			Function_197(&uVar5, 0x8000000);
			Function_197(&uVar5, 0x10000000);
			Global_43791[bParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[bParam09] + 8, &uVar9);
			uVar6 = Function_162(&Global_44085[bParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_193(bParam0);
			iVar12 = Function_200(111, 111, 5);
			Function_161(uVar11, GET_DAY(0), GET_HOUR(false), GET_MINUTE(0), GET_SECOND(0));
			Function_160(uVar11, 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_158(iVar12);
			uVar13 = Global_43791[bParam0];
			Function_197(&uVar13, 0x1000000);
			Function_197(&uVar13, 0x10000000);
			Global_43791[bParam0] = uVar13;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x98B7 / 39095
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_159(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_159(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_159(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_159(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_159(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_159(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_159(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_159(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_159(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_159(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_159(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_159(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_159(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_159(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_159(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_159(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_159(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_159(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_159(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_159(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x9C21 / 39969
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9C45 / 40005
{
	while (&iParam4 > 60)
	{
		iParam4 = (&iParam4 - 60);
		iParam3 = &iParam3 + 1;
	}
	while (&iParam3 > 60)
	{
		iParam3 = (&iParam3 - 60);
		iParam2 = &iParam2 + 1;
	}
	while (&iParam2 > 24)
	{
		iParam2 = (&iParam2 - 24);
		iParam1 = &iParam1 + 1;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
	}
}

void Function_161(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0x9F64 / 40804
{
	switch (iParam0)
	{
		case 0x00000001:
			*(&Global_11014[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000002:
			*(&Global_11120[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000003:
			*(&Global_11146[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000004:
			*(&Global_11222[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000005:
			*(&Global_11284[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000008:
			*(&Global_11544[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000009:
			*(&Global_11646[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000B:
			*(&Global_11726[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000C:
			*(&Global_11836[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000D:
			*(&Global_11946[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000E:
			*(&Global_11988[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000F:
			*(&Global_12048[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000010:
			*(&Global_12150[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000011:
			*(&Global_11398[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000012:
			*(&Global_12392[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000013:
			*(&Global_12422[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000015:
			*(&Global_12488[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000016:
			*(&Global_12644[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000017:
			*(&Global_12714[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000018:
			*(&Global_12760[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
	}
}

var Function_162(var uParam0, bool bParam1, int iParam2) //Position: 0xA207 / 41479
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == bParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&uParam0, bParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0xA260 / 41568
{
	Function_169(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_169(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_169(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_164(&iParam0 + 384);
	return;
}

int Function_164(struct<2>[] Param0) //Position: 0xA2D4 / 41684
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		Function_167(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_167(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
	Function_165();
	return 1;
}

void Function_165() //Position: 0xA696 / 42646
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_166() //Position: 0xA6D6 / 42710
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

void Function_167(struct<13> Param0) //Position: 0xA704 / 42756
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_168() //Position: 0xA717 / 42775
{
	if (!Function_26(128))
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

var Function_169(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA759 / 42841
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_170(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_167(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_170(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA797 / 42903
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_167(&(Param0[iVar02]), 4);
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

bool Function_171() //Position: 0xA866 / 43110
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar1, "ZombiePack_foot");
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!DECOR_CHECK_EXIST(&uVar2, "GringoIsDone"))
		{
			uVar3 = ADD_BLIP_FOR_OBJECT(&uVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(&uVar3, "Chest_BlipName");
			DECOR_SET_INT(&uVar2, "ChestBlip_AsInt", &uVar3);
			SET_BLIP_PRIORITY(&uVar3, true);
			if (Global_43789 == Global_46914[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 2,3f);
			}
			else if (Global_43789 == Global_46926[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 1,5f);
			}
		}
		bVar0 = true;
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return bVar0;
}

void Function_172(var uParam0, var uParam1, struct<82> Param2) //Position: 0xA95F / 43359
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	bool bVar18;
	struct<2> Var19;
	struct<2> Var21;
	var uVar23;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &uParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(&uVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(&uVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			uVar14 = GET_OBJECTSET_FROM_OBJECT(&uVar1);
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(&uVar14) - 1))
			{
				uVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &uVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(&uVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				uVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(&uVar17));
				if (!Function_29(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					Var19 = Vector(0.0f, 0.0f, 0.0f);
					Var21 = Vector(0.0f, 0.0f, 0.0f);
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(&uVar15, &Var19);
					GET_OBJECT_ORIENTATION(&uVar15, &Var21);
					uVar23 = CREATE_GRINGO_IN_LAYOUT(&uParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", Var19, Var21);
					ADD_OBJECT_TO_OBJECTSET(&uVar23, &uVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(&uVar3);
}

var Function_173(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xAAE9 / 43753
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_174(vector3 vParam0) //Position: 0xAAFE / 43774
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < (vParam0.z - 1))
	{
		if (Function_29((&vParam0 + 8[iVar15])->f_32, 1))
		{
			if (IS_ACTOR_ALIVE(&vParam0 + 8[iVar15]))
			{
				Var2 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&vParam0 + 8[iVar15] + 8, &Var2);
				if (STREAMING_ARE_BOUNDS_LOADED(Var2, 3.0f))
				{
					if (!Function_38(&vParam0 + 8[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_44(&vParam0 + 8[iVar15] + 32, 1);
						SET_OBJECT_POSITION(&vParam0 + 8[iVar15], Var2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_44(&vParam0 + 608, 1024);
	}
	return;
}

void Function_175(struct<649> Param0) //Position: 0xABC1 / 43969
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	if (Function_176(&iVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(&iVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (&iVar0 == &Param0 + 8[iVar15])
			{
				uVar3 = &iVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(&uVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_46816[0])
		{
			if (!Function_29(&Param0 + 608, 0x40000000))
			{
				bVar5 = GET_ACTOR_ENUM(&uVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
				{
					if (Function_147(&uVar3, &Global_54076) > 3,5f)
					{
						Function_197(&Param0 + 608, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(&uVar3, 118, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						Param0.f_648 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_29(&Param0 + 608, 2))
		{
			fVar6 = Function_147(&uVar3, &Global_54076);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_29((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
			else if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else if (Function_29(&Param0 + 608, 512))
		{
			if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_147(&uVar3, &Global_54076);
			if (fVar7 < 16.0f && !Function_29((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_29((&Param0 + 8[iVar25])->f_32, 8))
			{
				Function_197(&Param0 + 8[iVar25] + 32, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_648 = fVar4;
			}
			else if (!Function_29((&Param0 + 8[iVar25])->f_32, 2))
			{
				if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
					Param0.f_640 = fVar4;
					Param0.f_648 = fVar4;
				}
			}
			else if (fVar4 - Param0.f_648) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
		}
	}
	return;
}

bool Function_176(var uParam0, bool bParam1, bool bParam2) //Position: 0xB041 / 45121
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	ITERATE_IN_SPHERE(&uVar0, Global_54078, &bParam1);
	bVar1 = false;
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2) && !bVar1)
	{
		iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
		if (IS_ACTOR_RIDING(&iVar3))
		{
			if (&bParam2)
			{
				uParam0 = &iVar3;
			}
		}
		else
		{
			uParam0 = &iVar3;
		}
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			bVar1 = true;
		}
		else
		{
			uParam0 = "";
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return bVar1;
}

void Function_177(int iParam0, int iParam1, bool bParam2) //Position: 0xB0D3 / 45267
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
	uVar0 = Function_32(iParam1);
	if (iParam1 == Global_46760[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "spawnresrict_2");
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
			{
				if (!Function_29(&iParam0 + 608, 0x2000000))
				{
					Function_44(&iParam0 + 608, 4194304);
					Function_44(&iParam0 + 608, 8388608);
					Function_44(&iParam0 + 608, 0x1000000);
					Function_44(&iParam0 + 608, 1048576);
					Function_44(&iParam0 + 608, 2097152);
					Function_197(&iParam0 + 608, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_44(&iParam0 + 608, 0x2000000);
		}
	}
	if (!Function_29(&iParam0 + 608, 2097152))
	{
		if (bParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(&iParam0 + 608, 1048576);
			Function_197(&iParam0 + 608, 2097152);
			Function_197(&iParam0 + 608, 4194304);
			Function_197(&iParam0 + 608, 8388608);
			Function_197(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	if (!Function_29(&iParam0 + 608, 1048576))
	{
		if (bParam2 <= 40.0f && bParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(&iParam0 + 608, 1048576);
			Function_197(&iParam0 + 608, 4194304);
			Function_197(&iParam0 + 608, 8388608);
			Function_197(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	iVar2 = Function_178(StackVal, Global_54078, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_29(&iParam0 + 608, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(&iParam0 + 608, 4194304);
		Function_197(&iParam0 + 608, 8388608);
		Function_197(&iParam0 + 608, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_29(&iParam0 + 608, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(&iParam0 + 608, 8388608);
		Function_197(&iParam0 + 608, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_29(&iParam0 + 608, 0x1000000))
	{
		Function_197(&iParam0 + 608, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_178(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB3DD / 46045
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_61(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_179(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_179(var uParam0, var uParam1, bool bParam2) //Position: 0xB419 / 46105
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), &Global_46715, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar0);
			if (IS_OBJECT_VALID(&uVar4))
			{
				uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
				if (IS_ACTOR_VALID(&uVar5))
				{
					if (Function_180(&uVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&uVar5))
						{
							if (&bParam2)
							{
								if (Function_38(&uVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return iVar1;
}

bool Function_180(int iParam0) //Position: 0xB4F7 / 46327
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_181(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_181(int iParam0, int iParam1) //Position: 0xB546 / 46406
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xB58B / 46475
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_193(Global_43789);
	fVar1 = Function_191(Global_43789);
	fVar2 = Function_192(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1,5f);
	fVar3 = Function_183(0,33f, Function_141(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_184(1);
	return;
}

float Function_183(int iParam0, int iParam1) //Position: 0xB5D9 / 46553
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xB5EC / 46572
{
	if (Function_29(iParam0, 1) && !Function_29(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_185(vector3 vParam0) //Position: 0xB619 / 46617
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<5> Var4;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&uVar1))
		{
			SET_MOVER_FROZEN(&uVar1, false);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&uVar1, 4);
			if (!Function_29(&vParam0 + 608, 0x4000000))
			{
				MEMORY_CLEAR_ALL(&uVar1);
				MEMORY_CONSIDER_AS(&uVar1, &Global_54076, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(&uVar1);
			iVar2 = Vector(0.0f, 0.0f, 0.0f);
			Var4 = Vector(0.0f, 0.0f, 0.0f);
			GET_OBJECT_POSITION(&vParam0 + 8[iVar05] + 8, &iVar2);
			GET_OBJECT_ORIENTATION(&vParam0 + 8[iVar05] + 8, &Var4);
			if (!&bParam1)
			{
				TASK_PRIORITY_SET(&uVar1, true);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar1, &iVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, true);
				if (!Function_29(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, false);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(&vParam0, &vParam0, 0);
	return;
}

void Function_186(int iParam0, int iParam1, int iParam2) //Position: 0xB71A / 46874
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_187(&uVar1, &iParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_187(var uParam0, var uParam1, bool bParam2) //Position: 0xB771 / 46961
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
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xB7C3 / 47043
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_27(iVar0) || Function_159(iParam0));
}

void Function_189(int iParam0) //Position: 0xB802 / 47106
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_29(&iParam0 + 608, 512))
	{
		fVar0 = Function_191(Global_43789);
		iVar1 = Function_193(Global_43789);
		if (iVar1 == 0 && &iParam0 + 632 >= 120.0f)
		{
			fVar2 = Function_192(iVar1);
			iVar3 = ((fVar0 / fVar2) * 100.0f);
			if (iVar3 <= 120.0f)
			{
				(&iParam0 + 632) = 1000.0f;
				return;
			}
			if (iVar3 == &iParam0 + 632)
			{
				fVar4 = (fVar0 % 10.0f);
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				*(&iParam0 + 632) = iVar3;
			}
		}
	}
	return;
}

void Function_190(int iParam0) //Position: 0xB8CD / 47309
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
	if (GET_BLIP_ICON(&uVar0) == 325)
	{
		REMOVE_BLIP(&uVar0);
	}
	uVar1 = DECOR_GET_INT(&iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(&uVar1))
	{
		REMOVE_BLIP(&uVar1);
	}
	DECOR_REMOVE(&iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
	{
		uVar2 = DECOR_GET_INT(&iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uVar2);
		}
		DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(&iParam0 + 24))
	{
		DESTROY_VOLUME(&iParam0 + 24);
	}
	return;
}

var Function_191(bool bParam0) //Position: 0xB9A7 / 47527
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = &Global_44085[bParam09] + 8;
	if (IS_VOLUME_VALID(&uVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(&uVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(&uVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_192(int iParam0) //Position: 0xBA06 / 47622
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_193(bool bParam0) //Position: 0xBB49 / 47945
{
	if (bParam0 == Global_46760[0])
	{
		return 1;
	}
	if (bParam0 == Global_46760[2])
	{
		return 2;
	}
	if (bParam0 == Global_46760[1])
	{
		return 3;
	}
	if (bParam0 == Global_46796[1])
	{
		return 4;
	}
	if (bParam0 == Global_46796[3])
	{
		return 5;
	}
	if (bParam0 == Global_46816[0])
	{
		return 8;
	}
	if (bParam0 == Global_46816[1])
	{
		return 9;
	}
	if (bParam0 == Global_46838[0])
	{
		return 11;
	}
	if (bParam0 == Global_46850[0])
	{
		return 12;
	}
	if (bParam0 == Global_46850[1])
	{
		return 13;
	}
	if (bParam0 == Global_46850[2])
	{
		return 14;
	}
	if (bParam0 == Global_46866[0])
	{
		return 15;
	}
	if (bParam0 == Global_46866[1])
	{
		return 16;
	}
	if (bParam0 == Global_46866[2])
	{
		return 17;
	}
	if (bParam0 == Global_46894[2])
	{
		return 25;
	}
	if (bParam0 == Global_46894[3])
	{
		return 18;
	}
	if (bParam0 == Global_46894[0])
	{
		return 19;
	}
	if (bParam0 == Global_46914[0])
	{
		return 21;
	}
	if (bParam0 == Global_46926[2])
	{
		return 22;
	}
	if (bParam0 == Global_46926[1])
	{
		return 23;
	}
	if (bParam0 == Global_46926[0])
	{
		return 24;
	}
	if (bParam0 == Global_46838[1])
	{
		return 26;
	}
	if (bParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

void Function_194() //Position: 0xBCCF / 48335
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar0, "ZombiePack_foot");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
		if (IS_BLIP_VALID(&uVar2))
		{
			REMOVE_BLIP(&uVar2);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

var Function_195(bool bParam0, int iParam1) //Position: 0xBD3B / 48443
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "player_sleep");
		if (&iParam1 == Global_46736[2])
		{
			ITERATE_IN_SPHERE(StackVal, &uVar1, Vector(123,033f, 72,791f, 2669,954f), 10.0f);
		}
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		if (IS_OBJECT_VALID(&uVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(&uVar2);
			if (IS_GRINGO_VALID(&bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(&bVar3, bParam0);
				uVar4 = GET_OBJECT_FROM_GRINGO(&bVar3);
				uVar5 = GET_BLIP_ON_OBJECT(&uVar4);
				if (IS_BLIP_VALID(&uVar5))
				{
					REMOVE_BLIP(&uVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", true);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, true);
					if (&iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(&uVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(&uVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return iVar0;
}

void Function_196(bool bParam0, bool bParam1) //Position: 0xBE7A / 48762
{
	DECOR_SET_FLOAT(&Global_44085[bParam09] + 8, "ZombieScore", bParam1);
	return;
}

void Function_197(var uParam0, bool bParam1) //Position: 0xBE9E / 48798
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xBEAF / 48815
{
	int iVar0;
	
	iVar0 = Function_133(iParam0);
	if (!Function_199(iVar0))
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

bool Function_199(int iParam0) //Position: 0xBEED / 48877
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBF04 / 48900
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_201(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(bParam0, bParam1, bParam2, 4294967295);
}

int Function_201(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xBF62 / 48994
{
	var uVar0;
	
	if (!Function_203(bParam2))
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
	uVar0 = Function_204(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_202(uVar0);
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

var Function_202(int iParam0) //Position: 0xC0C8 / 49352
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

bool Function_203(int iParam0) //Position: 0xC106 / 49414
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xC11B / 49435
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xC13B / 49467
{
	iParam0 = iParam0;
	if (!iLocal_930 && !IS_PS3())
	{
		if (Function_206(&uLocal_933, 1.0f))
		{
			SET_BRIDGE_STIFFNESS(&(uLocal_945[0]), 0,2f);
			SET_BRIDGE_STIFFNESS(&(uLocal_945[1]), 0,2f);
			SET_BRIDGE_STIFFNESS(&(uLocal_945[2]), 0,2f);
			iLocal_930 = 1;
		}
	}
	return;
}

bool Function_206(var uParam0, float fParam1) //Position: 0xC18C / 49548
{
	if (Function_209(&uParam0))
	{
		if (Function_207(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_207(vector3 vParam0) //Position: 0xC1AA / 49578
{
	if (Function_209(&vParam0))
	{
		if (Function_208(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_208(int iParam0) //Position: 0xC277 / 49783
{
	return Function_29(iParam0, 2);
}

bool Function_209(int iParam0) //Position: 0xC285 / 49797
{
	return Function_29(iParam0, 1);
}

void Function_210(char* cParam0) //Position: 0xC293 / 49811
{
	if (!Function_26(128))
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

void Function_211(int iParam0, bool bParam1) //Position: 0xC2D3 / 49875
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
		Function_71(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_212(int iParam0) //Position: 0xC3C3 / 50115
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_213(bool bParam0) //Position: 0xC3D6 / 50134
{
	Function_214(0, 0.0f, 4, &iLocal_178, &Global_44085[bParam09] + 8, 1);
	return;
}

void Function_214(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0xC3F0 / 50160
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
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
	Global_43580.f_12 = uParam0;
	*(&Global_43580 + 24) = &uParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = uParam1;
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
		Function_217();
	}
	if (&bParam5)
	{
		Function_215(1048576);
	}
}

void Function_215(int iParam0) //Position: 0xC4FE / 50430
{
	Function_216(&Global_43580, iParam0);
	return;
}

void Function_216(var uParam0, var uParam1) //Position: 0xC50C / 50444
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_217() //Position: 0xC52B / 50475
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_215(16384);
	}
	return;
}

void Function_218(var uParam0) //Position: 0xC547 / 50503
{
	uParam0 = uParam0;
	return;
}

void Function_219() //Position: 0xC551 / 50513
{
	return;
}

void Function_220(int iParam0) //Position: 0xC557 / 50519
{
	iParam0 = iParam0;
	return;
}

void Function_221(var uParam0, int iParam1) //Position: 0xC561 / 50529
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_222(int iParam0, int iParam1) //Position: 0xC57B / 50555
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_223() //Position: 0xC598 / 50584
{
	return;
}

void Function_224() //Position: 0xC59E / 50590
{
	return;
}

void Function_225(int iParam0) //Position: 0xC5A4 / 50596
{
	iParam0 = iParam0;
	return;
}

void Function_226(int iParam0, bool bParam1, int iParam2) //Position: 0xC5AE / 50606
{
	if ((!Function_9(bParam1) || Global_6623) || Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	if (bParam1 == Global_46760[0])
	{
		Function_227(&iParam0, bParam1, &Global_11014, &iParam2);
	}
	else if (bParam1 == Global_46760[1])
	{
		Function_227(&iParam0, bParam1, &Global_11146, &iParam2);
	}
	else if (bParam1 == Global_46760[2])
	{
		Function_227(&iParam0, bParam1, &Global_11120, &iParam2);
	}
	else if (bParam1 == Global_46796[1])
	{
		Function_227(&iParam0, bParam1, &Global_11222, &iParam2);
	}
	else if (bParam1 == Global_46796[3])
	{
		Function_227(&iParam0, bParam1, &Global_11284, &iParam2);
	}
	else if (bParam1 == Global_46796[4])
	{
		Function_227(&iParam0, bParam1, &Global_11492, &iParam2);
	}
	else if (bParam1 == Global_46816[0])
	{
		Function_227(&iParam0, bParam1, &Global_11544, &iParam2);
	}
	else if (bParam1 == Global_46816[1])
	{
		Function_227(&iParam0, bParam1, &Global_11646, &iParam2);
	}
	else if (bParam1 == Global_46816[2])
	{
		Function_227(&iParam0, bParam1, &Global_11704, &iParam2);
	}
	else if (bParam1 == Global_46838[1])
	{
		Function_227(&iParam0, bParam1, &Global_11752, &iParam2);
	}
	else if (bParam1 == Global_46838[0])
	{
		Function_227(&iParam0, bParam1, &Global_11726, &iParam2);
	}
	else if (bParam1 == Global_46850[0])
	{
		Function_227(&iParam0, bParam1, &Global_11836, &iParam2);
	}
	else if (bParam1 == Global_46850[1])
	{
		Function_227(&iParam0, bParam1, &Global_11946, &iParam2);
	}
	else if (bParam1 == Global_46850[2])
	{
		Function_227(&iParam0, bParam1, &Global_11988, &iParam2);
	}
	else if (bParam1 == Global_46866[0])
	{
		Function_227(&iParam0, bParam1, &Global_12048, &iParam2);
	}
	else if (bParam1 == Global_46866[1])
	{
		Function_227(&iParam0, bParam1, &Global_12150, &iParam2);
	}
	else if (bParam1 == Global_46866[2])
	{
		Function_227(&iParam0, bParam1, &Global_11398, &iParam2);
	}
	else if (bParam1 == Global_46894[2])
	{
		Function_227(&iParam0, bParam1, &Global_12284, &iParam2);
	}
	else if (bParam1 == Global_46894[1])
	{
		Function_227(&iParam0, bParam1, &Global_12342, &iParam2);
	}
	else if (bParam1 == Global_46894[0])
	{
		Function_227(&iParam0, bParam1, &Global_12422, &iParam2);
	}
	else if (bParam1 == Global_46894[3])
	{
		Function_227(&iParam0, bParam1, &Global_12392, &iParam2);
	}
	else if (bParam1 == Global_46926[0])
	{
		Function_227(&iParam0, bParam1, &Global_12760, &iParam2);
	}
	else if (bParam1 == Global_46926[1])
	{
		Function_227(&iParam0, bParam1, &Global_12714, &iParam2);
	}
	else if (bParam1 == Global_46926[2])
	{
		Function_227(&iParam0, bParam1, &Global_12644, &iParam2);
	}
	else if (bParam1 == Global_46914[0])
	{
		Function_227(&iParam0, bParam1, &Global_12488, &iParam2);
	}
	else if (bParam1 == Global_46914[1])
	{
		Function_227(&iParam0, bParam1, &Global_12482, &iParam2);
	}
	Function_197(&iParam0 + 608, 64);
	return;
}

void Function_227(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0xC8B2 / 51378
{
	struct<8> Var0;
	var uVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<8> Var28;
	
	Function_44(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_236("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_235(&uParam3, iParam1);
	iVar18 = Function_92(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_27(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= Param2)
		{
			if (!Function_234(&(Param2[bVar222]), 4))
			{
				*(&iParam0 + 8[bVar225] + 8) = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, &uVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(&iParam0 + 8[bVar225] + 8, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(&iParam0 + 8[bVar225] + 8, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					Var24 = Vector(0.0f, 0.0f, 0.0f);
					Var26 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(&iParam0 + 8[bVar225] + 8, &Var24);
					GET_OBJECT_ORIENTATION(&iParam0 + 8[bVar225] + 8, &Var26);
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_236("nSurvivor_") };
					*(&iParam0 + 8[bVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[bVar22], Var24, Var26);
					Function_229(bVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_197(&iParam0 + 8[bVar225] + 32, 1);
						Function_197(&iParam0 + 608, 1024);
					}
					Function_197(&iParam0 + 608, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_228(&(Param2[bVar222]), 4);
				}
			}
		}
		bVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_186(&iParam0, &iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_228(var uParam0, int iParam1) //Position: 0xCABE / 51902
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_229(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0xCACF / 51919
{
	int iVar0;
	var uVar1;
	bool bVar2;
	float fVar3;
	var uVar4;
	struct<5> Var6;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	var uVar21;
	var uVar22;
	
	iVar0 = &iParam1 + 8[iParam05];
	uVar1 = &iParam1 + 8[iParam05] + 8;
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SQUAD_JOIN(&iVar0, &iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iVar0, 170.0f);
	bVar2 = (GET_ACTOR_VISION_MAX_RANGE(&iVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, bVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(&iVar0);
	SET_ACTOR_MAX_HEALTH(&iVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(&iVar0, 0);
	uVar4 = Vector(0.0f, 0.0f, 0.0f);
	Var6 = Vector(0.0f, 0.0f, 0.0f);
	GET_OBJECT_POSITION(&iParam1 + 8[iParam05] + 8, &uVar4);
	GET_OBJECT_ORIENTATION(&iParam1 + 8[iParam05] + 8, &Var6);
	bVar8 = true;
	if (DECOR_CHECK_EXIST(&uVar1, "GiveWeapon"))
	{
		bVar9 = DECOR_GET_INT(&uVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(&iVar0, bVar9, false, 1, 1);
		iVar10 = UNK_0xDB679ED9(bVar9);
		if (iVar10 == 40)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 7);
		}
		else if (iVar10 == 39)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 6);
		}
		else if (iVar10 == 41)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 8);
		}
		else if (iVar10 == 42)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 9);
		}
		else if (iVar10 == 43)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 10);
		}
		else if (iVar10 == 44)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(&iVar0, 41, false, 1, 1);
		bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
		DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
		DECOR_SET_INT(&iVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&iVar0, false);
	AI_BEHAVIOR_SET_ALLOW(&iVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iVar0, 1);
	Function_233(&iVar0, 0);
	Function_232(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, false);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_231(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_231(&iVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 61, RAND_FLOAT_RANGE(0,1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(&iVar0, (RAND_INT_RANGE(false, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(&iVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(&iVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(&uVar1, "nShoot_Vol"))
	{
		bVar12 = DECOR_GET_INT(&uVar1, "nShoot_Vol");
		strcpy(&cVar13, "survVol_", 32);
		stradd(&cVar13, INT_TO_STRING(bVar12), 32);
		uVar21 = FIND_VOLUME_IN_LAYOUT(&uParam2, &cVar13);
		if (IS_VOLUME_VALID(&uVar21))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &uVar21, 4, true);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_OVERRIDE_SET_POSTURE(&iVar0, true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "Gringo") || !bParam3)
	{
		uVar22 = LOCATE_GRINGO_OF_TYPE("", &uVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(&uVar22))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_230(&uVar22, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(&iVar0, GET_OBJECT_FROM_GRINGO(&uVar22), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(&iVar0, 2);
					TASK_USE_GRINGO(&iVar0, &uVar22, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse", true);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, 2);
			TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	Function_231(&iVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,75f);
	MEMORY_CONSIDER_AS(&iVar0, &Global_54076, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, &iVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(&uVar1, "Core"))
		{
			*(&iParam1 + 336) = &iVar0;
		}
		else if (Global_21684[&iParam1 + 6247].f_32 < 0.0f)
		{
			Global_21684[&iParam1 + 6247].f_32 = (Global_21684[&iParam1 + 6247].f_32 - 1.0f);
			DECOR_SET_BOOL(&iVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	}
}

var Function_230(var uParam0, int iParam1) //Position: 0xD1B6 / 53686
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_231(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xD1C5 / 53701
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

void Function_232(var uParam0, bool bParam1) //Position: 0xD216 / 53782
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[7]));
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[5]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[7]), 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[5]), 0);
	}
	return;
}

void Function_233(var uParam0, bool bParam1) //Position: 0xD265 / 53861
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

bool Function_234(var uParam0, int iParam1) //Position: 0xD299 / 53913
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_235(bool bParam0, int iParam1) //Position: 0xD2B6 / 53942
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar8 = GET_OBJECT_NAME(&iVar1);
		if (Function_27(iParam1))
		{
			if (STRING_CONTAINS_STRING(&uVar8, "_def"))
			{
				uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(&uVar8, "_safe"))
		{
			uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
			iVar2++;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return &(uVar3[(RAND_INT_RANGE(false, 100000) % iVar2)]);
}

struct<32> Function_236(char* cParam0) //Position: 0xD36C / 54124
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_237("0", &cVar8, ""), 4);
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

struct<32> Function_237(char* cParam0) //Position: 0xD3D8 / 54232
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_238() //Position: 0xD3FA / 54266
{
	uLocal_931 = CREATE_LAYOUT("Pik_bridge_layout");
	if (IS_LAYOUTREF_VALID(&uLocal_931))
	{
		uLocal_937[0] = CREATE_PROP_IN_LAYOUT(StackVal, &uLocal_931, "Pikes_RopeBridge1", "$/fragments/p_gen_testBridge01x", Local_1011, Vector(0.0f, 17.0f, 0.0f), 1);
		if (IS_OBJECT_VALID(&(uLocal_937[0])))
		{
			uLocal_945[0] = GET_PHYSINST_FROM_OBJECT(&(uLocal_937[0]));
			if (IS_PS3())
			{
				SET_PHYSINST_FROZEN(&(uLocal_945[0]), true);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uLocal_937[0]), 0);
			}
			else
			{
				SET_PHYSINST_FROZEN(&(uLocal_945[0]), false);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uLocal_937[0]), 0);
			}
			uLocal_967[0] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[0]), "boardJoint09", &uLocal_999, &Local_1020, 0.0f);
			uLocal_967[1] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[0]), "boardJoint09", &uLocal_1002, &Local_1023, 0.0f);
			uLocal_967[2] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[0]), "boardJoint18", &uLocal_1005, &Local_1026, 0.0f);
			uLocal_967[3] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[0]), "boardJoint18", &uLocal_1008, &Local_1029, 0.0f);
			SET_PROP_AI_OBSTACLE_ENABLED(&(uLocal_937[0]), 0);
			if (!IS_PS3())
			{
				SET_BRIDGE_STIFFNESS(&(uLocal_945[0]), 0,9f);
				SET_SLEEP_TOLERANCE(&(uLocal_945[0]), 0.0f);
			}
			uLocal_953[0] = CREATE_ROPE_FOR_BRIDGE_LEFT(&uLocal_931, "nRopeName1", &(uLocal_945[0]));
			uLocal_953[1] = CREATE_ROPE_FOR_BRIDGE_RIGHT(&uLocal_931, "nRopeName2", &(uLocal_945[0]));
		}
		uLocal_937[1] = CREATE_PROP_IN_LAYOUT(StackVal, &uLocal_931, "Pikes_RopeBridge2", "$/fragments/p_gen_testBridge01x", Local_1014, Vector(-3,683f, -115,073f, 0.0f), 1);
		if (IS_OBJECT_VALID(&(uLocal_937[1])))
		{
			uLocal_945[1] = GET_PHYSINST_FROM_OBJECT(&(uLocal_937[1]));
			if (IS_PS3())
			{
				SET_PHYSINST_FROZEN(&(uLocal_945[1]), true);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uLocal_937[1]), 0);
			}
			else
			{
				SET_PHYSINST_FROZEN(&(uLocal_945[1]), false);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uLocal_937[1]), 0);
			}
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1020, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[1]), Local_993, &uLocal_996);
			uLocal_967[4] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[1]), "boardJoint09", &uLocal_999, &uLocal_996, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1023, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[1]), Local_993, &uLocal_996);
			uLocal_967[5] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[1]), "boardJoint09", &uLocal_1002, &uLocal_996, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1026, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[1]), Local_993, &uLocal_996);
			uLocal_967[6] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[1]), "boardJoint18", &uLocal_1005, &uLocal_996, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1029, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[1]), Local_993, &uLocal_996);
			uLocal_967[7] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[1]), "boardJoint18", &uLocal_1008, &uLocal_996, 0.0f);
			SET_PROP_AI_OBSTACLE_ENABLED(&(uLocal_937[1]), 0);
			if (!IS_PS3())
			{
				SET_BRIDGE_STIFFNESS(&(uLocal_945[1]), 0,9f);
				SET_SLEEP_TOLERANCE(&(uLocal_945[1]), 0.0f);
			}
			uLocal_953[2] = CREATE_ROPE_FOR_BRIDGE_LEFT(&uLocal_931, "nRopeName3", &(uLocal_945[1]));
			uLocal_953[3] = CREATE_ROPE_FOR_BRIDGE_RIGHT(&uLocal_931, "nRopeName4", &(uLocal_945[1]));
		}
		uLocal_937[2] = CREATE_PROP_IN_LAYOUT(StackVal, &uLocal_931, "Pikes_RopeBridge3", "$/fragments/p_gen_testBridge01x", Local_1017, Vector(-0,043f, -13,408f, 0.0f), 1);
		if (IS_OBJECT_VALID(&(uLocal_937[2])))
		{
			uLocal_945[2] = GET_PHYSINST_FROM_OBJECT(&(uLocal_937[2]));
			if (IS_PS3())
			{
				SET_PHYSINST_FROZEN(&(uLocal_945[2]), true);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uLocal_937[2]), 0);
			}
			else
			{
				SET_PHYSINST_FROZEN(&(uLocal_945[2]), false);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uLocal_937[2]), 0);
			}
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1020, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[2]), Local_993, &uLocal_996);
			uLocal_967[8] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[2]), "boardJoint09", &uLocal_999, &uLocal_996, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1023, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[2]), Local_993, &uLocal_996);
			uLocal_967[9] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[2]), "boardJoint09", &uLocal_1002, &uLocal_996, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1026, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[2]), Local_993, &uLocal_996);
			uLocal_967[10] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[2]), "boardJoint18", &uLocal_1005, &uLocal_996, 0.0f);
			GET_OBJECT_RELATIVE_OFFSET(&(uLocal_937[0]), Local_1029, &Local_993);
			GET_OBJECT_RELATIVE_POSITION(&(uLocal_937[2]), Local_993, &uLocal_996);
			uLocal_967[11] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(&(uLocal_945[2]), "boardJoint18", &uLocal_1008, &uLocal_996, 0.0f);
			SET_PROP_AI_OBSTACLE_ENABLED(&(uLocal_937[2]), 0);
			if (!IS_PS3())
			{
				SET_BRIDGE_STIFFNESS(&(uLocal_945[2]), 0,9f);
				SET_SLEEP_TOLERANCE(&(uLocal_945[2]), 0.0f);
			}
			uLocal_953[4] = CREATE_ROPE_FOR_BRIDGE_LEFT(&uLocal_931, "nRopeName5", &(uLocal_945[2]));
			uLocal_953[5] = CREATE_ROPE_FOR_BRIDGE_RIGHT(&uLocal_931, "nRopeName6", &(uLocal_945[2]));
		}
		Function_239(&uLocal_933);
	}
	return;
}

void Function_239(int iParam0) //Position: 0xDA83 / 55939
{
	Function_240(&iParam0, 0.0f);
	return;
}

void Function_240(vector3 vParam0) //Position: 0xDA90 / 55952
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_197(&vParam0, 1);
	Function_44(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_241(int iParam0) //Position: 0xDAB5 / 55989
{
	if (Function_29(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_164(&iParam0 + 384);
}

int Function_242(int iParam0) //Position: 0xDAD8 / 56024
{
	if (!Function_9(iParam0))
	{
		return 1;
	}
	return Function_222(&(Global_43791[iParam0]), 4);
}

int Function_243() //Position: 0xDAF4 / 56052
{
	return Function_164(&iLocal_924);
}

void Function_244(bool bParam0) //Position: 0xDB00 / 56064
{
	Function_245(&uLocal_906, &cLocal_7, "placement03", 1, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	Function_245(&uLocal_906, &cLocal_7, "placement03", 2, &Global_44085[bParam09] + 32, 1, 0, 0, 0);
	return;
}

var Function_245(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0xDB52 / 56146
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_246(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, &cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_48(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), 1);
	}
	Function_48(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_48(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_48(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_246(struct<4>[] Param0) //Position: 0xDC55 / 56405
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (!IS_DOOR_VALID(&(Param0[iVar04])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_247() //Position: 0xDC86 / 56454
{
	Function_248(&uLocal_9, &uLocal_898, 4, &iLocal_530 + 184, 4294967295, 4);
	return;
}

void Function_248(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0xDC9D / 56477
{
	if (uParam0 >= (vParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	uParam4 = uParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &uParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_249(struct<5> Param0) //Position: 0xDD8A / 56714
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xDD9B / 56731
{
	var uVar0;
	int iVar1;
	
	if (Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "MoveRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_251(int iParam0, bool bParam1, bool bParam2) //Position: 0xDE11 / 56849
{
	var uVar0;
	int iVar1;
	
	if (Function_29(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "SpawnRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	if (!Function_27(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[bParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam29] + 8);
		}
	}
	return;
}

var Function_252() //Position: 0xDEAF / 57007
{
	return &iLocal_178;
}

void Function_253(int iParam0) //Position: 0xDEB8 / 57016
{
	cLocal_7 = Function_254(&iLocal_178, "pikesbasin", iParam0);
	return;
}

int Function_254(int iParam0, var uParam1, int iParam2) //Position: 0xDED6 / 57046
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_255() //Position: 0xDEF9 / 57081
{
	return Function_256();
}

int Function_256() //Position: 0xDF02 / 57090
{
	var uVar0;
	
	Function_257(3, 3);
	uVar0 = &uVar0;
	iLocal_530 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_530))
	{
		iLocal_530 = CREATE_LAYOUT("PikesBasin_layout");
	}
	*(&iLocal_530 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_mainCamp", 4,203895E-45f, Vector(-1184.0f, 71,15549f, 2368.0f), Vector(0.0f, 20.0f, 0.0f), Vector(61,2633f, 7,055838f, 61,2633f));
	*(&iLocal_530 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_frontCamp", 2,802597E-45f, Vector(-1492f, 77,30194f, 2284.0f), Vector(0.0f, -37,00174f, 0.0f), Vector(27,16722f, 9,528339f, 49,98577f));
	*(&iLocal_530 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_rearCamp", 2,802597E-45f, Vector(-1241,257f, 75,29413f, 2524.0f), Vector(0.0f, -52,11494f, 0.0f), Vector(21,11902f, 10,19565f, 24,55204f));
	*(&iLocal_530 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_frontEntrance", 2,802597E-45f, Vector(-1570,658f, 54,21176f, 2445,341f), Vector(0.0f, -24,31298f, 0.0f), Vector(126,147f, 50,54607f, 32,83506f));
	*(&iLocal_530 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_sideEntrance", 2,802597E-45f, Vector(-1417,649f, 75,29407f, 2216.0f), Vector(0.0f, -25,64609f, 0.0f), Vector(92,22437f, 22,64749f, 59,08257f));
	*(&iLocal_530 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_rearEntrance", 2,802597E-45f, Vector(-1248f, 76,17362f, 2200,42f), Vector(0.0f, 0.0f, 0.0f), Vector(147,181f, 40,22329f, 74,5377f));
	*(&iLocal_530 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "npikv_cows", 4,203895E-45f, Vector(-1160.0f, 76,90833f, 2364.0f), Vector(0.0f, 25,87671f, 0.0f), Vector(10,6484f, 9,548534f, 22,79478f));
	*(&iLocal_530 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd1", 4,203895E-45f, Vector(-1265,924f, 73,36777f, 2374,241f), Vector(0.0f, 20.0f, 0.0f), Vector(11,28927f, 2,855856f, 13,91433f));
	*(&iLocal_530 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd2S", 4,203895E-45f, Vector(-1268f, 70,62715f, 2511,641f), Vector(0.0f, 20.0f, 0.0f), Vector(12,27347f, 5,03131f, 9,814897f));
	*(&iLocal_530 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd3S", 4,203895E-45f, Vector(-1318,041f, 73,24526f, 2464.0f), Vector(0.0f, 20.0f, 0.0f), Vector(8,607511f, 4,165802f, 8,607511f));
	*(&iLocal_530 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd4S", 4,203895E-45f, Vector(-1410,058f, 69,50085f, 2465,489f), Vector(0.0f, 20.0f, 0.0f), Vector(12,0182f, 4,372542f, 12,0182f));
	*(&iLocal_530 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd5S", 4,203895E-45f, Vector(-1636.0f, 54,85595f, 2404.0f), Vector(0.0f, 20.0f, 0.0f), Vector(10,92976f, 5,245457f, 10,92976f));
	*(&iLocal_530 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd2W", 4,203895E-45f, Vector(-1304,484f, 75,64933f, 2296,606f), Vector(0.0f, 20.0f, 0.0f), Vector(11,79411f, 2,40899f, 11,79411f));
	*(&iLocal_530 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd3W", 4,203895E-45f, Vector(-1275,885f, 81,60573f, 2210,959f), Vector(0.0f, 20.0f, 0.0f), Vector(12,31625f, 4,221325f, 12,31625f));
	*(&iLocal_530 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd4W", 4,203895E-45f, Vector(-1263,512f, 81,56133f, 2130,4f), Vector(0.0f, 20.0f, 0.0f), Vector(13,93741f, 3,112746f, 13,93741f));
	*(&iLocal_530 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_herd5W", 4,203895E-45f, Vector(-1188.0f, 100,8656f, 2108.0f), Vector(0.0f, 20.0f, 0.0f), Vector(12,09849f, 3,426718f, 12,82152f));
	*(&iLocal_530 + 184) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_530, "pikv_region_set");
	*(&iLocal_530 + 136[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_regionPt1", 4,203895E-45f, Vector(-1182,797f, 105,4117f, 2383,503f), Vector(0.0f, 4,525908f, 0.0f), Vector(181,1545f, 42,2145f, 155,4394f));
	ADD_TO_VOLUME_SET(&iLocal_530 + 184, &iLocal_530 + 136[0]);
	*(&iLocal_530 + 136[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_regionPt2", 4,203895E-45f, Vector(-1336f, 99,38818f, 2388f), Vector(0.0f, 28,38053f, 0.0f), Vector(136,5411f, 45,0608f, 242,5775f));
	ADD_TO_VOLUME_SET(&iLocal_530 + 184, &iLocal_530 + 136[1]);
	*(&iLocal_530 + 136[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_regionPt3", 4,203895E-45f, Vector(-1467,26f, 107,4196f, 2289,159f), Vector(0.0f, 2,208116f, 0.0f), Vector(89,98856f, 43,74128f, 130,7533f));
	ADD_TO_VOLUME_SET(&iLocal_530 + 184, &iLocal_530 + 136[2]);
	*(&iLocal_530 + 136[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_regionPt4", 4,203895E-45f, Vector(-1446,288f, 98,41412f, 2432.0f), Vector(0.0f, -0,662532f, 0.0f), Vector(176,8189f, 50,68403f, 135,3661f));
	ADD_TO_VOLUME_SET(&iLocal_530 + 184, &iLocal_530 + 136[3]);
	*(&iLocal_530 + 136[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_regionPt5", 4,203895E-45f, Vector(-1255,571f, 96,37646f, 2195,486f), Vector(0.0f, -19,92404f, 0.0f), Vector(112,7595f, 38,20158f, 127,4607f));
	ADD_TO_VOLUME_SET(&iLocal_530 + 184, &iLocal_530 + 136[4]);
	*(&iLocal_530 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_sniperVol1", 2,802597E-45f, Vector(-1431,687f, 68,26666f, 2337,229f), Vector(0.0f, 0.0f, 0.0f), Vector(32,56687f, 32,56687f, 32,56687f));
	*(&iLocal_530 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_sniperVol2", 2,802597E-45f, Vector(-1334,333f, 72,19832f, 2438,873f), Vector(0.0f, 0.0f, 0.0f), Vector(24,7137f, 24,7137f, 24,7137f));
	*(&iLocal_530 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_sniperVol4", 2,802597E-45f, Vector(-1266,286f, 71,27841f, 2370,665f), Vector(0.0f, 0.0f, 0.0f), Vector(29,27202f, 29,27202f, 29,27202f));
	*(&iLocal_530 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_sniperVol6", 2,802597E-45f, Vector(-1272.0f, 80,31372f, 2232.0f), Vector(0.0f, 0.0f, 0.0f), Vector(21,62363f, 21,62363f, 21,62363f));
	*(&iLocal_530 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_birdVol", 2,802597E-45f, Vector(-1366,694f, 98,38428f, 2321,545f), Vector(0.0f, 0.0f, 0.0f), Vector(554,1157f, 129,9182f, 506,1577f));
	*(&iLocal_530 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pik_null", 2,802597E-45f, Vector(-1377,36f, 80,7264f, 2325,321f), Vector(0.0f, 0.0f, 0.0f), Vector(490,557f, 25,34851f, 466,9521f));
	*(&iLocal_530 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "v_HerdStayInVolume", 2,802597E-45f, Vector(-1165,223f, 76,64006f, 2358,879f), Vector(0.0f, 28,2909f, 0.0f), Vector(12,31165f, 12,31165f, 12,31165f));
	*(&iLocal_530 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_530, "pikv_zombies", 4,203895E-45f, Vector(-1303,629f, -19,74027f, 2323,035f), Vector(0.0f, 20.0f, 0.0f), Vector(224,897f, 85,54479f, 224,897f));
	*(&iLocal_530 + 256) = Vector(-1164.0f, 76,39863f, 2362,823f);
	*(&iLocal_530 + 256 + 12) = Vector(0.0f, 178,5656f, 0.0f);
	*(&iLocal_530 + 280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_cattle01", Vector(-1164.0f, 76,39863f, 2362,823f), Vector(0.0f, 178,5656f, 0.0f));
	*(&iLocal_530 + 288) = Vector(-1164.0f, 77,30194f, 2356.0f);
	*(&iLocal_530 + 288 + 12) = Vector(0.0f, -44,54999f, 0.0f);
	*(&iLocal_530 + 312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_cattle02", Vector(-1164.0f, 77,30194f, 2356.0f), Vector(0.0f, -44,54999f, 0.0f));
	*(&iLocal_530 + 320) = Vector(-1169,238f, 76,29799f, 2360f);
	*(&iLocal_530 + 320 + 12) = Vector(0.0f, 175,6531f, 0.0f);
	*(&iLocal_530 + 344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_cattle03", Vector(-1169,238f, 76,29799f, 2360f), Vector(0.0f, 175,6531f, 0.0f));
	*(&iLocal_530 + 352) = Vector(-1168.0f, 76,29803f, 2356.0f);
	*(&iLocal_530 + 352 + 12) = Vector(0.0f, 102,0492f, 0.0f);
	*(&iLocal_530 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_cattle04", Vector(-1168.0f, 76,29803f, 2356.0f), Vector(0.0f, 102,0492f, 0.0f));
	*(&iLocal_530 + 384) = Vector(-1160,564f, 77,20857f, 2360f);
	*(&iLocal_530 + 384 + 12) = Vector(0.0f, -75,61409f, 0.0f);
	*(&iLocal_530 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_cattle05", Vector(-1160,564f, 77,20857f, 2360f), Vector(0.0f, -75,61409f, 0.0f));
	*(&iLocal_530 + 416) = Vector(-1470,589f, 72,28235f, 2449,371f);
	*(&iLocal_530 + 416 + 12) = Vector(0.0f, 117,6616f, 0.0f);
	*(&iLocal_530 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_frontSniperspawn1", Vector(-1470,589f, 72,28235f, 2449,371f), Vector(0.0f, 117,6616f, 0.0f));
	*(&iLocal_530 + 448) = Vector(-1440.0f, 73,28625f, 2432f);
	*(&iLocal_530 + 448 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_frontSniperspawn2", Vector(-1440.0f, 73,28625f, 2432f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 480) = Vector(-1244.0f, 75,29413f, 2524.0f);
	*(&iLocal_530 + 480 + 12) = Vector(0.0f, 102,8329f, 0.0f);
	*(&iLocal_530 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_rearCamp", Vector(-1244.0f, 75,29413f, 2524.0f), Vector(0.0f, 102,8329f, 0.0f));
	*(&iLocal_530 + 512) = Vector(-1204.0f, 75,29407f, 2360f);
	*(&iLocal_530 + 512 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_mainCamp1", Vector(-1204.0f, 75,29407f, 2360f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 544) = Vector(-1196f, 75,29413f, 2380.0f);
	*(&iLocal_530 + 544 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_mainCamp2", Vector(-1196f, 75,29413f, 2380.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 576) = Vector(-1492f, 77,30194f, 2280.0f);
	*(&iLocal_530 + 576 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_frontCamp", Vector(-1492f, 77,30194f, 2280.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 608) = Vector(-1380f, 96,64539f, 2344.0f);
	*(&iLocal_530 + 608 + 12) = Vector(0.0f, 101,6435f, 0.0f);
	*(&iLocal_530 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn1", Vector(-1380f, 96,64539f, 2344.0f), Vector(0.0f, 101,6435f, 0.0f));
	*(&iLocal_530 + 640) = Vector(-1324.0f, 85,06384f, 2428.0f);
	*(&iLocal_530 + 640 + 12) = Vector(0.0f, 118,3112f, 0.0f);
	*(&iLocal_530 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn2", Vector(-1324.0f, 85,06384f, 2428.0f), Vector(0.0f, 118,3112f, 0.0f));
	*(&iLocal_530 + 672) = Vector(-1302,267f, 81,31763f, 2474,01f);
	*(&iLocal_530 + 672 + 12) = Vector(0.0f, 99,85857f, 0.0f);
	*(&iLocal_530 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn3", Vector(-1302,267f, 81,31763f, 2474,01f), Vector(0.0f, 99,85857f, 0.0f));
	*(&iLocal_530 + 704) = Vector(-1282,357f, 88,5537f, 2347,931f);
	*(&iLocal_530 + 704 + 12) = Vector(0.0f, 91,82206f, 0.0f);
	*(&iLocal_530 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn4", Vector(-1282,357f, 88,5537f, 2347,931f), Vector(0.0f, 91,82206f, 0.0f));
	*(&iLocal_530 + 736) = Vector(-1252,428f, 83,77627f, 2412,293f);
	*(&iLocal_530 + 736 + 12) = Vector(0.0f, 119,4369f, 0.0f);
	*(&iLocal_530 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn5", Vector(-1252,428f, 83,77627f, 2412,293f), Vector(0.0f, 119,4369f, 0.0f));
	*(&iLocal_530 + 768) = Vector(-1282,4f, 86,33722f, 2240,858f);
	*(&iLocal_530 + 768 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn6", Vector(-1282,4f, 86,33722f, 2240,858f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 800) = Vector(-1320,199f, 81,8972f, 2284.0f);
	*(&iLocal_530 + 800 + 12) = Vector(5,203292f, -82,78986f, -5,940474f);
	*(&iLocal_530 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn7", Vector(-1320,199f, 81,8972f, 2284.0f), Vector(5,203292f, -82,78986f, -5,940474f));
	*(&iLocal_530 + 832) = Vector(-1382,168f, 94,86456f, 2380.0f);
	*(&iLocal_530 + 832 + 12) = Vector(0.0f, 74,884f, 0.0f);
	*(&iLocal_530 + 856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn8", Vector(-1382,168f, 94,86456f, 2380.0f), Vector(0.0f, 74,884f, 0.0f));
	*(&iLocal_530 + 864) = Vector(-1288.0f, 86,81006f, 2412.0f);
	*(&iLocal_530 + 864 + 12) = Vector(0.0f, 257,211f, 0.0f);
	*(&iLocal_530 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn9", Vector(-1288.0f, 86,81006f, 2412.0f), Vector(0.0f, 257,211f, 0.0f));
	*(&iLocal_530 + 896) = Vector(-1287,631f, 87,14002f, 2379,814f);
	*(&iLocal_530 + 896 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn10", Vector(-1287,631f, 87,14002f, 2379,814f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 928) = Vector(-1408f, 79,30975f, 2362,761f);
	*(&iLocal_530 + 928 + 12) = Vector(0.0f, -170,8678f, 0.0f);
	*(&iLocal_530 + 952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn11", Vector(-1408f, 79,30975f, 2362,761f), Vector(0.0f, -170,8678f, 0.0f));
	*(&iLocal_530 + 960) = Vector(-1424f, 74,29016f, 2448f);
	*(&iLocal_530 + 960 + 12) = Vector(0.0f, 236,357f, 0.0f);
	*(&iLocal_530 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn12", Vector(-1424f, 74,29016f, 2448f), Vector(0.0f, 236,357f, 0.0f));
	*(&iLocal_530 + 992) = Vector(-1444f, 78,30585f, 2320f);
	*(&iLocal_530 + 992 + 12) = Vector(0.0f, -190,7021f, 0.0f);
	*(&iLocal_530 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn13", Vector(-1444f, 78,30585f, 2320f), Vector(0.0f, -190,7021f, 0.0f));
	*(&iLocal_530 + 1024) = Vector(-1420f, 81,31763f, 2232.0f);
	*(&iLocal_530 + 1024 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn14", Vector(-1420f, 81,31763f, 2232.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 1056) = Vector(-1399,862f, 88,07746f, 2328,686f);
	*(&iLocal_530 + 1056 + 12) = Vector(0.0f, -227,2424f, 0.0f);
	*(&iLocal_530 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Sniperspawn15", Vector(-1399,862f, 88,07746f, 2328,686f), Vector(0.0f, -227,2424f, 0.0f));
	*(&iLocal_530 + 1088) = Vector(-1376.0f, 70,27451f, 2432.0f);
	*(&iLocal_530 + 1088 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Scout1", Vector(-1376.0f, 70,27451f, 2432.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 1120) = Vector(-1472.0f, 69,27057f, 2312.0f);
	*(&iLocal_530 + 1120 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Scout2", Vector(-1472.0f, 69,27057f, 2312.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 1152) = Vector(-1272.0f, 72,28235f, 2372.0f);
	*(&iLocal_530 + 1152 + 12) = Vector(3,714217f, 109,2532f, 4,755613f);
	*(&iLocal_530 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Scout3", Vector(-1272.0f, 72,28235f, 2372.0f), Vector(3,714217f, 109,2532f, 4,755613f));
	*(&iLocal_530 + 1184) = Vector(-1280f, 80,31372f, 2204.0f);
	*(&iLocal_530 + 1184 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_530 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_Scout4", Vector(-1280f, 80,31372f, 2204.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_530 + 1216) = Vector(-1170,314f, 76,28771f, 2393,455f);
	*(&iLocal_530 + 1216 + 12) = Vector(0.0f, 136,1637f, 0.0f);
	*(&iLocal_530 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure1", Vector(-1170,314f, 76,28771f, 2393,455f), Vector(0.0f, 136,1637f, 0.0f));
	*(&iLocal_530 + 1248) = Vector(-1214,233f, 75,21385f, 2358,934f);
	*(&iLocal_530 + 1248 + 12) = Vector(0.0f, 134,4392f, 0.0f);
	*(&iLocal_530 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure2", Vector(-1214,233f, 75,21385f, 2358,934f), Vector(0.0f, 134,4392f, 0.0f));
	*(&iLocal_530 + 1280) = Vector(-1204,583f, 74,27067f, 2381,635f);
	*(&iLocal_530 + 1280 + 12) = Vector(0.0f, -124,3174f, 0.0f);
	*(&iLocal_530 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure3", Vector(-1204,583f, 74,27067f, 2381,635f), Vector(0.0f, -124,3174f, 0.0f));
	*(&iLocal_530 + 1312) = Vector(-1247,636f, 75,40601f, 2532,538f);
	*(&iLocal_530 + 1312 + 12) = Vector(0.0f, 1,96077f, 0.0f);
	*(&iLocal_530 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure4", Vector(-1247,636f, 75,40601f, 2532,538f), Vector(0.0f, 1,96077f, 0.0f));
	*(&iLocal_530 + 1344) = Vector(-1480f, 77,41215f, 2278,523f);
	*(&iLocal_530 + 1344 + 12) = Vector(0.0f, 86,90672f, 0.0f);
	*(&iLocal_530 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure5", Vector(-1480f, 77,41215f, 2278,523f), Vector(0.0f, 86,90672f, 0.0f));
	*(&iLocal_530 + 1376) = Vector(-1497,76f, 77,30194f, 2273,28f);
	*(&iLocal_530 + 1376 + 12) = Vector(0.0f, -143,879f, 0.0f);
	*(&iLocal_530 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure6", Vector(-1497,76f, 77,30194f, 2273,28f), Vector(0.0f, -143,879f, 0.0f));
	*(&iLocal_530 + 1408) = Vector(-1288,94f, 87,34119f, 2400,798f);
	*(&iLocal_530 + 1408 + 12) = Vector(0.0f, -98,86528f, 0.0f);
	*(&iLocal_530 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure7", Vector(-1288,94f, 87,34119f, 2400,798f), Vector(0.0f, -98,86528f, 0.0f));
	*(&iLocal_530 + 1440) = Vector(-1276,287f, 79,4239f, 2252,277f);
	*(&iLocal_530 + 1440 + 12) = Vector(0.0f, -126,1555f, 0.0f);
	*(&iLocal_530 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pikf_AreaTreasure8", Vector(-1276,287f, 79,4239f, 2252,277f), Vector(0.0f, -126,1555f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos1", Vector(-1223,061f, 105,588f, 2311,86f), Vector(-14,74f, 169,15f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos2", Vector(-1096,285f, 126,602f, 2357,243f), Vector(-19,674f, 98,291f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos3", Vector(-1308,379f, 101,674f, 2264,431f), Vector(-11,431f, -175,675f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos4", Vector(-1326,642f, 88,242f, 2422,063f), Vector(-0,569f, 96,323f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos5", Vector(-1525,44f, 125,757f, 2440,716f), Vector(-20,792f, -88,074f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos6", Vector(-1328,178f, 74,674f, 2446,138f), Vector(10,051f, -159,429f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos7", Vector(-1321,232f, 72,181f, 2333,797f), Vector(14,204f, -132,402f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos8", Vector(-1263,093f, 72,458f, 2421,118f), Vector(30,009f, 12,233f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos9", Vector(-1348,254f, 81,929f, 2449,316f), Vector(4,305f, 64,484f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_530, "pik_vista_cam_pos10", Vector(-1350,382f, 72,444f, 2431,035f), Vector(16,02f, 98,856f, 0.0f));
	return 1;
}

void Function_257(int iParam0, int iParam1) //Position: 0xF827 / 63527
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

void Function_258(var uParam0, int iParam1) //Position: 0xF871 / 63601
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_259() //Position: 0xF882 / 63618
{
	return;
}

bool Function_260() //Position: 0xF888 / 63624
{
	return 1;
}

void Function_261() //Position: 0xF88F / 63631
{
	return;
}

bool Function_262() //Position: 0xF895 / 63637
{
	Function_263();
	return Function_263();
}

struct<8> Function_263() //Position: 0xF89E / 63646
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4[8];
	int iVar13;
	
	Function_257(3, 3);
	bVar0 = &bVar0;
	iLocal_178 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("PikesBasin_layout");
	}
	*(&iLocal_178 + 48) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_178, "AlreadyInsideSet_set");
	*(&iLocal_178 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_AreadyIn1", 2,802597E-45f, Vector(-1139,669f, 85,50198f, 2397,994f), Vector(0.0f, -98,43246f, 0.0f), Vector(72,28513f, 38,93865f, 29,30383f));
	ADD_TO_VOLUME_SET(&iLocal_178 + 48, &iLocal_178 + 8[0]);
	*(&iLocal_178 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_AlreadyIn2", 2,802597E-45f, Vector(-1244,81f, 85,29498f, 2113,82f), Vector(0.0f, 0.0f, 0.0f), Vector(55,32957f, 28,01724f, 28,01724f));
	ADD_TO_VOLUME_SET(&iLocal_178 + 48, &iLocal_178 + 8[1]);
	*(&iLocal_178 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_AlreadyIn3", 2,802597E-45f, Vector(-1401,132f, 74,07532f, 2244,32f), Vector(0.0f, 46,80381f, 0.0f), Vector(33,13998f, 33,13998f, 59,95037f));
	ADD_TO_VOLUME_SET(&iLocal_178 + 48, &iLocal_178 + 8[2]);
	*(&iLocal_178 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_alreadyIn4", 2,802597E-45f, Vector(-1595,619f, 53,96125f, 2437,53f), Vector(0.0f, -37,01864f, 0.0f), Vector(71,20465f, 23,2709f, 23,2709f));
	ADD_TO_VOLUME_SET(&iLocal_178 + 48, &iLocal_178 + 8[3]);
	*(&iLocal_178 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "pikv_helperStop", 2,802597E-45f, Vector(-1178,028f, 76,29803f, 2368,719f), Vector(0.0f, 0.0f, 0.0f), Vector(8,237045f, 8,237045f, 9,253483f));
	*(&iLocal_178 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "pikv_guardVol", 2,802597E-45f, Vector(-1175,562f, 76,18143f, 2362,396f), Vector(0.0f, 35,91524f, 0.0f), Vector(11,11741f, 4,474076f, 15,52327f));
	*(&iLocal_178 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "pikv_bridgesniCyl1", 2,802597E-45f, Vector(-1280,723f, 87,13815f, 2369,308f), Vector(0.0f, -11,37486f, 0.0f), Vector(6,065359f, 6,065359f, 13,57058f));
	*(&iLocal_178 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "pikv_bridgesniCyl2", 2,802597E-45f, Vector(-1266,951f, 85,35784f, 2402,505f), Vector(0.0f, -113,9405f, 0.0f), Vector(4,693594f, 4,693594f, 13,95571f));
	*(&iLocal_178 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_slowDown", 2,802597E-45f, Vector(-1164,005f, 90,71706f, 2327,153f), Vector(0.0f, -23,07202f, 0.0f), Vector(17,27579f, 17,27579f, 24,33576f));
	*(&iLocal_178 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn1", 2,802597E-45f, Vector(-1253,801f, 80,314f, 2182,282f), Vector(0.0f, -42,79086f, 0.0f), Vector(27,61767f, 18,75238f, 20,04885f));
	*(&iLocal_178 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn2", 2,802597E-45f, Vector(-1272.0f, 80,31372f, 2236.0f), Vector(0.0f, 0.0f, 0.0f), Vector(21,51628f, 21,51628f, 21,51628f));
	*(&iLocal_178 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn3", 2,802597E-45f, Vector(-1296.0f, 76,29803f, 2288.0f), Vector(0.0f, 0.0f, 0.0f), Vector(34,95654f, 23,60032f, 23,60032f));
	*(&iLocal_178 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn4", 2,802597E-45f, Vector(-1311,946f, 70,275f, 2350,613f), Vector(0.0f, 0.0f, 0.0f), Vector(22,63349f, 21,44477f, 21,44477f));
	*(&iLocal_178 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn5", 2,802597E-45f, Vector(-1278,395f, 72,65167f, 2434,16f), Vector(0.0f, -14,70481f, 0.0f), Vector(31,97156f, 29,29355f, 19,24492f));
	*(&iLocal_178 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn6", 2,802597E-45f, Vector(-1265,314f, 70,43589f, 2505,984f), Vector(0.0f, 66,77618f, 0.0f), Vector(25,02906f, 14,28399f, 27,45445f));
	*(&iLocal_178 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn7", 2,802597E-45f, Vector(-1359,338f, 72,322f, 2436,749f), Vector(0.0f, 15,98228f, 0.0f), Vector(160,8902f, 27,50153f, 47,53299f));
	*(&iLocal_178 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn8", 2,802597E-45f, Vector(-1478,667f, 59,52267f, 2468,32f), Vector(0.0f, 0.0f, 0.0f), Vector(21,0649f, 37,31767f, 30,44314f));
	*(&iLocal_178 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn9", 2,802597E-45f, Vector(-1425,953f, 62,244f, 2408,26f), Vector(0.0f, 33,54885f, 0.0f), Vector(30,26427f, 23,14559f, 23,14559f));
	*(&iLocal_178 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn10", 2,802597E-45f, Vector(-1425,721f, 70,275f, 2337,188f), Vector(0.0f, 0.0f, 0.0f), Vector(28,39706f, 28,39706f, 28,39706f));
	*(&iLocal_178 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn11", 2,802597E-45f, Vector(-1467,874f, 70,374f, 2299,959f), Vector(0.0f, 0.0f, 0.0f), Vector(28,68723f, 28,68723f, 28,68723f));
	*(&iLocal_178 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_groupIn12", 2,802597E-45f, Vector(-1419,859f, 70,52f, 2263,771f), Vector(0.0f, -51,09812f, 0.0f), Vector(38,50616f, 11,87008f, 16,37532f));
	*(&iLocal_178 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_ArmGateway", 2,802597E-45f, Vector(-1625,022f, 53,95382f, 2413,722f), Vector(0.0f, -42,72219f, 0.0f), Vector(9,400867f, 15,05778f, 8,67498f));
	*(&iLocal_178 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_introGateway", 2,802597E-45f, Vector(-1503,814f, 59,72019f, 2460,026f), Vector(0.0f, 0.0f, 0.0f), Vector(2,134621f, 2,697062f, 3,491583f));
	*(&iLocal_178 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_helperIntro", 2,802597E-45f, Vector(-1503,47f, 59,35239f, 2461,05f), Vector(0.0f, 0.0f, 0.0f), Vector(2,652559f, 5,064361f, 2,652559f));
	*(&iLocal_178 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_blipMainCampSquad", 2,802597E-45f, Vector(-1216,7f, 75,29413f, 2370,382f), Vector(0.0f, 0.0f, 0.0f), Vector(168,1334f, 128,6735f, 113,9047f));
	*(&iLocal_178 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad8", 2,802597E-45f, Vector(-1496,443f, 69,0963f, 2452,288f), Vector(0.0f, -4,721901f, 0.0f), Vector(186,1838f, 48,31003f, 75,76049f));
	*(&iLocal_178 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad7", 2,802597E-45f, Vector(-1353,833f, 69,0963f, 2451,325f), Vector(0.0f, -15,48637f, 0.0f), Vector(100,3228f, 48,31003f, 68,34258f));
	*(&iLocal_178 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad6", 2,802597E-45f, Vector(-1281,962f, 69,0963f, 2493,322f), Vector(0.0f, 30,4951f, 0.0f), Vector(113,3849f, 48,31003f, 87,72249f));
	*(&iLocal_178 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad5", 2,802597E-45f, Vector(-1267,796f, 69,0963f, 2439,839f), Vector(0.0f, 87,60785f, 0.0f), Vector(113,3849f, 48,31003f, 48,50608f));
	*(&iLocal_178 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad4", 2,802597E-45f, Vector(-1312,318f, 83,79956f, 2333,569f), Vector(0.0f, 84,99364f, 0.0f), Vector(109,5603f, 48,31003f, 48,86852f));
	*(&iLocal_178 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad3", 2,802597E-45f, Vector(-1288,323f, 83,79956f, 2276,337f), Vector(0.0f, 49,85001f, 0.0f), Vector(112,6867f, 48,31003f, 44,00807f));
	*(&iLocal_178 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad2", 2,802597E-45f, Vector(-1274,505f, 83,79956f, 2235,281f), Vector(0.0f, 74,46017f, 0.0f), Vector(93,29057f, 48,31003f, 70,20873f));
	*(&iLocal_178 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BlipSquad1", 2,802597E-45f, Vector(-1255,359f, 83,79956f, 2168,172f), Vector(0.0f, 74,46017f, 0.0f), Vector(111,5295f, 48,31003f, 70,20873f));
	*(&iLocal_178 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_MainCampStayIn", 2,802597E-45f, Vector(-1200,78f, 75,54284f, 2368,463f), Vector(0.0f, 0.0f, 0.0f), Vector(37,88311f, 20,66769f, 32,60902f));
	*(&iLocal_178 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_VolumeSet01", 4,203895E-45f, Vector(-1177,527f, 72,63332f, 2369,007f), Vector(0.0f, 2,914154f, 0.0f), Vector(56,80202f, 56,80202f, 56,80202f));
	*(&iLocal_178 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_VolumeSet02", 4,203895E-45f, Vector(-1250,711f, 84,03722f, 2139,524f), Vector(0.0f, 2,914154f, 0.0f), Vector(32,67224f, 32,67224f, 32,67224f));
	*(&iLocal_178 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_VolumeSet03", 4,203895E-45f, Vector(-1408,88f, 80,74612f, 2229,907f), Vector(0.0f, 2,914154f, 0.0f), Vector(23,84316f, 23,84316f, 23,84316f));
	*(&iLocal_178 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_VolumeSet04", 4,203895E-45f, Vector(-1585,562f, 50,80611f, 2438,274f), Vector(0.0f, 2,914154f, 0.0f), Vector(41,29047f, 38,31564f, 41,29047f));
	*(&iLocal_178 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_BridgeGuyStayIn", 2,802597E-45f, Vector(-1267,027f, 85,61971f, 2402,348f), Vector(0.0f, -24,63436f, 0.0f), Vector(8,233026f, 4,08976f, 3,708815f));
	*(&iLocal_178 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_excitedReturn", 2,802597E-45f, Vector(-1490,9f, 59,52267f, 2468,32f), Vector(0.0f, 0.0f, 0.0f), Vector(50,54816f, 60,89615f, 49,67807f));
	*(&iLocal_178 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "v_CheckPlayerHorse", 2,802597E-45f, Vector(-1504,312f, 59,35239f, 2461,05f), Vector(0.0f, 0.0f, 0.0f), Vector(14,22822f, 15,17736f, 14,60995f));
	*(&iLocal_178 + 352) = Vector(-1503,966f, 59,05378f, 2461,444f);
	*(&iLocal_178 + 352 + 12) = Vector(0.0f, 274,7909f, 0.0f);
	*(&iLocal_178 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "pikf_help_front", Vector(-1503,966f, 59,05378f, 2461,444f), Vector(0.0f, 274,7909f, 0.0f));
	*(&iLocal_178 + 384) = Vector(-1608,838f, 53,96173f, 2422,991f);
	*(&iLocal_178 + 384 + 12) = Vector(0.0f, -113,2362f, 0.0f);
	*(&iLocal_178 + 408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "pikf_teleport", Vector(-1608,838f, 53,96173f, 2422,991f), Vector(0.0f, -113,2362f, 0.0f));
	*(&iLocal_178 + 416) = Vector(-1239,878f, 75,66244f, 2520,361f);
	*(&iLocal_178 + 416 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nf_camp1_1", Vector(-1239,878f, 75,66244f, 2520,361f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 448) = Vector(-1240.0f, 75,29407f, 2528f);
	*(&iLocal_178 + 448 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nf_camp1_2", Vector(-1240.0f, 75,29407f, 2528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 480) = Vector(-1496f, 77,30194f, 2284.0f);
	*(&iLocal_178 + 480 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nf_camp2_1", Vector(-1496f, 77,30194f, 2284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 512) = Vector(-1492f, 77,30194f, 2284.0f);
	*(&iLocal_178 + 512 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nf_camp2_2", Vector(-1492f, 77,30194f, 2284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group1_1", Vector(-1250,268f, 80,21631f, 2185,513f), Vector(0.0f, 60,74244f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 544, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 544, "FTE", true);
	*(&iLocal_178 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group1_2", Vector(-1251,885f, 80,12868f, 2183,575f), Vector(0.0f, 258,1044f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 552, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 552, "FTE", true);
	*(&iLocal_178 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group1_3", Vector(-1253,715f, 80,31372f, 2188,117f), Vector(0.0f, -33,97869f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 560, "PIK_Canyon", true);
	*(&iLocal_178 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group2_1", Vector(-1268f, 80,31372f, 2240.0f), Vector(0.0f, 7,574362f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 568, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 568, "FTE", true);
	*(&iLocal_178 + 576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group2_2", Vector(-1272,061f, 80,31372f, 2232,837f), Vector(0.0f, -4,182311f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 576, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 576, "FTE", true);
	*(&iLocal_178 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group2_3", Vector(-1274,929f, 79,30981f, 2240.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 584, "PIK_Canyon", true);
	*(&iLocal_178 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group3_1", Vector(-1290,873f, 76,29803f, 2289,005f), Vector(0.0f, -31,94887f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 592, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 592, "FTE", true);
	*(&iLocal_178 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group3_2", Vector(-1297,173f, 76,29803f, 2285,627f), Vector(0.0f, -39,85867f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 600, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 600, "FTE", true);
	*(&iLocal_178 + 608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group3_3", Vector(-1301,273f, 76,29803f, 2285,453f), Vector(0.0f, 327,0281f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 608, "PIK_Canyon", true);
	*(&iLocal_178 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group4_1", Vector(-1306,897f, 71,27841f, 2353,559f), Vector(0.0f, 27,44552f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 616, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 616, "FTE", true);
	*(&iLocal_178 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group4_2", Vector(-1323,141f, 71,27841f, 2348,429f), Vector(0.0f, 5,391821f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 624, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 624, "FTE", true);
	*(&iLocal_178 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group4_3", Vector(-1309,483f, 71,27841f, 2354,814f), Vector(0.0f, 41,27657f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 632, "PIK_Canyon", true);
	*(&iLocal_178 + 640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group5_1", Vector(-1282,078f, 70,32738f, 2433,271f), Vector(0.0f, -198,1902f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 640, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 640, "FTE", true);
	*(&iLocal_178 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group5_2", Vector(-1274,775f, 70,28547f, 2433,839f), Vector(-176,5139f, 29,47797f, 182,9077f));
	DECOR_SET_BOOL(&iLocal_178 + 648, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 648, "FTE", true);
	*(&iLocal_178 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group5_3", Vector(-1267,109f, 84,18763f, 2402,51f), Vector(0.0f, -203,9592f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 656, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 656, "FTE", true);
	*(&iLocal_178 + 664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group6_1", Vector(-1267,538f, 69,32523f, 2501,696f), Vector(0.0f, -215,1035f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 664, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 664, "FTE", true);
	*(&iLocal_178 + 672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group6_2", Vector(-1257,553f, 70,05267f, 2500,39f), Vector(0.0f, -198,1204f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 672, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 672, "FTE", true);
	*(&iLocal_178 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group6_3", Vector(-1260,314f, 69,43683f, 2511,771f), Vector(0.0f, 69,9072f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 680, "PIK_Canyon", true);
	*(&iLocal_178 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group7_1", Vector(-1349,316f, 72,34944f, 2438,939f), Vector(0.0f, -291,7401f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 688, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 688, "FTE", true);
	*(&iLocal_178 + 696) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group7_2", Vector(-1333,182f, 73,15293f, 2434,341f), Vector(0.0f, -285,5722f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 696, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 696, "FTE", true);
	*(&iLocal_178 + 704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group7_3", Vector(-1355,373f, 73,04667f, 2426,764f), Vector(0.0f, -272,9511f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 704, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 704, "FTE", true);
	*(&iLocal_178 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group7_4", Vector(-1390,267f, 76,69369f, 2462,469f), Vector(0.0f, -265,598f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 712, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 712, "FTE", true);
	*(&iLocal_178 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group7_5", Vector(-1410,233f, 68,90279f, 2446,952f), Vector(0.0f, -237,4765f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 720, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 720, "FTE", true);
	*(&iLocal_178 + 728) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group8_1", Vector(-1471,338f, 60,93575f, 2469,271f), Vector(0.0f, -245,6488f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 728, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 728, "FTE", true);
	*(&iLocal_178 + 736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group8_2", Vector(-1478,161f, 60,18522f, 2476,429f), Vector(0.0f, -268,5379f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 736, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 736, "FTE", true);
	*(&iLocal_178 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group8_3", Vector(-1477,018f, 60,35752f, 2469,042f), Vector(0.0f, -282,0281f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 744, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 744, "FTE", true);
	*(&iLocal_178 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group9_1", Vector(-1432.0f, 64,25095f, 2408.0f), Vector(0.0f, 138,7788f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 752, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 752, "FTE", true);
	*(&iLocal_178 + 760) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group9_2", Vector(-1424.0f, 64,25099f, 2412.0f), Vector(0.0f, 126,2359f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 760, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 760, "FTE", true);
	*(&iLocal_178 + 768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group9_3", Vector(-1424.0f, 64,79581f, 2400.0f), Vector(0.0f, -262,6426f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 768, "PIK_Canyon", true);
	*(&iLocal_178 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group10_1", Vector(-1416f, 70,27448f, 2336f), Vector(0.0f, -219,3174f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 776, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 776, "FTE", true);
	*(&iLocal_178 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group10_2", Vector(-1432f, 70,27446f, 2340.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 784, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 784, "FTE", true);
	*(&iLocal_178 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group10_3", Vector(-1432f, 70,27448f, 2332f), Vector(0.0f, -241,2943f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 792, "PIK_Canyon", true);
	*(&iLocal_178 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group11_1", Vector(-1464.0f, 70,27451f, 2296.0f), Vector(0.0f, -189,857f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 800, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 800, "FTE", true);
	*(&iLocal_178 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group11_2", Vector(-1480f, 69,27057f, 2308.0f), Vector(0.0f, -34,79613f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 808, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 808, "FTE", true);
	*(&iLocal_178 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group11_3", Vector(-1471,832f, 69,27057f, 2312.0f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 816, "PIK_Canyon", true);
	*(&iLocal_178 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group12_1", Vector(-1420.0f, 71,27841f, 2273,024f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 824, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 824, "FTE", true);
	*(&iLocal_178 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group12_2", Vector(-1424.0f, 71,27841f, 2264f), Vector(0.0f, -83,38127f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 832, "PIK_Canyon", true);
	DECOR_SET_BOOL(&iLocal_178 + 832, "FTE", true);
	*(&iLocal_178 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_group12_3", Vector(-1412.0f, 71,13173f, 2268,177f), Vector(0.0f, 67,39184f, 0.0f));
	DECOR_SET_BOOL(&iLocal_178 + 840, "PIK_Canyon", true);
	*(&iLocal_178 + 848) = Vector(-1457,178f, 86,87448f, 2310,231f);
	*(&iLocal_178 + 848 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "bridgePin1_2", Vector(-1457,178f, 86,87448f, 2310,231f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 880) = Vector(-1455,008f, 86,87398f, 2310,237f);
	*(&iLocal_178 + 880 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "bridgePin1_1", Vector(-1455,008f, 86,87398f, 2310,237f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 912) = Vector(-1454,823f, 86,91029f, 2274,059f);
	*(&iLocal_178 + 912 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "bridgePin1_3", Vector(-1454,823f, 86,91029f, 2274,059f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 944) = Vector(-1457,144f, 86,91412f, 2274,033f);
	*(&iLocal_178 + 944 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_178 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "bridgePin1_4", Vector(-1457,144f, 86,91412f, 2274,033f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_178 + 976) = Vector(-1634,091f, 54,21176f, 2402,574f);
	*(&iLocal_178 + 976 + 12) = Vector(0.0f, 52,20312f, 0.0f);
	*(&iLocal_178 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_playerGoToFlag", Vector(-1634,091f, 54,21176f, 2402,574f), Vector(0.0f, 52,20312f, 0.0f));
	*(&iLocal_178 + 1008) = Vector(-1161,776f, 76,63732f, 2364.0f);
	*(&iLocal_178 + 1008 + 12) = Vector(0.0f, 109,5129f, 0.0f);
	*(&iLocal_178 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_HerdCreation", Vector(-1161,776f, 76,63732f, 2364.0f), Vector(0.0f, 109,5129f, 0.0f));
	*(&iLocal_178 + 1040) = Vector(-1660,24f, 51,9105f, 2392,137f);
	*(&iLocal_178 + 1040 + 12) = Vector(0.0f, 64,63776f, 0.0f);
	*(&iLocal_178 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_CowGoToFlag", Vector(-1660,24f, 51,9105f, 2392,137f), Vector(0.0f, 64,63776f, 0.0f));
	*(&iLocal_178 + 1072) = CREATE_OBJECTSET_IN_LAYOUT("PIK_AreaChestsSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 1080[03]) = Vector(-1190,333f, 75,295f, 2379,068f);
	*(&iLocal_178 + 1080[03] + 12) = Vector(0.0f, 90.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_AreaChests01", Vector(-1190,333f, 75,295f, 2379,068f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_178 + 1072);
	*(&iLocal_178 + 1080[13]) = Vector(-1194,71f, 75,295f, 2361,093f);
	*(&iLocal_178 + 1080[13] + 12) = Vector(0.0f, 140,6601f, 0.0f);
	iVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_AreaChests02", Vector(-1194,71f, 75,295f, 2361,093f), Vector(0.0f, 140,6601f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar2, &iLocal_178 + 1072);
	*(&iLocal_178 + 1136) = Vector(-1503,75f, 59,10756f, 2460,121f);
	*(&iLocal_178 + 1136 + 12) = Vector(0.0f, -180.0f, 0.0f);
	*(&iLocal_178 + 1160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_teleportJohnCrouch", Vector(-1503,75f, 59,10756f, 2460,121f), Vector(0.0f, -180.0f, 0.0f));
	*(&iLocal_178 + 1168) = Vector(-1503,809f, 59,05842f, 2461,374f);
	*(&iLocal_178 + 1168 + 12) = Vector(0.0f, -51,92019f, 0.0f);
	*(&iLocal_178 + 1192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_teleportRancherCrouch", Vector(-1503,809f, 59,05842f, 2461,374f), Vector(0.0f, -51,92019f, 0.0f));
	*(&iLocal_178 + 1200) = Vector(-1178,068f, 76,29803f, 2369,931f);
	*(&iLocal_178 + 1200 + 12) = Vector(0.0f, -134,7105f, 0.0f);
	*(&iLocal_178 + 1224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_teleportRancher", Vector(-1178,068f, 76,29803f, 2369,931f), Vector(0.0f, -134,7105f, 0.0f));
	*(&iLocal_178 + 1232) = Vector(-1176,856f, 76,29803f, 2371,131f);
	*(&iLocal_178 + 1232 + 12) = Vector(0.0f, -318,3134f, 0.0f);
	*(&iLocal_178 + 1256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_teleportMarston", Vector(-1176,856f, 76,29803f, 2371,131f), Vector(0.0f, -318,3134f, 0.0f));
	*(&iLocal_178 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_MAINCAMP1", Vector(-1204.0f, 75,29412f, 2363,419f), Vector(0.0f, 97,0135f, 0.0f));
	*(&iLocal_178 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_MAINCAMP2", Vector(-1192.0f, 75,29413f, 2380.0f), Vector(0.0f, 65,82169f, 0.0f));
	*(&iLocal_178 + 1280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_MAINCAMP3", Vector(-1212,993f, 74,29016f, 2371,007f), Vector(0.0f, 85,32869f, 0.0f));
	*(&iLocal_178 + 1288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_MAINCAMP4", Vector(-1192f, 75,29413f, 2368.0f), Vector(0.0f, 96,14014f, 0.0f));
	*(&iLocal_178 + 1296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_PIK_MAINCAMP5", Vector(-1204f, 74,61318f, 2378,142f), Vector(0.0f, 101,9614f, 0.0f));
	*(&iLocal_178 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "f_TeleportHorse", Vector(-1512,136f, 58,64619f, 2461,237f), Vector(0.0f, -65,3695f, 0.0f));
	*(&iLocal_178 + 1312) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "introCover", Vector(-1504,215f, 59,13425f, 2461f), Vector(0.0f, -90,29622f, 0.0f), 4);
	*(&iLocal_178 + 1320) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low1", Vector(-1430,396f, 64,9642f, 2465,819f), Vector(0.0f, -66,76308f, 0.0f), 4);
	*(&iLocal_178 + 1328) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low1a", Vector(-1375,024f, 70,46259f, 2438,6f), Vector(0.0f, -73,59174f, 0.0f), 4);
	*(&iLocal_178 + 1336) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low2", Vector(-1281,78f, 68,36338f, 2523,242f), Vector(0.0f, -74,8913f, 0.0f), 4);
	*(&iLocal_178 + 1344) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low3", Vector(-1287,685f, 70,39079f, 2458,864f), Vector(0.0f, -24,91617f, 0.0f), 4);
	*(&iLocal_178 + 1352) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low4", Vector(-1241,877f, 73,56133f, 2375,054f), Vector(0.0f, -89,48199f, 0.0f), 4);
	*(&iLocal_178 + 1360) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low5", Vector(-1216,463f, 74,29016f, 2369,405f), Vector(0.0f, -449,8068f, 0.0f), 4);
	*(&iLocal_178 + 1368) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low6", Vector(-1306,166f, 73,15712f, 2323,85f), Vector(0.0f, -363,3798f, 0.0f), 4);
	*(&iLocal_178 + 1376) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low7", Vector(-1276,516f, 77,5472f, 2281,081f), Vector(0.0f, -373,7749f, 0.0f), 4);
	*(&iLocal_178 + 1384) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "cover_low8", Vector(-1262,99f, 80,40509f, 2211,63f), Vector(0.0f, -381,7527f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_178 + 1392) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_178, "c_CowFollowPath01");
	PushArrayP();
	*(&iLocal_178 + 1400) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_178, "path_cows01");
	return 1;
	if (Global_6623 || Function_26(0x8000000))
	{
		return;
	}
}

var Function_264(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12232 / 74290
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_167(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_167(&(Param0[iVar02]), 8);
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

bool Function_265(int iParam0) //Position: 0x1230E / 74510
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_269(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_267(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_266(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_266(int iParam0) //Position: 0x12389 / 74633
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_267(int iParam0) //Position: 0x1239E / 74654
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_268(iParam0)7].f_12 < 0;
}

int Function_268(int iParam0) //Position: 0x12404 / 74756
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

bool Function_269(int iParam0, int iParam1) //Position: 0x124C6 / 74950
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_270() //Position: 0x124E3 / 74979
{
	Function_169(&iLocal_924, "$/fragment/p_gen_testbridge01x", 0, 1);
	return;
}

void Function_271(char* cParam0) //Position: 0x12513 / 75027
{
	if (!Function_26(128))
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

