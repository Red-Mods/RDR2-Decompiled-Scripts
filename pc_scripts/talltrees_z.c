//Decompiled with MagicRDR v1.0
//Function Count : 113
//Statics Count : 931
//Natives Count : 149
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 25;
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
	int iLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 33;
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
	int iLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 6;
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
	var uLocal_619 = 8;
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
	var uLocal_639 = 5;
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
	var uLocal_653 = 15;
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
	var uLocal_687 = 22;
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
	var uLocal_919 = 1;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	int iLocal_927 = 0;
	var uLocal_928 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_112(&cVar0, 3);
	Function_111();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_0 = 1;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000001:
				if (Function_108())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_99())
				{
					Function_98();
					Function_97(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_94())
				{
					Function_97(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_93(&uLocal_3);
				Function_91(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_90())
				{
					Function_82();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_81(iScriptParam_0);
				Function_80();
				Function_97(&(Global_43791[iScriptParam_0]), 8);
				if (Function_79(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_78(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_77(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_76(iScriptParam_0))
				{
					Function_69(iScriptParam_0);
					Function_68(64);
				}
				Function_97(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_76(iScriptParam_0))
				{
					Function_66(Function_67(), iScriptParam_0);
				}
				Function_65(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_64(&cVar0, 5.0f);
				Function_97(&(Global_43791[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_76(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_24(&uLocal_3, &uLocal_919, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_79(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(bLocal_1);
	}
	Function_22();
	Function_16();
	Function_8(&uLocal_3, &uLocal_919);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_68(64);
	Function_78(&(Global_43791[iScriptParam_0]), 32);
	Function_78(&(Global_43791[iScriptParam_0]), 64);
	Function_78(&(Global_43791[iScriptParam_0]), 512);
	Function_78(&(Global_43791[iScriptParam_0]), 16);
	Function_78(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_64(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	return;
}

void Function_2(int iParam0) //Position: 0x2EC / 748
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x322 / 802
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x344 / 836
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35A / 858
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x370 / 880
{
	Function_7();
	return;
}

void Function_7() //Position: 0x379 / 889
{
	RELEASE_LAYOUT_REF(&iLocal_601);
	return;
}

void Function_8(var uParam0, vector3[] vParam1) //Position: 0x386 / 902
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_15(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_14(&(vParam1[iVar03]), 4);
		}
		if (Function_15(&(vParam1[iVar03]), 8))
		{
			Function_9(0, 0, 30);
			Function_14(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_9(bool bParam0, int iParam1, int iParam2) //Position: 0x3E3 / 995
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
		Function_10(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_10(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4CD / 1229
{
	int iVar0;
	
	Function_13(bParam0);
	Function_12(&bParam1);
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
	Function_11();
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

void Function_11() //Position: 0x64C / 1612
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_12(int iParam0) //Position: 0x658 / 1624
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

void Function_13(int iParam0) //Position: 0x6A2 / 1698
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

void Function_14(struct<17> Param0) //Position: 0x6E8 / 1768
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_15(struct<17> Param0) //Position: 0x705 / 1797
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x723 / 1827
{
	Function_17();
	return;
}

void Function_17() //Position: 0x72C / 1836
{
	Function_18(&iLocal_169 + 8);
	RELEASE_LAYOUT_REF(&iLocal_169);
	return;
}

void Function_18(int iParam0) //Position: 0x73F / 1855
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_19(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_19(struct<2>[] Param0, int iParam1) //Position: 0x767 / 1895
{
	if (Function_21(&(Param0[iParam12]), 4))
	{
		if (Function_21(&(Param0[iParam12]), 1))
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
			Function_20(&(Param0[iParam12]), 1);
			Function_20(&(Param0[iParam12]), 2);
			Function_20(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_20(struct<13> Param0) //Position: 0x8B2 / 2226
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_21(struct<13> Param0) //Position: 0x8CF / 2255
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8ED / 2285
{
	Function_23();
	if (IS_SCRIPT_VALID(&iLocal_927))
	{
		TERMINATE_SCRIPT(&iLocal_927);
	}
	return;
}

void Function_23() //Position: 0x907 / 2311
{
	Function_18(&iLocal_7 + 8);
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_24(vector3 vParam0) //Position: 0x91A / 2330
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_61(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_25(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_25(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x9A4 / 2468
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(&vParam0))
	{
		return 0;
	}
	Function_78(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_58(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_57(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_9(0, 0, 0);
						}
						else
						{
							Function_9(0, 0, 30);
						}
						Function_14(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_57(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_14(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_56(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_55(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 16))
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
								Function_57(&vParam0, 16);
								Function_47(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 16))
					{
						Function_14(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_15(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_57(&vParam0, 2);
			}
			else
			{
				Function_14(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_79(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_15(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_46(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_57(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_45(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_26(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_26(int iParam0) //Position: 0xDFC / 3580
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_79(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_97(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_31(473, 1, 0, 0);
		iVar0 = Function_30(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_31(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_31(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_31(476, 1, 0, 0);
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
		Function_29(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_29(7, 30);
	}
	if (Function_28(473) <= Function_27(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_27(int iParam0) //Position: 0xEED / 3821
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_28(int iParam0) //Position: 0xF2A / 3882
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, int iParam1) //Position: 0xF63 / 3939
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

var Function_30(int iParam0) //Position: 0xFCD / 4045
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1025 / 4133
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
	Function_44(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_32(iParam0);
	return 1;
}

void Function_32(bool bParam0) //Position: 0x124D / 4685
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x12EB / 4843
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_27(390))), 32);
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
					bVar19 = (Function_28(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_28(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_38(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_34(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_34() //Position: 0x1929 / 6441
{
	int iVar0;
	
	return &iVar0;
}

var Function_35(int iParam0) //Position: 0x1932 / 6450
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1943 / 6467
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0) //Position: 0x1A3A / 6714
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A55 / 6741
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1ABC / 6844
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1ACE / 6862
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AE0 / 6880
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x1C14 / 7188
{
	return Global_55480[iParam016].f_96;
}

void Function_43(int iParam0) //Position: 0x1C23 / 7203
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x1DBD / 7613
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

void Function_45(var uParam0, int iParam1) //Position: 0x2001 / 8193
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(int iParam0, var uParam1, int iParam2) //Position: 0x200E / 8206
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_47(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2038 / 8248
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_54(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_53(iParam1))
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
	if (!Function_50(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_48();
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

void Function_48() //Position: 0x22EB / 8939
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_49(&uVar0, &uVar1);
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

void Function_49(var uParam0, int iParam1) //Position: 0x235E / 9054
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

bool Function_50(bool bParam0) //Position: 0x2394 / 9108
{
	if (Function_55(256))
	{
		return 0;
	}
	if (Function_55(262144))
	{
		return 0;
	}
	if (Function_52())
	{
		return 0;
	}
	if (!Function_55(1))
	{
		return 0;
	}
	if (!Function_55(4096))
	{
		return 0;
	}
	if (bParam0 && Function_51(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_55(2048))
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

int Function_51(int iParam0) //Position: 0x240A / 9226
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_52() //Position: 0x241B / 9243
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

bool Function_53(int iParam0) //Position: 0x2434 / 9268
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x244A / 9290
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x245F / 9311
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x247D / 9341
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

void Function_57(struct<17> Param0) //Position: 0x252C / 9516
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x253F / 9535
{
	int iVar0;
	bool bVar1;
	
	Function_13(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_59(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_10(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x25B9 / 9657
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_13(iParam0);
	Function_12(&uVar0);
	PRINTNL();
	Function_10(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x25E2 / 9698
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

bool Function_61(int iParam0) //Position: 0x2602 / 9730
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x261E / 9758
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(int iParam0) //Position: 0x2633 / 9779
{
	iParam0 = iParam0;
	return;
}

void Function_64(char* cParam0) //Position: 0x263D / 9789
{
	if (!Function_61(128))
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

void Function_65(int iParam0) //Position: 0x267D / 9853
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_46736[0] || iParam0 != Global_46736[1]) || iParam0 != Global_46736[2]) || iParam0 != Global_46736[3])
	{
		Global_43787 = 0;
	}
	else if ((iParam0 != Global_46746[0] || iParam0 != Global_46746[2]) || iParam0 != Global_46746[1])
	{
		Global_43787 = 1;
	}
	else if (iParam0 != Global_46754[1] || iParam0 != Global_46754[0])
	{
		Global_43787 = 2;
	}
	return;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x270F / 9999
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
		Function_45(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

var Function_67() //Position: 0x27FF / 10239
{
	return &iLocal_7;
}

void Function_68(int iParam0) //Position: 0x2808 / 10248
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_69(bool bParam0) //Position: 0x281B / 10267
{
	if (!Function_75(5) && Global_6606)
	{
		Function_70(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_74(&Global_46926));
	}
	else
	{
		Function_70(1, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_74(&Global_46926));
	}
	return;
}

void Function_70(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0x286C / 10348
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
	(&Global_43580 + 24) = &iParam3;
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
		Function_73();
	}
	if (&bParam5)
	{
		Function_71(1048576);
	}
}

void Function_71(int iParam0) //Position: 0x297A / 10618
{
	Function_72(&Global_43580, iParam0);
	return;
}

void Function_72(var uParam0, var uParam1) //Position: 0x2988 / 10632
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_73() //Position: 0x29A7 / 10663
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_71(16384);
	}
	return;
}

bool Function_74(int[] iParam0) //Position: 0x29C3 / 10691
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_5(iParam0[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_43791[iParam0[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_75(int iParam0) //Position: 0x2A14 / 10772
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_76(int iParam0) //Position: 0x2A29 / 10793
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_46736[0])
	{
		return Function_74(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_74(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_74(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_74(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_74(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_74(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_74(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_74(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_74(&Global_46914);
	}
	return 0;
}

void Function_77(var uParam0) //Position: 0x2B06 / 11014
{
	uParam0 = uParam0;
	if (Function_75(37))
	{
		iLocal_927 = LAUNCH_NEW_SCRIPT("$/content/DLC/ZombiePack/Beats/beat_sasquatch.sc", 0);
	}
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x2B53 / 11091
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_79(int iParam0, int iParam1) //Position: 0x2B6D / 11117
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_80() //Position: 0x2B8A / 11146
{
	return;
}

void Function_81(var uParam0) //Position: 0x2B90 / 11152
{
	uParam0 = uParam0;
	return;
}

void Function_82() //Position: 0x2B9A / 11162
{
	Function_83(Global_46754[1]);
	Global_43787 = 2;
	return;
}

void Function_83(int iParam0) //Position: 0x2BAD / 11181
{
	int iVar0;
	
	iVar0 = Function_85(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_84(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_84(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_84(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_84(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_84(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_84(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_84(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_84(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_84(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

bool Function_84(var uParam0, int iParam1) //Position: 0x2DEE / 11758
{
	return (uParam0 && iParam1) == 0;
}

int Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2DFB / 11771
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_89(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_86(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_86(bParam0, bParam1, bParam2, 4294967295);
}

int Function_86(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2E59 / 11865
{
	var uVar0;
	
	if (!Function_88(bParam2))
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
	uVar0 = Function_89(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_87(uVar0);
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

var Function_87(int iParam0) //Position: 0x2FBD / 12221
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

bool Function_88(int iParam0) //Position: 0x2FFB / 12283
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0, int iParam1, bool bParam2) //Position: 0x3010 / 12304
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_90() //Position: 0x3030 / 12336
{
	return 1;
}

void Function_91(bool bParam0) //Position: 0x3037 / 12343
{
	Function_92(&uLocal_3, &uLocal_919, 2, &Global_44085[bParam09] + 8, 4294967295, 0);
	return;
}

void Function_92(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3052 / 12370
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

void Function_93(struct<5> Param0) //Position: 0x313F / 12607
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_94() //Position: 0x3150 / 12624
{
	return Function_95();
}

int Function_95() //Position: 0x3159 / 12633
{
	var uVar0;
	
	Function_96(3, 3);
	uVar0 = &uVar0;
	iLocal_601 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_601))
	{
		iLocal_601 = CREATE_LAYOUT("TallTrees_layout");
	}
	*(&iLocal_601 + 64) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_601, "talv_flk_CENTER_set");
	*(&iLocal_601 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder", 4,203895E-45f, Vector(-593,2744f, 174,6823f, 1676,557f), Vector(0.0f, -67,35181f, 0.0f), Vector(105,9159f, 58,29394f, 233,7654f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 64, &iLocal_601 + 8[0]);
	*(&iLocal_601 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder59", 4,203895E-45f, Vector(-835,0184f, 181,7097f, 1561,401f), Vector(0.0f, 30,13685f, 0.0f), Vector(92,53649f, 112,1975f, 86,57299f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 64, &iLocal_601 + 8[1]);
	*(&iLocal_601 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder10", 4,203895E-45f, Vector(-596,8842f, 156,3475f, 1417,066f), Vector(0.0f, 33,92152f, 0.0f), Vector(271,8308f, 76,29949f, 143,5935f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 64, &iLocal_601 + 8[2]);
	*(&iLocal_601 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder11", 4,203895E-45f, Vector(-377,1188f, 141,5529f, 1262,022f), Vector(0.0f, 7,292739f, 0.0f), Vector(115,0695f, 58,29394f, 47,57434f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 64, &iLocal_601 + 8[3]);
	*(&iLocal_601 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder12", 4,203895E-45f, Vector(-201,276f, 142,242f, 1527,303f), Vector(0.0f, 1,794969f, 0.0f), Vector(199,1374f, 58,29394f, 266,0443f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 64, &iLocal_601 + 8[4]);
	*(&iLocal_601 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder13", 4,203895E-45f, Vector(-407,1201f, 144,5646f, 1784,334f), Vector(0.0f, -17,03513f, 0.0f), Vector(140,64f, 58,29394f, 89,70598f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 64, &iLocal_601 + 8[5]);
	*(&iLocal_601 + 144) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_601, "talv_flk_NORTH_set");
	*(&iLocal_601 + 72[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "nCylinder2", 4,203895E-45f, Vector(-738,6946f, 186,7292f, 1301,132f), Vector(0.0f, 39,8131f, 0.0f), Vector(209,2188f, 48,06796f, 77,69141f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[0]);
	*(&iLocal_601 + 72[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder35", 4,203895E-45f, Vector(-1098,858f, 190,0172f, 1360,992f), Vector(0.0f, 20.0f, 0.0f), Vector(67,40719f, 60,19688f, 38,9086f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[1]);
	*(&iLocal_601 + 72[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder37", 4,203895E-45f, Vector(-1202,23f, 189,8394f, 1509,898f), Vector(0.0f, -0,5394719f, 0.0f), Vector(34,43784f, 48,06796f, 42,17895f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[2]);
	*(&iLocal_601 + 72[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder38", 4,203895E-45f, Vector(-961,1198f, 185,7253f, 1311,964f), Vector(0.0f, 1,509276f, 0.0f), Vector(86,09306f, 56,096f, 65,3297f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[3]);
	*(&iLocal_601 + 72[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder40", 4,203895E-45f, Vector(-640,3352f, 144,3973f, 782,2554f), Vector(0.0f, 20.0f, 0.0f), Vector(47,70806f, 48,06796f, 100,5601f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[4]);
	*(&iLocal_601 + 72[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder41", 4,203895E-45f, Vector(-582,7562f, 139,6384f, 954,1177f), Vector(0.0f, 20.0f, 0.0f), Vector(50,17066f, 110,6072f, 84,65246f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[5]);
	*(&iLocal_601 + 72[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder42", 4,203895E-45f, Vector(-651,8021f, 146,404f, 569,4237f), Vector(0.0f, 7,972168f, 0.0f), Vector(52,7394f, 65,23756f, 122,7747f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[6]);
	*(&iLocal_601 + 72[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder43", 4,203895E-45f, Vector(-528,7275f, 166,78f, 1150,276f), Vector(0.0f, -41,69667f, 0.0f), Vector(135,1217f, 73,87469f, 68,46393f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 144, &iLocal_601 + 72[7]);
	*(&iLocal_601 + 200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_601, "talv_flk_SOUTH_set");
	*(&iLocal_601 + 152[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "nCylinder3", 4,203895E-45f, Vector(-589,2515f, 140,549f, 1928,917f), Vector(0.0f, -16,89093f, 0.0f), Vector(257,7066f, 83,19911f, 108,6402f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 200, &iLocal_601 + 152[0]);
	*(&iLocal_601 + 152[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder50", 4,203895E-45f, Vector(-274,6546f, 84,32935f, 1917,132f), Vector(0.0f, 28,90153f, 0.0f), Vector(107,9436f, 79,55395f, 97,79385f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 200, &iLocal_601 + 152[1]);
	*(&iLocal_601 + 152[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder51", 4,203895E-45f, Vector(-91,72025f, 114,1684f, 1820,091f), Vector(0.0f, 48,13682f, 0.0f), Vector(131,1238f, 107,3915f, 90,51267f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 200, &iLocal_601 + 152[2]);
	*(&iLocal_601 + 152[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder60", 4,203895E-45f, Vector(-425,0334f, 96,37634f, 2096,799f), Vector(0.0f, -57,87617f, 0.0f), Vector(101,5545f, 91,79201f, 94,99359f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 200, &iLocal_601 + 152[3]);
	*(&iLocal_601 + 152[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "Cylinder61", 4,203895E-45f, Vector(-135,5685f, 96,37634f, 2011,551f), Vector(0.0f, 3,840688f, 0.0f), Vector(103,7744f, 91,79201f, 75,89438f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 200, &iLocal_601 + 152[4]);
	*(&iLocal_601 + 336) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_601, "talv_aquaticFishes_set");
	*(&iLocal_601 + 208[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes1", 2,802597E-45f, Vector(-1055,772f, 181,0549f, 1450,559f), Vector(0.0f, 7,171262f, 0.0f), Vector(250,1399f, 5,863475f, 161,1213f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[0]);
	*(&iLocal_601 + 208[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes2", 2,802597E-45f, Vector(-944,5592f, 174,7437f, 1578,331f), Vector(0.0f, 27,63371f, 0.0f), Vector(56,60616f, 15,6186f, 150,4928f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[1]);
	*(&iLocal_601 + 208[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes3", 2,802597E-45f, Vector(-864,0654f, 155,9434f, 1685,871f), Vector(0.0f, -46,15937f, 0.0f), Vector(130,6914f, 30,33334f, 44,02484f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[2]);
	*(&iLocal_601 + 208[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes4", 2,802597E-45f, Vector(-824,2472f, 141,6483f, 1768,86f), Vector(0.0f, -8,707941f, 0.0f), Vector(53,67214f, 18,19532f, 89,27471f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[3]);
	*(&iLocal_601 + 208[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes5", 2,802597E-45f, Vector(-797,1638f, 134,0961f, 1864,935f), Vector(0.0f, 30,88466f, 0.0f), Vector(46,35728f, 12,59928f, 146,7679f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[4]);
	*(&iLocal_601 + 208[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes6", 2,802597E-45f, Vector(-758,0644f, 124,1473f, 1966,399f), Vector(0.0f, 14,76972f, 0.0f), Vector(37,20575f, 22,49081f, 79,99351f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[5]);
	*(&iLocal_601 + 208[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes7", 2,802597E-45f, Vector(-664,967f, 87,70407f, 2032,214f), Vector(0.0f, 0.0f, 0.0f), Vector(172,6396f, 17,64581f, 64,38243f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[6]);
	*(&iLocal_601 + 208[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes8", 2,802597E-45f, Vector(-577,627f, 81,16354f, 2080,263f), Vector(0.0f, 36,1105f, 0.0f), Vector(39,35627f, 10,08463f, 62,65144f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[7]);
	*(&iLocal_601 + 208[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes9", 2,802597E-45f, Vector(-544,3558f, 73,68035f, 2157,092f), Vector(0.0f, 41,30886f, 0.0f), Vector(65,77435f, 13,99295f, 92,72429f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[8]);
	*(&iLocal_601 + 208[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes10", 2,802597E-45f, Vector(-469,9328f, 70,38285f, 2191,754f), Vector(0.0f, -26,34225f, 0.0f), Vector(66,94518f, 5,753312f, 11,30177f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[9]);
	*(&iLocal_601 + 208[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes11", 2,802597E-45f, Vector(-395,6228f, 69,71171f, 2230,458f), Vector(0.0f, -19,63805f, 0.0f), Vector(97,54456f, 6,514398f, 38,15876f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[10]);
	*(&iLocal_601 + 208[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes12", 2,802597E-45f, Vector(-293,6046f, 71,09695f, 2253,549f), Vector(0.0f, 0.0f, 0.0f), Vector(115,4794f, 8,174694f, 43,31063f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[11]);
	*(&iLocal_601 + 208[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes13", 2,802597E-45f, Vector(-147,0819f, 69,05841f, 2212,549f), Vector(0.0f, 15,79396f, 0.0f), Vector(195,2177f, 7,178958f, 44,59148f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[12]);
	*(&iLocal_601 + 208[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes14", 2,802597E-45f, Vector(-38,77122f, 70,8055f, 2128,269f), Vector(0.0f, 0.0f, 0.0f), Vector(77,05475f, 7,378823f, 160,9037f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[13]);
	*(&iLocal_601 + 208[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticFishes15", 2,802597E-45f, Vector(-229,4651f, 71,2652f, 2364,53f), Vector(0.0f, 0.0f, 0.0f), Vector(191,1671f, 5,206788f, 209,1733f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 336, &iLocal_601 + 208[14]);
	*(&iLocal_601 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_601, "talv_aquaticWildlife_set");
	*(&iLocal_601 + 344[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_01", 4,203895E-45f, Vector(-152f, 68,26666f, 2216f), Vector(0.0f, 16,55233f, 0.0f), Vector(159,2095f, 85,32535f, 28,5615f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[0]);
	*(&iLocal_601 + 344[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_02", 4,203895E-45f, Vector(-367,9082f, 68,26666f, 2238,888f), Vector(0.0f, -16,4704f, 0.0f), Vector(109,5831f, 58,72903f, 19,65874f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[1]);
	*(&iLocal_601 + 344[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_03", 4,203895E-45f, Vector(-494,9665f, 68,26666f, 2179,797f), Vector(0.0f, -31,61113f, 0.0f), Vector(82,07603f, 58,72903f, 19,65874f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[2]);
	*(&iLocal_601 + 344[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_04", 4,203895E-45f, Vector(-575,446f, 68,26666f, 2087,523f), Vector(0.0f, -58,09722f, 0.0f), Vector(82,07603f, 58,72903f, 19,65874f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[3]);
	*(&iLocal_601 + 344[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_05", 4,203895E-45f, Vector(-658,7006f, 68,26666f, 2038,264f), Vector(0.0f, -7,532945f, 0.0f), Vector(82,07603f, 58,72903f, 29,75141f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[4]);
	*(&iLocal_601 + 344[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_06", 4,203895E-45f, Vector(-758,1253f, 68,26666f, 1955,588f), Vector(0.0f, -72,54741f, 0.0f), Vector(82,07603f, 112,9613f, 23,55225f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[5]);
	*(&iLocal_601 + 344[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_07", 4,203895E-45f, Vector(-807,1262f, 68,26666f, 1850,914f), Vector(0.0f, -59,86823f, 0.0f), Vector(66,2807f, 112,9613f, 23,55225f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[6]);
	*(&iLocal_601 + 344[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_08", 4,203895E-45f, Vector(-823,0187f, 68,26666f, 1770,229f), Vector(0.0f, -94,60016f, 0.0f), Vector(52,46916f, 89,4225f, 18,64444f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[7]);
	*(&iLocal_601 + 344[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_09", 4,203895E-45f, Vector(-855,415f, 68,26666f, 1693,823f), Vector(0.0f, -47,98232f, 0.0f), Vector(52,46916f, 157,7196f, 18,64444f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[8]);
	*(&iLocal_601 + 344[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_010", 4,203895E-45f, Vector(-918,5265f, 68,26666f, 1625,548f), Vector(0.0f, -56,16022f, 0.0f), Vector(52,46916f, 157,7196f, 18,64444f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[9]);
	*(&iLocal_601 + 344[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_011", 4,203895E-45f, Vector(-966,7207f, 68,26666f, 1541,208f), Vector(0.0f, -56,16022f, 0.0f), Vector(52,46916f, 157,7196f, 18,64444f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[10]);
	*(&iLocal_601 + 344[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_012", 4,203895E-45f, Vector(-1034,515f, 68,26666f, 1446,728f), Vector(0.0f, 0,7024403f, 0.0f), Vector(104,176f, 313,1477f, 63,8155f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[11]);
	*(&iLocal_601 + 344[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_013", 4,203895E-45f, Vector(-1179,48f, 68,26666f, 1454,661f), Vector(0.0f, -16,87923f, 0.0f), Vector(104,176f, 313,1477f, 31,80929f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[12]);
	*(&iLocal_601 + 344[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_014", 4,203895E-45f, Vector(-1340,312f, 68,26666f, 1373,885f), Vector(0.0f, -28,07886f, 0.0f), Vector(104,176f, 313,1477f, 31,80929f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[13]);
	*(&iLocal_601 + 344[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_015", 4,203895E-45f, Vector(-219,0838f, 68,26666f, 2289,443f), Vector(0.0f, -84,64565f, 0.0f), Vector(64,71246f, 34,68142f, 11,60913f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[14]);
	*(&iLocal_601 + 344[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_016", 4,203895E-45f, Vector(-250,3255f, 68,26666f, 2375,784f), Vector(0.0f, -129,7999f, 0.0f), Vector(64,71246f, 34,68142f, 11,60913f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[15]);
	*(&iLocal_601 + 344[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_017", 4,203895E-45f, Vector(-297,4722f, 68,26666f, 2445,084f), Vector(0.0f, -129,7999f, 0.0f), Vector(26,37791f, 34,68142f, 20,51755f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[16]);
	*(&iLocal_601 + 344[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_018", 4,203895E-45f, Vector(-188,41f, 68,26666f, 2374,648f), Vector(0.0f, -152,6304f, 0.0f), Vector(11,8026f, 34,68142f, 57,80375f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[17]);
	*(&iLocal_601 + 344[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_019", 4,203895E-45f, Vector(-204,8829f, 68,26666f, 2412,706f), Vector(0.0f, -209,1972f, 0.0f), Vector(9,171598f, 34,68142f, 33,83997f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[18]);
	*(&iLocal_601 + 344[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_020", 4,203895E-45f, Vector(-254,3018f, 68,26666f, 2309,892f), Vector(0.0f, -237,1397f, 0.0f), Vector(9,171598f, 34,68142f, 33,83997f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[19]);
	*(&iLocal_601 + 344[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_021", 4,203895E-45f, Vector(-182,1617f, 68,26666f, 2315,004f), Vector(-0,8183758f, -290,2231f, 0.0f), Vector(9,171598f, 34,68142f, 33,83997f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[20]);
	*(&iLocal_601 + 344[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_aquaticWildlife_022", 4,203895E-45f, Vector(-136,151f, 68,26666f, 2316,708f), Vector(0,9045045f, -251,7742f, 1,627066f), Vector(6,449566f, 24,38835f, 23,79663f));
	ADD_TO_VOLUME_SET(&iLocal_601 + 528, &iLocal_601 + 344[21]);
	*(&iLocal_601 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_birds", 2,802597E-45f, Vector(-514,3977f, 177,5795f, 1433,708f), Vector(0.0f, 0.0f, 0.0f), Vector(977,7135f, 204,2023f, 1811,134f));
	*(&iLocal_601 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_Masons", 4,203895E-45f, Vector(-143,3034f, 88,32312f, 2210,759f), Vector(0.0f, 20.0f, 0.0f), Vector(19,95991f, 24,92979f, 43,83996f));
	*(&iLocal_601 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_montana_ford", 4,203895E-45f, Vector(-480,728f, 84,52522f, 2186,402f), Vector(0.0f, -17,70159f, 0.0f), Vector(28,024f, 25,65247f, 33,2642f));
	*(&iLocal_601 + 560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_601, "talv_Tanners_Span", 4,203895E-45f, Vector(-580,1471f, 105,077f, 2089,955f), Vector(0.0f, 18,88762f, 0.0f), Vector(84,13344f, 38,98499f, 45,70354f));
	*(&iLocal_601 + 568) = Vector(-1033,621f, 181,4009f, 1404,592f);
	*(&iLocal_601 + 568 + 12) = Vector(0.0f, 5,973791f, 0.0f);
	*(&iLocal_601 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "arbf_respawn_water_01", Vector(-1033,621f, 181,4009f, 1404,592f), Vector(0.0f, 5,973791f, 0.0f));
	*(&iLocal_601 + 600) = Vector(-1040,182f, 181,3859f, 1398,524f);
	*(&iLocal_601 + 600 + 12) = Vector(0.0f, -184,2665f, 0.0f);
	*(&iLocal_601 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "arbf_respawn_water_02", Vector(-1040,182f, 181,3859f, 1398,524f), Vector(0.0f, -184,2665f, 0.0f));
	*(&iLocal_601 + 632) = Vector(-1032.0f, 182,5768f, 1386.0f);
	*(&iLocal_601 + 632 + 12) = Vector(0.0f, -174,0807f, 0.0f);
	*(&iLocal_601 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "arbf_respawn_water_03", Vector(-1032.0f, 182,5768f, 1386.0f), Vector(0.0f, -174,0807f, 0.0f));
	*(&iLocal_601 + 664) = Vector(-1052.0f, 182,3301f, 1377,645f);
	*(&iLocal_601 + 664 + 12) = Vector(0.0f, -174,0807f, 0.0f);
	*(&iLocal_601 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "arbf_respawn_water_04", Vector(-1052.0f, 182,3301f, 1377,645f), Vector(0.0f, -174,0807f, 0.0f));
	*(&iLocal_601 + 696) = Vector(-321.0f, 123,3054f, 1962.0f);
	*(&iLocal_601 + 696 + 12) = Vector(0.0f, 167,7834f, 0.0f);
	*(&iLocal_601 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingTree_tal1", Vector(-321.0f, 123,3054f, 1962.0f), Vector(0.0f, 167,7834f, 0.0f));
	*(&iLocal_601 + 728) = Vector(-316,0001f, 123,3856f, 1956f);
	*(&iLocal_601 + 728 + 12) = Vector(0.0f, 72,58274f, 0.0f);
	*(&iLocal_601 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingHorses_tal1", Vector(-316,0001f, 123,3856f, 1956f), Vector(0.0f, 72,58274f, 0.0f));
	*(&iLocal_601 + 760) = Vector(-324,5558f, 121,6639f, 1968,013f);
	*(&iLocal_601 + 760 + 12) = Vector(0.0f, -49,30299f, 0.0f);
	*(&iLocal_601 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard1_tal1", Vector(-324,5558f, 121,6639f, 1968,013f), Vector(0.0f, -49,30299f, 0.0f));
	*(&iLocal_601 + 792) = Vector(-322,4177f, 120,5118f, 1970,306f);
	*(&iLocal_601 + 792 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_601 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard2_tal1", Vector(-322,4177f, 120,5118f, 1970,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_601 + 824) = Vector(-319,6714f, 120,7235f, 1970,062f);
	*(&iLocal_601 + 824 + 12) = Vector(0.0f, 18,2857f, 0.0f);
	*(&iLocal_601 + 848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard3_tal1", Vector(-319,6714f, 120,7235f, 1970,062f), Vector(0.0f, 18,2857f, 0.0f));
	*(&iLocal_601 + 856) = Vector(-320,979f, 122,6871f, 1964,775f);
	*(&iLocal_601 + 856 + 12) = Vector(0.0f, 133,7474f, 0.0f);
	*(&iLocal_601 + 880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingguy_tal1", Vector(-320,979f, 122,6871f, 1964,775f), Vector(0.0f, 133,7474f, 0.0f));
	*(&iLocal_601 + 888) = Vector(-683,979f, 152,1264f, 1858,651f);
	*(&iLocal_601 + 888 + 12) = Vector(0.0f, 181,248f, 0.0f);
	*(&iLocal_601 + 912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingTree_tal2", Vector(-683,979f, 152,1264f, 1858,651f), Vector(0.0f, 181,248f, 0.0f));
	*(&iLocal_601 + 920) = Vector(-692.0f, 151,8941f, 1864f);
	*(&iLocal_601 + 920 + 12) = Vector(0.0f, -134,0074f, 0.0f);
	*(&iLocal_601 + 944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingHorses_tal2", Vector(-692.0f, 151,8941f, 1864f), Vector(0.0f, -134,0074f, 0.0f));
	*(&iLocal_601 + 952) = Vector(-688.0f, 152,0886f, 1862,775f);
	*(&iLocal_601 + 952 + 12) = Vector(0.0f, -91,83728f, 0.0f);
	*(&iLocal_601 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard1_tal2", Vector(-688.0f, 152,0886f, 1862,775f), Vector(0.0f, -91,83728f, 0.0f));
	*(&iLocal_601 + 984) = Vector(-684.0f, 151,592f, 1867,999f);
	*(&iLocal_601 + 984 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_601 + 1008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard2_tal2", Vector(-684.0f, 151,592f, 1867,999f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_601 + 1016) = Vector(-680.0f, 151,8625f, 1867,038f);
	*(&iLocal_601 + 1016 + 12) = Vector(0.0f, 44,52262f, 0.0f);
	*(&iLocal_601 + 1040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard3_tal2", Vector(-680.0f, 151,8625f, 1867,038f), Vector(0.0f, 44,52262f, 0.0f));
	*(&iLocal_601 + 1048) = Vector(-684,1642f, 152,0886f, 1862,775f);
	*(&iLocal_601 + 1048 + 12) = Vector(0.0f, 90,31831f, 0.0f);
	*(&iLocal_601 + 1072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingguy_tal2", Vector(-684,1642f, 152,0886f, 1862,775f), Vector(0.0f, 90,31831f, 0.0f));
	*(&iLocal_601 + 1080) = Vector(-664,083f, 174,4142f, 1395,394f);
	*(&iLocal_601 + 1080 + 12) = Vector(0.0f, -176,5244f, 0.0f);
	*(&iLocal_601 + 1104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingTree_tal3", Vector(-664,083f, 174,4142f, 1395,394f), Vector(0.0f, -176,5244f, 0.0f));
	*(&iLocal_601 + 1112) = Vector(-657,1503f, 174,2817f, 1405,834f);
	*(&iLocal_601 + 1112 + 12) = Vector(0.0f, 91,85547f, 0.0f);
	*(&iLocal_601 + 1136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingHorses_tal3", Vector(-657,1503f, 174,2817f, 1405,834f), Vector(0.0f, 91,85547f, 0.0f));
	*(&iLocal_601 + 1144) = Vector(-664,083f, 174,0923f, 1401,341f);
	*(&iLocal_601 + 1144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_601 + 1168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard1_tal3", Vector(-664,083f, 174,0923f, 1401,341f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_601 + 1176) = Vector(-668,0001f, 174,6823f, 1404f);
	*(&iLocal_601 + 1176 + 12) = Vector(0.0f, -38,93428f, 0.0f);
	*(&iLocal_601 + 1200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard2_tal3", Vector(-668,0001f, 174,6823f, 1404f), Vector(0.0f, -38,93428f, 0.0f));
	*(&iLocal_601 + 1208) = Vector(-666,6293f, 174,5759f, 1405,673f);
	*(&iLocal_601 + 1208 + 12) = Vector(0.0f, -19,89674f, 0.0f);
	*(&iLocal_601 + 1232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingGuard3_tal3", Vector(-666,6293f, 174,5759f, 1405,673f), Vector(0.0f, -19,89674f, 0.0f));
	*(&iLocal_601 + 1240) = Vector(-664,083f, 174,0923f, 1398,821f);
	*(&iLocal_601 + 1240 + 12) = Vector(0.0f, 179,3761f, 0.0f);
	*(&iLocal_601 + 1264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_601, "hangingguy_tal3", Vector(-664,083f, 174,0923f, 1398,821f), Vector(0.0f, 179,3761f, 0.0f));
	return 1;
}

void Function_96(int iParam0, int iParam1) //Position: 0x5152 / 20818
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

void Function_97(var uParam0, int iParam1) //Position: 0x519C / 20892
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_98() //Position: 0x51AD / 20909
{
	return;
}

bool Function_99() //Position: 0x51B3 / 20915
{
	return Function_100();
}

int Function_100() //Position: 0x51BC / 20924
{
	var uVar0;
	
	Function_96(3, 3);
	uVar0 = &uVar0;
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/player_herb_violetsnowdrop", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/player_herb_hummingbirdsage", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_106(&iLocal_169 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	if (!Function_101(&iLocal_169 + 8))
	{
		return 0;
	}
	iLocal_169 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_169))
	{
		iLocal_169 = CREATE_LAYOUT("TallTrees_layout");
	}
	*(&iLocal_169 + 544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint", Vector(-1040,393f, 184,047f, 1377,772f), Vector(0.0f, 169,34f, 0.0f));
	*(&iLocal_169 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint1", Vector(-495,255f, 144,499f, 1927,976f), Vector(0.0f, 100,686f, 0.0f));
	*(&iLocal_169 + 560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint2", Vector(-461,26f, 140,187f, 1929,024f), Vector(0.0f, 175,373f, 0.0f));
	*(&iLocal_169 + 568) = Vector(-844,585f, 189,753f, 1583,111f);
	*(&iLocal_169 + 568 + 12) = Vector(0.0f, 174,998f, 0.0f);
	*(&iLocal_169 + 592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint3", Vector(-844,585f, 189,753f, 1583,111f), Vector(0.0f, 174,998f, 0.0f));
	*(&iLocal_169 + 600) = Vector(-733,6751f, 229,0498f, 1132.0f);
	*(&iLocal_169 + 600 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_169 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint4", Vector(-733,6751f, 229,0498f, 1132.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 632) = Vector(-482,9754f, 71,90712f, 2203,033f);
	*(&iLocal_169 + 632 + 12) = Vector(-0,05455317f, -0,02802815f, 0,08660866f);
	*(&iLocal_169 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint7", Vector(-482,9754f, 71,90712f, 2203,033f), Vector(-0,05455317f, -0,02802815f, 0,08660866f));
	*(&iLocal_169 + 664) = Vector(-499,047f, 75,045f, 2209,638f);
	*(&iLocal_169 + 664 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_169 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "talf_bhint8", Vector(-499,047f, 75,045f, 2209,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 696) = Vector(-479,216f, 74,86f, 2216,221f);
	*(&iLocal_169 + 696 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_169 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "talf_bhint9", Vector(-479,216f, 74,86f, 2216,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 728) = Vector(-492,624f, 73,197f, 2215,717f);
	*(&iLocal_169 + 728 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_169 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "talf_bhint10", Vector(-492,624f, 73,197f, 2215,717f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 760) = Vector(-734,578f, 226,755f, 1107,767f);
	*(&iLocal_169 + 760 + 12) = Vector(0.0f, 164,027f, 0.0f);
	*(&iLocal_169 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "talf_bhint11", Vector(-734,578f, 226,755f, 1107,767f), Vector(0.0f, 164,027f, 0.0f));
	*(&iLocal_169 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint8", Vector(-1044,787f, 184,066f, 1375,618f), Vector(0.0f, 314,542f, 0.0f));
	*(&iLocal_169 + 800) = Vector(-465,413f, 142,624f, 1895,747f);
	*(&iLocal_169 + 800 + 12) = Vector(0.0f, 48,377f, 0.0f);
	*(&iLocal_169 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "tallf_bhint9", Vector(-465,413f, 142,624f, 1895,747f), Vector(0.0f, 48,377f, 0.0f));
	*(&iLocal_169 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_horse_stay3", "horse_stay", Vector(-723,721f, 226,011f, 1122,191f), Vector(0.0f, -87,53077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 832), 0);
	*(&iLocal_169 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_horse_stay2", "horse_stay", Vector(-727,61f, 226,223f, 1120,39f), Vector(0.0f, -253,3726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 840), 0);
	*(&iLocal_169 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_horse_stay1", "horse_stay", Vector(-754,41f, 228,791f, 1131,354f), Vector(0.0f, -78,61452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 848), 0);
	*(&iLocal_169 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_horse_stay", "horse_stay", Vector(-749,865f, 227,201f, 1121,549f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 856), 0);
	*(&iLocal_169 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop9", "Player_Herb_VioletSnowdrop", Vector(-894,1646f, 201,9576f, 1528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop8", "Player_Herb_VioletSnowdrop", Vector(-812,3889f, 186,0371f, 1232,813f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop7", "Player_Herb_VioletSnowdrop", Vector(-811,6999f, 179,2376f, 1384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop6", "Player_Herb_VioletSnowdrop", Vector(-961,0168f, 182,3751f, 1459,109f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop5", "Player_Herb_VioletSnowdrop", Vector(-1011,03f, 185,2311f, 1374,426f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop40", "Player_Herb_VioletSnowdrop", Vector(-680,0544f, 169,5147f, 1260,078f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop4", "Player_Herb_VioletSnowdrop", Vector(-876.0f, 193,718f, 1235,349f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop39", "Player_Herb_VioletSnowdrop", Vector(-608,3892f, 169,8096f, 1178,253f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop38", "Player_Herb_VioletSnowdrop", Vector(-425,9355f, 142,9052f, 1249,295f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop37", "Player_Herb_VioletSnowdrop", Vector(-304.0f, 133,4919f, 1336f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop36", "Player_Herb_VioletSnowdrop", Vector(-446,1278f, 131,3868f, 1201,03f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop35", "Player_Herb_VioletSnowdrop", Vector(-421,5536f, 142,423f, 1254,451f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop34", "Player_Herb_VioletSnowdrop", Vector(-594,7793f, 160,395f, 1281,692f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop33", "Player_Herb_VioletSnowdrop", Vector(-720.0f, 169,6626f, 1344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop32", "Player_Herb_VioletSnowdrop", Vector(-688.0f, 169,5147f, 1272.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop31", "Player_Herb_VioletSnowdrop", Vector(-932,0116f, 194,7607f, 1315,988f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop30", "Player_Herb_VioletSnowdrop", Vector(-840.0f, 184,7214f, 1302,519f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop3", "Player_Herb_VioletSnowdrop", Vector(-905,4869f, 196,5365f, 1267,151f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop29", "Player_Herb_VioletSnowdrop", Vector(302,0675f, 114,1615f, 1725,442f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop28", "Player_Herb_VioletSnowdrop", Vector(-820,2811f, 185,863f, 1248,281f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop27", "Player_Herb_VioletSnowdrop", Vector(-809,2433f, 183,7228f, 1175,171f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop26", "Player_Herb_VioletSnowdrop", Vector(-419,5688f, 116,6903f, 1152,93f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop25", "Player_Herb_VioletSnowdrop", Vector(-262,4087f, 116,0961f, 1224,747f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop24", "Player_Herb_VioletSnowdrop", Vector(-363,0544f, 117,723f, 1220,947f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop23", "Player_Herb_VioletSnowdrop", Vector(-701,5494f, 174,4512f, 1202,581f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop22", "Player_Herb_VioletSnowdrop", Vector(-615,6915f, 168,5812f, 1100,308f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop21", "Player_Herb_VioletSnowdrop", Vector(-490,3961f, 126,1658f, 1040,729f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop20", "Player_Herb_VioletSnowdrop", Vector(-619,6085f, 169,5643f, 1048f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop2", "Player_Herb_VioletSnowdrop", Vector(-1080.0f, 188,8414f, 1354,991f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop19", "Player_Herb_VioletSnowdrop", Vector(-617,6307f, 142,4992f, 904,0003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop18", "Player_Herb_VioletSnowdrop", Vector(-548,0001f, 127,1276f, 916.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop17", "Player_Herb_VioletSnowdrop", Vector(-642,6788f, 140,233f, 844,8235f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop16", "Player_Herb_VioletSnowdrop", Vector(-777,1317f, 184,4256f, 812,6071f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop15", "Player_Herb_VioletSnowdrop", Vector(-902,608f, 206,3865f, 1094,384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop14", "Player_Herb_VioletSnowdrop", Vector(-718,998f, 225,2521f, 1120,439f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop13", "Player_Herb_VioletSnowdrop", Vector(-846,9979f, 211,9342f, 1084,518f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop12", "Player_Herb_VioletSnowdrop", Vector(-872,0032f, 197,4375f, 1128,003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop11", "Player_Herb_VioletSnowdrop", Vector(-791,0549f, 199,3337f, 1202,918f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop10", "Player_Herb_VioletSnowdrop", Vector(-1084,32f, 182,37f, 1497,451f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_VioletSnowdrop", "Player_Herb_VioletSnowdrop", Vector(-1202,184f, 187,051f, 1428,522f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage9", "Player_Herb_HummingbirdSage", Vector(-650,5471f, 96,37646f, 2073,051f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage8", "Player_Herb_HummingbirdSage", Vector(-573,9288f, 150,5809f, 1908f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage7", "Player_Herb_HummingbirdSage", Vector(-424.0f, 125,4901f, 2010,173f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage60", "Player_Herb_HummingbirdSage", Vector(12.0f, 115,419f, 1664.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage6", "Player_Herb_HummingbirdSage", Vector(-353,9566f, 82,26611f, 2188.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage59", "Player_Herb_HummingbirdSage", Vector(-163,3843f, 128,289f, 1739,229f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage58", "Player_Herb_HummingbirdSage", Vector(-579,093f, 167,1844f, 1389,167f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage57", "Player_Herb_HummingbirdSage", Vector(-687,5864f, 181,1271f, 1608,589f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage56", "Player_Herb_HummingbirdSage", Vector(-403,8828f, 147,4588f, 1476,553f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage55", "Player_Herb_HummingbirdSage", Vector(-559,6156f, 168,6587f, 1462,071f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage54", "Player_Herb_HummingbirdSage", Vector(-725,5195f, 175,5069f, 1673,499f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage53", "Player_Herb_HummingbirdSage", Vector(-574,4073f, 175,7316f, 1655,52f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage52", "Player_Herb_HummingbirdSage", Vector(-348.0f, 147,4612f, 1679,097f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage51", "Player_Herb_HummingbirdSage", Vector(-306,1377f, 144,2182f, 1825,862f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage50", "Player_Herb_HummingbirdSage", Vector(-673,0797f, 152,1978f, 1871,119f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage49", "Player_Herb_HummingbirdSage", Vector(-317,0758f, 84,27249f, 2137,3f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage48", "Player_Herb_HummingbirdSage", Vector(206,5806f, 90,17886f, 1944,086f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage47", "Player_Herb_HummingbirdSage", Vector(138,0592f, 82,85904f, 2006,355f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage46", "Player_Herb_HummingbirdSage", Vector(168.0f, 107,4897f, 1856f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage45", "Player_Herb_HummingbirdSage", Vector(-619,5699f, 175,5661f, 1659,533f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage44", "Player_Herb_HummingbirdSage", Vector(-448.0f, 162,0204f, 1731,15f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage43", "Player_Herb_HummingbirdSage", Vector(-498,1167f, 151,3338f, 1826,184f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage42", "Player_Herb_HummingbirdSage", Vector(-300,2108f, 131,726f, 1391,249f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage41", "Player_Herb_HummingbirdSage", Vector(-158,0741f, 123,4823f, 1425,278f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage40", "Player_Herb_HummingbirdSage", Vector(-44,00006f, 122,5702f, 1500.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage4", "Player_Herb_HummingbirdSage", Vector(45,43288f, 79,5917f, 1964,184f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage39", "Player_Herb_HummingbirdSage", Vector(-452,7934f, 152,526f, 1446,807f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage38", "Player_Herb_HummingbirdSage", Vector(-596,0001f, 177,6941f, 1516f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage37", "Player_Herb_HummingbirdSage", Vector(-661,3279f, 173,4927f, 1435,57f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage36", "Player_Herb_HummingbirdSage", Vector(-725,7597f, 176,6901f, 1397,993f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage35", "Player_Herb_HummingbirdSage", Vector(-908,0408f, 184,1334f, 1576,069f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage34", "Player_Herb_HummingbirdSage", Vector(-838,2128f, 189,6234f, 1596,025f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage33", "Player_Herb_HummingbirdSage", Vector(-809,653f, 157,0472f, 1697,251f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage32", "Player_Herb_HummingbirdSage", Vector(-757,8369f, 176,4141f, 1655,508f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage31", "Player_Herb_HummingbirdSage", Vector(-668,0446f, 175,4476f, 1657,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage30", "Player_Herb_HummingbirdSage", Vector(-283,9931f, 130,5098f, 1488,106f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage3", "Player_Herb_HummingbirdSage", Vector(-95,99991f, 81,28975f, 2144,053f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage29", "Player_Herb_HummingbirdSage", Vector(-436f, 147,7323f, 1473,89f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage28", "Player_Herb_HummingbirdSage", Vector(-320,8492f, 142,4725f, 1596,957f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand9", "rand_idle_stand", Vector(-467,906f, 142,681f, 1896,019f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_sit_cleanpistol1", "sit_cleanpistol", Vector(-464,486f, 140,173f, 1931,761f), Vector(0.0f, -92,88916f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand8", "rand_idle_stand", Vector(-456,888f, 140,187f, 1926,388f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand7", "rand_idle_stand", Vector(-459,856f, 140,187f, 1926,487f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_whittle_wood1", "whittle_wood", Vector(-468,799f, 140,454f, 1920,274f), Vector(0.0f, -56,59673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_spit1", "stand_spit", Vector(-475,174f, 141,513f, 1926,68f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-465,096f, 140,295f, 1921,414f), Vector(0.0f, -243,9603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand6", "rand_idle_stand", Vector(-459,367f, 140,156f, 1923,3f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-494,201f, 144,499f, 1927,552f), Vector(0.0f, -243,9603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand5", "rand_idle_stand", Vector(-490,425f, 144,473f, 1931,007f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand4", "rand_idle_stand", Vector(-495,447f, 144,499f, 1930,373f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand3", "rand_idle_stand", Vector(-498,908f, 144,942f, 1920,393f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_sit_no_table1", "sit_no_table", Vector(-536,7271f, 146,6513f, 1880,275f), Vector(0.0f, -79,20766f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand2", "rand_idle_stand", Vector(-465,725f, 142,647f, 1898,082f), Vector(0.0f, -19,29583f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand1", "rand_idle_stand", Vector(-522,4897f, 146,646f, 1888,277f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-531,7095f, 146,6513f, 1878,072f), Vector(0.0f, -243,9603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_guntricks1", "stand_guntricks_e_any", Vector(-848,164f, 189,677f, 1589,346f), Vector(0.0f, -152,5991f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_rand_idle_stand2", "rand_idle_stand", Vector(-843,486f, 189,681f, 1590,27f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_rand_idle_stand1", "rand_idle_stand", Vector(-843,403f, 189,753f, 1585,25f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_rand_idle_stand", "rand_idle_stand", Vector(-844,634f, 189,753f, 1582,716f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_stay7", "horse_stay", Vector(-491,1115f, 72,58714f, 2207,955f), Vector(0.0f, 85,92881f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_tend7", "horse_tend", Vector(-491,2f, 72,336f, 2199,114f), Vector(0.0f, -170,8492f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_stay6", "horse_stay", Vector(-481,9098f, 72,66555f, 2210,361f), Vector(0.0f, -48,69083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_tend6", "horse_tend", Vector(-501,957f, 75,46127f, 2230,747f), Vector(0.0f, 217,4179f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_sit_ground_smoke2", "sit_ground_smoke", Vector(-484,3089f, 71,97777f, 2204,32f), Vector(0.0f, -51,32996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_sit_ground_smoke", "sit_ground_smoke", Vector(-481,8283f, 71,87337f, 2201,816f), Vector(0.0f, 129,3626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-485,3011f, 72,0527f, 2202,761f), Vector(0.0f, -94,26432f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-482,041f, 71,90236f, 2205,006f), Vector(0.0f, 18,83562f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-477,8579f, 71,79588f, 2203,276f), Vector(0.0f, -71,12064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-481,474f, 71,80349f, 2199,808f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-486,1086f, 72,11655f, 2200,902f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1488), 0);
	*(&iLocal_169 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-485,8302f, 72,53257f, 2211,344f), Vector(0.0f, 162,0719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1496), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-483,8687f, 75,67455f, 2243,048f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-483,075f, 71,961f, 2201,818f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_rand_idle_stand2", "rand_idle_stand", Vector(-513,642f, 78,714f, 2228,851f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_rand_idle_stand1", "rand_idle_stand", Vector(-494,992f, 74,165f, 2222,989f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", Vector(-476,394f, 72,594f, 2208,338f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-489,555f, 72,364f, 2204,134f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_tend5", "horse_tend", Vector(-491,3683f, 72,87353f, 2213,774f), Vector(0.0f, -122,2253f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_stay5", "horse_stay", Vector(-483,0219f, 72,43819f, 2207,555f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_tend4", "horse_tend", Vector(-490,959f, 72,65787f, 2211,081f), Vector(0.0f, -457,3993f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_horse_stay4", "horse_stay", Vector(-494,391f, 73,535f, 2216,439f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_Pee2", "Pee", Vector(-500,917f, 75,958f, 2222,902f), Vector(0.0f, 49,93821f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-502,51f, 75,94456f, 2226,066f), Vector(0.0f, -138,6134f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-506,2025f, 76,37253f, 2229,087f), Vector(0.0f, 206,1628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-869,239f, 184,363f, 1622,015f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-892,603f, 184,307f, 1598,662f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-898,47f, 196,766f, 1553,119f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-842,423f, 195,287f, 1517,248f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-850,515f, 199,951f, 1524,559f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_horse_stay3", "horse_stay", Vector(-860,0479f, 189,6933f, 1586,576f), Vector(0.0f, -87,53077f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1504), 0);
	*(&iLocal_169 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_horse_stay2", "horse_stay", Vector(-838,1571f, 189,673f, 1582,628f), Vector(0.0f, -253,3726f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1512), 0);
	*(&iLocal_169 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_horse_stay1", "horse_stay", Vector(-858,0981f, 189,7076f, 1589,251f), Vector(0.0f, -78,61452f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1520), 0);
	*(&iLocal_169 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_horse_stay", "horse_stay", Vector(-847,9999f, 189,794f, 1600f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1528), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_whittle_wood", "whittle_wood", Vector(-854,9286f, 189,7101f, 1587,258f), Vector(0.0f, -56,59673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_spit", "stand_spit", Vector(-844,5616f, 189,8666f, 1578,33f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_RandIdleSitGround", "Rand_Idle_Sit_Ground", Vector(-861,1256f, 189,7522f, 1577,534f), Vector(0.0f, 72,17829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_guntricks", "stand_guntricks_e_any", Vector(-843,9632f, 189,7141f, 1594,357f), Vector(0.0f, -152,5991f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_Pee", "Pee", Vector(-834,5575f, 189,5914f, 1578,504f), Vector(0.0f, -120,5125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_skin_scraper", "skin_scraper", Vector(-851,8649f, 189,7936f, 1581,97f), Vector(0.0f, 16,42579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_stand_lookdistance", "stand_lookdistance_w_any", Vector(-860,617f, 197,949f, 1547,594f), Vector(0.0f, -115,6206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_sit_cleanpistol", "sit_cleanpistol", Vector(-846,0652f, 189,779f, 1585,647f), Vector(0.0f, -92,88916f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_lookout_windowR", "look_out_window_R", Vector(-843,0142f, 189,6684f, 1586,801f), Vector(0.0f, -180,6212f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_lookout_windowL", "look_out_window_L", Vector(-846,9889f, 189,7407f, 1583,474f), Vector(0.0f, 91,37856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_smoking_stand1", "smoking_stand", Vector(-847,0233f, 189,7358f, 1583,315f), Vector(0.0f, 88,9194f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_smoking_stand", "smoking_stand", Vector(-839,2578f, 189,6638f, 1589,468f), Vector(0.0f, -126,8859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_sit_ground_smoke1", "sit_ground_smoke", Vector(-840,5498f, 189,6831f, 1590,884f), Vector(0.0f, -132,4568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_sit_coffee_drink", "sit_camp_coffee_drink", Vector(-853,5219f, 189,7364f, 1586,908f), Vector(0.0f, 123,5809f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_sit_ground_smoke", "sit_ground_smoke", Vector(-853,1792f, 189,7862f, 1582,249f), Vector(0.0f, 111,9939f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-852,1535f, 189,6882f, 1585,669f), Vector(0.0f, 90,9255f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Tnr_LookDistanceBinocs", "look_distance_binocs", Vector(-860,8885f, 189,5468f, 1589,467f), Vector(0.0f, 93,03499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_guntricks2", "stand_guntricks_e_any", Vector(-1046,667f, 184,257f, 1363,73f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_guntricks1", "stand_guntricks_e_any", Vector(-1040,191f, 184,076f, 1360,591f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_yawning_n_any", "stand_yawning_n_any", Vector(-1044,274f, 184,066f, 1374,797f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_rand_idle_stand1", "rand_idle_stand", Vector(-1042,525f, 183,986f, 1371,567f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1536), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-1060,616f, 186,347f, 1369,309f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1066,706f, 188,877f, 1351,358f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1048,898f, 189,629f, 1344,847f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1030,036f, 189,812f, 1343,675f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1021,314f, 185,173f, 1367,07f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_Pee2", "Pee", Vector(-1044,787f, 184,066f, 1375,618f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1037,289f, 184,007f, 1360,879f), Vector(0.0f, -148,2222f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1544), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_rand_idle_stand1", "rand_idle_stand", Vector(-728,483f, 226,88f, 1124,825f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_rand_idle_stand", "rand_idle_stand", Vector(-732,926f, 226,2996f, 1106,792f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_yawning_n_any", "stand_yawning_n_any", Vector(-741,615f, 227,712f, 1121,556f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_Pee1", "Pee", Vector(-726,613f, 226,972f, 1128,937f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_whittle_wood", "whittle_wood", Vector(-731,111f, 226,912f, 1119,21f), Vector(0.0f, -56,59673f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_RandIdleSitGround1", "Rand_Idle_Sit_Ground", Vector(-735,3475f, 226,3739f, 1104,99f), Vector(0.0f, 236,5938f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_RandIdleSitGround", "Rand_Idle_Sit_Ground", Vector(-733,03f, 227,017f, 1113,366f), Vector(0.0f, 72,17829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_spit", "stand_spit", Vector(-745,383f, 227,523f, 1120,269f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_guntricks", "stand_guntricks_e_any", Vector(-738,237f, 230,987f, 1138,923f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_smoking_stand1", "smoking_stand", Vector(-736,827f, 227,061f, 1113,505f), Vector(0.0f, 233,1141f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-776,693f, 208,288f, 1174,507f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-764,583f, 217,809f, 1163,076f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-732,609f, 231,183f, 1161,514f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-728,293f, 228,278f, 1153,609f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_smoking_stand", "smoking_stand", Vector(-839,2578f, 189,6638f, 1589,468f), Vector(0.0f, -126,8859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_Pee", "Pee", Vector(-1027,649f, 184,4096f, 1377,63f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-777,777f, 213,244f, 1163,218f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-718,439f, 226,382f, 1147,617f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nek_stand_lookdistance", "stand_lookdistance_w_any", Vector(-747,145f, 227,698f, 1152,161f), Vector(0.0f, 176,216f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_rand_idle_stand", "rand_idle_stand", Vector(-1045,471f, 184,066f, 1373,464f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_169 + 1552), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_sit_docks1", "nsit_docks", Vector(-1046,972f, 184,0596f, 1378,077f), Vector(0.0f, 90,22343f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_Pee1", "Pee", Vector(-1033,513f, 181,428f, 1405,885f), Vector(0.0f, -182,9437f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_horse_stay4", "horse_stay", Vector(-1035,998f, 184,1881f, 1368,416f), Vector(0.0f, -201,4612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_horse_stay3", "horse_stay", Vector(-1035,918f, 184,0916f, 1366,649f), Vector(0.0f, 149,0538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_horse_stay2", "horse_stay", Vector(-1060,616f, 186,347f, 1369,309f), Vector(0.0f, 149,0538f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_horse_stay1", "horse_stay", Vector(-1057,52f, 187,0946f, 1360,963f), Vector(0.0f, -201,4612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_Pee", "Pee", Vector(-1027,649f, 184,4096f, 1377,63f), Vector(0.0f, -104,4397f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_NearWall", "Rand_Idle_NearWall", Vector(-1046,11f, 183,7955f, 1371,995f), Vector(0.0f, 711,347f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1038,049f, 184,0207f, 1362,066f), Vector(0.0f, 275,9078f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_stand_guntricks", "stand_guntricks_e_any", Vector(-1039,681f, 184,047f, 1376,458f), Vector(0.0f, 11,44363f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "nAur_stand", "rand_idle_stand", Vector(-1040,12f, 184,047f, 1374,909f), Vector(0.0f, -145,1313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_lean_rail", "nlean_rail", Vector(-1041,311f, 184,046f, 1388,666f), Vector(0.0f, 91,23931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_look_window", "look_out_window_L", Vector(-1044,392f, 184,065f, 1375,834f), Vector(0.0f, -179,9143f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_lean_fence", "lean_fence_L_talking", Vector(-1046,237f, 184,0319f, 1378,434f), Vector(0.0f, -179,6869f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_sit_docks", "nsit_docks", Vector(-1038,795f, 184,0846f, 1380,922f), Vector(0.0f, -92,40741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Aur_look_binocs", "look_distance_binocs", Vector(-1039,277f, 181,423f, 1405,247f), Vector(0.0f, -183,3307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_smoking_stand12", "smoking_stand", Vector(-534,7827f, 146,6513f, 1877,814f), Vector(0.0f, 181,8827f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-534,1003f, 146,652f, 1881,399f), Vector(0.0f, -358,6365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_smoking_stand11", "smoking_stand", Vector(-491,075f, 144,272f, 1937,443f), Vector(0.0f, -28,95748f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Pee", "Pee", Vector(-461,327f, 142,833f, 1890,427f), Vector(0.0f, -138,032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_rand_idle_stand", "rand_idle_stand", Vector(-454,65f, 139,572f, 1919,325f), Vector(0.0f, -113,4712f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_smoking_stand", "smoking_stand", Vector(-495,012f, 144,473f, 1923,981f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_horse_stay3", "horse_stay", Vector(-467,863f, 140,948f, 1918,547f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_horse_stay2", "horse_stay", Vector(-487,01f, 144,068f, 1904,935f), Vector(0.0f, -221,2936f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_horse_stay", "horse_stay", Vector(-500,318f, 145,434f, 1917,507f), Vector(0.0f, -139,2258f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-490,864f, 144,376f, 1923,154f), Vector(0.0f, -36,64879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-458,21f, 140,186f, 1931,342f), Vector(0.0f, -3,663632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_lookdistance_binocs3", "look_distance_binocs", Vector(-459,359f, 142,84f, 1890,269f), Vector(0.0f, -68,80422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-494,257f, 144,499f, 1930,558f), Vector(0.0f, -33,78901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Sit_Ground_Smoke_Pipe", "Sit_Ground_Smoke_Pipe", Vector(-497,401f, 144,499f, 1929,53f), Vector(0.0f, 37,61281f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_look_out_window_R", "look_out_window_R", Vector(-464,6117f, 142,647f, 1898,452f), Vector(0.0f, 179,3634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_smoking_stand13", "smoking_stand", Vector(-457,4906f, 142,6668f, 1895,166f), Vector(0.0f, -120,3361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_sit_cleanrifle", "sit_cleanrifle", Vector(-455,6522f, 139,545f, 1919,091f), Vector(0.0f, -48,19163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_sit_no_table", "sit_no_table", Vector(-502,756f, 144,5078f, 1927,236f), Vector(0.0f, -142,8304f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Pee1", "Pee", Vector(-500,237f, 144,473f, 1933,786f), Vector(0.0f, -4,101937f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-451,2635f, 140,1866f, 1934,491f), Vector(0.0f, 10,2007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-454,9582f, 140,186f, 1931,184f), Vector(0.0f, 99,03301f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_Rand_Idle_Near", "Rand_Idle_NearWall_Shoulder_L", Vector(-498,472f, 144,472f, 1933,444f), Vector(0.0f, 181,4896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_announce1", "stand_announce", Vector(-491,863f, 144,506f, 1921,508f), Vector(0.0f, -138,9142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_announce", "stand_announce", Vector(-464,679f, 140,254f, 1920,628f), Vector(0.0f, 48,78769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_lookdistance_binocs", "look_distance_binocs", Vector(-430,077f, 134,9f, 1907,864f), Vector(0.0f, -88,09788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_lookdistance_binocs2", "look_distance_binocs", Vector(-477,696f, 145,356f, 1950,641f), Vector(0.0f, 189,7475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-528,882f, 151,674f, 1944,555f), Vector(0.0f, -66,41837f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-537,156f, 147,628f, 1903,934f), Vector(0.0f, 306,722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "bcc_lookdistance_binocs1", "look_distance_binocs", Vector(-475,628f, 145,189f, 1876,517f), Vector(0.0f, -93,37556f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_169 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage27", "Player_Herb_HummingbirdSage", Vector(-234,8312f, 126,4941f, 1413,074f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage26", "Player_Herb_HummingbirdSage", Vector(-328,9761f, 134,5593f, 1347,657f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage25", "Player_Herb_HummingbirdSage", Vector(-184,0001f, 128,9335f, 1312f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage24", "Player_Herb_HummingbirdSage", Vector(-88.0f, 117,4406f, 1404f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage23", "Player_Herb_HummingbirdSage", Vector(-296.0f, 141,2629f, 1624f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage22", "Player_Herb_HummingbirdSage", Vector(-261,9808f, 140,8409f, 1687,524f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage21", "Player_Herb_HummingbirdSage", Vector(-114,3974f, 121,4745f, 1809,136f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage20", "Player_Herb_HummingbirdSage", Vector(-48.0f, 113,286f, 1688f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage2", "Player_Herb_HummingbirdSage", Vector(-200,0116f, 87,21113f, 1980,004f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage19", "Player_Herb_HummingbirdSage", Vector(-43,99976f, 117,4587f, 1600f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage18", "Player_Herb_HummingbirdSage", Vector(24.0f, 115,4509f, 1672.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage17", "Player_Herb_HummingbirdSage", Vector(73,58875f, 118,3772f, 1760,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage16", "Player_Herb_HummingbirdSage", Vector(-171,3039f, 120,5057f, 1860,722f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage15", "Player_Herb_HummingbirdSage", Vector(-316.0f, 144,1793f, 1832f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage14", "Player_Herb_HummingbirdSage", Vector(-412,0512f, 155,5096f, 1807,954f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage13", "Player_Herb_HummingbirdSage", Vector(-616,2814f, 171,8325f, 1825,91f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage12", "Player_Herb_HummingbirdSage", Vector(-780,3611f, 143,7323f, 1824,27f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage10", "Player_Herb_HummingbirdSage", Vector(-616.0f, 116,1135f, 1984f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage1", "Player_Herb_HummingbirdSage", Vector(-72.0f, 107,4196f, 1864f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage", "Player_Herb_HummingbirdSage", Vector(103,5838f, 83,15372f, 1989,076f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_169 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_169, "Player_Herb_HummingbirdSage61", "Player_Herb_HummingbirdSage", Vector(-457,2195f, 140,1816f, 1936,16f), Vector(0.0f, 0.0f, 0.0f));
	return 1;
}

bool Function_101(struct<2>[] Param0) //Position: 0xB558 / 46424
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_105();
	iVar1 = 0;
	if (!Function_21(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_104(&(Param0[iVar02]), 8);
		}
		else if (Function_103())
		{
			iVar1 = 1;
			Function_104(&(Param0[iVar02]), 8);
		}
		Function_104(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_21(&(Param0[iVar02]), 4))
		{
			if (!Function_21(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_21(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_21(&(Param0[02]), 8) || iVar1));
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
				Function_104(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_21(&(Param0[iVar02]), 4))
		{
			if (!Function_21(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_104(&(Param0[iVar02]), 2);
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
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_104(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_104(&(Param0[iVar02]), 2);
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
	Function_102();
	return 1;
}

void Function_102() //Position: 0xB91A / 47386
{
	if (!Function_61(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_103() //Position: 0xB95A / 47450
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

void Function_104(struct<13> Param0) //Position: 0xB988 / 47496
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_105() //Position: 0xB99B / 47515
{
	if (!Function_61(128))
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

var Function_106(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB9DD / 47581
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_107(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_104(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_107(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xBA1B / 47643
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_21(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_104(&(Param0[iVar02]), 4);
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

bool Function_108() //Position: 0xBAEA / 47850
{
	return Function_109();
}

int Function_109() //Position: 0xBAF3 / 47859
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
	
	Function_96(3, 3);
	uVar0 = &uVar0;
	Function_106(&iLocal_7 + 8, "p_uti_cover2x1x", 0, 0);
	if (!Function_101(&iLocal_7 + 8))
	{
		return 0;
	}
	iLocal_7 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("TallTrees_layout");
	}
	*(&iLocal_7 + 32) = CREATE_OBJECTSET_IN_LAYOUT("TAL_vantagePointsSet", &iLocal_7, 8, 0);
	*(&iLocal_7 + 40[03]) = Vector(-1004,93f, 107,54f, 1215,466f);
	*(&iLocal_7 + 40[03] + 12) = Vector(0.0f, 176,0835f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage01", Vector(-1004,93f, 107,54f, 1215,466f), Vector(0.0f, 176,0835f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_7 + 32);
	*(&iLocal_7 + 40[13]) = Vector(-1011,234f, 107,5559f, 1212,117f);
	*(&iLocal_7 + 40[13] + 12) = Vector(0.0f, 153,6292f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage02", Vector(-1011,234f, 107,5559f, 1212,117f), Vector(0.0f, 153,6292f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_7 + 32);
	*(&iLocal_7 + 40[23]) = Vector(-1049.0f, 120.0f, 1194.0f);
	*(&iLocal_7 + 40[23] + 12) = Vector(0.0f, -178,1565f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage03", Vector(-1049.0f, 120.0f, 1194.0f), Vector(0.0f, -178,1565f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_7 + 32);
	*(&iLocal_7 + 40[33]) = Vector(-1105.0f, 131.0f, 1186.0f);
	*(&iLocal_7 + 40[33] + 12) = Vector(0.0f, 183.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage04", Vector(-1105.0f, 131.0f, 1186.0f), Vector(0.0f, 183.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_7 + 32);
	*(&iLocal_7 + 40[43]) = Vector(-1166.0f, 136.0f, 1184.0f);
	*(&iLocal_7 + 40[43] + 12) = Vector(0.0f, 175.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage05", Vector(-1166.0f, 136.0f, 1184.0f), Vector(0.0f, 175.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_7 + 32);
	*(&iLocal_7 + 40[53]) = Vector(-1191.0f, 135,7389f, 1170.0f);
	*(&iLocal_7 + 40[53] + 12) = Vector(0.0f, 122.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage06", Vector(-1191.0f, 135,7389f, 1170.0f), Vector(0.0f, 122.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_7 + 32);
	*(&iLocal_7 + 40[63]) = Vector(-1524.0f, 166.0f, 1083.0f);
	*(&iLocal_7 + 40[63] + 12) = Vector(0.0f, 204.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage07", Vector(-1524.0f, 166.0f, 1083.0f), Vector(0.0f, 204.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_7 + 32);
	*(&iLocal_7 + 40[73]) = Vector(-1629.0f, 162.0f, 1079.0f);
	*(&iLocal_7 + 40[73] + 12) = Vector(0.0f, 209.0f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage08", Vector(-1629.0f, 162.0f, 1079.0f), Vector(0.0f, 209.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_7 + 32);
	*(&iLocal_7 + 40[83]) = Vector(-1484,8f, 89.0f, 1445.0f);
	*(&iLocal_7 + 40[83] + 12) = Vector(0.0f, 356.0f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage09", Vector(-1484,8f, 89.0f, 1445.0f), Vector(0.0f, 356.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_7 + 32);
	*(&iLocal_7 + 40[93]) = Vector(-1419.0f, 80.0f, 1426.0f);
	*(&iLocal_7 + 40[93] + 12) = Vector(0.0f, 314.0f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage10", Vector(-1419.0f, 80.0f, 1426.0f), Vector(0.0f, 314.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_7 + 32);
	*(&iLocal_7 + 40[103]) = Vector(-1363.0f, 91.0f, 1450.0f);
	*(&iLocal_7 + 40[103] + 12) = Vector(0.0f, 76.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage11", Vector(-1363.0f, 91.0f, 1450.0f), Vector(0.0f, 76.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_7 + 32);
	*(&iLocal_7 + 40[113]) = Vector(-886.0f, 115.0f, 1280.0f);
	*(&iLocal_7 + 40[113] + 12) = Vector(0.0f, 190.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage12", Vector(-886.0f, 115.0f, 1280.0f), Vector(0.0f, 190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_7 + 32);
	*(&iLocal_7 + 40[123]) = Vector(-828.0f, 110.0f, 1318.0f);
	*(&iLocal_7 + 40[123] + 12) = Vector(0.0f, 76.0f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage13", Vector(-828.0f, 110.0f, 1318.0f), Vector(0.0f, 76.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_7 + 32);
	*(&iLocal_7 + 40[133]) = Vector(-817.0f, 110.0f, 1326.0f);
	*(&iLocal_7 + 40[133] + 12) = Vector(0.0f, 200.0f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage14", Vector(-817.0f, 110.0f, 1326.0f), Vector(0.0f, 200.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_7 + 32);
	*(&iLocal_7 + 40[143]) = Vector(-755.0f, 113.0f, 1345.0f);
	*(&iLocal_7 + 40[143] + 12) = Vector(0.0f, 110.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage15", Vector(-755.0f, 113.0f, 1345.0f), Vector(0.0f, 110.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_7 + 32);
	*(&iLocal_7 + 40[153]) = Vector(-551.0f, 114.0f, 1584.0f);
	*(&iLocal_7 + 40[153] + 12) = Vector(0.0f, 137.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage16", Vector(-551.0f, 114.0f, 1584.0f), Vector(0.0f, 137.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_7 + 32);
	*(&iLocal_7 + 40[163]) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_7 + 40[163] + 12) = Vector(-488.0f, 123.0f, 1699.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage17", Vector(0.0f, 0.0f, 0.0f), Vector(-488.0f, 123.0f, 1699.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_7 + 32);
	*(&iLocal_7 + 40[173]) = Vector(-488.0f, 108.0f, 1728.0f);
	*(&iLocal_7 + 40[173] + 12) = Vector(0.0f, 178.0f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage18", Vector(-488.0f, 108.0f, 1728.0f), Vector(0.0f, 178.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_7 + 32);
	*(&iLocal_7 + 40[183]) = Vector(-433.0f, 116.0f, 1841.0f);
	*(&iLocal_7 + 40[183] + 12) = Vector(0.0f, 42.0f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage19", Vector(-433.0f, 116.0f, 1841.0f), Vector(0.0f, 42.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_7 + 32);
	*(&iLocal_7 + 40[193]) = Vector(-425.0f, 112.0f, 1902.0f);
	*(&iLocal_7 + 40[193] + 12) = Vector(0.0f, 161.0f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage20", Vector(-425.0f, 112.0f, 1902.0f), Vector(0.0f, 161.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_7 + 32);
	*(&iLocal_7 + 40[203]) = Vector(-474.0f, 104.0f, 1948.0f);
	*(&iLocal_7 + 40[203] + 12) = Vector(0.0f, 8.0f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage21", Vector(-474.0f, 104.0f, 1948.0f), Vector(0.0f, 8.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_7 + 32);
	*(&iLocal_7 + 40[213]) = Vector(-423.0f, 113.0f, 1901.0f);
	*(&iLocal_7 + 40[213] + 12) = Vector(0.0f, 200.0f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage22", Vector(-423.0f, 113.0f, 1901.0f), Vector(0.0f, 200.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_7 + 32);
	*(&iLocal_7 + 40[223]) = Vector(-113.0f, 89.0f, 1978.0f);
	*(&iLocal_7 + 40[223] + 12) = Vector(0.0f, 89.0f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage23", Vector(-113.0f, 89.0f, 1978.0f), Vector(0.0f, 89.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_7 + 32);
	*(&iLocal_7 + 40[233]) = Vector(-39.0f, 123.0f, 1694.0f);
	*(&iLocal_7 + 40[233] + 12) = Vector(0.0f, 174.0f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage24", Vector(-39.0f, 123.0f, 1694.0f), Vector(0.0f, 174.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_7 + 32);
	*(&iLocal_7 + 40[243]) = Vector(-74.0f, 114.0f, 1753.0f);
	*(&iLocal_7 + 40[243] + 12) = Vector(0.0f, 176.0f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_7, "TAL_vantage25", Vector(-74.0f, 114.0f, 1753.0f), Vector(0.0f, 176.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_7 + 32);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x0", "p_uti_cover2x1x", Vector(-448,6531f, 138,4329f, 1914,886f), Vector(0.0f, -75,67802f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x1", "p_uti_cover2x1x", Vector(-449,3369f, 138,8412f, 1918,809f), Vector(0.0f, -75,67802f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x2", "p_uti_cover2x1x", Vector(-448,9167f, 139,7174f, 1896,942f), Vector(0.0f, -55,30396f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x3", "p_uti_cover2x1x", Vector(-456,8095f, 142,5521f, 1898,919f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x4", "p_uti_cover2x1x", Vector(-450,2817f, 139,0974f, 1922,986f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x5", "p_uti_cover2x1x", Vector(-443,0971f, 138,5973f, 1896,387f), Vector(0.0f, -13,45933f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x6", "p_uti_cover2x1x", Vector(-462,6826f, 140,1866f, 1921,317f), Vector(0.0f, -27,98695f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x7", "p_uti_cover2x1x", Vector(-458,4989f, 140,116f, 1920,404f), Vector(0.0f, -22,18075f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x8", "p_uti_cover2x1x", Vector(-468,9054f, 142,5568f, 1904,905f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x9", "p_uti_cover2x1x", Vector(-481,9193f, 143,0384f, 1920f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x10", "p_uti_cover2x1x", Vector(-484,5124f, 143,5607f, 1908,006f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x11", "p_uti_cover2x1x", Vector(-486,4197f, 143,5607f, 1919,21f), Vector(0.0f, -61,57892f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x12", "p_uti_cover2x1x", Vector(-480,3436f, 143,5607f, 1913,63f), Vector(0.0f, -89,31826f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x13", "p_uti_cover2x1x", Vector(-499,7885f, 144,8462f, 1921,702f), Vector(0.0f, -52,36341f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x14", "p_uti_cover2x1x", Vector(-514,1085f, 146,5724f, 1900f), Vector(0.0f, -103,41f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x15", "p_uti_cover2x1x", Vector(-518,9744f, 146,5725f, 1903,999f), Vector(0.0f, -111,6471f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x16", "p_uti_cover2x1x", Vector(-501,5815f, 145,5685f, 1910,418f), Vector(0.0f, -102,8337f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x17", "p_uti_cover2x1x", Vector(-490,0768f, 144,4524f, 1904f), Vector(0.0f, -115,3954f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x18", "p_uti_cover2x1x", Vector(-498,8087f, 145,4986f, 1902,808f), Vector(0.0f, -115,3954f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x19", "p_uti_cover2x1x", Vector(-508f, 146,5725f, 1911,293f), Vector(0.0f, -115,3954f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x20", "p_uti_cover2x1x", Vector(-481,9105f, 143,5607f, 1890,433f), Vector(0.0f, -191,4418f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x21", "p_uti_cover2x1x", Vector(-490,1463f, 144,5646f, 1888f), Vector(0.0f, -207,9976f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x22", "p_uti_cover2x1x", Vector(-482,9111f, 144,5646f, 1881,089f), Vector(0.0f, -199,7674f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x23", "p_uti_cover2x1x", Vector(-500.0f, 145,5685f, 1890,708f), Vector(0.0f, -165,2202f, 0.0f), 1);
	Function_110(StackVal, StackVal, &iLocal_7, "cover2x1x24", "p_uti_cover2x1x", Vector(-468,9321f, 140,0699f, 1930,365f), Vector(0.0f, -143,4477f, 0.0f), 1);
	return 1;
}

var Function_110(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xCBEF / 52207
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_111() //Position: 0xCC1D / 52253
{
	ALLOW_TUMBLEWEEDS(0);
	return;
}

void Function_112(char* cParam0) //Position: 0xCC27 / 52263
{
	if (!Function_61(128))
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

