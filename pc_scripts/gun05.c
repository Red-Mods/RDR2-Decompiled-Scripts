//Decompiled with MagicRDR v1.0
//Function Count : 701
//Statics Count : 1548
//Natives Count : 706
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 12;
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
	var uLocal_103 = 20;
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
	int iLocal_191 = 0;
	int iLocal_192 = 0;
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
	var uLocal_208 = 6;
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
	int iLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 2;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 6;
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
	var uLocal_260 = 16;
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
	var uLocal_326 = 16;
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
	var uLocal_392 = 16;
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
	var uLocal_458 = 17;
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
	var uLocal_528 = 17;
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
	var uLocal_598 = 1;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 1;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 1;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 1;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 2;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 2;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 2;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 1;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 6;
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
	var uLocal_686 = 4;
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
	var uLocal_698 = 6;
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
	var uLocal_714 = 9;
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
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 4;
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
	var uLocal_766 = 10;
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
	var uLocal_790 = 8;
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
	var uLocal_810 = 2;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 8;
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
	var uLocal_838 = 7;
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
	var uLocal_856 = 2;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 2;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 8;
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
	var uLocal_892 = 2;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 4;
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
	var uLocal_912 = 11;
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
	struct<6> Local_952 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	int iLocal_964 = 1;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	int iLocal_970 = 2;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	int iLocal_980 = 2;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	int iLocal_990 = 2;
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
	int iLocal_1008 = 0;
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
	int iLocal_1020 = 0;
	bool bLocal_1021 = false;
	int iLocal_1022 = 0;
	bool bLocal_1023 = false;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	char[] cLocal_1026[4] = 0;
	var uLocal_1027 = 0;
	char[] cLocal_1028[4] = 0;
	var uLocal_1029 = 0;
	char[] cLocal_1030[4] = 0;
	var uLocal_1031 = 0;
	bool bLocal_1032 = false;
	var uLocal_1033 = 0;
	char[] cLocal_1034[4] = 0;
	var uLocal_1035 = 0;
	bool bLocal_1036 = false;
	var uLocal_1037 = 0;
	char[] cLocal_1038[4] = 0;
	var uLocal_1039 = 0;
	int iLocal_1040 = 0;
	var uLocal_1041 = 0;
	int iLocal_1042 = 0;
	var uLocal_1043 = 0;
	int iLocal_1044 = 0;
	var uLocal_1045 = 0;
	int iLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	int iLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	int iLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	int iLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	int iLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	int iLocal_1066[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	bool bLocal_1080 = false;
	bool bLocal_1081 = false;
	bool bLocal_1082 = false;
	int iLocal_1083 = 0;
	var uLocal_1084 = 13;
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
	struct<15> Local_1138[7];
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 5;
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
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 5;
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
	var uLocal_1308 = 5;
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
	var uLocal_1338 = 5;
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
	int iLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	bool bLocal_1368 = false;
	var uLocal_1369 = 0;
	struct<2> Local_1370 = { 0, 0 } ;
	var uLocal_1372 = 0;
	struct<2> Local_1373 = { 0, 0 } ;
	var uLocal_1375 = 0;
	struct<2> Local_1376 = { 0, 0 } ;
	var uLocal_1378 = 0;
	bool bLocal_1379 = false;
	bool bLocal_1380 = false;
	int iLocal_1381 = 0;
	var uLocal_1382 = 0;
	int iLocal_1383 = 0;
	var uLocal_1384 = 0;
	int iLocal_1385 = 0;
	bool bLocal_1386 = false;
	int iLocal_1387 = 0;
	var uLocal_1388 = 0;
	int iLocal_1389 = 0;
	struct<265> Local_1390 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_1530 = 0;
	iLocal_1531 = 0;
	iLocal_1532 = 0;
	iLocal_1533 = 0;
	iLocal_1534 = 0;
	iLocal_1535 = 0;
	Local_952 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_1020 = 99;
	bLocal_1021 = 6;
	iLocal_1008 = 1000;
	while (Function_307())
	{
		Function_241();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x61 / 97
{
	if (IS_ACTOR_VALID(&cLocal_1034))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&cLocal_1034);
	}
	Function_215();
	Function_212(5, 1, 0, 1, 1);
	Function_211(&uLocal_950);
	Function_211(&iLocal_222);
	Function_181(bLocal_1081, 1, bLocal_1081, 0, 0, 1, 1, 1);
	Function_177(&iLocal_964);
	Function_177(&iLocal_970);
	Function_177(&iLocal_980);
	Function_177(&iLocal_990);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_1024))
	{
		DESTROY_ITERATOR(&uLocal_1024);
	}
	RELEASE_LAYOUT_REF(&uLocal_950);
	if (bLocal_1080)
	{
		Function_26(Local_952, 1, 1, 1, 0);
	}
	else if (bLocal_1081)
	{
		Function_22(Local_952);
	}
	else
	{
		Function_2(Local_952);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xFE / 254
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x11F / 287
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x13C / 316
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x15F / 351
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x176 / 374
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

void Function_7(int iParam0) //Position: 0x218 / 536
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x23B / 571
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

void Function_9() //Position: 0x285 / 645
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x29E / 670
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

void Function_11(var uParam0, int iParam1) //Position: 0x2F1 / 753
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

struct<16> Function_12(int iParam0) //Position: 0x41B / 1051
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

bool Function_13() //Position: 0x455 / 1109
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x470 / 1136
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x47D / 1149
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x49D / 1181
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x4B4 / 1204
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x4CF / 1231
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x716 / 1814
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x742 / 1858
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

bool Function_21(int iParam0) //Position: 0x766 / 1894
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x77B / 1915
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x799 / 1945
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

struct<16> Function_24(int iParam0) //Position: 0x83F / 2111
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

struct<24> Function_25(char* cParam0) //Position: 0x87E / 2174
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAD4 / 2772
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

void Function_27() //Position: 0xBC8 / 3016
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

int Function_28(int iParam0, bool bParam1) //Position: 0xBFA / 3066
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

int Function_29(int iParam0) //Position: 0xC38 / 3128
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC52 / 3154
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC68 / 3176
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF65 / 3941
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

void Function_33(char* cParam0) //Position: 0xFDA / 4058
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1014 / 4116
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1090 / 4240
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10A3 / 4259
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

int Function_37(int iParam0) //Position: 0x1144 / 4420
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1181 / 4481
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1197 / 4503
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x13F5 / 5109
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1433 / 5171
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

void Function_42(bool bParam0) //Position: 0x1472 / 5234
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

void Function_43() //Position: 0x14C7 / 5319
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

void Function_44() //Position: 0x1512 / 5394
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

void Function_45() //Position: 0x1618 / 5656
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

void Function_46() //Position: 0x164B / 5707
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

void Function_47() //Position: 0x17DE / 6110
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

void Function_48() //Position: 0x1997 / 6551
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19A5 / 6565
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

bool Function_50() //Position: 0x1BC2 / 7106
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1BD7 / 7127
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C7E / 7294
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F1A / 7962
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

var Function_54() //Position: 0x2558 / 9560
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2561 / 9569
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2572 / 9586
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

struct<32> Function_57(char* cParam0) //Position: 0x2669 / 9833
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2684 / 9860
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x26EB / 9963
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x26FD / 9981
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x270F / 9999
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

int Function_62(int iParam0) //Position: 0x2843 / 10307
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2852 / 10322
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x288B / 10379
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x28C8 / 10440
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A62 / 10850
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

int Function_67(bool bParam0) //Position: 0x2CA6 / 11430
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2CE7 / 11495
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

struct<8> Function_69() //Position: 0x2D70 / 11632
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

struct<8> Function_70() //Position: 0x2E07 / 11783
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

void Function_71() //Position: 0x2E86 / 11910
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EC3 / 11971
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

void Function_73() //Position: 0x30CF / 12495
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

bool Function_74(char* cParam0) //Position: 0x3186 / 12678
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x319E / 12702
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

struct<8> Function_76() //Position: 0x3296 / 12950
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x32A0 / 12960
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32B1 / 12977
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x32C7 / 12999
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3393 / 13203
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33B0 / 13232
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

bool Function_82(int iParam0) //Position: 0x3BDC / 15324
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C17 / 15383
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3C26 / 15398
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

bool Function_85(int iParam0) //Position: 0x4104 / 16644
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x411A / 16666
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4139 / 16697
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4153 / 16723
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41BD / 16829
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

void Function_90(int iParam0) //Position: 0x43E5 / 17381
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

void Function_91() //Position: 0x4483 / 17539
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

void Function_92() //Position: 0x45E5 / 17893
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4665 / 18021
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49BC / 18876
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

int Function_95(int iParam0) //Position: 0x4A44 / 19012
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A5E / 19038
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A89 / 19081
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4AB7 / 19127
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D53 / 19795
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F27 / 20263
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5191 / 20881
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

int Function_102() //Position: 0x5321 / 21281
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

void Function_103() //Position: 0x53C2 / 21442
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

void Function_104(int iParam0) //Position: 0x5480 / 21632
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

var Function_105(int iParam0) //Position: 0x54E6 / 21734
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5575 / 21877
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

var Function_107(int iParam0, int iParam1) //Position: 0x5721 / 22305
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

void Function_108() //Position: 0x5766 / 22374
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x577C / 22396
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57BC / 22460
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x57FC / 22524
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x580B / 22539
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

int Function_113(int iParam0) //Position: 0x59D3 / 22995
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

var Function_114() //Position: 0x5A68 / 23144
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5A8D / 23181
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F5C / 24412
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

var Function_117(int iParam0) //Position: 0x6283 / 25219
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6326 / 25382
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6523 / 25891
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66CE / 26318
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x67A0 / 26528
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

void Function_122(int iParam0) //Position: 0x70BB / 28859
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7238 / 29240
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7343 / 29507
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x736F / 29551
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

var Function_126(vector3 vParam0) //Position: 0x73C6 / 29638
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

void Function_127(var uParam0, int iParam1) //Position: 0x7414 / 29716
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x746F / 29807
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

void Function_129() //Position: 0x7610 / 30224
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7616 / 30230
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76C5 / 30405
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x771A / 30490
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7730 / 30512
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7781 / 30593
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

void Function_135(var uParam0, int iParam1) //Position: 0x77AE / 30638
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77BF / 30655
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x77D9 / 30681
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x77EA / 30698
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

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7946 / 31046
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

bool Function_140() //Position: 0x79D1 / 31185
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x79FE / 31230
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

int Function_142(int iParam0) //Position: 0x7BAE / 31662
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7C05 / 31749
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

var Function_144(int iParam0) //Position: 0x7C2A / 31786
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7C80 / 31872
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

bool Function_146(bool bParam0) //Position: 0x7CDF / 31967
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7CEB / 31979
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D07 / 32007
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

bool Function_149() //Position: 0x7D59 / 32089
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7D89 / 32137
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

int Function_151(int iParam0, int iParam1) //Position: 0x7DFE / 32254
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E5B / 32347
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

int Function_153(int iParam0, int iParam1) //Position: 0x7ECE / 32462
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F29 / 32553
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x81F1 / 33265
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8490 / 33936
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

void Function_157() //Position: 0x84FF / 34047
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

int Function_158(int iParam0, int iParam1) //Position: 0x857F / 34175
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

int Function_159(int iParam0) //Position: 0x91E2 / 37346
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x91F7 / 37367
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

void Function_161(var uParam0, int iParam1) //Position: 0x9246 / 37446
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x929E / 37534
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

bool Function_163(int iParam0, int iParam1) //Position: 0x9311 / 37649
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9325 / 37669
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

var Function_165(int iParam0) //Position: 0x9416 / 37910
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

bool Function_166(var uParam0, int iParam1) //Position: 0x946E / 37998
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x948B / 38027
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

bool Function_168(int iParam0) //Position: 0x94E5 / 38117
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x94F7 / 38135
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

void Function_170(struct<185> Param0) //Position: 0x952B / 38187
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

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9596 / 38294
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

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x9680 / 38528
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

void Function_173() //Position: 0x97FF / 38911
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x980B / 38923
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

void Function_175() //Position: 0x9851 / 38993
{
	Function_176();
	return;
}

void Function_176() //Position: 0x985A / 39002
{
	Function_177(&iLocal_222 + 8);
	Function_177(&iLocal_222 + 48);
	Function_177(&iLocal_222 + 152);
	Function_177(&iLocal_222 + 416);
	Function_177(&iLocal_222 + 680);
	Function_177(&iLocal_222 + 944);
	Function_177(&iLocal_222 + 1224);
	RELEASE_LAYOUT_REF(&iLocal_222);
	return;
}

void Function_177(int iParam0) //Position: 0x989B / 39067
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

void Function_178(struct<2>[] Param0, int iParam1) //Position: 0x98C3 / 39107
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

void Function_179(struct<13> Param0) //Position: 0x9A0E / 39438
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_180(struct<13> Param0) //Position: 0x9A2B / 39467
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9A49 / 39497
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
	Function_208();
	Function_206(0);
	Function_205();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_204();
	Function_203();
	Function_209();
	ENABLE_JOURNAL_REPLAY(1);
	Function_202(1);
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
		Function_201(&Global_54076);
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
	Function_198(Global_42825);
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
	Function_197();
	Function_196(1178687);
	Function_194(33039);
	Function_193(0x218003f);
	Function_192(4194560);
	Function_191();
	Function_190();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_187(0, 1, 1);
	}
	else
	{
		Function_187(0, 1, 1);
	}
	Function_186();
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
	Function_182();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_182() //Position: 0x9C55 / 40021
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
		if (Function_185() > 3)
		{
			iVar0 *= 2;
		}
		Function_183(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9CAC / 40108
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_184(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_184(bool bParam0) //Position: 0x9CFC / 40188
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_185() //Position: 0x9D25 / 40229
{
	return Global_21369.f_248;
}

void Function_186() //Position: 0x9D30 / 40240
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

void Function_187(int iParam0, bool bParam1, int iParam2) //Position: 0x9D5A / 40282
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
			Function_188(Global_43789);
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

void Function_188(int iParam0) //Position: 0x9E66 / 40550
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_189())
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

bool Function_189() //Position: 0x9EE5 / 40677
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

void Function_190() //Position: 0x9F4E / 40782
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

void Function_191() //Position: 0x9F74 / 40820
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

void Function_192(int iParam0) //Position: 0x9F9A / 40858
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_193(int iParam0) //Position: 0x9FB7 / 40887
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_194(int iParam0) //Position: 0x9FCA / 40906
{
	Function_195(&Global_43580, iParam0);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x9FD8 / 40920
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_196(bool bParam0) //Position: 0x9FF7 / 40951
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_197() //Position: 0xA024 / 40996
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

void Function_198(int iParam0) //Position: 0xA09C / 41116
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
		Function_199(78, 1, 1);
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

int Function_199(bool bParam0, bool bParam1, int iParam2) //Position: 0xA1D2 / 41426
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_200(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_200(bool bParam0) //Position: 0xA220 / 41504
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

void Function_201(int iParam0) //Position: 0xA314 / 41748
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

void Function_202(bool bParam0) //Position: 0xA397 / 41879
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

void Function_203() //Position: 0xA40E / 41998
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

void Function_204() //Position: 0xA452 / 42066
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

void Function_205() //Position: 0xA496 / 42134
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_206(int iParam0) //Position: 0xA4AC / 42156
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_207())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_207() //Position: 0xA4EC / 42220
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

void Function_208() //Position: 0xA511 / 42257
{
	Global_15862 = 0.0f;
	return;
}

void Function_209() //Position: 0xA51B / 42267
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

int Function_210() //Position: 0xA546 / 42310
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_211(int iParam0) //Position: 0xA563 / 42339
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

int Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA5CB / 42443
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
		Function_214(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_213(&Global_15402[iParam014] + 8);
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

void Function_213(int iParam0) //Position: 0xA90D / 43277
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

void Function_214(var uParam0) //Position: 0xA940 / 43328
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_215() //Position: 0xA957 / 43351
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_238(1);
	Function_237();
	Function_224();
	Function_222();
	Function_221();
	Function_217(0);
	Function_216(1);
	if (IS_ACTOR_ALIVE(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		SET_CAN_ACTOR_HARDLOCK_NEUTRALS(&Global_54076, 1);
	}
	Function_202(1);
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bLocal_1517)
	{
		DOF_POP();
	}
	if (IS_ACTOR_VALID(&iLocal_1040))
	{
		AI_STOP_IGNORING_ACTOR(&iLocal_1040);
		RESET_ANIM_SET_FOR_ACTOR(&iLocal_1040, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_1040, 1);
		MEMORY_CONSIDER_AS(&iLocal_1040, &Global_54076, 2);
		SET_ACTOR_FACTION(&iLocal_1040, 21);
		TASK_PRIORITY_SET(&iLocal_1040, 2);
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xA9E5 / 43493
{
	var uVar0;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &uLocal_950, 4294967295, 1);
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(&iLocal_222 + 2600[6], &Local_1370);
		LOCATE_GRINGOS_OF_TYPE(&uVar0, "fake_poker", &Local_1370, 20.0f, 0);
		bLocal_1379 = false;
		while (bLocal_1379 <= GET_OBJECTSET_SIZE(&uVar0))
		{
			uLocal_1358 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1379, &uVar0);
			if (IS_OBJECT_VALID(&uLocal_1358))
			{
				iLocal_1364 = GET_GRINGO_FROM_OBJECT(&uLocal_1358);
				if (IS_GRINGO_VALID(&iLocal_1364))
				{
					GRINGO_ALLOW_ACTIVATION(&iLocal_1364, bParam0);
				}
			}
			bLocal_1379++;
		}
		DESTROY_OBJECTSET(&uVar0);
	}
	return;
}

void Function_217(bool bParam0) //Position: 0xAA89 / 43657
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_220(5)))
		{
			Function_218(5, 1, 1);
		}
	}
	else if (IS_BLIP_VALID(Function_220(5)))
	{
		Function_218(5, 0, 1);
	}
	return;
}

void Function_218(int iParam0, bool bParam1, bool bParam2) //Position: 0xAAB8 / 43704
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
						Function_213(&uVar1);
					}
				}
				Function_219(&uVar0);
			}
		}
	}
	return;
}

void Function_219(bool bParam0) //Position: 0xABC7 / 43975
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

var Function_220(int iParam0) //Position: 0xABFA / 44026
{
	return &Global_15402[iParam014] + 104;
}

void Function_221() //Position: 0xAC0A / 44042
{
	if (IS_BLIP_VALID(&iLocal_1381))
	{
		REMOVE_BLIP(&iLocal_1381);
	}
	return;
}

void Function_222() //Position: 0xAC21 / 44065
{
	if (IS_OBJECT_VALID(&uLocal_1362))
	{
		Function_223(&uLocal_1362);
	}
	return;
}

void Function_223(var uParam0) //Position: 0xAC38 / 44088
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

void Function_224() //Position: 0xACCE / 44238
{
	Function_225();
	return;
}

void Function_225() //Position: 0xACD7 / 44247
{
	Function_226();
	return;
}

void Function_226() //Position: 0xACE0 / 44256
{
	Function_228();
	Function_227(1, 1);
	return;
}

void Function_227(bool bParam0, bool bParam1) //Position: 0xACEE / 44270
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

void Function_228() //Position: 0xAD44 / 44356
{
	Function_229();
	if (IS_SCRIPT_VALID(&uLocal_1504))
	{
		TERMINATE_SCRIPT(&uLocal_1504);
	}
	return;
}

void Function_229() //Position: 0xAD5E / 44382
{
	Function_230();
	return;
}

void Function_230() //Position: 0xAD67 / 44391
{
	ABORT_SCRIPTED_CONVERSATION(0);
	Function_236();
	Function_235();
	if (iLocal_1527 && !iLocal_1528)
	{
		Function_231();
		iLocal_1528 = 1;
	}
	if (IS_SCRIPT_VALID(&uLocal_1464))
	{
		TERMINATE_SCRIPT(&uLocal_1464);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "Gun05Poker"))
	{
		DECOR_REMOVE(&Global_54076, "Gun05Poker");
	}
	return;
}

void Function_231() //Position: 0xADC7 / 44487
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	
	REMOVE_STRING_TABLE("nminigames");
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_234("$/fragments/p_gen_cards02x");
	Function_234("$/fragments/p_gen_dealerButton01x");
	Function_234("$/fragments/p_crd_01x");
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = iVar0;
			Var2.f_4 = iVar1;
			cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_233(&Var2, 0) };
			Function_234(&cVar3);
			iVar1++;
		}
		iVar0++;
	}
	Function_234("$/fragments/p_crd_chipRedPoker01x");
	Function_234("$/fragments/p_crd_chipGreenPoker01x");
	Function_234("$/fragments/p_crd_chipBluePoker01x");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&cVar3, Function_232(iVar0), 32);
		Function_234(&cVar3);
		iVar0++;
	}
	STREAMING_EVICT_GRINGO(GET_ASSET_ID("fake_poker", 1));
	REMOVE_ACTION_TREE("custom/sit_poker");
	REMOVE_ACTION_TREE("custom/fake_poker");
	REMOVE_ANIM_SET("nsit_poker");
	REMOVE_ANIM_SET("sit_poker_gped");
	REMOVE_ANIM_SET("sit_poker_hillb");
	if (!Global_43789 != Global_46914[0])
	{
		REMOVE_ANIM_SET("sit_poker_oldm");
	}
	return;
}

var Function_232(bool bParam0) //Position: 0xAFB4 / 44980
{
	switch (bParam0)
	{
		case 0x00000000:
			return "p_crd_chips004x";
			break;
		
		case 0x00000001:
			return "p_crd_chips009x";
			break;
		
		case 0x00000002:
			return "p_crd_chips040x";
			break;
		
		case 0x00000003:
			return "p_crd_chips044x";
			break;
		
		case 0x00000004:
			return "p_crd_chips049x";
			break;
		
		case 0x00000005:
			return "p_crd_chips090x";
			break;
		
		case 0x00000006:
			return "p_crd_chips094x";
			break;
		
		case 0x00000007:
			return "p_crd_chips099x";
			break;
		
		case 0x00000008:
			return "p_crd_chips400x";
			break;
		
		case 0x00000009:
			return "p_crd_chips404x";
			break;
		
		case 0x0000000A:
			return "p_crd_chips409x";
			break;
		
		case 0x0000000B:
			return "p_crd_chips440x";
			break;
		
		case 0x0000000C:
			return "p_crd_chips444x";
			break;
		
		case 0x0000000D:
			return "p_crd_chips449x";
			break;
		
		case 0x0000000E:
			return "p_crd_chips490x";
			break;
		
		case 0x0000000F:
			return "p_crd_chips494x";
			break;
		
		case 0x00000010:
			return "p_crd_chips499x";
			break;
		
		case 0x00000011:
			return "p_crd_chips900x";
			break;
		
		case 0x00000012:
			return "p_crd_chips904x";
			break;
		
		case 0x00000013:
			return "p_crd_chips909x";
			break;
		
		case 0x00000014:
			return "p_crd_chips940x";
			break;
		
		case 0x00000015:
			return "p_crd_chips944x";
			break;
		
		case 0x00000016:
			return "p_crd_chips949x";
			break;
		
		case 0x00000017:
			return "p_crd_chips990x";
			break;
		
		case 0x00000018:
			return "p_crd_chips994x";
			break;
		
		case 0x00000019:
			return "p_crd_chips999x";
			break;
	}
	LOG_ERROR("Returning invalid chip name");
	return "";
}

