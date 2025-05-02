//Decompiled with MagicRDR v1.0
//Function Count : 121
//Statics Count : 1150
//Natives Count : 178
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	var uLocal_20 = 13;
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
	var uLocal_50 = 7;
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
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 1;
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
	var uLocal_92 = 19;
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
	var uLocal_134 = 20;
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
	var uLocal_178 = 2;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 2;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 2;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 1;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 3;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 2;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 3;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
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
	var uLocal_256 = 4;
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
	var uLocal_268 = 2;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 2;
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
	var uLocal_294 = 1;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 2;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 2;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 2;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 2;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 6;
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
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	var uLocal_840 = 0;
	bool bLocal_841 = false;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 21;
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
	char[] cLocal_976[4] = 0;
	var uLocal_977 = 0;
	struct<4> Local_978[20];
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
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_838 = 0;
	iLocal_839 = &iScriptParam_0;
	Function_120("Initializing Thieves Landing Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_841 = 500;
		uLocal_842 = Function_119();
		switch (iLocal_838)
		{
			case 0x00000000:
				if (Function_117())
				{
					cLocal_976 = Function_116(&iLocal_0, "thievesLanding", iScriptParam_0);
					iLocal_838 = 1;
				}
				bLocal_841 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_976))
				{
					iLocal_838 = 2;
				}
				bLocal_841 = false;
				break;
			
			case 0x00000002:
				Function_115(&uLocal_844);
				Function_114(&uLocal_844, &uLocal_848, 4, &iLocal_0 + 8, 4294967295, 4);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 296, 4294967295, 2097410);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 360, 4294967295, 0);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 1384, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 736, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 328, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 304, 4294967295, 258);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 16, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 24, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 32, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 768, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 1096, 4294967295, 4106);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 1288, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 40, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 48, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 800, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 936, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 864, 4294967295, 778);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 1192, 4294967295, 1290);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 824, 4294967295, 266);
				Function_114(&uLocal_844, &uLocal_848, 5, &iLocal_0 + 960, 4294967295, 266);
				Function_113(&iLocal_0 + 360, 14, 3);
				Function_111(&Local_978, &cLocal_976, "npigFarm01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 304, 0, 1);
				iLocal_1143 = Function_111(&Local_978, &cLocal_976, "gunsmith01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1096, 1, 0);
				if (iLocal_1143 <= 0 && iLocal_1143 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11434]), 33);
				}
				iLocal_1144 = Function_111(&Local_978, &cLocal_976, "gunsmith01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1096, 0, 0);
				if (iLocal_1144 <= 0 && iLocal_1144 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11444]), 33);
				}
				iLocal_1140 = Function_111(&Local_978, &cLocal_976, "tailorsDoctors01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1288, 1, 0);
				if (iLocal_1140 <= 0 && iLocal_1140 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11404]), 33);
				}
				iLocal_1141 = Function_111(&Local_978, &cLocal_976, "tailorsDoctors01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1288, 0, 0);
				if (iLocal_1141 <= 0 && iLocal_1141 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11414]), 33);
				}
				iLocal_1142 = Function_111(&Local_978, &cLocal_976, "tailorsDoctors01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1288, 1, 0);
				if (iLocal_1142 <= 0 && iLocal_1142 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11424]), 33);
				}
				iLocal_1145 = Function_111(&Local_978, &cLocal_976, "pawnShop01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1384, 1, 0);
				if (iLocal_1145 <= 0 && iLocal_1145 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11454]), 33);
				}
				iLocal_1146 = Function_111(&Local_978, &cLocal_976, "pawnShop01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1384, 0, 0);
				if (iLocal_1146 <= 0 && iLocal_1146 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11464]), 33);
				}
				iLocal_1147 = Function_111(&Local_978, &cLocal_976, "pawnShop01", 3, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 1384, 0, 0);
				if (iLocal_1147 <= 0 && iLocal_1147 > Local_978)
				{
					Function_110(&(Local_978[iLocal_11474]), 33);
				}
				Function_111(&Local_978, &cLocal_976, "tailorsDoctors01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "tailorsDoctors01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "workShed01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "workShed01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "workShed02", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "stable01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "stable01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "nbrothel01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "nbrothel01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "nbrothel01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_111(&Local_978, &cLocal_976, "nbrothel01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_838 = 3;
				bLocal_841 = false;
				break;
			
			case 0x00000003:
				Function_109(&(Global_43791[iLocal_839]), 16);
				Function_108("Finished Initializing Thieves Landing Volumes", 5.0f);
				iLocal_838 = 4;
				break;
			
			case 0x00000004:
				Function_85(&uLocal_844, &uLocal_848, &uLocal_842, iScriptParam_0);
				Function_82(&Local_978, 0);
				if (!Function_80(3))
				{
					if (Function_79(StackVal, StackVal, Global_54078, Vector(174,9852f, 74,38473f, 2182,238f)) > 20.0f)
					{
						Function_12(3, 0, 1, 1, 0);
					}
				}
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_841);
	}
	Function_4(&uLocal_844, &uLocal_848);
	Function_3(&Local_978);
	Function_2();
	Function_1(&(Global_43791[iLocal_839]), 16);
	Function_108("Unloaded Thieves Landing Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x7AD / 1965
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x7C7 / 1991
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x7D3 / 2003
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

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x838 / 2104
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

void Function_5(bool bParam0, int iParam1, int iParam2) //Position: 0x895 / 2197
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
		Function_6(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x97F / 2431
{
	int iVar0;
	
	Function_9(bParam0);
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
	Function_7();
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

void Function_7() //Position: 0xAFE / 2814
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0xB0A / 2826
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

void Function_9(int iParam0) //Position: 0xB54 / 2900
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

void Function_10(struct<17> Param0) //Position: 0xB9A / 2970
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0xBB7 / 2999
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBD5 / 3029
{
	char* cVar0[32];
	
	if (!Function_78(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_77(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_80(bParam0))
	{
		Function_75(456, 1, 0, 0);
		Function_74(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_73(0, 0, 1, 1))
			{
				Function_33(1);
				Function_32(1, 5);
			}
			else
			{
				Function_31();
			}
		}
		Function_25(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_24() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_24() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_22(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_20())
		{
			if (!Function_19(Global_119934, 2))
			{
				Function_13(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_13(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xD31 / 3377
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_15(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_14(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_14(char* cParam0) //Position: 0xDA6 / 3494
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

bool Function_15(int iParam0, var uParam1, int iParam2) //Position: 0xDE0 / 3552
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
		if (Function_17(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_16(uVar0))
		{
			case 0x00000002:
				if (!Function_19(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_16(char* cParam0) //Position: 0xE5C / 3676
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

int Function_17(int iParam0) //Position: 0xEFD / 3837
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_18(&iVar1, 2147483648);
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

void Function_18(int iParam0, int iParam1) //Position: 0xF3A / 3898
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_19(int iParam0, int iParam1) //Position: 0xF50 / 3920
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_20() //Position: 0xF63 / 3939
{
	if (Function_21(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_21(var uParam0, int iParam1) //Position: 0xF7E / 3966
{
	return (uParam0 && iParam1) == 0;
}

void Function_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF8B / 3979
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_23(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_23(int iParam0) //Position: 0x1016 / 4118
{
	char* cVar0[16];
	
	if (!Function_20())
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

bool Function_24() //Position: 0x1055 / 4181
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_25(bool bParam0) //Position: 0x1082 / 4226
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
			if (Function_29(bParam0, Function_30(bVar24)))
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
			if (Function_29(bParam0, Function_30(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_28(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_27(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_26(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_26(int iParam0) //Position: 0x1232 / 4658
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_78(iParam0))
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

void Function_27(bool bParam0, bool bParam1) //Position: 0x1289 / 4745
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

var Function_28(int iParam0) //Position: 0x12AE / 4782
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_78(iParam0))
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

bool Function_29(bool bParam0, int iParam1) //Position: 0x1304 / 4868
{
	int iVar0;
	
	if (!Function_78(bParam0))
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

int Function_30(bool bParam0) //Position: 0x1363 / 4963
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_31() //Position: 0x136F / 4975
{
	return;
}

void Function_32(var uParam0, int iParam1) //Position: 0x1375 / 4981
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_33(bool bParam0) //Position: 0x13B4 / 5044
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_63();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_34();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_18(&Global_99144, 1);
		Function_18(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_34() //Position: 0x1409 / 5129
{
	Function_61();
	Function_60();
	Function_60();
	Function_59();
	Function_59();
	Function_58();
	Function_58();
	Function_41(0);
	Function_41(0);
	Function_39();
	Function_38();
	Function_37();
	Function_36();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_35();
	return;
}

void Function_35() //Position: 0x1454 / 5204
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

void Function_36() //Position: 0x155A / 5466
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

void Function_37() //Position: 0x158D / 5517
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

void Function_38() //Position: 0x1720 / 5920
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

void Function_39() //Position: 0x18D9 / 6361
{
	Function_40(&Global_42918, 1, 0);
	return;
}

void Function_40(struct<2317> Param0) //Position: 0x18E7 / 6375
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
	
	uVar0 = Function_119();
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

struct<8> Function_41(int iParam0) //Position: 0x1B04 / 6916
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
					iVar2 = ((Function_57((50 + iVar4)) + Function_57((183 + iVar4))) + Function_57((90 + iVar4)));
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
	Function_42(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_42(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BAB / 7083
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
		Function_56(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_55(iParam0);
	if (&bParam2)
	{
		Function_43(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_43(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1E47 / 7751
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
					bVar19 = (Function_53(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_53(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_51(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_48(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_45(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_44(), &Var9);
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

var Function_44() //Position: 0x2485 / 9349
{
	int iVar0;
	
	return &iVar0;
}

var Function_45(int iParam0) //Position: 0x248E / 9358
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x249F / 9375
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_47(char* cParam0) //Position: 0x2596 / 9622
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_48(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x25B1 / 9649
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_50(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_49(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_49(int iParam0, int iParam1) //Position: 0x2618 / 9752
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x262A / 9770
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_51(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x263C / 9788
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
	if (((Function_52(iParam0) != 19 || Function_52(iParam0) != 17) || Function_52(iParam0) != 10) || Function_52(iParam0) != 9)
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

int Function_52(int iParam0) //Position: 0x2770 / 10096
{
	return Global_55480[iParam016].f_96;
}

float Function_53(int iParam0) //Position: 0x277F / 10111
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_54(int iParam0) //Position: 0x27B8 / 10168
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_55(int iParam0) //Position: 0x27F5 / 10229
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

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x298F / 10639
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

int Function_57(bool bParam0) //Position: 0x2BD3 / 11219
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_58() //Position: 0x2C14 / 11284
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
		iVar2 = ((Function_57((50 + iVar3) + 15) + Function_57((183 + iVar3) + 15)) + Function_57((90 + iVar3) + 15));
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
	Function_42(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_59() //Position: 0x2C9D / 11421
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
			iVar2 = ((Function_57((50 + iVar3) + 8) + Function_57((183 + iVar3) + 8)) + Function_57((90 + iVar3) + 8));
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
	Function_42(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_60() //Position: 0x2D34 / 11572
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
		iVar2 = ((Function_57((50 + iVar3)) + Function_57((183 + iVar3))) + Function_57((90 + iVar3)));
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
	Function_42(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_61() //Position: 0x2DB3 / 11699
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_62(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_42(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_62(int iParam0, bool bParam1, int iParam2) //Position: 0x2DF0 / 11760
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
	Function_56(iParam0, bParam1, 1);
	Function_55(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_43(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_63() //Position: 0x2FFC / 12284
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_20())
	{
		Function_70(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_70(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_65(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_65(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_64(StackVal, Var0))
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

bool Function_64(vector3 vParam0) //Position: 0x30B3 / 12467
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_65(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x30CB / 12491
{
	int iVar0;
	
	iVar0 = Function_69(&uParam2, &fParam3);
	if (Function_68(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_67(&Global_99144, 1);
			Function_18(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_67(&Global_99144, 2);
			Function_18(&Global_99144, 1);
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
		Function_67(&Global_99144, 2);
		Function_18(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_66();
	return StackVal, Function_66();
}

struct<8> Function_66() //Position: 0x31C3 / 12739
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_67(var uParam0, int iParam1) //Position: 0x31CD / 12749
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_68(int iParam0) //Position: 0x31DE / 12766
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_69(bool bParam0, bool bParam1) //Position: 0x31F4 / 12788
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
				fVar2 = Function_79(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_79(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_68(iVar0) && !&bParam1)
	{
		iVar0 = Function_69(&bParam0, 1);
	}
	return iVar0;
}

struct<8> Function_70(float fParam0, int iParam1) //Position: 0x32C0 / 12992
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_72(&Global_54076, &Var3);
	if (!Function_71(Global_46760[0]))
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
	if (!Function_71(Global_46760[2]))
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
	if (!Function_71(Global_46760[1]))
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
	if (!Function_71(Global_46796[1]))
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
	if (!Function_71(Global_46796[3]))
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
	if (!Function_71(Global_46796[2]))
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
	if (!Function_71(Global_46796[4]))
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
	if (!Function_71(Global_46816[0]))
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
	if (!Function_71(Global_46816[1]))
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
	if (!Function_71(Global_46816[2]))
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
	if (!Function_71(Global_46838[0]))
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
	if (!Function_71(Global_46850[0]))
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
	if (!Function_71(Global_46850[1]))
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
	if (!Function_71(Global_46850[2]))
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
	if (!Function_71(Global_46866[0]))
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
	if (!Function_71(Global_46866[1]))
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
	if (!Function_71(Global_46866[2]))
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
	if (!Function_71(Global_46894[2]))
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
	if (!Function_71(Global_46894[3]))
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
	if (!Function_71(Global_46894[0]))
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
	if (!Function_71(Global_46914[0]))
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
	if (!Function_71(Global_46926[2]))
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
	if (!Function_71(Global_46926[1]))
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
	if (!Function_71(Global_46926[0]))
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
	if (!Function_71(Global_46838[1]))
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
	if (!Function_71(Global_46894[1]))
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
	Function_67(&Global_99144, 2);
	Function_18(&Global_99144, 1);
	iParam1 = 0;
	if (Function_64(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_71(int iParam0) //Position: 0x3AEC / 15084
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_21(uVar0, 0x1000000) || Function_21(uVar0, 0x2000000)) || Function_21(uVar0, 0x4000000)) || !Function_21(uVar0, 0x10000000));
}

void Function_72(var uParam0, int iParam1) //Position: 0x3B27 / 15143
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_73(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3B36 / 15158
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

void Function_74(int iParam0, int iParam1) //Position: 0x3BE5 / 15333
{
	if (!Function_78(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3C3A / 15418
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
	Function_56(iParam0, TO_FLOAT(bParam1), 1);
	Function_55(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_43(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_76(iParam0);
	return 1;
}

void Function_76(int iParam0) //Position: 0x3E62 / 15970
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

bool Function_77(int iParam0) //Position: 0x3F00 / 16128
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_78(int iParam0) //Position: 0x3F1C / 16156
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

float Function_79(struct<2> Param0, struct<2> Param2) //Position: 0x3F32 / 16178
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

bool Function_80(int iParam0) //Position: 0x3F4F / 16207
{
	if (!Function_78(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_81(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_81(int iParam0, int iParam1) //Position: 0x3FA1 / 16289
{
	int iVar0;
	
	if (!Function_78(iParam0))
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

void Function_82(struct<4>[] Param0, bool bParam1) //Position: 0x3FCE / 16334
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
				Function_84(&(Param0[iVar04]), 16384);
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
								Function_83(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_84(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_119(), &Param0[iVar04] + 16))
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
								Function_83(&(Param0[iVar04]), 1);
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
							Function_83(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_84(&(Param0[iVar04]), 1);
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
					Function_83(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_83(&(Param0[iVar04]), 1);
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
					Function_84(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_84(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_119(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_119(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_84(&(Param0[iVar04]), 32768);
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

void Function_83(struct<13> Param0) //Position: 0x43F1 / 17393
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_84(struct<13> Param0) //Position: 0x4404 / 17412
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

void Function_85(vector3 vParam0) //Position: 0x4421 / 17441
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_107(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_86(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_86(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x44AB / 17579
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_106(&vParam0))
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
								Function_104(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_103(&vParam0, 8);
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
								Function_103(&vParam0, 4);
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
				if ((((((bVar1 && Function_102(iParam2)) && !Function_73(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_101(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
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
								Function_103(&vParam0, 16);
								Function_93(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
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
				Function_103(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_102(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_92(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_91(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_103(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_102(iParam2))
					{
						Function_90(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_87(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_87(int iParam0) //Position: 0x4903 / 18691
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_92(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_109(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_75(473, 1, 0, 0);
		iVar0 = Function_89(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_75(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_75(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_75(476, 1, 0, 0);
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
	if (Function_53(473) <= Function_54(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

void Function_88(int iParam0, int iParam1) //Position: 0x49F4 / 18932
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

var Function_89(int iParam0) //Position: 0x4A5E / 19038
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_102(iParam0))
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

void Function_90(var uParam0, int iParam1) //Position: 0x4AB6 / 19126
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_91(int iParam0, var uParam1, var uParam2) //Position: 0x4AC3 / 19139
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_92(var uParam0, int iParam1) //Position: 0x4AED / 19181
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_93(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x4B0A / 19210
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_100(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_99(iParam1))
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
	if (!Function_96(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_44(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_94();
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

void Function_94() //Position: 0x4DBD / 19901
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_95(&uVar0, &uVar1);
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

void Function_95(var uParam0, int iParam1) //Position: 0x4E30 / 20016
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

bool Function_96(bool bParam0) //Position: 0x4E66 / 20070
{
	if (Function_101(256))
	{
		return 0;
	}
	if (Function_101(262144))
	{
		return 0;
	}
	if (Function_98())
	{
		return 0;
	}
	if (!Function_101(1))
	{
		return 0;
	}
	if (!Function_101(4096))
	{
		return 0;
	}
	if (bParam0 && Function_97(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_101(2048))
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

int Function_97(int iParam0) //Position: 0x4EDC / 20188
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_98() //Position: 0x4EED / 20205
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

bool Function_99(int iParam0) //Position: 0x4F06 / 20230
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_100(int iParam0) //Position: 0x4F1C / 20252
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_101(int iParam0) //Position: 0x4F31 / 20273
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_102(int iParam0) //Position: 0x4F4F / 20303
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_103(struct<17> Param0) //Position: 0x4F65 / 20325
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_104(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4F78 / 20344
{
	int iVar0;
	bool bVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_105(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_105(int iParam0, int iParam1) //Position: 0x4FF2 / 20466
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_106(int iParam0) //Position: 0x501B / 20507
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

bool Function_107(int iParam0) //Position: 0x503B / 20539
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_108(char* cParam0) //Position: 0x5057 / 20567
{
	if (!Function_107(128))
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

void Function_109(var uParam0, int iParam1) //Position: 0x5097 / 20631
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_110(vector3 vParam0) //Position: 0x50A8 / 20648
{
	Function_83(&vParam0, 2);
	vParam0.z = bParam1;
	return;
}

var Function_111(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x50BC / 20668
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_112(&Param0);
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
		Function_83(&(Param0[iVar04]), 1);
	}
	Function_83(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_83(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_83(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_112(struct<4>[] Param0) //Position: 0x51B0 / 20912
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

void Function_113(var uParam0, bool bParam1, bool bParam2) //Position: 0x51E1 / 20961
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (64 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 64);
	}
	DECOR_SET_INT(&uParam0, "factionswap", bParam1);
	DECOR_SET_INT(&uParam0, "relationship", bParam2);
	return;
}

void Function_114(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x5263 / 21091
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

void Function_115(struct<5> Param0) //Position: 0x5350 / 21328
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_116(int iParam0, var uParam1, int iParam2) //Position: 0x5361 / 21345
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_117() //Position: 0x5384 / 21380
{
	var uVar0;
	
	Function_118(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_region", 4,203895E-45f, Vector(157,8245f, 77,20833f, 2276,947f), Vector(0.0f, -22,30548f, 0.0f), Vector(89,25361f, 10,78109f, 139,5651f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_blacksmt01", 2,802597E-45f, Vector(155,0737f, 75,32324f, 2192,331f), Vector(0.0f, 24,30487f, 0.0f), Vector(8,257821f, 3,328563f, 10,61006f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_worksh01", 2,802597E-45f, Vector(98,48085f, 74,91336f, 2345,588f), Vector(0.0f, 25,29357f, 0.0f), Vector(5,144279f, 2,5817f, 4,15656f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_worksh02", 2,802597E-45f, Vector(157,0168f, 74,82978f, 2379,273f), Vector(0.0f, 29,80754f, 0.0f), Vector(4,726314f, 2,392609f, 3,92419f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_ferryman01", 2,802597E-45f, Vector(215,3889f, 74,94729f, 2173,373f), Vector(0.0f, -5,316506f, 0.0f), Vector(5,914793f, 2,659859f, 6,658119f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_ferryman04", 2,802597E-45f, Vector(207,6205f, 74,71249f, 2190,771f), Vector(0.0f, -38,85465f, 0.0f), Vector(3,912973f, 2,591383f, 3,651981f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_pigsty", 4,203895E-45f, Vector(121,0913f, 74,47209f, 2221,84f), Vector(0.0f, 20.0f, 0.0f), Vector(4,415372f, 1,538621f, 4,68723f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_corral", 4,203895E-45f, Vector(132,6118f, 74,85609f, 2205,204f), Vector(0.0f, 37,27501f, 0.0f), Vector(8,423597f, 2,028155f, 9,89547f));
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_bridge01", 2,802597E-45f, Vector(123,5683f, 76,1812f, 2258,931f), Vector(0.0f, -18,98038f, 0.0f), Vector(4,802093f, 5,22128f, 41,84421f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pop_north_set");
	*(&iLocal_0 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north2", 2,802597E-45f, Vector(148,9712f, 74,61581f, 2232,105f), Vector(0.0f, 59,90944f, 0.0f), Vector(29,94332f, 4,137205f, 3,242121f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[0]);
	*(&iLocal_0 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north3", 4,203895E-45f, Vector(161,0608f, 73,28625f, 2199,01f), Vector(0.0f, 20.0f, 0.0f), Vector(11,27883f, 2,028646f, 3,151433f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[1]);
	*(&iLocal_0 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north4", 4,203895E-45f, Vector(180,1783f, 73,28625f, 2186,629f), Vector(0.0f, 54,99836f, 0.0f), Vector(9,59743f, 2,119859f, 2,339096f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[2]);
	*(&iLocal_0 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north5", 4,203895E-45f, Vector(170,0913f, 73,28625f, 2192,372f), Vector(0.0f, 51,98636f, 0.0f), Vector(7,597484f, 1,673949f, 3,685028f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[3]);
	*(&iLocal_0 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north6", 4,203895E-45f, Vector(163,4919f, 74,39963f, 2221,517f), Vector(0.0f, -29,38599f, 0.0f), Vector(4,483838f, 1,278007f, 13,89938f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[4]);
	*(&iLocal_0 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north7", 4,203895E-45f, Vector(174,3521f, 74,30711f, 2215,813f), Vector(0.0f, 58,73527f, 0.0f), Vector(6,468067f, 1,177251f, 1,650964f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[5]);
	*(&iLocal_0 + 80[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north8", 4,203895E-45f, Vector(208,8567f, 73,79001f, 2175,116f), Vector(0.0f, -3,115066f, 0.0f), Vector(3,412357f, 1,703234f, 11,6397f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[6]);
	*(&iLocal_0 + 80[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north9", 2,802597E-45f, Vector(155,0827f, 75,76617f, 2212,868f), Vector(0.0f, 0.0f, 0.0f), Vector(8,62606f, 5,306758f, 21,52649f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[7]);
	*(&iLocal_0 + 80[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north10", 2,802597E-45f, Vector(170,386f, 75,34389f, 2205,873f), Vector(0.0f, 8,564591f, 0.0f), Vector(6,534302f, 4,662615f, 20,98273f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[8]);
	*(&iLocal_0 + 80[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north12", 2,802597E-45f, Vector(194,8183f, 75,03023f, 2174,369f), Vector(0.0f, 24,81448f, 0.0f), Vector(29,09678f, 4,176528f, 6,199813f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[9]);
	*(&iLocal_0 + 80[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north13", 2,802597E-45f, Vector(201,3135f, 75,03023f, 2151.0f), Vector(0.0f, -17,54939f, 0.0f), Vector(7,605684f, 4,176528f, 7,066369f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[10]);
	*(&iLocal_0 + 80[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north14", 2,802597E-45f, Vector(203,9715f, 75,03023f, 2159,952f), Vector(0.0f, -78,53359f, 0.0f), Vector(18,65768f, 4,176528f, 6,754061f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[11]);
	*(&iLocal_0 + 80[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_north15", 2,802597E-45f, Vector(170,7682f, 73,91237f, 2187,09f), Vector(0.0f, -33,51815f, 0.0f), Vector(19,16839f, 4,176528f, 5,257403f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 192, &iLocal_0 + 80[12]);
	*(&iLocal_0 + 264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pop_south_set");
	*(&iLocal_0 + 200[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south1", 4,203895E-45f, Vector(131,6314f, 74,36719f, 2317,052f), Vector(0.0f, 6,218808f, 0.0f), Vector(3,231898f, 1,673781f, 6,658037f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[0]);
	*(&iLocal_0 + 200[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south2", 4,203895E-45f, Vector(126,3273f, 74,67719f, 2294,984f), Vector(0.0f, -0,3511052f, 0.0f), Vector(3,358616f, 1,918939f, 6,924263f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[1]);
	*(&iLocal_0 + 200[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south3", 4,203895E-45f, Vector(103,02f, 74,46542f, 2279,74f), Vector(0.0f, -8,911319f, 0.0f), Vector(11,79638f, 1,800613f, 2,512699f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[2]);
	*(&iLocal_0 + 200[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south4", 4,203895E-45f, Vector(134,0428f, 74,78855f, 2289,881f), Vector(0.0f, 2,408496f, 0.0f), Vector(9,666465f, 1,504253f, 1,852265f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[3]);
	*(&iLocal_0 + 200[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south6", 2,802597E-45f, Vector(138,6402f, 75,12931f, 2310,72f), Vector(0.0f, 5,263243f, 0.0f), Vector(13,18791f, 3,131549f, 2,460358f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[4]);
	*(&iLocal_0 + 200[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south7", 2,802597E-45f, Vector(143,3963f, 75,07148f, 2305,959f), Vector(0.0f, 32,35434f, 0.0f), Vector(1,811151f, 3,024818f, 8,032286f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[5]);
	*(&iLocal_0 + 200[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_south8", 2,802597E-45f, Vector(140,8847f, 75,43229f, 2295,153f), Vector(0.0f, 3,502279f, 0.0f), Vector(2,536997f, 3,37885f, 15,25817f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 264, &iLocal_0 + 200[6]);
	*(&iLocal_0 + 296) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_warehouse_set");
	*(&iLocal_0 + 272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_wareho01", 2,802597E-45f, Vector(135,1248f, 75,8347f, 2338,297f), Vector(0.0f, 4,759178f, 0.0f), Vector(21,32398f, 4,709299f, 25,56081f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 296, &iLocal_0 + 272[0]);
	*(&iLocal_0 + 272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_office01", 2,802597E-45f, Vector(139,8391f, 77,93958f, 2327,406f), Vector(0.0f, 4,699532f, 0.0f), Vector(10,79547f, 3,02961f, 5,482237f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 296, &iLocal_0 + 272[1]);
	*(&iLocal_0 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_players_room", 2,802597E-45f, Vector(123,8812f, 77,78061f, 2234,642f), Vector(0.0f, -14,37626f, 0.0f), Vector(5,919429f, 2,313397f, 5,384371f));
	*(&iLocal_0 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pigfarm_set");
	*(&iLocal_0 + 312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pigfarm04", 2,802597E-45f, Vector(129,0281f, 74,09282f, 2222,838f), Vector(0.0f, -14,37626f, 0.0f), Vector(1,831691f, 3,168309f, 2,649456f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 328, &iLocal_0 + 312[0]);
	*(&iLocal_0 + 360) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pop_crateyard_set");
	*(&iLocal_0 + 336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_crates1", 2,802597E-45f, Vector(131,0275f, 74,21799f, 2374,853f), Vector(0.0f, 29,39362f, 0.0f), Vector(33,21996f, 2,804292f, 32,51464f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 360, &iLocal_0 + 336[0]);
	*(&iLocal_0 + 336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_crates2", 2,802597E-45f, Vector(113,4024f, 74,10799f, 2352,969f), Vector(0.0f, 29,8776f, 0.0f), Vector(19,11635f, 2,806043f, 22,6374f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 360, &iLocal_0 + 336[1]);
	*(&iLocal_0 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pop_northdocks_set");
	*(&iLocal_0 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks1", 2,802597E-45f, Vector(172,1815f, 74,71363f, 2241,527f), Vector(0.0f, -30,73822f, 0.0f), Vector(30,36309f, 2,639271f, 1,591717f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[0]);
	*(&iLocal_0 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks2", 2,802597E-45f, Vector(187,7822f, 74,39242f, 2221,338f), Vector(0.0f, -29,92439f, 0.0f), Vector(3,584551f, 2,939461f, 14,95464f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[1]);
	*(&iLocal_0 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks3", 2,802597E-45f, Vector(162,9147f, 73,76353f, 2247,728f), Vector(0.0f, -29,64138f, 0.0f), Vector(4,707134f, 2,658041f, 16,98589f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[2]);
	*(&iLocal_0 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks4", 2,802597E-45f, Vector(178,1139f, 74,65788f, 2233,946f), Vector(0.0f, 59,87977f, 0.0f), Vector(20,47495f, 2,801744f, 2,671454f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[3]);
	*(&iLocal_0 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks5", 2,802597E-45f, Vector(180,2033f, 74,17239f, 2225,094f), Vector(0.0f, -29,69154f, 0.0f), Vector(8,943483f, 1,715685f, 3,834709f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[4]);
	*(&iLocal_0 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks6", 2,802597E-45f, Vector(194,8357f, 74,28354f, 2221,869f), Vector(0.0f, -29,92439f, 0.0f), Vector(9,852716f, 2,170028f, 2,578543f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[5]);
	*(&iLocal_0 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks7", 2,802597E-45f, Vector(207,1491f, 74,22011f, 2195,217f), Vector(0.0f, -39,65355f, 0.0f), Vector(13,42332f, 2,388399f, 2,713911f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[6]);
	*(&iLocal_0 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks8", 2,802597E-45f, Vector(225,8905f, 74,50317f, 2172,428f), Vector(0.0f, -4,654152f, 0.0f), Vector(13,20809f, 2,179824f, 2,973737f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[7]);
	*(&iLocal_0 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks9", 2,802597E-45f, Vector(218,9882f, 74,71426f, 2192,958f), Vector(0.0f, -38,31281f, 0.0f), Vector(9,433097f, 2,848837f, 5,725534f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[8]);
	*(&iLocal_0 + 368[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks10", 2,802597E-45f, Vector(220,5834f, 74,36482f, 2173,678f), Vector(0.0f, -4,504617f, 0.0f), Vector(3,07258f, 1,787071f, 8,043092f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[9]);
	*(&iLocal_0 + 368[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks11", 2,802597E-45f, Vector(213,7891f, 74,88496f, 2167,769f), Vector(0.0f, 0.0f, 0.0f), Vector(14,8581f, 3,339006f, 3,194078f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[10]);
	*(&iLocal_0 + 368[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks12", 2,802597E-45f, Vector(219,4471f, 74,93797f, 2181,675f), Vector(0.0f, -2,504592f, 0.0f), Vector(2,055929f, 3,388585f, 8,079159f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[11]);
	*(&iLocal_0 + 368[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks13", 2,802597E-45f, Vector(213,2854f, 74,59535f, 2194,456f), Vector(0.0f, 49,89083f, 0.0f), Vector(3,238196f, 2,892637f, 8,673741f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[12]);
	*(&iLocal_0 + 368[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks14", 2,802597E-45f, Vector(197,5356f, 74,17527f, 2207,253f), Vector(0.0f, -35,26958f, 0.0f), Vector(15,30875f, 4,494629f, 3,494829f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[13]);
	*(&iLocal_0 + 368[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks15", 2,802597E-45f, Vector(176,6877f, 74,34927f, 2241,519f), Vector(0.0f, 60,33823f, 0.0f), Vector(3,14028f, 1,720393f, 2,034568f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[14]);
	*(&iLocal_0 + 368[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks16", 2,802597E-45f, Vector(218,5803f, 74,57835f, 2186,756f), Vector(0.0f, 66,9302f, 0.0f), Vector(3,988917f, 2,759111f, 2,043288f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[15]);
	*(&iLocal_0 + 368[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks17", 2,802597E-45f, Vector(205,4821f, 72,42951f, 2134,435f), Vector(0.0f, -15,49101f, 0.0f), Vector(12,13918f, 6,384386f, 3,348497f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[16]);
	*(&iLocal_0 + 368[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks18", 2,802597E-45f, Vector(201,5668f, 73,50565f, 2142,833f), Vector(0.0f, -15,49101f, 0.0f), Vector(17,01977f, 9,259377f, 15,96081f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[17]);
	*(&iLocal_0 + 368[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_northdocks19", 2,802597E-45f, Vector(210,6772f, 72,42951f, 2130,707f), Vector(0.0f, -15,49101f, 0.0f), Vector(4,276744f, 6,384386f, 10,22227f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 528, &iLocal_0 + 368[18]);
	*(&iLocal_0 + 704) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pop_southdocks_set");
	*(&iLocal_0 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks1", 2,802597E-45f, Vector(156,1884f, 75,67006f, 2291,035f), Vector(0.0f, 2,882253f, 0.0f), Vector(32,14539f, 3,962106f, 7,934261f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[0]);
	*(&iLocal_0 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks2", 2,802597E-45f, Vector(164,5897f, 75,18113f, 2371,237f), Vector(0.0f, 29,74934f, 0.0f), Vector(16,20259f, 3,630186f, 7,947024f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[1]);
	*(&iLocal_0 + 536[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks3", 2,802597E-45f, Vector(152,9703f, 74,94196f, 2371,393f), Vector(0.0f, 27,99167f, 0.0f), Vector(2,538574f, 3,227758f, 10,06952f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[2]);
	*(&iLocal_0 + 536[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks4", 2,802597E-45f, Vector(148,8927f, 74,99253f, 2338,732f), Vector(0.0f, 2,403996f, 0.0f), Vector(3,074283f, 3,550352f, 34,88313f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[3]);
	*(&iLocal_0 + 536[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks5", 2,802597E-45f, Vector(162,1826f, 74,59475f, 2337,542f), Vector(0.0f, 4,571398f, 0.0f), Vector(2,662015f, 2,993632f, 13,35226f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[4]);
	*(&iLocal_0 + 536[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks6", 2,802597E-45f, Vector(152,1147f, 74,57105f, 2312,998f), Vector(0,05646981f, 4,612943f, 0,04799045f), Vector(10,38041f, 2,962653f, 1,916626f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[5]);
	*(&iLocal_0 + 536[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks7", 2,802597E-45f, Vector(160,6471f, 73,77319f, 2360,302f), Vector(0.0f, 28,09342f, 0.0f), Vector(9,390365f, 2,595971f, 1,685766f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[6]);
	*(&iLocal_0 + 536[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks8", 2,802597E-45f, Vector(155,2133f, 74,94331f, 2333,888f), Vector(0.0f, 4,678422f, 0.0f), Vector(12,1155f, 2,992439f, 5,188836f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[7]);
	*(&iLocal_0 + 536[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks19", 2,802597E-45f, Vector(155,0281f, 74,32098f, 2366,398f), Vector(0.0f, -27,77507f, 0.0f), Vector(1,498345f, 3,33414f, 7,20486f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[8]);
	*(&iLocal_0 + 536[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks9", 2,802597E-45f, Vector(163,1333f, 73,72407f, 2356,023f), Vector(0.0f, -60,03222f, 0.0f), Vector(9,706104f, 2,277886f, 3,192596f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[9]);
	*(&iLocal_0 + 536[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks10", 2,802597E-45f, Vector(145,456f, 75,9418f, 2361,889f), Vector(0.0f, 22,23526f, 0.0f), Vector(2,365049f, 3,247642f, 6,78305f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[10]);
	*(&iLocal_0 + 536[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks11", 2,802597E-45f, Vector(148,8764f, 75,15415f, 2366,036f), Vector(0.0f, -37,07431f, 0.0f), Vector(6,320905f, 3,462404f, 2,525241f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[11]);
	*(&iLocal_0 + 536[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks12", 2,802597E-45f, Vector(145,7576f, 75,34636f, 2354,855f), Vector(0.0f, -20,13278f, 0.0f), Vector(2,153852f, 3,667864f, 8,4843f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[12]);
	*(&iLocal_0 + 536[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks13", 2,802597E-45f, Vector(147,9558f, 74,79824f, 2315,291f), Vector(0.0f, 4,555128f, 0.0f), Vector(2,866811f, 2,667118f, 13,42069f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[13]);
	*(&iLocal_0 + 536[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks14", 2,802597E-45f, Vector(140,1953f, 74,77529f, 2310,54f), Vector(0.0f, 5,202918f, 0.0f), Vector(16,77729f, 3,01864f, 2,360362f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[14]);
	*(&iLocal_0 + 536[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks15", 2,802597E-45f, Vector(162,6083f, 73,82494f, 2313,707f), Vector(0.0f, 5,351533f, 0.0f), Vector(2,939902f, 3,270328f, 13,09575f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[15]);
	*(&iLocal_0 + 536[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks16", 2,802597E-45f, Vector(142,6087f, 75,11625f, 2304,028f), Vector(0.0f, 21,87864f, 0.0f), Vector(1,443187f, 3,094059f, 13,12396f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[16]);
	*(&iLocal_0 + 536[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks17", 2,802597E-45f, Vector(144,7532f, 74,0296f, 2297,847f), Vector(0.0f, 3,632941f, 0.0f), Vector(1,829312f, 3,289502f, 7,645639f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[17]);
	*(&iLocal_0 + 536[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks18", 2,802597E-45f, Vector(169,6506f, 75,50861f, 2302,314f), Vector(0.0f, 3,251671f, 0.0f), Vector(6,457269f, 3,611866f, 14,85462f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[18]);
	*(&iLocal_0 + 536[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pop_southdocks20", 2,802597E-45f, Vector(147,7927f, 74,19041f, 2307,472f), Vector(0.0f, 8,845689f, 0.0f), Vector(1,591461f, 3,528893f, 5,777983f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 704, &iLocal_0 + 536[19]);
	*(&iLocal_0 + 736) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_tick_set");
	*(&iLocal_0 + 712[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_tickets01", 2,802597E-45f, Vector(134,6121f, 75,05765f, 2297,663f), Vector(0.0f, 3,155584f, 0.0f), Vector(9,3f, 2,777297f, 6,971455f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 736, &iLocal_0 + 712[0]);
	*(&iLocal_0 + 712[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_tickets02", 2,802597E-45f, Vector(137,0244f, 74,94027f, 2292,842f), Vector(0.0f, 3,469327f, 0.0f), Vector(3,710651f, 2,530684f, 2,352687f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 736, &iLocal_0 + 712[1]);
	*(&iLocal_0 + 768) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_stab_set");
	*(&iLocal_0 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_stable01", 2,802597E-45f, Vector(121,4266f, 74,60543f, 2193,456f), Vector(0.0f, -38,40697f, 0.0f), Vector(11,74311f, 2,650494f, 18,00607f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 744[0]);
	*(&iLocal_0 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_stable02", 2,802597E-45f, Vector(115,6494f, 74,49019f, 2188,974f), Vector(0.0f, -37,70505f, 0.0f), Vector(2,51588f, 2,444366f, 7,176547f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 768, &iLocal_0 + 744[1]);
	*(&iLocal_0 + 800) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_ferr_set");
	*(&iLocal_0 + 776[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_ferryman03", 2,802597E-45f, Vector(213,2688f, 74,57431f, 2190,573f), Vector(0.0f, -37,15548f, 0.0f), Vector(1,552559f, 2,343711f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 800, &iLocal_0 + 776[0]);
	*(&iLocal_0 + 776[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_ferryman02", 2,802597E-45f, Vector(213,0947f, 74,77226f, 2187,277f), Vector(0.0f, -39,20383f, 0.0f), Vector(5,891003f, 2,736348f, 4,013329f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 800, &iLocal_0 + 776[1]);
	*(&iLocal_0 + 824) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_ver1_set");
	*(&iLocal_0 + 808[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box1", 2,802597E-45f, Vector(146,792f, 77,95094f, 2246,844f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 824, &iLocal_0 + 808[0]);
	*(&iLocal_0 + 864) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_saloon_set");
	*(&iLocal_0 + 832[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_saloon01", 2,802597E-45f, Vector(167,3334f, 72,76504f, 2228,25f), Vector(0.0f, -30,02197f, 0.0f), Vector(8,410011f, 7,87994f, 14,35492f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 832[0]);
	*(&iLocal_0 + 832[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_saloon02", 2,802597E-45f, Vector(169,5157f, 75,0048f, 2236,319f), Vector(0.0f, -31,09248f, 0.0f), Vector(3,782452f, 2,932232f, 2,417991f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 832[1]);
	*(&iLocal_0 + 832[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_saloon03", 2,802597E-45f, Vector(175,664f, 74,9073f, 2227,199f), Vector(0.0f, -30,36341f, 0.0f), Vector(5,027802f, 2,689279f, 3,169497f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 832[2]);
	*(&iLocal_0 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_tailor_set");
	*(&iLocal_0 + 872[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_tailor01", 2,802597E-45f, Vector(174,9852f, 74,38473f, 2182,238f), Vector(0.0f, -34,22879f, 0.0f), Vector(8,198368f, 2,81773f, 6,801184f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 896, &iLocal_0 + 872[0]);
	*(&iLocal_0 + 872[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_tailor02", 2,802597E-45f, Vector(178,9408f, 74,89482f, 2184,014f), Vector(0.0f, -34,22879f, 0.0f), Vector(0,2f, 2,470744f, 4,960597f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 896, &iLocal_0 + 872[1]);
	*(&iLocal_0 + 936) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_harbor_set");
	*(&iLocal_0 + 904[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_harbor01", 2,802597E-45f, Vector(178,0712f, 74,80824f, 2217,597f), Vector(-1,417288f, -30,91833f, 0,1854929f), Vector(4,383923f, 2,767432f, 6,597141f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 936, &iLocal_0 + 904[0]);
	*(&iLocal_0 + 904[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_harbor02", 2,802597E-45f, Vector(182,5987f, 74,80365f, 2220,344f), Vector(0.0f, -30,42979f, 0.0f), Vector(6,913052f, 2,767432f, 6,563572f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 936, &iLocal_0 + 904[1]);
	*(&iLocal_0 + 904[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_harbor03", 2,802597E-45f, Vector(185,8507f, 74,42982f, 2216,803f), Vector(0.0f, -29,54564f, 0.0f), Vector(4,152111f, 2,514276f, 2,603718f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 936, &iLocal_0 + 904[2]);
	*(&iLocal_0 + 960) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_ver2_set");
	*(&iLocal_0 + 944[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box", 2,802597E-45f, Vector(145,6494f, 77,41088f, 2238,687f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 960, &iLocal_0 + 944[0]);
	*(&iLocal_0 + 1016) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_chickens_set");
	*(&iLocal_0 + 968[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thi_chicken1", 4,203895E-45f, Vector(133,907f, 73,28625f, 2223,728f), Vector(0.0f, 20.0f, 0.0f), Vector(7,688399f, 7,688399f, 7,688399f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1016, &iLocal_0 + 968[0]);
	*(&iLocal_0 + 968[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thi_chicken2", 4,203895E-45f, Vector(145,2967f, 73,28625f, 2195,21f), Vector(0.0f, 20.0f, 0.0f), Vector(6,056266f, 7,688399f, 10,436f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1016, &iLocal_0 + 968[1]);
	*(&iLocal_0 + 968[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thi_chicken3", 4,203895E-45f, Vector(161,3603f, 73,28625f, 2209,09f), Vector(0.0f, 20.0f, 0.0f), Vector(7,688399f, 7,688399f, 7,688399f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1016, &iLocal_0 + 968[2]);
	*(&iLocal_0 + 968[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thi_chicken4", 4,203895E-45f, Vector(191,068f, 73,28625f, 2203,912f), Vector(0.0f, 20.0f, 0.0f), Vector(8,943166f, 8,943166f, 8,943166f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1016, &iLocal_0 + 968[3]);
	*(&iLocal_0 + 968[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thi_chicken5", 4,203895E-45f, Vector(106,1528f, 73,28625f, 2295,609f), Vector(0.0f, -5,160184f, 0.0f), Vector(19,327f, 7,688399f, 13,47398f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1016, &iLocal_0 + 968[4]);
	*(&iLocal_0 + 1064) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_fish_set");
	*(&iLocal_0 + 1024[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_fish_01", 4,203895E-45f, Vector(107,9999f, 62,3486f, 2252.0f), Vector(0.0f, -20,16817f, 0.0f), Vector(46,7114f, 9,114058f, 13,40402f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1064, &iLocal_0 + 1024[0]);
	*(&iLocal_0 + 1024[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_fish_02", 4,203895E-45f, Vector(161,5966f, 64,9888f, 2273,518f), Vector(0.0f, -20,16817f, 0.0f), Vector(26,60962f, 6,602382f, 25,74983f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1064, &iLocal_0 + 1024[1]);
	*(&iLocal_0 + 1024[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_fish_03", 4,203895E-45f, Vector(166,6306f, 65,35305f, 2330,964f), Vector(0.0f, -82,76395f, 0.0f), Vector(66,15244f, 6,602382f, 25,74983f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1064, &iLocal_0 + 1024[2]);
	*(&iLocal_0 + 1024[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_fish_04", 4,203895E-45f, Vector(200,9797f, 65,33083f, 2229,694f), Vector(0.0f, 223,0254f, 0.0f), Vector(66,15244f, 6,602382f, 25,74983f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1064, &iLocal_0 + 1024[3]);
	*(&iLocal_0 + 1096) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_gunsmith_set");
	*(&iLocal_0 + 1072[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_gunsmith01", 2,802597E-45f, Vector(166,4479f, 74,23535f, 2188,54f), Vector(0.0f, -33,61417f, 0.0f), Vector(5,711356f, 4,484836f, 9,172855f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1072[0]);
	*(&iLocal_0 + 1072[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_gunsmith02", 2,802597E-45f, Vector(169,3781f, 75,1996f, 2188,938f), Vector(0.0f, -33,61417f, 0.0f), Vector(0,6203356f, 2,133884f, 6,604735f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1096, &iLocal_0 + 1072[1]);
	*(&iLocal_0 + 1104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_fff", 2,802597E-45f, Vector(161,5258f, 74,70499f, 2293,978f), Vector(0.0f, 92,26971f, 0.0f), Vector(2,852055f, 3,342353f, 6,901263f));
	*(&iLocal_0 + 1136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_brothel_more_set");
	*(&iLocal_0 + 1112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_brothel06", 2,802597E-45f, Vector(145,4312f, 75,41055f, 2239,007f), Vector(0.0f, -29,94305f, 0.0f), Vector(2,231024f, 8,803533f, 15,85239f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1136, &iLocal_0 + 1112[0]);
	*(&iLocal_0 + 1112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_brothel07", 2,802597E-45f, Vector(151,7391f, 74,98534f, 2242,705f), Vector(0.0f, -29,94305f, 0.0f), Vector(10,28458f, 2,640776f, 10,87477f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1136, &iLocal_0 + 1112[1]);
	*(&iLocal_0 + 1144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_brothel_rooms", 2,802597E-45f, Vector(149,8487f, 78,25007f, 2244,917f), Vector(0.0f, -29,21607f, 0.0f), Vector(11,11006f, 3,394601f, 4,577099f));
	*(&iLocal_0 + 1152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_blackjack", 2,802597E-45f, Vector(171,3108f, 73,64671f, 2224,382f), Vector(0.0f, -30,87644f, 0.0f), Vector(3,569148f, 5,059165f, 2,888656f));
	*(&iLocal_0 + 1160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_liarsdice", 2,802597E-45f, Vector(168,1322f, 73,64671f, 2222,92f), Vector(0.0f, -30,87644f, 0.0f), Vector(4,159747f, 4,159747f, 3,881289f));
	*(&iLocal_0 + 1168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_poker", 2,802597E-45f, Vector(164,1496f, 73,64671f, 2231,487f), Vector(0.0f, -30,87644f, 0.0f), Vector(4,615512f, 4,615512f, 4,901088f));
	*(&iLocal_0 + 1192) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_brothel1_set");
	*(&iLocal_0 + 1176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_brothel", 2,802597E-45f, Vector(150,4911f, 75,13766f, 2242,012f), Vector(0.0f, -29,94305f, 0.0f), Vector(12,88916f, 8,803533f, 15,34764f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1192, &iLocal_0 + 1176[0]);
	*(&iLocal_0 + 1224) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_toughGuys_set");
	*(&iLocal_0 + 1200[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "toughGuys2", 4,203895E-45f, Vector(160,5707f, 74,59276f, 2220,309f), Vector(0.0f, 20.0f, 0.0f), Vector(3,701838f, 2,931919f, 3,701838f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1224, &iLocal_0 + 1200[0]);
	*(&iLocal_0 + 1200[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "toughGuys1", 4,203895E-45f, Vector(168,9522f, 74,93501f, 2228,21f), Vector(0.0f, 20.0f, 0.0f), Vector(2,362861f, 1,270516f, 2,316527f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1224, &iLocal_0 + 1200[1]);
	*(&iLocal_0 + 1256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_birds_set");
	*(&iLocal_0 + 1232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdPop2", 2,802597E-45f, Vector(171,3679f, 80,75795f, 2206,437f), Vector(0.0f, 37,66278f, 0.0f), Vector(134,9081f, 11,5013f, 72,34597f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1256, &iLocal_0 + 1232[0]);
	*(&iLocal_0 + 1232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "birdPop1", 2,802597E-45f, Vector(124,2394f, 82,49654f, 2330,436f), Vector(0.0f, 94,87074f, 0.0f), Vector(143,8678f, 13,00599f, 88,99593f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1256, &iLocal_0 + 1232[1]);
	*(&iLocal_0 + 1288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_doctor_set");
	*(&iLocal_0 + 1264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_doctor01", 2,802597E-45f, Vector(173,3407f, 75,70671f, 2181,098f), Vector(0.0f, -33,72612f, 0.0f), Vector(11,94255f, 7,309404f, 7,48098f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1288, &iLocal_0 + 1264[0]);
	*(&iLocal_0 + 1264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_doctor02", 2,802597E-45f, Vector(177,9076f, 78,04267f, 2184,987f), Vector(0.0f, -33,72612f, 0.0f), Vector(0,9548771f, 1,689583f, 4,540689f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1288, &iLocal_0 + 1264[1]);
	*(&iLocal_0 + 1320) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_streetSpawn_set");
	*(&iLocal_0 + 1296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_streetSpawn1", 2,802597E-45f, Vector(164,2035f, 73,21194f, 2194,947f), Vector(0.0f, -32,85844f, 0.0f), Vector(46,02656f, 33,92661f, 98,30106f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1320, &iLocal_0 + 1296[0]);
	*(&iLocal_0 + 1296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_streetSpawn2", 2,802597E-45f, Vector(110,2687f, 73,03625f, 2301,83f), Vector(0.0f, -26,29476f, 0.0f), Vector(22,16118f, 15,8923f, 43,49994f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1320, &iLocal_0 + 1296[1]);
	*(&iLocal_0 + 1384) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "thiv_pawnshop_set");
	*(&iLocal_0 + 1328[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pawnsh01", 2,802597E-45f, Vector(143,1704f, 75,28658f, 2311,763f), Vector(0.0f, 5,286093f, 0.0f), Vector(2,540473f, 1,622967f, 0,4586426f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1384, &iLocal_0 + 1328[0]);
	*(&iLocal_0 + 1328[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pawnsh02", 2,802597E-45f, Vector(140,4967f, 74,90644f, 2316,956f), Vector(0.0f, 5,286093f, 0.0f), Vector(11,60371f, 2,53916f, 10,38338f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1384, &iLocal_0 + 1328[1]);
	*(&iLocal_0 + 1328[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pawnsh03", 2,802597E-45f, Vector(137,5464f, 75,28658f, 2312,284f), Vector(0.0f, 5,286093f, 0.0f), Vector(2,883379f, 1,622967f, 0,4586426f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1384, &iLocal_0 + 1328[2]);
	*(&iLocal_0 + 1328[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pawnsh04", 2,802597E-45f, Vector(134,6031f, 75,12867f, 2314,741f), Vector(0.0f, 5,286093f, 0.0f), Vector(0,3003308f, 1,423614f, 3,293785f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1384, &iLocal_0 + 1328[3]);
	*(&iLocal_0 + 1328[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pawnsh05", 2,802597E-45f, Vector(135,1282f, 75,12867f, 2320,417f), Vector(0.0f, 5,286093f, 0.0f), Vector(0,3003308f, 1,423614f, 3,056028f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1384, &iLocal_0 + 1328[4]);
	*(&iLocal_0 + 1328[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "thiv_pawnsh06", 2,802597E-45f, Vector(146,4621f, 75,30753f, 2317,895f), Vector(0.0f, 5,286093f, 0.0f), Vector(0,3003308f, 1,639946f, 3,849716f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1384, &iLocal_0 + 1328[5]);
	*(&iLocal_0 + 1392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_THIAddKO", 2,802597E-45f, Vector(171,9999f, 73,51794f, 2232.0f), Vector(0.0f, -29,87128f, 0.0f), Vector(3,811612f, 5,526439f, 9,257933f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos1", Vector(189,071f, 76,102f, 2371,522f), Vector(-1,13f, 58,516f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos2", Vector(120,251f, 80,408f, 2404,159f), Vector(-6,327f, -21,946f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos3", Vector(83,686f, 75,128f, 2263,773f), Vector(-0,747f, -72,009f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos4", Vector(212,498f, 76,362f, 2249,836f), Vector(3,909f, 13,82f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos5", Vector(234,667f, 80,681f, 2188,146f), Vector(-8,892f, 115,727f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos6", Vector(47,261f, 74,871f, 2341,825f), Vector(2,419f, -75,984f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos7", Vector(188,877f, 75,248f, 2247,235f), Vector(0,484f, 92,289f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos8", Vector(125,199f, 78,28f, 2239,857f), Vector(-5,205f, -62,702f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos9", Vector(172,968f, 75,417f, 2294,387f), Vector(-1,214f, 42,594f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thi_vista_cam_pos10", Vector(173,783f, 75,551f, 2300,971f), Vector(0,37f, 150,334f, 0.0f));
	*(&iLocal_0 + 1400) = Vector(121,146f, 73,286f, 2312,448f);
	*(&iLocal_0 + 1400 + 12) = Vector(0.0f, 132,303f, 0.0f);
	*(&iLocal_0 + 1424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel1", Vector(121,146f, 73,286f, 2312,448f), Vector(0.0f, 132,303f, 0.0f));
	*(&iLocal_0 + 1432) = Vector(114,742f, 73,286f, 2319,227f);
	*(&iLocal_0 + 1432 + 12) = Vector(0.0f, -38,61496f, 0.0f);
	*(&iLocal_0 + 1456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel1", Vector(114,742f, 73,286f, 2319,227f), Vector(0.0f, -38,61496f, 0.0f));
	*(&iLocal_0 + 1464) = Vector(151,327f, 73,036f, 2220,009f);
	*(&iLocal_0 + 1464 + 12) = Vector(0.0f, 148,03f, 0.0f);
	*(&iLocal_0 + 1488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel2", Vector(151,327f, 73,036f, 2220,009f), Vector(0.0f, 148,03f, 0.0f));
	*(&iLocal_0 + 1496) = Vector(146,572f, 73,286f, 2227,233f);
	*(&iLocal_0 + 1496 + 12) = Vector(0.0f, -32,77494f, 0.0f);
	*(&iLocal_0 + 1520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel2", Vector(146,572f, 73,286f, 2227,233f), Vector(0.0f, -32,77494f, 0.0f));
	*(&iLocal_0 + 1528) = Vector(190,938f, 73,036f, 2183,411f);
	*(&iLocal_0 + 1528 + 12) = Vector(0.0f, 137,353f, 0.0f);
	*(&iLocal_0 + 1552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_playerDuel3", Vector(190,938f, 73,036f, 2183,411f), Vector(0.0f, 137,353f, 0.0f));
	*(&iLocal_0 + 1560) = Vector(184,741f, 73,036f, 2189,819f);
	*(&iLocal_0 + 1560 + 12) = Vector(0.0f, -45,35883f, 0.0f);
	*(&iLocal_0 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "armf_enDuel3", Vector(184,741f, 73,036f, 2189,819f), Vector(0.0f, -45,35883f, 0.0f));
	*(&iLocal_0 + 1592) = Vector(174,3415f, 71,90105f, 2411,603f);
	*(&iLocal_0 + 1592 + 12) = Vector(0.0f, -77,5631f, 0.0f);
	*(&iLocal_0 + 1616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_01", Vector(174,3415f, 71,90105f, 2411,603f), Vector(0.0f, -77,5631f, 0.0f));
	*(&iLocal_0 + 1624) = Vector(169,2869f, 72,59053f, 2395,41f);
	*(&iLocal_0 + 1624 + 12) = Vector(0.0f, -49,11977f, 0.0f);
	*(&iLocal_0 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_02", Vector(169,2869f, 72,59053f, 2395,41f), Vector(0.0f, -49,11977f, 0.0f));
	*(&iLocal_0 + 1656) = Vector(160,9603f, 72,34877f, 2383,063f);
	*(&iLocal_0 + 1656 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_0 + 1680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_03", Vector(160,9603f, 72,34877f, 2383,063f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_0 + 1688) = Vector(170,5094f, 73,36586f, 2367,597f);
	*(&iLocal_0 + 1688 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_0 + 1712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_04", Vector(170,5094f, 73,36586f, 2367,597f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_0 + 1720) = Vector(162,9955f, 72,08791f, 2354,723f);
	*(&iLocal_0 + 1720 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_0 + 1744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_05", Vector(162,9955f, 72,08791f, 2354,723f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_0 + 1752) = Vector(163,1924f, 73,44358f, 2338,085f);
	*(&iLocal_0 + 1752 + 12) = Vector(0.0f, -59,00187f, 0.0f);
	*(&iLocal_0 + 1776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_06", Vector(163,1924f, 73,44358f, 2338,085f), Vector(0.0f, -59,00187f, 0.0f));
	*(&iLocal_0 + 1784) = Vector(149,1169f, 73,09775f, 2322,514f);
	*(&iLocal_0 + 1784 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_0 + 1808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_07", Vector(149,1169f, 73,09775f, 2322,514f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_0 + 1816) = Vector(173,3731f, 74,22238f, 2308,269f);
	*(&iLocal_0 + 1816 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_0 + 1840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_08", Vector(173,3731f, 74,22238f, 2308,269f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_0 + 1848) = Vector(163,6363f, 72,1502f, 2313,983f);
	*(&iLocal_0 + 1848 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_0 + 1872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_09", Vector(163,6363f, 72,1502f, 2313,983f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_0 + 1880) = Vector(145,7547f, 72,30187f, 2301,504f);
	*(&iLocal_0 + 1880 + 12) = Vector(0.0f, -80,08842f, 0.0f);
	*(&iLocal_0 + 1904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_010", Vector(145,7547f, 72,30187f, 2301,504f), Vector(0.0f, -80,08842f, 0.0f));
	*(&iLocal_0 + 1912) = Vector(144,223f, 73,83006f, 2288,575f);
	*(&iLocal_0 + 1912 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_0 + 1936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_011", Vector(144,223f, 73,83006f, 2288,575f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_0 + 1944) = Vector(128,9439f, 72,42185f, 2279,316f);
	*(&iLocal_0 + 1944 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_0 + 1968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_012", Vector(128,9439f, 72,42185f, 2279,316f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_0 + 1976) = Vector(96,69703f, 72,54664f, 2253,653f);
	*(&iLocal_0 + 1976 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_0 + 2000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_013", Vector(96,69703f, 72,54664f, 2253,653f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_0 + 2008) = Vector(123,789f, 72,82449f, 2258,633f);
	*(&iLocal_0 + 2008 + 12) = Vector(0.0f, -0,4146861f, 0.0f);
	*(&iLocal_0 + 2032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_014", Vector(123,789f, 72,82449f, 2258,633f), Vector(0.0f, -0,4146861f, 0.0f));
	*(&iLocal_0 + 2040) = Vector(111,9999f, 72,28235f, 2236.0f);
	*(&iLocal_0 + 2040 + 12) = Vector(0.0f, 141,7191f, 0.0f);
	*(&iLocal_0 + 2064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_015", Vector(111,9999f, 72,28235f, 2236.0f), Vector(0.0f, 141,7191f, 0.0f));
	*(&iLocal_0 + 2072) = Vector(137,8561f, 72,81793f, 2244,347f);
	*(&iLocal_0 + 2072 + 12) = Vector(0.0f, 141,7191f, 0.0f);
	*(&iLocal_0 + 2096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_016", Vector(137,8561f, 72,81793f, 2244,347f), Vector(0.0f, 141,7191f, 0.0f));
	*(&iLocal_0 + 2104) = Vector(162,2157f, 72,65971f, 2253,01f);
	*(&iLocal_0 + 2104 + 12) = Vector(0.0f, 244,458f, 0.0f);
	*(&iLocal_0 + 2128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_017", Vector(162,2157f, 72,65971f, 2253,01f), Vector(0.0f, 244,458f, 0.0f));
	*(&iLocal_0 + 2136) = Vector(166,8038f, 72,65971f, 2244,803f);
	*(&iLocal_0 + 2136 + 12) = Vector(0.0f, 244,458f, 0.0f);
	*(&iLocal_0 + 2160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_018", Vector(166,8038f, 72,65971f, 2244,803f), Vector(0.0f, 244,458f, 0.0f));
	*(&iLocal_0 + 2168) = Vector(185,0596f, 73,55966f, 2248,912f);
	*(&iLocal_0 + 2168 + 12) = Vector(0.0f, 239,6449f, 0.0f);
	*(&iLocal_0 + 2192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_019", Vector(185,0596f, 73,55966f, 2248,912f), Vector(0.0f, 239,6449f, 0.0f));
	*(&iLocal_0 + 2200) = Vector(184,2704f, 73,20306f, 2229,011f);
	*(&iLocal_0 + 2200 + 12) = Vector(0.0f, 141,23f, 0.0f);
	*(&iLocal_0 + 2224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_020", Vector(184,2704f, 73,20306f, 2229,011f), Vector(0.0f, 141,23f, 0.0f));
	*(&iLocal_0 + 2232) = Vector(198,4751f, 73,29941f, 2224,86f);
	*(&iLocal_0 + 2232 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_0 + 2256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_021", Vector(198,4751f, 73,29941f, 2224,86f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_0 + 2264) = Vector(188,4787f, 73,37904f, 2210,481f);
	*(&iLocal_0 + 2264 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_0 + 2288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_022", Vector(188,4787f, 73,37904f, 2210,481f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_0 + 2296) = Vector(200,085f, 72,26197f, 2199,923f);
	*(&iLocal_0 + 2296 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_0 + 2320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_023", Vector(200,085f, 72,26197f, 2199,923f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_0 + 2328) = Vector(201,4553f, 72,46182f, 2210,378f);
	*(&iLocal_0 + 2328 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_0 + 2352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_024", Vector(201,4553f, 72,46182f, 2210,378f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_0 + 2360) = Vector(213,1302f, 72,97697f, 2200,751f);
	*(&iLocal_0 + 2360 + 12) = Vector(0.0f, 240,0101f, 0.0f);
	*(&iLocal_0 + 2384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_025", Vector(213,1302f, 72,97697f, 2200,751f), Vector(0.0f, 240,0101f, 0.0f));
	*(&iLocal_0 + 2392) = Vector(225,3965f, 73,35677f, 2197,582f);
	*(&iLocal_0 + 2392 + 12) = Vector(0.0f, 231,5099f, 0.0f);
	*(&iLocal_0 + 2416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_026", Vector(225,3965f, 73,35677f, 2197,582f), Vector(0.0f, 231,5099f, 0.0f));
	*(&iLocal_0 + 2424) = Vector(232,1205f, 73,5583f, 2172,583f);
	*(&iLocal_0 + 2424 + 12) = Vector(0.0f, 278,1251f, 0.0f);
	*(&iLocal_0 + 2448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_027", Vector(232,1205f, 73,5583f, 2172,583f), Vector(0.0f, 278,1251f, 0.0f));
	*(&iLocal_0 + 2456) = Vector(212,8745f, 72,65473f, 2156,622f);
	*(&iLocal_0 + 2456 + 12) = Vector(0.0f, 278,1251f, 0.0f);
	*(&iLocal_0 + 2480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_028", Vector(212,8745f, 72,65473f, 2156,622f), Vector(0.0f, 278,1251f, 0.0f));
	*(&iLocal_0 + 2488) = Vector(211,7295f, 73,26682f, 2131,409f);
	*(&iLocal_0 + 2488 + 12) = Vector(0.0f, 245,2664f, 0.0f);
	*(&iLocal_0 + 2512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_029", Vector(211,7295f, 73,26682f, 2131,409f), Vector(0.0f, 245,2664f, 0.0f));
	*(&iLocal_0 + 2520) = Vector(187,7853f, 72,86517f, 2147,021f);
	*(&iLocal_0 + 2520 + 12) = Vector(0.0f, 352,7331f, 0.0f);
	*(&iLocal_0 + 2544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_030", Vector(187,7853f, 72,86517f, 2147,021f), Vector(0.0f, 352,7331f, 0.0f));
	*(&iLocal_0 + 2552) = Vector(175,9999f, 72,3225f, 2136.0f);
	*(&iLocal_0 + 2552 + 12) = Vector(0.0f, 281,2891f, 0.0f);
	*(&iLocal_0 + 2576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_031", Vector(175,9999f, 72,3225f, 2136.0f), Vector(0.0f, 281,2891f, 0.0f));
	*(&iLocal_0 + 2584) = Vector(186,7025f, 72,52797f, 2052,782f);
	*(&iLocal_0 + 2584 + 12) = Vector(0.0f, 281,2891f, 0.0f);
	*(&iLocal_0 + 2608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_respawn_water_033", Vector(186,7025f, 72,52797f, 2052,782f), Vector(0.0f, 281,2891f, 0.0f));
	*(&iLocal_0 + 2616) = Vector(137,2898f, 73,65411f, 2316,914f);
	*(&iLocal_0 + 2616 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_0 + 2640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_store", Vector(137,2898f, 73,65411f, 2316,914f), Vector(0.0f, 93,67333f, 0.0f));
	*(&iLocal_0 + 2648) = Vector(126,2348f, 76,257f, 2309,524f);
	*(&iLocal_0 + 2648 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_0 + 2672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store", Vector(126,2348f, 76,257f, 2309,524f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_0 + 2680) = Vector(130,6668f, 76,106f, 2311,561f);
	*(&iLocal_0 + 2680 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_0 + 2704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store", Vector(130,6668f, 76,106f, 2311,561f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_0 + 2712) = Vector(129,3975f, 73,193f, 2308,753f);
	*(&iLocal_0 + 2712 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_0 + 2736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store", Vector(129,3975f, 73,193f, 2308,753f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_0 + 2744) = Vector(131,797f, 73,286f, 2308,278f);
	*(&iLocal_0 + 2744 + 12) = Vector(0.0f, 252,9277f, 0.0f);
	*(&iLocal_0 + 2768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store", Vector(131,797f, 73,286f, 2308,278f), Vector(0.0f, 252,9277f, 0.0f));
	*(&iLocal_0 + 2776) = Vector(175,9791f, 73,47179f, 2183,501f);
	*(&iLocal_0 + 2776 + 12) = Vector(0.0f, 203,3782f, 0.0f);
	*(&iLocal_0 + 2800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_store1", Vector(175,9791f, 73,47179f, 2183,501f), Vector(0.0f, 203,3782f, 0.0f));
	*(&iLocal_0 + 2808) = Vector(176,7663f, 76,257f, 2195,01f);
	*(&iLocal_0 + 2808 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_0 + 2832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store1", Vector(176,7663f, 76,257f, 2195,01f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_0 + 2840) = Vector(177,1958f, 76,106f, 2190,152f);
	*(&iLocal_0 + 2840 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_0 + 2864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store1", Vector(177,1958f, 76,106f, 2190,152f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_0 + 2872) = Vector(174,9771f, 73,193f, 2192,291f);
	*(&iLocal_0 + 2872 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_0 + 2896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store1", Vector(174,9771f, 73,193f, 2192,291f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_0 + 2904) = Vector(173,7238f, 73,286f, 2190,19f);
	*(&iLocal_0 + 2904 + 12) = Vector(0.0f, 1,279809f, 0.0f);
	*(&iLocal_0 + 2928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store1", Vector(173,7238f, 73,286f, 2190,19f), Vector(0.0f, 1,279809f, 0.0f));
	*(&iLocal_0 + 2936) = Vector(166,6709f, 73,48386f, 2186,76f);
	*(&iLocal_0 + 2936 + 12) = Vector(0.0f, 195,8555f, 0.0f);
	*(&iLocal_0 + 2960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_store2", Vector(166,6709f, 73,48386f, 2186,76f), Vector(0.0f, 195,8555f, 0.0f));
	*(&iLocal_0 + 2968) = Vector(171,092f, 73,288f, 2193,133f);
	*(&iLocal_0 + 2968 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_0 + 2992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store2", Vector(171,092f, 73,288f, 2193,133f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_0 + 3000) = Vector(173,1345f, 73,195f, 2194,479f);
	*(&iLocal_0 + 3000 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_0 + 3024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store2", Vector(173,1345f, 73,195f, 2194,479f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_0 + 3032) = Vector(174,2011f, 76,108f, 2191,587f);
	*(&iLocal_0 + 3032 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_0 + 3056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store2", Vector(174,2011f, 76,108f, 2191,587f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_0 + 3064) = Vector(175,9291f, 76,259f, 2196,149f);
	*(&iLocal_0 + 3064 + 12) = Vector(0.0f, 27,08022f, 0.0f);
	*(&iLocal_0 + 3088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store2", Vector(175,9291f, 76,259f, 2196,149f), Vector(0.0f, 27,08022f, 0.0f));
	*(&iLocal_0 + 3096) = Vector(156,3038f, 73,75475f, 2193,409f);
	*(&iLocal_0 + 3096 + 12) = Vector(0.0f, 229,9398f, 0.0f);
	*(&iLocal_0 + 3120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_blacksmith", Vector(156,3038f, 73,75475f, 2193,409f), Vector(0.0f, 229,9398f, 0.0f));
	*(&iLocal_0 + 3128) = Vector(124,1311f, 76,74467f, 2235,329f);
	*(&iLocal_0 + 3128 + 12) = Vector(0.0f, 197,4766f, 0.0f);
	*(&iLocal_0 + 3152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_house", Vector(124,1311f, 76,74467f, 2235,329f), Vector(0.0f, 197,4766f, 0.0f));
	*(&iLocal_0 + 3160) = Vector(165,1226f, 73,75176f, 2227,55f);
	*(&iLocal_0 + 3160 + 12) = Vector(0.0f, 59,80434f, 0.0f);
	*(&iLocal_0 + 3184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_saloon", Vector(165,1226f, 73,75176f, 2227,55f), Vector(0.0f, 59,80434f, 0.0f));
	*(&iLocal_0 + 3192) = Vector(149,6569f, 73,81389f, 2240,985f);
	*(&iLocal_0 + 3192 + 12) = Vector(0.0f, 63,98124f, 0.0f);
	*(&iLocal_0 + 3216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_brothel", Vector(149,6569f, 73,81389f, 2240,985f), Vector(0.0f, 63,98124f, 0.0f));
	*(&iLocal_0 + 3224) = Vector(127,5364f, 73,57987f, 2345,956f);
	*(&iLocal_0 + 3224 + 12) = Vector(0.0f, 98,3925f, 0.0f);
	*(&iLocal_0 + 3248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "thif_interiorPoint_factory", Vector(127,5364f, 73,57987f, 2345,956f), Vector(0.0f, 98,3925f, 0.0f));
	*(&iLocal_0 + 3256) = Vector(126,933f, 73,286f, 2313,945f);
	*(&iLocal_0 + 3256 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_0 + 3280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store", Vector(126,933f, 73,286f, 2313,945f), Vector(0.0f, 93,67333f, 0.0f));
	*(&iLocal_0 + 3288) = Vector(180,694f, 73,149f, 2189,489f);
	*(&iLocal_0 + 3288 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_0 + 3312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store1", Vector(180,694f, 73,149f, 2189,489f), Vector(0.0f, 93,67333f, 0.0f));
	*(&iLocal_0 + 3320) = Vector(180,694f, 73,149f, 2189,489f);
	*(&iLocal_0 + 3320 + 12) = Vector(0.0f, 93,67333f, 0.0f);
	*(&iLocal_0 + 3344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store2", Vector(180,694f, 73,149f, 2189,489f), Vector(0.0f, 93,67333f, 0.0f));
	return 1;
}

void Function_118(int iParam0, int iParam1) //Position: 0x9C09 / 39945
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

var Function_119() //Position: 0x9C53 / 40019
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_120(char* cParam0) //Position: 0x9C68 / 40040
{
	if (!Function_107(128))
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

