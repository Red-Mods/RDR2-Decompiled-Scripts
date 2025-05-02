//Decompiled with MagicRDR v1.0
//Function Count : 74
//Statics Count : 1086
//Natives Count : 123
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
	var uLocal_14 = 3;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 2;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 3;
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
	var uLocal_46 = 6;
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
	var uLocal_76 = 2;
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
	var uLocal_104 = 4;
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
	var uLocal_118 = 2;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 1;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 2;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
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
	var uLocal_164 = 3;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 9;
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
	var uLocal_202 = 4;
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
	var uLocal_220 = 5;
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
	var uLocal_242 = 8;
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
	var uLocal_266 = 2;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 3;
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
	var uLocal_286 = 2;
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
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	var uLocal_562 = 0;
	int iLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 27;
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
	char[] cLocal_734[4] = 0;
	var uLocal_735 = 0;
	struct<4> Local_736[42];
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
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080 = 0;
	int iLocal_1081 = 0;
	int iLocal_1082 = 0;
	int iLocal_1083 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_560 = 0;
	iLocal_561 = &iScriptParam_0;
	Function_73("Initializing Armadillo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_563 = 500;
		uLocal_564 = Function_72();
		switch (iLocal_560)
		{
			case 0x00000000:
				if (Function_70())
				{
					cLocal_734 = Function_69(&iLocal_0, "narmadillo", iScriptParam_0);
					iLocal_560 = 1;
				}
				iLocal_563 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_734))
				{
					iLocal_560 = 2;
				}
				iLocal_563 = 0;
				break;
			
			case 0x00000002:
				Function_68(&uLocal_566);
				Function_67(&uLocal_566, &uLocal_570, 4, &iLocal_0 + 408, 4294967295, 4);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 1128, 4294967295, 8458);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 1088, 4294967295, 4362);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 272, 4294967295, 0x40000000);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 280, 4294967295, 524554);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 288, 4294967295, 0x4000010a);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 48, 4294967295, 0x1000010a);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 88, 4294967295, 2314);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 240, 4294967295, 1802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 168, 4294967295, 1794);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 360, 4294967295, 33034);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 800, 4294967295, 33034);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 352, 4294967295, 262410);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 160, 4294967295, 16650);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 784, 4294967295, 16648);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 328, 4294967295, 0x4001010a);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 120, 4294967295, 8388874);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 336, 4294967295, 0x800010a);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 864, 4294967295, 0x800018a);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 1136, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 248, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 256, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 264, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 296, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 344, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 368, 4294967295, 65802);
				Function_67(&uLocal_566, &uLocal_570, 5, &iLocal_0 + 496, 4294967295, 0x1000108);
				bVar0 = !Function_66(1, 0);
				Function_64(&Local_736, &cLocal_734, "saloon01", 6, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 168, 0, 1);
				Function_64(&Local_736, &cLocal_734, "saloon01", 9, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 168, 0, 1);
				Function_64(&Local_736, &cLocal_734, "saloon01", 1, &Global_44085[iScriptParam_09] + 32, bVar0, &iLocal_0 + 240, 0, 0);
				Function_64(&Local_736, &cLocal_734, "saloon01", 3, &Global_44085[iScriptParam_09] + 32, bVar0, &iLocal_0 + 240, 0, 0);
				Function_64(&Local_736, &cLocal_734, "saloon01", 4, &Global_44085[iScriptParam_09] + 32, bVar0, &iLocal_0 + 240, 0, 0);
				Function_64(&Local_736, &cLocal_734, "saloon01", 5, &Global_44085[iScriptParam_09] + 32, bVar0, &iLocal_0 + 240, 0, 0);
				Function_64(&Local_736, &cLocal_734, "saloon01", 7, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 240, 0, 0);
				Function_64(&Local_736, &cLocal_734, "saloon01", 8, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 240, 0, 0);
				Function_64(&Local_736, &cLocal_734, "trainstation01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
				Function_64(&Local_736, &cLocal_734, "freightstation01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 48, 0, 0);
				Function_64(&Local_736, &cLocal_734, "freightstation01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 48, 0, 0);
				Function_64(&Local_736, &cLocal_734, "freightstation01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 48, 0, 0);
				Function_64(&Local_736, &cLocal_734, "trainstation01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
				Function_64(&Local_736, &cLocal_734, "ruinedBank", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "ruinedBank", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "corralPens01", 1, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "corralPens01", 2, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "corralPens01", 3, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "corralPens01", 4, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "corralPens01", 5, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "cattlePen01", 1, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "cattlePen01", 2, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_64(&Local_736, &cLocal_734, "cattlePen01", 3, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				if ((Function_66(15, 0) && !Function_66(18, 0)) && !Function_58(18))
				{
					Function_64(&Local_736, &cLocal_734, "stable01", 1, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
					Function_64(&Local_736, &cLocal_734, "stable01", 2, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
					Function_64(&Local_736, &cLocal_734, "stable01", 3, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
					Function_64(&Local_736, &cLocal_734, "stable01", 4, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				}
				iLocal_1082 = Function_64(&Local_736, &cLocal_734, "schoolhouse01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 120, 0, 0);
				if (iLocal_1082 <= 0 && iLocal_1082 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10824]), 63);
				}
				iLocal_1083 = Function_64(&Local_736, &cLocal_734, "schoolhouse01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 120, 0, 0);
				if (iLocal_1083 <= 0 && iLocal_1083 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10834]), 63);
				}
				iLocal_1074 = Function_64(&Local_736, &cLocal_734, "gunsmith01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1088, 0, 0);
				if (iLocal_1074 <= 0 && iLocal_1074 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10744]), 33);
				}
				iLocal_1075 = Function_64(&Local_736, &cLocal_734, "gunsmith01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1088, 1, 0);
				if (iLocal_1075 <= 0 && iLocal_1075 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10754]), 33);
				}
				iLocal_1076 = Function_64(&Local_736, &cLocal_734, "doctorsOffice01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1128, 1, 0);
				if (iLocal_1076 <= 0 && iLocal_1076 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10764]), 33);
				}
				Function_64(&Local_736, &cLocal_734, "trainstation01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 160, 0, 0);
				Function_64(&Local_736, &cLocal_734, "sheriffsOffice01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 360, 0, 0);
				Function_64(&Local_736, &cLocal_734, "sheriffsOffice01", 2, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 800, 0, 0);
				Function_64(&Local_736, &cLocal_734, "sheriffsOffice01", 3, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 800, 0, 0);
				iLocal_1077 = Function_64(&Local_736, &cLocal_734, "ruinedBank", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 336, 0, 0);
				if (iLocal_1077 <= 0 && iLocal_1077 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10774]), 49);
				}
				iLocal_1078 = Function_64(&Local_736, &cLocal_734, "ruinedBank", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 336, 0, 0);
				if (iLocal_1078 <= 0 && iLocal_1078 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10784]), 49);
				}
				iLocal_1079 = Function_64(&Local_736, &cLocal_734, "generalStore", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 88, 1, 0);
				if (iLocal_1079 <= 0 && iLocal_1079 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10794]), 33);
				}
				iLocal_1080 = Function_64(&Local_736, &cLocal_734, "generalStore", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 88, 0, 0);
				if (iLocal_1080 <= 0 && iLocal_1080 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10804]), 33);
				}
				iLocal_1081 = Function_64(&Local_736, &cLocal_734, "generalStore", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 88, 0, 0);
				if (iLocal_1081 <= 0 && iLocal_1081 > Local_736)
				{
					Function_57(&(Local_736[iLocal_10814]), 33);
				}
				iLocal_560 = 3;
				iLocal_563 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_561]), 16);
				Function_55("Finished Initializing Armadillo Volumes", 5.0f);
				iLocal_560 = 4;
				iLocal_563 = 0;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_566, &uLocal_570, &uLocal_564, iScriptParam_0);
				Function_12(&Local_736, 0);
				break;
			
			case 0x00000005:
				break;
		}
		WAIT(iLocal_563);
	}
	Function_4(&uLocal_566, &uLocal_570);
	Function_3(&Local_736);
	Function_2();
	Function_1(&(Global_43791[iLocal_561]), 16);
	Function_55("Unloaded Armadillo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xBEB / 3051
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xC05 / 3077
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0xC11 / 3089
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0xC76 / 3190
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_11(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(&(vParam1[iVar03]), 4);
		}
		if (Function_11(&(vParam1[iVar03]), 8))
		{
			Function_5(0, 0, 30);
			Function_10(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0xCD3 / 3283
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
		Function_6(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0xDBD / 3517
{
	int iVar0;
	
	Function_9(iParam0);
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
	Function_7();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
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

void Function_7() //Position: 0xF3C / 3900
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0xF48 / 3912
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

void Function_9(int iParam0) //Position: 0xF92 / 3986
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

void Function_10(struct<17> Param0) //Position: 0xFD8 / 4056
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0xFF5 / 4085
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0x1013 / 4115
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
	while (iVar0 < Function_15((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_14(&(Param0[iVar04]), 16384);
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
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_72(), &Param0[iVar04] + 16))
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
								Function_13(&(Param0[iVar04]), 1);
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
							Function_13(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_14(&(Param0[iVar04]), 1);
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
					Function_13(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(&(Param0[iVar04]), 1);
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
					Function_14(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_72(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_72(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_14(&(Param0[iVar04]), 32768);
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

void Function_13(struct<13> Param0) //Position: 0x1434 / 5172
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0x1447 / 5191
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, int iParam1) //Position: 0x1464 / 5220
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_16(vector3 vParam0) //Position: 0x1476 / 5238
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x1500 / 5376
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_51(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_50(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_50(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_47(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 16))
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
								Function_50(&vParam0, 16);
								Function_39(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 16))
					{
						Function_10(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_38(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_37(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_50(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_18(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x1958 / 6488
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_38(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_23(476, 1, 0, 0);
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
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x1A49 / 6729
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x1A86 / 6790
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1ABF / 6847
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iVar0);
	return;
	return;
}

var Function_22(int iParam0) //Position: 0x1B29 / 6953
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1B81 / 7041
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_24(iParam0);
	return 1;
}

void Function_24(bool bParam0) //Position: 0x1DA9 / 7593
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

void Function_25(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1E47 / 7751
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_20(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_20(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_26(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x2485 / 9349
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x248E / 9358
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x249F / 9375
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x2596 / 9622
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x25B1 / 9649
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x2618 / 9752
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x262A / 9770
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x275E / 10078
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x276D / 10093
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2907 / 10503
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_36(var uParam0, int iParam1) //Position: 0x2B4B / 11083
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x2B58 / 11096
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2B82 / 11138
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2B9F / 11167
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_42(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_40();
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

void Function_40() //Position: 0x2E52 / 11858
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_41(&uVar0, &uVar1);
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

void Function_41(var uParam0, int iParam1) //Position: 0x2EC5 / 11973
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

bool Function_42(bool bParam0) //Position: 0x2EFB / 12027
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_47(2048))
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

int Function_43(int iParam0) //Position: 0x2F71 / 12145
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2F82 / 12162
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

bool Function_45(int iParam0) //Position: 0x2F9B / 12187
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2FB1 / 12209
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2FC6 / 12230
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2FE4 / 12260
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

bool Function_49(int iParam0) //Position: 0x3093 / 12435
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x30A9 / 12457
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x30BC / 12476
{
	int iVar0;
	int iVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x3136 / 12598
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x315F / 12639
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

bool Function_54(int iParam0) //Position: 0x317F / 12671
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x319B / 12699
{
	if (!Function_54(128))
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

void Function_56(var uParam0, int iParam1) //Position: 0x31DB / 12763
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(vector3 vParam0) //Position: 0x31EC / 12780
{
	Function_13(&vParam0, 2);
	vParam0.z = iParam1;
	return;
}

bool Function_58(bool bParam0) //Position: 0x3200 / 12800
{
	int iVar0;
	
	if (!Function_63(bParam0))
	{
		return 0;
	}
	iVar0 = Function_62(bParam0);
	if (!Function_59(Function_62(bParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_59(int iParam0) //Position: 0x3236 / 12854
{
	if (!Function_61(iParam0))
	{
		return 0;
	}
	if (!Function_60(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_60(int iParam0) //Position: 0x325A / 12890
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_61(int iParam0) //Position: 0x326F / 12911
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_62(bool bParam0) //Position: 0x3286 / 12934
{
	if (!Function_63(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_63(bool bParam0) //Position: 0x32A0 / 12960
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_64(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x32B6 / 12982
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_65(&Param0);
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
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_13(&(Param0[iVar04]), 1);
	}
	Function_13(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_13(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_13(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_65(struct<4>[] Param0) //Position: 0x33AA / 13226
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

bool Function_66(int iParam0, bool bParam1) //Position: 0x33DB / 13275
{
	int iVar0;
	
	iVar0 = Function_62(iParam0);
	if (!Function_61(iVar0))
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

void Function_67(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x3419 / 13337
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
	iParam4 = iParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_68(struct<5> Param0) //Position: 0x3506 / 13574
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_69(int iParam0, var uParam1, int iParam2) //Position: 0x3517 / 13591
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_70() //Position: 0x353A / 13626
{
	var uVar0;
	
	Function_71(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Armadillo_layout");
	}
	*(&iLocal_0 + 48) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_frght_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_freight1", 2,802597E-45f, Vector(-2166,632f, 17,92604f, 2623,95f), Vector(0.0f, 43,58913f, 0.0f), Vector(7,303681f, 4,120967f, 8,164944f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_freight2", 2,802597E-45f, Vector(-2165,33f, 17,59008f, 2631,073f), Vector(0.0f, 0.0f, 0.0f), Vector(8,254868f, 4,865612f, 10,99714f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 8[1]);
	*(&iLocal_0 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_freight3", 2,802597E-45f, Vector(-2170,188f, 17,62566f, 2628,511f), Vector(0.0f, 0.0f, 0.0f), Vector(3,567785f, 5,063824f, 9,828385f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 8[2]);
	*(&iLocal_0 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_freight4", 2,802597E-45f, Vector(-2164,2f, 17,61846f, 2626,088f), Vector(0.0f, 0.0f, 0.0f), Vector(5,617971f, 4,865612f, 14,75492f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 48, &iLocal_0 + 8[3]);
	*(&iLocal_0 + 88) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_gstore_set");
	*(&iLocal_0 + 56[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_genstore1", 2,802597E-45f, Vector(-2148,623f, 19,45428f, 2628,357f), Vector(0.0f, 0.0f, 0.0f), Vector(9,018986f, 7,257872f, 6,779584f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 88, &iLocal_0 + 56[0]);
	*(&iLocal_0 + 56[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_genstore2", 2,802597E-45f, Vector(-2150,207f, 19,1795f, 2624,248f), Vector(0.0f, 0.0f, 0.0f), Vector(5,88572f, 8,090109f, 4,929153f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 88, &iLocal_0 + 56[1]);
	*(&iLocal_0 + 56[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_genstore3", 2,802597E-45f, Vector(-2147,295f, 18,95685f, 2624,88f), Vector(0.0f, -45,37515f, 0.0f), Vector(4,377747f, 8,395872f, 4,236251f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 88, &iLocal_0 + 56[2]);
	*(&iLocal_0 + 120) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_school_set");
	*(&iLocal_0 + 96[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_school1", 2,802597E-45f, Vector(-2070,03f, 20,80161f, 2647,482f), Vector(0.0f, -43,818f, 0.0f), Vector(9,732872f, 4,302454f, 6,564633f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 96[0]);
	*(&iLocal_0 + 96[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_school3", 2,802597E-45f, Vector(-2064,927f, 20,35403f, 2646,409f), Vector(0.0f, 45,16694f, 0.0f), Vector(2,566378f, 3,243175f, 4,281571f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 120, &iLocal_0 + 96[1]);
	*(&iLocal_0 + 160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_train_set");
	*(&iLocal_0 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_train1", 2,802597E-45f, Vector(-2192,03f, 17,9602f, 2607,348f), Vector(0.0f, 0.0f, 0.0f), Vector(10,81388f, 3,428749f, 11,58835f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 128[0]);
	*(&iLocal_0 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_train2", 2,802597E-45f, Vector(-2194,406f, 18,10719f, 2598,847f), Vector(0.0f, 0.0f, 0.0f), Vector(5,65979f, 2,929878f, 5,555932f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 128[1]);
	*(&iLocal_0 + 128[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_train3", 2,802597E-45f, Vector(-2199,583f, 17,91667f, 2605,609f), Vector(0.0f, 0.0f, 0.0f), Vector(4,503301f, 3,15102f, 13,21589f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 128[2]);
	*(&iLocal_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_players_room", 2,802597E-45f, Vector(-2157,796f, 21,3028f, 2597,339f), Vector(0.0f, 0.0f, 0.0f), Vector(6,578471f, 3,303276f, 4,931881f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_bar", 2,802597E-45f, Vector(-2165,405f, 18,34461f, 2594,597f), Vector(0.0f, -0,4111925f, 0.0f), Vector(1,919878f, 3,042958f, 8,634464f));
	*(&iLocal_0 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_saloon_set");
	*(&iLocal_0 + 184[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_saloon3", 2,802597E-45f, Vector(-2164,626f, 19,15142f, 2600,373f), Vector(0.0f, 0.0f, 0.0f), Vector(7,157454f, 8,18234f, 5,185028f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 184[0]);
	*(&iLocal_0 + 184[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_saloon6", 2,802597E-45f, Vector(-2169,66f, 18,83813f, 2591,501f), Vector(0.0f, 0.0f, 0.0f), Vector(8,544957f, 7,659739f, 12,22982f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 184[1]);
	*(&iLocal_0 + 184[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_saloon7", 2,802597E-45f, Vector(-2163,617f, 19,72818f, 2588,009f), Vector(0.0f, 0.0f, 0.0f), Vector(5,472857f, 7,300081f, 5,485521f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 184[2]);
	*(&iLocal_0 + 184[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_saloon8", 2,802597E-45f, Vector(-2162,463f, 21,15556f, 2594,033f), Vector(0.0f, 0.0f, 0.0f), Vector(2,122883f, 2,908195f, 15,72376f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 184[3]);
	*(&iLocal_0 + 184[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_saloon9", 2,802597E-45f, Vector(-2171,786f, 19,40003f, 2586,314f), Vector(0.0f, 0.0f, 0.0f), Vector(3,80377f, 3,109092f, 2,082781f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 184[4]);
	*(&iLocal_0 + 184[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_saloon10", 2,802597E-45f, Vector(-2169,892f, 19,26516f, 2599,158f), Vector(0.0f, 45,37589f, 0.0f), Vector(4,649636f, 7,555864f, 6,160785f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 240, &iLocal_0 + 184[5]);
	*(&iLocal_0 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_fid_h", 2,802597E-45f, Vector(-2137,552f, 20,93539f, 2597,071f), Vector(0.0f, 0.0f, 0.0f), Vector(3,595824f, 2,927304f, 5,704147f));
	*(&iLocal_0 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_pia_h", 2,802597E-45f, Vector(-2112,444f, 19,40613f, 2624,537f), Vector(0.0f, 0.0f, 0.0f), Vector(7,086501f, 6,242682f, 13,23599f));
	*(&iLocal_0 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_bank_h", 2,802597E-45f, Vector(-2122,069f, 19,27977f, 2625,431f), Vector(0.0f, 0.0f, 0.0f), Vector(5,693934f, 5,480673f, 12,26683f));
	*(&iLocal_0 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_shooting", 2,802597E-45f, Vector(-2135,61f, 20,01764f, 2580,766f), Vector(0.0f, 0.0f, 0.0f), Vector(11,22108f, 7,914255f, 22,51829f));
	*(&iLocal_0 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_blacksmith", 2,802597E-45f, Vector(-2149,172f, 17,92179f, 2559,007f), Vector(0.0f, -89,98f, 0.0f), Vector(8,01369f, 2,664779f, 16,68806f));
	*(&iLocal_0 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_dentist", 2,802597E-45f, Vector(-2132f, 17,77041f, 2597,983f), Vector(0.0f, 0.0f, 0.0f), Vector(5,340528f, 2,48129f, 10,32266f));
	*(&iLocal_0 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_dent_h", 2,802597E-45f, Vector(-2131,979f, 21,18124f, 2596,559f), Vector(0.0f, 0.0f, 0.0f), Vector(5,47786f, 2,784811f, 7,78391f));
	*(&iLocal_0 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_undertaker_set");
	*(&iLocal_0 + 304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_undertaker1", 2,802597E-45f, Vector(-2114,143f, 19,01989f, 2595,747f), Vector(0.0f, 0.0f, 0.0f), Vector(12,40284f, 6,03686f, 13,60169f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 304[0]);
	*(&iLocal_0 + 304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_undertaker2", 2,802597E-45f, Vector(-2118,203f, 17,8798f, 2588,128f), Vector(0.0f, 0.0f, 0.0f), Vector(4,319778f, 3,504683f, 2,499442f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 304[1]);
	*(&iLocal_0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "narmv_bank", 2,802597E-45f, Vector(-2129,407f, 17,84599f, 2628,467f), Vector(0.0f, 0.0f, 0.0f), Vector(8,191952f, 2,792115f, 20,49137f));
	*(&iLocal_0 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_holi_h", 2,802597E-45f, Vector(-2078,51f, 19,90768f, 2617,24f), Vector(0.0f, 24,90731f, 0.0f), Vector(14,4173f, 6,761f, 4,612413f));
	*(&iLocal_0 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_stables", 2,802597E-45f, Vector(-2170,963f, 19,70788f, 2571,41f), Vector(0.0f, 0.0f, 0.0f), Vector(9,594739f, 6,563833f, 12,0078f));
	*(&iLocal_0 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_sheriff", 2,802597E-45f, Vector(-2087,63f, 18,07517f, 2604,324f), Vector(0.0f, 25,367f, 0.0f), Vector(7,618929f, 3,152336f, 7,685912f));
	*(&iLocal_0 + 368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "narmv_sh_h", 2,802597E-45f, Vector(-2081,97f, 19,37237f, 2611,213f), Vector(0.0f, 25,38557f, 0.0f), Vector(13,32485f, 6,538599f, 5,412034f));
	*(&iLocal_0 + 376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_hitch_1", 2,802597E-45f, Vector(-2178,225f, 16,5647f, 2562,133f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_hitch_3", 2,802597E-45f, Vector(-2133,416f, 16,47904f, 2606,31f), Vector(0.0f, 89,793f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_hitch_4", 2,802597E-45f, Vector(-2093,571f, 16,44941f, 2599,143f), Vector(0.0f, -67,146f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_hitch_0", 2,802597E-45f, Vector(-2155,571f, 16,44941f, 2604,914f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_0 + 408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_region", 4,203895E-45f, Vector(-2133,138f, 21,46446f, 2600,468f), Vector(0.0f, 60,82643f, 0.0f), Vector(88,1255f, 8,138889f, 100.0f));
	*(&iLocal_0 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ArmPopArea_1_set");
	*(&iLocal_0 + 416[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armpop_1", 2,802597E-45f, Vector(-2082,066f, 20,38f, 2610,247f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 10.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 416[0]);
	*(&iLocal_0 + 416[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armpop_2", 2,802597E-45f, Vector(-2074,872f, 20,3866f, 2640,391f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 10.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 416[1]);
	*(&iLocal_0 + 416[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armpop_3", 2,802597E-45f, Vector(-2154,302f, 20,3866f, 2610,593f), Vector(0.0f, 0.0f, 0.0f), Vector(115.0f, 10.0f, 50.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 416[2]);
	*(&iLocal_0 + 416[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armpop_4", 2,802597E-45f, Vector(-2158,299f, 20,38f, 2571,716f), Vector(0.0f, 0.0f, 0.0f), Vector(33.0f, 10.0f, 28.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 416[3]);
	*(&iLocal_0 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_duelStayOut", 2,802597E-45f, Vector(-2167,432f, 16,75987f, 2612,112f), Vector(0.0f, 0.0f, 0.0f), Vector(16,10118f, 2,950548f, 7,655623f));
	*(&iLocal_0 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_horses_set");
	*(&iLocal_0 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_corr1", 2,802597E-45f, Vector(-2163,38f, 18,69929f, 2529,373f), Vector(0.0f, 0.0f, 0.0f), Vector(21,92858f, 7,914255f, 18,93099f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 472[0]);
	*(&iLocal_0 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_corr3", 2,802597E-45f, Vector(-2172,81f, 18,21145f, 2553,319f), Vector(0.0f, 0.0f, 0.0f), Vector(4,984473f, 4,546495f, 24,02264f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 496, &iLocal_0 + 472[1]);
	*(&iLocal_0 + 520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_pigs_set");
	*(&iLocal_0 + 504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "pigs", 2,802597E-45f, Vector(-2201,519f, 17,93718f, 2580,826f), Vector(0.0f, 0.0f, 0.0f), Vector(11,84606f, 4,342653f, 14,19223f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 520, &iLocal_0 + 504[0]);
	*(&iLocal_0 + 552) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_sheep_set");
	*(&iLocal_0 + 528[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sheep1", 2,802597E-45f, Vector(-2196,418f, 17,81848f, 2563,422f), Vector(0.0f, 0.0f, 0.0f), Vector(3,019494f, 4,449552f, 18,62837f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 552, &iLocal_0 + 528[0]);
	*(&iLocal_0 + 528[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "sheep2", 2,802597E-45f, Vector(-2192,323f, 17,81848f, 2570,334f), Vector(0.0f, 0.0f, 0.0f), Vector(3,019494f, 4,449552f, 32,74143f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 552, &iLocal_0 + 528[1]);
	*(&iLocal_0 + 600) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_dogs_set");
	*(&iLocal_0 + 560[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs3", 4,203895E-45f, Vector(-2131,869f, 20,07885f, 2561,108f), Vector(0.0f, 73,21918f, 0.0f), Vector(23,26242f, 4,30682f, 37,89078f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 600, &iLocal_0 + 560[0]);
	*(&iLocal_0 + 560[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs2", 4,203895E-45f, Vector(-2142,907f, 19,18614f, 2611,595f), Vector(0.0f, -0,6402224f, 0.0f), Vector(42,99439f, 3,209314f, 8,519307f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 600, &iLocal_0 + 560[1]);
	*(&iLocal_0 + 560[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs1", 4,203895E-45f, Vector(-2182,031f, 20,48716f, 2587,995f), Vector(0.0f, 1,045037f, 0.0f), Vector(5,128937f, 4,552561f, 52,86277f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 600, &iLocal_0 + 560[2]);
	*(&iLocal_0 + 560[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dogs4", 4,203895E-45f, Vector(-2091,537f, 19,73709f, 2625,416f), Vector(0.0f, 39,81729f, 0.0f), Vector(8,65133f, 7,260193f, 23,08519f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 600, &iLocal_0 + 560[3]);
	*(&iLocal_0 + 648) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_birds_set");
	*(&iLocal_0 + 608[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds2", 4,203895E-45f, Vector(-2158,319f, 19,54676f, 2547,778f), Vector(0.0f, 20.0f, 0.0f), Vector(38,18281f, 5,443854f, 36,51648f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 608[0]);
	*(&iLocal_0 + 608[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds1", 4,203895E-45f, Vector(-2198,048f, 20,0438f, 2574,1f), Vector(0.0f, 2,145673f, 0.0f), Vector(17,22327f, 4,298422f, 29,78685f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 608[1]);
	*(&iLocal_0 + 608[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds3", 4,203895E-45f, Vector(-2141,584f, 19,12232f, 2610,437f), Vector(0.0f, 0,1460683f, 0.0f), Vector(74,44128f, 7,713831f, 35,78056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 608[2]);
	*(&iLocal_0 + 608[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birds4", 4,203895E-45f, Vector(-2072,425f, 22,73413f, 2644,251f), Vector(0.0f, 20.0f, 0.0f), Vector(17,22327f, 4,807184f, 17,22327f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 648, &iLocal_0 + 608[3]);
	*(&iLocal_0 + 688) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_chickens_set");
	*(&iLocal_0 + 656[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chix1", 4,203895E-45f, Vector(-2145,043f, 20,64889f, 2544,012f), Vector(0.0f, 2,202978f, 0.0f), Vector(8,078754f, 5,228328f, 5,702032f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 688, &iLocal_0 + 656[0]);
	*(&iLocal_0 + 656[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chix2", 4,203895E-45f, Vector(-2135,891f, 20,64889f, 2544,229f), Vector(0.0f, 20.0f, 0.0f), Vector(6,384871f, 4,5316f, 6,384871f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 688, &iLocal_0 + 656[1]);
	*(&iLocal_0 + 656[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chix3", 4,203895E-45f, Vector(-2152,433f, 16,38396f, 2565,527f), Vector(0.0f, -32,12381f, 0.0f), Vector(11,51274f, 4,122554f, 19,24498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 688, &iLocal_0 + 656[2]);
	*(&iLocal_0 + 776) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_workers_set");
	*(&iLocal_0 + 696[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop1", 2,802597E-45f, Vector(-2201,518f, 17,4963f, 2580,591f), Vector(0.0f, 0.0f, 0.0f), Vector(11,25053f, 6,238204f, 13,55644f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[0]);
	*(&iLocal_0 + 696[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop2", 2,802597E-45f, Vector(-2190,824f, 18,28689f, 2571,226f), Vector(0.0f, 0.0f, 0.0f), Vector(4,38313f, 4,662551f, 34,72743f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[1]);
	*(&iLocal_0 + 696[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop3", 2,802597E-45f, Vector(-2194,574f, 18,19651f, 2557,426f), Vector(0.0f, 0.0f, 0.0f), Vector(7,118588f, 5,362353f, 7,118588f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[2]);
	*(&iLocal_0 + 696[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop4", 2,802597E-45f, Vector(-2170,509f, 19,21796f, 2558,176f), Vector(0.0f, 0.0f, 0.0f), Vector(5,921895f, 6,353286f, 33,88371f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[3]);
	*(&iLocal_0 + 696[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop5", 2,802597E-45f, Vector(-2163,523f, 18,45101f, 2540,789f), Vector(0.0f, 0.0f, 0.0f), Vector(17,22323f, 5,285994f, 5,701241f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[4]);
	*(&iLocal_0 + 696[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop6", 2,802597E-45f, Vector(-2199,095f, 19,17662f, 2607,873f), Vector(0.0f, 0.0f, 0.0f), Vector(22,89204f, 6,069724f, 30,7337f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[5]);
	*(&iLocal_0 + 696[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_m_pop_street5", 2,802597E-45f, Vector(-2153,729f, 20,50986f, 2574,687f), Vector(0.0f, 89,78162f, 0.0f), Vector(20,42573f, 9,065599f, 24,34282f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[6]);
	*(&iLocal_0 + 696[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop7", 2,802597E-45f, Vector(-2107,026f, 16,45444f, 2624,001f), Vector(0.0f, 0.0f, 0.0f), Vector(3,832116f, 6,390423f, 6,272371f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[7]);
	*(&iLocal_0 + 696[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "workersPop8", 2,802597E-45f, Vector(-2137,461f, 18,26782f, 2625,678f), Vector(0.0f, 0.0f, 0.0f), Vector(5,900992f, 3,903363f, 4,906172f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 696[8]);
	*(&iLocal_0 + 784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_TrnPlatform", 2,802597E-45f, Vector(-2200,446f, 17,62119f, 2608,595f), Vector(0.0f, 0.0f, 0.0f), Vector(21,06317f, 9,090218f, 27,00399f));
	*(&iLocal_0 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_fff", 2,802597E-45f, Vector(-2196,279f, 17,57178f, 2591,825f), Vector(0.0f, 359,4957f, 0.0f), Vector(9,39573f, 4,115315f, 6,585201f));
	*(&iLocal_0 + 800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_cell01", 2,802597E-45f, Vector(-2082,112f, 18,13884f, 2601,765f), Vector(0.0f, 24,73553f, 0.0f), Vector(3,121904f, 3,040588f, 8,127781f));
	*(&iLocal_0 + 848) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_saloonBalcony_set");
	*(&iLocal_0 + 808[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonBalcony1", 2,802597E-45f, Vector(-2163,824f, 20,50568f, 2604,708f), Vector(0.0f, 0.0f, 0.0f), Vector(11,73491f, 7,378105f, 2,58106f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 848, &iLocal_0 + 808[0]);
	*(&iLocal_0 + 808[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonBalcony2", 2,802597E-45f, Vector(-2157,821f, 20,50568f, 2601,393f), Vector(0.0f, 0.0f, 0.0f), Vector(4,580815f, 7,378105f, 2,773947f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 848, &iLocal_0 + 808[1]);
	*(&iLocal_0 + 808[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonBalcony3", 2,802597E-45f, Vector(-2172,936f, 20,27677f, 2601,975f), Vector(0.0f, 45,53014f, 0.0f), Vector(2,822424f, 7,378105f, 8,92014f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 848, &iLocal_0 + 808[2]);
	*(&iLocal_0 + 808[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "saloonBalcony4", 2,802597E-45f, Vector(-2175,582f, 19,95216f, 2595,1f), Vector(0.0f, 0.0f, 0.0f), Vector(2,519257f, 7,378105f, 6,485752f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 848, &iLocal_0 + 808[3]);
	*(&iLocal_0 + 856) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_SOL_FTE_cutsceneTrigger", 2,802597E-45f, Vector(-2128,694f, 17,64448f, 2620,274f), Vector(0.0f, 0.0f, 0.0f), Vector(1,242989f, 3,087706f, 1.0f));
	*(&iLocal_0 + 864) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_bank_vault", 2,802597E-45f, Vector(-2129,521f, 17,84599f, 2633,21f), Vector(0.0f, 0.0f, 0.0f), Vector(8,919443f, 2,792115f, 11,03533f));
	*(&iLocal_0 + 872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_balconyWhore", 2,802597E-45f, Vector(-2173,254f, 22,00208f, 2602,409f), Vector(0.0f, -44,77693f, 0.0f), Vector(7,513614f, 4,213365f, 1,778805f));
	*(&iLocal_0 + 928) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_street_pop_set");
	*(&iLocal_0 + 880[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_m_pop_street8", 2,802597E-45f, Vector(-2085,908f, 19,44698f, 2634,003f), Vector(0.0f, 50,72328f, 0.0f), Vector(3,662755f, 8,792936f, 24,62952f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 928, &iLocal_0 + 880[0]);
	*(&iLocal_0 + 880[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_m_pop_street7", 2,802597E-45f, Vector(-2093,883f, 15,646f, 2615,277f), Vector(0.0f, -107,6826f, 0.0f), Vector(12,04712f, 7,380057f, 28,6123f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 928, &iLocal_0 + 880[1]);
	*(&iLocal_0 + 880[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_m_pop_street6", 2,802597E-45f, Vector(-2149,808f, 21,34438f, 2593,457f), Vector(0.0f, 0.0f, 0.0f), Vector(7,320671f, 10,71243f, 14,30037f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 928, &iLocal_0 + 880[2]);
	*(&iLocal_0 + 880[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_m_pop_street4", 2,802597E-45f, Vector(-2141,298f, 18,54541f, 2610,915f), Vector(0.0f, 0.0f, 0.0f), Vector(66,58459f, 5,510391f, 20,00427f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 928, &iLocal_0 + 880[3]);
	*(&iLocal_0 + 880[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_m_pop_street3", 2,802597E-45f, Vector(-2181,888f, 19,00749f, 2606,667f), Vector(0.0f, 0,6578003f, 0.0f), Vector(14,54376f, 6,337402f, 27,7212f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 928, &iLocal_0 + 880[4]);
	*(&iLocal_0 + 936) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_MovieHouse", 2,802597E-45f, Vector(-2078,399f, 20,16009f, 2642,17f), Vector(0.0f, 44,46211f, 0.0f), Vector(2,082665f, 3,174834f, 2,082665f));
	*(&iLocal_0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_bankerTrespass", 2,802597E-45f, Vector(-2129,191f, 17,20968f, 2633,001f), Vector(0.0f, 0.0f, 0.0f), Vector(8,403374f, 4,123871f, 11,32852f));
	*(&iLocal_0 + 952) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_bankerEnter", 2,802597E-45f, Vector(-2128,644f, 17,10956f, 2620,879f), Vector(0.0f, 0.0f, 0.0f), Vector(2,942402f, 5,077019f, 2,877066f));
	*(&iLocal_0 + 960) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_Poker", 2,802597E-45f, Vector(-2157,767f, 17,21778f, 2595,741f), Vector(0.0f, 0.0f, 0.0f), Vector(5,964023f, 3,691727f, 6,788969f));
	*(&iLocal_0 + 1040) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_nightCritters_set");
	*(&iLocal_0 + 968[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters8", 2,802597E-45f, Vector(-2137,734f, 16,09741f, 2636,894f), Vector(0.0f, 0.0f, 0.0f), Vector(6,113838f, 7,651935f, 27,43498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[0]);
	*(&iLocal_0 + 968[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters7", 2,802597E-45f, Vector(-2157,262f, 15,51682f, 2635,014f), Vector(0.0f, 0.0f, 0.0f), Vector(6,406193f, 7,651935f, 27,43498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[1]);
	*(&iLocal_0 + 968[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters6", 2,802597E-45f, Vector(-2162,352f, 16,09741f, 2580,896f), Vector(0.0f, 0.0f, 0.0f), Vector(23,98816f, 7,651935f, 5,88636f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[2]);
	*(&iLocal_0 + 968[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters5", 2,802597E-45f, Vector(-2121,336f, 16,09741f, 2586,233f), Vector(0.0f, 0.0f, 0.0f), Vector(1,737831f, 7,651935f, 27,43498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[3]);
	*(&iLocal_0 + 968[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters4", 2,802597E-45f, Vector(-2117,811f, 16,09741f, 2635,336f), Vector(0.0f, 0.0f, 0.0f), Vector(2,368204f, 7,651935f, 27,43498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[4]);
	*(&iLocal_0 + 968[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters3", 2,802597E-45f, Vector(-2147,469f, 15,39503f, 2638,041f), Vector(0.0f, 0.0f, 0.0f), Vector(12,85403f, 7,651935f, 11,21697f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[5]);
	*(&iLocal_0 + 968[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters2", 2,802597E-45f, Vector(-2116,271f, 16,09741f, 2636,265f), Vector(0.0f, 0.0f, 0.0f), Vector(15,62469f, 7,651935f, 9,739089f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[6]);
	*(&iLocal_0 + 968[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ncritters1", 2,802597E-45f, Vector(-2177,145f, 16,09741f, 2550,811f), Vector(0.0f, 0.0f, 0.0f), Vector(2,251354f, 7,651935f, 27,43498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1040, &iLocal_0 + 968[7]);
	*(&iLocal_0 + 1048) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_streetSpawn", 2,802597E-45f, Vector(-2144,206f, 16,09741f, 2610,982f), Vector(0.0f, 0.0f, 0.0f), Vector(86,20792f, 18,66449f, 20,56335f));
	*(&iLocal_0 + 1056) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_schoolhouse_room", 2,802597E-45f, Vector(-2064,416f, 20,36456f, 2652,149f), Vector(0.0f, 45,37799f, 0.0f), Vector(8,442223f, 4,07777f, 4,048793f));
	*(&iLocal_0 + 1088) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_gunsmith_set");
	*(&iLocal_0 + 1064[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_gunsmith01", 2,802597E-45f, Vector(-2137,241f, 17,93652f, 2596,005f), Vector(0.0f, 0.0f, 0.0f), Vector(3,025971f, 2,832442f, 7,494035f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1088, &iLocal_0 + 1064[0]);
	*(&iLocal_0 + 1064[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_gunsmith02", 2,802597E-45f, Vector(-2141,175f, 17,93652f, 2596,286f), Vector(0.0f, 0.0f, 0.0f), Vector(6,317639f, 2,832442f, 7,494035f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1088, &iLocal_0 + 1064[1]);
	*(&iLocal_0 + 1128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_doctor_set");
	*(&iLocal_0 + 1096[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_doctor01", 2,802597E-45f, Vector(-2127,114f, 18,36712f, 2599,681f), Vector(0.0f, 0.0f, 0.0f), Vector(1,483378f, 2,74417f, 0,2374881f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1128, &iLocal_0 + 1096[0]);
	*(&iLocal_0 + 1096[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_doctor02", 2,802597E-45f, Vector(-2123,599f, 18,36712f, 2599,681f), Vector(0.0f, 0.0f, 0.0f), Vector(1,483378f, 2,74417f, 0,2374881f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1128, &iLocal_0 + 1096[1]);
	*(&iLocal_0 + 1096[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_doctor03", 2,802597E-45f, Vector(-2125,317f, 17,97651f, 2596,491f), Vector(0.0f, 0.0f, 0.0f), Vector(5,23867f, 2,74417f, 6,166394f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1128, &iLocal_0 + 1096[2]);
	*(&iLocal_0 + 1136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "narmv_gs_h", 2,802597E-45f, Vector(-2142,061f, 21,05455f, 2597,113f), Vector(0.0f, 0.0f, 0.0f), Vector(4,455796f, 2,99096f, 5,750332f));
	*(&iLocal_0 + 1168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "armv_toughGuys_set");
	*(&iLocal_0 + 1144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_toughGuys01", 2,802597E-45f, Vector(-2170,239f, 18,10079f, 2596,339f), Vector(0.0f, 0.0f, 0.0f), Vector(7,206587f, 4,075381f, 3,323466f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1168, &iLocal_0 + 1144[0]);
	*(&iLocal_0 + 1144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "armv_toughGuys02", 2,802597E-45f, Vector(-2172,296f, 17,9828f, 2593,331f), Vector(0.0f, 0.0f, 0.0f), Vector(3,352906f, 4,244436f, 2,899486f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1168, &iLocal_0 + 1144[1]);
	*(&iLocal_0 + 1176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_ARMAddKO", 2,802597E-45f, Vector(-2163,343f, 16,51208f, 2594,041f), Vector(0.0f, 0.0f, 0.0f), Vector(4,827116f, 6,919012f, 9,525903f));
	*(&iLocal_0 + 1184) = Vector(-2170,9f, 16,8744f, 2600,287f);
	*(&iLocal_0 + 1184 + 12) = Vector(0.0f, 127,8909f, 0.0f);
	*(&iLocal_0 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_bodytossvictim", Vector(-2170,9f, 16,8744f, 2600,287f), Vector(0.0f, 127,8909f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_report_crime", Vector(-2095,491f, 16,449f, 2608,188f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_clear_bounty", Vector(-2193,216f, 16,94845f, 2601,375f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "cho_f_merc_giver", Vector(-2190,422f, 16,58f, 2613,903f), Vector(0.0f, 2,644236f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_jail_sit", Vector(-2080,289f, 16,962f, 2603,609f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_jail_leave_start", Vector(-2087,268f, 16,962f, 2604,136f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_jail_leave_end", Vector(-2092,863f, 16,449f, 2606,482f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1216) = Vector(-2170,649f, 17,68509f, 2596,44f);
	*(&iLocal_0 + 1216 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkingMG", Vector(-2170,649f, 17,68509f, 2596,44f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1248) = Vector(-2168,076f, 16,86944f, 2597,722f);
	*(&iLocal_0 + 1248 + 12) = Vector(0.0f, 48,44841f, 0.0f);
	*(&iLocal_0 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkcrowd1", Vector(-2168,076f, 16,86944f, 2597,722f), Vector(0.0f, 48,44841f, 0.0f));
	*(&iLocal_0 + 1280) = Vector(-2170,211f, 16,86944f, 2598,316f);
	*(&iLocal_0 + 1280 + 12) = Vector(0.0f, 17,33325f, 0.0f);
	*(&iLocal_0 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkcrowd2", Vector(-2170,211f, 16,86944f, 2598,316f), Vector(0.0f, 17,33325f, 0.0f));
	*(&iLocal_0 + 1312) = Vector(-2171,893f, 16,86944f, 2598,577f);
	*(&iLocal_0 + 1312 + 12) = Vector(0.0f, -16,90825f, 0.0f);
	*(&iLocal_0 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkcrowd3", Vector(-2171,893f, 16,86944f, 2598,577f), Vector(0.0f, -16,90825f, 0.0f));
	*(&iLocal_0 + 1344) = Vector(-2169,171f, 16,86944f, 2598,501f);
	*(&iLocal_0 + 1344 + 12) = Vector(0.0f, 32,87228f, 0.0f);
	*(&iLocal_0 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkcrowd4", Vector(-2169,171f, 16,86944f, 2598,501f), Vector(0.0f, 32,87228f, 0.0f));
	*(&iLocal_0 + 1376) = Vector(-2171,027f, 16,86944f, 2598,789f);
	*(&iLocal_0 + 1376 + 12) = Vector(0.0f, -8,958943f, 0.0f);
	*(&iLocal_0 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkcrowd5", Vector(-2171,027f, 16,86944f, 2598,789f), Vector(0.0f, -8,958943f, 0.0f));
	*(&iLocal_0 + 1408) = Vector(-2169,841f, 16,86944f, 2599,399f);
	*(&iLocal_0 + 1408 + 12) = Vector(-0,4901945f, 8,718404f, -0,5253778f);
	*(&iLocal_0 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinkcrowd6", Vector(-2169,841f, 16,86944f, 2599,399f), Vector(-0,4901945f, 8,718404f, -0,5253778f));
	*(&iLocal_0 + 1440) = Vector(-2169,429f, 16,86944f, 2597,374f);
	*(&iLocal_0 + 1440 + 12) = Vector(0.0f, 12,72948f, 0.0f);
	*(&iLocal_0 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_drinksrch", Vector(-2169,429f, 16,86944f, 2597,374f), Vector(0.0f, 12,72948f, 0.0f));
	*(&iLocal_0 + 1472) = Vector(-2181,389f, 16,277f, 2586,534f);
	*(&iLocal_0 + 1472 + 12) = Vector(0.0f, 188,801f, 0.0f);
	*(&iLocal_0 + 1496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel1", Vector(-2181,389f, 16,277f, 2586,534f), Vector(0.0f, 188,801f, 0.0f));
	*(&iLocal_0 + 1504) = Vector(-2181,338f, 16,294f, 2599,876f);
	*(&iLocal_0 + 1504 + 12) = Vector(0.0f, 1,264f, 0.0f);
	*(&iLocal_0 + 1528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel1", Vector(-2181,338f, 16,294f, 2599,876f), Vector(0.0f, 1,264f, 0.0f));
	*(&iLocal_0 + 1536) = Vector(-2129,266f, 16,097f, 2611,822f);
	*(&iLocal_0 + 1536 + 12) = Vector(0.0f, 88,504f, 0.0f);
	*(&iLocal_0 + 1560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel2", Vector(-2129,266f, 16,097f, 2611,822f), Vector(0.0f, 88,504f, 0.0f));
	*(&iLocal_0 + 1568) = Vector(-2137,4f, 16,098f, 2611,296f);
	*(&iLocal_0 + 1568 + 12) = Vector(0.0f, 264,2684f, 0.0f);
	*(&iLocal_0 + 1592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel12", Vector(-2137,4f, 16,098f, 2611,296f), Vector(0.0f, 264,2684f, 0.0f));
	*(&iLocal_0 + 1600) = Vector(-2116,527f, 16,445f, 2566,926f);
	*(&iLocal_0 + 1600 + 12) = Vector(0.0f, 227,854f, 0.0f);
	*(&iLocal_0 + 1624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel3", Vector(-2116,527f, 16,445f, 2566,926f), Vector(0.0f, 227,854f, 0.0f));
	*(&iLocal_0 + 1632) = Vector(-2109,878f, 16,301f, 2572,269f);
	*(&iLocal_0 + 1632 + 12) = Vector(0.0f, 55,16524f, 0.0f);
	*(&iLocal_0 + 1656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel13", Vector(-2109,878f, 16,301f, 2572,269f), Vector(0.0f, 55,16524f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_cell_leave_end", Vector(-2087,215f, 16,962f, 2603,952f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_cell_leave_cop", Vector(-2083,469f, 16,962f, 2605,973f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1664) = Vector(-2192,53f, 16,98591f, 2607,551f);
	*(&iLocal_0 + 1664 + 12) = Vector(0.0f, -92,6777f, 0.0f);
	*(&iLocal_0 + 1688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_train", Vector(-2192,53f, 16,98591f, 2607,551f), Vector(0.0f, -92,6777f, 0.0f));
	*(&iLocal_0 + 1696) = Vector(-2167,233f, 16,29295f, 2590,677f);
	*(&iLocal_0 + 1696 + 12) = Vector(0.0f, 151,3821f, 0.0f);
	*(&iLocal_0 + 1720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_saloon", Vector(-2167,233f, 16,29295f, 2590,677f), Vector(0.0f, 151,3821f, 0.0f));
	*(&iLocal_0 + 1728) = Vector(-2170,675f, 16,29295f, 2571,132f);
	*(&iLocal_0 + 1728 + 12) = Vector(0.0f, -90,65844f, 0.0f);
	*(&iLocal_0 + 1752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_barn", Vector(-2170,675f, 16,29295f, 2571,132f), Vector(0.0f, -90,65844f, 0.0f));
	*(&iLocal_0 + 1760) = Vector(-2145,966f, 16,62962f, 2558,591f);
	*(&iLocal_0 + 1760 + 12) = Vector(0.0f, -83,30785f, 0.0f);
	*(&iLocal_0 + 1784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_blacksmith", Vector(-2145,966f, 16,62962f, 2558,591f), Vector(0.0f, -83,30785f, 0.0f));
	*(&iLocal_0 + 1792) = Vector(-2124,392f, 16,88521f, 2596,95f);
	*(&iLocal_0 + 1792 + 12) = Vector(0.0f, 188,1912f, 0.0f);
	*(&iLocal_0 + 1816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_doctor", Vector(-2124,392f, 16,88521f, 2596,95f), Vector(0.0f, 188,1912f, 0.0f));
	*(&iLocal_0 + 1824) = Vector(-2171,142f, 19,417f, 2614,241f);
	*(&iLocal_0 + 1824 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_0 + 1848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store", Vector(-2171,142f, 19,417f, 2614,241f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_0 + 1856) = Vector(-2171,126f, 19,266f, 2619,119f);
	*(&iLocal_0 + 1856 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_0 + 1880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store", Vector(-2171,126f, 19,266f, 2619,119f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_0 + 1888) = Vector(-2169,112f, 16,353f, 2616,786f);
	*(&iLocal_0 + 1888 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_0 + 1912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store", Vector(-2169,112f, 16,353f, 2616,786f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_0 + 1920) = Vector(-2167,672f, 16,446f, 2618,763f);
	*(&iLocal_0 + 1920 + 12) = Vector(0.0f, 186,5209f, 0.0f);
	*(&iLocal_0 + 1944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store", Vector(-2167,672f, 16,446f, 2618,763f), Vector(0.0f, 186,5209f, 0.0f));
	*(&iLocal_0 + 1952) = Vector(-2147,907f, 16,75869f, 2625,732f);
	*(&iLocal_0 + 1952 + 12) = Vector(0.0f, -47,42524f, 0.0f);
	*(&iLocal_0 + 1976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_store1", Vector(-2147,907f, 16,75869f, 2625,732f), Vector(0.0f, -47,42524f, 0.0f));
	*(&iLocal_0 + 1984) = Vector(-2140,414f, 19,422f, 2614,436f);
	*(&iLocal_0 + 1984 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_0 + 2008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store1", Vector(-2140,414f, 19,422f, 2614,436f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_0 + 2016) = Vector(-2145,155f, 19,271f, 2615,582f);
	*(&iLocal_0 + 2016 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_0 + 2040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store1", Vector(-2145,155f, 19,271f, 2615,582f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_0 + 2048) = Vector(-2142,419f, 16,358f, 2617f);
	*(&iLocal_0 + 2048 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_0 + 2072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store1", Vector(-2142,419f, 16,358f, 2617f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_0 + 2080) = Vector(-2144,009f, 16,451f, 2618,859f);
	*(&iLocal_0 + 2080 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_0 + 2104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store1", Vector(-2144,009f, 16,451f, 2618,859f), Vector(0.0f, 109,9197f, 0.0f));
	*(&iLocal_0 + 2112) = Vector(-2129,354f, 16,612f, 2625,168f);
	*(&iLocal_0 + 2112 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 2136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_bank", Vector(-2129,354f, 16,612f, 2625,168f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 2144) = Vector(-2072,198f, 19,52868f, 2645,46f);
	*(&iLocal_0 + 2144 + 12) = Vector(0.0f, 403,5858f, 0.0f);
	*(&iLocal_0 + 2168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_interiorPoint_school", Vector(-2072,198f, 19,52868f, 2645,46f), Vector(0.0f, 403,5858f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos1", Vector(-2206,391f, 21,152f, 2620,89f), Vector(-6,655f, -71,456f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos2", Vector(-2189,48f, 17,958f, 2560,31f), Vector(3,982f, -157,227f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos3", Vector(-2069,693f, 24,095f, 2694,148f), Vector(-2,511f, 19,024f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos4", Vector(-2077,736f, 18,772f, 2554,519f), Vector(0,713f, 152,712f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos5", Vector(-2185,318f, 17,46f, 2608,777f), Vector(8,913f, -55,198f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos6", Vector(-2190,373f, 17,537f, 2618,18f), Vector(4,15f, -53,746f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos7", Vector(-2179,656f, 17,569f, 2613,073f), Vector(4,859f, -85,196f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos8", Vector(-2102,336f, 17,888f, 2614,594f), Vector(10,192f, 36,687f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos9", Vector(-2101,417f, 18,144f, 2619,773f), Vector(2,389f, 67,828f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "arm_vista_cam_pos10", Vector(-2086,482f, 18,417f, 2633,734f), Vector(13,618f, -117,103f, 0.0f));
	*(&iLocal_0 + 2176) = Vector(-2191,645f, 16,98591f, 2607,489f);
	*(&iLocal_0 + 2176 + 12) = Vector(0.0f, -92,6777f, 0.0f);
	*(&iLocal_0 + 2200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_player_shop_flag", Vector(-2191,645f, 16,98591f, 2607,489f), Vector(0.0f, -92,6777f, 0.0f));
	*(&iLocal_0 + 2208) = Vector(-2131,836f, 16,266f, 2615,536f);
	*(&iLocal_0 + 2208 + 12) = Vector(0.0f, 109,9197f, 0.0f);
	*(&iLocal_0 + 2232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store1", Vector(-2131,836f, 16,266f, 2615,536f), Vector(0.0f, 109,9197f, 0.0f));
	return 1;
}

void Function_71(int iParam0, int iParam1) //Position: 0x68CA / 26826
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

var Function_72() //Position: 0x6914 / 26900
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_73(char* cParam0) //Position: 0x6929 / 26921
{
	if (!Function_54(128))
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