struct<32> Function_233(struct<5> Param0) //Position: 0xB2BD / 45757
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_crd_", 32);
	if (&bParam1)
	{
		strcpy(&cVar0, "p_crd_", 32);
	}
	switch (Param0)
	{
		case 0x00000000:
			stradd(&cVar0, "2_", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "3_", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "4_", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "5_", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "6_", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "7_", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "8_", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "9_", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "10_", 32);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "j_", 32);
			break;
		
		case 0x0000000A:
			stradd(&cVar0, "q_", 32);
			break;
		
		case 0x0000000B:
			stradd(&cVar0, "k_", 32);
			break;
		
		case 0x0000000C:
			stradd(&cVar0, "a_", 32);
			break;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (&bParam1)
			{
				stradd(&cVar0, "c01", 32);
			}
			else
			{
				stradd(&cVar0, "c01x", 32);
			}
			break;
		
		case 0x00000001:
			if (&bParam1)
			{
				stradd(&cVar0, "d01", 32);
			}
			else
			{
				stradd(&cVar0, "d01x", 32);
			}
			break;
		
		case 0x00000002:
			if (&bParam1)
			{
				stradd(&cVar0, "h01", 32);
			}
			else
			{
				stradd(&cVar0, "h01x", 32);
			}
			break;
		
		case 0x00000003:
			if (&bParam1)
			{
				stradd(&cVar0, "s01", 32);
			}
			else
			{
				stradd(&cVar0, "s01x", 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_234(char* cParam0) //Position: 0xB490 / 46224
{
	STREAMING_EVICT_PROP(GET_ASSET_ID(&cParam0, 0));
	return;
}

void Function_235() //Position: 0xB4A0 / 46240
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_236() //Position: 0xB4B2 / 46258
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_237() //Position: 0xB4C7 / 46279
{
	ENABLE_CHILD_SECTOR("chu_corral01x");
	ENABLE_CHILD_SECTOR("chu_cityHall_int_01x");
	ENABLE_CHILD_SECTOR("chu_churchWindow01x");
	ENABLE_CHILD_SECTOR("chu_church_int_01x");
	ENABLE_CHILD_SECTOR("chu_wall01props01x");
	ENABLE_CHILD_SECTOR("chu_townCenterProps01x");
	ENABLE_CHILD_SECTOR("chu_path01Props01x");
	ENABLE_CHILD_SECTOR("chu_marketProps01x");
	ENABLE_CHILD_SECTOR("chu_hotel01Props01x");
	ENABLE_CHILD_SECTOR("chu_corral01props01x");
	ENABLE_CHILD_SECTOR("chu_cityHall01Props01x");
	ENABLE_CHILD_SECTOR("chu_bank01props01x");
	return;
}

void Function_238(bool bParam0) //Position: 0xB5F6 / 46582
{
	if (bParam0)
	{
		Function_196(1048576);
	}
	else
	{
		Function_169(1048576);
	}
	return;
}

void Function_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB612 / 46610
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_240(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_240(int iParam0) //Position: 0xB63C / 46652
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

void Function_241() //Position: 0xBB91 / 48017
{
	var uVar0[11];
	int iVar12;
	
	if (Function_306())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - High Noon";
		uVar0[4] = "Stage 03 - Duel Muller";
		uVar0[5] = "Stage 04 - Happy Hour";
		uVar0[6] = "Stage 05 - Duel Stranger";
		uVar0[7] = "Stage 06 - Cleanup Town";
		uVar0[8] = "Last Stage - Mission End";
		uVar0[9] = "Kill All Enemies";
		uVar0[10] = "Kill All Blipped Enemies";
		iVar12 = Function_292(&uLocal_1000, &uVar0, &Local_952 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_291(&iVar12, &iLocal_1020, &bLocal_1021, &iLocal_1008))
		{
			Function_284();
		}
		if (iVar12 == 0)
		{
			Function_284();
			Function_283(&bLocal_1080, 8);
		}
		else if (iVar12 == 1)
		{
			Function_284();
			Function_278(iLocal_1020);
			Function_274(StackVal, 5, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
		}
		else if (iVar12 == 2)
		{
			Function_284();
			Function_269(&bLocal_1082, 4);
		}
		else if (iVar12 == 3)
		{
			Function_284();
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_267(0);
			Function_266();
			iLocal_1020 = 1;
			iLocal_1008 = 1000;
			Function_263(0, "STAGE 02 - INITIALIZE");
		}
		else if (iVar12 == 4)
		{
			Function_284();
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_267(0);
			Function_261();
			iLocal_1020 = 2;
			iLocal_1008 = 1000;
			Function_263(0, "STAGE 03 - INITIALIZE");
		}
		else if (iVar12 == 5)
		{
			Function_284();
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_267(0);
			Function_260();
			iLocal_1020 = 3;
			iLocal_1008 = 1000;
			Function_263(0, "STAGE 04 - INITIALIZE");
		}
		else if (iVar12 == 6)
		{
			Function_284();
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_267(0);
			Function_259();
			iLocal_1020 = 4;
			iLocal_1008 = 1000;
			Function_263(0, "STAGE 05 - INITIALIZE");
		}
		else if (iVar12 == 7)
		{
			Function_284();
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_267(0);
			Function_256();
			iLocal_1020 = 5;
			iLocal_1008 = 1000;
			Function_263(0, "STAGE 06 - INITIALIZE");
		}
		else if (iVar12 == 8)
		{
			Function_284();
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_267(0);
			Function_246();
			iLocal_1020 = 101;
			iLocal_1008 = 1000;
			Function_263(0, "LAST STAGE - INITIALIZE");
		}
		else if (iVar12 == 9)
		{
			Function_284();
			Function_245();
		}
		else if (iVar12 == 10)
		{
			Function_284();
			Function_242();
		}
	}
	return;
}

void Function_242() //Position: 0xBEE3 / 48867
{
	if (SQUAD_IS_VALID(&iLocal_1042))
	{
		if (Function_244(&iLocal_1042, 1))
		{
			Function_243(&iLocal_1042);
		}
	}
	return;
}

void Function_243(int iParam0) //Position: 0xBF04 / 48900
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

bool Function_244(int iParam0, bool bParam1) //Position: 0xBF5B / 48987
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_245() //Position: 0xBFB7 / 49079
{
	return;
}

void Function_246() //Position: 0xBFBD / 49085
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_237();
	Function_224();
	Function_250();
	Function_222();
	Function_221();
	Function_217(0);
	Function_216(0);
	Function_249();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	Function_248();
	Function_247();
	return;
}

void Function_247() //Position: 0xBFF4 / 49140
{
	if (SQUAD_IS_VALID(&iLocal_222 + 1848))
	{
		bLocal_1379 = false;
		while (bLocal_1379 <= SQUAD_GET_SIZE(&iLocal_222 + 1848))
		{
			bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_222 + 1848, bLocal_1379);
			if (IS_ACTOR_ALIVE(&bLocal_1368))
			{
				TASK_CLEAR(&bLocal_1368);
				TASK_PRIORITY_SET(&bLocal_1368, true);
				TASK_STAND_STILL(&bLocal_1368, -1.0f, 0, 0);
			}
			bLocal_1379++;
		}
	}
	return;
}

void Function_248() //Position: 0xC058 / 49240
{
	if (SQUAD_IS_VALID(&iLocal_1044))
	{
		bLocal_1379 = false;
		while (bLocal_1379 <= SQUAD_GET_SIZE(&iLocal_1044))
		{
			bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1044, bLocal_1379);
			if (IS_ACTOR_ALIVE(&bLocal_1368))
			{
				TASK_CLEAR(&bLocal_1368);
				TASK_PRIORITY_SET(&bLocal_1368, true);
				TASK_STAND_STILL(&bLocal_1368, -1.0f, 0, 0);
			}
			bLocal_1379++;
		}
	}
	return;
}

void Function_249() //Position: 0xC0B5 / 49333
{
	TASK_CLEAR(&cLocal_1026);
	TASK_PRIORITY_SET(&cLocal_1026, true);
	TASK_STAND_STILL(&cLocal_1026, -1.0f, 0, 0);
	return;
}

void Function_250() //Position: 0xC0D4 / 49364
{
	Function_251();
	return;
}

void Function_251() //Position: 0xC0DD / 49373
{
	Function_252();
	return;
}

void Function_252() //Position: 0xC0E6 / 49382
{
	Function_253();
	if (IS_OBJECT_VALID(&iLocal_222 + 2856))
	{
		DESTROY_OBJECT(&iLocal_222 + 2856);
	}
	return;
}

void Function_253() //Position: 0xC104 / 49412
{
	Function_254();
	return;
}

void Function_254() //Position: 0xC10D / 49421
{
	Function_255();
	if (IS_OBJECT_VALID(&iLocal_222 + 2864))
	{
		DESTROY_OBJECT(&iLocal_222 + 2864);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2872))
	{
		DESTROY_OBJECT(&iLocal_222 + 2872);
	}
	return;
}

void Function_255() //Position: 0xC140 / 49472
{
	if (IS_GRINGO_VALID(&iLocal_1510))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&iLocal_1510));
	}
	if (IS_GRINGO_VALID(&iLocal_1512))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&iLocal_1512));
	}
	if (IS_GRINGO_VALID(&uLocal_1514))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_1514));
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2880))
	{
		DESTROY_OBJECT(&iLocal_222 + 2880);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2888))
	{
		DESTROY_OBJECT(&iLocal_222 + 2888);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2896))
	{
		DESTROY_OBJECT(&iLocal_222 + 2896);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2904))
	{
		DESTROY_OBJECT(&iLocal_222 + 2904);
	}
	return;
}

void Function_256() //Position: 0xC1D6 / 49622
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_237();
	Function_225();
	Function_251();
	Function_222();
	Function_221();
	Function_217(0);
	Function_216(0);
	Function_249();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	Function_258();
	Function_248();
	Function_247();
	Function_257();
	return;
}

void Function_257() //Position: 0xC213 / 49683
{
	if (IS_ACTOR_ALIVE(&iLocal_1040))
	{
		TASK_CLEAR(&iLocal_1040);
		TASK_PRIORITY_SET(&iLocal_1040, true);
		TASK_STAND_STILL(&iLocal_1040, -1.0f, 0, 0);
	}
	return;
}

void Function_258() //Position: 0xC23C / 49724
{
	if (SQUAD_IS_VALID(&iLocal_1042))
	{
		bLocal_1379 = false;
		while (bLocal_1379 <= SQUAD_GET_SIZE(&iLocal_1042))
		{
			bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1042, bLocal_1379);
			if (IS_ACTOR_ALIVE(&bLocal_1368))
			{
				TASK_CLEAR(&bLocal_1368);
				TASK_PRIORITY_SET(&bLocal_1368, true);
				TASK_STAND_STILL(&bLocal_1368, -1.0f, 0, 0);
			}
			bLocal_1379++;
		}
	}
	return;
}

void Function_259() //Position: 0xC299 / 49817
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_237();
	Function_226();
	Function_252();
	Function_222();
	Function_221();
	Function_217(0);
	Function_216(0);
	Function_249();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	Function_258();
	Function_248();
	Function_247();
	return;
}

void Function_260() //Position: 0xC2D3 / 49875
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_237();
	Function_228();
	Function_253();
	Function_222();
	Function_221();
	Function_217(0);
	Function_216(0);
	Function_249();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	Function_258();
	Function_248();
	Function_247();
	return;
}

void Function_261() //Position: 0xC30D / 49933
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_237();
	Function_229();
	Function_254();
	Function_222();
	Function_221();
	Function_217(0);
	Function_216(0);
	Function_249();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	Function_262();
	Function_258();
	Function_248();
	Function_247();
	return;
}

void Function_262() //Position: 0xC34A / 49994
{
	if (IS_ACTOR_ALIVE(&cLocal_1030))
	{
		TASK_CLEAR(&cLocal_1030);
		TASK_PRIORITY_SET(&cLocal_1030, true);
		TASK_STAND_STILL(&cLocal_1030, -1.0f, 0, 0);
	}
	return;
}

void Function_263(bool bParam0, int iParam1) //Position: 0xC373 / 50035
{
	Function_264(&iLocal_1046);
	bLocal_1021 = bParam0;
	return;
}

void Function_264(int iParam0) //Position: 0xC384 / 50052
{
	Function_265(&iParam0, 0.0f);
	return;
}

void Function_265(vector3 vParam0) //Position: 0xC391 / 50065
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_266() //Position: 0xC3B6 / 50102
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_237();
	Function_230();
	Function_255();
	Function_249();
	Function_262();
	Function_258();
	Function_248();
	return;
}

void Function_267(bool bParam0) //Position: 0xC3DB / 50139
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	else
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
	}
	return;
}

void Function_268(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC407 / 50183
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

void Function_269(bool bParam0, int iParam1) //Position: 0xC431 / 50225
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_270(&iParam1);
	bParam0 = 1;
	return;
}

void Function_270(int iParam0) //Position: 0xC456 / 50262
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_273("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_272(2) || Function_272(8)) || Function_272(9)) || Function_272(10))
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
		Function_273("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_273("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_273("");
	}
	else if (iParam0 == 8)
	{
		Function_271();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_271();
	}
	return;
}

void Function_271() //Position: 0xC54D / 50509
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_272(int iParam0) //Position: 0xC559 / 50521
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

