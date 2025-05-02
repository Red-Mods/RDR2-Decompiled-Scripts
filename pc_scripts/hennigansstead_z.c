//Decompiled with MagicRDR v1.0
//Function Count : 113
//Statics Count : 1220
//Natives Count : 160
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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 37;
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
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 7;
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
	var uLocal_271 = 15;
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
	var uLocal_305 = 4;
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
	var uLocal_343 = 10;
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
	var uLocal_389 = 1;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 18;
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
	var uLocal_437 = 2;
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
	var uLocal_457 = 3;
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
	var uLocal_1203 = 2;
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
	int iLocal_1217 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_1217 = 0;
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
				if (Function_109())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_100())
				{
					Function_99();
					Function_98(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_95())
				{
					Function_98(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_94(&uLocal_3);
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
				Function_98(&(Global_43791[iScriptParam_0]), 8);
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
					Function_70(iScriptParam_0);
					Function_69(64);
				}
				Function_98(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_76(iScriptParam_0))
				{
					Function_67(Function_68(), iScriptParam_0);
				}
				Function_66(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_65(&cVar0, 5.0f);
				Function_98(&(Global_43791[iScriptParam_0]), 4);
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
					Function_24(&uLocal_3, &uLocal_1203, Function_62(), iScriptParam_0);
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
	Function_8(&uLocal_3, &uLocal_1203);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_69(64);
	Function_78(&(Global_43791[iScriptParam_0]), 32);
	Function_78(&(Global_43791[iScriptParam_0]), 64);
	Function_78(&(Global_43791[iScriptParam_0]), 512);
	Function_78(&(Global_43791[iScriptParam_0]), 16);
	Function_78(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_65(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2EA / 746
{
	return;
}

void Function_2(int iParam0) //Position: 0x2F0 / 752
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

void Function_3(int iParam0) //Position: 0x326 / 806
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x348 / 840
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35E / 862
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x374 / 884
{
	HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(&iLocal_251 + 736);
	Function_7();
	return;
}

void Function_7() //Position: 0x387 / 903
{
	RELEASE_LAYOUT_REF(&iLocal_251);
	return;
}

void Function_8(var uParam0, vector3[] vParam1) //Position: 0x393 / 915
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

void Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x3F0 / 1008
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
		Function_10(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_10(int iParam0, int iParam1, bool bParam2) //Position: 0x4DA / 1242
{
	int iVar0;
	
	Function_13(iParam0);
	Function_12(&iParam1);
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
	Function_11();
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

void Function_11() //Position: 0x659 / 1625
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_12(int iParam0) //Position: 0x665 / 1637
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

void Function_13(int iParam0) //Position: 0x6AF / 1711
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

void Function_14(struct<17> Param0) //Position: 0x6F5 / 1781
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_15(struct<17> Param0) //Position: 0x712 / 1810
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x730 / 1840
{
	Function_17();
	return;
}

void Function_17() //Position: 0x739 / 1849
{
	Function_18(&iLocal_11 + 8);
	RELEASE_LAYOUT_REF(&iLocal_11);
	return;
}

void Function_18(int iParam0) //Position: 0x74C / 1868
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

void Function_19(struct<2>[] Param0, int iParam1) //Position: 0x774 / 1908
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

void Function_20(struct<13> Param0) //Position: 0x8BF / 2239
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_21(struct<13> Param0) //Position: 0x8DC / 2268
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8FA / 2298
{
	Function_23();
	return;
}

void Function_23() //Position: 0x903 / 2307
{
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_24(vector3 vParam0) //Position: 0x90F / 2319
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

bool Function_25(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x999 / 2457
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

void Function_26(int iParam0) //Position: 0xDF1 / 3569
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_79(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_98(&(Global_43791[iParam0]), 4096);
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

float Function_27(int iParam0) //Position: 0xEE2 / 3810
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_28(int iParam0) //Position: 0xF1F / 3871
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, int iParam1) //Position: 0xF58 / 3928
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

var Function_30(int iParam0) //Position: 0xFC2 / 4034
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x101A / 4122
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

void Function_32(bool bParam0) //Position: 0x1242 / 4674
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x12E0 / 4832
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

var Function_34() //Position: 0x191E / 6430
{
	int iVar0;
	
	return &iVar0;
}

var Function_35(int iParam0) //Position: 0x1927 / 6439
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1938 / 6456
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

struct<32> Function_37(char* cParam0) //Position: 0x1A2F / 6703
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A4A / 6730
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1AB1 / 6833
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1AC3 / 6851
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AD5 / 6869
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

int Function_42(int iParam0) //Position: 0x1C09 / 7177
{
	return Global_55480[iParam016].f_96;
}

void Function_43(int iParam0) //Position: 0x1C18 / 7192
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x1DB2 / 7602
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

void Function_45(var uParam0, int iParam1) //Position: 0x1FF6 / 8182
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(int iParam0, var uParam1, int iParam2) //Position: 0x2003 / 8195
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_47(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x202D / 8237
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
			SET_CRIME_WITNESSED(&uVar2, 1);
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

void Function_48() //Position: 0x22E0 / 8928
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

void Function_49(var uParam0, int iParam1) //Position: 0x2353 / 9043
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

bool Function_50(bool bParam0) //Position: 0x2389 / 9097
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

int Function_51(int iParam0) //Position: 0x23FF / 9215
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_52() //Position: 0x2410 / 9232
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

bool Function_53(int iParam0) //Position: 0x2429 / 9257
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x243F / 9279
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2454 / 9300
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2472 / 9330
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

void Function_57(struct<17> Param0) //Position: 0x2521 / 9505
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2534 / 9524
{
	int iVar0;
	int iVar1;
	
	Function_13(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_59(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_10(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x25AE / 9646
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_13(iParam0);
	Function_12(&uVar0);
	PRINTNL();
	Function_10(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x25D7 / 9687
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

bool Function_61(int iParam0) //Position: 0x25F7 / 9719
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2613 / 9747
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(var uParam0) //Position: 0x2628 / 9768
{
	uParam0 = uParam0;
	if (!iLocal_1217)
	{
		if (Function_64(1, Global_46736[2]))
		{
			iLocal_1217 = 1;
		}
	}
	return;
}

bool Function_64(bool bParam0, int iParam1) //Position: 0x264A / 9802
{
	int iVar0;
	var uVar1;
	int iVar2;
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
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		if (IS_OBJECT_VALID(&iVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(&iVar2);
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
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", 1);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, 1);
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

void Function_65(char* cParam0) //Position: 0x2789 / 10121
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

void Function_66(int iParam0) //Position: 0x27C9 / 10185
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

void Function_67(int iParam0, bool bParam1) //Position: 0x285B / 10331
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

var Function_68() //Position: 0x294B / 10571
{
	return &iLocal_7;
}

void Function_69(int iParam0) //Position: 0x2954 / 10580
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_70(bool bParam0) //Position: 0x2967 / 10599
{
	Function_71(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_75(&Global_46816));
	return;
}

void Function_71(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x298B / 10635
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
	(&Global_43580 + 24) = &uParam3;
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
		Function_74();
	}
	if (&bParam5)
	{
		Function_72(1048576);
	}
}

void Function_72(int iParam0) //Position: 0x2A99 / 10905
{
	Function_73(&Global_43580, iParam0);
	return;
}

void Function_73(var uParam0, var uParam1) //Position: 0x2AA7 / 10919
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_74() //Position: 0x2AC6 / 10950
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_72(16384);
	}
	return;
}

bool Function_75(int[] iParam0) //Position: 0x2AE2 / 10978
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

bool Function_76(int iParam0) //Position: 0x2B33 / 11059
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
		return Function_75(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_75(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_75(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_75(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_75(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_75(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_75(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_75(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_75(&Global_46914);
	}
	return 0;
}

void Function_77(int iParam0) //Position: 0x2C10 / 11280
{
	iParam0 = iParam0;
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x2C1A / 11290
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_79(int iParam0, int iParam1) //Position: 0x2C34 / 11316
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_80() //Position: 0x2C51 / 11345
{
	return;
}

void Function_81(var uParam0) //Position: 0x2C57 / 11351
{
	uParam0 = uParam0;
	return;
}

void Function_82() //Position: 0x2C61 / 11361
{
	Function_83(Global_46736[2]);
	Global_43787 = 0;
	return;
}

void Function_83(int iParam0) //Position: 0x2C74 / 11380
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

bool Function_84(var uParam0, int iParam1) //Position: 0x2EB5 / 11957
{
	return (uParam0 && iParam1) == 0;
}

int Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2EC2 / 11970
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

int Function_86(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2F20 / 12064
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

var Function_87(int iParam0) //Position: 0x3084 / 12420
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

bool Function_88(int iParam0) //Position: 0x30C2 / 12482
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0, int iParam1, bool bParam2) //Position: 0x30D7 / 12503
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_90() //Position: 0x30F7 / 12535
{
	return 1;
}

void Function_91(int iParam0) //Position: 0x30FE / 12542
{
	Function_93(&uLocal_3, &uLocal_1203, 2, &Global_44085[iParam09] + 8, 4294967295, 0);
	Function_93(&uLocal_3, &uLocal_1203, 5, &iLocal_251 + 856, 4294967295, 0);
	Function_92(&iLocal_251 + 856, 20);
	return;
}

void Function_92(var uParam0, bool bParam1) //Position: 0x3135 / 12597
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (32 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 32);
	}
	DECOR_SET_INT(&uParam0, "customweather", bParam1);
	return;
}

void Function_93(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x31A1 / 12705
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

void Function_94(struct<5> Param0) //Position: 0x328E / 12942
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_95() //Position: 0x329F / 12959
{
	if (Function_96())
	{
		HORSE_ADD_REPULSION_EXCLUSION_VOLUME(&iLocal_251 + 736);
		return 1;
	}
	return 0;
}

bool Function_96() //Position: 0x32B8 / 12984
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	iLocal_251 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_251))
	{
		iLocal_251 = CREATE_LAYOUT("HennigansStead_layout");
	}
	*(&iLocal_251 + 72) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_flk_NE_NW_set");
	*(&iLocal_251 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolfs26", 4,203895E-45f, Vector(-1546,43f, 97,38037f, 1853,78f), Vector(0.0f, 26,73163f, 0.0f), Vector(56,72965f, 109,8061f, 128,395f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[0]);
	*(&iLocal_251 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolfs25", 4,203895E-45f, Vector(-1628,388f, 132,5176f, 2159,78f), Vector(0.0f, 20.0f, 0.0f), Vector(52,97129f, 102,6874f, 102,6874f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[1]);
	*(&iLocal_251 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolfs24", 4,203895E-45f, Vector(-95,91358f, 83,8786f, 2326,572f), Vector(0.0f, 14,49333f, 0.0f), Vector(187,8941f, 82,59116f, 56,21016f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[2]);
	*(&iLocal_251 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolf4", 4,203895E-45f, Vector(-669,6195f, 82,32153f, 2243,572f), Vector(0.0f, -25,1136f, 0.0f), Vector(77,45664f, 61,52451f, 61,12249f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[3]);
	*(&iLocal_251 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolf3", 4,203895E-45f, Vector(-641,6283f, 105,2476f, 2147,894f), Vector(0.0f, -25,1136f, 0.0f), Vector(63,94891f, 61,52451f, 37,62522f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[4]);
	*(&iLocal_251 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolf2", 4,203895E-45f, Vector(-1244,821f, 109,2441f, 1986,66f), Vector(0.0f, 74,82964f, 0.0f), Vector(61,50541f, 61,52451f, 292,1641f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[5]);
	*(&iLocal_251 + 8[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "wolf1", 4,203895E-45f, Vector(-978,507f, 90,53821f, 2145,038f), Vector(0.0f, -25,1136f, 0.0f), Vector(81,73277f, 61,52451f, 61,52451f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 72, &iLocal_251 + 8[6]);
	*(&iLocal_251 + 208) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_flk_ALL_set");
	*(&iLocal_251 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes1", 4,203895E-45f, Vector(-168,285f, 121,9097f, 2701,151f), Vector(0.0f, 6,717595f, 0.0f), Vector(213,5704f, 78,37719f, 73,07709f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[0]);
	*(&iLocal_251 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes2", 4,203895E-45f, Vector(-1126,763f, 114,2393f, 2588,604f), Vector(0.0f, 20.0f, 0.0f), Vector(146,5656f, 74,16763f, 188,0626f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[1]);
	*(&iLocal_251 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes3", 4,203895E-45f, Vector(-1389,948f, 116,4549f, 2801,983f), Vector(0.0f, 96,61452f, 0.0f), Vector(171,6007f, 56,67553f, 76,86866f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[2]);
	*(&iLocal_251 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes4", 4,203895E-45f, Vector(-1579,845f, 101,3961f, 2518,945f), Vector(0.0f, 48,37656f, 0.0f), Vector(38,0601f, 28,90815f, 53,12041f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[3]);
	*(&iLocal_251 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes5", 4,203895E-45f, Vector(-1414,897f, 98,38428f, 2511,757f), Vector(0.0f, 20.0f, 0.0f), Vector(80,8248f, 24,70572f, 32,38042f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[4]);
	*(&iLocal_251 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes6", 4,203895E-45f, Vector(-1514,231f, 101,3961f, 2560,085f), Vector(0.0f, -3,53844f, 0.0f), Vector(25,17345f, 17,08007f, 21,68644f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[5]);
	*(&iLocal_251 + 80[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes7", 4,203895E-45f, Vector(-1326,246f, 97,38037f, 2249,009f), Vector(0.0f, 20.0f, 0.0f), Vector(184,2568f, 57,90978f, 203,9913f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[6]);
	*(&iLocal_251 + 80[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes8", 4,203895E-45f, Vector(-1608.0f, 125,5505f, 1980f), Vector(0.0f, 33,98433f, 0.0f), Vector(66,48834f, 39,50645f, 203,3061f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[7]);
	*(&iLocal_251 + 80[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyotes9", 4,203895E-45f, Vector(-1957,161f, 101,5846f, 1828,827f), Vector(0.0f, -14,7906f, 0.0f), Vector(249,577f, 128,3171f, 61,17927f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[8]);
	*(&iLocal_251 + 80[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "ncoyotes10", 4,203895E-45f, Vector(-450,4749f, 109,7193f, 2320,553f), Vector(0.0f, -10,25944f, 0.0f), Vector(170,8267f, 69,64325f, 122,3093f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[9]);
	*(&iLocal_251 + 80[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "ncoyotes11", 4,203895E-45f, Vector(-870,6578f, 120,6339f, 2242,882f), Vector(0.0f, 20.0f, 0.0f), Vector(137,9932f, 31,99745f, 55,90967f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[10]);
	*(&iLocal_251 + 80[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "ncoyotes12", 4,203895E-45f, Vector(-26,85835f, 73,28625f, 2445,993f), Vector(0.0f, 20.0f, 0.0f), Vector(89,6356f, 74,6244f, 57,78758f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[11]);
	*(&iLocal_251 + 80[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyote3", 4,203895E-45f, Vector(-705,2985f, 31,27967f, 2881,13f), Vector(0.0f, 12,9101f, 0.0f), Vector(168,8916f, 70,98837f, 54,45016f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[12]);
	*(&iLocal_251 + 80[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyote2", 4,203895E-45f, Vector(-1281,534f, 43,7626f, 3124,979f), Vector(0.0f, 20.0f, 0.0f), Vector(133,0771f, 70,98837f, 61,59326f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[13]);
	*(&iLocal_251 + 80[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "coyote1", 4,203895E-45f, Vector(-1548,017f, 43,7626f, 2987,519f), Vector(0.0f, -38,60177f, 0.0f), Vector(199,5057f, 70,98837f, 99,28436f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 208, &iLocal_251 + 80[14]);
	*(&iLocal_251 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_BIRDS_set");
	*(&iLocal_251 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "birds4", 4,203895E-45f, Vector(-33,64362f, 84,32941f, 2378,274f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 429,8304f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 256, &iLocal_251 + 216[0]);
	*(&iLocal_251 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "birds3", 4,203895E-45f, Vector(-638,519f, 89,349f, 2563,405f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 591,4594f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 256, &iLocal_251 + 216[1]);
	*(&iLocal_251 + 216[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "birds2", 4,203895E-45f, Vector(-1265,749f, 93,1955f, 2163,575f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 429,8304f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 256, &iLocal_251 + 216[2]);
	*(&iLocal_251 + 216[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "birds1", 4,203895E-45f, Vector(-1082,411f, 96,37646f, 2811,352f), Vector(0.0f, 20.0f, 0.0f), Vector(522,6793f, 135,1033f, 429,8304f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 256, &iLocal_251 + 216[3]);
	*(&iLocal_251 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_corr_g", 4,203895E-45f, Vector(-919,4725f, 93,44283f, 2380,834f), Vector(0.0f, 20.0f, 0.0f), Vector(21,77287f, 5,26564f, 24,40062f));
	*(&iLocal_251 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nhgnv_ng_g", 2,802597E-45f, Vector(-861,9213f, 90,67301f, 2456,731f), Vector(0.0f, 20,98884f, -0,355489f), Vector(12,13512f, 8,652277f, 36,94154f));
	*(&iLocal_251 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g1", 2,802597E-45f, Vector(-783,8423f, 90,3952f, 2399,794f), Vector(0.0f, -37,76251f, -0,355489f), Vector(21,45912f, 15,55698f, 28,28264f));
	*(&iLocal_251 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g2", 2,802597E-45f, Vector(-824,0499f, 89,96601f, 2430,379f), Vector(0.0f, -15,44712f, -0,355489f), Vector(14,39529f, 15,55698f, 16,9643f));
	*(&iLocal_251 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g3", 2,802597E-45f, Vector(-843,5833f, 89,96601f, 2460,735f), Vector(0.0f, 19,71824f, -0,355489f), Vector(20,80103f, 15,55698f, 30,64089f));
	*(&iLocal_251 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g4", 2,802597E-45f, Vector(-957,7906f, 89,96601f, 2422,677f), Vector(0.0f, 21,25423f, -0,355489f), Vector(20,93081f, 15,55698f, 38,45191f));
	*(&iLocal_251 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g5", 4,203895E-45f, Vector(-823,7832f, 93,44283f, 2375,945f), Vector(0.0f, 20.0f, 0.0f), Vector(24,1193f, 5,26564f, 27,03024f));
	*(&iLocal_251 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g6", 2,802597E-45f, Vector(-879,0945f, 91,02522f, 2430,412f), Vector(0.0f, 20,98884f, -0,355489f), Vector(6,678232f, 6,105186f, 6,992032f));
	*(&iLocal_251 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g7", 2,802597E-45f, Vector(-888,8362f, 91,11685f, 2433,847f), Vector(0.0f, 20,98884f, -0,355489f), Vector(5,146282f, 5,805651f, 6,648986f));
	*(&iLocal_251 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g8", 2,802597E-45f, Vector(-907,2183f, 91,10203f, 2440,071f), Vector(0.0f, 20,98884f, -0,355489f), Vector(19,88898f, 5,805651f, 5,396366f));
	*(&iLocal_251 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nhgnv_yg_g", 2,802597E-45f, Vector(-891,7211f, 89,96601f, 2415,688f), Vector(0.0f, -62,1231f, -0,355489f), Vector(21,93415f, 15,55698f, 89,95455f));
	*(&iLocal_251 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g10", 2,802597E-45f, Vector(-965,2615f, 90,6857f, 2466,688f), Vector(0.0f, -29,91364f, -0,355489f), Vector(10,95652f, 6,128434f, 10,16233f));
	*(&iLocal_251 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_ng_g11", 2,802597E-45f, Vector(-977,4526f, 90,6857f, 2446,704f), Vector(0.0f, 86,50684f, -0,355489f), Vector(10,95652f, 6,128434f, 10,16233f));
	*(&iLocal_251 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_flk_SE_set");
	*(&iLocal_251 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses9", 4,203895E-45f, Vector(-1252,915f, 115,5038f, 2776,96f), Vector(0.0f, 20.0f, 0.0f), Vector(53,69228f, 241,5724f, 159,1528f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[0]);
	*(&iLocal_251 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses8", 4,203895E-45f, Vector(-683,7336f, 101,3961f, 2504,357f), Vector(0.0f, 20.0f, 0.0f), Vector(108,5375f, 241,5724f, 73,36443f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[1]);
	*(&iLocal_251 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses7", 4,203895E-45f, Vector(-206,5182f, 107,4196f, 2489,549f), Vector(0.0f, 20.0f, 0.0f), Vector(95,45268f, 241,5724f, 89,9445f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[2]);
	*(&iLocal_251 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses6", 4,203895E-45f, Vector(-1068,474f, 97,64758f, 2288,876f), Vector(0.0f, 13,47815f, 0.0f), Vector(62,59843f, 166,692f, 146,1641f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[3]);
	*(&iLocal_251 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses5", 4,203895E-45f, Vector(-1356,155f, 105,5688f, 2589,477f), Vector(0.0f, 89,71684f, 0.0f), Vector(59,19648f, 167,1936f, 62,71087f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[4]);
	*(&iLocal_251 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses4", 4,203895E-45f, Vector(-929,6819f, 99,90509f, 2698,564f), Vector(0.0f, 4,474324f, 0.0f), Vector(241,5724f, 241,5724f, 136,8911f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[5]);
	*(&iLocal_251 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses3", 4,203895E-45f, Vector(-453,3163f, 110,2287f, 2913,625f), Vector(0.0f, 20.0f, 0.0f), Vector(206,5026f, 241,5724f, 75,11042f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[6]);
	*(&iLocal_251 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses2", 4,203895E-45f, Vector(55,33076f, 91,35687f, 2562,685f), Vector(0.0f, -4,355933f, 0.0f), Vector(152,0613f, 241,5724f, 75,9871f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[7]);
	*(&iLocal_251 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses1", 4,203895E-45f, Vector(-909,8542f, 30,11766f, 3047,201f), Vector(0.0f, 18,27707f, 0.0f), Vector(278,4159f, 241,5724f, 53,45417f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[8]);
	*(&iLocal_251 + 368[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_wild_horses10", 4,203895E-45f, Vector(-471,0976f, 108,2639f, 2622,838f), Vector(2,126057f, 30,47574f, 5,442584f), Vector(135,5817f, 68,29441f, 122,8929f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 456, &iLocal_251 + 368[9]);
	*(&iLocal_251 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_blackHorse", 4,203895E-45f, Vector(-591,0882f, 109,6251f, 2680,91f), Vector(0.0f, 20.0f, 0.0f), Vector(11,34726f, 11,34726f, 11,34726f));
	*(&iLocal_251 + 472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea", 4,203895E-45f, Vector(-823,0997f, 93,45189f, 2375,409f), Vector(0.0f, 14,89016f, 0.0f), Vector(21,89399f, 8,244097f, 25,59612f));
	*(&iLocal_251 + 480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea1", 2,802597E-45f, Vector(-842,5452f, 94,04724f, 2460,788f), Vector(0.0f, 22,15306f, 0.0f), Vector(27,05575f, 13,7937f, 31,79581f));
	*(&iLocal_251 + 488) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea2", 4,203895E-45f, Vector(-824,0959f, 94,57282f, 2427,253f), Vector(0.0f, -32,35684f, 0.0f), Vector(21,1792f, 10,17107f, 15,41338f));
	*(&iLocal_251 + 496) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea3", 4,203895E-45f, Vector(-783,6304f, 97,11323f, 2399,24f), Vector(0.0f, -32,8998f, 0.0f), Vector(13,45809f, 9,658726f, 15,57873f));
	*(&iLocal_251 + 504) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgv_nwreturn", 2,802597E-45f, Vector(-824,5424f, 98,57576f, 2431,177f), Vector(0.0f, -15,53175f, 0.0f), Vector(8,046127f, 3,443669f, 8,918226f));
	*(&iLocal_251 + 512) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea4", 2,802597E-45f, Vector(-897,3228f, 94,61942f, 2435,878f), Vector(0.0f, 21,06976f, 0.0f), Vector(47,62032f, 15,94985f, 16,65399f));
	*(&iLocal_251 + 520) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea5", 2,802597E-45f, Vector(-889,1013f, 94,61942f, 2397,852f), Vector(0.0f, 29,61621f, 0.0f), Vector(47,62032f, 15,94985f, 18,31907f));
	*(&iLocal_251 + 528) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea6", 2,802597E-45f, Vector(-872,9827f, 93,44815f, 2349,158f), Vector(0.0f, -58,25443f, 0.0f), Vector(44,3011f, 15,94985f, 15,19241f));
	*(&iLocal_251 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_nwarea7", 4,203895E-45f, Vector(-861,7238f, 95,68819f, 2380,121f), Vector(0.0f, 20.0f, 0.0f), Vector(9,669715f, 6,168983f, 10,11579f));
	*(&iLocal_251 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_cougarVol", 2,802597E-45f, Vector(-500,1792f, 110,2059f, 2908,145f), Vector(0.0f, 0.0f, 0.0f), Vector(705,1399f, 157,6671f, 343,9255f));
	*(&iLocal_251 + 568) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "BridgeNoSpawn_set");
	*(&iLocal_251 + 552[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Box", 2,802597E-45f, Vector(28,88792f, 95,09991f, 2737,801f), Vector(0.0f, -55,5507f, 0.0f), Vector(46,82572f, 65,73853f, 21,10844f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 568, &iLocal_251 + 552[0]);
	*(&iLocal_251 + 728) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_aquaticWildlife_set");
	*(&iLocal_251 + 576[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder", 4,203895E-45f, Vector(-1512,764f, 8,039202f, 3292,98f), Vector(0.0f, 20.0f, 0.0f), Vector(84,79319f, 60,33804f, 60,33804f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[0]);
	*(&iLocal_251 + 576[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder1", 4,203895E-45f, Vector(-1346,899f, 9,043137f, 3234,699f), Vector(0.0f, 20.0f, 0.0f), Vector(205,4157f, 60,33804f, 39,8123f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[1]);
	*(&iLocal_251 + 576[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder2", 4,203895E-45f, Vector(-1089,253f, 10,04872f, 3186,707f), Vector(0.0f, 70,81681f, 0.0f), Vector(35,98895f, 60,33804f, 106,7133f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[2]);
	*(&iLocal_251 + 576[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder3", 4,203895E-45f, Vector(-994,1088f, 10,04705f, 3208,598f), Vector(0.0f, 70,81681f, 0.0f), Vector(59,6558f, 51,61178f, 60,13989f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[3]);
	*(&iLocal_251 + 576[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder4", 4,203895E-45f, Vector(-839,1843f, 3,615696f, 3117,664f), Vector(0.0f, 119,4781f, 0.0f), Vector(44,35005f, 74,22896f, 154,3542f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[4]);
	*(&iLocal_251 + 576[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder5", 4,203895E-45f, Vector(-637,1089f, 24,74285f, 3041,886f), Vector(0.0f, 119,4781f, 0.0f), Vector(88,07926f, 34,47046f, 90,22388f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[5]);
	*(&iLocal_251 + 576[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder6", 4,203895E-45f, Vector(-470,0913f, 14,73549f, 2999,796f), Vector(0.0f, 99,98062f, 0.0f), Vector(37,44569f, 39,02574f, 118,2715f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[6]);
	*(&iLocal_251 + 576[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder7", 4,203895E-45f, Vector(-369,1953f, 21,65845f, 2903,82f), Vector(0.0f, 99,98062f, 0.0f), Vector(64,58783f, 35,06966f, 60,56346f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[7]);
	*(&iLocal_251 + 576[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "nCylinder8", 4,203895E-45f, Vector(-250,8742f, 17,47171f, 2865,07f), Vector(0.0f, 138,2915f, 0.0f), Vector(34,61906f, 35,32534f, 102,2345f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[8]);
	*(&iLocal_251 + 576[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder18", 4,203895E-45f, Vector(197,6258f, 75,37587f, 2436,369f), Vector(0.0f, 244,9178f, 0.0f), Vector(25,2479f, 39,10424f, 45,45464f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[9]);
	*(&iLocal_251 + 576[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder20", 4,203895E-45f, Vector(272,2747f, 69,27057f, 2027,005f), Vector(0.0f, 169,8044f, 0.0f), Vector(98,88961f, 21,28149f, 112,3064f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[10]);
	*(&iLocal_251 + 576[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder21", 4,203895E-45f, Vector(215,6241f, 78,14816f, 2367,177f), Vector(0.0f, 198,4123f, 0.0f), Vector(33,27529f, 15,48362f, 46,38807f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[11]);
	*(&iLocal_251 + 576[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder22", 4,203895E-45f, Vector(113,125f, 76,65231f, 1968,507f), Vector(0.0f, 169,8044f, 0.0f), Vector(98,88961f, 21,28149f, 21,67072f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[12]);
	*(&iLocal_251 + 576[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder23", 4,203895E-45f, Vector(85,59643f, 82,13325f, 2163,788f), Vector(0.0f, 151,2728f, 0.0f), Vector(98,88961f, 21,28149f, 21,67072f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[13]);
	*(&iLocal_251 + 576[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder24", 4,203895E-45f, Vector(-109,6845f, 79,79099f, 2126,796f), Vector(0.0f, 195,8334f, 0.0f), Vector(98,88961f, 21,28149f, 21,67072f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[14]);
	*(&iLocal_251 + 576[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder25", 4,203895E-45f, Vector(-47,7452f, 77,93546f, 2041,63f), Vector(0.0f, 195,8334f, 0.0f), Vector(25,03891f, 21,28149f, 73,96124f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[15]);
	*(&iLocal_251 + 576[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder26", 4,203895E-45f, Vector(-10,75366f, 74,62328f, 1963,345f), Vector(0.0f, 195,8334f, 0.0f), Vector(53,70681f, 21,28149f, 20,89974f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[16]);
	*(&iLocal_251 + 576[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "Cylinder27", 4,203895E-45f, Vector(-16,77554f, 77,93485f, 2119,054f), Vector(0.0f, 181,4433f, 0.0f), Vector(53,70681f, 21,28149f, 15,84347f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 728, &iLocal_251 + 576[17]);
	*(&iLocal_251 + 736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_RepulsionExclusion", 4,203895E-45f, Vector(-644,2127f, 88,45143f, 2749,292f), Vector(8,640414f, 24,33359f, 0.0f), Vector(26,2284f, 3,865706f, 72,83427f));
	*(&iLocal_251 + 768) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_null_set");
	*(&iLocal_251 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_null_01", 2,802597E-45f, Vector(-1466,12f, 112,8202f, 1971,609f), Vector(0.0f, 64,5147f, 0.0f), Vector(26,26892f, 35,53505f, 173,8512f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 768, &iLocal_251 + 744[0]);
	*(&iLocal_251 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_null_02", 2,802597E-45f, Vector(-1315,409f, 112,8202f, 2024,83f), Vector(0.0f, 76,49454f, 0.0f), Vector(26,26892f, 35,53505f, 155,8071f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 768, &iLocal_251 + 744[1]);
	*(&iLocal_251 + 776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_bhstop", 2,802597E-45f, Vector(-820,3679f, 93,44864f, 2420,626f), Vector(0.0f, -103,272f, 0.0f), Vector(8,879921f, 7,344114f, 14,69935f));
	*(&iLocal_251 + 784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_war_livestock", 4,203895E-45f, Vector(-874,9012f, 103,3879f, 2724,43f), Vector(0.0f, 20.0f, 0.0f), Vector(48,11292f, 10,95262f, 60,75099f));
	*(&iLocal_251 + 792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_war_chickens", 4,203895E-45f, Vector(-950,9265f, 104,3524f, 2732,826f), Vector(0.0f, -32,87181f, 0.0f), Vector(14,70139f, 7,72267f, 43,17991f));
	*(&iLocal_251 + 800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_war_pigs", 4,203895E-45f, Vector(-923,754f, 102,1641f, 2758,016f), Vector(0.0f, -53,44098f, 0.0f), Vector(2,831347f, 1,874195f, 4,532186f));
	*(&iLocal_251 + 808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_war_barn", 2,802597E-45f, Vector(-929,8949f, 100,7226f, 2750,85f), Vector(0.0f, 35,14248f, 0.0f), Vector(8,754588f, 8,754588f, 11,38631f));
	*(&iLocal_251 + 816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_bacc_chickens", 4,203895E-45f, Vector(113,4888f, 72,84962f, 2673,31f), Vector(0.0f, 20.0f, 0.0f), Vector(9,261682f, 3,104064f, 3,87598f));
	*(&iLocal_251 + 856) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_251, "hgnv_weather_set");
	*(&iLocal_251 + 824[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_weather02", 2,802597E-45f, Vector(-1615,721f, 99,44508f, 1904,794f), Vector(-3,439431f, 66,95576f, 0.0f), Vector(31,94579f, 41,12966f, 275,6443f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 856, &iLocal_251 + 824[0]);
	*(&iLocal_251 + 824[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_weather03", 2,802597E-45f, Vector(-1441,342f, 109,7487f, 1979,218f), Vector(-3,439431f, 66,95576f, 0.0f), Vector(31,94579f, 25,6088f, 124,293f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 856, &iLocal_251 + 824[1]);
	*(&iLocal_251 + 824[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_251, "hgnv_weather04", 2,802597E-45f, Vector(-1366,98f, 115,8711f, 2011,337f), Vector(0.0f, 69,65112f, 0.0f), Vector(21,31541f, 19,58715f, 85,85076f));
	ADD_TO_VOLUME_SET(&iLocal_251 + 856, &iLocal_251 + 824[2]);
	*(&iLocal_251 + 864) = Vector(-886,204f, 110,4f, 2618,948f);
	*(&iLocal_251 + 864 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_poi_sbridge", Vector(-886,204f, 110,4f, 2618,948f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 896) = Vector(-764.0f, 103,6768f, 2239,9f);
	*(&iLocal_251 + 896 + 12) = Vector(0.0f, 157,5f, 0.0f);
	*(&iLocal_251 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_poi_deadtrees", Vector(-764.0f, 103,6768f, 2239,9f), Vector(0.0f, 157,5f, 0.0f));
	*(&iLocal_251 + 928) = Vector(-595,187f, 100,689f, 2719,8f);
	*(&iLocal_251 + 928 + 12) = Vector(0.0f, 45.0f, 0.0f);
	*(&iLocal_251 + 952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_poi_covbridge", Vector(-595,187f, 100,689f, 2719,8f), Vector(0.0f, 45.0f, 0.0f));
	*(&iLocal_251 + 960) = Vector(-746,498f, 98,75f, 2627,884f);
	*(&iLocal_251 + 960 + 12) = Vector(0.0f, 45.0f, 0.0f);
	*(&iLocal_251 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_poi_4trees", Vector(-746,498f, 98,75f, 2627,884f), Vector(0.0f, 45.0f, 0.0f));
	*(&iLocal_251 + 992) = Vector(-511,67f, 90,115f, 2319.0f);
	*(&iLocal_251 + 992 + 12) = Vector(0.0f, 232.0f, 0.0f);
	*(&iLocal_251 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_poi_swamp", Vector(-511,67f, 90,115f, 2319.0f), Vector(0.0f, 232.0f, 0.0f));
	*(&iLocal_251 + 1024) = Vector(-1055,395f, 103,68f, 2699.0f);
	*(&iLocal_251 + 1024 + 12) = Vector(0.0f, 348.0f, 0.0f);
	*(&iLocal_251 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_poi_flat", Vector(-1055,395f, 103,68f, 2699.0f), Vector(0.0f, 348.0f, 0.0f));
	*(&iLocal_251 + 1056) = Vector(-812,374f, 92,361f, 2382,59f);
	*(&iLocal_251 + 1056 + 12) = Vector(0.0f, 130,801f, 0.0f);
	*(&iLocal_251 + 1080) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwway", Vector(-812,374f, 92,361f, 2382,59f), Vector(0.0f, 130,801f, 0.0f));
	*(&iLocal_251 + 1088) = Vector(-844,9763f, 91,49334f, 2461,833f);
	*(&iLocal_251 + 1088 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwway1", Vector(-844,9763f, 91,49334f, 2461,833f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1120) = Vector(-782,2222f, 91,49334f, 2401,543f);
	*(&iLocal_251 + 1120 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwway2", Vector(-782,2222f, 91,49334f, 2401,543f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1152) = Vector(-821,5574f, 91,49334f, 2429,458f);
	*(&iLocal_251 + 1152 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwway3", Vector(-821,5574f, 91,49334f, 2429,458f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1184) = Vector(-938,82f, 90,324f, 2473,492f);
	*(&iLocal_251 + 1184 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide", Vector(-938,82f, 90,324f, 2473,492f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1216) = Vector(-863,548f, 91,637f, 2376,084f);
	*(&iLocal_251 + 1216 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide1", Vector(-863,548f, 91,637f, 2376,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1248) = Vector(-827,514f, 93,365f, 2439,583f);
	*(&iLocal_251 + 1248 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide2", Vector(-827,514f, 93,365f, 2439,583f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1280) = Vector(-837,127f, 90,353f, 2463,477f);
	*(&iLocal_251 + 1280 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide3", Vector(-837,127f, 90,353f, 2463,477f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1312) = Vector(-880,615f, 91,357f, 2334,385f);
	*(&iLocal_251 + 1312 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide4", Vector(-880,615f, 91,357f, 2334,385f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1344) = Vector(-815,535f, 91,255f, 2472,396f);
	*(&iLocal_251 + 1344 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide5", Vector(-815,535f, 91,255f, 2472,396f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1376) = Vector(-780,733f, 90,353f, 2440,178f);
	*(&iLocal_251 + 1376 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide6", Vector(-780,733f, 90,353f, 2440,178f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1408) = Vector(-821,183f, 92,361f, 2396,052f);
	*(&iLocal_251 + 1408 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide7", Vector(-821,183f, 92,361f, 2396,052f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1440) = Vector(-821,183f, 92,361f, 2396,052f);
	*(&iLocal_251 + 1440 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide8", Vector(-821,183f, 92,361f, 2396,052f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1472) = Vector(-785,799f, 93,365f, 2388,569f);
	*(&iLocal_251 + 1472 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide9", Vector(-785,799f, 93,365f, 2388,569f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1504) = Vector(-793,778f, 93,365f, 2362,382f);
	*(&iLocal_251 + 1504 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide10", Vector(-793,778f, 93,365f, 2362,382f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1536) = Vector(-814,774f, 92,361f, 2344,782f);
	*(&iLocal_251 + 1536 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide11", Vector(-814,774f, 92,361f, 2344,782f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1568) = Vector(-893,606f, 91,357f, 2402,228f);
	*(&iLocal_251 + 1568 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide12", Vector(-893,606f, 91,357f, 2402,228f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1600) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1600 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide13", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1632) = Vector(-836,39f, 90,353f, 2457,28f);
	*(&iLocal_251 + 1632 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide14", Vector(-836,39f, 90,353f, 2457,28f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1664) = Vector(-823,243f, 90,353f, 2475,886f);
	*(&iLocal_251 + 1664 + 12) = Vector(0.0f, 171,4f, 0.0f);
	*(&iLocal_251 + 1688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide15", Vector(-823,243f, 90,353f, 2475,886f), Vector(0.0f, 171,4f, 0.0f));
	*(&iLocal_251 + 1696) = Vector(-831,904f, 92,361f, 2362,93f);
	*(&iLocal_251 + 1696 + 12) = Vector(0.0f, 186,386f, 0.0f);
	*(&iLocal_251 + 1720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide16", Vector(-831,904f, 92,361f, 2362,93f), Vector(0.0f, 186,386f, 0.0f));
	*(&iLocal_251 + 1728) = Vector(-836,39f, 90,353f, 2457,28f);
	*(&iLocal_251 + 1728 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 1752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide17", Vector(-836,39f, 90,353f, 2457,28f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 1760) = Vector(-846,081f, 90,353f, 2477,001f);
	*(&iLocal_251 + 1760 + 12) = Vector(0.0f, 282,006f, 0.0f);
	*(&iLocal_251 + 1784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide18", Vector(-846,081f, 90,353f, 2477,001f), Vector(0.0f, 282,006f, 0.0f));
	*(&iLocal_251 + 1792) = Vector(-851,076f, 90,353f, 2451,747f);
	*(&iLocal_251 + 1792 + 12) = Vector(0.0f, 182,407f, 0.0f);
	*(&iLocal_251 + 1816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide19", Vector(-851,076f, 90,353f, 2451,747f), Vector(0.0f, 182,407f, 0.0f));
	*(&iLocal_251 + 1824) = Vector(-852,568f, 90,353f, 2448,739f);
	*(&iLocal_251 + 1824 + 12) = Vector(0.0f, 93,77f, 0.0f);
	*(&iLocal_251 + 1848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide20", Vector(-852,568f, 90,353f, 2448,739f), Vector(0.0f, 93,77f, 0.0f));
	*(&iLocal_251 + 1856) = Vector(-830,179f, 90,353f, 2448,349f);
	*(&iLocal_251 + 1856 + 12) = Vector(0.0f, 143,138f, 0.0f);
	*(&iLocal_251 + 1880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide21", Vector(-830,179f, 90,353f, 2448,349f), Vector(0.0f, 143,138f, 0.0f));
	*(&iLocal_251 + 1888) = Vector(-856,616f, 90,353f, 2452,78f);
	*(&iLocal_251 + 1888 + 12) = Vector(0.0f, 75,853f, 0.0f);
	*(&iLocal_251 + 1912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide22", Vector(-856,616f, 90,353f, 2452,78f), Vector(0.0f, 75,853f, 0.0f));
	*(&iLocal_251 + 1920) = Vector(-829,59f, 93,365f, 2430,77f);
	*(&iLocal_251 + 1920 + 12) = Vector(0.0f, 93,027f, 0.0f);
	*(&iLocal_251 + 1944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide23", Vector(-829,59f, 93,365f, 2430,77f), Vector(0.0f, 93,027f, 0.0f));
	*(&iLocal_251 + 1952) = Vector(-810,973f, 93,365f, 2440,708f);
	*(&iLocal_251 + 1952 + 12) = Vector(0.0f, 91,635f, 0.0f);
	*(&iLocal_251 + 1976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide24", Vector(-810,973f, 93,365f, 2440,708f), Vector(0.0f, 91,635f, 0.0f));
	*(&iLocal_251 + 1984) = Vector(-803,359f, 91,357f, 2448,251f);
	*(&iLocal_251 + 1984 + 12) = Vector(0.0f, 17,835f, 0.0f);
	*(&iLocal_251 + 2008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide25", Vector(-803,359f, 91,357f, 2448,251f), Vector(0.0f, 17,835f, 0.0f));
	*(&iLocal_251 + 2016) = Vector(-772,11f, 93,365f, 2411,111f);
	*(&iLocal_251 + 2016 + 12) = Vector(0.0f, 127,188f, 0.0f);
	*(&iLocal_251 + 2040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide26", Vector(-772,11f, 93,365f, 2411,111f), Vector(0.0f, 127,188f, 0.0f));
	*(&iLocal_251 + 2048) = Vector(-773,476f, 93,365f, 2397,437f);
	*(&iLocal_251 + 2048 + 12) = Vector(0.0f, 250,683f, 0.0f);
	*(&iLocal_251 + 2072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide27", Vector(-773,476f, 93,365f, 2397,437f), Vector(0.0f, 250,683f, 0.0f));
	*(&iLocal_251 + 2080) = Vector(-779,747f, 93,365f, 2388,024f);
	*(&iLocal_251 + 2080 + 12) = Vector(0.0f, 63,328f, 0.0f);
	*(&iLocal_251 + 2104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide28", Vector(-779,747f, 93,365f, 2388,024f), Vector(0.0f, 63,328f, 0.0f));
	*(&iLocal_251 + 2112) = Vector(-776,103f, 93,365f, 2371,667f);
	*(&iLocal_251 + 2112 + 12) = Vector(0.0f, 206,97f, 0.0f);
	*(&iLocal_251 + 2136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide29", Vector(-776,103f, 93,365f, 2371,667f), Vector(0.0f, 206,97f, 0.0f));
	*(&iLocal_251 + 2144) = Vector(-761,763f, 93,388f, 2380,605f);
	*(&iLocal_251 + 2144 + 12) = Vector(0.0f, 97,728f, 0.0f);
	*(&iLocal_251 + 2168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide30", Vector(-761,763f, 93,388f, 2380,605f), Vector(0.0f, 97,728f, 0.0f));
	*(&iLocal_251 + 2176) = Vector(-816,417f, 92,361f, 2354,328f);
	*(&iLocal_251 + 2176 + 12) = Vector(0.0f, 3,285f, 0.0f);
	*(&iLocal_251 + 2200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide31", Vector(-816,417f, 92,361f, 2354,328f), Vector(0.0f, 3,285f, 0.0f));
	*(&iLocal_251 + 2208) = Vector(-826,99f, 92,361f, 2358,85f);
	*(&iLocal_251 + 2208 + 12) = Vector(0.0f, 295,112f, 0.0f);
	*(&iLocal_251 + 2232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide32", Vector(-826,99f, 92,361f, 2358,85f), Vector(0.0f, 295,112f, 0.0f));
	*(&iLocal_251 + 2240) = Vector(-830,217f, 92,361f, 2370,55f);
	*(&iLocal_251 + 2240 + 12) = Vector(0.0f, 296,989f, 0.0f);
	*(&iLocal_251 + 2264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide33", Vector(-830,217f, 92,361f, 2370,55f), Vector(0.0f, 296,989f, 0.0f));
	*(&iLocal_251 + 2272) = Vector(-833,169f, 93,365f, 2419,737f);
	*(&iLocal_251 + 2272 + 12) = Vector(0.0f, 97,728f, 0.0f);
	*(&iLocal_251 + 2296) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide34", Vector(-833,169f, 93,365f, 2419,737f), Vector(0.0f, 97,728f, 0.0f));
	*(&iLocal_251 + 2304) = Vector(-846,112f, 90,353f, 2448,327f);
	*(&iLocal_251 + 2304 + 12) = Vector(0.0f, 294,464f, 0.0f);
	*(&iLocal_251 + 2328) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide35", Vector(-846,112f, 90,353f, 2448,327f), Vector(0.0f, 294,464f, 0.0f));
	*(&iLocal_251 + 2336) = Vector(-833,234f, 90,353f, 2466,787f);
	*(&iLocal_251 + 2336 + 12) = Vector(0.0f, 216,919f, 0.0f);
	*(&iLocal_251 + 2360) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide36", Vector(-833,234f, 90,353f, 2466,787f), Vector(0.0f, 216,919f, 0.0f));
	*(&iLocal_251 + 2368) = Vector(-852,955f, 90,353f, 2462,946f);
	*(&iLocal_251 + 2368 + 12) = Vector(0.0f, 65,891f, 0.0f);
	*(&iLocal_251 + 2392) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide37", Vector(-852,955f, 90,353f, 2462,946f), Vector(0.0f, 65,891f, 0.0f));
	*(&iLocal_251 + 2400) = Vector(-839,771f, 90,353f, 2452,96f);
	*(&iLocal_251 + 2400 + 12) = Vector(0.0f, 80,427f, 0.0f);
	*(&iLocal_251 + 2424) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide38", Vector(-839,771f, 90,353f, 2452,96f), Vector(0.0f, 80,427f, 0.0f));
	*(&iLocal_251 + 2432) = Vector(-834,559f, 90,353f, 2467,964f);
	*(&iLocal_251 + 2432 + 12) = Vector(0.0f, 53,542f, 0.0f);
	*(&iLocal_251 + 2456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide39", Vector(-834,559f, 90,353f, 2467,964f), Vector(0.0f, 53,542f, 0.0f));
	*(&iLocal_251 + 2464) = Vector(-875,748f, 90,353f, 2430,767f);
	*(&iLocal_251 + 2464 + 12) = Vector(0.0f, 267,975f, 0.0f);
	*(&iLocal_251 + 2488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide40", Vector(-875,748f, 90,353f, 2430,767f), Vector(0.0f, 267,975f, 0.0f));
	*(&iLocal_251 + 2496) = Vector(-879,926f, 90,353f, 2434,369f);
	*(&iLocal_251 + 2496 + 12) = Vector(0.0f, 73,407f, 0.0f);
	*(&iLocal_251 + 2520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide41", Vector(-879,926f, 90,353f, 2434,369f), Vector(0.0f, 73,407f, 0.0f));
	*(&iLocal_251 + 2528) = Vector(-889,26f, 90,353f, 2430,237f);
	*(&iLocal_251 + 2528 + 12) = Vector(0.0f, 24,138f, 0.0f);
	*(&iLocal_251 + 2552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide42", Vector(-889,26f, 90,353f, 2430,237f), Vector(0.0f, 24,138f, 0.0f));
	*(&iLocal_251 + 2560) = Vector(-893,963f, 91,357f, 2407,55f);
	*(&iLocal_251 + 2560 + 12) = Vector(0.0f, 192,133f, 0.0f);
	*(&iLocal_251 + 2584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide43", Vector(-893,963f, 91,357f, 2407,55f), Vector(0.0f, 192,133f, 0.0f));
	*(&iLocal_251 + 2592) = Vector(-916,777f, 90,353f, 2445,419f);
	*(&iLocal_251 + 2592 + 12) = Vector(0.0f, 81,945f, 0.0f);
	*(&iLocal_251 + 2616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide44", Vector(-916,777f, 90,353f, 2445,419f), Vector(0.0f, 81,945f, 0.0f));
	*(&iLocal_251 + 2624) = Vector(-888,983f, 91,071f, 2433,968f);
	*(&iLocal_251 + 2624 + 12) = Vector(0.0f, 16,7f, 0.0f);
	*(&iLocal_251 + 2648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide45", Vector(-888,983f, 91,071f, 2433,968f), Vector(0.0f, 16,7f, 0.0f));
	*(&iLocal_251 + 2656) = Vector(-905,077f, 91,357f, 2406,632f);
	*(&iLocal_251 + 2656 + 12) = Vector(0.0f, 317,433f, 0.0f);
	*(&iLocal_251 + 2680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide46", Vector(-905,077f, 91,357f, 2406,632f), Vector(0.0f, 317,433f, 0.0f));
	*(&iLocal_251 + 2688) = Vector(-873,142f, 91,357f, 2389,937f);
	*(&iLocal_251 + 2688 + 12) = Vector(0.0f, 359,911f, 0.0f);
	*(&iLocal_251 + 2712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide47", Vector(-873,142f, 91,357f, 2389,937f), Vector(0.0f, 359,911f, 0.0f));
	*(&iLocal_251 + 2720) = Vector(-867,391f, 91,357f, 2356,293f);
	*(&iLocal_251 + 2720 + 12) = Vector(0.0f, 162,898f, 0.0f);
	*(&iLocal_251 + 2744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide48", Vector(-867,391f, 91,357f, 2356,293f), Vector(0.0f, 162,898f, 0.0f));
	*(&iLocal_251 + 2752) = Vector(-863,874f, 91,357f, 2358,976f);
	*(&iLocal_251 + 2752 + 12) = Vector(0.0f, 299,451f, 0.0f);
	*(&iLocal_251 + 2776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide49", Vector(-863,874f, 91,357f, 2358,976f), Vector(0.0f, 299,451f, 0.0f));
	*(&iLocal_251 + 2784) = Vector(-854,504f, 91,357f, 2375,794f);
	*(&iLocal_251 + 2784 + 12) = Vector(0.0f, 312,773f, 0.0f);
	*(&iLocal_251 + 2808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide50", Vector(-854,504f, 91,357f, 2375,794f), Vector(0.0f, 312,773f, 0.0f));
	*(&iLocal_251 + 2816) = Vector(-867,942f, 91,357f, 2381,48f);
	*(&iLocal_251 + 2816 + 12) = Vector(0.0f, 105,366f, 0.0f);
	*(&iLocal_251 + 2840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide51", Vector(-867,942f, 91,357f, 2381,48f), Vector(0.0f, 105,366f, 0.0f));
	*(&iLocal_251 + 2848) = Vector(-792,25f, 93,365f, 2392,549f);
	*(&iLocal_251 + 2848 + 12) = Vector(0.0f, 55,064f, 0.0f);
	*(&iLocal_251 + 2872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide52", Vector(-792,25f, 93,365f, 2392,549f), Vector(0.0f, 55,064f, 0.0f));
	*(&iLocal_251 + 2880) = Vector(-784,179f, 93,364f, 2412,746f);
	*(&iLocal_251 + 2880 + 12) = Vector(0.0f, 216,828f, 0.0f);
	*(&iLocal_251 + 2904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_nwhide53", Vector(-784,179f, 93,364f, 2412,746f), Vector(0.0f, 216,828f, 0.0f));
	*(&iLocal_251 + 2912) = Vector(-609,421f, 58,313f, 2869,093f);
	*(&iLocal_251 + 2912 + 12) = Vector(0.0f, 334,865f, 0.0f);
	*(&iLocal_251 + 2936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar", Vector(-609,421f, 58,313f, 2869,093f), Vector(0.0f, 334,865f, 0.0f));
	*(&iLocal_251 + 2944) = Vector(-667,922f, 28,661f, 3009,792f);
	*(&iLocal_251 + 2944 + 12) = Vector(0.0f, 332,957f, 0.0f);
	*(&iLocal_251 + 2968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar1", Vector(-667,922f, 28,661f, 3009,792f), Vector(0.0f, 332,957f, 0.0f));
	*(&iLocal_251 + 2976) = Vector(-611,116f, 39,25f, 2937,017f);
	*(&iLocal_251 + 2976 + 12) = Vector(0.0f, 333,304f, 0.0f);
	*(&iLocal_251 + 3000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar2", Vector(-611,116f, 39,25f, 2937,017f), Vector(0.0f, 333,304f, 0.0f));
	*(&iLocal_251 + 3008) = Vector(-599,414f, 35,553f, 2978,019f);
	*(&iLocal_251 + 3008 + 12) = Vector(0.0f, 355,273f, 0.0f);
	*(&iLocal_251 + 3032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar3", Vector(-599,414f, 35,553f, 2978,019f), Vector(0.0f, 355,273f, 0.0f));
	*(&iLocal_251 + 3040) = Vector(-458,357f, 36,35f, 2963,933f);
	*(&iLocal_251 + 3040 + 12) = Vector(0.0f, 27,341f, 0.0f);
	*(&iLocal_251 + 3064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar4", Vector(-458,357f, 36,35f, 2963,933f), Vector(0.0f, 27,341f, 0.0f));
	*(&iLocal_251 + 3072) = Vector(-439,848f, 34,122f, 2981,26f);
	*(&iLocal_251 + 3072 + 12) = Vector(0.0f, 89,176f, 0.0f);
	*(&iLocal_251 + 3096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar5", Vector(-439,848f, 34,122f, 2981,26f), Vector(0.0f, 89,176f, 0.0f));
	*(&iLocal_251 + 3104) = Vector(-516,926f, 51,579f, 2863,099f);
	*(&iLocal_251 + 3104 + 12) = Vector(0.0f, 7,263f, 0.0f);
	*(&iLocal_251 + 3128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar6", Vector(-516,926f, 51,579f, 2863,099f), Vector(0.0f, 7,263f, 0.0f));
	*(&iLocal_251 + 3136) = Vector(-465,391f, 34,282f, 2934,764f);
	*(&iLocal_251 + 3136 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 3160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar7", Vector(-465,391f, 34,282f, 2934,764f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 3168) = Vector(-440,141f, 18,125f, 3015,614f);
	*(&iLocal_251 + 3168 + 12) = Vector(0.0f, 213,149f, 0.0f);
	*(&iLocal_251 + 3192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar8", Vector(-440,141f, 18,125f, 3015,614f), Vector(0.0f, 213,149f, 0.0f));
	*(&iLocal_251 + 3200) = Vector(-641,021f, 17,815f, 3025,635f);
	*(&iLocal_251 + 3200 + 12) = Vector(0.0f, 194,212f, 0.0f);
	*(&iLocal_251 + 3224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hgnf_cougar9", Vector(-641,021f, 17,815f, 3025,635f), Vector(0.0f, 194,212f, 0.0f));
	*(&iLocal_251 + 3232) = Vector(-1084,182f, 100,4239f, 2907,834f);
	*(&iLocal_251 + 3232 + 12) = Vector(0.0f, 179,8879f, 0.0f);
	*(&iLocal_251 + 3256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuy_hgn1", Vector(-1084,182f, 100,4239f, 2907,834f), Vector(0.0f, 179,8879f, 0.0f));
	*(&iLocal_251 + 3264) = Vector(-1084f, 100,499f, 2904.0f);
	*(&iLocal_251 + 3264 + 12) = Vector(0.0f, 178,2066f, 0.0f);
	*(&iLocal_251 + 3288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingTree_hgn1", Vector(-1084f, 100,499f, 2904.0f), Vector(0.0f, 178,2066f, 0.0f));
	*(&iLocal_251 + 3296) = Vector(-1088f, 99,60892f, 2900f);
	*(&iLocal_251 + 3296 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 3320) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingHorses_hgn1", Vector(-1088f, 99,60892f, 2900f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 3328) = Vector(-1084,182f, 100,4239f, 2910,447f);
	*(&iLocal_251 + 3328 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 3352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard1_hgn1", Vector(-1084,182f, 100,4239f, 2910,447f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 3360) = Vector(-1080,36f, 100,4441f, 2911,143f);
	*(&iLocal_251 + 3360 + 12) = Vector(0.0f, 53,31279f, 0.0f);
	*(&iLocal_251 + 3384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard2_hgn1", Vector(-1080,36f, 100,4441f, 2911,143f), Vector(0.0f, 53,31279f, 0.0f));
	*(&iLocal_251 + 3392) = Vector(-1084,43f, 101,0248f, 2914,738f);
	*(&iLocal_251 + 3392 + 12) = Vector(0.0f, -2,253904f, 0.0f);
	*(&iLocal_251 + 3416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard3_hgn1", Vector(-1084,43f, 101,0248f, 2914,738f), Vector(0.0f, -2,253904f, 0.0f));
	*(&iLocal_251 + 3424) = Vector(-872,724f, 41,23136f, 3070,519f);
	*(&iLocal_251 + 3424 + 12) = Vector(0.0f, 131,4123f, 0.0f);
	*(&iLocal_251 + 3448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuy_hgn2", Vector(-872,724f, 41,23136f, 3070,519f), Vector(0.0f, 131,4123f, 0.0f));
	*(&iLocal_251 + 3456) = Vector(-872,724f, 41,17292f, 3066,799f);
	*(&iLocal_251 + 3456 + 12) = Vector(0.0f, 180,8444f, 0.0f);
	*(&iLocal_251 + 3480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingTree_hgn2", Vector(-872,724f, 41,17292f, 3066,799f), Vector(0.0f, 180,8444f, 0.0f));
	*(&iLocal_251 + 3488) = Vector(-871,9998f, 41,21151f, 3064f);
	*(&iLocal_251 + 3488 + 12) = Vector(0.0f, -74,38534f, 0.0f);
	*(&iLocal_251 + 3512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingHorses_hgn2", Vector(-871,9998f, 41,21151f, 3064f), Vector(0.0f, -74,38534f, 0.0f));
	*(&iLocal_251 + 3520) = Vector(-875,0469f, 41,18454f, 3071,935f);
	*(&iLocal_251 + 3520 + 12) = Vector(0.0f, -59,64066f, 0.0f);
	*(&iLocal_251 + 3544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard1_hgn2", Vector(-875,0469f, 41,18454f, 3071,935f), Vector(0.0f, -59,64066f, 0.0f));
	*(&iLocal_251 + 3552) = Vector(-863,0834f, 40,15686f, 3068f);
	*(&iLocal_251 + 3552 + 12) = Vector(0.0f, 68,95885f, 0.0f);
	*(&iLocal_251 + 3576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard2_hgn2", Vector(-863,0834f, 40,15686f, 3068f), Vector(0.0f, 68,95885f, 0.0f));
	*(&iLocal_251 + 3584) = Vector(-862,2219f, 40,15686f, 3064,376f);
	*(&iLocal_251 + 3584 + 12) = Vector(-4,386553f, 103,4417f, -1,514705f);
	*(&iLocal_251 + 3608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard3_hgn2", Vector(-862,2219f, 40,15686f, 3064,376f), Vector(-4,386553f, 103,4417f, -1,514705f));
	*(&iLocal_251 + 3616) = Vector(-113,557f, 101,4211f, 2775,839f);
	*(&iLocal_251 + 3616 + 12) = Vector(0.0f, 176,8049f, 0.0f);
	*(&iLocal_251 + 3640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuy_hgn3", Vector(-113,557f, 101,4211f, 2775,839f), Vector(0.0f, 176,8049f, 0.0f));
	*(&iLocal_251 + 3648) = Vector(-113,557f, 101,4299f, 2772f);
	*(&iLocal_251 + 3648 + 12) = Vector(0.0f, 184,0346f, 0.0f);
	*(&iLocal_251 + 3672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingTree_hgn3", Vector(-113,557f, 101,4299f, 2772f), Vector(0.0f, 184,0346f, 0.0f));
	*(&iLocal_251 + 3680) = Vector(-112f, 101,4607f, 2768f);
	*(&iLocal_251 + 3680 + 12) = Vector(0.0f, -68,41741f, 0.0f);
	*(&iLocal_251 + 3704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingHorses_hgn3", Vector(-112f, 101,4607f, 2768f), Vector(0.0f, -68,41741f, 0.0f));
	*(&iLocal_251 + 3712) = Vector(-113,557f, 101,4211f, 2778,209f);
	*(&iLocal_251 + 3712 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_251 + 3736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard1_hgn3", Vector(-113,557f, 101,4211f, 2778,209f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_251 + 3744) = Vector(-109,5103f, 101,411f, 2774,271f);
	*(&iLocal_251 + 3744 + 12) = Vector(0.0f, 113,2994f, 0.0f);
	*(&iLocal_251 + 3768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard2_hgn3", Vector(-109,5103f, 101,411f, 2774,271f), Vector(0.0f, 113,2994f, 0.0f));
	*(&iLocal_251 + 3776) = Vector(-108,7824f, 101,4551f, 2777,506f);
	*(&iLocal_251 + 3776 + 12) = Vector(0.0f, 68,30651f, 0.0f);
	*(&iLocal_251 + 3800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_251, "hangingGuard3_hgn3", Vector(-108,7824f, 101,4551f, 2777,506f), Vector(0.0f, 68,30651f, 0.0f));
	return 1;
}

void Function_97(int iParam0, int iParam1) //Position: 0x7093 / 28819
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

void Function_98(var uParam0, int iParam1) //Position: 0x70DD / 28893
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_99() //Position: 0x70EE / 28910
{
	return;
}

bool Function_100() //Position: 0x70F4 / 28916
{
	return Function_101();
}

int Function_101() //Position: 0x70FD / 28925
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_2", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_1", 1, 0);
	Function_107(&iLocal_11 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_r", 1, 0);
	if (!Function_102(&iLocal_11 + 8))
	{
		return 0;
	}
	iLocal_11 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_11))
	{
		iLocal_11 = CREATE_LAYOUT("HennigansStead_layout");
	}
	*(&iLocal_11 + 608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint1", Vector(-1260,309f, 109,4274f, 2764.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint2", Vector(118,7035f, 72,28235f, 2676.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint3", Vector(-1236f, 22,08622f, 3209,463f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint4", Vector(-275,5703f, 73,237f, 2391,477f), Vector(0.0f, 88,54858f, 0.0f));
	*(&iLocal_11 + 640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint8", Vector(-175,9999f, 72,39375f, 2332.0f), Vector(0.0f, 88,54858f, 0.0f));
	*(&iLocal_11 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint5", Vector(-275,5844f, 73,237f, 2393,654f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint6", Vector(-117,8339f, 72,35263f, 2437,834f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 664) = Vector(-108,0001f, 55,2157f, 2808.0f);
	*(&iLocal_11 + 664 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_11 + 688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint7", Vector(-108,0001f, 55,2157f, 2808.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 696) = Vector(-499,047f, 75,045f, 2209,638f);
	*(&iLocal_11 + 696 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_11 + 720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint9", Vector(-499,047f, 75,045f, 2209,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 728) = Vector(-479,216f, 74,86f, 2216,221f);
	*(&iLocal_11 + 728 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_11 + 752) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint10", Vector(-479,216f, 74,86f, 2216,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 760) = Vector(-492,624f, 73,197f, 2215,717f);
	*(&iLocal_11 + 760 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_11 + 784) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint11", Vector(-492,624f, 73,197f, 2215,717f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint12", Vector(-1278,561f, 109,428f, 2748,028f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint13", Vector(-1301,064f, 109,312f, 2760,115f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brbf_bhint", Vector(-486,841f, 20,486f, 3033,398f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_11 + 816) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brbf_bhtreas", Vector(-474,747f, 22,192f, 3020,728f), Vector(0.0f, 124,597f, 0.0f));
	*(&iLocal_11 + 824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brbf_bhtreas1", Vector(-494,267f, 20,081f, 3021,206f), Vector(0.0f, 353,651f, 0.0f));
	*(&iLocal_11 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "hgnf_bhint14", Vector(-1284,527f, 109,428f, 2777,638f), Vector(0.0f, 192,563f, 0.0f));
	*(&iLocal_11 + 840) = Vector(123,1745f, 72,42126f, 2670,188f);
	*(&iLocal_11 + 840 + 12) = Vector(0.0f, -155,9327f, 0.0f);
	*(&iLocal_11 + 864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "player_save_bacchus", Vector(123,1745f, 72,42126f, 2670,188f), Vector(0.0f, -155,9327f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_sit_ground_smoke1", "sit_ground_smoke", Vector(-1290,285f, 109,428f, 2772,222f), Vector(0.0f, 83,22361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "nMesc_Pee2", "Pee", Vector(-1287,66f, 109,428f, 2794,27f), Vector(0.0f, 96,73806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "nMesc_Pee1", "Pee", Vector(-1298,734f, 109,524f, 2776,841f), Vector(0.0f, 96,73806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_rand_idle_stand4", "rand_idle_stand", Vector(-1300,399f, 109,428f, 2770,623f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay41", "horse_stay", Vector(-283,3955f, 73,24915f, 2391,313f), Vector(0.0f, -108,7701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_11 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-1223,988f, 22,24839f, 3209,047f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 872), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", Vector(-555,1674f, 98,38434f, 2635,168f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", Vector(-444f, 96,37646f, 2640.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", Vector(-360f, 97,38037f, 2576.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", Vector(-194,2945f, 72,28235f, 2424.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", Vector(-259,3197f, 75,29413f, 2460.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", Vector(-279,608f, 77,30195f, 2495,608f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", Vector(-204,0001f, 95,37256f, 2672.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", Vector(-29,24244f, 96,31554f, 2602,664f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", Vector(29,16964f, 93,36469f, 2668,45f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", Vector(-36,00005f, 96,37646f, 2712.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", Vector(177,1115f, 102,4101f, 2588,1f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", Vector(206,8056f, 108,4235f, 2538,181f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", Vector(143,7577f, 73,28625f, 2408,242f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", Vector(111,9999f, 106,4157f, 2569,412f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", Vector(43,99994f, 86,33722f, 2162,004f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", Vector(95,99993f, 73,28625f, 2368.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", Vector(12,00003f, 78,30591f, 2416f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew82", "Player_Herb_WildFeverFew", Vector(-68,00001f, 77,30194f, 2452,171f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", Vector(-68.0f, 74,29022f, 2336.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", Vector(-126,4242f, 74,29022f, 2380,598f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", Vector(-143,7193f, 73,28625f, 2431,689f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", Vector(-255,2952f, 72,28235f, 2363,295f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", Vector(-254,8817f, 76,11722f, 2447,886f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", Vector(-442,5462f, 92,42317f, 2431,439f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", Vector(-498,2016f, 92,36078f, 2466,082f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", Vector(-424f, 97,38037f, 2580.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", Vector(-538,4169f, 98,38431f, 2616,292f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", Vector(-388f, 96,37646f, 2672.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", Vector(-417,5648f, 98,38428f, 2721,565f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", Vector(-546,5907f, 96,37646f, 2494,59f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", Vector(-576,0001f, 98,38428f, 2544f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", Vector(-711,9999f, 99,38824f, 2600f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", Vector(-647,9999f, 101,3961f, 2609,018f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", Vector(-595,8665f, 99,38828f, 2703,866f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", Vector(-727,9998f, 100,3922f, 2696f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", Vector(-707,9999f, 103,4039f, 2752f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", Vector(-691,4358f, 97,39969f, 2803,564f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", Vector(-975,5092f, 104,2495f, 2749,441f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", Vector(-866,3646f, 100,3922f, 2698,365f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", Vector(-880,0001f, 100,3922f, 2740.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", Vector(-872,2901f, 97,38037f, 2820,291f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", Vector(-776,0001f, 93,36469f, 2356f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", Vector(-687,5164f, 98,04729f, 2401,762f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", Vector(-785,8874f, 104,959f, 2280,578f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", Vector(-881,8164f, 110,4574f, 2594,953f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", Vector(-1048f, 101,3961f, 2464.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", Vector(-808,0001f, 100,3922f, 2561,289f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", Vector(-920.0f, 92,36078f, 2304f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", Vector(-1081,386f, 102,4f, 2312.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", Vector(-1128.0f, 110,4313f, 2208.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", Vector(-835,6993f, 111,4353f, 2119,555f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", Vector(-1113,683f, 105,4117f, 2112f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", Vector(-1108.0f, 104,4078f, 2492.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", Vector(-1093,78f, 104,461f, 2528,803f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", Vector(-1021,638f, 109,4289f, 2592f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", Vector(-955,6125f, 107,4232f, 2656,625f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", Vector(-944,0001f, 102,3681f, 2756.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", Vector(-1040f, 102,4f, 2792.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", Vector(-1028f, 101,3961f, 2860.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", Vector(-928,6227f, 101,3961f, 2852,623f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", Vector(-1008,839f, 100,3922f, 2932,839f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", Vector(-1056f, 100,3922f, 2848.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", Vector(-1172f, 95,37256f, 2892,693f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", Vector(-1360f, 95,37256f, 2908.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", Vector(-1320f, 96,37646f, 2980,488f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", Vector(-1200,504f, 110,2503f, 2844,896f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", Vector(-1328f, 118,4628f, 2800.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", Vector(-1444,78f, 115,451f, 2700.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", Vector(-1184f, 98,38432f, 2581,499f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", Vector(-1152.0f, 99,99776f, 2483,981f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew29", "Player_Herb_WildFeverFew", Vector(-1258,333f, 92,15118f, 2541,586f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", Vector(-1331,99f, 94,37176f, 2584,034f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", Vector(-1367,219f, 96,36912f, 2526,926f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", Vector(-1435,734f, 97,38392f, 2523,012f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_stay7", "horse_stay", Vector(-487,679f, 72,291f, 2206,794f), Vector(0.0f, 234,1342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_tend7", "horse_tend", Vector(-491,2f, 72,336f, 2199,114f), Vector(0.0f, -170,8492f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_stay6", "horse_stay", Vector(-494,0805f, 72,54624f, 2198,433f), Vector(0.0f, 70,08273f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_tend6", "horse_tend", Vector(-501,2441f, 75,6872f, 2227,825f), Vector(0.0f, 175,3533f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_sit_ground_smoke2", "sit_ground_smoke", Vector(-484,8762f, 71,99495f, 2203,452f), Vector(0.0f, -51,32996f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_sit_ground_smoke", "sit_ground_smoke", Vector(-481,8283f, 71,87337f, 2201,816f), Vector(0.0f, 129,3626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-485,2202f, 72,02464f, 2201,932f), Vector(0.0f, -94,26432f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-482,8451f, 71,85525f, 2203,732f), Vector(0.0f, 18,83562f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-477,8831f, 71,81006f, 2202,998f), Vector(0.0f, -86,38677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-481,474f, 71,80349f, 2199,808f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-486,1086f, 72,11655f, 2200,902f), Vector(0.0f, -18,62923f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-485,8302f, 72,53257f, 2211,344f), Vector(0.0f, 162,0719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-489,738f, 75,217f, 2246,711f), Vector(0.0f, 210,8284f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-483,6721f, 72,0414f, 2200,771f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_rand_idle_stand2", "rand_idle_stand", Vector(-513,642f, 78,714f, 2228,851f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_rand_idle_stand1", "rand_idle_stand", Vector(-494,992f, 74,165f, 2222,989f), Vector(0.0f, 139,7007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", Vector(-476,394f, 72,594f, 2208,338f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-487,985f, 72,13816f, 2203,913f), Vector(0.0f, -80,51714f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_tend5", "horse_tend", Vector(-485,1934f, 73,68908f, 2227,357f), Vector(0.0f, 175,3533f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_stay5", "horse_stay", Vector(-483,493f, 72,62349f, 2208,31f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_tend4", "horse_tend", Vector(-486,133f, 73,017f, 2219,355f), Vector(0.0f, -170,8492f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_horse_stay4", "horse_stay", Vector(-494,391f, 73,535f, 2216,439f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_Pee2", "Pee", Vector(-500,917f, 75,958f, 2222,902f), Vector(0.0f, 28,07549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-503,7881f, 76,21277f, 2224,989f), Vector(0.0f, -154,3103f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-509,9192f, 76,2117f, 2242,053f), Vector(0.0f, 220,4564f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", Vector(-1468.0f, 99,38824f, 2560,833f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", Vector(-1549,159f, 101,3961f, 2545,159f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", Vector(-1552f, 99,38818f, 2588.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", Vector(-1635,405f, 104,4078f, 2508,201f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", Vector(-1362,88f, 97,13873f, 2502,447f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", Vector(-1476.0f, 101,3961f, 2506,032f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", Vector(-1560.0f, 107,4196f, 2492,373f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", Vector(-1548.0f, 98,38428f, 2204.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", Vector(-1553,751f, 100,3922f, 2276.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", Vector(-1592.0f, 102,4f, 2304.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", Vector(-1556.0f, 101,3961f, 2345,271f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", Vector(-1627,523f, 96,37029f, 2150,974f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", Vector(-1841,983f, 54,47337f, 1869,646f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", Vector(-1824.0f, 57,18702f, 1852,473f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "repair_kneel1", "repair_kneel", Vector(-902,2922f, 100,3209f, 2754,921f), Vector(0.0f, 214,3136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-905,372f, 102,4f, 2714,956f), Vector(0.0f, -33,62195f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "sit_fence_low1", "sit_fence_low", Vector(-926,543f, 102,3234f, 2736,779f), Vector(0.0f, 116,8946f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "repair_kneel", "repair_kneel", Vector(-931,642f, 102,4139f, 2749,984f), Vector(0.0f, 137,5986f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "sit_fence_low", "sit_fence_low", Vector(-894,3243f, 100,392f, 2739,188f), Vector(0.0f, -84,98307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "stand_hammer_wall", "stand_hammer_wall", Vector(-928,8274f, 102,4108f, 2743,607f), Vector(0.0f, 127,8027f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "nsit_docks", "nsit_docks", Vector(-928,1281f, 105,605f, 2752,568f), Vector(0.0f, 37,12743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "any_washCloths", "any_washCloths", Vector(-933,0951f, 102,4479f, 2758,384f), Vector(0.0f, -65,5621f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "look_out_window_L", "look_out_window_L", Vector(-982,127f, 104,716f, 2722,818f), Vector(0.0f, 91,278f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "sit_docks1", "nsit_docks", Vector(-982,0966f, 104,716f, 2721,483f), Vector(0.0f, 67,37092f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", Vector(-1258,205f, 103,8316f, 2092,937f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", Vector(-1440,801f, 98,38428f, 2152,988f), Vector(0.0f, 80,5882f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", Vector(-1442,045f, 99,40326f, 2240,109f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", Vector(-890,355f, 99,87654f, 2194,054f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", Vector(-1016f, 111,3676f, 2224f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", Vector(-1617,097f, 93,76676f, 2187,019f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", Vector(-1760,903f, 96,82294f, 1933,656f), Vector(0.0f, 54,47325f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", Vector(-1269,262f, 110,4314f, 2072,898f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", Vector(-1910,234f, 40,64242f, 1863,484f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", Vector(-1816,805f, 53,13725f, 1890,521f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", Vector(-1959,485f, 75,21778f, 1828,361f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_tend41", "horse_tend", Vector(-282,807f, 73,153f, 2397,404f), Vector(0.0f, -105,3701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay31", "horse_stay", Vector(-285,8602f, 73,25476f, 2394,963f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_sit_docks1", "nsit_docks", Vector(-290,5338f, 72,49307f, 2419,896f), Vector(0.0f, -179,4226f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay71", "horse_stay", Vector(-119,6366f, 72,03043f, 2427,21f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_tend31", "horse_tend", Vector(-121,785f, 72,25f, 2429,164f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay61", "horse_stay", Vector(-132,6584f, 73,51955f, 2425,296f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay51", "horse_stay", Vector(-130,0145f, 73,31475f, 2424,778f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_stand_lookdistanc21", "stand_lookdistance_w_any", Vector(-112,3357f, 73,28622f, 2448,212f), Vector(0.0f, -113,7659f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "nStil_Pee1", "Pee", Vector(-104,0126f, 72,15959f, 2431,303f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_stand_lookdistance11", "stand_lookdistance_w_any", Vector(-121,4438f, 73,18758f, 2444,482f), Vector(0.0f, 82,29852f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_Rand_Idle_NearWall11", "Rand_Idle_NearWall", Vector(-112,6356f, 72,353f, 2443,39f), Vector(0.0f, -25,94683f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_campfire_talk1", "campfire_talk", Vector(-115,0204f, 72,35263f, 2440,231f), Vector(0.0f, 131,5032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_Campfire_Tend11", "Sit_Ground_Campfire_Tend", Vector(-112,7236f, 72,353f, 2441,722f), Vector(0.0f, 69,00607f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-279,7706f, 73,139f, 2391,325f), Vector(0.0f, 22,22883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-274,7329f, 73,15596f, 2395,753f), Vector(0.0f, 179,5037f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-274,4596f, 73,25157f, 2391,465f), Vector(0.0f, -92,90387f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_lean_rail", "nlean_rail", Vector(-275,3539f, 73,12715f, 2398,184f), Vector(0.0f, -179,8969f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_rand_idle_stand1", "rand_idle_stand", Vector(-274,7468f, 73,148f, 2396,871f), Vector(0.0f, 254,0465f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-171,5715f, 72,39375f, 2330,361f), Vector(0.0f, 89,22446f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_horse_tend1", "horse_tend", Vector(-109,4213f, 55,21569f, 2806,907f), Vector(0.0f, -141,5272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_horse_tend", "horse_tend", Vector(-111,8189f, 55,2157f, 2809,007f), Vector(0.0f, 103,6899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_horse_stay3", "horse_stay", Vector(-114,0363f, 55,2157f, 2810,398f), Vector(0.0f, -134,0859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_horse_stay2", "horse_stay", Vector(-112,4162f, 55,2157f, 2807,465f), Vector(0.0f, 91,06381f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_horse_stay1", "horse_stay", Vector(-118,7427f, 55,2157f, 2812,998f), Vector(0.0f, 206,9627f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_horse_stay", "horse_stay", Vector(-109,9179f, 55,21569f, 2807,491f), Vector(0.0f, 49,26177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_smoking_stand", "smoking_stand", Vector(-104,1135f, 55,47424f, 2807,156f), Vector(0.0f, 211,2294f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_sit_ground_smoke", "sit_ground_smoke", Vector(-103,5438f, 55,44496f, 2801,546f), Vector(0.0f, -132,4733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_play_harmonica", "sit_ground_play_harmonica", Vector(-104,0469f, 55,32558f, 2803,035f), Vector(0.0f, -82,07317f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-102,1707f, 55,36632f, 2804,345f), Vector(0.0f, -3,558987f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_stand_lookdistance", "stand_lookdistance_w_any", Vector(-117,0521f, 55,2157f, 2805,38f), Vector(0.0f, 58,87966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "pasted__Man_Pee", "Pee", Vector(-95,50251f, 55,21611f, 2799,677f), Vector(0.0f, 241,5218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "pasted__Man_smoking_stand", "smoking_stand", Vector(-100,1235f, 55,34239f, 2802,147f), Vector(0.0f, 74,89233f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_look_distance_binocs", "look_distance_binocs", Vector(-119,8045f, 55,2157f, 2815,365f), Vector(0.0f, 172,6626f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay2", "horse_stay", Vector(-176,4697f, 72,47968f, 2336,637f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay1", "horse_stay", Vector(-178,5961f, 72,28235f, 2344,056f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_stay", "horse_stay", Vector(-176,0005f, 72,40929f, 2338,774f), Vector(0.0f, 85,15128f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_tend1", "horse_tend", Vector(-182,9534f, 72,61275f, 2342,223f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-178,0995f, 72,53835f, 2332,596f), Vector(0.0f, -18,7411f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-174,1021f, 72,39375f, 2332,586f), Vector(0.0f, -23,18213f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_look_distance_binocs", "look_distance_binocs", Vector(-163,9925f, 72,23011f, 2335,94f), Vector(0.0f, -4,903682f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_rand_idle_stand", "rand_idle_stand", Vector(-169,1717f, 72,3328f, 2331,828f), Vector(0.0f, -11,84327f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_smoking_stand", "smoking_stand", Vector(-172,7588f, 72,39375f, 2331,682f), Vector(0.0f, 10,0226f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-174,9404f, 72,39375f, 2330,198f), Vector(0.0f, -99,68264f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Stil_horse_tend", "horse_tend", Vector(-173,0439f, 72,21784f, 2337,289f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_rand_idle_stand3", "rand_idle_stand", Vector(-1310,823f, 108,507f, 2759,502f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_rand_idle_stand2", "rand_idle_stand", Vector(-1290,639f, 109,428f, 2772,813f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_rand_idle_stand1", "rand_idle_stand", Vector(-1277,641f, 109,427f, 2777,696f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay11", "horse_stay", Vector(-1277,705f, 109,427f, 2753,559f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay10", "horse_stay", Vector(-1290,404f, 116,455f, 2716,549f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay9", "horse_stay", Vector(-1303,118f, 108,424f, 2746,513f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay8", "horse_stay", Vector(-1291,411f, 108,424f, 2745,976f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_stand_holy_water", "stand_holy_water", Vector(-1266,753f, 109,4274f, 2762,999f), Vector(0.0f, 91,55917f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_Campfire_Tend2", "Sit_Ground_Campfire_Tend", Vector(-1304,773f, 111,4353f, 2731,426f), Vector(0.0f, -138,5776f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "smoking_stand1", "smoking_stand", Vector(-1302,064f, 111,4353f, 2730,996f), Vector(0.0f, 125,0703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_sleeping_wal1", "sleeping_wall_scripted", Vector(-1267,786f, 109,4274f, 2786,777f), Vector(0.0f, -234,9549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay12", "horse_stay", Vector(-1246,143f, 109,779f, 2734,597f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay7", "horse_stay", Vector(-1309,688f, 109,325f, 2771,592f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay6", "horse_stay", Vector(-1279,988f, 109,427f, 2788,018f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay5", "horse_stay", Vector(-1284,899f, 109,428f, 2779,304f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay4", "horse_stay", Vector(-1275,122f, 109,427f, 2793,871f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_stand_guntricks1", "stand_guntricks_e_any", Vector(-1273,336f, 109,4274f, 2749,484f), Vector(0.0f, -76,89563f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_11 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_Campfire_Tend", "Sit_Ground_Drink", Vector(-1232,077f, 22,27966f, 3211,868f), Vector(0.0f, 68,73868f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 880), 0);
	*(&iLocal_11 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "look_out_window_L1", "look_out_window_L", Vector(-1237,542f, 22,2412f, 3212,973f), Vector(0.0f, 178,7504f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 888), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_horse_tend2", "horse_tend", Vector(-1246,379f, 22,62883f, 3213,033f), Vector(0.0f, -101,8198f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_horse_tend1", "horse_tend", Vector(-1252,025f, 23,933f, 3209,663f), Vector(0.0f, -95,92507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_horse_tend", "horse_tend", Vector(-1218,964f, 24,87803f, 3201,336f), Vector(0.0f, 96,76688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_horse_stay2", "horse_stay", Vector(-1249,464f, 23,35681f, 3211,482f), Vector(0.0f, -78,81496f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_horse_stay1", "horse_stay", Vector(-1217,079f, 24,57645f, 3202,547f), Vector(0.0f, 88,79853f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_horse_stay", "horse_stay", Vector(-1216,456f, 23,98988f, 3204,24f), Vector(0.0f, 63,17963f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_look_distance_binocs", "look_distance_binocs", Vector(-1230,744f, 22,27831f, 3209,075f), Vector(0.0f, -98,96873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-1240,388f, 22,12842f, 3206,192f), Vector(0.0f, 88,11987f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_Pee", "Pee", Vector(-1225,842f, 22,606f, 3204,7f), Vector(0.0f, -31,56896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1236,22f, 22,24551f, 3207,925f), Vector(0.0f, 36,00572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-1234,064f, 22,25175f, 3207,401f), Vector(0.0f, -97,59713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1238,701f, 22,34453f, 3206,441f), Vector(0.0f, -115,5628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Grn_smoking_stand", "smoking_stand", Vector(-1233,578f, 22,25408f, 3212.0f), Vector(0.0f, 45,14069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bac_hhorse_tend2", "horse_tend", Vector(97,78033f, 71,27844f, 2684.0f), Vector(0.0f, -203,1011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bac_hhorse_tend1", "horse_tend", Vector(100,0754f, 71,27844f, 2683,136f), Vector(0.0f, -181,4435f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bac_hhorse_tend", "horse_tend", Vector(108f, 71,27842f, 2675,017f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bac_hhorse_stay2", "horse_stay", Vector(102,0794f, 71,27847f, 2682,786f), Vector(0.0f, -35,9964f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bac_hhorse_stay1", "horse_stay", Vector(106,0782f, 71,15269f, 2676,675f), Vector(0.0f, 33,68391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bac_horse_stay", "horse_stay", Vector(102,9418f, 71,1523f, 2677,747f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bach_use_shelf", "nuse_shelf", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 294,9007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bach_look_out_window", "look_out_window_L", Vector(121,8701f, 72,41193f, 2670,781f), Vector(0.0f, 117,1071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bach_look_distance", "stand_lookdistance_w_any", Vector(129,3817f, 72,4876f, 2674,44f), Vector(0.0f, -93,00282f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bach_smoking_stand", "rand_idle_stand", Vector(126,5116f, 72,4119f, 2675,403f), Vector(0.0f, 182,2345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Bach_NearWall_Shoulder_R", "Rand_Idle_NearWall", Vector(122,0145f, 72,40353f, 2674,539f), Vector(0.0f, -240,2579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_stand_guntricks", "stand_guntricks_e_any", Vector(-1270,788f, 109,4274f, 2749,184f), Vector(0.0f, 84,16376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-1265,812f, 109,4274f, 2746,996f), Vector(0.0f, -70,91444f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-1263,234f, 109,4274f, 2748,075f), Vector(0.0f, -8,879789f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_play_harmonica", "sit_ground_play_harmonica", Vector(-1264,823f, 109,4274f, 2745,407f), Vector(0.0f, -131,5376f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-1261,675f, 109,4274f, 2745,347f), Vector(0.0f, 97,42413f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1261,765f, 109,4274f, 2747,085f), Vector(0.0f, -317,9632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay3", "horse_stay", Vector(-1246,143f, 109,779f, 2734,597f), Vector(0.0f, 9,925353f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay2", "horse_stay", Vector(-1231,185f, 109,4274f, 2745,39f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay1", "horse_stay", Vector(-1251,29f, 109,4274f, 2761,342f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_horse_stay", "horse_stay", Vector(-1255,198f, 109,4274f, 2763,017f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_Pee", "Pee", Vector(-1235,608f, 109,4274f, 2751,687f), Vector(0.0f, 96,73806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_rand_idle_stand", "rand_idle_stand", Vector(-1249,862f, 109,5147f, 2754,044f), Vector(0.0f, 109,37f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1241,34f, 108,515f, 2755,404f), Vector(0.0f, 122,3701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_smoking_stand", "smoking_stand", Vector(-1244,553f, 109,4274f, 2768,205f), Vector(0.0f, -77,75138f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1243,383f, 109,4517f, 2766,101f), Vector(0.0f, -156,7047f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1242,411f, 109,4274f, 2769,383f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_sit_ground_smoke", "sit_ground_smoke", Vector(-1240,573f, 109,4021f, 2768,07f), Vector(0.0f, 83,22361f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1339,527f, 116,455f, 2778,435f), Vector(0.0f, -160,6844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1286,395f, 116,417f, 2719,064f), Vector(0.0f, -160,6844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1281,565f, 113,7627f, 2808.0f), Vector(0.0f, -160,6844f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Mesc_lookdistance_binocs", "look_distance_binocs", Vector(-1246,043f, 112,232f, 2789,971f), Vector(0.0f, -122,5477f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_yawning_n_any1", "stand_yawning_n_any", Vector(-484,842f, 20,486f, 3036,186f), Vector(0.0f, 103,7064f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_smoking_stand4", "smoking_stand", Vector(-490,907f, 20,081f, 3028,224f), Vector(0.0f, -92,93414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_rand_idle_stand3", "rand_idle_stand", Vector(-483,113f, 20,354f, 3018,092f), Vector(0.0f, -27,62441f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_rand_idle_stand2", "rand_idle_stand", Vector(-485,8575f, 20,11623f, 3020,444f), Vector(0.0f, -16,63606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-487,818f, 20,08f, 3027,049f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-472,17f, 23,539f, 3002,219f), Vector(0.0f, -22,8892f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_rand_idle_stand1", "rand_idle_stand", Vector(-479,193f, 21,395f, 3011,36f), Vector(0.0f, -54,23795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_yawning_n_any", "stand_yawning_n_any", Vector(-490,8237f, 20,09063f, 3018,624f), Vector(0.0f, 314,5764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_smoking_stand3", "smoking_stand", Vector(-489,166f, 22,934f, 3008,071f), Vector(0.0f, 125,0703f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_smoking_stand2", "smoking_stand", Vector(-486,841f, 20,486f, 3033,398f), Vector(0.0f, -92,93414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_rand_idle_stand", "rand_idle_stand", Vector(-487,3976f, 20,04222f, 3030,592f), Vector(0.0f, 0,05803982f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-516,832f, 22,626f, 3011,923f), Vector(0.0f, 71,97202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-484,013f, 20,46403f, 3030,633f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_horse_stay3", "horse_stay", Vector(-486,5086f, 20,25895f, 3023,12f), Vector(0.0f, -73,51933f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_horse_stay2", "horse_stay", Vector(-485,694f, 20,12819f, 3025,852f), Vector(0.0f, -70,77419f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_Pee1", "Pee", Vector(-502,053f, 22,795f, 3020,031f), Vector(0.0f, -245,9337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_smoking_stand1", "smoking_stand", Vector(-481,0595f, 20,49036f, 3034,915f), Vector(0.0f, -92,93414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_horse_stay1", "horse_stay", Vector(-497,898f, 22,734f, 3008,745f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_horse_stay", "horse_stay", Vector(-501,242f, 22,723f, 3007,798f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-488,8596f, 20,48626f, 3033,328f), Vector(0.0f, 21,64087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_look_out_window_L", "look_out_window_L", Vector(-486,3459f, 20,5107f, 3032,663f), Vector(0.0f, -66,49553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-499.0f, 22,663f, 3009,645f), Vector(0.0f, 247,5717f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_Pee", "Pee", Vector(-491,229f, 20,038f, 3030,695f), Vector(0.0f, 62,1369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_stand_lookdistance", "stand_lookdistance_w_any", Vector(-481,405f, 24,341f, 2997,675f), Vector(0.0f, -22,8892f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-490,3297f, 20,08626f, 3026,724f), Vector(0.0f, -66,90773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_lean_rail", "nlean_rail", Vector(-488,092f, 20,47741f, 3037,65f), Vector(0.0f, -162,8951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_11 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "any_washCloths1", "any_washCloths", Vector(119,6759f, 72,28231f, 2672,96f), Vector(0.0f, 101,6139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 896), 0);
	*(&iLocal_11 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "rand_idle_stand", "rand_idle_stand", Vector(125,609f, 72,40736f, 2675,811f), Vector(0.0f, 221,8964f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 904), 0);
	*(&iLocal_11 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "sit_docks2", "nsit_docks", Vector(120,7647f, 71,27381f, 2683,097f), Vector(0.0f, -154,344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 912), 0);
	*(&iLocal_11 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "digging", "digging", Vector(129,3431f, 72,33885f, 2666,097f), Vector(0.0f, -53,53743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 920), 0);
	*(&iLocal_11 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "mex_flirt_sit_stool_attached", "mex_flirt_sit_stool_attached_link", Vector(123,4719f, 72,37572f, 2675,644f), Vector(0.0f, 21,733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_11 + 928), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "brb_rand_idle_stand4", "rand_idle_stand", Vector(-479,348f, 20,168f, 3030,72f), Vector(0.0f, -16,63606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_sit_ground_smoke1", "sit_ground_smoke", Vector(-101,755f, 55,48045f, 2800,974f), Vector(0.0f, -174,9355f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "Man_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-117,9614f, 55,2157f, 2809,237f), Vector(0.0f, 110,4136f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_11 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "treasure_hunting_z_2", "zombie_treasure_hunting_2", Vector(-1381,446f, 61,31684f, 3016,734f), Vector(0.0f, 123,8197f, 0.0f));
	*(&iLocal_11 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "treasure_hunting_z_1", "zombie_treasure_hunting_1", Vector(-1512,982f, 219,0359f, 1738,493f), Vector(0.0f, 133,2135f, 0.0f));
	*(&iLocal_11 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_11, "ZombiePack_player_sleep_bed_R", "ZombiePack_player_sleep_bed_R", Vector(123,1745f, 72,42126f, 2670,188f), Vector(0.0f, -63,854f, 0.0f));
	return 1;
}

bool Function_102(struct<2>[] Param0) //Position: 0xDC4D / 56397
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_106();
	iVar1 = 0;
	if (!Function_21(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_105(&(Param0[iVar02]), 8);
		}
		else if (Function_104())
		{
			iVar1 = 1;
			Function_105(&(Param0[iVar02]), 8);
		}
		Function_105(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_21(&(Param0[02]), 8) || iVar1));
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
				Function_105(&(Param0[iVar02]), 1);
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
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
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
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
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
	Function_103();
	return 1;
}

void Function_103() //Position: 0xE00F / 57359
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

bool Function_104() //Position: 0xE04F / 57423
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

void Function_105(struct<13> Param0) //Position: 0xE07D / 57469
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_106() //Position: 0xE090 / 57488
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

var Function_107(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xE0D2 / 57554
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_108(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_105(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_108(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xE110 / 57616
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_21(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_105(&(Param0[iVar02]), 4);
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

bool Function_109() //Position: 0xE1DF / 57823
{
	return Function_110();
}

int Function_110() //Position: 0xE1E8 / 57832
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	iLocal_7 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("HennigansStead_layout");
	}
	*(&iLocal_7 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_7, "pikv_helperHerdDest", 4,203895E-45f, Vector(-764.0f, 101,3961f, 2200.0f), Vector(0.0f, 20.0f, 0.0f), Vector(26,34139f, 9,701624f, 26,34139f));
	return 1;
}

void Function_111() //Position: 0xE28A / 57994
{
	ALLOW_TUMBLEWEEDS(0);
	return;
}

void Function_112(char* cParam0) //Position: 0xE294 / 58004
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