void Function_273(struct<8> Param0) //Position: 0xC58F / 50575
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&Param0);
	PRINTNL();
	strcpy(&Global_10969, &Param0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_274(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xC5FB / 50683
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_275(StackVal, Param4, uParam3, &iParam6);
		Function_270(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_275(struct<2> Param0, var uParam2, var uParam3) //Position: 0xC63C / 50748
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_277(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_276(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_276(int iParam0) //Position: 0xC6BE / 50878
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

var Function_277(struct<2> Param0, bool bParam2) //Position: 0xCB6C / 52076
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

struct<8> Function_278(int iParam0) //Position: 0xCBD8 / 52184
{
	Function_279(iParam0 + 1);
	return StackVal, Function_279(iParam0 + 1);
}

struct<8> Function_279(int iParam0) //Position: 0xCBE5 / 52197
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_280(&iLocal_222 + 2128[0]);
			return StackVal, Function_280(&iLocal_222 + 2128[0]);
			break;
		
		case 0x00000001:
			Function_280(&iLocal_222 + 2176[0]);
			return StackVal, Function_280(&iLocal_222 + 2176[0]);
			break;
		
		case 0x00000002:
			Function_280(&iLocal_222 + 2272[0]);
			return StackVal, Function_280(&iLocal_222 + 2272[0]);
			break;
		
		case 0x00000003:
			Function_280(&iLocal_222 + 2352[0]);
			return StackVal, Function_280(&iLocal_222 + 2352[0]);
			break;
		
		case 0x00000004:
			Function_280(&iLocal_222 + 2384[0]);
			return StackVal, Function_280(&iLocal_222 + 2384[0]);
			break;
		
		case 0x00000005:
			Function_280(&iLocal_222 + 2464[0]);
			return StackVal, Function_280(&iLocal_222 + 2464[0]);
			break;
		
		default:
			Function_280(&iLocal_222 + 2536[0]);
			return StackVal, Function_280(&iLocal_222 + 2536[0]);
			break;
	}
	Function_280(&iLocal_222 + 2128[0]);
	return StackVal, Function_280(&iLocal_222 + 2128[0]);
}

struct<8> Function_280(bool bParam0) //Position: 0xCC92 / 52370
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

int Function_281(int iParam0) //Position: 0xCCBB / 52411
{
	return Function_282(iParam0 + 1);
}

int Function_282(int iParam0) //Position: 0xCCC8 / 52424
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_222 + 2128[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_222 + 2176[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_222 + 2272[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_222 + 2352[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_222 + 2384[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&iLocal_222 + 2464[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_222 + 2536[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_HEADING_BY_STAGE, returning first stage start heading.");
	return GET_OBJECT_HEADING(&iLocal_222 + 2128[0]);
}

void Function_283(bool bParam0, int iParam1) //Position: 0xCDDC / 52700
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_270(&iParam1);
	bParam0 = 1;
	return;
}

void Function_284() //Position: 0xCE01 / 52737
{
	Function_286();
	Function_285(10, 3);
	return;
}

void Function_285(int iParam0, int iParam1) //Position: 0xCE10 / 52752
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

void Function_286() //Position: 0xCF5D / 53085
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_290())
	{
		Function_289(10, 3);
	}
	else
	{
		Function_287();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_287() //Position: 0xCFA8 / 53160
{
	Function_288(25, 2);
	return;
}

void Function_288(int iParam0, int iParam1) //Position: 0xCFB4 / 53172
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

void Function_289(int iParam0, int iParam1) //Position: 0xD1E0 / 53728
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

bool Function_290() //Position: 0xD32D / 54061
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

bool Function_291(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD395 / 54165
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_284();
			Function_236();
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
		Function_273("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_292(struct<17> Param0) //Position: 0xD444 / 54340
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_305(&Var12, &Var0);
	uVar15 = Function_304(uParam1, &Var12);
	Function_303(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_302(&Param0, uVar15);
	Function_300(StackVal, &Param0, Var12.f_12);
	Function_298(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_297(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_294(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_293(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_293(int iParam0, int iParam1, int iParam2) //Position: 0xD538 / 54584
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

bool Function_294(struct<17> Param0) //Position: 0xD598 / 54680
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
				Function_296(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_296(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_293(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_295(Param1.f_64);
	}
	else
	{
		Function_295(Param1.f_64);
	}
	return 0;
}

void Function_295(bool bParam0) //Position: 0xD72B / 55083
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

void Function_296(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xD769 / 55145
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

var Function_297(int iParam0, struct<21> Param1) //Position: 0xD81F / 55327
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_298(vector3 vParam0) //Position: 0xD846 / 55366
{
	switch (Function_299())
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

int Function_299() //Position: 0xD8F2 / 55538
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

void Function_300(vector3 vParam0) //Position: 0xD92E / 55598
{
	switch (Function_301(&vParam0))
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

int Function_301(bool bParam0) //Position: 0xD9D7 / 55767
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

var Function_302(struct<21> Param0) //Position: 0xDAF7 / 56055
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

void Function_303(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xDCB1 / 56497
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

var Function_304(int iParam0, struct<13> Param1) //Position: 0xDD4D / 56653
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_305(struct<17> Param0) //Position: 0xDD69 / 56681
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

bool Function_306() //Position: 0xDDC3 / 56771
{
	return Global_47307;
}

bool Function_307() //Position: 0xDDCC / 56780
{
	if (IS_EXITFLAG_SET())
	{
		Function_278(iLocal_1020);
		Function_274(StackVal, 4, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
		return 0;
	}
	Function_700(StackVal, StackVal, StackVal, StackVal, StackVal, Local_952, iLocal_1020, bLocal_1021, &bLocal_1082, &bLocal_1080, &bLocal_1081);
	if (iLocal_1020 == 99 && iLocal_1020 == 100)
	{
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_278(iLocal_1020);
			Function_274(StackVal, 1, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_278(iLocal_1020);
			Function_274(StackVal, 3, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
			return 1;
		}
		if (Function_699(2048))
		{
			Function_278(iLocal_1020);
			Function_274(StackVal, 3, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
			return 1;
		}
		if (Function_679(&Local_1138, &uLocal_1084, &uLocal_1350, &uLocal_1024, iLocal_1083))
		{
			if (Function_677(&uLocal_1350))
			{
				Function_278(iLocal_1020);
				Function_274(StackVal, 5, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
				return 1;
			}
		}
	}
	switch (iLocal_1020)
	{
		case 0x00000063:
			Function_619();
			break;
		
		case 0x00000000:
			Function_548();
			break;
		
		case 0x00000001:
			Function_520();
			break;
		
		case 0x00000002:
			Function_506();
			break;
		
		case 0x00000003:
			Function_489();
			break;
		
		case 0x00000004:
			Function_458();
			break;
		
		case 0x00000005:
			Function_377();
			break;
		
		case 0x00000065:
			Function_310();
			break;
		
		case 0x00000064:
			if (Function_309(&bLocal_1081))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_308(&iLocal_1020, &bLocal_1021, &iLocal_1008))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1080)
	{
		Function_283(&bLocal_1080, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1081 && iLocal_1020 == 100)
	{
		Function_278(iLocal_1020);
		Function_274(StackVal, 5, &bLocal_1081, &iLocal_1020, Function_281(iLocal_1020), Function_278(iLocal_1020), 0);
	}
	if (bLocal_1082)
	{
		Function_269(&bLocal_1082, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_308(var uParam0, var uParam1, int iParam2) //Position: 0xDF9A / 57242
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

bool Function_309(int iParam0) //Position: 0xDFE3 / 57315
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_310() //Position: 0xDFF7 / 57335
{
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (IS_VOLUME_VALID(&iLocal_222 + 1904[5]))
			{
				Function_371();
				DESTROY_VOLUME(&iLocal_222 + 1904[5]);
			}
			Function_369();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_366();
			bLocal_1023 = Global_46866[0];
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365(&Global_54076, &iLocal_222 + 2536[0], 1, 1, 1);
				Function_263(1, "LAST STAGE - STREAMING GOAL");
			}
			else
			{
				Function_263(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_359() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_357();
				Function_356();
				STREAMING_RELEASE_MAIN_POI();
				Function_263(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_355();
			Function_263(3, "LAST STAGE - CUTSCENE GOAL");
			break;
		
		case 0x00000003:
			if (Function_317("$/cutscene/GUN05_END/GUN05_END", &iLocal_1008, &Local_952, &iLocal_1020, 63309, 63139, 63132, 61638, 61410, 61328, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_316(1.0f);
				Function_313();
				Function_263(106, "LAST STAGE - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			Function_311();
			bLocal_1080 = true;
			break;
	}
	return;
}

void Function_311() //Position: 0xE1B9 / 57785
{
	Function_312();
	return;
}

void Function_312() //Position: 0xE1C2 / 57794
{
	Function_250();
	return;
}

void Function_313() //Position: 0xE1CB / 57803
{
	Function_314();
	return;
}

void Function_314() //Position: 0xE1D4 / 57812
{
	if (IS_ACTOR_ALIVE(&cLocal_1028))
	{
		if (GET_TASK_STATUS(&cLocal_1028, 19) != 1)
		{
			GET_OBJECT_POSITION(&iLocal_222 + 2600[5], &Local_1370);
			Function_315(StackVal, Local_1370, &iLocal_1364, &uLocal_1366);
			if (IS_GRINGO_VALID(&uLocal_1366))
			{
				TASK_CLEAR(&cLocal_1028);
				TASK_PRIORITY_SET(&cLocal_1028, true);
				TASK_USE_GRINGO(&cLocal_1028, &uLocal_1366, "UseCase1", 4294967295, 1);
			}
			else if (IS_GRINGO_VALID(&iLocal_1364))
			{
				TASK_CLEAR(&cLocal_1028);
				TASK_PRIORITY_SET(&cLocal_1028, true);
				TASK_USE_GRINGO(&cLocal_1028, &iLocal_1364, "UseCase1", 4294967295, 1);
			}
		}
	}
	return;
}

void Function_315(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0xE274 / 57972
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

void Function_316(bool bParam0) //Position: 0xE3BE / 58302
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

bool Function_317(var uParam0, int iParam1, struct<41> Param2) //Position: 0xE3DB / 58331
{
	if (!&bParam15)
	{
		Function_328(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_327(&Param2) || Param2.f_40 < 1))
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
				Function_264(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_326())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_325(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_264(&iParam1 + 4);
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
					Function_325(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_322(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_322(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_320(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_325(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_264(&iParam1 + 4);
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
						Function_316(1.0f);
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
						Function_319();
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
					Function_318(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_327(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_318(var uParam0, bool bParam1) //Position: 0xEA3D / 59965
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
		Function_197();
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

void Function_319() //Position: 0xEB0C / 60172
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_235();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_320(var uParam0, int iParam1) //Position: 0xEB51 / 60241
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
			if ((&iVar3 == &Global_54076 && !Function_321(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_321(int iParam0) //Position: 0xEBE3 / 60387
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

float Function_322(vector3 vParam0) //Position: 0xEC14 / 60436
{
	if (Function_324(&vParam0))
	{
		if (Function_323(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_323(int iParam0) //Position: 0xECE1 / 60641
{
	return Function_14(iParam0, 2);
}

bool Function_324(int iParam0) //Position: 0xECEF / 60655
{
	return Function_14(iParam0, 1);
}

int Function_325(bool bParam0) //Position: 0xECFD / 60669
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

bool Function_326() //Position: 0xEDC0 / 60864
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

bool Function_327(struct<37> Param0) //Position: 0xEDFD / 60925
{
	return Param0.f_36;
}

void Function_328(var uParam0, int iParam1) //Position: 0xEE08 / 60936
{
	Function_329(&uParam0, &iParam1, 0);
	return;
}

void Function_329(var uParam0, bool bParam1, var uParam2) //Position: 0xEE18 / 60952
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
			Function_268(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_268(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_330() //Position: 0xEF90 / 61328
{
	switch (iLocal_1020)
	{
		case 0x00000065:
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_SKIPPED: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

int Function_331() //Position: 0xEFE2 / 61410
{
	Function_332(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_332(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xEFF7 / 61431
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
		Function_236();
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
	Function_318(&iParam9, &bParam10);
}

int Function_333() //Position: 0xF0C6 / 61638
{
	switch (iLocal_1020)
	{
		case 0x00000063:
			Function_345();
			return 1;
			break;
		
		case 0x00000001:
			Function_341();
			RESET_PROPS_IN_VOLUME(&iLocal_222 + 1856[1], 1);
			Function_338();
			return 1;
			break;
		
		case 0x00000004:
			Function_337();
			return 1;
			break;
		
		case 0x00000065:
			Function_334();
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_SET_POSES: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_334() //Position: 0xF157 / 61783
{
	Function_365(&Global_54076, &iLocal_222 + 2568[0], 1, 0, 0);
	Function_365(&cLocal_1026, &iLocal_222 + 2568[1], 1, 1, 1);
	Function_335();
	return;
}

void Function_335() //Position: 0xF186 / 61830
{
	if (IS_ACTOR_ALIVE(&cLocal_1028))
	{
		if (!IS_ACTOR_IN_VOLUME(&cLocal_1028, &iLocal_222 + 2056[4]))
		{
			Function_336();
			Function_365(&cLocal_1028, &iLocal_222 + 2128[3], 1, 1, 1);
		}
	}
	return;
}

void Function_336() //Position: 0xF1C0 / 61888
{
	if (IS_ACTOR_ALIVE(&cLocal_1028))
	{
		TASK_CLEAR(&cLocal_1028);
		TASK_PRIORITY_SET(&cLocal_1028, true);
		TASK_STAND_STILL(&cLocal_1028, -1.0f, 0, 0);
	}
	return;
}

void Function_337() //Position: 0xF1E9 / 61929
{
	Function_365(&Global_54076, &iLocal_222 + 2384[0], 1, 1, 1);
	Function_365(&cLocal_1026, &iLocal_222 + 2384[1], 1, 1, 1);
	Function_335();
	Function_365(&cLocal_1034, &iLocal_222 + 2384[2], 1, 1, 1);
	Function_365(&cLocal_1038, &iLocal_222 + 2384[3], 1, 1, 1);
	Function_365(&iLocal_222 + 1576[02], &iLocal_222 + 2384[4], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[02], &iLocal_222 + 2384[5], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[12], &iLocal_222 + 2384[6], 1, 1, 1);
	Function_365(&iLocal_1040, &iLocal_222 + 2384[7], 1, 1, 1);
	return;
}

void Function_338() //Position: 0xF299 / 62105
{
	Function_340(&(Local_1138[315]));
	if (SQUAD_IS_VALID(&iLocal_1044))
	{
		Function_339(&iLocal_1044);
		DESTROY_OBJECT(&iLocal_1044);
	}
	return;
}

void Function_339(int iParam0) //Position: 0xF2BF / 62143
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

void Function_340(struct<69> Param0) //Position: 0xF30D / 62221
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

void Function_341() //Position: 0xF3CD / 62413
{
	Function_365(&Global_54076, &iLocal_222 + 2176[0], 1, 1, 1);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
	Function_365(&cLocal_1026, &iLocal_222 + 2176[1], 1, 1, 1);
	Function_335();
	MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1030, 1);
	Function_365(&cLocal_1030, &iLocal_222 + 2176[2], 1, 1, 1);
	MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1034, 1);
	Function_365(&cLocal_1034, &iLocal_222 + 2176[3], 1, 1, 1);
	MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1038, 1);
	Function_365(&cLocal_1038, &iLocal_222 + 2176[4], 1, 1, 1);
	Function_365(&iLocal_222 + 1576[02], &iLocal_222 + 2176[5], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[02], &iLocal_222 + 2176[6], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[12], &iLocal_222 + 2176[7], 1, 1, 1);
	Function_365(&iLocal_222 + 1640[02], &iLocal_222 + 2176[8], 1, 1, 1);
	Function_365(&iLocal_222 + 1680[12], &iLocal_222 + 2176[9], 1, 1, 1);
	Function_344();
	Function_343();
	Function_342();
	return;
}

void Function_342() //Position: 0xF4E7 / 62695
{
	bLocal_1379 = false;
	while (bLocal_1379 <= SQUAD_GET_SIZE(&iLocal_1042))
	{
		bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1042, bLocal_1379);
		if (IS_ACTOR_ALIVE(&bLocal_1368))
		{
			FORCE_LOOK_AT_ACTOR(&bLocal_1368, &Global_54076, 3212836864);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_1368, 0);
			TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_1368, 8, "FASTWALK");
			ACTOR_POP_NEXT_GAIT(&bLocal_1368, 1, 0);
			GET_OBJECT_POSITION(&iLocal_222 + 2272[(3 + bLocal_1379)], &Local_1370);
			bLocal_1380 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &Local_1370, 1);
			TASK_TAUNT_ACTOR_IN_PLACE(0, &Global_54076, -1f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&bLocal_1368);
			TASK_PRIORITY_SET(&bLocal_1368, true);
			TASK_SEQUENCE_PERFORM(&bLocal_1368, bLocal_1380);
			TASK_SEQUENCE_RELEASE(bLocal_1380, 1);
		}
		bLocal_1379++;
	}
	return;
}

void Function_343() //Position: 0xF5A8 / 62888
{
	FORCE_LOOK_AT_ACTOR(&cLocal_1030, &Global_54076, 3212836864);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&cLocal_1030, 0);
	ACTOR_POP_NEXT_GAIT(&cLocal_1030, 1, 0);
	bLocal_1379 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_222 + 2872, 1, 0, 0, 1, false);
	TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&cLocal_1030, bLocal_1379);
	TASK_SEQUENCE_RELEASE(bLocal_1379, 1);
	return;
}

void Function_344() //Position: 0xF606 / 62982
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&cLocal_1026, true);
	SET_ACTOR_MAX_SPEED(&cLocal_1026, true);
	bLocal_1379 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_OBJECT_ALONG_PATH(0, &Global_54076, &iLocal_222 + 2864, -2,5f, 1, 0);
	TASK_FACE_ACTOR(0, &cLocal_1030, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&cLocal_1026, bLocal_1379);
	TASK_SEQUENCE_RELEASE(bLocal_1379, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&cLocal_1026, &iLocal_222 + 1968[7], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&cLocal_1026, &iLocal_222 + 1968[8]);
	return;
}

void Function_345() //Position: 0xF683 / 63107
{
	Function_365(&Global_54076, &iLocal_222 + 2128[0], 1, 1, 1);
	return;
}

int Function_346() //Position: 0xF69C / 63132
{
	return 1;
}

int Function_347() //Position: 0xF6A3 / 63139
{
	switch (iLocal_1020)
	{
		case 0x00000001:
			if (!MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1026, 1))
			{
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1030, 1))
			{
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1034, 1))
			{
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(&cLocal_1038, 1))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_STREAMING: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

int Function_348() //Position: 0xF74D / 63309
{
	switch (iLocal_1020)
	{
		case 0x00000063:
			Function_351(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			(&iLocal_1008 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_950, "Gun05_CutsceneVol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4278.0f), Vector(0.0f, 0.0f, 0.0f), Vector(14.0f, 10.0f, 12.0f));
			Function_349(StackVal, &uLocal_950, Vector(-2701,084f, 31,15242f, 4280,166f), &iLocal_1008 + 32, 1, 0, 0, 0, 1, 1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&cLocal_1026, true);
			return 1;
			break;
		
		case 0x00000001:
			Function_351(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			GET_OBJECT_POSITION(&iLocal_222 + 2176[0], &Local_1370);
			Function_349(StackVal, &uLocal_950, Local_1370, &iLocal_222 + 1856[1], 1, 0, 0, 0, 1, 1);
			Function_335();
			return 1;
			break;
		
		case 0x00000004:
			Function_351(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			GET_OBJECT_POSITION(&iLocal_222 + 2384[0], &Local_1370);
			Function_349(StackVal, &uLocal_950, Local_1370, &iLocal_222 + 1856[2], 1, 0, 0, 0, 1, 1);
			Function_335();
			return 1;
			break;
		
		case 0x00000065:
			Function_351(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			GET_OBJECT_POSITION(&iLocal_222 + 2536[0], &Local_1370);
			Function_349(StackVal, &uLocal_950, Local_1370, &iLocal_222 + 1856[3], 1, 0, 0, 0, 1, 1);
			Function_335();
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_SETUP: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_349(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xF909 / 63753
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
				Function_350(&uVar1, &uParam0);
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

void Function_350(var uParam0, float fParam1) //Position: 0xFBA9 / 64425
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

void Function_351(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xFC2B / 64555
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
	Function_236();
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
				Function_354(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_354(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_353()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_353()));
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
	if (Function_352(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_352(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_352(int iParam0) //Position: 0xFEDD / 65245
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_353() //Position: 0xFEF9 / 65273
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

struct<8> Function_354(var uParam0) //Position: 0xFF87 / 65415
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_355() //Position: 0xFF99 / 65433
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_314();
	return;
}

void Function_356() //Position: 0xFFAC / 65452
{
	return;
}

void Function_357() //Position: 0xFFB2 / 65458
{
	return;
}

int Function_358(bool bParam0) //Position: 0xFFB8 / 65464
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

bool Function_359() //Position: 0xFFD4 / 65492
{
	if (Function_360(&iLocal_990))
	{
		return 1;
	}
	return 0;
}

bool Function_360(struct<2>[] Param0) //Position: 0xFFE6 / 65510
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_364();
	iVar1 = 0;
	if (!Function_180(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_363(&(Param0[iVar02]), 8);
		}
		else if (Function_362())
		{
			iVar1 = 1;
			Function_363(&(Param0[iVar02]), 8);
		}
		Function_363(&(Param0[iVar02]), 16);
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
				Function_363(&(Param0[iVar02]), 1);
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
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_363(&(Param0[iVar02]), 2);
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
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_363(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_363(&(Param0[iVar02]), 2);
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
	Function_361();
	return 1;
}

void Function_361() //Position: 0x103A8 / 66472
{
	if (!Function_352(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_362() //Position: 0x103E8 / 66536
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

void Function_363(struct<13> Param0) //Position: 0x10416 / 66582
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_364() //Position: 0x10429 / 66601
{
	if (!Function_352(128))
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

void Function_365(char* cParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1046B / 66667
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&cParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &cParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_366() //Position: 0x1057B / 66939
{
	Function_192(47);
	Function_193(256);
	Function_169(1165327);
	Function_367(265);
	return;
}

void Function_367(int iParam0) //Position: 0x10599 / 66969
{
	Function_368(&Global_43580, iParam0);
	return;
}

void Function_368(var uParam0, var uParam1) //Position: 0x105A7 / 66983
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_369() //Position: 0x105CF / 67023
{
	Function_370(&cLocal_1026);
	Function_370(&cLocal_1028);
	return;
}

void Function_370(char* cParam0) //Position: 0x105E3 / 67043
{
	if (IS_ACTOR_VALID(&cParam0))
	{
		if (IS_ACTOR_ALIVE(&cParam0))
		{
			SET_ACTOR_HEALTH(&cParam0, GET_ACTOR_MAX_HEALTH(&cParam0));
		}
	}
	return;
}

void Function_371() //Position: 0x10607 / 67079
{
	Function_372();
	return;
}

void Function_372() //Position: 0x10610 / 67088
{
	Function_177(&iLocal_222 + 1224);
	return;
}

void Function_373(bool bParam0) //Position: 0x1061E / 67102
{
	Function_374(0, 0x40400000);
	Function_204();
	Function_203();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_374(float fParam0, float fParam1) //Position: 0x10654 / 67156
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
	Function_376();
	Function_375();
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

void Function_375() //Position: 0x10765 / 67429
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_376() //Position: 0x10799 / 67481
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

void Function_377() //Position: 0x1089F / 67743
{
	if (bLocal_1021 < 5 && bLocal_1021 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_222 + 1904[5]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 1904[5]))
			{
				Function_371();
				iLocal_1385 = 0;
				DESTROY_VOLUME(&iLocal_222 + 1904[5]);
			}
		}
		else if (!iLocal_1385)
		{
			if (Function_359())
			{
				Function_357();
				iLocal_1385 = 1;
			}
		}
		else
		{
			Function_451();
		}
		if (!Function_447())
		{
			Function_446();
			Function_263(105, "STAGE 03 - FADE OUT");
		}
	}
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (IS_VOLUME_VALID(&iLocal_222 + 1904[4]))
			{
				Function_444();
				DESTROY_VOLUME(&iLocal_222 + 1904[4]);
			}
			Function_443();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_366();
			bLocal_1023 = Global_46866[0];
			if (iLocal_1066[4] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365(&Global_54076, &iLocal_222 + 2464[0], 1, 1, 1);
				Function_263(1, "STAGE 06 - STREAMING GOAL");
			}
			else
			{
				Function_263(2, "STAGE 06 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_440() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_439();
				Function_419();
				Function_418();
				Function_263(2, "STAGE 06 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_279(iLocal_1020);
			Function_410(StackVal, Function_279(iLocal_1020), iLocal_1020, Global_46746[2], Function_282(iLocal_1020), 0);
			iLocal_1022 = Function_409();
			Function_316(1.0f);
			Function_395();
			Function_267(1);
			Function_263(6, "STAGE 06 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_236();
				Function_392();
				Function_389(1);
				Function_204();
				Function_263(7, "STAGE 06 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_388("Gun05_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_263(13, "STAGE 06 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_381(&iLocal_1050, Global_46866[0], 0, "Chuparosa_return", "Chuparosa_abandoned", &bLocal_1081, 1, 0, 0, 330, 1))
			{
				Function_389(0);
				Function_380(0);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_263(14, "STAGE 06 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_381(&iLocal_1050, Global_46866[0], 0, "Chuparosa_return", "Chuparosa_abandoned", &bLocal_1081, 1, 0, 0, 330, 1))
			{
				Function_221();
				Function_389(1);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_263(13, "STAGE 06 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_268(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_267(0);
				Function_263(106, "STAGE 06 - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_378();
				iLocal_1020 = 101;
				iLocal_1066[5] = 1;
				Function_263(0, "LAST STAGE - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_378() //Position: 0x10C90 / 68752
{
	Function_379();
	Function_250();
	Function_389(0);
	return;
}

void Function_379() //Position: 0x10CA0 / 68768
{
	Function_340(&(Local_1138[515]));
	if (IS_ACTOR_ALIVE(&iLocal_1040))
	{
		DESTROY_ACTOR(&iLocal_1040);
	}
	return;
}

void Function_380(bool bParam0) //Position: 0x10CC0 / 68800
{
	Function_221();
	iLocal_1381 = ADD_BLIP_FOR_OBJECT(&iLocal_222 + 2600[bParam0], 330, 0f, 2, 0);
	return;
}

bool Function_381(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x10CE0 / 68832
{
	if (!Function_85(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (iParam2 && Function_358(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[bParam19] + 8))
		{
			Function_273(&bParam4);
			iParam5 = 1;
			return 1;
		}
		if (!Global_6629)
		{
			if (!Function_387(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_388(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
					Function_386(128);
				}
				if (IS_LAYOUTREF_VALID(&iParam7))
				{
					Function_385(&iParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(&iParam8))
				{
					Function_385(&iParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
				{
					ADD_BLIP_FOR_OBJECT(&Global_44085[bParam19] + 8, &iParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_387(128))
		{
			Function_384(128);
			Function_384(256);
			if (!Function_383())
			{
				if (&bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_382();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8));
				}
				if (IS_LAYOUTREF_VALID(&iParam7))
				{
					Function_385(&iParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(&iParam8))
				{
					Function_385(&iParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[bParam19] + 8))
	{
		if (Function_387(256))
		{
			if (Function_322(&iParam0) <= 8.0f)
			{
				Function_273(&bParam4);
				iParam5 = 1;
			}
		}
		else if (!Function_387(256))
		{
			if (&bParam6)
			{
				Function_236();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_388(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_386(256);
				Function_264(&iParam0);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_385(&iParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_385(&iParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&Global_44085[bParam19] + 8, &iParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_387(256))
	{
		Function_384(128);
		Function_384(256);
		if (!Function_383())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8));
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_385(&iParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_385(&iParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_382() //Position: 0x10FD8 / 69592
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

bool Function_383() //Position: 0x11006 / 69638
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

void Function_384(bool bParam0) //Position: 0x1104D / 69709
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

void Function_385(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x110B4 / 69812
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

void Function_386(bool bParam0) //Position: 0x1116F / 69999
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

bool Function_387(bool bParam0) //Position: 0x111D6 / 70102
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

void Function_388(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11220 / 70176
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

void Function_389(bool bParam0) //Position: 0x112B5 / 70325
{
	if (SQUAD_IS_VALID(&iLocal_1042))
	{
		if (bParam0)
		{
			Function_391(&iLocal_1042, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		else
		{
			Function_390(&iLocal_1042);
		}
	}
	return;
}

void Function_390(bool bParam0) //Position: 0x112EE / 70382
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

void Function_391(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x11342 / 70466
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
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_392() //Position: 0x11452 / 70738
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_BanditsFire", "Gun05_BanditsFire", 0, 2, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_393(int iParam0) //Position: 0x1149D / 70813
{
	Function_394(0, &Global_54076, iParam0, 0);
	Function_394(1, &cLocal_1026, iParam0, 0);
	if (IS_ACTOR_ALIVE(&cLocal_1030))
	{
		Function_394(2, &cLocal_1030, iParam0, 0);
	}
	if (IS_ACTOR_ALIVE(&iLocal_1040))
	{
		Function_394(3, &iLocal_1040, iParam0, 0);
	}
	return;
}

void Function_394(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x114E3 / 70883
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_395() //Position: 0x1150B / 70923
{
	iLocal_1383 = 4294967295;
	AUDIO_MUSIC_SET_MOOD("GUN_05_GUNFIGHT", 0, 4294967295, 4294967295);
	Function_408(0);
	Function_407();
	Function_399();
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_398();
	if (IS_ACTOR_ALIVE(&cLocal_1028))
	{
		AI_IGNORE_ACTOR(&cLocal_1028);
	}
	Function_314();
	Function_397();
	Function_248();
	Function_247();
	MEMORY_CONSIDER_AS(&iLocal_1040, &Global_54076, false);
	SET_ACTOR_FACTION(&iLocal_1040, 20);
	if (iLocal_1022 == 0)
	{
		Function_257();
	}
	else
	{
		Function_396();
	}
	Function_338();
	return;
}

void Function_396() //Position: 0x11585 / 71045
{
	var uVar0;
	
	iLocal_1516 = 1;
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_1040, 1);
	GET_OBJECT_POSITION(&iLocal_222 + 2600[2], &Local_1370);
	uVar0 = FIND_NEAREST_COVER_LOCATION(&Local_1370, 5.0f, 360.0f, 360.0f, 7);
	bLocal_1379 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(0, &Local_1370, 4);
	if (IS_COVER_LOCATION_VALID(&uVar0))
	{
		TASK_HIDE_AT_COVER(0, &uVar0, -1.0f, 6f, 1);
	}
	else
	{
		TASK_CROUCH(false, -1.0f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_1040);
	TASK_PRIORITY_SET(&iLocal_1040, true);
	TASK_SEQUENCE_PERFORM(&iLocal_1040, bLocal_1379);
	TASK_SEQUENCE_RELEASE(bLocal_1379, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_1040, &iLocal_222 + 1968[2], 4, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_1040, &iLocal_222 + 1968[3]);
	return;
}

void Function_397() //Position: 0x1162E / 71214
{
	SQUAD_SET_FACTION(&iLocal_1042, 19);
	SQUAD_GOALS_CLEAR(&iLocal_1042);
	bLocal_1379 = false;
	while (bLocal_1379 <= SQUAD_GET_SIZE(&iLocal_1042))
	{
		bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1042, bLocal_1379);
		if (IS_ACTOR_ALIVE(&bLocal_1368))
		{
			MEMORY_ALLOW_SHOOTING(&bLocal_1368, true);
			MEMORY_CONSIDER_AS_ENEMY(&bLocal_1368, &Global_54076);
			TASK_CLEAR(&bLocal_1368);
		}
		bLocal_1379++;
	}
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iLocal_1042, 0, &iLocal_222 + 1968[1], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iLocal_1042, 0, &iLocal_222 + 1968[1], 2, 1);
	return;
}

void Function_398() //Position: 0x116B9 / 71353
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&cLocal_1026, 2);
	CLEAR_ACTOR_MAX_SPEED(&cLocal_1026);
	TASK_CLEAR(&cLocal_1026);
	TASK_PRIORITY_SET(&cLocal_1026, true);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&cLocal_1026, -1.0f);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	SET_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026, &iLocal_222 + 1968[1], 2, true);
	return;
}

void Function_399() //Position: 0x116FE / 71422
{
	iLocal_1083 = 1;
	Function_340(&(Local_1138[215]));
	Function_400(&(Local_1138[515]), &iLocal_1040, "Gun05_hostage", 0, 0x5f5e100, 1);
	return;
}

int Function_400(struct<69> Param0) //Position: 0x11736 / 71478
{
	if (!Function_406(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_405(&Param0, &iParam2))
	{
		return 0;
	}
	Function_404(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_401(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_401(var uParam0, int iParam1, int iParam2) //Position: 0x1177C / 71548
{
	if (iParam1 != 100000000)
	{
		Function_403(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_402(&uParam0, &iParam2);
	}
	return;
}

void Function_402(struct<69> Param0) //Position: 0x117A3 / 71587
{
	Param0.f_68 = 0;
	Function_403(&Param0, 2, &bParam1);
	Function_403(&Param0, 4, &bParam1);
	Function_403(&Param0, 8, &bParam1);
	Function_403(&Param0, 16, &bParam1);
	Function_403(&Param0, 32, &bParam1);
	Function_403(&Param0, 64, &bParam1);
	Function_403(&Param0, 128, &bParam1);
	Function_403(&Param0, 256, &bParam1);
	Function_403(&Param0, 512, &bParam1);
	Function_403(&Param0, 1024, &bParam1);
	return;
}

void Function_403(int iParam0, int iParam1, bool bParam2) //Position: 0x1181E / 71710
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

void Function_404(char* cParam0) //Position: 0x1185D / 71773
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_405(int iParam0, char* cParam1) //Position: 0x1186A / 71786
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

bool Function_406(struct<61> Param0) //Position: 0x118F7 / 71927
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

void Function_407() //Position: 0x11AAA / 72362
{
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1640[02]))
	{
		if (SQUAD_GET(&iLocal_222 + 1640[02]) != &iLocal_1044)
		{
			SQUAD_JOIN(&iLocal_222 + 1640[02], &iLocal_1044);
		}
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1640[12]))
	{
		if (SQUAD_GET(&iLocal_222 + 1640[12]) != &iLocal_1044)
		{
			SQUAD_JOIN(&iLocal_222 + 1640[12], &iLocal_1044);
		}
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1680[02]))
	{
		if (SQUAD_GET(&iLocal_222 + 1680[02]) != &iLocal_1044)
		{
			SQUAD_JOIN(&iLocal_222 + 1680[02], &iLocal_1044);
		}
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1680[12]))
	{
		if (SQUAD_GET(&iLocal_222 + 1680[12]) != &iLocal_1044)
		{
			SQUAD_JOIN(&iLocal_222 + 1680[12], &iLocal_1044);
		}
	}
	return;
}

void Function_408(bool bParam0) //Position: 0x11B78 / 72568
{
	if (IS_ACTOR_ALIVE(&cLocal_1034))
	{
		if (bParam0)
		{
			if (SQUAD_GET(&cLocal_1034) != &iLocal_1042)
			{
				SQUAD_JOIN(&cLocal_1034, &iLocal_1042);
			}
		}
		else
		{
			SQUAD_LEAVE(&cLocal_1034);
		}
	}
	if (IS_ACTOR_ALIVE(&cLocal_1038))
	{
		if (SQUAD_GET(&cLocal_1038) != &iLocal_1042)
		{
			SQUAD_JOIN(&cLocal_1038, &iLocal_1042);
		}
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1576[02]))
	{
		if (SQUAD_GET(&iLocal_222 + 1576[02]) != &iLocal_1042)
		{
			SQUAD_JOIN(&iLocal_222 + 1576[02], &iLocal_1042);
		}
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1600[02]))
	{
		if (SQUAD_GET(&iLocal_222 + 1600[02]) != &iLocal_1042)
		{
			SQUAD_JOIN(&iLocal_222 + 1600[02], &iLocal_1042);
		}
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1600[12]))
	{
		if (SQUAD_GET(&iLocal_222 + 1600[12]) != &iLocal_1042)
		{
			SQUAD_JOIN(&iLocal_222 + 1600[12], &iLocal_1042);
		}
	}
	return;
}

var Function_409() //Position: 0x11C69 / 72809
{
	return Global_53524.f_68;
}

void Function_410(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x11C74 / 72820
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
	if (iParam2 != Global_53524.f_48 && !Function_417())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_416(0);
	Function_415();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_413(iParam2);
	}
	Function_412(uParam3, iVar0, iVar1);
	Function_411();
}

void Function_411() //Position: 0x11D1D / 72989
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

void Function_412(int iParam0, bool bParam1, bool bParam2) //Position: 0x11D5E / 73054
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

void Function_413(bool bParam0) //Position: 0x11EC7 / 73415
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_414() };
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

struct<16> Function_414() //Position: 0x1205F / 73823
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

void Function_415() //Position: 0x120A5 / 73893
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_416(bool bParam0) //Position: 0x120C9 / 73929
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

bool Function_417() //Position: 0x120F8 / 73976
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_418() //Position: 0x12113 / 74003
{
	Function_365(&cLocal_1026, &iLocal_222 + 2464[1], 1, 1, 1);
	Function_335();
	Function_365(&cLocal_1038, &iLocal_222 + 2464[2], 1, 1, 1);
	Function_365(&iLocal_222 + 1576[02], &iLocal_222 + 2464[3], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[02], &iLocal_222 + 2464[4], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[12], &iLocal_222 + 2464[5], 1, 1, 1);
	Function_365(&iLocal_1040, &iLocal_222 + 2464[6], 1, 1, 1);
	return;
}

void Function_419() //Position: 0x1219D / 74141
{
	Function_437(1);
	Function_436();
	Function_434(1);
	Function_432();
	Function_430();
	Function_428();
	Function_427();
	Function_425();
	Function_423();
	Function_420();
	return;
}

void Function_420() //Position: 0x121C3 / 74179
{
	if (!IS_ACTOR_ALIVE(&iLocal_1040))
	{
		Function_421();
		iLocal_1040 = &iLocal_222 + 1504[02];
	}
	return;
}

void Function_421() //Position: 0x121E4 / 74212
{
	*(&iLocal_222 + 1504[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Hostage", 678, Vector(-2686,888f, 31,12157f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1504[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_222 + 1504[02]);
	TASK_STAND_STILL(&iLocal_222 + 1504[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1504[02], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1504[02], true);
	Function_422(&iLocal_222 + 1504[02]);
	AI_IGNORE_ACTOR(&iLocal_222 + 1504[02]);
	AI_DONT_HARM_ACTOR(&iLocal_222 + 1504[02]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_222 + 1504[02], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_222 + 1504[02], 0);
	return;
}

void Function_422(var uParam0) //Position: 0x1229C / 74396
{
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&uParam0, "nocrime", 1);
	}
	return;
}

void Function_423() //Position: 0x122D3 / 74451
{
	if (!IS_ACTOR_ALIVE(&iLocal_222 + 1680[02]) && !IS_ACTOR_ALIVE(&iLocal_222 + 1680[12]))
	{
		Function_424();
	}
	return;
}

void Function_424() //Position: 0x122FA / 74490
{
	*(&iLocal_222 + 1680[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron03", 748, Vector(-2690,888f, 31,12157f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1680[02], false);
	TASK_STAND_STILL(&iLocal_222 + 1680[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_222 + 1680[02], true);
	Function_422(&iLocal_222 + 1680[02]);
	*(&iLocal_222 + 1680[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Whore01", 248, Vector(-2688,888f, 31,12157f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1680[12], false);
	TASK_STAND_STILL(&iLocal_222 + 1680[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_222 + 1680[12], true);
	Function_422(&iLocal_222 + 1680[12]);
	return;
}

void Function_425() //Position: 0x123CA / 74698
{
	if (!IS_ACTOR_ALIVE(&iLocal_222 + 1640[02]) && !IS_ACTOR_ALIVE(&iLocal_222 + 1640[12]))
	{
		Function_426();
	}
	return;
}

void Function_426() //Position: 0x123F1 / 74737
{
	*(&iLocal_222 + 1640[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron01", 750, Vector(-2694,888f, 31,12157f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1640[02], false);
	TASK_STAND_STILL(&iLocal_222 + 1640[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_222 + 1640[02], true);
	Function_422(&iLocal_222 + 1640[02]);
	*(&iLocal_222 + 1640[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron02", 746, Vector(-2692,888f, 31,12157f, 4300.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1640[12], false);
	TASK_STAND_STILL(&iLocal_222 + 1640[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_222 + 1640[12], true);
	Function_422(&iLocal_222 + 1640[12]);
	return;
}

void Function_427() //Position: 0x124C3 / 74947
{
	if (!SQUAD_IS_VALID(&iLocal_1044))
	{
		iLocal_1044 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_222, "PatronSquad"));
	}
	return;
}

void Function_428() //Position: 0x124EF / 74991
{
	if (!IS_ACTOR_ALIVE(&iLocal_222 + 1600[02]) && !IS_ACTOR_ALIVE(&iLocal_222 + 1600[12]))
	{
		Function_429();
	}
	return;
}

void Function_429() //Position: 0x12516 / 75030
{
	*(&iLocal_222 + 1600[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster02", 412, Vector(-2698,888f, 31,12157f, 4299.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1600[02], false);
	TASK_STAND_STILL(&iLocal_222 + 1600[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1600[02], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1600[02], true);
	Function_422(&iLocal_222 + 1600[02]);
	*(&iLocal_222 + 1600[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster03", 409, Vector(-2696,888f, 31,12157f, 4299.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1600[12], false);
	TASK_STAND_STILL(&iLocal_222 + 1600[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1600[12], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1600[12], true);
	Function_422(&iLocal_222 + 1600[12]);
	return;
}

void Function_430() //Position: 0x12608 / 75272
{
	if (!IS_ACTOR_ALIVE(&iLocal_222 + 1576[02]))
	{
		Function_431();
	}
	return;
}

void Function_431() //Position: 0x12621 / 75297
{
	*(&iLocal_222 + 1576[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster01", 410, Vector(-2704,535f, 31,15405f, 4288,001f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1576[02], false);
	TASK_STAND_STILL(&iLocal_222 + 1576[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1576[02], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1576[02], true);
	Function_422(&iLocal_222 + 1576[02]);
	return;
}

void Function_432() //Position: 0x1269D / 75421
{
	if (!IS_ACTOR_ALIVE(&cLocal_1038))
	{
		Function_433();
		cLocal_1038 = &iLocal_222 + 1528[02];
	}
	return;
}

void Function_433() //Position: 0x126BE / 75454
{
	*(&iLocal_222 + 1528[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Manolo", 408, Vector(-2695,888f, 31,12157f, 4298.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1528[02], false);
	TASK_STAND_STILL(&iLocal_222 + 1528[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1528[02], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1528[02], true);
	Function_422(&iLocal_222 + 1528[02]);
	return;
}

void Function_434(bool bParam0) //Position: 0x12736 / 75574
{
	if (!bParam0)
	{
		if (!IS_ACTOR_ALIVE(&cLocal_1034))
		{
			Function_435();
			cLocal_1034 = &iLocal_222 + 1720[02];
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&cLocal_1034);
		}
	}
	else if (!iLocal_1066[4])
	{
		if (IS_ACTOR_ALIVE(&cLocal_1034))
		{
			SQUAD_LEAVE(&cLocal_1034);
			DESTROY_ACTOR(&cLocal_1034);
		}
		if (!IS_OBJECT_VALID(&bLocal_1036))
		{
			GET_OBJECT_POSITION(&iLocal_222 + 2600[7], &Local_1370);
			GET_OBJECT_ORIENTATION(&iLocal_222 + 2600[7], &Local_1376);
			bLocal_1036 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_222, "StrangerCorpse", 9,304622E-43f, Local_1370, Local_1376, "dead_ground_male");
		}
	}
	return;
}

void Function_435() //Position: 0x127EF / 75759
{
	*(&iLocal_222 + 1720[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Stranger", 664, Vector(-2697,888f, 31,12157f, 4298.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1720[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_222 + 1720[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_222 + 1720[02], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_222 + 1720[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1720[02], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1720[02], true);
	Function_422(&iLocal_222 + 1720[02]);
	return;
}

void Function_436() //Position: 0x1288A / 75914
{
	if (!SQUAD_IS_VALID(&iLocal_1042))
	{
		iLocal_1042 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_222, "MullerGangSquad"));
	}
	return;
}

void Function_437(bool bParam0) //Position: 0x128BA / 75962
{
	if (!bParam0)
	{
		if (!IS_ACTOR_ALIVE(&cLocal_1030))
		{
			Function_438();
			cLocal_1030 = &iLocal_222 + 1552[02];
		}
	}
	else if (!iLocal_1066[2])
	{
		Function_340(&(Local_1138[115]));
		if (IS_ACTOR_ALIVE(&cLocal_1030))
		{
			DESTROY_ACTOR(&cLocal_1030);
		}
		if (!IS_OBJECT_VALID(&bLocal_1032))
		{
			GET_OBJECT_POSITION(&iLocal_222 + 2600[3], &Local_1370);
			GET_OBJECT_ORIENTATION(&iLocal_222 + 2600[3], &Local_1376);
			bLocal_1032 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&iLocal_222, "MullerCorpse", 9,276596E-43f, Local_1370, Local_1376, "dead_ground_male");
		}
	}
	return;
}

void Function_438() //Position: 0x1296C / 76140
{
	*(&iLocal_222 + 1552[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Muller", 662, Vector(-2699,888f, 31,12157f, 4298.0f), Vector(0.0f, 0.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_222 + 1552[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_222 + 1552[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_222 + 1552[02], 5, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_222 + 1552[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_222 + 1552[02], 21);
	TASK_PRIORITY_SET(&iLocal_222 + 1552[02], true);
	Function_422(&iLocal_222 + 1552[02]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_222 + 1552[02], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_222 + 1552[02], true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&iLocal_222 + 1552[02], 8, "FASTWALK");
	return;
}

void Function_439() //Position: 0x12A37 / 76343
{
	return;
}

bool Function_440() //Position: 0x12A3D / 76349
{
	if (Function_441() && Function_360(&iLocal_990))
	{
		return 1;
	}
	return 0;
}

int Function_441() //Position: 0x12A53 / 76371
{
	Function_442(&iLocal_222 + 1224, 678, 2, 0);
	Function_442(&iLocal_222 + 1224, 408, 2, 0);
	Function_442(&iLocal_222 + 1224, 662, 2, 0);
	Function_442(&iLocal_222 + 1224, 410, 2, 0);
	Function_442(&iLocal_222 + 1224, 412, 2, 0);
	Function_442(&iLocal_222 + 1224, 409, 2, 0);
	Function_442(&iLocal_222 + 1224, 750, 2, 0);
	Function_442(&iLocal_222 + 1224, 746, 2, 0);
	Function_442(&iLocal_222 + 1224, 748, 2, 0);
	Function_442(&iLocal_222 + 1224, 248, 2, 0);
	Function_442(&iLocal_222 + 1224, 664, 2, 0);
	Function_442(&iLocal_222 + 1224, 255, 2, 0);
	Function_442(&iLocal_222 + 1224, 276, 2, 0);
	Function_442(&iLocal_222 + 1224, 264, 2, 0);
	Function_442(&iLocal_222 + 1224, 290, 2, 0);
	Function_442(&iLocal_222 + 1224, 247, 2, 0);
	Function_442(&iLocal_222 + 1224, 685, 2, 0);
	if (Function_360(&iLocal_222 + 1224))
	{
		return 1;
	}
	return 0;
}

var Function_442(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12B52 / 76626
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_363(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_363(&(Param0[iVar02]), 8);
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

void Function_443() //Position: 0x12C2E / 76846
{
	Function_370(&cLocal_1026);
	Function_370(&cLocal_1028);
	return;
}

void Function_444() //Position: 0x12C42 / 76866
{
	Function_441();
	Function_445();
	return;
}

void Function_445() //Position: 0x12C4F / 76879
{
	Function_177(&iLocal_222 + 944);
	return;
}

void Function_446() //Position: 0x12C5D / 76893
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_AllBanditsDead", "Gun05_AllBanditsDead", 0, 2, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_447() //Position: 0x12CAE / 76974
{
	switch (iLocal_1535)
	{
		case 0x00000000:
			Function_450(&iLocal_1054);
			fLocal_1526 = 3.0f;
			Function_264(&iLocal_1518);
			iLocal_1535 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_449(&iLocal_1042, 1, 1, 0, 0, 0))
			{
				iLocal_1535 = 2;
				return 1;
			}
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				Function_264(&iLocal_1518);
			}
			if (!Function_324(&iLocal_1522))
			{
				Function_264(&iLocal_1522);
			}
			else if (Function_322(&iLocal_1522) < fLocal_1526)
			{
				if (Function_322(&iLocal_1518) < 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&cLocal_1026, "Gun05_JonNoShootBandits", &Global_54076, 0, 0, 0, 1, 3);
				}
				else if (Function_448())
				{
					SAY_SINGLE_LINE_SCRIPTED(&cLocal_1026, "Gun05_RickTauntsBandits", &Global_54076, 0, 0, 0, 1, 3);
				}
				else
				{
					SAY_SINGLE_LINE_SCRIPTED(&cLocal_1026, "Gun05_RickShoutsEncFinal", &Global_54076, 0, 0, 0, 1, 3);
				}
				fLocal_1526 = RAND_FLOAT_RANGE(3.0f, 8.0f);
				Function_264(&iLocal_1522);
			}
			if (!iLocal_1516)
			{
				if (!Function_324(&iLocal_1054))
				{
					Function_264(&iLocal_1054);
				}
				else if (Function_322(&iLocal_1054) <= 10.0f)
				{
					Function_396();
				}
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

bool Function_448() //Position: 0x12E0E / 77326
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_449(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12E21 / 77345
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

void Function_450(vector3 vParam0) //Position: 0x12EE6 / 77542
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_451() //Position: 0x12EFD / 77565
{
	GET_OBJECT_POSITION(&iLocal_222 + 2384[0], &Local_1370);
	if (Function_452(StackVal, "$/cutscene/GUN05_END/GUN05_END", &uLocal_1384, Local_1370, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool Function_452(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x12F56 / 77654
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_455(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_457()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_453();
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
	else if ((!Function_455(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_457()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_455(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_453() //Position: 0x131BE / 78270
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
			Function_454(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_454(char* cParam0) //Position: 0x13212 / 78354
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

bool Function_455(var uParam0, struct<2> Param1, float fParam3) //Position: 0x1333B / 78651
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_456(&uParam0);
		if (VDIST(Function_456(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_456(var uParam0) //Position: 0x133C7 / 78791
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

int Function_457() //Position: 0x13433 / 78899
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_458() //Position: 0x13442 / 78914
{
	if (bLocal_1021 < 5 && bLocal_1021 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_222 + 1904[4]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 1904[4]))
			{
				Function_444();
				iLocal_1385 = 0;
				DESTROY_VOLUME(&iLocal_222 + 1904[4]);
			}
		}
		else if (!iLocal_1385)
		{
			if (Function_440())
			{
				Function_439();
				iLocal_1385 = 1;
			}
		}
		if (!Function_480())
		{
			Function_263(106, "STAGE 05 - COMPLETE");
		}
	}
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (IS_VOLUME_VALID(&iLocal_222 + 1904[3]))
			{
				Function_478();
				DESTROY_VOLUME(&iLocal_222 + 1904[3]);
			}
			Function_477();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_366();
			bLocal_1023 = Global_46866[0];
			if (iLocal_1066[3] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365(&Global_54076, &iLocal_222 + 2384[0], 1, 1, 1);
				Function_263(1, "STAGE 05 - STREAMING GOAL");
			}
			else
			{
				Function_263(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_475() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_474();
				Function_473();
				Function_263(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_471(StackVal, StackVal, StackVal, StackVal, StackVal, Local_952, iLocal_1020))
			{
				Function_470();
				Function_263(3, "STAGE 05 - CUTSCENE GOAL");
			}
			else
			{
				Function_469();
				Function_337();
				Function_263(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			Function_279(iLocal_1020);
			Function_410(StackVal, Function_279(iLocal_1020), iLocal_1020, Global_46746[2], Function_282(iLocal_1020), 0);
			iLocal_1022 = Function_409();
			break;
		
		case 0x00000003:
			if (Function_317("$/cutscene/GUN_05_CS04/GUN_05_CS04", &iLocal_1008, &Local_952, &iLocal_1020, 63309, 80258, 63132, 61638, 61410, 80251, 1, 2, 1, 1, 2, 0, 1))
			{
				Function_463();
				Function_263(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_461();
			Function_263(6, "STAGE 05 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_388("Gun05_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_460(1);
				Function_204();
				Function_263(13, "STAGE 05 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			Function_459();
			iLocal_1020 = 5;
			iLocal_1066[4] = 1;
			Function_263(0, "STAGE 06 - INITIALIZE");
			break;
	}
	return;
}

void Function_459() //Position: 0x13795 / 79765
{
	Function_251();
	Function_460(0);
	return;
}

void Function_460(bool bParam0) //Position: 0x137A2 / 79778
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&cLocal_1034)))
		{
			ADD_BLIP_FOR_ACTOR(&cLocal_1034, 322, 0, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&cLocal_1034), GET_ACTOR_ENUM_STRING(&cLocal_1034));
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&cLocal_1034)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&cLocal_1034));
	}
	return;
}

void Function_461() //Position: 0x137F4 / 79860
{
	iLocal_1383 = 4294967295;
	AUDIO_MUSIC_SET_MOOD("GUN_05_SHOOTOUT", 0, 4294967295, 4294967295);
	Function_462();
	Function_338();
	return;
}

void Function_462() //Position: 0x1381C / 79900
{
	iLocal_1083 = 1;
	Function_340(&(Local_1138[215]));
	Function_400(&(Local_1138[515]), &iLocal_1040, "Gun05_hostage", 0, 0x5f5e100, 1);
	return;
}

void Function_463() //Position: 0x13854 / 79956
{
	_ADD_AMMO_OF_TYPE(&Global_54076, 7, 6.0f, 0, 0);
	Function_466(&cLocal_1026);
	Function_249();
	Function_314();
	Function_465(&iLocal_1042);
	Function_464();
	Function_248();
	Function_247();
	return;
}

void Function_464() //Position: 0x13882 / 80002
{
	bLocal_1379 = false;
	while (bLocal_1379 <= SQUAD_GET_SIZE(&iLocal_1042))
	{
		bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1042, bLocal_1379);
		if (IS_ACTOR_ALIVE(&bLocal_1368))
		{
			FORCE_LOOK_AT_ACTOR(&bLocal_1368, &Global_54076, 3212836864);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_1368, 0);
			TASK_CLEAR(&bLocal_1368);
			TASK_PRIORITY_SET(&bLocal_1368, true);
			TASK_TAUNT_ACTOR_IN_PLACE(&bLocal_1368, &Global_54076, -1f);
		}
		bLocal_1379++;
	}
	return;
}

void Function_465(int iParam0) //Position: 0x138F3 / 80115
{
	if (SQUAD_IS_VALID(&iParam0))
	{
		bLocal_1379 = false;
		while (bLocal_1379 <= SQUAD_GET_SIZE(&iParam0))
		{
			bLocal_1368 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bLocal_1379);
			if (IS_ACTOR_ALIVE(&bLocal_1368))
			{
				Function_466(&bLocal_1368);
			}
			bLocal_1379++;
		}
	}
	return;
}

void Function_466(int iParam0) //Position: 0x1393B / 80187
{
	if (!DECOR_CHECK_EXIST(&iParam0, "ignoreactorinduel"))
	{
		DECOR_SET_BOOL(&iParam0, "ignoreactorinduel", 1);
	}
	return;
}

int Function_467() //Position: 0x1397B / 80251
{
	return 1;
}

int Function_468() //Position: 0x13982 / 80258
{
	return 1;
}

void Function_469() //Position: 0x13989 / 80265
{
	Function_420();
	Function_408(0);
	Function_407();
	Function_466(&cLocal_1026);
	Function_249();
	Function_314();
	Function_465(&iLocal_1042);
	Function_464();
	Function_248();
	Function_247();
	return;
}

void Function_470() //Position: 0x139B6 / 80310
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_420();
	Function_408(0);
	Function_407();
	Function_314();
	return;
}

bool Function_471(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x139D3 / 80339
{
	if (Function_472(&iParam0) == iParam6 || Function_417())
	{
		return 1;
	}
	return 0;
}

int Function_472(int iParam0) //Position: 0x139F2 / 80370
{
	if (Function_327(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_473() //Position: 0x13A0B / 80395
{
	Function_437(1);
	Function_436();
	Function_434(0);
	Function_432();
	Function_430();
	Function_428();
	Function_427();
	Function_425();
	Function_423();
	Function_420();
	return;
}

void Function_474() //Position: 0x13A31 / 80433
{
	Function_420();
	return;
}

bool Function_475() //Position: 0x13A3A / 80442
{
	if (Function_476() && Function_360(&iLocal_990))
	{
		return 1;
	}
	return 0;
}

int Function_476() //Position: 0x13A50 / 80464
{
	Function_442(&iLocal_222 + 944, 678, 2, 0);
	Function_442(&iLocal_222 + 944, 408, 2, 0);
	Function_442(&iLocal_222 + 944, 662, 2, 0);
	Function_442(&iLocal_222 + 944, 410, 2, 0);
	Function_442(&iLocal_222 + 944, 412, 2, 0);
	Function_442(&iLocal_222 + 944, 409, 2, 0);
	Function_442(&iLocal_222 + 944, 750, 2, 0);
	Function_442(&iLocal_222 + 944, 746, 2, 0);
	Function_442(&iLocal_222 + 944, 748, 2, 0);
	Function_442(&iLocal_222 + 944, 248, 2, 0);
	Function_442(&iLocal_222 + 944, 664, 2, 0);
	Function_442(&iLocal_222 + 944, 255, 2, 0);
	Function_442(&iLocal_222 + 944, 276, 2, 0);
	Function_442(&iLocal_222 + 944, 264, 2, 0);
	Function_442(&iLocal_222 + 944, 290, 2, 0);
	Function_442(&iLocal_222 + 944, 247, 2, 0);
	Function_442(&iLocal_222 + 944, 685, 2, 0);
	if (Function_360(&iLocal_222 + 944))
	{
		return 1;
	}
	return 0;
}

void Function_477() //Position: 0x13B4F / 80719
{
	Function_370(&cLocal_1026);
	Function_370(&cLocal_1028);
	return;
}

void Function_478() //Position: 0x13B63 / 80739
{
	Function_476();
	Function_479();
	return;
}

void Function_479() //Position: 0x13B70 / 80752
{
	Function_177(&iLocal_222 + 680);
	return;
}

bool Function_480() //Position: 0x13B7E / 80766
{
	switch (iLocal_1534)
	{
		case 0x00000000:
			iLocal_1534 = 1;
			iLocal_1468 = 99;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_481())
			{
				iLocal_1534 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

bool Function_481() //Position: 0x13BC2 / 80834
{
	bLocal_1506 = false;
	bLocal_1507 = false;
	switch (iLocal_1468)
	{
		case 0x00000063:
			iLocal_1501 = 0;
			bLocal_1502 = false;
			iLocal_1503 = 0;
			if (iLocal_1020 == 2)
			{
				AUDIO_ALLOW_PREDUEL_SPEECH(&cLocal_1030);
				AUDIO_ALLOW_PREDUEL_SPEECH(&cLocal_1026);
				GET_OBJECT_POSITION(&iLocal_222 + 2272[0], &Local_1370);
				GET_OBJECT_POSITION(&iLocal_222 + 2272[2], &Local_1373);
				Function_488(StackVal, StackVal, &cLocal_1030, Local_1370, Local_1373, &iLocal_222 + 1968[4], 50, 0, 0, 1);
			}
			else
			{
				AUDIO_ALLOW_PREDUEL_SPEECH(&iLocal_1040);
				AUDIO_ALLOW_PREDUEL_SPEECH(&cLocal_1026);
				GET_OBJECT_POSITION(&iLocal_222 + 2384[0], &Local_1370);
				GET_OBJECT_POSITION(&iLocal_222 + 2384[2], &Local_1373);
				Function_488(StackVal, StackVal, &cLocal_1034, Local_1370, Local_1373, &iLocal_222 + 1968[5], 10, 1, &iLocal_1040, 0);
			}
			uLocal_1504 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_1469, 32, 0);
			iLocal_1468 = 0;
			break;
		
		case 0x00000000:
			if (!IS_SCRIPT_VALID(&uLocal_1504))
			{
				iLocal_1468 = 101;
				return 1;
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bIsDuelOver"))
			{
				DECOR_REMOVE(&Global_54076, "bIsDuelOver");
				if (iLocal_1020 == 4)
				{
					MEMORY_CONSIDER_AS(&iLocal_1040, &Global_54076, false);
					SET_ACTOR_FACTION(&iLocal_1040, 20);
					if (IS_ACTOR_ALIVE(&Local_1469 + 8))
					{
						Function_267(0);
						iLocal_1468 = 101;
						return 1;
					}
				}
				Function_267(0);
				iLocal_1468 = 101;
				return 1;
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bIsDuelActive"))
			{
				Function_267(1);
				DECOR_REMOVE(&Global_54076, "bIsDuelActive");
			}
			Function_482();
			break;
		
		case 0x00000065:
			bLocal_1379 = 4294967295;
			if (DECOR_CHECK_EXIST(&Global_54076, "iDuelResult"))
			{
				bLocal_1379 = DECOR_GET_INT(&Global_54076, "iDuelResult");
				DECOR_REMOVE(&Global_54076, "iDuelResult");
			}
			switch (bLocal_1379)
			{
				case 0x00001389:
					if (IS_ACTOR_ALIVE(&Local_1469 + 8))
					{
						KILL_ACTOR(&Local_1469 + 8);
					}
					bLocal_1506 = true;
					break;
				
				case 0x0000138A:
					bLocal_1506 = true;
					if (IS_ACTOR_ALIVE(&Local_1469 + 8))
					{
						KILL_ACTOR(&Local_1469 + 8);
					}
					break;
				
				case 0x0000138B:
					bLocal_1507 = true;
					Function_273("Gun05_lost_duel");
					break;
				
				case 0x0000138C:
					bLocal_1507 = true;
					if (!IS_ACTOR_ALIVE(&iLocal_1040))
					{
						if (GET_LAST_ATTACKER(&iLocal_1040) == &Global_54076)
						{
							Function_273("Gun05_Hostage_killed");
						}
						else
						{
							Function_273("Gun05_Hostage_dead");
						}
					}
					else
					{
						Function_273("Gun05_Hostage_attacked");
					}
					break;
				
				case 0x0000138D:
					bLocal_1507 = true;
					Function_273("Gun05_lost_duel");
					break;
				
				default:
					bLocal_1506 = true;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (bLocal_1506)
	{
		return 0;
	}
	if (bLocal_1507)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
		bLocal_1081 = true;
		return 0;
	}
	return 1;
}

int Function_482() //Position: 0x13F17 / 81687
{
	if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_FADING()) && !HUD_IS_FADED())
	{
		if (iLocal_1020 == 2)
		{
			if (!iLocal_1501)
			{
				Function_487();
				iLocal_1501 = 1;
				return 1;
			}
			if (!bLocal_1502)
			{
				Function_486();
				bLocal_1502 = true;
				Function_450(&iLocal_1062);
				return 1;
			}
			if (!iLocal_1503)
			{
				if (!IS_ACTOR_ALIVE(&cLocal_1030))
				{
					if (!Function_324(&iLocal_1062))
					{
						Function_264(&iLocal_1062);
					}
					else if (Function_322(&iLocal_1062) <= 1.0f)
					{
						Function_485();
						iLocal_1503 = 1;
						Function_450(&iLocal_1062);
						return 1;
					}
				}
			}
		}
		if (!iLocal_1501)
		{
			Function_484();
			iLocal_1501 = 1;
			Function_265(&iLocal_1062, 5.0f);
			return 1;
		}
		if (!bLocal_1502)
		{
			if (!Function_324(&iLocal_1062))
			{
				Function_264(&iLocal_1062);
			}
			else if (Function_322(&iLocal_1062) <= 5.0f)
			{
				Function_483();
				Function_450(&iLocal_1062);
				return 1;
			}
		}
	}
	return 0;
}

void Function_483() //Position: 0x13FEE / 81902
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Gun05_GirlTakenHostage", "Gun05_GirlTakenHostage", 0, 1, 1, 0, 1);
		Function_393(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_484() //Position: 0x14045 / 81989
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_DontKillHostage", "Gun05_DontKillHostage", 0, 2, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_485() //Position: 0x14098 / 82072
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_JonWinsDuel", "Gun05_JonWinsDuel", 0, 1, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x140E3 / 82147
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_RickMullerDuel", "Gun05_RickMullerDuel", 0, 1, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_487() //Position: 0x14134 / 82228
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_ShoutsDuelBegin", "Gun05_ShoutsDuelBegin", 0, 2, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_488(var uParam0, struct<2> Param1, struct<2> Param3, var uParam5, int iParam6, int iParam7, var uParam8, int iParam9) //Position: 0x14187 / 82311
{
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
	AI_IGNORE_ACTOR(&uParam0);
	SET_ACTOR_FACTION(&uParam0, 19);
	Local_1469 = &Global_54076;
	*(&Local_1469 + 8) = &uParam0;
	*(&Local_1469 + 16) = Param1;
	*(&Local_1469 + 28) = Param3;
	*(&Local_1469 + 40) = &uParam5;
	Local_1469.f_68 = iParam6;
	Local_1469.f_52 = iParam7;
	*(&Local_1469 + 56) = &uParam8;
	Local_1469.f_48 = iParam9;
	Local_1469.f_64 = 1;
	Local_1469.f_84 = 4294967295;
}

void Function_489() //Position: 0x14205 / 82437
{
	if (bLocal_1021 < 5 && bLocal_1021 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_222 + 1904[3]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 1904[3]))
			{
				Function_478();
				iLocal_1385 = 0;
				DESTROY_VOLUME(&iLocal_222 + 1904[3]);
			}
		}
		else if (!iLocal_1385)
		{
			if (Function_475())
			{
				Function_474();
				iLocal_1385 = 1;
			}
		}
		else
		{
			Function_505();
		}
	}
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (IS_VOLUME_VALID(&iLocal_222 + 1904[2]))
			{
				Function_503();
				DESTROY_VOLUME(&iLocal_222 + 1904[2]);
			}
			Function_502();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_366();
			bLocal_1023 = Global_46866[0];
			if (iLocal_1066[2] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365(&Global_54076, &iLocal_222 + 2352[0], 1, 1, 1);
				Function_263(1, "STAGE 04 - STREAMING GOAL");
			}
			else
			{
				Function_263(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_500() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_499();
				Function_498();
				Function_497();
				Function_263(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_279(iLocal_1020);
			Function_410(StackVal, Function_279(iLocal_1020), iLocal_1020, Global_46746[2], Function_282(iLocal_1020), 0);
			iLocal_1022 = Function_409();
			Function_316(1.0f);
			Function_495();
			Function_263(6, "STAGE 04 - GOAL 01");
			break;
		
		case 0x00000006:
			Function_494();
			Function_351(1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x3f800000, 0);
			Function_493(&uLocal_950, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			GET_OBJECT_POSITION(&iLocal_222 + 2600[3], &Local_1370);
			iLocal_1364 = LOCATE_GRINGO_OF_TYPE("loot_corpse", &Local_1370, 10.0f, 0);
			if (IS_GRINGO_VALID(&iLocal_1364))
			{
				uLocal_1358 = GET_OBJECT_FROM_GRINGO(&iLocal_1364);
				if (IS_OBJECT_VALID(&uLocal_1358))
				{
					GET_OBJECT_POSITION(&uLocal_1358, &Local_1370);
				}
			}
			if (!IS_OBJECT_VALID(&uLocal_1358))
			{
				uLocal_1358 = &iLocal_222 + 2600[3];
			}
			GET_OBJECT_POSITION(&iLocal_222 + 2600[1], &Local_1373);
			Local_1373 = Vector(StackVal, StackVal, StackVal) - Vector(Local_1370, Local_1373, StackVal);
			VNORMALIZE(&Local_1373);
			Local_1376 = Local_1373;
			VSCALE(&Local_1373, 4.0f);
			VSCALE(&Local_1376, 2.0f);
			Local_1373 = Vector(StackVal, StackVal, StackVal) + Vector(Local_1373, Local_1370, StackVal);
			Local_1376 = Vector(StackVal, StackVal, StackVal) + Vector(Local_1376, Local_1370, StackVal);
			Local_1373.f_4 = (StackVal + 1.0f);
			Local_1376.f_4 = (StackVal + 1.0f);
			Function_491(StackVal, StackVal, StackVal, &uLocal_1358, Local_1373, Local_1376, Vector(0.0f, 0,5f, 0.0f), 32.0f, 0);
			Function_263(105, "STAGE 04 - FADE OUT");
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_322(&iLocal_1046) <= 4.0f)
			{
				Function_268(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_267(0);
				Function_263(106, "STAGE 06 - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_490();
				iLocal_1020 = 4;
				iLocal_1066[3] = 1;
				Function_263(0, "STAGE 05 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_490() //Position: 0x1459A / 83354
{
	Function_332(2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	Function_227(1, 1);
	Function_252();
	Function_217(0);
	return;
}

void Function_491(var uParam0, struct<2> Param1, struct<2> Param3, struct<2> Param5, float fParam7, var uParam8) //Position: 0x145BA / 83386
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_492(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	Function_492(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (fParam7 >= 0.0f)
	{
		fParam7 = 9999.0f;
	}
	GET_OBJECT_RELATIVE_POSITION(&uParam0, Param5, &Var0);
	Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Var0, StackVal);
	VNORMALIZE(&Var2);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param1);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Var2, 1);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param3);
	SET_CAMERASHOT_TARGET_OBJECT(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param5, Vector(0.0f, 0.0f, 0.0f), 0);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(StackVal, &Global_99148, 0, 1,401298E-45f, fParam7, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 1);
	Global_99148.f_12 = 1;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam8))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam8, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
}

void Function_492(float fParam0) //Position: 0x1471F / 83743
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_493(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x14732 / 83762
{
	Function_227(0, 1);
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

void Function_494() //Position: 0x1483B / 84027
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_Follow2Cantina", "Gun05_Follow2Cantina", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x1488C / 84108
{
	Function_239(&iLocal_1383, 3, 0, 4294967295, 4294967295);
	Function_408(1);
	Function_407();
	GET_OBJECT_POSITION(&iLocal_222 + 2600[3], &Local_1370);
	CLEAR_AREA_OF_GRASS(Local_1370, 5.0f);
	Function_496();
	Function_249();
	Function_314();
	Function_258();
	Function_248();
	Function_247();
	Function_338();
	return;
}

void Function_496() //Position: 0x148D2 / 84178
{
	iLocal_1083 = 0;
	Function_340(&(Local_1138[215]));
	return;
}

void Function_497() //Position: 0x148E5 / 84197
{
	Function_365(&cLocal_1026, &iLocal_222 + 2352[1], 1, 1, 1);
	Function_335();
	Function_365(&cLocal_1034, &iLocal_222 + 2272[3], 1, 1, 1);
	Function_365(&cLocal_1038, &iLocal_222 + 2272[4], 1, 1, 1);
	Function_365(&iLocal_222 + 1576[02], &iLocal_222 + 2272[5], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[02], &iLocal_222 + 2272[6], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[12], &iLocal_222 + 2272[7], 1, 1, 1);
	return;
}

void Function_498() //Position: 0x1496F / 84335
{
	Function_437(1);
	Function_436();
	Function_434(0);
	Function_432();
	Function_430();
	Function_428();
	Function_427();
	Function_425();
	Function_423();
	return;
}

void Function_499() //Position: 0x14992 / 84370
{
	return;
}

bool Function_500() //Position: 0x14998 / 84376
{
	if (Function_501() && Function_360(&iLocal_990))
	{
		return 1;
	}
	return 0;
}

int Function_501() //Position: 0x149AE / 84398
{
	Function_442(&iLocal_222 + 680, 408, 2, 0);
	Function_442(&iLocal_222 + 680, 662, 2, 0);
	Function_442(&iLocal_222 + 680, 410, 2, 0);
	Function_442(&iLocal_222 + 680, 412, 2, 0);
	Function_442(&iLocal_222 + 680, 409, 2, 0);
	Function_442(&iLocal_222 + 680, 750, 2, 0);
	Function_442(&iLocal_222 + 680, 746, 2, 0);
	Function_442(&iLocal_222 + 680, 748, 2, 0);
	Function_442(&iLocal_222 + 680, 248, 2, 0);
	Function_442(&iLocal_222 + 680, 664, 2, 0);
	Function_442(&iLocal_222 + 680, 255, 2, 0);
	Function_442(&iLocal_222 + 680, 276, 2, 0);
	Function_442(&iLocal_222 + 680, 264, 2, 0);
	Function_442(&iLocal_222 + 680, 290, 2, 0);
	Function_442(&iLocal_222 + 680, 247, 2, 0);
	Function_442(&iLocal_222 + 680, 685, 2, 0);
	if (Function_360(&iLocal_222 + 680))
	{
		return 1;
	}
	return 0;
}

void Function_502() //Position: 0x14A9F / 84639
{
	Function_370(&cLocal_1026);
	Function_370(&cLocal_1028);
	return;
}

void Function_503() //Position: 0x14AB3 / 84659
{
	Function_501();
	Function_504();
	return;
}

void Function_504() //Position: 0x14AC0 / 84672
{
	Function_177(&iLocal_222 + 416);
	return;
}

int Function_505() //Position: 0x14ACE / 84686
{
	GET_OBJECT_POSITION(&iLocal_222 + 2384[0], &Local_1370);
	if (Function_452(StackVal, "$/cutscene/GUN_05_CS04/GUN_05_CS04", &uLocal_1384, Local_1370, 0, 4000.0f, 10000.0f, 2, 1, 1, 2, 1, 1))
	{
		return 1;
	}
	return 0;
}

void Function_506() //Position: 0x14B2B / 84779
{
	if (bLocal_1021 < 5 && bLocal_1021 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_222 + 1904[2]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 1904[2]))
			{
				Function_503();
				iLocal_1385 = 0;
				DESTROY_VOLUME(&iLocal_222 + 1904[2]);
			}
		}
		else if (!iLocal_1385)
		{
			if (Function_500())
			{
				Function_499();
				iLocal_1385 = 1;
			}
		}
		if (!Function_519())
		{
			Function_263(106, "STAGE 03 - COMPLETE");
		}
	}
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (IS_VOLUME_VALID(&iLocal_222 + 1904[1]))
			{
				Function_517();
				DESTROY_VOLUME(&iLocal_222 + 1904[1]);
			}
			Function_516();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_366();
			bLocal_1023 = Global_46866[0];
			if (iLocal_1066[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_365(&Global_54076, &iLocal_222 + 2272[0], 1, 1, 1);
				Function_263(1, "STAGE 03 - STREAMING GOAL");
			}
			else
			{
				Function_263(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_514() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_513();
				Function_512();
				Function_511();
				Function_263(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_279(iLocal_1020);
			Function_410(StackVal, Function_279(iLocal_1020), iLocal_1020, Global_46746[2], Function_282(iLocal_1020), 0);
			iLocal_1022 = Function_409();
			Function_509();
			Function_263(6, "STAGE 03 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_388("Gun05_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_508(1);
				Function_204();
				Function_263(13, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_507();
				Function_267(0);
				iLocal_1020 = 3;
				iLocal_1066[2] = 1;
				Function_263(0, "STAGE 04 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_507() //Position: 0x14DA3 / 85411
{
	Function_253();
	Function_508(0);
	return;
}

void Function_508(bool bParam0) //Position: 0x14DB0 / 85424
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&cLocal_1030)))
		{
			ADD_BLIP_FOR_ACTOR(&cLocal_1030, 322, 0, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&cLocal_1030), GET_ACTOR_ENUM_STRING(&cLocal_1030));
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&cLocal_1030)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&cLocal_1030));
	}
	return;
}

void Function_509() //Position: 0x14E02 / 85506
{
	iLocal_1383 = 4294967295;
	AUDIO_MUSIC_SET_MOOD("GUN_05_SHOOTOUT", 0, 4294967295, 4294967295);
	Function_408(1);
	Function_407();
	GET_OBJECT_POSITION(&iLocal_222 + 2600[3], &Local_1370);
	CLEAR_AREA_OF_GRASS(Local_1370, 5.0f);
	Function_510();
	_ADD_AMMO_OF_TYPE(&Global_54076, 7, 6.0f, 0, 0);
	Function_466(&cLocal_1026);
	Function_249();
	Function_314();
	Function_262();
	Function_258();
	Function_465(&iLocal_1042);
	Function_464();
	Function_248();
	Function_247();
	Function_338();
	return;
}

void Function_510() //Position: 0x14E79 / 85625
{
	iLocal_1083 = 1;
	Function_340(&(Local_1138[115]));
	Function_400(&(Local_1138[215]), &iLocal_1042, "Gun05_mullergang", 0, 0x5f5e100, 1);
	return;
}

void Function_511() //Position: 0x14EB4 / 85684
{
	Function_365(&cLocal_1026, &iLocal_222 + 2272[1], 1, 1, 1);
	Function_335();
	Function_365(&cLocal_1030, &iLocal_222 + 2272[2], 1, 1, 1);
	Function_365(&cLocal_1034, &iLocal_222 + 2272[3], 1, 1, 1);
	Function_365(&cLocal_1038, &iLocal_222 + 2272[4], 1, 1, 1);
	Function_365(&iLocal_222 + 1576[02], &iLocal_222 + 2272[5], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[02], &iLocal_222 + 2272[6], 1, 1, 1);
	Function_365(&iLocal_222 + 1600[12], &iLocal_222 + 2272[7], 1, 1, 1);
	return;
}

void Function_512() //Position: 0x14F51 / 85841
{
	Function_437(0);
	Function_436();
	Function_434(0);
	Function_432();
	Function_430();
	Function_428();
	Function_427();
	Function_425();
	Function_423();
	return;
}

void Function_513() //Position: 0x14F74 / 85876
{
	return;
}

bool Function_514() //Position: 0x14F7A / 85882
{
	if (Function_515() && Function_360(&iLocal_980))
	{
		return 1;
	}
	return 0;
}

int Function_515() //Position: 0x14F90 / 85904
{
	Function_442(&iLocal_222 + 416, 408, 2, 0);
	Function_442(&iLocal_222 + 416, 662, 2, 0);
	Function_442(&iLocal_222 + 416, 410, 2, 0);
	Function_442(&iLocal_222 + 416, 412, 2, 0);
	Function_442(&iLocal_222 + 416, 409, 2, 0);
	Function_442(&iLocal_222 + 416, 750, 2, 0);
	Function_442(&iLocal_222 + 416, 746, 2, 0);
	Function_442(&iLocal_222 + 416, 748, 2, 0);
	Function_442(&iLocal_222 + 416, 248, 2, 0);
	Function_442(&iLocal_222 + 416, 664, 2, 0);
	Function_442(&iLocal_222 + 416, 255, 2, 0);
	Function_442(&iLocal_222 + 416, 276, 2, 0);
	Function_442(&iLocal_222 + 416, 264, 2, 0);
	Function_442(&iLocal_222 + 416, 290, 2, 0);
	Function_442(&iLocal_222 + 416, 247, 2, 0);
	Function_442(&iLocal_222 + 416, 685, 2, 0);
	if (Function_360(&iLocal_222 + 416))
	{
		return 1;
	}
	return 0;
}

void Function_516() //Position: 0x15081 / 86145
{
	Function_370(&cLocal_1026);
	Function_370(&cLocal_1028);
	return;
}

void Function_517() //Position: 0x15095 / 86165
{
	Function_515();
	Function_518();
	return;
}

void Function_518() //Position: 0x150A2 / 86178
{
	Function_177(&iLocal_222 + 152);
	return;
}

bool Function_519() //Position: 0x150AF / 86191
{
	switch (iLocal_1532)
	{
		case 0x00000000:
			iLocal_1532 = 1;
			iLocal_1468 = 99;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_481())
			{
				iLocal_1532 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

void Function_520() //Position: 0x150F3 / 86259
{
	if (bLocal_1021 < 5 && bLocal_1021 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_222 + 1904[1]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 1904[1]))
			{
				Function_517();
				iLocal_1385 = 0;
				DESTROY_VOLUME(&iLocal_222 + 1904[1]);
			}
		}
		else if (!iLocal_1385)
		{
			if (Function_514())
			{
				Function_513();
				iLocal_1385 = 1;
			}
		}
		if (!Function_547())
		{
			Function_263(106, "STAGE 02 - COMPLETE");
		}
	}
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (IS_VOLUME_VALID(&iLocal_222 + 1904[0]))
			{
				Function_545();
				DESTROY_VOLUME(&iLocal_222 + 1904[0]);
			}
			Function_477();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_366();
			bLocal_1023 = Global_46866[0];
			Function_237();
			if (iLocal_1066[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_268(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_187(1, 0, 1);
				Function_365(&Global_54076, &iLocal_222 + 2176[0], 1, 1, 1);
				Function_263(1, "STAGE 02 - STREAMING GOAL");
			}
			else
			{
				Function_263(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_543() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_542();
				Function_541();
				Function_263(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_471(StackVal, StackVal, StackVal, StackVal, StackVal, Local_952, iLocal_1020))
			{
				Function_540();
				Function_263(3, "STAGE 02 - CUTSCENE GOAL");
			}
			else
			{
				Function_539();
				Function_341();
				Function_263(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			Function_279(iLocal_1020);
			Function_410(StackVal, Function_279(iLocal_1020), iLocal_1020, Global_46746[2], Function_282(iLocal_1020), 0);
			iLocal_1022 = Function_409();
			break;
		
		case 0x00000003:
			if (Function_317("$/cutscene/GUN_05_B/GUN_05_B", &iLocal_1008, &Local_952, &iLocal_1020, 63309, 63139, 63132, 61638, 61410, 80251, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_538();
				Function_263(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_316(1.0f);
			Function_536();
			Function_267(1);
			Function_263(6, "STAGE 02 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_236();
				Function_535();
				Function_204();
				Function_263(7, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_388("Gun05_obj02_1", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_217(1);
				Function_263(8, "STAGE 02 - OBJ_01-DLG_02");
			}
			break;
		
		case 0x00000008:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_534();
				Function_263(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (!Function_533())
			{
				Function_528();
			}
			if (Function_526(&iLocal_1050, 60.0f, 200.0f, &cLocal_1026, "Gunslinger_return", "Gunslinger_abandoned", &bLocal_1081, 1, 0, 0, 325, 1))
			{
				Function_217(1);
				Function_263(14, "STAGE 02 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_526(&iLocal_1050, 60.0f, 200.0f, &cLocal_1026, "Gunslinger_return", "Gunslinger_abandoned", &bLocal_1081, 1, 0, 0, 325, 1))
			{
				Function_217(1);
				Function_263(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_236();
				Function_525();
				Function_217(0);
				Function_523(0, &Global_54076, 2,5f, 1);
				Function_204();
				Function_263(16, "STAGE 02 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_388("Gun05_obj02_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_263(23, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (!Function_533())
			{
				Function_528();
			}
			if (Function_522(&iLocal_1050, &iLocal_222 + 2056[0], &iLocal_222 + 2056[1], "Gun05_obj_return_duel", "Gun05_too_far_duel", &bLocal_1081, 1, 0, 0, 330, 1))
			{
				Function_222();
				Function_380(1);
				Function_263(24, "STAGE 02 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_522(&iLocal_1050, &iLocal_222 + 2056[0], &iLocal_222 + 2056[1], "Gun05_obj_return_duel", "Gun05_too_far_duel", &bLocal_1081, 1, 0, 0, 330, 1))
			{
				Function_221();
				Function_523(0, &Global_54076, 2,5f, 1);
				Function_263(23, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_521();
				Function_267(0);
				iLocal_1020 = 2;
				iLocal_1066[1] = 1;
				Function_263(0, "STAGE 03 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_521() //Position: 0x1578E / 87950
{
	Function_254();
	Function_222();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&cLocal_1026);
	return;
}

bool Function_522(struct<2> Param0, int iParam2, var uParam3, char* cParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x157A1 / 87969
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
	{
		Function_273(&cParam4);
		iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_387(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_388(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_386(64);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_385(&iParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_385(&iParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &iParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_387(64))
	{
		Function_384(64);
		if (!Function_383())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_385(&iParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_385(&iParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_523(int iParam0, var uParam1, float fParam2, int iParam3) //Position: 0x1593C / 88380
{
	Function_222();
	GET_OBJECT_POSITION(&iLocal_222 + 2680[iParam0], &Local_1370);
	GET_OBJECT_ORIENTATION(&iLocal_222 + 2680[iParam0], &Local_1376);
	uLocal_1362 = Function_524(StackVal, StackVal, &uLocal_950, "GatewayDest", Local_1370, Local_1376, &uParam1, &fParam2, 1, 3, 330, &iParam3, 1, 3212836864, 3212836864, 1);
	if (!IS_OBJECT_VALID(&uLocal_1362))
	{
		LOG_ERROR("Failed to create destination gateway!");
	}
}

var Function_524(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x159DC / 88540
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &uParam11, 0, &uParam12, &bParam15);
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

void Function_525() //Position: 0x15AC7 / 88775
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerWaitsDuel", "Gun05_MullerWaitsDuel", 0, 1, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_526(struct<2> Param0, int iParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x15B1A / 88858
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_527(&Global_54076, &iParam3, iParam2))
	{
		Function_273(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_527(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_387(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_388(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_386(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_385(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_385(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_387(2))
	{
		Function_384(2);
		if (!Function_383())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_213(&iParam3);
				Function_219(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_385(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_385(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_527(var uParam0, var uParam1, bool bParam2) //Position: 0x15CD8 / 89304
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

int Function_528() //Position: 0x15DED / 89581
{
	if (Function_532(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		bLocal_1368 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
		if (IS_ACTOR_ALIVE(&bLocal_1368))
		{
			if (!IS_ACTOR_ANIMAL(&bLocal_1368))
			{
				if (!Function_324(&iLocal_1058))
				{
					Function_264(&iLocal_1058);
				}
				else if (&iLocal_1387 != &bLocal_1368)
				{
					Function_264(&iLocal_1058);
				}
				else if (Function_322(&iLocal_1058) <= 1.0f)
				{
					if (&iLocal_1387 == &cLocal_1026)
					{
						if (MEMORY_GET_IS_VISIBLE(&cLocal_1026, &Global_54076))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_531();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&cLocal_1026, "Gun05_TargetsRicks", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							bLocal_1386 = true;
						}
					}
					else if (&iLocal_1387 == &cLocal_1030)
					{
						if (MEMORY_GET_IS_VISIBLE(&cLocal_1026, &cLocal_1030))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_530();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&cLocal_1030, "Gun05_GunOnMuller", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							bLocal_1386 = true;
						}
					}
					else if (MEMORY_GET_IS_VISIBLE(&cLocal_1026, &iLocal_1387))
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_529();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&cLocal_1026, "Gun05_GunOnAmbPoker", "", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
						}
						bLocal_1386 = true;
					}
					if (bLocal_1386)
					{
						Function_450(&iLocal_1058);
						return 1;
					}
				}
				iLocal_1387 = &bLocal_1368;
				return 0;
			}
		}
	}
	iLocal_1387 = "";
	Function_450(&iLocal_1058);
	return 0;
}

void Function_529() //Position: 0x15F75 / 89973
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_GunOnAmbPoker", "Gun05_GunOnAmbPoker", 0, 1, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_530() //Position: 0x15FC4 / 90052
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_GunOnMuller", "Gun05_GunOnMuller", 0, 1, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_531() //Position: 0x1600F / 90127
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_TargetsRicks", "Gun05_TargetsRicks", 0, 1, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_532(bool bParam0) //Position: 0x1605C / 90204
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

bool Function_533() //Position: 0x160A2 / 90274
{
	if (bLocal_1386)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(&cLocal_1026))
		{
			bLocal_1386 = false;
		}
		return 1;
	}
	return 0;
}

void Function_534() //Position: 0x160C5 / 90309
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_DuelTutorialBant_v1_AA", "Gun05_DuelTutorialBant_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun05_DuelTutorialBant_v1_AB", "Gun05_DuelTutorialBant_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun05_DuelTutorialBant_v1_AC", "Gun05_DuelTutorialBant_v1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun05_DuelTutorialBant_v1_AD", "Gun05_DuelTutorialBant_v1_AD", 0, 1, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535() //Position: 0x161FB / 90619
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_WalkWitRick", "Gun05_WalkWitRick", 0, 1, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x16246 / 90694
{
	Function_239(&iLocal_1383, 3, 0, 4294967295, 4294967295);
	Function_537();
	GET_OBJECT_POSITION(&iLocal_222 + 2600[3], &Local_1370);
	CLEAR_AREA_OF_GRASS(Local_1370, 5.0f);
	Function_338();
	return;
}

void Function_537() //Position: 0x16276 / 90742
{
	iLocal_1083 = 0;
	Function_400(&(Local_1138[115]), &cLocal_1030, "Gun05_muller", 0, 0x5f5e100, 1);
	Function_400(&(Local_1138[215]), &iLocal_1042, "Gun05_mullergang", 0, 0x5f5e100, 1);
	return;
}

void Function_538() //Position: 0x162CC / 90828
{
	Function_216(0);
	Function_314();
	return;
}

void Function_539() //Position: 0x162D9 / 90841
{
	Function_237();
	Function_436();
	Function_408(1);
	Function_427();
	Function_407();
	return;
}

void Function_540() //Position: 0x162EF / 90863
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_436();
	Function_408(1);
	Function_427();
	Function_407();
	Function_314();
	return;
}

void Function_541() //Position: 0x1630F / 90895
{
	Function_437(0);
	Function_434(0);
	Function_432();
	Function_430();
	Function_428();
	Function_425();
	Function_423();
	return;
}

void Function_542() //Position: 0x1632C / 90924
{
	Function_428();
	Function_423();
	return;
}

bool Function_543() //Position: 0x16338 / 90936
{
	if ((Function_544() && Function_360(&iLocal_970)) && Function_360(&iLocal_980))
	{
		return 1;
	}
	return 0;
}

int Function_544() //Position: 0x16355 / 90965
{
	Function_442(&iLocal_222 + 152, 408, 2, 0);
	Function_442(&iLocal_222 + 152, 662, 2, 0);
	Function_442(&iLocal_222 + 152, 410, 2, 0);
	Function_442(&iLocal_222 + 152, 412, 2, 0);
	Function_442(&iLocal_222 + 152, 409, 2, 0);
	Function_442(&iLocal_222 + 152, 750, 2, 0);
	Function_442(&iLocal_222 + 152, 746, 2, 0);
	Function_442(&iLocal_222 + 152, 748, 2, 0);
	Function_442(&iLocal_222 + 152, 248, 2, 0);
	Function_442(&iLocal_222 + 152, 664, 2, 0);
	Function_442(&iLocal_222 + 152, 255, 2, 0);
	Function_442(&iLocal_222 + 152, 276, 2, 0);
	Function_442(&iLocal_222 + 152, 264, 2, 0);
	Function_442(&iLocal_222 + 152, 290, 2, 0);
	Function_442(&iLocal_222 + 152, 247, 2, 0);
	Function_442(&iLocal_222 + 152, 685, 2, 0);
	if (Function_360(&iLocal_222 + 152))
	{
		return 1;
	}
	return 0;
}

void Function_545() //Position: 0x16435 / 91189
{
	Function_544();
	Function_546();
	return;
}

void Function_546() //Position: 0x16442 / 91202
{
	Function_177(&iLocal_222 + 48);
	return;
}

bool Function_547() //Position: 0x1644F / 91215
{
	switch (iLocal_1531)
	{
		case 0x00000000:
			iLocal_1531 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(&cLocal_1030, &iLocal_222 + 2056[3]) && (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 2056[5]) || IS_ACTOR_IN_VOLUME(&cLocal_1026, &iLocal_222 + 2056[5])))
			{
				Function_263(15, "STAGE 02 - OBJ_02-DLG_01");
				iLocal_1531 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(&uLocal_1362))
			{
				if (GATEWAY_UPDATE(&uLocal_1362))
				{
					Function_222();
					iLocal_1531 = 3;
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			return 0;
			break;
	}
	return 1;
}

void Function_548() //Position: 0x16502 / 91394
{
	if (bLocal_1021 < 5 && bLocal_1021 > 105)
	{
		if (IS_VOLUME_VALID(&iLocal_222 + 1904[0]))
		{
			if ((bLocal_1021 < 6 && Function_322(&iLocal_1046) <= 10.0f) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_222 + 1904[0]))
			{
				Function_545();
				iLocal_1385 = 0;
				DESTROY_VOLUME(&iLocal_222 + 1904[0]);
			}
		}
		else if (!iLocal_1385)
		{
			if (Function_543())
			{
				Function_542();
				iLocal_1385 = 1;
			}
		}
		else
		{
			Function_618();
		}
		if (!Function_574())
		{
			Function_263(106, "STAGE 01 - COMPLETE");
		}
	}
	switch (bLocal_1021)
	{
		case 0x00000000:
			Function_373(0);
			if (!iLocal_1527)
			{
				Function_569();
				iLocal_1527 = 1;
			}
			Function_568();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_366();
			bLocal_1023 = Global_46866[0];
			Function_567();
			Function_263(1, "STAGE 01 - STREAMING GOAL");
			break;
		
		case 0x00000001:
			if ((Function_562() && STREAMING_IS_WORLD_LOADED()) && (Function_358(bLocal_1023) || bLocal_1023 != 4294967295))
			{
				Function_561();
				Function_560();
				Function_263(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_557() && Function_554(1))
			{
				Function_279(iLocal_1020);
				Function_410(StackVal, Function_279(iLocal_1020), iLocal_1020, Global_46746[2], Function_282(iLocal_1020), 0);
				iLocal_1022 = Function_409();
				Function_552();
				Function_263(5, "STAGE 01 - FADE IN");
			}
			break;
		
		case 0x00000005:
			Function_550();
			Function_267(1);
			Function_263(6, "STAGE 01 - OBJ_01_OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_388("Gun05_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_204();
				Function_263(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_549();
				Function_267(0);
				iLocal_1020 = 1;
				iLocal_1066[0] = 1;
				Function_263(0, "STAGE 02 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_549() //Position: 0x1675F / 91999
{
	Function_231();
	iLocal_1528 = 1;
	Function_255();
	SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1026, 1);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1030, 1);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1034, 1);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1038, 1);
	return;
}

void Function_550() //Position: 0x16797 / 92055
{
	Function_239(&iLocal_1383, 0, 0, 4294967295, 4294967295);
	Function_551();
	SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1026, 0);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1030, 0);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1034, 0);
	SET_AUTO_CONVERSATION_LOOK(&cLocal_1038, 0);
	return;
}

void Function_551() //Position: 0x167D2 / 92114
{
	iLocal_1083 = 0;
	return;
}

void Function_552() //Position: 0x167DC / 92124
{
	Function_553(&iLocal_1510, 1);
	Function_553(&iLocal_1512, 1);
	Function_120(100, 0, 1);
	Function_314();
	return;
}

void Function_553(int iParam0, bool bParam1) //Position: 0x167FD / 92157
{
	var uVar0;
	int iVar1;
	
	if (IS_GRINGO_VALID(&iParam0))
	{
		uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&iParam0, "UseCase1");
		bLocal_1379 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (bLocal_1379 >= 4294967295)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bLocal_1379, &uVar0);
			uLocal_1360 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar1, &iParam0);
			if (IS_PHYSINST_VALID(&uLocal_1360))
			{
				if (bParam1)
				{
					SHOW_PHYSINST(&uLocal_1360);
				}
				else
				{
					HIDE_PHYSINST(&uLocal_1360);
				}
			}
			bLocal_1379 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, bLocal_1379 + 1);
		}
	}
	return;
}

bool Function_554(int iParam0) //Position: 0x1689A / 92314
{
	int iVar0;
	
	iVar0 = 1;
	if (!Function_555(&iLocal_222 + 1640[02], &iLocal_222 + 2896, &iLocal_1510, iParam0))
	{
		iVar0 = 0;
	}
	if (!Function_555(&iLocal_222 + 1640[12], &iLocal_222 + 2904, &iLocal_1512, iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_555(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0x168E1 / 92385
{
	if (IS_GRINGO_VALID(&iParam2))
	{
		if (GET_CURRENT_GRINGO(&uParam0) == &iParam2)
		{
			return 1;
		}
		if (Function_556())
		{
			uLocal_1360 = GET_PHYSINST_FROM_OBJECT(&uParam1);
			if (IS_PHYSINST_VALID(&uLocal_1360))
			{
				uLocal_1358 = GET_OBJECT_FROM_GRINGO(&iParam2);
				if (IS_OBJECT_VALID(&uLocal_1358))
				{
					SET_PROP_FIXED(&uLocal_1360, 0);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(&uParam1, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam0, &uParam1, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam0, &uLocal_1508, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam1, &uLocal_1508, 0);
					SNAP_ACTOR_TO_GRINGO(&uParam0, &uLocal_1358, "UseCase1", true, 0, 0);
					TASK_CLEAR(&uParam0);
					TASK_PRIORITY_SET(&uParam0, true);
					TASK_USE_GRINGO(&uParam0, &iParam2, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	else
	{
		Function_76();
		Function_76();
		uLocal_1358 = CREATE_GRINGO_ON_OBJECT(&uParam1, Function_54(), "mex_drunk_sittable", Function_76(), Function_76());
		if (IS_OBJECT_VALID(&uLocal_1358))
		{
			DECOR_SET_BOOL(&uLocal_1358, "ForceAllowSun", 1);
			iParam2 = GET_GRINGO_FROM_OBJECT(&uLocal_1358);
			Function_553(&iParam2, iParam3);
		}
	}
	return 0;
}

bool Function_556() //Position: 0x16A0E / 92686
{
	if (!IS_PHYSINST_VALID(&uLocal_1508))
	{
		if (!IS_OBJECT_VALID(&iLocal_222 + 2600[4]))
		{
			Local_1370 = Vector(-2701,105f, 31,15482f, 4274,685f);
		}
		else
		{
			GET_OBJECT_POSITION(&iLocal_222 + 2600[4], &Local_1370);
		}
		uLocal_1508 = LOCATE_PHYSINST_OF_TYPE(Local_1370, 0,5f, "p_gen_table34x", 1);
		if (!IS_PHYSINST_VALID(&uLocal_1508))
		{
			return 0;
		}
	}
	return 1;
}

var Function_557() //Position: 0x16A87 / 92807
{
	bool bVar0;
	
	bVar0 = true;
	if (!Function_558(&cLocal_1026, &iLocal_222 + 2712[0]))
	{
		bVar0 = false;
	}
	if (!Function_558(&cLocal_1030, &iLocal_222 + 2712[2]))
	{
		bVar0 = false;
	}
	if (!Function_558(&cLocal_1034, &iLocal_222 + 2712[3]))
	{
		bVar0 = false;
	}
	if (!Function_558(&cLocal_1038, &iLocal_222 + 2712[1]))
	{
		bVar0 = false;
	}
	if (!Global_6624 && !bVar0)
	{
		RESET_PROPS_IN_VOLUME(&iLocal_222 + 1856[0], 1);
	}
	return bVar0;
}

bool Function_558(var uParam0, int iParam1) //Position: 0x16B06 / 92934
{
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uParam0)))
	{
		return 1;
	}
	GET_OBJECT_POSITION(&iParam1, &Local_1370);
	iLocal_1364 = LOCATE_GRINGO_OF_TYPE("fake_poker", &Local_1370, 0,5f, 0);
	if (IS_GRINGO_VALID(&iLocal_1364))
	{
		Function_559(&iLocal_1364);
		SNAP_ACTOR_TO_GRINGO(&uParam0, GET_OBJECT_FROM_GRINGO(&iLocal_1364), "UseCase1", true, 0, 0);
		TASK_CLEAR(&uParam0);
		TASK_PRIORITY_SET(&uParam0, true);
		TASK_USE_GRINGO(&uParam0, &iLocal_1364, "UseCase1", 4294967295, 1);
	}
	return 0;
}

void Function_559(var uParam0) //Position: 0x16B96 / 93078
{
	var uVar0;
	var uVar1;
	
	if (IS_GRINGO_VALID(&uParam0))
	{
		uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase1");
		bLocal_1379 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (bLocal_1379 >= 4294967295)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bLocal_1379, &uVar0);
			uLocal_1360 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar1, &uParam0);
			if (IS_PHYSINST_VALID(&uLocal_1360))
			{
				HIDE_PHYSINST(&uLocal_1360);
			}
			bLocal_1379 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, bLocal_1379 + 1);
		}
	}
	return;
}

void Function_560() //Position: 0x16C24 / 93220
{
	Function_430();
	return;
}

void Function_561() //Position: 0x16C2D / 93229
{
	Function_437(0);
	Function_434(0);
	Function_432();
	Function_425();
	return;
}

bool Function_562() //Position: 0x16C41 / 93249
{
	if ((Function_566() && Function_360(&iLocal_970)) && Function_563())
	{
		return 1;
	}
	return 0;
}

int Function_563() //Position: 0x16C5B / 93275
{
	if (Function_565() && Function_564())
	{
		return 1;
	}
	return 0;
}

int Function_564() //Position: 0x16C71 / 93297
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (!HAS_STRING_TABLE_LOADED("nminigames"))
	{
		return 0;
	}
	if (!HAS_ACTION_TREE_LOADED("custom/sit_poker"))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_crd_01x", 0)))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_gen_cards02x", 0)))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_gen_dealerButton01x", 0)))
	{
		return 0;
	}
	if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK"))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_233(&Var2, 0) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar3, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	uVar11 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(&uVar11))
	{
		return 0;
	}
	uVar12 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(&uVar11))
	{
		return 0;
	}
	uVar13 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(&uVar11))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar3, Function_232(bVar0), 32);
		if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar3, 0)))
		{
			return 0;
		}
		bVar0++;
	}
	if (!HAS_ACTION_TREE_LOADED("custom/fake_poker"))
	{
		return 0;
	}
	if (!STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID("fake_poker", 1)))
	{
		return 0;
	}
	return 1;
}

int Function_565() //Position: 0x16EBB / 93883
{
	if (!HAS_ANIM_SET_LOADED("nsit_poker"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_gped"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_hillb"))
	{
		return 0;
	}
	if (!Global_43789 != Global_46914[0])
	{
		if (!HAS_ANIM_SET_LOADED("sit_poker_oldm"))
		{
			return 0;
		}
	}
	return 1;
}

int Function_566() //Position: 0x16F3A / 94010
{
	Function_442(&iLocal_222 + 48, 408, 2, 0);
	Function_442(&iLocal_222 + 48, 662, 2, 0);
	Function_442(&iLocal_222 + 48, 410, 2, 0);
	Function_442(&iLocal_222 + 48, 750, 2, 0);
	Function_442(&iLocal_222 + 48, 746, 2, 0);
	Function_442(&iLocal_222 + 48, 664, 2, 0);
	if (Function_360(&iLocal_222 + 48))
	{
		return 1;
	}
	return 0;
}

void Function_567() //Position: 0x16F9B / 94107
{
	DISABLE_CHILD_SECTOR("chu_corral01x");
	DISABLE_CHILD_SECTOR("chu_cityHall_int_01x");
	DISABLE_CHILD_SECTOR("chu_churchWindow01x");
	DISABLE_CHILD_SECTOR("chu_church_int_01x");
	DISABLE_CHILD_SECTOR("chu_wall01props01x");
	DISABLE_CHILD_SECTOR("chu_townCenterProps01x");
	DISABLE_CHILD_SECTOR("chu_path01Props01x");
	DISABLE_CHILD_SECTOR("chu_marketProps01x");
	DISABLE_CHILD_SECTOR("chu_hotel01Props01x");
	DISABLE_CHILD_SECTOR("chu_corral01props01x");
	DISABLE_CHILD_SECTOR("chu_cityHall01Props01x");
	DISABLE_CHILD_SECTOR("chu_bank01props01x");
	return;
}

void Function_568() //Position: 0x170CA / 94410
{
	Function_370(&cLocal_1026);
	Function_370(&cLocal_1028);
	return;
}

void Function_569() //Position: 0x170DE / 94430
{
	Function_566();
	Function_570();
	return;
}

void Function_570() //Position: 0x170EB / 94443
{
	Function_573();
	Function_571();
	return;
}

void Function_571() //Position: 0x170F7 / 94455
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar11;
	var uVar12;
	var uVar13;
	
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	Function_572("$/fragments/p_gen_cards02x");
	Function_572("$/fragments/p_crd_01x");
	Function_572("$/fragments/p_gen_dealerButton01x");
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_233(&Var2, 0) };
			Function_572(&cVar3);
			iVar1++;
		}
		bVar0++;
	}
	uVar11 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	STREAMING_REQUEST_PROP(&uVar11, true);
	uVar12 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	STREAMING_REQUEST_PROP(&uVar12, true);
	uVar13 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	STREAMING_REQUEST_PROP(&uVar13, true);
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar3, Function_232(bVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar3, 0), true);
		bVar0++;
	}
	STREAMING_REQUEST_GRINGO(GET_ASSET_ID("fake_poker", 1));
	return;
}

int Function_572(char* cParam0) //Position: 0x172AD / 94893
{
	char* cVar0[64];
	
	if (!STREAMING_REQUEST_PROP(GET_ASSET_ID(&cParam0, 0), true))
	{
		strcpy(&cVar0, "Failed to load ", 64);
		stradd(&cVar0, &cParam0, 64);
		return 0;
	}
	return 1;
}

void Function_573() //Position: 0x172E2 / 94946
{
	REQUEST_ANIM_SET("nsit_poker", 0);
	REQUEST_ANIM_SET("sit_poker_gped", 0);
	REQUEST_ANIM_SET("sit_poker_hillb", 0);
	if (!Global_43789 != Global_46914[0])
	{
		REQUEST_ANIM_SET("sit_poker_oldm", 0);
	}
	REQUEST_ACTION_TREE("custom/sit_poker");
	REQUEST_ACTION_TREE("custom/fake_poker");
	return;
}

bool Function_574() //Position: 0x17375 / 95093
{
	switch (iLocal_1530)
	{
		case 0x00000000:
			iLocal_1530 = 1;
			iLocal_1389 = 99;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_576())
			{
				iLocal_1530 = 2;
				return 1;
			}
			Function_575();
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

void Function_575() //Position: 0x173BC / 95164
{
	if (!IS_GRINGO_VALID(&uLocal_1514))
	{
		uLocal_1360 = GET_PHYSINST_FROM_OBJECT(&iLocal_222 + 2888);
		if (IS_PHYSINST_VALID(&uLocal_1360))
		{
			SET_PROP_FIXED(&uLocal_1360, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(&iLocal_222 + 2888, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_222 + 1576[02], &iLocal_222 + 2888, 0);
			uLocal_1358 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iLocal_222 + 2888, Function_54(), "sit_cleanpistol", Vector(0,2f, 0.0f, 0,3f), Vector(0.0f, 180.0f, 0.0f));
			if (IS_OBJECT_VALID(&uLocal_1358))
			{
				DECOR_SET_BOOL(&uLocal_1358, "ForceAllowRain", 1);
				uLocal_1514 = GET_GRINGO_FROM_OBJECT(&uLocal_1358);
			}
		}
	}
	else if (GET_TASK_STATUS(&iLocal_222 + 1576[02], 19) != 1)
	{
		TASK_CLEAR(&iLocal_222 + 1576[02]);
		TASK_PRIORITY_SET(&iLocal_222 + 1576[02], true);
		TASK_USE_GRINGO(&iLocal_222 + 1576[02], &uLocal_1514, "UseCase1", 4294967295, 1);
	}
	return;
}

bool Function_576() //Position: 0x174B9 / 95417
{
	bLocal_1466 = false;
	bLocal_1467 = false;
	switch (iLocal_1389)
	{
		case 0x00000063:
			if (!Function_612(Global_46866[0], &Local_1390 + 12, &Global_54076, 0, 0))
			{
				LOG_ERROR("PerformPokerLoop: Failed to assign poker players seats at the table!");
				return 0;
			}
			(&Local_1390 + 12[4]) = &Global_54076;
			(&Local_1390 + 12[5]) = "";
			Function_611(&Local_1390 + 12);
			Local_1390.f_264 = 1;
			Local_1390.f_244 = 0;
			Local_1390.f_4 = 1;
			Local_1390.f_252 = 10;
			Function_610(Global_46866[0], 0);
			*(&Local_1390 + 232) = Function_610(Global_46866[0], 0);
			bLocal_1379 = false;
			while (bLocal_1379 <= 6)
			{
				(*&Local_1390 + 68)[bLocal_1379] = 1000;
				Function_609(Global_46866[0], bLocal_1379, 0);
				*(&Local_1390 + 128[bLocal_13792]) = Function_609(Global_46866[0], bLocal_1379, 0);
				bLocal_1379++;
			}
			bLocal_1379 = false;
			while (bLocal_1379 <= Local_1390.f_12)
			{
				PRINTINT(bLocal_1379);
				PRINTSTRING(": ");
				if (IS_ACTOR_VALID(&Local_1390 + 12[bLocal_1379]))
				{
					PRINTSTRING("FILLED");
				}
				else
				{
					PRINTSTRING("EMPTY");
				}
				PRINTNL();
				bLocal_1379++;
			}
			if (Function_608(Global_46866[0], 0, 4))
			{
				Local_1390.f_8 = Function_603(Global_46866[0], 0, 4);
				Function_602(StackVal, 0);
			}
			uLocal_1464 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Poker01/Poker01", &Local_1390, 74, 0);
			iLocal_1389 = 0;
			return 1;
			break;
		
		case 0x00000000:
			if (!IS_SCRIPT_VALID(&uLocal_1464))
			{
				iLocal_1389 = 101;
				return 1;
			}
			Function_577();
			break;
		
		case 0x00000065:
			if (DECOR_CHECK_EXIST(&Global_54076, "Gun05Poker"))
			{
				if (DECOR_GET_BOOL(&Global_54076, "Gun05Poker"))
				{
					bLocal_1466 = true;
				}
				else
				{
					bLocal_1467 = true;
				}
				DECOR_REMOVE(&Global_54076, "Gun05Poker");
			}
			else
			{
				bLocal_1467 = true;
			}
			break;
		
		default:
			LOG_ERROR("PerformPokerLoop: Unknown Stage ID");
			return 0;
			break;
	}
	if (bLocal_1466)
	{
		return 0;
	}
	if (bLocal_1467)
	{
		Function_273("Gun05_obj01_fail");
		bLocal_1081 = true;
		return 0;
	}
	return 1;
}

int Function_577() //Position: 0x1774B / 96075
{
	if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_FADING()) && !HUD_IS_FADED())
	{
		if (DECOR_CHECK_EXIST(&cLocal_1026, "calls"))
		{
			Function_601();
			DECOR_REMOVE(&cLocal_1026, "calls");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "folds"))
		{
			Function_600();
			DECOR_REMOVE(&cLocal_1026, "folds");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "checks"))
		{
			Function_599();
			DECOR_REMOVE(&cLocal_1026, "checks");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "allin"))
		{
			Function_598();
			DECOR_REMOVE(&cLocal_1026, "allin");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "raises"))
		{
			Function_597();
			DECOR_REMOVE(&cLocal_1026, "raises");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "toolong"))
		{
			Function_596();
			DECOR_REMOVE(&cLocal_1026, "toolong");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "playerwins"))
		{
			Function_595();
			DECOR_REMOVE(&cLocal_1026, "playerwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "landonwins"))
		{
			Function_594();
			DECOR_REMOVE(&cLocal_1026, "landonwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1026, "mullerwins"))
		{
			Function_593();
			DECOR_REMOVE(&cLocal_1026, "mullerwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "calls"))
		{
			Function_592();
			DECOR_REMOVE(&cLocal_1030, "calls");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "folds"))
		{
			Function_591();
			DECOR_REMOVE(&cLocal_1030, "folds");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "checks"))
		{
			Function_590();
			DECOR_REMOVE(&cLocal_1030, "checks");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "allin"))
		{
			Function_589();
			DECOR_REMOVE(&cLocal_1030, "allin");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "raises"))
		{
			Function_588();
			DECOR_REMOVE(&cLocal_1030, "raises");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "toolong"))
		{
			Function_587();
			DECOR_REMOVE(&cLocal_1030, "toolong");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "begincomments"))
		{
			Function_586();
			DECOR_REMOVE(&cLocal_1030, "begincomments");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "playerwins"))
		{
			Function_585();
			DECOR_REMOVE(&cLocal_1030, "playerwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "landonwins"))
		{
			Function_584();
			DECOR_REMOVE(&cLocal_1030, "landonwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(&cLocal_1030, "mullerwins"))
		{
			Function_583();
			DECOR_REMOVE(&cLocal_1030, "mullerwins");
			return 1;
		}
		if (!Function_324(&iLocal_1062))
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "nexthand"))
			{
				Function_582();
				DECOR_REMOVE(&Global_54076, "nexthand");
				Function_264(&iLocal_1062);
				return 1;
			}
			if (DECOR_CHECK_EXIST(&cLocal_1026, "nexthand"))
			{
				Function_581();
				DECOR_REMOVE(&cLocal_1026, "nexthand");
				Function_264(&iLocal_1062);
				return 1;
			}
			if (DECOR_CHECK_EXIST(&cLocal_1030, "nexthand"))
			{
				Function_580();
				DECOR_REMOVE(&cLocal_1030, "nexthand");
				Function_264(&iLocal_1062);
				return 1;
			}
			if (DECOR_CHECK_EXIST(&cLocal_1026, "rechand"))
			{
				Function_579();
				DECOR_REMOVE(&cLocal_1026, "rechand");
				Function_264(&iLocal_1062);
				return 1;
			}
			if (DECOR_CHECK_EXIST(&cLocal_1030, "rechand"))
			{
				Function_578();
				DECOR_REMOVE(&cLocal_1030, "rechand");
				Function_264(&iLocal_1062);
				return 1;
			}
		}
		if (Function_322(&iLocal_1062) <= 10.0f)
		{
			Function_450(&iLocal_1062);
		}
	}
	return 0;
}

void Function_578() //Position: 0x17C00 / 97280
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_ResponseRecHand", "Gun05_ResponseRecHand", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_579() //Position: 0x17C53 / 97363
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RicksCommRecHand", "Gun05_RicksCommRecHand", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_580() //Position: 0x17CA8 / 97448
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_NextHandDeal", "Gun05_NextHandDeal", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_581() //Position: 0x17CF5 / 97525
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickCommentsHand", "Gun05_RickCommentsHand", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_582() //Position: 0x17D4A / 97610
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Gun05_JonCommentNextHand", "Gun05_JonCommentNextHand", 1, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_583() //Position: 0x17DA3 / 97699
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerWinsHand", "Gun05_MullerWinsHand", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_584() //Position: 0x17DF4 / 97780
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerReactsRick", "Gun05_MullerReactsRick", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_585() //Position: 0x17E49 / 97865
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerReactsJon", "Gun05_MullerReactsJon", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_586() //Position: 0x17E9C / 97948
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_BeginComments", "Gun05_BeginComments", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_587() //Position: 0x17EEB / 98027
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_JonTakes2Long", "Gun05_JonTakes2Long", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_588() //Position: 0x17F3A / 98106
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerRaises", "Gun05_MullerRaises", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_589() //Position: 0x17F87 / 98183
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerAllIn", "Gun05_MullerAllIn", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_590() //Position: 0x17FD2 / 98258
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerChecks", "Gun05_MullerChecks", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_591() //Position: 0x18027 / 98343
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerFolds", "Gun05_MullerFolds", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_592() //Position: 0x18072 / 98418
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerCalls", "Gun05_MullerCalls", 0, 4, 1, 0, 1);
		Function_393(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_593() //Position: 0x180BD / 98493
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickReactMuller", "Gun05_RickReactMuller", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_594() //Position: 0x18110 / 98576
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickWinsHand", "Gun05_RickWinsHand", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_595() //Position: 0x1815D / 98653
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickReactJon", "Gun05_RickReactJon", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_596() //Position: 0x181AA / 98730
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_JonTakesLongRick", "Gun05_JonTakesLongRick", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_597() //Position: 0x181FF / 98815
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickRaises", "Gun05_RickRaises", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_598() //Position: 0x18248 / 98888
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickAllIn", "Gun05_RickAllIn", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_599() //Position: 0x1828F / 98959
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickChecks", "Gun05_RickChecks", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_600() //Position: 0x182D8 / 99032
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickFolds", "Gun05_RickFolds", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_601() //Position: 0x1831F / 99103
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun05_RickCalls", "Gun05_RickCalls", 0, 4, 1, 0, 1);
		Function_393(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_602(int iParam0, int iParam1) //Position: 0x18366 / 99174
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

int Function_603(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18381 / 99201
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_607(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_604(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_604(bParam0, bParam1, bParam2, 4294967295);
}

int Function_604(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x183DF / 99295
{
	var uVar0;
	
	if (!Function_606(bParam2))
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
	uVar0 = Function_607(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_605(uVar0);
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

var Function_605(int iParam0) //Position: 0x18543 / 99651
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

bool Function_606(int iParam0) //Position: 0x18581 / 99713
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_607(int iParam0, int iParam1, int iParam2) //Position: 0x18596 / 99734
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_608(var uParam0, var uParam1, int iParam2) //Position: 0x185B6 / 99766
{
	int iVar0;
	
	iVar0 = Function_603(uParam0, uParam1, iParam2);
	return Function_20(iVar0);
}

struct<8> Function_609(int iParam0, int iParam1, bool bParam2) //Position: 0x185CC / 99788
{
	if (iParam0 == Global_46816[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_610(int iParam0, bool bParam1) //Position: 0x18B78 / 101240
{
	if (iParam0 == Global_46816[0])
	{
		return StackVal, Vector(-800,8856f, 93,555f, 2375,189f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(163,9887f, 74,554f, 2231,428f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2157,657f, 17,677f, 2595,523f);
	}
	if (iParam0 == Global_46914[0])
	{
		if (&bParam1)
		{
			return StackVal, Vector(749,4575f, 83,482f, 1267,537f);
		}
		return StackVal, Vector(717,378f, 79,274f, 1325,464f);
	}
	if (iParam0 == Global_46914[1])
	{
		return StackVal, Vector(-138,8952f, 120,019f, 1343,499f);
	}
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2701,129f, 31,949f, 4278,085f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-795,0887f, 13,958f, 3699,661f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_611(int[] iParam0) //Position: 0x18C94 / 101524
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		uVar1 = &iParam0[iVar0];
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!AI_IGNORE_ACTOR(&uVar1))
			{
				LOG_ERROR("AI_IGNORE_ACTOR failed");
			}
			SET_ACTOR_FACTION(&uVar1, 1);
		}
		iVar0++;
	}
	return;
}

bool Function_612(int iParam0, var[] uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x18CF0 / 101616
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	var uVar9[6];
	int iVar16;
	int iVar17;
	bool bVar18;
	
	bVar5 = -1.0f;
	iVar6 = 4294967295;
	fVar7 = GET_CURRENT_GAME_TIME();
	iVar8 = 0;
	iVar4 = 0;
	while (iVar4 <= 6)
	{
		Function_609(iParam0, iVar4, &bParam4);
		iVar16 = Function_617(StackVal, Function_609(iParam0, iVar4, &bParam4));
		while ((!IS_GRINGO_VALID(&iVar16) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar7 + 5.0f))
		{
			Function_609(iParam0, iVar4, &bParam4);
			iVar16 = Function_617(StackVal, Function_609(iParam0, iVar4, &bParam4));
			WAIT(false);
		}
		uVar9[iVar4] = &iVar16;
		iVar17 = 0;
		while (iVar17 <= iVar4)
		{
			if (&uVar9[iVar17] == &iVar16)
			{
				iVar16 = "";
				return 0;
			}
			iVar17++;
		}
		if (IS_GRINGO_VALID(&iVar16))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&iVar16))
			{
				uParam1[iVar4] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&iVar16, "UseCase1"));
				if (!IS_ACTOR_VALID(&(uParam1[iVar4])))
				{
					Function_83(&uParam2, &Var0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iVar16), &Var2);
					bVar18 = VDIST(Var0, Var2);
					if (bVar5 != -1.0f || bVar18 > bVar5)
					{
						bVar5 = bVar18;
						iVar6 = iVar4;
					}
				}
				else if (((IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "look_up")) || !&bParam3)
				{
					iVar8++;
				}
				else if (&bParam3)
				{
					return 0;
				}
			}
			return 0;
		}
		LOG_ERROR("Fake_Poker is NOT valid");
		iVar4++;
	}
	if (iVar8 == 0)
	{
		LOG_ERROR("iAIPlayerCount is ZERO");
		return 0;
	}
	if (iVar6 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	uParam1[iVar6] = &uParam2;
	if (Function_613(&uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_613(int iParam0, bool bParam1, bool bParam2) //Position: 0x18EFE / 102142
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
	if (Function_616(&iParam0))
	{
		return 1;
	}
	if (Function_615(&iParam0))
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
	if (Function_614())
	{
		return 1;
	}
	return 0;
}

bool Function_614() //Position: 0x18FC2 / 102338
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_615(int iParam0) //Position: 0x18FD9 / 102361
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_616(int iParam0) //Position: 0x18FE5 / 102373
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

var Function_617(var uParam0, int iParam1) //Position: 0x18FF4 / 102388
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

int Function_618() //Position: 0x19036 / 102454
{
	GET_OBJECT_POSITION(&iLocal_222 + 2176[0], &Local_1370);
	if (Function_452(StackVal, "$/cutscene/GUN_05_B/GUN_05_B", &uLocal_1384, Local_1370, 0, 4000.0f, 10000.0f, 2, 1, 2, 2, 1, 0))
	{
		return 1;
	}
	return 0;
}

void Function_619() //Position: 0x1908D / 102541
{
	switch (bLocal_1021)
	{
		case 0x00000006:
			Function_668(&Local_952, 1);
			uLocal_950 = CREATE_LAYOUT("Gun05_DynamicLayout");
			Function_667();
			Function_366();
			Function_187(1, 0, 1);
			Function_666(&iLocal_222 + 1968[0]);
			RESET_PROPS_IN_VOLUME(&iLocal_222 + 1856[0], 1);
			bLocal_1021 = 7;
			break;
		
		case 0x00000007:
			if (Function_648())
			{
				if ((Local_952.f_40 >= 1 && !Function_327(&Local_952)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GUN_05_A/GUN_05_A"))
				{
					Function_647();
					bLocal_1021 = 8;
				}
				else
				{
					Function_642();
					bLocal_1021 = 9;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_317("$/cutscene/GUN_05_A/GUN_05_A", &iLocal_1008, &Local_952, &iLocal_1020, 63309, 80258, 115657, 61638, 115296, 80251, 1, 2, 1, 1, 2, !iLocal_1529, 1))
			{
				bLocal_1021 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_LAYOUTREF_VALID(&iLocal_222))
			{
				if (Function_633())
				{
					Function_631();
				}
			}
			else
			{
				bLocal_1021 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_222))
			{
				uLocal_1024 = CREATE_OBJECT_ITERATOR(&iLocal_222);
			}
			Function_624();
			Function_623(&iLocal_1046);
			Function_623(&iLocal_1050);
			iLocal_1020 = 0;
			bLocal_1021 = false;
			Function_621(&Local_952, &iLocal_1020, &bLocal_1021);
			Function_620(StackVal, StackVal, StackVal, StackVal, Function_631(), Local_952);
			switch (iLocal_1020)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_266();
					break;
				
				case 0x00000002:
					Function_261();
					break;
				
				case 0x00000003:
					Function_260();
					break;
				
				case 0x00000004:
					Function_259();
					break;
				
				case 0x00000005:
					Function_256();
					break;
				
				case 0x00000065:
					Function_246();
					break;
			}
			break;
	}
	return;
}

void Function_620(struct<41> Param0) //Position: 0x1926A / 103018
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_1020 = 0;
			break;
		
		case 0x00000002:
			iLocal_1020 = 1;
			break;
		
		case 0x00000003:
			iLocal_1020 = 4;
			break;
		
		case 0x00000004:
			iLocal_1020 = 101;
			break;
	}
}

void Function_621(int iParam0, var uParam1, int iParam2) //Position: 0x192B0 / 103088
{
	if (Function_327(&iParam0))
	{
		uParam1 = Function_472(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_622();
	}
	return;
}

void Function_622() //Position: 0x192EC / 103148
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

void Function_623(int iParam0) //Position: 0x1933D / 103229
{
	if (!Function_324(&iParam0))
	{
		Function_265(&iParam0, 0.0f);
	}
	return;
}

void Function_624() //Position: 0x19354 / 103252
{
	iLocal_1383 = 0;
	Function_630("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_164(Global_46866[0]);
	Function_202(0);
	Function_628(&uLocal_1084, &uLocal_950);
	Function_400(&(Local_1138[015]), &cLocal_1026, "Gunslinger", 0, 0x5f5e100, 1);
	Function_625(&(Local_1138[615]), &uLocal_950, 0x5f5e100);
	return;
}

int Function_625(struct<69> Param0) //Position: 0x193C6 / 103366
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Layout invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Function_76();
	Function_76();
	Param0 = CREATE_POINT_IN_LAYOUT(&uParam1, "nMFT_Dummy", Function_76(), Function_76());
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	Param0.f_56 = 8;
	Param0.f_60 = 2;
	if (!Function_405(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_404(&Param0, 0);
	Param0.f_68 = 0;
	Function_401(&Param0, &iParam2, 0);
	Function_626(&Param0, 3);
	return 1;
}

void Function_626(int iParam0, int iParam1) //Position: 0x194E7 / 103655
{
	if (iParam1 != 100000000)
	{
		Function_627(&iParam0, iParam1);
	}
	else
	{
		Function_402(&iParam0, 1);
	}
	return;
}

void Function_627(int iParam0, bool bParam1) //Position: 0x19509 / 103689
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_628(struct<2>[] Param0) //Position: 0x19536 / 103734
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_629(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_629(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_629(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_629(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_629(struct<13> Param0) //Position: 0x19C0F / 105487
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

void Function_630(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x19CDE / 105694
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_240(iParam1), &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

vector3 Function_631() //Position: 0x19D00 / 105728
{
	var uVar0;
	
	Function_632(4, 1);
	uVar0 = &uVar0;
	iLocal_222 = CREATE_LAYOUT("Gun05_layout");
	(&iLocal_222 + 1896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_222, "CutsceneVol_set");
	*(&iLocal_222 + 1856[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "Cutscene01Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4278.0f), Vector(0.0f, 0.0f, 0.0f), Vector(14.0f, 10.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1896, &iLocal_222 + 1856[0]);
	*(&iLocal_222 + 1856[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "Cutscene02Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4278.0f), Vector(0.0f, 0.0f, 0.0f), Vector(14.0f, 10.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1896, &iLocal_222 + 1856[1]);
	*(&iLocal_222 + 1856[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "Cutscene03Vol", 2,802597E-45f, Vector(-2697,067f, 32,82203f, 4268,143f), Vector(0.0f, -2,021486f, 0.0f), Vector(9,218593f, 5,684794f, 16,89103f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1896, &iLocal_222 + 1856[2]);
	*(&iLocal_222 + 1856[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "Cutscene04Vol", 2,802597E-45f, Vector(-2697,348f, 31,52667f, 4239,917f), Vector(0.0f, 0.0f, 0.0f), Vector(14,52787f, 11,12271f, 10,17338f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1896, &iLocal_222 + 1856[3]);
	*(&iLocal_222 + 1960) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_222, "PreInitVol_set");
	*(&iLocal_222 + 1904[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PreInit02Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4278.0f), Vector(0.0f, 0.0f, 0.0f), Vector(14.0f, 10.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1960, &iLocal_222 + 1904[0]);
	*(&iLocal_222 + 1904[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PreInit03Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4278.0f), Vector(0.0f, 0.0f, 0.0f), Vector(14.0f, 10.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1960, &iLocal_222 + 1904[1]);
	*(&iLocal_222 + 1904[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PreInit04Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 44.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1960, &iLocal_222 + 1904[2]);
	*(&iLocal_222 + 1904[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PreInit05Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 44.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1960, &iLocal_222 + 1904[3]);
	*(&iLocal_222 + 1904[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PreInit06Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 44.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1960, &iLocal_222 + 1904[4]);
	*(&iLocal_222 + 1904[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PreInit07Vol", 2,802597E-45f, Vector(-2698.0f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 44.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 1960, &iLocal_222 + 1904[5]);
	*(&iLocal_222 + 2048) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_222, "ActionVol_set");
	*(&iLocal_222 + 1968[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "ChuparosaVol", 2,802597E-45f, Vector(-2700.0f, 36,83155f, 4258.0f), Vector(0.0f, 0.0f, 0.0f), Vector(128.0f, 20.0f, 108.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[0]);
	*(&iLocal_222 + 1968[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "FinalBattleVol", 2,802597E-45f, Vector(-2688,406f, 34.0f, 4254,527f), Vector(0.0f, -11,37087f, 0.0f), Vector(30.0f, 10.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[1]);
	*(&iLocal_222 + 1968[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "FinalBattleStayOutVol01", 2,802597E-45f, Vector(-2700.0f, 34.0f, 4272.0f), Vector(0.0f, 0.0f, 0.0f), Vector(16.0f, 10.0f, 24.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[2]);
	*(&iLocal_222 + 1968[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "FinalBattleStayOutVol02", 2,802597E-45f, Vector(-2682.0f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 44.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[3]);
	*(&iLocal_222 + 1968[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "Duel01StayOutVol", 2,802597E-45f, Vector(-2694,6f, 33.0f, 4247,1f), Vector(0.0f, 0.0f, 0.0f), Vector(8.0f, 6.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[4]);
	*(&iLocal_222 + 1968[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "Duel02StayOutVol", 2,802597E-45f, Vector(-2696,1f, 33.0f, 4267.0f), Vector(0.0f, 10.0f, 0.0f), Vector(8.0f, 6.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[5]);
	*(&iLocal_222 + 1968[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "MullerCorpseVol", 2,802597E-45f, Vector(-2694,579f, 33.0f, 4241,944f), Vector(0.0f, 0.0f, 0.0f), Vector(6,155837f, 6.0f, 6,274136f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[6]);
	*(&iLocal_222 + 1968[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PatioStayOutVol01", 2,802597E-45f, Vector(-2706,2f, 34.0f, 4280.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 10.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[7]);
	*(&iLocal_222 + 1968[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PatioStayOutVol02", 2,802597E-45f, Vector(-2687,451f, 34.0f, 4284.0f), Vector(0.0f, 0.0f, 0.0f), Vector(14.0f, 10.0f, 32.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2048, &iLocal_222 + 1968[8]);
	*(&iLocal_222 + 2112) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_222, "TriggerVol_set");
	*(&iLocal_222 + 2056[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "DuelInnerVol", 2,802597E-45f, Vector(-2694,6f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 44.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2112, &iLocal_222 + 2056[0]);
	*(&iLocal_222 + 2056[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "DuelOuterVol", 2,802597E-45f, Vector(-2694,6f, 34.0f, 4262.0f), Vector(0.0f, 0.0f, 0.0f), Vector(44.0f, 10.0f, 68.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2112, &iLocal_222 + 2056[1]);
	*(&iLocal_222 + 2056[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "LandonNearDuelVol", 2,802597E-45f, Vector(-2694,6f, 34.0f, 4249.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 18.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2112, &iLocal_222 + 2056[2]);
	*(&iLocal_222 + 2056[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "MullerNearDuelVol", 2,802597E-45f, Vector(-2694,6f, 34.0f, 4242.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2112, &iLocal_222 + 2056[3]);
	*(&iLocal_222 + 2056[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PlayerHorseNearHPVol", 2,802597E-45f, Vector(-2705,819f, 33,59062f, 4240,974f), Vector(0.0f, 31,53817f, 0.0f), Vector(4.0f, 4.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2112, &iLocal_222 + 2056[4]);
	*(&iLocal_222 + 2056[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_222, "PlayerNearDuelVol", 2,802597E-45f, Vector(-2694,6f, 34.0f, 4251.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 22.0f));
	ADD_TO_VOLUME_SET(&iLocal_222 + 2112, &iLocal_222 + 2056[5]);
	*(&iLocal_222 + 2120) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2128[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerStart01", Vector(-2699,459f, 31,151f, 4279,011f), Vector(0.0f, 61,33242f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2128[0], &iLocal_222 + 2120);
	*(&iLocal_222 + 2128[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionStart01", Vector(-2701,888f, 31,12157f, 4298.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2128[1], &iLocal_222 + 2120);
	*(&iLocal_222 + 2128[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionEnd01", Vector(-2702,768f, 31,13732f, 4279,034f), Vector(0.0f, 300,2953f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2128[2], &iLocal_222 + 2120);
	*(&iLocal_222 + 2128[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerHorseStart01", Vector(-2705,062f, 31,99542f, 4240,509f), Vector(0.0f, 36,93771f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2128[3], &iLocal_222 + 2120);
	*(&iLocal_222 + 2168) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2176[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerStart02", Vector(-2699,285f, 31,15f, 4277,957f), Vector(0.0f, -3,51622f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[0], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionStart02", Vector(-2698,826f, 31,14972f, 4279,858f), Vector(0.0f, 356,5223f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[1], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "MullerStart02", Vector(-2697,835f, 31,15217f, 4272,001f), Vector(0.0f, -8,316405f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[2], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerStart02", Vector(-2698,293f, 31,1242f, 4268,754f), Vector(0.0f, 359,6532f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[3], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ManoloStart02", Vector(-2695,905f, 31,1074f, 4270,068f), Vector(0,1290938f, 340,1047f, 0,08100592f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[4], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster01Start02", Vector(-2695,707f, 31,15285f, 4263,892f), Vector(0,5217836f, 348,6411f, 0,09210373f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[5], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster02Start02", Vector(-2696,781f, 31,12066f, 4264,754f), Vector(0.0f, 355,728f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[6], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster03Start02", Vector(-2698,273f, 31,12185f, 4263,138f), Vector(0.0f, 0,5169922f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[7], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron01Start02", Vector(-2691,886f, 31,12157f, 4272,357f), Vector(0.0f, 13,59204f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[8], &iLocal_222 + 2168);
	*(&iLocal_222 + 2176[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron02Start02", Vector(-2691,555f, 31,14748f, 4276,851f), Vector(0.0f, 409,28f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2176[9], &iLocal_222 + 2168);
	*(&iLocal_222 + 2264) = CREATE_OBJECTSET_IN_LAYOUT("Teleport01Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2272[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerTele01", Vector(-2694,579f, 31,37043f, 4251,944f), Vector(0.0f, 0,0001899195f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[0], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionTele01", Vector(-2699,034f, 31,34783f, 4256,151f), Vector(-0,4184313f, -17,1152f, 0,1653187f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[1], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "MullerTele01", Vector(-2694,579f, 31,6039f, 4241,944f), Vector(0.0f, -179,9998f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[2], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerTele01", Vector(-2701,815f, 31,99428f, 4234,973f), Vector(0.0f, 193,975f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[3], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ManoloTele01", Vector(-2689,015f, 31,54553f, 4251,237f), Vector(0.0f, 46,3615f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[4], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster01Tele01", Vector(-2683,132f, 31,84764f, 4236,593f), Vector(0.0f, 151,9714f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[5], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster02Tele01", Vector(-2688.0f, 31,89293f, 4235,678f), Vector(0.0f, 161,0773f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[6], &iLocal_222 + 2264);
	*(&iLocal_222 + 2272[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster03Tele01", Vector(-2707,69f, 32,02146f, 4242,409f), Vector(0.0f, 209,4196f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2272[7], &iLocal_222 + 2264);
	*(&iLocal_222 + 2344) = CREATE_OBJECTSET_IN_LAYOUT("Teleport02Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2352[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerTele02", Vector(-2694,579f, 31,37043f, 4251,944f), Vector(0.0f, 0,0001899195f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2352[0], &iLocal_222 + 2344);
	*(&iLocal_222 + 2352[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionTele02", Vector(-2699,034f, 31,34783f, 4256,151f), Vector(-0,4184313f, -17,1152f, 0,1653187f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2352[1], &iLocal_222 + 2344);
	*(&iLocal_222 + 2376) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2384[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerStart03", Vector(-2695,386f, 31,12f, 4271,347f), Vector(0.0f, 10.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[0], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionStart03", Vector(-2689,853f, 31,14591f, 4274,797f), Vector(0.0f, 30.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[1], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerStart03", Vector(-2696,949f, 31,15279f, 4262,484f), Vector(0.0f, 190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[2], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ManoloStart03", Vector(-2685,863f, 31,35864f, 4246,138f), Vector(0.0f, 159,4523f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[3], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster01Start03", Vector(-2680,471f, 31,36298f, 4246,871f), Vector(0,4373209f, 148,8294f, 0,3167791f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[4], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster02Start03", Vector(-2676,591f, 31,38165f, 4250,195f), Vector(0,4999467f, 138,4564f, 0,4219877f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[5], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster03Start03", Vector(-2674,805f, 31,47307f, 4254,745f), Vector(0,5733971f, 130,7364f, 0,5249043f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[6], &iLocal_222 + 2376);
	*(&iLocal_222 + 2384[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "HostageStart03", Vector(-2697,122f, 31,19405f, 4261,499f), Vector(0.0f, 190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2384[7], &iLocal_222 + 2376);
	*(&iLocal_222 + 2456) = CREATE_OBJECTSET_IN_LAYOUT("Teleport03Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2464[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerTele03", Vector(-2695,386f, 31,12f, 4271,347f), Vector(0.0f, 10.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[0], &iLocal_222 + 2456);
	*(&iLocal_222 + 2464[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionTele03", Vector(-2689,853f, 31,14591f, 4274,797f), Vector(0.0f, 30.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[1], &iLocal_222 + 2456);
	*(&iLocal_222 + 2464[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ManoloTele03", Vector(-2685,863f, 31,35864f, 4246,138f), Vector(0.0f, 159,4523f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[2], &iLocal_222 + 2456);
	*(&iLocal_222 + 2464[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster01Tele03", Vector(-2680,471f, 31,36298f, 4246,871f), Vector(0,4373209f, 148,8294f, 0,3167791f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[3], &iLocal_222 + 2456);
	*(&iLocal_222 + 2464[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster02Tele03", Vector(-2676,591f, 31,38165f, 4250,195f), Vector(0,4999467f, 138,4564f, 0,4219877f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[4], &iLocal_222 + 2456);
	*(&iLocal_222 + 2464[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Gangster03Tele03", Vector(-2674,805f, 31,47307f, 4254,745f), Vector(0,5733971f, 130,7364f, 0,5249043f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[5], &iLocal_222 + 2456);
	*(&iLocal_222 + 2464[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "HostageTele03", Vector(-2697,122f, 31,19405f, 4261,499f), Vector(0.0f, 190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2464[6], &iLocal_222 + 2456);
	*(&iLocal_222 + 2528) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2536[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerStart04", Vector(-2698,169f, 31,36066f, 4253,568f), Vector(0.0f, 234,9105f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2536[0], &iLocal_222 + 2528);
	*(&iLocal_222 + 2536[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionStart04", Vector(-2696,41f, 31,37064f, 4255,568f), Vector(0.0f, 41,40631f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2536[1], &iLocal_222 + 2528);
	*(&iLocal_222 + 2560) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2568[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerEndLast", Vector(-2696,337f, 31,38086f, 4254,359f), Vector(0.0f, 361,7596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2568[0], &iLocal_222 + 2560);
	*(&iLocal_222 + 2568[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "CompanionEndLast", Vector(-2697,823f, 31,12157f, 4276f), Vector(0.0f, 361,7596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2568[1], &iLocal_222 + 2560);
	*(&iLocal_222 + 2592) = CREATE_OBJECTSET_IN_LAYOUT("ActionFlagSet", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2600[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ChuparosaFlag", Vector(-2699,672f, 31,38086f, 4252f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[0], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "DuelFlag", Vector(-2694,579f, 31,37043f, 4251,944f), Vector(0.0f, 0,0001899195f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[1], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "HostageHideFlag", Vector(-2709,394f, 32,89307f, 4270,156f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[2], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "MullerCorpseFlag", Vector(-2694,579f, 31,6039f, 4241,944f), Vector(0.0f, -179,9998f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[3], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron01TableFlag", Vector(-2701,105f, 31,15482f, 4274,685f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[4], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerHorseHitchFlag", Vector(-2707,075f, 32,13573f, 4240,131f), Vector(0.0f, 31,08093f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[5], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PokerGringosFlag", Vector(-2701,132f, 31,15079f, 4278,109f), Vector(0.0f, -262,5067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[6], &iLocal_222 + 2592);
	*(&iLocal_222 + 2600[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerCorpseFlag", Vector(-2696,949f, 31,15279f, 4262,484f), Vector(0.0f, 190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2600[7], &iLocal_222 + 2592);
	*(&iLocal_222 + 2672) = CREATE_OBJECTSET_IN_LAYOUT("TriggerFlagSet", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2680[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "DuelGatewayFlag", Vector(-2694,579f, 31,37043f, 4251,944f), Vector(0.0f, 0,0001899195f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2680[0], &iLocal_222 + 2672);
	*(&iLocal_222 + 2680[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "DrinkGatewayFlag", Vector(-2695,212f, 31,12f, 4272,361f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2680[1], &iLocal_222 + 2672);
	*(&iLocal_222 + 2704) = CREATE_OBJECTSET_IN_LAYOUT("PokerGringoFlagSet", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "LandonPokerGringoFlag", Vector(-2701,461f, 31,15759f, 4278,555f), Vector(0.0f, 300,873f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2712[0], &iLocal_222 + 2704);
	*(&iLocal_222 + 2712[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ManoloPokerGringoFlag", Vector(-2701,365f, 31,15759f, 4277,564f), Vector(0.0f, 184,8303f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2712[1], &iLocal_222 + 2704);
	*(&iLocal_222 + 2712[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "MullerPokerGringoFlag", Vector(-2700,789f, 31,15759f, 4277,605f), Vector(0.0f, 121,9985f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2712[2], &iLocal_222 + 2704);
	*(&iLocal_222 + 2712[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerPokerGringoFlag", Vector(-2701,706f, 31,15759f, 4278,032f), Vector(0.0f, 240,1491f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2712[3], &iLocal_222 + 2704);
	*(&iLocal_222 + 2752) = CREATE_OBJECTSET_IN_LAYOUT("ChairFlagSet", &iLocal_222, 8, 0);
	*(&iLocal_222 + 2760[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "DeleteChairFlag01", Vector(-2701,509f, 31,15702f, 4274,327f), Vector(0.0f, 211,1308f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[0], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron01ChairStart01", Vector(-2700,989f, 31,17f, 4275,231f), Vector(0.0f, 165,386f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[1], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "Patron02ChairStart01", Vector(-2701,675f, 31,17f, 4274,666f), Vector(0.0f, 66,14f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[2], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "ManoloChairStart02", Vector(-2701,29f, 31,18f, 4277,14f), Vector(0.0f, 11,06f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[3], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "MullerChairStart02", Vector(-2700,37f, 31,18f, 4277,49f), Vector(0.0f, -57,74f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[4], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "MullerChairEnd02", Vector(-2700,04f, 31,18f, 4276,77f), Vector(0.0f, -83,51f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[5], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerChairStart02", Vector(-2700,2f, 31,18f, 4278,54f), Vector(0.0f, -46.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[6], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "PlayerChairEnd02", Vector(-2699,45f, 31,76f, 4279,14f), Vector(0.0f, -50,47f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[7], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerChairStart02", Vector(-2702,13f, 31,18f, 4277,84f), Vector(0.0f, 62,34f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[8], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "StrangerChairEnd02", Vector(-2702,95f, 31,19f, 4277,37f), Vector(0.0f, 84,15f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[9], &iLocal_222 + 2752);
	*(&iLocal_222 + 2760[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "LandonChairStart02", Vector(-2701,83f, 31,18f, 4279,01f), Vector(0.0f, 69.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_222 + 2760[10], &iLocal_222 + 2752);
	PushArrayP();
	*(&iLocal_222 + 2856) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_222, "LandonGoToCantinaPath");
	PushArrayP();
	*(&iLocal_222 + 2864) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_222, "LandonGoToDuelPath");
	PushArrayP();
	*(&iLocal_222 + 2872) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_222, "MullerGoToDuelPath");
	*(&iLocal_222 + 2880) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "nchair06x0", "p_gen_chair06x", Vector(-2696,676f, 31,18476f, 4279,07f), Vector(0.0f, 131,2031f, 0.0f), 1);
	*(&iLocal_222 + 2888) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "nchair06x1", "p_gen_chair06x", Vector(-2700,421f, 31,17f, 4273,486f), Vector(0.0f, 80,97137f, 0.0f), 1);
	*(&iLocal_222 + 2896) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "nchair08x0", "p_gen_chair08x", Vector(-2700,989f, 31,17f, 4275,231f), Vector(0.0f, 165,386f, 0.0f), 1);
	*(&iLocal_222 + 2904) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_222, "nchair08x1", "p_gen_chair08x", Vector(-2701,675f, 31,17f, 4274,666f), Vector(0.0f, 66,14f, 0.0f), 1);
	return;
}

void Function_632(int iParam0, int iParam1) //Position: 0x1C09D / 114845
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

bool Function_633() //Position: 0x1C0E7 / 114919
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_634())
		{
			return 0;
		}
		if (!Function_360(&iLocal_964))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_634() //Position: 0x1C10A / 114954
{
	Function_635(&iLocal_222 + 8, "p_gen_chair06x", 0, 0);
	Function_635(&iLocal_222 + 8, "p_gen_chair08x", 0, 0);
	if (Function_360(&iLocal_222 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_635(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1C153 / 115027
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_636(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_363(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_636(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1C191 / 115089
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_363(&(Param0[iVar02]), 4);
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

int Function_637() //Position: 0x1C260 / 115296
{
	switch (iLocal_1020)
	{
		case 0x00000063:
			Function_332(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_640(1);
			Function_639(1);
			Function_638(1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&cLocal_1026, false);
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_COMPLETE: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_638(int iParam0) //Position: 0x1C2D5 / 115413
{
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1640[02]))
	{
		SET_DRAW_ACTOR(&iLocal_222 + 1640[02], iParam0);
	}
	if (IS_ACTOR_ALIVE(&iLocal_222 + 1640[12]))
	{
		SET_DRAW_ACTOR(&iLocal_222 + 1640[12], iParam0);
	}
	return;
}

void Function_639(int iParam0) //Position: 0x1C315 / 115477
{
	if (IS_ACTOR_ALIVE(&cLocal_1026))
	{
		SET_DRAW_ACTOR(&cLocal_1026, iParam0);
	}
	if (IS_ACTOR_ALIVE(&cLocal_1030))
	{
		SET_DRAW_ACTOR(&cLocal_1030, iParam0);
	}
	if (IS_ACTOR_ALIVE(&cLocal_1034))
	{
		SET_DRAW_ACTOR(&cLocal_1034, iParam0);
	}
	if (IS_ACTOR_ALIVE(&cLocal_1038))
	{
		SET_DRAW_ACTOR(&cLocal_1038, iParam0);
	}
	return;
}

void Function_640(int iParam0) //Position: 0x1C367 / 115559
{
	if (IS_OBJECT_VALID(&iLocal_222 + 2880))
	{
		SET_DRAW_OBJECT(&iLocal_222 + 2880, iParam0);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2888))
	{
		SET_DRAW_OBJECT(&iLocal_222 + 2888, iParam0);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2896))
	{
		SET_DRAW_OBJECT(&iLocal_222 + 2896, iParam0);
	}
	if (IS_OBJECT_VALID(&iLocal_222 + 2904))
	{
		SET_DRAW_OBJECT(&iLocal_222 + 2904, iParam0);
	}
	return;
}

int Function_641() //Position: 0x1C3C9 / 115657
{
	switch (iLocal_1020)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_222))
			{
				if (Function_633())
				{
					Function_631();
					Function_640(0);
					Function_569();
					iLocal_1385 = 0;
					iLocal_1527 = 1;
				}
			}
			else if (!iLocal_1385)
			{
				if (Function_562())
				{
					Function_561();
					Function_639(0);
					Function_638(0);
					iLocal_1385 = 1;
				}
			}
			else if (Function_554(0))
			{
				iLocal_1529 = 1;
				return 1;
			}
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_FIRSTSHOT: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_642() //Position: 0x1C46C / 115820
{
	iLocal_1383 = 0;
	Function_630("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_238(0);
	Function_646();
	Function_645();
	Function_644();
	Function_643();
	return;
}

void Function_643() //Position: 0x1C4A1 / 115873
{
	if (IS_ACTOR_ALIVE(&cLocal_1028))
	{
		ACCESSORIZE_HORSE(&cLocal_1028, 4);
		RESET_ACTOR_GAITS(&cLocal_1028, 0);
		Function_422(&cLocal_1028);
		SET_ACTOR_FACTION(&cLocal_1028, 20);
		SET_ACTOR_INVULNERABILITY(&cLocal_1028, 1);
		SET_ACTOR_MAX_HEALTH(&cLocal_1028, 50.0f);
		SET_ACTOR_HEALTH(&cLocal_1028, 50.0f);
		TASK_CLEAR(&cLocal_1028);
		TASK_PRIORITY_SET(&cLocal_1028, true);
		TASK_STAND_STILL(&cLocal_1028, -1.0f, 0, 0);
		if (!IS_OBJECT_VALID(&iLocal_222 + 2128[3]))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &cLocal_1028, Vector(-2705,062f, 31,99542f, 4240,509f), 36,938f, 1, 1, 1);
		}
		else
		{
			Function_365(&cLocal_1028, &iLocal_222 + 2128[3], 1, 1, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to setup PlayerHorse properly!");
	}
	return;
}

void Function_644() //Position: 0x1C57E / 116094
{
	if (IS_ACTOR_ALIVE(&cLocal_1026))
	{
		Function_218(5, 0, 1);
		RESET_ACTOR_GAITS(&cLocal_1026, 0);
		Function_422(&cLocal_1026);
		SET_ACTOR_FACTION(&cLocal_1026, 20);
		AI_BEHAVIOR_SET_ALLOW(&cLocal_1026, 0, 0);
		SET_CRIPPLE_ENABLE(&cLocal_1026, 0);
		SET_ACTOR_INVULNERABILITY(&cLocal_1026, 1);
		SET_ACTOR_MAX_HEALTH(&cLocal_1026, 50.0f);
		SET_ACTOR_HEALTH(&cLocal_1026, 50.0f);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&cLocal_1026, 0);
		SET_ACTOR_FACE_STYLE(&cLocal_1026, 2);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&cLocal_1026, true);
		TASK_CLEAR(&cLocal_1026);
		TASK_PRIORITY_SET(&cLocal_1026, true);
		TASK_STAND_STILL(&cLocal_1026, -1.0f, 0, 0);
		if (!IS_OBJECT_VALID(&iLocal_222 + 2128[1]))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &cLocal_1026, Vector(-2701,888f, 31,12157f, 4298.0f), 0.0f, 1, 1, 1);
		}
		else
		{
			Function_365(&cLocal_1026, &iLocal_222 + 2128[1], 1, 1, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to setup Landon properly!");
	}
	return;
}

void Function_645() //Position: 0x1C678 / 116344
{
	SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
	if (!IS_OBJECT_VALID(&iLocal_222 + 2128[0]))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2699,459f, 31,151f, 4279,011f), 61,33f, 1, 1, 1);
	}
	else
	{
		Function_365(&Global_54076, &iLocal_222 + 2128[0], 1, 1, 1);
	}
	return;
}

void Function_646() //Position: 0x1C6CB / 116427
{
	if (!IS_OBJECT_VALID(&iLocal_222 + 2760[0]))
	{
		Local_1370 = Vector(-2701,672f, 31,17f, 4274,667f);
	}
	else
	{
		GET_OBJECT_POSITION(&iLocal_222 + 2760[0], &Local_1370);
	}
	uLocal_1360 = LOCATE_PHYSINST_OF_TYPE(Local_1370, 0,5f, "p_gen_chair08x", 1);
	if (IS_PHYSINST_VALID(&uLocal_1360))
	{
		uLocal_1358 = GET_OBJECT_FROM_PHYSINST(&uLocal_1360);
		if (IS_OBJECT_VALID(&uLocal_1358))
		{
			DESTROY_OBJECT(&uLocal_1358);
		}
	}
	return;
}

void Function_647() //Position: 0x1C751 / 116561
{
	iLocal_1383 = 0;
	Function_630("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_238(0);
	Function_567();
	Function_646();
	Function_645();
	Function_644();
	Function_643();
	return;
}

bool Function_648() //Position: 0x1C789 / 116617
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_665(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&cLocal_1026))
		{
			cLocal_1026 = Function_656(5, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_655())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&cLocal_1028))
		{
			cLocal_1028 = Function_649(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
	}
	return 1;
}

var Function_649(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1C7EF / 116719
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
		Function_654(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_655())
		{
			return "";
		}
	}
	if (!Function_652())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_197();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_280(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_280(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_280(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_280(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_651(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_651(StackVal, Var4, 0, 1, 1);
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
		Function_650(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_650(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1CB4C / 117580
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

var Function_651(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1CB96 / 117654
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

bool Function_652() //Position: 0x1CC36 / 117814
{
	if (Function_653() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_653() //Position: 0x1CC4C / 117836
{
	return Global_21369.f_244;
}

void Function_654(var uParam0, bool bParam1, bool bParam2) //Position: 0x1CC57 / 117847
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

bool Function_655() //Position: 0x1CC86 / 117894
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

var Function_656(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1CCA6 / 117926
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
		Function_218(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_664(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_659(&Global_15402[iParam014] + 16, &uParam7);
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
		Function_658(&bVar1, 0, 0, 0, 0);
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
		Function_657(&bVar1, 0);
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

void Function_657(var uParam0, bool bParam1) //Position: 0x1D1E6 / 119270
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_658(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x1D208 / 119304
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

var Function_659(int iParam0, int iParam1) //Position: 0x1D269 / 119401
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_663(iParam0))
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
						Function_660(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_660(var uParam0, int iParam1) //Position: 0x1D2F7 / 119543
{
	Function_662(&uParam0);
	Function_661(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_661(int iParam0) //Position: 0x1D323 / 119587
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_662(int iParam0) //Position: 0x1D349 / 119625
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

bool Function_663(int iParam0) //Position: 0x1D41F / 119839
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_664(int iParam0, var uParam1) //Position: 0x1D436 / 119862
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

bool Function_665(bool bParam0) //Position: 0x1D4DC / 120028
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

void Function_666(bool bParam0) //Position: 0x1D50C / 120076
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (IS_VOLUME_VALID(&bParam0))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", &Global_10994, 4294967295, 0);
		if (IS_OBJECTSET_VALID(&uVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(&bParam0, &uVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(&uVar1) - 1))
			{
				uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar1);
				if (IS_OBJECT_VALID(&uVar2))
				{
					iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
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

void Function_667() //Position: 0x1D5B9 / 120249
{
	Function_635(&iLocal_964, "Gun05", 10, 0);
	Function_635(&iLocal_970, "$/content/scripting/gringo/simplegringo/mex_drunk_sittable", 1, 0);
	Function_635(&iLocal_970, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_635(&iLocal_980, "stand_spit", 5, 0);
	Function_635(&iLocal_980, "custom/stand_spit", 8, 0);
	Function_635(&iLocal_990, "dead_ground_male", 5, 0);
	Function_635(&iLocal_990, "custom/dead_ground_male", 8, 0);
	return;
}

void Function_668(int iParam0, bool bParam1) //Position: 0x1D6CE / 120526
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_675(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_327(&iParam0))
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
	if (!Function_327(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_674();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_236();
	Function_235();
	Function_273("");
	Function_673(0);
	Function_672();
	Function_204();
	Function_203();
	ENABLE_JOURNAL_REPLAY(0);
	Function_671();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_649(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_374(0, 0x40400000);
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
	Function_670(13);
	Function_670(14);
	Function_670(25);
	Function_670(24);
	Function_670(12);
	Function_670(27);
	Function_670(26);
	Function_670(15);
	Function_669();
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

void Function_669() //Position: 0x1DB0E / 121614
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

void Function_670(int iParam0) //Position: 0x1DB93 / 121747
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_671() //Position: 0x1DBB3 / 121779
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

void Function_672() //Position: 0x1DBF9 / 121849
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_673(int iParam0) //Position: 0x1DC0F / 121871
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_207())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_674() //Position: 0x1DC48 / 121928
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_675(int iParam0, int iParam1) //Position: 0x1DC51 / 121937
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
			Function_676(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_676(struct<113> Param0) //Position: 0x1DCD8 / 122072
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

bool Function_677(struct<25> Param0) //Position: 0x1DD36 / 122166
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
			Function_678(&Param0, 1);
			return 1;
		}
	}
	Function_678(&Param0, 0);
	return 0;
}

void Function_678(struct<25> Param0) //Position: 0x1DDC2 / 122306
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

bool Function_679(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1DDED / 122349
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
		Function_678(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_698(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_697(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_697(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_683(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_678(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_682(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_681(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_682(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_680(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_273(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_681(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_678(&Param2, 0);
	return 0;
}

void Function_680(char* cParam0) //Position: 0x1E203 / 123395
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

void Function_681(struct<25> Param0) //Position: 0x1E2F7 / 123639
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

void Function_682(bool bParam0) //Position: 0x1E36F / 123759
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_683(struct<57> Param0) //Position: 0x1E393 / 123795
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
			return Function_694(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_687(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_694(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_684(&Param0, bVar2);
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
						bVar2 = Function_694(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_684(&Param0, bVar2);
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

var Function_684(int iParam0, bool bParam1) //Position: 0x1E504 / 124164
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
				bParam1 = Function_686(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_685(16);
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
				bParam1 = Function_686(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_685(256);
			}
		}
	}
	return bParam1;
}

bool Function_685(int iParam0) //Position: 0x1E640 / 124480
{
	return 2 | iParam0;
}

int Function_686(int iParam0) //Position: 0x1E64A / 124490
{
	return 4 | iParam0;
}

int Function_687(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1E654 / 124500
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
				iParam3 = Function_693(&iParam0, &iParam1, bParam4);
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
			return Function_685(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_688(&iParam0, &iParam1, 0, bParam4);
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
			return Function_685(16);
		}
	}
	return 0;
}

int Function_688(int iParam0, vector3 vParam1) //Position: 0x1E70F / 124687
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_692(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_691(iVar0, 3, 1, bParam3))
			{
				if (!Function_697(&iParam0, 8, 1))
				{
					return Function_690(64, 1024, bParam2);
				}
			}
			return Function_689(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_691(iVar0, 2, 1, bParam3))
			{
				if (!Function_697(&iParam0, 32, 1))
				{
					return Function_690(64, 1024, bParam2);
				}
			}
			return Function_689(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_691(iVar0, 1, 1, bParam3))
			{
				if (!Function_697(&iParam0, 64, 1))
				{
					return Function_690(64, 1024, bParam2);
				}
			}
			return Function_689(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_691(iVar0, 3, 1, bParam3))
			{
				if (!Function_697(&iParam0, 128, 1))
				{
					return Function_690(64, 1024, bParam2);
				}
			}
			return Function_689(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_691(iVar0, 1, 1, bParam3))
			{
				if (!Function_697(&iParam0, 1024, 1))
				{
					return Function_690(64, 1024, bParam2);
				}
			}
			return Function_689(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_691(iVar0, 1, 1, bParam3))
			{
				if (!Function_697(&iParam0, 1024, 1))
				{
					return Function_690(64, 1024, bParam2);
				}
			}
			return Function_689(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_689(int iParam0, int iParam1, bool bParam2) //Position: 0x1E8D7 / 125143
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_690(int iParam0, int iParam1, bool bParam2) //Position: 0x1E8EC / 125164
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_691(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1E901 / 125185
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_692(int iParam0) //Position: 0x1E91E / 125214
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

int Function_693(var uParam0, vector3 vParam1) //Position: 0x1E991 / 125329
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_692(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_691(iVar0, 3, 1, bParam2))
			{
				if (!Function_697(&uParam0, 8, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000009:
			if (Function_691(iVar0, 3, 1, bParam2))
			{
				if (!Function_697(&uParam0, 8, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x0000006E:
			if (Function_691(iVar0, 2, 1, bParam2))
			{
				if (!Function_697(&uParam0, 16, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x0000005B:
			if (Function_691(iVar0, 2, 1, bParam2))
			{
				if (!Function_697(&uParam0, 32, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000031:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&uParam0, 64, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000007:
			if (Function_691(iVar0, 3, 1, bParam2))
			{
				if (!Function_697(&uParam0, 128, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000008:
			if (Function_691(iVar0, 2, 1, bParam2))
			{
				if (!Function_697(&uParam0, 256, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000014:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&uParam0, 512, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000018:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&uParam0, 512, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000057:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&uParam0, 1024, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000058:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&uParam0, 1024, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_694(struct<65> Param0) //Position: 0x1EBBA / 125882
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
						return Function_693(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_697(&Param0, 2, 1))
					{
						return Function_686(8);
					}
					return Function_685(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_697(&Param0, 4, 1))
					{
						return Function_686(16);
					}
					return Function_685(16);
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
							return Function_688(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_697(&Param0, 2, 1))
						{
							return Function_686(128);
						}
						return Function_685(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_697(&Param0, 4, 1))
						{
							return Function_686(256);
						}
						return Function_685(256);
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
						return Function_688(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_697(&Param0, 2, 1))
					{
						return Function_686(8);
					}
					return Function_685(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_697(&Param0, 4, 1))
					{
						return Function_686(16);
					}
					return Function_685(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_696(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_697(&Param0, 2, 1))
					{
						return Function_686(8);
					}
					return Function_685(8);
				}
				if (!Function_697(&Param0, 4, 1))
				{
					return Function_686(16);
				}
				return Function_685(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_688(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_695(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_685(128);
							}
							if (!Function_697(&Param0, 2, 1))
							{
								return Function_686(8);
							}
							return Function_685(8);
						}
						if (iParam4 == 2)
						{
							if (Function_695(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_685(256);
							}
							if (!Function_697(&Param0, 4, 1))
							{
								return Function_686(16);
							}
							return Function_685(16);
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

bool Function_695(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1EEA0 / 126624
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

int Function_696(int iParam0, vector3 vParam1) //Position: 0x1EF6E / 126830
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_692(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_691(iVar0, 2, 1, bParam2))
			{
				if (!Function_697(&iParam0, 16, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x0000005B:
			if (Function_691(iVar0, 2, 1, bParam2))
			{
				if (!Function_697(&iParam0, 32, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000057:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&iParam0, 1024, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		case 0x00000058:
			if (Function_691(iVar0, 1, 1, bParam2))
			{
				if (!Function_697(&iParam0, 1024, 1))
				{
					return Function_686(64);
				}
			}
			return Function_685(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_697(struct<69> Param0) //Position: 0x1F090 / 127120
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

int Function_698(int iParam0) //Position: 0x1F0BA / 127162
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

bool Function_699(bool bParam0) //Position: 0x1F0F0 / 127216
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_700(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1F10E / 127246
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

